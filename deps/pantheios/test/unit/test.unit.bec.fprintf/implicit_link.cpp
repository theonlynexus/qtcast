/* /////////////////////////////////////////////////////////////////////////
 * File:        test/unit/test.unit.bec.fprintf/implicit_link.cpp
 *
 * Purpose:     Implicit link file for the test.unit.bec.fprintf project.
 *
 * Created:     3rd August 2008
 * Updated:     3rd August 2008
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
#include <pantheios/implicit_link/bec.fprintf.h>

/* shwild Header Files */
#include <shwild/implicit_link.h>

/* UNIXem Header Files */
#include <platformstl/platformstl.h>
#if defined(PLATFORMSTL_OS_IS_UNIX) && \
    (   defined(_WIN32) || \
        defined(_WIN64))
# include <unixem/implicit_link.h>
#endif /* UNIX emulated */

/* ////////////////////////////////////////////////////////////////////// */
