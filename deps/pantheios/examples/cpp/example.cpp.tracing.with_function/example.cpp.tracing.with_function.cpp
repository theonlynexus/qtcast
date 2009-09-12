/* /////////////////////////////////////////////////////////////////////////
 * File:        examples/cpp/example.cpp.tracing.with_function/example.cpp.tracing.with_function.cpp
 *
 * Purpose:     C++ example program for Pantheios. Demonstrates:
 *
 *                - use of Pantheios Tracing API
 *
 * Created:     15th March 2008
 * Updated:     7th May 2009
 *
 * www:         http://www.pantheios.org/
 *
 * License:     This source code is placed into the public domain 2008
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
#ifndef STLSOFT_CF_SUPPORTS_VARIADIC_MACROS
# error This example uses the Tracing API, which requires that the compiler support variadic macros
#endif /* !STLSOFT_CF_SUPPORTS_VARIADIC_MACROS */
#ifdef STLSOFT_CF_FUNCTION_SYMBOL_SUPPORT
# define PANTHEIOS_TRACE_PREFIX             __FILE__ " " PANTHEIOS_STRINGIZE(__LINE__) ": " __FUNCTION__ ": "
#endif /* STLSOFT_CF_FUNCTION_SYMBOL_SUPPORT */
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
PANTHEIOS_EXTERN_C const char PANTHEIOS_FE_PROCESS_IDENTITY[] = "example.cpp.tracing.with_function";

/* ////////////////////////////////////////////////////////////////////// */

int main()
{
  try
  {
    // Prints "[example.cpp.tracing.with_function, 8/18/2007 17:14:08.875 PM; Notice]: example.cpp.tracing.with_function.cpp(51): main: a string '<abc>' and a number 42"

    PANTHEIOS_TRACE_PRINTF(pantheios::notice, "a string '%s' and a number %d", "<abc>", 42);

    // Prints "[example.cpp.tracing.with_function, 8/18/2007 17:14:08.875 PM; Notice]: example.cpp.tracing.with_function.cpp(55): main: a string at NOTICE level"

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

/* ///////////////////////////// end of file //////////////////////////// */
