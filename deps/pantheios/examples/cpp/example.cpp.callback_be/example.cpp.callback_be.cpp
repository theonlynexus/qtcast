/* /////////////////////////////////////////////////////////////////////////
 * File:        examples/cpp/example.cpp.callback_be/example.cpp.callback_be.cpp
 *
 * Purpose:     C++ example program for Pantheios. Demonstrates:
 *
 *                - use of a back-end library that uses callbacks.
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


/* STLSoft Header Files */
#include <stlsoft/stlsoft.h>
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
# if defined(STLSOFT_COMPILER_IS_MSVC)
#  pragma warning(disable : 4702)
# endif /* compiler */
#else /* ? STLSOFT_CF_EXCEPTION_SUPPORT */
# if defined(STLSOFT_COMPILER_IS_MSVC)
#  pragma warning(disable : 4530)
# endif /* compiler */
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */

/* Pantheios Header Files */
#include <pantheios/pantheios.hpp>                  // Pantheios C++ main header
#include <platformstl/platformstl.h>
#if defined(PLATFORMSTL_OS_IS_UNIX)
# include <pantheios/backends/bec.fprintf.h>        // Include the API for bec.fprintf
#elif defined(PLATFORMSTL_OS_IS_WINDOWS)
# include <pantheios/backends/bec.WindowsConsole.h> // Include the API for bec.WindowsConsole
#else /* ? OS */
# error Platform not discriminated
#endif /* OS */

/* Standard C/C++ Header Files */
#include <exception>                                // for std::exception
#include <new>                                      // for std::bad_alloc
#include <string>                                   // for std::string
#include <stdlib.h>                                 // for exit codes

/* Windows Header Files */
#include <windows.h>                                // for console colour constants

/* ////////////////////////////////////////////////////////////////////// */

/* Define the stock front-end process identity, so that it links when using
 * fe.N, fe.simple, etc. */
PANTHEIOS_EXTERN_C const char PANTHEIOS_FE_PROCESS_IDENTITY[] = "example.cpp.callback_be";

/* ////////////////////////////////////////////////////////////////////// */

#if defined(PLATFORMSTL_OS_IS_UNIX)

PANTHEIOS_CALL(void) pantheios_be_fprintf_getAppInit(int backEndId, pan_be_fprintf_init_t* init) /* throw() */
{
  STLSOFT_SUPPRESS_UNUSED(backEndId); // Avoid whinging compilers

  init->flags |= PANTHEIOS_BE_INIT_F_NO_DATETIME;
}

#elif defined(PLATFORMSTL_OS_IS_WINDOWS)

PANTHEIOS_CALL(void) pantheios_be_WindowsConsole_getAppInit(int backEndId, pan_be_WindowsConsole_init_t* init) /* throw() */
{
  STLSOFT_SUPPRESS_UNUSED(backEndId); // Avoid whinging compilers

  init->flags |= PANTHEIOS_BE_INIT_F_NO_DATETIME;

  init->colours[pantheios::debug]   = FOREGROUND_BLUE | FOREGROUND_INTENSITY;              // Lose the white background
  init->colours[pantheios::notice]  = FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED; // Lose the intensity
}

#else /* ? OS */
# error Platform not discriminated
#endif /* OS */

/* ////////////////////////////////////////////////////////////////////// */

int main()
{
  try
  {
    pantheios::log_DEBUG("debug");
    pantheios::log_INFORMATIONAL("informational");
    pantheios::log_NOTICE("notice");
    pantheios::log_WARNING("warning");
    pantheios::log_ERROR("error");
    pantheios::log_CRITICAL("critical");
    pantheios::log_ALERT("alert");
    pantheios::log_EMERGENCY("emergency");

    return EXIT_SUCCESS;
  }
  catch(std::bad_alloc&)
  {
    pantheios::log(pantheios::alert, "out of memory");
  }
  catch(std::exception& x)
  {
    pantheios::log_CRITICAL("Concatenation failed: ", x);
  }
  catch(...)
  {
    pantheios::logputs(pantheios::emergency, "Unexpected unknown error");
  }

  return EXIT_FAILURE;
}

/* ////////////////////////////////////////////////////////////////////// */
