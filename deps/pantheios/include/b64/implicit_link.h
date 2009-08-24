/* /////////////////////////////////////////////////////////////////////////
 * File:    b64/implicit_link.h
 *
 * Purpose: Implicit linking for the b64 API.
 *
 * Created: 5th March 2006
 * Updated: 15th May 2008
 *
 * Home:    http://synesis.com.au/software/
 *
 * Copyright (c) 2006-2008, Matthew Wilson and Synesis Software
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without 
 * modification, are permitted provided that the following conditions are met:
 *
 * - Redistributions of source code must retain the above copyright notice, this
 *   list of conditions and the following disclaimer. 
 * - Redistributions in binary form must reproduce the above copyright notice,
 *   this list of conditions and the following disclaimer in the documentation
 *   and/or other materials provided with the distribution.
 * - Neither the names of Matthew Wilson and Synesis Software nor the names of
 *   any contributors may be used to endorse or promote products derived from
 *   this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * ////////////////////////////////////////////////////////////////////// */


/** \file b64/implicit_link.h \brief [C/C++] Implicit linking for the b64 API
 *
 * Inclusion of this file causes the appropriate library file to be automatically
 * linked for compilers that support implicit linking: Borland, Metrowerks
 * CodeWarrior, Intel, and Visual C++.
 */

#ifndef B64_INCL_B64_H_IMPLICIT_LINK
#define B64_INCL_B64_H_IMPLICIT_LINK

/* /////////////////////////////////////////////////////////////////////////
 * Version
 */

#ifndef B64_DOCUMENTATION_SKIP_SECTION
# define B64_VER_B64_H_IMPLICIT_LINK_MAJOR      1
# define B64_VER_B64_H_IMPLICIT_LINK_MINOR      1
# define B64_VER_B64_H_IMPLICIT_LINK_REVISION   2
# define B64_VER_B64_H_IMPLICIT_LINK_EDIT       5
#endif /* !B64_DOCUMENTATION_SKIP_SECTION */

/* /////////////////////////////////////////////////////////////////////////
 * Includes
 */

#ifndef B64_INCL_B64_H_B64
# include <b64/b64.h>
#endif /* !B64_INCL_B64_H_B64 */

/* /////////////////////////////////////////////////////////////////////////
 * Implicit linking
 */

#if defined(_WIN32) || \
    defined(_WIN64)

# if defined(__BORLANDC__) || \
     /* defined(__DMC__) || */ \
     defined(__INTEL_COMPILER) || \
     defined(__MWERKS__) || \
     defined(_MSC_VER)
#  define B64_IMPLICIT_LINK_SUPPORT
# endif /* compiler */

#if defined(B64_IMPLICIT_LINK_SUPPORT) && \
    defined(B64_NO_IMPLICIT_LINK)
# undef B64_IMPLICIT_LINK_SUPPORT
#endif /* B64_IMPLICIT_LINK_SUPPORT && B64_NO_IMPLICIT_LINK */

# if defined(B64_IMPLICIT_LINK_SUPPORT)

#  if defined(__BORLANDC__)
#   if __BORLANDC__ == 0x0550
#    define B64_IMPL_LINK_COMPILER_NAME         "bc55"
#   elif (__BORLANDC__ == 0x0551)
#    define B64_IMPL_LINK_COMPILER_NAME         "bc551"
#   elif (__BORLANDC__ == 0x0560)
#    define B64_IMPL_LINK_COMPILER_NAME         "bc56"
#   elif (__BORLANDC__ == 0x0564)
#    define B64_IMPL_LINK_COMPILER_NAME         "bc564"
#   elif (__BORLANDC__ == 0x0582)
#    define B64_IMPL_LINK_COMPILER_NAME         "bc582"
#   else /* ? __BORLANDC__ */
#    error Unrecognised value of __BORLANDC__
#   endif /* __BORLANDC__ */

/*
#  elif defined(__DMC__)
#   define B64_IMPL_LINK_COMPILER_NAME          "dm"
 */

#  elif defined(__INTEL_COMPILER)
#   if (__INTEL_COMPILER == 600)
#    define B64_IMPL_LINK_COMPILER_NAME         "icl6"
#   elif (__INTEL_COMPILER == 700)
#    define B64_IMPL_LINK_COMPILER_NAME         "icl7"
#   elif (__INTEL_COMPILER == 800)
#    define B64_IMPL_LINK_COMPILER_NAME         "icl8"
#   else /* ? __INTEL_COMPILER */
#    error Unrecognised value of __INTEL_COMPILER
#   endif /* __INTEL_COMPILER */

#  elif defined(__MWERKS__)
#   if ((__MWERKS__ & 0xFF00) == 0x2400)
#    define B64_IMPL_LINK_COMPILER_NAME         "cw7"
#   elif ((__MWERKS__ & 0xFF00) == 0x3000)
#    define B64_IMPL_LINK_COMPILER_NAME         "cw8"
#   elif ((__MWERKS__ & 0xFF00) == 0x3200)
#    define B64_IMPL_LINK_COMPILER_NAME         "cw9"
#   else /* ? __MWERKS__ */
#    error Unrecognised value of __MWERKS__
#   endif /* __MWERKS__ */

#  elif defined(_MSC_VER)
#   if _MSC_VER == 1000
#    define B64_IMPL_LINK_COMPILER_NAME         "vc4"
#   elif _MSC_VER == 1020
#    define B64_IMPL_LINK_COMPILER_NAME         "vc42"
#   elif _MSC_VER == 1100
#    define B64_IMPL_LINK_COMPILER_NAME         "vc5"
#   elif _MSC_VER == 1200
#    define B64_IMPL_LINK_COMPILER_NAME         "vc6"
#   elif _MSC_VER == 1300
#    define B64_IMPL_LINK_COMPILER_NAME         "vc7"
#   elif _MSC_VER == 1310
#    define B64_IMPL_LINK_COMPILER_NAME         "vc71"
#   elif _MSC_VER == 1400
#    if defined(_M_IX86)
#     define B64_IMPL_LINK_COMPILER_NAME        "vc8"
#    elif defined(_M_X64) || \
          defined(_M_AMD64)
#     define B64_IMPL_LINK_COMPILER_NAME        "vc8_x64"
#    elif defined(_M_IA64)
#     define B64_IMPL_LINK_COMPILER_NAME        "vc8_ia64"
#    else /* ? arch */
#     error Unrecognised architecture
#    endif /* arch */
#   elif _MSC_VER == 1500
#    if defined(_M_IX86)
#     define B64_IMPL_LINK_COMPILER_NAME        "vc9"
#    elif defined(_M_X64) || \
          defined(_M_AMD64)
#     define B64_IMPL_LINK_COMPILER_NAME        "vc9_x64"
#    elif defined(_M_IA64)
#     define B64_IMPL_LINK_COMPILER_NAME        "vc9_ia64"
#    else /* ? arch */
#     error Unrecognised architecture
#    endif /* arch */
#   else /* ? _MSC_VER */
#    error Unrecognised value of _MSC_VER
#   endif /* _MSC_VER */

#  else /* ? compiler */
#   error Unrecognised compiler
#  endif /* compiler */


# if defined(__MT__) || \
     defined(_REENTRANT) || \
     defined(_MT)
#  if defined(_DLL) || \
      defined(__DLL)
#   define B64_IMPL_LINK_THREADING_TYPE         ".dll"
#  else /* ? dll */
#   define B64_IMPL_LINK_THREADING_TYPE         ".mt"
#  endif /* dll */
# else /* ? mt */
#   define B64_IMPL_LINK_THREADING_TYPE         ""
# endif /* mt */


# if !defined(NDEBUG) && \
     defined(_DEBUG)
#  define B64_IMPL_LINK_DEBUG_TYPE              ".debug"
# else /* ? debug */
#  define B64_IMPL_LINK_DEBUG_TYPE              ""
# endif /* debug */

#  define B64_IMPL_LINK_LIBRARY_BASENAME_s_(x)  #x
#  define B64_IMPL_LINK_LIBRARY_BASENAME_s(x)   B64_IMPL_LINK_LIBRARY_BASENAME_s_(x)
#  define B64_IMPL_LINK_LIBRARY_BASENAME        "b64." B64_IMPL_LINK_LIBRARY_BASENAME_s(B64_VER_MAJOR) "."

#  define B64_IMPL_LINK_LIBRARY_NAME            B64_IMPL_LINK_LIBRARY_BASENAME B64_IMPL_LINK_COMPILER_NAME B64_IMPL_LINK_THREADING_TYPE B64_IMPL_LINK_DEBUG_TYPE ".lib"

#  pragma message("lib: " B64_IMPL_LINK_LIBRARY_NAME)

#  pragma comment(lib, B64_IMPL_LINK_LIBRARY_NAME)

# endif /* B64_IMPLICIT_LINK_SUPPORT */

#endif /* Win32 */

/* ////////////////////////////////////////////////////////////////////// */

#endif /* B64_INCL_B64_H_IMPLICIT_LINK */

/* ////////////////////////////////////////////////////////////////////// */
