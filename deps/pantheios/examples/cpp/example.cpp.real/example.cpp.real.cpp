/* /////////////////////////////////////////////////////////////////////////
 * File:        examples/cpp/example.cpp.real/example.cpp.real.cpp
 *
 * Purpose:     C++ example program for Pantheios. Demonstrates:
 *
 *                - use of Pantheios inserters for floating-point types
 *                - use of pantheios::logputs() in bail-out conditions
 *
 * Created:     25th August 2006
 * Updated:     21st October 2008
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
#include <pantheios/inserters/real.hpp>     // for pantheios::real

/* Standard C/C++ Header Files */
#include <exception>                        // for std::exception
#include <new>                              // for std::bad_alloc
#include <string>                           // for std::string
#include <stdlib.h>                         // for exit codes

/* ////////////////////////////////////////////////////////////////////// */

/* Define the stock front-end process identity, so that it links when using
 * fe.N, fe.simple, etc. */
PANTHEIOS_EXTERN_C const char PANTHEIOS_FE_PROCESS_IDENTITY[] = "example.cpp.real";

/* ////////////////////////////////////////////////////////////////////// */

int main()
{
  try
  {
    float       f   =   1234.5678f;
    double      d   =   12345678.0123456789;
    long double ld  =   6.142e-23;

    // Log a float; Output: "f: [1234.57]"

    pantheios::log_NOTICE("f: [", pantheios::real(f), "]");

    // Log a double; Output: "d: [1.23457e+007]"

    pantheios::log_NOTICE("d: [", pantheios::real(d), "]");

    // Log a long double; Output: "ld: [6.142e-023]"

    pantheios::log_NOTICE("ld: [", pantheios::real(ld), "]");


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
