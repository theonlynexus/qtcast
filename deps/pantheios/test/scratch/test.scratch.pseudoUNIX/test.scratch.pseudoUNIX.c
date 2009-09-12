/* /////////////////////////////////////////////////////////////////////////
 * File:        test/scratch/test.scratch.pseudoUNIX/test.scratch.pseudoUNIX.c
 *
 * Purpose:     Implementation file for the pseudoUNIX.test project.
 *
 * Created:     23rd September 2006
 * Updated:     1st August 2008
 *
 * Status:      Wizard-generated
 *
 * License:     (Licensed under the Synesis Software Open License)
 *
 *              Copyright (c) 2006-2008, Synesis Software Pty Ltd.
 *              All rights reserved.
 *
 *              www:        http://www.synesis.com.au/software
 *
 * ////////////////////////////////////////////////////////////////////// */

/* Pantheios Header Files */
#include <pantheios/pantheios.h>
#include <pantheios/implicit_link/core.h>
#include <pantheios/implicit_link/fe.simple.h>
#if defined(unix) || \
    defined(__unix) || \
    defined(__unix__)
# include <pantheios/implicit_link/be.fprintf.h>
#elif defined(_WIN32) || \
      defined(WIN32)
# include <pantheios/implicit_link/be.WindowsConsole.h>
#endif /* operating system */

/* STLSoft Header Files */
#include <stlsoft/stlsoft.h>

/* PlatformSTL Header Files */
#include <platformstl/platformstl.h>


/* UNIXEm Header Files */
#include <unixem/unixem.h>
#include <unixem/implicit_link.h>

/* Standard C Header Files */
#include <stdio.h>
#include <stdlib.h>

#if defined(_MSC_VER) && \
    defined(_DEBUG)
# include <crtdbg.h>
#endif /* _MSC_VER) && _DEBUG */

/* /////////////////////////////////////////////////////////////////////////
 * Macros and definitions
 */

#ifdef true
# undef true
#endif /* true */
#ifdef false
# undef false
#endif /* false */
#define true    (1)
#define false   (0)

/* /////////////////////////////////////////////////////////////////////////
 * Globals
 */

#if defined(_DEBUG) || \
    defined(_SYB_DEBUG)
static int  s_bDebugging                =   true;
#else /* ? debug */
static int  s_bDebugging                =   false;
#endif /* debug */

PANTHEIOS_EXTERN_C const char PANTHEIOS_FE_PROCESS_IDENTITY[] = "pseudoUNIX.test";

/* /////////////////////////////////////////////////////////////////////////
 * Typedefs
 */


/* /////////////////////////////////////////////////////////////////////////
 * Forward declarations
 */

static void usage(int bExit, char const *reason, int invalidArg, int argc, char **argv);

/* ////////////////////////////////////////////////////////////////////// */

int main(int argc, char *argv[])
{
    int bVerbose    =   1;

    if(pantheios_init() < 0)
    {
        return EXIT_FAILURE;
    }
    else
    {
        pantheios_init();

        pantheios_init();
        pantheios_uninit();

        pantheios_init();
        pantheios_uninit();


        pantheios_getNextBackEndId();

        { int i; for(i = 1; i < argc; ++i)
        {
            char const  *const  arg =   argv[i];

            if(arg[0] == '-')
            {
                if(arg[1] == '-')
                {
                    /* -- arguments */
                    usage(1, "Invalid argument(s) specified", i, argc, argv);
                }
                else
                {
                    /* - arguments */
                    switch(arg[1])
                    {
                        case    '?':
                            usage(1, NULL, -1, argc, argv);
                            break;
                        case    's':
                            bVerbose    =   0;
                            break;
                        case    'v':
                            bVerbose    =   1;
                            break;
                        default:
                            usage(1, "Invalid argument(s) specified", i, argc, argv);
                            break;
                    }
                }
            }
            else
            {
                /* other arguments */
                usage(1, "Invalid argument(s) specified", i, argc, argv);
            }
        }}

        pantheios_uninit();

        pantheios_uninit();

        return EXIT_SUCCESS;
    }
}

/* ////////////////////////////////////////////////////////////////////// */

static void usage(int bExit, char const *reason, int invalidArg, int argc, char **argv)
{
    FILE    *stm    =   (NULL == reason) ? stdout : stderr;


    fprintf(stm, "\n");
    fprintf(stm, "  pseudoUNIX.test\n\n");
    fprintf(stm, "\n");

    if(NULL != reason)
    {
        fprintf(stm, "  Error: %s\n", reason);
        fprintf(stm, "\n");
    }

    if(0 < invalidArg)
    {
        fprintf(stm, "  First invalid argument #%d: %s\n", invalidArg, argv[invalidArg]);
        fprintf(stm, "  Arguments were (first bad marked *):\n\n");
        { int i; for(i = 1; i < argc; ++i)
        {
            fprintf(stm, "  %s%s\n", (i == invalidArg) ? "* " : "  ", argv[i]);
        }}
        fprintf(stm, "\n");
    }

#if 0
    fprintf(stm, "  USAGE: pseudoUNIX.test [{-w | -p<root-paths> | -h}] [-u] [-d] [{-v | -s}] <search-spec>\n");
    fprintf(stm, "    where:\n\n");
    fprintf(stm, "    -w             - searches from the current working directory. The default\n");
    fprintf(stm, "    -p<root-paths> - searches from the given root path(s), separated by \';\',\n");
    fprintf(stm, "                     eg.\n");
    fprintf(stm, "                       -p\"c:\\windows;x:\\bin\"\n");
    fprintf(stm, "    -r             - deletes readonly files\n");
    fprintf(stm, "    -h             - searches from the roots of all drives on the system\n");
    fprintf(stm, "    -d             - displays the path(s) searched\n");
    fprintf(stm, "    -u             - do not act recursively\n");
    fprintf(stm, "    -v             - verbose output. Prints time, attributes, size and path. (default)\n");
    fprintf(stm, "    -s             - succinct output. Prints path only\n");
    fprintf(stm, "    <search-spec>  - one or more file search specifications, separated by \';\',\n");
    fprintf(stm, "                     eg.\n");
    fprintf(stm, "                       \"*.exe\"\n");
    fprintf(stm, "                       \"myfile.ext\"\n");
    fprintf(stm, "                       \"*.exe;*.dll\"\n");
    fprintf(stm, "                       \"*.xl?;report.*\"\n");
    fprintf(stm, "\n");
    fprintf(stm, "  Contact %s\n", _nameSynesisSoftware);
    fprintf(stm, "    at \"%s\",\n", _wwwSynesisSoftware_SystemTools);
    fprintf(stm, "    or, via email, at \"%s\"\n", _emailSynesisSoftware_SystemTools);
    fprintf(stm, "\n");
#endif /* 0 */

    if(bExit)
    {
        exit(EXIT_FAILURE);
    }
}

/* ////////////////////////////////////////////////////////////////////// */
