/* /////////////////////////////////////////////////////////////////////////
 * File:        src/backends/bec.file.cpp
 *
 * Purpose:     Implementation for the file back-end.
 *
 * Created:     25th November 2006
 * Updated:     23rd March 2010
 *
 * Thanks to:   CookieRaver for filling in the (accidental) blanks in the
 *              UNIX implementation.
 *
 *              S2027 for spotting the exclusivity, and providing the fix.
 *
 *              sjdc (Daniel) for \r\n on Windows, and highlighting further
 *              problems with synchronisation.
 *
 *              Jonathan Wakely for detecting Solaris compilation bugs &
 *              fixes.
 *
 * Home:        http://www.pantheios.org/
 *
 * Copyright (c) 2006-2010, Matthew Wilson and Synesis Software
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 *   this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 * - Neither the name(s) of Matthew Wilson and Synesis Software nor the
 *   names of any contributors may be used to endorse or promote products
 *   derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 * IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * ////////////////////////////////////////////////////////////////////// */


/* Pantheios Header files */
#include <pantheios/pantheios.h>
#include <pantheios/internal/lean.h>
#include <pantheios/internal/nox.h>
#ifndef UNIXSTL_NO_ATOMIC_INTEGER_OPERATIONS_ON_WINDOWS
# define UNIXSTL_NO_ATOMIC_INTEGER_OPERATIONS_ON_WINDOWS
#endif /* !UNIXSTL_NO_ATOMIC_INTEGER_OPERATIONS_ON_WINDOWS */
#include <pantheios/internal/threading.h>
#define PANTHEIOS_BE_INIT_NO_CPP_STRUCT_INIT
#include <pantheios/backends/bec.file.h>

#include <pantheios/internal/safestr.h>
#include <pantheios/init_codes.h>
#include <pantheios/quality/contract.h>
#include <pantheios/util/core/apidefs.hpp>
#include <pantheios/util/backends/arguments.h>
#include <pantheios/util/backends/context.hpp>

/* STLSoft Header files */

/* Compiler warnings
 */

#if defined(STLSOFT_COMPILER_IS_MSVC) && \
    _MSC_VER >= 1300
# pragma warning(disable : 4702)
#endif /* compiler */

#include <pantheios/util/memory/auto_buffer_selector.hpp>

#include <stlsoft/conversion/char_conversions.hpp>
#include <stlsoft/conversion/integer_to_string.hpp>
#include <stlsoft/memory/auto_destructor.hpp>
#include <stlsoft/memory/malloc_allocator.hpp>
#include <stlsoft/synch/lock_scope.hpp>

#include <platformstl/platformstl.hpp>
#include <platformstl/synch/util/features.h>
#ifdef PLATFORMSTL_HAS_ATOMIC_INTEGER_OPERATIONS
# include <platformstl/synch/spin_mutex.hpp>
#endif /* PLATFORMSTL_HAS_ATOMIC_INTEGER_OPERATIONS */
#ifdef PANTHEIOS_MT
# include <platformstl/synch/thread_mutex.hpp>
#else /* ? PANTHEIOS_MT */
# include <stlsoft/synch/null_mutex.hpp>
#endif /* PANTHEIOS_MT */

/* Standard C++ Header files */

#include <list>
#include <map>
#include <new>
#include <string>
#include <utility>

/* Standard C Header files */

#include <stdio.h>
#if defined(PLATFORMSTL_OS_IS_UNIX)
# include <fcntl.h>
# include <unistd.h>
# include <sys/stat.h>
# if (  defined(_WIN32) || \
        defined(_WIN64)) && \
     defined(_MSC_VER)
#  include <io.h>
#  define close     _close
#  if defined(_WIN32) && \
      defined(_MSC_VER) && \
      defined(PANTHEIOS_USING_SAFE_STR_FUNCTIONS)
    namespace
    {
#   pragma warning(push)
#   pragma warning(disable : 4996)
        static int open_original_(const char *filename, int oflag, int pmode)
        {
            return ::_open(filename, oflag, pmode);
        }
#   pragma warning(pop)
    } /* anonymous namespace */
#   define open     open_original_
#  else /* ? PANTHEIOS_USING_SAFE_STR_FUNCTIONS */
#   define open     _open
#  endif /* PANTHEIOS_USING_SAFE_STR_FUNCTIONS */
#  define write     _write
#  define ssize_t   long
#  define S_IRWXU   (0)
#  define S_IRWXG   (0)
# endif /* _WIN32 && _MSC_VER */
#endif /* OS */

/* /////////////////////////////////////////////////////////////////////////
 * Namespace
 */

namespace
{

#if !defined(PANTHEIOS_NO_NAMESPACE)

    using ::pantheios::pan_uint32_t;
    using ::pantheios::pan_char_t;
    using ::pantheios::pan_slice_t;
    using ::pantheios::util::backends::Context;
    using ::pantheios::util::pantheios_onBailOut3;
    using ::pantheios::util::pantheios_onBailOut4;

#endif /* !PANTHEIOS_NO_NAMESPACE */

    template <ss_typename_param_k T>
    struct buffer_selector_
    {
        typedef ss_typename_type_k
#if !defined(PANTHEIOS_NO_NAMESPACE)
            pantheios::util::auto_buffer_selector<
#else /* ? !PANTHEIOS_NO_NAMESPACE */
            auto_buffer_selector<
#endif /* !PANTHEIOS_NO_NAMESPACE */
            T
        ,   2048
        ,   stlsoft::malloc_allocator<T>
        >::type                                 type;
    };

    typedef buffer_selector_<char>::type        buffer_a_t;
    typedef buffer_selector_<wchar_t>::type     buffer_w_t;
    typedef buffer_selector_<pan_char_t>::type  buffer_t;

} // anonymous namespace

/* /////////////////////////////////////////////////////////////////////////
 * Typedefs
 */

class be_file_Context
    : public Context
{
/// \name Member Types
/// @{
private:
    typedef Context                             parent_class_type;
#ifdef PANTHEIOS_MT
    typedef platformstl::thread_mutex           mutex_type;
#else /* ? PANTHEIOS_MT */
    typedef stlsoft::null_mutex                 mutex_type;
#endif /* PANTHEIOS_MT */
public:
#if defined(PLATFORMSTL_OS_IS_UNIX)
    typedef int                                 file_handle_type;
#elif defined(PLATFORMSTL_OS_IS_WINDOWS)
    typedef HANDLE                              file_handle_type;
#else /* ? OS */
# error Operating system not discriminated
#endif /* OS */
private:
    typedef std::basic_string<pan_char_t>       string_type;
    typedef std::list<string_type>              strings_type;
/// @}

/// \name Member constants
/// @{
public:
    static const file_handle_type               FileErrorValue;

    enum
    {
        severityMask        =   0x0f
    };
    enum
    {
        defaultInitFlags    =   0
    };
/// @}

/// \name Construction
/// @{
public:
    be_file_Context(
        pan_char_t const*           processIdentity
    ,   int                         backEndId
    ,   pan_be_file_init_t const&   init
    );
    ~be_file_Context() throw();
/// @}

/// \name Operations
/// @{
public:
    int SetFileName(
        pan_char_t const*   fileName
    ,   pan_uint32_t        fileMask
    ,   pan_uint32_t        fileFlags
    );
/// @}

/// \name Overrides
/// @{
private:
    virtual int rawLogEntry(
        int                 severity4
    ,   int                 severityX
    ,   const pan_slice_t (&ar)[rawLogArrayDimension]
    ,   size_t              cchTotal
    );
    virtual int rawLogEntry(
        int                 severity4
    ,   int                 severityX
    ,   pan_char_t const*   entry
    ,   size_t              cchEntry
    );
/// @}

/// \name Implementation
/// @{
private:
    void    WriteAllPendingEntries();
    void    ClearAllPendingEntries();
    int     Open(
        pan_char_t const*   fileName
    ,   pan_uint32_t        fileMask
    ,   pan_uint32_t        fileFlags
    );
    void    Close() throw();
    int     WriteEntry(
        pan_char_t const*   entry
    ,   size_t              cchEntry
    );
    int     OutputEntry(
        pan_char_t const*   entry
    ,   size_t              cchEntry
    );
    int     OutputMultibyteEntry(
        pan_char_t const*   entry
    ,   size_t              cchEntry
    );
    int     OutputWideEntry(
        pan_char_t const*   entry
    ,   size_t              cchEntry
    );
    int     OutputBytes(
        void const*         pv
    ,   size_t              cb
    );
/// @}

/// \name Members
/// @{
private:
    file_handle_type    m_hFile;
    mutex_type          m_mx;
    strings_type        m_lines;
//  pan_uint32_t        m_numEntries;
//  pan_uint32_t        m_totalEntries;
/// @}
};

class be_file_ContextMap
{
private:
    typedef std::map<int, be_file_Context*> entries_type;

public:
    int     SetFileName(
        pan_char_t const*   fileName
    ,   pan_uint32_t        fileMask
    ,   pan_uint32_t        fileFlags
    ,   int                 backEndId
    );
    int     Add(int backEndId, be_file_Context* ctxt);
    void    Remove(int backEndId);

private:
    entries_type    m_entries;
};

/* /////////////////////////////////////////////////////////////////////////
 * Constants
 */

#if defined(PLATFORMSTL_OS_IS_UNIX)
/* static */ const be_file_Context::file_handle_type    be_file_Context::FileErrorValue  =   -1;
#elif defined(PLATFORMSTL_OS_IS_WINDOWS)
/* static */ const be_file_Context::file_handle_type    be_file_Context::FileErrorValue  =   INVALID_HANDLE_VALUE;
#else /* ? OS */
# error Operating system not discriminated
#endif /* OS */

/* /////////////////////////////////////////////////////////////////////////
 * Globals
 */

namespace
{
    // Global variables.

#ifdef PLATFORMSTL_HAS_ATOMIC_INTEGER_OPERATIONS
    typedef platformstl::spin_mutex                 api_mutex_t;

    static platformstl::spin_mutex::atomic_int_type s_mxc       =   0;
#else /* ? PLATFORMSTL_HAS_ATOMIC_INTEGER_OPERATIONS */
# ifdef PANTHEIOS_MT
    typedef platformstl::thread_mutex               api_mutex_t;
# else /* ? PANTHEIOS_MT */
    typedef stlsoft::null_mutex                     api_mutex_t;
# endif /* PANTHEIOS_MT */

    // Pair to return result from be_file_get_mutex_instance(). Has
    // to be a special class and a pointer (rather than a reference)
    // because some compilers are cleverer than others ...
    struct api_mutex_result_pair
    {
    public:
        api_mutex_result_pair(api_mutex_t* instance, int code)
            : instance(instance)
            , code(code)
        {}

    public:
        api_mutex_t* const  instance;
        int const           code;
    };

    // We cannot use a non-local of the thread mutex instance here, because
    // we cannot be guaranteed that it will be initialised prior to the API
    // initialisation which is (usually) a consequence of the
    // initialisation Schwarz counter instances in the dynamic
    // initialisation phase of the program.
    //
    // Instead, we use a Meyers Singleton that is (persuaded to be)
    // thread-safe, in combination with a thread mutex reference that will
    // masquerade as the non-local instance we wanted.

    api_mutex_result_pair be_file_get_mutex_instance()
    {
        // This function constitutes a Meyers Singleton, which is not
        // thread-safe. However, on any compiler imaginable, it is
        // thread-safe for any invocation that occurs after the first
        // invocation has returned. See Chapters 11 & 12 of Imperfect C++
        // (http://imperfectcplusplus.com/) for the full discussion. It is
        // safe to use here because:
        //  - we invoke it inside pantheios_be_file_init()
        //  - back-end initialisation takes place inside core
        //    initialisation
        //  - Pantheios' published usage requires that the first invocation
        //    of pantheios_fe_init() be serialised by user (usually by
        //    allowing initialisation to be completed by program
        //    initialisation prior to main(), as a consequence of the
        //    Schwarz counters used in pantheios/initialiser.hpp, which is
        //    #include-d by pantheios/pantheios.hpp, unless surpressed by
        //    a command-line option).
        //
        // It returns a pair to facilitate NoX compilation. NoX mode
        // shouldn't be used (or relied upon) for any serious development,
        // unless you *really* know what you're doing.

        static api_mutex_t  s_mx;

# ifdef PANTHEIOS_MT
        return api_mutex_result_pair(&s_mx, s_mx.get_error());
# else /* ? PANTHEIOS_MT */
        return api_mutex_result_pair(&s_mx, 0);
# endif /* PANTHEIOS_MT */
    }

    static api_mutex_t*                             s_pmx       =   be_file_get_mutex_instance().instance;
#endif /* PLATFORMSTL_HAS_ATOMIC_INTEGER_OPERATIONS */

    // Reference count of the context map
    static stlsoft::sint32_t                        s_rc        =   0;
    static be_file_ContextMap*                      s_ctxtMap   =   NULL;

    static int be_file_ContextMap_AddRef()
    {
        if(1 == ++s_rc)
        {
            PANTHEIOS_CONTRACT_ENFORCE_ASSUMPTION(NULL == s_ctxtMap);

            s_ctxtMap = new be_file_ContextMap();

#ifndef STLSOFT_CF_THROW_BAD_ALLOC
            if(NULL == s_ctxtMap)
            {
                return PANTHEIOS_INIT_RC_OUT_OF_MEMORY;
            }
#endif /* !STLSOFT_CF_THROW_BAD_ALLOC */
        }
        else
        {
            PANTHEIOS_CONTRACT_ENFORCE_ASSUMPTION(NULL != s_ctxtMap);
        }

        return 0;
    }

    static void be_file_ContextMap_Release()
    {
        if(0 == --s_rc)
        {
            delete s_ctxtMap;
            s_ctxtMap = NULL;
        }
    }

} // anonymous namespace

/* /////////////////////////////////////////////////////////////////////////
 * API
 */

PANTHEIOS_CALL(void) pantheios_be_file_getDefaultAppInit(pan_be_file_init_t* init) /* throw() */
{
    PANTHEIOS_CONTRACT_ENFORCE_PRECONDITION_PARAMS_API(NULL != init, "initialisation structure pointer may not be null");

    init->version   =   PANTHEIOS_VER;
    init->flags     =   be_file_Context::defaultInitFlags;
    init->fileName  =   NULL;
    init->buff[0]   =   '\0';
}

static int pantheios_be_file_init_(
    pan_char_t const*           processIdentity
,   int                         backEndId
,   pan_be_file_init_t const*   init
,   void*                       reserved
,   void**                      ptoken
)
{
    STLSOFT_SUPPRESS_UNUSED(reserved);

    PANTHEIOS_CONTRACT_ENFORCE_PRECONDITION_PARAMS_API(NULL != ptoken, "token pointer may not be null");

#ifndef PLATFORMSTL_HAS_ATOMIC_INTEGER_OPERATIONS
    // Pre-initialise the mutex for platforms not supporting atomic
    // integer operations.
    if(0 != be_file_get_mutex_instance().code)
    {
# ifndef PANTHEIOS_INCL_PANTHEIOS_H_PANTHEIOS
        pantheios_onBailOut3(PANTHEIOS_SEV_ALERT, "Failed to initialise the API mutex for be.file", NULL);
# endif /* !PANTHEIOS_INCL_PANTHEIOS_H_PANTHEIOS */

        return PANTHEIOS_BE_INIT_RC_API_MUTEX_INIT_FAILED;
    }
    else
    {
        if(NULL == s_pmx)
        {
            s_pmx = be_file_get_mutex_instance().instance;
        }
        else
        {
            PANTHEIOS_CONTRACT_ENFORCE_ASSUMPTION(s_pmx == be_file_get_mutex_instance().instance);
        }
    }
#endif /* !PLATFORMSTL_HAS_ATOMIC_INTEGER_OPERATIONS */

    /* (i) apply Null Object (Variable) pattern */

    pan_be_file_init_t init_;

    if(NULL == init)
    {
        pantheios_be_file_getDefaultAppInit(&init_);

        init = &init_;

#ifdef PANTHEIOS_BE_USE_CALLBACK
        pantheios_be_file_getAppInit(backEndId, &init_);
#endif /* PANTHEIOS_BE_USE_CALLBACK */
    }

    /* (ii) verify the version */

    if(init->version < 0x010001b8)
    {
        return PANTHEIOS_BE_INIT_RC_OLD_VERSION_NOT_SUPPORTED;
    }
    else if(init->version > PANTHEIOS_VER)
    {
        return PANTHEIOS_BE_INIT_RC_FUTURE_VERSION_REQUESTED;
    }

    /* (iii) create the context */
    //
    // This is placed in an auto_destructor because there's the possibility
    // that we may have to discard a correctly initialised context if the
    // map cannot be created, or the context instance cannot be registered
    // in the map.

    stlsoft::auto_destructor<be_file_Context>   ctxt(new be_file_Context(processIdentity, backEndId, *init));

#ifndef STLSOFT_CF_THROW_BAD_ALLOC
    if( NULL == ctxt.get() ||
        NULL == ctxt->getProcessIdentity())
    {
        return PANTHEIOS_INIT_RC_OUT_OF_MEMORY;
    }
#endif /* !STLSOFT_CF_THROW_BAD_ALLOC */

    if(NULL != init->fileName)
    {
        int r = ctxt->SetFileName(init->fileName, ~static_cast<pan_uint32_t>(0), init->flags);

        if(0 != r)
        {
            return r;
        }
    }

    // Initialise the context map

    { // lock scope
#ifdef PLATFORMSTL_HAS_ATOMIC_INTEGER_OPERATIONS
        platformstl::spin_mutex                         mx(&s_mxc, false);
#else /* ? PLATFORMSTL_HAS_ATOMIC_INTEGER_OPERATIONS */
        static api_mutex_t&                             mx = *s_pmx;
#endif /* PLATFORMSTL_HAS_ATOMIC_INTEGER_OPERATIONS */
        stlsoft::lock_scope<api_mutex_t>                lock(mx);

        int r = be_file_ContextMap_AddRef();

        if(0 != r)
        {
            return r;
        }
        else
        {
            r = s_ctxtMap->Add(backEndId, ctxt.get());

            if(0 != r)
            {
                be_file_ContextMap_Release();

                return r;
            }
        }
    }

    *ptoken = ctxt.detach();

    return 0;
}

PANTHEIOS_CALL(int) pantheios_be_file_init( 
    pan_char_t const*           processIdentity
,   int                         backEndId
,   pan_be_file_init_t const*   init
,   void*                       reserved
,   void**                      ptoken
)
{
    return pantheios_call_be_X_init<pan_be_file_init_t>(pantheios_be_file_init_, processIdentity, backEndId, init, reserved, ptoken);
}

PANTHEIOS_CALL(void) pantheios_be_file_uninit(void* token)
{
    PANTHEIOS_CONTRACT_ENFORCE_PRECONDITION_PARAMS_API(NULL != token, "token must be non-null");

    be_file_Context* ctxt = static_cast<be_file_Context*>(token);

    // Remove context from the map, and uninitialise the map
    {
#ifdef PLATFORMSTL_HAS_ATOMIC_INTEGER_OPERATIONS
        platformstl::spin_mutex                         mx(&s_mxc, false);
#else /* ? PLATFORMSTL_HAS_ATOMIC_INTEGER_OPERATIONS */
        static api_mutex_t&                             mx = *s_pmx;
#endif /* PLATFORMSTL_HAS_ATOMIC_INTEGER_OPERATIONS */
        stlsoft::lock_scope<api_mutex_t>                lock(mx);

        PANTHEIOS_CONTRACT_ENFORCE_ASSUMPTION(NULL != s_ctxtMap);

        s_ctxtMap->Remove(ctxt->getBackEndId());

        be_file_ContextMap_Release();
    }

    delete ctxt;
}

static int pantheios_be_file_logEntry_(
    void*               feToken
,   void*               beToken
,   int                 severity
,   pan_char_t const*   entry
,   size_t              cchEntry
)
{
    STLSOFT_SUPPRESS_UNUSED(feToken);

    PANTHEIOS_CONTRACT_ENFORCE_PRECONDITION_PARAMS_API(NULL != beToken, "back-end token must be non-null");

    // NOTE: There is no locking performed here, because
    // locking is done at the last possible moment in
    // be_file_Context::rawLogEntry(). See the documentation
    // for Context::logEntry() for further details.

    Context* ctxt = static_cast<Context*>(beToken);

    return ctxt->logEntry(severity, entry, cchEntry);
}

PANTHEIOS_CALL(int) pantheios_be_file_logEntry(
    void*               feToken
,   void*               beToken
,   int                 severity
,   pan_char_t const*   entry
,   size_t              cchEntry
)
{
    return pantheios_call_be_logEntry(pantheios_be_file_logEntry_, feToken, beToken, severity, entry, cchEntry);
}

PANTHEIOS_CALL(int) pantheios_be_file_setFilePath(
    pan_char_t const*   fileName
,   pan_uint32_t        fileMask
,   pan_uint32_t        fileFlags
,   int                 backEndId
)
{
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    try
    {
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */

#ifdef PLATFORMSTL_HAS_ATOMIC_INTEGER_OPERATIONS
        platformstl::spin_mutex                         mx(&s_mxc, false);
#else /* ? PLATFORMSTL_HAS_ATOMIC_INTEGER_OPERATIONS */
        static api_mutex_t&                             mx = *s_pmx;
#endif /* PLATFORMSTL_HAS_ATOMIC_INTEGER_OPERATIONS */
        stlsoft::lock_scope<api_mutex_t>                lock(mx);

        if(0 == s_rc)
        {
            return -1;
        }
        else
        {
            return s_ctxtMap->SetFileName(fileName, fileMask, fileFlags, backEndId);
        }

#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    }
    catch(std::bad_alloc&)
    {
        return PANTHEIOS_INIT_RC_OUT_OF_MEMORY;
    }
    catch(std::exception&)
    {
        return PANTHEIOS_INIT_RC_UNSPECIFIED_EXCEPTION;
    }
    catch(...)
    {
        return PANTHEIOS_INIT_RC_UNKNOWN_ERROR;
    }
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */
}

PANTHEIOS_CALL(int) pantheios_be_file_parseArgs(
    size_t              numArgs
,   pan_slice_t* const  args
,   pan_be_file_init_t* init
)
{
    PANTHEIOS_CONTRACT_ENFORCE_PRECONDITION_PARAMS_API((NULL != args || 0 == numArgs), "argument pointer must be non-null, or number of arguments must be 0");
    PANTHEIOS_CONTRACT_ENFORCE_PRECONDITION_PARAMS_API(NULL != init, "initialisation structure pointer may not be null");

    pantheios_be_file_getDefaultAppInit(init);

    // 1. Parse the stock arguments
    int res = pantheios_be_parseStockArgs(numArgs, args, &init->flags);

    if(res >= 0)
    {
        // 2.a Parse the custom argument: "fileName"
        pan_slice_t fileName;

        res = pantheios_be_parseStringArg(numArgs, args, PANTHEIOS_LITERAL_STRING("fileName"), &fileName);

        if(res >= 0)
        {
            if(fileName.len >= STLSOFT_NUM_ELEMENTS(init->buff))
            {
                pantheios_onBailOut3(PANTHEIOS_SEV_CRITICAL, "be.file initialisation failed: 'fileName' argument value too long; must be <= " PANTHEIOS_STRINGIZE(PANTHEIOS_BE_FILE_MAX_FILE_LEN) " characters", NULL);

                res = -1;
            }
            else
            {
                ::memcpy(&init->buff[0], fileName.ptr, sizeof(pan_char_t) * fileName.len);
                init->buff[fileName.len] = '\0';
                init->fileName = &init->buff[0];
            }
        }

        if(res >= 0)
        {
            // 2.b Parse the custom argument: "truncate"
            res = pantheios_be_parseBooleanArg(numArgs, args, PANTHEIOS_LITERAL_STRING("truncate"), false, PANTHEIOS_BE_FILE_F_TRUNCATE, &init->flags);
        }

        if(res >= 0)
        {
            // 2.c Parse the custom argument: "discardCachedContents"
            res = pantheios_be_parseBooleanArg(numArgs, args, PANTHEIOS_LITERAL_STRING("discardCachedContents"), false, PANTHEIOS_BE_FILE_F_DISCARD_CACHED_CONTENTS, &init->flags);
        }

        if(res >= 0)
        {
            // 2.b Parse the custom argument: "writeWideContents"
            res = pantheios_be_parseBooleanArg(numArgs, args, PANTHEIOS_LITERAL_STRING("writeWideContents"), false, PANTHEIOS_BE_FILE_F_WRITE_WIDE_CONTENTS, &init->flags);
        }

        if(res >= 0)
        {
            // 2.b Parse the custom argument: "writeMultibyteContents"
            res = pantheios_be_parseBooleanArg(numArgs, args, PANTHEIOS_LITERAL_STRING("writeMultibyteContents"), false, PANTHEIOS_BE_FILE_F_WRITE_MULTIBYTE_CONTENTS, &init->flags);
        }
    }

    return res;
}

/* /////////////////////////////////////////////////////////////////////////
 * be_file_Context
 */

be_file_Context::be_file_Context(
    pan_char_t const*           processIdentity
,   int                         backEndId
,   pan_be_file_init_t const&   init
)
    : parent_class_type(processIdentity, backEndId, init.flags, be_file_Context::severityMask)
    , m_hFile(FileErrorValue)
    , m_lines()
//  , m_numEntries(0)
//  , m_totalEntries(0)
{}

be_file_Context::~be_file_Context() throw()
{
    Close();
}

void be_file_Context::Close() throw()
{
    if(FileErrorValue != m_hFile)
    {
        PANTHEIOS_CONTRACT_ENFORCE_PRECONDITION_STATE_INTERNAL(m_lines.empty(), "an open file cannot have any cached lines when it is closed");

        // platformstl::filesystem_traits<pan_char_t>::close_file(m_hFile);

#if defined(PLATFORMSTL_OS_IS_UNIX)
        ::close(m_hFile);
#elif defined(PLATFORMSTL_OS_IS_WINDOWS)
        ::CloseHandle(m_hFile);
#else /* ? OS */
# error Operating system not discriminated
#endif /* OS */

        m_hFile = FileErrorValue;
    }
}

int be_file_Context::SetFileName(
    pan_char_t const*   fileName
,   pan_uint32_t        fileMask
,   pan_uint32_t        fileFlags
)
{
    stlsoft::lock_scope<mutex_type> lock(m_mx);

    Close();

    if(NULL == fileName)
    {
        return 0;
    }
    else
    {
        int r = Open(fileName, fileMask, fileFlags);

        if(0 == r)
        {
            pan_uint32_t effectiveFlags = (m_flags & ~(fileMask)) | (fileFlags & fileMask);

            if(0 == (PANTHEIOS_BE_FILE_F_DISCARD_CACHED_CONTENTS & effectiveFlags))
            {
                WriteAllPendingEntries();
            }

            ClearAllPendingEntries();
        }

        return r;
    }
}

void be_file_Context::WriteAllPendingEntries()
{
    PANTHEIOS_CONTRACT_ENFORCE_PRECONDITION_PARAMS_INTERNAL(FileErrorValue != m_hFile, "cannot write all pending entries when the file is not open");

    // TODO: rewrite this to pop items off, so that can be freed while the
    // OS is busy with writing out the line

    // TODO: Consider doing the writing in batches, so that other threads
    // are not impeded completely when the path name is set

    { for(strings_type::const_iterator b = m_lines.begin(), e = m_lines.end(); b != e; ++b)
    {
        OutputEntry((*b).data(), (*b).size());
    }}
}

void be_file_Context::ClearAllPendingEntries()
{
    m_lines.erase(m_lines.begin(), m_lines.end());
}

int be_file_Context::Open(
    pan_char_t const*   fileName
,   pan_uint32_t        fileMask
,   pan_uint32_t        fileFlags
)
{
    // Precondition testing

    PANTHEIOS_CONTRACT_ENFORCE_PRECONDITION_PARAMS_API(NULL != fileName, "the file name cannot be the null string");

    pan_uint32_t effectiveFlags = (m_flags & ~(fileMask)) | (fileFlags & fileMask);

    if(FileErrorValue == m_hFile)
    {
#if defined(PLATFORMSTL_OS_IS_UNIX)

        int flags   =   O_CREAT | O_WRONLY;

        if(PANTHEIOS_BE_FILE_F_TRUNCATE == (effectiveFlags & PANTHEIOS_BE_FILE_F_TRUNCATE))
        {
            flags |= O_TRUNC;
        }
        else
        {
            flags |= O_APPEND;
        }

        m_hFile = ::open(fileName, flags, S_IRWXU | S_IRWXG);

#elif defined(PLATFORMSTL_OS_IS_WINDOWS)

        DWORD   creationDisposition;
        DWORD   shareMode           =   FILE_SHARE_READ;
        DWORD   flagsAndAttributes  =   FILE_ATTRIBUTE_NORMAL;

        if(PANTHEIOS_BE_FILE_F_SHARE_ON_WINDOWS == (effectiveFlags & PANTHEIOS_BE_FILE_F_SHARE_ON_WINDOWS))
        {
             shareMode |= FILE_SHARE_WRITE;
        }

        if(PANTHEIOS_BE_FILE_F_TRUNCATE == (effectiveFlags & PANTHEIOS_BE_FILE_F_TRUNCATE))
        {
            creationDisposition = CREATE_ALWAYS;
        }
        else
        {
            creationDisposition = OPEN_ALWAYS;
        }

        m_hFile = ::CreateFile(fileName, GENERIC_WRITE, shareMode, NULL, creationDisposition, flagsAndAttributes, NULL);

        if(INVALID_HANDLE_VALUE != m_hFile)
        {
            ::SetFilePointer(m_hFile, 0, NULL, FILE_END);
        }
        else
        {
            switch(::GetLastError())
            {
                default:
                case    ERROR_TOO_MANY_OPEN_FILES:
                    return PANTHEIOS_INIT_RC_UNSPECIFIED_ERROR;
                case    ERROR_FILE_NOT_FOUND:
                case    ERROR_PATH_NOT_FOUND:
                    return PANTHEIOS_BE_INIT_RC_INVALID_ARGUMENT;
                case    ERROR_ACCESS_DENIED:
                    return PANTHEIOS_BE_INIT_RC_PERMISSION_DENIED;
                case    ERROR_SHARING_VIOLATION:
                    return PANTHEIOS_BE_INIT_RC_RESOURCE_BUSY;
            }
        }
#else /* ? OS */
# error Operating system not discriminated
#endif /* OS */
    }

    return (FileErrorValue == m_hFile) ? PANTHEIOS_BE_INIT_RC_INVALID_ARGUMENT : PANTHEIOS_INIT_RC_SUCCESS;
}

int be_file_Context::rawLogEntry(int /* severity4 */, int /* severityX */, const pan_slice_t (&ar)[be_file_Context::rawLogArrayDimension], size_t cchTotal)
{
    // Allocate the buffer

    buffer_t buff(cchTotal + 2);

#ifndef STLSOFT_CF_THROW_BAD_ALLOC
    if(0 == buff.size())
    {
        return PANTHEIOS_INIT_RC_OUT_OF_MEMORY;
    }
    else
#endif /* !STLSOFT_CF_THROW_BAD_ALLOC */
    {
        size_t nWritten = concatenateSlices(&buff[0], buff.size(), rawLogArrayDimension, &ar[0]);

        PANTHEIOS_CONTRACT_ENFORCE_POSTCONDITION_RETURN_INTERNAL(nWritten == cchTotal, "Written length differs from allocated length");

#if defined(PLATFORMSTL_OS_IS_WINDOWS)
        buff[nWritten++] = '\r';
#endif /* OS */
        buff[nWritten++] = '\n';

#if defined(PLATFORMSTL_OS_IS_WINDOWS)
        PANTHEIOS_CONTRACT_ENFORCE_ASSUMPTION(nWritten == buff.size());
#else /* ? OS */
        PANTHEIOS_CONTRACT_ENFORCE_ASSUMPTION(nWritten + 1 == buff.size());
#endif /* OS */

        // Locks inside here. Don't need it earlier.

        return this->WriteEntry(buff.data(), nWritten);
    }
}

int be_file_Context::rawLogEntry(
    int                 /* severity4 */
,   int                 /* severityX */
,   pan_char_t const*   entry
,   size_t              cchEntry
)
{
    buffer_t buff(3 + cchEntry);

#ifndef STLSOFT_CF_THROW_BAD_ALLOC
    if(0 == buff.size())
    {
        return PANTHEIOS_INIT_RC_OUT_OF_MEMORY;
    }
#endif /* !STLSOFT_CF_THROW_BAD_ALLOC */

    ::memcpy(&buff[0], entry, cchEntry * sizeof(pan_char_t));

    pan_char_t* p = &cchEntry[buff.data()];

#if defined(PLATFORMSTL_OS_IS_WINDOWS)
    *p++ = '\r';
#endif /* OS */
    *p++ = '\n';

    size_t const n = static_cast<size_t>(p - buff.data());

    return this->WriteEntry(buff.data(), n);
}

int be_file_Context::WriteEntry(
    pan_char_t const*   entry
,   size_t              cchEntry
)
{
    stlsoft::lock_scope<mutex_type> lock(m_mx);

    if(FileErrorValue == m_hFile)
    {
        m_lines.push_back(string_type(entry, cchEntry));

        return 0;
    }
    else
    {
        PANTHEIOS_CONTRACT_ENFORCE_PRECONDITION_STATE_INTERNAL(m_lines.empty(), "an open file cannot have any cached lines when it is written to");

        return OutputEntry(entry, cchEntry);
    }
}

int be_file_Context::OutputEntry(
    pan_char_t const*   entry
,   size_t              cchEntry
)
{
    if(PANTHEIOS_BE_FILE_F_WRITE_WIDE_CONTENTS & m_flags)
    {
        return OutputWideEntry(entry, cchEntry);
    }
    else if(PANTHEIOS_BE_FILE_F_WRITE_MULTIBYTE_CONTENTS & m_flags)
    {
        return OutputMultibyteEntry(entry, cchEntry);
    }
    else
    {
#ifdef PANTHEIOS_USE_WIDE_STRINGS
        return OutputWideEntry(entry, cchEntry);
#else /* ? PANTHEIOS_USE_WIDE_STRINGS */
        return OutputMultibyteEntry(entry, cchEntry);
#endif /* PANTHEIOS_USE_WIDE_STRINGS */
    }
}

int be_file_Context::OutputMultibyteEntry(
    pan_char_t const*   entry
,   size_t              cchEntry
)
{
#ifdef PANTHEIOS_USE_WIDE_STRINGS
    stlsoft::w2m converted(entry, cchEntry);

    if(0u == converted.size())
    {
        return PANTHEIOS_INIT_RC_OUT_OF_MEMORY;
    }
    else
    {
        return OutputBytes(converted.data(), (converted.size() - 1u)* sizeof(char));
    }
#else /* ? PANTHEIOS_USE_WIDE_STRINGS */
    STLSOFT_STATIC_ASSERT(sizeof(char) == sizeof(pan_char_t));

    return OutputBytes(entry, cchEntry * sizeof(pan_char_t));
#endif /* PANTHEIOS_USE_WIDE_STRINGS */
}

int be_file_Context::OutputWideEntry(
    pan_char_t const*   entry
,   size_t              cchEntry
)
{
#ifdef PANTHEIOS_USE_WIDE_STRINGS
    STLSOFT_STATIC_ASSERT(sizeof(wchar_t) == sizeof(pan_char_t));

    return OutputBytes(entry, cchEntry * sizeof(pan_char_t));
#else /* ? PANTHEIOS_USE_WIDE_STRINGS */
    stlsoft::m2w converted(entry, cchEntry);

    if(0u == converted.size())
    {
        return PANTHEIOS_INIT_RC_OUT_OF_MEMORY;
    }
    else
    {
        return OutputBytes(converted.data(), (converted.size() - 1u) * sizeof(wchar_t));
    }
#endif /* PANTHEIOS_USE_WIDE_STRINGS */
}

int be_file_Context::OutputBytes(
    void const* pv
,   size_t      cb
)
{
#if defined(PLATFORMSTL_OS_IS_UNIX)
    ssize_t numWritten = ::write(m_hFile, pv, cb);
    if(FileErrorValue == numWritten)
    {
        numWritten = 0;
    }
#elif defined(PLATFORMSTL_OS_IS_WINDOWS)
    DWORD       numWritten;
    OVERLAPPED  ol;

    ol.hEvent       =   NULL;
    ol.Offset       =   0xFFFFFFFF;
    ol.OffsetHigh   =   0xFFFFFFFF;

    if(!::WriteFile(m_hFile, pv, static_cast<DWORD>(cb), &numWritten, &ol))
    {
        numWritten = 0;
    }
#else /* ? OS */
# error Operating system not discriminated
#endif /* OS */

    return int(numWritten);
}

/* /////////////////////////////////////////////////////////////////////////
 * be_file_ContextMap
 */

int be_file_ContextMap::SetFileName(
    pan_char_t const*   fileName
,   pan_uint32_t        fileMask
,   pan_uint32_t        fileFlags
,   int                 backEndId
)
{
    if(PANTHEIOS_BEID_ALL == backEndId)
    {
        int r = 0;

        { for(entries_type::iterator b = m_entries.begin(), e = m_entries.end(); b != e; ++b)
        {
            int r2 = (*b).second->SetFileName(fileName, fileMask, fileFlags);

            if(0 != r2)
            {
                char beid[21];

                pantheios_onBailOut4(PANTHEIOS_SEV_CRITICAL, "failed to set file for back-end", NULL, stlsoft::integer_to_string(beid, STLSOFT_NUM_ELEMENTS(beid), (*b).first));

                r = r2;

                break;
            }
        }}

        return r;
    }
    else
    {
        entries_type::iterator it = m_entries.find(backEndId);

        if(it == m_entries.end())
        {
            return -1;
        }
        else
        {
            be_file_Context* ctxt = (*it).second;

            return ctxt->SetFileName(fileName, fileMask, fileFlags);
        }
    }
}

int be_file_ContextMap::Add(int backEndId, be_file_Context* ctxt)
{
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    try
    {
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */

        m_entries.insert(std::make_pair(backEndId, ctxt));

#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    }
    catch(std::bad_alloc&)
    {
        return PANTHEIOS_INIT_RC_OUT_OF_MEMORY;
    }
    catch(std::exception&)
    {
        return PANTHEIOS_INIT_RC_UNSPECIFIED_EXCEPTION;
    }
    catch(...)
    {
        return PANTHEIOS_INIT_RC_UNKNOWN_ERROR;
    }
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */

    return 0;
}

void be_file_ContextMap::Remove(int backEndId)
{
    m_entries.erase(backEndId);
}

/* ///////////////////////////// end of file //////////////////////////// */
