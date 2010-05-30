/* /////////////////////////////////////////////////////////////////////////
 * File:        pantheios/extras/com/exception_helpers.hpp (formerly pantheios/util/com/exception_helpers.hpp)
 *
 * Purpose:     Helper functions that invoke a given method and convert any
 *              thrown exceptions (that are derived from std::exception)
 *              into a pantheios log statement and an HRESULT return code.
 *
 * Created:     1st May 2006
 * Updated:     22nd February 2010
 *
 * Home:        http://www.pantheios.org/
 *
 * Copyright (c) 2006-2010, Matthew Wilson and Synesis Software
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


/** \file pantheios/extras/com/exception_helpers.hpp
 * [C++ &amp; COM only] Helper functions that invoke a given method
 *   and convert any thrown exceptions (that are derived from std::exception)
 *   into a pantheios log statement and an HRESULT return code.
 */

#ifndef PANTHEIOS_INCL_PANTHEIOS_EXTRAS_COM_HPP_EXCEPTION_HELPERS
#define PANTHEIOS_INCL_PANTHEIOS_EXTRAS_COM_HPP_EXCEPTION_HELPERS

/* /////////////////////////////////////////////////////////////////////////
 * Version information
 */

#ifndef PANTHEIOS_DOCUMENTATION_SKIP_SECTION
# define PANTHEIOS_VER_PANTHEIOS_EXTRAS_COM_HPP_EXCEPTION_HELPERS_MAJOR     3
# define PANTHEIOS_VER_PANTHEIOS_EXTRAS_COM_HPP_EXCEPTION_HELPERS_MINOR     2
# define PANTHEIOS_VER_PANTHEIOS_EXTRAS_COM_HPP_EXCEPTION_HELPERS_REVISION  2
# define PANTHEIOS_VER_PANTHEIOS_EXTRAS_COM_HPP_EXCEPTION_HELPERS_EDIT      26
#endif /* !PANTHEIOS_DOCUMENTATION_SKIP_SECTION */

/* /////////////////////////////////////////////////////////////////////////
 * Includes
 */

#ifndef PANTHEIOS_INCL_PANTHEIOS_HPP_PANTHEIOS
# include <pantheios/pantheios.hpp>
#endif /* !PANTHEIOS_INCL_PANTHEIOS_HPP_PANTHEIOS */

#ifndef COMSTL_INCL_COMSTL_H_COMSTL
# include <comstl/comstl.h>
#endif /* !COMSTL_INCL_COMSTL_H_COMSTL */

/* /////////////////////////////////////////////////////////////////////////
 * Namespace
 */

#if !defined(PANTHEIOS_NO_NAMESPACE)
namespace pantheios
{
namespace extras
{
/** Extras components for using Pantheios when implementing COM components.
 *
 * When implementing COM components, one must carefully observe the
 * prohibition on allowing exceptions to escape out to the context of the
 * caller. But implementing COM components to follow this can be verbose
 * and tiresome. This function suite may be used to handle all that
 * boring guff automatically, and log the details of caught exceptions
 * to boot!
 *
 * The pantheios::extras::com::invoke_nothrow() functions can be used to wrap
 * non-member entry point functions, as illustrated in the following example
 * (an extract from the adjunct library <b>Pantheios.COM</b>):
 *
 * \code
STDAPI DllRegisterServer_()
{
  pantheios::log_NOTICE("DllRegisterServer()");

  HRESULT hr  =   S_OK;

#ifdef _MERGE_PROXYSTUB
  if(SUCCEEDED(hr))
  {
    hr = PrxDllRegisterServer();
  }
#endif \/\* _MERGE_PROXYSTUB \*\/

  if(SUCCEEDED(hr))
  {
    hr = _Module.RegisterServer(true);
  }

  if(FAILED(hr))
  {
    pantheios::log_ERROR( "Registration failed: ", pantheios::integer(hr, pantheios::fmt::fullHex)
                        , ": ", winstl::error_desc_a(hr));
  }
  else
  {
    // Translate all the other Pantheios loggers
    hr = ReregisterPantheiosEventSources();
  }

  return hr;
}

STDAPI DllRegisterServer()
{
  return pantheios::extras::com::invoke_nothrow(DllRegisterServer_, "DllRegisterServer");
}
 * \endcode
 *
 * Any exceptions thrown in the implementation function,
 * <code>DllRegisterServer_()</code> will be caught by
 * pantheios::extras::com::invoke_nothrow()
 * and translated into the appropriate <code>HRESULT</code>, and a
 * corresponding log statement called.
 *
 * The
 * pantheios::extras::com::invoke_nothrow_method()
 * functions can be used to wrap COM methods, as illustrated in the following
 * example (an extract from <a href = "http://openrj.org/">Open-RJ.COM</a>):
 *
 * \code
STDMETHODIMP Record::get_Count_(long* pVal)
{
  pantheios::log_DEBUG("Record::Count");

  return get_long_(pVal, &orj_record_t::numFields);
}

STDMETHODIMP Record::get_Count(long* pVal)
{
  return pantheios::extras::com::invoke_nothrow_method(this, &Record::get_Count_, pVal, "Record::Count");
}
 * \endcode
 */
namespace com
{
#endif /* !PANTHEIOS_NO_NAMESPACE */

/* /////////////////////////////////////////////////////////////////////////
 * Macros
 */

/** \def PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log
 *
 * User-customisable macro that is used in logging exceptions.
 *
 * Defaults to \c log
 */

/** \def PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert
 *
 * User-customisable macro that is used in logging exceptions.
 *
 * Defaults to \c alert
 */

/** \def PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_critical
 *
 * User-customisable macro that is used in logging exceptions.
 *
 * Defaults to \c critical
 */

#ifndef PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log
# define PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log         log
#endif /* !PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log */

#ifndef PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert
# define PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert       alert
#endif /* !PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert */

#ifndef PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_critical
# define PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_critical    critical
#endif /* !PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_critical */

/* /////////////////////////////////////////////////////////////////////////
 * Functions
 */

/// Wraps a 0-parameter function in an exception-handler and logs any
/// exceptions using Pantheios.
///
/// \param pfn The function that will be invoked
/// \param functionName The name of the function, used in any diagnostic logging messages
template <typename R>
inline R invoke_nothrow(R (STLSOFT_STDCALL *pfn)(), char const* functionName)
{
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    try
    {
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */
        HRESULT hr  =   (*pfn)();

        if(E_OUTOFMEMORY == hr)
        {
            goto out_of_memory;
        }

        return hr;
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    }
    catch(std::bad_alloc &)
    {
        goto out_of_memory;
    }
    catch(std::exception &x)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": exception: ", x);

        return E_FAIL;
    }
    catch(...)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_critical, functionName, ": unexpected exception!");

        return E_UNEXPECTED;
    }
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */

out_of_memory:
    PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": out of memory");

    return E_OUTOFMEMORY;
}

/// Wraps a 1-parameter function in an exception-handler and logs any
/// exceptions using Pantheios.
///
/// \param pfn The function that will be invoked
/// \param a0 The argument to the function
/// \param functionName The name of the function, used in any diagnostic logging messages
#ifdef PANTHEIOS_DOCUMENTATION_SKIP_SECTION
template <typename R, typename A0>
inline R invoke_nothrow(R (STLSOFT_STDCALL *pfn)(A0), A0 a0, char const* functionName)
#else /* ? PANTHEIOS_DOCUMENTATION_SKIP_SECTION */
template <typename R, typename A0>
inline R invoke_nothrow_1(R (STLSOFT_STDCALL *pfn)(A0), A0 a0, char const* functionName);
template <typename R, typename A0>
inline R invoke_nothrow(R (STLSOFT_STDCALL *pfn)(A0), A0 a0, char const* functionName)
{
    return invoke_nothrow_1<R, A0, A1>(pfn, a0, functionName);
}
template <typename R, typename A0>
inline R invoke_nothrow_1(R (STLSOFT_STDCALL *pfn)(A0), A0 a0, char const* functionName)
#endif /* PANTHEIOS_DOCUMENTATION_SKIP_SECTION */
{
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    try
    {
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */
        HRESULT hr  =   (*pfn)(a0);

        if(E_OUTOFMEMORY == hr)
        {
            goto out_of_memory;
        }

        return hr;
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    }
    catch(std::bad_alloc &)
    {
        goto out_of_memory;
    }
    catch(std::exception &x)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": exception: ", x);

        return E_FAIL;
    }
    catch(...)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_critical, functionName, ": unexpected exception!");

        return E_UNEXPECTED;
    }
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */

out_of_memory:
    PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": out of memory");

    return E_OUTOFMEMORY;
}

/// Wraps a 2-parameter function in an exception-handler and logs any
/// exceptions using Pantheios.
///
/// \param pfn The function that will be invoked
/// \param a0 The first argument to the function
/// \param a1 The second argument to the function
/// \param functionName The name of the function, used in any diagnostic logging messages
#ifdef PANTHEIOS_DOCUMENTATION_SKIP_SECTION
template <typename R, typename A0, typename A1>
inline R invoke_nothrow(R (STLSOFT_STDCALL *pfn)(A0, A1), A0 a0, A1 a1, char const* functionName)
#else /* ? PANTHEIOS_DOCUMENTATION_SKIP_SECTION */
template <typename R, typename A0, typename A1>
inline R invoke_nothrow_2(R (STLSOFT_STDCALL *pfn)(A0, A1), A0 a0, A1 a1, char const* functionName);
template <typename R, typename A0, typename A1>
inline R invoke_nothrow(R (STLSOFT_STDCALL *pfn)(A0, A1), A0 a0, A1 a1, char const* functionName)
{
    return invoke_nothrow_2<R, A0, A1>(pfn, a0, a1, functionName);
}
template <typename R, typename A0, typename A1>
inline R invoke_nothrow_2(R (STLSOFT_STDCALL *pfn)(A0, A1), A0 a0, A1 a1, char const* functionName)
#endif /* PANTHEIOS_DOCUMENTATION_SKIP_SECTION */
{
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    try
    {
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */
        HRESULT hr  =   (*pfn)(a0, a1);

        if(E_OUTOFMEMORY == hr)
        {
            goto out_of_memory;
        }

        return hr;
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    }
    catch(std::bad_alloc &)
    {
        goto out_of_memory;
    }
    catch(std::exception &x)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": exception: ", x);

        return E_FAIL;
    }
    catch(...)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_critical, functionName, ": unexpected exception!");

        return E_UNEXPECTED;
    }
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */

out_of_memory:
    PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": out of memory");

    return E_OUTOFMEMORY;
}

/// Wraps a 3-parameter function in an exception-handler and logs any
/// exceptions using Pantheios.
///
/// \param pfn The function that will be invoked
/// \param a0 The first argument to the function
/// \param a1 The second argument to the function
/// \param a2 The third argument to the function
/// \param functionName The name of the function, used in any diagnostic logging messages
#ifdef PANTHEIOS_DOCUMENTATION_SKIP_SECTION
template <typename R, typename A0, typename A1, typename A2>
inline R invoke_nothrow(R (STLSOFT_STDCALL *pfn)(A0, A1, A2), A0 a0, A1 a1, A2 a2, char const* functionName)
#else /* ? PANTHEIOS_DOCUMENTATION_SKIP_SECTION */
template <typename R, typename A0, typename A1, typename A2>
inline R invoke_nothrow_3(R (STLSOFT_STDCALL *pfn)(A0, A1, A2), A0 a0, A1 a1, A2 a2, char const* functionName);
template <typename R, typename A0, typename A1, typename A2>
inline R invoke_nothrow(R (STLSOFT_STDCALL *pfn)(A0, A1, A2), A0 a0, A1 a1, A2 a2, char const* functionName)
{
    return invoke_nothrow_3<R, A0, A1, A2>(pfn, a0, a1, a2, functionName);
}
template <typename R, typename A0, typename A1, typename A2>
inline R invoke_nothrow_3(R (STLSOFT_STDCALL *pfn)(A0, A1, A2), A0 a0, A1 a1, A2 a2, char const* functionName)
#endif /* PANTHEIOS_DOCUMENTATION_SKIP_SECTION */
{
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    try
    {
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */
        HRESULT hr  =   (*pfn)(a0, a1, a2);

        if(E_OUTOFMEMORY == hr)
        {
            goto out_of_memory;
        }

        return hr;
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    }
    catch(std::bad_alloc &)
    {
        goto out_of_memory;
    }
    catch(std::exception &x)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": exception: ", x);

        return E_FAIL;
    }
    catch(...)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_critical, functionName, ": unexpected exception!");

        return E_UNEXPECTED;
    }
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */

out_of_memory:
    PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": out of memory");

    return E_OUTOFMEMORY;
}



/// Wraps a 0-parameter class member function in an exception-handler and logs any
/// exceptions using Pantheios.
///
/// \param pThis The instance on which the member function will be invoked
/// \param pfn The member function that will be invoked
/// \param functionName The name of the function, used in any diagnostic logging messages
template <typename R, typename C>
inline R invoke_nothrow_method(C *pThis, R (C::*pfn)(), char const* functionName)
{
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    try
    {
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */
        HRESULT hr  =   (pThis->*pfn)();

        if(E_OUTOFMEMORY == hr)
        {
            goto out_of_memory;
        }

        return hr;
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    }
    catch(std::bad_alloc &)
    {
        goto out_of_memory;
    }
    catch(std::exception &x)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": exception: ", x);

        return E_FAIL;
    }
    catch(...)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_critical, functionName, ": unexpected exception!");

        return E_UNEXPECTED;
    }
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */

out_of_memory:
    PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": out of memory");

    return E_OUTOFMEMORY;
}

/// Wraps a 0-parameter <code>stdcall</code> class member function in an exception-handler and logs any
/// exceptions using Pantheios.
///
/// \param pThis The instance on which the member function will be invoked
/// \param pfn The member function that will be invoked
/// \param functionName The name of the function, used in any diagnostic logging messages
template <typename R, typename C>
inline R invoke_nothrow_method(C *pThis, R (STLSOFT_STDCALL C::*pfn)(), char const* functionName)
{
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    try
    {
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */
        HRESULT hr  =   (pThis->*pfn)();

        if(E_OUTOFMEMORY == hr)
        {
            goto out_of_memory;
        }

        return hr;
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    }
    catch(std::bad_alloc &)
    {
        goto out_of_memory;
    }
    catch(std::exception &x)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": exception: ", x);

        return E_FAIL;
    }
    catch(...)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_critical, functionName, ": unexpected exception!");

        return E_UNEXPECTED;
    }
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */

out_of_memory:
    PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": out of memory");

    return E_OUTOFMEMORY;
}



/// Wraps a 1-parameter class member function in an exception-handler and logs any
/// exceptions using Pantheios.
///
/// \param pThis The instance on which the member function will be invoked
/// \param pfn The member function that will be invoked
/// \param a0 The argument to the function
/// \param functionName The name of the function, used in any diagnostic logging messages
template <typename R, typename C, typename A0>
inline R invoke_nothrow_method(C *pThis, R (C::*pfn)(A0), A0 a0, char const* functionName)
{
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    try
    {
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */
        HRESULT hr  =   (pThis->*pfn)(a0);

        if(E_OUTOFMEMORY == hr)
        {
            goto out_of_memory;
        }

        return hr;
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    }
    catch(std::bad_alloc &)
    {
        goto out_of_memory;
    }
    catch(std::exception &x)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": exception: ", x);

        return E_FAIL;
    }
    catch(...)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_critical, functionName, ": unexpected exception!");

        return E_UNEXPECTED;
    }
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */

out_of_memory:
    PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": out of memory");

    return E_OUTOFMEMORY;
}

/// Wraps a 1-parameter <code>stdcall</code> class member function in an exception-handler and logs any
/// exceptions using Pantheios.
///
/// \param pThis The instance on which the member function will be invoked
/// \param pfn The member function that will be invoked
/// \param a0 The argument to the function
/// \param functionName The name of the function, used in any diagnostic logging messages
template <typename R, typename C, typename A0>
inline R invoke_nothrow_method(C *pThis, R (STLSOFT_STDCALL C::*pfn)(A0), A0 a0, char const* functionName)
{
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    try
    {
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */
        HRESULT hr  =   (pThis->*pfn)(a0);

        if(E_OUTOFMEMORY == hr)
        {
            goto out_of_memory;
        }

        return hr;
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    }
    catch(std::bad_alloc &)
    {
        goto out_of_memory;
    }
    catch(std::exception &x)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": exception: ", x);

        return E_FAIL;
    }
    catch(...)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_critical, functionName, ": unexpected exception!");

        return E_UNEXPECTED;
    }
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */

out_of_memory:
    PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": out of memory");

    return E_OUTOFMEMORY;
}



/// Wraps a 2-parameter class member function in an exception-handler and logs any
/// exceptions using Pantheios.
///
/// \param pThis The instance on which the member function will be invoked
/// \param pfn The member function that will be invoked
/// \param a0 The first argument to the function
/// \param a1 The second argument to the function
/// \param functionName The name of the function, used in any diagnostic logging messages
template <typename R, typename C, typename A0, typename A1>
inline R invoke_nothrow_method(C *pThis, R (C::*pfn)(A0, A1), A0 a0, A1 a1, char const* functionName)
{
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    try
    {
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */
        HRESULT hr  =   (pThis->*pfn)(a0, a1);

        if(E_OUTOFMEMORY == hr)
        {
            goto out_of_memory;
        }

        return hr;
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    }
    catch(std::bad_alloc &)
    {
        goto out_of_memory;
    }
    catch(std::exception &x)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": exception: ", x);

        return E_FAIL;
    }
    catch(...)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_critical, functionName, ": unexpected exception!");

        return E_UNEXPECTED;
    }
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */

out_of_memory:
    PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": out of memory");

    return E_OUTOFMEMORY;
}

/// Wraps a 2-parameter <code>stdcall</code> class member function in an exception-handler and logs any
/// exceptions using Pantheios.
///
/// \param pThis The instance on which the member function will be invoked
/// \param pfn The member function that will be invoked
/// \param a0 The first argument to the function
/// \param a1 The second argument to the function
/// \param functionName The name of the function, used in any diagnostic logging messages
template <typename R, typename C, typename A0, typename A1>
inline R invoke_nothrow_method(C *pThis, R (STLSOFT_STDCALL C::*pfn)(A0, A1), A0 a0, A1 a1, char const* functionName)
{
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    try
    {
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */
        HRESULT hr  =   (pThis->*pfn)(a0, a1);

        if(E_OUTOFMEMORY == hr)
        {
            goto out_of_memory;
        }

        return hr;
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    }
    catch(std::bad_alloc &)
    {
        goto out_of_memory;
    }
    catch(std::exception &x)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": exception: ", x);

        return E_FAIL;
    }
    catch(...)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_critical, functionName, ": unexpected exception!");

        return E_UNEXPECTED;
    }
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */

out_of_memory:
    PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": out of memory");

    return E_OUTOFMEMORY;
}




/// Wraps a 3-parameter class member function in an exception-handler and logs any
/// exceptions using Pantheios.
///
/// \param pThis The instance on which the member function will be invoked
/// \param pfn The member function that will be invoked
/// \param a0 The first argument to the function
/// \param a1 The second argument to the function
/// \param a2 The third argument to the function
/// \param functionName The name of the function, used in any diagnostic logging messages
template <typename R, typename C, typename A0, typename A1, typename A2>
inline R invoke_nothrow_method(C *pThis, R (C::*pfn)(A0, A1, A2), A0 a0, A1 a1, A2 a2, char const* functionName)
{
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    try
    {
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */
        HRESULT hr  =   (pThis->*pfn)(a0, a1, a2);

        if(E_OUTOFMEMORY == hr)
        {
            goto out_of_memory;
        }

        return hr;
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    }
    catch(std::bad_alloc &)
    {
        goto out_of_memory;
    }
    catch(std::exception &x)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": exception: ", x);

        return E_FAIL;
    }
    catch(...)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_critical, functionName, ": unexpected exception!");

        return E_UNEXPECTED;
    }
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */

out_of_memory:
    PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": out of memory");

    return E_OUTOFMEMORY;
}

/// Wraps a 3-parameter <code>stdcall</code> class member function in an exception-handler and logs any
/// exceptions using Pantheios.
///
/// \param pThis The instance on which the member function will be invoked
/// \param pfn The member function that will be invoked
/// \param a0 The first argument to the function
/// \param a1 The second argument to the function
/// \param a2 The third argument to the function
/// \param functionName The name of the function, used in any diagnostic logging messages
template <typename R, typename C, typename A0, typename A1, typename A2>
inline R invoke_nothrow_method(C *pThis, R (STLSOFT_STDCALL C::*pfn)(A0, A1, A2), A0 a0, A1 a1, A2 a2, char const* functionName)
{
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    try
    {
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */
        HRESULT hr  =   (pThis->*pfn)(a0, a1, a2);

        if(E_OUTOFMEMORY == hr)
        {
            goto out_of_memory;
        }

        return hr;
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    }
    catch(std::bad_alloc &)
    {
        goto out_of_memory;
    }
    catch(std::exception &x)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": exception: ", x);

        return E_FAIL;
    }
    catch(...)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_critical, functionName, ": unexpected exception!");

        return E_UNEXPECTED;
    }
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */

out_of_memory:
    PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": out of memory");

    return E_OUTOFMEMORY;
}





/// Wraps a 4-parameter class member function in an exception-handler and logs any
/// exceptions using Pantheios.
///
/// \param pThis The instance on which the member function will be invoked
/// \param pfn The member function that will be invoked
/// \param a0 The first argument to the function
/// \param a1 The second argument to the function
/// \param a2 The third argument to the function
/// \param a3 The fourth argument to the function
/// \param functionName The name of the function, used in any diagnostic logging messages
template <typename R, typename C, typename A0, typename A1, typename A2, typename A3>
inline R invoke_nothrow_method(C *pThis, R (C::*pfn)(A0, A1, A2, A3), A0 a0, A1 a1, A2 a2, A3 a3, char const* functionName)
{
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    try
    {
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */
        HRESULT hr  =   (pThis->*pfn)(a0, a1, a2, a3);

        if(E_OUTOFMEMORY == hr)
        {
            goto out_of_memory;
        }

        return hr;
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    }
    catch(std::bad_alloc &)
    {
        goto out_of_memory;
    }
    catch(std::exception &x)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": exception: ", x);

        return E_FAIL;
    }
    catch(...)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_critical, functionName, ": unexpected exception!");

        return E_UNEXPECTED;
    }
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */

out_of_memory:
    PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": out of memory");

    return E_OUTOFMEMORY;
}

/// Wraps a 4-parameter <code>stdcall</code> class member function in an exception-handler and logs any
/// exceptions using Pantheios.
///
/// \param pThis The instance on which the member function will be invoked
/// \param pfn The member function that will be invoked
/// \param a0 The first argument to the function
/// \param a1 The second argument to the function
/// \param a2 The third argument to the function
/// \param a3 The fourth argument to the function
/// \param functionName The name of the function, used in any diagnostic logging messages
template <typename R, typename C, typename A0, typename A1, typename A2, typename A3>
inline R invoke_nothrow_method(C *pThis, R (STLSOFT_STDCALL C::*pfn)(A0, A1, A2, A3), A0 a0, A1 a1, A2 a2, A3 a3, char const* functionName)
{
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    try
    {
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */
        HRESULT hr  =   (pThis->*pfn)(a0, a1, a2, a3);

        if(E_OUTOFMEMORY == hr)
        {
            goto out_of_memory;
        }

        return hr;
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    }
    catch(std::bad_alloc &)
    {
        goto out_of_memory;
    }
    catch(std::exception &x)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": exception: ", x);

        return E_FAIL;
    }
    catch(...)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_critical, functionName, ": unexpected exception!");

        return E_UNEXPECTED;
    }
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */

out_of_memory:
    PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": out of memory");

    return E_OUTOFMEMORY;
}




/// Wraps a 5-parameter class member function in an exception-handler and logs any
/// exceptions using Pantheios.
///
/// \param pThis The instance on which the member function will be invoked
/// \param pfn The member function that will be invoked
/// \param a0 The first argument to the function
/// \param a1 The second argument to the function
/// \param a2 The third argument to the function
/// \param a3 The fourth argument to the function
/// \param a4 The fifth argument to the function
/// \param functionName The name of the function, used in any diagnostic logging messages
template <typename R, typename C, typename A0, typename A1, typename A2, typename A3, typename A4>
inline R invoke_nothrow_method(C *pThis, R (C::*pfn)(A0, A1, A2, A3, A4), A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, char const* functionName)
{
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    try
    {
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */
        HRESULT hr  =   (pThis->*pfn)(a0, a1, a2, a3, a4);

        if(E_OUTOFMEMORY == hr)
        {
            goto out_of_memory;
        }

        return hr;
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    }
    catch(std::bad_alloc &)
    {
        goto out_of_memory;
    }
    catch(std::exception &x)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": exception: ", x);

        return E_FAIL;
    }
    catch(...)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_critical, functionName, ": unexpected exception!");

        return E_UNEXPECTED;
    }
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */

out_of_memory:
    PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": out of memory");

    return E_OUTOFMEMORY;
}

/// Wraps a 5-parameter <code>stdcall</code> class member function in an exception-handler and logs any
/// exceptions using Pantheios.
///
/// \param pThis The instance on which the member function will be invoked
/// \param pfn The member function that will be invoked
/// \param a0 The first argument to the function
/// \param a1 The second argument to the function
/// \param a2 The third argument to the function
/// \param a3 The fourth argument to the function
/// \param a4 The fifth argument to the function
/// \param functionName The name of the function, used in any diagnostic logging messages
template <typename R, typename C, typename A0, typename A1, typename A2, typename A3, typename A4>
inline R invoke_nothrow_method(C *pThis, R (STLSOFT_STDCALL C::*pfn)(A0, A1, A2, A3, A4), A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, char const* functionName)
{
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    try
    {
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */
        HRESULT hr  =   (pThis->*pfn)(a0, a1, a2, a3, a4);

        if(E_OUTOFMEMORY == hr)
        {
            goto out_of_memory;
        }

        return hr;
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    }
    catch(std::bad_alloc &)
    {
        goto out_of_memory;
    }
    catch(std::exception &x)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": exception: ", x);

        return E_FAIL;
    }
    catch(...)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_critical, functionName, ": unexpected exception!");

        return E_UNEXPECTED;
    }
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */

out_of_memory:
    PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": out of memory");

    return E_OUTOFMEMORY;
}




/// Wraps a 5-parameter class member function in an exception-handler and logs any
/// exceptions using Pantheios.
///
/// \param pThis The instance on which the member function will be invoked
/// \param pfn The member function that will be invoked
/// \param a0 The first argument to the function
/// \param a1 The second argument to the function
/// \param a2 The third argument to the function
/// \param a3 The fourth argument to the function
/// \param a4 The fifth argument to the function
/// \param a5 The sixth argument to the function
/// \param functionName The name of the function, used in any diagnostic logging messages
template <typename R, typename C, typename A0, typename A1, typename A2, typename A3, typename A4, typename A5>
inline R invoke_nothrow_method(C *pThis, R (C::*pfn)(A0, A1, A2, A3, A4, A5), A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, char const* functionName)
{
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    try
    {
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */
        HRESULT hr  =   (pThis->*pfn)(a0, a1, a2, a3, a4, a5);

        if(E_OUTOFMEMORY == hr)
        {
            goto out_of_memory;
        }

        return hr;
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    }
    catch(std::bad_alloc &)
    {
        goto out_of_memory;
    }
    catch(std::exception &x)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": exception: ", x);

        return E_FAIL;
    }
    catch(...)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_critical, functionName, ": unexpected exception!");

        return E_UNEXPECTED;
    }
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */

out_of_memory:
    PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": out of memory");

    return E_OUTOFMEMORY;
}

/// Wraps a 5-parameter <code>stdcall</code> class member function in an exception-handler and logs any
/// exceptions using Pantheios.
///
/// \param pThis The instance on which the member function will be invoked
/// \param pfn The member function that will be invoked
/// \param a0 The first argument to the function
/// \param a1 The second argument to the function
/// \param a2 The third argument to the function
/// \param a3 The fourth argument to the function
/// \param a4 The fifth argument to the function
/// \param a5 The sixth argument to the function
/// \param functionName The name of the function, used in any diagnostic logging messages
template <typename R, typename C, typename A0, typename A1, typename A2, typename A3, typename A4, typename A5>
inline R invoke_nothrow_method(C *pThis, R (STLSOFT_STDCALL C::*pfn)(A0, A1, A2, A3, A4, A5), A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, char const* functionName)
{
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    try
    {
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */
        HRESULT hr  =   (pThis->*pfn)(a0, a1, a2, a3, a4, a5);

        if(E_OUTOFMEMORY == hr)
        {
            goto out_of_memory;
        }

        return hr;
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    }
    catch(std::bad_alloc &)
    {
        goto out_of_memory;
    }
    catch(std::exception &x)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": exception: ", x);

        return E_FAIL;
    }
    catch(...)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_critical, functionName, ": unexpected exception!");

        return E_UNEXPECTED;
    }
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */

out_of_memory:
    PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": out of memory");

    return E_OUTOFMEMORY;
}




/// Wraps a 5-parameter class member function in an exception-handler and logs any
/// exceptions using Pantheios.
///
/// \param pThis The instance on which the member function will be invoked
/// \param pfn The member function that will be invoked
/// \param a0 The first argument to the function
/// \param a1 The second argument to the function
/// \param a2 The third argument to the function
/// \param a3 The fourth argument to the function
/// \param a4 The fifth argument to the function
/// \param a5 The sixth argument to the function
/// \param a6 The seventh argument to the function
/// \param functionName The name of the function, used in any diagnostic logging messages
template <typename R, typename C, typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
inline R invoke_nothrow_method(C *pThis, R (C::*pfn)(A0, A1, A2, A3, A4, A5, A6), A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, char const* functionName)
{
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    try
    {
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */
        HRESULT hr  =   (pThis->*pfn)(a0, a1, a2, a3, a4, a5, a6);

        if(E_OUTOFMEMORY == hr)
        {
            goto out_of_memory;
        }

        return hr;
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    }
    catch(std::bad_alloc &)
    {
        goto out_of_memory;
    }
    catch(std::exception &x)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": exception: ", x);

        return E_FAIL;
    }
    catch(...)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_critical, functionName, ": unexpected exception!");

        return E_UNEXPECTED;
    }
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */

out_of_memory:
    PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": out of memory");

    return E_OUTOFMEMORY;
}

/// Wraps a 5-parameter <code>stdcall</code> class member function in an exception-handler and logs any
/// exceptions using Pantheios.
///
/// \param pThis The instance on which the member function will be invoked
/// \param pfn The member function that will be invoked
/// \param a0 The first argument to the function
/// \param a1 The second argument to the function
/// \param a2 The third argument to the function
/// \param a3 The fourth argument to the function
/// \param a4 The fifth argument to the function
/// \param a5 The sixth argument to the function
/// \param a6 The seventh argument to the function
/// \param functionName The name of the function, used in any diagnostic logging messages
template <typename R, typename C, typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6>
inline R invoke_nothrow_method(C *pThis, R (STLSOFT_STDCALL C::*pfn)(A0, A1, A2, A3, A4, A5, A6), A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, char const* functionName)
{
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    try
    {
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */
        HRESULT hr  =   (pThis->*pfn)(a0, a1, a2, a3, a4, a5, a6);

        if(E_OUTOFMEMORY == hr)
        {
            goto out_of_memory;
        }

        return hr;
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    }
    catch(std::bad_alloc &)
    {
        goto out_of_memory;
    }
    catch(std::exception &x)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": exception: ", x);

        return E_FAIL;
    }
    catch(...)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_critical, functionName, ": unexpected exception!");

        return E_UNEXPECTED;
    }
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */

out_of_memory:
    PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": out of memory");

    return E_OUTOFMEMORY;
}




/// Wraps a 5-parameter class member function in an exception-handler and logs any
/// exceptions using Pantheios.
///
/// \param pThis The instance on which the member function will be invoked
/// \param pfn The member function that will be invoked
/// \param a0 The first argument to the function
/// \param a1 The second argument to the function
/// \param a2 The third argument to the function
/// \param a3 The fourth argument to the function
/// \param a4 The fifth argument to the function
/// \param a5 The sixth argument to the function
/// \param a6 The seventh argument to the function
/// \param a7 The eigth argument to the function
/// \param functionName The name of the function, used in any diagnostic logging messages
template <typename R, typename C, typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7>
inline R invoke_nothrow_method(C *pThis, R (C::*pfn)(A0, A1, A2, A3, A4, A5, A6, A7), A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, char const* functionName)
{
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    try
    {
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */
        HRESULT hr  =   (pThis->*pfn)(a0, a1, a2, a3, a4, a5, a6, a7);

        if(E_OUTOFMEMORY == hr)
        {
            goto out_of_memory;
        }

        return hr;
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    }
    catch(std::bad_alloc &)
    {
        goto out_of_memory;
    }
    catch(std::exception &x)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": exception: ", x);

        return E_FAIL;
    }
    catch(...)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_critical, functionName, ": unexpected exception!");

        return E_UNEXPECTED;
    }
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */

out_of_memory:
    PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": out of memory");

    return E_OUTOFMEMORY;
}

/// Wraps a 5-parameter <code>stdcall</code> class member function in an exception-handler and logs any
/// exceptions using Pantheios.
///
/// \param pThis The instance on which the member function will be invoked
/// \param pfn The member function that will be invoked
/// \param a0 The first argument to the function
/// \param a1 The second argument to the function
/// \param a2 The third argument to the function
/// \param a3 The fourth argument to the function
/// \param a4 The fifth argument to the function
/// \param a5 The sixth argument to the function
/// \param a6 The seventh argument to the function
/// \param a7 The eigth argument to the function
/// \param functionName The name of the function, used in any diagnostic logging messages
template <typename R, typename C, typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7>
inline R invoke_nothrow_method(C *pThis, R (STLSOFT_STDCALL C::*pfn)(A0, A1, A2, A3, A4, A5, A6, A7), A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, char const* functionName)
{
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    try
    {
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */
        HRESULT hr  =   (pThis->*pfn)(a0, a1, a2, a3, a4, a5, a6, a7);

        if(E_OUTOFMEMORY == hr)
        {
            goto out_of_memory;
        }

        return hr;
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    }
    catch(std::bad_alloc &)
    {
        goto out_of_memory;
    }
    catch(std::exception &x)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": exception: ", x);

        return E_FAIL;
    }
    catch(...)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_critical, functionName, ": unexpected exception!");

        return E_UNEXPECTED;
    }
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */

out_of_memory:
    PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": out of memory");

    return E_OUTOFMEMORY;
}




/// Wraps a 5-parameter class member function in an exception-handler and logs any
/// exceptions using Pantheios.
///
/// \param pThis The instance on which the member function will be invoked
/// \param pfn The member function that will be invoked
/// \param a0 The first argument to the function
/// \param a1 The second argument to the function
/// \param a2 The third argument to the function
/// \param a3 The fourth argument to the function
/// \param a4 The fifth argument to the function
/// \param a5 The sixth argument to the function
/// \param a6 The seventh argument to the function
/// \param a7 The eigth argument to the function
/// \param a8 The ninth argument to the function
/// \param functionName The name of the function, used in any diagnostic logging messages
template <typename R, typename C, typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8>
inline R invoke_nothrow_method(C *pThis, R (C::*pfn)(A0, A1, A2, A3, A4, A5, A6, A7, A8), A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, char const* functionName)
{
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    try
    {
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */
        HRESULT hr  =   (pThis->*pfn)(a0, a1, a2, a3, a4, a5, a6, a7, a8);

        if(E_OUTOFMEMORY == hr)
        {
            goto out_of_memory;
        }

        return hr;
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    }
    catch(std::bad_alloc &)
    {
        goto out_of_memory;
    }
    catch(std::exception &x)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": exception: ", x);

        return E_FAIL;
    }
    catch(...)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_critical, functionName, ": unexpected exception!");

        return E_UNEXPECTED;
    }
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */

out_of_memory:
    PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": out of memory");

    return E_OUTOFMEMORY;
}

/// Wraps a 5-parameter <code>stdcall</code> class member function in an exception-handler and logs any
/// exceptions using Pantheios.
///
/// \param pThis The instance on which the member function will be invoked
/// \param pfn The member function that will be invoked
/// \param a0 The first argument to the function
/// \param a1 The second argument to the function
/// \param a2 The third argument to the function
/// \param a3 The fourth argument to the function
/// \param a4 The fifth argument to the function
/// \param a5 The sixth argument to the function
/// \param a6 The seventh argument to the function
/// \param a7 The eigth argument to the function
/// \param a8 The ninth argument to the function
/// \param functionName The name of the function, used in any diagnostic logging messages
template <typename R, typename C, typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8>
inline R invoke_nothrow_method(C *pThis, R (STLSOFT_STDCALL C::*pfn)(A0, A1, A2, A3, A4, A5, A6, A7, A8), A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, char const* functionName)
{
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    try
    {
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */
        HRESULT hr  =   (pThis->*pfn)(a0, a1, a2, a3, a4, a5, a6, a7, a8);

        if(E_OUTOFMEMORY == hr)
        {
            goto out_of_memory;
        }

        return hr;
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    }
    catch(std::bad_alloc &)
    {
        goto out_of_memory;
    }
    catch(std::exception &x)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": exception: ", x);

        return E_FAIL;
    }
    catch(...)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_critical, functionName, ": unexpected exception!");

        return E_UNEXPECTED;
    }
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */

out_of_memory:
    PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": out of memory");

    return E_OUTOFMEMORY;
}




/// Wraps a 5-parameter class member function in an exception-handler and logs any
/// exceptions using Pantheios.
///
/// \param pThis The instance on which the member function will be invoked
/// \param pfn The member function that will be invoked
/// \param a0 The first argument to the function
/// \param a1 The second argument to the function
/// \param a2 The third argument to the function
/// \param a3 The fourth argument to the function
/// \param a4 The fifth argument to the function
/// \param a5 The sixth argument to the function
/// \param a6 The seventh argument to the function
/// \param a7 The eigth argument to the function
/// \param a8 The ninth argument to the function
/// \param a9 The tenth argument to the function
/// \param functionName The name of the function, used in any diagnostic logging messages
template <typename R, typename C, typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9>
inline R invoke_nothrow_method(C *pThis, R (C::*pfn)(A0, A1, A2, A3, A4, A5, A6, A7, A8, A9), A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, char const* functionName)
{
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    try
    {
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */
        HRESULT hr  =   (pThis->*pfn)(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);

        if(E_OUTOFMEMORY == hr)
        {
            goto out_of_memory;
        }

        return hr;
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    }
    catch(std::bad_alloc &)
    {
        goto out_of_memory;
    }
    catch(std::exception &x)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": exception: ", x);

        return E_FAIL;
    }
    catch(...)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_critical, functionName, ": unexpected exception!");

        return E_UNEXPECTED;
    }
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */

out_of_memory:
    PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": out of memory");

    return E_OUTOFMEMORY;
}

/// Wraps a 5-parameter <code>stdcall</code> class member function in an exception-handler and logs any
/// exceptions using Pantheios.
///
/// \param pThis The instance on which the member function will be invoked
/// \param pfn The member function that will be invoked
/// \param a0 The first argument to the function
/// \param a1 The second argument to the function
/// \param a2 The third argument to the function
/// \param a3 The fourth argument to the function
/// \param a4 The fifth argument to the function
/// \param a5 The sixth argument to the function
/// \param a6 The seventh argument to the function
/// \param a7 The eigth argument to the function
/// \param a8 The ninth argument to the function
/// \param a9 The tenth argument to the function
/// \param functionName The name of the function, used in any diagnostic logging messages
template <typename R, typename C, typename A0, typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7, typename A8, typename A9>
inline R invoke_nothrow_method(C *pThis, R (STLSOFT_STDCALL C::*pfn)(A0, A1, A2, A3, A4, A5, A6, A7, A8, A9), A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, char const* functionName)
{
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    try
    {
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */
        HRESULT hr  =   (pThis->*pfn)(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);

        if(E_OUTOFMEMORY == hr)
        {
            goto out_of_memory;
        }

        return hr;
#ifdef STLSOFT_CF_EXCEPTION_SUPPORT
    }
    catch(std::bad_alloc &)
    {
        goto out_of_memory;
    }
    catch(std::exception &x)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": exception: ", x);

        return E_FAIL;
    }
    catch(...)
    {
        PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_critical, functionName, ": unexpected exception!");

        return E_UNEXPECTED;
    }
#endif /* STLSOFT_CF_EXCEPTION_SUPPORT */

out_of_memory:
    PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_log(PANTHEIOS_EXTRAS_COM_EXCEPTION_HELPERS_alert, functionName, ": out of memory");

    return E_OUTOFMEMORY;
}

/* /////////////////////////////////////////////////////////////////////////
 * Namespace
 */

#if !defined(PANTHEIOS_NO_NAMESPACE)
} /* namespace com */
} /* namespace extras */
} /* namespace pantheios */
#endif /* !PANTHEIOS_NO_NAMESPACE */

/* ////////////////////////////////////////////////////////////////////// */

#endif /* !PANTHEIOS_INCL_PANTHEIOS_EXTRAS_COM_HPP_EXCEPTION_HELPERS */

/* ///////////////////////////// end of file //////////////////////////// */
