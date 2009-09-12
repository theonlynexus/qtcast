/* /////////////////////////////////////////////////////////////////////////
 * File:        examples/cpp/example.cpp.pointer/example.cpp.pointer.cpp
 *
 * Purpose:     C++ example program for Pantheios. Demonstrates:
 *
 *                - use of Pantheios inserters for pointer types
 *                - use of pantheios::logputs() in bail-out conditions
 *
 * Created:     25th August 2006
 * Updated:     11th November 2008
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
#include <pantheios/inserters/pointer.hpp>  // for pantheios::pointer
#include <pantheios/inserters/hex_ptr.hpp>  // for pantheios::hex_ptr

/* Standard C/C++ Header Files */
#include <exception>                        // for std::exception
#include <new>                              // for std::bad_alloc
#include <string>                           // for std::string
#include <stdlib.h>                         // for exit codes

/* ////////////////////////////////////////////////////////////////////// */

/* Define the stock front-end process identity, so that it links when using
 * fe.N, fe.simple, etc. */
PANTHEIOS_EXTERN_C const char PANTHEIOS_FE_PROCESS_IDENTITY[] = "example.cpp.pointer";

/* ////////////////////////////////////////////////////////////////////// */

int main()
{
  try
  {
    void* pv = &pv;

    // Log a pointer of precise length; Output: "pv: [12fed0]"

    pantheios::log_NOTICE("pv: [", pantheios::pointer(pv, 0), "]");

    // Log a pointer into 8 spaces, right justified; Output: "pv: [  12fed0]"

    pantheios::log_NOTICE("pv: [", pantheios::pointer(pv, 8), "]");

    // Log a pointer into 8 spaces, left justified; Output: "pv: [12fed0  ]"

    pantheios::log_NOTICE("pv: [", pantheios::pointer(pv, -8, pantheios::fmt::hex), "]");

    // Log a pointer of precise length with 0x prefix; Output: "pv: [0x12fed0]"

    pantheios::log_NOTICE("pv: [", pantheios::pointer(pv, 0, pantheios::fmt::zeroXPrefix), "]");

    // Log a pointer into 8 spaces, right justified, with 0x prefix; Output: "pv: [  0x12fed0]"

    pantheios::log_NOTICE("pv: [", pantheios::pointer(pv, 8, pantheios::fmt::zeroXPrefix), "]");

    // Log a pointer into 8 spaces, left justified, with 0x prefix; Output: "pv: [0x12fed0  ]"

    pantheios::log_NOTICE("pv: [", pantheios::pointer(pv, -8, pantheios::fmt::zeroXPrefix), "]");

    // Log a pointer of precise length with 0x prefix, a length of 8, and zero-padded; Output: "pv: [0x0012fed0]"

    pantheios::log_NOTICE("pv: [", pantheios::pointer(pv, 8, pantheios::fmt::zeroPadded | pantheios::fmt::zeroXPrefix), "]");

    // Log a pointer of precise length with 0x prefix, a length of 8, and zero-padded; Output: "pv: [0x000000000012fed0]"

    pantheios::log_NOTICE("pv: [", pantheios::pointer(pv, 16, pantheios::fmt::fullHex), "]");

    // Log a pointer of precise length with 0x prefix, a length of 8, and zero-padded; Output: "pv: [0x0012fed0]"

    pantheios::log_NOTICE("pv: [", pantheios::hex_ptr(pv), "]");

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
