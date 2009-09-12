/* /////////////////////////////////////////////////////////////////////////
 * File:        examples/cpp/example.cpp.process_id/example.cpp.process_id.cpp
 *
 * Purpose:     C++ example program for Pantheios. Demonstrates:
 *
 *                - use of Pantheios inserter for process ids
 *                - use of pantheios::logputs() in bail-out conditions
 *
 * Created:     17th October 2006
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
#include <pantheios/pantheios.hpp>              // Pantheios C++ main header
#include <pantheios/inserters/processid.hpp>    // for pantheios::processId

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
PANTHEIOS_EXTERN_C const char PANTHEIOS_FE_PROCESS_IDENTITY[] = "example.cpp.process_id";

/* ////////////////////////////////////////////////////////////////////// */

int main()
{
  try
  {
    // Log the process Id; Output: "process id: [2356]"

    pantheios::log_NOTICE("process id: [", pantheios::processId, "]");


    return EXIT_SUCCESS;
  }
  catch(std::bad_alloc&)
  {
    pantheios::logputs(pantheios::alert, "out of memory");
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
