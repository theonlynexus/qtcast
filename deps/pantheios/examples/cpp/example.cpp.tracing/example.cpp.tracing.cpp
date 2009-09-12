/* /////////////////////////////////////////////////////////////////////////
 * File:        examples/cpp/example.cpp.tracing/example.cpp.tracing.cpp
 *
 * Purpose:     C++ example program for Pantheios. Demonstrates:
 *
 *                - use of Pantheios Tracing API
 *
 * Created:     18th August 2007
 * Updated:     21st October 2008
 *
 * www:         http://www.pantheios.org/
 *
 * License:     This source code is placed into the public domain 2007
 *              by Synesis Software Pty Ltd. There are no restrictions
 *              whatsoever to your use of the software.
 *
 *              This software is provided "as is", and any warranties,
 *              express or implied, of any kind and for any purpose, are
 *              disclaimed.
 *
 * ////////////////////////////////////////////////////////////////////// */


/* Pantheios Header Files */
#include <pantheios/pantheios.hpp>              // Pantheios C++ main header
#include <pantheios/trace.h>                    // Pantheios Trace API

/* Standard C/C++ Header Files */
#include <exception>                            // for std::exception
#include <new>                                  // for std::bad_alloc
#include <string>                               // for std::string
#include <stdlib.h>                             // for exit codes

#ifndef PANTHEIOS_DOCUMENTATION_SKIP_SECTION
# if defined(STLSOFT_COMPILER_IS_MSVC)
#  pragma warning(disable : 4702)
# endif /* compiler */
#endif /* !PANTHEIOS_DOCUMENTATION_SKIP_SECTION */

/* ////////////////////////////////////////////////////////////////////// */

/* Define the stock front-end process identity, so that it links when using
 * fe.N, fe.simple, etc. */
PANTHEIOS_EXTERN_C const char PANTHEIOS_FE_PROCESS_IDENTITY[] = "example.cpp.tracing";

/* ////////////////////////////////////////////////////////////////////// */

int main()
{
  try
  {
    // Prints "[example.cpp.tracing, 8/18/2007 17:14:08.875 PM; Notice]: example.cpp.tracing.cpp(51): a string '<abc>' and a number 42"

    PANTHEIOS_TRACE_PRINTF(pantheios::notice, "a string '%s' and a number %d", "<abc>", 42);

    // Prints "[example.cpp.tracing, 8/18/2007 17:14:08.875 PM; Notice]: example.cpp.tracing.cpp(55): a string at NOTICE level"

    PANTHEIOS_TRACE_NOTICE("a string at NOTICE level");

    PANTHEIOS_TRACE_INFORMATIONAL("informational");

    PANTHEIOS_TRACE_ALERT("alert");

    PANTHEIOS_TRACE_WARNING("warning");

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
