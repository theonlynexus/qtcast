/* /////////////////////////////////////////////////////////////////////////
 * File:        test/component/test.component.inserters.integer/test.component.inserters.integer.cpp
 *
 * Purpose:     Implementation file for the test.component.inserters.integer project.
 *
 * Created:     19th October 2006
 * Updated:     11th November 2008
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
#include <pantheios/inserters/integer.hpp>  // for pantheios::integer
#include <pantheios/backends/bec.test.h>

/* STLSoft Header Files */
#include <stlsoft/util/limit_traits.h>

/* Standard C++ Header Files */
#include <exception>

/* Standard C Header Files */
#include <stdio.h>
#include <stdlib.h>

#include <pantheios/util/test/compiler_warnings_suppression.last_include.h>

/* /////////////////////////////////////////////////////////////////////////
 * Forward declarations
 */

static void test_1_01();
static void test_1_02();
static void test_1_03();
static void test_1_04();
static void test_1_05();
static void test_1_06();
static void test_1_07();
static void test_1_08();
static void test_1_09();
static void test_1_10();
static void test_1_11();

/* /////////////////////////////////////////////////////////////////////////
 * Globals
 */

PANTHEIOS_EXTERN_C const char PANTHEIOS_FE_PROCESS_IDENTITY[] = "test.component.inserters.integer";

/* ////////////////////////////////////////////////////////////////////// */

int main(int argc, char** argv)
{
    int retCode = EXIT_SUCCESS;
    int verbosity = 2;

    XTESTS_COMMANDLINE_PARSEVERBOSITY(argc, argv, &verbosity);

    if(XTESTS_START_RUNNER("test.component.inserters.integer", verbosity))
    {
        XTESTS_RUN_CASE(test_1_01);
        XTESTS_RUN_CASE(test_1_02);
        XTESTS_RUN_CASE(test_1_03);
        XTESTS_RUN_CASE(test_1_04);
        XTESTS_RUN_CASE(test_1_05);
        XTESTS_RUN_CASE(test_1_06);
        XTESTS_RUN_CASE(test_1_07);
        XTESTS_RUN_CASE(test_1_08);
        XTESTS_RUN_CASE(test_1_09);
        XTESTS_RUN_CASE(test_1_10);
        XTESTS_RUN_CASE(test_1_11);

        XTESTS_PRINT_RESULTS();

        XTESTS_END_RUNNER_UPDATE_EXITCODE(&retCode);
    }

    return retCode;
}

/* ////////////////////////////////////////////////////////////////////// */

static void test_1_01()
{
    // 1. Setup

    pantheios::be::test::reset();


    // 2. Create test data

    pantheios::log_NOTICE(pantheios::integer(static_cast<short>(0)));
    pantheios::log_NOTICE(pantheios::integer(static_cast<unsigned short>(0)));
    pantheios::log_NOTICE(pantheios::integer(static_cast<int>(0)));
    pantheios::log_NOTICE(pantheios::integer(static_cast<unsigned int>(0)));
    pantheios::log_NOTICE(pantheios::integer(static_cast<long>(0)));
    pantheios::log_NOTICE(pantheios::integer(static_cast<unsigned long>(0)));
#ifdef STLSOFT_CF_64BIT_INT_SUPPORT
    pantheios::log_NOTICE(pantheios::integer(static_cast< ::pantheios::sint64_t>(0)));
    pantheios::log_NOTICE(pantheios::integer(static_cast< ::stlsoft::uint64_t>(0)));
#endif /* STLSOFT_CF_64BIT_INT_SUPPORT */


    // 3. Verification

    pantheios::be::test::Results  results = pantheios::be::test::results();

    XTESTS_TEST(!results.empty());
    XTESTS_TEST_INTEGER_EQUAL(8u, results.size());
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0", results[0].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0", results[1].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0", results[2].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0", results[3].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0", results[4].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0", results[5].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0", results[6].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0", results[7].statement);
}

static void test_1_02()
{
    // 1. Setup

    pantheios::be::test::reset();


    // 2. Create test data

    pantheios::log_NOTICE(pantheios::integer(0));
    pantheios::log_NOTICE(pantheios::integer(1));
    pantheios::log_NOTICE(pantheios::integer(-1));


    // 3. Verification

    pantheios::be::test::Results  results = pantheios::be::test::results();

    XTESTS_TEST(!results.empty());
    XTESTS_TEST_INTEGER_EQUAL(3u, results.size());
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0", results[0].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1", results[1].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("-1", results[2].statement);
}

static void test_1_03()
{
    // 1. Setup

    pantheios::be::test::reset();


    // 2. Create test data

    pantheios::log_NOTICE(pantheios::integer(0, 5));
    pantheios::log_NOTICE(pantheios::integer(1, 5));
    pantheios::log_NOTICE(pantheios::integer(-1, 5));


    // 3. Verification

    pantheios::be::test::Results  results = pantheios::be::test::results();

    XTESTS_TEST(!results.empty());
    XTESTS_TEST_INTEGER_EQUAL(3u, results.size());
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("    0", results[0].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("    1", results[1].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("   -1", results[2].statement);
}

static void test_1_04()
{
    // 1. Setup

    pantheios::be::test::reset();


    // 2. Create test data

    pantheios::log_NOTICE(pantheios::integer(0x0000, pantheios::fmt::fullHex));
    pantheios::log_NOTICE(pantheios::integer(0x0001, pantheios::fmt::fullHex));
    pantheios::log_NOTICE(pantheios::integer(0x8421, pantheios::fmt::fullHex));

    pantheios::log_NOTICE(pantheios::integer(0x0000, pantheios::fmt::fullHex | 1));
    pantheios::log_NOTICE(pantheios::integer(0x0001, pantheios::fmt::fullHex | 1));
    pantheios::log_NOTICE(pantheios::integer(0x8421, pantheios::fmt::fullHex | 1));

    pantheios::log_NOTICE(pantheios::integer(0x0000, pantheios::fmt::fullHex | 2));
    pantheios::log_NOTICE(pantheios::integer(0x0001, pantheios::fmt::fullHex | 2));
    pantheios::log_NOTICE(pantheios::integer(0x8421, pantheios::fmt::fullHex | 2));

    pantheios::log_NOTICE(pantheios::integer(0x0000, pantheios::fmt::fullHex | 3));
    pantheios::log_NOTICE(pantheios::integer(0x0001, pantheios::fmt::fullHex | 3));
    pantheios::log_NOTICE(pantheios::integer(0x8421, pantheios::fmt::fullHex | 3));

    pantheios::log_NOTICE(pantheios::integer(0x0000, pantheios::fmt::fullHex | 4));
    pantheios::log_NOTICE(pantheios::integer(0x0001, pantheios::fmt::fullHex | 4));
    pantheios::log_NOTICE(pantheios::integer(0x8421, pantheios::fmt::fullHex | 4));

    pantheios::log_NOTICE(pantheios::integer(0x0000, pantheios::fmt::fullHex | 5));
    pantheios::log_NOTICE(pantheios::integer(0x0001, pantheios::fmt::fullHex | 5));
    pantheios::log_NOTICE(pantheios::integer(0x8421, pantheios::fmt::fullHex | 5));

    pantheios::log_NOTICE(pantheios::integer(0x0000, pantheios::fmt::fullHex | 6));
    pantheios::log_NOTICE(pantheios::integer(0x0001, pantheios::fmt::fullHex | 6));
    pantheios::log_NOTICE(pantheios::integer(0x8421, pantheios::fmt::fullHex | 6));

    pantheios::log_NOTICE(pantheios::integer(0x0000, pantheios::fmt::fullHex | 7));
    pantheios::log_NOTICE(pantheios::integer(0x0001, pantheios::fmt::fullHex | 7));
    pantheios::log_NOTICE(pantheios::integer(0x8421, pantheios::fmt::fullHex | 7));

    pantheios::log_NOTICE(pantheios::integer(0x0000, pantheios::fmt::fullHex | 8));
    pantheios::log_NOTICE(pantheios::integer(0x0001, pantheios::fmt::fullHex | 8));
    pantheios::log_NOTICE(pantheios::integer(0x8421, pantheios::fmt::fullHex | 8));


    // 3. Verification

    pantheios::be::test::Results  results = pantheios::be::test::results();

    XTESTS_TEST(!results.empty());
    XTESTS_TEST_INTEGER_EQUAL(27u, results.size());

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0",    results[0].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1",    results[1].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x8421", results[2].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0",    results[3].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1",    results[4].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x8421", results[5].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00",   results[6].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x01",   results[7].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x8421", results[8].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000",  results[9].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x001",  results[10].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x8421", results[11].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000", results[12].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0001", results[13].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x8421", results[14].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00000", results[15].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00001", results[16].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x08421", results[17].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000000", results[18].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000001", results[19].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x008421", results[20].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000000", results[21].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000001", results[22].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0008421", results[23].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00000000", results[24].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00000001", results[25].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00008421", results[26].statement);
}

static void test_1_05()
{
    // 1. Setup

    pantheios::be::test::reset();


    // 2. Create test data

    pantheios::log_NOTICE(pantheios::integer(0, -5));
    pantheios::log_NOTICE(pantheios::integer(1, -5));
    pantheios::log_NOTICE(pantheios::integer(-1, -5));


    // 3. Verification

    pantheios::be::test::Results  results = pantheios::be::test::results();

    XTESTS_TEST(!results.empty());
    XTESTS_TEST_INTEGER_EQUAL(3u, results.size());
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0    ", results[0].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1    ", results[1].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("-1   ", results[2].statement);
}

static void test_1_06()
{
    // 1. Setup

    pantheios::be::test::reset();


    // 2. Create test data

    pantheios::log_NOTICE(pantheios::integer(0x0000, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(0x0001, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(0x8421, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));

    pantheios::log_NOTICE(pantheios::integer(0x0000, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 1));
    pantheios::log_NOTICE(pantheios::integer(0x0001, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 1));
    pantheios::log_NOTICE(pantheios::integer(0x8421, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 1));

    pantheios::log_NOTICE(pantheios::integer(0x0000, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 2));
    pantheios::log_NOTICE(pantheios::integer(0x0001, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 2));
    pantheios::log_NOTICE(pantheios::integer(0x8421, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 2));

    pantheios::log_NOTICE(pantheios::integer(0x0000, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 3));
    pantheios::log_NOTICE(pantheios::integer(0x0001, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 3));
    pantheios::log_NOTICE(pantheios::integer(0x8421, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 3));

    pantheios::log_NOTICE(pantheios::integer(0x0000, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 4));
    pantheios::log_NOTICE(pantheios::integer(0x0001, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 4));
    pantheios::log_NOTICE(pantheios::integer(0x8421, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 4));

    pantheios::log_NOTICE(pantheios::integer(0x0000, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 5));
    pantheios::log_NOTICE(pantheios::integer(0x0001, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 5));
    pantheios::log_NOTICE(pantheios::integer(0x8421, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 5));

    pantheios::log_NOTICE(pantheios::integer(0x0000, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 6));
    pantheios::log_NOTICE(pantheios::integer(0x0001, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 6));
    pantheios::log_NOTICE(pantheios::integer(0x8421, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 6));

    pantheios::log_NOTICE(pantheios::integer(0x0000, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 7));
    pantheios::log_NOTICE(pantheios::integer(0x0001, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 7));
    pantheios::log_NOTICE(pantheios::integer(0x8421, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 7));

    pantheios::log_NOTICE(pantheios::integer(0x0000, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 8));
    pantheios::log_NOTICE(pantheios::integer(0x0001, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 8));
    pantheios::log_NOTICE(pantheios::integer(0x8421, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 8));


    // 3. Verification

    pantheios::be::test::Results  results = pantheios::be::test::results();

    XTESTS_TEST(!results.empty());
    XTESTS_TEST_INTEGER_EQUAL(27u, results.size());

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0",    results[0].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1",    results[1].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x8421", results[2].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0",    results[3].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1",    results[4].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x8421", results[5].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL(" 0x0",   results[6].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL(" 0x1",   results[7].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x8421", results[8].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("  0x0",  results[9].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("  0x1",  results[10].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x8421", results[11].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("   0x0", results[12].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("   0x1", results[13].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x8421", results[14].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("    0x0", results[15].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("    0x1", results[16].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL(" 0x8421", results[17].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("     0x0", results[18].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("     0x1", results[19].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("  0x8421", results[20].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("      0x0", results[21].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("      0x1", results[22].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("   0x8421", results[23].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("       0x0", results[24].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("       0x1", results[25].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("    0x8421", results[26].statement);
}

static void test_1_07()
{
#ifdef STLSOFT_CF_64BIT_INT_SUPPORT
    // 1. Setup

    pantheios::be::test::reset();

    // 2. Create test data

    pantheios::sint64_t   i0 = static_cast<pantheios::sint64_t>(0);
    pantheios::sint64_t   i1 = static_cast<pantheios::sint64_t>(1);
    pantheios::sint64_t   i2 = static_cast<pantheios::sint64_t>(STLSOFT_GEN_UINT64_SUFFIX(0x1234567812345678));


    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 1));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 1));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 1));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 2));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 2));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 2));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 3));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 3));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 3));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 4));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 4));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 4));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 5));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 5));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 5));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 6));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 6));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 6));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 7));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 7));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 7));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 8));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 8));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 8));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 9));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 9));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 9));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 10));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 10));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 10));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 11));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 11));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 11));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 12));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 12));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 12));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 13));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 13));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 13));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 14));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 14));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 14));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 15));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 15));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 15));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 16));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 16));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 16));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 17));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 17));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 17));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 18));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 18));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 18));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 19));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 19));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 19));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 20));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 20));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 20));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 21));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 21));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 21));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 22));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 22));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 22));


    // 3. Verification

    pantheios::be::test::Results  results = pantheios::be::test::results();

    XTESTS_TEST(!results.empty());
    XTESTS_TEST_INTEGER_EQUAL(69u, results.size());

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0",                results[0].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1",                results[1].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[2].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0",                results[3].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1",                results[4].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[5].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00",               results[6].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x01",               results[7].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[8].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000",              results[9].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x001",              results[10].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[11].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000",             results[12].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0001",             results[13].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[14].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00000",            results[15].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00001",            results[16].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[17].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000000",           results[18].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000001",           results[19].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[20].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000000",          results[21].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000001",          results[22].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[23].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00000000",         results[24].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00000001",         results[25].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[26].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000000000",        results[27].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000000001",        results[28].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[29].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000000000",       results[30].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000000001",       results[31].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[32].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00000000000",      results[33].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00000000001",      results[34].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[35].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000000000000",     results[36].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000000000001",     results[37].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[38].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000000000000",    results[39].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000000000001",    results[40].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[41].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00000000000000",   results[42].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00000000000001",   results[43].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[44].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000000000000000",  results[45].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000000000000001",  results[46].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[47].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000000000000000", results[48].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000000000000001", results[49].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[50].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00000000000000000", results[51].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00000000000000001", results[52].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x01234567812345678", results[53].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000000000000000000", results[54].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000000000000000001", results[55].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x001234567812345678", results[56].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000000000000000000", results[57].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000000000000000001", results[58].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0001234567812345678", results[59].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00000000000000000000", results[60].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00000000000000000001", results[61].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00001234567812345678", results[62].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000000000000000000000", results[63].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000000000000000000001", results[64].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000001234567812345678", results[65].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000000000000000000000", results[66].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000000000000000000001", results[67].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000001234567812345678", results[68].statement);
#endif /* STLSOFT_CF_64BIT_INT_SUPPORT */
}

static void test_1_08()
{
#ifdef STLSOFT_CF_64BIT_INT_SUPPORT
    // 1. Setup

    pantheios::be::test::reset();

    // 2. Create test data

    stlsoft::uint64_t   i0 = static_cast<pantheios::sint64_t>(0);
    stlsoft::uint64_t   i1 = static_cast<pantheios::sint64_t>(1);
    stlsoft::uint64_t   i2 = static_cast<pantheios::sint64_t>(STLSOFT_GEN_UINT64_SUFFIX(0x1234567812345678));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 1));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 1));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 1));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 2));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 2));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 2));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 3));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 3));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 3));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 4));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 4));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 4));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 5));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 5));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 5));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 6));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 6));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 6));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 7));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 7));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 7));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 8));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 8));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 8));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 9));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 9));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 9));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 10));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 10));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 10));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 11));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 11));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 11));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 12));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 12));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 12));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 13));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 13));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 13));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 14));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 14));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 14));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 15));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 15));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 15));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 16));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 16));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 16));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 17));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 17));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 17));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 18));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 18));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 18));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 19));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 19));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 19));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 20));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 20));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 20));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 21));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 21));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 21));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::fullHex | 22));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::fullHex | 22));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::fullHex | 22));


    // 3. Verification

    pantheios::be::test::Results  results = pantheios::be::test::results();

    XTESTS_TEST(!results.empty());
    XTESTS_TEST_INTEGER_EQUAL(69u, results.size());

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0",                results[0].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1",                results[1].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[2].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0",                results[3].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1",                results[4].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[5].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00",               results[6].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x01",               results[7].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[8].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000",              results[9].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x001",              results[10].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[11].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000",             results[12].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0001",             results[13].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[14].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00000",            results[15].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00001",            results[16].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[17].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000000",           results[18].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000001",           results[19].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[20].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000000",          results[21].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000001",          results[22].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[23].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00000000",         results[24].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00000001",         results[25].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[26].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000000000",        results[27].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000000001",        results[28].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[29].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000000000",       results[30].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000000001",       results[31].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[32].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00000000000",      results[33].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00000000001",      results[34].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[35].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000000000000",     results[36].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000000000001",     results[37].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[38].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000000000000",    results[39].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000000000001",    results[40].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[41].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00000000000000",   results[42].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00000000000001",   results[43].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[44].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000000000000000",  results[45].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000000000000001",  results[46].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[47].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000000000000000", results[48].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000000000000001", results[49].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[50].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00000000000000000", results[51].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00000000000000001", results[52].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x01234567812345678", results[53].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000000000000000000", results[54].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000000000000000001", results[55].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x001234567812345678", results[56].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000000000000000000", results[57].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000000000000000001", results[58].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0001234567812345678", results[59].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00000000000000000000", results[60].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00000000000000000001", results[61].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x00001234567812345678", results[62].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000000000000000000000", results[63].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000000000000000000001", results[64].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x000001234567812345678", results[65].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000000000000000000000", results[66].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000000000000000000001", results[67].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0000001234567812345678", results[68].statement);
#endif /* STLSOFT_CF_64BIT_INT_SUPPORT */
}

static void test_1_09()
{
#ifdef STLSOFT_CF_64BIT_INT_SUPPORT
    // 1. Setup

    pantheios::be::test::reset();

    // 2. Create test data

    pantheios::sint64_t   i0 = static_cast<pantheios::sint64_t>(0);
    pantheios::sint64_t   i1 = static_cast<pantheios::sint64_t>(1);
    pantheios::sint64_t   i2 = static_cast<pantheios::sint64_t>(STLSOFT_GEN_UINT64_SUFFIX(0x1234567812345678));


    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 1));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 1));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 1));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 2));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 2));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 2));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 3));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 3));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 3));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 4));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 4));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 4));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 5));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 5));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 5));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 6));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 6));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 6));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 7));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 7));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 7));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 8));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 8));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 8));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 9));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 9));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 9));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 10));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 10));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 10));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 11));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 11));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 11));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 12));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 12));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 12));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 13));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 13));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 13));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 14));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 14));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 14));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 15));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 15));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 15));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 16));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 16));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 16));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 17));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 17));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 17));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 18));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 18));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 18));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 19));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 19));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 19));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 20));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 20));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 20));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 21));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 21));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 21));

    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 22));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 22));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex | 22));


    // 3. Verification

    pantheios::be::test::Results  results = pantheios::be::test::results();

    XTESTS_TEST(!results.empty());
    XTESTS_TEST_INTEGER_EQUAL(69u, results.size());

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0",                results[0].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1",                results[1].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[2].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0",                results[3].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1",                results[4].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[5].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL(" 0x0",               results[6].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL(" 0x1",               results[7].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[8].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("  0x0",              results[9].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("  0x1",              results[10].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[11].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("   0x0",             results[12].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("   0x1",             results[13].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[14].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("    0x0",            results[15].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("    0x1",            results[16].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[17].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("     0x0",           results[18].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("     0x1",           results[19].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[20].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("      0x0",          results[21].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("      0x1",          results[22].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[23].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("       0x0",         results[24].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("       0x1",         results[25].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[26].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("        0x0",        results[27].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("        0x1",        results[28].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[29].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("         0x0",       results[30].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("         0x1",       results[31].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[32].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("          0x0",      results[33].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("          0x1",      results[34].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[35].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("           0x0",     results[36].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("           0x1",     results[37].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[38].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("            0x0",    results[39].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("            0x1",    results[40].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[41].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("             0x0",   results[42].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("             0x1",   results[43].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[44].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("              0x0",  results[45].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("              0x1",  results[46].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[47].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("               0x0", results[48].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("               0x1", results[49].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[50].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("                0x0", results[51].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("                0x1", results[52].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL(" 0x1234567812345678", results[53].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("                 0x0", results[54].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("                 0x1", results[55].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("  0x1234567812345678", results[56].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("                  0x0", results[57].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("                  0x1", results[58].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("   0x1234567812345678", results[59].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("                   0x0", results[60].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("                   0x1", results[61].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("    0x1234567812345678", results[62].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("                    0x0", results[63].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("                    0x1", results[64].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("     0x1234567812345678", results[65].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("                     0x0", results[66].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("                     0x1", results[67].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("      0x1234567812345678", results[68].statement);
#endif /* STLSOFT_CF_64BIT_INT_SUPPORT */
}

static void test_1_10()
{
#ifdef STLSOFT_CF_64BIT_INT_SUPPORT
    // 1. Setup

    pantheios::be::test::reset();

    // 2. Create test data

    pantheios::sint64_t   i0 = static_cast<pantheios::sint64_t>(0);
    pantheios::sint64_t   i1 = static_cast<pantheios::sint64_t>(1);
    pantheios::sint64_t   i2 = static_cast<pantheios::sint64_t>(STLSOFT_GEN_UINT64_SUFFIX(0x1234567812345678));


    pantheios::log_NOTICE(pantheios::integer(i0, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i1, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i2, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));

    pantheios::log_NOTICE(pantheios::integer(i0, -1, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i1, -1, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i2, -1, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));

    pantheios::log_NOTICE(pantheios::integer(i0, -2, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i1, -2, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i2, -2, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));

    pantheios::log_NOTICE(pantheios::integer(i0, -3, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i1, -3, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i2, -3, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));

    pantheios::log_NOTICE(pantheios::integer(i0, -4, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i1, -4, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i2, -4, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));

    pantheios::log_NOTICE(pantheios::integer(i0, -5, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i1, -5, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i2, -5, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));

    pantheios::log_NOTICE(pantheios::integer(i0, -6, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i1, -6, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i2, -6, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));

    pantheios::log_NOTICE(pantheios::integer(i0, -7, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i1, -7, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i2, -7, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));

    pantheios::log_NOTICE(pantheios::integer(i0, -8, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i1, -8, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i2, -8, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));

    pantheios::log_NOTICE(pantheios::integer(i0, -9, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i1, -9, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i2, -9, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));

    pantheios::log_NOTICE(pantheios::integer(i0, -10, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i1, -10, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i2, -10, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));

    pantheios::log_NOTICE(pantheios::integer(i0, -11, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i1, -11, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i2, -11, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));

    pantheios::log_NOTICE(pantheios::integer(i0, -12, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i1, -12, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i2, -12, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));

    pantheios::log_NOTICE(pantheios::integer(i0, -13, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i1, -13, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i2, -13, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));

    pantheios::log_NOTICE(pantheios::integer(i0, -14, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i1, -14, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i2, -14, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));

    pantheios::log_NOTICE(pantheios::integer(i0, -15, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i1, -15, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i2, -15, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));

    pantheios::log_NOTICE(pantheios::integer(i0, -16, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i1, -16, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i2, -16, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));

    pantheios::log_NOTICE(pantheios::integer(i0, -17, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i1, -17, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i2, -17, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));

    pantheios::log_NOTICE(pantheios::integer(i0, -18, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i1, -18, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i2, -18, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));

    pantheios::log_NOTICE(pantheios::integer(i0, -19, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i1, -19, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i2, -19, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));

    pantheios::log_NOTICE(pantheios::integer(i0, -20, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i1, -20, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i2, -20, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));

    pantheios::log_NOTICE(pantheios::integer(i0, -21, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i1, -21, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i2, -21, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));

    pantheios::log_NOTICE(pantheios::integer(i0, -22, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i1, -22, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));
    pantheios::log_NOTICE(pantheios::integer(i2, -22, pantheios::fmt::zeroXPrefix | pantheios::fmt::hex));


    // 3. Verification

    pantheios::be::test::Results  results = pantheios::be::test::results();

    XTESTS_TEST(!results.empty());
    XTESTS_TEST_INTEGER_EQUAL(69u, results.size());

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0",                results[0].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1",                results[1].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[2].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0",                results[3].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1",                results[4].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[5].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0 ",               results[6].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1 ",               results[7].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[8].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0  ",              results[9].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1  ",              results[10].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[11].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0   ",             results[12].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1   ",             results[13].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[14].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0    ",            results[15].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1    ",            results[16].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[17].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0     ",           results[18].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1     ",           results[19].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[20].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0      ",          results[21].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1      ",          results[22].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[23].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0       ",         results[24].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1       ",         results[25].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[26].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0        ",        results[27].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1        ",        results[28].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[29].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0         ",       results[30].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1         ",       results[31].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[32].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0          ",      results[33].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1          ",      results[34].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[35].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0           ",     results[36].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1           ",     results[37].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[38].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0            ",    results[39].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1            ",    results[40].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[41].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0             ",   results[42].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1             ",   results[43].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[44].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0              ",  results[45].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1              ",  results[46].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[47].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0               ", results[48].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1               ", results[49].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678", results[50].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0                ", results[51].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1                ", results[52].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678 ", results[53].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0                 ", results[54].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1                 ", results[55].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678  ", results[56].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0                  ", results[57].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1                  ", results[58].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678   ", results[59].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0                   ", results[60].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1                   ", results[61].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678    ", results[62].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0                    ", results[63].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1                    ", results[64].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678     ", results[65].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x0                     ", results[66].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1                     ", results[67].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0x1234567812345678      ", results[68].statement);
#endif /* STLSOFT_CF_64BIT_INT_SUPPORT */
}

static void test_1_11()
{
#ifdef STLSOFT_CF_64BIT_INT_SUPPORT
    // 1. Setup

    pantheios::be::test::reset();

    // 2. Create test data

    pantheios::sint64_t   i0 = static_cast<pantheios::sint64_t>(0);
    pantheios::sint64_t   i1 = static_cast<pantheios::sint64_t>(1);
    pantheios::sint64_t   i2 = static_cast<pantheios::sint64_t>(STLSOFT_GEN_UINT64_SUFFIX(1234567812345678));


    pantheios::log_NOTICE(pantheios::integer(i0));
    pantheios::log_NOTICE(pantheios::integer(i1));
    pantheios::log_NOTICE(pantheios::integer(i2));

    pantheios::log_NOTICE(pantheios::integer(i0, -1));
    pantheios::log_NOTICE(pantheios::integer(i1, -1));
    pantheios::log_NOTICE(pantheios::integer(i2, -1));

    pantheios::log_NOTICE(pantheios::integer(i0, -2));
    pantheios::log_NOTICE(pantheios::integer(i1, -2));
    pantheios::log_NOTICE(pantheios::integer(i2, -2));

    pantheios::log_NOTICE(pantheios::integer(i0, -3));
    pantheios::log_NOTICE(pantheios::integer(i1, -3));
    pantheios::log_NOTICE(pantheios::integer(i2, -3));

    pantheios::log_NOTICE(pantheios::integer(i0, -4));
    pantheios::log_NOTICE(pantheios::integer(i1, -4));
    pantheios::log_NOTICE(pantheios::integer(i2, -4));

    pantheios::log_NOTICE(pantheios::integer(i0, -5));
    pantheios::log_NOTICE(pantheios::integer(i1, -5));
    pantheios::log_NOTICE(pantheios::integer(i2, -5));

    pantheios::log_NOTICE(pantheios::integer(i0, -6));
    pantheios::log_NOTICE(pantheios::integer(i1, -6));
    pantheios::log_NOTICE(pantheios::integer(i2, -6));

    pantheios::log_NOTICE(pantheios::integer(i0, -7));
    pantheios::log_NOTICE(pantheios::integer(i1, -7));
    pantheios::log_NOTICE(pantheios::integer(i2, -7));

    pantheios::log_NOTICE(pantheios::integer(i0, -8));
    pantheios::log_NOTICE(pantheios::integer(i1, -8));
    pantheios::log_NOTICE(pantheios::integer(i2, -8));

    pantheios::log_NOTICE(pantheios::integer(i0, -9));
    pantheios::log_NOTICE(pantheios::integer(i1, -9));
    pantheios::log_NOTICE(pantheios::integer(i2, -9));

    pantheios::log_NOTICE(pantheios::integer(i0, -10));
    pantheios::log_NOTICE(pantheios::integer(i1, -10));
    pantheios::log_NOTICE(pantheios::integer(i2, -10));

    pantheios::log_NOTICE(pantheios::integer(i0, -11));
    pantheios::log_NOTICE(pantheios::integer(i1, -11));
    pantheios::log_NOTICE(pantheios::integer(i2, -11));

    pantheios::log_NOTICE(pantheios::integer(i0, -12));
    pantheios::log_NOTICE(pantheios::integer(i1, -12));
    pantheios::log_NOTICE(pantheios::integer(i2, -12));

    pantheios::log_NOTICE(pantheios::integer(i0, -13));
    pantheios::log_NOTICE(pantheios::integer(i1, -13));
    pantheios::log_NOTICE(pantheios::integer(i2, -13));

    pantheios::log_NOTICE(pantheios::integer(i0, -14));
    pantheios::log_NOTICE(pantheios::integer(i1, -14));
    pantheios::log_NOTICE(pantheios::integer(i2, -14));

    pantheios::log_NOTICE(pantheios::integer(i0, -15));
    pantheios::log_NOTICE(pantheios::integer(i1, -15));
    pantheios::log_NOTICE(pantheios::integer(i2, -15));

    pantheios::log_NOTICE(pantheios::integer(i0, -16));
    pantheios::log_NOTICE(pantheios::integer(i1, -16));
    pantheios::log_NOTICE(pantheios::integer(i2, -16));

    pantheios::log_NOTICE(pantheios::integer(i0, -17));
    pantheios::log_NOTICE(pantheios::integer(i1, -17));
    pantheios::log_NOTICE(pantheios::integer(i2, -17));

    pantheios::log_NOTICE(pantheios::integer(i0, -18));
    pantheios::log_NOTICE(pantheios::integer(i1, -18));
    pantheios::log_NOTICE(pantheios::integer(i2, -18));

    pantheios::log_NOTICE(pantheios::integer(i0, -19));
    pantheios::log_NOTICE(pantheios::integer(i1, -19));
    pantheios::log_NOTICE(pantheios::integer(i2, -19));

    pantheios::log_NOTICE(pantheios::integer(i0, -20));
    pantheios::log_NOTICE(pantheios::integer(i1, -20));
    pantheios::log_NOTICE(pantheios::integer(i2, -20));

    pantheios::log_NOTICE(pantheios::integer(i0, -21));
    pantheios::log_NOTICE(pantheios::integer(i1, -21));
    pantheios::log_NOTICE(pantheios::integer(i2, -21));

    pantheios::log_NOTICE(pantheios::integer(i0, -22));
    pantheios::log_NOTICE(pantheios::integer(i1, -22));
    pantheios::log_NOTICE(pantheios::integer(i2, -22));


    // 3. Verification

    pantheios::be::test::Results  results = pantheios::be::test::results();

    XTESTS_TEST(!results.empty());
    XTESTS_TEST_INTEGER_EQUAL(69u, results.size());

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0",                results[0].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1",                results[1].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1234567812345678", results[2].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0",                results[3].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1",                results[4].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1234567812345678", results[5].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0 ",               results[6].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1 ",               results[7].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1234567812345678", results[8].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0  ",              results[9].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1  ",              results[10].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1234567812345678", results[11].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0   ",             results[12].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1   ",             results[13].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1234567812345678", results[14].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0    ",            results[15].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1    ",            results[16].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1234567812345678", results[17].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0     ",           results[18].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1     ",           results[19].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1234567812345678", results[20].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0      ",          results[21].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1      ",          results[22].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1234567812345678", results[23].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0       ",         results[24].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1       ",         results[25].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1234567812345678", results[26].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0        ",        results[27].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1        ",        results[28].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1234567812345678", results[29].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0         ",       results[30].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1         ",       results[31].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1234567812345678", results[32].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0          ",      results[33].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1          ",      results[34].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1234567812345678", results[35].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0           ",     results[36].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1           ",     results[37].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1234567812345678", results[38].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0            ",    results[39].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1            ",    results[40].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1234567812345678", results[41].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0             ",   results[42].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1             ",   results[43].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1234567812345678", results[44].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0              ",  results[45].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1              ",  results[46].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1234567812345678", results[47].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0               ", results[48].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1               ", results[49].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1234567812345678", results[50].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0                ", results[51].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1                ", results[52].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1234567812345678 ", results[53].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0                 ", results[54].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1                 ", results[55].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1234567812345678  ", results[56].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0                  ", results[57].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1                  ", results[58].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1234567812345678   ", results[59].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0                   ", results[60].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1                   ", results[61].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1234567812345678    ", results[62].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0                    ", results[63].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1                    ", results[64].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1234567812345678     ", results[65].statement);

    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("0                     ", results[66].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1                     ", results[67].statement);
    XTESTS_TEST_MULTIBYTE_STRINGS_EQUAL("1234567812345678      ", results[68].statement);
#endif /* STLSOFT_CF_64BIT_INT_SUPPORT */
}

/* ////////////////////////////////////////////////////////////////////// */
