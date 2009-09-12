/* /////////////////////////////////////////////////////////////////////////
 * File:        test/unit/test.unit.util.gethostname/implicit_link.cpp
 *
 * Purpose:     Implicit link file for the test.unit.util.gethostname project.
 *
 * Created:     14th April 2008
 * Updated:     1st August 2008
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


/* xTests Header Files */
#include <xtests/implicit_link.h>

/* Pantheios Header Files */
#include <pantheios/implicit_link/util.h>

/* UNIXem Header Files */
#include <platformstl/platformstl.h>
#if defined(PLATFORMSTL_OS_IS_UNIX) && \
    (   defined(_WIN32) || \
        defined(_WIN64))
# include <unixem/implicit_link.h>
#endif /* UNIX emulated */

/* ////////////////////////////////////////////////////////////////////// */
