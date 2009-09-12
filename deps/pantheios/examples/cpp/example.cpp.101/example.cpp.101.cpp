/* /////////////////////////////////////////////////////////////////////////
 * File:        examples/cpp/example.cpp.101/example.cpp.101.cpp
 *
 * Purpose:     C++ example program for introducing the basic essential
 *              features of Pantheios when using the C++ API.
 *              Demonstrates:
 *
 *                - how the Pantheios libraries do not need to be explicitly
 *                  initialised in a C++ program
 *                - use of pantheios::log()
 *
 * Created:     17th January 2008
 * Updated:     8th July 2009
 *
 * www:         http://www.pantheios.org/
 *
 * License:     This source code is placed into the public domain 2006
 *              by Synesis Software Pty Ltd. There are no restrictions
 *              whatsoever to your use of the software.
 *
 *              This software is provided "as is", and any warranties,
 *              express or implied, of any kind and for any purpose, are
 *              disclaimed.
 *
 * ////////////////////////////////////////////////////////////////////// */


/* Pantheios Header Files */
#include <pantheios/pantheios.hpp>      /* The root header for Panthieos when using the C++-API. */
#include <pantheios/inserters.hpp>      /* Includes all headers for inserters, incl. integer, real, character */
#include <pantheios/frontends/stock.h>  /* Declares the process identity symbol PANTHEIOS_FE_PROCESS_IDENTITY */


/* Standard C Header Files */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* /////////////////////////////////////////////////////////////////////////
 * Globals
 */

const char PANTHEIOS_FE_PROCESS_IDENTITY[] = "example.cpp.101";


/* /////////////////////////////////////////////////////////////////////////
 * main
 */

int main()
{
    /* Note: there is no need to explicitly initialise the Pantheios
     * libraries when the program contains 1 or more C++ compilation units
     * that, like this one, #include <pantheios/pantheios.hpp>, since that
     * file contains mechanisms within it that cause the initialisation to
     * be done automatically.
     */


    /* The libraries are now initialised, so we can output diagnostic
     * logging statements.
     */

    /* 1. use pantheios::log(), which takes a severity level and between
     * 1 and 32 statement element parameters
     */

    pantheios::log(PANTHEIOS_SEV_NOTICE, "The");
    pantheios::log(PANTHEIOS_SEV_NOTICE, "log() ", "method");
    pantheios::log(PANTHEIOS_SEV_NOTICE, "can ", "output ", "any");
    pantheios::log(PANTHEIOS_SEV_NOTICE, "number ", "of ", "parameters ", "between");
    pantheios::log(PANTHEIOS_SEV_NOTICE, "1");
    pantheios::log(PANTHEIOS_SEV_NOTICE, "and");
    pantheios::log(PANTHEIOS_SEV_NOTICE, "01, ", "02, ", "03, ", "04, ", "05, ", "06, ", "07, ", "08, ", "09, ", "10, ", "11, ", "12, ", "13, ", "14, ", "15, ", "16, ", "17, ", "18, ", "19, ", "20, ", "21, ", "22, ", "23, ", "24, ", "25, ", "26, ", "27, ", "28, ", "29, ", "30, ", "31, ", "32");



    /* 2. use pantheios::log() to output some fundamental type
     * instances
     */

    int     i = 10;
    double  d = 20.20;
    char    c = 'c';


    pantheios::log(PANTHEIOS_SEV_WARNING, "pantheios::log() is flexible, and output all fundamental types, including ints (e.g. i = ", pantheios::integer(i), ", doubles (e.g. d = ", pantheios::real(d), "), and chars (e.g. c = ", pantheios::character(c), ")");



    /* 3. use pantheios::log() to illustrate that there is no size limit
     * imposed by the C++ API
     */

    char    bigBuff[5000];

    memset(&bigBuff[0], '-', sizeof(bigBuff) / sizeof(0[bigBuff]));
    bigBuff[(sizeof(bigBuff) / sizeof(0[bigBuff])) - 1] = '\0';


    pantheios::log(PANTHEIOS_SEV_WARNING, "NOTE: pantheios::log() output is not limited to any number of characters. The rest of this statement is a very long string of '-' characters, enclosed in quotations. As you can see, it will be fully emitted: \"", bigBuff, "\"");



    /* Note: there is no need to explicitly uninitialise the Pantheios
     * libraries when the program contains 1 or more C++ compilation units
     * that, like this one, #include <pantheios/pantheios.hpp>, since that
     * file contains mechanisms within it that cause the initialisation to
     * be done automatically.
     */

    return EXIT_SUCCESS;
}
