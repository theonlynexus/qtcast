/* /////////////////////////////////////////////////////////////////////////
 * File:        examples/cpp/example.cpp.file/example.cpp.file.cpp
 *
 * Purpose:     C++ example program for Pantheios. Demonstrates:
 *
 *                - use of pantheios_be_file_setFilePath()
 *                - use of pantheios::logputs() in bail-out conditions
 *
 * Created:     29th November 2006
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
#include <pantheios/inserters/args.hpp>     // for pantheios::args

#include <pantheios/backends/bec.file.h>    // be.file header

/* Standard C/C++ Header Files */
#include <exception>                        // for std::exception
#include <new>                              // for std::bad_alloc
#include <string>                           // for std::string
#include <stdlib.h>                         // for exit codes

/* ////////////////////////////////////////////////////////////////////// */

/* Define the stock front-end process identity, so that it links when using
 * fe.N, fe.simple, etc. */
PANTHEIOS_EXTERN_C const char PANTHEIOS_FE_PROCESS_IDENTITY[] = "example.cpp.file";

/* ////////////////////////////////////////////////////////////////////// */

int main(int argc, char **argv)
{
  try
  {
    pantheios::log_DEBUG("main(", pantheios::args(argc, argv), ")");

    pantheios::log_NOTICE("stmt 1");

    // Set the file name for the local back-end, truncating the
    // file's existing contents, if any.
    pantheios_be_file_setFilePath("log.local", PANTHEIOS_BE_FILE_F_TRUNCATE, PANTHEIOS_BE_FILE_F_TRUNCATE, PANTHEIOS_BEID_LOCAL);

    pantheios::log_NOTICE("stmt 2");

    // Set the file name for the remote back-end.
    pantheios_be_file_setFilePath("log.remote", PANTHEIOS_BEID_REMOTE);

    pantheios::log_NOTICE("stmt 3");

    // Set the file name for all back-ends.
    pantheios_be_file_setFilePath("log.all");

    pantheios::log_NOTICE("stmt 4");

    pantheios::log_DEBUG("exiting main()");

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
