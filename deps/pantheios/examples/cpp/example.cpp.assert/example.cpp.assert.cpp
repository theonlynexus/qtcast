/* /////////////////////////////////////////////////////////////////////////
 * File:        examples/cpp/example.cpp.assert/example.cpp.assert.cpp
 *
 * Purpose:     C++ example program for Pantheios. Demonstrates:
 *
 *                - use of Pantheios inserter for thread ids
 *                - use of pantheios::logputs() in bail-out conditions
 *
 * Created:     8th May 2009
 * Updated:     8th May 2009
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
#include <pantheios/assert.h>

/* Standard C Header Files */
#include <stdlib.h>

/* /////////////////////////////////////////////////////////////////////////
 * Compiler compatibility
 */

#ifdef STLSOFT_COMPILER_IS_BORLAND
# pragma warn -8008
# pragma warn -8066
#endif

/* ////////////////////////////////////////////////////////////////////// */

/* Define the stock front-end process identity, so that it links when using
 * fe.N, fe.simple, etc. */
PANTHEIOS_EXTERN_C const char PANTHEIOS_FE_PROCESS_IDENTITY[] = "example.cpp.assert";

/* ////////////////////////////////////////////////////////////////////// */

int main()
{
  int i = pantheios::init();

  if(i >= 0)
  {
    PANTHEIOS_ASSERT(true);

    PANTHEIOS_ASSERT(false);


    PANTHEIOS_MESSAGE_ASSERT(true, "it was true");

    PANTHEIOS_MESSAGE_ASSERT(false, "it was false");

    pantheios::uninit();
  }

  return EXIT_SUCCESS;
}

/* ////////////////////////////////////////////////////////////////////// */
