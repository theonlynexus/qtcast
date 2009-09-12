/* /////////////////////////////////////////////////////////////////////////
 * File:        examples/cpp/example.cpp.integer/example.cpp.integer.cpp
 *
 * Purpose:     C++ example program for Pantheios. Demonstrates:
 *
 *                - use of Pantheios inserters for integral types
 *                - use of pantheios::logputs() in bail-out conditions
 *
 * Created:     22nd June 2006
 * Updated:     16th February 2009
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
#include <pantheios/pantheios.hpp>          // Pantheios C++ main header
#include <pantheios/inserters/integer.hpp>  // for pantheios::integer

/* STLSoft Header Files */
#include <stlsoft/stlsoft.h>                // for sized integer types

/* Standard C/C++ Header Files */
#include <exception>                        // for std::exception
#include <new>                              // for std::bad_alloc
#include <string>                           // for std::string
#include <stdlib.h>                         // for exit codes
#include <limits.h>                         // SHRT_MIN, etc.

/* ////////////////////////////////////////////////////////////////////// */

/* Define the stock front-end process identity, so that it links when using
 * fe.N, fe.simple, etc. */
PANTHEIOS_EXTERN_C const char PANTHEIOS_FE_PROCESS_IDENTITY[] = "example.cpp.integer";

/* ////////////////////////////////////////////////////////////////////// */

int main()
{
  try
  {
    short             shortMin  = SHRT_MIN;
    short             shortMax  = SHRT_MAX;
    unsigned short    ushortMax = USHRT_MAX;
    int               intMin    = INT_MIN;
    int               intMax    = INT_MAX;
    unsigned int      uintMax   = UINT_MAX;
    long              longMin   = LONG_MIN;
    long              longMax   = LONG_MAX;
    unsigned long     ulongMax  = ULONG_MAX;
    stlsoft::sint32_t si32Val   = -123;
    stlsoft::uint32_t ui32Val   = 456;

    // Log a short in decimal; Output: "SHRT_MIN: [-32768]"

    pantheios::log_NOTICE("SHRT_MIN: [", pantheios::integer(shortMin), "]");

    // Log a short in decimal; Output: "SHRT_MAX: [32767]"

    pantheios::log_NOTICE("SHRT_MAX: [", pantheios::integer(shortMax), "]");

    // Log a unsigned short as hexadecimal; Output: "USHRT_MAX: [ffff]"

    pantheios::log_NOTICE("USHRT_MAX: [", pantheios::integer(ushortMax, pantheios::fmt::hex), "]");

    // Log an int, into a width of 20; Output: "INT_MIN: [-2147483648         ]"

    pantheios::log_NOTICE("INT_MIN: [", pantheios::integer(intMin, -20), "]");

    // Log an int, into a width of 20; Output: "INT_MAX: [-2147483648         ]"

    pantheios::log_NOTICE("INT_MAX: [", pantheios::integer(intMax, -20), "]");

    // Log an unsigned int as hexadecimal with 0x prefix; Output: "UINT_MAX: [0xffffffff]"

    pantheios::log_NOTICE("UINT_MAX: [", pantheios::integer(uintMax, pantheios::fmt::hex | pantheios::fmt::zeroXPrefix), "]");

    // Log a long; Output: "LONG_MIN: [         -2147483648]"

    pantheios::log_NOTICE("LONG_MIN: [", pantheios::integer(longMin, 20), "]");

    // Log a long; Output: "LONG_MAX: [         -2147483648]"

    pantheios::log_NOTICE("LONG_MAX: [", pantheios::integer(longMax, 20), "]");

    // Log an unsigned long; Output: "ULONG_MAX: [4294967295]"

    pantheios::log_NOTICE("ULONG_MAX: [", pantheios::integer(ulongMax), "]");

    // Log a signed 32-bit integer; Output: "sint32_t: [-123]"

    pantheios::log_NOTICE("sint32_t: [", pantheios::integer(si32Val), "]");

    // Log an unsigned 32-bit integer; Output: "uint32_t: [     456]"

    pantheios::log_NOTICE("uint32_t: [", pantheios::integer(ui32Val, 8, 0), "]");


    return EXIT_SUCCESS;
  }
  catch(std::bad_alloc&)
  {
    pantheios::log(pantheios::alert, "out of memory");
  }
  catch(std::exception& x)
  {
    pantheios::log_CRITICAL("Exception: ", x);
  }
  catch(...)
  {
    pantheios::logputs(pantheios::emergency, "Unexpected unknown error");
  }

  return EXIT_FAILURE;
}

/* ////////////////////////////////////////////////////////////////////// */
