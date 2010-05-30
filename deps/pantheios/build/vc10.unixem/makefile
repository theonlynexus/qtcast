############################################################################
# File: 	makefile
#
# Purpose:	Makefile for the Pantheios project, for the Visual C++ 10.0 (x86 UNIXEm)
#			compiler, on UNIX
#
# Created:	15th Feburary 2005
# Updated:	23rd March 2010
#
############################################################################


############################################################################
# Environment check
#

!ifndef STLSOFT
!error STLSOFT must be defined
!endif # !STLSOFT
!ifndef PTHREADS_WIN32
!error PTHREADS_WIN32 must be defined
!endif # !PTHREADS_WIN32
!ifndef UNIXEM
!error UNIXEM must be defined
!endif # !UNIXEM

############################################################################
# Symbols

########################################
# Project & compiler version

COMP_TAG			=	vc10
ARCH_TAG            =   
OS_TAG				=   .unix
PROJ_TAG			=	pantheios
PROJ_VER_MAJOR		=	1
PROJ_TAG_VER		=	$(PROJ_TAG).$(PROJ_VER_MAJOR)

B64_VER_MAJOR		=   1
B64_TAG_VER			=   b64.$(B64_VER_MAJOR)

SHWILD_VER_MAJOR    =   0
SHWILD_TAG_VER      =   shwild.$(SHWILD_VER_MAJOR)

XTESTS_VER_MAJOR    =   0
XTESTS_TAG_VER      =   xtests.$(XTESTS_VER_MAJOR)

UNIXEM_VER_MAJOR	=	1
UNIXEM_TAG_VER      =   unixem.$(XTESTS_VER_MAJOR)

PROJ_MAKEFILE_NAME  =   makefile

########################################
# Testing verbosity

TEST_VERBOSITY		=	2

########################################
# Directories

PROJ_BASE_DIR			=	..\..
PROJ_BIN_DIR			=	$(PROJ_BASE_DIR)\bin
PROJ_INCLUDE_DIR		=	$(PROJ_BASE_DIR)\include
PROJ_LIB_DIR			=	$(PROJ_BASE_DIR)\lib
PROJ_OBJ_DIR			=	.
PROJ_SRC_DIR			=	$(PROJ_BASE_DIR)\src
PROJ_BACKENDS_DIR		=	$(PROJ_BASE_DIR)\backends
PROJ_FRONTENDS_DIR		=	$(PROJ_BASE_DIR)\frontends
PROJ_EXAMPLES_DIR		=	$(PROJ_BASE_DIR)\examples
PROJ_SAMPLES_DIR        =   $(PROJ_BASE_DIR)\samples
PROJ_TEST_ROOT_DIR		=	$(PROJ_BASE_DIR)\test
PROJ_TEST_COMPONENT_DIR	=	$(PROJ_TEST_ROOT_DIR)\component
PROJ_TEST_PERFORMANCE_DIR	=	$(PROJ_TEST_ROOT_DIR)\performance
PROJ_TEST_SCRATCH_DIR	=	$(PROJ_TEST_ROOT_DIR)\scratch
PROJ_TEST_UNIT_DIR		=	$(PROJ_TEST_ROOT_DIR)\unit

B64_INCLUDE_DIR			=   $(PROJ_BASE_DIR)\include
B64_SRC_DIR				=   $(PROJ_SRC_DIR)\b64

SHWILD_INCLUDE_DIR      =   $(PROJ_BASE_DIR)\include
SHWILD_SRC_DIR          =   $(PROJ_SRC_DIR)\shwild

XTESTS_INCLUDE_DIR      =   $(PROJ_BASE_DIR)\include
XTESTS_SRC_DIR          =   $(PROJ_SRC_DIR)\xtests

########################################
# tools

CC                      =   cl
CPPC                    =   cl
AR                      =   lib
LD                      =   link
RM                      =   del /f
CP                      =   copy
RC                      =   rc

# Includes

INCLUDES_LEADER 	=	

PROJ_INCLUDE		=	-I$(PROJ_INCLUDE_DIR)

ENV_INCLUDES 	=

COMMON_INCLUDES 	=	-I$(SYNESIS_DEV)/include -I$(SYNESIS_DEV)/libraries/include

CC_INCLUDES_BASE=\
$(INCLUDES_LEADER)\
$(PROJ_INCLUDE)\
-I"$(STLSOFT)\include"\
$(COMMON_INCLUDES)\
-I"$(PTHREADS_WIN32)\include"\
-I"$(UNIXEM)\include"\
$(ENV_INCLUDES)\
 \

CC_INCLUDES=\
$(CC_INCLUDES_BASE)\
 \





CPPC_INCLUDES_BASE=\
$(INCLUDES_LEADER)\
$(PROJ_INCLUDE)\
-I"$(STLSOFT)\include"\
$(COMMON_INCLUDES)\
-I"$(PTHREADS_WIN32)\include"\
-I"$(UNIXEM)\include"\
$(ENV_INCLUDES)\
 \

CPPC_INCLUDES=\
$(CPPC_INCLUDES_BASE)\
 \



# b64

CC_B64_INCLUDES_BASE =\
$(CC_INCLUDES_BASE)\
 \

CC_B64_INCLUDES_MT_UX =\
$(CC_B64_INCLUDES_BASE)\
 \

CC_B64_INCLUDES_MT_UX_DEBUG =\
$(CC_B64_INCLUDES_BASE)\
 \


CPPC_B64_INCLUDES_BASE =\
$(CPPC_INCLUDES_BASE)\
 \

CPPC_B64_INCLUDES_MT_UX =\
$(CPPC_B64_INCLUDES_BASE)\
 \

CPPC_B64_INCLUDES_MT_UX_DEBUG =\
$(CPPC_B64_INCLUDES_BASE)\
 \


# shwild

CPPC_SHWILD_INCLUDES_BASE =\
$(CPPC_INCLUDES_BASE)\
 \

CPPC_SHWILD_INCLUDES_MT_UX =\
$(CPPC_SHWILD_INCLUDES_BASE)\
 \

CPPC_SHWILD_INCLUDES_MT_UX_DEBUG =\
$(CPPC_SHWILD_INCLUDES_BASE)\
 \


# xTests

CPPC_XTESTS_INCLUDES_BASE =\
$(CPPC_INCLUDES_BASE)\
 \

CPPC_XTESTS_INCLUDES_MT_UX =\
$(CPPC_XTESTS_INCLUDES_BASE)\
 \

CPPC_XTESTS_INCLUDES_MT_UX_DEBUG =\
$(CPPC_XTESTS_INCLUDES_BASE)\
 \




# Lib

LIBS_LEADER 		=	

# lib paths

ENV_LIBPATHS		=
COMMON_LIBPATHS			=	-libpath:$(SYNESIS_DEV)/lib 



LIBPATHS=\
$(LIBS_LEADER)\
-libpath:"$(PTHREADS_WIN32)\lib"\
-libpath:"$(UNIXEM)\lib"\
$(COMMON_LIBPATHS)\
$(ENV_LIBPATHS)\
\


# lib names

TARGET_LIB_MT_UX	= kernel32.lib user32.lib advapi32.lib uuid.lib wininet.lib ole32.lib oleaut32.lib ws2_32.lib pthreadVC.lib
TARGET_LIB_MT_UX_DEBUG	= kernel32.lib user32.lib advapi32.lib uuid.lib wininet.lib ole32.lib oleaut32.lib ws2_32.lib pthreadVC.lib

# #defines

COMMON_DEFS 		=	-DUNIX

CUSTOM_DEFS			=

CC_CUSTOM_DEFS		=	$(CUSTOM_DEFS)

CPPC_CUSTOM_DEFS	=	$(CUSTOM_DEFS)

CC_DEFS 			=	$(COMMON_DEFS) $(CC_CUSTOM_DEFS)

CPPC_DEFS			=	$(COMMON_DEFS) $(CPPC_CUSTOM_DEFS)

# CC flags

CC_F_NOLOGO 			=	-nologo
CC_F_COMPILE_ONLY		=	-c
CC_F_WARNING_MAX		=	-W4
CC_F_WARNING_ERR		=	-WX
CC_F_WARNINGS_LIMIT		=	
CC_F_MINIMUM_SIZE		=	-O1
#CC_F_MAXIMUM_SPEED		=	-O2
CC_APP_F_WARNING_MAX	=	$(CC_F_WARNING_MAX)
CC_APP_F_WARNING_ERR	=	$(CC_F_WARNING_ERR)

# CPPC flags

CPPC_F_NOLOGO			=	-nologo
CPPC_F_COMPILE_ONLY 	=	-c
CPPC_F_WARNING_MAX		=	-W4
CPPC_F_WARNING_ERR		=	-WX
CPPC_F_EXCEPTIONS_ON	=	-EHsc
CPPC_F_EXCEPTIONS_OFF	=	-wd4530
CPPC_F_EXCEPTIONS		=	
CPPC_F_RTTI_ON			=	-GR
CPPC_F_RTTI_OFF 		=	-GR-
CPPC_F_RTTI				=	
CPPC_F_WARNINGS_LIMIT	=	
CPPC_F_MINIMUM_SIZE 	=	-O1
CPPC_F_MAXIMUM_SPEED	=	-O2
CPPC_F_OPTIMISED		=	$(CPPC_F_MAXIMUM_SPEED)
CPPC_APP_F_WARNING_MAX	=	$(CPPC_F_WARNING_MAX)
CPPC_APP_F_WARNING_ERR	=	$(CPPC_F_WARNING_ERR)



CC_TOOL_FLAGS		=

CPPC_TOOL_FLAGS 	=



CC_FLAGS=\
$(CC_TOOL_FLAGS)\
$(CC_F_NOLOGO)\
$(CC_F_COMPILE_ONLY)\
$(CC_F_WARNING_MAX)\
$(CC_F_WARNING_ERR)\
$(CC_F_WARNINGS_LIMIT)\
$(CC_F_MINIMUM_SIZE)\
 \

CPPC_FLAGS=\
$(CPPC_TOOL_FLAGS)\
$(CPPC_F_NOLOGO)\
$(CPPC_F_COMPILE_ONLY)\
$(CPPC_F_WARNING_MAX)\
$(CPPC_F_WARNING_ERR)\
$(CPPC_F_WARNINGS_LIMIT)\
$(CPPC_F_EXCEPTIONS)\
$(CPPC_F_RTTI)\
 \


# - App (base)
CC_APP_FLAGS=\
$(CC_TOOL_FLAGS)\
$(CC_F_NOLOGO)\
$(CC_F_COMPILE_ONLY)\
$(CC_APP_F_WARNING_MAX)\
$(CC_APP_F_WARNING_ERR)\
$(CC_F_WARNINGS_LIMIT)\
$(CC_F_MINIMUM_SIZE)\
 \

CPPC_APP_FLAGS=\
$(CPPC_TOOL_FLAGS)\
$(CPPC_F_NOLOGO)\
$(CPPC_F_COMPILE_ONLY)\
$(CPPC_APP_F_WARNING_MAX)\
$(CPPC_APP_F_WARNING_ERR)\
$(CPPC_F_WARNINGS_LIMIT)\
$(CPPC_F_EXCEPTIONS)\
$(CPPC_F_RTTI)\
 \


# - b64
CC_B64_FLAGS = $(CC_APP_FLAGS)

CPPC_B64_FLAGS = $(CPPC_APP_FLAGS)


# - shwild
CC_SHWILD_FLAGS = $(CC_APP_FLAGS)

CPPC_SHWILD_FLAGS = $(CPPC_APP_FLAGS)


# - xTests
CC_XTESTS_FLAGS = $(CC_APP_FLAGS)

CPPC_XTESTS_FLAGS = $(CPPC_APP_FLAGS)


# - Example
CC_EXAMPLE_FLAGS = $(CC_APP_FLAGS)

CPPC_EXAMPLE_FLAGS = $(CPPC_APP_FLAGS)


# - Test (Component)
CC_TEST_COMPONENT_FLAGS = $(CC_APP_FLAGS)

CPPC_TEST_COMPONENT_FLAGS = $(CPPC_APP_FLAGS)


# - Test (Scratch)
CC_TEST_SCRATCH_FLAGS = $(CC_APP_FLAGS)

CPPC_TEST_SCRATCH_FLAGS = $(CPPC_APP_FLAGS)


# - Test (Unit)
CC_TEST_UNIT_FLAGS = $(CC_APP_FLAGS)

CPPC_TEST_UNIT_FLAGS = $(CPPC_APP_FLAGS)





# Arguments (= flags + defines + includes)

# - Libs
CC_LIB_ARGS_MT_UX			=	$(CC_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -DNDEBUG $(CC_F_MAXIMUM_SPEED) -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CC_DEFS) -DPANTHEIOS_NO_AUTO_INIT
CC_LIB_ARGS_MT_UX_DEBUG			=	$(CC_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -D_DEBUG -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CC_DEFS) -DPANTHEIOS_NO_AUTO_INIT

CPPC_LIB_ARGS_MT_UX			=	$(CPPC_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -DNDEBUG $(CPPC_F_MAXIMUM_SPEED) -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CPPC_DEFS) -DPANTHEIOS_NO_AUTO_INIT
CPPC_LIB_ARGS_MT_UX_DEBUG			=	$(CPPC_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -D_DEBUG -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CPPC_DEFS) -DPANTHEIOS_NO_AUTO_INIT


# - b64
CC_B64_ARGS_MT_UX			=	$(CC_B64_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -DNDEBUG $(CC_F_MAXIMUM_SPEED) -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CC_DEFS)
CC_B64_ARGS_MT_UX_DEBUG			=	$(CC_B64_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -D_DEBUG -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CC_DEFS)

CPPC_B64_ARGS_MT_UX			=	$(CPPC_B64_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -DNDEBUG $(CPPC_F_MAXIMUM_SPEED) -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CPPC_DEFS)
CPPC_B64_ARGS_MT_UX_DEBUG			=	$(CPPC_B64_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -D_DEBUG -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CPPC_DEFS)


# - shwild
CC_SHWILD_ARGS_MT_UX			=	$(CC_SHWILD_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -DNDEBUG $(CC_F_MAXIMUM_SPEED) -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CC_DEFS)
CC_SHWILD_ARGS_MT_UX_DEBUG			=	$(CC_SHWILD_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -D_DEBUG -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CC_DEFS)

CPPC_SHWILD_ARGS_MT_UX		=	$(CPPC_SHWILD_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -DNDEBUG $(CPPC_F_MAXIMUM_SPEED) -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CPPC_DEFS)
CPPC_SHWILD_ARGS_MT_UX_DEBUG		=	$(CPPC_SHWILD_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -D_DEBUG -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CPPC_DEFS)


# - xTests
CC_XTESTS_ARGS_MT_UX			=	$(CC_XTESTS_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -DNDEBUG $(CC_F_MAXIMUM_SPEED) -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CC_DEFS)
CC_XTESTS_ARGS_MT_UX_DEBUG			=	$(CC_XTESTS_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -D_DEBUG -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CC_DEFS)

CPPC_XTESTS_ARGS_MT_UX			=	$(CPPC_XTESTS_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -DNDEBUG $(CPPC_F_MAXIMUM_SPEED) -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CPPC_DEFS)
CPPC_XTESTS_ARGS_MT_UX_DEBUG			=	$(CPPC_XTESTS_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -D_DEBUG -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CPPC_DEFS)


# - Examples
CC_EXAMPLE_ARGS_MT_UX		=	$(CC_EXAMPLE_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -DNDEBUG $(CC_F_MAXIMUM_SPEED) -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CC_DEFS)
CC_EXAMPLE_ARGS_MT_UX_DEBUG		=	$(CC_EXAMPLE_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -D_DEBUG -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CC_DEFS)

CPPC_EXAMPLE_ARGS_MT_UX		=	$(CPPC_EXAMPLE_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -DNDEBUG $(CPPC_F_MAXIMUM_SPEED) -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CPPC_DEFS)
CPPC_EXAMPLE_ARGS_MT_UX_DEBUG		=	$(CPPC_EXAMPLE_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -D_DEBUG -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CPPC_DEFS)


# - Test (Component)
CC_TEST_COMPONENT_ARGS_MT_UX			=	$(CC_TEST_COMPONENT_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -DNDEBUG $(CC_F_MAXIMUM_SPEED) -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CC_DEFS)
CC_TEST_COMPONENT_ARGS_MT_UX_DEBUG			=	$(CC_TEST_COMPONENT_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -D_DEBUG -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CC_DEFS)

CPPC_TEST_COMPONENT_ARGS_MT_UX			=	$(CPPC_TEST_COMPONENT_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -DNDEBUG $(CPPC_F_MAXIMUM_SPEED) -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CPPC_DEFS)
CPPC_TEST_COMPONENT_ARGS_MT_UX_DEBUG			=	$(CPPC_TEST_COMPONENT_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -D_DEBUG -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CPPC_DEFS)


# - Test (Scratch)
CC_TEST_SCRATCH_ARGS_MT_UX			=	$(CC_TEST_SCRATCH_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -DNDEBUG $(CC_F_MAXIMUM_SPEED) -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CC_DEFS)
CC_TEST_SCRATCH_ARGS_MT_UX_DEBUG			=	$(CC_TEST_SCRATCH_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -D_DEBUG -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CC_DEFS)

CPPC_TEST_SCRATCH_ARGS_MT_UX			=	$(CPPC_TEST_SCRATCH_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -DNDEBUG $(CPPC_F_MAXIMUM_SPEED) -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CPPC_DEFS)
CPPC_TEST_SCRATCH_ARGS_MT_UX_DEBUG			=	$(CPPC_TEST_SCRATCH_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -D_DEBUG -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CPPC_DEFS)


# - Test (Unit)
CC_TEST_UNIT_ARGS_MT_UX			=	$(CC_TEST_UNIT_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -DNDEBUG $(CC_F_MAXIMUM_SPEED) -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CC_DEFS)
CC_TEST_UNIT_ARGS_MT_UX_DEBUG			=	$(CC_TEST_UNIT_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -D_DEBUG -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CC_DEFS)

CPPC_TEST_UNIT_ARGS_MT_UX			=	$(CPPC_TEST_UNIT_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -DNDEBUG $(CPPC_F_MAXIMUM_SPEED) -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CPPC_DEFS)
CPPC_TEST_UNIT_ARGS_MT_UX_DEBUG			=	$(CPPC_TEST_UNIT_FLAGS) $(CPPC_F_EXCEPTIONS_ON) $(CPPC_F_RTTI_ON) -MTd -D_DEBUG -D_STLSOFT_FORCE_ANY_COMPILER -Zi -Fd$*.pdb  $(CPPC_DEFS)


# AR args

AR_ARGS 			=	-nologo


# LD flags

LD_ARGS 		=	

LD_F_NOLOGO = -nologo

# LD args

LD_ARGS_MT_UX = libWinSysLog.$(COMP_TAG).mt.lib unixem.1.$(COMP_TAG).mt.lib -release $(LD_ARGS) $(LD_F_NOLOGO) $(LIBPATHS) $(COMMON_LIB)
LD_ARGS_MT_UX_DEBUG = libWinSysLog.$(COMP_TAG).mt.debug.lib unixem.1.$(COMP_TAG).mt.debug.lib -debug $(LD_ARGS) $(LD_F_NOLOGO) $(LIBPATHS) $(COMMON_LIB)

############################################################################
# Headers

CORE_HEADERS=\
 $(PROJ_INCLUDE_DIR)\pantheios\pantheios.h\
 $(PROJ_INCLUDE_DIR)\pantheios\backend.h\
 $(PROJ_INCLUDE_DIR)\pantheios\init_codes.h\
 $(PROJ_INCLUDE_DIR)\pantheios\frontend.h\
 $(PROJ_INCLUDE_DIR)\pantheios\inserters.hpp\
 $(PROJ_INCLUDE_DIR)\pantheios\pantheios.hpp\
 $(PROJ_INCLUDE_DIR)\pantheios\trace.h\
 \
 $(PROJ_INCLUDE_DIR)\pantheios\inserters\args.hpp\
 $(PROJ_INCLUDE_DIR)\pantheios\inserters\b64.hpp\
 $(PROJ_INCLUDE_DIR)\pantheios\inserters\blob.hpp\
 $(PROJ_INCLUDE_DIR)\pantheios\inserters\boolean.hpp\
 $(PROJ_INCLUDE_DIR)\pantheios\inserters\character.hpp\
 $(PROJ_INCLUDE_DIR)\pantheios\inserters\exception.hpp\
 $(PROJ_INCLUDE_DIR)\pantheios\inserters\fmt.hpp\
 $(PROJ_INCLUDE_DIR)\pantheios\inserters\hex_ptr.hpp\
 $(PROJ_INCLUDE_DIR)\pantheios\inserters\hostid.hpp\
 $(PROJ_INCLUDE_DIR)\pantheios\inserters\integer.hpp\
 $(PROJ_INCLUDE_DIR)\pantheios\inserters\pad.hpp\
 $(PROJ_INCLUDE_DIR)\pantheios\inserters\pointer.hpp\
 $(PROJ_INCLUDE_DIR)\pantheios\inserters\processid.hpp\
 $(PROJ_INCLUDE_DIR)\pantheios\inserters\real.hpp\
 $(PROJ_INCLUDE_DIR)\pantheios\inserters\slice.hpp\
 $(PROJ_INCLUDE_DIR)\pantheios\inserters\threadid.hpp\
 $(PROJ_INCLUDE_DIR)\pantheios\inserters\w2m.hpp\
 \
 $(PROJ_INCLUDE_DIR)\pantheios\internal\initialiser.hpp\
 $(PROJ_INCLUDE_DIR)\pantheios\internal\stock_levels.hpp\
 $(PROJ_INCLUDE_DIR)\pantheios\internal\nox.h\
 $(PROJ_INCLUDE_DIR)\pantheios\internal\safestr.h\
 $(PROJ_INCLUDE_DIR)\pantheios\internal\threading.h\
 \
 $(PROJ_INCLUDE_DIR)\pantheios\quality\contract.h\
 \
 $(PROJ_INCLUDE_DIR)\pantheios\internal\generated\log_dispatch_functions.h\
 $(PROJ_INCLUDE_DIR)\pantheios\internal\generated\log_functions.c\
 $(PROJ_INCLUDE_DIR)\pantheios\internal\generated\log_functions.h\
 \
 $(PROJ_INCLUDE_DIR)\pantheios\severity\levels.hpp\
 \
 $(PROJ_INCLUDE_DIR)\pantheios\util\backends\arguments.h\
 $(PROJ_INCLUDE_DIR)\pantheios\util\backends\context.hpp\
 \
 $(PROJ_INCLUDE_DIR)\pantheios\util\core\apidefs.hpp\
 \
 $(PROJ_INCLUDE_DIR)\pantheios\util\memory\auto_buffer_selector.hpp\
 \
 $(PROJ_INCLUDE_DIR)\pantheios\util\severity\ACE.h\
 $(PROJ_INCLUDE_DIR)\pantheios\util\severity\syslog.h\
 $(PROJ_INCLUDE_DIR)\pantheios\util\severity\WindowsEventLog.h\
 \
 $(PROJ_INCLUDE_DIR)\pantheios\util\string\snprintf.h\
 $(PROJ_INCLUDE_DIR)\pantheios\util\string\strdup.h\
 \
 $(PROJ_INCLUDE_DIR)\pantheios\util\system\hostname.h\
 $(PROJ_INCLUDE_DIR)\pantheios\util\system\processid.h\
 $(PROJ_INCLUDE_DIR)\pantheios\util\system\threadid.h\
 \
 $(PROJ_INCLUDE_DIR)\pantheios\util\time\currenttime.h\
 \
 \

BE_HEADERS=\
 $(PROJ_INCLUDE_DIR)\pantheios\pantheios.h \
 $(PROJ_INCLUDE_DIR)\pantheios\backend.h \
 \

FE_HEADERS=\
 $(PROJ_INCLUDE_DIR)\pantheios\pantheios.h \
 $(PROJ_INCLUDE_DIR)\pantheios\frontend.h \
 \

TEST_C_HEADERS=\
 $(PROJ_INCLUDE_DIR)\pantheios\backend.h\
 $(PROJ_INCLUDE_DIR)\pantheios\frontend.h\
 $(PROJ_INCLUDE_DIR)\pantheios\pantheios.h\
 \

TEST_CPP_HEADERS=\
 $(CORE_HEADERS)\
 $(PROJ_INCLUDE_DIR)\pantheios\backends\bec.test.h\
 \

B64_HEADERS=\
 $(PROJ_INCLUDE_DIR)\b64\b64.h\
 $(PROJ_INCLUDE_DIR)\b64\b64.hpp\
 \

SHWILD_HEADERS=\
 $(PROJ_INCLUDE_DIR)\shwild\shwild.h\
 $(PROJ_INCLUDE_DIR)\shwild\shwild.hpp\
 \

XTESTS_HEADERS=\
 $(PROJ_INCLUDE_DIR)\xtests\xtests.h\
 \

############################################################################
# Names

############################################################
# Targets

########################################
# Libraries

#  util
LIB_UTIL_MT_UX				=   $(PROJ_LIB_DIR)\$(PROJ_TAG_VER).util.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib

#  core
LIB_CORE_MT_UX				=   $(PROJ_LIB_DIR)\$(PROJ_TAG_VER).core.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib

#  front-end(s)
LIB_FE_ALL_MT_UX			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).fe.all.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_FE_FAIL_MT_UX			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).fe.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_FE_N_MT_UX				=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).fe.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_FE_NULL_MT_UX			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).fe.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_FE_SIMPLE_MT_UX		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).fe.simple.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib

#  back-end(s)
LIB_BE_LRSPLIT_MT_UX 		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.lrsplit.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_BE_N_MT_UX 			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_BEC_TEST_MT_UX			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_BE_TEST_MT_UX			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_BEL_TEST_MT_UX			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_BER_TEST_MT_UX			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_BEC_FAIL_MT_UX			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_BE_FAIL_MT_UX 			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_BEL_FAIL_MT_UX			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_BER_FAIL_MT_UX			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_BEC_FILE_MT_UX			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_BEC_FILE_WC_MT_UX		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.file.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_BE_FILE_MT_UX 			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_BEL_FILE_MT_UX			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_BER_FILE_MT_UX			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_BEC_FPRINTF_MT_UX		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_BEC_FPRINTF_WC_MT_UX	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.fprintf.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_BE_FPRINTF_MT_UX 		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_BEL_FPRINTF_MT_UX		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_BER_FPRINTF_MT_UX		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_BEC_NULL_MT_UX			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_BE_NULL_MT_UX 			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_BEL_NULL_MT_UX			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_BER_NULL_MT_UX			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_BEC_SYSLOG_MT_UX 		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.syslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_BEC_SYSLOG_WC_MT_UX 	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.syslog.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_BE_SYSLOG_MT_UX		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.syslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_BER_SYSLOG_MT_UX 		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.syslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib

#  util
LIB_UTIL_MT_UX_DEBUG				=   $(PROJ_LIB_DIR)\$(PROJ_TAG_VER).util.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib

#  core
LIB_CORE_MT_UX_DEBUG				=   $(PROJ_LIB_DIR)\$(PROJ_TAG_VER).core.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib

#  front-end(s)
LIB_FE_ALL_MT_UX_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).fe.all.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_FE_FAIL_MT_UX_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).fe.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_FE_N_MT_UX_DEBUG				=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).fe.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_FE_NULL_MT_UX_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).fe.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_FE_SIMPLE_MT_UX_DEBUG		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).fe.simple.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib

#  back-end(s)
LIB_BE_LRSPLIT_MT_UX_DEBUG 		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.lrsplit.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_BE_N_MT_UX_DEBUG 			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_BEC_TEST_MT_UX_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_BE_TEST_MT_UX_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_BEL_TEST_MT_UX_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_BER_TEST_MT_UX_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_BEC_FAIL_MT_UX_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_BE_FAIL_MT_UX_DEBUG 			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_BEL_FAIL_MT_UX_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_BER_FAIL_MT_UX_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_BEC_FILE_MT_UX_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_BEC_FILE_WC_MT_UX_DEBUG		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.file.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_BE_FILE_MT_UX_DEBUG 			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_BEL_FILE_MT_UX_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_BER_FILE_MT_UX_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_BEC_FPRINTF_MT_UX_DEBUG		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_BEC_FPRINTF_WC_MT_UX_DEBUG	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.fprintf.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_BE_FPRINTF_MT_UX_DEBUG 		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_BEL_FPRINTF_MT_UX_DEBUG		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_BER_FPRINTF_MT_UX_DEBUG		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_BEC_NULL_MT_UX_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_BE_NULL_MT_UX_DEBUG 			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_BEL_NULL_MT_UX_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_BER_NULL_MT_UX_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_BEC_SYSLOG_MT_UX_DEBUG 		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.syslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_BEC_SYSLOG_WC_MT_UX_DEBUG 	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.syslog.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_BE_SYSLOG_MT_UX_DEBUG		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.syslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib
LIB_BER_SYSLOG_MT_UX_DEBUG 		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.syslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib





# core

# front-end(s)
PDB_FE_ALL_MT_UX_DEBUG			=	$(PROJ_OBJ_DIR)\fe.all.mt.debug.pdb
PDB_FE_FAIL_MT_UX_DEBUG		=	$(PROJ_OBJ_DIR)\fe.fail.mt.debug.pdb
PDB_FE_N_MT_UX_DEBUG			=	$(PROJ_OBJ_DIR)\fe.N.mt.debug.pdb
PDB_FE_NULL_MT_UX_DEBUG		=	$(PROJ_OBJ_DIR)\fe.null.mt.debug.pdb
PDB_FE_SIMPLE_MT_UX_DEBUG		=	$(PROJ_OBJ_DIR)\fe.simple.mt.debug.pdb

# back-end(s)
PDB_BE_LRSPLIT_MT_UX_DEBUG 	=	$(PROJ_OBJ_DIR)\be.lrsplit.mt.debug.pdb
PDB_BE_N_MT_UX_DEBUG 			=	$(PROJ_OBJ_DIR)\be.N.mt.debug.pdb
PDB_BEC_FAIL_MT_UX_DEBUG		=	$(PROJ_OBJ_DIR)\bec.fail.mt.debug.pdb
PDB_BE_FAIL_MT_UX_DEBUG 		=	$(PROJ_OBJ_DIR)\be.fail.mt.debug.pdb
PDB_BEL_FAIL_MT_UX_DEBUG		=	$(PROJ_OBJ_DIR)\bel.fail.mt.debug.pdb
PDB_BER_FAIL_MT_UX_DEBUG		=	$(PROJ_OBJ_DIR)\ber.fail.mt.debug.pdb
PDB_BEC_FILE_MT_UX_DEBUG		=	$(PROJ_OBJ_DIR)\bec.file.mt.debug.pdb
PDB_BEC_FILE_WC_MT_UX_DEBUG	=	$(PROJ_OBJ_DIR)\bec.file.WithCallback.mt.debug.pdb
PDB_BE_FILE_MT_UX_DEBUG 		=	$(PROJ_OBJ_DIR)\be.file.mt.debug.pdb
PDB_BEL_FILE_MT_UX_DEBUG		=	$(PROJ_OBJ_DIR)\bel.file.mt.debug.pdb
PDB_BER_FILE_MT_UX_DEBUG		=	$(PROJ_OBJ_DIR)\ber.file.mt.debug.pdb
PDB_BEC_FPRINTF_MT_UX_DEBUG	=	$(PROJ_OBJ_DIR)\bec.fprintf.mt.debug.pdb
PDB_BEC_FPRINTF_WC_MT_UX_DEBUG	=	$(PROJ_OBJ_DIR)\bec.fprintf.WithCallback.mt.debug.pdb
PDB_BE_FPRINTF_MT_UX_DEBUG 	=	$(PROJ_OBJ_DIR)\be.fprintf.mt.debug.pdb
PDB_BEL_FPRINTF_MT_UX_DEBUG	=	$(PROJ_OBJ_DIR)\bel.fprintf.mt.debug.pdb
PDB_BER_FPRINTF_MT_UX_DEBUG	=	$(PROJ_OBJ_DIR)\ber.fprintf.mt.debug.pdb
PDB_BEC_NULL_MT_UX_DEBUG		=	$(PROJ_OBJ_DIR)\bec.null.mt.debug.pdb
PDB_BE_NULL_MT_UX_DEBUG 		=	$(PROJ_OBJ_DIR)\be.null.mt.debug.pdb
PDB_BEL_NULL_MT_UX_DEBUG		=	$(PROJ_OBJ_DIR)\bel.null.mt.debug.pdb
PDB_BER_NULL_MT_UX_DEBUG		=	$(PROJ_OBJ_DIR)\ber.null.mt.debug.pdb
PDB_BEC_SYSLOG_MT_UX_DEBUG 	=	$(PROJ_OBJ_DIR)\bec.syslog.mt.debug.pdb
PDB_BEC_SYSLOG_WC_MT_UX_DEBUG 	=	$(PROJ_OBJ_DIR)\bec.syslog.mt.debug.pdb
PDB_BE_SYSLOG_MT_UX_DEBUG		=	$(PROJ_OBJ_DIR)\be.syslog.mt.debug.pdb
PDB_BER_SYSLOG_MT_UX_DEBUG 	=	$(PROJ_OBJ_DIR)\ber.syslog.mt.debug.pdb


# b64
LIB_B64_MT_UX			=   $(PROJ_LIB_DIR)\$(B64_TAG_VER).pan.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_B64_MT_UX_DEBUG			=   $(PROJ_LIB_DIR)\$(B64_TAG_VER).pan.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib

# shwild
LIB_SHWILD_MT_UX         =   $(PROJ_LIB_DIR)\$(SHWILD_TAG_VER).pan.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_SHWILD_MT_UX_DEBUG         =   $(PROJ_LIB_DIR)\$(SHWILD_TAG_VER).pan.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib

# xtests
LIB_XTESTS_MT_UX         =   $(PROJ_LIB_DIR)\$(XTESTS_TAG_VER).pan.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.lib
LIB_XTESTS_MT_UX_DEBUG         =   $(PROJ_LIB_DIR)\$(XTESTS_TAG_VER).pan.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.lib

########################################
# Examples

EX_CPP_0_MT_UX			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.0.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_1_MT_UX			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.1.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_2_MT_UX			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.2.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_3_MT_UX			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.3.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_4_MT_UX			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.4.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_5_MT_UX			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.5.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_6_MT_UX			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.6.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_7_MT_UX			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.7.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_8_MT_UX			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.8.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_9_MT_UX			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.9.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_11_MT_UX		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.11.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_12_MT_UX		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.12.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_13_MT_UX		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.13.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_14_MT_UX		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.14.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_15_MT_UX		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.15.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_16_MT_UX		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.16.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_18_MT_UX		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.18.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_19_MT_UX		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.19.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_20_MT_UX		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.20.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_21_MT_UX		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.21.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_23_MT_UX		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.23.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_24_MT_UX		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.24.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_25_MT_UX		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.25.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_26_MT_UX		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.26.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_27_MT_UX		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.27.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_C_0_MT_UX			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.0.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_C_1_MT_UX			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.1.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_C_2_MT_UX			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.2.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_C_3_MT_UX			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.3.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_C_4_MT_UX			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.4.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_C_5_MT_UX			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.5.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_C_6_MT_UX			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.6.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_C_7_MT_UX			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.7.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_0_MT_UX_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.0.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_1_MT_UX_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.1.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_2_MT_UX_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.2.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_3_MT_UX_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.3.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_4_MT_UX_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.4.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_5_MT_UX_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.5.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_6_MT_UX_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.6.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_7_MT_UX_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.7.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_8_MT_UX_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.8.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_9_MT_UX_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.9.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_11_MT_UX_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.11.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_12_MT_UX_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.12.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_13_MT_UX_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.13.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_14_MT_UX_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.14.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_15_MT_UX_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.15.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_16_MT_UX_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.16.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_18_MT_UX_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.18.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_19_MT_UX_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.19.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_20_MT_UX_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.20.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_21_MT_UX_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.21.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_23_MT_UX_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.23.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_24_MT_UX_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.24.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_25_MT_UX_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.25.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_26_MT_UX_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.26.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_27_MT_UX_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.27.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_C_0_MT_UX_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.0.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_C_1_MT_UX_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.1.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_C_2_MT_UX_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.2.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_C_3_MT_UX_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.3.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_C_4_MT_UX_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.4.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_C_5_MT_UX_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.5.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_C_6_MT_UX_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.6.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_C_7_MT_UX_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.7.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe

########################################
# Tests

##############################
# Component Tests

TARG_TEST_COMP_core_initseq_MT_UX	=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.core.init_sequence.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_core_initseq_MT_UX_DEBUG	=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.core.init_sequence.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_custsev_MT_UX			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.custom_severity.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_custsev_MT_UX_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.custom_severity.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_ins_args_MT_UX		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.args.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_ins_args_MT_UX_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.args.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_ins_b64_MT_UX			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.b64.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_ins_b64_MT_UX_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.b64.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_ins_bool_MT_UX		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.boolean.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_ins_bool_MT_UX_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.boolean.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_ins_hostid_MT_UX		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.hostId.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_ins_hostid_MT_UX_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.hostId.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_ins_int_MT_UX			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.integer.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_ins_int_MT_UX_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.integer.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_ins_pad_MT_UX			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.pad.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_ins_pad_MT_UX_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.pad.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_ins_ptr_MT_UX			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.pointer.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_ins_ptr_MT_UX_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.pointer.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_ins_prid_MT_UX		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.processId.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_ins_prid_MT_UX_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.processId.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_ins_real_MT_UX		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.real.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_ins_real_MT_UX_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.real.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_ins_slice_MT_UX		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.slice.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_ins_slice_MT_UX_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.slice.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_ins_thrid_MT_UX		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.threadId.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_ins_thrid_MT_UX_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.threadId.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_ins_w2m_MT_UX		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.w2m.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_ins_w2m_MT_UX_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.w2m.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_log_1_MT_UX			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.log.1.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_log_1_MT_UX_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.log.1.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_pan_puts_MT_UX		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.core.pan_logputs.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_pan_puts_MT_UX_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.core.pan_logputs.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_pan_prtf_MT_UX		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.core.pan_logprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_pan_prtf_MT_UX_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.core.pan_logprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe

##############################
# Performance Tests

TARG_TEST_PERF_ins_w2m_MT_UX		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserter.w2m.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_PERF_ins_w2m_MT_UX_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserter.w2m.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe

##############################
# Scratch Tests

# test programs
#
# - be.ACE
# - be.fprintf
# - be.syslog / be.WindowsDebugger
#
# - be.lrsplit & fprintf + syslog / WindowsSyslog
#
# The strange naming conventions of these targets are to placate some
# make utilities, which have a limit to the identifier length.
TEST__MT_UX_API_W_BE_FPRINTF					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TEST__MT_UX_API_W_BE_SYSLOG					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.syslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TEST__MT_UX_API_W_BELR_1_FPRINTF_SYSLOG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.l.fprintf-r.syslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARGET_TEST_FE_MT_UX 						=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.fe.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TEST__MT_UX_BE_N_FAIL						=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.N.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TEST__MT_UX_DEBUG_API_W_BE_FPRINTF					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TEST__MT_UX_DEBUG_API_W_BE_SYSLOG					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.syslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TEST__MT_UX_DEBUG_API_W_BELR_1_FPRINTF_SYSLOG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.l.fprintf-r.syslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARGET_TEST_FE_MT_UX_DEBUG 						=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.fe.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TEST__MT_UX_DEBUG_BE_N_FAIL						=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.N.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe

##############################
# Unit Tests
#
# NOTE: dynamic_initialisation is contracted, as scares CodeWarrior's linker (for being longer than 63 chars)

TARG_TEST_UNIT_lvls_dyninit_MT_UX			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.levels.dynamic_init.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_lvls_dyninit_MT_UX_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.levels.dynamic_init.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_lvls_vals_MT_UX				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.levels.values.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_lvls_vals_MT_UX_DEBUG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.levels.values.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_getcurrtm_MT_UX				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.getcurrenttime.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_getcurrtm_MT_UX_DEBUG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.getcurrenttime.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_getversion_MT_UX				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.getversion.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_getversion_MT_UX_DEBUG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.getversion.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_gethostname_MT_UX				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.gethostname.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_gethostname_MT_UX_DEBUG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.gethostname.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_onbailout_MT_UX				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.onbailout.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_strnlen_MT_UX				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.strnlen.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_onbailout_MT_UX_DEBUG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.onbailout.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_strnlen_MT_UX_DEBUG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.strnlen.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_bec_file_MT_UX				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.bec.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_bec_file_MT_UX_DEBUG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.bec.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_bec_fprintf_MT_UX				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.bec.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_bec_fprintf_MT_UX_DEBUG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.bec.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_bec_fail_MT_UX				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.bec.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_bec_fail_MT_UX_DEBUG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.bec.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_be_fail_MT_UX					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_be_fail_MT_UX_DEBUG					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_be_fail_MT_UX					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_be_fail_MT_UX_DEBUG					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_be_lrsplit_MT_UX				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.lrsplit.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_be_lrsplit_MT_UX_DEBUG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.lrsplit.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_be_N_MT_UX					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_be_N_MT_UX_DEBUG					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_fe_all_MT_UX					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.all.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_fe_all_MT_UX_DEBUG					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.all.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_fe_fail_MT_UX					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_fe_fail_MT_UX_DEBUG					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_fe_N_MT_UX					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_fe_N_MT_UX_DEBUG					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_fe_null_MT_UX					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_fe_null_MT_UX_DEBUG					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_fe_simple_MT_UX				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.simple.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_fe_simple_MT_UX_DEBUG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.simple.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe

############################################################
# Objects

########################################
# Libraries

# core

OBJ_utl_bailout_MT_UX		= $(PROJ_OBJ_DIR)\util.bailout.mt.obj
OBJ_utl_init_code_strs_MT_UX	= $(PROJ_OBJ_DIR)\util.init_err_strings.mt.obj
OBJ_utl_sev_strs_MT_UX		= $(PROJ_OBJ_DIR)\util.sev_strings.mt.obj
OBJ_utl_snprintf_MT_UX 		= $(PROJ_OBJ_DIR)\util.snprintf.mt.obj
OBJ_utl_strdup_MT_UX 		= $(PROJ_OBJ_DIR)\util.strdup.mt.obj
OBJ_utl_procid_MT_UX 		= $(PROJ_OBJ_DIR)\util.procid.mt.obj
OBJ_utl_thread_MT_UX 		= $(PROJ_OBJ_DIR)\util.thread.mt.obj
OBJ_utl_be_context_MT_UX		= $(PROJ_OBJ_DIR)\util.be_context.mt.obj
OBJ_utl_core_apidefs_MT_UX	= $(PROJ_OBJ_DIR)\util.core_apidefs.mt.obj
OBJ_utl_be_parse_MT_UX		= $(PROJ_OBJ_DIR)\util.be_parse.mt.obj
OBJ_utl_strnlen_MT_UX		= $(PROJ_OBJ_DIR)\util.strnlen.mt.obj
OBJ_utl_time_MT_UX			= $(PROJ_OBJ_DIR)\util.time.mt.obj
OBJ_utl_host_name_MT_UX		= $(PROJ_OBJ_DIR)\util.host_name.mt.obj
OBJ_cr_api_MT_UX 			= $(PROJ_OBJ_DIR)\core.api.mt.obj
OBJ_cr_auto_MT_UX 			= $(PROJ_OBJ_DIR)\core.auto.mt.obj
OBJ_cr_logprintf_MT_UX		= $(PROJ_OBJ_DIR)\core.logprintf.mt.obj
OBJ_ins_args_MT_UX	 		= $(PROJ_OBJ_DIR)\inserters.args.mt.obj
OBJ_ins_b64_MT_UX	 		= $(PROJ_OBJ_DIR)\inserters.b64.mt.obj
OBJ_ins_blob_MT_UX	 		= $(PROJ_OBJ_DIR)\inserters.blob.mt.obj
OBJ_ins_bool_MT_UX	 		= $(PROJ_OBJ_DIR)\inserters.boolean.mt.obj
OBJ_ins_excp_MT_UX	 		= $(PROJ_OBJ_DIR)\inserters.exception.mt.obj
OBJ_ins_host_MT_UX	 		= $(PROJ_OBJ_DIR)\inserters.hostid.mt.obj
OBJ_ins_int_MT_UX	 		= $(PROJ_OBJ_DIR)\inserters.integer.mt.obj
OBJ_ins_ptr_MT_UX	 		= $(PROJ_OBJ_DIR)\inserters.pointer.mt.obj
OBJ_ins_prid_MT_UX	 		= $(PROJ_OBJ_DIR)\inserters.processid.mt.obj
OBJ_ins_real_MT_UX	 		= $(PROJ_OBJ_DIR)\inserters.real.mt.obj
OBJ_ins_slice_MT_UX	 	= $(PROJ_OBJ_DIR)\inserters.slice.mt.obj
OBJ_ins_thrid_MT_UX	 	= $(PROJ_OBJ_DIR)\inserters.threadid.mt.obj
OBJ_ins_w2m_MT_UX	 		= $(PROJ_OBJ_DIR)\inserters.w2m.mt.obj
#PDB_bec_test_MT_UX 		= $(PROJ_OBJ_DIR)\bec.test.mt.pdb
OBJ_bec_test_MT_UX 		= $(PROJ_OBJ_DIR)\bec.test.mt.obj
OBJ_be_test_MT_UX 			= $(PROJ_OBJ_DIR)\be.test.mt.obj
OBJ_bel_test_MT_UX 		= $(PROJ_OBJ_DIR)\bel.test.mt.obj
OBJ_ber_test_MT_UX 		= $(PROJ_OBJ_DIR)\ber.test.mt.obj
OBJ_be_lrsplit__MT_UX		= $(PROJ_OBJ_DIR)\be.lrsplit.mt.obj
OBJ_be_N__MT_UX			= $(PROJ_OBJ_DIR)\be.N.mt.obj
OBJ_bec_fail__MT_UX		= $(PROJ_OBJ_DIR)\bec.fail.mt.obj
OBJ_be_fail__MT_UX			= $(PROJ_OBJ_DIR)\be.fail.mt.obj
OBJ_bel_fail__MT_UX		= $(PROJ_OBJ_DIR)\bel.fail.mt.obj
OBJ_ber_fail__MT_UX		= $(PROJ_OBJ_DIR)\ber.fail.mt.obj
OBJ_bec_file__MT_UX		= $(PROJ_OBJ_DIR)\bec.file.mt.obj
OBJ_bec_file_WC__MT_UX		= $(PROJ_OBJ_DIR)\bec.file.WithCallback.mt.obj
OBJ_be_file__MT_UX			= $(PROJ_OBJ_DIR)\be.file.mt.obj
OBJ_bel_file__MT_UX		= $(PROJ_OBJ_DIR)\bel.file.mt.obj
OBJ_ber_file__MT_UX		= $(PROJ_OBJ_DIR)\ber.file.mt.obj
OBJ_bec_fprintf__MT_UX		= $(PROJ_OBJ_DIR)\bec.fprintf.mt.obj
OBJ_bec_fprintf_WC__MT_UX	= $(PROJ_OBJ_DIR)\bec.fprintf.WithCallback.mt.obj
OBJ_be_fprintf__MT_UX		= $(PROJ_OBJ_DIR)\be.fprintf.mt.obj
OBJ_bel_fprintf__MT_UX		= $(PROJ_OBJ_DIR)\bel.fprintf.mt.obj
OBJ_ber_fprintf__MT_UX		= $(PROJ_OBJ_DIR)\ber.fprintf.mt.obj
OBJ_bec_null__MT_UX		= $(PROJ_OBJ_DIR)\bec.null.mt.obj
OBJ_be_null__MT_UX			= $(PROJ_OBJ_DIR)\be.null.mt.obj
OBJ_bel_null__MT_UX		= $(PROJ_OBJ_DIR)\bel.null.mt.obj
OBJ_ber_null__MT_UX		= $(PROJ_OBJ_DIR)\ber.null.mt.obj
OBJ_bec_ACE__MT_UX			= $(PROJ_OBJ_DIR)\bec.ACE.mt.obj
OBJ_be_ACE__MT_UX			= $(PROJ_OBJ_DIR)\be.ACE.mt.obj
OBJ_bel_ACE__MT_UX			= $(PROJ_OBJ_DIR)\bel.ACE.mt.obj
OBJ_ber_ACE__MT_UX			= $(PROJ_OBJ_DIR)\ber.ACE.mt.obj
OBJ_bec_SYSLOG__MT_UX		= $(PROJ_OBJ_DIR)\bec.syslog.mt.obj
OBJ_bec_SYSLOG_WC__MT_UX		= $(PROJ_OBJ_DIR)\bec.syslog.WithCallback.mt.obj
OBJ_be_SYSLOG__MT_UX 		= $(PROJ_OBJ_DIR)\be.syslog.mt.obj
OBJ_ber_SYSLOG__MT_UX		= $(PROJ_OBJ_DIR)\ber.syslog.mt.obj
OBJ_fe_all__MT_UX 			= $(PROJ_OBJ_DIR)\fe.all.mt.obj
OBJ_fe_fail__MT_UX 			= $(PROJ_OBJ_DIR)\fe.fail.mt.obj
OBJ_fe_N__MT_UX 				= $(PROJ_OBJ_DIR)\fe.N.mt.obj
OBJ_fe_null__MT_UX 			= $(PROJ_OBJ_DIR)\fe.null.mt.obj
OBJ_fe_simple__MT_UX 		= $(PROJ_OBJ_DIR)\fe.simple.mt.obj

OBJ_UTIL_MT_UX=\
 $(OBJ_utl_bailout_MT_UX)\
 $(OBJ_utl_init_code_strs_MT_UX)\
 $(OBJ_utl_sev_strs_MT_UX)\
 $(OBJ_utl_snprintf_MT_UX)\
 $(OBJ_utl_strdup_MT_UX)\
 $(OBJ_utl_procid_MT_UX)\
 $(OBJ_utl_thread_MT_UX)\
 $(OBJ_utl_be_context_MT_UX)\
 $(OBJ_utl_core_apidefs_MT_UX)\
 $(OBJ_utl_be_parse_MT_UX)\
 $(OBJ_utl_strnlen_MT_UX)\
 $(OBJ_utl_time_MT_UX)\
 $(OBJ_utl_host_name_MT_UX)\
 \

OBJ_CORE_MT_UX=\
 $(OBJ_cr_api_MT_UX)\
 $(OBJ_cr_auto_MT_UX)\
 $(OBJ_cr_logprintf_MT_UX)\
 $(OBJ_ins_args_MT_UX)\
 $(OBJ_ins_b64_MT_UX)\
 $(OBJ_ins_blob_MT_UX)\
 $(OBJ_ins_bool_MT_UX)\
 $(OBJ_ins_excp_MT_UX)\
 $(OBJ_ins_host_MT_UX)\
 $(OBJ_ins_int_MT_UX)\
 $(OBJ_ins_ptr_MT_UX)\
 $(OBJ_ins_prid_MT_UX)\
 $(OBJ_ins_real_MT_UX)\
 $(OBJ_ins_slice_MT_UX)\
 $(OBJ_ins_thrid_MT_UX)\
 $(OBJ_ins_w2m_MT_UX)\
 \


OBJ_BE_LRSPLIT_MT_UX=\
 $(OBJ_be_lrsplit__MT_UX)\
 \

OBJ_BE_N_MT_UX=\
 $(OBJ_be_N__MT_UX)\
 \

OBJ_BEC_TEST_MT_UX=\
 $(OBJ_bec_test_MT_UX)\
 \


OBJ_BE_TEST_MT_UX=\
 $(OBJ_be_test_MT_UX)\
 \


OBJ_BEL_TEST_MT_UX=\
 $(OBJ_bel_test_MT_UX)\
 \


OBJ_BER_TEST_MT_UX=\
 $(OBJ_ber_test_MT_UX)\
 \


OBJ_BEC_FAIL_MT_UX=\
 $(OBJ_bec_fail__MT_UX)\
 \

OBJ_BE_FAIL_MT_UX=\
 $(OBJ_be_fail__MT_UX)\
 \

OBJ_BEL_FAIL_MT_UX=\
 $(OBJ_bel_fail__MT_UX)\
 \

OBJ_BER_FAIL_MT_UX=\
 $(OBJ_ber_fail__MT_UX)\
 \

OBJ_BEC_FILE_MT_UX=\
 $(OBJ_bec_file__MT_UX)\
 \

OBJ_BEC_FILE_WC_MT_UX=\
 $(OBJ_bec_file_WC__MT_UX)\
 \

OBJ_BE_FILE_MT_UX=\
 $(OBJ_be_file__MT_UX)\
 \

OBJ_BEL_FILE_MT_UX=\
 $(OBJ_bel_file__MT_UX)\
 \

OBJ_BER_FILE_MT_UX=\
 $(OBJ_ber_file__MT_UX)\
 \

OBJ_BEC_FPRINTF_MT_UX=\
 $(OBJ_bec_fprintf__MT_UX)\
 \

OBJ_BEC_FPRINTF_WC_MT_UX=\
 $(OBJ_bec_fprintf_WC__MT_UX)\
 \

OBJ_BE_FPRINTF_MT_UX=\
 $(OBJ_be_fprintf__MT_UX)\
 \

OBJ_BEL_FPRINTF_MT_UX=\
 $(OBJ_bel_fprintf__MT_UX)\
 \

OBJ_BER_FPRINTF_MT_UX=\
 $(OBJ_ber_fprintf__MT_UX)\
 \

OBJ_BEC_NULL_MT_UX=\
 $(OBJ_bec_null__MT_UX)\
 \

OBJ_BE_NULL_MT_UX=\
 $(OBJ_be_null__MT_UX)\
 \

OBJ_BEL_NULL_MT_UX=\
 $(OBJ_bel_null__MT_UX)\
 \

OBJ_BER_NULL_MT_UX=\
 $(OBJ_ber_null__MT_UX)\
 \

OBJ_BEC_ACE_MT_UX=\
 $(OBJ_bec_ACE__MT_UX)\
 \

OBJ_BE_ACE_MT_UX=\
 $(OBJ_be_ACE__MT_UX)\
 \

OBJ_BEL_ACE_MT_UX=\
 $(OBJ_bel_ACE__MT_UX)\
 \

OBJ_BER_ACE_MT_UX=\
 $(OBJ_ber_ACE__MT_UX)\
 \

OBJ_BEC_SYSLOG_MT_UX=\
 $(OBJ_bec_SYSLOG__MT_UX)\
 \

OBJ_BEC_SYSLOG_WC_MT_UX=\
 $(OBJ_bec_SYSLOG_WC__MT_UX)\
 \

OBJ_BE_SYSLOG_MT_UX=\
 $(OBJ_be_SYSLOG__MT_UX)\
 \

OBJ_BER_SYSLOG_MT_UX=\
 $(OBJ_ber_SYSLOG__MT_UX)\
 \

OBJ_FE_ALL_MT_UX=\
 $(OBJ_fe_all__MT_UX)\
 \

OBJ_FE_FAIL_MT_UX=\
 $(OBJ_fe_fail__MT_UX)\
 \

OBJ_FE_N_MT_UX=\
 $(OBJ_fe_N__MT_UX)\
 \

OBJ_FE_NULL_MT_UX=\
 $(OBJ_fe_null__MT_UX)\
 \

OBJ_FE_SIMPLE_MT_UX=\
 $(OBJ_fe_simple__MT_UX)\
 \

OBJ_utl_bailout_MT_UX_DEBUG		= $(PROJ_OBJ_DIR)\util.bailout.mt.debug.obj
OBJ_utl_init_code_strs_MT_UX_DEBUG	= $(PROJ_OBJ_DIR)\util.init_err_strings.mt.debug.obj
OBJ_utl_sev_strs_MT_UX_DEBUG		= $(PROJ_OBJ_DIR)\util.sev_strings.mt.debug.obj
OBJ_utl_snprintf_MT_UX_DEBUG 		= $(PROJ_OBJ_DIR)\util.snprintf.mt.debug.obj
OBJ_utl_strdup_MT_UX_DEBUG 		= $(PROJ_OBJ_DIR)\util.strdup.mt.debug.obj
OBJ_utl_procid_MT_UX_DEBUG 		= $(PROJ_OBJ_DIR)\util.procid.mt.debug.obj
OBJ_utl_thread_MT_UX_DEBUG 		= $(PROJ_OBJ_DIR)\util.thread.mt.debug.obj
OBJ_utl_be_context_MT_UX_DEBUG		= $(PROJ_OBJ_DIR)\util.be_context.mt.debug.obj
OBJ_utl_core_apidefs_MT_UX_DEBUG	= $(PROJ_OBJ_DIR)\util.core_apidefs.mt.debug.obj
OBJ_utl_be_parse_MT_UX_DEBUG		= $(PROJ_OBJ_DIR)\util.be_parse.mt.debug.obj
OBJ_utl_strnlen_MT_UX_DEBUG		= $(PROJ_OBJ_DIR)\util.strnlen.mt.debug.obj
OBJ_utl_time_MT_UX_DEBUG			= $(PROJ_OBJ_DIR)\util.time.mt.debug.obj
OBJ_utl_host_name_MT_UX_DEBUG		= $(PROJ_OBJ_DIR)\util.host_name.mt.debug.obj
OBJ_cr_api_MT_UX_DEBUG 			= $(PROJ_OBJ_DIR)\core.api.mt.debug.obj
OBJ_cr_auto_MT_UX_DEBUG 			= $(PROJ_OBJ_DIR)\core.auto.mt.debug.obj
OBJ_cr_logprintf_MT_UX_DEBUG		= $(PROJ_OBJ_DIR)\core.logprintf.mt.debug.obj
OBJ_ins_args_MT_UX_DEBUG	 		= $(PROJ_OBJ_DIR)\inserters.args.mt.debug.obj
OBJ_ins_b64_MT_UX_DEBUG	 		= $(PROJ_OBJ_DIR)\inserters.b64.mt.debug.obj
OBJ_ins_blob_MT_UX_DEBUG	 		= $(PROJ_OBJ_DIR)\inserters.blob.mt.debug.obj
OBJ_ins_bool_MT_UX_DEBUG	 		= $(PROJ_OBJ_DIR)\inserters.boolean.mt.debug.obj
OBJ_ins_excp_MT_UX_DEBUG	 		= $(PROJ_OBJ_DIR)\inserters.exception.mt.debug.obj
OBJ_ins_host_MT_UX_DEBUG	 		= $(PROJ_OBJ_DIR)\inserters.hostid.mt.debug.obj
OBJ_ins_int_MT_UX_DEBUG	 		= $(PROJ_OBJ_DIR)\inserters.integer.mt.debug.obj
OBJ_ins_ptr_MT_UX_DEBUG	 		= $(PROJ_OBJ_DIR)\inserters.pointer.mt.debug.obj
OBJ_ins_prid_MT_UX_DEBUG	 		= $(PROJ_OBJ_DIR)\inserters.processid.mt.debug.obj
OBJ_ins_real_MT_UX_DEBUG	 		= $(PROJ_OBJ_DIR)\inserters.real.mt.debug.obj
OBJ_ins_slice_MT_UX_DEBUG	 	= $(PROJ_OBJ_DIR)\inserters.slice.mt.debug.obj
OBJ_ins_thrid_MT_UX_DEBUG	 	= $(PROJ_OBJ_DIR)\inserters.threadid.mt.debug.obj
OBJ_ins_w2m_MT_UX_DEBUG	 		= $(PROJ_OBJ_DIR)\inserters.w2m.mt.debug.obj
PDB_utl_bailout_MT_UX_DEBUG		= $(PROJ_OBJ_DIR)\util.bailout.mt.debug.pdb
PDB_utl_init_code_strs_MT_UX_DEBUG	= $(PROJ_OBJ_DIR)\util.init_err_strings.mt.debug.pdb
PDB_utl_sev_strs_MT_UX_DEBUG		= $(PROJ_OBJ_DIR)\util.sev_strings.mt.debug.pdb
PDB_utl_snprintf_MT_UX_DEBUG 	= $(PROJ_OBJ_DIR)\util.snprintf.mt.debug.pdb
PDB_utl_strdup_MT_UX_DEBUG 		= $(PROJ_OBJ_DIR)\util.strdup.mt.debug.pdb
PDB_utl_procid_MT_UX_DEBUG 		= $(PROJ_OBJ_DIR)\util.procid.mt.debug.pdb
PDB_utl_thread_MT_UX_DEBUG 		= $(PROJ_OBJ_DIR)\util.thread.mt.debug.pdb
PDB_utl_be_context_MT_UX_DEBUG	= $(PROJ_OBJ_DIR)\util.be_context.mt.debug.pdb
PDB_utl_core_apidefs_MT_UX_DEBUG	= $(PROJ_OBJ_DIR)\util.core_apidefs.mt.debug.pdb
PDB_utl_be_parse_MT_UX_DEBUG		= $(PROJ_OBJ_DIR)\util.be_parse.mt.debug.pdb
PDB_utl_strnlen_MT_UX_DEBUG		= $(PROJ_OBJ_DIR)\util.strnlen.mt.debug.pdb
PDB_utl_time_MT_UX_DEBUG			= $(PROJ_OBJ_DIR)\util.time.mt.debug.pdb
PDB_utl_host_name_MT_UX_DEBUG	= $(PROJ_OBJ_DIR)\util.host_name.mt.debug.pdb
PDB_cr_api_MT_UX_DEBUG 			= $(PROJ_OBJ_DIR)\core.api.mt.debug.pdb
PDB_cr_auto_MT_UX_DEBUG 			= $(PROJ_OBJ_DIR)\core.auto.mt.debug.pdb
PDB_cr_logprintf_MT_UX_DEBUG		= $(PROJ_OBJ_DIR)\core.logprintf.mt.debug.pdb
PDB_ins_args_MT_UX_DEBUG 		= $(PROJ_OBJ_DIR)\inserters.args.mt.debug.pdb
PDB_ins_b64_MT_UX_DEBUG 			= $(PROJ_OBJ_DIR)\inserters.b64.mt.debug.pdb
PDB_ins_blob_MT_UX_DEBUG 		= $(PROJ_OBJ_DIR)\inserters.blob.mt.debug.pdb
PDB_ins_bool_MT_UX_DEBUG 		= $(PROJ_OBJ_DIR)\inserters.boolean.mt.debug.pdb
PDB_ins_excp_MT_UX_DEBUG 		= $(PROJ_OBJ_DIR)\inserters.exception.mt.debug.pdb
PDB_ins_host_MT_UX_DEBUG 		= $(PROJ_OBJ_DIR)\inserters.hostid.mt.debug.pdb
PDB_ins_int_MT_UX_DEBUG 			= $(PROJ_OBJ_DIR)\inserters.integer.mt.debug.pdb
PDB_ins_ptr_MT_UX_DEBUG 			= $(PROJ_OBJ_DIR)\inserters.pointer.mt.debug.pdb
PDB_ins_prid_MT_UX_DEBUG 		= $(PROJ_OBJ_DIR)\inserters.processid.mt.debug.pdb
PDB_ins_real_MT_UX_DEBUG 		= $(PROJ_OBJ_DIR)\inserters.real.mt.debug.pdb
PDB_ins_slice_MT_UX_DEBUG 		= $(PROJ_OBJ_DIR)\inserters.slice.mt.debug.pdb
PDB_ins_thrid_MT_UX_DEBUG 		= $(PROJ_OBJ_DIR)\inserters.threadid.mt.debug.pdb
PDB_ins_w2m_MT_UX_DEBUG 			= $(PROJ_OBJ_DIR)\inserters.w2m.mt.debug.pdb
#PDB_bec_test_MT_UX_DEBUG 		= $(PROJ_OBJ_DIR)\bec.test.mt.debug.pdb
OBJ_bec_test_MT_UX_DEBUG 		= $(PROJ_OBJ_DIR)\bec.test.mt.debug.obj
OBJ_be_test_MT_UX_DEBUG 			= $(PROJ_OBJ_DIR)\be.test.mt.debug.obj
OBJ_bel_test_MT_UX_DEBUG 		= $(PROJ_OBJ_DIR)\bel.test.mt.debug.obj
OBJ_ber_test_MT_UX_DEBUG 		= $(PROJ_OBJ_DIR)\ber.test.mt.debug.obj
OBJ_be_lrsplit__MT_UX_DEBUG		= $(PROJ_OBJ_DIR)\be.lrsplit.mt.debug.obj
OBJ_be_N__MT_UX_DEBUG			= $(PROJ_OBJ_DIR)\be.N.mt.debug.obj
OBJ_bec_fail__MT_UX_DEBUG		= $(PROJ_OBJ_DIR)\bec.fail.mt.debug.obj
OBJ_be_fail__MT_UX_DEBUG			= $(PROJ_OBJ_DIR)\be.fail.mt.debug.obj
OBJ_bel_fail__MT_UX_DEBUG		= $(PROJ_OBJ_DIR)\bel.fail.mt.debug.obj
OBJ_ber_fail__MT_UX_DEBUG		= $(PROJ_OBJ_DIR)\ber.fail.mt.debug.obj
OBJ_bec_file__MT_UX_DEBUG		= $(PROJ_OBJ_DIR)\bec.file.mt.debug.obj
OBJ_bec_file_WC__MT_UX_DEBUG		= $(PROJ_OBJ_DIR)\bec.file.WithCallback.mt.debug.obj
OBJ_be_file__MT_UX_DEBUG			= $(PROJ_OBJ_DIR)\be.file.mt.debug.obj
OBJ_bel_file__MT_UX_DEBUG		= $(PROJ_OBJ_DIR)\bel.file.mt.debug.obj
OBJ_ber_file__MT_UX_DEBUG		= $(PROJ_OBJ_DIR)\ber.file.mt.debug.obj
OBJ_bec_fprintf__MT_UX_DEBUG		= $(PROJ_OBJ_DIR)\bec.fprintf.mt.debug.obj
OBJ_bec_fprintf_WC__MT_UX_DEBUG	= $(PROJ_OBJ_DIR)\bec.fprintf.WithCallback.mt.debug.obj
OBJ_be_fprintf__MT_UX_DEBUG		= $(PROJ_OBJ_DIR)\be.fprintf.mt.debug.obj
OBJ_bel_fprintf__MT_UX_DEBUG		= $(PROJ_OBJ_DIR)\bel.fprintf.mt.debug.obj
OBJ_ber_fprintf__MT_UX_DEBUG		= $(PROJ_OBJ_DIR)\ber.fprintf.mt.debug.obj
OBJ_bec_null__MT_UX_DEBUG		= $(PROJ_OBJ_DIR)\bec.null.mt.debug.obj
OBJ_be_null__MT_UX_DEBUG			= $(PROJ_OBJ_DIR)\be.null.mt.debug.obj
OBJ_bel_null__MT_UX_DEBUG		= $(PROJ_OBJ_DIR)\bel.null.mt.debug.obj
OBJ_ber_null__MT_UX_DEBUG		= $(PROJ_OBJ_DIR)\ber.null.mt.debug.obj
OBJ_bec_ACE__MT_UX_DEBUG			= $(PROJ_OBJ_DIR)\bec.ACE.mt.debug.obj
OBJ_be_ACE__MT_UX_DEBUG			= $(PROJ_OBJ_DIR)\be.ACE.mt.debug.obj
OBJ_bel_ACE__MT_UX_DEBUG			= $(PROJ_OBJ_DIR)\bel.ACE.mt.debug.obj
OBJ_ber_ACE__MT_UX_DEBUG			= $(PROJ_OBJ_DIR)\ber.ACE.mt.debug.obj
OBJ_bec_SYSLOG__MT_UX_DEBUG		= $(PROJ_OBJ_DIR)\bec.syslog.mt.debug.obj
OBJ_bec_SYSLOG_WC__MT_UX_DEBUG		= $(PROJ_OBJ_DIR)\bec.syslog.WithCallback.mt.debug.obj
OBJ_be_SYSLOG__MT_UX_DEBUG 		= $(PROJ_OBJ_DIR)\be.syslog.mt.debug.obj
OBJ_ber_SYSLOG__MT_UX_DEBUG		= $(PROJ_OBJ_DIR)\ber.syslog.mt.debug.obj
OBJ_fe_all__MT_UX_DEBUG 			= $(PROJ_OBJ_DIR)\fe.all.mt.debug.obj
OBJ_fe_fail__MT_UX_DEBUG 			= $(PROJ_OBJ_DIR)\fe.fail.mt.debug.obj
OBJ_fe_N__MT_UX_DEBUG 				= $(PROJ_OBJ_DIR)\fe.N.mt.debug.obj
OBJ_fe_null__MT_UX_DEBUG 			= $(PROJ_OBJ_DIR)\fe.null.mt.debug.obj
OBJ_fe_simple__MT_UX_DEBUG 		= $(PROJ_OBJ_DIR)\fe.simple.mt.debug.obj

OBJ_UTIL_MT_UX_DEBUG=\
 $(OBJ_utl_bailout_MT_UX_DEBUG)\
 $(OBJ_utl_init_code_strs_MT_UX_DEBUG)\
 $(OBJ_utl_sev_strs_MT_UX_DEBUG)\
 $(OBJ_utl_snprintf_MT_UX_DEBUG)\
 $(OBJ_utl_strdup_MT_UX_DEBUG)\
 $(OBJ_utl_procid_MT_UX_DEBUG)\
 $(OBJ_utl_thread_MT_UX_DEBUG)\
 $(OBJ_utl_be_context_MT_UX_DEBUG)\
 $(OBJ_utl_core_apidefs_MT_UX_DEBUG)\
 $(OBJ_utl_be_parse_MT_UX_DEBUG)\
 $(OBJ_utl_strnlen_MT_UX_DEBUG)\
 $(OBJ_utl_time_MT_UX_DEBUG)\
 $(OBJ_utl_host_name_MT_UX_DEBUG)\
 \

OBJ_CORE_MT_UX_DEBUG=\
 $(OBJ_cr_api_MT_UX_DEBUG)\
 $(OBJ_cr_auto_MT_UX_DEBUG)\
 $(OBJ_cr_logprintf_MT_UX_DEBUG)\
 $(OBJ_ins_args_MT_UX_DEBUG)\
 $(OBJ_ins_b64_MT_UX_DEBUG)\
 $(OBJ_ins_blob_MT_UX_DEBUG)\
 $(OBJ_ins_bool_MT_UX_DEBUG)\
 $(OBJ_ins_excp_MT_UX_DEBUG)\
 $(OBJ_ins_host_MT_UX_DEBUG)\
 $(OBJ_ins_int_MT_UX_DEBUG)\
 $(OBJ_ins_ptr_MT_UX_DEBUG)\
 $(OBJ_ins_prid_MT_UX_DEBUG)\
 $(OBJ_ins_real_MT_UX_DEBUG)\
 $(OBJ_ins_slice_MT_UX_DEBUG)\
 $(OBJ_ins_thrid_MT_UX_DEBUG)\
 $(OBJ_ins_w2m_MT_UX_DEBUG)\
 \

PDB_UTIL_MT_UX_DEBUG=\
 $(PDB_utl_bailout_MT_UX_DEBUG)\
 $(PDB_utl_init_code_strs_MT_UX_DEBUG)\
 $(PDB_utl_sev_strs_MT_UX_DEBUG)\
 $(PDB_utl_snprintf_MT_UX_DEBUG)\
 $(PDB_utl_strdup_MT_UX_DEBUG)\
 $(PDB_utl_procid_MT_UX_DEBUG)\
 $(PDB_utl_thread_MT_UX_DEBUG)\
 $(PDB_utl_be_context_MT_UX_DEBUG)\
 $(PDB_utl_core_apidefs_MT_UX_DEBUG)\
 $(PDB_utl_be_parse_MT_UX_DEBUG)\
 $(PDB_utl_strnlen_MT_UX_DEBUG)\
 $(PDB_utl_time_MT_UX_DEBUG)\
 $(PDB_utl_host_name_MT_UX_DEBUG)\
 \

PDB_CORE_MT_UX_DEBUG=\
 $(PDB_cr_api_MT_UX_DEBUG)\
 $(PDB_cr_auto_MT_UX_DEBUG)\
 $(PDB_cr_logprintf_MT_UX_DEBUG)\
 $(PDB_ins_args_MT_UX_DEBUG)\
 $(PDB_ins_b64_MT_UX_DEBUG)\
 $(PDB_ins_blob_MT_UX_DEBUG)\
 $(PDB_ins_bool_MT_UX_DEBUG)\
 $(PDB_ins_excp_MT_UX_DEBUG)\
 $(PDB_ins_host_MT_UX_DEBUG)\
 $(PDB_ins_int_MT_UX_DEBUG)\
 $(PDB_ins_ptr_MT_UX_DEBUG)\
 $(PDB_ins_prid_MT_UX_DEBUG)\
 $(PDB_ins_real_MT_UX_DEBUG)\
 $(PDB_ins_slice_MT_UX_DEBUG)\
 $(PDB_ins_thrid_MT_UX_DEBUG)\
 \


OBJ_BE_LRSPLIT_MT_UX_DEBUG=\
 $(OBJ_be_lrsplit__MT_UX_DEBUG)\
 \

OBJ_BE_N_MT_UX_DEBUG=\
 $(OBJ_be_N__MT_UX_DEBUG)\
 \

OBJ_BEC_TEST_MT_UX_DEBUG=\
 $(OBJ_bec_test_MT_UX_DEBUG)\
 \

PDB_BEC_TEST_MT_UX_DEBUG=\
 $(PDB_bec_test_MT_UX_DEBUG)\
 \


OBJ_BE_TEST_MT_UX_DEBUG=\
 $(OBJ_be_test_MT_UX_DEBUG)\
 \

PDB_BE_TEST_MT_UX_DEBUG=\
 $(PDB_be_test_MT_UX_DEBUG)\
 \


OBJ_BEL_TEST_MT_UX_DEBUG=\
 $(OBJ_bel_test_MT_UX_DEBUG)\
 \

PDB_BEL_TEST_MT_UX_DEBUG=\
 $(PDB_bel_test_MT_UX_DEBUG)\
 \


OBJ_BER_TEST_MT_UX_DEBUG=\
 $(OBJ_ber_test_MT_UX_DEBUG)\
 \

PDB_BER_TEST_MT_UX_DEBUG=\
 $(PDB_ber_test_MT_UX_DEBUG)\
 \


OBJ_BEC_FAIL_MT_UX_DEBUG=\
 $(OBJ_bec_fail__MT_UX_DEBUG)\
 \

OBJ_BE_FAIL_MT_UX_DEBUG=\
 $(OBJ_be_fail__MT_UX_DEBUG)\
 \

OBJ_BEL_FAIL_MT_UX_DEBUG=\
 $(OBJ_bel_fail__MT_UX_DEBUG)\
 \

OBJ_BER_FAIL_MT_UX_DEBUG=\
 $(OBJ_ber_fail__MT_UX_DEBUG)\
 \

OBJ_BEC_FILE_MT_UX_DEBUG=\
 $(OBJ_bec_file__MT_UX_DEBUG)\
 \

OBJ_BEC_FILE_WC_MT_UX_DEBUG=\
 $(OBJ_bec_file_WC__MT_UX_DEBUG)\
 \

OBJ_BE_FILE_MT_UX_DEBUG=\
 $(OBJ_be_file__MT_UX_DEBUG)\
 \

OBJ_BEL_FILE_MT_UX_DEBUG=\
 $(OBJ_bel_file__MT_UX_DEBUG)\
 \

OBJ_BER_FILE_MT_UX_DEBUG=\
 $(OBJ_ber_file__MT_UX_DEBUG)\
 \

OBJ_BEC_FPRINTF_MT_UX_DEBUG=\
 $(OBJ_bec_fprintf__MT_UX_DEBUG)\
 \

OBJ_BEC_FPRINTF_WC_MT_UX_DEBUG=\
 $(OBJ_bec_fprintf_WC__MT_UX_DEBUG)\
 \

OBJ_BE_FPRINTF_MT_UX_DEBUG=\
 $(OBJ_be_fprintf__MT_UX_DEBUG)\
 \

OBJ_BEL_FPRINTF_MT_UX_DEBUG=\
 $(OBJ_bel_fprintf__MT_UX_DEBUG)\
 \

OBJ_BER_FPRINTF_MT_UX_DEBUG=\
 $(OBJ_ber_fprintf__MT_UX_DEBUG)\
 \

OBJ_BEC_NULL_MT_UX_DEBUG=\
 $(OBJ_bec_null__MT_UX_DEBUG)\
 \

OBJ_BE_NULL_MT_UX_DEBUG=\
 $(OBJ_be_null__MT_UX_DEBUG)\
 \

OBJ_BEL_NULL_MT_UX_DEBUG=\
 $(OBJ_bel_null__MT_UX_DEBUG)\
 \

OBJ_BER_NULL_MT_UX_DEBUG=\
 $(OBJ_ber_null__MT_UX_DEBUG)\
 \

OBJ_BEC_ACE_MT_UX_DEBUG=\
 $(OBJ_bec_ACE__MT_UX_DEBUG)\
 \

OBJ_BE_ACE_MT_UX_DEBUG=\
 $(OBJ_be_ACE__MT_UX_DEBUG)\
 \

OBJ_BEL_ACE_MT_UX_DEBUG=\
 $(OBJ_bel_ACE__MT_UX_DEBUG)\
 \

OBJ_BER_ACE_MT_UX_DEBUG=\
 $(OBJ_ber_ACE__MT_UX_DEBUG)\
 \

OBJ_BEC_SYSLOG_MT_UX_DEBUG=\
 $(OBJ_bec_SYSLOG__MT_UX_DEBUG)\
 \

OBJ_BEC_SYSLOG_WC_MT_UX_DEBUG=\
 $(OBJ_bec_SYSLOG_WC__MT_UX_DEBUG)\
 \

OBJ_BE_SYSLOG_MT_UX_DEBUG=\
 $(OBJ_be_SYSLOG__MT_UX_DEBUG)\
 \

OBJ_BER_SYSLOG_MT_UX_DEBUG=\
 $(OBJ_ber_SYSLOG__MT_UX_DEBUG)\
 \

OBJ_FE_ALL_MT_UX_DEBUG=\
 $(OBJ_fe_all__MT_UX_DEBUG)\
 \

OBJ_FE_FAIL_MT_UX_DEBUG=\
 $(OBJ_fe_fail__MT_UX_DEBUG)\
 \

OBJ_FE_N_MT_UX_DEBUG=\
 $(OBJ_fe_N__MT_UX_DEBUG)\
 \

OBJ_FE_NULL_MT_UX_DEBUG=\
 $(OBJ_fe_null__MT_UX_DEBUG)\
 \

OBJ_FE_SIMPLE_MT_UX_DEBUG=\
 $(OBJ_fe_simple__MT_UX_DEBUG)\
 \


# b64

OBJ_b64_b64_MT_UX            = $(PROJ_OBJ_DIR)\b64.pan.b64.mt.obj

OBJ_B64_MT_UX=\
 $(OBJ_b64_b64_MT_UX)\
 \

OBJ_b64_b64_MT_UX_DEBUG            = $(PROJ_OBJ_DIR)\b64.pan.b64.mt.debug.obj
PDB_b64_b64_MT_UX_DEBUG            = $(PROJ_OBJ_DIR)\b64.pan.b64.mt.debug.pdb

OBJ_B64_MT_UX_DEBUG=\
 $(OBJ_b64_b64_MT_UX_DEBUG)\
 \

PDB_SHWILD_MT_UX_DEBUG=\
 $(PDB_b64_b64_MT_UX_DEBUG)\
 \


# shwild

OBJ_shw_api_MT_UX            = $(PROJ_OBJ_DIR)\shwild.pan.api.mt.obj
OBJ_shw_matches_MT_UX        = $(PROJ_OBJ_DIR)\shwild.pan.matches.mt.obj
OBJ_shw_pattern_MT_UX        = $(PROJ_OBJ_DIR)\shwild.pan.pattern.mt.obj

OBJ_SHWILD_MT_UX=\
 $(OBJ_shw_api_MT_UX)\
 $(OBJ_shw_matches_MT_UX)\
 $(OBJ_shw_pattern_MT_UX)\
 \

OBJ_shw_api_MT_UX_DEBUG            = $(PROJ_OBJ_DIR)\shwild.pan.api.mt.debug.obj
OBJ_shw_matches_MT_UX_DEBUG        = $(PROJ_OBJ_DIR)\shwild.pan.matches.mt.debug.obj
OBJ_shw_pattern_MT_UX_DEBUG        = $(PROJ_OBJ_DIR)\shwild.pan.pattern.mt.debug.obj
PDB_shw_api_MT_UX_DEBUG            = $(PROJ_OBJ_DIR)\shwild.pan.api.mt.debug.pdb
PDB_shw_matches_MT_UX_DEBUG        = $(PROJ_OBJ_DIR)\shwild.pan.matches.mt.debug.pdb
PDB_shw_pattern_MT_UX_DEBUG        = $(PROJ_OBJ_DIR)\shwild.pan.pattern.mt.debug.pdb

OBJ_SHWILD_MT_UX_DEBUG=\
 $(OBJ_shw_api_MT_UX_DEBUG)\
 $(OBJ_shw_matches_MT_UX_DEBUG)\
 $(OBJ_shw_pattern_MT_UX_DEBUG)\
 \

PDB_SHWILD_MT_UX_DEBUG=\
 $(PDB_shw_api_MT_UX_DEBUG)\
 $(PDB_shw_matches_MT_UX_DEBUG)\
 $(PDB_shw_pattern_MT_UX_DEBUG)\
 \


# xtests

OBJ_xts_core_MT_UX           = $(PROJ_OBJ_DIR)\xtests.pan.core.api.mt.obj

OBJ_XTESTS_MT_UX=\
 $(OBJ_xts_core_MT_UX)\
 \

OBJ_xts_core_MT_UX_DEBUG           = $(PROJ_OBJ_DIR)\xtests.pan.core.api.mt.debug.obj
PDB_xts_core_MT_UX_DEBUG           = $(PROJ_OBJ_DIR)\xtests.pan.core.api.mt.debug.pdb

OBJ_XTESTS_MT_UX_DEBUG=\
 $(OBJ_xts_core_MT_UX_DEBUG)\
 \

PDB_XTESTS_MT_UX_DEBUG=\
 $(PDB_xts_core_MT_UX_DEBUG)\
 \



########################################
# Examples

OBJ_EX_CPP_0_MT_UX			=	.\ex.cpp.0.mt.obj
OBJ_EX_CPP_1_MT_UX			=	.\ex.cpp.1.mt.obj
OBJ_EX_CPP_2_MT_UX			=	.\ex.cpp.2.mt.obj
OBJ_EX_CPP_3_MT_UX			=	.\ex.cpp.3.mt.obj
OBJ_EX_CPP_4_MT_UX			=	.\ex.cpp.4.mt.obj
OBJ_EX_CPP_5_MT_UX			=	.\ex.cpp.5.mt.obj
OBJ_EX_CPP_6_MT_UX			=	.\ex.cpp.6.mt.obj
OBJ_EX_CPP_7_MT_UX			=	.\ex.cpp.7.mt.obj
OBJ_EX_CPP_8_MT_UX			=	.\ex.cpp.8.mt.obj
OBJ_EX_CPP_9_MT_UX			=	.\ex.cpp.9.mt.obj
OBJ_EX_CPP_11_MT_UX		=	.\ex.cpp.11.mt.obj
OBJ_EX_CPP_12_MT_UX		=	.\ex.cpp.12.mt.obj
OBJ_EX_CPP_13_MT_UX		=	.\ex.cpp.13.mt.obj
OBJ_EX_CPP_14_MT_UX		=	.\ex.cpp.14.mt.obj
OBJ_EX_CPP_15_MT_UX		=	.\ex.cpp.15.mt.obj
OBJ_EX_CPP_16_MT_UX		=	.\ex.cpp.16.mt.obj
OBJ_EX_CPP_18_MT_UX		=	.\ex.cpp.18.mt.obj
OBJ_EX_CPP_19_MT_UX		=	.\ex.cpp.19.mt.obj
OBJ_EX_CPP_20_MT_UX		=	.\ex.cpp.20.mt.obj
OBJ_EX_CPP_21_MT_UX		=	.\ex.cpp.21.mt.obj
OBJ_EX_CPP_23_MT_UX		=	.\ex.cpp.23.mt.obj
OBJ_EX_CPP_24_MT_UX		=	.\ex.cpp.24.mt.obj
OBJ_EX_CPP_25_MT_UX		=	.\ex.cpp.25.mt.obj
OBJ_EX_CPP_26_MT_UX		=	.\ex.cpp.26.mt.obj
OBJ_EX_CPP_27_MT_UX		=	.\ex.cpp.27.mt.obj
OBJ_EX_C_0_MT_UX			=	.\ex.c.0.mt.obj
OBJ_EX_C_1_MT_UX			=	.\ex.c.1.mt.obj
OBJ_EX_C_2_MT_UX			=	.\ex.c.2.mt.obj
OBJ_EX_C_3_MT_UX			=	.\ex.c.3.mt.obj
OBJ_EX_C_4_MT_UX			=	.\ex.c.4.mt.obj
OBJ_EX_C_5_MT_UX			=	.\ex.c.5.mt.obj
OBJ_EX_C_6_MT_UX			=	.\ex.c.6.mt.obj
OBJ_EX_C_7_MT_UX			=	.\ex.c.7.mt.obj
OBJ_EX_CPP_0_MT_UX_DEBUG			=	.\ex.cpp.0.mt.debug.obj
OBJ_EX_CPP_1_MT_UX_DEBUG			=	.\ex.cpp.1.mt.debug.obj
OBJ_EX_CPP_2_MT_UX_DEBUG			=	.\ex.cpp.2.mt.debug.obj
OBJ_EX_CPP_3_MT_UX_DEBUG			=	.\ex.cpp.3.mt.debug.obj
OBJ_EX_CPP_4_MT_UX_DEBUG			=	.\ex.cpp.4.mt.debug.obj
OBJ_EX_CPP_5_MT_UX_DEBUG			=	.\ex.cpp.5.mt.debug.obj
OBJ_EX_CPP_6_MT_UX_DEBUG			=	.\ex.cpp.6.mt.debug.obj
OBJ_EX_CPP_7_MT_UX_DEBUG			=	.\ex.cpp.7.mt.debug.obj
OBJ_EX_CPP_8_MT_UX_DEBUG			=	.\ex.cpp.8.mt.debug.obj
OBJ_EX_CPP_9_MT_UX_DEBUG			=	.\ex.cpp.9.mt.debug.obj
OBJ_EX_CPP_11_MT_UX_DEBUG		=	.\ex.cpp.11.mt.debug.obj
OBJ_EX_CPP_12_MT_UX_DEBUG		=	.\ex.cpp.12.mt.debug.obj
OBJ_EX_CPP_13_MT_UX_DEBUG		=	.\ex.cpp.13.mt.debug.obj
OBJ_EX_CPP_14_MT_UX_DEBUG		=	.\ex.cpp.14.mt.debug.obj
OBJ_EX_CPP_15_MT_UX_DEBUG		=	.\ex.cpp.15.mt.debug.obj
OBJ_EX_CPP_16_MT_UX_DEBUG		=	.\ex.cpp.16.mt.debug.obj
OBJ_EX_CPP_18_MT_UX_DEBUG		=	.\ex.cpp.18.mt.debug.obj
OBJ_EX_CPP_19_MT_UX_DEBUG		=	.\ex.cpp.19.mt.debug.obj
OBJ_EX_CPP_20_MT_UX_DEBUG		=	.\ex.cpp.20.mt.debug.obj
OBJ_EX_CPP_21_MT_UX_DEBUG		=	.\ex.cpp.21.mt.debug.obj
OBJ_EX_CPP_23_MT_UX_DEBUG		=	.\ex.cpp.23.mt.debug.obj
OBJ_EX_CPP_24_MT_UX_DEBUG		=	.\ex.cpp.24.mt.debug.obj
OBJ_EX_CPP_25_MT_UX_DEBUG		=	.\ex.cpp.25.mt.debug.obj
OBJ_EX_CPP_26_MT_UX_DEBUG		=	.\ex.cpp.26.mt.debug.obj
OBJ_EX_CPP_27_MT_UX_DEBUG		=	.\ex.cpp.27.mt.debug.obj
OBJ_EX_C_0_MT_UX_DEBUG			=	.\ex.c.0.mt.debug.obj
OBJ_EX_C_1_MT_UX_DEBUG			=	.\ex.c.1.mt.debug.obj
OBJ_EX_C_2_MT_UX_DEBUG			=	.\ex.c.2.mt.debug.obj
OBJ_EX_C_3_MT_UX_DEBUG			=	.\ex.c.3.mt.debug.obj
OBJ_EX_C_4_MT_UX_DEBUG			=	.\ex.c.4.mt.debug.obj
OBJ_EX_C_5_MT_UX_DEBUG			=	.\ex.c.5.mt.debug.obj
OBJ_EX_C_6_MT_UX_DEBUG			=	.\ex.c.6.mt.debug.obj
OBJ_EX_C_7_MT_UX_DEBUG			=	.\ex.c.7.mt.debug.obj

########################################
# Tests

##############################
# Component Tests

OBJ_TEST_COMP_core_initseq_MT_UX	=	.\test.component.core.init_sequence.mt.obj
OBJ_TEST_COMP_core_initseq_MT_UX_DEBUG	=	.\test.component.core.init_sequence.mt.debug.obj
OBJ_TEST_COMP_custsev_MT_UX	=	.\test.component.custom_severity.mt.obj
OBJ_TEST_COMP_custsev_MT_UX_DEBUG	=	.\test.component.custom_severity.mt.debug.obj
OBJ_TEST_COMP_ins_args_MT_UX	=	.\test.component.inserters.args.mt.obj
OBJ_TEST_COMP_ins_args_MT_UX_DEBUG	=	.\test.component.inserters.args.mt.debug.obj
OBJ_TEST_COMP_ins_b64_MT_UX	=	.\test.component.inserters.b64.mt.obj
OBJ_TEST_COMP_ins_b64_MT_UX_DEBUG	=	.\test.component.inserters.b64.mt.debug.obj
OBJ_TEST_COMP_ins_bool_MT_UX	=	.\test.component.inserters.boolean.mt.obj
OBJ_TEST_COMP_ins_bool_MT_UX_DEBUG	=	.\test.component.inserters.boolean.mt.debug.obj
OBJ_TEST_COMP_ins_hostid_MT_UX	=	.\test.component.inserters.hostId.mt.obj
OBJ_TEST_COMP_ins_hostid_MT_UX_DEBUG	=	.\test.component.inserters.hostId.mt.debug.obj
OBJ_TEST_COMP_ins_int_MT_UX	=	.\test.component.inserters.integer.mt.obj
OBJ_TEST_COMP_ins_int_MT_UX_DEBUG	=	.\test.component.inserters.integer.mt.debug.obj
OBJ_TEST_COMP_ins_pad_MT_UX	=	.\test.component.inserters.pad.mt.obj
OBJ_TEST_COMP_ins_pad_MT_UX_DEBUG	=	.\test.component.inserters.pad.mt.debug.obj
OBJ_TEST_COMP_ins_ptr_MT_UX	=	.\test.component.inserters.pointer.mt.obj
OBJ_TEST_COMP_ins_ptr_MT_UX_DEBUG	=	.\test.component.inserters.pointer.mt.debug.obj
OBJ_TEST_COMP_ins_prid_MT_UX	=	.\test.component.inserters.processId.mt.obj
OBJ_TEST_COMP_ins_prid_MT_UX_DEBUG	=	.\test.component.inserters.processId.mt.debug.obj
OBJ_TEST_COMP_ins_real_MT_UX	=	.\test.component.inserters.real.mt.obj
OBJ_TEST_COMP_ins_real_MT_UX_DEBUG	=	.\test.component.inserters.real.mt.debug.obj
OBJ_TEST_COMP_ins_slice_MT_UX	=	.\test.component.inserters.slice.mt.obj
OBJ_TEST_COMP_ins_slice_MT_UX_DEBUG	=	.\test.component.inserters.slice.mt.debug.obj
OBJ_TEST_COMP_ins_thrid_MT_UX	=	.\test.component.inserters.threadId.mt.obj
OBJ_TEST_COMP_ins_thrid_MT_UX_DEBUG	=	.\test.component.inserters.threadId.mt.debug.obj
OBJ_TEST_COMP_ins_w2m_MT_UX	=	.\test.component.inserters.w2m.mt.obj
OBJ_TEST_COMP_ins_w2m_MT_UX_DEBUG	=	.\test.component.inserters.w2m.mt.debug.obj
OBJ_TEST_COMP_log_1_MT_UX	=	.\test.component.log.1.mt.obj
OBJ_TEST_COMP_log_1_MT_UX_DEBUG	=	.\test.component.log.1.mt.debug.obj
OBJ_TEST_COMP_pan_puts_MT_UX	=	.\test.component.core.pan_logputs.mt.obj
OBJ_TEST_COMP_pan_puts_MT_UX_DEBUG	=	.\test.component.core.pan_logputs.mt.debug.obj
OBJ_TEST_COMP_pan_prtf_MT_UX	=	.\test.component.core.pan_logprintf.mt.obj
OBJ_TEST_COMP_pan_prtf_MT_UX_DEBUG	=	.\test.component.core.pan_logprintf.mt.debug.obj

##############################
# Performance Tests

OBJ_TEST_PERF_ins_w2m_MT_UX		=	.\test.performance.inserters.w2m.mt.obj
OBJ_TEST_PERF_ins_w2m_MT_UX_DEBUG		=	.\test.performance.inserters.w2m.mt.debug.obj

##############################
# Scratch Tests

OBJ_TEST_API_MT_UX			=	.\test.api.mt.obj
OBJ_TEST_FE_MT_UX			=	.\test.fe.mt.obj
OBJ_TEST_BE_N_MT_UX			=	.\test.be.N.fail.mt.obj
OBJ_TEST_API_MT_UX_DEBUG			=	.\test.api.mt.debug.obj
OBJ_TEST_FE_MT_UX_DEBUG			=	.\test.fe.mt.debug.obj
OBJ_TEST_BE_N_MT_UX_DEBUG			=	.\test.be.N.fail.mt.debug.obj

##############################
# Unit Tests

OBJ_TEST_UNIT_lvls_dyninit_MT_UX	=	.\test.unit.levels.dynamic_init.mt.obj
OBJ_TEST_UNIT_lvls_dyninit_MT_UX_DEBUG	=	.\test.unit.levels.dynamic_init.mt.debug.obj
OBJ_TEST_UNIT_lvls_vals_MT_UX	=	.\test.unit.levels.values.mt.obj
OBJ_TEST_UNIT_lvls_vals_MT_UX_DEBUG	=	.\test.unit.levels.values.mt.debug.obj
OBJ_TEST_UNIT_getcurrtm_MT_UX	=	.\test.unit.util.getcurrenttime.mt.obj
OBJ_TEST_UNIT_getcurrtm_MT_UX_DEBUG	=	.\test.unit.util.getcurrenttime.mt.debug.obj
OBJ_TEST_UNIT_getversion_MT_UX	=	.\test.unit.getversion.mt.obj
OBJ_TEST_UNIT_getversion_MT_UX_DEBUG	=	.\test.unit.getversion.mt.debug.obj
OBJ_TEST_UNIT_gethostname_MT_UX	=	.\test.unit.util.gethostname.mt.obj
OBJ_TEST_UNIT_gethostname_MT_UX_DEBUG	=	.\test.unit.util.gethostname.mt.debug.obj
OBJ_TEST_UNIT_onbailout_MT_UX	=	.\test.unit.util.onbailout.mt.obj
OBJ_TEST_UNIT_strnlen_MT_UX	=	.\test.unit.util.strnlen.mt.obj
OBJ_TEST_UNIT_onbailout_MT_UX_DEBUG	=	.\test.unit.util.onbailout.mt.debug.obj
OBJ_TEST_UNIT_strnlen_MT_UX_DEBUG	=	.\test.unit.util.strnlen.mt.debug.obj
OBJ_TEST_UNIT_bec_file_MT_UX		=	.\test.unit.bec.file.mt.obj
OBJ_TEST_UNIT_bec_file_MT_UX_DEBUG		=	.\test.unit.bec.file.mt.debug.obj
OBJ_TEST_UNIT_bec_fprintf_MT_UX	=	.\test.unit.bec.fprintf.mt.obj
OBJ_TEST_UNIT_bec_fprintf_MT_UX_DEBUG	=	.\test.unit.bec.fprintf.mt.debug.obj
OBJ_TEST_UNIT_bec_fail_MT_UX		=	.\test.unit.bec.fail.mt.obj
OBJ_TEST_UNIT_bec_fail_MT_UX_DEBUG		=	.\test.unit.bec.fail.mt.debug.obj
OBJ_TEST_UNIT_be_fail_MT_UX		=	.\test.unit.be.fail.mt.obj
OBJ_TEST_UNIT_be_fail_MT_UX_DEBUG		=	.\test.unit.be.fail.mt.debug.obj
OBJ_TEST_UNIT_be_lrsplit_MT_UX	=	.\test.unit.be.lrsplit.mt.obj
OBJ_TEST_UNIT_be_lrsplit_MT_UX_DEBUG	=	.\test.unit.be.lrsplit.mt.debug.obj
OBJ_TEST_UNIT_be_N_MT_UX			=	.\test.unit.be.N.mt.obj
OBJ_TEST_UNIT_be_N_MT_UX_DEBUG			=	.\test.unit.be.N.mt.debug.obj
OBJ_TEST_UNIT_fe_all_MT_UX		=	.\test.unit.fe.all.mt.obj
OBJ_TEST_UNIT_fe_all_MT_UX_DEBUG		=	.\test.unit.fe.all.mt.debug.obj
OBJ_TEST_UNIT_fe_fail_MT_UX		=	.\test.unit.fe.fail.mt.obj
OBJ_TEST_UNIT_fe_fail_MT_UX_DEBUG		=	.\test.unit.fe.fail.mt.debug.obj
OBJ_TEST_UNIT_fe_N_MT_UX			=	.\test.unit.fe.N.mt.obj
OBJ_TEST_UNIT_fe_N_MT_UX_DEBUG			=	.\test.unit.fe.N.mt.debug.obj
OBJ_TEST_UNIT_fe_null_MT_UX		=	.\test.unit.fe.null.mt.obj
OBJ_TEST_UNIT_fe_null_MT_UX_DEBUG		=	.\test.unit.fe.null.mt.debug.obj
OBJ_TEST_UNIT_fe_simple_MT_UX	=	.\test.unit.fe.simple.mt.obj
OBJ_TEST_UNIT_fe_simple_MT_UX_DEBUG	=	.\test.unit.fe.simple.mt.debug.obj

##################################################
# Target groups

########################################
# Objects

# util
OBJS_UTIL=\
 $(OBJ_UTIL_MT_UX)\
 $(OBJ_UTIL_MT_UX_DEBUG)\
 \

# core
OBJS_CORE=\
 $(OBJ_CORE_MT_UX)\
 $(OBJ_CORE_MT_UX_DEBUG)\
 \

OBJS_FE=\
 $(OBJ_FE_ALL_MT_UX)\
 $(OBJ_FE_FAIL_MT_UX)\
 $(OBJ_FE_N_MT_UX)\
 $(OBJ_FE_NULL_MT_UX)\
 $(OBJ_FE_SIMPLE_MT_UX)\
 $(OBJ_FE_ALL_MT_UX_DEBUG)\
 $(OBJ_FE_FAIL_MT_UX_DEBUG)\
 $(OBJ_FE_N_MT_UX_DEBUG)\
 $(OBJ_FE_NULL_MT_UX_DEBUG)\
 $(OBJ_FE_SIMPLE_MT_UX_DEBUG)\
 \

OBJS_BE=\
 $(OBJ_BE_LRSPLIT_MT_UX)\
 $(OBJ_BE_N_MT_UX)\
 $(OBJ_BEC_TEST_MT_UX)\
 $(OBJ_BE_TEST_MT_UX)\
 $(OBJ_BEL_TEST_MT_UX)\
 $(OBJ_BER_TEST_MT_UX)\
 $(OBJ_BEC_FAIL_MT_UX)\
 $(OBJ_BE_FAIL_MT_UX)\
 $(OBJ_BEL_FAIL_MT_UX)\
 $(OBJ_BER_FAIL_MT_UX)\
 $(OBJ_BEC_FILE_MT_UX)\
 $(OBJ_BEC_FILE_WC_MT_UX)\
 $(OBJ_BE_FILE_MT_UX)\
 $(OBJ_BEL_FILE_MT_UX)\
 $(OBJ_BER_FILE_MT_UX)\
 $(OBJ_BEC_FPRINTF_MT_UX)\
 $(OBJ_BEC_FPRINTF_WC_MT_UX)\
 $(OBJ_BE_FPRINTF_MT_UX)\
 $(OBJ_BEL_FPRINTF_MT_UX)\
 $(OBJ_BER_FPRINTF_MT_UX)\
 $(OBJ_BEC_NULL_MT_UX)\
 $(OBJ_BE_NULL_MT_UX)\
 $(OBJ_BEL_NULL_MT_UX)\
 $(OBJ_BER_NULL_MT_UX)\
 $(OBJ_BEC_SYSLOG_MT_UX)\
 $(OBJ_BEC_SYSLOG_WC_MT_UX)\
 $(OBJ_BE_SYSLOG_MT_UX)\
 $(OBJ_BER_SYSLOG_MT_UX)\
 $(OBJ_BE_LRSPLIT_MT_UX_DEBUG)\
 $(OBJ_BE_N_MT_UX_DEBUG)\
 $(OBJ_BEC_TEST_MT_UX_DEBUG)\
 $(OBJ_BE_TEST_MT_UX_DEBUG)\
 $(OBJ_BEL_TEST_MT_UX_DEBUG)\
 $(OBJ_BER_TEST_MT_UX_DEBUG)\
 $(OBJ_BEC_FAIL_MT_UX_DEBUG)\
 $(OBJ_BE_FAIL_MT_UX_DEBUG)\
 $(OBJ_BEL_FAIL_MT_UX_DEBUG)\
 $(OBJ_BER_FAIL_MT_UX_DEBUG)\
 $(OBJ_BEC_FILE_MT_UX_DEBUG)\
 $(OBJ_BEC_FILE_WC_MT_UX_DEBUG)\
 $(OBJ_BE_FILE_MT_UX_DEBUG)\
 $(OBJ_BEL_FILE_MT_UX_DEBUG)\
 $(OBJ_BER_FILE_MT_UX_DEBUG)\
 $(OBJ_BEC_FPRINTF_MT_UX_DEBUG)\
 $(OBJ_BEC_FPRINTF_WC_MT_UX_DEBUG)\
 $(OBJ_BE_FPRINTF_MT_UX_DEBUG)\
 $(OBJ_BEL_FPRINTF_MT_UX_DEBUG)\
 $(OBJ_BER_FPRINTF_MT_UX_DEBUG)\
 $(OBJ_BEC_NULL_MT_UX_DEBUG)\
 $(OBJ_BE_NULL_MT_UX_DEBUG)\
 $(OBJ_BEL_NULL_MT_UX_DEBUG)\
 $(OBJ_BER_NULL_MT_UX_DEBUG)\
 $(OBJ_BEC_SYSLOG_MT_UX_DEBUG)\
 $(OBJ_BEC_SYSLOG_WC_MT_UX_DEBUG)\
 $(OBJ_BE_SYSLOG_MT_UX_DEBUG)\
 $(OBJ_BER_SYSLOG_MT_UX_DEBUG)\
 \


OBJS_ACE=\
 \

# b64
OBJS_B64=\
 $(OBJ_B64_MT_UX)\
 $(OBJ_B64_MT_UX_DEBUG)\
 \

# shwild
OBJS_SHWILD=\
 $(OBJ_SHWILD_MT_UX)\
 $(OBJ_SHWILD_MT_UX_DEBUG)\
 \

# xtests
OBJS_XTESTS=\
 $(OBJ_XTESTS_MT_UX)\
 $(OBJ_XTESTS_MT_UX_DEBUG)\
 \

# examples
OBJS_EXAMPLE_C=\
 $(OBJ_EX_C_0_MT_UX)\
 $(OBJ_EX_C_1_MT_UX)\
 $(OBJ_EX_C_2_MT_UX)\
 $(OBJ_EX_C_3_MT_UX)\
 $(OBJ_EX_C_4_MT_UX)\
 $(OBJ_EX_C_5_MT_UX)\
 $(OBJ_EX_C_6_MT_UX)\
 $(OBJ_EX_C_7_MT_UX)\
 $(OBJ_EX_C_0_MT_UX_DEBUG)\
 $(OBJ_EX_C_1_MT_UX_DEBUG)\
 $(OBJ_EX_C_2_MT_UX_DEBUG)\
 $(OBJ_EX_C_3_MT_UX_DEBUG)\
 $(OBJ_EX_C_4_MT_UX_DEBUG)\
 $(OBJ_EX_C_5_MT_UX_DEBUG)\
 $(OBJ_EX_C_6_MT_UX_DEBUG)\
 $(OBJ_EX_C_7_MT_UX_DEBUG)\
 \

OBJS_EXAMPLE_CPP=\
 $(OBJ_EX_CPP_0_MT_UX)\
 $(OBJ_EX_CPP_1_MT_UX)\
 $(OBJ_EX_CPP_2_MT_UX)\
 $(OBJ_EX_CPP_3_MT_UX)\
 $(OBJ_EX_CPP_4_MT_UX)\
 $(OBJ_EX_CPP_5_MT_UX)\
 $(OBJ_EX_CPP_6_MT_UX)\
 $(OBJ_EX_CPP_7_MT_UX)\
 $(OBJ_EX_CPP_8_MT_UX)\
 $(OBJ_EX_CPP_9_MT_UX)\
 $(OBJ_EX_CPP_11_MT_UX)\
 $(OBJ_EX_CPP_12_MT_UX)\
 $(OBJ_EX_CPP_13_MT_UX)\
 $(OBJ_EX_CPP_14_MT_UX)\
 $(OBJ_EX_CPP_15_MT_UX)\
 $(OBJ_EX_CPP_16_MT_UX)\
 $(OBJ_EX_CPP_18_MT_UX)\
 $(OBJ_EX_CPP_19_MT_UX)\
 $(OBJ_EX_CPP_20_MT_UX)\
 $(OBJ_EX_CPP_21_MT_UX)\
 $(OBJ_EX_CPP_23_MT_UX)\
 $(OBJ_EX_CPP_24_MT_UX)\
 $(OBJ_EX_CPP_25_MT_UX)\
 $(OBJ_EX_CPP_26_MT_UX)\
 $(OBJ_EX_CPP_27_MT_UX)\
 $(OBJ_EX_CPP_0_MT_UX_DEBUG)\
 $(OBJ_EX_CPP_1_MT_UX_DEBUG)\
 $(OBJ_EX_CPP_2_MT_UX_DEBUG)\
 $(OBJ_EX_CPP_3_MT_UX_DEBUG)\
 $(OBJ_EX_CPP_4_MT_UX_DEBUG)\
 $(OBJ_EX_CPP_5_MT_UX_DEBUG)\
 $(OBJ_EX_CPP_6_MT_UX_DEBUG)\
 $(OBJ_EX_CPP_7_MT_UX_DEBUG)\
 $(OBJ_EX_CPP_8_MT_UX_DEBUG)\
 $(OBJ_EX_CPP_9_MT_UX_DEBUG)\
 $(OBJ_EX_CPP_11_MT_UX_DEBUG)\
 $(OBJ_EX_CPP_12_MT_UX_DEBUG)\
 $(OBJ_EX_CPP_13_MT_UX_DEBUG)\
 $(OBJ_EX_CPP_14_MT_UX_DEBUG)\
 $(OBJ_EX_CPP_15_MT_UX_DEBUG)\
 $(OBJ_EX_CPP_16_MT_UX_DEBUG)\
 $(OBJ_EX_CPP_18_MT_UX_DEBUG)\
 $(OBJ_EX_CPP_19_MT_UX_DEBUG)\
 $(OBJ_EX_CPP_20_MT_UX_DEBUG)\
 $(OBJ_EX_CPP_21_MT_UX_DEBUG)\
 $(OBJ_EX_CPP_23_MT_UX_DEBUG)\
 $(OBJ_EX_CPP_24_MT_UX_DEBUG)\
 $(OBJ_EX_CPP_25_MT_UX_DEBUG)\
 $(OBJ_EX_CPP_26_MT_UX_DEBUG)\
 $(OBJ_EX_CPP_27_MT_UX_DEBUG)\
 \

OBJS_EXAMPLE=\
 $(OBJS_EXAMPLE_C)\
 $(OBJS_EXAMPLE_CPP)\
 \


# Component Tests
OBJS_TEST_COMPONENT=\
 $(OBJ_TEST_COMP_core_initseq_MT_UX)\
 $(OBJ_TEST_COMP_custsev_MT_UX)\
 $(OBJ_TEST_COMP_ins_args_MT_UX)\
 $(OBJ_TEST_COMP_ins_b64_MT_UX)\
 $(OBJ_TEST_COMP_ins_bool_MT_UX)\
 $(OBJ_TEST_COMP_ins_hostid_MT_UX)\
 $(OBJ_TEST_COMP_ins_int_MT_UX)\
 $(OBJ_TEST_COMP_ins_pad_MT_UX)\
 $(OBJ_TEST_COMP_ins_ptr_MT_UX)\
 $(OBJ_TEST_COMP_ins_prid_MT_UX)\
 $(OBJ_TEST_COMP_ins_real_MT_UX)\
 $(OBJ_TEST_COMP_ins_slice_MT_UX)\
 $(OBJ_TEST_COMP_ins_thrid_MT_UX)\
 $(OBJ_TEST_COMP_ins_w2m_MT_UX)\
 $(OBJ_TEST_COMP_log_1_MT_UX)\
 $(OBJ_TEST_COMP_pan_puts_MT_UX)\
 $(OBJ_TEST_COMP_pan_prtf_MT_UX)\
 $(OBJ_TEST_COMP_core_initseq_MT_UX_DEBUG)\
 $(OBJ_TEST_COMP_custsev_MT_UX_DEBUG)\
 $(OBJ_TEST_COMP_ins_args_MT_UX_DEBUG)\
 $(OBJ_TEST_COMP_ins_b64_MT_UX_DEBUG)\
 $(OBJ_TEST_COMP_ins_bool_MT_UX_DEBUG)\
 $(OBJ_TEST_COMP_ins_hostid_MT_UX_DEBUG)\
 $(OBJ_TEST_COMP_ins_int_MT_UX_DEBUG)\
 $(OBJ_TEST_COMP_ins_pad_MT_UX_DEBUG)\
 $(OBJ_TEST_COMP_ins_ptr_MT_UX_DEBUG)\
 $(OBJ_TEST_COMP_ins_prid_MT_UX_DEBUG)\
 $(OBJ_TEST_COMP_ins_real_MT_UX_DEBUG)\
 $(OBJ_TEST_COMP_ins_slice_MT_UX_DEBUG)\
 $(OBJ_TEST_COMP_ins_thrid_MT_UX_DEBUG)\
 $(OBJ_TEST_COMP_ins_w2m_MT_UX_DEBUG)\
 $(OBJ_TEST_COMP_log_1_MT_UX_DEBUG)\
 $(OBJ_TEST_COMP_pan_puts_MT_UX_DEBUG)\
 $(OBJ_TEST_COMP_pan_prtf_MT_UX_DEBUG)\
 \

# Performance Tests
OBJS_TEST_PERFORMANCE=\
 $(OBJ_TEST_PERF_ins_w2m_MT_UX)\
 $(OBJ_TEST_PERF_ins_w2m_MT_UX_DEBUG)\
 \

# Scratch Tests
OBJS_TEST_SCRATCH=\
 $(OBJ_TEST_API_MT_UX)\
 $(OBJ_TEST_FE_MT_UX)\
 $(OBJ_TEST_BE_N_MT_UX)\
 $(OBJ_TEST_API_MT_UX_DEBUG)\
 $(OBJ_TEST_FE_MT_UX_DEBUG)\
 $(OBJ_TEST_BE_N_MT_UX_DEBUG)\
 \

# Unit Tests
OBJS_TEST_UNIT=\
 $(OBJ_TEST_UNIT_lvls_dyninit_MT_UX)\
 $(OBJ_TEST_UNIT_lvls_vals_MT_UX)\
 $(OBJ_TEST_UNIT_getcurrtm_MT_UX)\
 $(OBJ_TEST_UNIT_getversion_MT_UX)\
 $(OBJ_TEST_UNIT_gethostname_MT_UX)\
 $(OBJ_TEST_UNIT_onbailout_MT_UX)\
 $(OBJ_TEST_UNIT_strnlen_MT_UX)\
 \
 $(OBJ_TEST_UNIT_bec_file_MT_UX)\
 $(OBJ_TEST_UNIT_bec_fprintf_MT_UX)\
 $(OBJ_TEST_UNIT_bec_fail_MT_UX)\
 $(OBJ_TEST_UNIT_be_fail_MT_UX)\
 $(OBJ_TEST_UNIT_be_lrsplit_MT_UX)\
 $(OBJ_TEST_UNIT_be_N_MT_UX)\
 \
 $(OBJ_TEST_UNIT_fe_all_MT_UX)\
 $(OBJ_TEST_UNIT_fe_fail_MT_UX)\
 $(OBJ_TEST_UNIT_fe_N_MT_UX)\
 $(OBJ_TEST_UNIT_fe_null_MT_UX)\
 $(OBJ_TEST_UNIT_fe_simple_MT_UX)\
 $(OBJ_TEST_UNIT_lvls_dyninit_MT_UX_DEBUG)\
 $(OBJ_TEST_UNIT_lvls_vals_MT_UX_DEBUG)\
 $(OBJ_TEST_UNIT_getcurrtm_MT_UX_DEBUG)\
 $(OBJ_TEST_UNIT_getversion_MT_UX_DEBUG)\
 $(OBJ_TEST_UNIT_gethostname_MT_UX_DEBUG)\
 $(OBJ_TEST_UNIT_onbailout_MT_UX_DEBUG)\
 $(OBJ_TEST_UNIT_strnlen_MT_UX_DEBUG)\
 \
 $(OBJ_TEST_UNIT_bec_file_MT_UX_DEBUG)\
 $(OBJ_TEST_UNIT_bec_fprintf_MT_UX_DEBUG)\
 $(OBJ_TEST_UNIT_bec_fail_MT_UX_DEBUG)\
 $(OBJ_TEST_UNIT_be_fail_MT_UX_DEBUG)\
 $(OBJ_TEST_UNIT_be_lrsplit_MT_UX_DEBUG)\
 $(OBJ_TEST_UNIT_be_N_MT_UX_DEBUG)\
 \
 $(OBJ_TEST_UNIT_fe_all_MT_UX_DEBUG)\
 $(OBJ_TEST_UNIT_fe_fail_MT_UX_DEBUG)\
 $(OBJ_TEST_UNIT_fe_N_MT_UX_DEBUG)\
 $(OBJ_TEST_UNIT_fe_null_MT_UX_DEBUG)\
 $(OBJ_TEST_UNIT_fe_simple_MT_UX_DEBUG)\
 \

########################################
# Libraries

# $(LIB_UTIL [ ` [ N a m e T a g ] ` ] )\

TARGETS_LIB_UTIL=\
 $(LIB_UTIL_MT_UX)\
 $(LIB_UTIL_MT_UX_DEBUG)\
 \

TARGETS_LIB_CORE=\
 $(LIB_CORE_MT_UX)\
 $(LIB_CORE_MT_UX_DEBUG)\
 \

TARGETS_LIB_FE_CMN=\
 $(LIB_FE_ALL_MT_UX)\
 $(LIB_FE_FAIL_MT_UX)\
 $(LIB_FE_N_MT_UX)\
 $(LIB_FE_NULL_MT_UX)\
 $(LIB_FE_SIMPLE_MT_UX)\
 $(LIB_FE_ALL_MT_UX_DEBUG)\
 $(LIB_FE_FAIL_MT_UX_DEBUG)\
 $(LIB_FE_N_MT_UX_DEBUG)\
 $(LIB_FE_NULL_MT_UX_DEBUG)\
 $(LIB_FE_SIMPLE_MT_UX_DEBUG)\
 \

TARGETS_LIB_FE=\
 $(LIB_FE_ALL_MT_UX)\
 $(LIB_FE_FAIL_MT_UX)\
 $(LIB_FE_N_MT_UX)\
 $(LIB_FE_NULL_MT_UX)\
 $(LIB_FE_SIMPLE_MT_UX)\
 $(LIB_FE_ALL_MT_UX_DEBUG)\
 $(LIB_FE_FAIL_MT_UX_DEBUG)\
 $(LIB_FE_N_MT_UX_DEBUG)\
 $(LIB_FE_NULL_MT_UX_DEBUG)\
 $(LIB_FE_SIMPLE_MT_UX_DEBUG)\
 \

TARGETS_LIB_BE_CMN=\
 $(LIB_BE_LRSPLIT_MT_UX)\
 $(LIB_BE_N_MT_UX)\
 $(LIB_BEC_FAIL_MT_UX)\
 $(LIB_BE_FAIL_MT_UX)\
 $(LIB_BEL_FAIL_MT_UX)\
 $(LIB_BER_FAIL_MT_UX)\
 $(LIB_BEC_FILE_MT_UX)\
 $(LIB_BEC_FILE_WC_MT_UX)\
 $(LIB_BE_FILE_MT_UX)\
 $(LIB_BEL_FILE_MT_UX)\
 $(LIB_BER_FILE_MT_UX)\
 $(LIB_BEC_FPRINTF_MT_UX)\
 $(LIB_BEC_FPRINTF_WC_MT_UX)\
 $(LIB_BE_FPRINTF_MT_UX)\
 $(LIB_BEL_FPRINTF_MT_UX)\
 $(LIB_BER_FPRINTF_MT_UX)\
 $(LIB_BEC_NULL_MT_UX)\
 $(LIB_BE_NULL_MT_UX)\
 $(LIB_BEL_NULL_MT_UX)\
 $(LIB_BER_NULL_MT_UX)\
 $(LIB_BE_LRSPLIT_MT_UX_DEBUG)\
 $(LIB_BE_N_MT_UX_DEBUG)\
 $(LIB_BEC_FAIL_MT_UX_DEBUG)\
 $(LIB_BE_FAIL_MT_UX_DEBUG)\
 $(LIB_BEL_FAIL_MT_UX_DEBUG)\
 $(LIB_BER_FAIL_MT_UX_DEBUG)\
 $(LIB_BEC_FILE_MT_UX_DEBUG)\
 $(LIB_BEC_FILE_WC_MT_UX_DEBUG)\
 $(LIB_BE_FILE_MT_UX_DEBUG)\
 $(LIB_BEL_FILE_MT_UX_DEBUG)\
 $(LIB_BER_FILE_MT_UX_DEBUG)\
 $(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
 $(LIB_BEC_FPRINTF_WC_MT_UX_DEBUG)\
 $(LIB_BE_FPRINTF_MT_UX_DEBUG)\
 $(LIB_BEL_FPRINTF_MT_UX_DEBUG)\
 $(LIB_BER_FPRINTF_MT_UX_DEBUG)\
 $(LIB_BEC_NULL_MT_UX_DEBUG)\
 $(LIB_BE_NULL_MT_UX_DEBUG)\
 $(LIB_BEL_NULL_MT_UX_DEBUG)\
 $(LIB_BER_NULL_MT_UX_DEBUG)\
 \

TARGETS_LIB_BE=\
 $(LIB_BE_LRSPLIT_MT_UX)\
 $(LIB_BE_N_MT_UX)\
 $(LIB_BEC_TEST_MT_UX)\
 $(LIB_BE_TEST_MT_UX)\
 $(LIB_BEL_TEST_MT_UX)\
 $(LIB_BER_TEST_MT_UX)\
 $(LIB_BEC_FAIL_MT_UX)\
 $(LIB_BE_FAIL_MT_UX)\
 $(LIB_BEL_FAIL_MT_UX)\
 $(LIB_BER_FAIL_MT_UX)\
 $(LIB_BEC_FILE_MT_UX)\
 $(LIB_BEC_FILE_WC_MT_UX)\
 $(LIB_BE_FILE_MT_UX)\
 $(LIB_BEL_FILE_MT_UX)\
 $(LIB_BER_FILE_MT_UX)\
 $(LIB_BEC_FPRINTF_MT_UX)\
 $(LIB_BEC_FPRINTF_WC_MT_UX)\
 $(LIB_BE_FPRINTF_MT_UX)\
 $(LIB_BEL_FPRINTF_MT_UX)\
 $(LIB_BER_FPRINTF_MT_UX)\
 $(LIB_BEC_NULL_MT_UX)\
 $(LIB_BE_NULL_MT_UX)\
 $(LIB_BEL_NULL_MT_UX)\
 $(LIB_BER_NULL_MT_UX)\
 $(LIB_BEC_SYSLOG_MT_UX)\
 $(LIB_BEC_SYSLOG_WC_MT_UX)\
 $(LIB_BE_SYSLOG_MT_UX)\
 $(LIB_BER_SYSLOG_MT_UX)\
 $(LIB_BE_LRSPLIT_MT_UX_DEBUG)\
 $(LIB_BE_N_MT_UX_DEBUG)\
 $(LIB_BEC_TEST_MT_UX_DEBUG)\
 $(LIB_BE_TEST_MT_UX_DEBUG)\
 $(LIB_BEL_TEST_MT_UX_DEBUG)\
 $(LIB_BER_TEST_MT_UX_DEBUG)\
 $(LIB_BEC_FAIL_MT_UX_DEBUG)\
 $(LIB_BE_FAIL_MT_UX_DEBUG)\
 $(LIB_BEL_FAIL_MT_UX_DEBUG)\
 $(LIB_BER_FAIL_MT_UX_DEBUG)\
 $(LIB_BEC_FILE_MT_UX_DEBUG)\
 $(LIB_BEC_FILE_WC_MT_UX_DEBUG)\
 $(LIB_BE_FILE_MT_UX_DEBUG)\
 $(LIB_BEL_FILE_MT_UX_DEBUG)\
 $(LIB_BER_FILE_MT_UX_DEBUG)\
 $(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
 $(LIB_BEC_FPRINTF_WC_MT_UX_DEBUG)\
 $(LIB_BE_FPRINTF_MT_UX_DEBUG)\
 $(LIB_BEL_FPRINTF_MT_UX_DEBUG)\
 $(LIB_BER_FPRINTF_MT_UX_DEBUG)\
 $(LIB_BEC_NULL_MT_UX_DEBUG)\
 $(LIB_BE_NULL_MT_UX_DEBUG)\
 $(LIB_BEL_NULL_MT_UX_DEBUG)\
 $(LIB_BER_NULL_MT_UX_DEBUG)\
 $(LIB_BEC_SYSLOG_MT_UX_DEBUG)\
 $(LIB_BEC_SYSLOG_WC_MT_UX_DEBUG)\
 $(LIB_BE_SYSLOG_MT_UX_DEBUG)\
 $(LIB_BER_SYSLOG_MT_UX_DEBUG)\
 \

TARGETS_LIB_ACE=\
 \

TARGETS_LIB_ALL=\
 $(TARGETS_LIB_CORE)\
 $(TARGETS_LIB_FE)\
 $(TARGETS_LIB_BE)\
 $(TARGETS_LIB_ACE)\
 \

TARGETS_LIB_B64=\
 $(LIB_B64_MT_UX)\
 $(LIB_B64_MT_UX_DEBUG)\
 \

TARGETS_LIB_SHWILD=\
 $(LIB_SHWILD_MT_UX)\
 $(LIB_SHWILD_MT_UX_DEBUG)\
 \

TARGETS_LIB_XTESTS=\
 $(LIB_XTESTS_MT_UX)\
 $(LIB_XTESTS_MT_UX_DEBUG)\
 \

########################################
# Programs

TARGETS_EXAMPLE_C=\
 $(EX_C_0_MT_UX)\
 $(EX_C_1_MT_UX)\
 $(EX_C_2_MT_UX)\
 $(EX_C_3_MT_UX)\
 $(EX_C_4_MT_UX)\
 $(EX_C_5_MT_UX)\
 $(EX_C_6_MT_UX)\
 $(EX_C_0_MT_UX_DEBUG)\
 $(EX_C_1_MT_UX_DEBUG)\
 $(EX_C_2_MT_UX_DEBUG)\
 $(EX_C_3_MT_UX_DEBUG)\
 $(EX_C_4_MT_UX_DEBUG)\
 $(EX_C_5_MT_UX_DEBUG)\
 $(EX_C_6_MT_UX_DEBUG)\
 \

TARGETS_EXAMPLE_CPP=\
 $(EX_CPP_0_MT_UX)\
 $(EX_CPP_1_MT_UX)\
 $(EX_CPP_2_MT_UX)\
 $(EX_CPP_3_MT_UX)\
 $(EX_CPP_4_MT_UX)\
 $(EX_CPP_5_MT_UX)\
 $(EX_CPP_6_MT_UX)\
 $(EX_CPP_7_MT_UX)\
 $(EX_CPP_8_MT_UX)\
 $(EX_CPP_9_MT_UX)\
 $(EX_CPP_11_MT_UX)\
 $(EX_CPP_12_MT_UX)\
 $(EX_CPP_13_MT_UX)\
 $(EX_CPP_14_MT_UX)\
 $(EX_CPP_15_MT_UX)\
 $(EX_CPP_16_MT_UX)\
 $(EX_CPP_18_MT_UX)\
 $(EX_CPP_19_MT_UX)\
 $(EX_CPP_20_MT_UX)\
 $(EX_CPP_21_MT_UX)\
 $(EX_CPP_23_MT_UX)\
 $(EX_CPP_24_MT_UX)\
 $(EX_CPP_25_MT_UX)\
 $(EX_CPP_26_MT_UX)\
 $(EX_CPP_27_MT_UX)\
 $(EX_CPP_0_MT_UX_DEBUG)\
 $(EX_CPP_1_MT_UX_DEBUG)\
 $(EX_CPP_2_MT_UX_DEBUG)\
 $(EX_CPP_3_MT_UX_DEBUG)\
 $(EX_CPP_4_MT_UX_DEBUG)\
 $(EX_CPP_5_MT_UX_DEBUG)\
 $(EX_CPP_6_MT_UX_DEBUG)\
 $(EX_CPP_7_MT_UX_DEBUG)\
 $(EX_CPP_8_MT_UX_DEBUG)\
 $(EX_CPP_9_MT_UX_DEBUG)\
 $(EX_CPP_11_MT_UX_DEBUG)\
 $(EX_CPP_12_MT_UX_DEBUG)\
 $(EX_CPP_13_MT_UX_DEBUG)\
 $(EX_CPP_14_MT_UX_DEBUG)\
 $(EX_CPP_15_MT_UX_DEBUG)\
 $(EX_CPP_16_MT_UX_DEBUG)\
 $(EX_CPP_18_MT_UX_DEBUG)\
 $(EX_CPP_19_MT_UX_DEBUG)\
 $(EX_CPP_20_MT_UX_DEBUG)\
 $(EX_CPP_21_MT_UX_DEBUG)\
 $(EX_CPP_23_MT_UX_DEBUG)\
 $(EX_CPP_24_MT_UX_DEBUG)\
 $(EX_CPP_25_MT_UX_DEBUG)\
 $(EX_CPP_26_MT_UX_DEBUG)\
 $(EX_CPP_27_MT_UX_DEBUG)\
 \

TARGETS_EXAMPLE=\
 $(TARGETS_EXAMPLE_C)\
 $(TARGETS_EXAMPLE_CPP)\
 \


TARGETS_SAMPLE=\
 \


TARGETS_TEST_COMPONENT=\
 $(TARG_TEST_COMP_core_initseq_MT_UX)\
 $(TARG_TEST_COMP_custsev_MT_UX)\
 $(TARG_TEST_COMP_ins_args_MT_UX)\
 $(TARG_TEST_COMP_ins_b64_MT_UX)\
 $(TARG_TEST_COMP_ins_bool_MT_UX)\
 $(TARG_TEST_COMP_ins_hostid_MT_UX)\
 $(TARG_TEST_COMP_ins_int_MT_UX)\
 $(TARG_TEST_COMP_ins_pad_MT_UX)\
 $(TARG_TEST_COMP_ins_ptr_MT_UX)\
 $(TARG_TEST_COMP_ins_prid_MT_UX)\
 $(TARG_TEST_COMP_ins_real_MT_UX)\
 $(TARG_TEST_COMP_ins_slice_MT_UX)\
 $(TARG_TEST_COMP_ins_thrid_MT_UX)\
 $(TARG_TEST_COMP_ins_w2m_MT_UX)\
 $(TARG_TEST_COMP_log_1_MT_UX)\
 $(TARG_TEST_COMP_pan_puts_MT_UX)\
 $(TARG_TEST_COMP_pan_prtf_MT_UX)\
 $(TARG_TEST_COMP_core_initseq_MT_UX_DEBUG)\
 $(TARG_TEST_COMP_custsev_MT_UX_DEBUG)\
 $(TARG_TEST_COMP_ins_args_MT_UX_DEBUG)\
 $(TARG_TEST_COMP_ins_b64_MT_UX_DEBUG)\
 $(TARG_TEST_COMP_ins_bool_MT_UX_DEBUG)\
 $(TARG_TEST_COMP_ins_hostid_MT_UX_DEBUG)\
 $(TARG_TEST_COMP_ins_int_MT_UX_DEBUG)\
 $(TARG_TEST_COMP_ins_pad_MT_UX_DEBUG)\
 $(TARG_TEST_COMP_ins_ptr_MT_UX_DEBUG)\
 $(TARG_TEST_COMP_ins_prid_MT_UX_DEBUG)\
 $(TARG_TEST_COMP_ins_real_MT_UX_DEBUG)\
 $(TARG_TEST_COMP_ins_slice_MT_UX_DEBUG)\
 $(TARG_TEST_COMP_ins_thrid_MT_UX_DEBUG)\
 $(TARG_TEST_COMP_ins_w2m_MT_UX_DEBUG)\
 $(TARG_TEST_COMP_log_1_MT_UX_DEBUG)\
 $(TARG_TEST_COMP_pan_puts_MT_UX_DEBUG)\
 $(TARG_TEST_COMP_pan_prtf_MT_UX_DEBUG)\
 \

TARGETS_TEST_PERFORMANCE=\
 $(TARG_TEST_PERF_ins_w2m_MT_UX)\
 $(TARG_TEST_PERF_ins_w2m_MT_UX_DEBUG)\
 \

TARGETS_TEST_SCRATCH_STD=\
 $(TEST__MT_UX_API_W_BE_FPRINTF)\
 $(TEST__MT_UX_API_W_BE_SYSLOG)\
 $(TEST__MT_UX_API_W_BELR_1_FPRINTF_SYSLOG)\
 $(TARGET_TEST_FE_MT_UX)\
 $(TEST__MT_UX_BE_N_FAIL)\
 $(TEST__MT_UX_DEBUG_API_W_BE_FPRINTF)\
 $(TEST__MT_UX_DEBUG_API_W_BE_SYSLOG)\
 $(TEST__MT_UX_DEBUG_API_W_BELR_1_FPRINTF_SYSLOG)\
 $(TARGET_TEST_FE_MT_UX_DEBUG)\
 $(TEST__MT_UX_DEBUG_BE_N_FAIL)\

TARGETS_TEST_SCRATCH_ACE=\
 \

TARGETS_TEST_SCRATCH=\
 $(TARGETS_TEST_SCRATCH_STD)\
 \
# $(TARG_TEST_SCRT_file_MT_UX)\
# $(TARG_TEST_SCRT_file_MT_UX_DEBUG)\
 \
# $(TARG_TEST_SCRT_file_MT_UX)\
# $(TARG_TEST_SCRT_file_MT_UX_DEBUG)\
 \

# $(TARGETS_TEST_SCRATCH_ACE)\
# \

TARGETS_TEST_UNIT=\
 $(TARG_TEST_UNIT_lvls_dyninit_MT_UX)\
 $(TARG_TEST_UNIT_lvls_vals_MT_UX)\
 $(TARG_TEST_UNIT_getcurrtm_MT_UX)\
 $(TARG_TEST_UNIT_getversion_MT_UX)\
 $(TARG_TEST_UNIT_gethostname_MT_UX)\
 $(TARG_TEST_UNIT_onbailout_MT_UX)\
 $(TARG_TEST_UNIT_strnlen_MT_UX)\
 \
 $(TARG_TEST_UNIT_bec_file_MT_UX)\
 $(TARG_TEST_UNIT_bec_fprintf_MT_UX)\
 $(TARG_TEST_UNIT_bec_fail_MT_UX)\
 $(TARG_TEST_UNIT_be_fail_MT_UX)\
 $(TARG_TEST_UNIT_be_lrsplit_MT_UX)\
 $(TARG_TEST_UNIT_be_N_MT_UX)\
 \
 $(TARG_TEST_UNIT_fe_all_MT_UX)\
 $(TARG_TEST_UNIT_fe_fail_MT_UX)\
 $(TARG_TEST_UNIT_fe_N_MT_UX)\
 $(TARG_TEST_UNIT_fe_null_MT_UX)\
 $(TARG_TEST_UNIT_fe_simple_MT_UX)\
 $(TARG_TEST_UNIT_lvls_dyninit_MT_UX_DEBUG)\
 $(TARG_TEST_UNIT_lvls_vals_MT_UX_DEBUG)\
 $(TARG_TEST_UNIT_getcurrtm_MT_UX_DEBUG)\
 $(TARG_TEST_UNIT_getversion_MT_UX_DEBUG)\
 $(TARG_TEST_UNIT_gethostname_MT_UX_DEBUG)\
 $(TARG_TEST_UNIT_onbailout_MT_UX_DEBUG)\
 $(TARG_TEST_UNIT_strnlen_MT_UX_DEBUG)\
 \
 $(TARG_TEST_UNIT_bec_file_MT_UX_DEBUG)\
 $(TARG_TEST_UNIT_bec_fprintf_MT_UX_DEBUG)\
 $(TARG_TEST_UNIT_bec_fail_MT_UX_DEBUG)\
 $(TARG_TEST_UNIT_be_fail_MT_UX_DEBUG)\
 $(TARG_TEST_UNIT_be_lrsplit_MT_UX_DEBUG)\
 $(TARG_TEST_UNIT_be_N_MT_UX_DEBUG)\
 \
 $(TARG_TEST_UNIT_fe_all_MT_UX_DEBUG)\
 $(TARG_TEST_UNIT_fe_fail_MT_UX_DEBUG)\
 $(TARG_TEST_UNIT_fe_N_MT_UX_DEBUG)\
 $(TARG_TEST_UNIT_fe_null_MT_UX_DEBUG)\
 $(TARG_TEST_UNIT_fe_simple_MT_UX_DEBUG)\
 \

############################################################
# Third-party libraries

LIBS_3PTY_ACE					=	ace.lib
LIBS_3PTY_FPRINTF				=	
LIBS_3PTY_SYSLOG				=	
LIBS_3PTY_BE_N_FAIL				=	
LIBS_3PTY_TEST_UNIT				=	

############################################################################
# External Targets (invokable by make)

# primary

_default:                   build

usage:
	@echo "make [usage | compile | build | test | clean | ace | prep] - default is 'build'"
	@echo "details:"
	@echo "    default(=build)"
	@echo "    compile.libs.util"
	@echo "    compile.libs.core"
	@echo "    compile.ace"
	@echo "    compile.examples"
	@echo "    compile.test"
	@echo "    compile(=compile.libs.util+compile.libs.core+compile.example+compile.test)"
	@echo "    compile.all(=compile.libs.util+compile.libs.core+compile.example+compile.test+compile.ace)"
	@echo "    build.libs.util"
	@echo "    build.libs.core"
	@echo "    build.libs.fe"
	@echo "    build.libs.be"
	@echo "    build.libs.ace"
	@echo "    build.libs(=build.libs.util+build.libs.core+build.libs.fe+build.libs.be)"
	@echo "    build.libs.all(=build.libs.util+build.libs.core+build.libs.fe+build.libs.be+build.libs.ace)"
	@echo "    build.examples"
	@echo "    build.test.std"
	@echo "    build.test.ace"
	@echo "    build.test(=build.test.std)"
	@echo "    build.test.all(=build.test.std+build.test.ace)"
	@echo "    build.util(=build.libs.util)"
	@echo "    build.core(=build.libs.core)"
	@echo "    build.std(=build.libs.util+build.libs.core+build.libs.fe+build.libs.be+build.test.std)"
	@echo "    build.ace(=build.libs.ace+build.test.ace)"
	@echo "    build(=build.libs+build.examples+build.samples+build.test)"
	@echo "    build.all(=build.libs.all+build.examples+build.samples+build.test.all)"
	@echo "    test.std"
	@echo "    test.ace"
	@echo "    test(=test.std)"
	@echo "    test.all(=test.std+test.ace)"
	@echo "    std=build.std+test.std"
	@echo "    ace=build.ace+test.ace"
	@echo "    all=core+std+ace"
	@echo "    prep: removes \r from all .h and .c files, on UNIX-only"


# infrastructure



prep.files.for.os:	$(PROJ_MAKEFILE_NAME)\
	\

prep:	prep.files.for.os


check.lib.dir:		$(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)

check.bin.dir:		$(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_BIN_DIR)\NUL mkdir $(PROJ_BIN_DIR)


# compile targets

compile.libs.util:          $(PROJ_MAKEFILE_NAME)   prep.files.for.os   $(OBJS_UTIL)

compile.libs.core:          $(PROJ_MAKEFILE_NAME)   prep.files.for.os   $(OBJS_CORE)

compile.libs.fe:            $(PROJ_MAKEFILE_NAME)   prep.files.for.os   $(OBJS_FE)

compile.libs.be:            $(PROJ_MAKEFILE_NAME)   prep.files.for.os   $(OBJS_BE)

compile.libs:                                                           compile.libs.util compile.libs.core compile.libs.fe compile.libs.be

compile.libs.b64:           $(PROJ_MAKEFILE_NAME)   prep.files.for.os   $(OBJS_B64)

compile.libs.shwild:        $(PROJ_MAKEFILE_NAME)   prep.files.for.os   $(OBJS_SHWILD)

compile.libs.xtests:        $(PROJ_MAKEFILE_NAME)   prep.files.for.os   $(OBJS_XTESTS)

compile.libs.3pty:                                                      compile.libs.b64 compile.libs.shwild compile.libs.xtests

compile.libs.all:                                                       compile.libs compile.libs.3pty

compile.ace:                $(PROJ_MAKEFILE_NAME)   prep.files.for.os   $(OBJS_ACE)

compile.ex.c:               $(PROJ_MAKEFILE_NAME)   prep.files.for.os   $(OBJS_EXAMPLE_C)

compile.ex.cpp:             $(PROJ_MAKEFILE_NAME)   prep.files.for.os   $(OBJS_EXAMPLE_CPP)

compile.examples:           $(PROJ_MAKEFILE_NAME)   prep.files.for.os   $(OBJS_EXAMPLE)

compile.samples:            $(PROJ_MAKEFILE_NAME)   prep.files.for.os   $(OBJS_SAMPLE)

compile.test.component:     $(PROJ_MAKEFILE_NAME)   prep.files.for.os   $(OBJS_TEST_COMPONENT)

compile.test.performance:   $(PROJ_MAKEFILE_NAME)   prep.files.for.os   $(OBJS_TEST_PERFORMANCE)

compile.test.scratch:       $(PROJ_MAKEFILE_NAME)   prep.files.for.os   $(OBJS_TEST_SCRATCH)

compile.test.unit:          $(PROJ_MAKEFILE_NAME)   prep.files.for.os   $(OBJS_TEST_UNIT)

compile.test:                                                           compile.test.unit compile.test.component compile.test.performance compile.test.scratch
                                                                        
compile:                                                                compile.libs compile.libs.3pty compile.examples compile.test
                                                                        
compile.all:                                                            compile.libs compile.examples compile.test compile.ace



# build targets

build.libs.util:            check.lib.dir           prep.files.for.os   $(TARGETS_LIB_UTIL)

build.libs.core:            check.lib.dir           prep.files.for.os   $(TARGETS_LIB_CORE)

build.libs.fe:              check.lib.dir           prep.files.for.os   $(TARGETS_LIB_FE)

build.libs.be:              check.lib.dir           prep.files.for.os   $(TARGETS_LIB_BE)

build.libs.fe.cmn:          check.lib.dir           prep.files.for.os   $(TARGETS_LIB_FE_CMN)

build.libs.be.cmn:          check.lib.dir           prep.files.for.os   $(TARGETS_LIB_BE_CMN)

build.libs.b64:             check.lib.dir           prep.files.for.os   $(TARGETS_LIB_B64)

build.libs.shwild:          check.lib.dir           prep.files.for.os   $(TARGETS_LIB_SHWILD)

build.libs.xtests:          check.lib.dir           prep.files.for.os   $(TARGETS_LIB_XTESTS)

build.libs.3pty:            check.lib.dir                               build.libs.b64 build.libs.shwild build.libs.xtests

# obsolete
build.libs.std:                                                         check.lib.dir build.libs.fe build.libs.be
                                                                        
build.libs.ace:                                                         check.lib.dir $(TARGETS_LIB_ACE)
                                                                        
build.libs:                                                             build.libs.util build.libs.core build.libs.fe build.libs.be
                                                                        
build.libs.all:                                                         build.libs build.libs.ace

# These names - i.e. build.ex.?? - has to be short (rather than build.examples.??), otherwise GCC's
# make gets confused.
#
# Can't use C++ (or C++) because DMC++'s make can't handle it
build.ex.c:                 check.bin.dir           prep.files.for.os   $(TARGETS_EXAMPLE_C)

build.ex.cpp:               check.bin.dir           prep.files.for.os   $(TARGETS_EXAMPLE_CPP)

build.examples:             check.bin.dir           prep.files.for.os   $(TARGETS_EXAMPLE)

build.samples:              check.bin.dir           prep.files.for.os   $(TARGETS_SAMPLE)

build.test.component:       check.bin.dir           prep.files.for.os   $(TARGETS_TEST_COMPONENT)

build.test.performance:     check.bin.dir           prep.files.for.os   $(TARGETS_TEST_PERFORMANCE)

build.test.scratch:         check.bin.dir           prep.files.for.os   $(TARGETS_TEST_SCRATCH)

build.test.unit:            check.bin.dir           prep.files.for.os   $(TARGETS_TEST_UNIT)

build.test:                                                             build.test.unit build.test.component build.test.performance build.test.scratch

build.test.std:             check.bin.dir           prep.files.for.os   $(TARGETS_TEST_SCRATCH_STD)

build.test.ace:             check.bin.dir           prep.files.for.os   $(TARGETS_TEST_SCRATCH_ACE)

build.test.std:             check.bin.dir           prep.files.for.os   $(TARGETS_TEST_SCRATCH_STD)

build.test.ace:             check.bin.dir           prep.files.for.os   $(TARGETS_TEST_SCRATCH_ACE)

build.std:                                                              build.libs.core build.libs.fe build.libs.be build.test.std

build.ace:                                                              build.libs.ace build.test.ace

build:                                                                  build.libs build.examples build.samples build.test

build.cmn:                                                              build.libs.core build.libs.util build.libs.fe.cmn build.libs.be.cmn

build.common:                                                           build.cmn

build.all:                                                              build.libs.all build.examples build.samples build.test.all


# test targets

test.component_:
	@echo Running Test:Component programs ...
	$(TARG_TEST_COMP_core_initseq_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_core_initseq_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_custsev_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_custsev_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_args_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_args_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_b64_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_b64_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_bool_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_bool_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_hostid_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_hostid_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_int_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_int_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_pad_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_pad_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_ptr_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_ptr_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_prid_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_prid_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_real_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_real_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_thrid_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_thrid_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_w2m_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_w2m_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_log_1_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_log_1_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_pan_puts_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_pan_puts_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_pan_prtf_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_pan_prtf_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)

test.performance_:
	@echo Running Test:Performance programs ...

test.scratch_:
	@echo Running Test:Scratch programs ...
	$(TEST__MT_UX_API_W_BE_FPRINTF)
	$(TEST__MT_UX_API_W_BE_SYSLOG)
	$(TEST__MT_UX_API_W_BELR_1_FPRINTF_SYSLOG)
	$(TARGET_TEST_FE_MT_UX)
	$(TEST__MT_UX_API_W_BE_FPRINTF)
	$(TEST__MT_UX_BE_N_FAIL)
	$(TEST__MT_UX_DEBUG_API_W_BE_FPRINTF)
	$(TEST__MT_UX_DEBUG_API_W_BE_SYSLOG)
	$(TEST__MT_UX_DEBUG_API_W_BELR_1_FPRINTF_SYSLOG)
	$(TARGET_TEST_FE_MT_UX_DEBUG)
	$(TEST__MT_UX_DEBUG_API_W_BE_FPRINTF)
	$(TEST__MT_UX_DEBUG_BE_N_FAIL)

test.unit_:
	@echo Running Test:Unit programs ...
	$(TARG_TEST_UNIT_lvls_dyninit_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_lvls_dyninit_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_lvls_vals_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_lvls_vals_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_getcurrtm_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_getcurrtm_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_getversion_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_getversion_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_gethostname_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_gethostname_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_onbailout_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_onbailout_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_strnlen_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_strnlen_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_bec_file_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_bec_file_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_bec_fprintf_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_bec_fprintf_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_bec_fail_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_bec_fail_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_be_fail_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_be_fail_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_be_lrsplit_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_be_lrsplit_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_be_N_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_be_N_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_all_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_all_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_fail_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_fail_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_N_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_N_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_null_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_null_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_simple_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_simple_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)

test.examples_:
	@echo Running Example programs ...
	$(EX_C_0_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_1_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_2_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_3_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_4_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_5_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_6_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_7_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_0_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_1_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_2_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_3_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_4_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_5_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_6_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_7_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_0_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_1_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_2_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_3_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_4_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_5_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_6_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_7_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_8_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_9_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_11_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_12_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_13_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_14_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_15_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_16_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_18_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_19_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_20_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_21_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_23_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_24_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_25_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_26_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_27_MT_UX) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_0_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_1_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_2_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_3_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_4_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_5_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_6_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_7_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_8_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_9_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_11_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_12_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_13_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_14_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_15_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_16_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_18_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_19_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_20_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_21_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_23_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_24_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_25_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_26_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_27_MT_UX_DEBUG) --verbosity=$(TEST_VERBOSITY)

test.component:		build.test.component test.component_

test.performance:	build.test.performance test.performance_

test.scratch:		build.test.scratch test.scratch_

test.unit:			build.test.unit test.unit_

test.examples:		build.examples test.examples_

test.ace:			build.libs.ace build.libs.core $(TARGETS_TEST_SCRATCH_ACE)

test:                       test.unit test.component

test.all:                   test.scratch test.examples test.performance test.ace test


# clean targets

clean.libs.core:
	@echo Cleaning Core libraries ...
	@-$(RM) $(LIB_CORE_MT_UX)
	@-$(RM) $(LIB_UTIL_MT_UX)
	@-$(RM) $(LIB_CORE_MT_UX_DEBUG)
	@-$(RM) $(LIB_UTIL_MT_UX_DEBUG)
	@-$(RM) $(OBJ_CORE_MT_UX)
	@-$(RM) $(OBJ_UTIL_MT_UX)
	@-$(RM) $(OBJ_CORE_MT_UX_DEBUG)
	@-$(RM) $(OBJ_UTIL_MT_UX_DEBUG)
	@-$(RM) $(PDB_CORE_MT_UX_DEBUG)
	@-$(RM) $(PDB_UTIL_MT_UX_DEBUG)

clean.libs.be:
	@echo Cleaning Back-end libraries ...
	@-$(RM) $(LIB_BE_LRSPLIT_MT_UX)
	@-$(RM) $(LIB_BE_N_MT_UX)
	@-$(RM) $(LIB_BEC_TEST_MT_UX)
	@-$(RM) $(LIB_BE_TEST_MT_UX)
	@-$(RM) $(LIB_BEL_TEST_MT_UX)
	@-$(RM) $(LIB_BER_TEST_MT_UX)
	@-$(RM) $(LIB_BEC_FAIL_MT_UX)
	@-$(RM) $(LIB_BE_FAIL_MT_UX)
	@-$(RM) $(LIB_BEL_FAIL_MT_UX)
	@-$(RM) $(LIB_BER_FAIL_MT_UX)
	@-$(RM) $(LIB_BEC_FILE_MT_UX)
	@-$(RM) $(LIB_BEC_FILE_WC_MT_UX)
	@-$(RM) $(LIB_BE_FILE_MT_UX)
	@-$(RM) $(LIB_BEL_FILE_MT_UX)
	@-$(RM) $(LIB_BER_FILE_MT_UX)
	@-$(RM) $(LIB_BEC_FPRINTF_MT_UX)
	@-$(RM) $(LIB_BEC_FPRINTF_WC_MT_UX)
	@-$(RM) $(LIB_BE_FPRINTF_MT_UX)
	@-$(RM) $(LIB_BEL_FPRINTF_MT_UX)
	@-$(RM) $(LIB_BER_FPRINTF_MT_UX)
	@-$(RM) $(LIB_BEC_NULL_MT_UX)
	@-$(RM) $(LIB_BE_NULL_MT_UX)
	@-$(RM) $(LIB_BEL_NULL_MT_UX)
	@-$(RM) $(LIB_BER_NULL_MT_UX)
	@-$(RM) $(LIB_BEC_SYSLOG_MT_UX)
	@-$(RM) $(LIB_BEC_SYSLOG_WC_MT_UX)
	@-$(RM) $(LIB_BE_SYSLOG_MT_UX)
	@-$(RM) $(LIB_BER_SYSLOG_MT_UX)
	@-$(RM) $(LIB_BE_LRSPLIT_MT_UX_DEBUG)
	@-$(RM) $(LIB_BE_N_MT_UX_DEBUG)
	@-$(RM) $(LIB_BEC_TEST_MT_UX_DEBUG)
	@-$(RM) $(LIB_BE_TEST_MT_UX_DEBUG)
	@-$(RM) $(LIB_BEL_TEST_MT_UX_DEBUG)
	@-$(RM) $(LIB_BER_TEST_MT_UX_DEBUG)
	@-$(RM) $(LIB_BEC_FAIL_MT_UX_DEBUG)
	@-$(RM) $(LIB_BE_FAIL_MT_UX_DEBUG)
	@-$(RM) $(LIB_BEL_FAIL_MT_UX_DEBUG)
	@-$(RM) $(LIB_BER_FAIL_MT_UX_DEBUG)
	@-$(RM) $(LIB_BEC_FILE_MT_UX_DEBUG)
	@-$(RM) $(LIB_BEC_FILE_WC_MT_UX_DEBUG)
	@-$(RM) $(LIB_BE_FILE_MT_UX_DEBUG)
	@-$(RM) $(LIB_BEL_FILE_MT_UX_DEBUG)
	@-$(RM) $(LIB_BER_FILE_MT_UX_DEBUG)
	@-$(RM) $(LIB_BEC_FPRINTF_MT_UX_DEBUG)
	@-$(RM) $(LIB_BEC_FPRINTF_WC_MT_UX_DEBUG)
	@-$(RM) $(LIB_BE_FPRINTF_MT_UX_DEBUG)
	@-$(RM) $(LIB_BEL_FPRINTF_MT_UX_DEBUG)
	@-$(RM) $(LIB_BER_FPRINTF_MT_UX_DEBUG)
	@-$(RM) $(LIB_BEC_NULL_MT_UX_DEBUG)
	@-$(RM) $(LIB_BE_NULL_MT_UX_DEBUG)
	@-$(RM) $(LIB_BEL_NULL_MT_UX_DEBUG)
	@-$(RM) $(LIB_BER_NULL_MT_UX_DEBUG)
	@-$(RM) $(LIB_BEC_SYSLOG_MT_UX_DEBUG)
	@-$(RM) $(LIB_BEC_SYSLOG_WC_MT_UX_DEBUG)
	@-$(RM) $(LIB_BE_SYSLOG_MT_UX_DEBUG)
	@-$(RM) $(LIB_BER_SYSLOG_MT_UX_DEBUG)
	@-$(RM) $(PDB_BE_LRSPLIT_MT_UX_DEBUG)
	@-$(RM) $(PDB_BE_N_MT_UX_DEBUG)
	@-$(RM) $(PDB_BEC_FAIL_MT_UX_DEBUG)
	@-$(RM) $(PDB_BE_FAIL_MT_UX_DEBUG)
	@-$(RM) $(PDB_BEL_FAIL_MT_UX_DEBUG)
	@-$(RM) $(PDB_BER_FAIL_MT_UX_DEBUG)
	@-$(RM) $(PDB_BEC_FILE_MT_UX_DEBUG)
	@-$(RM) $(PDB_BEC_FILE_WC_MT_UX_DEBUG)
	@-$(RM) $(PDB_BE_FILE_MT_UX_DEBUG)
	@-$(RM) $(PDB_BEL_FILE_MT_UX_DEBUG)
	@-$(RM) $(PDB_BER_FILE_MT_UX_DEBUG)
	@-$(RM) $(PDB_BEC_FPRINTF_MT_UX_DEBUG)
	@-$(RM) $(PDB_BEC_FPRINTF_WC_MT_UX_DEBUG)
	@-$(RM) $(PDB_BE_FPRINTF_MT_UX_DEBUG)
	@-$(RM) $(PDB_BEL_FPRINTF_MT_UX_DEBUG)
	@-$(RM) $(PDB_BER_FPRINTF_MT_UX_DEBUG)
	@-$(RM) $(PDB_BEC_NULL_MT_UX_DEBUG)
	@-$(RM) $(PDB_BE_NULL_MT_UX_DEBUG)
	@-$(RM) $(PDB_BEL_NULL_MT_UX_DEBUG)
	@-$(RM) $(PDB_BER_NULL_MT_UX_DEBUG)
	@-$(RM) $(PDB_BEC_SYSLOG_MT_UX_DEBUG)
	@-$(RM) $(PDB_BEC_SYSLOG_WC_MT_UX_DEBUG)
	@-$(RM) $(PDB_BE_SYSLOG_MT_UX_DEBUG)
	@-$(RM) $(PDB_BER_SYSLOG_MT_UX_DEBUG)
	@-$(RM) $(OBJ_BE_LRSPLIT_MT_UX)
	@-$(RM) $(OBJ_BE_N_MT_UX)
	@-$(RM) $(OBJ_BEC_TEST_MT_UX)
	@-$(RM) $(OBJ_BE_TEST_MT_UX)
	@-$(RM) $(OBJ_BEL_TEST_MT_UX)
	@-$(RM) $(OBJ_BER_TEST_MT_UX)
	@-$(RM) $(OBJ_BEC_FAIL_MT_UX)
	@-$(RM) $(OBJ_BE_FAIL_MT_UX)
	@-$(RM) $(OBJ_BEL_FAIL_MT_UX)
	@-$(RM) $(OBJ_BER_FAIL_MT_UX)
	@-$(RM) $(OBJ_BEC_FILE_MT_UX)
	@-$(RM) $(OBJ_BEC_FILE_WC_MT_UX)
	@-$(RM) $(OBJ_BE_FILE_MT_UX)
	@-$(RM) $(OBJ_BEL_FILE_MT_UX)
	@-$(RM) $(OBJ_BER_FILE_MT_UX)
	@-$(RM) $(OBJ_BEC_FPRINTF_MT_UX)
	@-$(RM) $(OBJ_BEC_FPRINTF_WC_MT_UX)
	@-$(RM) $(OBJ_BE_FPRINTF_MT_UX)
	@-$(RM) $(OBJ_BEL_FPRINTF_MT_UX)
	@-$(RM) $(OBJ_BER_FPRINTF_MT_UX)
	@-$(RM) $(OBJ_BEC_NULL_MT_UX)
	@-$(RM) $(OBJ_BE_NULL_MT_UX)
	@-$(RM) $(OBJ_BEL_NULL_MT_UX)
	@-$(RM) $(OBJ_BER_NULL_MT_UX)
	@-$(RM) $(OBJ_BEC_SYSLOG_MT_UX)
	@-$(RM) $(OBJ_BEC_SYSLOG_WC_MT_UX)
	@-$(RM) $(OBJ_BE_SYSLOG_MT_UX)
	@-$(RM) $(OBJ_BER_SYSLOG_MT_UX)
	@-$(RM) $(OBJ_BE_LRSPLIT_MT_UX_DEBUG)
	@-$(RM) $(OBJ_BE_N_MT_UX_DEBUG)
	@-$(RM) $(OBJ_BEC_TEST_MT_UX_DEBUG)
	@-$(RM) $(OBJ_BE_TEST_MT_UX_DEBUG)
	@-$(RM) $(OBJ_BEL_TEST_MT_UX_DEBUG)
	@-$(RM) $(OBJ_BER_TEST_MT_UX_DEBUG)
	@-$(RM) $(OBJ_BEC_FAIL_MT_UX_DEBUG)
	@-$(RM) $(OBJ_BE_FAIL_MT_UX_DEBUG)
	@-$(RM) $(OBJ_BEL_FAIL_MT_UX_DEBUG)
	@-$(RM) $(OBJ_BER_FAIL_MT_UX_DEBUG)
	@-$(RM) $(OBJ_BEC_FILE_MT_UX_DEBUG)
	@-$(RM) $(OBJ_BEC_FILE_WC_MT_UX_DEBUG)
	@-$(RM) $(OBJ_BE_FILE_MT_UX_DEBUG)
	@-$(RM) $(OBJ_BEL_FILE_MT_UX_DEBUG)
	@-$(RM) $(OBJ_BER_FILE_MT_UX_DEBUG)
	@-$(RM) $(OBJ_BEC_FPRINTF_MT_UX_DEBUG)
	@-$(RM) $(OBJ_BEC_FPRINTF_WC_MT_UX_DEBUG)
	@-$(RM) $(OBJ_BE_FPRINTF_MT_UX_DEBUG)
	@-$(RM) $(OBJ_BEL_FPRINTF_MT_UX_DEBUG)
	@-$(RM) $(OBJ_BER_FPRINTF_MT_UX_DEBUG)
	@-$(RM) $(OBJ_BEC_NULL_MT_UX_DEBUG)
	@-$(RM) $(OBJ_BE_NULL_MT_UX_DEBUG)
	@-$(RM) $(OBJ_BEL_NULL_MT_UX_DEBUG)
	@-$(RM) $(OBJ_BER_NULL_MT_UX_DEBUG)
	@-$(RM) $(OBJ_BEC_SYSLOG_MT_UX_DEBUG)
	@-$(RM) $(OBJ_BEC_SYSLOG_WC_MT_UX_DEBUG)
	@-$(RM) $(OBJ_BE_SYSLOG_MT_UX_DEBUG)
	@-$(RM) $(OBJ_BER_SYSLOG_MT_UX_DEBUG)


clean.libs.fe:
	@echo Cleaning Front-end libraries ...
	@-$(RM) $(LIB_FE_ALL_MT_UX)
	@-$(RM) $(LIB_FE_FAIL_MT_UX)
	@-$(RM) $(LIB_FE_N_MT_UX)
	@-$(RM) $(LIB_FE_NULL_MT_UX)
	@-$(RM) $(LIB_FE_SIMPLE_MT_UX)
	@-$(RM) $(LIB_FE_ALL_MT_UX_DEBUG)
	@-$(RM) $(LIB_FE_FAIL_MT_UX_DEBUG)
	@-$(RM) $(LIB_FE_N_MT_UX_DEBUG)
	@-$(RM) $(LIB_FE_NULL_MT_UX_DEBUG)
	@-$(RM) $(LIB_FE_SIMPLE_MT_UX_DEBUG)
	@-$(RM) $(OBJ_FE_ALL_MT_UX)
	@-$(RM) $(OBJ_FE_FAIL_MT_UX)
	@-$(RM) $(OBJ_FE_N_MT_UX)
	@-$(RM) $(OBJ_FE_NULL_MT_UX)
	@-$(RM) $(OBJ_FE_SIMPLE_MT_UX)
	@-$(RM) $(OBJ_FE_ALL_MT_UX_DEBUG)
	@-$(RM) $(OBJ_FE_FAIL_MT_UX_DEBUG)
	@-$(RM) $(OBJ_FE_N_MT_UX_DEBUG)
	@-$(RM) $(OBJ_FE_NULL_MT_UX_DEBUG)
	@-$(RM) $(OBJ_FE_SIMPLE_MT_UX_DEBUG)
	@-$(RM) $(PDB_FE_ALL_MT_UX_DEBUG)
	@-$(RM) $(PDB_FE_FAIL_MT_UX_DEBUG)
	@-$(RM) $(PDB_FE_N_MT_UX_DEBUG)
	@-$(RM) $(PDB_FE_NULL_MT_UX_DEBUG)
	@-$(RM) $(PDB_FE_SIMPLE_MT_UX_DEBUG)

clean.libs.b64:
	@echo Cleaning b64 libraries ...
	@-$(RM) $(LIB_B64_MT_UX)
	@-$(RM) $(LIB_B64_MT_UX_DEBUG)
	@-$(RM) $(OBJ_B64_MT_UX)
	@-$(RM) $(OBJ_B64_MT_UX_DEBUG)
	@-$(RM) $(PDB_B64_MT_UX_DEBUG)

clean.libs.shwild:
	@echo Cleaning shwild libraries ...
	@-$(RM) $(LIB_SHWILD_MT_UX)
	@-$(RM) $(LIB_SHWILD_MT_UX_DEBUG)
	@-$(RM) $(OBJ_SHWILD_MT_UX)
	@-$(RM) $(OBJ_SHWILD_MT_UX_DEBUG)
	@-$(RM) $(PDB_SHWILD_MT_UX_DEBUG)

clean.libs.xtests:
	@echo Cleaning xTests libraries ...
	@-$(RM) $(LIB_XTESTS_MT_UX)
	@-$(RM) $(LIB_XTESTS_MT_UX_DEBUG)
	@-$(RM) $(OBJ_XTESTS_MT_UX)
	@-$(RM) $(OBJ_XTESTS_MT_UX_DEBUG)
	@-$(RM) $(PDB_XTESTS_MT_UX_DEBUG)

clean.libs.ace:
	@echo Cleaning ACE libraries ...

clean.examples:
	@echo Cleaning examples ...
	@-$(RM) $(EX_CPP_0_MT_UX)
	@-$(RM) $(EX_CPP_1_MT_UX)
	@-$(RM) $(EX_CPP_2_MT_UX)
	@-$(RM) $(EX_CPP_3_MT_UX)
	@-$(RM) $(EX_CPP_4_MT_UX)
	@-$(RM) $(EX_CPP_5_MT_UX)
	@-$(RM) $(EX_CPP_6_MT_UX)
	@-$(RM) $(EX_CPP_7_MT_UX)
	@-$(RM) $(EX_CPP_8_MT_UX)
	@-$(RM) $(EX_CPP_9_MT_UX)
	@-$(RM) $(EX_CPP_11_MT_UX)
	@-$(RM) $(EX_CPP_12_MT_UX)
	@-$(RM) $(EX_CPP_13_MT_UX)
	@-$(RM) $(EX_CPP_14_MT_UX)
	@-$(RM) $(EX_CPP_15_MT_UX)
	@-$(RM) $(EX_CPP_16_MT_UX)
	@-$(RM) $(EX_CPP_18_MT_UX)
	@-$(RM) $(EX_CPP_19_MT_UX)
	@-$(RM) $(EX_CPP_20_MT_UX)
	@-$(RM) $(EX_CPP_21_MT_UX)
	@-$(RM) $(EX_CPP_23_MT_UX)
	@-$(RM) $(EX_CPP_24_MT_UX)
	@-$(RM) $(EX_CPP_25_MT_UX)
	@-$(RM) $(EX_CPP_26_MT_UX)
	@-$(RM) $(EX_CPP_27_MT_UX)
	@-$(RM) $(EX_C_0_MT_UX)
	@-$(RM) $(EX_C_1_MT_UX)
	@-$(RM) $(EX_C_2_MT_UX)
	@-$(RM) $(EX_C_3_MT_UX)
	@-$(RM) $(EX_C_4_MT_UX)
	@-$(RM) $(EX_C_5_MT_UX)
	@-$(RM) $(EX_C_6_MT_UX)
	@-$(RM) $(EX_C_7_MT_UX)
	@-$(RM) $(EX_CPP_0_MT_UX_DEBUG)
	@-$(RM) $(EX_CPP_1_MT_UX_DEBUG)
	@-$(RM) $(EX_CPP_2_MT_UX_DEBUG)
	@-$(RM) $(EX_CPP_3_MT_UX_DEBUG)
	@-$(RM) $(EX_CPP_4_MT_UX_DEBUG)
	@-$(RM) $(EX_CPP_5_MT_UX_DEBUG)
	@-$(RM) $(EX_CPP_6_MT_UX_DEBUG)
	@-$(RM) $(EX_CPP_7_MT_UX_DEBUG)
	@-$(RM) $(EX_CPP_8_MT_UX_DEBUG)
	@-$(RM) $(EX_CPP_9_MT_UX_DEBUG)
	@-$(RM) $(EX_CPP_11_MT_UX_DEBUG)
	@-$(RM) $(EX_CPP_12_MT_UX_DEBUG)
	@-$(RM) $(EX_CPP_13_MT_UX_DEBUG)
	@-$(RM) $(EX_CPP_14_MT_UX_DEBUG)
	@-$(RM) $(EX_CPP_15_MT_UX_DEBUG)
	@-$(RM) $(EX_CPP_16_MT_UX_DEBUG)
	@-$(RM) $(EX_CPP_18_MT_UX_DEBUG)
	@-$(RM) $(EX_CPP_19_MT_UX_DEBUG)
	@-$(RM) $(EX_CPP_20_MT_UX_DEBUG)
	@-$(RM) $(EX_CPP_21_MT_UX_DEBUG)
	@-$(RM) $(EX_CPP_23_MT_UX_DEBUG)
	@-$(RM) $(EX_CPP_24_MT_UX_DEBUG)
	@-$(RM) $(EX_CPP_25_MT_UX_DEBUG)
	@-$(RM) $(EX_CPP_26_MT_UX_DEBUG)
	@-$(RM) $(EX_CPP_27_MT_UX_DEBUG)
	@-$(RM) $(EX_C_0_MT_UX_DEBUG)
	@-$(RM) $(EX_C_1_MT_UX_DEBUG)
	@-$(RM) $(EX_C_2_MT_UX_DEBUG)
	@-$(RM) $(EX_C_3_MT_UX_DEBUG)
	@-$(RM) $(EX_C_4_MT_UX_DEBUG)
	@-$(RM) $(EX_C_5_MT_UX_DEBUG)
	@-$(RM) $(EX_C_6_MT_UX_DEBUG)
	@-$(RM) $(EX_C_7_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_CPP_0_MT_UX)
	@-$(RM) $(OBJ_EX_CPP_1_MT_UX)
	@-$(RM) $(OBJ_EX_CPP_2_MT_UX)
	@-$(RM) $(OBJ_EX_CPP_3_MT_UX)
	@-$(RM) $(OBJ_EX_CPP_4_MT_UX)
	@-$(RM) $(OBJ_EX_CPP_5_MT_UX)
	@-$(RM) $(OBJ_EX_CPP_6_MT_UX)
	@-$(RM) $(OBJ_EX_CPP_7_MT_UX)
	@-$(RM) $(OBJ_EX_CPP_8_MT_UX)
	@-$(RM) $(OBJ_EX_CPP_9_MT_UX)
	@-$(RM) $(OBJ_EX_CPP_11_MT_UX)
	@-$(RM) $(OBJ_EX_CPP_12_MT_UX)
	@-$(RM) $(OBJ_EX_CPP_13_MT_UX)
	@-$(RM) $(OBJ_EX_CPP_14_MT_UX)
	@-$(RM) $(OBJ_EX_CPP_15_MT_UX)
	@-$(RM) $(OBJ_EX_CPP_16_MT_UX)
	@-$(RM) $(OBJ_EX_CPP_18_MT_UX)
	@-$(RM) $(OBJ_EX_CPP_19_MT_UX)
	@-$(RM) $(OBJ_EX_CPP_20_MT_UX)
	@-$(RM) $(OBJ_EX_CPP_21_MT_UX)
	@-$(RM) $(OBJ_EX_CPP_23_MT_UX)
	@-$(RM) $(OBJ_EX_CPP_24_MT_UX)
	@-$(RM) $(OBJ_EX_CPP_25_MT_UX)
	@-$(RM) $(OBJ_EX_CPP_26_MT_UX)
	@-$(RM) $(OBJ_EX_CPP_27_MT_UX)
	@-$(RM) $(OBJ_EX_C_0_MT_UX)
	@-$(RM) $(OBJ_EX_C_1_MT_UX)
	@-$(RM) $(OBJ_EX_C_2_MT_UX)
	@-$(RM) $(OBJ_EX_C_3_MT_UX)
	@-$(RM) $(OBJ_EX_C_4_MT_UX)
	@-$(RM) $(OBJ_EX_C_5_MT_UX)
	@-$(RM) $(OBJ_EX_C_6_MT_UX)
	@-$(RM) $(OBJ_EX_C_7_MT_UX)
	@-$(RM) $(OBJ_EX_CPP_0_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_CPP_1_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_CPP_2_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_CPP_3_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_CPP_4_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_CPP_5_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_CPP_6_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_CPP_7_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_CPP_8_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_CPP_9_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_CPP_11_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_CPP_12_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_CPP_13_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_CPP_14_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_CPP_15_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_CPP_16_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_CPP_18_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_CPP_19_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_CPP_20_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_CPP_21_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_CPP_23_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_CPP_24_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_CPP_25_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_CPP_26_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_CPP_27_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_C_0_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_C_1_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_C_2_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_C_3_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_C_4_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_C_5_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_C_6_MT_UX_DEBUG)
	@-$(RM) $(OBJ_EX_C_7_MT_UX_DEBUG)
	@-$(RM) ex.cpp.0.mt.debug.pdb
	@-$(RM) ex.cpp.1.mt.debug.pdb
	@-$(RM) ex.cpp.2.mt.debug.pdb
	@-$(RM) ex.cpp.3.mt.debug.pdb
	@-$(RM) ex.cpp.4.mt.debug.pdb
	@-$(RM) ex.cpp.5.mt.debug.pdb
	@-$(RM) ex.cpp.6.mt.debug.pdb
	@-$(RM) ex.cpp.7.mt.debug.pdb
	@-$(RM) ex.cpp.8.mt.debug.pdb
	@-$(RM) ex.cpp.9.mt.debug.pdb
	@-$(RM) ex.cpp.10.mt.debug.pdb
	@-$(RM) ex.cpp.11.mt.debug.pdb
	@-$(RM) ex.cpp.12.mt.debug.pdb
	@-$(RM) ex.cpp.13.mt.debug.pdb
	@-$(RM) ex.cpp.14.mt.debug.pdb
	@-$(RM) ex.cpp.15.mt.debug.pdb
	@-$(RM) ex.cpp.16.mt.debug.pdb
	@-$(RM) ex.cpp.18.mt.debug.pdb
	@-$(RM) ex.cpp.19.mt.debug.pdb
	@-$(RM) ex.cpp.20.mt.debug.pdb
	@-$(RM) ex.cpp.21.mt.debug.pdb
	@-$(RM) ex.c.1.mt.debug.pdb
	@-$(RM) ex.c.2.mt.debug.pdb
	@-$(RM) ex.c.3.mt.debug.pdb

clean.samples:
	@echo Cleaning samples ...

clean.samples.all:	clean.samples

#	@-$(RM) $(TARGETS_SAMPLE)

clean.test.unit:
	@echo Cleaning unit tests ...
	@-$(RM) $(TARG_TEST_UNIT_lvls_dyninit_MT_UX)
	@-$(RM) $(TARG_TEST_UNIT_lvls_vals_MT_UX)
	@-$(RM) $(TARG_TEST_UNIT_getcurrtm_MT_UX)
	@-$(RM) $(TARG_TEST_UNIT_getversion_MT_UX)
	@-$(RM) $(TARG_TEST_UNIT_gethostname_MT_UX)
	@-$(RM) $(TARG_TEST_UNIT_onbailout_MT_UX)
	@-$(RM) $(TARG_TEST_UNIT_strnlen_MT_UX)
	@-$(RM) $(TARG_TEST_UNIT_bec_file_MT_UX)
	@-$(RM) $(TARG_TEST_UNIT_bec_fprintf_MT_UX)
	@-$(RM) $(TARG_TEST_UNIT_bec_fail_MT_UX)
	@-$(RM) $(TARG_TEST_UNIT_be_fail_MT_UX)
	@-$(RM) $(TARG_TEST_UNIT_be_lrsplit_MT_UX)
	@-$(RM) $(TARG_TEST_UNIT_be_N_MT_UX)
	@-$(RM) $(TARG_TEST_UNIT_fe_all_MT_UX)
	@-$(RM) $(TARG_TEST_UNIT_fe_fail_MT_UX)
	@-$(RM) $(TARG_TEST_UNIT_fe_N_MT_UX)
	@-$(RM) $(TARG_TEST_UNIT_fe_null_MT_UX)
	@-$(RM) $(TARG_TEST_UNIT_fe_simple_MT_UX)
	@-$(RM) $(TARG_TEST_UNIT_lvls_dyninit_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_UNIT_lvls_vals_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_UNIT_getcurrtm_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_UNIT_getversion_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_UNIT_gethostname_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_UNIT_onbailout_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_UNIT_strnlen_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_UNIT_bec_file_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_UNIT_bec_fprintf_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_UNIT_bec_fail_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_UNIT_be_fail_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_UNIT_be_lrsplit_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_UNIT_be_N_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_UNIT_fe_all_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_UNIT_fe_fail_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_UNIT_fe_N_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_UNIT_fe_null_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_UNIT_fe_simple_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_UNIT_lvls_dyninit_MT_UX)
	@-$(RM) $(OBJ_TEST_UNIT_lvls_vals_MT_UX)
	@-$(RM) $(OBJ_TEST_UNIT_getcurrtm_MT_UX)
	@-$(RM) $(OBJ_TEST_UNIT_getversion_MT_UX)
	@-$(RM) $(OBJ_TEST_UNIT_gethostname_MT_UX)
	@-$(RM) $(OBJ_TEST_UNIT_onbailout_MT_UX)
	@-$(RM) $(OBJ_TEST_UNIT_strnlen_MT_UX)
	@-$(RM) $(OBJ_TEST_UNIT_bec_file_MT_UX)
	@-$(RM) $(OBJ_TEST_UNIT_bec_fprintf_MT_UX)
	@-$(RM) $(OBJ_TEST_UNIT_bec_fail_MT_UX)
	@-$(RM) $(OBJ_TEST_UNIT_be_fail_MT_UX)
	@-$(RM) $(OBJ_TEST_UNIT_be_lrsplit_MT_UX)
	@-$(RM) $(OBJ_TEST_UNIT_be_N_MT_UX)
	@-$(RM) $(OBJ_TEST_UNIT_fe_all_MT_UX)
	@-$(RM) $(OBJ_TEST_UNIT_fe_fail_MT_UX)
	@-$(RM) $(OBJ_TEST_UNIT_fe_N_MT_UX)
	@-$(RM) $(OBJ_TEST_UNIT_fe_null_MT_UX)
	@-$(RM) $(OBJ_TEST_UNIT_fe_simple_MT_UX)
	@-$(RM) $(OBJ_TEST_UNIT_lvls_dyninit_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_UNIT_lvls_vals_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_UNIT_getcurrtm_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_UNIT_getversion_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_UNIT_gethostname_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_UNIT_onbailout_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_UNIT_strnlen_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_UNIT_bec_file_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_UNIT_bec_fprintf_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_UNIT_bec_fail_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_UNIT_be_fail_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_UNIT_be_lrsplit_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_UNIT_be_N_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_UNIT_fe_all_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_UNIT_fe_fail_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_UNIT_fe_N_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_UNIT_fe_null_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_UNIT_fe_simple_MT_UX_DEBUG)

clean.test.component:
	@echo Cleaning component tests ...
	@-$(RM) $(TARG_TEST_COMP_core_initseq_MT_UX)
	@-$(RM) $(TARG_TEST_COMP_custsev_MT_UX)
	@-$(RM) $(TARG_TEST_COMP_ins_args_MT_UX)
	@-$(RM) $(TARG_TEST_COMP_ins_b64_MT_UX)
	@-$(RM) $(TARG_TEST_COMP_ins_bool_MT_UX)
	@-$(RM) $(TARG_TEST_COMP_ins_hostid_MT_UX)
	@-$(RM) $(TARG_TEST_COMP_ins_int_MT_UX)
	@-$(RM) $(TARG_TEST_COMP_ins_pad_MT_UX)
	@-$(RM) $(TARG_TEST_COMP_ins_ptr_MT_UX)
	@-$(RM) $(TARG_TEST_COMP_ins_prid_MT_UX)
	@-$(RM) $(TARG_TEST_COMP_ins_real_MT_UX)
	@-$(RM) $(TARG_TEST_COMP_ins_slice_MT_UX)
	@-$(RM) $(TARG_TEST_COMP_ins_thrid_MT_UX)
	@-$(RM) $(TARG_TEST_COMP_ins_w2m_MT_UX)
	@-$(RM) $(TARG_TEST_COMP_log_1_MT_UX)
	@-$(RM) $(TARG_TEST_COMP_pan_puts_MT_UX)
	@-$(RM) $(TARG_TEST_COMP_pan_prtf_MT_UX)
	@-$(RM) $(TARG_TEST_COMP_core_initseq_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_COMP_custsev_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_COMP_ins_args_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_COMP_ins_b64_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_COMP_ins_bool_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_COMP_ins_hostid_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_COMP_ins_int_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_COMP_ins_pad_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_COMP_ins_ptr_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_COMP_ins_prid_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_COMP_ins_real_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_COMP_ins_slice_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_COMP_ins_thrid_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_COMP_ins_w2m_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_COMP_log_1_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_COMP_pan_puts_MT_UX_DEBUG)
	@-$(RM) $(TARG_TEST_COMP_pan_prtf_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_COMP_core_initseq_MT_UX)
	@-$(RM) $(OBJ_TEST_COMP_custsev_MT_UX)
	@-$(RM) $(OBJ_TEST_COMP_ins_args_MT_UX)
	@-$(RM) $(OBJ_TEST_COMP_ins_b64_MT_UX)
	@-$(RM) $(OBJ_TEST_COMP_ins_bool_MT_UX)
	@-$(RM) $(OBJ_TEST_COMP_ins_hostid_MT_UX)
	@-$(RM) $(OBJ_TEST_COMP_ins_int_MT_UX)
	@-$(RM) $(OBJ_TEST_COMP_ins_pad_MT_UX)
	@-$(RM) $(OBJ_TEST_COMP_ins_ptr_MT_UX)
	@-$(RM) $(OBJ_TEST_COMP_ins_prid_MT_UX)
	@-$(RM) $(OBJ_TEST_COMP_ins_real_MT_UX)
	@-$(RM) $(OBJ_TEST_COMP_ins_slice_MT_UX)
	@-$(RM) $(OBJ_TEST_COMP_ins_w2m_MT_UX)
	@-$(RM) $(OBJ_TEST_COMP_ins_thrid_MT_UX)
	@-$(RM) $(OBJ_TEST_COMP_log_1_MT_UX)
	@-$(RM) $(OBJ_TEST_COMP_pan_puts_MT_UX)
	@-$(RM) $(OBJ_TEST_COMP_pan_prtf_MT_UX)
	@-$(RM) $(OBJ_TEST_COMP_core_initseq_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_COMP_custsev_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_COMP_ins_args_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_COMP_ins_b64_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_COMP_ins_bool_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_COMP_ins_hostid_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_COMP_ins_int_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_COMP_ins_pad_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_COMP_ins_ptr_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_COMP_ins_prid_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_COMP_ins_real_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_COMP_ins_slice_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_COMP_ins_w2m_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_COMP_ins_thrid_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_COMP_log_1_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_COMP_pan_puts_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_COMP_pan_prtf_MT_UX_DEBUG)

clean.test.performance:
	@echo Cleaning performance tests ...
	@-$(RM) $(TARG_TEST_PERF_ins_w2m_MT_UX)
	@-$(RM) $(TARG_TEST_PERF_ins_w2m_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_PERF_ins_w2m_MT_UX)
	@-$(RM) $(OBJ_TEST_PERF_ins_w2m_MT_UX_DEBUG)

clean.test.scratch:
	@echo Cleaning scratch tests ...
	@-$(RM) $(TEST__MT_UX_API_W_BE_FPRINTF)
	@-$(RM) $(TEST__MT_UX_API_W_BE_SYSLOG)
	@-$(RM) $(TEST__MT_UX_API_W_BELR_1_FPRINTF_SYSLOG)
	@-$(RM) $(TARGET_TEST_FE_MT_UX)
	@-$(RM) $(TEST__MT_UX_BE_N_FAIL)
	@-$(RM) $(TEST__MT_UX_DEBUG_API_W_BE_FPRINTF)
	@-$(RM) $(TEST__MT_UX_DEBUG_API_W_BE_SYSLOG)
	@-$(RM) $(TEST__MT_UX_DEBUG_API_W_BELR_1_FPRINTF_SYSLOG)
	@-$(RM) $(TARGET_TEST_FE_MT_UX_DEBUG)
	@-$(RM) $(TEST__MT_UX_DEBUG_BE_N_FAIL)
	@-$(RM) test.scratch.api.mt.obj
	@-$(RM) test.scratch.fe.mt.obj
	@-$(RM) test.scratch.api.mt.debug.obj
	@-$(RM) test.scratch.fe.mt.debug.obj
	@-$(RM) test.scratch.api.mt.debug.pdb
	@-$(RM) test.scratch.fe.mt.debug.pdb
	@-$(RM) $(OBJ_TEST_API_MT_UX)
	@-$(RM) $(OBJ_TEST_FE_MT_UX)
	@-$(RM) $(OBJ_TEST_BE_N_MT_UX)
	@-$(RM) $(OBJ_TEST_API_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_FE_MT_UX_DEBUG)
	@-$(RM) $(OBJ_TEST_BE_N_MT_UX_DEBUG)

clean.test.ace:
	@echo Cleaning ACE tests ...

clean.unittest.std:
	@echo Cleaning standard unittests ...

clean.unittest.ace:
	@echo Cleaning ACE unittests ...


clean.libs: 		clean.libs.core clean.libs.be clean.libs.fe

clean.libs.3pty:	clean.libs.b64 clean.libs.shwild clean.libs.xtests

clean.libs.all: 	clean.libs clean.libs.3pty

clean.test:			clean.test.unit clean.test.component clean.test.scratch clean.test.performance

clean.test.all:		clean.test clean.libs.b64 clean.libs.shwild clean.libs.xtests clean.test.ace

clean.unittest:		clean.unittest.std

clean.unittest.all:	clean.unittest.std clean.unittest.ace

clean.std:			clean.libs clean.test

clean.ace:			clean.libs.ace clean.test.ace

clean:				clean.libs clean.libs.3pty clean.examples clean.samples clean.test clean.unittest

clean.all:			clean.libs.all clean.examples clean.samples.all clean.test.all clean.unittest.all

# obsolete targets
target:				build.core

test-all:			test.all

############################################################################
# build targets

##################################################
# Libraries

########################################
# Main library - 'pantheios.X.util.a'

$(LIB_UTIL_MT_UX): $(OBJ_UTIL_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_UTIL_MT_UX)

$(OBJ_utl_bailout_MT_UX): $(PROJ_SRC_DIR)\util\bailout.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\util\bailout.c
$(OBJ_utl_init_code_strs_MT_UX): $(PROJ_SRC_DIR)\util\init_code_strings.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\util\init_code_strings.c
$(OBJ_utl_sev_strs_MT_UX): $(PROJ_SRC_DIR)\util\severity_strings.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\util\severity_strings.c
$(OBJ_utl_time_MT_UX): $(PROJ_SRC_DIR)\util\time.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\util\time.cpp
$(OBJ_utl_host_name_MT_UX): $(PROJ_SRC_DIR)\util\hostname.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\util\hostname.c
$(OBJ_utl_snprintf_MT_UX): $(PROJ_SRC_DIR)\util\snprintf.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\util\snprintf.c
$(OBJ_utl_strdup_MT_UX): $(PROJ_SRC_DIR)\util\strdup.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\util\strdup.c
$(OBJ_utl_procid_MT_UX): $(PROJ_SRC_DIR)\util\processid.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\util\processid.c
$(OBJ_utl_thread_MT_UX): $(PROJ_SRC_DIR)\util\threadid.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\util\threadid.c
$(OBJ_utl_be_context_MT_UX): $(PROJ_SRC_DIR)\util\be.context.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\util\be.context.cpp
$(OBJ_utl_core_apidefs_MT_UX): $(PROJ_SRC_DIR)\util\core.apidefs.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\util\core.apidefs.cpp
$(OBJ_utl_be_parse_MT_UX): $(PROJ_SRC_DIR)\util\be.parse.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\util\be.parse.cpp
$(OBJ_utl_strnlen_MT_UX): $(PROJ_SRC_DIR)\util\strnlen.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\util\strnlen.cpp

$(LIB_UTIL_MT_UX_DEBUG): $(OBJ_UTIL_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_UTIL_MT_UX_DEBUG)

$(OBJ_utl_bailout_MT_UX_DEBUG): $(PROJ_SRC_DIR)\util\bailout.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\util\bailout.c
$(OBJ_utl_init_code_strs_MT_UX_DEBUG): $(PROJ_SRC_DIR)\util\init_code_strings.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\util\init_code_strings.c
$(OBJ_utl_sev_strs_MT_UX_DEBUG): $(PROJ_SRC_DIR)\util\severity_strings.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\util\severity_strings.c
$(OBJ_utl_time_MT_UX_DEBUG): $(PROJ_SRC_DIR)\util\time.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\util\time.cpp
$(OBJ_utl_host_name_MT_UX_DEBUG): $(PROJ_SRC_DIR)\util\hostname.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\util\hostname.c
$(OBJ_utl_snprintf_MT_UX_DEBUG): $(PROJ_SRC_DIR)\util\snprintf.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\util\snprintf.c
$(OBJ_utl_strdup_MT_UX_DEBUG): $(PROJ_SRC_DIR)\util\strdup.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\util\strdup.c
$(OBJ_utl_procid_MT_UX_DEBUG): $(PROJ_SRC_DIR)\util\processid.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\util\processid.c
$(OBJ_utl_thread_MT_UX_DEBUG): $(PROJ_SRC_DIR)\util\threadid.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\util\threadid.c
$(OBJ_utl_be_context_MT_UX_DEBUG): $(PROJ_SRC_DIR)\util\be.context.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\util\be.context.cpp
$(OBJ_utl_core_apidefs_MT_UX_DEBUG): $(PROJ_SRC_DIR)\util\core.apidefs.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\util\core.apidefs.cpp
$(OBJ_utl_be_parse_MT_UX_DEBUG): $(PROJ_SRC_DIR)\util\be.parse.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\util\be.parse.cpp
$(OBJ_utl_strnlen_MT_UX_DEBUG): $(PROJ_SRC_DIR)\util\strnlen.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\util\strnlen.cpp


########################################
# Main library - 'pantheios.X.core.a'

$(LIB_CORE_MT_UX): $(OBJ_CORE_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_CORE_MT_UX)

$(OBJ_cr_api_MT_UX): $(PROJ_SRC_DIR)\core\api.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\core\api.cpp
$(OBJ_cr_auto_MT_UX): $(PROJ_SRC_DIR)\core\auto.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\core\auto.cpp
$(OBJ_cr_logprintf_MT_UX): $(PROJ_SRC_DIR)\core\logprintf.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\core\logprintf.c

$(OBJ_ins_args_MT_UX): $(PROJ_SRC_DIR)\inserters\args.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\inserters\args.cpp
$(OBJ_ins_b64_MT_UX): $(PROJ_SRC_DIR)\inserters\b64.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\inserters\b64.cpp
$(OBJ_ins_blob_MT_UX): $(PROJ_SRC_DIR)\inserters\blob.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\inserters\blob.cpp
$(OBJ_ins_bool_MT_UX): $(PROJ_SRC_DIR)\inserters\boolean.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\inserters\boolean.cpp
$(OBJ_ins_excp_MT_UX): $(PROJ_SRC_DIR)\inserters\exception.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\inserters\exception.cpp
$(OBJ_ins_host_MT_UX): $(PROJ_SRC_DIR)\inserters\hostid.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\inserters\hostid.cpp
$(OBJ_ins_int_MT_UX): $(PROJ_SRC_DIR)\inserters\integer.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\inserters\integer.cpp
$(OBJ_ins_ptr_MT_UX): $(PROJ_SRC_DIR)\inserters\pointer.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\inserters\pointer.cpp
$(OBJ_ins_prid_MT_UX): $(PROJ_SRC_DIR)\inserters\processid.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\inserters\processid.cpp
$(OBJ_ins_real_MT_UX): $(PROJ_SRC_DIR)\inserters\real.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\inserters\real.cpp
$(OBJ_ins_slice_MT_UX): $(PROJ_SRC_DIR)\inserters\slice.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\inserters\slice.cpp
$(OBJ_ins_thrid_MT_UX): $(PROJ_SRC_DIR)\inserters\threadid.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\inserters\threadid.cpp
$(OBJ_ins_w2m_MT_UX): $(PROJ_SRC_DIR)\inserters\w2m.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\inserters\w2m.cpp

$(LIB_CORE_MT_UX_DEBUG): $(OBJ_CORE_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_CORE_MT_UX_DEBUG)

$(OBJ_cr_api_MT_UX_DEBUG): $(PROJ_SRC_DIR)\core\api.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\core\api.cpp
$(OBJ_cr_auto_MT_UX_DEBUG): $(PROJ_SRC_DIR)\core\auto.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\core\auto.cpp
$(OBJ_cr_logprintf_MT_UX_DEBUG): $(PROJ_SRC_DIR)\core\logprintf.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\core\logprintf.c

$(OBJ_ins_args_MT_UX_DEBUG): $(PROJ_SRC_DIR)\inserters\args.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\inserters\args.cpp
$(OBJ_ins_b64_MT_UX_DEBUG): $(PROJ_SRC_DIR)\inserters\b64.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\inserters\b64.cpp
$(OBJ_ins_blob_MT_UX_DEBUG): $(PROJ_SRC_DIR)\inserters\blob.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\inserters\blob.cpp
$(OBJ_ins_bool_MT_UX_DEBUG): $(PROJ_SRC_DIR)\inserters\boolean.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\inserters\boolean.cpp
$(OBJ_ins_excp_MT_UX_DEBUG): $(PROJ_SRC_DIR)\inserters\exception.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\inserters\exception.cpp
$(OBJ_ins_host_MT_UX_DEBUG): $(PROJ_SRC_DIR)\inserters\hostid.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\inserters\hostid.cpp
$(OBJ_ins_int_MT_UX_DEBUG): $(PROJ_SRC_DIR)\inserters\integer.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\inserters\integer.cpp
$(OBJ_ins_ptr_MT_UX_DEBUG): $(PROJ_SRC_DIR)\inserters\pointer.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\inserters\pointer.cpp
$(OBJ_ins_prid_MT_UX_DEBUG): $(PROJ_SRC_DIR)\inserters\processid.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\inserters\processid.cpp
$(OBJ_ins_real_MT_UX_DEBUG): $(PROJ_SRC_DIR)\inserters\real.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\inserters\real.cpp
$(OBJ_ins_slice_MT_UX_DEBUG): $(PROJ_SRC_DIR)\inserters\slice.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\inserters\slice.cpp
$(OBJ_ins_thrid_MT_UX_DEBUG): $(PROJ_SRC_DIR)\inserters\threadid.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\inserters\threadid.cpp
$(OBJ_ins_w2m_MT_UX_DEBUG): $(PROJ_SRC_DIR)\inserters\w2m.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\inserters\w2m.cpp


########################################
# Backend util components

########################################
# Backend library - 'pantheios.be.lrsplit.a'

$(LIB_BE_LRSPLIT_MT_UX): $(OBJ_BE_LRSPLIT_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BE_LRSPLIT_MT_UX)

$(OBJ_be_lrsplit__MT_UX): $(PROJ_SRC_DIR)\backends\be.lrsplit.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\be.lrsplit.c

$(LIB_BE_LRSPLIT_MT_UX_DEBUG): $(OBJ_BE_LRSPLIT_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BE_LRSPLIT_MT_UX_DEBUG)

$(OBJ_be_lrsplit__MT_UX_DEBUG): $(PROJ_SRC_DIR)\backends\be.lrsplit.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\be.lrsplit.c

########################################
# Backend library - 'pantheios.be.N.a'

$(LIB_BE_N_MT_UX): $(OBJ_BE_N_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BE_N_MT_UX)

$(OBJ_be_N__MT_UX): $(PROJ_SRC_DIR)\backends\be.N.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\be.N.c

$(LIB_BE_N_MT_UX_DEBUG): $(OBJ_BE_N_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BE_N_MT_UX_DEBUG)

$(OBJ_be_N__MT_UX_DEBUG): $(PROJ_SRC_DIR)\backends\be.N.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\be.N.c

########################################
# Back-end library - 'pantheios.bec.test.a'

$(LIB_BEC_TEST_MT_UX): $(OBJ_BEC_TEST_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BEC_TEST_MT_UX)

$(OBJ_bec_test_MT_UX): $(PROJ_SRC_DIR)\backends\bec.test.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\bec.test.cpp

$(LIB_BEC_TEST_MT_UX_DEBUG): $(OBJ_BEC_TEST_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BEC_TEST_MT_UX_DEBUG)

$(OBJ_bec_test_MT_UX_DEBUG): $(PROJ_SRC_DIR)\backends\bec.test.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\bec.test.cpp

########################################
# Back-end library - 'pantheios.be.test.a'

$(LIB_BE_TEST_MT_UX): $(OBJ_BE_TEST_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BE_TEST_MT_UX)

$(OBJ_be_test_MT_UX): $(PROJ_SRC_DIR)\backends\be.test.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\be.test.c

$(LIB_BE_TEST_MT_UX_DEBUG): $(OBJ_BE_TEST_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BE_TEST_MT_UX_DEBUG)

$(OBJ_be_test_MT_UX_DEBUG): $(PROJ_SRC_DIR)\backends\be.test.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\be.test.c

########################################
# Back-end library - 'pantheios.bel.test.a'

$(LIB_BEL_TEST_MT_UX): $(OBJ_BEL_TEST_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BEL_TEST_MT_UX)

$(OBJ_bel_test_MT_UX): $(PROJ_SRC_DIR)\backends\bel.test.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\bel.test.c

$(LIB_BEL_TEST_MT_UX_DEBUG): $(OBJ_BEL_TEST_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BEL_TEST_MT_UX_DEBUG)

$(OBJ_bel_test_MT_UX_DEBUG): $(PROJ_SRC_DIR)\backends\bel.test.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\bel.test.c

########################################
# Back-end library - 'pantheios.ber.test.a'

$(LIB_BER_TEST_MT_UX): $(OBJ_BER_TEST_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BER_TEST_MT_UX)

$(OBJ_ber_test_MT_UX): $(PROJ_SRC_DIR)\backends\ber.test.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\ber.test.c

$(LIB_BER_TEST_MT_UX_DEBUG): $(OBJ_BER_TEST_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BER_TEST_MT_UX_DEBUG)

$(OBJ_ber_test_MT_UX_DEBUG): $(PROJ_SRC_DIR)\backends\ber.test.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\ber.test.c

########################################
# Backend library - 'pantheios.bec.fail.a'

$(LIB_BEC_FAIL_MT_UX): $(OBJ_BEC_FAIL_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BEC_FAIL_MT_UX)

$(OBJ_bec_fail__MT_UX): $(PROJ_SRC_DIR)\backends\bec.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\bec.fail.c

$(LIB_BEC_FAIL_MT_UX_DEBUG): $(OBJ_BEC_FAIL_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BEC_FAIL_MT_UX_DEBUG)

$(OBJ_bec_fail__MT_UX_DEBUG): $(PROJ_SRC_DIR)\backends\bec.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\bec.fail.c


########################################
# Backend library - 'pantheios.be.fail.a'

$(LIB_BE_FAIL_MT_UX): $(OBJ_BE_FAIL_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BE_FAIL_MT_UX)

$(OBJ_be_fail__MT_UX): $(PROJ_SRC_DIR)\backends\be.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\be.fail.c

$(LIB_BE_FAIL_MT_UX_DEBUG): $(OBJ_BE_FAIL_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BE_FAIL_MT_UX_DEBUG)

$(OBJ_be_fail__MT_UX_DEBUG): $(PROJ_SRC_DIR)\backends\be.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\be.fail.c


########################################
# Backend library - 'pantheios.bel.fail.a'

$(LIB_BEL_FAIL_MT_UX): $(OBJ_BEL_FAIL_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BEL_FAIL_MT_UX)

$(OBJ_bel_fail__MT_UX): $(PROJ_SRC_DIR)\backends\bel.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\bel.fail.c

$(LIB_BEL_FAIL_MT_UX_DEBUG): $(OBJ_BEL_FAIL_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BEL_FAIL_MT_UX_DEBUG)

$(OBJ_bel_fail__MT_UX_DEBUG): $(PROJ_SRC_DIR)\backends\bel.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\bel.fail.c


########################################
# Backend library - 'pantheios.ber.fail.a'

$(LIB_BER_FAIL_MT_UX): $(OBJ_BER_FAIL_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BER_FAIL_MT_UX)

$(OBJ_ber_fail__MT_UX): $(PROJ_SRC_DIR)\backends\ber.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\ber.fail.c

$(LIB_BER_FAIL_MT_UX_DEBUG): $(OBJ_BER_FAIL_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BER_FAIL_MT_UX_DEBUG)

$(OBJ_ber_fail__MT_UX_DEBUG): $(PROJ_SRC_DIR)\backends\ber.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\ber.fail.c


########################################
# Backend library - 'pantheios.bec.file.a'

$(LIB_BEC_FILE_MT_UX): $(OBJ_BEC_FILE_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BEC_FILE_MT_UX)

$(OBJ_bec_file__MT_UX): $(PROJ_SRC_DIR)\backends\bec.file.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\bec.file.cpp

$(LIB_BEC_FILE_MT_UX_DEBUG): $(OBJ_BEC_FILE_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BEC_FILE_MT_UX_DEBUG)

$(OBJ_bec_file__MT_UX_DEBUG): $(PROJ_SRC_DIR)\backends\bec.file.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\bec.file.cpp


########################################
# Backend library - 'pantheios.bec.file.WithCallback.a'

$(LIB_BEC_FILE_WC_MT_UX): $(OBJ_BEC_FILE_WC_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BEC_FILE_WC_MT_UX)

$(OBJ_bec_file_WC__MT_UX): $(PROJ_SRC_DIR)\backends\bec.file.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\bec.file.cpp

$(LIB_BEC_FILE_WC_MT_UX_DEBUG): $(OBJ_BEC_FILE_WC_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BEC_FILE_WC_MT_UX_DEBUG)

$(OBJ_bec_file_WC__MT_UX_DEBUG): $(PROJ_SRC_DIR)\backends\bec.file.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX_DEBUG) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\bec.file.cpp


########################################
# Backend library - 'pantheios.be.file.a'

$(LIB_BE_FILE_MT_UX): $(OBJ_BE_FILE_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BE_FILE_MT_UX)

$(OBJ_be_file__MT_UX): $(PROJ_SRC_DIR)\backends\be.file.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\be.file.c

$(LIB_BE_FILE_MT_UX_DEBUG): $(OBJ_BE_FILE_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BE_FILE_MT_UX_DEBUG)

$(OBJ_be_file__MT_UX_DEBUG): $(PROJ_SRC_DIR)\backends\be.file.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\be.file.c


########################################
# Backend library - 'pantheios.bel.file.a'

$(LIB_BEL_FILE_MT_UX): $(OBJ_BEL_FILE_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BEL_FILE_MT_UX)

$(OBJ_bel_file__MT_UX): $(PROJ_SRC_DIR)\backends\bel.file.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\bel.file.c

$(LIB_BEL_FILE_MT_UX_DEBUG): $(OBJ_BEL_FILE_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BEL_FILE_MT_UX_DEBUG)

$(OBJ_bel_file__MT_UX_DEBUG): $(PROJ_SRC_DIR)\backends\bel.file.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\bel.file.c


########################################
# Backend library - 'pantheios.ber.file.a'

$(LIB_BER_FILE_MT_UX): $(OBJ_BER_FILE_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BER_FILE_MT_UX)

$(OBJ_ber_file__MT_UX): $(PROJ_SRC_DIR)\backends\ber.file.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\ber.file.c

$(LIB_BER_FILE_MT_UX_DEBUG): $(OBJ_BER_FILE_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BER_FILE_MT_UX_DEBUG)

$(OBJ_ber_file__MT_UX_DEBUG): $(PROJ_SRC_DIR)\backends\ber.file.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\ber.file.c


########################################
# Backend library - 'pantheios.bec.fprintf.a'

$(LIB_BEC_FPRINTF_MT_UX): $(OBJ_BEC_FPRINTF_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BEC_FPRINTF_MT_UX)

$(OBJ_bec_fprintf__MT_UX): $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp

$(LIB_BEC_FPRINTF_MT_UX_DEBUG): $(OBJ_BEC_FPRINTF_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BEC_FPRINTF_MT_UX_DEBUG)

$(OBJ_bec_fprintf__MT_UX_DEBUG): $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp


########################################
# Backend library - 'pantheios.bec.fprintf.WithCallback.a'

$(LIB_BEC_FPRINTF_WC_MT_UX): $(OBJ_BEC_FPRINTF_WC_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BEC_FPRINTF_WC_MT_UX)

$(OBJ_bec_fprintf_WC__MT_UX): $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp

$(LIB_BEC_FPRINTF_WC_MT_UX_DEBUG): $(OBJ_BEC_FPRINTF_WC_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BEC_FPRINTF_WC_MT_UX_DEBUG)

$(OBJ_bec_fprintf_WC__MT_UX_DEBUG): $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_UX_DEBUG) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp


########################################
# Backend library - 'pantheios.be.fprintf.a'

$(LIB_BE_FPRINTF_MT_UX): $(OBJ_BE_FPRINTF_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BE_FPRINTF_MT_UX)

$(OBJ_be_fprintf__MT_UX): $(PROJ_SRC_DIR)\backends\be.fprintf.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\be.fprintf.c

$(LIB_BE_FPRINTF_MT_UX_DEBUG): $(OBJ_BE_FPRINTF_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BE_FPRINTF_MT_UX_DEBUG)

$(OBJ_be_fprintf__MT_UX_DEBUG): $(PROJ_SRC_DIR)\backends\be.fprintf.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\be.fprintf.c


########################################
# Backend library - 'pantheios.bel.fprintf.a'

$(LIB_BEL_FPRINTF_MT_UX): $(OBJ_BEL_FPRINTF_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BEL_FPRINTF_MT_UX)

$(OBJ_bel_fprintf__MT_UX): $(PROJ_SRC_DIR)\backends\bel.fprintf.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\bel.fprintf.c

$(LIB_BEL_FPRINTF_MT_UX_DEBUG): $(OBJ_BEL_FPRINTF_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BEL_FPRINTF_MT_UX_DEBUG)

$(OBJ_bel_fprintf__MT_UX_DEBUG): $(PROJ_SRC_DIR)\backends\bel.fprintf.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\bel.fprintf.c


########################################
# Backend library - 'pantheios.ber.fprintf.a'

$(LIB_BER_FPRINTF_MT_UX): $(OBJ_BER_FPRINTF_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BER_FPRINTF_MT_UX)

$(OBJ_ber_fprintf__MT_UX): $(PROJ_SRC_DIR)\backends\ber.fprintf.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\ber.fprintf.c

$(LIB_BER_FPRINTF_MT_UX_DEBUG): $(OBJ_BER_FPRINTF_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BER_FPRINTF_MT_UX_DEBUG)

$(OBJ_ber_fprintf__MT_UX_DEBUG): $(PROJ_SRC_DIR)\backends\ber.fprintf.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\ber.fprintf.c


########################################
# Backend library - 'pantheios.bec.null.a'

$(LIB_BEC_NULL_MT_UX): $(OBJ_BEC_NULL_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BEC_NULL_MT_UX)

$(OBJ_bec_null__MT_UX): $(PROJ_SRC_DIR)\backends\bec.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\bec.null.c

$(LIB_BEC_NULL_MT_UX_DEBUG): $(OBJ_BEC_NULL_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BEC_NULL_MT_UX_DEBUG)

$(OBJ_bec_null__MT_UX_DEBUG): $(PROJ_SRC_DIR)\backends\bec.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\bec.null.c


########################################
# Backend library - 'pantheios.be.null.a'

$(LIB_BE_NULL_MT_UX): $(OBJ_BE_NULL_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BE_NULL_MT_UX)

$(OBJ_be_null__MT_UX): $(PROJ_SRC_DIR)\backends\be.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\be.null.c

$(LIB_BE_NULL_MT_UX_DEBUG): $(OBJ_BE_NULL_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BE_NULL_MT_UX_DEBUG)

$(OBJ_be_null__MT_UX_DEBUG): $(PROJ_SRC_DIR)\backends\be.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\be.null.c


########################################
# Backend library - 'pantheios.bel.null.a'

$(LIB_BEL_NULL_MT_UX): $(OBJ_BEL_NULL_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BEL_NULL_MT_UX)

$(OBJ_bel_null__MT_UX): $(PROJ_SRC_DIR)\backends\bel.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\bel.null.c

$(LIB_BEL_NULL_MT_UX_DEBUG): $(OBJ_BEL_NULL_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BEL_NULL_MT_UX_DEBUG)

$(OBJ_bel_null__MT_UX_DEBUG): $(PROJ_SRC_DIR)\backends\bel.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\bel.null.c


########################################
# Backend library - 'pantheios.ber.null.a'

$(LIB_BER_NULL_MT_UX): $(OBJ_BER_NULL_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BER_NULL_MT_UX)

$(OBJ_ber_null__MT_UX): $(PROJ_SRC_DIR)\backends\ber.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\ber.null.c

$(LIB_BER_NULL_MT_UX_DEBUG): $(OBJ_BER_NULL_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BER_NULL_MT_UX_DEBUG)

$(OBJ_ber_null__MT_UX_DEBUG): $(PROJ_SRC_DIR)\backends\ber.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\ber.null.c


########################################
# Backend library - 'pantheios.bec.ACE.a'


########################################
# Backend library - 'pantheios.be.ACE.a'


########################################
# Backend library - 'pantheios.bel.ACE.a'


########################################
# Backend library - 'pantheios.ber.ACE.a'


########################################
# Backend library - 'pantheios.bec.syslog.a'

$(LIB_BEC_SYSLOG_MT_UX): $(OBJ_BEC_SYSLOG_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BEC_SYSLOG_MT_UX)

$(OBJ_bec_SYSLOG__MT_UX): $(PROJ_SRC_DIR)\backends\bec.syslog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\bec.syslog.c

$(LIB_BEC_SYSLOG_MT_UX_DEBUG): $(OBJ_BEC_SYSLOG_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BEC_SYSLOG_MT_UX_DEBUG)

$(OBJ_bec_SYSLOG__MT_UX_DEBUG): $(PROJ_SRC_DIR)\backends\bec.syslog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\bec.syslog.c


########################################
# Backend library - 'pantheios.bec.syslog.WithCallback.a'

$(LIB_BEC_SYSLOG_WC_MT_UX): $(OBJ_BEC_SYSLOG_WC_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BEC_SYSLOG_WC_MT_UX)

$(OBJ_bec_SYSLOG_WC__MT_UX): $(PROJ_SRC_DIR)\backends\bec.syslog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -DPANTHEIOS_BE_USE_CALLBACK -Fo$@ $(PROJ_SRC_DIR)\backends\bec.syslog.c

$(LIB_BEC_SYSLOG_WC_MT_UX_DEBUG): $(OBJ_BEC_SYSLOG_WC_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BEC_SYSLOG_WC_MT_UX_DEBUG)

$(OBJ_bec_SYSLOG_WC__MT_UX_DEBUG): $(PROJ_SRC_DIR)\backends\bec.syslog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -DPANTHEIOS_BE_USE_CALLBACK -Fo$@ $(PROJ_SRC_DIR)\backends\bec.syslog.c


########################################
# Backend library - 'pantheios.be.syslog.a'

$(LIB_BE_SYSLOG_MT_UX): $(OBJ_BE_SYSLOG_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BE_SYSLOG_MT_UX)

$(OBJ_be_SYSLOG__MT_UX): $(PROJ_SRC_DIR)\backends\be.syslog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\be.syslog.c

$(LIB_BE_SYSLOG_MT_UX_DEBUG): $(OBJ_BE_SYSLOG_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BE_SYSLOG_MT_UX_DEBUG)

$(OBJ_be_SYSLOG__MT_UX_DEBUG): $(PROJ_SRC_DIR)\backends\be.syslog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\be.syslog.c


########################################
# Backend library - 'pantheios.ber.syslog.a'

$(LIB_BER_SYSLOG_MT_UX): $(OBJ_BER_SYSLOG_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BER_SYSLOG_MT_UX)

$(OBJ_ber_SYSLOG__MT_UX): $(PROJ_SRC_DIR)\backends\ber.syslog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\ber.syslog.c

$(LIB_BER_SYSLOG_MT_UX_DEBUG): $(OBJ_BER_SYSLOG_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_BER_SYSLOG_MT_UX_DEBUG)

$(OBJ_ber_SYSLOG__MT_UX_DEBUG): $(PROJ_SRC_DIR)\backends\ber.syslog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\backends\ber.syslog.c


########################################
# Front-end library - 'pantheios.fe.all.a'

$(LIB_FE_ALL_MT_UX): $(OBJ_FE_ALL_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_FE_ALL_MT_UX)

$(OBJ_fe_all__MT_UX): $(PROJ_SRC_DIR)\frontends\fe.all.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\frontends\fe.all.c

$(LIB_FE_ALL_MT_UX_DEBUG): $(OBJ_FE_ALL_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_FE_ALL_MT_UX_DEBUG)

$(OBJ_fe_all__MT_UX_DEBUG): $(PROJ_SRC_DIR)\frontends\fe.all.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\frontends\fe.all.c

########################################
# Front-end library - 'pantheios.fe.fail.a'

$(LIB_FE_FAIL_MT_UX): $(OBJ_FE_FAIL_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_FE_FAIL_MT_UX)

$(OBJ_fe_fail__MT_UX): $(PROJ_SRC_DIR)\frontends\fe.fail.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\frontends\fe.fail.c

$(LIB_FE_FAIL_MT_UX_DEBUG): $(OBJ_FE_FAIL_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_FE_FAIL_MT_UX_DEBUG)

$(OBJ_fe_fail__MT_UX_DEBUG): $(PROJ_SRC_DIR)\frontends\fe.fail.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\frontends\fe.fail.c

########################################
# Front-end library - 'pantheios.fe.N.a'

$(LIB_FE_N_MT_UX): $(OBJ_FE_N_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_FE_N_MT_UX)

$(OBJ_fe_N__MT_UX): $(PROJ_SRC_DIR)\frontends\fe.N.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\frontends\fe.N.c

$(LIB_FE_N_MT_UX_DEBUG): $(OBJ_FE_N_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_FE_N_MT_UX_DEBUG)

$(OBJ_fe_N__MT_UX_DEBUG): $(PROJ_SRC_DIR)\frontends\fe.N.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\frontends\fe.N.c

########################################
# Front-end library - 'pantheios.fe.null.a'

$(LIB_FE_NULL_MT_UX): $(OBJ_FE_NULL_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_FE_NULL_MT_UX)

$(OBJ_fe_null__MT_UX): $(PROJ_SRC_DIR)\frontends\fe.null.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\frontends\fe.null.c

$(LIB_FE_NULL_MT_UX_DEBUG): $(OBJ_FE_NULL_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_FE_NULL_MT_UX_DEBUG)

$(OBJ_fe_null__MT_UX_DEBUG): $(PROJ_SRC_DIR)\frontends\fe.null.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\frontends\fe.null.c

########################################
# Front-end library - 'pantheios.fe.simple.a'

$(LIB_FE_SIMPLE_MT_UX): $(OBJ_FE_SIMPLE_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_FE_SIMPLE_MT_UX)

$(OBJ_fe_simple__MT_UX): $(PROJ_SRC_DIR)\frontends\fe.simple.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\frontends\fe.simple.c

$(LIB_FE_SIMPLE_MT_UX_DEBUG): $(OBJ_FE_SIMPLE_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_FE_SIMPLE_MT_UX_DEBUG)

$(OBJ_fe_simple__MT_UX_DEBUG): $(PROJ_SRC_DIR)\frontends\fe.simple.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_SRC_DIR)\frontends\fe.simple.c

########################################
# b64 library - 'b64.X.pan.core.a'

$(LIB_B64_MT_UX): $(OBJ_B64_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_B64_MT_UX)

$(OBJ_b64_b64_MT_UX): $(B64_SRC_DIR)\b64.c $(B64_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_B64_ARGS_MT_UX) $(CC_B64_INCLUDES_MT_UX) -Fo$@ $(B64_SRC_DIR)\b64.c

$(LIB_B64_MT_UX_DEBUG): $(OBJ_B64_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_B64_MT_UX_DEBUG)

$(OBJ_b64_b64_MT_UX_DEBUG): $(B64_SRC_DIR)\b64.c $(B64_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_B64_ARGS_MT_UX_DEBUG) $(CC_B64_INCLUDES_MT_UX_DEBUG) -Fo$@ $(B64_SRC_DIR)\b64.c

########################################
# shwild library - 'shwild.X.pan.core.a'

$(LIB_SHWILD_MT_UX): $(OBJ_SHWILD_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_SHWILD_MT_UX)

$(OBJ_shw_api_MT_UX): $(SHWILD_SRC_DIR)\api.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_MT_UX) $(CPPC_SHWILD_INCLUDES_MT_UX) -Fo$@ $(SHWILD_SRC_DIR)\api.cpp
$(OBJ_shw_matches_MT_UX): $(SHWILD_SRC_DIR)\matches.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_MT_UX) $(CPPC_SHWILD_INCLUDES_MT_UX) -Fo$@ $(SHWILD_SRC_DIR)\matches.cpp
$(OBJ_shw_pattern_MT_UX): $(SHWILD_SRC_DIR)\pattern.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_MT_UX) $(CPPC_SHWILD_INCLUDES_MT_UX) -Fo$@ $(SHWILD_SRC_DIR)\pattern.cpp

$(LIB_SHWILD_MT_UX_DEBUG): $(OBJ_SHWILD_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_SHWILD_MT_UX_DEBUG)

$(OBJ_shw_api_MT_UX_DEBUG): $(SHWILD_SRC_DIR)\api.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_MT_UX_DEBUG) $(CPPC_SHWILD_INCLUDES_MT_UX_DEBUG) -Fo$@ $(SHWILD_SRC_DIR)\api.cpp
$(OBJ_shw_matches_MT_UX_DEBUG): $(SHWILD_SRC_DIR)\matches.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_MT_UX_DEBUG) $(CPPC_SHWILD_INCLUDES_MT_UX_DEBUG) -Fo$@ $(SHWILD_SRC_DIR)\matches.cpp
$(OBJ_shw_pattern_MT_UX_DEBUG): $(SHWILD_SRC_DIR)\pattern.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_MT_UX_DEBUG) $(CPPC_SHWILD_INCLUDES_MT_UX_DEBUG) -Fo$@ $(SHWILD_SRC_DIR)\pattern.cpp

########################################
# xTests library - 'xtests.X.pan.core.a'

$(LIB_XTESTS_MT_UX): $(OBJ_XTESTS_MT_UX) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_XTESTS_MT_UX)

$(OBJ_xts_core_MT_UX): $(XTESTS_SRC_DIR)\xtests.core.cpp $(XTESTS_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_XTESTS_ARGS_MT_UX) $(CPPC_XTESTS_INCLUDES_MT_UX) -Fo$@ $(XTESTS_SRC_DIR)\xtests.core.cpp

$(LIB_XTESTS_MT_UX_DEBUG): $(OBJ_XTESTS_MT_UX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -out:$@ $(OBJ_XTESTS_MT_UX_DEBUG)

$(OBJ_xts_core_MT_UX_DEBUG): $(XTESTS_SRC_DIR)\xtests.core.cpp $(XTESTS_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_XTESTS_ARGS_MT_UX_DEBUG) $(CPPC_XTESTS_INCLUDES_MT_UX_DEBUG) -Fo$@ $(XTESTS_SRC_DIR)\xtests.core.cpp

##################################################
# Examples

#  object files

$(OBJ_EX_CPP_0_MT_UX):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.101\example.cpp.101.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.101\example.cpp.101.cpp
$(OBJ_EX_CPP_1_MT_UX):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.strings\example.cpp.strings.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.strings\example.cpp.strings.cpp
$(OBJ_EX_CPP_2_MT_UX):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.integer\example.cpp.integer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.integer\example.cpp.integer.cpp
$(OBJ_EX_CPP_3_MT_UX):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pointer\example.cpp.pointer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pointer\example.cpp.pointer.cpp
$(OBJ_EX_CPP_4_MT_UX):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.real\example.cpp.real.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.real\example.cpp.real.cpp
$(OBJ_EX_CPP_5_MT_UX):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.blob\example.cpp.blob.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.blob\example.cpp.blob.cpp
$(OBJ_EX_CPP_6_MT_UX):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hetero1\example.cpp.hetero1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hetero1\example.cpp.hetero1.cpp
$(OBJ_EX_CPP_7_MT_UX):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.character\example.cpp.character.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.character\example.cpp.character.cpp
$(OBJ_EX_CPP_8_MT_UX):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.implicit_link_1\example.cpp.implicit_link_1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.implicit_link_1\example.cpp.implicit_link_1.cpp
$(OBJ_EX_CPP_9_MT_UX):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_severity_levels\example.cpp.custom_severity_levels.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_severity_levels\example.cpp.custom_severity_levels.cpp
$(OBJ_EX_CPP_11_MT_UX):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_fe\example.cpp.custom_fe.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_fe\example.cpp.custom_fe.cpp
$(OBJ_EX_CPP_12_MT_UX):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_type_1\example.cpp.custom_type_1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_type_1\example.cpp.custom_type_1.cpp
$(OBJ_EX_CPP_13_MT_UX):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.process_id\example.cpp.process_id.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.process_id\example.cpp.process_id.cpp
$(OBJ_EX_CPP_14_MT_UX):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.thread_id\example.cpp.thread_id.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.thread_id\example.cpp.thread_id.cpp
$(OBJ_EX_CPP_15_MT_UX):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.args\example.cpp.args.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.args\example.cpp.args.cpp
$(OBJ_EX_CPP_16_MT_UX):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.file\example.cpp.file.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.file\example.cpp.file.cpp
$(OBJ_EX_CPP_18_MT_UX):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.highres\example.cpp.highres.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.highres\example.cpp.highres.cpp
$(OBJ_EX_CPP_19_MT_UX):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.lowres\example.cpp.lowres.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.lowres\example.cpp.lowres.cpp
$(OBJ_EX_CPP_20_MT_UX):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.b64\example.cpp.b64.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.b64\example.cpp.b64.cpp
$(OBJ_EX_CPP_21_MT_UX):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.api.no_namespace\example.cpp.api.no_namespace.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.api.no_namespace\example.cpp.api.no_namespace.cpp
$(OBJ_EX_CPP_23_MT_UX):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.1\example.cpp.mx.1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.1\example.cpp.mx.1.cpp
$(OBJ_EX_CPP_24_MT_UX):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.2\example.cpp.mx.2.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.2\example.cpp.mx.2.cpp
$(OBJ_EX_CPP_25_MT_UX):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hex_ptr\example.cpp.hex_ptr.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hex_ptr\example.cpp.hex_ptr.cpp
$(OBJ_EX_CPP_26_MT_UX):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.assert\example.cpp.assert.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.assert\example.cpp.assert.cpp
$(OBJ_EX_CPP_27_MT_UX):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pad\example.cpp.pad.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pad\example.cpp.pad.cpp
$(OBJ_EX_C_0_MT_UX):	$(PROJ_EXAMPLES_DIR)\c\example.c.101\example.c.101.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\c\example.c.101\example.c.101.c
$(OBJ_EX_C_1_MT_UX):	$(PROJ_EXAMPLES_DIR)\c\example.c.log_n\example.c.log_n.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\c\example.c.log_n\example.c.log_n.c
$(OBJ_EX_C_2_MT_UX):	$(PROJ_EXAMPLES_DIR)\c\example.c.core.pantheios_logprintf\example.c.core.pantheios_logprintf.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\c\example.c.core.pantheios_logprintf\example.c.core.pantheios_logprintf.c
$(OBJ_EX_C_3_MT_UX):	$(PROJ_EXAMPLES_DIR)\c\example.c.N\example.c.N.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\c\example.c.N\example.c.N.c
$(OBJ_EX_C_4_MT_UX):	$(PROJ_EXAMPLES_DIR)\c\example.c.gethostname\example.c.gethostname.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\c\example.c.gethostname\example.c.gethostname.c
$(OBJ_EX_C_5_MT_UX):	$(PROJ_EXAMPLES_DIR)\c\example.c.getcurrenttime\example.c.getcurrenttime.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\c\example.c.getcurrenttime\example.c.getcurrenttime.c
$(OBJ_EX_C_6_MT_UX):	$(PROJ_EXAMPLES_DIR)\c\example.c.assert\example.c.assert.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\c\example.c.assert\example.c.assert.c
$(OBJ_EX_C_7_MT_UX):	$(PROJ_EXAMPLES_DIR)\c\example.c.extended_severity\example.c.extended_severity.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\c\example.c.extended_severity\example.c.extended_severity.c

$(OBJ_EX_CPP_0_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.101\example.cpp.101.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.101\example.cpp.101.cpp
$(OBJ_EX_CPP_1_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.strings\example.cpp.strings.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.strings\example.cpp.strings.cpp
$(OBJ_EX_CPP_2_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.integer\example.cpp.integer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.integer\example.cpp.integer.cpp
$(OBJ_EX_CPP_3_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pointer\example.cpp.pointer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pointer\example.cpp.pointer.cpp
$(OBJ_EX_CPP_4_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.real\example.cpp.real.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.real\example.cpp.real.cpp
$(OBJ_EX_CPP_5_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.blob\example.cpp.blob.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.blob\example.cpp.blob.cpp
$(OBJ_EX_CPP_6_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hetero1\example.cpp.hetero1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hetero1\example.cpp.hetero1.cpp
$(OBJ_EX_CPP_7_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.character\example.cpp.character.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.character\example.cpp.character.cpp
$(OBJ_EX_CPP_8_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.implicit_link_1\example.cpp.implicit_link_1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.implicit_link_1\example.cpp.implicit_link_1.cpp
$(OBJ_EX_CPP_9_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_severity_levels\example.cpp.custom_severity_levels.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_severity_levels\example.cpp.custom_severity_levels.cpp
$(OBJ_EX_CPP_11_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_fe\example.cpp.custom_fe.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_fe\example.cpp.custom_fe.cpp
$(OBJ_EX_CPP_12_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_type_1\example.cpp.custom_type_1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_type_1\example.cpp.custom_type_1.cpp
$(OBJ_EX_CPP_13_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.process_id\example.cpp.process_id.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.process_id\example.cpp.process_id.cpp
$(OBJ_EX_CPP_14_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.thread_id\example.cpp.thread_id.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.thread_id\example.cpp.thread_id.cpp
$(OBJ_EX_CPP_15_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.args\example.cpp.args.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.args\example.cpp.args.cpp
$(OBJ_EX_CPP_16_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.file\example.cpp.file.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.file\example.cpp.file.cpp
$(OBJ_EX_CPP_18_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.highres\example.cpp.highres.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.highres\example.cpp.highres.cpp
$(OBJ_EX_CPP_19_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.lowres\example.cpp.lowres.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.lowres\example.cpp.lowres.cpp
$(OBJ_EX_CPP_20_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.b64\example.cpp.b64.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.b64\example.cpp.b64.cpp
$(OBJ_EX_CPP_21_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.api.no_namespace\example.cpp.api.no_namespace.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.api.no_namespace\example.cpp.api.no_namespace.cpp
$(OBJ_EX_CPP_23_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.1\example.cpp.mx.1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.1\example.cpp.mx.1.cpp
$(OBJ_EX_CPP_24_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.2\example.cpp.mx.2.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.2\example.cpp.mx.2.cpp
$(OBJ_EX_CPP_25_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hex_ptr\example.cpp.hex_ptr.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hex_ptr\example.cpp.hex_ptr.cpp
$(OBJ_EX_CPP_26_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.assert\example.cpp.assert.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.assert\example.cpp.assert.cpp
$(OBJ_EX_CPP_27_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pad\example.cpp.pad.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pad\example.cpp.pad.cpp
$(OBJ_EX_C_0_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\c\example.c.101\example.c.101.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\c\example.c.101\example.c.101.c
$(OBJ_EX_C_1_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\c\example.c.log_n\example.c.log_n.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\c\example.c.log_n\example.c.log_n.c
$(OBJ_EX_C_2_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\c\example.c.core.pantheios_logprintf\example.c.core.pantheios_logprintf.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\c\example.c.core.pantheios_logprintf\example.c.core.pantheios_logprintf.c
$(OBJ_EX_C_3_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\c\example.c.N\example.c.N.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\c\example.c.N\example.c.N.c
$(OBJ_EX_C_4_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\c\example.c.gethostname\example.c.gethostname.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\c\example.c.gethostname\example.c.gethostname.c
$(OBJ_EX_C_5_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\c\example.c.getcurrenttime\example.c.getcurrenttime.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\c\example.c.getcurrenttime\example.c.getcurrenttime.c
$(OBJ_EX_C_6_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\c\example.c.assert\example.c.assert.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\c\example.c.assert\example.c.assert.c
$(OBJ_EX_C_7_MT_UX_DEBUG):	$(PROJ_EXAMPLES_DIR)\c\example.c.extended_severity\example.c.extended_severity.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_EXAMPLES_DIR)\c\example.c.extended_severity\example.c.extended_severity.c


# executables

$(EX_CPP_0_MT_UX): \
			$(OBJ_EX_CPP_0_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_ALL_MT_UX)\
			$(LIB_BE_FPRINTF_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_CPP_0_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_ALL_MT_UX)\
		$(LIB_BE_FPRINTF_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_CPP_1_MT_UX): \
			$(OBJ_EX_CPP_1_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_FPRINTF_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_CPP_1_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_FPRINTF_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_CPP_2_MT_UX): \
			$(OBJ_EX_CPP_2_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_FPRINTF_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_CPP_2_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_FPRINTF_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_CPP_3_MT_UX): \
			$(OBJ_EX_CPP_3_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_FPRINTF_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_CPP_3_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_FPRINTF_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_CPP_4_MT_UX): \
			$(OBJ_EX_CPP_4_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_FPRINTF_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_CPP_4_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_FPRINTF_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_CPP_5_MT_UX): \
			$(OBJ_EX_CPP_5_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_FPRINTF_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_CPP_5_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_FPRINTF_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_CPP_6_MT_UX): \
			$(OBJ_EX_CPP_6_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_FPRINTF_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_CPP_6_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_FPRINTF_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_CPP_7_MT_UX): \
			$(OBJ_EX_CPP_7_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_FPRINTF_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_CPP_7_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_FPRINTF_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_CPP_8_MT_UX): \
			$(OBJ_EX_CPP_8_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_FPRINTF_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_CPP_8_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_FPRINTF_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_CPP_9_MT_UX): \
			$(OBJ_EX_CPP_9_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_FPRINTF_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_CPP_9_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_FPRINTF_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)


$(EX_CPP_11_MT_UX): \
			$(OBJ_EX_CPP_11_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_FPRINTF_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_CPP_11_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_FPRINTF_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_CPP_12_MT_UX): \
			$(OBJ_EX_CPP_12_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_FPRINTF_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_CPP_12_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_FPRINTF_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_CPP_13_MT_UX): \
			$(OBJ_EX_CPP_13_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_FPRINTF_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_CPP_13_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_FPRINTF_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_CPP_14_MT_UX): \
			$(OBJ_EX_CPP_14_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_FPRINTF_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_CPP_14_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_FPRINTF_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_CPP_15_MT_UX): \
			$(OBJ_EX_CPP_15_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_FPRINTF_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_CPP_15_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_FPRINTF_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_CPP_16_MT_UX): \
			$(OBJ_EX_CPP_16_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_LRSPLIT_MT_UX)\
			$(LIB_BEL_FILE_MT_UX)\
			$(LIB_BER_FILE_MT_UX)\
			$(LIB_BEC_FILE_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_CPP_16_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_LRSPLIT_MT_UX)\
		$(LIB_BEL_FILE_MT_UX)\
		$(LIB_BER_FILE_MT_UX)\
		$(LIB_BEC_FILE_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_CPP_18_MT_UX): \
			$(OBJ_EX_CPP_18_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_FPRINTF_MT_UX)\
			$(LIB_BEC_FPRINTF_WC_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_CPP_18_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_FPRINTF_MT_UX)\
		$(LIB_BEC_FPRINTF_WC_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_CPP_19_MT_UX): \
			$(OBJ_EX_CPP_19_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_FPRINTF_MT_UX)\
			$(LIB_BEC_FPRINTF_WC_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_CPP_19_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_FPRINTF_MT_UX)\
		$(LIB_BEC_FPRINTF_WC_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_CPP_20_MT_UX): \
			$(OBJ_EX_CPP_20_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_FPRINTF_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(LIB_B64_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_CPP_20_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_FPRINTF_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_B64_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_CPP_21_MT_UX): \
			$(OBJ_EX_CPP_21_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_FPRINTF_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(LIB_B64_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_CPP_21_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_FPRINTF_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_B64_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)


$(EX_CPP_23_MT_UX): \
			$(OBJ_EX_CPP_23_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_N_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(LIB_BEC_SYSLOG_MT_UX)\
			$(LIB_B64_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_CPP_23_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_N_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_BEC_SYSLOG_MT_UX)\
		$(LIB_B64_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_CPP_24_MT_UX): \
			$(OBJ_EX_CPP_24_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_N_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(LIB_BEC_SYSLOG_MT_UX)\
			$(LIB_B64_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_CPP_24_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_N_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_BEC_SYSLOG_MT_UX)\
		$(LIB_B64_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_CPP_25_MT_UX): \
			$(OBJ_EX_CPP_25_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_FPRINTF_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_CPP_25_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_FPRINTF_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_CPP_26_MT_UX): \
			$(OBJ_EX_CPP_26_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_FPRINTF_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_CPP_26_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_FPRINTF_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_CPP_27_MT_UX): \
			$(OBJ_EX_CPP_27_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_FPRINTF_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_CPP_27_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_FPRINTF_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_C_0_MT_UX): \
			$(OBJ_EX_C_0_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_ALL_MT_UX)\
			$(LIB_BE_FPRINTF_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_C_0_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_ALL_MT_UX)\
		$(LIB_BE_FPRINTF_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_C_1_MT_UX): \
			$(OBJ_EX_C_1_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_FPRINTF_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_C_1_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_FPRINTF_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_C_2_MT_UX): \
			$(OBJ_EX_C_2_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_FPRINTF_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_C_2_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_FPRINTF_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_C_3_MT_UX): \
			$(OBJ_EX_C_3_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_N_MT_UX)\
			$(LIB_BE_N_MT_UX)\
			$(LIB_BEC_FILE_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(LIB_BEC_NULL_MT_UX)\
			$(LIB_BEC_SYSLOG_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_C_3_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_N_MT_UX)\
		$(LIB_BE_N_MT_UX)\
		$(LIB_BEC_FILE_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_BEC_NULL_MT_UX)\
		$(LIB_BEC_SYSLOG_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_C_4_MT_UX): \
			$(OBJ_EX_C_4_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_C_4_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_C_5_MT_UX): \
			$(OBJ_EX_C_5_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_C_5_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_C_6_MT_UX): \
			$(OBJ_EX_C_6_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_FPRINTF_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_C_6_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_FPRINTF_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_C_7_MT_UX): \
			$(OBJ_EX_C_7_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_FPRINTF_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_EX_C_7_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_FPRINTF_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(EX_CPP_0_MT_UX_DEBUG): \
			$(OBJ_EX_CPP_0_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_ALL_MT_UX_DEBUG)\
			$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_CPP_0_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_ALL_MT_UX_DEBUG)\
		$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(EX_CPP_1_MT_UX_DEBUG): \
			$(OBJ_EX_CPP_1_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_CPP_1_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(EX_CPP_2_MT_UX_DEBUG): \
			$(OBJ_EX_CPP_2_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_CPP_2_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(EX_CPP_3_MT_UX_DEBUG): \
			$(OBJ_EX_CPP_3_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_CPP_3_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(EX_CPP_4_MT_UX_DEBUG): \
			$(OBJ_EX_CPP_4_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_CPP_4_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(EX_CPP_5_MT_UX_DEBUG): \
			$(OBJ_EX_CPP_5_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_CPP_5_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(EX_CPP_6_MT_UX_DEBUG): \
			$(OBJ_EX_CPP_6_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_CPP_6_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(EX_CPP_7_MT_UX_DEBUG): \
			$(OBJ_EX_CPP_7_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_CPP_7_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(EX_CPP_8_MT_UX_DEBUG): \
			$(OBJ_EX_CPP_8_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_CPP_8_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(EX_CPP_9_MT_UX_DEBUG): \
			$(OBJ_EX_CPP_9_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_CPP_9_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)


$(EX_CPP_11_MT_UX_DEBUG): \
			$(OBJ_EX_CPP_11_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_CPP_11_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(EX_CPP_12_MT_UX_DEBUG): \
			$(OBJ_EX_CPP_12_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_CPP_12_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(EX_CPP_13_MT_UX_DEBUG): \
			$(OBJ_EX_CPP_13_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_CPP_13_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(EX_CPP_14_MT_UX_DEBUG): \
			$(OBJ_EX_CPP_14_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_CPP_14_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(EX_CPP_15_MT_UX_DEBUG): \
			$(OBJ_EX_CPP_15_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_CPP_15_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(EX_CPP_16_MT_UX_DEBUG): \
			$(OBJ_EX_CPP_16_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_LRSPLIT_MT_UX_DEBUG)\
			$(LIB_BEL_FILE_MT_UX_DEBUG)\
			$(LIB_BER_FILE_MT_UX_DEBUG)\
			$(LIB_BEC_FILE_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_CPP_16_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_LRSPLIT_MT_UX_DEBUG)\
		$(LIB_BEL_FILE_MT_UX_DEBUG)\
		$(LIB_BER_FILE_MT_UX_DEBUG)\
		$(LIB_BEC_FILE_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(EX_CPP_18_MT_UX_DEBUG): \
			$(OBJ_EX_CPP_18_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_WC_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_CPP_18_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_WC_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(EX_CPP_19_MT_UX_DEBUG): \
			$(OBJ_EX_CPP_19_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_WC_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_CPP_19_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_WC_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(EX_CPP_20_MT_UX_DEBUG): \
			$(OBJ_EX_CPP_20_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(LIB_B64_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_CPP_20_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_B64_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(EX_CPP_21_MT_UX_DEBUG): \
			$(OBJ_EX_CPP_21_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(LIB_B64_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_CPP_21_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_B64_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)


$(EX_CPP_23_MT_UX_DEBUG): \
			$(OBJ_EX_CPP_23_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_N_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_SYSLOG_MT_UX_DEBUG)\
			$(LIB_B64_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_CPP_23_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_N_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_SYSLOG_MT_UX_DEBUG)\
		$(LIB_B64_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(EX_CPP_24_MT_UX_DEBUG): \
			$(OBJ_EX_CPP_24_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_N_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_SYSLOG_MT_UX_DEBUG)\
			$(LIB_B64_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_CPP_24_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_N_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_SYSLOG_MT_UX_DEBUG)\
		$(LIB_B64_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(EX_CPP_25_MT_UX_DEBUG): \
			$(OBJ_EX_CPP_25_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_CPP_25_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(EX_CPP_26_MT_UX_DEBUG): \
			$(OBJ_EX_CPP_26_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_CPP_26_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(EX_CPP_27_MT_UX_DEBUG): \
			$(OBJ_EX_CPP_27_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_CPP_27_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(EX_C_0_MT_UX_DEBUG): \
			$(OBJ_EX_C_0_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_ALL_MT_UX_DEBUG)\
			$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_C_0_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_ALL_MT_UX_DEBUG)\
		$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(EX_C_1_MT_UX_DEBUG): \
			$(OBJ_EX_C_1_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_C_1_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(EX_C_2_MT_UX_DEBUG): \
			$(OBJ_EX_C_2_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_C_2_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(EX_C_3_MT_UX_DEBUG): \
			$(OBJ_EX_C_3_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_N_MT_UX_DEBUG)\
			$(LIB_BE_N_MT_UX_DEBUG)\
			$(LIB_BEC_FILE_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_NULL_MT_UX_DEBUG)\
			$(LIB_BEC_SYSLOG_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_C_3_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_N_MT_UX_DEBUG)\
		$(LIB_BE_N_MT_UX_DEBUG)\
		$(LIB_BEC_FILE_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_NULL_MT_UX_DEBUG)\
		$(LIB_BEC_SYSLOG_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(EX_C_4_MT_UX_DEBUG): \
			$(OBJ_EX_C_4_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_C_4_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(EX_C_5_MT_UX_DEBUG): \
			$(OBJ_EX_C_5_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_C_5_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(EX_C_6_MT_UX_DEBUG): \
			$(OBJ_EX_C_6_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_C_6_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(EX_C_7_MT_UX_DEBUG): \
			$(OBJ_EX_C_7_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_EX_C_7_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)


##################################################
# Tests

##############################
# Component Tests

$(TARG_TEST_COMP_core_initseq_MT_UX):	\
			$(OBJ_TEST_COMP_core_initseq_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_COMP_core_initseq_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_COMP_core_initseq_MT_UX):	$(PROJ_TEST_COMPONENT_DIR)\test.component.core.initialisation_sequence\test.component.core.initialisation_sequence.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.core.initialisation_sequence\test.component.core.initialisation_sequence.c

$(TARG_TEST_COMP_core_initseq_MT_UX_DEBUG):	\
			$(OBJ_TEST_COMP_core_initseq_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_COMP_core_initseq_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_COMP_core_initseq_MT_UX_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.core.initialisation_sequence\test.component.core.initialisation_sequence.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.core.initialisation_sequence\test.component.core.initialisation_sequence.c

$(TARG_TEST_COMP_custsev_MT_UX):	\
			$(OBJ_TEST_COMP_custsev_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_ALL_MT_UX)\
			$(LIB_BE_TEST_MT_UX)\
			$(LIB_BEC_TEST_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_COMP_custsev_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_ALL_MT_UX)\
		$(LIB_BE_TEST_MT_UX)\
		$(LIB_BEC_TEST_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_COMP_custsev_MT_UX):	$(PROJ_TEST_COMPONENT_DIR)\test.component.custom_severity\test.component.custom_severity.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.custom_severity\test.component.custom_severity.cpp

$(TARG_TEST_COMP_custsev_MT_UX_DEBUG):	\
			$(OBJ_TEST_COMP_custsev_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_ALL_MT_UX_DEBUG)\
			$(LIB_BE_TEST_MT_UX_DEBUG)\
			$(LIB_BEC_TEST_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_COMP_custsev_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_ALL_MT_UX_DEBUG)\
		$(LIB_BE_TEST_MT_UX_DEBUG)\
		$(LIB_BEC_TEST_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_COMP_custsev_MT_UX_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.custom_severity\test.component.custom_severity.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.custom_severity\test.component.custom_severity.cpp

$(TARG_TEST_COMP_ins_args_MT_UX):	\
			$(OBJ_TEST_COMP_ins_args_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_ALL_MT_UX)\
			$(LIB_BE_TEST_MT_UX)\
			$(LIB_BEC_TEST_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_COMP_ins_args_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_ALL_MT_UX)\
		$(LIB_BE_TEST_MT_UX)\
		$(LIB_BEC_TEST_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_COMP_ins_args_MT_UX):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.args\test.component.inserters.args.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.args\test.component.inserters.args.cpp

$(TARG_TEST_COMP_ins_args_MT_UX_DEBUG):	\
			$(OBJ_TEST_COMP_ins_args_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_ALL_MT_UX_DEBUG)\
			$(LIB_BE_TEST_MT_UX_DEBUG)\
			$(LIB_BEC_TEST_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_COMP_ins_args_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_ALL_MT_UX_DEBUG)\
		$(LIB_BE_TEST_MT_UX_DEBUG)\
		$(LIB_BEC_TEST_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_COMP_ins_args_MT_UX_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.args\test.component.inserters.args.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.args\test.component.inserters.args.cpp

$(TARG_TEST_COMP_ins_b64_MT_UX):	\
			$(OBJ_TEST_COMP_ins_b64_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_ALL_MT_UX)\
			$(LIB_BE_TEST_MT_UX)\
			$(LIB_BEC_TEST_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(LIB_B64_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_COMP_ins_b64_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_ALL_MT_UX)\
		$(LIB_BE_TEST_MT_UX)\
		$(LIB_BEC_TEST_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_B64_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_COMP_ins_b64_MT_UX):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.b64\test.component.inserters.b64.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.b64\test.component.inserters.b64.cpp

$(TARG_TEST_COMP_ins_b64_MT_UX_DEBUG):	\
			$(OBJ_TEST_COMP_ins_b64_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_ALL_MT_UX_DEBUG)\
			$(LIB_BE_TEST_MT_UX_DEBUG)\
			$(LIB_BEC_TEST_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(LIB_B64_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_COMP_ins_b64_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_ALL_MT_UX_DEBUG)\
		$(LIB_BE_TEST_MT_UX_DEBUG)\
		$(LIB_BEC_TEST_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_B64_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_COMP_ins_b64_MT_UX_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.b64\test.component.inserters.b64.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.b64\test.component.inserters.b64.cpp

$(TARG_TEST_COMP_ins_bool_MT_UX):	\
			$(OBJ_TEST_COMP_ins_bool_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_ALL_MT_UX)\
			$(LIB_BE_TEST_MT_UX)\
			$(LIB_BEC_TEST_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_COMP_ins_bool_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_ALL_MT_UX)\
		$(LIB_BE_TEST_MT_UX)\
		$(LIB_BEC_TEST_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_COMP_ins_bool_MT_UX):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.boolean\test.component.inserters.boolean.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.boolean\test.component.inserters.boolean.cpp

$(TARG_TEST_COMP_ins_bool_MT_UX_DEBUG):	\
			$(OBJ_TEST_COMP_ins_bool_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_ALL_MT_UX_DEBUG)\
			$(LIB_BE_TEST_MT_UX_DEBUG)\
			$(LIB_BEC_TEST_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_COMP_ins_bool_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_ALL_MT_UX_DEBUG)\
		$(LIB_BE_TEST_MT_UX_DEBUG)\
		$(LIB_BEC_TEST_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_COMP_ins_bool_MT_UX_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.boolean\test.component.inserters.boolean.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.boolean\test.component.inserters.boolean.cpp

$(TARG_TEST_COMP_ins_hostid_MT_UX):	\
			$(OBJ_TEST_COMP_ins_hostid_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_ALL_MT_UX)\
			$(LIB_BE_TEST_MT_UX)\
			$(LIB_BEC_TEST_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_COMP_ins_hostid_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_ALL_MT_UX)\
		$(LIB_BE_TEST_MT_UX)\
		$(LIB_BEC_TEST_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_COMP_ins_hostid_MT_UX):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.hostId\test.component.inserters.hostId.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.hostId\test.component.inserters.hostId.cpp

$(TARG_TEST_COMP_ins_hostid_MT_UX_DEBUG):	\
			$(OBJ_TEST_COMP_ins_hostid_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_ALL_MT_UX_DEBUG)\
			$(LIB_BE_TEST_MT_UX_DEBUG)\
			$(LIB_BEC_TEST_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_COMP_ins_hostid_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_ALL_MT_UX_DEBUG)\
		$(LIB_BE_TEST_MT_UX_DEBUG)\
		$(LIB_BEC_TEST_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_COMP_ins_hostid_MT_UX_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.hostId\test.component.inserters.hostId.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.hostId\test.component.inserters.hostId.cpp

$(TARG_TEST_COMP_ins_int_MT_UX):	\
			$(OBJ_TEST_COMP_ins_int_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_ALL_MT_UX)\
			$(LIB_BE_TEST_MT_UX)\
			$(LIB_BEC_TEST_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_COMP_ins_int_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_ALL_MT_UX)\
		$(LIB_BE_TEST_MT_UX)\
		$(LIB_BEC_TEST_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_COMP_ins_int_MT_UX):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.integer\test.component.inserters.integer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.integer\test.component.inserters.integer.cpp

$(TARG_TEST_COMP_ins_int_MT_UX_DEBUG):	\
			$(OBJ_TEST_COMP_ins_int_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_ALL_MT_UX_DEBUG)\
			$(LIB_BE_TEST_MT_UX_DEBUG)\
			$(LIB_BEC_TEST_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_COMP_ins_int_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_ALL_MT_UX_DEBUG)\
		$(LIB_BE_TEST_MT_UX_DEBUG)\
		$(LIB_BEC_TEST_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_COMP_ins_int_MT_UX_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.integer\test.component.inserters.integer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.integer\test.component.inserters.integer.cpp

$(TARG_TEST_COMP_ins_pad_MT_UX):	\
			$(OBJ_TEST_COMP_ins_pad_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_ALL_MT_UX)\
			$(LIB_BE_TEST_MT_UX)\
			$(LIB_BEC_TEST_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_COMP_ins_pad_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_ALL_MT_UX)\
		$(LIB_BE_TEST_MT_UX)\
		$(LIB_BEC_TEST_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_COMP_ins_pad_MT_UX):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pad\test.component.inserters.pad.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pad\test.component.inserters.pad.cpp

$(TARG_TEST_COMP_ins_pad_MT_UX_DEBUG):	\
			$(OBJ_TEST_COMP_ins_pad_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_ALL_MT_UX_DEBUG)\
			$(LIB_BE_TEST_MT_UX_DEBUG)\
			$(LIB_BEC_TEST_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_COMP_ins_pad_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_ALL_MT_UX_DEBUG)\
		$(LIB_BE_TEST_MT_UX_DEBUG)\
		$(LIB_BEC_TEST_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_COMP_ins_pad_MT_UX_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pad\test.component.inserters.pad.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pad\test.component.inserters.pad.cpp

$(TARG_TEST_COMP_ins_ptr_MT_UX):	\
			$(OBJ_TEST_COMP_ins_ptr_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_ALL_MT_UX)\
			$(LIB_BE_TEST_MT_UX)\
			$(LIB_BEC_TEST_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_COMP_ins_ptr_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_ALL_MT_UX)\
		$(LIB_BE_TEST_MT_UX)\
		$(LIB_BEC_TEST_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_COMP_ins_ptr_MT_UX):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pointer\test.component.inserters.pointer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pointer\test.component.inserters.pointer.cpp

$(TARG_TEST_COMP_ins_ptr_MT_UX_DEBUG):	\
			$(OBJ_TEST_COMP_ins_ptr_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_ALL_MT_UX_DEBUG)\
			$(LIB_BE_TEST_MT_UX_DEBUG)\
			$(LIB_BEC_TEST_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_COMP_ins_ptr_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_ALL_MT_UX_DEBUG)\
		$(LIB_BE_TEST_MT_UX_DEBUG)\
		$(LIB_BEC_TEST_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_COMP_ins_ptr_MT_UX_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pointer\test.component.inserters.pointer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pointer\test.component.inserters.pointer.cpp

$(TARG_TEST_COMP_ins_prid_MT_UX):	\
			$(OBJ_TEST_COMP_ins_prid_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_ALL_MT_UX)\
			$(LIB_BE_TEST_MT_UX)\
			$(LIB_BEC_TEST_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_COMP_ins_prid_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_ALL_MT_UX)\
		$(LIB_BE_TEST_MT_UX)\
		$(LIB_BEC_TEST_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_COMP_ins_prid_MT_UX):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.processId\test.component.inserters.processId.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.processId\test.component.inserters.processId.cpp

$(TARG_TEST_COMP_ins_prid_MT_UX_DEBUG):	\
			$(OBJ_TEST_COMP_ins_prid_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_ALL_MT_UX_DEBUG)\
			$(LIB_BE_TEST_MT_UX_DEBUG)\
			$(LIB_BEC_TEST_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_COMP_ins_prid_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_ALL_MT_UX_DEBUG)\
		$(LIB_BE_TEST_MT_UX_DEBUG)\
		$(LIB_BEC_TEST_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_COMP_ins_prid_MT_UX_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.processId\test.component.inserters.processId.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.processId\test.component.inserters.processId.cpp

$(TARG_TEST_COMP_ins_real_MT_UX):	\
			$(OBJ_TEST_COMP_ins_real_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_ALL_MT_UX)\
			$(LIB_BE_TEST_MT_UX)\
			$(LIB_BEC_TEST_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_COMP_ins_real_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_ALL_MT_UX)\
		$(LIB_BE_TEST_MT_UX)\
		$(LIB_BEC_TEST_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_COMP_ins_real_MT_UX):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.real\test.component.inserters.real.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.real\test.component.inserters.real.cpp

$(TARG_TEST_COMP_ins_real_MT_UX_DEBUG):	\
			$(OBJ_TEST_COMP_ins_real_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_ALL_MT_UX_DEBUG)\
			$(LIB_BE_TEST_MT_UX_DEBUG)\
			$(LIB_BEC_TEST_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_COMP_ins_real_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_ALL_MT_UX_DEBUG)\
		$(LIB_BE_TEST_MT_UX_DEBUG)\
		$(LIB_BEC_TEST_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_COMP_ins_real_MT_UX_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.real\test.component.inserters.real.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.real\test.component.inserters.real.cpp

$(TARG_TEST_COMP_ins_slice_MT_UX):	\
			$(OBJ_TEST_COMP_ins_slice_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_ALL_MT_UX)\
			$(LIB_BE_TEST_MT_UX)\
			$(LIB_BEC_TEST_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_COMP_ins_slice_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_ALL_MT_UX)\
		$(LIB_BE_TEST_MT_UX)\
		$(LIB_BEC_TEST_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_COMP_ins_slice_MT_UX):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.slice\test.component.inserters.slice.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.slice\test.component.inserters.slice.cpp

$(TARG_TEST_COMP_ins_slice_MT_UX_DEBUG):	\
			$(OBJ_TEST_COMP_ins_slice_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_ALL_MT_UX_DEBUG)\
			$(LIB_BE_TEST_MT_UX_DEBUG)\
			$(LIB_BEC_TEST_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_COMP_ins_slice_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_ALL_MT_UX_DEBUG)\
		$(LIB_BE_TEST_MT_UX_DEBUG)\
		$(LIB_BEC_TEST_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_COMP_ins_slice_MT_UX_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.slice\test.component.inserters.slice.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.slice\test.component.inserters.slice.cpp

$(TARG_TEST_COMP_ins_thrid_MT_UX):	\
			$(OBJ_TEST_COMP_ins_thrid_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_ALL_MT_UX)\
			$(LIB_BE_TEST_MT_UX)\
			$(LIB_BEC_TEST_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_COMP_ins_thrid_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_ALL_MT_UX)\
		$(LIB_BE_TEST_MT_UX)\
		$(LIB_BEC_TEST_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_COMP_ins_thrid_MT_UX):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.threadId\test.component.inserters.threadId.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.threadId\test.component.inserters.threadId.cpp

$(TARG_TEST_COMP_ins_thrid_MT_UX_DEBUG):	\
			$(OBJ_TEST_COMP_ins_thrid_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_ALL_MT_UX_DEBUG)\
			$(LIB_BE_TEST_MT_UX_DEBUG)\
			$(LIB_BEC_TEST_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_COMP_ins_thrid_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_ALL_MT_UX_DEBUG)\
		$(LIB_BE_TEST_MT_UX_DEBUG)\
		$(LIB_BEC_TEST_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_COMP_ins_thrid_MT_UX_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.threadId\test.component.inserters.threadId.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.threadId\test.component.inserters.threadId.cpp

$(TARG_TEST_COMP_ins_w2m_MT_UX):	\
			$(OBJ_TEST_COMP_ins_w2m_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_ALL_MT_UX)\
			$(LIB_BE_TEST_MT_UX)\
			$(LIB_BEC_TEST_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_COMP_ins_w2m_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_ALL_MT_UX)\
		$(LIB_BE_TEST_MT_UX)\
		$(LIB_BEC_TEST_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_COMP_ins_w2m_MT_UX):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.w2m\test.component.inserters.w2m.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.w2m\test.component.inserters.w2m.cpp

$(TARG_TEST_COMP_ins_w2m_MT_UX_DEBUG):	\
			$(OBJ_TEST_COMP_ins_w2m_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_ALL_MT_UX_DEBUG)\
			$(LIB_BE_TEST_MT_UX_DEBUG)\
			$(LIB_BEC_TEST_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_COMP_ins_w2m_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_ALL_MT_UX_DEBUG)\
		$(LIB_BE_TEST_MT_UX_DEBUG)\
		$(LIB_BEC_TEST_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_COMP_ins_w2m_MT_UX_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.w2m\test.component.inserters.w2m.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.w2m\test.component.inserters.w2m.cpp

$(TARG_TEST_COMP_log_1_MT_UX):	\
			$(OBJ_TEST_COMP_log_1_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_ALL_MT_UX)\
			$(LIB_BE_TEST_MT_UX)\
			$(LIB_BEC_TEST_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_COMP_log_1_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_ALL_MT_UX)\
		$(LIB_BE_TEST_MT_UX)\
		$(LIB_BEC_TEST_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_COMP_log_1_MT_UX):	$(PROJ_TEST_COMPONENT_DIR)\test.component.log.1\test.component.log.1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.log.1\test.component.log.1.cpp

$(TARG_TEST_COMP_log_1_MT_UX_DEBUG):	\
			$(OBJ_TEST_COMP_log_1_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_ALL_MT_UX_DEBUG)\
			$(LIB_BE_TEST_MT_UX_DEBUG)\
			$(LIB_BEC_TEST_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_COMP_log_1_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_ALL_MT_UX_DEBUG)\
		$(LIB_BE_TEST_MT_UX_DEBUG)\
		$(LIB_BEC_TEST_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_COMP_log_1_MT_UX_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.log.1\test.component.log.1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.log.1\test.component.log.1.cpp

$(TARG_TEST_COMP_pan_puts_MT_UX):	\
			$(OBJ_TEST_COMP_pan_puts_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_ALL_MT_UX)\
			$(LIB_BE_TEST_MT_UX)\
			$(LIB_BEC_TEST_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_COMP_pan_puts_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_ALL_MT_UX)\
		$(LIB_BE_TEST_MT_UX)\
		$(LIB_BEC_TEST_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_COMP_pan_puts_MT_UX):	$(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logputs\test.component.core.pantheios_logputs.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logputs\test.component.core.pantheios_logputs.cpp

$(TARG_TEST_COMP_pan_puts_MT_UX_DEBUG):	\
			$(OBJ_TEST_COMP_pan_puts_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_ALL_MT_UX_DEBUG)\
			$(LIB_BE_TEST_MT_UX_DEBUG)\
			$(LIB_BEC_TEST_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_COMP_pan_puts_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_ALL_MT_UX_DEBUG)\
		$(LIB_BE_TEST_MT_UX_DEBUG)\
		$(LIB_BEC_TEST_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_COMP_pan_puts_MT_UX_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logputs\test.component.core.pantheios_logputs.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logputs\test.component.core.pantheios_logputs.cpp

$(TARG_TEST_COMP_pan_prtf_MT_UX):	\
			$(OBJ_TEST_COMP_pan_prtf_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_ALL_MT_UX)\
			$(LIB_BE_TEST_MT_UX)\
			$(LIB_BEC_TEST_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_COMP_pan_prtf_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_ALL_MT_UX)\
		$(LIB_BE_TEST_MT_UX)\
		$(LIB_BEC_TEST_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_COMP_pan_prtf_MT_UX):	$(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logprintf\test.component.core.pantheios_logprintf.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logprintf\test.component.core.pantheios_logprintf.cpp

$(TARG_TEST_COMP_pan_prtf_MT_UX_DEBUG):	\
			$(OBJ_TEST_COMP_pan_prtf_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_ALL_MT_UX_DEBUG)\
			$(LIB_BE_TEST_MT_UX_DEBUG)\
			$(LIB_BEC_TEST_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_COMP_pan_prtf_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_ALL_MT_UX_DEBUG)\
		$(LIB_BE_TEST_MT_UX_DEBUG)\
		$(LIB_BEC_TEST_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_COMP_pan_prtf_MT_UX_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logprintf\test.component.core.pantheios_logprintf.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logprintf\test.component.core.pantheios_logprintf.cpp

##############################
# Performance Tests

$(TARG_TEST_PERF_ins_w2m_MT_UX):	\
			$(OBJ_TEST_PERF_ins_w2m_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_NULL_MT_UX)\
			$(LIB_BEC_NULL_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_PERF_ins_w2m_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_NULL_MT_UX)\
		$(LIB_BEC_NULL_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_PERF_ins_w2m_MT_UX):	$(PROJ_TEST_PERFORMANCE_DIR)\test.performance.inserters.w2m\test.performance.inserters.w2m.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_PERFORMANCE_DIR)\test.performance.inserters.w2m\test.performance.inserters.w2m.cpp

$(TARG_TEST_PERF_ins_w2m_MT_UX_DEBUG):	\
			$(OBJ_TEST_PERF_ins_w2m_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_NULL_MT_UX_DEBUG)\
			$(LIB_BEC_NULL_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_PERF_ins_w2m_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_NULL_MT_UX_DEBUG)\
		$(LIB_BEC_NULL_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_PERF_ins_w2m_MT_UX_DEBUG):	$(PROJ_TEST_PERFORMANCE_DIR)\test.performance.inserters.w2m\test.performance.inserters.w2m.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_PERFORMANCE_DIR)\test.performance.inserters.w2m\test.performance.inserters.w2m.cpp

##############################
# Scratch Tests

#  object files

$(OBJ_TEST_API_MT_UX):	$(PROJ_TEST_SCRATCH_DIR)\test.scratch.api\test.scratch.api.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_SCRATCH_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_SCRATCH_DIR)\test.scratch.api\test.scratch.api.cpp
$(OBJ_TEST_FE_MT_UX):	$(PROJ_TEST_SCRATCH_DIR)\test.scratch.fe\test.scratch.fe.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_SCRATCH_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_SCRATCH_DIR)\test.scratch.fe\test.scratch.fe.cpp
$(OBJ_TEST_BE_N_MT_UX):	$(PROJ_TEST_SCRATCH_DIR)\test.scratch.be.N.fail\test.scratch.be.N.fail.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_SCRATCH_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_SCRATCH_DIR)\test.scratch.be.N.fail\test.scratch.be.N.fail.cpp
$(OBJ_TEST_API_MT_UX_DEBUG):	$(PROJ_TEST_SCRATCH_DIR)\test.scratch.api\test.scratch.api.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_SCRATCH_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_SCRATCH_DIR)\test.scratch.api\test.scratch.api.cpp
$(OBJ_TEST_FE_MT_UX_DEBUG):	$(PROJ_TEST_SCRATCH_DIR)\test.scratch.fe\test.scratch.fe.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_SCRATCH_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_SCRATCH_DIR)\test.scratch.fe\test.scratch.fe.cpp
$(OBJ_TEST_BE_N_MT_UX_DEBUG):	$(PROJ_TEST_SCRATCH_DIR)\test.scratch.be.N.fail\test.scratch.be.N.fail.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_SCRATCH_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_SCRATCH_DIR)\test.scratch.be.N.fail\test.scratch.be.N.fail.cpp

# executables

$(TEST__MT_UX_API_W_BE_FPRINTF):	\
			$(OBJ_TEST_API_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_FPRINTF_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_API_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_FPRINTF_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIBS_3PTY_FPRINTF)\
		$(TARGET_LIB_MT_UX)

$(TEST__MT_UX_API_W_BE_SYSLOG):	\
			$(OBJ_TEST_API_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_SYSLOG_MT_UX)\
			$(LIB_BEC_SYSLOG_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_API_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_SYSLOG_MT_UX)\
		$(LIB_BEC_SYSLOG_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIBS_3PTY_SYSLOG)\
		$(TARGET_LIB_MT_UX)

$(TEST__MT_UX_API_W_BELR_1_FPRINTF_SYSLOG):	\
			$(OBJ_TEST_API_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_LRSPLIT_MT_UX)\
			$(LIB_BEL_FPRINTF_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(LIB_BER_SYSLOG_MT_UX)\
			$(LIB_BEC_SYSLOG_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_API_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_LRSPLIT_MT_UX)\
		$(LIB_BEL_FPRINTF_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_BER_SYSLOG_MT_UX)\
		$(LIB_BEC_SYSLOG_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(TARGET_TEST_FE_MT_UX): \
			$(OBJ_TEST_FE_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_FE_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(TARGET_LIB_MT_UX)

$(TEST__MT_UX_BE_N_FAIL):	\
			$(OBJ_TEST_BE_N_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_N_MT_UX)\
			$(LIB_BE_N_MT_UX)\
			$(LIB_BEC_FAIL_MT_UX)\
			$(LIB_BEC_FILE_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_BE_N_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_FE_N_MT_UX)\
		$(LIB_BE_N_MT_UX)\
		$(LIB_BEC_FAIL_MT_UX)\
		$(LIB_BEC_FILE_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX)

$(TEST__MT_UX_DEBUG_API_W_BE_FPRINTF):	\
			$(OBJ_TEST_API_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_API_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIBS_3PTY_FPRINTF)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(TEST__MT_UX_DEBUG_API_W_BE_SYSLOG):	\
			$(OBJ_TEST_API_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_SYSLOG_MT_UX_DEBUG)\
			$(LIB_BEC_SYSLOG_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_API_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_SYSLOG_MT_UX_DEBUG)\
		$(LIB_BEC_SYSLOG_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIBS_3PTY_SYSLOG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(TEST__MT_UX_DEBUG_API_W_BELR_1_FPRINTF_SYSLOG):	\
			$(OBJ_TEST_API_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_LRSPLIT_MT_UX_DEBUG)\
			$(LIB_BEL_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(LIB_BER_SYSLOG_MT_UX_DEBUG)\
			$(LIB_BEC_SYSLOG_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_API_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_LRSPLIT_MT_UX_DEBUG)\
		$(LIB_BEL_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_BER_SYSLOG_MT_UX_DEBUG)\
		$(LIB_BEC_SYSLOG_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(TARGET_TEST_FE_MT_UX_DEBUG): \
			$(OBJ_TEST_FE_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_FE_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(TEST__MT_UX_DEBUG_BE_N_FAIL):	\
			$(OBJ_TEST_BE_N_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_N_MT_UX_DEBUG)\
			$(LIB_BE_N_MT_UX_DEBUG)\
			$(LIB_BEC_FAIL_MT_UX_DEBUG)\
			$(LIB_BEC_FILE_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_BE_N_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_FE_N_MT_UX_DEBUG)\
		$(LIB_BE_N_MT_UX_DEBUG)\
		$(LIB_BEC_FAIL_MT_UX_DEBUG)\
		$(LIB_BEC_FILE_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_UX_DEBUG)

##############################
# Unit Tests

$(TARG_TEST_UNIT_lvls_dyninit_MT_UX):	\
			$(OBJ_TEST_UNIT_lvls_dyninit_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_UNIT_lvls_dyninit_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_UNIT_lvls_dyninit_MT_UX):	$(PROJ_TEST_UNIT_DIR)\test.unit.levels.dynamic_initialisation\test.unit.levels.dynamic_initialisation.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.levels.dynamic_initialisation\test.unit.levels.dynamic_initialisation.cpp

$(TARG_TEST_UNIT_lvls_dyninit_MT_UX_DEBUG):	\
			$(OBJ_TEST_UNIT_lvls_dyninit_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_UNIT_lvls_dyninit_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_UNIT_lvls_dyninit_MT_UX_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.levels.dynamic_initialisation\test.unit.levels.dynamic_initialisation.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.levels.dynamic_initialisation\test.unit.levels.dynamic_initialisation.cpp

$(TARG_TEST_UNIT_lvls_vals_MT_UX):	\
			$(OBJ_TEST_UNIT_lvls_vals_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_UNIT_lvls_vals_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_UNIT_lvls_vals_MT_UX):	$(PROJ_TEST_UNIT_DIR)\test.unit.levels.values\test.unit.levels.values.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.levels.values\test.unit.levels.values.c

$(TARG_TEST_UNIT_lvls_vals_MT_UX_DEBUG):	\
			$(OBJ_TEST_UNIT_lvls_vals_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_UNIT_lvls_vals_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_UNIT_lvls_vals_MT_UX_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.levels.values\test.unit.levels.values.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.levels.values\test.unit.levels.values.c

$(TARG_TEST_UNIT_getcurrtm_MT_UX):	\
			$(OBJ_TEST_UNIT_getcurrtm_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(LIB_SHWILD_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_UNIT_getcurrtm_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_SHWILD_MT_UX)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_UNIT_getcurrtm_MT_UX):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.getcurrenttime\test.unit.util.getcurrenttime.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.getcurrenttime\test.unit.util.getcurrenttime.cpp

$(TARG_TEST_UNIT_getcurrtm_MT_UX_DEBUG):	\
			$(OBJ_TEST_UNIT_getcurrtm_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(LIB_SHWILD_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_UNIT_getcurrtm_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_SHWILD_MT_UX_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_UNIT_getcurrtm_MT_UX_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.getcurrenttime\test.unit.util.getcurrenttime.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.getcurrenttime\test.unit.util.getcurrenttime.cpp

$(TARG_TEST_UNIT_getversion_MT_UX):	\
			$(OBJ_TEST_UNIT_getversion_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_FE_FAIL_MT_UX)\
			$(LIB_BE_FAIL_MT_UX)\
			$(LIB_BEC_FAIL_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(LIB_SHWILD_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_UNIT_getversion_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIB_FE_FAIL_MT_UX)\
		$(LIB_BE_FAIL_MT_UX)\
		$(LIB_BEC_FAIL_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_SHWILD_MT_UX)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_UNIT_getversion_MT_UX):	$(PROJ_TEST_UNIT_DIR)\test.unit.getversion\test.unit.getversion.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.getversion\test.unit.getversion.c

$(TARG_TEST_UNIT_getversion_MT_UX_DEBUG):	\
			$(OBJ_TEST_UNIT_getversion_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_FE_FAIL_MT_UX_DEBUG)\
			$(LIB_BE_FAIL_MT_UX_DEBUG)\
			$(LIB_BEC_FAIL_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(LIB_SHWILD_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_UNIT_getversion_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIB_FE_FAIL_MT_UX_DEBUG)\
		$(LIB_BE_FAIL_MT_UX_DEBUG)\
		$(LIB_BEC_FAIL_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_SHWILD_MT_UX_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_UNIT_getversion_MT_UX_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.getversion\test.unit.getversion.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.getversion\test.unit.getversion.c

$(TARG_TEST_UNIT_gethostname_MT_UX):	\
			$(OBJ_TEST_UNIT_gethostname_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(LIB_SHWILD_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_UNIT_gethostname_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_SHWILD_MT_UX)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_UNIT_gethostname_MT_UX):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.gethostname\test.unit.util.gethostname.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.gethostname\test.unit.util.gethostname.cpp

$(TARG_TEST_UNIT_gethostname_MT_UX_DEBUG):	\
			$(OBJ_TEST_UNIT_gethostname_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(LIB_SHWILD_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_UNIT_gethostname_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_SHWILD_MT_UX_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_UNIT_gethostname_MT_UX_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.gethostname\test.unit.util.gethostname.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.gethostname\test.unit.util.gethostname.cpp

$(TARG_TEST_UNIT_onbailout_MT_UX):	\
			$(OBJ_TEST_UNIT_onbailout_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(LIB_SHWILD_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_UNIT_onbailout_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_SHWILD_MT_UX)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_UNIT_onbailout_MT_UX):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.onbailout\test.unit.util.onbailout.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.onbailout\test.unit.util.onbailout.cpp

$(TARG_TEST_UNIT_onbailout_MT_UX_DEBUG):	\
			$(OBJ_TEST_UNIT_onbailout_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(LIB_SHWILD_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_UNIT_onbailout_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_SHWILD_MT_UX_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_UNIT_onbailout_MT_UX_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.onbailout\test.unit.util.onbailout.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.onbailout\test.unit.util.onbailout.cpp

$(TARG_TEST_UNIT_strnlen_MT_UX):	\
			$(OBJ_TEST_UNIT_strnlen_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(LIB_SHWILD_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_UNIT_strnlen_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_SHWILD_MT_UX)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_UNIT_strnlen_MT_UX):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.strnlen\test.unit.util.strnlen.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.strnlen\test.unit.util.strnlen.cpp

$(TARG_TEST_UNIT_strnlen_MT_UX_DEBUG):	\
			$(OBJ_TEST_UNIT_strnlen_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(LIB_SHWILD_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_UNIT_strnlen_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_SHWILD_MT_UX_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_UNIT_strnlen_MT_UX_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.strnlen\test.unit.util.strnlen.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.strnlen\test.unit.util.strnlen.cpp

$(TARG_TEST_UNIT_bec_file_MT_UX):	\
			$(OBJ_TEST_UNIT_bec_file_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_BEC_FILE_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_NULL_MT_UX)\
			$(LIB_BEC_NULL_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(LIB_SHWILD_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_UNIT_bec_file_MT_UX)\
		$(LIB_BEC_FILE_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_NULL_MT_UX)\
		$(LIB_BEC_NULL_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_SHWILD_MT_UX)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_UNIT_bec_file_MT_UX):	$(PROJ_TEST_UNIT_DIR)\test.unit.bec.file\test.unit.bec.file.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.bec.file\test.unit.bec.file.cpp

$(TARG_TEST_UNIT_bec_file_MT_UX_DEBUG):	\
			$(OBJ_TEST_UNIT_bec_file_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_BEC_FILE_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_NULL_MT_UX_DEBUG)\
			$(LIB_BEC_NULL_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(LIB_SHWILD_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_UNIT_bec_file_MT_UX_DEBUG)\
		$(LIB_BEC_FILE_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_NULL_MT_UX_DEBUG)\
		$(LIB_BEC_NULL_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_SHWILD_MT_UX_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_UNIT_bec_file_MT_UX_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.bec.file\test.unit.bec.file.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.bec.file\test.unit.bec.file.cpp

$(TARG_TEST_UNIT_bec_fprintf_MT_UX):	\
			$(OBJ_TEST_UNIT_bec_fprintf_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_BEC_FPRINTF_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_BE_NULL_MT_UX)\
			$(LIB_BEC_NULL_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(LIB_SHWILD_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_UNIT_bec_fprintf_MT_UX)\
		$(LIB_BEC_FPRINTF_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_BE_NULL_MT_UX)\
		$(LIB_BEC_NULL_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_SHWILD_MT_UX)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_UNIT_bec_fprintf_MT_UX):	$(PROJ_TEST_UNIT_DIR)\test.unit.bec.fprintf\test.unit.bec.fprintf.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.bec.fprintf\test.unit.bec.fprintf.cpp

$(TARG_TEST_UNIT_bec_fprintf_MT_UX_DEBUG):	\
			$(OBJ_TEST_UNIT_bec_fprintf_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_BE_NULL_MT_UX_DEBUG)\
			$(LIB_BEC_NULL_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(LIB_SHWILD_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_UNIT_bec_fprintf_MT_UX_DEBUG)\
		$(LIB_BEC_FPRINTF_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_BE_NULL_MT_UX_DEBUG)\
		$(LIB_BEC_NULL_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_SHWILD_MT_UX_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_UNIT_bec_fprintf_MT_UX_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.bec.fprintf\test.unit.bec.fprintf.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CPPC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.bec.fprintf\test.unit.bec.fprintf.cpp

$(TARG_TEST_UNIT_bec_fail_MT_UX):	\
			$(OBJ_TEST_UNIT_bec_fail_MT_UX)\
			$(LIB_BEC_FAIL_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(LIB_SHWILD_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_UNIT_bec_fail_MT_UX)\
		$(LIB_BEC_FAIL_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_SHWILD_MT_UX)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_UNIT_bec_fail_MT_UX):	$(PROJ_TEST_UNIT_DIR)\test.unit.bec.fail\test.unit.bec.fail.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.bec.fail\test.unit.bec.fail.c

$(TARG_TEST_UNIT_bec_fail_MT_UX_DEBUG):	\
			$(OBJ_TEST_UNIT_bec_fail_MT_UX_DEBUG)\
			$(LIB_BEC_FAIL_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(LIB_SHWILD_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_UNIT_bec_fail_MT_UX_DEBUG)\
		$(LIB_BEC_FAIL_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_SHWILD_MT_UX_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_UNIT_bec_fail_MT_UX_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.bec.fail\test.unit.bec.fail.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.bec.fail\test.unit.bec.fail.c

$(TARG_TEST_UNIT_be_fail_MT_UX):	\
			$(OBJ_TEST_UNIT_be_fail_MT_UX)\
			$(LIB_BE_FAIL_MT_UX)\
			$(LIB_BEC_FAIL_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(LIB_SHWILD_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_UNIT_be_fail_MT_UX)\
		$(LIB_BE_FAIL_MT_UX)\
		$(LIB_BEC_FAIL_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_SHWILD_MT_UX)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_UNIT_be_fail_MT_UX):	$(PROJ_TEST_UNIT_DIR)\test.unit.be.fail\test.unit.be.fail.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.be.fail\test.unit.be.fail.c

$(TARG_TEST_UNIT_be_fail_MT_UX_DEBUG):	\
			$(OBJ_TEST_UNIT_be_fail_MT_UX_DEBUG)\
			$(LIB_BE_FAIL_MT_UX_DEBUG)\
			$(LIB_BEC_FAIL_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(LIB_SHWILD_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_UNIT_be_fail_MT_UX_DEBUG)\
		$(LIB_BE_FAIL_MT_UX_DEBUG)\
		$(LIB_BEC_FAIL_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_SHWILD_MT_UX_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_UNIT_be_fail_MT_UX_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.be.fail\test.unit.be.fail.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.be.fail\test.unit.be.fail.c

#
$(TARG_TEST_UNIT_be_lrsplit_MT_UX):	\
			$(OBJ_TEST_UNIT_be_lrsplit_MT_UX)\
			$(LIB_BE_LRSPLIT_MT_UX)\
			$(LIB_FE_ALL_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(LIB_SHWILD_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_UNIT_be_lrsplit_MT_UX)\
		$(LIB_BE_LRSPLIT_MT_UX)\
		$(LIB_FE_ALL_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_SHWILD_MT_UX)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_UNIT_be_lrsplit_MT_UX):	$(PROJ_TEST_UNIT_DIR)\test.unit.be.lrsplit\test.unit.be.lrsplit.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.be.lrsplit\test.unit.be.lrsplit.c

$(TARG_TEST_UNIT_be_lrsplit_MT_UX_DEBUG):	\
			$(OBJ_TEST_UNIT_be_lrsplit_MT_UX_DEBUG)\
			$(LIB_BE_LRSPLIT_MT_UX_DEBUG)\
			$(LIB_FE_ALL_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(LIB_SHWILD_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_UNIT_be_lrsplit_MT_UX_DEBUG)\
		$(LIB_BE_LRSPLIT_MT_UX_DEBUG)\
		$(LIB_FE_ALL_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_SHWILD_MT_UX_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_UNIT_be_lrsplit_MT_UX_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.be.lrsplit\test.unit.be.lrsplit.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.be.lrsplit\test.unit.be.lrsplit.c

$(TARG_TEST_UNIT_be_N_MT_UX):	\
			$(OBJ_TEST_UNIT_be_N_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_CORE_MT_UX)\
			$(LIB_BE_N_MT_UX)\
			$(LIB_FE_ALL_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(LIB_SHWILD_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_UNIT_be_N_MT_UX)\
		$(LIB_BE_N_MT_UX)\
		$(LIB_FE_ALL_MT_UX)\
		$(LIB_CORE_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_SHWILD_MT_UX)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_UNIT_be_N_MT_UX):	$(PROJ_TEST_UNIT_DIR)\test.unit.be.N\test.unit.be.N.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.be.N\test.unit.be.N.c

$(TARG_TEST_UNIT_be_N_MT_UX_DEBUG):	\
			$(OBJ_TEST_UNIT_be_N_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_CORE_MT_UX_DEBUG)\
			$(LIB_BE_N_MT_UX_DEBUG)\
			$(LIB_FE_ALL_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(LIB_SHWILD_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_UNIT_be_N_MT_UX_DEBUG)\
		$(LIB_BE_N_MT_UX_DEBUG)\
		$(LIB_FE_ALL_MT_UX_DEBUG)\
		$(LIB_CORE_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_SHWILD_MT_UX_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_UNIT_be_N_MT_UX_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.be.N\test.unit.be.N.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.be.N\test.unit.be.N.c

$(TARG_TEST_UNIT_fe_all_MT_UX):	\
			$(OBJ_TEST_UNIT_fe_all_MT_UX)\
			$(LIB_FE_ALL_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(LIB_SHWILD_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_UNIT_fe_all_MT_UX)\
		$(LIB_FE_ALL_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_SHWILD_MT_UX)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_UNIT_fe_all_MT_UX):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.all\test.unit.fe.all.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.all\test.unit.fe.all.c

$(TARG_TEST_UNIT_fe_all_MT_UX_DEBUG):	\
			$(OBJ_TEST_UNIT_fe_all_MT_UX_DEBUG)\
			$(LIB_FE_ALL_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(LIB_SHWILD_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_UNIT_fe_all_MT_UX_DEBUG)\
		$(LIB_FE_ALL_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_SHWILD_MT_UX_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_UNIT_fe_all_MT_UX_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.all\test.unit.fe.all.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.all\test.unit.fe.all.c

$(TARG_TEST_UNIT_fe_fail_MT_UX):	\
			$(OBJ_TEST_UNIT_fe_fail_MT_UX)\
			$(LIB_FE_FAIL_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(LIB_SHWILD_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_UNIT_fe_fail_MT_UX)\
		$(LIB_FE_FAIL_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_SHWILD_MT_UX)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_UNIT_fe_fail_MT_UX):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.fail\test.unit.fe.fail.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.fail\test.unit.fe.fail.c

$(TARG_TEST_UNIT_fe_fail_MT_UX_DEBUG):	\
			$(OBJ_TEST_UNIT_fe_fail_MT_UX_DEBUG)\
			$(LIB_FE_FAIL_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(LIB_SHWILD_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_UNIT_fe_fail_MT_UX_DEBUG)\
		$(LIB_FE_FAIL_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_SHWILD_MT_UX_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_UNIT_fe_fail_MT_UX_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.fail\test.unit.fe.fail.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.fail\test.unit.fe.fail.c

$(TARG_TEST_UNIT_fe_N_MT_UX):	\
			$(OBJ_TEST_UNIT_fe_N_MT_UX)\
			$(LIB_FE_N_MT_UX)\
			$(LIB_UTIL_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(LIB_SHWILD_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_UNIT_fe_N_MT_UX)\
		$(LIB_FE_N_MT_UX)\
		$(LIB_UTIL_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_SHWILD_MT_UX)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_UNIT_fe_N_MT_UX):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.N\test.unit.fe.N.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.N\test.unit.fe.N.c

$(TARG_TEST_UNIT_fe_N_MT_UX_DEBUG):	\
			$(OBJ_TEST_UNIT_fe_N_MT_UX_DEBUG)\
			$(LIB_FE_N_MT_UX_DEBUG)\
			$(LIB_UTIL_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(LIB_SHWILD_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_UNIT_fe_N_MT_UX_DEBUG)\
		$(LIB_FE_N_MT_UX_DEBUG)\
		$(LIB_UTIL_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_SHWILD_MT_UX_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_UNIT_fe_N_MT_UX_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.N\test.unit.fe.N.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.N\test.unit.fe.N.c

$(TARG_TEST_UNIT_fe_null_MT_UX):	\
			$(OBJ_TEST_UNIT_fe_null_MT_UX)\
			$(LIB_FE_NULL_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(LIB_SHWILD_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_UNIT_fe_null_MT_UX)\
		$(LIB_FE_NULL_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_SHWILD_MT_UX)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_UNIT_fe_null_MT_UX):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.null\test.unit.fe.null.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.null\test.unit.fe.null.c

$(TARG_TEST_UNIT_fe_null_MT_UX_DEBUG):	\
			$(OBJ_TEST_UNIT_fe_null_MT_UX_DEBUG)\
			$(LIB_FE_NULL_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(LIB_SHWILD_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_UNIT_fe_null_MT_UX_DEBUG)\
		$(LIB_FE_NULL_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_SHWILD_MT_UX_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_UNIT_fe_null_MT_UX_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.null\test.unit.fe.null.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.null\test.unit.fe.null.c

$(TARG_TEST_UNIT_fe_simple_MT_UX):	\
			$(OBJ_TEST_UNIT_fe_simple_MT_UX)\
			$(LIB_FE_SIMPLE_MT_UX)\
			$(LIB_XTESTS_MT_UX)\
			$(LIB_SHWILD_MT_UX)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX) -out:$@ \
		$(OBJ_TEST_UNIT_fe_simple_MT_UX)\
		$(LIB_FE_SIMPLE_MT_UX)\
		$(LIB_XTESTS_MT_UX)\
		$(LIB_SHWILD_MT_UX)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX)

$(OBJ_TEST_UNIT_fe_simple_MT_UX):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.simple\test.unit.fe.simple.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_UX) $(CC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.simple\test.unit.fe.simple.c

$(TARG_TEST_UNIT_fe_simple_MT_UX_DEBUG):	\
			$(OBJ_TEST_UNIT_fe_simple_MT_UX_DEBUG)\
			$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
			$(LIB_XTESTS_MT_UX_DEBUG)\
			$(LIB_SHWILD_MT_UX_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_UX_DEBUG) -out:$@ \
		$(OBJ_TEST_UNIT_fe_simple_MT_UX_DEBUG)\
		$(LIB_FE_SIMPLE_MT_UX_DEBUG)\
		$(LIB_XTESTS_MT_UX_DEBUG)\
		$(LIB_SHWILD_MT_UX_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_UX_DEBUG)

$(OBJ_TEST_UNIT_fe_simple_MT_UX_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.simple\test.unit.fe.simple.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_UX_DEBUG) $(CC_INCLUDES) -Fo$@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.simple\test.unit.fe.simple.c

############################### end of file ################################
