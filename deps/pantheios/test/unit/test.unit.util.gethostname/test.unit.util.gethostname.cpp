/* /////////////////////////////////////////////////////////////////////////
 * File:        test/unit/test.unit.util.gethostname/test.unit.util.gethostname.cpp
 *
 * Purpose:     Implementation file for the test.unit.util.gethostname project.
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
#include <pantheios/pantheios.h>            // Pantheios C++ main header
#include <pantheios/util/system/hostname.h> // for pantheios::getHostName()
#include <pantheios/backends/bec.test.h>

/* STLSoft Header Files */
#include <pantheios/util/memory/auto_buffer_selector.hpp>
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
static void test_1_02();

static std::string pan_get_hid_();

/* ////////////////////////////////////////////////////////////////////// */

/* Define the stock front-end process identity, so that it links when using
 * fe.N, fe.simple, etc. */
PANTHEIOS_EXTERN_C const char PANTHEIOS_FE_PROCESS_IDENTITY[] = "test.unit.util.gethostname";

/* ////////////////////////////////////////////////////////////////////// */

int main(int argc, char** argv)
{
    int retCode = EXIT_SUCCESS;
    int verbosity = 2;

    XTESTS_COMMANDLINE_PARSEVERBOSITY(argc, argv, &verbosity);

    if(XTESTS_START_RUNNER("test.unit.util.gethostname", verbosity))
    {
        XTESTS_RUN_CASE(test_1_01);
        XTESTS_RUN_CASE(test_1_02);

        XTESTS_PRINT_RESULTS();

        XTESTS_END_RUNNER_UPDATE_EXITCODE(&retCode);
    }

    return retCode;
}

/* ////////////////////////////////////////////////////////////////////// */

static void test_1_01()
{
    char                hostname[1000];
    const std::string   hid = pan_get_hid_();

    { for(size_t i = 0; i != STLSOFT_NUM_ELEMENTS(hostname); ++i)
    {
        ::memset(&hostname[0], 0, sizeof(hostname));

        const size_t len = pantheios::getHostName(&hostname[0], i);

        if(len == i)
        {
            // The function did not have enough space to write in, so it
            // will return the length passed to it ...
            XTESTS_TEST_INTEGER_EQUAL(i, len);
            // ... and will not have written anything to the file
            XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("", hostname);
        }
        else
        {
            // The function had enough space, so it will return the length
            // of the intended hostname ...
            XTESTS_TEST_INTEGER_EQUAL(hid.size(), len);
            // ... and will have written the hostname
            XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL(hid, hostname);
        }
    }}
}

static void test_1_02()
{
    const std::string   hid = pan_get_hid_();

    { for(size_t i = 1; i != 1001; ++i)
    {
        pantheios::util::auto_buffer_selector<char, 256>::type    hostname(i);

        const size_t len = pantheios::getHostName(hostname);

        // The function had enough space, so it will return the length
        // of the intended hostname ...
        XTESTS_TEST_INTEGER_EQUAL(hid.size(), len);
        // ... and will have written the hostname
        XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL(hid, hostname.data());
    }}
}

/* ////////////////////////////////////////////////////////////////////// */

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
        return std::string(szHostName, static_cast<size_t>(cchHostName));
    }

#else /* ? OS */
# error Not discriminated for platforms other than UNIX and Windows
#endif /* OS */
}

/* ////////////////////////////////////////////////////////////////////// */
