/* /////////////////////////////////////////////////////////////////////////
 * File:        test/component/test.component.inserters.hostId/test.component.inserters.hostId.cpp
 *
 * Purpose:     Implementation file for the test.component.inserters.hostId project.
 *
 * Created:     14th April 2008
 * Updated:     14th October 2008
 *
 * Status:      Wizard-generated
 *
 * License:     (Licensed under the Synesis Software Open License)
 *
 *              Copyright (c) 2008, Synesis Software Pty Ltd.
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
#include <pantheios/inserters/hostid.hpp> // for pantheios::hostId
#include <pantheios/backends/bec.test.h>

/* STLSoft Header Files */
#include <stlsoft/conversion/integer_to_string.hpp>
#include <platformstl/platformstl.h>

/* Standard C++ Header Files */
#include <string>

/* Standard C Header Files */
#include <stdlib.h>                     // for exit codes
#if defined(PLATFORMSTL_OS_IS_UNIX)
# include <unistd.h>
#elif defined(PLATFORMSTL_OS_IS_WINDOWS)
# include <windows.h>
#else /* ? OS */
# error Not discriminated for platforms other than UNIX and Windows
#endif /* OS */


#include <pantheios/util/test/compiler_warnings_suppression.last_include.h>

/* /////////////////////////////////////////////////////////////////////////
 * Forward declarations
 */

static void test_1_01();

static std::string pan_get_hid_();

/* ////////////////////////////////////////////////////////////////////// */

/* Define the stock front-end process identity, so that it links when using
 * fe.N, fe.simple, etc. */
PANTHEIOS_EXTERN_C const char PANTHEIOS_FE_PROCESS_IDENTITY[] = "test.component.inserters.hostId";

/* ////////////////////////////////////////////////////////////////////// */

int main(int argc, char** argv)
{
    int retCode = EXIT_SUCCESS;
    int verbosity = 2;

    XTESTS_COMMANDLINE_PARSEVERBOSITY(argc, argv, &verbosity);

    if(XTESTS_START_RUNNER("test.component.inserters.hostId", verbosity))
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

    const char          prefix[]    =   "host: ";
    const std::string   hid         =   pan_get_hid_();
    const std::string   stmt        =   prefix + hid;



    pantheios::be::test::reset();


    // 2. Create test data

    pantheios::log_NOTICE(pantheios::hostId);
    pantheios::log_NOTICE(prefix, pantheios::hostId);


    // 3. Verification

    pantheios::be::test::Results  results = pantheios::be::test::results();

    XTESTS_TEST(!results.empty());
    XTESTS_TEST(2 == results.size());
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL(hid, results[0].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL(stmt, results[1].statement);
}

static std::string pan_get_hid_()
{
#if defined(PLATFORMSTL_OS_IS_UNIX)
    char    szHostName[1001];

    if(0 != ::gethostname(&szHostName[0], STLSOFT_NUM_ELEMENTS(szHostName)))
    {
        return "localhost";
    }
    else
    {
        return szHostName;
    }

#elif defined(PLATFORMSTL_OS_IS_WINDOWS)

    char    szHostName[1001];
    DWORD   cchHostName = STLSOFT_NUM_ELEMENTS(szHostName);

    if(!::GetComputerNameA(&szHostName[0], &cchHostName))
    {
        return "localhost";
    }
    else
    {
        return std::string(szHostName, cchHostName);
    }

#else /* ? OS */
# error Not discriminated for platforms other than UNIX and Windows
#endif /* OS */
}

/* ////////////////////////////////////////////////////////////////////// */
