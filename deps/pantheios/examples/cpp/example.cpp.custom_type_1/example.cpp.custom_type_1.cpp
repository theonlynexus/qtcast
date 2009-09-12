/* /////////////////////////////////////////////////////////////////////////
 * File:        examples/cpp/example.cpp.custom_type_1/example.cpp.custom_type_1.cpp
 *
 * Purpose:     C++ example program for Pantheios. Demonstrates:
 *
 *                - use of explicit conversion code for custom type
 *                - definition of specific conversion function for custom type
 *                - definition of string access shims for custom type
 *                - definition of inserter class for custom type
 *                - use of pantheios::logputs() in bail-out conditions
 *
 * Created:     31st August 2006
 * Updated:     1st January 2009
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


// NOTE: There is a bug in the two-phase lookup (at least I think it's
//  there) of GCC (except, afaict, the Mac OS-X version, which works fine),
//  which results in the custom string access shims for Person not being
//  detected unless they're defined or, as in this case, declared _before_
//  the inclusion of pantheios/pantheios.hpp.
//
//  In normal applications, this is going to be easy to handle, since your
//  custom types are likely to be defined (and their shims
//  defined/declared) in a header file. Since good practice dictates that
//  application-specific headers should be included before library headers
//  you'd probably see something like the following:
//
//    #include "myappcomponent.h"
//    #include "person.h"
//
//    #include <pantheios/pantheios/hpp>
//
//    #include <vector>
//
//  or similar.
//
//  In this case, however, we must synthesise this situation by doing the
//  forward declarations in this file. We only do this for GCC (and not on
//  Mac) since the other compilers all do the right thing.


#include <stlsoft/stlsoft.h>
#include <platformstl/platformstl.h>    // Need to detect comp+OS: see above
#if defined(STLSOFT_COMPILER_IS_GCC) && \
    (   !defined(UNIXSTL_OS_IS_MACOSX) || \
        __GNUC__ < 4)
// There's something wrong with GCC, so we have to fwd declare these things
# include <stlsoft/string/shim_string.hpp>
class Person;
class Person_inserter;
namespace stlsoft
{
  char const *c_str_data_a(Person_inserter const& pi);
  size_t c_str_len_a(Person_inserter const& pi);
  stlsoft::basic_shim_string<char> c_str_data_a(Person const& person);
  size_t c_str_len_a(Person const& pi);

} // namespace stlsoft
#endif /* compiler */


/* Pantheios Header Files */
#include <pantheios/pantheios.hpp>                          // Pantheios C++ main header
#include <pantheios/inserters/integer.hpp>                  // for pantheios::integer
#include <pantheios/inserters/w2m.hpp>                      // for pantheios::w2m
#include <pantheios/quality/contract.h>
#include <pantheios/internal/safestr.h>

/* STLSoft Header Files */
#include <stlsoft/conversion/char_conversions.hpp>          // for stlsoft::w2m
#include <stlsoft/conversion/integer_to_string.hpp>         // for stlsoft::integer_to_string
#include <pantheios/util/memory/auto_buffer_selector.hpp>   // for stlsoft::auto_buffer
#include <stlsoft/string/shim_string.hpp>                   // for stlsoft::shim_string

/* Standard C/C++ Header Files */
#include <exception>                                        // for std::exception
#include <new>                                              // for std::bad_alloc
#include <string>                                           // for std::string
#include <stdlib.h>                                         // for exit codes

/* ////////////////////////////////////////////////////////////////////// */

#if defined(STLSOFT_COMPILER_IS_MSVC) && \
    defined(PANTHEIOS_USING_SAFE_STR_FUNCTIONS)
# pragma warning(disable : 4996)
#endif /* VC++ && Safe String */

/* ////////////////////////////////////////////////////////////////////// */

class Person
{
private:
  typedef std::wstring string_type;

public:
  Person(wchar_t const *forename, wchar_t const *surname, unsigned age)
    : m_forename(forename)
    , m_surname(surname)
    , m_age(age)
  {}

public:
  string_type const& forename() const
  {
    return m_forename;
  }
  string_type const& surname() const
  {
    return m_surname;
  }
  unsigned          age() const
  {
    return m_age;
  }

private:
  const string_type m_forename;
  const string_type m_surname;
  const unsigned    m_age;

private:
  Person &operator =(Person const&);
};

/* ////////////////////////////////////////////////////////////////////// */

/* Define the stock front-end process identity, so that it links when using
 * fe.N, fe.simple, etc. */
PANTHEIOS_EXTERN_C const char PANTHEIOS_FE_PROCESS_IDENTITY[] = "example.cpp.custom_type_1";

/* ////////////////////////////////////////////////////////////////////// */

static void log_with_explicit_conversion_code(Person const& person);
static void log_with_conversion_function(Person const& person);
static void log_with_string_access_shims(Person const& person);
static void log_with_inserter_class(Person const& person);

/* ////////////////////////////////////////////////////////////////////// */

int main()
{
  try
  {
    Person  person(L"Dr", L"Proctor", 38);

    // log with explicit conversion

    log_with_explicit_conversion_code(person);

    // log with conversion function

    log_with_conversion_function(person);

    // log with string access shims

    log_with_string_access_shims(person);

    // log with inserter class

    log_with_inserter_class(person);


    return EXIT_SUCCESS;
  }
  catch(std::bad_alloc&)
  {
    pantheios::log(pantheios::alert, "out of memory");
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

static void log_with_explicit_conversion_code(Person const& person)
{
  if(pantheios::isSeverityLogged(pantheios::notice))
  {
    // Since Person's names are wide, we need to convert

    // NOTE: this code does not check for stlsoft::w2m() failure (returns size_t(-1))

    // 1. Create buffers for conversion. (auto_buffer used to minimise heap
    //     when not necessary.)

    pantheios::log_NOTICE("Person: ", pantheios::w2m(person.forename().c_str()), " ", pantheios::w2m(person.surname().c_str()), ", aged ", pantheios::integer(person.age()));
  }
}

/* ////////////////////////////////////////////////////////////////////// */

static std::string Person_to_string(Person const& person)
{
  // Since Person's names are wide, we need to convert

  // NOTE: this code does not check for wcstombs() failure (returns size_t(-1))

  // 1. Create buffers for conversion. (auto_buffer used to minimise heap
  //     when not necessary.)

  typedef pantheios::util::auto_buffer_selector<char, 256>::type buffer_t;

  buffer_t  forename(1 + ::wcstombs(NULL, person.forename().c_str(), 0));
  buffer_t  surname(1 + ::wcstombs(NULL, person.surname().c_str(), 0));

  // 2. Convert

  ::wcstombs(forename.data(), person.forename().data(), forename.size());
  ::wcstombs(surname.data(), person.surname().data(), surname.size());

  PANTHEIOS_CONTRACT_ENFORCE_POSTCONDITION_RETURN_APPL_LAYER('\0' == forename[forename.size() - 1], "the forename was incorrectly converted");
  PANTHEIOS_CONTRACT_ENFORCE_POSTCONDITION_RETURN_APPL_LAYER('\0' == surname[surname.size() - 1], "the surname was incorrectly converted");

  std::string result(forename.data(), forename.size() - 1);
  char        sz[21];

  result.append(" ", 1);
  result.append(surname.data(), surname.size() - 1);
  result += ", aged ";
  result += stlsoft::integer_to_string(sz, STLSOFT_NUM_ELEMENTS(sz), person.age());

  return result;
}

static void log_with_conversion_function(Person const& person)
{
  pantheios::log_NOTICE("Person: ", Person_to_string(person));
}

/* ////////////////////////////////////////////////////////////////////// */

namespace stlsoft
{

  inline stlsoft::basic_shim_string<char> c_str_data_a(Person const& person)
  {
    char          sz[21];
    size_t        cchNumber;
    char const    *num        = stlsoft::integer_to_string(sz, STLSOFT_NUM_ELEMENTS(sz), person.age(), cchNumber);
    const size_t  cchForename = ::wcstombs(NULL, person.forename().data(), 0);
    const size_t  cchSurname  = ::wcstombs(NULL, person.surname().data(), 0);
    char          *p;

    stlsoft::basic_shim_string<char>    s(person.forename().size() + 1 + person.surname().size() + 7 + cchNumber);

    p = s.data();
    p += ::wcstombs(p + 0, person.forename().data(), cchForename);
    p = ::strncpy(p, " ", 1) + 1;
    p += ::wcstombs(p, person.surname().data(), cchSurname);
    p = ::strncpy(p, ", aged ", 7);
    p = ::strncpy(p + 7, num, cchNumber);
    p += cchNumber;
    p[0] = '\0';

    PANTHEIOS_CONTRACT_ENFORCE_POSTCONDITION_RETURN_APPL_LAYER(p == s.data() + s.size(), "incorrect number of characters written");

    return s;
  }

  inline size_t c_str_len_a(Person const& person)
  {
    char          sz[21];
    size_t        cchNumber;
    char const    *num        = stlsoft::integer_to_string(sz, STLSOFT_NUM_ELEMENTS(sz), person.age(), cchNumber);
    const size_t  cchForename = ::wcstombs(NULL, person.forename().data(), 0);
    const size_t  cchSurname  = ::wcstombs(NULL, person.surname().data(), 0);

  STLSOFT_SUPPRESS_UNUSED(num);

    return cchForename + 1 + cchSurname + 7 + cchNumber;
  }

} // namespace stlsoft

static void log_with_string_access_shims(Person const& person)
{
  pantheios::log_NOTICE("Person: ", person);
}

/* ////////////////////////////////////////////////////////////////////// */

class Person_inserter
{
public:
  typedef Person_inserter class_type;

public:
  Person_inserter(Person const& person)
    : m_person(person)
    , m_value(0)
  {}

#if defined(STLSOFT_COMPILER_IS_GCC)
  Person_inserter(class_type const& rhs)
    : m_person(m_person)
    , m_value(m_value.size())
  {
    ::memcpy(&m_value[0], &rhs.m_value[0], m_value.size());
  }
#endif /* compiler */

public:
  char const  *data() const
  {
    if(m_value.empty())
    {
      construct_();
    }

    return m_value.data();
  }
  size_t size() const
  {
    if(m_value.empty())
    {
      construct_();
    }

    return m_value.size();
  }

public:
  void construct_() const
  {
    const_cast<class_type*>(this)->construct_();
  }
  void construct_()
  {
    char          sz[21];
    size_t        cchNumber;
    char const    *num        = stlsoft::integer_to_string(sz, STLSOFT_NUM_ELEMENTS(sz), m_person.age(), cchNumber);
    const size_t  cchForename = ::wcstombs(NULL, m_person.forename().data(), 0);
    const size_t  cchSurname  = ::wcstombs(NULL, m_person.surname().data(), 0);
    char          *p;

    m_value.resize(cchForename + 1 + cchSurname + 7 + cchNumber);

    p = m_value.data();
    p += ::wcstombs(p + 0, m_person.forename().data(), cchForename);
    p = ::strncpy(p, " ", 1);
    p += 1;
    p += ::wcstombs(p, m_person.surname().data(), cchSurname);
    p = ::strncpy(p, ", aged ", 7);
    p = ::strncpy(p + 7, num, cchNumber);
    p += cchNumber;

    PANTHEIOS_CONTRACT_ENFORCE_POSTCONDITION_RETURN_APPL_LAYER(p == &*m_value.end(), "incorrect number of characters written");
  }

private:
  typedef pantheios::util::auto_buffer_selector<char, 256>::type   buffer_type;

  Person const      &m_person;
  buffer_type       m_value;
};

namespace stlsoft
{

  inline char const *c_str_data_a(Person_inserter const& pi)
  {
    return pi.data();
  }

  inline size_t c_str_len_a(Person_inserter const& pi)
  {
    return pi.size();
  }

} // namespace stlsoft

static void log_with_inserter_class(Person const& person)
{
  pantheios::log_NOTICE("Person: ", Person_inserter(person));
}

/* ////////////////////////////////////////////////////////////////////// */
