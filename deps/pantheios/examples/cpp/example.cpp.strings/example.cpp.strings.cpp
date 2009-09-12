/* /////////////////////////////////////////////////////////////////////////
 * File:        examples/cpp/example.cpp.strings/example.cpp.strings.cpp
 *
 * Purpose:     C++ example program for Pantheios. Demonstrates:
 *
 *                - use of Pantheios logging statements for string types
 *                - use of pantheios::logputs() in bail-out conditions
 *
 * Created:     17th May 2006
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

/* Standard C/C++ Header Files */
#include <exception>                        // for std::exception
#include <new>                              // for std::bad_alloc
#include <string>                           // for std::string
#include <stdlib.h>                         // for exit codes

/* ////////////////////////////////////////////////////////////////////// */

/* Define the stock front-end process identity, so that it links when using
 * fe.N, fe.simple, etc. */
PANTHEIOS_EXTERN_C const char PANTHEIOS_FE_PROCESS_IDENTITY[] = "example.cpp.strings";

/* ////////////////////////////////////////////////////////////////////// */

static void concat(std::string const& s1, std::string const& s2, std::string &result)
{
    result = s1 + s2;
}

int main()
{
  try
  {
    std::string   result;
    char          s1[]  = "abc";
    char const    *s2   = "def";

    // Log two C-style strings

    pantheios::log_NOTICE("Concatenating '", s1, "' and '", s2, "'");

    concat(s1, s2, result);

    // Log two C-style strings and a std::string

    pantheios::log_NOTICE("Concatenation of '", s1, "' and '", s2, "' succeeded; result=", result);


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
