/* /////////////////////////////////////////////////////////////////////////
 * File:        src/util/bailout.c
 *
 * Purpose:     Implementation file for low-level Pantheios bail out.
 *
 * Created:     21st June 2005
 * Updated:     8th May 2009
 *
 * Home:        http://www.pantheios.org/
 *
 * Copyright (c) 2005-2009, Matthew Wilson and Synesis Software
 * Copyright (c) 1999-2005, Synesis Software and Matthew Wilson
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


/* Pantheios header files
 *
 * NOTE: We do _not_ include pantheios/pantheios.hpp here, since we are
 *  not using any of the Application Layer.
 */
#include <pantheios/pantheios.h>
#include <pantheios/internal/lean.h>
#include <pantheios/backend.h>
#include <pantheios/frontend.h>

#include <pantheios/init_codes.h>
#include <pantheios/quality/contract.h>
#include <pantheios/internal/safestr.h>

/* STLSoft header files */

#include <stlsoft/stlsoft.h>
#ifdef PANTHEIOS_BAILOUT_NO_OPERATING_SYSTEM_SPECIFICS
# ifndef PANTHEIOS_BAILOUT_NO_UNIX_SYSLOG
#  define PANTHEIOS_BAILOUT_NO_UNIX_SYSLOG
# endif /* !PANTHEIOS_BAILOUT_NO_UNIX_SYSLOG */
# ifndef PANTHEIOS_BAILOUT_NO_WINDOWS_EVENTLOG
#  define PANTHEIOS_BAILOUT_NO_WINDOWS_EVENTLOG
# endif /* !PANTHEIOS_BAILOUT_NO_WINDOWS_EVENTLOG */
#else /* ? PANTHEIOS_BAILOUT_NO_OPERATING_SYSTEM_SPECIFICS */
# include <platformstl/platformstl.h>
#endif /* PANTHEIOS_BAILOUT_NO_OPERATING_SYSTEM_SPECIFICS */

/* Standard C header files */

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#if defined(PLATFORMSTL_OS_IS_UNIX)
# include <time.h>
# include <sys/time.h>
#endif /* PLATFORMSTL_OS_IS_UNIX */
#ifdef PANTHEIOS_USE_WIDE_STRINGS
# include <wchar.h>
#endif /* PANTHEIOS_USE_WIDE_STRINGS */

/* Operating-system header files */

#if defined(PLATFORMSTL_OS_IS_UNIX)
# ifndef PANTHEIOS_BAILOUT_NO_UNIX_SYSLOG
#  include <syslog.h>
# endif /* !PANTHEIOS_BAILOUT_NO_UNIX_SYSLOG */
#elif defined(PLATFORMSTL_OS_IS_WINDOWS)
# ifndef PANTHEIOS_BAILOUT_NO_WINDOWS_EVENTLOG
#  include <pantheios/util/severity/WindowsEventLog.h>
# endif /* !PANTHEIOS_BAILOUT_NO_WINDOWS_EVENTLOG */
#endif /* OS */

/* /////////////////////////////////////////////////////////////////////////
 * Compiler compatibility
 */

#if (   defined(STLSOFT_COMPILER_IS_MSVC) && \
        _MSC_VER < 1200)
# define _PANTHEIOS_COMPILER_REQUIRES_EXTERNCPP_DEFINITIONS
#endif /* compiler */

/* /////////////////////////////////////////////////////////////////////////
 * Warning suppression
 */

#if defined(STLSOFT_COMPILER_IS_BORLAND)
# pragma warn -8080
#endif /* compiler */

/* /////////////////////////////////////////////////////////////////////////
 * String encoding compatibility
 */

/* TODO: decide finally whether bail-out supports widestring and, if not,
 * remove all the following discrimination abstractions
 */

#ifdef PANTHEIOS_USE_WIDE_STRINGS_not_any_more_
# define pan_strlen_                    wcslen
# define pan_strncpy_                   wcsncpy
# define pan_wsprintf_                  wsprintfW
# define pan_sprintf_s_                 swprintf_s
# define pan_sprintf_                   swprintf
# define pan_OutputDebugString_         OutputDebugStringW
# define pan_ReportEvent_               ReportEventW
#else /* ? PANTHEIOS_USE_WIDE_STRINGS */
# define pan_strlen_                    strlen
# define pan_strncpy_                   strncpy
# define pan_wsprintf_                  wsprintfA
# define pan_sprintf_s_                 sprintf_s
# define pan_sprintf_                   sprintf
# define pan_OutputDebugString_         OutputDebugStringA
# define pan_ReportEvent_               ReportEventA
#endif /* PANTHEIOS_USE_WIDE_STRINGS */

/* /////////////////////////////////////////////////////////////////////////
 * Namespace
 */

#if !defined(PANTHEIOS_NO_NAMESPACE)
namespace pantheios
{
#endif /* !PANTHEIOS_NO_NAMESPACE */

/* /////////////////////////////////////////////////////////////////////////
 * Forward declarations
 */

/* /////////////////////////////////////////////////////////////////////////
 * Constants
 */

#define STACK_BUFFER_SIZE   (2048)


#if defined(PLATFORMSTL_OS_IS_WINDOWS)

/* The following two are 'known' from pantheios.COM, v1.0.1-b3+. (They will
 * *not* be changed).
 */

# define BAILOUT_1PARAM_MESSAGE_ID      ((DWORD)1000)
# define BAILOUT_2PARAM_MESSAGE_ID      ((DWORD)1001)

#endif /* OS */

/* /////////////////////////////////////////////////////////////////////////
 * Utility functions
 */

PANTHEIOS_CALL(void) pantheios_onBailOut4(
    int         severity
,   char const* message
,   char const* processId
,   char const* qualifier
)
{
    if(NULL == qualifier)
    {
        pantheios_onBailOut3(severity, message, processId);

        return;
    }
    else
    {
        size_t cchQualifier = pan_strlen_(qualifier);

        if(NULL == message)
        {
            pantheios_onBailOut3(severity, qualifier, processId);

            return;
        }
        else if(0 == cchQualifier)
        {
            pantheios_onBailOut3(severity, message, processId);

            return;
        }
        else
        {
            char            message_[STACK_BUFFER_SIZE];
            const size_t    cchBuf      =   STLSOFT_NUM_ELEMENTS(message_) - 1;
            size_t          cchMessage  =   pan_strlen_(message);
            const char      sep[]       =   { ':', ' ', '\0' }; /* ": " */

            if(cchBuf < (cchMessage + 2 + cchQualifier))
            {
                /* Won't fit, so need to shrink message or qualifier or both
                 *
                 * - if qualifier is 1/3 buffer or less, then shrink message
                 * - if message is 2/3 buffer or less, then shrink qualifier
                 * - if both > buffer, then make each half buffer
                 */

                if( cchQualifier < (cchBuf - 2) / 3 &&
                    cchMessage > (cchBuf - 2) - cchQualifier)
                {
                    cchMessage = (cchBuf - 2) - cchQualifier;
                }
                else if(cchMessage < (cchBuf - 2) * 2 / 3 &&
                        cchQualifier > (cchBuf - 2) - cchMessage)
                {
                    cchQualifier = (cchBuf - 2) - cchMessage;
                }
                else if(cchMessage > (cchBuf - 2) &&
                        cchQualifier > (cchBuf - 2))
                {
                    cchMessage = (cchBuf - 2) / 2;
                    cchQualifier = (cchBuf - 2) / 2;
                }
                else
                {
                    /* At this point, the combined length is too large, but
                     * we've failed to trim on the above algorithms, so we
                     * do it in a coarse-grained manner: shrink the bigger
                     * one down to size
                     */
                    if(cchMessage > cchQualifier)
                    {
                        PANTHEIOS_CONTRACT_ENFORCE_ASSUMPTION(cchQualifier < (cchBuf - 2));

                        cchMessage = (cchBuf - 2) - cchQualifier;
                    }
                    else
                    {
                        PANTHEIOS_CONTRACT_ENFORCE_ASSUMPTION(cchMessage < (cchBuf - 2));

                        cchQualifier = (cchBuf - 2) - cchMessage;
                    }

                    PANTHEIOS_CONTRACT_ENFORCE_ASSUMPTION((cchMessage + 2 + cchQualifier) <= cchBuf);
                    PANTHEIOS_CONTRACT_ENFORCE_ASSUMPTION(cchMessage <= cchBuf);
                    PANTHEIOS_CONTRACT_ENFORCE_ASSUMPTION(cchQualifier <= cchBuf);
                }
            }

            PANTHEIOS_CONTRACT_ENFORCE_ASSUMPTION(cchMessage <= cchBuf);
            PANTHEIOS_CONTRACT_ENFORCE_ASSUMPTION(cchQualifier <= cchBuf);
            PANTHEIOS_CONTRACT_ENFORCE_ASSUMPTION(cchMessage + 2 + cchQualifier <= cchBuf);

            memcpy(&message_[0], message, cchMessage * sizeof(pan_char_t));
            if(0 == cchQualifier)
            {
                message_[cchMessage] = '\0';
            }
            else
            {
                memcpy(&message_[cchMessage], sep, 2 * sizeof(pan_char_t));
                memcpy(&message_[cchMessage + 2], qualifier, cchQualifier * sizeof(pan_char_t));
                message_[cchMessage + 2 + cchQualifier] = '\0';
            }
            message_[cchBuf] = '\0';

            pantheios_onBailOut3(severity, message_, processId);
        }
    }
}

PANTHEIOS_CALL(void) pantheios_onBailOut3(
    int         severity
,   char const* message
,   char const* processId
)
{
    size_t          cchMessage;
    char            message_[STACK_BUFFER_SIZE];
    size_t          cchTime;
    size_t          cchTotal;
#if defined(PLATFORMSTL_OS_IS_WINDOWS)
    SYSTEMTIME      st;
    HANDLE          hFile;
    DWORD           numWritten;
# ifndef PANTHEIOS_BAILOUT_NO_WINDOWS_EVENTLOG
    HANDLE          hEventSrc;
# endif /* PANTHEIOS_BAILOUT_NO_WINDOWS_EVENTLOG */
#else /* ? OS */
    struct timeval  tv;
    time_t          secs;
# ifdef PANTHEIOS_USING_SAFE_STR_FUNCTIONS
    struct tm       tm_;
# endif /* PANTHEIOS_USING_SAFE_STR_FUNCTIONS */
    struct tm*      tm;
    FILE*           hFile;
#endif /* OS */

    severity &= 0x7;    /* Bailout ignores any custom severity information. */

    if(NULL == message)
    {
        message = "Unspecified failure";
    }

    cchMessage = pan_strlen_(message);

#if defined(PLATFORMSTL_OS_IS_WINDOWS)

    GetLocalTime(&st);

# if defined(PANTHEIOS_MIN_CRT)
    cchTime = (size_t)(pan_wsprintf_(  &message_[0]
# elif defined(PANTHEIOS_USING_SAFE_STR_FUNCTIONS)
    cchTime = (size_t)( pan_sprintf_s_(&message_[0], STLSOFT_NUM_ELEMENTS(message_)
# else /* ? min / safe CRT */
    cchTime = (size_t)( pan_sprintf_(  &message_[0]
# endif /* min / safe CRT */
                            ,   "%04u%02u%02u-%02u%02u%02u.%03u: "
                            ,   st.wYear
                            ,   st.wMonth
                            ,   st.wDay
                            ,   st.wHour
                            ,   st.wMinute
                            ,   st.wSecond
                            ,   st.wMilliseconds));

#else /* ? OS */

    gettimeofday(&tv, NULL);
    secs = tv.tv_sec;
# ifdef PANTHEIOS_USING_SAFE_STR_FUNCTIONS
    tm = &tm_;
    localtime_s(tm, &secs);
# else /* ? PANTHEIOS_USING_SAFE_STR_FUNCTIONS */
    tm = localtime(&secs);
# endif /* PANTHEIOS_USING_SAFE_STR_FUNCTIONS */

# ifdef PANTHEIOS_USING_SAFE_STR_FUNCTIONS
    cchTime = (size_t)( sprintf_s(&message_[0], STLSOFT_NUM_ELEMENTS(message_)
# else /* ? PANTHEIOS_USING_SAFE_STR_FUNCTIONS */
    cchTime = (size_t)( sprintf(&message_[0]/* , STLSOFT_NUM_ELEMENTS(message_) */
# endif /* PANTHEIOS_USING_SAFE_STR_FUNCTIONS */
                    ,   "%04u%02u%02u-%02u%02u%02u.%03u: "
                    ,   tm->tm_year + 1900
                    ,   tm->tm_mon + 1
                    ,   tm->tm_mday
                    ,   tm->tm_hour
                    ,   tm->tm_min
                    ,   tm->tm_sec
                    ,   stlsoft_static_cast(int, tv.tv_usec / 1000)));
#endif /* OS */

    PANTHEIOS_CONTRACT_ENFORCE_POSTCONDITION_RETURN_INTERNAL((cchTime < STLSOFT_NUM_ELEMENTS(message_) - 3), "time conversion overwrote the local buffer capacity");

    if((cchTime + cchMessage) < (STLSOFT_NUM_ELEMENTS(message_) - 3))
    {
        cchTotal = cchTime + cchMessage;
    }
    else
    {
        cchTotal = STLSOFT_NUM_ELEMENTS(message_) - 3;
    }

# ifdef PANTHEIOS_USING_SAFE_STR_FUNCTIONS
    strncpy_s(&message_[cchTime], STLSOFT_NUM_ELEMENTS(message_) - cchTime, message, cchTotal - cchTime);
# else /* ? PANTHEIOS_USING_SAFE_STR_FUNCTIONS */
    pan_strncpy_(&message_[cchTime], message, cchTotal - cchTime);
# endif /* PANTHEIOS_USING_SAFE_STR_FUNCTIONS */
#if defined(PLATFORMSTL_OS_IS_WINDOWS)
    message_[cchTotal    ] = '\r';
#endif /* PLATFORMSTL_OS_IS_WINDOWS */
    message_[cchTotal + 1] = '\n';
    message_[cchTotal + 2] = '\0';

#if defined(PLATFORMSTL_OS_IS_WINDOWS)
    /* /////////////////////////////////
     * 1. Debugger
     */

    pan_OutputDebugString_(message_);

    /* /////////////////////////////////
     * 2. Console
     */

    /* NOTE: will not be valid if widestring */
    WriteFile(GetStdHandle(STD_ERROR_HANDLE), &message_[0], (DWORD)(cchTotal + 2), &numWritten, NULL);

    /* /////////////////////////////////
     * 3. File
     */

    hFile = CreateFileA("logging-bailout.txt"
                    ,   GENERIC_WRITE
                    ,   0
                    ,   NULL
                    ,   OPEN_ALWAYS
                    ,   0
                    ,   NULL);

    if(INVALID_HANDLE_VALUE != hFile)
    {
        SetFilePointer(hFile, 0, NULL, FILE_END);

        /* NOTE: will not be valid if widestring */
        WriteFile(hFile, &message_[0], (DWORD)(cchTotal + 2), &numWritten, NULL);

        CloseHandle(hFile);
    }

    /* /////////////////////////////////
     * 4. Windows Event Log
     *
     * This uses a special event source registered by
     * Pantheios.COM. If that's not been installed, it
     * still works, but just not as neatly when viewing
     * the event log.
     */
# ifndef PANTHEIOS_BAILOUT_NO_WINDOWS_EVENTLOG

    hEventSrc = RegisterEventSourceA(NULL, "logging-bailout");

    if(NULL != hEventSrc)
    {
        char const* strings[2];
        WORD        type;

        strings[0] = processId;
        strings[1] = message;

        type = pantheios_severity_to_WindowsEventLog_type(severity);

        pan_ReportEvent_(   hEventSrc
                        ,   type
                        ,   0
                        ,   (NULL != processId) ? BAILOUT_2PARAM_MESSAGE_ID : BAILOUT_1PARAM_MESSAGE_ID
                        ,   NULL
                        ,   STLSOFT_NUM_ELEMENTS(strings)
                        ,   0
                        ,   &strings[0]
                        ,   NULL);

        DeregisterEventSource(hEventSrc);

        GetLastError();
    }
# else /* ? PANTHEIOS_BAILOUT_NO_WINDOWS_EVENTLOG */
    STLSOFT_SUPPRESS_UNUSED(severity);
    STLSOFT_SUPPRESS_UNUSED(processId);
# endif /* PANTHEIOS_BAILOUT_NO_WINDOWS_EVENTLOG */

#else /* ? OS */

    STLSOFT_SUPPRESS_UNUSED(processId);

    /* /////////////////////////////////
     * 1. Console
     */

    /* NOTE: will not be valid if widestring */
    fprintf(stderr, "%.*s\n", (int)cchTotal, message_);

    /* /////////////////////////////////
     * 2. File
     */

# ifdef PANTHEIOS_USING_SAFE_STR_FUNCTIONS
    if(0 == fopen_s(&hFile, "logging-bailout.txt", "a+"))
# else /* ? PANTHEIOS_USING_SAFE_STR_FUNCTIONS */
    hFile = fopen("logging-bailout.txt", "a+");

    if(NULL != hFile)
# endif /* PANTHEIOS_USING_SAFE_STR_FUNCTIONS */
    {
        /* NOTE: will not be valid if widestring */
        fprintf(hFile, "%.*s\n", (int)cchTotal, message_);

        fclose(hFile);
    }

# if defined(PLATFORMSTL_OS_IS_UNIX)
#  ifndef PANTHEIOS_BAILOUT_NO_UNIX_SYSLOG
    /* /////////////////////////////////
     * 3. SysLog
     */

    /* NOTE: will not be valid if widestring */
    syslog(LOG_EMERG | LOG_USER, "%s", message);
#  endif /* !PANTHEIOS_BAILOUT_NO_UNIX_SYSLOG */
# endif /* OS */

#endif /* OS */
}

/* /////////////////////////////////////////////////////////////////////////
 * Namespace
 */

#if !defined(PANTHEIOS_NO_NAMESPACE)
} /* namespace pantheios */
#endif /* !PANTHEIOS_NO_NAMESPACE */

/* ////////////////////////////////////////////////////////////////////// */