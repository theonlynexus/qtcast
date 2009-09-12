/* /////////////////////////////////////////////////////////////////////////
 * File:        test/unit/test.unit.util.strnlen/implicit_link.cpp
 *
 * Purpose:     Implicit link file for the test.unit.util.strnlen project.
 *
 * Created:     17th April 2009
 * Updated:     17th April 2009
 *
 * Status:      Wizard-generated
 *
 * License:     (Licensed under the Synesis Software Open License)
 *
 *              Copyright (c) 2008-2009, Synesis Software Pty Ltd.
 *              All rights reserved.
 *
 *              www:        http://www.synesis.com.au/software
 *
 * ////////////////////////////////////////////////////////////////////// */


/* Pantheios Header Files */
#include <pantheios/implicit_link/util.h>

/* xTests Header Files */
#include <xtests/implicit_link.h>

/* UNIXem Header Files */
#include <platformstl/platformstl.h>
#if defined(PLATFORMSTL_OS_IS_UNIX) && \
    (   defined(_WIN32) || \
        defined(_WIN64))
# include <unixem/implicit_link.h>
#endif /* UNIX emulated */

/* ////////////////////////////////////////////////////////////////////// */
