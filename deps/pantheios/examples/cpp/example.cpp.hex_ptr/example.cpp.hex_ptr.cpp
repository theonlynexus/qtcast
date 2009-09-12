/* /////////////////////////////////////////////////////////////////////////
 * File:        examples/cpp/example.cpp.hex_ptr/example.cpp.hex_ptr.cpp
 *
 * Purpose:     C++ example program for Pantheios. Demonstrates:
 *
 *                - use of Pantheios::hex_ptr inserter class for pointer
 *                  types
 *                - use of pantheios::logputs() in bail-out conditions
 *
 * Created:     11th November 2008
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
#define PANTHEIOS_NO_INCLUDE_ACESTL_STRING_ACCESS
#define PANTHEIOS_NO_INCLUDE_ATLSTL_STRING_ACCESS
#define PANTHEIOS_NO_INCLUDE_COMSTL_STRING_ACCESS
#define PANTHEIOS_NO_INCLUDE_MFCSTL_STRING_ACCESS
#define PANTHEIOS_NO_INCLUDE_PLATFORMSTL_STRING_ACCESS
#define PANTHEIOS_NO_INCLUDE_UNIXSTL_STRING_ACCESS
#define PANTHEIOS_NO_INCLUDE_WINSTL_STRING_ACCESS
#define PANTHEIOS_NO_INCLUDE_WTLSTL_STRING_ACCESS
#include <pantheios/pantheios.hpp>          // Pantheios C++ main header
#include <pantheios/inserters/hex_ptr.hpp>  // for pantheios::hex_ptr

/* Standard C/C++ Header Files */
#include <exception>                        // for std::exception
#include <new>                              // for std::bad_alloc
#include <string>                           // for std::string
#include <stdlib.h>                         // for exit codes

/* ////////////////////////////////////////////////////////////////////// */

/* Define the stock front-end process identity, so that it links when using
 * fe.N, fe.simple, etc. */
PANTHEIOS_EXTERN_C const char PANTHEIOS_FE_PROCESS_IDENTITY[] = "example.cpp.hex_ptr";

/* ////////////////////////////////////////////////////////////////////// */

int main()
{
  try
  {
    void* pv = &pv;

    // Log a hex_ptr of precise length with 0x prefix, a length
    // of 8/16 (depending on architecture), and zero-padded;
    // Output: "pv: [0x0012fed0]"

    pantheios::log_NOTICE("pv: [", pantheios::hex_ptr(pv), "]");

    // Log a hex_ptr of precise length with 0x prefix;
    // Output: "pv: [0x12fed0]"

    pantheios::log_NOTICE("pv: [", pantheios::hex_ptr(pv, 0, pantheios::fmt::zeroXPrefix), "]");

    // Log a hex_ptr into 8 spaces, right justified, with 0x prefix;
    // Output: "pv: [  0x12fed0]"

    pantheios::log_NOTICE("pv: [", pantheios::hex_ptr(pv, 8, pantheios::fmt::zeroXPrefix), "]");

    // Log a hex_ptr into 8 spaces, left justified, with 0x prefix;
    // Output: "pv: [0x12fed0  ]"

    pantheios::log_NOTICE("pv: [", pantheios::hex_ptr(pv, -8, pantheios::fmt::zeroXPrefix), "]");

    // Log a hex_ptr of precise length with 0x prefix, a length of 16,
    // and zero-padded; Output: "pv: [0x000000000012fed0]"

    pantheios::log_NOTICE("pv: [", pantheios::hex_ptr(pv, 16, pantheios::fmt::zeroPadded | pantheios::fmt::zeroXPrefix), "]");

    // Log a hex_ptr of precise length with 0x prefix, a length
    // appropriate to the architecture, and zero-padded;
    // Output: "pv: [0x0012fed0]"

    pantheios::log_NOTICE("pv: [", pantheios::hex_ptr(pv, pantheios::hex_ptr::pointerHexWidth, pantheios::fmt::fullHex), "]");

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
