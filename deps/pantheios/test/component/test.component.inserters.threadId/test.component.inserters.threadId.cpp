/* /////////////////////////////////////////////////////////////////////////
 * File:        test/component/test.component.inserters.threadId/test.component.inserters.threadId.cpp
 *
 * Purpose:     Implementation file for the test.component.inserters.threadId project.
 *
 * Created:     17th October 2006
 * Updated:     14th October 2008
 *
 * Status:      Wizard-generated
 *
 * License:     (Licensed under the Synesis Software Open License)
 *
 *              Copyright (c) 2006-2008, Synesis Software Pty Ltd.
 *              All rights reserved.
 *
 *              www:        http://www.synesis.com.au/software
 *
 * ////////////////////////////////////////////////////////////////////// */


#include <pantheios/util/test/compiler_warnings_suppression.first_include.h>

/* xTests Header Files */
#include <xtests/xtests.h>

/* Pantheios Header Files */
#include <pantheios/pantheios.hpp>          // Pantheios C++ main header
#include <pantheios/inserters/threadid.hpp> // for pantheios::threadId
#include <pantheios/backends/bec.test.h>
#include <pantheios/internal/threading.h>

/* STLSoft Header Files */
#include <stlsoft/conversion/integer_to_string.hpp>
#include <platformstl/platformstl.h>

/* Standard C Header Files */
#include <stdlib.h>                     // for exit codes
#if defined(PLATFORMSTL_OS_IS_UNIX)
# include <unistd.h>
#endif /* OS */

#ifdef PANTHEIOS_MT
# if defined(PLATFORMSTL_OS_IS_UNIX)
#  include <pthread.h>
# elif defined(PLATFORMSTL_OS_IS_WINDOWS)
#  include <windows.h>
# else /* ? OS */
#  error Not discriminated for platforms other than UNIX and Windows
# endif /* OS */
#endif /* PANTHEIOS_MT */

#include <pantheios/util/test/compiler_warnings_suppression.last_include.h>

/* /////////////////////////////////////////////////////////////////////////
 * Forward declarations
 */

static void test_1_01();

static pantheios::sint64_t pan_get_tid_();

/* ////////////////////////////////////////////////////////////////////// */

/* Define the stock front-end process identity, so that it links when using
 * fe.N, fe.simple, etc. */
PANTHEIOS_EXTERN_C const char PANTHEIOS_FE_PROCESS_IDENTITY[] = "test.component.inserters.threadId";

/* ////////////////////////////////////////////////////////////////////// */

int main(int argc, char** argv)
{
    int retCode = EXIT_SUCCESS;
    int verbosity = 2;

    XTESTS_COMMANDLINE_PARSEVERBOSITY(argc, argv, &verbosity);

    if(XTESTS_START_RUNNER("test.component.inserters.threadId", verbosity))
    {
        XTESTS_RUN_CASE(test_1_01);

        XTESTS_PRINT_RESULTS();

        XTESTS_END_RUNNER_UPDATE_EXITCODE(&retCode);
    }

    return retCode;
}

/* ////////////////////////////////////////////////////////////////////// */

static void test_1_01()
{
    // 1. Setup

    const char  prefix[]    =   "thread: ";
    char        tid_[21 + sizeof(prefix)];
    char const* tid         =   stlsoft::integer_to_string(&tid_[0], STLSOFT_NUM_ELEMENTS(tid_), pan_get_tid_());
    char const* stmt        =   tid - (sizeof(prefix) - 1);

    ::strncpy(const_cast<char*>(stmt), prefix, (sizeof(prefix) - 1));

    pantheios::be::test::reset();


    // 2. Create test data

    pantheios::log_NOTICE(pantheios::threadId);
    pantheios::log_NOTICE(prefix, pantheios::threadId);


    // 3. Verification

    pantheios::be::test::Results  results = pantheios::be::test::results();

    XTESTS_TEST(!results.empty());
    XTESTS_TEST(2 == results.size());
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL(tid, results[0].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL(stmt, results[1].statement);
}

static pantheios::sint64_t pan_get_tid_()
{
#if defined(PLATFORMSTL_OS_IS_UNIX)
# ifdef PANTHEIOS_MT
    union
    {
        pantheios::sint64_t   u64;
        pthread_t           self;

    } u;

    STLSOFT_STATIC_ASSERT(sizeof(::pthread_self()) <= sizeof(pantheios::sint64_t));

    u.u64 = 0;
    u.self = ::pthread_self();

    return u.u64;
# else /* ? PANTHEIOS_MT */
    return 1;
# endif /* PANTHEIOS_MT */
#elif defined(PLATFORMSTL_OS_IS_WINDOWS)
    return static_cast<pantheios::sint64_t>(::GetCurrentThreadId());
#else /* ? OS */
# error Not discriminated for platforms other than UNIX and Windows
#endif /* OS */
}

/* ////////////////////////////////////////////////////////////////////// */
