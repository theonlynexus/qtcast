/* /////////////////////////////////////////////////////////////////////////
 * File:        pantheios/frontends/stock.h
 *
 * Purpose:     Declaration of the Pantheios Stock Front-end API Common
 *              Elements.
 *
 * Created:     23rd November 2007
 * Updated:     8th July 2009
 *
 * Home:        http://www.pantheios.org/
 *
 * Copyright (c) 2007-2009, Matthew Wilson and Synesis Software
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 *   this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 * - Neither the name(s) of Matthew Wilson and Synesis Software nor the
 *   names of any contributors may be used to endorse or promote products
 *   derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 * IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * ////////////////////////////////////////////////////////////////////// */


/** \file pantheios/frontends/stock.h
 *
 * [C, C++] Declaration of the Pantheios Stock Front-end API Common
 *   Elements.
 */

#ifndef PANTHEIOS_INCL_PANTHEIOS_FRONTENDS_H_STOCK
#define PANTHEIOS_INCL_PANTHEIOS_FRONTENDS_H_STOCK

/* /////////////////////////////////////////////////////////////////////////
 * Version information
 */

#ifndef PANTHEIOS_DOCUMENTATION_SKIP_SECTION
# define PANTHEIOS_VER_PANTHEIOS_FRONTENDS_H_STOCK_MAJOR    1
# define PANTHEIOS_VER_PANTHEIOS_FRONTENDS_H_STOCK_MINOR    0
# define PANTHEIOS_VER_PANTHEIOS_FRONTENDS_H_STOCK_REVISION 3
# define PANTHEIOS_VER_PANTHEIOS_FRONTENDS_H_STOCK_EDIT     8
#endif /* !PANTHEIOS_DOCUMENTATION_SKIP_SECTION */

/* /////////////////////////////////////////////////////////////////////////
 * Includes
 */

#ifndef PANTHEIOS_INCL_PANTHEIOS_H_PANTHEIOS
# include <pantheios/pantheios.h>
#endif /* !PANTHEIOS_INCL_PANTHEIOS_H_PANTHEIOS */
#ifndef PANTHEIOS_INCL_PANTHEIOS_H_FRONTEND
# include <pantheios/frontend.h>
#endif /* !PANTHEIOS_INCL_PANTHEIOS_H_FRONTEND */

/** \defgroup group__frontend__stock_frontends Pantheios Stock Front-ends
 * \ingroup group__frontend Pantheios
 *  Pre-built front-ends supplied with the Pantheios library
 *
 * Pantheios comes with several pre-written stock front-end libraries, which
 * cover most common needs for diagnostic logging. They also serve as good
 * examples of how to write a custom front-end.
 */

/* /////////////////////////////////////////////////////////////////////////
 * Compiler compatibility
 */

#if defined(__DMC__) && \
    __DMC__ < 0x0850
/* Previous versions of Digital Mars compiler/linker did not operate
 * correctly with declaration of extern const char [].
 */
# error Not compatible with Digital Mars C/C++ prior to version 8.50. Download the latest free version at www.digitalmars.com
#endif /* compiler */

/* /////////////////////////////////////////////////////////////////////////
 * External Declarations
 */

/** The application must define this variable, to contain the
 *    application name/identity.
 *
 * \ingroup group__frontend__stock_frontends
 */
PANTHEIOS_EXTERN_C const char   PANTHEIOS_FE_PROCESS_IDENTITY[];

/* ////////////////////////////////////////////////////////////////////// */

#endif /* PANTHEIOS_INCL_PANTHEIOS_FRONTENDS_H_STOCK */

/* ////////////////////////////////////////////////////////////////////// */
