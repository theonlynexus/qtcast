/* /////////////////////////////////////////////////////////////////////////
 * File:        examples/cpp/example.cpp.file/implicit_link.cpp
 *
 * Purpose:     Implicit link file for the example.cpp.file project.
 *
 * Created:     21st October 2008
 * Updated:     21st October 2008
 *
 * Status:      Wizard-generated
 *
 * License:     (Licensed under the Synesis Software Open License)
 *
 *              Copyright (c) 2008, Synesis Software Pty Ltd.
 *              All rights reserved.
 *
 *              www:        http://www.synesis.com.au/software
 *
 * ////////////////////////////////////////////////////////////////////// */


/* Pantheios Header Files */
#include <pantheios/implicit_link/core.h>
#include <pantheios/implicit_link/fe.simple.h>
#include <platformstl/platformstl.h>
#include <pantheios/implicit_link/be.file.h>

#if (   defined(UNIX) || \
        defined(unix))&& \
    (   defined(_WIN32) || \
        defined(_WIN64))
# include <unixem/implicit_link.h>
#endif /* _WIN32 || _WIN64 */

/* ///////////////////////////// end of file //////////////////////////// */
