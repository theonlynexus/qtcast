/* /////////////////////////////////////////////////////////////////////////
 * File:        test/unit/test.unit.util.getcurrenttime/test.unit.util.getcurrenttime.cpp
 *
 * Purpose:     Implementation file for the test.unit.util.getcurrenttime project.
 *
 * Created:     10th November 2007
 * Updated:     14th October 2008
 *
 * Status:      Wizard-generated
 *
 * License:     (Licensed under the Synesis Software Open License)
 *
 *              Copyright (c) 2007-2008, Synesis Software Pty Ltd.
 *              All rights reserved.
 *
 *              www:        http://www.synesis.com.au/software
 *
 * ////////////////////////////////////////////////////////////////////// */


#ifdef __BORLANDC__
 /* Borland 6.1 is so unbelievably stupid that even when
  * given '#pragma warn -8026' multiple places within the code 
  * and '-winl' on the command it _still_ insists on reporting
  * that "Functions with exception specifications are not expanded 
  * inline in function test_time(const char *,int,unsigned int,int,unsigned int,const char *)",
  * so I am forced to such extreme measures! What a peice of crap.
  *
  * Bring back Turbo C++ 3.1!
  */

# define throw()
#  include <shwild/shwild.h>
# undef throw
#endif /* compiler */


#include <pantheios/util/test/compiler_warnings_suppression.first_include.h>

/* Pantheios Header Files */
#include <pantheios/util/time/currenttime.h>

/* xTests Header Files */
#include <xtests/xtests.h>

/* shwild Header Files */
#include <shwild/shwild.h>

#if SHWILD_VER < 0x00090900
# error Requires shwild 0.9.9 or later; earlier versions have a bug that cause these tests to report false errors
#endif /* SHWILD_VER */

/* STLSoft Header Files */
#include <stlsoft/conversion/integer_to_string.hpp>
#include <pantheios/util/memory/auto_buffer_selector.hpp>
#include <stlsoft/shims/access/string/std/c_string.h>
#include <stlsoft/string/container_slice_functions.hpp>
#include <platformstl/platformstl.hpp>


/* Standard C++ Header Files */
#include <exception>
#include <string>

/* Standard C Header Files */
#include <stdio.h>
#include <stdlib.h>

#if defined(_MSC_VER) && \
    defined(_DEBUG)
# include <crtdbg.h>
#endif /* _MSC_VER) && _DEBUG */

#include <pantheios/util/test/compiler_warnings_suppression.last_include.h>

/* /////////////////////////////////////////////////////////////////////////
 * Macros and definitions
 */

#define PANTHEIOS_TEST_TIME(buffSize, flags, result, pattern)   test_time(__FILE__, __LINE__, buffSize, flags, result, pattern)

/* /////////////////////////////////////////////////////////////////////////
 * Globals
 */

PANTHEIOS_EXTERN_C const char PANTHEIOS_FE_PROCESS_IDENTITY[] = "test.unit.util.getcurrenttime";

/* /////////////////////////////////////////////////////////////////////////
 * Forward declarations
 */

static int          test_time(char const* file, int line, size_t cchBuff, int flags, size_t expectedResult, char const* pattern);
static std::string  translate_pattern(char const* pattern);

static void         test_unix_0();
static void         test_unix_F_USE_SYSTEM_TIME();
static void         test_unix_F_HIDE_DATE();
static void         test_unix_F_HIDE_TIME();
#if defined(PLATFORMSTL_OS_IS_WINDOWS)
static void         test_win_0();
static void         test_win_F_USE_SYSTEM_TIME();
static void         test_win_F_HIDE_DATE();
static void         test_win_F_HIDE_TIME();
#endif /* PLATFORMSTL_OS_IS_WINDOWS */

/* ////////////////////////////////////////////////////////////////////// */

int main(int argc, char** argv)
{
    int retCode = EXIT_SUCCESS;
    int verbosity = 2;

    XTESTS_COMMANDLINE_PARSEVERBOSITY(argc, argv, &verbosity);

    if(XTESTS_START_RUNNER("test.unit.util.getcurrenttime", verbosity))
    {
        XTESTS_RUN_CASE_WITH_DESC(test_unix_0, "testing UNIX format; flags=0");
        XTESTS_RUN_CASE_WITH_DESC(test_unix_F_USE_SYSTEM_TIME, "testing UNIX format; flags=F_USE_SYSTEM_TIME");
        XTESTS_RUN_CASE_WITH_DESC(test_unix_F_HIDE_DATE, "testing UNIX format; flags=F_HIDE_DATE");
        XTESTS_RUN_CASE_WITH_DESC(test_unix_F_HIDE_TIME, "testing UNIX format; flags=F_HIDE_TIME");
#if defined(PLATFORMSTL_OS_IS_WINDOWS)
        XTESTS_RUN_CASE_WITH_DESC(test_win_0, "testing Windows format; flags=0");
        XTESTS_RUN_CASE_WITH_DESC(test_win_F_USE_SYSTEM_TIME, "testing Windows format; flags=F_USE_SYSTEM_TIME");
        XTESTS_RUN_CASE_WITH_DESC(test_win_F_HIDE_DATE, "testing Windows format; flags=F_HIDE_DATE");
        XTESTS_RUN_CASE_WITH_DESC(test_win_F_HIDE_TIME, "testing Windows format; flags=0");
#endif /* PLATFORMSTL_OS_IS_WINDOWS */

        XTESTS_PRINT_RESULTS();

        XTESTS_END_RUNNER_UPDATE_EXITCODE(&retCode);
    }

    return retCode;
}

static void test_unix_0()
{
    const int   timeFlags   =   PANTHEIOS_GETCURRENTTIME_F_USE_UNIX_FORMAT
                            |   0
                            |   0
                            |   0;

    PANTHEIOS_TEST_TIME( 0,   timeFlags, 15, "");
    PANTHEIOS_TEST_TIME( 1,   timeFlags,  1, "[ADFJMNOS]");
    PANTHEIOS_TEST_TIME( 2,   timeFlags,  2, "[ADFJMNOS][abceglnoprtuvy]");
    PANTHEIOS_TEST_TIME( 3,   timeFlags,  3, "?<Mon>");
    PANTHEIOS_TEST_TIME( 4,   timeFlags,  4, "?<Mon> ");
    PANTHEIOS_TEST_TIME( 5,   timeFlags,  5, "?<Mon> <D>");
    PANTHEIOS_TEST_TIME( 6,   timeFlags,  6, "?<Mon> <DD>");
    PANTHEIOS_TEST_TIME( 7,   timeFlags,  7, "?<Mon> <DD> ");
    PANTHEIOS_TEST_TIME( 8,   timeFlags,  8, "?<Mon> <DD> <D>");
    PANTHEIOS_TEST_TIME( 9,   timeFlags,  9, "?<Mon> <DD> <DD>");
    PANTHEIOS_TEST_TIME(10,   timeFlags, 10, "?<Mon> <DD> <DD>:");
    PANTHEIOS_TEST_TIME(11,   timeFlags, 11, "?<Mon> <DD> <DD>:<D>");
    PANTHEIOS_TEST_TIME(12,   timeFlags, 12, "?<Mon> <DD> <DD>:<DD>");
    PANTHEIOS_TEST_TIME(13,   timeFlags, 13, "?<Mon> <DD> <DD>:<DD>:");
    PANTHEIOS_TEST_TIME(14,   timeFlags, 14, "?<Mon> <DD> <DD>:<DD>:<D>");
    PANTHEIOS_TEST_TIME(15,   timeFlags, 15, "?<Mon> <DD> <DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME(16,   timeFlags, 15, "?<Mon> <DD> <DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME(16,   timeFlags, 15, "?<Mon> <DD> <DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME(17,   timeFlags, 15, "?<Mon> <DD> <DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME(18,   timeFlags, 15, "?<Mon> <DD> <DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME(19,   timeFlags, 15, "?<Mon> <DD> <DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME(20,   timeFlags, 15, "?<Mon> <DD> <DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME(100,  timeFlags, 15, "?<Mon> <DD> <DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME(1000, timeFlags, 15, "?<Mon> <DD> <DD>:<DD>:<DD>");
}

static void test_unix_F_USE_SYSTEM_TIME()
{
    const int   timeFlags   =   PANTHEIOS_GETCURRENTTIME_F_USE_UNIX_FORMAT
                            |   0
                            |   PANTHEIOS_GETCURRENTTIME_F_USE_SYSTEM_TIME
                            |   0;

    PANTHEIOS_TEST_TIME( 0,   timeFlags, 15, "");
    PANTHEIOS_TEST_TIME( 1,   timeFlags,  1, "[ADFJMNOS]");
    PANTHEIOS_TEST_TIME( 2,   timeFlags,  2, "[ADFJMNOS][abceglnoprtuvy]");
    PANTHEIOS_TEST_TIME( 3,   timeFlags,  3, "?<Mon>");
    PANTHEIOS_TEST_TIME( 4,   timeFlags,  4, "?<Mon> ");
    PANTHEIOS_TEST_TIME( 5,   timeFlags,  5, "?<Mon> <D>");
    PANTHEIOS_TEST_TIME( 6,   timeFlags,  6, "?<Mon> <DD>");
    PANTHEIOS_TEST_TIME( 7,   timeFlags,  7, "?<Mon> <DD> ");
    PANTHEIOS_TEST_TIME( 8,   timeFlags,  8, "?<Mon> <DD> <D>");
    PANTHEIOS_TEST_TIME( 9,   timeFlags,  9, "?<Mon> <DD> <DD>");
    PANTHEIOS_TEST_TIME(10,   timeFlags, 10, "?<Mon> <DD> <DD>:");
    PANTHEIOS_TEST_TIME(11,   timeFlags, 11, "?<Mon> <DD> <DD>:<D>");
    PANTHEIOS_TEST_TIME(12,   timeFlags, 12, "?<Mon> <DD> <DD>:<DD>");
    PANTHEIOS_TEST_TIME(13,   timeFlags, 13, "?<Mon> <DD> <DD>:<DD>:");
    PANTHEIOS_TEST_TIME(14,   timeFlags, 14, "?<Mon> <DD> <DD>:<DD>:<D>");
    PANTHEIOS_TEST_TIME(15,   timeFlags, 15, "?<Mon> <DD> <DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME(16,   timeFlags, 15, "?<Mon> <DD> <DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME(16,   timeFlags, 15, "?<Mon> <DD> <DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME(17,   timeFlags, 15, "?<Mon> <DD> <DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME(18,   timeFlags, 15, "?<Mon> <DD> <DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME(19,   timeFlags, 15, "?<Mon> <DD> <DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME(20,   timeFlags, 15, "?<Mon> <DD> <DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME(100,  timeFlags, 15, "?<Mon> <DD> <DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME(1000, timeFlags, 15, "?<Mon> <DD> <DD>:<DD>:<DD>");
}

static void test_unix_F_HIDE_DATE()
{
    const int   timeFlags   =   PANTHEIOS_GETCURRENTTIME_F_USE_UNIX_FORMAT
                            |   0
                            |   PANTHEIOS_GETCURRENTTIME_F_HIDE_DATE
                            |   0;

    PANTHEIOS_TEST_TIME( 0,   timeFlags,  8, "");
    PANTHEIOS_TEST_TIME( 1,   timeFlags,  1, "?<D>");
    PANTHEIOS_TEST_TIME( 2,   timeFlags,  2, "?<DD>");
    PANTHEIOS_TEST_TIME( 3,   timeFlags,  3, "?<DD>:");
    PANTHEIOS_TEST_TIME( 4,   timeFlags,  4, "?<DD>:<D>");
    PANTHEIOS_TEST_TIME( 5,   timeFlags,  5, "?<DD>:<DD>");
    PANTHEIOS_TEST_TIME( 6,   timeFlags,  6, "?<DD>:<DD>:");
    PANTHEIOS_TEST_TIME( 7,   timeFlags,  7, "?<DD>:<DD>:<D>");
    PANTHEIOS_TEST_TIME( 8,   timeFlags,  8, "?<DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME( 9,   timeFlags,  8, "?<DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME(10,   timeFlags,  8, "?<DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME(11,   timeFlags,  8, "?<DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME(12,   timeFlags,  8, "?<DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME(13,   timeFlags,  8, "?<DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME(14,   timeFlags,  8, "?<DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME(15,   timeFlags,  8, "?<DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME(16,   timeFlags,  8, "?<DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME(16,   timeFlags,  8, "?<DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME(17,   timeFlags,  8, "?<DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME(18,   timeFlags,  8, "?<DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME(19,   timeFlags,  8, "?<DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME(20,   timeFlags,  8, "?<DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME(100,  timeFlags,  8, "?<DD>:<DD>:<DD>");
    PANTHEIOS_TEST_TIME(1000, timeFlags,  8, "?<DD>:<DD>:<DD>");
}

static void test_unix_F_HIDE_TIME()
{
    const int   timeFlags   =   PANTHEIOS_GETCURRENTTIME_F_USE_UNIX_FORMAT
                            |   0
                            |   PANTHEIOS_GETCURRENTTIME_F_HIDE_TIME
                            |   0;

    PANTHEIOS_TEST_TIME( 0,   timeFlags,  6, "");
    PANTHEIOS_TEST_TIME( 1,   timeFlags,  1, "[ADFJMNOS]");
    PANTHEIOS_TEST_TIME( 2,   timeFlags,  2, "[ADFJMNOS][abceglnoprtuvy]");
    PANTHEIOS_TEST_TIME( 3,   timeFlags,  3, "?<Mon>");
    PANTHEIOS_TEST_TIME( 4,   timeFlags,  4, "?<Mon> ");
    PANTHEIOS_TEST_TIME( 5,   timeFlags,  5, "?<Mon> <D>");
    PANTHEIOS_TEST_TIME( 6,   timeFlags,  6, "?<Mon> <DD>");
    PANTHEIOS_TEST_TIME( 7,   timeFlags,  6, "?<Mon> <DD>");
    PANTHEIOS_TEST_TIME( 8,   timeFlags,  6, "?<Mon> <DD>");
    PANTHEIOS_TEST_TIME( 9,   timeFlags,  6, "?<Mon> <DD>");
    PANTHEIOS_TEST_TIME(10,   timeFlags,  6, "?<Mon> <DD>");
    PANTHEIOS_TEST_TIME(11,   timeFlags,  6, "?<Mon> <DD>");
    PANTHEIOS_TEST_TIME(12,   timeFlags,  6, "?<Mon> <DD>");
    PANTHEIOS_TEST_TIME(13,   timeFlags,  6, "?<Mon> <DD>");
    PANTHEIOS_TEST_TIME(14,   timeFlags,  6, "?<Mon> <DD>");
    PANTHEIOS_TEST_TIME(15,   timeFlags,  6, "?<Mon> <DD>");
    PANTHEIOS_TEST_TIME(16,   timeFlags,  6, "?<Mon> <DD>");
    PANTHEIOS_TEST_TIME(16,   timeFlags,  6, "?<Mon> <DD>");
    PANTHEIOS_TEST_TIME(17,   timeFlags,  6, "?<Mon> <DD>");
    PANTHEIOS_TEST_TIME(18,   timeFlags,  6, "?<Mon> <DD>");
    PANTHEIOS_TEST_TIME(19,   timeFlags,  6, "?<Mon> <DD>");
    PANTHEIOS_TEST_TIME(20,   timeFlags,  6, "?<Mon> <DD>");
    PANTHEIOS_TEST_TIME(100,  timeFlags,  6, "?<Mon> <DD>");
    PANTHEIOS_TEST_TIME(1000, timeFlags,  6, "?<Mon> <DD>");
}

/* ////////////////////////////////////////////////////////////////////// */

#if defined(PLATFORMSTL_OS_IS_WINDOWS)
static void test_win_0()
{
    const int   timeFlags   =   0
                            |   0
                            |   0
                            |   0;

    pan_beutil_time_t   tm(0, NULL);
    size_t              expected = pantheios_util_getCurrentTime(&tm, timeFlags);

        PANTHEIOS_TEST_TIME(            0, timeFlags, expected, "");
    { for(size_t i = 1; i < expected + 100; ++i)
    {
        PANTHEIOS_TEST_TIME( expected + i, timeFlags, expected, "*");
    }}
}

static void test_win_F_USE_SYSTEM_TIME()
{
    const int   timeFlags   =   0
                            |   0
                            |   PANTHEIOS_GETCURRENTTIME_F_USE_SYSTEM_TIME
                            |   0;

    pan_beutil_time_t   tm(0, NULL);
    size_t              expected = pantheios_util_getCurrentTime(&tm, timeFlags);

        PANTHEIOS_TEST_TIME(            0, timeFlags, expected, "");
    { for(size_t i = 1; i < expected + 100; ++i)
    {
        PANTHEIOS_TEST_TIME( expected + i, timeFlags, expected, "*");
    }}
}

static void test_win_F_HIDE_DATE()
{
    const int   timeFlags   =   0
                            |   0
                            |   PANTHEIOS_GETCURRENTTIME_F_HIDE_DATE
                            |   0;

    pan_beutil_time_t   tm(0, NULL);
    size_t              expected = pantheios_util_getCurrentTime(&tm, timeFlags);

        PANTHEIOS_TEST_TIME(            0, timeFlags, expected, "");
    { for(size_t i = 1; i < expected + 100; ++i)
    {
        PANTHEIOS_TEST_TIME( expected + i, timeFlags, expected, "*");
    }}
}

static void test_win_F_HIDE_TIME()
{
    const int   timeFlags   =   0
                            |   0
                            |   PANTHEIOS_GETCURRENTTIME_F_HIDE_TIME
                            |   0;

    pan_beutil_time_t   tm(0, NULL);
    size_t              expected = pantheios_util_getCurrentTime(&tm, timeFlags);

        PANTHEIOS_TEST_TIME(            0, timeFlags, expected, "");
    { for(size_t i = 1; i < expected + 100; ++i)
    {
        PANTHEIOS_TEST_TIME( expected + i, timeFlags, expected, "*");
    }}
}
#endif /* PLATFORMSTL_OS_IS_WINDOWS */

/* ////////////////////////////////////////////////////////////////////// */

static std::string replace_all(std::string const& str, char const* srch, char const* repl)
{
    std::string str2(str);
    size_t      srchLen = ::strlen(srch);
//    size_t      replLen = ::strlen(repl);

    for(;;)
    {
        size_t  lpos = str2.find(srch);
        size_t  rpos = lpos + srchLen;

        if(std::string::npos == lpos)
        {
            break;
        }

        str2 = stlsoft::left(str2, lpos) + repl + stlsoft::right(str2, str2.length() - rpos);
    }

    return str2;
}

static int test_time(char const* file, int line, size_t cchBuff, int flags, size_t expectedResult, char const* pattern)
{
    if('?' == 0[pattern])
    {
        std::string str = translate_pattern(pattern);

        return test_time(file, line, cchBuff, flags, expectedResult, str.c_str());
    }

    pantheios::util::auto_buffer_selector<char, 256>::type  buff(cchBuff + 1);
    pan_beutil_time_t                                       tm(buff.size() - 1, (buff.size() > 1) ? &buff[0] : NULL);
    size_t                                                  actualResult = pantheios_util_getCurrentTime(&tm, flags);
    int                                                     matchRes = 0;

    buff[cchBuff] = '\0';
    if(cchBuff > 0)
    {
        buff[actualResult] = '\0';
    }

    if( expectedResult == actualResult &&
        0 == (matchRes = shwild::match(pattern, buff.data())))
    {
        return true;
    }
    else
    {
        char        sz[21];
        std::string message;

        message += "time test failed: ";
        message += "expected length='";
        message += stlsoft::integer_to_string(&sz[0], STLSOFT_NUM_ELEMENTS(sz), expectedResult);
        message += "';";
        message += "pattern='";
        message += stlsoft::c_str_ptr_a(pattern);
        message += "';";
        message += "actual length='";
        message += stlsoft::integer_to_string(&sz[0], STLSOFT_NUM_ELEMENTS(sz), actualResult);
        message += "';";
        message += "result='";
        message += buff.data();
        message += "';";
        message += "match result='";
        message += stlsoft::integer_to_string(&sz[0], STLSOFT_NUM_ELEMENTS(sz), matchRes);
        message += "'";
        message += ";";

        xtests::c::xtests_writeFailMessage(file, line, NULL, message, "");

        return false;
    }
}

static std::string translate_pattern(char const* pattern)
{
    STLSOFT_ASSERT('?' == 0[pattern]);

    std::string     str(pattern + 1);

    str = replace_all(str, "<Mon>", "[JFMASOND][aepuco][nbrylgptvc]");

    str = replace_all(str, "<D>", "[0-9]");
    str = replace_all(str, "<DD>", "[0-9][0-9]");

    return str;
}

/* ////////////////////////////////////////////////////////////////////// */
