/* /////////////////////////////////////////////////////////////////////////
 * File:        examples/cpp/example.cpp.api.no_namespace/example.cpp.api.no_namespace.cpp
 *
 * Purpose:     C++ example program for Pantheios. Demonstrates:
 *
 *                - use of Pantheios with the namespace suppressed
 *
 * Created:     15th March 2008
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
#define PANTHEIOS_NO_NAMESPACE                      // Suppress the namespace
#define PANTHEIOS_NO_INCLUDE_ATLSTL_STRING_ACCESS   // Don't need ATL shims
#define PANTHEIOS_NO_INCLUDE_COMSTL_STRING_ACCESS   // Don't need COM shims
#define PANTHEIOS_NO_INCLUDE_MFCSTL_STRING_ACCESS   // Don't need MFC shims
#define PANTHEIOS_NO_INCLUDE_UNIXSTL_STRING_ACCESS  // Don't need UNIX shims
#define PANTHEIOS_NO_INCLUDE_WINSTL_STRING_ACCESS   // Don't need Windows shims
#include <pantheios/pantheios.hpp>

/* STLSoft Header Files */
#include <stlsoft/stlsoft.h>

/* Standard C Header Files */
#include <stdlib.h>                         // for exit codes

/* ////////////////////////////////////////////////////////////////////// */

/* Define the stock front-end process identity, so that it links when using
 * fe.N, fe.simple, etc. */
extern "C" const char PANTHEIOS_FE_PROCESS_IDENTITY[]    =   "example.cpp.api.no_namespace";

/* ////////////////////////////////////////////////////////////////////// */

int main()
{
  log_DEBUG("debug");
  log_INFORMATIONAL("informational");
  log_NOTICE("notice");
  log_WARNING("warning");
  log_ERROR("error");
  log_CRITICAL("critical");
  log_ALERT("alert");
  log_EMERGENCY("emergency");

  return EXIT_SUCCESS;
}

/* ////////////////////////////////////////////////////////////////////// */
