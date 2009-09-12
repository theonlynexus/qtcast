/* /////////////////////////////////////////////////////////////////////////
 * File:        test/component/test.component.log.1/test.component.log.1.cpp
 *
 * Purpose:     Implementation file for the test.component.log.1 project.
 *
 * Created:     25th November 2007
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


#include <pantheios/util/test/compiler_warnings_suppression.first_include.h>

/* xTests Header Files */
#include <xtests/xtests.h>

/* Pantheios Header Files */
#include <pantheios/pantheios.hpp>
#include <pantheios/backends/bec.test.h>
#include <pantheios/frontends/stock.h>

#include <pantheios/util/test/compiler_warnings_suppression.last_include.h>

/* ////////////////////////////////////////////////////////////////////// */

PANTHEIOS_EXTERN_C const char PANTHEIOS_FE_PROCESS_IDENTITY[] = "test.component.log.1";

/* /////////////////////////////////////////////////////////////////////////
 * Forward Declarations
 */

static void test_01();
static void test_02();
static void test_03();
static void test_04();
static void test_05();
static void test_06();
static void test_07();
static void test_08();
static void test_09();
static void test_10();
static void test_11();
static void test_12();
static void test_13();
static void test_14();
static void test_15();
static void test_16();
static void test_17();
static void test_18();
static void test_19();
static void test_20();
static void test_21();
static void test_22();
static void test_23();
static void test_24();
static void test_25();
static void test_26();
static void test_27();
static void test_28();
static void test_29();

/* ////////////////////////////////////////////////////////////////////// */

int main(int argc, char** argv)
{
    int retCode = EXIT_SUCCESS;
    int verbosity = 2;

    XTESTS_COMMANDLINE_PARSEVERBOSITY(argc, argv, &verbosity);

    if(XTESTS_START_RUNNER("test.component.log.1", verbosity))
    {
        XTESTS_RUN_CASE(test_01);
        XTESTS_RUN_CASE(test_02);
        XTESTS_RUN_CASE(test_03);
        XTESTS_RUN_CASE(test_04);
        XTESTS_RUN_CASE(test_05);
        XTESTS_RUN_CASE(test_06);
        XTESTS_RUN_CASE(test_07);
        XTESTS_RUN_CASE(test_08);
        XTESTS_RUN_CASE(test_09);
        XTESTS_RUN_CASE(test_10);
        XTESTS_RUN_CASE(test_11);
        XTESTS_RUN_CASE(test_12);
        XTESTS_RUN_CASE(test_13);
        XTESTS_RUN_CASE(test_14);
        XTESTS_RUN_CASE(test_15);
        XTESTS_RUN_CASE(test_16);
        XTESTS_RUN_CASE(test_17);
        XTESTS_RUN_CASE(test_18);
        XTESTS_RUN_CASE(test_19);
        XTESTS_RUN_CASE(test_20);
        XTESTS_RUN_CASE(test_21);
        XTESTS_RUN_CASE(test_22);
        XTESTS_RUN_CASE(test_23);
        XTESTS_RUN_CASE(test_24);
        XTESTS_RUN_CASE(test_25);
        XTESTS_RUN_CASE(test_26);
        XTESTS_RUN_CASE(test_27);
        XTESTS_RUN_CASE(test_28);
        XTESTS_RUN_CASE(test_29);

        XTESTS_PRINT_RESULTS();

        XTESTS_END_RUNNER_UPDATE_EXITCODE(&retCode);
    }
    else
    {
        retCode = EXIT_FAILURE;
    }

    return retCode;
}

/* ////////////////////////////////////////////////////////////////////// */

static void test_01()
{
    // 1. Setup

    pantheios::be::test::reset();


    // 2. Create test data


    // 3. Verification

    pantheios::be::test::Results  results = pantheios::be::test::results();

    XTESTS_TEST(results.empty());
    XTESTS_TEST(0 == results.size());
}

static void test_02()
{
    // 1. Setup

    pantheios::be::test::reset();


    // 2. Create test data

    pantheios::log(pantheios::notice, "");


    // 3. Verification

    pantheios::be::test::Results  results = pantheios::be::test::results();

    XTESTS_TEST(!results.empty());
    XTESTS_TEST(1 == results.size());
    XTESTS_TEST("" == results[0].statement);
    XTESTS_TEST(pantheios::notice == results[0].severity);
}

static void test_03()
{
    // 1. Setup

    pantheios::be::test::reset();


    // 2. Create test data

    pantheios::log(pantheios::notice, "abc");


    // 3. Verification

    pantheios::be::test::Results  results = pantheios::be::test::results();

    XTESTS_TEST(!results.empty());
    XTESTS_TEST(1 == results.size());
    XTESTS_TEST("abc" == results[0].statement);
    XTESTS_TEST(pantheios::notice == results[0].severity);
}

static void test_04()
{
    // 1. Setup

    pantheios::be::test::reset();


    // 2. Create test data

    pantheios::log(pantheios::informational, "abc", "def");



    // 3. Verification

    pantheios::be::test::Results  results = pantheios::be::test::results();

    XTESTS_TEST(1 == results.size());
    XTESTS_TEST("abcdef" == results[0].statement);
    XTESTS_TEST(pantheios::informational == results[0].severity);
}

static void test_05()
{
    // 1. Setup

    pantheios::be::test::reset();


    // 2. Create test data

    pantheios::log(pantheios::informational, "abc", "def", "ghi");



    // 3. Verification

    pantheios::be::test::Results  results = pantheios::be::test::results();

    XTESTS_TEST(1 == results.size());
    XTESTS_TEST("abcdefghi" == results[0].statement);
    XTESTS_TEST(pantheios::informational == results[0].severity);
}

static void test_06()
{
    // 1. Setup

    pantheios::be::test::reset();


    // 2. Create test data

    pantheios::log(pantheios::informational, "abc", "def", "ghi", "jk", "lm", "no", "pq", "rs", "tu", "vw", "xy", "z");



    // 3. Verification

    pantheios::be::test::Results  results = pantheios::be::test::results();

    XTESTS_TEST(1 == results.size());
    XTESTS_TEST("abcdefghijklmnopqrstuvwxyz" == results[0].statement);
    XTESTS_TEST(pantheios::informational == results[0].severity);
}

static void test_07()
{
    // 1. Setup

    pantheios::be::test::reset();


    // 2. Create test data

    pantheios::log(pantheios::informational, "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z");



    // 3. Verification

    pantheios::be::test::Results  results = pantheios::be::test::results();

    XTESTS_TEST(1 == results.size());
    XTESTS_TEST("abcdefghijklmnopqrstuvwxyz" == results[0].statement);
    XTESTS_TEST(pantheios::informational == results[0].severity);
}

static void test_08()
{}

static void test_09()
{}

static void test_10()
{
    // 1. Setup

    pantheios::be::test::reset();


    // 2. Create test data

    pantheios::log(pantheios::informational, "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z");
    pantheios::log(pantheios::informational, "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z");



    // 3. Verification

    pantheios::be::test::Results  results = pantheios::be::test::results();

    XTESTS_TEST(2 == results.size());
    XTESTS_TEST("abcdefghijklmnopqrstuvwxyz" == results[0].statement);
    XTESTS_TEST("ABCDEFGHIJKLMNOPQRSTUVWXYZ" == results[1].statement);
}

static void test_11()
{
    // 1. Setup

    pantheios::be::test::reset();


    // 2. Create test data
    const size_t    numEntries  =   1000;

    { for(size_t i = 0; i < numEntries; ++i)
    {
        if(0 == (i % 2))
        {
            pantheios::log(pantheios::informational, "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z");
        }
        else
        {
            pantheios::log(pantheios::informational, "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z");
        }
    }}



    // 3. Verification

    pantheios::be::test::Results  results = pantheios::be::test::results();

    XTESTS_TEST(numEntries == results.size());
    { for(size_t i = 0; i < numEntries; ++i)
    {
        if(0 == (i % 2))
        {
            XTESTS_TEST("abcdefghijklmnopqrstuvwxyz" == results[i].statement);
        }
        else
        {
            XTESTS_TEST("ABCDEFGHIJKLMNOPQRSTUVWXYZ" == results[i].statement);
        }
    }}
}

static void test_12()
{}

static void test_13()
{}

static void test_14()
{}

static void test_15()
{}

static void test_16()
{}

static void test_17()
{}

static void test_18()
{}

static void test_19()
{}

static void test_20()
{}

static void test_21()
{
    // 1. Setup

    pantheios::be::test::reset();


    // 2. Create test data

    std::string msgEl1(256, '~');
    std::string msgEl2(4096, '#');


    pantheios::log(pantheios::informational, msgEl1, msgEl2);



    // 3. Verification

    pantheios::be::test::Results  results = pantheios::be::test::results();

    XTESTS_TEST(1 == results.size());
    XTESTS_TEST(msgEl1 + msgEl2 == results[0].statement);
    XTESTS_TEST(pantheios::informational == results[0].severity);
}

static void test_22()
{
    // 1. Setup

    pantheios::be::test::reset();


    // 2. Create test data

    std::string msgEl1(2560, '~');
    std::string msgEl2(40960, '#');

    pantheios::log(pantheios::informational, msgEl1, msgEl2);


    // 3. Verification

    pantheios::be::test::Results  results = pantheios::be::test::results();

    XTESTS_TEST(1 == results.size());
    XTESTS_TEST(msgEl1 + msgEl2 == results[0].statement);
    XTESTS_TEST(pantheios::informational == results[0].severity);
}

static void test_23()
{}

static void test_24()
{}

static void test_25()
{}

static void test_26()
{}

static void test_27()
{}

static void test_28()
{}

static void test_29()
{}

/* ////////////////////////////////////////////////////////////////////// */
