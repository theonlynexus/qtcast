/* /////////////////////////////////////////////////////////////////////////
 * File:        src/backends/bec.ACE.cpp
 *
 * Purpose:     Implementation for the ACE back-end
 *
 * Created:     26th June 2005
 * Updated:     15th April 2009
 *
 * Home:        http://www.pantheios.org/
 *
 * Copyright (c) 2005-2009, Matthew Wilson and Synesis Software
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


/* Pantheios Header Files */
#include <pantheios/pantheios.h>
#define PANTHEIOS_BE_INIT_NO_CPP_STRUCT_INIT
#include <pantheios/backends/bec.ACE.h>

#include <pantheios/init_codes.h>
#include <pantheios/quality/contract.h>
#include <pantheios/util/severity/ACE.h>
#include <pantheios/util/string/strdup.h>

/* STLSoft Header Files */
#include <acestl/acestl.hpp>

/* /////////////////////////////////////////////////////////////////////////
 * API
 */

PANTHEIOS_CALL(int) pantheios_be_ACE_init(
    char const* processIdentity
,   int         id
,   void*       unused
,   void*       reserved
,   void**      ptoken
)
{
    STLSOFT_SUPPRESS_UNUSED(id);
    STLSOFT_SUPPRESS_UNUSED(unused);
    STLSOFT_SUPPRESS_UNUSED(reserved);

    if(NULL == (*ptoken = pantheios::util::strdup_nothrow(processIdentity)))
    {
        return PANTHEIOS_INIT_RC_OUT_OF_MEMORY;
    }
    else
    {
        return 0;
    }
}

PANTHEIOS_CALL(void) pantheios_be_ACE_uninit(void* token)
{
    pantheios::util::strfree(static_cast<char*>(token));
}

PANTHEIOS_CALL(int) pantheios_be_ACE_logEntry(
    void*       feToken
,   void*       beToken
,   int         severity
,   char const* entry
,   size_t      cchEntry
)
{
    STLSOFT_SUPPRESS_UNUSED(feToken);
    STLSOFT_SUPPRESS_UNUSED(cchEntry);

    char const*         processIdentity = static_cast<char const*>(beToken);
    ACE_Log_Priority    priority;

    PANTHEIOS_CONTRACT_ENFORCE_PRECONDITION_PARAMS_API(0 == (severity & 0x08), "be.ACE can only be used with the stock severity levels in the range [0, 8). Levels in the range [8, 16) are not allowed");

    severity &= 0x7;    /* This stock back-end ignores any custom severity information. */

    priority = pantheios::pantheios_severity_to_ACE_priority(severity);

    if(severity < PANTHEIOS_SEV_NOTICE)
    {
        ACE_ERROR(  (   priority
                    ,   ACE_TEXT("[%s(%P), %T] %s\n")
                    ,   processIdentity
                    ,   entry));
    }
    else
    {
        ACE_DEBUG(  (   priority
                    ,   ACE_TEXT("[%s(%P), %T] %s\n")
                    ,   processIdentity
                    ,   entry));
    }

    return 0;
}

/* ////////////////////////////////////////////////////////////////////// */
