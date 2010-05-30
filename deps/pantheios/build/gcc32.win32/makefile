############################################################################
# File: 	makefile
#
# Purpose:	Makefile for the Pantheios project, for the GCC 3.2
#			compiler, on Win32
#
# Created:	15th Feburary 2005
# Updated:	23rd March 2010
#
############################################################################


############################################################################
# Environment check
#

ifndef STLSOFT
$(error STLSOFT must be defined)
endif # !STLSOFT

############################################################################
# Symbols

########################################
# Project & compiler version

COMP_TAG			=	gcc32
ARCH_TAG            =   
OS_TAG				=   
PROJ_TAG			=	pantheios
PROJ_VER_MAJOR		=	1
PROJ_TAG_VER		=	$(PROJ_TAG).$(PROJ_VER_MAJOR)

B64_VER_MAJOR		=   1
B64_TAG_VER			=   b64.$(B64_VER_MAJOR)

SHWILD_VER_MAJOR    =   0
SHWILD_TAG_VER      =   shwild.$(SHWILD_VER_MAJOR)

XTESTS_VER_MAJOR    =   0
XTESTS_TAG_VER      =   xtests.$(XTESTS_VER_MAJOR)

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

CC                      =   gcc
CPPC                    =   g++
AR                      =   ar
LD                      =   g++
RM                      =   del /f
CP                      =   copy
RC                      =   rc

# Includes

INCLUDES_LEADER 	=	

PROJ_INCLUDE		=	-I$(PROJ_INCLUDE_DIR)

ENV_INCLUDES 	=

COMMON_INCLUDES		=

CC_INCLUDES_BASE=\
$(INCLUDES_LEADER)\
$(PROJ_INCLUDE)\
-I"$(STLSOFT)\include"\
$(COMMON_INCLUDES)\
$(ENV_INCLUDES)\
 \

CC_INCLUDES=\
$(CC_INCLUDES_BASE)\
 \



CC_INCLUDES_ACE=\
$(CC_INCLUDES_BASE)\
-I"$(ACE)"\
 \


CPPC_INCLUDES_BASE=\
$(INCLUDES_LEADER)\
$(PROJ_INCLUDE)\
-I"$(STLSOFT)\include"\
$(COMMON_INCLUDES)\
$(ENV_INCLUDES)\
 \

CPPC_INCLUDES=\
$(CPPC_INCLUDES_BASE)\
 \

CPPC_INCLUDES_ACE=\
$(CPPC_INCLUDES_BASE)\
-I"$(ACE)"\
 \


# b64

CC_B64_INCLUDES_BASE =\
$(CC_INCLUDES_BASE)\
 \

CC_B64_INCLUDES_MT_D =\
$(CC_B64_INCLUDES_BASE)\
 \

CC_B64_INCLUDES_MT_R =\
$(CC_B64_INCLUDES_BASE)\
 \

CC_B64_INCLUDES_ST_D =\
$(CC_B64_INCLUDES_BASE)\
 \

CC_B64_INCLUDES_ST_R =\
$(CC_B64_INCLUDES_BASE)\
 \


CPPC_B64_INCLUDES_BASE =\
$(CPPC_INCLUDES_BASE)\
 \

CPPC_B64_INCLUDES_MT_D =\
$(CPPC_B64_INCLUDES_BASE)\
 \

CPPC_B64_INCLUDES_MT_R =\
$(CPPC_B64_INCLUDES_BASE)\
 \

CPPC_B64_INCLUDES_ST_D =\
$(CPPC_B64_INCLUDES_BASE)\
 \

CPPC_B64_INCLUDES_ST_R =\
$(CPPC_B64_INCLUDES_BASE)\
 \


# shwild

CPPC_SHWILD_INCLUDES_BASE =\
$(CPPC_INCLUDES_BASE)\
 \

CPPC_SHWILD_INCLUDES_MT_D =\
$(CPPC_SHWILD_INCLUDES_BASE)\
 \

CPPC_SHWILD_INCLUDES_MT_R =\
$(CPPC_SHWILD_INCLUDES_BASE)\
 \

CPPC_SHWILD_INCLUDES_ST_D =\
$(CPPC_SHWILD_INCLUDES_BASE)\
 \

CPPC_SHWILD_INCLUDES_ST_R =\
$(CPPC_SHWILD_INCLUDES_BASE)\
 \


# xTests

CPPC_XTESTS_INCLUDES_BASE =\
$(CPPC_INCLUDES_BASE)\
 \

CPPC_XTESTS_INCLUDES_MT_D =\
$(CPPC_XTESTS_INCLUDES_BASE)\
 \

CPPC_XTESTS_INCLUDES_MT_R =\
$(CPPC_XTESTS_INCLUDES_BASE)\
 \

CPPC_XTESTS_INCLUDES_ST_D =\
$(CPPC_XTESTS_INCLUDES_BASE)\
 \

CPPC_XTESTS_INCLUDES_ST_R =\
$(CPPC_XTESTS_INCLUDES_BASE)\
 \




# Lib

LIBS_LEADER 		=	

# lib paths

ENV_LIBPATHS		=
COMMON_LIBPATHS			=



LIBPATHS=\
$(LIBS_LEADER)\
$(COMMON_LIBPATHS)\
$(ENV_LIBPATHS)\
\


# lib names

TARGET_LIB_MT_D	= -lkernel32 -luser32 -ladvapi32 -luuid -lwininet -lole32 -loleaut32
TARGET_LIB_MT_R	= -lkernel32 -luser32 -ladvapi32 -luuid -lwininet -lole32 -loleaut32
TARGET_LIB_ST_D	= -lkernel32 -luser32 -ladvapi32 -luuid -lwininet -lole32 -loleaut32
TARGET_LIB_ST_R	= -lkernel32 -luser32 -ladvapi32 -luuid -lwininet -lole32 -loleaut32

# #defines

COMMON_DEFS 		=	-DWIN32

CUSTOM_DEFS			=

CC_CUSTOM_DEFS		=	$(CUSTOM_DEFS)

CPPC_CUSTOM_DEFS	=	$(CUSTOM_DEFS)

CC_DEFS 			=	$(COMMON_DEFS) $(CC_CUSTOM_DEFS)

CPPC_DEFS			=	$(COMMON_DEFS) $(CPPC_CUSTOM_DEFS)

# CC flags

CC_F_NOLOGO 			=	
CC_F_COMPILE_ONLY		=	-c
CC_F_WARNING_MAX		=	-Wall -pedantic -Wno-long-long -Wno-unused-value -Wno-unused-function -Wundef -Wshadow
CC_F_WARNING_ERR		=	-Werror
CC_F_WARNINGS_LIMIT		=	
CC_F_MINIMUM_SIZE		=	-O1
#CC_F_MAXIMUM_SPEED		=	-O3
CC_APP_F_WARNING_MAX	=	-Wall           -Wno-long-long -Wno-unused-value -Wno-unused-function -Wundef -Wshadow
CC_APP_F_WARNING_ERR	=	$(CC_F_WARNING_ERR)

# CPPC flags

CPPC_F_NOLOGO			=	
CPPC_F_COMPILE_ONLY 	=	-c
CPPC_F_WARNING_MAX		=	-Wall -pedantic -Wno-long-long -Wno-unused-value -Wno-unused-function
CPPC_F_WARNING_ERR		=	-Werror
CPPC_F_EXCEPTIONS_ON	=	
CPPC_F_EXCEPTIONS_OFF	=	
CPPC_F_EXCEPTIONS		=	$(CPPC_F_EXCEPTIONS_ON)
CPPC_F_RTTI_ON			=	
CPPC_F_RTTI_OFF 		=	
CPPC_F_RTTI				=	$(CPPC_F_RTTI_ON)
CPPC_F_WARNINGS_LIMIT	=	
CPPC_F_MINIMUM_SIZE 	=	-O1
CPPC_F_MAXIMUM_SPEED	=	-O3
CPPC_F_OPTIMISED		=	$(CPPC_F_MAXIMUM_SPEED)
CPPC_APP_F_WARNING_MAX	=	-Wall           -Wno-long-long -Wno-unused-value -Wno-unused-function
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
CC_LIB_ARGS_MT_D			=	$(CC_FLAGS) -D_REENTRANT -D_DEBUG -UNDEBUG  $(CC_DEFS) -DPANTHEIOS_NO_AUTO_INIT
CC_LIB_ARGS_MT_R			=	$(CC_FLAGS) -D_REENTRANT -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS) -DPANTHEIOS_NO_AUTO_INIT
CC_LIB_ARGS_ST_D			=	$(CC_FLAGS) -D_DEBUG -UNDEBUG  $(CC_DEFS) -DPANTHEIOS_NO_AUTO_INIT
CC_LIB_ARGS_ST_R			=	$(CC_FLAGS) -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS) -DPANTHEIOS_NO_AUTO_INIT

CPPC_LIB_ARGS_MT_D			=	$(CPPC_FLAGS) -D_REENTRANT -D_DEBUG -UNDEBUG  $(CPPC_DEFS) -DPANTHEIOS_NO_AUTO_INIT
CPPC_LIB_ARGS_MT_R			=	$(CPPC_FLAGS) -D_REENTRANT -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS) -DPANTHEIOS_NO_AUTO_INIT
CPPC_LIB_ARGS_ST_D			=	$(CPPC_FLAGS) -D_DEBUG -UNDEBUG  $(CPPC_DEFS) -DPANTHEIOS_NO_AUTO_INIT
CPPC_LIB_ARGS_ST_R			=	$(CPPC_FLAGS) -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS) -DPANTHEIOS_NO_AUTO_INIT


# - b64
CC_B64_ARGS_MT_D			=	$(CC_B64_FLAGS) -D_REENTRANT -D_DEBUG -UNDEBUG  $(CC_DEFS)
CC_B64_ARGS_MT_R			=	$(CC_B64_FLAGS) -D_REENTRANT -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS)
CC_B64_ARGS_ST_D			=	$(CC_B64_FLAGS) -D_DEBUG -UNDEBUG  $(CC_DEFS)
CC_B64_ARGS_ST_R			=	$(CC_B64_FLAGS) -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS)

CPPC_B64_ARGS_MT_D			=	$(CPPC_B64_FLAGS) -D_REENTRANT -D_DEBUG -UNDEBUG  $(CPPC_DEFS)
CPPC_B64_ARGS_MT_R			=	$(CPPC_B64_FLAGS) -D_REENTRANT -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS)
CPPC_B64_ARGS_ST_D			=	$(CPPC_B64_FLAGS) -D_DEBUG -UNDEBUG  $(CPPC_DEFS)
CPPC_B64_ARGS_ST_R			=	$(CPPC_B64_FLAGS) -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS)


# - shwild
CC_SHWILD_ARGS_MT_D			=	$(CC_SHWILD_FLAGS) -D_REENTRANT -D_DEBUG -UNDEBUG  $(CC_DEFS)
CC_SHWILD_ARGS_MT_R			=	$(CC_SHWILD_FLAGS) -D_REENTRANT -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS)
CC_SHWILD_ARGS_ST_D			=	$(CC_SHWILD_FLAGS) -D_DEBUG -UNDEBUG  $(CC_DEFS)
CC_SHWILD_ARGS_ST_R			=	$(CC_SHWILD_FLAGS) -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS)

CPPC_SHWILD_ARGS_MT_D		=	$(CPPC_SHWILD_FLAGS) -D_REENTRANT -D_DEBUG -UNDEBUG  $(CPPC_DEFS)
CPPC_SHWILD_ARGS_MT_R		=	$(CPPC_SHWILD_FLAGS) -D_REENTRANT -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS)
CPPC_SHWILD_ARGS_ST_D		=	$(CPPC_SHWILD_FLAGS) -D_DEBUG -UNDEBUG  $(CPPC_DEFS)
CPPC_SHWILD_ARGS_ST_R		=	$(CPPC_SHWILD_FLAGS) -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS)


# - xTests
CC_XTESTS_ARGS_MT_D			=	$(CC_XTESTS_FLAGS) -D_REENTRANT -D_DEBUG -UNDEBUG  $(CC_DEFS)
CC_XTESTS_ARGS_MT_R			=	$(CC_XTESTS_FLAGS) -D_REENTRANT -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS)
CC_XTESTS_ARGS_ST_D			=	$(CC_XTESTS_FLAGS) -D_DEBUG -UNDEBUG  $(CC_DEFS)
CC_XTESTS_ARGS_ST_R			=	$(CC_XTESTS_FLAGS) -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS)

CPPC_XTESTS_ARGS_MT_D			=	$(CPPC_XTESTS_FLAGS) -D_REENTRANT -D_DEBUG -UNDEBUG  $(CPPC_DEFS)
CPPC_XTESTS_ARGS_MT_R			=	$(CPPC_XTESTS_FLAGS) -D_REENTRANT -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS)
CPPC_XTESTS_ARGS_ST_D			=	$(CPPC_XTESTS_FLAGS) -D_DEBUG -UNDEBUG  $(CPPC_DEFS)
CPPC_XTESTS_ARGS_ST_R			=	$(CPPC_XTESTS_FLAGS) -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS)


# - Examples
CC_EXAMPLE_ARGS_MT_D		=	$(CC_EXAMPLE_FLAGS) -D_REENTRANT -D_DEBUG -UNDEBUG  $(CC_DEFS)
CC_EXAMPLE_ARGS_MT_R		=	$(CC_EXAMPLE_FLAGS) -D_REENTRANT -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS)
CC_EXAMPLE_ARGS_ST_D		=	$(CC_EXAMPLE_FLAGS) -D_DEBUG -UNDEBUG  $(CC_DEFS)
CC_EXAMPLE_ARGS_ST_R		=	$(CC_EXAMPLE_FLAGS) -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS)

CPPC_EXAMPLE_ARGS_MT_D		=	$(CPPC_EXAMPLE_FLAGS) -D_REENTRANT -D_DEBUG -UNDEBUG  $(CPPC_DEFS)
CPPC_EXAMPLE_ARGS_MT_R		=	$(CPPC_EXAMPLE_FLAGS) -D_REENTRANT -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS)
CPPC_EXAMPLE_ARGS_ST_D		=	$(CPPC_EXAMPLE_FLAGS) -D_DEBUG -UNDEBUG  $(CPPC_DEFS)
CPPC_EXAMPLE_ARGS_ST_R		=	$(CPPC_EXAMPLE_FLAGS) -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS)


# - Test (Component)
CC_TEST_COMPONENT_ARGS_MT_D			=	$(CC_TEST_COMPONENT_FLAGS) -D_REENTRANT -D_DEBUG -UNDEBUG  $(CC_DEFS)
CC_TEST_COMPONENT_ARGS_MT_R			=	$(CC_TEST_COMPONENT_FLAGS) -D_REENTRANT -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS)
CC_TEST_COMPONENT_ARGS_ST_D			=	$(CC_TEST_COMPONENT_FLAGS) -D_DEBUG -UNDEBUG  $(CC_DEFS)
CC_TEST_COMPONENT_ARGS_ST_R			=	$(CC_TEST_COMPONENT_FLAGS) -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS)

CPPC_TEST_COMPONENT_ARGS_MT_D			=	$(CPPC_TEST_COMPONENT_FLAGS) -D_REENTRANT -D_DEBUG -UNDEBUG  $(CPPC_DEFS)
CPPC_TEST_COMPONENT_ARGS_MT_R			=	$(CPPC_TEST_COMPONENT_FLAGS) -D_REENTRANT -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS)
CPPC_TEST_COMPONENT_ARGS_ST_D			=	$(CPPC_TEST_COMPONENT_FLAGS) -D_DEBUG -UNDEBUG  $(CPPC_DEFS)
CPPC_TEST_COMPONENT_ARGS_ST_R			=	$(CPPC_TEST_COMPONENT_FLAGS) -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS)


# - Test (Scratch)
CC_TEST_SCRATCH_ARGS_MT_D			=	$(CC_TEST_SCRATCH_FLAGS) -D_REENTRANT -D_DEBUG -UNDEBUG  $(CC_DEFS)
CC_TEST_SCRATCH_ARGS_MT_R			=	$(CC_TEST_SCRATCH_FLAGS) -D_REENTRANT -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS)
CC_TEST_SCRATCH_ARGS_ST_D			=	$(CC_TEST_SCRATCH_FLAGS) -D_DEBUG -UNDEBUG  $(CC_DEFS)
CC_TEST_SCRATCH_ARGS_ST_R			=	$(CC_TEST_SCRATCH_FLAGS) -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS)

CPPC_TEST_SCRATCH_ARGS_MT_D			=	$(CPPC_TEST_SCRATCH_FLAGS) -D_REENTRANT -D_DEBUG -UNDEBUG  $(CPPC_DEFS)
CPPC_TEST_SCRATCH_ARGS_MT_R			=	$(CPPC_TEST_SCRATCH_FLAGS) -D_REENTRANT -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS)
CPPC_TEST_SCRATCH_ARGS_ST_D			=	$(CPPC_TEST_SCRATCH_FLAGS) -D_DEBUG -UNDEBUG  $(CPPC_DEFS)
CPPC_TEST_SCRATCH_ARGS_ST_R			=	$(CPPC_TEST_SCRATCH_FLAGS) -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS)


# - Test (Unit)
CC_TEST_UNIT_ARGS_MT_D			=	$(CC_TEST_UNIT_FLAGS) -D_REENTRANT -D_DEBUG -UNDEBUG  $(CC_DEFS)
CC_TEST_UNIT_ARGS_MT_R			=	$(CC_TEST_UNIT_FLAGS) -D_REENTRANT -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS)
CC_TEST_UNIT_ARGS_ST_D			=	$(CC_TEST_UNIT_FLAGS) -D_DEBUG -UNDEBUG  $(CC_DEFS)
CC_TEST_UNIT_ARGS_ST_R			=	$(CC_TEST_UNIT_FLAGS) -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS)

CPPC_TEST_UNIT_ARGS_MT_D			=	$(CPPC_TEST_UNIT_FLAGS) -D_REENTRANT -D_DEBUG -UNDEBUG  $(CPPC_DEFS)
CPPC_TEST_UNIT_ARGS_MT_R			=	$(CPPC_TEST_UNIT_FLAGS) -D_REENTRANT -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS)
CPPC_TEST_UNIT_ARGS_ST_D			=	$(CPPC_TEST_UNIT_FLAGS) -D_DEBUG -UNDEBUG  $(CPPC_DEFS)
CPPC_TEST_UNIT_ARGS_ST_R			=	$(CPPC_TEST_UNIT_FLAGS) -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS)


# AR args

AR_ARGS 			=	


# LD flags

LD_ARGS 		=	

LD_F_NOLOGO = 

# LD args

LD_ARGS_MT_D =  $(LD_ARGS) $(LD_F_NOLOGO) $(LIBPATHS) $(COMMON_LIB)
LD_ARGS_MT_R =  $(LD_ARGS) $(LD_F_NOLOGO) $(LIBPATHS) $(COMMON_LIB)
LD_ARGS_ST_D =  $(LD_ARGS) $(LD_F_NOLOGO) $(LIBPATHS) $(COMMON_LIB)
LD_ARGS_ST_R =  $(LD_ARGS) $(LD_F_NOLOGO) $(LIBPATHS) $(COMMON_LIB)

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
LIB_UTIL_MT_D				=   $(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).util.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a

#  core
LIB_CORE_MT_D				=   $(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).core.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a

#  front-end(s)
LIB_FE_ALL_MT_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).fe.all.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_FE_FAIL_MT_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).fe.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_FE_N_MT_D				=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).fe.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_FE_NULL_MT_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).fe.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_FE_SIMPLE_MT_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).fe.simple.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_FE_WINREG_MT_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).fe.WindowsRegistry.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a

#  back-end(s)
LIB_BE_LRSPLIT_MT_D 		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.lrsplit.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BE_N_MT_D 			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEC_TEST_MT_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BE_TEST_MT_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEL_TEST_MT_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BER_TEST_MT_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEC_FAIL_MT_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BE_FAIL_MT_D 			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEL_FAIL_MT_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BER_FAIL_MT_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEC_FILE_MT_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEC_FILE_WC_MT_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.file.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BE_FILE_MT_D 			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEL_FILE_MT_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BER_FILE_MT_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEC_FPRINTF_MT_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEC_FPRINTF_WC_MT_D	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.fprintf.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BE_FPRINTF_MT_D 		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEL_FPRINTF_MT_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BER_FPRINTF_MT_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEC_NULL_MT_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BE_NULL_MT_D 			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEL_NULL_MT_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BER_NULL_MT_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEC_ACE_MT_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.ACE.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BE_ACE_MT_D 			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.ACE.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEL_ACE_MT_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.ACE.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BER_ACE_MT_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.ACE.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEC_COMERROBJ_MT_D	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEC_COMERROBJ_WC_MT_D	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.COMErrorObject.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BE_COMERROBJ_MT_D 	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEL_COMERROBJ_MT_D	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BER_COMERROBJ_MT_D	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEC_SPEECH_MT_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.speech.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEC_SPEECH_WC_MT_D	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.speech.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BE_SPEECH_MT_D 		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.speech.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEL_SPEECH_MT_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.speech.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BER_SPEECH_MT_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.speech.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEC_WINEVLOG_MT_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsEventLog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BE_WINEVLOG_MT_D 		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.WindowsEventLog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEL_WINEVLOG_MT_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.WindowsEventLog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BER_WINEVLOG_MT_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.WindowsEventLog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEC_WINMSGBX_MT_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsMessageBox.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BE_WINMSGBX_MT_D 		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.WindowsMessageBox.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEL_WINMSGBX_MT_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.WindowsMessageBox.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BER_WINMSGBX_MT_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.WindowsMessageBox.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEC_W32CONS_MT_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsConsole.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEC_W32CONS_WC_MT_D	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsConsole.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BE_W32CONS_MT_D 		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.WindowsConsole.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEL_W32CONS_MT_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.WindowsConsole.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BER_W32CONS_MT_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.WindowsConsole.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEC_W32DBGR_MT_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsDebugger.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEC_W32DBGR_WC_MT_D	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsDebugger.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BE_W32DBGR_MT_D 		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.WindowsDebugger.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEL_W32DBGR_MT_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.WindowsDebugger.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BER_W32DBGR_MT_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.WindowsDebugger.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEC_W32SYSLOG_MT_D	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsSyslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEC_W32SYSLOG_WC_MT_D	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsSyslog.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BE_W32SYSLOG_MT_D 	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.WindowsSyslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BEL_W32SYSLOG_MT_D	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.WindowsSyslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_BER_W32SYSLOG_MT_D	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.WindowsSyslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a

#  util
LIB_UTIL_MT_R				=   $(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).util.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a

#  core
LIB_CORE_MT_R				=   $(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).core.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a

#  front-end(s)
LIB_FE_ALL_MT_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).fe.all.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_FE_FAIL_MT_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).fe.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_FE_N_MT_R				=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).fe.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_FE_NULL_MT_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).fe.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_FE_SIMPLE_MT_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).fe.simple.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_FE_WINREG_MT_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).fe.WindowsRegistry.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a

#  back-end(s)
LIB_BE_LRSPLIT_MT_R 		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.lrsplit.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BE_N_MT_R 			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEC_TEST_MT_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BE_TEST_MT_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEL_TEST_MT_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BER_TEST_MT_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEC_FAIL_MT_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BE_FAIL_MT_R 			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEL_FAIL_MT_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BER_FAIL_MT_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEC_FILE_MT_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEC_FILE_WC_MT_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.file.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BE_FILE_MT_R 			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEL_FILE_MT_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BER_FILE_MT_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEC_FPRINTF_MT_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEC_FPRINTF_WC_MT_R	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.fprintf.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BE_FPRINTF_MT_R 		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEL_FPRINTF_MT_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BER_FPRINTF_MT_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEC_NULL_MT_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BE_NULL_MT_R 			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEL_NULL_MT_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BER_NULL_MT_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEC_ACE_MT_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.ACE.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BE_ACE_MT_R 			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.ACE.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEL_ACE_MT_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.ACE.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BER_ACE_MT_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.ACE.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEC_COMERROBJ_MT_R	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEC_COMERROBJ_WC_MT_R	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.COMErrorObject.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BE_COMERROBJ_MT_R 	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEL_COMERROBJ_MT_R	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BER_COMERROBJ_MT_R	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEC_SPEECH_MT_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.speech.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEC_SPEECH_WC_MT_R	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.speech.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BE_SPEECH_MT_R 		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.speech.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEL_SPEECH_MT_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.speech.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BER_SPEECH_MT_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.speech.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEC_WINEVLOG_MT_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsEventLog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BE_WINEVLOG_MT_R 		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.WindowsEventLog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEL_WINEVLOG_MT_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.WindowsEventLog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BER_WINEVLOG_MT_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.WindowsEventLog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEC_WINMSGBX_MT_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsMessageBox.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BE_WINMSGBX_MT_R 		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.WindowsMessageBox.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEL_WINMSGBX_MT_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.WindowsMessageBox.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BER_WINMSGBX_MT_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.WindowsMessageBox.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEC_W32CONS_MT_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsConsole.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEC_W32CONS_WC_MT_R	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsConsole.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BE_W32CONS_MT_R 		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.WindowsConsole.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEL_W32CONS_MT_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.WindowsConsole.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BER_W32CONS_MT_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.WindowsConsole.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEC_W32DBGR_MT_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsDebugger.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEC_W32DBGR_WC_MT_R	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsDebugger.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BE_W32DBGR_MT_R 		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.WindowsDebugger.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEL_W32DBGR_MT_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.WindowsDebugger.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BER_W32DBGR_MT_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.WindowsDebugger.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEC_W32SYSLOG_MT_R	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsSyslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEC_W32SYSLOG_WC_MT_R	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsSyslog.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BE_W32SYSLOG_MT_R 	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.WindowsSyslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BEL_W32SYSLOG_MT_R	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.WindowsSyslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_BER_W32SYSLOG_MT_R	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.WindowsSyslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a

#  util
LIB_UTIL_ST_D				=   $(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).util.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a

#  core
LIB_CORE_ST_D				=   $(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).core.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a

#  front-end(s)
LIB_FE_ALL_ST_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).fe.all.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_FE_FAIL_ST_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).fe.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_FE_N_ST_D				=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).fe.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_FE_NULL_ST_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).fe.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_FE_SIMPLE_ST_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).fe.simple.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_FE_WINREG_ST_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).fe.WindowsRegistry.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a

#  back-end(s)
LIB_BE_LRSPLIT_ST_D 		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.lrsplit.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BE_N_ST_D 			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEC_TEST_ST_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BE_TEST_ST_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEL_TEST_ST_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BER_TEST_ST_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEC_FAIL_ST_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BE_FAIL_ST_D 			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEL_FAIL_ST_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BER_FAIL_ST_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEC_FILE_ST_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEC_FILE_WC_ST_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.file.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BE_FILE_ST_D 			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEL_FILE_ST_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BER_FILE_ST_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEC_FPRINTF_ST_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEC_FPRINTF_WC_ST_D	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.fprintf.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BE_FPRINTF_ST_D 		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEL_FPRINTF_ST_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BER_FPRINTF_ST_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEC_NULL_ST_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BE_NULL_ST_D 			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEL_NULL_ST_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BER_NULL_ST_D			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEC_COMERROBJ_ST_D	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEC_COMERROBJ_WC_ST_D	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.COMErrorObject.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BE_COMERROBJ_ST_D 	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEL_COMERROBJ_ST_D	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BER_COMERROBJ_ST_D	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEC_SPEECH_ST_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.speech.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEC_SPEECH_WC_ST_D	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.speech.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BE_SPEECH_ST_D 		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.speech.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEL_SPEECH_ST_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.speech.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BER_SPEECH_ST_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.speech.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEC_WINEVLOG_ST_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsEventLog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BE_WINEVLOG_ST_D 		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.WindowsEventLog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEL_WINEVLOG_ST_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.WindowsEventLog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BER_WINEVLOG_ST_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.WindowsEventLog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEC_WINMSGBX_ST_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsMessageBox.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BE_WINMSGBX_ST_D 		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.WindowsMessageBox.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEL_WINMSGBX_ST_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.WindowsMessageBox.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BER_WINMSGBX_ST_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.WindowsMessageBox.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEC_W32CONS_ST_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsConsole.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEC_W32CONS_WC_ST_D	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsConsole.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BE_W32CONS_ST_D 		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.WindowsConsole.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEL_W32CONS_ST_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.WindowsConsole.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BER_W32CONS_ST_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.WindowsConsole.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEC_W32DBGR_ST_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsDebugger.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEC_W32DBGR_WC_ST_D	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsDebugger.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BE_W32DBGR_ST_D 		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.WindowsDebugger.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEL_W32DBGR_ST_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.WindowsDebugger.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BER_W32DBGR_ST_D		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.WindowsDebugger.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEC_W32SYSLOG_ST_D	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsSyslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEC_W32SYSLOG_WC_ST_D	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsSyslog.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BE_W32SYSLOG_ST_D 	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.WindowsSyslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BEL_W32SYSLOG_ST_D	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.WindowsSyslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_BER_W32SYSLOG_ST_D	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.WindowsSyslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a

#  util
LIB_UTIL_ST_R				=   $(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).util.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a

#  core
LIB_CORE_ST_R				=   $(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).core.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a

#  front-end(s)
LIB_FE_ALL_ST_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).fe.all.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_FE_FAIL_ST_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).fe.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_FE_N_ST_R				=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).fe.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_FE_NULL_ST_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).fe.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_FE_SIMPLE_ST_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).fe.simple.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_FE_WINREG_ST_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).fe.WindowsRegistry.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a

#  back-end(s)
LIB_BE_LRSPLIT_ST_R 		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.lrsplit.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BE_N_ST_R 			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEC_TEST_ST_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BE_TEST_ST_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEL_TEST_ST_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BER_TEST_ST_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEC_FAIL_ST_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BE_FAIL_ST_R 			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEL_FAIL_ST_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BER_FAIL_ST_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEC_FILE_ST_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEC_FILE_WC_ST_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.file.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BE_FILE_ST_R 			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEL_FILE_ST_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BER_FILE_ST_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEC_FPRINTF_ST_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEC_FPRINTF_WC_ST_R	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.fprintf.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BE_FPRINTF_ST_R 		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEL_FPRINTF_ST_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BER_FPRINTF_ST_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEC_NULL_ST_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BE_NULL_ST_R 			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEL_NULL_ST_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BER_NULL_ST_R			=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEC_COMERROBJ_ST_R	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEC_COMERROBJ_WC_ST_R	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.COMErrorObject.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BE_COMERROBJ_ST_R 	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEL_COMERROBJ_ST_R	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BER_COMERROBJ_ST_R	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEC_SPEECH_ST_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.speech.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEC_SPEECH_WC_ST_R	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.speech.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BE_SPEECH_ST_R 		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.speech.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEL_SPEECH_ST_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.speech.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BER_SPEECH_ST_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.speech.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEC_WINEVLOG_ST_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsEventLog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BE_WINEVLOG_ST_R 		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.WindowsEventLog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEL_WINEVLOG_ST_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.WindowsEventLog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BER_WINEVLOG_ST_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.WindowsEventLog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEC_WINMSGBX_ST_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsMessageBox.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BE_WINMSGBX_ST_R 		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.WindowsMessageBox.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEL_WINMSGBX_ST_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.WindowsMessageBox.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BER_WINMSGBX_ST_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.WindowsMessageBox.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEC_W32CONS_ST_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsConsole.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEC_W32CONS_WC_ST_R	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsConsole.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BE_W32CONS_ST_R 		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.WindowsConsole.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEL_W32CONS_ST_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.WindowsConsole.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BER_W32CONS_ST_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.WindowsConsole.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEC_W32DBGR_ST_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsDebugger.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEC_W32DBGR_WC_ST_R	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsDebugger.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BE_W32DBGR_ST_R 		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.WindowsDebugger.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEL_W32DBGR_ST_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.WindowsDebugger.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BER_W32DBGR_ST_R		=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.WindowsDebugger.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEC_W32SYSLOG_ST_R	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsSyslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEC_W32SYSLOG_WC_ST_R	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.WindowsSyslog.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BE_W32SYSLOG_ST_R 	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.WindowsSyslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BEL_W32SYSLOG_ST_R	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.WindowsSyslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a
LIB_BER_W32SYSLOG_ST_R	=	$(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.WindowsSyslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a











# b64
LIB_B64_MT_D			=   $(PROJ_LIB_DIR)\lib$(B64_TAG_VER).pan.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_B64_MT_R			=   $(PROJ_LIB_DIR)\lib$(B64_TAG_VER).pan.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_B64_ST_D			=   $(PROJ_LIB_DIR)\lib$(B64_TAG_VER).pan.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_B64_ST_R			=   $(PROJ_LIB_DIR)\lib$(B64_TAG_VER).pan.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a

# shwild
LIB_SHWILD_MT_D         =   $(PROJ_LIB_DIR)\lib$(SHWILD_TAG_VER).pan.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_SHWILD_MT_R         =   $(PROJ_LIB_DIR)\lib$(SHWILD_TAG_VER).pan.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_SHWILD_ST_D         =   $(PROJ_LIB_DIR)\lib$(SHWILD_TAG_VER).pan.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_SHWILD_ST_R         =   $(PROJ_LIB_DIR)\lib$(SHWILD_TAG_VER).pan.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a

# xtests
LIB_XTESTS_MT_D         =   $(PROJ_LIB_DIR)\lib$(XTESTS_TAG_VER).pan.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.a
LIB_XTESTS_MT_R         =   $(PROJ_LIB_DIR)\lib$(XTESTS_TAG_VER).pan.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.a
LIB_XTESTS_ST_D         =   $(PROJ_LIB_DIR)\lib$(XTESTS_TAG_VER).pan.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.a
LIB_XTESTS_ST_R         =   $(PROJ_LIB_DIR)\lib$(XTESTS_TAG_VER).pan.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).a

########################################
# Examples

EX_CPP_0_MT_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.0.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_1_MT_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.1.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_2_MT_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.2.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_3_MT_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.3.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_4_MT_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.4.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_5_MT_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.5.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_6_MT_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.6.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_7_MT_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.7.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_9_MT_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.9.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_10_MT_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.10.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_11_MT_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.11.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_12_MT_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.12.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_13_MT_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.13.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_14_MT_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.14.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_15_MT_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.15.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_16_MT_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.16.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_17_MT_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.17.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_18_MT_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.18.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_19_MT_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.19.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_20_MT_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.20.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_21_MT_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.21.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_22_MT_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.22.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_23_MT_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.23.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_24_MT_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.24.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_25_MT_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.25.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_26_MT_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.26.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_27_MT_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.27.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_C_0_MT_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.0.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_C_1_MT_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.1.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_C_2_MT_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.2.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_C_3_MT_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.3.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_C_4_MT_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.4.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_C_5_MT_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.5.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_C_6_MT_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.6.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_C_7_MT_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.7.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
EX_CPP_0_MT_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.0.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_1_MT_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.1.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_2_MT_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.2.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_3_MT_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.3.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_4_MT_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.4.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_5_MT_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.5.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_6_MT_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.6.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_7_MT_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.7.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_9_MT_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.9.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_10_MT_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.10.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_11_MT_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.11.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_12_MT_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.12.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_13_MT_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.13.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_14_MT_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.14.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_15_MT_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.15.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_16_MT_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.16.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_17_MT_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.17.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_18_MT_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.18.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_19_MT_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.19.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_20_MT_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.20.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_21_MT_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.21.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_22_MT_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.22.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_23_MT_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.23.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_24_MT_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.24.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_25_MT_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.25.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_26_MT_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.26.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_27_MT_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.27.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_C_0_MT_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.0.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_C_1_MT_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.1.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_C_2_MT_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.2.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_C_3_MT_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.3.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_C_4_MT_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.4.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_C_5_MT_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.5.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_C_6_MT_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.6.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_C_7_MT_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.7.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
EX_CPP_0_ST_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.0.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_CPP_1_ST_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.1.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_CPP_2_ST_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.2.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_CPP_3_ST_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.3.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_CPP_4_ST_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.4.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_CPP_5_ST_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.5.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_CPP_6_ST_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.6.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_CPP_7_ST_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.7.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_CPP_9_ST_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.9.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_CPP_10_ST_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.10.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_CPP_11_ST_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.11.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_CPP_12_ST_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.12.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_CPP_13_ST_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.13.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_CPP_14_ST_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.14.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_CPP_15_ST_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.15.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_CPP_16_ST_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.16.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_CPP_17_ST_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.17.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_CPP_18_ST_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.18.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_CPP_19_ST_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.19.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_CPP_20_ST_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.20.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_CPP_21_ST_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.21.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_CPP_22_ST_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.22.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_CPP_23_ST_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.23.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_CPP_24_ST_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.24.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_CPP_25_ST_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.25.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_CPP_26_ST_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.26.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_CPP_27_ST_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.27.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_C_0_ST_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.0.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_C_1_ST_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.1.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_C_2_ST_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.2.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_C_3_ST_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.3.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_C_4_ST_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.4.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_C_5_ST_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.5.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_C_6_ST_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.6.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_C_7_ST_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.7.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
EX_CPP_0_ST_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.0.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_CPP_1_ST_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.1.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_CPP_2_ST_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.2.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_CPP_3_ST_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.3.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_CPP_4_ST_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.4.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_CPP_5_ST_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.5.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_CPP_6_ST_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.6.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_CPP_7_ST_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.7.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_CPP_9_ST_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.9.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_CPP_10_ST_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.10.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_CPP_11_ST_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.11.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_CPP_12_ST_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.12.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_CPP_13_ST_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.13.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_CPP_14_ST_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.14.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_CPP_15_ST_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.15.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_CPP_16_ST_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.16.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_CPP_17_ST_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.17.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_CPP_18_ST_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.18.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_CPP_19_ST_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.19.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_CPP_20_ST_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.20.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_CPP_21_ST_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.21.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_CPP_22_ST_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.22.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_CPP_23_ST_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.23.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_CPP_24_ST_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.24.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_CPP_25_ST_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.25.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_CPP_26_ST_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.26.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_CPP_27_ST_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.27.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_C_0_ST_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.0.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_C_1_ST_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.1.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_C_2_ST_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.2.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_C_3_ST_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.3.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_C_4_ST_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.4.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_C_5_ST_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.5.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_C_6_ST_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.6.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
EX_C_7_ST_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.7.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe

########################################
# Tests

##############################
# Component Tests

TARG_TEST_COMP_core_initseq_MT_D	=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.core.init_sequence.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_core_initseq_MT_R	=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.core.init_sequence.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_core_initseq_ST_D	=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.core.init_sequence.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_core_initseq_ST_R	=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.core.init_sequence.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_custsev_MT_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.custom_severity.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_custsev_MT_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.custom_severity.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_custsev_ST_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.custom_severity.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_custsev_ST_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.custom_severity.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_file_mt_MT_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.be.file.threading.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_file_mt_MT_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.be.file.threading.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_ins_args_MT_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.args.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_ins_args_MT_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.args.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_ins_args_ST_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.args.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_ins_args_ST_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.args.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_ins_b64_MT_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.b64.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_ins_b64_MT_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.b64.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_ins_b64_ST_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.b64.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_ins_b64_ST_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.b64.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_ins_bool_MT_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.boolean.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_ins_bool_MT_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.boolean.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_ins_bool_ST_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.boolean.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_ins_bool_ST_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.boolean.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_ins_hostid_MT_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.hostId.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_ins_hostid_MT_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.hostId.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_ins_hostid_ST_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.hostId.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_ins_hostid_ST_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.hostId.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_ins_int_MT_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.integer.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_ins_int_MT_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.integer.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_ins_int_ST_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.integer.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_ins_int_ST_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.integer.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_ins_pad_MT_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.pad.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_ins_pad_MT_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.pad.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_ins_pad_ST_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.pad.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_ins_pad_ST_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.pad.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_ins_ptr_MT_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.pointer.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_ins_ptr_MT_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.pointer.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_ins_ptr_ST_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.pointer.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_ins_ptr_ST_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.pointer.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_ins_prid_MT_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.processId.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_ins_prid_MT_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.processId.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_ins_prid_ST_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.processId.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_ins_prid_ST_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.processId.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_ins_real_MT_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.real.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_ins_real_MT_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.real.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_ins_real_ST_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.real.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_ins_real_ST_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.real.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_ins_slice_MT_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.slice.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_ins_slice_MT_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.slice.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_ins_slice_ST_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.slice.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_ins_slice_ST_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.slice.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_ins_thrid_MT_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.threadId.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_ins_thrid_MT_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.threadId.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_ins_thrid_ST_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.threadId.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_ins_thrid_ST_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.threadId.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_ins_w2m_MT_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.w2m.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_ins_w2m_MT_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.w2m.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_ins_w2m_ST_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.w2m.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_ins_w2m_ST_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.w2m.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_log_1_MT_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.log.1.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_log_1_MT_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.log.1.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_log_1_ST_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.log.1.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_log_1_ST_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.log.1.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_pan_puts_MT_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.core.pan_logputs.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_pan_puts_MT_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.core.pan_logputs.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_pan_puts_ST_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.core.pan_logputs.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_pan_puts_ST_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.core.pan_logputs.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_pan_prtf_MT_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.core.pan_logprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_pan_prtf_MT_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.core.pan_logprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_pan_prtf_ST_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.core.pan_logprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_pan_prtf_ST_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.core.pan_logprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_trace_1_MT_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.trace.1.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_COMP_trace_1_MT_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.trace.1.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_COMP_trace_1_ST_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.trace.1.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_trace_1_ST_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.trace.1.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe

##############################
# Performance Tests

TARG_TEST_PERF_ins_w2m_MT_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserter.w2m.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_PERF_ins_w2m_MT_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserter.w2m.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_PERF_ins_w2m_ST_D		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserter.w2m.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_PERF_ins_w2m_ST_R		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserter.w2m.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe

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
TEST__MT_D_API_W_BE_ACE						=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.ACE.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TEST__MT_D_API_W_BE_FPRINTF					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TEST__MT_D_API_W_BE_COMERROBJ				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TEST__MT_D_API_W_BE_WINEVLOG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.WindowsEventLog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TEST__MT_D_API_W_BE_WINMSGBX				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.WindowsMessageBox.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TEST__MT_D_API_W_BE_W32CONS					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.WindowsConsole.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TEST__MT_D_API_W_BE_W32DBGR					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.WindowsDebugger.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TEST__MT_D_API_W_BE_W32SYSLOG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.WindowsSyslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TEST__MT_D_API_W_BELR_2_W32DBGR_FPRINTF		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.l.WindowsDebugger-r.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TEST__MT_D_API_W_BELR_3_W32DBGR_W32SYSLOG	=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.l.WindowsDebugger-r.W32syslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARGET_TEST_FE_MT_D 						=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.fe.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TEST__MT_D_BE_N_FAIL						=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.N.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TEST__MT_R_API_W_BE_ACE						=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.ACE.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TEST__MT_R_API_W_BE_FPRINTF					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TEST__MT_R_API_W_BE_COMERROBJ				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TEST__MT_R_API_W_BE_WINEVLOG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.WindowsEventLog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TEST__MT_R_API_W_BE_WINMSGBX				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.WindowsMessageBox.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TEST__MT_R_API_W_BE_W32CONS					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.WindowsConsole.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TEST__MT_R_API_W_BE_W32DBGR					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.WindowsDebugger.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TEST__MT_R_API_W_BE_W32SYSLOG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.WindowsSyslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TEST__MT_R_API_W_BELR_2_W32DBGR_FPRINTF		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.l.WindowsDebugger-r.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TEST__MT_R_API_W_BELR_3_W32DBGR_W32SYSLOG	=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.l.WindowsDebugger-r.W32syslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARGET_TEST_FE_MT_R 						=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.fe.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TEST__MT_R_BE_N_FAIL						=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.N.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TEST__ST_D_API_W_BE_FPRINTF					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TEST__ST_D_API_W_BE_COMERROBJ				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TEST__ST_D_API_W_BE_WINEVLOG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.WindowsEventLog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TEST__ST_D_API_W_BE_WINMSGBX				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.WindowsMessageBox.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TEST__ST_D_API_W_BE_W32CONS					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.WindowsConsole.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TEST__ST_D_API_W_BE_W32DBGR					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.WindowsDebugger.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TEST__ST_D_API_W_BE_W32SYSLOG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.WindowsSyslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TEST__ST_D_API_W_BELR_2_W32DBGR_FPRINTF		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.l.WindowsDebugger-r.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TEST__ST_D_API_W_BELR_3_W32DBGR_W32SYSLOG	=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.l.WindowsDebugger-r.W32syslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARGET_TEST_FE_ST_D 						=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.fe.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TEST__ST_D_BE_N_FAIL						=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.N.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TEST__ST_R_API_W_BE_FPRINTF					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TEST__ST_R_API_W_BE_COMERROBJ				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TEST__ST_R_API_W_BE_WINEVLOG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.WindowsEventLog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TEST__ST_R_API_W_BE_WINMSGBX				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.WindowsMessageBox.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TEST__ST_R_API_W_BE_W32CONS					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.WindowsConsole.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TEST__ST_R_API_W_BE_W32DBGR					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.WindowsDebugger.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TEST__ST_R_API_W_BE_W32SYSLOG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.WindowsSyslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TEST__ST_R_API_W_BELR_2_W32DBGR_FPRINTF		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.l.WindowsDebugger-r.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TEST__ST_R_API_W_BELR_3_W32DBGR_W32SYSLOG	=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.l.WindowsDebugger-r.W32syslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARGET_TEST_FE_ST_R 						=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.fe.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TEST__ST_R_BE_N_FAIL						=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.N.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe

##############################
# Unit Tests
#
# NOTE: dynamic_initialisation is contracted, as scares CodeWarrior's linker (for being longer than 63 chars)

TARG_TEST_UNIT_lvls_dyninit_MT_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.levels.dynamic_init.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_lvls_dyninit_MT_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.levels.dynamic_init.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_lvls_dyninit_ST_D			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.levels.dynamic_init.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_lvls_dyninit_ST_R			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.levels.dynamic_init.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_lvls_vals_MT_D				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.levels.values.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_lvls_vals_MT_R				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.levels.values.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_lvls_vals_ST_D				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.levels.values.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_lvls_vals_ST_R				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.levels.values.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_getcurrtm_MT_D				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.getcurrenttime.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_getcurrtm_MT_R				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.getcurrenttime.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_getcurrtm_ST_D				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.getcurrenttime.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_getcurrtm_ST_R				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.getcurrenttime.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_getversion_MT_D				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.getversion.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_getversion_MT_R				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.getversion.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_getversion_ST_D				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.getversion.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_getversion_ST_R				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.getversion.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_gethostname_MT_D				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.gethostname.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_gethostname_MT_R				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.gethostname.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_gethostname_ST_D				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.gethostname.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_gethostname_ST_R				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.gethostname.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_onbailout_MT_D				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.onbailout.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_strnlen_MT_D				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.strnlen.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_onbailout_MT_R				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.onbailout.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_strnlen_MT_R				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.strnlen.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_onbailout_ST_D				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.onbailout.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_strnlen_ST_D				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.strnlen.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_onbailout_ST_R				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.onbailout.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_strnlen_ST_R				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.strnlen.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_bec_CEO_MT_D					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.bec.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_bec_CEO_MT_R					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.bec.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_bec_CEO_ST_D					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.bec.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_bec_CEO_ST_R					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.bec.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_bec_file_MT_D				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.bec.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_bec_file_MT_R				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.bec.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_bec_file_ST_D				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.bec.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_bec_file_ST_R				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.bec.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_bec_fprintf_MT_D				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.bec.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_bec_fprintf_MT_R				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.bec.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_bec_fprintf_ST_D				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.bec.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_bec_fprintf_ST_R				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.bec.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_bec_fail_MT_D				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.bec.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_bec_fail_MT_R				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.bec.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_bec_fail_ST_D				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.bec.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_bec_fail_ST_R				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.bec.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_be_fail_MT_D					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_be_fail_MT_R					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_be_fail_ST_D					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_be_fail_ST_R					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_be_fail_MT_D					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_be_fail_MT_R					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_be_fail_ST_D					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_be_fail_ST_R					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_be_lrsplit_MT_D				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.lrsplit.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_be_lrsplit_MT_R				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.lrsplit.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_be_lrsplit_ST_D				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.lrsplit.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_be_lrsplit_ST_R				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.lrsplit.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_be_N_MT_D					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_be_N_MT_R					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_be_N_ST_D					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_be_N_ST_R					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_fe_all_MT_D					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.all.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_fe_all_MT_R					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.all.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_fe_all_ST_D					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.all.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_fe_all_ST_R					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.all.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_fe_fail_MT_D					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_fe_fail_MT_R					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_fe_fail_ST_D					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_fe_fail_ST_R					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_fe_N_MT_D					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_fe_N_MT_R					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_fe_N_ST_D					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_fe_N_ST_R					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_fe_null_MT_D					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_fe_null_MT_R					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_fe_null_ST_D					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_fe_null_ST_R					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_fe_simple_MT_D				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.simple.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_fe_simple_MT_R				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.simple.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_fe_simple_ST_D				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.simple.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_fe_simple_ST_R				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.simple.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_fe_WinReg_MT_D				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.WindowsRegistry.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.debug.exe
TARG_TEST_UNIT_fe_WinReg_MT_R				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.WindowsRegistry.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).mt.exe
TARG_TEST_UNIT_fe_WinReg_ST_D				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.WindowsRegistry.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_fe_WinReg_ST_R				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.WindowsRegistry.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe

############################################################
# Objects

########################################
# Libraries

# core

OBJ_utl_bailout_MT_D		= $(PROJ_OBJ_DIR)\util.bailout.mt.debug.obj
OBJ_utl_init_code_strs_MT_D	= $(PROJ_OBJ_DIR)\util.init_err_strings.mt.debug.obj
OBJ_utl_sev_strs_MT_D		= $(PROJ_OBJ_DIR)\util.sev_strings.mt.debug.obj
OBJ_utl_snprintf_MT_D 		= $(PROJ_OBJ_DIR)\util.snprintf.mt.debug.obj
OBJ_utl_strdup_MT_D 		= $(PROJ_OBJ_DIR)\util.strdup.mt.debug.obj
OBJ_utl_procid_MT_D 		= $(PROJ_OBJ_DIR)\util.procid.mt.debug.obj
OBJ_utl_thread_MT_D 		= $(PROJ_OBJ_DIR)\util.thread.mt.debug.obj
OBJ_utl_be_context_MT_D		= $(PROJ_OBJ_DIR)\util.be_context.mt.debug.obj
OBJ_utl_core_apidefs_MT_D	= $(PROJ_OBJ_DIR)\util.core_apidefs.mt.debug.obj
OBJ_utl_be_parse_MT_D		= $(PROJ_OBJ_DIR)\util.be_parse.mt.debug.obj
OBJ_utl_strnlen_MT_D		= $(PROJ_OBJ_DIR)\util.strnlen.mt.debug.obj
OBJ_utl_time_MT_D			= $(PROJ_OBJ_DIR)\util.time.mt.debug.obj
OBJ_utl_host_name_MT_D		= $(PROJ_OBJ_DIR)\util.host_name.mt.debug.obj
OBJ_cr_api_MT_D 			= $(PROJ_OBJ_DIR)\core.api.mt.debug.obj
OBJ_cr_auto_MT_D 			= $(PROJ_OBJ_DIR)\core.auto.mt.debug.obj
OBJ_cr_logprintf_MT_D		= $(PROJ_OBJ_DIR)\core.logprintf.mt.debug.obj
OBJ_ins_args_MT_D	 		= $(PROJ_OBJ_DIR)\inserters.args.mt.debug.obj
OBJ_ins_b64_MT_D	 		= $(PROJ_OBJ_DIR)\inserters.b64.mt.debug.obj
OBJ_ins_blob_MT_D	 		= $(PROJ_OBJ_DIR)\inserters.blob.mt.debug.obj
OBJ_ins_bool_MT_D	 		= $(PROJ_OBJ_DIR)\inserters.boolean.mt.debug.obj
OBJ_ins_excp_MT_D	 		= $(PROJ_OBJ_DIR)\inserters.exception.mt.debug.obj
OBJ_ins_host_MT_D	 		= $(PROJ_OBJ_DIR)\inserters.hostid.mt.debug.obj
OBJ_ins_int_MT_D	 		= $(PROJ_OBJ_DIR)\inserters.integer.mt.debug.obj
OBJ_ins_ptr_MT_D	 		= $(PROJ_OBJ_DIR)\inserters.pointer.mt.debug.obj
OBJ_ins_prid_MT_D	 		= $(PROJ_OBJ_DIR)\inserters.processid.mt.debug.obj
OBJ_ins_real_MT_D	 		= $(PROJ_OBJ_DIR)\inserters.real.mt.debug.obj
OBJ_ins_slice_MT_D	 	= $(PROJ_OBJ_DIR)\inserters.slice.mt.debug.obj
OBJ_ins_thrid_MT_D	 	= $(PROJ_OBJ_DIR)\inserters.threadid.mt.debug.obj
OBJ_ins_w2m_MT_D	 		= $(PROJ_OBJ_DIR)\inserters.w2m.mt.debug.obj
#PDB_bec_test_MT_D 		= $(PROJ_OBJ_DIR)\bec.test.mt.debug.pdb
OBJ_bec_test_MT_D 		= $(PROJ_OBJ_DIR)\bec.test.mt.debug.obj
OBJ_be_test_MT_D 			= $(PROJ_OBJ_DIR)\be.test.mt.debug.obj
OBJ_bel_test_MT_D 		= $(PROJ_OBJ_DIR)\bel.test.mt.debug.obj
OBJ_ber_test_MT_D 		= $(PROJ_OBJ_DIR)\ber.test.mt.debug.obj
OBJ_be_lrsplit__MT_D		= $(PROJ_OBJ_DIR)\be.lrsplit.mt.debug.obj
OBJ_be_N__MT_D			= $(PROJ_OBJ_DIR)\be.N.mt.debug.obj
OBJ_bec_fail__MT_D		= $(PROJ_OBJ_DIR)\bec.fail.mt.debug.obj
OBJ_be_fail__MT_D			= $(PROJ_OBJ_DIR)\be.fail.mt.debug.obj
OBJ_bel_fail__MT_D		= $(PROJ_OBJ_DIR)\bel.fail.mt.debug.obj
OBJ_ber_fail__MT_D		= $(PROJ_OBJ_DIR)\ber.fail.mt.debug.obj
OBJ_bec_file__MT_D		= $(PROJ_OBJ_DIR)\bec.file.mt.debug.obj
OBJ_bec_file_WC__MT_D		= $(PROJ_OBJ_DIR)\bec.file.WithCallback.mt.debug.obj
OBJ_be_file__MT_D			= $(PROJ_OBJ_DIR)\be.file.mt.debug.obj
OBJ_bel_file__MT_D		= $(PROJ_OBJ_DIR)\bel.file.mt.debug.obj
OBJ_ber_file__MT_D		= $(PROJ_OBJ_DIR)\ber.file.mt.debug.obj
OBJ_bec_fprintf__MT_D		= $(PROJ_OBJ_DIR)\bec.fprintf.mt.debug.obj
OBJ_bec_fprintf_WC__MT_D	= $(PROJ_OBJ_DIR)\bec.fprintf.WithCallback.mt.debug.obj
OBJ_be_fprintf__MT_D		= $(PROJ_OBJ_DIR)\be.fprintf.mt.debug.obj
OBJ_bel_fprintf__MT_D		= $(PROJ_OBJ_DIR)\bel.fprintf.mt.debug.obj
OBJ_ber_fprintf__MT_D		= $(PROJ_OBJ_DIR)\ber.fprintf.mt.debug.obj
OBJ_bec_null__MT_D		= $(PROJ_OBJ_DIR)\bec.null.mt.debug.obj
OBJ_be_null__MT_D			= $(PROJ_OBJ_DIR)\be.null.mt.debug.obj
OBJ_bel_null__MT_D		= $(PROJ_OBJ_DIR)\bel.null.mt.debug.obj
OBJ_ber_null__MT_D		= $(PROJ_OBJ_DIR)\ber.null.mt.debug.obj
OBJ_bec_ACE__MT_D			= $(PROJ_OBJ_DIR)\bec.ACE.mt.debug.obj
OBJ_be_ACE__MT_D			= $(PROJ_OBJ_DIR)\be.ACE.mt.debug.obj
OBJ_bel_ACE__MT_D			= $(PROJ_OBJ_DIR)\bel.ACE.mt.debug.obj
OBJ_ber_ACE__MT_D			= $(PROJ_OBJ_DIR)\ber.ACE.mt.debug.obj
OBJ_bec_COMERROBJ__MT_D		= $(PROJ_OBJ_DIR)\bec.COMErrorObject.mt.debug.obj
OBJ_bec_COMERROBJ_WC__MT_D		= $(PROJ_OBJ_DIR)\bec.COMErrorObject.WithCallback.mt.debug.obj
OBJ_be_COMERROBJ__MT_D		= $(PROJ_OBJ_DIR)\be.COMErrorObject.mt.debug.obj
OBJ_bel_COMERROBJ__MT_D		= $(PROJ_OBJ_DIR)\bel.COMErrorObject.mt.debug.obj
OBJ_ber_COMERROBJ__MT_D		= $(PROJ_OBJ_DIR)\ber.COMErrorObject.mt.debug.obj
OBJ_bec_SPEECH__MT_D		= $(PROJ_OBJ_DIR)\bec.speech.mt.debug.obj
OBJ_bec_SPEECH_WC__MT_D		= $(PROJ_OBJ_DIR)\bec.speech.WithCallback.mt.debug.obj
OBJ_be_SPEECH__MT_D			= $(PROJ_OBJ_DIR)\be.speech.mt.debug.obj
OBJ_bel_SPEECH__MT_D		= $(PROJ_OBJ_DIR)\bel.speech.mt.debug.obj
OBJ_ber_SPEECH__MT_D		= $(PROJ_OBJ_DIR)\ber.speech.mt.debug.obj
OBJ_bec_WINEVLOG__MT_D		= $(PROJ_OBJ_DIR)\bec.WindowsEventLog.mt.debug.obj
OBJ_be_WINEVLOG__MT_D		= $(PROJ_OBJ_DIR)\be.WindowsEventLog.mt.debug.obj
OBJ_bel_WINEVLOG__MT_D		= $(PROJ_OBJ_DIR)\bel.WindowsEventLog.mt.debug.obj
OBJ_ber_WINEVLOG__MT_D		= $(PROJ_OBJ_DIR)\ber.WindowsEventLog.mt.debug.obj
OBJ_bec_WINMSGBX__MT_D		= $(PROJ_OBJ_DIR)\bec.WindowsMessageBox.mt.debug.obj
OBJ_be_WINMSGBX__MT_D		= $(PROJ_OBJ_DIR)\be.WindowsMessageBox.mt.debug.obj
OBJ_bel_WINMSGBX__MT_D		= $(PROJ_OBJ_DIR)\bel.WindowsMessageBox.mt.debug.obj
OBJ_ber_WINMSGBX__MT_D		= $(PROJ_OBJ_DIR)\ber.WindowsMessageBox.mt.debug.obj
OBJ_bec_W32CONS__MT_D		= $(PROJ_OBJ_DIR)\bec.WindowsConsole.mt.debug.obj
OBJ_bec_W32CONS_WC__MT_D	= $(PROJ_OBJ_DIR)\bec.WindowsConsole.WithCallback.mt.debug.obj
OBJ_be_W32CONS__MT_D		= $(PROJ_OBJ_DIR)\be.WindowsConsole.mt.debug.obj
OBJ_bel_W32CONS__MT_D		= $(PROJ_OBJ_DIR)\bel.WindowsConsole.mt.debug.obj
OBJ_ber_W32CONS__MT_D		= $(PROJ_OBJ_DIR)\ber.WindowsConsole.mt.debug.obj
OBJ_bec_W32DBGR__MT_D		= $(PROJ_OBJ_DIR)\bec.WindowsDebugger.mt.debug.obj
OBJ_bec_W32DBGR_WC__MT_D		= $(PROJ_OBJ_DIR)\bec.WindowsDebugger.WithCallback.mt.debug.obj
OBJ_be_W32DBGR__MT_D		= $(PROJ_OBJ_DIR)\be.WindowsDebugger.mt.debug.obj
OBJ_bel_W32DBGR__MT_D		= $(PROJ_OBJ_DIR)\bel.WindowsDebugger.mt.debug.obj
OBJ_ber_W32DBGR__MT_D		= $(PROJ_OBJ_DIR)\ber.WindowsDebugger.mt.debug.obj
OBJ_bec_W32SYSLOG__MT_D		= $(PROJ_OBJ_DIR)\bec.WindowsSyslog.mt.debug.obj
OBJ_bec_W32SYSLOG_WC__MT_D		= $(PROJ_OBJ_DIR)\bec.WindowsSyslog.WithCallback.mt.debug.obj
OBJ_be_W32SYSLOG__MT_D		= $(PROJ_OBJ_DIR)\be.WindowsSyslog.mt.debug.obj
OBJ_bel_W32SYSLOG__MT_D		= $(PROJ_OBJ_DIR)\bel.WindowsSyslog.mt.debug.obj
OBJ_ber_W32SYSLOG__MT_D		= $(PROJ_OBJ_DIR)\ber.WindowsSyslog.mt.debug.obj
OBJ_fe_all__MT_D 			= $(PROJ_OBJ_DIR)\fe.all.mt.debug.obj
OBJ_fe_fail__MT_D 			= $(PROJ_OBJ_DIR)\fe.fail.mt.debug.obj
OBJ_fe_N__MT_D 				= $(PROJ_OBJ_DIR)\fe.N.mt.debug.obj
OBJ_fe_null__MT_D 			= $(PROJ_OBJ_DIR)\fe.null.mt.debug.obj
OBJ_fe_simple__MT_D 		= $(PROJ_OBJ_DIR)\fe.simple.mt.debug.obj
OBJ_fe_winreg__MT_D 		= $(PROJ_OBJ_DIR)\fe.WindowsRegistry.mt.debug.obj

OBJ_UTIL_MT_D=\
 $(OBJ_utl_bailout_MT_D)\
 $(OBJ_utl_init_code_strs_MT_D)\
 $(OBJ_utl_sev_strs_MT_D)\
 $(OBJ_utl_snprintf_MT_D)\
 $(OBJ_utl_strdup_MT_D)\
 $(OBJ_utl_procid_MT_D)\
 $(OBJ_utl_thread_MT_D)\
 $(OBJ_utl_be_context_MT_D)\
 $(OBJ_utl_core_apidefs_MT_D)\
 $(OBJ_utl_be_parse_MT_D)\
 $(OBJ_utl_strnlen_MT_D)\
 $(OBJ_utl_time_MT_D)\
 $(OBJ_utl_host_name_MT_D)\
 \

OBJ_CORE_MT_D=\
 $(OBJ_cr_api_MT_D)\
 $(OBJ_cr_auto_MT_D)\
 $(OBJ_cr_logprintf_MT_D)\
 $(OBJ_ins_args_MT_D)\
 $(OBJ_ins_b64_MT_D)\
 $(OBJ_ins_blob_MT_D)\
 $(OBJ_ins_bool_MT_D)\
 $(OBJ_ins_excp_MT_D)\
 $(OBJ_ins_host_MT_D)\
 $(OBJ_ins_int_MT_D)\
 $(OBJ_ins_ptr_MT_D)\
 $(OBJ_ins_prid_MT_D)\
 $(OBJ_ins_real_MT_D)\
 $(OBJ_ins_slice_MT_D)\
 $(OBJ_ins_thrid_MT_D)\
 $(OBJ_ins_w2m_MT_D)\
 \


OBJ_BE_LRSPLIT_MT_D=\
 $(OBJ_be_lrsplit__MT_D)\
 \

OBJ_BE_N_MT_D=\
 $(OBJ_be_N__MT_D)\
 \

OBJ_BEC_TEST_MT_D=\
 $(OBJ_bec_test_MT_D)\
 \


OBJ_BE_TEST_MT_D=\
 $(OBJ_be_test_MT_D)\
 \


OBJ_BEL_TEST_MT_D=\
 $(OBJ_bel_test_MT_D)\
 \


OBJ_BER_TEST_MT_D=\
 $(OBJ_ber_test_MT_D)\
 \


OBJ_BEC_FAIL_MT_D=\
 $(OBJ_bec_fail__MT_D)\
 \

OBJ_BE_FAIL_MT_D=\
 $(OBJ_be_fail__MT_D)\
 \

OBJ_BEL_FAIL_MT_D=\
 $(OBJ_bel_fail__MT_D)\
 \

OBJ_BER_FAIL_MT_D=\
 $(OBJ_ber_fail__MT_D)\
 \

OBJ_BEC_FILE_MT_D=\
 $(OBJ_bec_file__MT_D)\
 \

OBJ_BEC_FILE_WC_MT_D=\
 $(OBJ_bec_file_WC__MT_D)\
 \

OBJ_BE_FILE_MT_D=\
 $(OBJ_be_file__MT_D)\
 \

OBJ_BEL_FILE_MT_D=\
 $(OBJ_bel_file__MT_D)\
 \

OBJ_BER_FILE_MT_D=\
 $(OBJ_ber_file__MT_D)\
 \

OBJ_BEC_FPRINTF_MT_D=\
 $(OBJ_bec_fprintf__MT_D)\
 \

OBJ_BEC_FPRINTF_WC_MT_D=\
 $(OBJ_bec_fprintf_WC__MT_D)\
 \

OBJ_BE_FPRINTF_MT_D=\
 $(OBJ_be_fprintf__MT_D)\
 \

OBJ_BEL_FPRINTF_MT_D=\
 $(OBJ_bel_fprintf__MT_D)\
 \

OBJ_BER_FPRINTF_MT_D=\
 $(OBJ_ber_fprintf__MT_D)\
 \

OBJ_BEC_NULL_MT_D=\
 $(OBJ_bec_null__MT_D)\
 \

OBJ_BE_NULL_MT_D=\
 $(OBJ_be_null__MT_D)\
 \

OBJ_BEL_NULL_MT_D=\
 $(OBJ_bel_null__MT_D)\
 \

OBJ_BER_NULL_MT_D=\
 $(OBJ_ber_null__MT_D)\
 \

OBJ_BEC_ACE_MT_D=\
 $(OBJ_bec_ACE__MT_D)\
 \

OBJ_BE_ACE_MT_D=\
 $(OBJ_be_ACE__MT_D)\
 \

OBJ_BEL_ACE_MT_D=\
 $(OBJ_bel_ACE__MT_D)\
 \

OBJ_BER_ACE_MT_D=\
 $(OBJ_ber_ACE__MT_D)\
 \

OBJ_BEC_COMERROBJ_MT_D=\
 $(OBJ_bec_COMERROBJ__MT_D)\
 \

OBJ_BEC_COMERROBJ_WC_MT_D=\
 $(OBJ_bec_COMERROBJ_WC__MT_D)\
 \

OBJ_BE_COMERROBJ_MT_D=\
 $(OBJ_be_COMERROBJ__MT_D)\
 \

OBJ_BEL_COMERROBJ_MT_D=\
 $(OBJ_bel_COMERROBJ__MT_D)\
 \

OBJ_BER_COMERROBJ_MT_D=\
 $(OBJ_ber_COMERROBJ__MT_D)\
 \

OBJ_BEC_SPEECH_MT_D=\
 $(OBJ_bec_SPEECH__MT_D)\
 \

OBJ_BEC_SPEECH_WC_MT_D=\
 $(OBJ_bec_SPEECH_WC__MT_D)\
 \

OBJ_BE_SPEECH_MT_D=\
 $(OBJ_be_SPEECH__MT_D)\
 \

OBJ_BEL_SPEECH_MT_D=\
 $(OBJ_bel_SPEECH__MT_D)\
 \

OBJ_BER_SPEECH_MT_D=\
 $(OBJ_ber_SPEECH__MT_D)\
 \

OBJ_BEC_WINEVLOG_MT_D=\
 $(OBJ_bec_WINEVLOG__MT_D)\
 \

OBJ_BE_WINEVLOG_MT_D=\
 $(OBJ_be_WINEVLOG__MT_D)\
 \

OBJ_BEL_WINEVLOG_MT_D=\
 $(OBJ_bel_WINEVLOG__MT_D)\
 \

OBJ_BER_WINEVLOG_MT_D=\
 $(OBJ_ber_WINEVLOG__MT_D)\
 \

OBJ_BEC_WINMSGBX_MT_D=\
 $(OBJ_bec_WINMSGBX__MT_D)\
 \

OBJ_BE_WINMSGBX_MT_D=\
 $(OBJ_be_WINMSGBX__MT_D)\
 \

OBJ_BEL_WINMSGBX_MT_D=\
 $(OBJ_bel_WINMSGBX__MT_D)\
 \

OBJ_BER_WINMSGBX_MT_D=\
 $(OBJ_ber_WINMSGBX__MT_D)\
 \

OBJ_BEC_W32CONS_MT_D=\
 $(OBJ_bec_W32CONS__MT_D)\
 \

OBJ_BEC_W32CONS_WC_MT_D=\
 $(OBJ_bec_W32CONS_WC__MT_D)\
 \

OBJ_BE_W32CONS_MT_D=\
 $(OBJ_be_W32CONS__MT_D)\
 \

OBJ_BEL_W32CONS_MT_D=\
 $(OBJ_bel_W32CONS__MT_D)\
 \

OBJ_BER_W32CONS_MT_D=\
 $(OBJ_ber_W32CONS__MT_D)\
 \

OBJ_BEC_W32DBGR_MT_D=\
 $(OBJ_bec_W32DBGR__MT_D)\
 \

OBJ_BEC_W32DBGR_WC_MT_D=\
 $(OBJ_bec_W32DBGR_WC__MT_D)\
 \

OBJ_BE_W32DBGR_MT_D=\
 $(OBJ_be_W32DBGR__MT_D)\
 \

OBJ_BEL_W32DBGR_MT_D=\
 $(OBJ_bel_W32DBGR__MT_D)\
 \

OBJ_BER_W32DBGR_MT_D=\
 $(OBJ_ber_W32DBGR__MT_D)\
 \

OBJ_BEC_W32SYSLOG_MT_D=\
 $(OBJ_bec_W32SYSLOG__MT_D)\
 \

OBJ_BEC_W32SYSLOG_WC_MT_D=\
 $(OBJ_bec_W32SYSLOG_WC__MT_D)\
 \

OBJ_BE_W32SYSLOG_MT_D=\
 $(OBJ_be_W32SYSLOG__MT_D)\
 \

OBJ_BEL_W32SYSLOG_MT_D=\
 $(OBJ_bel_W32SYSLOG__MT_D)\
 \

OBJ_BER_W32SYSLOG_MT_D=\
 $(OBJ_ber_W32SYSLOG__MT_D)\
 \

OBJ_FE_ALL_MT_D=\
 $(OBJ_fe_all__MT_D)\
 \

OBJ_FE_FAIL_MT_D=\
 $(OBJ_fe_fail__MT_D)\
 \

OBJ_FE_N_MT_D=\
 $(OBJ_fe_N__MT_D)\
 \

OBJ_FE_NULL_MT_D=\
 $(OBJ_fe_null__MT_D)\
 \

OBJ_FE_SIMPLE_MT_D=\
 $(OBJ_fe_simple__MT_D)\
 \

OBJ_FE_WINREG_MT_D=\
 $(OBJ_fe_winreg__MT_D)\
 \

OBJ_utl_bailout_MT_R		= $(PROJ_OBJ_DIR)\util.bailout.mt.obj
OBJ_utl_init_code_strs_MT_R	= $(PROJ_OBJ_DIR)\util.init_err_strings.mt.obj
OBJ_utl_sev_strs_MT_R		= $(PROJ_OBJ_DIR)\util.sev_strings.mt.obj
OBJ_utl_snprintf_MT_R 		= $(PROJ_OBJ_DIR)\util.snprintf.mt.obj
OBJ_utl_strdup_MT_R 		= $(PROJ_OBJ_DIR)\util.strdup.mt.obj
OBJ_utl_procid_MT_R 		= $(PROJ_OBJ_DIR)\util.procid.mt.obj
OBJ_utl_thread_MT_R 		= $(PROJ_OBJ_DIR)\util.thread.mt.obj
OBJ_utl_be_context_MT_R		= $(PROJ_OBJ_DIR)\util.be_context.mt.obj
OBJ_utl_core_apidefs_MT_R	= $(PROJ_OBJ_DIR)\util.core_apidefs.mt.obj
OBJ_utl_be_parse_MT_R		= $(PROJ_OBJ_DIR)\util.be_parse.mt.obj
OBJ_utl_strnlen_MT_R		= $(PROJ_OBJ_DIR)\util.strnlen.mt.obj
OBJ_utl_time_MT_R			= $(PROJ_OBJ_DIR)\util.time.mt.obj
OBJ_utl_host_name_MT_R		= $(PROJ_OBJ_DIR)\util.host_name.mt.obj
OBJ_cr_api_MT_R 			= $(PROJ_OBJ_DIR)\core.api.mt.obj
OBJ_cr_auto_MT_R 			= $(PROJ_OBJ_DIR)\core.auto.mt.obj
OBJ_cr_logprintf_MT_R		= $(PROJ_OBJ_DIR)\core.logprintf.mt.obj
OBJ_ins_args_MT_R	 		= $(PROJ_OBJ_DIR)\inserters.args.mt.obj
OBJ_ins_b64_MT_R	 		= $(PROJ_OBJ_DIR)\inserters.b64.mt.obj
OBJ_ins_blob_MT_R	 		= $(PROJ_OBJ_DIR)\inserters.blob.mt.obj
OBJ_ins_bool_MT_R	 		= $(PROJ_OBJ_DIR)\inserters.boolean.mt.obj
OBJ_ins_excp_MT_R	 		= $(PROJ_OBJ_DIR)\inserters.exception.mt.obj
OBJ_ins_host_MT_R	 		= $(PROJ_OBJ_DIR)\inserters.hostid.mt.obj
OBJ_ins_int_MT_R	 		= $(PROJ_OBJ_DIR)\inserters.integer.mt.obj
OBJ_ins_ptr_MT_R	 		= $(PROJ_OBJ_DIR)\inserters.pointer.mt.obj
OBJ_ins_prid_MT_R	 		= $(PROJ_OBJ_DIR)\inserters.processid.mt.obj
OBJ_ins_real_MT_R	 		= $(PROJ_OBJ_DIR)\inserters.real.mt.obj
OBJ_ins_slice_MT_R	 	= $(PROJ_OBJ_DIR)\inserters.slice.mt.obj
OBJ_ins_thrid_MT_R	 	= $(PROJ_OBJ_DIR)\inserters.threadid.mt.obj
OBJ_ins_w2m_MT_R	 		= $(PROJ_OBJ_DIR)\inserters.w2m.mt.obj
#PDB_bec_test_MT_R 		= $(PROJ_OBJ_DIR)\bec.test.mt.pdb
OBJ_bec_test_MT_R 		= $(PROJ_OBJ_DIR)\bec.test.mt.obj
OBJ_be_test_MT_R 			= $(PROJ_OBJ_DIR)\be.test.mt.obj
OBJ_bel_test_MT_R 		= $(PROJ_OBJ_DIR)\bel.test.mt.obj
OBJ_ber_test_MT_R 		= $(PROJ_OBJ_DIR)\ber.test.mt.obj
OBJ_be_lrsplit__MT_R		= $(PROJ_OBJ_DIR)\be.lrsplit.mt.obj
OBJ_be_N__MT_R			= $(PROJ_OBJ_DIR)\be.N.mt.obj
OBJ_bec_fail__MT_R		= $(PROJ_OBJ_DIR)\bec.fail.mt.obj
OBJ_be_fail__MT_R			= $(PROJ_OBJ_DIR)\be.fail.mt.obj
OBJ_bel_fail__MT_R		= $(PROJ_OBJ_DIR)\bel.fail.mt.obj
OBJ_ber_fail__MT_R		= $(PROJ_OBJ_DIR)\ber.fail.mt.obj
OBJ_bec_file__MT_R		= $(PROJ_OBJ_DIR)\bec.file.mt.obj
OBJ_bec_file_WC__MT_R		= $(PROJ_OBJ_DIR)\bec.file.WithCallback.mt.obj
OBJ_be_file__MT_R			= $(PROJ_OBJ_DIR)\be.file.mt.obj
OBJ_bel_file__MT_R		= $(PROJ_OBJ_DIR)\bel.file.mt.obj
OBJ_ber_file__MT_R		= $(PROJ_OBJ_DIR)\ber.file.mt.obj
OBJ_bec_fprintf__MT_R		= $(PROJ_OBJ_DIR)\bec.fprintf.mt.obj
OBJ_bec_fprintf_WC__MT_R	= $(PROJ_OBJ_DIR)\bec.fprintf.WithCallback.mt.obj
OBJ_be_fprintf__MT_R		= $(PROJ_OBJ_DIR)\be.fprintf.mt.obj
OBJ_bel_fprintf__MT_R		= $(PROJ_OBJ_DIR)\bel.fprintf.mt.obj
OBJ_ber_fprintf__MT_R		= $(PROJ_OBJ_DIR)\ber.fprintf.mt.obj
OBJ_bec_null__MT_R		= $(PROJ_OBJ_DIR)\bec.null.mt.obj
OBJ_be_null__MT_R			= $(PROJ_OBJ_DIR)\be.null.mt.obj
OBJ_bel_null__MT_R		= $(PROJ_OBJ_DIR)\bel.null.mt.obj
OBJ_ber_null__MT_R		= $(PROJ_OBJ_DIR)\ber.null.mt.obj
OBJ_bec_ACE__MT_R			= $(PROJ_OBJ_DIR)\bec.ACE.mt.obj
OBJ_be_ACE__MT_R			= $(PROJ_OBJ_DIR)\be.ACE.mt.obj
OBJ_bel_ACE__MT_R			= $(PROJ_OBJ_DIR)\bel.ACE.mt.obj
OBJ_ber_ACE__MT_R			= $(PROJ_OBJ_DIR)\ber.ACE.mt.obj
OBJ_bec_COMERROBJ__MT_R		= $(PROJ_OBJ_DIR)\bec.COMErrorObject.mt.obj
OBJ_bec_COMERROBJ_WC__MT_R		= $(PROJ_OBJ_DIR)\bec.COMErrorObject.WithCallback.mt.obj
OBJ_be_COMERROBJ__MT_R		= $(PROJ_OBJ_DIR)\be.COMErrorObject.mt.obj
OBJ_bel_COMERROBJ__MT_R		= $(PROJ_OBJ_DIR)\bel.COMErrorObject.mt.obj
OBJ_ber_COMERROBJ__MT_R		= $(PROJ_OBJ_DIR)\ber.COMErrorObject.mt.obj
OBJ_bec_SPEECH__MT_R		= $(PROJ_OBJ_DIR)\bec.speech.mt.obj
OBJ_bec_SPEECH_WC__MT_R		= $(PROJ_OBJ_DIR)\bec.speech.WithCallback.mt.obj
OBJ_be_SPEECH__MT_R			= $(PROJ_OBJ_DIR)\be.speech.mt.obj
OBJ_bel_SPEECH__MT_R		= $(PROJ_OBJ_DIR)\bel.speech.mt.obj
OBJ_ber_SPEECH__MT_R		= $(PROJ_OBJ_DIR)\ber.speech.mt.obj
OBJ_bec_WINEVLOG__MT_R		= $(PROJ_OBJ_DIR)\bec.WindowsEventLog.mt.obj
OBJ_be_WINEVLOG__MT_R		= $(PROJ_OBJ_DIR)\be.WindowsEventLog.mt.obj
OBJ_bel_WINEVLOG__MT_R		= $(PROJ_OBJ_DIR)\bel.WindowsEventLog.mt.obj
OBJ_ber_WINEVLOG__MT_R		= $(PROJ_OBJ_DIR)\ber.WindowsEventLog.mt.obj
OBJ_bec_WINMSGBX__MT_R		= $(PROJ_OBJ_DIR)\bec.WindowsMessageBox.mt.obj
OBJ_be_WINMSGBX__MT_R		= $(PROJ_OBJ_DIR)\be.WindowsMessageBox.mt.obj
OBJ_bel_WINMSGBX__MT_R		= $(PROJ_OBJ_DIR)\bel.WindowsMessageBox.mt.obj
OBJ_ber_WINMSGBX__MT_R		= $(PROJ_OBJ_DIR)\ber.WindowsMessageBox.mt.obj
OBJ_bec_W32CONS__MT_R		= $(PROJ_OBJ_DIR)\bec.WindowsConsole.mt.obj
OBJ_bec_W32CONS_WC__MT_R	= $(PROJ_OBJ_DIR)\bec.WindowsConsole.WithCallback.mt.obj
OBJ_be_W32CONS__MT_R		= $(PROJ_OBJ_DIR)\be.WindowsConsole.mt.obj
OBJ_bel_W32CONS__MT_R		= $(PROJ_OBJ_DIR)\bel.WindowsConsole.mt.obj
OBJ_ber_W32CONS__MT_R		= $(PROJ_OBJ_DIR)\ber.WindowsConsole.mt.obj
OBJ_bec_W32DBGR__MT_R		= $(PROJ_OBJ_DIR)\bec.WindowsDebugger.mt.obj
OBJ_bec_W32DBGR_WC__MT_R		= $(PROJ_OBJ_DIR)\bec.WindowsDebugger.WithCallback.mt.obj
OBJ_be_W32DBGR__MT_R		= $(PROJ_OBJ_DIR)\be.WindowsDebugger.mt.obj
OBJ_bel_W32DBGR__MT_R		= $(PROJ_OBJ_DIR)\bel.WindowsDebugger.mt.obj
OBJ_ber_W32DBGR__MT_R		= $(PROJ_OBJ_DIR)\ber.WindowsDebugger.mt.obj
OBJ_bec_W32SYSLOG__MT_R		= $(PROJ_OBJ_DIR)\bec.WindowsSyslog.mt.obj
OBJ_bec_W32SYSLOG_WC__MT_R		= $(PROJ_OBJ_DIR)\bec.WindowsSyslog.WithCallback.mt.obj
OBJ_be_W32SYSLOG__MT_R		= $(PROJ_OBJ_DIR)\be.WindowsSyslog.mt.obj
OBJ_bel_W32SYSLOG__MT_R		= $(PROJ_OBJ_DIR)\bel.WindowsSyslog.mt.obj
OBJ_ber_W32SYSLOG__MT_R		= $(PROJ_OBJ_DIR)\ber.WindowsSyslog.mt.obj
OBJ_fe_all__MT_R 			= $(PROJ_OBJ_DIR)\fe.all.mt.obj
OBJ_fe_fail__MT_R 			= $(PROJ_OBJ_DIR)\fe.fail.mt.obj
OBJ_fe_N__MT_R 				= $(PROJ_OBJ_DIR)\fe.N.mt.obj
OBJ_fe_null__MT_R 			= $(PROJ_OBJ_DIR)\fe.null.mt.obj
OBJ_fe_simple__MT_R 		= $(PROJ_OBJ_DIR)\fe.simple.mt.obj
OBJ_fe_winreg__MT_R 		= $(PROJ_OBJ_DIR)\fe.WindowsRegistry.mt.obj

OBJ_UTIL_MT_R=\
 $(OBJ_utl_bailout_MT_R)\
 $(OBJ_utl_init_code_strs_MT_R)\
 $(OBJ_utl_sev_strs_MT_R)\
 $(OBJ_utl_snprintf_MT_R)\
 $(OBJ_utl_strdup_MT_R)\
 $(OBJ_utl_procid_MT_R)\
 $(OBJ_utl_thread_MT_R)\
 $(OBJ_utl_be_context_MT_R)\
 $(OBJ_utl_core_apidefs_MT_R)\
 $(OBJ_utl_be_parse_MT_R)\
 $(OBJ_utl_strnlen_MT_R)\
 $(OBJ_utl_time_MT_R)\
 $(OBJ_utl_host_name_MT_R)\
 \

OBJ_CORE_MT_R=\
 $(OBJ_cr_api_MT_R)\
 $(OBJ_cr_auto_MT_R)\
 $(OBJ_cr_logprintf_MT_R)\
 $(OBJ_ins_args_MT_R)\
 $(OBJ_ins_b64_MT_R)\
 $(OBJ_ins_blob_MT_R)\
 $(OBJ_ins_bool_MT_R)\
 $(OBJ_ins_excp_MT_R)\
 $(OBJ_ins_host_MT_R)\
 $(OBJ_ins_int_MT_R)\
 $(OBJ_ins_ptr_MT_R)\
 $(OBJ_ins_prid_MT_R)\
 $(OBJ_ins_real_MT_R)\
 $(OBJ_ins_slice_MT_R)\
 $(OBJ_ins_thrid_MT_R)\
 $(OBJ_ins_w2m_MT_R)\
 \


OBJ_BE_LRSPLIT_MT_R=\
 $(OBJ_be_lrsplit__MT_R)\
 \

OBJ_BE_N_MT_R=\
 $(OBJ_be_N__MT_R)\
 \

OBJ_BEC_TEST_MT_R=\
 $(OBJ_bec_test_MT_R)\
 \


OBJ_BE_TEST_MT_R=\
 $(OBJ_be_test_MT_R)\
 \


OBJ_BEL_TEST_MT_R=\
 $(OBJ_bel_test_MT_R)\
 \


OBJ_BER_TEST_MT_R=\
 $(OBJ_ber_test_MT_R)\
 \


OBJ_BEC_FAIL_MT_R=\
 $(OBJ_bec_fail__MT_R)\
 \

OBJ_BE_FAIL_MT_R=\
 $(OBJ_be_fail__MT_R)\
 \

OBJ_BEL_FAIL_MT_R=\
 $(OBJ_bel_fail__MT_R)\
 \

OBJ_BER_FAIL_MT_R=\
 $(OBJ_ber_fail__MT_R)\
 \

OBJ_BEC_FILE_MT_R=\
 $(OBJ_bec_file__MT_R)\
 \

OBJ_BEC_FILE_WC_MT_R=\
 $(OBJ_bec_file_WC__MT_R)\
 \

OBJ_BE_FILE_MT_R=\
 $(OBJ_be_file__MT_R)\
 \

OBJ_BEL_FILE_MT_R=\
 $(OBJ_bel_file__MT_R)\
 \

OBJ_BER_FILE_MT_R=\
 $(OBJ_ber_file__MT_R)\
 \

OBJ_BEC_FPRINTF_MT_R=\
 $(OBJ_bec_fprintf__MT_R)\
 \

OBJ_BEC_FPRINTF_WC_MT_R=\
 $(OBJ_bec_fprintf_WC__MT_R)\
 \

OBJ_BE_FPRINTF_MT_R=\
 $(OBJ_be_fprintf__MT_R)\
 \

OBJ_BEL_FPRINTF_MT_R=\
 $(OBJ_bel_fprintf__MT_R)\
 \

OBJ_BER_FPRINTF_MT_R=\
 $(OBJ_ber_fprintf__MT_R)\
 \

OBJ_BEC_NULL_MT_R=\
 $(OBJ_bec_null__MT_R)\
 \

OBJ_BE_NULL_MT_R=\
 $(OBJ_be_null__MT_R)\
 \

OBJ_BEL_NULL_MT_R=\
 $(OBJ_bel_null__MT_R)\
 \

OBJ_BER_NULL_MT_R=\
 $(OBJ_ber_null__MT_R)\
 \

OBJ_BEC_ACE_MT_R=\
 $(OBJ_bec_ACE__MT_R)\
 \

OBJ_BE_ACE_MT_R=\
 $(OBJ_be_ACE__MT_R)\
 \

OBJ_BEL_ACE_MT_R=\
 $(OBJ_bel_ACE__MT_R)\
 \

OBJ_BER_ACE_MT_R=\
 $(OBJ_ber_ACE__MT_R)\
 \

OBJ_BEC_COMERROBJ_MT_R=\
 $(OBJ_bec_COMERROBJ__MT_R)\
 \

OBJ_BEC_COMERROBJ_WC_MT_R=\
 $(OBJ_bec_COMERROBJ_WC__MT_R)\
 \

OBJ_BE_COMERROBJ_MT_R=\
 $(OBJ_be_COMERROBJ__MT_R)\
 \

OBJ_BEL_COMERROBJ_MT_R=\
 $(OBJ_bel_COMERROBJ__MT_R)\
 \

OBJ_BER_COMERROBJ_MT_R=\
 $(OBJ_ber_COMERROBJ__MT_R)\
 \

OBJ_BEC_SPEECH_MT_R=\
 $(OBJ_bec_SPEECH__MT_R)\
 \

OBJ_BEC_SPEECH_WC_MT_R=\
 $(OBJ_bec_SPEECH_WC__MT_R)\
 \

OBJ_BE_SPEECH_MT_R=\
 $(OBJ_be_SPEECH__MT_R)\
 \

OBJ_BEL_SPEECH_MT_R=\
 $(OBJ_bel_SPEECH__MT_R)\
 \

OBJ_BER_SPEECH_MT_R=\
 $(OBJ_ber_SPEECH__MT_R)\
 \

OBJ_BEC_WINEVLOG_MT_R=\
 $(OBJ_bec_WINEVLOG__MT_R)\
 \

OBJ_BE_WINEVLOG_MT_R=\
 $(OBJ_be_WINEVLOG__MT_R)\
 \

OBJ_BEL_WINEVLOG_MT_R=\
 $(OBJ_bel_WINEVLOG__MT_R)\
 \

OBJ_BER_WINEVLOG_MT_R=\
 $(OBJ_ber_WINEVLOG__MT_R)\
 \

OBJ_BEC_WINMSGBX_MT_R=\
 $(OBJ_bec_WINMSGBX__MT_R)\
 \

OBJ_BE_WINMSGBX_MT_R=\
 $(OBJ_be_WINMSGBX__MT_R)\
 \

OBJ_BEL_WINMSGBX_MT_R=\
 $(OBJ_bel_WINMSGBX__MT_R)\
 \

OBJ_BER_WINMSGBX_MT_R=\
 $(OBJ_ber_WINMSGBX__MT_R)\
 \

OBJ_BEC_W32CONS_MT_R=\
 $(OBJ_bec_W32CONS__MT_R)\
 \

OBJ_BEC_W32CONS_WC_MT_R=\
 $(OBJ_bec_W32CONS_WC__MT_R)\
 \

OBJ_BE_W32CONS_MT_R=\
 $(OBJ_be_W32CONS__MT_R)\
 \

OBJ_BEL_W32CONS_MT_R=\
 $(OBJ_bel_W32CONS__MT_R)\
 \

OBJ_BER_W32CONS_MT_R=\
 $(OBJ_ber_W32CONS__MT_R)\
 \

OBJ_BEC_W32DBGR_MT_R=\
 $(OBJ_bec_W32DBGR__MT_R)\
 \

OBJ_BEC_W32DBGR_WC_MT_R=\
 $(OBJ_bec_W32DBGR_WC__MT_R)\
 \

OBJ_BE_W32DBGR_MT_R=\
 $(OBJ_be_W32DBGR__MT_R)\
 \

OBJ_BEL_W32DBGR_MT_R=\
 $(OBJ_bel_W32DBGR__MT_R)\
 \

OBJ_BER_W32DBGR_MT_R=\
 $(OBJ_ber_W32DBGR__MT_R)\
 \

OBJ_BEC_W32SYSLOG_MT_R=\
 $(OBJ_bec_W32SYSLOG__MT_R)\
 \

OBJ_BEC_W32SYSLOG_WC_MT_R=\
 $(OBJ_bec_W32SYSLOG_WC__MT_R)\
 \

OBJ_BE_W32SYSLOG_MT_R=\
 $(OBJ_be_W32SYSLOG__MT_R)\
 \

OBJ_BEL_W32SYSLOG_MT_R=\
 $(OBJ_bel_W32SYSLOG__MT_R)\
 \

OBJ_BER_W32SYSLOG_MT_R=\
 $(OBJ_ber_W32SYSLOG__MT_R)\
 \

OBJ_FE_ALL_MT_R=\
 $(OBJ_fe_all__MT_R)\
 \

OBJ_FE_FAIL_MT_R=\
 $(OBJ_fe_fail__MT_R)\
 \

OBJ_FE_N_MT_R=\
 $(OBJ_fe_N__MT_R)\
 \

OBJ_FE_NULL_MT_R=\
 $(OBJ_fe_null__MT_R)\
 \

OBJ_FE_SIMPLE_MT_R=\
 $(OBJ_fe_simple__MT_R)\
 \

OBJ_FE_WINREG_MT_R=\
 $(OBJ_fe_winreg__MT_R)\
 \

OBJ_utl_bailout_ST_D		= $(PROJ_OBJ_DIR)\util.bailout.debug.obj
OBJ_utl_init_code_strs_ST_D	= $(PROJ_OBJ_DIR)\util.init_err_strings.debug.obj
OBJ_utl_sev_strs_ST_D		= $(PROJ_OBJ_DIR)\util.sev_strings.debug.obj
OBJ_utl_snprintf_ST_D 		= $(PROJ_OBJ_DIR)\util.snprintf.debug.obj
OBJ_utl_strdup_ST_D 		= $(PROJ_OBJ_DIR)\util.strdup.debug.obj
OBJ_utl_procid_ST_D 		= $(PROJ_OBJ_DIR)\util.procid.debug.obj
OBJ_utl_thread_ST_D 		= $(PROJ_OBJ_DIR)\util.thread.debug.obj
OBJ_utl_be_context_ST_D		= $(PROJ_OBJ_DIR)\util.be_context.debug.obj
OBJ_utl_core_apidefs_ST_D	= $(PROJ_OBJ_DIR)\util.core_apidefs.debug.obj
OBJ_utl_be_parse_ST_D		= $(PROJ_OBJ_DIR)\util.be_parse.debug.obj
OBJ_utl_strnlen_ST_D		= $(PROJ_OBJ_DIR)\util.strnlen.debug.obj
OBJ_utl_time_ST_D			= $(PROJ_OBJ_DIR)\util.time.debug.obj
OBJ_utl_host_name_ST_D		= $(PROJ_OBJ_DIR)\util.host_name.debug.obj
OBJ_cr_api_ST_D 			= $(PROJ_OBJ_DIR)\core.api.debug.obj
OBJ_cr_auto_ST_D 			= $(PROJ_OBJ_DIR)\core.auto.debug.obj
OBJ_cr_logprintf_ST_D		= $(PROJ_OBJ_DIR)\core.logprintf.debug.obj
OBJ_ins_args_ST_D	 		= $(PROJ_OBJ_DIR)\inserters.args.debug.obj
OBJ_ins_b64_ST_D	 		= $(PROJ_OBJ_DIR)\inserters.b64.debug.obj
OBJ_ins_blob_ST_D	 		= $(PROJ_OBJ_DIR)\inserters.blob.debug.obj
OBJ_ins_bool_ST_D	 		= $(PROJ_OBJ_DIR)\inserters.boolean.debug.obj
OBJ_ins_excp_ST_D	 		= $(PROJ_OBJ_DIR)\inserters.exception.debug.obj
OBJ_ins_host_ST_D	 		= $(PROJ_OBJ_DIR)\inserters.hostid.debug.obj
OBJ_ins_int_ST_D	 		= $(PROJ_OBJ_DIR)\inserters.integer.debug.obj
OBJ_ins_ptr_ST_D	 		= $(PROJ_OBJ_DIR)\inserters.pointer.debug.obj
OBJ_ins_prid_ST_D	 		= $(PROJ_OBJ_DIR)\inserters.processid.debug.obj
OBJ_ins_real_ST_D	 		= $(PROJ_OBJ_DIR)\inserters.real.debug.obj
OBJ_ins_slice_ST_D	 	= $(PROJ_OBJ_DIR)\inserters.slice.debug.obj
OBJ_ins_thrid_ST_D	 	= $(PROJ_OBJ_DIR)\inserters.threadid.debug.obj
OBJ_ins_w2m_ST_D	 		= $(PROJ_OBJ_DIR)\inserters.w2m.debug.obj
#PDB_bec_test_ST_D 		= $(PROJ_OBJ_DIR)\bec.test.debug.pdb
OBJ_bec_test_ST_D 		= $(PROJ_OBJ_DIR)\bec.test.debug.obj
OBJ_be_test_ST_D 			= $(PROJ_OBJ_DIR)\be.test.debug.obj
OBJ_bel_test_ST_D 		= $(PROJ_OBJ_DIR)\bel.test.debug.obj
OBJ_ber_test_ST_D 		= $(PROJ_OBJ_DIR)\ber.test.debug.obj
OBJ_be_lrsplit__ST_D		= $(PROJ_OBJ_DIR)\be.lrsplit.debug.obj
OBJ_be_N__ST_D			= $(PROJ_OBJ_DIR)\be.N.debug.obj
OBJ_bec_fail__ST_D		= $(PROJ_OBJ_DIR)\bec.fail.debug.obj
OBJ_be_fail__ST_D			= $(PROJ_OBJ_DIR)\be.fail.debug.obj
OBJ_bel_fail__ST_D		= $(PROJ_OBJ_DIR)\bel.fail.debug.obj
OBJ_ber_fail__ST_D		= $(PROJ_OBJ_DIR)\ber.fail.debug.obj
OBJ_bec_file__ST_D		= $(PROJ_OBJ_DIR)\bec.file.debug.obj
OBJ_bec_file_WC__ST_D		= $(PROJ_OBJ_DIR)\bec.file.WithCallback.debug.obj
OBJ_be_file__ST_D			= $(PROJ_OBJ_DIR)\be.file.debug.obj
OBJ_bel_file__ST_D		= $(PROJ_OBJ_DIR)\bel.file.debug.obj
OBJ_ber_file__ST_D		= $(PROJ_OBJ_DIR)\ber.file.debug.obj
OBJ_bec_fprintf__ST_D		= $(PROJ_OBJ_DIR)\bec.fprintf.debug.obj
OBJ_bec_fprintf_WC__ST_D	= $(PROJ_OBJ_DIR)\bec.fprintf.WithCallback.debug.obj
OBJ_be_fprintf__ST_D		= $(PROJ_OBJ_DIR)\be.fprintf.debug.obj
OBJ_bel_fprintf__ST_D		= $(PROJ_OBJ_DIR)\bel.fprintf.debug.obj
OBJ_ber_fprintf__ST_D		= $(PROJ_OBJ_DIR)\ber.fprintf.debug.obj
OBJ_bec_null__ST_D		= $(PROJ_OBJ_DIR)\bec.null.debug.obj
OBJ_be_null__ST_D			= $(PROJ_OBJ_DIR)\be.null.debug.obj
OBJ_bel_null__ST_D		= $(PROJ_OBJ_DIR)\bel.null.debug.obj
OBJ_ber_null__ST_D		= $(PROJ_OBJ_DIR)\ber.null.debug.obj
OBJ_bec_ACE__ST_D			= $(PROJ_OBJ_DIR)\bec.ACE.debug.obj
OBJ_be_ACE__ST_D			= $(PROJ_OBJ_DIR)\be.ACE.debug.obj
OBJ_bel_ACE__ST_D			= $(PROJ_OBJ_DIR)\bel.ACE.debug.obj
OBJ_ber_ACE__ST_D			= $(PROJ_OBJ_DIR)\ber.ACE.debug.obj
OBJ_bec_COMERROBJ__ST_D		= $(PROJ_OBJ_DIR)\bec.COMErrorObject.debug.obj
OBJ_bec_COMERROBJ_WC__ST_D		= $(PROJ_OBJ_DIR)\bec.COMErrorObject.WithCallback.debug.obj
OBJ_be_COMERROBJ__ST_D		= $(PROJ_OBJ_DIR)\be.COMErrorObject.debug.obj
OBJ_bel_COMERROBJ__ST_D		= $(PROJ_OBJ_DIR)\bel.COMErrorObject.debug.obj
OBJ_ber_COMERROBJ__ST_D		= $(PROJ_OBJ_DIR)\ber.COMErrorObject.debug.obj
OBJ_bec_SPEECH__ST_D		= $(PROJ_OBJ_DIR)\bec.speech.debug.obj
OBJ_bec_SPEECH_WC__ST_D		= $(PROJ_OBJ_DIR)\bec.speech.WithCallback.debug.obj
OBJ_be_SPEECH__ST_D			= $(PROJ_OBJ_DIR)\be.speech.debug.obj
OBJ_bel_SPEECH__ST_D		= $(PROJ_OBJ_DIR)\bel.speech.debug.obj
OBJ_ber_SPEECH__ST_D		= $(PROJ_OBJ_DIR)\ber.speech.debug.obj
OBJ_bec_WINEVLOG__ST_D		= $(PROJ_OBJ_DIR)\bec.WindowsEventLog.debug.obj
OBJ_be_WINEVLOG__ST_D		= $(PROJ_OBJ_DIR)\be.WindowsEventLog.debug.obj
OBJ_bel_WINEVLOG__ST_D		= $(PROJ_OBJ_DIR)\bel.WindowsEventLog.debug.obj
OBJ_ber_WINEVLOG__ST_D		= $(PROJ_OBJ_DIR)\ber.WindowsEventLog.debug.obj
OBJ_bec_WINMSGBX__ST_D		= $(PROJ_OBJ_DIR)\bec.WindowsMessageBox.debug.obj
OBJ_be_WINMSGBX__ST_D		= $(PROJ_OBJ_DIR)\be.WindowsMessageBox.debug.obj
OBJ_bel_WINMSGBX__ST_D		= $(PROJ_OBJ_DIR)\bel.WindowsMessageBox.debug.obj
OBJ_ber_WINMSGBX__ST_D		= $(PROJ_OBJ_DIR)\ber.WindowsMessageBox.debug.obj
OBJ_bec_W32CONS__ST_D		= $(PROJ_OBJ_DIR)\bec.WindowsConsole.debug.obj
OBJ_bec_W32CONS_WC__ST_D	= $(PROJ_OBJ_DIR)\bec.WindowsConsole.WithCallback.debug.obj
OBJ_be_W32CONS__ST_D		= $(PROJ_OBJ_DIR)\be.WindowsConsole.debug.obj
OBJ_bel_W32CONS__ST_D		= $(PROJ_OBJ_DIR)\bel.WindowsConsole.debug.obj
OBJ_ber_W32CONS__ST_D		= $(PROJ_OBJ_DIR)\ber.WindowsConsole.debug.obj
OBJ_bec_W32DBGR__ST_D		= $(PROJ_OBJ_DIR)\bec.WindowsDebugger.debug.obj
OBJ_bec_W32DBGR_WC__ST_D		= $(PROJ_OBJ_DIR)\bec.WindowsDebugger.WithCallback.debug.obj
OBJ_be_W32DBGR__ST_D		= $(PROJ_OBJ_DIR)\be.WindowsDebugger.debug.obj
OBJ_bel_W32DBGR__ST_D		= $(PROJ_OBJ_DIR)\bel.WindowsDebugger.debug.obj
OBJ_ber_W32DBGR__ST_D		= $(PROJ_OBJ_DIR)\ber.WindowsDebugger.debug.obj
OBJ_bec_W32SYSLOG__ST_D		= $(PROJ_OBJ_DIR)\bec.WindowsSyslog.debug.obj
OBJ_bec_W32SYSLOG_WC__ST_D		= $(PROJ_OBJ_DIR)\bec.WindowsSyslog.WithCallback.debug.obj
OBJ_be_W32SYSLOG__ST_D		= $(PROJ_OBJ_DIR)\be.WindowsSyslog.debug.obj
OBJ_bel_W32SYSLOG__ST_D		= $(PROJ_OBJ_DIR)\bel.WindowsSyslog.debug.obj
OBJ_ber_W32SYSLOG__ST_D		= $(PROJ_OBJ_DIR)\ber.WindowsSyslog.debug.obj
OBJ_fe_all__ST_D 			= $(PROJ_OBJ_DIR)\fe.all.debug.obj
OBJ_fe_fail__ST_D 			= $(PROJ_OBJ_DIR)\fe.fail.debug.obj
OBJ_fe_N__ST_D 				= $(PROJ_OBJ_DIR)\fe.N.debug.obj
OBJ_fe_null__ST_D 			= $(PROJ_OBJ_DIR)\fe.null.debug.obj
OBJ_fe_simple__ST_D 		= $(PROJ_OBJ_DIR)\fe.simple.debug.obj
OBJ_fe_winreg__ST_D 		= $(PROJ_OBJ_DIR)\fe.WindowsRegistry.debug.obj

OBJ_UTIL_ST_D=\
 $(OBJ_utl_bailout_ST_D)\
 $(OBJ_utl_init_code_strs_ST_D)\
 $(OBJ_utl_sev_strs_ST_D)\
 $(OBJ_utl_snprintf_ST_D)\
 $(OBJ_utl_strdup_ST_D)\
 $(OBJ_utl_procid_ST_D)\
 $(OBJ_utl_thread_ST_D)\
 $(OBJ_utl_be_context_ST_D)\
 $(OBJ_utl_core_apidefs_ST_D)\
 $(OBJ_utl_be_parse_ST_D)\
 $(OBJ_utl_strnlen_ST_D)\
 $(OBJ_utl_time_ST_D)\
 $(OBJ_utl_host_name_ST_D)\
 \

OBJ_CORE_ST_D=\
 $(OBJ_cr_api_ST_D)\
 $(OBJ_cr_auto_ST_D)\
 $(OBJ_cr_logprintf_ST_D)\
 $(OBJ_ins_args_ST_D)\
 $(OBJ_ins_b64_ST_D)\
 $(OBJ_ins_blob_ST_D)\
 $(OBJ_ins_bool_ST_D)\
 $(OBJ_ins_excp_ST_D)\
 $(OBJ_ins_host_ST_D)\
 $(OBJ_ins_int_ST_D)\
 $(OBJ_ins_ptr_ST_D)\
 $(OBJ_ins_prid_ST_D)\
 $(OBJ_ins_real_ST_D)\
 $(OBJ_ins_slice_ST_D)\
 $(OBJ_ins_thrid_ST_D)\
 $(OBJ_ins_w2m_ST_D)\
 \


OBJ_BE_LRSPLIT_ST_D=\
 $(OBJ_be_lrsplit__ST_D)\
 \

OBJ_BE_N_ST_D=\
 $(OBJ_be_N__ST_D)\
 \

OBJ_BEC_TEST_ST_D=\
 $(OBJ_bec_test_ST_D)\
 \


OBJ_BE_TEST_ST_D=\
 $(OBJ_be_test_ST_D)\
 \


OBJ_BEL_TEST_ST_D=\
 $(OBJ_bel_test_ST_D)\
 \


OBJ_BER_TEST_ST_D=\
 $(OBJ_ber_test_ST_D)\
 \


OBJ_BEC_FAIL_ST_D=\
 $(OBJ_bec_fail__ST_D)\
 \

OBJ_BE_FAIL_ST_D=\
 $(OBJ_be_fail__ST_D)\
 \

OBJ_BEL_FAIL_ST_D=\
 $(OBJ_bel_fail__ST_D)\
 \

OBJ_BER_FAIL_ST_D=\
 $(OBJ_ber_fail__ST_D)\
 \

OBJ_BEC_FILE_ST_D=\
 $(OBJ_bec_file__ST_D)\
 \

OBJ_BEC_FILE_WC_ST_D=\
 $(OBJ_bec_file_WC__ST_D)\
 \

OBJ_BE_FILE_ST_D=\
 $(OBJ_be_file__ST_D)\
 \

OBJ_BEL_FILE_ST_D=\
 $(OBJ_bel_file__ST_D)\
 \

OBJ_BER_FILE_ST_D=\
 $(OBJ_ber_file__ST_D)\
 \

OBJ_BEC_FPRINTF_ST_D=\
 $(OBJ_bec_fprintf__ST_D)\
 \

OBJ_BEC_FPRINTF_WC_ST_D=\
 $(OBJ_bec_fprintf_WC__ST_D)\
 \

OBJ_BE_FPRINTF_ST_D=\
 $(OBJ_be_fprintf__ST_D)\
 \

OBJ_BEL_FPRINTF_ST_D=\
 $(OBJ_bel_fprintf__ST_D)\
 \

OBJ_BER_FPRINTF_ST_D=\
 $(OBJ_ber_fprintf__ST_D)\
 \

OBJ_BEC_NULL_ST_D=\
 $(OBJ_bec_null__ST_D)\
 \

OBJ_BE_NULL_ST_D=\
 $(OBJ_be_null__ST_D)\
 \

OBJ_BEL_NULL_ST_D=\
 $(OBJ_bel_null__ST_D)\
 \

OBJ_BER_NULL_ST_D=\
 $(OBJ_ber_null__ST_D)\
 \

OBJ_BEC_ACE_ST_D=\
 $(OBJ_bec_ACE__ST_D)\
 \

OBJ_BE_ACE_ST_D=\
 $(OBJ_be_ACE__ST_D)\
 \

OBJ_BEL_ACE_ST_D=\
 $(OBJ_bel_ACE__ST_D)\
 \

OBJ_BER_ACE_ST_D=\
 $(OBJ_ber_ACE__ST_D)\
 \

OBJ_BEC_COMERROBJ_ST_D=\
 $(OBJ_bec_COMERROBJ__ST_D)\
 \

OBJ_BEC_COMERROBJ_WC_ST_D=\
 $(OBJ_bec_COMERROBJ_WC__ST_D)\
 \

OBJ_BE_COMERROBJ_ST_D=\
 $(OBJ_be_COMERROBJ__ST_D)\
 \

OBJ_BEL_COMERROBJ_ST_D=\
 $(OBJ_bel_COMERROBJ__ST_D)\
 \

OBJ_BER_COMERROBJ_ST_D=\
 $(OBJ_ber_COMERROBJ__ST_D)\
 \

OBJ_BEC_SPEECH_ST_D=\
 $(OBJ_bec_SPEECH__ST_D)\
 \

OBJ_BEC_SPEECH_WC_ST_D=\
 $(OBJ_bec_SPEECH_WC__ST_D)\
 \

OBJ_BE_SPEECH_ST_D=\
 $(OBJ_be_SPEECH__ST_D)\
 \

OBJ_BEL_SPEECH_ST_D=\
 $(OBJ_bel_SPEECH__ST_D)\
 \

OBJ_BER_SPEECH_ST_D=\
 $(OBJ_ber_SPEECH__ST_D)\
 \

OBJ_BEC_WINEVLOG_ST_D=\
 $(OBJ_bec_WINEVLOG__ST_D)\
 \

OBJ_BE_WINEVLOG_ST_D=\
 $(OBJ_be_WINEVLOG__ST_D)\
 \

OBJ_BEL_WINEVLOG_ST_D=\
 $(OBJ_bel_WINEVLOG__ST_D)\
 \

OBJ_BER_WINEVLOG_ST_D=\
 $(OBJ_ber_WINEVLOG__ST_D)\
 \

OBJ_BEC_WINMSGBX_ST_D=\
 $(OBJ_bec_WINMSGBX__ST_D)\
 \

OBJ_BE_WINMSGBX_ST_D=\
 $(OBJ_be_WINMSGBX__ST_D)\
 \

OBJ_BEL_WINMSGBX_ST_D=\
 $(OBJ_bel_WINMSGBX__ST_D)\
 \

OBJ_BER_WINMSGBX_ST_D=\
 $(OBJ_ber_WINMSGBX__ST_D)\
 \

OBJ_BEC_W32CONS_ST_D=\
 $(OBJ_bec_W32CONS__ST_D)\
 \

OBJ_BEC_W32CONS_WC_ST_D=\
 $(OBJ_bec_W32CONS_WC__ST_D)\
 \

OBJ_BE_W32CONS_ST_D=\
 $(OBJ_be_W32CONS__ST_D)\
 \

OBJ_BEL_W32CONS_ST_D=\
 $(OBJ_bel_W32CONS__ST_D)\
 \

OBJ_BER_W32CONS_ST_D=\
 $(OBJ_ber_W32CONS__ST_D)\
 \

OBJ_BEC_W32DBGR_ST_D=\
 $(OBJ_bec_W32DBGR__ST_D)\
 \

OBJ_BEC_W32DBGR_WC_ST_D=\
 $(OBJ_bec_W32DBGR_WC__ST_D)\
 \

OBJ_BE_W32DBGR_ST_D=\
 $(OBJ_be_W32DBGR__ST_D)\
 \

OBJ_BEL_W32DBGR_ST_D=\
 $(OBJ_bel_W32DBGR__ST_D)\
 \

OBJ_BER_W32DBGR_ST_D=\
 $(OBJ_ber_W32DBGR__ST_D)\
 \

OBJ_BEC_W32SYSLOG_ST_D=\
 $(OBJ_bec_W32SYSLOG__ST_D)\
 \

OBJ_BEC_W32SYSLOG_WC_ST_D=\
 $(OBJ_bec_W32SYSLOG_WC__ST_D)\
 \

OBJ_BE_W32SYSLOG_ST_D=\
 $(OBJ_be_W32SYSLOG__ST_D)\
 \

OBJ_BEL_W32SYSLOG_ST_D=\
 $(OBJ_bel_W32SYSLOG__ST_D)\
 \

OBJ_BER_W32SYSLOG_ST_D=\
 $(OBJ_ber_W32SYSLOG__ST_D)\
 \

OBJ_FE_ALL_ST_D=\
 $(OBJ_fe_all__ST_D)\
 \

OBJ_FE_FAIL_ST_D=\
 $(OBJ_fe_fail__ST_D)\
 \

OBJ_FE_N_ST_D=\
 $(OBJ_fe_N__ST_D)\
 \

OBJ_FE_NULL_ST_D=\
 $(OBJ_fe_null__ST_D)\
 \

OBJ_FE_SIMPLE_ST_D=\
 $(OBJ_fe_simple__ST_D)\
 \

OBJ_FE_WINREG_ST_D=\
 $(OBJ_fe_winreg__ST_D)\
 \

OBJ_utl_bailout_ST_R		= $(PROJ_OBJ_DIR)\util.bailout.obj
OBJ_utl_init_code_strs_ST_R	= $(PROJ_OBJ_DIR)\util.init_err_strings.obj
OBJ_utl_sev_strs_ST_R		= $(PROJ_OBJ_DIR)\util.sev_strings.obj
OBJ_utl_snprintf_ST_R 		= $(PROJ_OBJ_DIR)\util.snprintf.obj
OBJ_utl_strdup_ST_R 		= $(PROJ_OBJ_DIR)\util.strdup.obj
OBJ_utl_procid_ST_R 		= $(PROJ_OBJ_DIR)\util.procid.obj
OBJ_utl_thread_ST_R 		= $(PROJ_OBJ_DIR)\util.thread.obj
OBJ_utl_be_context_ST_R		= $(PROJ_OBJ_DIR)\util.be_context.obj
OBJ_utl_core_apidefs_ST_R	= $(PROJ_OBJ_DIR)\util.core_apidefs.obj
OBJ_utl_be_parse_ST_R		= $(PROJ_OBJ_DIR)\util.be_parse.obj
OBJ_utl_strnlen_ST_R		= $(PROJ_OBJ_DIR)\util.strnlen.obj
OBJ_utl_time_ST_R			= $(PROJ_OBJ_DIR)\util.time.obj
OBJ_utl_host_name_ST_R		= $(PROJ_OBJ_DIR)\util.host_name.obj
OBJ_cr_api_ST_R 			= $(PROJ_OBJ_DIR)\core.api.obj
OBJ_cr_auto_ST_R 			= $(PROJ_OBJ_DIR)\core.auto.obj
OBJ_cr_logprintf_ST_R		= $(PROJ_OBJ_DIR)\core.logprintf.obj
OBJ_ins_args_ST_R	 		= $(PROJ_OBJ_DIR)\inserters.args.obj
OBJ_ins_b64_ST_R	 		= $(PROJ_OBJ_DIR)\inserters.b64.obj
OBJ_ins_blob_ST_R	 		= $(PROJ_OBJ_DIR)\inserters.blob.obj
OBJ_ins_bool_ST_R	 		= $(PROJ_OBJ_DIR)\inserters.boolean.obj
OBJ_ins_excp_ST_R	 		= $(PROJ_OBJ_DIR)\inserters.exception.obj
OBJ_ins_host_ST_R	 		= $(PROJ_OBJ_DIR)\inserters.hostid.obj
OBJ_ins_int_ST_R	 		= $(PROJ_OBJ_DIR)\inserters.integer.obj
OBJ_ins_ptr_ST_R	 		= $(PROJ_OBJ_DIR)\inserters.pointer.obj
OBJ_ins_prid_ST_R	 		= $(PROJ_OBJ_DIR)\inserters.processid.obj
OBJ_ins_real_ST_R	 		= $(PROJ_OBJ_DIR)\inserters.real.obj
OBJ_ins_slice_ST_R	 	= $(PROJ_OBJ_DIR)\inserters.slice.obj
OBJ_ins_thrid_ST_R	 	= $(PROJ_OBJ_DIR)\inserters.threadid.obj
OBJ_ins_w2m_ST_R	 		= $(PROJ_OBJ_DIR)\inserters.w2m.obj
#PDB_bec_test_ST_R 		= $(PROJ_OBJ_DIR)\bec.test.pdb
OBJ_bec_test_ST_R 		= $(PROJ_OBJ_DIR)\bec.test.obj
OBJ_be_test_ST_R 			= $(PROJ_OBJ_DIR)\be.test.obj
OBJ_bel_test_ST_R 		= $(PROJ_OBJ_DIR)\bel.test.obj
OBJ_ber_test_ST_R 		= $(PROJ_OBJ_DIR)\ber.test.obj
OBJ_be_lrsplit__ST_R		= $(PROJ_OBJ_DIR)\be.lrsplit.obj
OBJ_be_N__ST_R			= $(PROJ_OBJ_DIR)\be.N.obj
OBJ_bec_fail__ST_R		= $(PROJ_OBJ_DIR)\bec.fail.obj
OBJ_be_fail__ST_R			= $(PROJ_OBJ_DIR)\be.fail.obj
OBJ_bel_fail__ST_R		= $(PROJ_OBJ_DIR)\bel.fail.obj
OBJ_ber_fail__ST_R		= $(PROJ_OBJ_DIR)\ber.fail.obj
OBJ_bec_file__ST_R		= $(PROJ_OBJ_DIR)\bec.file.obj
OBJ_bec_file_WC__ST_R		= $(PROJ_OBJ_DIR)\bec.file.WithCallback.obj
OBJ_be_file__ST_R			= $(PROJ_OBJ_DIR)\be.file.obj
OBJ_bel_file__ST_R		= $(PROJ_OBJ_DIR)\bel.file.obj
OBJ_ber_file__ST_R		= $(PROJ_OBJ_DIR)\ber.file.obj
OBJ_bec_fprintf__ST_R		= $(PROJ_OBJ_DIR)\bec.fprintf.obj
OBJ_bec_fprintf_WC__ST_R	= $(PROJ_OBJ_DIR)\bec.fprintf.WithCallback.obj
OBJ_be_fprintf__ST_R		= $(PROJ_OBJ_DIR)\be.fprintf.obj
OBJ_bel_fprintf__ST_R		= $(PROJ_OBJ_DIR)\bel.fprintf.obj
OBJ_ber_fprintf__ST_R		= $(PROJ_OBJ_DIR)\ber.fprintf.obj
OBJ_bec_null__ST_R		= $(PROJ_OBJ_DIR)\bec.null.obj
OBJ_be_null__ST_R			= $(PROJ_OBJ_DIR)\be.null.obj
OBJ_bel_null__ST_R		= $(PROJ_OBJ_DIR)\bel.null.obj
OBJ_ber_null__ST_R		= $(PROJ_OBJ_DIR)\ber.null.obj
OBJ_bec_ACE__ST_R			= $(PROJ_OBJ_DIR)\bec.ACE.obj
OBJ_be_ACE__ST_R			= $(PROJ_OBJ_DIR)\be.ACE.obj
OBJ_bel_ACE__ST_R			= $(PROJ_OBJ_DIR)\bel.ACE.obj
OBJ_ber_ACE__ST_R			= $(PROJ_OBJ_DIR)\ber.ACE.obj
OBJ_bec_COMERROBJ__ST_R		= $(PROJ_OBJ_DIR)\bec.COMErrorObject.obj
OBJ_bec_COMERROBJ_WC__ST_R		= $(PROJ_OBJ_DIR)\bec.COMErrorObject.WithCallback.obj
OBJ_be_COMERROBJ__ST_R		= $(PROJ_OBJ_DIR)\be.COMErrorObject.obj
OBJ_bel_COMERROBJ__ST_R		= $(PROJ_OBJ_DIR)\bel.COMErrorObject.obj
OBJ_ber_COMERROBJ__ST_R		= $(PROJ_OBJ_DIR)\ber.COMErrorObject.obj
OBJ_bec_SPEECH__ST_R		= $(PROJ_OBJ_DIR)\bec.speech.obj
OBJ_bec_SPEECH_WC__ST_R		= $(PROJ_OBJ_DIR)\bec.speech.WithCallback.obj
OBJ_be_SPEECH__ST_R			= $(PROJ_OBJ_DIR)\be.speech.obj
OBJ_bel_SPEECH__ST_R		= $(PROJ_OBJ_DIR)\bel.speech.obj
OBJ_ber_SPEECH__ST_R		= $(PROJ_OBJ_DIR)\ber.speech.obj
OBJ_bec_WINEVLOG__ST_R		= $(PROJ_OBJ_DIR)\bec.WindowsEventLog.obj
OBJ_be_WINEVLOG__ST_R		= $(PROJ_OBJ_DIR)\be.WindowsEventLog.obj
OBJ_bel_WINEVLOG__ST_R		= $(PROJ_OBJ_DIR)\bel.WindowsEventLog.obj
OBJ_ber_WINEVLOG__ST_R		= $(PROJ_OBJ_DIR)\ber.WindowsEventLog.obj
OBJ_bec_WINMSGBX__ST_R		= $(PROJ_OBJ_DIR)\bec.WindowsMessageBox.obj
OBJ_be_WINMSGBX__ST_R		= $(PROJ_OBJ_DIR)\be.WindowsMessageBox.obj
OBJ_bel_WINMSGBX__ST_R		= $(PROJ_OBJ_DIR)\bel.WindowsMessageBox.obj
OBJ_ber_WINMSGBX__ST_R		= $(PROJ_OBJ_DIR)\ber.WindowsMessageBox.obj
OBJ_bec_W32CONS__ST_R		= $(PROJ_OBJ_DIR)\bec.WindowsConsole.obj
OBJ_bec_W32CONS_WC__ST_R	= $(PROJ_OBJ_DIR)\bec.WindowsConsole.WithCallback.obj
OBJ_be_W32CONS__ST_R		= $(PROJ_OBJ_DIR)\be.WindowsConsole.obj
OBJ_bel_W32CONS__ST_R		= $(PROJ_OBJ_DIR)\bel.WindowsConsole.obj
OBJ_ber_W32CONS__ST_R		= $(PROJ_OBJ_DIR)\ber.WindowsConsole.obj
OBJ_bec_W32DBGR__ST_R		= $(PROJ_OBJ_DIR)\bec.WindowsDebugger.obj
OBJ_bec_W32DBGR_WC__ST_R		= $(PROJ_OBJ_DIR)\bec.WindowsDebugger.WithCallback.obj
OBJ_be_W32DBGR__ST_R		= $(PROJ_OBJ_DIR)\be.WindowsDebugger.obj
OBJ_bel_W32DBGR__ST_R		= $(PROJ_OBJ_DIR)\bel.WindowsDebugger.obj
OBJ_ber_W32DBGR__ST_R		= $(PROJ_OBJ_DIR)\ber.WindowsDebugger.obj
OBJ_bec_W32SYSLOG__ST_R		= $(PROJ_OBJ_DIR)\bec.WindowsSyslog.obj
OBJ_bec_W32SYSLOG_WC__ST_R		= $(PROJ_OBJ_DIR)\bec.WindowsSyslog.WithCallback.obj
OBJ_be_W32SYSLOG__ST_R		= $(PROJ_OBJ_DIR)\be.WindowsSyslog.obj
OBJ_bel_W32SYSLOG__ST_R		= $(PROJ_OBJ_DIR)\bel.WindowsSyslog.obj
OBJ_ber_W32SYSLOG__ST_R		= $(PROJ_OBJ_DIR)\ber.WindowsSyslog.obj
OBJ_fe_all__ST_R 			= $(PROJ_OBJ_DIR)\fe.all.obj
OBJ_fe_fail__ST_R 			= $(PROJ_OBJ_DIR)\fe.fail.obj
OBJ_fe_N__ST_R 				= $(PROJ_OBJ_DIR)\fe.N.obj
OBJ_fe_null__ST_R 			= $(PROJ_OBJ_DIR)\fe.null.obj
OBJ_fe_simple__ST_R 		= $(PROJ_OBJ_DIR)\fe.simple.obj
OBJ_fe_winreg__ST_R 		= $(PROJ_OBJ_DIR)\fe.WindowsRegistry.obj

OBJ_UTIL_ST_R=\
 $(OBJ_utl_bailout_ST_R)\
 $(OBJ_utl_init_code_strs_ST_R)\
 $(OBJ_utl_sev_strs_ST_R)\
 $(OBJ_utl_snprintf_ST_R)\
 $(OBJ_utl_strdup_ST_R)\
 $(OBJ_utl_procid_ST_R)\
 $(OBJ_utl_thread_ST_R)\
 $(OBJ_utl_be_context_ST_R)\
 $(OBJ_utl_core_apidefs_ST_R)\
 $(OBJ_utl_be_parse_ST_R)\
 $(OBJ_utl_strnlen_ST_R)\
 $(OBJ_utl_time_ST_R)\
 $(OBJ_utl_host_name_ST_R)\
 \

OBJ_CORE_ST_R=\
 $(OBJ_cr_api_ST_R)\
 $(OBJ_cr_auto_ST_R)\
 $(OBJ_cr_logprintf_ST_R)\
 $(OBJ_ins_args_ST_R)\
 $(OBJ_ins_b64_ST_R)\
 $(OBJ_ins_blob_ST_R)\
 $(OBJ_ins_bool_ST_R)\
 $(OBJ_ins_excp_ST_R)\
 $(OBJ_ins_host_ST_R)\
 $(OBJ_ins_int_ST_R)\
 $(OBJ_ins_ptr_ST_R)\
 $(OBJ_ins_prid_ST_R)\
 $(OBJ_ins_real_ST_R)\
 $(OBJ_ins_slice_ST_R)\
 $(OBJ_ins_thrid_ST_R)\
 $(OBJ_ins_w2m_ST_R)\
 \


OBJ_BE_LRSPLIT_ST_R=\
 $(OBJ_be_lrsplit__ST_R)\
 \

OBJ_BE_N_ST_R=\
 $(OBJ_be_N__ST_R)\
 \

OBJ_BEC_TEST_ST_R=\
 $(OBJ_bec_test_ST_R)\
 \


OBJ_BE_TEST_ST_R=\
 $(OBJ_be_test_ST_R)\
 \


OBJ_BEL_TEST_ST_R=\
 $(OBJ_bel_test_ST_R)\
 \


OBJ_BER_TEST_ST_R=\
 $(OBJ_ber_test_ST_R)\
 \


OBJ_BEC_FAIL_ST_R=\
 $(OBJ_bec_fail__ST_R)\
 \

OBJ_BE_FAIL_ST_R=\
 $(OBJ_be_fail__ST_R)\
 \

OBJ_BEL_FAIL_ST_R=\
 $(OBJ_bel_fail__ST_R)\
 \

OBJ_BER_FAIL_ST_R=\
 $(OBJ_ber_fail__ST_R)\
 \

OBJ_BEC_FILE_ST_R=\
 $(OBJ_bec_file__ST_R)\
 \

OBJ_BEC_FILE_WC_ST_R=\
 $(OBJ_bec_file_WC__ST_R)\
 \

OBJ_BE_FILE_ST_R=\
 $(OBJ_be_file__ST_R)\
 \

OBJ_BEL_FILE_ST_R=\
 $(OBJ_bel_file__ST_R)\
 \

OBJ_BER_FILE_ST_R=\
 $(OBJ_ber_file__ST_R)\
 \

OBJ_BEC_FPRINTF_ST_R=\
 $(OBJ_bec_fprintf__ST_R)\
 \

OBJ_BEC_FPRINTF_WC_ST_R=\
 $(OBJ_bec_fprintf_WC__ST_R)\
 \

OBJ_BE_FPRINTF_ST_R=\
 $(OBJ_be_fprintf__ST_R)\
 \

OBJ_BEL_FPRINTF_ST_R=\
 $(OBJ_bel_fprintf__ST_R)\
 \

OBJ_BER_FPRINTF_ST_R=\
 $(OBJ_ber_fprintf__ST_R)\
 \

OBJ_BEC_NULL_ST_R=\
 $(OBJ_bec_null__ST_R)\
 \

OBJ_BE_NULL_ST_R=\
 $(OBJ_be_null__ST_R)\
 \

OBJ_BEL_NULL_ST_R=\
 $(OBJ_bel_null__ST_R)\
 \

OBJ_BER_NULL_ST_R=\
 $(OBJ_ber_null__ST_R)\
 \

OBJ_BEC_ACE_ST_R=\
 $(OBJ_bec_ACE__ST_R)\
 \

OBJ_BE_ACE_ST_R=\
 $(OBJ_be_ACE__ST_R)\
 \

OBJ_BEL_ACE_ST_R=\
 $(OBJ_bel_ACE__ST_R)\
 \

OBJ_BER_ACE_ST_R=\
 $(OBJ_ber_ACE__ST_R)\
 \

OBJ_BEC_COMERROBJ_ST_R=\
 $(OBJ_bec_COMERROBJ__ST_R)\
 \

OBJ_BEC_COMERROBJ_WC_ST_R=\
 $(OBJ_bec_COMERROBJ_WC__ST_R)\
 \

OBJ_BE_COMERROBJ_ST_R=\
 $(OBJ_be_COMERROBJ__ST_R)\
 \

OBJ_BEL_COMERROBJ_ST_R=\
 $(OBJ_bel_COMERROBJ__ST_R)\
 \

OBJ_BER_COMERROBJ_ST_R=\
 $(OBJ_ber_COMERROBJ__ST_R)\
 \

OBJ_BEC_SPEECH_ST_R=\
 $(OBJ_bec_SPEECH__ST_R)\
 \

OBJ_BEC_SPEECH_WC_ST_R=\
 $(OBJ_bec_SPEECH_WC__ST_R)\
 \

OBJ_BE_SPEECH_ST_R=\
 $(OBJ_be_SPEECH__ST_R)\
 \

OBJ_BEL_SPEECH_ST_R=\
 $(OBJ_bel_SPEECH__ST_R)\
 \

OBJ_BER_SPEECH_ST_R=\
 $(OBJ_ber_SPEECH__ST_R)\
 \

OBJ_BEC_WINEVLOG_ST_R=\
 $(OBJ_bec_WINEVLOG__ST_R)\
 \

OBJ_BE_WINEVLOG_ST_R=\
 $(OBJ_be_WINEVLOG__ST_R)\
 \

OBJ_BEL_WINEVLOG_ST_R=\
 $(OBJ_bel_WINEVLOG__ST_R)\
 \

OBJ_BER_WINEVLOG_ST_R=\
 $(OBJ_ber_WINEVLOG__ST_R)\
 \

OBJ_BEC_WINMSGBX_ST_R=\
 $(OBJ_bec_WINMSGBX__ST_R)\
 \

OBJ_BE_WINMSGBX_ST_R=\
 $(OBJ_be_WINMSGBX__ST_R)\
 \

OBJ_BEL_WINMSGBX_ST_R=\
 $(OBJ_bel_WINMSGBX__ST_R)\
 \

OBJ_BER_WINMSGBX_ST_R=\
 $(OBJ_ber_WINMSGBX__ST_R)\
 \

OBJ_BEC_W32CONS_ST_R=\
 $(OBJ_bec_W32CONS__ST_R)\
 \

OBJ_BEC_W32CONS_WC_ST_R=\
 $(OBJ_bec_W32CONS_WC__ST_R)\
 \

OBJ_BE_W32CONS_ST_R=\
 $(OBJ_be_W32CONS__ST_R)\
 \

OBJ_BEL_W32CONS_ST_R=\
 $(OBJ_bel_W32CONS__ST_R)\
 \

OBJ_BER_W32CONS_ST_R=\
 $(OBJ_ber_W32CONS__ST_R)\
 \

OBJ_BEC_W32DBGR_ST_R=\
 $(OBJ_bec_W32DBGR__ST_R)\
 \

OBJ_BEC_W32DBGR_WC_ST_R=\
 $(OBJ_bec_W32DBGR_WC__ST_R)\
 \

OBJ_BE_W32DBGR_ST_R=\
 $(OBJ_be_W32DBGR__ST_R)\
 \

OBJ_BEL_W32DBGR_ST_R=\
 $(OBJ_bel_W32DBGR__ST_R)\
 \

OBJ_BER_W32DBGR_ST_R=\
 $(OBJ_ber_W32DBGR__ST_R)\
 \

OBJ_BEC_W32SYSLOG_ST_R=\
 $(OBJ_bec_W32SYSLOG__ST_R)\
 \

OBJ_BEC_W32SYSLOG_WC_ST_R=\
 $(OBJ_bec_W32SYSLOG_WC__ST_R)\
 \

OBJ_BE_W32SYSLOG_ST_R=\
 $(OBJ_be_W32SYSLOG__ST_R)\
 \

OBJ_BEL_W32SYSLOG_ST_R=\
 $(OBJ_bel_W32SYSLOG__ST_R)\
 \

OBJ_BER_W32SYSLOG_ST_R=\
 $(OBJ_ber_W32SYSLOG__ST_R)\
 \

OBJ_FE_ALL_ST_R=\
 $(OBJ_fe_all__ST_R)\
 \

OBJ_FE_FAIL_ST_R=\
 $(OBJ_fe_fail__ST_R)\
 \

OBJ_FE_N_ST_R=\
 $(OBJ_fe_N__ST_R)\
 \

OBJ_FE_NULL_ST_R=\
 $(OBJ_fe_null__ST_R)\
 \

OBJ_FE_SIMPLE_ST_R=\
 $(OBJ_fe_simple__ST_R)\
 \

OBJ_FE_WINREG_ST_R=\
 $(OBJ_fe_winreg__ST_R)\
 \


# b64

OBJ_b64_b64_MT_D            = $(PROJ_OBJ_DIR)\b64.pan.b64.mt.debug.obj

OBJ_B64_MT_D=\
 $(OBJ_b64_b64_MT_D)\
 \

OBJ_b64_b64_MT_R            = $(PROJ_OBJ_DIR)\b64.pan.b64.mt.obj

OBJ_B64_MT_R=\
 $(OBJ_b64_b64_MT_R)\
 \

OBJ_b64_b64_ST_D            = $(PROJ_OBJ_DIR)\b64.pan.b64.debug.obj

OBJ_B64_ST_D=\
 $(OBJ_b64_b64_ST_D)\
 \

OBJ_b64_b64_ST_R            = $(PROJ_OBJ_DIR)\b64.pan.b64.obj

OBJ_B64_ST_R=\
 $(OBJ_b64_b64_ST_R)\
 \


# shwild

OBJ_shw_api_MT_D            = $(PROJ_OBJ_DIR)\shwild.pan.api.mt.debug.obj
OBJ_shw_matches_MT_D        = $(PROJ_OBJ_DIR)\shwild.pan.matches.mt.debug.obj
OBJ_shw_pattern_MT_D        = $(PROJ_OBJ_DIR)\shwild.pan.pattern.mt.debug.obj

OBJ_SHWILD_MT_D=\
 $(OBJ_shw_api_MT_D)\
 $(OBJ_shw_matches_MT_D)\
 $(OBJ_shw_pattern_MT_D)\
 \

OBJ_shw_api_MT_R            = $(PROJ_OBJ_DIR)\shwild.pan.api.mt.obj
OBJ_shw_matches_MT_R        = $(PROJ_OBJ_DIR)\shwild.pan.matches.mt.obj
OBJ_shw_pattern_MT_R        = $(PROJ_OBJ_DIR)\shwild.pan.pattern.mt.obj

OBJ_SHWILD_MT_R=\
 $(OBJ_shw_api_MT_R)\
 $(OBJ_shw_matches_MT_R)\
 $(OBJ_shw_pattern_MT_R)\
 \

OBJ_shw_api_ST_D            = $(PROJ_OBJ_DIR)\shwild.pan.api.debug.obj
OBJ_shw_matches_ST_D        = $(PROJ_OBJ_DIR)\shwild.pan.matches.debug.obj
OBJ_shw_pattern_ST_D        = $(PROJ_OBJ_DIR)\shwild.pan.pattern.debug.obj

OBJ_SHWILD_ST_D=\
 $(OBJ_shw_api_ST_D)\
 $(OBJ_shw_matches_ST_D)\
 $(OBJ_shw_pattern_ST_D)\
 \

OBJ_shw_api_ST_R            = $(PROJ_OBJ_DIR)\shwild.pan.api.obj
OBJ_shw_matches_ST_R        = $(PROJ_OBJ_DIR)\shwild.pan.matches.obj
OBJ_shw_pattern_ST_R        = $(PROJ_OBJ_DIR)\shwild.pan.pattern.obj

OBJ_SHWILD_ST_R=\
 $(OBJ_shw_api_ST_R)\
 $(OBJ_shw_matches_ST_R)\
 $(OBJ_shw_pattern_ST_R)\
 \


# xtests

OBJ_xts_core_MT_D           = $(PROJ_OBJ_DIR)\xtests.pan.core.api.mt.debug.obj

OBJ_XTESTS_MT_D=\
 $(OBJ_xts_core_MT_D)\
 \

OBJ_xts_core_MT_R           = $(PROJ_OBJ_DIR)\xtests.pan.core.api.mt.obj

OBJ_XTESTS_MT_R=\
 $(OBJ_xts_core_MT_R)\
 \

OBJ_xts_core_ST_D           = $(PROJ_OBJ_DIR)\xtests.pan.core.api.debug.obj

OBJ_XTESTS_ST_D=\
 $(OBJ_xts_core_ST_D)\
 \

OBJ_xts_core_ST_R           = $(PROJ_OBJ_DIR)\xtests.pan.core.api.obj

OBJ_XTESTS_ST_R=\
 $(OBJ_xts_core_ST_R)\
 \



########################################
# Examples

OBJ_EX_CPP_0_MT_D			=	.\ex.cpp.0.mt.debug.obj
OBJ_EX_CPP_1_MT_D			=	.\ex.cpp.1.mt.debug.obj
OBJ_EX_CPP_2_MT_D			=	.\ex.cpp.2.mt.debug.obj
OBJ_EX_CPP_3_MT_D			=	.\ex.cpp.3.mt.debug.obj
OBJ_EX_CPP_4_MT_D			=	.\ex.cpp.4.mt.debug.obj
OBJ_EX_CPP_5_MT_D			=	.\ex.cpp.5.mt.debug.obj
OBJ_EX_CPP_6_MT_D			=	.\ex.cpp.6.mt.debug.obj
OBJ_EX_CPP_7_MT_D			=	.\ex.cpp.7.mt.debug.obj
OBJ_EX_CPP_8_MT_D			=	.\ex.cpp.8.mt.debug.obj
OBJ_EX_CPP_9_MT_D			=	.\ex.cpp.9.mt.debug.obj
OBJ_EX_CPP_10_MT_D		=	.\ex.cpp.10.mt.debug.obj
OBJ_EX_CPP_11_MT_D		=	.\ex.cpp.11.mt.debug.obj
OBJ_EX_CPP_12_MT_D		=	.\ex.cpp.12.mt.debug.obj
OBJ_EX_CPP_13_MT_D		=	.\ex.cpp.13.mt.debug.obj
OBJ_EX_CPP_14_MT_D		=	.\ex.cpp.14.mt.debug.obj
OBJ_EX_CPP_15_MT_D		=	.\ex.cpp.15.mt.debug.obj
OBJ_EX_CPP_16_MT_D		=	.\ex.cpp.16.mt.debug.obj
OBJ_EX_CPP_17_MT_D		=	.\ex.cpp.17.mt.debug.obj
OBJ_EX_CPP_18_MT_D		=	.\ex.cpp.18.mt.debug.obj
OBJ_EX_CPP_19_MT_D		=	.\ex.cpp.19.mt.debug.obj
OBJ_EX_CPP_20_MT_D		=	.\ex.cpp.20.mt.debug.obj
OBJ_EX_CPP_21_MT_D		=	.\ex.cpp.21.mt.debug.obj
OBJ_EX_CPP_22_MT_D		=	.\ex.cpp.22.mt.debug.obj
OBJ_EX_CPP_23_MT_D		=	.\ex.cpp.23.mt.debug.obj
OBJ_EX_CPP_24_MT_D		=	.\ex.cpp.24.mt.debug.obj
OBJ_EX_CPP_25_MT_D		=	.\ex.cpp.25.mt.debug.obj
OBJ_EX_CPP_26_MT_D		=	.\ex.cpp.26.mt.debug.obj
OBJ_EX_CPP_27_MT_D		=	.\ex.cpp.27.mt.debug.obj
OBJ_EX_C_0_MT_D			=	.\ex.c.0.mt.debug.obj
OBJ_EX_C_1_MT_D			=	.\ex.c.1.mt.debug.obj
OBJ_EX_C_2_MT_D			=	.\ex.c.2.mt.debug.obj
OBJ_EX_C_3_MT_D			=	.\ex.c.3.mt.debug.obj
OBJ_EX_C_4_MT_D			=	.\ex.c.4.mt.debug.obj
OBJ_EX_C_5_MT_D			=	.\ex.c.5.mt.debug.obj
OBJ_EX_C_6_MT_D			=	.\ex.c.6.mt.debug.obj
OBJ_EX_C_7_MT_D			=	.\ex.c.7.mt.debug.obj
OBJ_EX_CPP_0_MT_R			=	.\ex.cpp.0.mt.obj
OBJ_EX_CPP_1_MT_R			=	.\ex.cpp.1.mt.obj
OBJ_EX_CPP_2_MT_R			=	.\ex.cpp.2.mt.obj
OBJ_EX_CPP_3_MT_R			=	.\ex.cpp.3.mt.obj
OBJ_EX_CPP_4_MT_R			=	.\ex.cpp.4.mt.obj
OBJ_EX_CPP_5_MT_R			=	.\ex.cpp.5.mt.obj
OBJ_EX_CPP_6_MT_R			=	.\ex.cpp.6.mt.obj
OBJ_EX_CPP_7_MT_R			=	.\ex.cpp.7.mt.obj
OBJ_EX_CPP_8_MT_R			=	.\ex.cpp.8.mt.obj
OBJ_EX_CPP_9_MT_R			=	.\ex.cpp.9.mt.obj
OBJ_EX_CPP_10_MT_R		=	.\ex.cpp.10.mt.obj
OBJ_EX_CPP_11_MT_R		=	.\ex.cpp.11.mt.obj
OBJ_EX_CPP_12_MT_R		=	.\ex.cpp.12.mt.obj
OBJ_EX_CPP_13_MT_R		=	.\ex.cpp.13.mt.obj
OBJ_EX_CPP_14_MT_R		=	.\ex.cpp.14.mt.obj
OBJ_EX_CPP_15_MT_R		=	.\ex.cpp.15.mt.obj
OBJ_EX_CPP_16_MT_R		=	.\ex.cpp.16.mt.obj
OBJ_EX_CPP_17_MT_R		=	.\ex.cpp.17.mt.obj
OBJ_EX_CPP_18_MT_R		=	.\ex.cpp.18.mt.obj
OBJ_EX_CPP_19_MT_R		=	.\ex.cpp.19.mt.obj
OBJ_EX_CPP_20_MT_R		=	.\ex.cpp.20.mt.obj
OBJ_EX_CPP_21_MT_R		=	.\ex.cpp.21.mt.obj
OBJ_EX_CPP_22_MT_R		=	.\ex.cpp.22.mt.obj
OBJ_EX_CPP_23_MT_R		=	.\ex.cpp.23.mt.obj
OBJ_EX_CPP_24_MT_R		=	.\ex.cpp.24.mt.obj
OBJ_EX_CPP_25_MT_R		=	.\ex.cpp.25.mt.obj
OBJ_EX_CPP_26_MT_R		=	.\ex.cpp.26.mt.obj
OBJ_EX_CPP_27_MT_R		=	.\ex.cpp.27.mt.obj
OBJ_EX_C_0_MT_R			=	.\ex.c.0.mt.obj
OBJ_EX_C_1_MT_R			=	.\ex.c.1.mt.obj
OBJ_EX_C_2_MT_R			=	.\ex.c.2.mt.obj
OBJ_EX_C_3_MT_R			=	.\ex.c.3.mt.obj
OBJ_EX_C_4_MT_R			=	.\ex.c.4.mt.obj
OBJ_EX_C_5_MT_R			=	.\ex.c.5.mt.obj
OBJ_EX_C_6_MT_R			=	.\ex.c.6.mt.obj
OBJ_EX_C_7_MT_R			=	.\ex.c.7.mt.obj
OBJ_EX_CPP_0_ST_D			=	.\ex.cpp.0.debug.obj
OBJ_EX_CPP_1_ST_D			=	.\ex.cpp.1.debug.obj
OBJ_EX_CPP_2_ST_D			=	.\ex.cpp.2.debug.obj
OBJ_EX_CPP_3_ST_D			=	.\ex.cpp.3.debug.obj
OBJ_EX_CPP_4_ST_D			=	.\ex.cpp.4.debug.obj
OBJ_EX_CPP_5_ST_D			=	.\ex.cpp.5.debug.obj
OBJ_EX_CPP_6_ST_D			=	.\ex.cpp.6.debug.obj
OBJ_EX_CPP_7_ST_D			=	.\ex.cpp.7.debug.obj
OBJ_EX_CPP_8_ST_D			=	.\ex.cpp.8.debug.obj
OBJ_EX_CPP_9_ST_D			=	.\ex.cpp.9.debug.obj
OBJ_EX_CPP_10_ST_D		=	.\ex.cpp.10.debug.obj
OBJ_EX_CPP_11_ST_D		=	.\ex.cpp.11.debug.obj
OBJ_EX_CPP_12_ST_D		=	.\ex.cpp.12.debug.obj
OBJ_EX_CPP_13_ST_D		=	.\ex.cpp.13.debug.obj
OBJ_EX_CPP_14_ST_D		=	.\ex.cpp.14.debug.obj
OBJ_EX_CPP_15_ST_D		=	.\ex.cpp.15.debug.obj
OBJ_EX_CPP_16_ST_D		=	.\ex.cpp.16.debug.obj
OBJ_EX_CPP_17_ST_D		=	.\ex.cpp.17.debug.obj
OBJ_EX_CPP_18_ST_D		=	.\ex.cpp.18.debug.obj
OBJ_EX_CPP_19_ST_D		=	.\ex.cpp.19.debug.obj
OBJ_EX_CPP_20_ST_D		=	.\ex.cpp.20.debug.obj
OBJ_EX_CPP_21_ST_D		=	.\ex.cpp.21.debug.obj
OBJ_EX_CPP_22_ST_D		=	.\ex.cpp.22.debug.obj
OBJ_EX_CPP_23_ST_D		=	.\ex.cpp.23.debug.obj
OBJ_EX_CPP_24_ST_D		=	.\ex.cpp.24.debug.obj
OBJ_EX_CPP_25_ST_D		=	.\ex.cpp.25.debug.obj
OBJ_EX_CPP_26_ST_D		=	.\ex.cpp.26.debug.obj
OBJ_EX_CPP_27_ST_D		=	.\ex.cpp.27.debug.obj
OBJ_EX_C_0_ST_D			=	.\ex.c.0.debug.obj
OBJ_EX_C_1_ST_D			=	.\ex.c.1.debug.obj
OBJ_EX_C_2_ST_D			=	.\ex.c.2.debug.obj
OBJ_EX_C_3_ST_D			=	.\ex.c.3.debug.obj
OBJ_EX_C_4_ST_D			=	.\ex.c.4.debug.obj
OBJ_EX_C_5_ST_D			=	.\ex.c.5.debug.obj
OBJ_EX_C_6_ST_D			=	.\ex.c.6.debug.obj
OBJ_EX_C_7_ST_D			=	.\ex.c.7.debug.obj
OBJ_EX_CPP_0_ST_R			=	.\ex.cpp.0.obj
OBJ_EX_CPP_1_ST_R			=	.\ex.cpp.1.obj
OBJ_EX_CPP_2_ST_R			=	.\ex.cpp.2.obj
OBJ_EX_CPP_3_ST_R			=	.\ex.cpp.3.obj
OBJ_EX_CPP_4_ST_R			=	.\ex.cpp.4.obj
OBJ_EX_CPP_5_ST_R			=	.\ex.cpp.5.obj
OBJ_EX_CPP_6_ST_R			=	.\ex.cpp.6.obj
OBJ_EX_CPP_7_ST_R			=	.\ex.cpp.7.obj
OBJ_EX_CPP_8_ST_R			=	.\ex.cpp.8.obj
OBJ_EX_CPP_9_ST_R			=	.\ex.cpp.9.obj
OBJ_EX_CPP_10_ST_R		=	.\ex.cpp.10.obj
OBJ_EX_CPP_11_ST_R		=	.\ex.cpp.11.obj
OBJ_EX_CPP_12_ST_R		=	.\ex.cpp.12.obj
OBJ_EX_CPP_13_ST_R		=	.\ex.cpp.13.obj
OBJ_EX_CPP_14_ST_R		=	.\ex.cpp.14.obj
OBJ_EX_CPP_15_ST_R		=	.\ex.cpp.15.obj
OBJ_EX_CPP_16_ST_R		=	.\ex.cpp.16.obj
OBJ_EX_CPP_17_ST_R		=	.\ex.cpp.17.obj
OBJ_EX_CPP_18_ST_R		=	.\ex.cpp.18.obj
OBJ_EX_CPP_19_ST_R		=	.\ex.cpp.19.obj
OBJ_EX_CPP_20_ST_R		=	.\ex.cpp.20.obj
OBJ_EX_CPP_21_ST_R		=	.\ex.cpp.21.obj
OBJ_EX_CPP_22_ST_R		=	.\ex.cpp.22.obj
OBJ_EX_CPP_23_ST_R		=	.\ex.cpp.23.obj
OBJ_EX_CPP_24_ST_R		=	.\ex.cpp.24.obj
OBJ_EX_CPP_25_ST_R		=	.\ex.cpp.25.obj
OBJ_EX_CPP_26_ST_R		=	.\ex.cpp.26.obj
OBJ_EX_CPP_27_ST_R		=	.\ex.cpp.27.obj
OBJ_EX_C_0_ST_R			=	.\ex.c.0.obj
OBJ_EX_C_1_ST_R			=	.\ex.c.1.obj
OBJ_EX_C_2_ST_R			=	.\ex.c.2.obj
OBJ_EX_C_3_ST_R			=	.\ex.c.3.obj
OBJ_EX_C_4_ST_R			=	.\ex.c.4.obj
OBJ_EX_C_5_ST_R			=	.\ex.c.5.obj
OBJ_EX_C_6_ST_R			=	.\ex.c.6.obj
OBJ_EX_C_7_ST_R			=	.\ex.c.7.obj

########################################
# Tests

##############################
# Component Tests

OBJ_TEST_COMP_core_initseq_MT_D	=	.\test.component.core.init_sequence.mt.debug.obj
OBJ_TEST_COMP_core_initseq_MT_R	=	.\test.component.core.init_sequence.mt.obj
OBJ_TEST_COMP_core_initseq_ST_D	=	.\test.component.core.init_sequence.debug.obj
OBJ_TEST_COMP_core_initseq_ST_R	=	.\test.component.core.init_sequence.obj
OBJ_TEST_COMP_custsev_MT_D	=	.\test.component.custom_severity.mt.debug.obj
OBJ_TEST_COMP_custsev_MT_R	=	.\test.component.custom_severity.mt.obj
OBJ_TEST_COMP_custsev_ST_D	=	.\test.component.custom_severity.debug.obj
OBJ_TEST_COMP_custsev_ST_R	=	.\test.component.custom_severity.obj
OBJ_TEST_COMP_file_mt_MT_D	=	.\test.component.be.file.threading.mt.debug.obj
OBJ_TEST_COMP_file_mt_MT_R	=	.\test.component.be.file.threading.mt.obj
OBJ_TEST_COMP_ins_args_MT_D	=	.\test.component.inserters.args.mt.debug.obj
OBJ_TEST_COMP_ins_args_MT_R	=	.\test.component.inserters.args.mt.obj
OBJ_TEST_COMP_ins_args_ST_D	=	.\test.component.inserters.args.debug.obj
OBJ_TEST_COMP_ins_args_ST_R	=	.\test.component.inserters.args.obj
OBJ_TEST_COMP_ins_b64_MT_D	=	.\test.component.inserters.b64.mt.debug.obj
OBJ_TEST_COMP_ins_b64_MT_R	=	.\test.component.inserters.b64.mt.obj
OBJ_TEST_COMP_ins_b64_ST_D	=	.\test.component.inserters.b64.debug.obj
OBJ_TEST_COMP_ins_b64_ST_R	=	.\test.component.inserters.b64.obj
OBJ_TEST_COMP_ins_bool_MT_D	=	.\test.component.inserters.boolean.mt.debug.obj
OBJ_TEST_COMP_ins_bool_MT_R	=	.\test.component.inserters.boolean.mt.obj
OBJ_TEST_COMP_ins_bool_ST_D	=	.\test.component.inserters.boolean.debug.obj
OBJ_TEST_COMP_ins_bool_ST_R	=	.\test.component.inserters.boolean.obj
OBJ_TEST_COMP_ins_hostid_MT_D	=	.\test.component.inserters.hostId.mt.debug.obj
OBJ_TEST_COMP_ins_hostid_MT_R	=	.\test.component.inserters.hostId.mt.obj
OBJ_TEST_COMP_ins_hostid_ST_D	=	.\test.component.inserters.hostId.debug.obj
OBJ_TEST_COMP_ins_hostid_ST_R	=	.\test.component.inserters.hostId.obj
OBJ_TEST_COMP_ins_int_MT_D	=	.\test.component.inserters.integer.mt.debug.obj
OBJ_TEST_COMP_ins_int_MT_R	=	.\test.component.inserters.integer.mt.obj
OBJ_TEST_COMP_ins_int_ST_D	=	.\test.component.inserters.integer.debug.obj
OBJ_TEST_COMP_ins_int_ST_R	=	.\test.component.inserters.integer.obj
OBJ_TEST_COMP_ins_pad_MT_D	=	.\test.component.inserters.pad.mt.debug.obj
OBJ_TEST_COMP_ins_pad_MT_R	=	.\test.component.inserters.pad.mt.obj
OBJ_TEST_COMP_ins_pad_ST_D	=	.\test.component.inserters.pad.debug.obj
OBJ_TEST_COMP_ins_pad_ST_R	=	.\test.component.inserters.pad.obj
OBJ_TEST_COMP_ins_ptr_MT_D	=	.\test.component.inserters.pointer.mt.debug.obj
OBJ_TEST_COMP_ins_ptr_MT_R	=	.\test.component.inserters.pointer.mt.obj
OBJ_TEST_COMP_ins_ptr_ST_D	=	.\test.component.inserters.pointer.debug.obj
OBJ_TEST_COMP_ins_ptr_ST_R	=	.\test.component.inserters.pointer.obj
OBJ_TEST_COMP_ins_prid_MT_D	=	.\test.component.inserters.processId.mt.debug.obj
OBJ_TEST_COMP_ins_prid_MT_R	=	.\test.component.inserters.processId.mt.obj
OBJ_TEST_COMP_ins_prid_ST_D	=	.\test.component.inserters.processId.debug.obj
OBJ_TEST_COMP_ins_prid_ST_R	=	.\test.component.inserters.processId.obj
OBJ_TEST_COMP_ins_real_MT_D	=	.\test.component.inserters.real.mt.debug.obj
OBJ_TEST_COMP_ins_real_MT_R	=	.\test.component.inserters.real.mt.obj
OBJ_TEST_COMP_ins_real_ST_D	=	.\test.component.inserters.real.debug.obj
OBJ_TEST_COMP_ins_real_ST_R	=	.\test.component.inserters.real.obj
OBJ_TEST_COMP_ins_slice_MT_D	=	.\test.component.inserters.slice.mt.debug.obj
OBJ_TEST_COMP_ins_slice_MT_R	=	.\test.component.inserters.slice.mt.obj
OBJ_TEST_COMP_ins_slice_ST_D	=	.\test.component.inserters.slice.debug.obj
OBJ_TEST_COMP_ins_slice_ST_R	=	.\test.component.inserters.slice.obj
OBJ_TEST_COMP_ins_thrid_MT_D	=	.\test.component.inserters.threadId.mt.debug.obj
OBJ_TEST_COMP_ins_thrid_MT_R	=	.\test.component.inserters.threadId.mt.obj
OBJ_TEST_COMP_ins_thrid_ST_D	=	.\test.component.inserters.threadId.debug.obj
OBJ_TEST_COMP_ins_thrid_ST_R	=	.\test.component.inserters.threadId.obj
OBJ_TEST_COMP_ins_w2m_MT_D	=	.\test.component.inserters.w2m.mt.debug.obj
OBJ_TEST_COMP_ins_w2m_MT_R	=	.\test.component.inserters.w2m.mt.obj
OBJ_TEST_COMP_ins_w2m_ST_D	=	.\test.component.inserters.w2m.debug.obj
OBJ_TEST_COMP_ins_w2m_ST_R	=	.\test.component.inserters.w2m.obj
OBJ_TEST_COMP_log_1_MT_D	=	.\test.component.log.1.mt.debug.obj
OBJ_TEST_COMP_log_1_MT_R	=	.\test.component.log.1.mt.obj
OBJ_TEST_COMP_log_1_ST_D	=	.\test.component.log.1.debug.obj
OBJ_TEST_COMP_log_1_ST_R	=	.\test.component.log.1.obj
OBJ_TEST_COMP_pan_puts_MT_D	=	.\test.component.core.pan_logputs.mt.debug.obj
OBJ_TEST_COMP_pan_puts_MT_R	=	.\test.component.core.pan_logputs.mt.obj
OBJ_TEST_COMP_pan_puts_ST_D	=	.\test.component.core.pan_logputs.debug.obj
OBJ_TEST_COMP_pan_puts_ST_R	=	.\test.component.core.pan_logputs.obj
OBJ_TEST_COMP_pan_prtf_MT_D	=	.\test.component.core.pan_logprintf.mt.debug.obj
OBJ_TEST_COMP_pan_prtf_MT_R	=	.\test.component.core.pan_logprintf.mt.obj
OBJ_TEST_COMP_pan_prtf_ST_D	=	.\test.component.core.pan_logprintf.debug.obj
OBJ_TEST_COMP_pan_prtf_ST_R	=	.\test.component.core.pan_logprintf.obj
OBJ_TEST_COMP_trace_1_MT_D	=	.\test.component.trace.1.mt.debug.obj
OBJ_TEST_COMP_trace_1_MT_R	=	.\test.component.trace.1.mt.obj
OBJ_TEST_COMP_trace_1_ST_D	=	.\test.component.trace.1.debug.obj
OBJ_TEST_COMP_trace_1_ST_R	=	.\test.component.trace.1.obj

##############################
# Performance Tests

OBJ_TEST_PERF_ins_w2m_MT_D		=	.\test.performance.inserters.w2m.mt.debug.obj
OBJ_TEST_PERF_ins_w2m_MT_R		=	.\test.performance.inserters.w2m.mt.obj
OBJ_TEST_PERF_ins_w2m_ST_D		=	.\test.performance.inserters.w2m.debug.obj
OBJ_TEST_PERF_ins_w2m_ST_R		=	.\test.performance.inserters.w2m.obj

##############################
# Scratch Tests

OBJ_TEST_API_MT_D			=	.\test.api.mt.debug.obj
OBJ_TEST_FE_MT_D			=	.\test.fe.mt.debug.obj
OBJ_TEST_BE_N_MT_D			=	.\test.be.N.fail.mt.debug.obj
OBJ_TEST_API_MT_R			=	.\test.api.mt.obj
OBJ_TEST_FE_MT_R			=	.\test.fe.mt.obj
OBJ_TEST_BE_N_MT_R			=	.\test.be.N.fail.mt.obj
OBJ_TEST_API_ST_D			=	.\test.api.debug.obj
OBJ_TEST_FE_ST_D			=	.\test.fe.debug.obj
OBJ_TEST_BE_N_ST_D			=	.\test.be.N.fail.debug.obj
OBJ_TEST_API_ST_R			=	.\test.api.obj
OBJ_TEST_FE_ST_R			=	.\test.fe.obj
OBJ_TEST_BE_N_ST_R			=	.\test.be.N.fail.obj

##############################
# Unit Tests

OBJ_TEST_UNIT_lvls_dyninit_MT_D	=	.\test.unit.levels.dynamic_init.mt.debug.obj
OBJ_TEST_UNIT_lvls_dyninit_MT_R	=	.\test.unit.levels.dynamic_init.mt.obj
OBJ_TEST_UNIT_lvls_dyninit_ST_D	=	.\test.unit.levels.dynamic_init.debug.obj
OBJ_TEST_UNIT_lvls_dyninit_ST_R	=	.\test.unit.levels.dynamic_init.obj
OBJ_TEST_UNIT_lvls_vals_MT_D	=	.\test.unit.levels.values.mt.debug.obj
OBJ_TEST_UNIT_lvls_vals_MT_R	=	.\test.unit.levels.values.mt.obj
OBJ_TEST_UNIT_lvls_vals_ST_D	=	.\test.unit.levels.values.debug.obj
OBJ_TEST_UNIT_lvls_vals_ST_R	=	.\test.unit.levels.values.obj
OBJ_TEST_UNIT_getcurrtm_MT_D	=	.\test.unit.util.getcurrenttime.mt.debug.obj
OBJ_TEST_UNIT_getcurrtm_MT_R	=	.\test.unit.util.getcurrenttime.mt.obj
OBJ_TEST_UNIT_getcurrtm_ST_D	=	.\test.unit.util.getcurrenttime.debug.obj
OBJ_TEST_UNIT_getcurrtm_ST_R	=	.\test.unit.util.getcurrenttime.obj
OBJ_TEST_UNIT_getversion_MT_D	=	.\test.unit.getversion.mt.debug.obj
OBJ_TEST_UNIT_getversion_MT_R	=	.\test.unit.getversion.mt.obj
OBJ_TEST_UNIT_getversion_ST_D	=	.\test.unit.getversion.debug.obj
OBJ_TEST_UNIT_getversion_ST_R	=	.\test.unit.getversion.obj
OBJ_TEST_UNIT_gethostname_MT_D	=	.\test.unit.util.gethostname.mt.debug.obj
OBJ_TEST_UNIT_gethostname_MT_R	=	.\test.unit.util.gethostname.mt.obj
OBJ_TEST_UNIT_gethostname_ST_D	=	.\test.unit.util.gethostname.debug.obj
OBJ_TEST_UNIT_gethostname_ST_R	=	.\test.unit.util.gethostname.obj
OBJ_TEST_UNIT_onbailout_MT_D	=	.\test.unit.util.onbailout.mt.debug.obj
OBJ_TEST_UNIT_strnlen_MT_D	=	.\test.unit.util.strnlen.mt.debug.obj
OBJ_TEST_UNIT_onbailout_MT_R	=	.\test.unit.util.onbailout.mt.obj
OBJ_TEST_UNIT_strnlen_MT_R	=	.\test.unit.util.strnlen.mt.obj
OBJ_TEST_UNIT_onbailout_ST_D	=	.\test.unit.util.onbailout.debug.obj
OBJ_TEST_UNIT_strnlen_ST_D	=	.\test.unit.util.strnlen.debug.obj
OBJ_TEST_UNIT_onbailout_ST_R	=	.\test.unit.util.onbailout.obj
OBJ_TEST_UNIT_strnlen_ST_R	=	.\test.unit.util.strnlen.obj
OBJ_TEST_UNIT_bec_CEO_MT_D		=	.\test.unit.bec.COMErrorObject.mt.debug.obj
OBJ_TEST_UNIT_bec_CEO_MT_R		=	.\test.unit.bec.COMErrorObject.mt.obj
OBJ_TEST_UNIT_bec_CEO_ST_D		=	.\test.unit.bec.COMErrorObject.debug.obj
OBJ_TEST_UNIT_bec_CEO_ST_R		=	.\test.unit.bec.COMErrorObject.obj
OBJ_TEST_UNIT_bec_file_MT_D		=	.\test.unit.bec.file.mt.debug.obj
OBJ_TEST_UNIT_bec_file_MT_R		=	.\test.unit.bec.file.mt.obj
OBJ_TEST_UNIT_bec_file_ST_D		=	.\test.unit.bec.file.debug.obj
OBJ_TEST_UNIT_bec_file_ST_R		=	.\test.unit.bec.file.obj
OBJ_TEST_UNIT_bec_fprintf_MT_D	=	.\test.unit.bec.fprintf.mt.debug.obj
OBJ_TEST_UNIT_bec_fprintf_MT_R	=	.\test.unit.bec.fprintf.mt.obj
OBJ_TEST_UNIT_bec_fprintf_ST_D	=	.\test.unit.bec.fprintf.debug.obj
OBJ_TEST_UNIT_bec_fprintf_ST_R	=	.\test.unit.bec.fprintf.obj
OBJ_TEST_UNIT_bec_fail_MT_D		=	.\test.unit.bec.fail.mt.debug.obj
OBJ_TEST_UNIT_bec_fail_MT_R		=	.\test.unit.bec.fail.mt.obj
OBJ_TEST_UNIT_bec_fail_ST_D		=	.\test.unit.bec.fail.debug.obj
OBJ_TEST_UNIT_bec_fail_ST_R		=	.\test.unit.bec.fail.obj
OBJ_TEST_UNIT_be_fail_MT_D		=	.\test.unit.be.fail.mt.debug.obj
OBJ_TEST_UNIT_be_fail_MT_R		=	.\test.unit.be.fail.mt.obj
OBJ_TEST_UNIT_be_fail_ST_D		=	.\test.unit.be.fail.debug.obj
OBJ_TEST_UNIT_be_fail_ST_R		=	.\test.unit.be.fail.obj
OBJ_TEST_UNIT_be_lrsplit_MT_D	=	.\test.unit.be.lrsplit.mt.debug.obj
OBJ_TEST_UNIT_be_lrsplit_MT_R	=	.\test.unit.be.lrsplit.mt.obj
OBJ_TEST_UNIT_be_lrsplit_ST_D	=	.\test.unit.be.lrsplit.debug.obj
OBJ_TEST_UNIT_be_lrsplit_ST_R	=	.\test.unit.be.lrsplit.obj
OBJ_TEST_UNIT_be_N_MT_D			=	.\test.unit.be.N.mt.debug.obj
OBJ_TEST_UNIT_be_N_MT_R			=	.\test.unit.be.N.mt.obj
OBJ_TEST_UNIT_be_N_ST_D			=	.\test.unit.be.N.debug.obj
OBJ_TEST_UNIT_be_N_ST_R			=	.\test.unit.be.N.obj
OBJ_TEST_UNIT_fe_all_MT_D		=	.\test.unit.fe.all.mt.debug.obj
OBJ_TEST_UNIT_fe_all_MT_R		=	.\test.unit.fe.all.mt.obj
OBJ_TEST_UNIT_fe_all_ST_D		=	.\test.unit.fe.all.debug.obj
OBJ_TEST_UNIT_fe_all_ST_R		=	.\test.unit.fe.all.obj
OBJ_TEST_UNIT_fe_fail_MT_D		=	.\test.unit.fe.fail.mt.debug.obj
OBJ_TEST_UNIT_fe_fail_MT_R		=	.\test.unit.fe.fail.mt.obj
OBJ_TEST_UNIT_fe_fail_ST_D		=	.\test.unit.fe.fail.debug.obj
OBJ_TEST_UNIT_fe_fail_ST_R		=	.\test.unit.fe.fail.obj
OBJ_TEST_UNIT_fe_N_MT_D			=	.\test.unit.fe.N.mt.debug.obj
OBJ_TEST_UNIT_fe_N_MT_R			=	.\test.unit.fe.N.mt.obj
OBJ_TEST_UNIT_fe_N_ST_D			=	.\test.unit.fe.N.debug.obj
OBJ_TEST_UNIT_fe_N_ST_R			=	.\test.unit.fe.N.obj
OBJ_TEST_UNIT_fe_null_MT_D		=	.\test.unit.fe.null.mt.debug.obj
OBJ_TEST_UNIT_fe_null_MT_R		=	.\test.unit.fe.null.mt.obj
OBJ_TEST_UNIT_fe_null_ST_D		=	.\test.unit.fe.null.debug.obj
OBJ_TEST_UNIT_fe_null_ST_R		=	.\test.unit.fe.null.obj
OBJ_TEST_UNIT_fe_simple_MT_D	=	.\test.unit.fe.simple.mt.debug.obj
OBJ_TEST_UNIT_fe_simple_MT_R	=	.\test.unit.fe.simple.mt.obj
OBJ_TEST_UNIT_fe_simple_ST_D	=	.\test.unit.fe.simple.debug.obj
OBJ_TEST_UNIT_fe_simple_ST_R	=	.\test.unit.fe.simple.obj
OBJ_TEST_UNIT_fe_WinReg_MT_D	=	.\test.unit.fe.WindowsRegistry.mt.debug.obj
OBJ_TEST_UNIT_fe_WinReg_MT_R	=	.\test.unit.fe.WindowsRegistry.mt.obj
OBJ_TEST_UNIT_fe_WinReg_ST_D	=	.\test.unit.fe.WindowsRegistry.debug.obj
OBJ_TEST_UNIT_fe_WinReg_ST_R	=	.\test.unit.fe.WindowsRegistry.obj

##################################################
# Target groups

########################################
# Objects

# util
OBJS_UTIL=\
 $(OBJ_UTIL_MT_D)\
 $(OBJ_UTIL_MT_R)\
 $(OBJ_UTIL_ST_D)\
 $(OBJ_UTIL_ST_R)\
 \

# core
OBJS_CORE=\
 $(OBJ_CORE_MT_D)\
 $(OBJ_CORE_MT_R)\
 $(OBJ_CORE_ST_D)\
 $(OBJ_CORE_ST_R)\
 \

OBJS_FE=\
 $(OBJ_FE_ALL_MT_D)\
 $(OBJ_FE_FAIL_MT_D)\
 $(OBJ_FE_N_MT_D)\
 $(OBJ_FE_NULL_MT_D)\
 $(OBJ_FE_SIMPLE_MT_D)\
 $(OBJ_FE_WINREG_MT_D)\
 $(OBJ_FE_ALL_MT_R)\
 $(OBJ_FE_FAIL_MT_R)\
 $(OBJ_FE_N_MT_R)\
 $(OBJ_FE_NULL_MT_R)\
 $(OBJ_FE_SIMPLE_MT_R)\
 $(OBJ_FE_WINREG_MT_R)\
 $(OBJ_FE_ALL_ST_D)\
 $(OBJ_FE_FAIL_ST_D)\
 $(OBJ_FE_N_ST_D)\
 $(OBJ_FE_NULL_ST_D)\
 $(OBJ_FE_SIMPLE_ST_D)\
 $(OBJ_FE_WINREG_ST_D)\
 $(OBJ_FE_ALL_ST_R)\
 $(OBJ_FE_FAIL_ST_R)\
 $(OBJ_FE_N_ST_R)\
 $(OBJ_FE_NULL_ST_R)\
 $(OBJ_FE_SIMPLE_ST_R)\
 $(OBJ_FE_WINREG_ST_R)\
 \

OBJS_BE=\
 $(OBJ_BE_LRSPLIT_MT_D)\
 $(OBJ_BE_N_MT_D)\
 $(OBJ_BEC_TEST_MT_D)\
 $(OBJ_BE_TEST_MT_D)\
 $(OBJ_BEL_TEST_MT_D)\
 $(OBJ_BER_TEST_MT_D)\
 $(OBJ_BEC_FAIL_MT_D)\
 $(OBJ_BE_FAIL_MT_D)\
 $(OBJ_BEL_FAIL_MT_D)\
 $(OBJ_BER_FAIL_MT_D)\
 $(OBJ_BEC_FILE_MT_D)\
 $(OBJ_BEC_FILE_WC_MT_D)\
 $(OBJ_BE_FILE_MT_D)\
 $(OBJ_BEL_FILE_MT_D)\
 $(OBJ_BER_FILE_MT_D)\
 $(OBJ_BEC_FPRINTF_MT_D)\
 $(OBJ_BEC_FPRINTF_WC_MT_D)\
 $(OBJ_BE_FPRINTF_MT_D)\
 $(OBJ_BEL_FPRINTF_MT_D)\
 $(OBJ_BER_FPRINTF_MT_D)\
 $(OBJ_BEC_NULL_MT_D)\
 $(OBJ_BE_NULL_MT_D)\
 $(OBJ_BEL_NULL_MT_D)\
 $(OBJ_BER_NULL_MT_D)\
 $(OBJ_BEC_COMERROBJ_MT_D)\
 $(OBJ_BEC_COMERROBJ_WC_MT_D)\
 $(OBJ_BE_COMERROBJ_MT_D)\
 $(OBJ_BEL_COMERROBJ_MT_D)\
 $(OBJ_BER_COMERROBJ_MT_D)\
 $(OBJ_BEC_SPEECH_MT_D)\
 $(OBJ_BEC_SPEECH_WC_MT_D)\
 $(OBJ_BE_SPEECH_MT_D)\
 $(OBJ_BEL_SPEECH_MT_D)\
 $(OBJ_BER_SPEECH_MT_D)\
 $(OBJ_BEC_WINEVLOG_MT_D)\
 $(OBJ_BE_WINEVLOG_MT_D)\
 $(OBJ_BEL_WINEVLOG_MT_D)\
 $(OBJ_BER_WINEVLOG_MT_D)\
 $(OBJ_BEC_WINMSGBX_MT_D)\
 $(OBJ_BE_WINMSGBX_MT_D)\
 $(OBJ_BEL_WINMSGBX_MT_D)\
 $(OBJ_BER_WINMSGBX_MT_D)\
 $(OBJ_BEC_W32CONS_MT_D)\
 $(OBJ_BEC_W32CONS_WC_MT_D)\
 $(OBJ_BE_W32CONS_MT_D)\
 $(OBJ_BEL_W32CONS_MT_D)\
 $(OBJ_BER_W32CONS_MT_D)\
 $(OBJ_BEC_W32DBGR_MT_D)\
 $(OBJ_BEC_W32DBGR_WC_MT_D)\
 $(OBJ_BE_W32DBGR_MT_D)\
 $(OBJ_BEL_W32DBGR_MT_D)\
 $(OBJ_BER_W32DBGR_MT_D)\
 $(OBJ_BEC_W32SYSLOG_MT_D)\
 $(OBJ_BEC_W32SYSLOG_WC_MT_D)\
 $(OBJ_BE_W32SYSLOG_MT_D)\
 $(OBJ_BEL_W32SYSLOG_MT_D)\
 $(OBJ_BER_W32SYSLOG_MT_D)\
 $(OBJ_BE_LRSPLIT_MT_R)\
 $(OBJ_BE_N_MT_R)\
 $(OBJ_BEC_TEST_MT_R)\
 $(OBJ_BE_TEST_MT_R)\
 $(OBJ_BEL_TEST_MT_R)\
 $(OBJ_BER_TEST_MT_R)\
 $(OBJ_BEC_FAIL_MT_R)\
 $(OBJ_BE_FAIL_MT_R)\
 $(OBJ_BEL_FAIL_MT_R)\
 $(OBJ_BER_FAIL_MT_R)\
 $(OBJ_BEC_FILE_MT_R)\
 $(OBJ_BEC_FILE_WC_MT_R)\
 $(OBJ_BE_FILE_MT_R)\
 $(OBJ_BEL_FILE_MT_R)\
 $(OBJ_BER_FILE_MT_R)\
 $(OBJ_BEC_FPRINTF_MT_R)\
 $(OBJ_BEC_FPRINTF_WC_MT_R)\
 $(OBJ_BE_FPRINTF_MT_R)\
 $(OBJ_BEL_FPRINTF_MT_R)\
 $(OBJ_BER_FPRINTF_MT_R)\
 $(OBJ_BEC_NULL_MT_R)\
 $(OBJ_BE_NULL_MT_R)\
 $(OBJ_BEL_NULL_MT_R)\
 $(OBJ_BER_NULL_MT_R)\
 $(OBJ_BEC_COMERROBJ_MT_R)\
 $(OBJ_BEC_COMERROBJ_WC_MT_R)\
 $(OBJ_BE_COMERROBJ_MT_R)\
 $(OBJ_BEL_COMERROBJ_MT_R)\
 $(OBJ_BER_COMERROBJ_MT_R)\
 $(OBJ_BEC_SPEECH_MT_R)\
 $(OBJ_BEC_SPEECH_WC_MT_R)\
 $(OBJ_BE_SPEECH_MT_R)\
 $(OBJ_BEL_SPEECH_MT_R)\
 $(OBJ_BER_SPEECH_MT_R)\
 $(OBJ_BEC_WINEVLOG_MT_R)\
 $(OBJ_BE_WINEVLOG_MT_R)\
 $(OBJ_BEL_WINEVLOG_MT_R)\
 $(OBJ_BER_WINEVLOG_MT_R)\
 $(OBJ_BEC_WINMSGBX_MT_R)\
 $(OBJ_BE_WINMSGBX_MT_R)\
 $(OBJ_BEL_WINMSGBX_MT_R)\
 $(OBJ_BER_WINMSGBX_MT_R)\
 $(OBJ_BEC_W32CONS_MT_R)\
 $(OBJ_BEC_W32CONS_WC_MT_R)\
 $(OBJ_BE_W32CONS_MT_R)\
 $(OBJ_BEL_W32CONS_MT_R)\
 $(OBJ_BER_W32CONS_MT_R)\
 $(OBJ_BEC_W32DBGR_MT_R)\
 $(OBJ_BEC_W32DBGR_WC_MT_R)\
 $(OBJ_BE_W32DBGR_MT_R)\
 $(OBJ_BEL_W32DBGR_MT_R)\
 $(OBJ_BER_W32DBGR_MT_R)\
 $(OBJ_BEC_W32SYSLOG_MT_R)\
 $(OBJ_BEC_W32SYSLOG_WC_MT_R)\
 $(OBJ_BE_W32SYSLOG_MT_R)\
 $(OBJ_BEL_W32SYSLOG_MT_R)\
 $(OBJ_BER_W32SYSLOG_MT_R)\
 $(OBJ_BE_LRSPLIT_ST_D)\
 $(OBJ_BE_N_ST_D)\
 $(OBJ_BEC_TEST_ST_D)\
 $(OBJ_BE_TEST_ST_D)\
 $(OBJ_BEL_TEST_ST_D)\
 $(OBJ_BER_TEST_ST_D)\
 $(OBJ_BEC_FAIL_ST_D)\
 $(OBJ_BE_FAIL_ST_D)\
 $(OBJ_BEL_FAIL_ST_D)\
 $(OBJ_BER_FAIL_ST_D)\
 $(OBJ_BEC_FILE_ST_D)\
 $(OBJ_BEC_FILE_WC_ST_D)\
 $(OBJ_BE_FILE_ST_D)\
 $(OBJ_BEL_FILE_ST_D)\
 $(OBJ_BER_FILE_ST_D)\
 $(OBJ_BEC_FPRINTF_ST_D)\
 $(OBJ_BEC_FPRINTF_WC_ST_D)\
 $(OBJ_BE_FPRINTF_ST_D)\
 $(OBJ_BEL_FPRINTF_ST_D)\
 $(OBJ_BER_FPRINTF_ST_D)\
 $(OBJ_BEC_NULL_ST_D)\
 $(OBJ_BE_NULL_ST_D)\
 $(OBJ_BEL_NULL_ST_D)\
 $(OBJ_BER_NULL_ST_D)\
 $(OBJ_BEC_COMERROBJ_ST_D)\
 $(OBJ_BEC_COMERROBJ_WC_ST_D)\
 $(OBJ_BE_COMERROBJ_ST_D)\
 $(OBJ_BEL_COMERROBJ_ST_D)\
 $(OBJ_BER_COMERROBJ_ST_D)\
 $(OBJ_BEC_SPEECH_ST_D)\
 $(OBJ_BEC_SPEECH_WC_ST_D)\
 $(OBJ_BE_SPEECH_ST_D)\
 $(OBJ_BEL_SPEECH_ST_D)\
 $(OBJ_BER_SPEECH_ST_D)\
 $(OBJ_BEC_WINEVLOG_ST_D)\
 $(OBJ_BE_WINEVLOG_ST_D)\
 $(OBJ_BEL_WINEVLOG_ST_D)\
 $(OBJ_BER_WINEVLOG_ST_D)\
 $(OBJ_BEC_WINMSGBX_ST_D)\
 $(OBJ_BE_WINMSGBX_ST_D)\
 $(OBJ_BEL_WINMSGBX_ST_D)\
 $(OBJ_BER_WINMSGBX_ST_D)\
 $(OBJ_BEC_W32CONS_ST_D)\
 $(OBJ_BEC_W32CONS_WC_ST_D)\
 $(OBJ_BE_W32CONS_ST_D)\
 $(OBJ_BEL_W32CONS_ST_D)\
 $(OBJ_BER_W32CONS_ST_D)\
 $(OBJ_BEC_W32DBGR_ST_D)\
 $(OBJ_BEC_W32DBGR_WC_ST_D)\
 $(OBJ_BE_W32DBGR_ST_D)\
 $(OBJ_BEL_W32DBGR_ST_D)\
 $(OBJ_BER_W32DBGR_ST_D)\
 $(OBJ_BEC_W32SYSLOG_ST_D)\
 $(OBJ_BEC_W32SYSLOG_WC_ST_D)\
 $(OBJ_BE_W32SYSLOG_ST_D)\
 $(OBJ_BEL_W32SYSLOG_ST_D)\
 $(OBJ_BER_W32SYSLOG_ST_D)\
 $(OBJ_BE_LRSPLIT_ST_R)\
 $(OBJ_BE_N_ST_R)\
 $(OBJ_BEC_TEST_ST_R)\
 $(OBJ_BE_TEST_ST_R)\
 $(OBJ_BEL_TEST_ST_R)\
 $(OBJ_BER_TEST_ST_R)\
 $(OBJ_BEC_FAIL_ST_R)\
 $(OBJ_BE_FAIL_ST_R)\
 $(OBJ_BEL_FAIL_ST_R)\
 $(OBJ_BER_FAIL_ST_R)\
 $(OBJ_BEC_FILE_ST_R)\
 $(OBJ_BEC_FILE_WC_ST_R)\
 $(OBJ_BE_FILE_ST_R)\
 $(OBJ_BEL_FILE_ST_R)\
 $(OBJ_BER_FILE_ST_R)\
 $(OBJ_BEC_FPRINTF_ST_R)\
 $(OBJ_BEC_FPRINTF_WC_ST_R)\
 $(OBJ_BE_FPRINTF_ST_R)\
 $(OBJ_BEL_FPRINTF_ST_R)\
 $(OBJ_BER_FPRINTF_ST_R)\
 $(OBJ_BEC_NULL_ST_R)\
 $(OBJ_BE_NULL_ST_R)\
 $(OBJ_BEL_NULL_ST_R)\
 $(OBJ_BER_NULL_ST_R)\
 $(OBJ_BEC_COMERROBJ_ST_R)\
 $(OBJ_BEC_COMERROBJ_WC_ST_R)\
 $(OBJ_BE_COMERROBJ_ST_R)\
 $(OBJ_BEL_COMERROBJ_ST_R)\
 $(OBJ_BER_COMERROBJ_ST_R)\
 $(OBJ_BEC_SPEECH_ST_R)\
 $(OBJ_BEC_SPEECH_WC_ST_R)\
 $(OBJ_BE_SPEECH_ST_R)\
 $(OBJ_BEL_SPEECH_ST_R)\
 $(OBJ_BER_SPEECH_ST_R)\
 $(OBJ_BEC_WINEVLOG_ST_R)\
 $(OBJ_BE_WINEVLOG_ST_R)\
 $(OBJ_BEL_WINEVLOG_ST_R)\
 $(OBJ_BER_WINEVLOG_ST_R)\
 $(OBJ_BEC_WINMSGBX_ST_R)\
 $(OBJ_BE_WINMSGBX_ST_R)\
 $(OBJ_BEL_WINMSGBX_ST_R)\
 $(OBJ_BER_WINMSGBX_ST_R)\
 $(OBJ_BEC_W32CONS_ST_R)\
 $(OBJ_BEC_W32CONS_WC_ST_R)\
 $(OBJ_BE_W32CONS_ST_R)\
 $(OBJ_BEL_W32CONS_ST_R)\
 $(OBJ_BER_W32CONS_ST_R)\
 $(OBJ_BEC_W32DBGR_ST_R)\
 $(OBJ_BEC_W32DBGR_WC_ST_R)\
 $(OBJ_BE_W32DBGR_ST_R)\
 $(OBJ_BEL_W32DBGR_ST_R)\
 $(OBJ_BER_W32DBGR_ST_R)\
 $(OBJ_BEC_W32SYSLOG_ST_R)\
 $(OBJ_BEC_W32SYSLOG_WC_ST_R)\
 $(OBJ_BE_W32SYSLOG_ST_R)\
 $(OBJ_BEL_W32SYSLOG_ST_R)\
 $(OBJ_BER_W32SYSLOG_ST_R)\
 \


OBJS_ACE=\
 $(OBJ_BEC_ACE_MT_D)\
 $(OBJ_BE_ACE_MT_D)\
 $(OBJ_BEL_ACE_MT_D)\
 $(OBJ_BER_ACE_MT_D)\
 $(OBJ_BEC_ACE_MT_R)\
 $(OBJ_BE_ACE_MT_R)\
 $(OBJ_BEL_ACE_MT_R)\
 $(OBJ_BER_ACE_MT_R)\
 \

# b64
OBJS_B64=\
 $(OBJ_B64_MT_D)\
 $(OBJ_B64_MT_R)\
 $(OBJ_B64_ST_D)\
 $(OBJ_B64_ST_R)\
 \

# shwild
OBJS_SHWILD=\
 $(OBJ_SHWILD_MT_D)\
 $(OBJ_SHWILD_MT_R)\
 $(OBJ_SHWILD_ST_D)\
 $(OBJ_SHWILD_ST_R)\
 \

# xtests
OBJS_XTESTS=\
 $(OBJ_XTESTS_MT_D)\
 $(OBJ_XTESTS_MT_R)\
 $(OBJ_XTESTS_ST_D)\
 $(OBJ_XTESTS_ST_R)\
 \

# examples
OBJS_EXAMPLE_C=\
 $(OBJ_EX_C_0_MT_D)\
 $(OBJ_EX_C_1_MT_D)\
 $(OBJ_EX_C_2_MT_D)\
 $(OBJ_EX_C_3_MT_D)\
 $(OBJ_EX_C_4_MT_D)\
 $(OBJ_EX_C_5_MT_D)\
 $(OBJ_EX_C_6_MT_D)\
 $(OBJ_EX_C_7_MT_D)\
 $(OBJ_EX_C_0_MT_R)\
 $(OBJ_EX_C_1_MT_R)\
 $(OBJ_EX_C_2_MT_R)\
 $(OBJ_EX_C_3_MT_R)\
 $(OBJ_EX_C_4_MT_R)\
 $(OBJ_EX_C_5_MT_R)\
 $(OBJ_EX_C_6_MT_R)\
 $(OBJ_EX_C_7_MT_R)\
 $(OBJ_EX_C_0_ST_D)\
 $(OBJ_EX_C_1_ST_D)\
 $(OBJ_EX_C_2_ST_D)\
 $(OBJ_EX_C_3_ST_D)\
 $(OBJ_EX_C_4_ST_D)\
 $(OBJ_EX_C_5_ST_D)\
 $(OBJ_EX_C_6_ST_D)\
 $(OBJ_EX_C_7_ST_D)\
 $(OBJ_EX_C_0_ST_R)\
 $(OBJ_EX_C_1_ST_R)\
 $(OBJ_EX_C_2_ST_R)\
 $(OBJ_EX_C_3_ST_R)\
 $(OBJ_EX_C_4_ST_R)\
 $(OBJ_EX_C_5_ST_R)\
 $(OBJ_EX_C_6_ST_R)\
 $(OBJ_EX_C_7_ST_R)\
 \

OBJS_EXAMPLE_CPP=\
 $(OBJ_EX_CPP_0_MT_D)\
 $(OBJ_EX_CPP_1_MT_D)\
 $(OBJ_EX_CPP_2_MT_D)\
 $(OBJ_EX_CPP_3_MT_D)\
 $(OBJ_EX_CPP_4_MT_D)\
 $(OBJ_EX_CPP_5_MT_D)\
 $(OBJ_EX_CPP_6_MT_D)\
 $(OBJ_EX_CPP_7_MT_D)\
 $(OBJ_EX_CPP_8_MT_D)\
 $(OBJ_EX_CPP_9_MT_D)\
 $(OBJ_EX_CPP_10_MT_D)\
 $(OBJ_EX_CPP_11_MT_D)\
 $(OBJ_EX_CPP_12_MT_D)\
 $(OBJ_EX_CPP_13_MT_D)\
 $(OBJ_EX_CPP_14_MT_D)\
 $(OBJ_EX_CPP_15_MT_D)\
 $(OBJ_EX_CPP_16_MT_D)\
 $(OBJ_EX_CPP_17_MT_D)\
 $(OBJ_EX_CPP_18_MT_D)\
 $(OBJ_EX_CPP_19_MT_D)\
 $(OBJ_EX_CPP_20_MT_D)\
 $(OBJ_EX_CPP_21_MT_D)\
 $(OBJ_EX_CPP_22_MT_D)\
 $(OBJ_EX_CPP_23_MT_D)\
 $(OBJ_EX_CPP_24_MT_D)\
 $(OBJ_EX_CPP_25_MT_D)\
 $(OBJ_EX_CPP_26_MT_D)\
 $(OBJ_EX_CPP_27_MT_D)\
 $(OBJ_EX_CPP_0_MT_R)\
 $(OBJ_EX_CPP_1_MT_R)\
 $(OBJ_EX_CPP_2_MT_R)\
 $(OBJ_EX_CPP_3_MT_R)\
 $(OBJ_EX_CPP_4_MT_R)\
 $(OBJ_EX_CPP_5_MT_R)\
 $(OBJ_EX_CPP_6_MT_R)\
 $(OBJ_EX_CPP_7_MT_R)\
 $(OBJ_EX_CPP_8_MT_R)\
 $(OBJ_EX_CPP_9_MT_R)\
 $(OBJ_EX_CPP_10_MT_R)\
 $(OBJ_EX_CPP_11_MT_R)\
 $(OBJ_EX_CPP_12_MT_R)\
 $(OBJ_EX_CPP_13_MT_R)\
 $(OBJ_EX_CPP_14_MT_R)\
 $(OBJ_EX_CPP_15_MT_R)\
 $(OBJ_EX_CPP_16_MT_R)\
 $(OBJ_EX_CPP_17_MT_R)\
 $(OBJ_EX_CPP_18_MT_R)\
 $(OBJ_EX_CPP_19_MT_R)\
 $(OBJ_EX_CPP_20_MT_R)\
 $(OBJ_EX_CPP_21_MT_R)\
 $(OBJ_EX_CPP_22_MT_R)\
 $(OBJ_EX_CPP_23_MT_R)\
 $(OBJ_EX_CPP_24_MT_R)\
 $(OBJ_EX_CPP_25_MT_R)\
 $(OBJ_EX_CPP_26_MT_R)\
 $(OBJ_EX_CPP_27_MT_R)\
 $(OBJ_EX_CPP_0_ST_D)\
 $(OBJ_EX_CPP_1_ST_D)\
 $(OBJ_EX_CPP_2_ST_D)\
 $(OBJ_EX_CPP_3_ST_D)\
 $(OBJ_EX_CPP_4_ST_D)\
 $(OBJ_EX_CPP_5_ST_D)\
 $(OBJ_EX_CPP_6_ST_D)\
 $(OBJ_EX_CPP_7_ST_D)\
 $(OBJ_EX_CPP_8_ST_D)\
 $(OBJ_EX_CPP_9_ST_D)\
 $(OBJ_EX_CPP_10_ST_D)\
 $(OBJ_EX_CPP_11_ST_D)\
 $(OBJ_EX_CPP_12_ST_D)\
 $(OBJ_EX_CPP_13_ST_D)\
 $(OBJ_EX_CPP_14_ST_D)\
 $(OBJ_EX_CPP_15_ST_D)\
 $(OBJ_EX_CPP_16_ST_D)\
 $(OBJ_EX_CPP_17_ST_D)\
 $(OBJ_EX_CPP_18_ST_D)\
 $(OBJ_EX_CPP_19_ST_D)\
 $(OBJ_EX_CPP_20_ST_D)\
 $(OBJ_EX_CPP_21_ST_D)\
 $(OBJ_EX_CPP_22_ST_D)\
 $(OBJ_EX_CPP_23_ST_D)\
 $(OBJ_EX_CPP_24_ST_D)\
 $(OBJ_EX_CPP_25_ST_D)\
 $(OBJ_EX_CPP_26_ST_D)\
 $(OBJ_EX_CPP_27_ST_D)\
 $(OBJ_EX_CPP_0_ST_R)\
 $(OBJ_EX_CPP_1_ST_R)\
 $(OBJ_EX_CPP_2_ST_R)\
 $(OBJ_EX_CPP_3_ST_R)\
 $(OBJ_EX_CPP_4_ST_R)\
 $(OBJ_EX_CPP_5_ST_R)\
 $(OBJ_EX_CPP_6_ST_R)\
 $(OBJ_EX_CPP_7_ST_R)\
 $(OBJ_EX_CPP_8_ST_R)\
 $(OBJ_EX_CPP_9_ST_R)\
 $(OBJ_EX_CPP_10_ST_R)\
 $(OBJ_EX_CPP_11_ST_R)\
 $(OBJ_EX_CPP_12_ST_R)\
 $(OBJ_EX_CPP_13_ST_R)\
 $(OBJ_EX_CPP_14_ST_R)\
 $(OBJ_EX_CPP_15_ST_R)\
 $(OBJ_EX_CPP_16_ST_R)\
 $(OBJ_EX_CPP_17_ST_R)\
 $(OBJ_EX_CPP_18_ST_R)\
 $(OBJ_EX_CPP_19_ST_R)\
 $(OBJ_EX_CPP_20_ST_R)\
 $(OBJ_EX_CPP_21_ST_R)\
 $(OBJ_EX_CPP_22_ST_R)\
 $(OBJ_EX_CPP_23_ST_R)\
 $(OBJ_EX_CPP_24_ST_R)\
 $(OBJ_EX_CPP_25_ST_R)\
 $(OBJ_EX_CPP_26_ST_R)\
 $(OBJ_EX_CPP_27_ST_R)\
 \

OBJS_EXAMPLE=\
 $(OBJS_EXAMPLE_C)\
 $(OBJS_EXAMPLE_CPP)\
 \


# Component Tests
OBJS_TEST_COMPONENT=\
 $(OBJ_TEST_COMP_core_initseq_MT_D)\
 $(OBJ_TEST_COMP_custsev_MT_D)\
 $(OBJ_TEST_COMP_file_mt_MT_D)\
 $(OBJ_TEST_COMP_ins_args_MT_D)\
 $(OBJ_TEST_COMP_ins_b64_MT_D)\
 $(OBJ_TEST_COMP_ins_bool_MT_D)\
 $(OBJ_TEST_COMP_ins_hostid_MT_D)\
 $(OBJ_TEST_COMP_ins_int_MT_D)\
 $(OBJ_TEST_COMP_ins_pad_MT_D)\
 $(OBJ_TEST_COMP_ins_ptr_MT_D)\
 $(OBJ_TEST_COMP_ins_prid_MT_D)\
 $(OBJ_TEST_COMP_ins_real_MT_D)\
 $(OBJ_TEST_COMP_ins_slice_MT_D)\
 $(OBJ_TEST_COMP_ins_thrid_MT_D)\
 $(OBJ_TEST_COMP_ins_w2m_MT_D)\
 $(OBJ_TEST_COMP_log_1_MT_D)\
 $(OBJ_TEST_COMP_pan_puts_MT_D)\
 $(OBJ_TEST_COMP_pan_prtf_MT_D)\
 $(OBJ_TEST_COMP_trace_1_MT_D)\
 $(OBJ_TEST_COMP_core_initseq_MT_R)\
 $(OBJ_TEST_COMP_custsev_MT_R)\
 $(OBJ_TEST_COMP_file_mt_MT_R)\
 $(OBJ_TEST_COMP_ins_args_MT_R)\
 $(OBJ_TEST_COMP_ins_b64_MT_R)\
 $(OBJ_TEST_COMP_ins_bool_MT_R)\
 $(OBJ_TEST_COMP_ins_hostid_MT_R)\
 $(OBJ_TEST_COMP_ins_int_MT_R)\
 $(OBJ_TEST_COMP_ins_pad_MT_R)\
 $(OBJ_TEST_COMP_ins_ptr_MT_R)\
 $(OBJ_TEST_COMP_ins_prid_MT_R)\
 $(OBJ_TEST_COMP_ins_real_MT_R)\
 $(OBJ_TEST_COMP_ins_slice_MT_R)\
 $(OBJ_TEST_COMP_ins_thrid_MT_R)\
 $(OBJ_TEST_COMP_ins_w2m_MT_R)\
 $(OBJ_TEST_COMP_log_1_MT_R)\
 $(OBJ_TEST_COMP_pan_puts_MT_R)\
 $(OBJ_TEST_COMP_pan_prtf_MT_R)\
 $(OBJ_TEST_COMP_trace_1_MT_R)\
 $(OBJ_TEST_COMP_core_initseq_ST_D)\
 $(OBJ_TEST_COMP_custsev_ST_D)\
 $(OBJ_TEST_COMP_ins_args_ST_D)\
 $(OBJ_TEST_COMP_ins_b64_ST_D)\
 $(OBJ_TEST_COMP_ins_bool_ST_D)\
 $(OBJ_TEST_COMP_ins_hostid_ST_D)\
 $(OBJ_TEST_COMP_ins_int_ST_D)\
 $(OBJ_TEST_COMP_ins_pad_ST_D)\
 $(OBJ_TEST_COMP_ins_ptr_ST_D)\
 $(OBJ_TEST_COMP_ins_prid_ST_D)\
 $(OBJ_TEST_COMP_ins_real_ST_D)\
 $(OBJ_TEST_COMP_ins_slice_ST_D)\
 $(OBJ_TEST_COMP_ins_thrid_ST_D)\
 $(OBJ_TEST_COMP_ins_w2m_ST_D)\
 $(OBJ_TEST_COMP_log_1_ST_D)\
 $(OBJ_TEST_COMP_pan_puts_ST_D)\
 $(OBJ_TEST_COMP_pan_prtf_ST_D)\
 $(OBJ_TEST_COMP_trace_1_ST_D)\
 $(OBJ_TEST_COMP_core_initseq_ST_R)\
 $(OBJ_TEST_COMP_custsev_ST_R)\
 $(OBJ_TEST_COMP_ins_args_ST_R)\
 $(OBJ_TEST_COMP_ins_b64_ST_R)\
 $(OBJ_TEST_COMP_ins_bool_ST_R)\
 $(OBJ_TEST_COMP_ins_hostid_ST_R)\
 $(OBJ_TEST_COMP_ins_int_ST_R)\
 $(OBJ_TEST_COMP_ins_pad_ST_R)\
 $(OBJ_TEST_COMP_ins_ptr_ST_R)\
 $(OBJ_TEST_COMP_ins_prid_ST_R)\
 $(OBJ_TEST_COMP_ins_real_ST_R)\
 $(OBJ_TEST_COMP_ins_slice_ST_R)\
 $(OBJ_TEST_COMP_ins_thrid_ST_R)\
 $(OBJ_TEST_COMP_ins_w2m_ST_R)\
 $(OBJ_TEST_COMP_log_1_ST_R)\
 $(OBJ_TEST_COMP_pan_puts_ST_R)\
 $(OBJ_TEST_COMP_pan_prtf_ST_R)\
 $(OBJ_TEST_COMP_trace_1_ST_R)\
 \

# Performance Tests
OBJS_TEST_PERFORMANCE=\
 $(OBJ_TEST_PERF_ins_w2m_MT_D)\
 $(OBJ_TEST_PERF_ins_w2m_MT_R)\
 $(OBJ_TEST_PERF_ins_w2m_ST_D)\
 $(OBJ_TEST_PERF_ins_w2m_ST_R)\
 \

# Scratch Tests
OBJS_TEST_SCRATCH=\
 $(OBJ_TEST_API_MT_D)\
 $(OBJ_TEST_FE_MT_D)\
 $(OBJ_TEST_BE_N_MT_D)\
 $(OBJ_TEST_API_MT_R)\
 $(OBJ_TEST_FE_MT_R)\
 $(OBJ_TEST_BE_N_MT_R)\
 $(OBJ_TEST_API_ST_D)\
 $(OBJ_TEST_FE_ST_D)\
 $(OBJ_TEST_BE_N_ST_D)\
 $(OBJ_TEST_API_ST_R)\
 $(OBJ_TEST_FE_ST_R)\
 $(OBJ_TEST_BE_N_ST_R)\
 \

# Unit Tests
OBJS_TEST_UNIT=\
 $(OBJ_TEST_UNIT_lvls_dyninit_MT_D)\
 $(OBJ_TEST_UNIT_lvls_vals_MT_D)\
 $(OBJ_TEST_UNIT_getcurrtm_MT_D)\
 $(OBJ_TEST_UNIT_getversion_MT_D)\
 $(OBJ_TEST_UNIT_gethostname_MT_D)\
 $(OBJ_TEST_UNIT_onbailout_MT_D)\
 $(OBJ_TEST_UNIT_strnlen_MT_D)\
 \
 $(OBJ_TEST_UNIT_bec_CEO_MT_D)\
 $(OBJ_TEST_UNIT_bec_file_MT_D)\
 $(OBJ_TEST_UNIT_bec_fprintf_MT_D)\
 $(OBJ_TEST_UNIT_bec_fail_MT_D)\
 $(OBJ_TEST_UNIT_be_fail_MT_D)\
 $(OBJ_TEST_UNIT_be_lrsplit_MT_D)\
 $(OBJ_TEST_UNIT_be_N_MT_D)\
 \
 $(OBJ_TEST_UNIT_fe_all_MT_D)\
 $(OBJ_TEST_UNIT_fe_fail_MT_D)\
 $(OBJ_TEST_UNIT_fe_N_MT_D)\
 $(OBJ_TEST_UNIT_fe_null_MT_D)\
 $(OBJ_TEST_UNIT_fe_simple_MT_D)\
 $(OBJ_TEST_UNIT_fe_WinReg_MT_D)\
 $(OBJ_TEST_UNIT_lvls_dyninit_MT_R)\
 $(OBJ_TEST_UNIT_lvls_vals_MT_R)\
 $(OBJ_TEST_UNIT_getcurrtm_MT_R)\
 $(OBJ_TEST_UNIT_getversion_MT_R)\
 $(OBJ_TEST_UNIT_gethostname_MT_R)\
 $(OBJ_TEST_UNIT_onbailout_MT_R)\
 $(OBJ_TEST_UNIT_strnlen_MT_R)\
 \
 $(OBJ_TEST_UNIT_bec_CEO_MT_R)\
 $(OBJ_TEST_UNIT_bec_file_MT_R)\
 $(OBJ_TEST_UNIT_bec_fprintf_MT_R)\
 $(OBJ_TEST_UNIT_bec_fail_MT_R)\
 $(OBJ_TEST_UNIT_be_fail_MT_R)\
 $(OBJ_TEST_UNIT_be_lrsplit_MT_R)\
 $(OBJ_TEST_UNIT_be_N_MT_R)\
 \
 $(OBJ_TEST_UNIT_fe_all_MT_R)\
 $(OBJ_TEST_UNIT_fe_fail_MT_R)\
 $(OBJ_TEST_UNIT_fe_N_MT_R)\
 $(OBJ_TEST_UNIT_fe_null_MT_R)\
 $(OBJ_TEST_UNIT_fe_simple_MT_R)\
 $(OBJ_TEST_UNIT_fe_WinReg_MT_R)\
 $(OBJ_TEST_UNIT_lvls_dyninit_ST_D)\
 $(OBJ_TEST_UNIT_lvls_vals_ST_D)\
 $(OBJ_TEST_UNIT_getcurrtm_ST_D)\
 $(OBJ_TEST_UNIT_getversion_ST_D)\
 $(OBJ_TEST_UNIT_gethostname_ST_D)\
 $(OBJ_TEST_UNIT_onbailout_ST_D)\
 $(OBJ_TEST_UNIT_strnlen_ST_D)\
 \
 $(OBJ_TEST_UNIT_bec_CEO_ST_D)\
 $(OBJ_TEST_UNIT_bec_file_ST_D)\
 $(OBJ_TEST_UNIT_bec_fprintf_ST_D)\
 $(OBJ_TEST_UNIT_bec_fail_ST_D)\
 $(OBJ_TEST_UNIT_be_fail_ST_D)\
 $(OBJ_TEST_UNIT_be_lrsplit_ST_D)\
 $(OBJ_TEST_UNIT_be_N_ST_D)\
 \
 $(OBJ_TEST_UNIT_fe_all_ST_D)\
 $(OBJ_TEST_UNIT_fe_fail_ST_D)\
 $(OBJ_TEST_UNIT_fe_N_ST_D)\
 $(OBJ_TEST_UNIT_fe_null_ST_D)\
 $(OBJ_TEST_UNIT_fe_simple_ST_D)\
 $(OBJ_TEST_UNIT_fe_WinReg_ST_D)\
 $(OBJ_TEST_UNIT_lvls_dyninit_ST_R)\
 $(OBJ_TEST_UNIT_lvls_vals_ST_R)\
 $(OBJ_TEST_UNIT_getcurrtm_ST_R)\
 $(OBJ_TEST_UNIT_getversion_ST_R)\
 $(OBJ_TEST_UNIT_gethostname_ST_R)\
 $(OBJ_TEST_UNIT_onbailout_ST_R)\
 $(OBJ_TEST_UNIT_strnlen_ST_R)\
 \
 $(OBJ_TEST_UNIT_bec_CEO_ST_R)\
 $(OBJ_TEST_UNIT_bec_file_ST_R)\
 $(OBJ_TEST_UNIT_bec_fprintf_ST_R)\
 $(OBJ_TEST_UNIT_bec_fail_ST_R)\
 $(OBJ_TEST_UNIT_be_fail_ST_R)\
 $(OBJ_TEST_UNIT_be_lrsplit_ST_R)\
 $(OBJ_TEST_UNIT_be_N_ST_R)\
 \
 $(OBJ_TEST_UNIT_fe_all_ST_R)\
 $(OBJ_TEST_UNIT_fe_fail_ST_R)\
 $(OBJ_TEST_UNIT_fe_N_ST_R)\
 $(OBJ_TEST_UNIT_fe_null_ST_R)\
 $(OBJ_TEST_UNIT_fe_simple_ST_R)\
 $(OBJ_TEST_UNIT_fe_WinReg_ST_R)\
 \

########################################
# Libraries

# $(LIB_UTIL [ ` [ N a m e T a g ] ` ] )\

TARGETS_LIB_UTIL=\
 $(LIB_UTIL_MT_D)\
 $(LIB_UTIL_MT_R)\
 $(LIB_UTIL_ST_D)\
 $(LIB_UTIL_ST_R)\
 \

TARGETS_LIB_CORE=\
 $(LIB_CORE_MT_D)\
 $(LIB_CORE_MT_R)\
 $(LIB_CORE_ST_D)\
 $(LIB_CORE_ST_R)\
 \

TARGETS_LIB_FE_CMN=\
 $(LIB_FE_ALL_MT_D)\
 $(LIB_FE_FAIL_MT_D)\
 $(LIB_FE_N_MT_D)\
 $(LIB_FE_NULL_MT_D)\
 $(LIB_FE_SIMPLE_MT_D)\
 $(LIB_FE_ALL_MT_R)\
 $(LIB_FE_FAIL_MT_R)\
 $(LIB_FE_N_MT_R)\
 $(LIB_FE_NULL_MT_R)\
 $(LIB_FE_SIMPLE_MT_R)\
 $(LIB_FE_ALL_ST_D)\
 $(LIB_FE_FAIL_ST_D)\
 $(LIB_FE_N_ST_D)\
 $(LIB_FE_NULL_ST_D)\
 $(LIB_FE_SIMPLE_ST_D)\
 $(LIB_FE_ALL_ST_R)\
 $(LIB_FE_FAIL_ST_R)\
 $(LIB_FE_N_ST_R)\
 $(LIB_FE_NULL_ST_R)\
 $(LIB_FE_SIMPLE_ST_R)\
 \

TARGETS_LIB_FE=\
 $(LIB_FE_ALL_MT_D)\
 $(LIB_FE_FAIL_MT_D)\
 $(LIB_FE_N_MT_D)\
 $(LIB_FE_NULL_MT_D)\
 $(LIB_FE_SIMPLE_MT_D)\
 $(LIB_FE_WINREG_MT_D)\
 $(LIB_FE_ALL_MT_R)\
 $(LIB_FE_FAIL_MT_R)\
 $(LIB_FE_N_MT_R)\
 $(LIB_FE_NULL_MT_R)\
 $(LIB_FE_SIMPLE_MT_R)\
 $(LIB_FE_WINREG_MT_R)\
 $(LIB_FE_ALL_ST_D)\
 $(LIB_FE_FAIL_ST_D)\
 $(LIB_FE_N_ST_D)\
 $(LIB_FE_NULL_ST_D)\
 $(LIB_FE_SIMPLE_ST_D)\
 $(LIB_FE_WINREG_ST_D)\
 $(LIB_FE_ALL_ST_R)\
 $(LIB_FE_FAIL_ST_R)\
 $(LIB_FE_N_ST_R)\
 $(LIB_FE_NULL_ST_R)\
 $(LIB_FE_SIMPLE_ST_R)\
 $(LIB_FE_WINREG_ST_R)\
 \

TARGETS_LIB_BE_CMN=\
 $(LIB_BE_LRSPLIT_MT_D)\
 $(LIB_BE_N_MT_D)\
 $(LIB_BEC_FAIL_MT_D)\
 $(LIB_BE_FAIL_MT_D)\
 $(LIB_BEL_FAIL_MT_D)\
 $(LIB_BER_FAIL_MT_D)\
 $(LIB_BEC_FILE_MT_D)\
 $(LIB_BEC_FILE_WC_MT_D)\
 $(LIB_BE_FILE_MT_D)\
 $(LIB_BEL_FILE_MT_D)\
 $(LIB_BER_FILE_MT_D)\
 $(LIB_BEC_FPRINTF_MT_D)\
 $(LIB_BEC_FPRINTF_WC_MT_D)\
 $(LIB_BE_FPRINTF_MT_D)\
 $(LIB_BEL_FPRINTF_MT_D)\
 $(LIB_BER_FPRINTF_MT_D)\
 $(LIB_BEC_NULL_MT_D)\
 $(LIB_BE_NULL_MT_D)\
 $(LIB_BEL_NULL_MT_D)\
 $(LIB_BER_NULL_MT_D)\
 $(LIB_BE_LRSPLIT_MT_R)\
 $(LIB_BE_N_MT_R)\
 $(LIB_BEC_FAIL_MT_R)\
 $(LIB_BE_FAIL_MT_R)\
 $(LIB_BEL_FAIL_MT_R)\
 $(LIB_BER_FAIL_MT_R)\
 $(LIB_BEC_FILE_MT_R)\
 $(LIB_BEC_FILE_WC_MT_R)\
 $(LIB_BE_FILE_MT_R)\
 $(LIB_BEL_FILE_MT_R)\
 $(LIB_BER_FILE_MT_R)\
 $(LIB_BEC_FPRINTF_MT_R)\
 $(LIB_BEC_FPRINTF_WC_MT_R)\
 $(LIB_BE_FPRINTF_MT_R)\
 $(LIB_BEL_FPRINTF_MT_R)\
 $(LIB_BER_FPRINTF_MT_R)\
 $(LIB_BEC_NULL_MT_R)\
 $(LIB_BE_NULL_MT_R)\
 $(LIB_BEL_NULL_MT_R)\
 $(LIB_BER_NULL_MT_R)\
 $(LIB_BE_LRSPLIT_ST_D)\
 $(LIB_BE_N_ST_D)\
 $(LIB_BEC_FAIL_ST_D)\
 $(LIB_BE_FAIL_ST_D)\
 $(LIB_BEL_FAIL_ST_D)\
 $(LIB_BER_FAIL_ST_D)\
 $(LIB_BEC_FILE_ST_D)\
 $(LIB_BEC_FILE_WC_ST_D)\
 $(LIB_BE_FILE_ST_D)\
 $(LIB_BEL_FILE_ST_D)\
 $(LIB_BER_FILE_ST_D)\
 $(LIB_BEC_FPRINTF_ST_D)\
 $(LIB_BEC_FPRINTF_WC_ST_D)\
 $(LIB_BE_FPRINTF_ST_D)\
 $(LIB_BEL_FPRINTF_ST_D)\
 $(LIB_BER_FPRINTF_ST_D)\
 $(LIB_BEC_NULL_ST_D)\
 $(LIB_BE_NULL_ST_D)\
 $(LIB_BEL_NULL_ST_D)\
 $(LIB_BER_NULL_ST_D)\
 $(LIB_BE_LRSPLIT_ST_R)\
 $(LIB_BE_N_ST_R)\
 $(LIB_BEC_FAIL_ST_R)\
 $(LIB_BE_FAIL_ST_R)\
 $(LIB_BEL_FAIL_ST_R)\
 $(LIB_BER_FAIL_ST_R)\
 $(LIB_BEC_FILE_ST_R)\
 $(LIB_BEC_FILE_WC_ST_R)\
 $(LIB_BE_FILE_ST_R)\
 $(LIB_BEL_FILE_ST_R)\
 $(LIB_BER_FILE_ST_R)\
 $(LIB_BEC_FPRINTF_ST_R)\
 $(LIB_BEC_FPRINTF_WC_ST_R)\
 $(LIB_BE_FPRINTF_ST_R)\
 $(LIB_BEL_FPRINTF_ST_R)\
 $(LIB_BER_FPRINTF_ST_R)\
 $(LIB_BEC_NULL_ST_R)\
 $(LIB_BE_NULL_ST_R)\
 $(LIB_BEL_NULL_ST_R)\
 $(LIB_BER_NULL_ST_R)\
 \

TARGETS_LIB_BE=\
 $(LIB_BE_LRSPLIT_MT_D)\
 $(LIB_BE_N_MT_D)\
 $(LIB_BEC_TEST_MT_D)\
 $(LIB_BE_TEST_MT_D)\
 $(LIB_BEL_TEST_MT_D)\
 $(LIB_BER_TEST_MT_D)\
 $(LIB_BEC_FAIL_MT_D)\
 $(LIB_BE_FAIL_MT_D)\
 $(LIB_BEL_FAIL_MT_D)\
 $(LIB_BER_FAIL_MT_D)\
 $(LIB_BEC_FILE_MT_D)\
 $(LIB_BEC_FILE_WC_MT_D)\
 $(LIB_BE_FILE_MT_D)\
 $(LIB_BEL_FILE_MT_D)\
 $(LIB_BER_FILE_MT_D)\
 $(LIB_BEC_FPRINTF_MT_D)\
 $(LIB_BEC_FPRINTF_WC_MT_D)\
 $(LIB_BE_FPRINTF_MT_D)\
 $(LIB_BEL_FPRINTF_MT_D)\
 $(LIB_BER_FPRINTF_MT_D)\
 $(LIB_BEC_NULL_MT_D)\
 $(LIB_BE_NULL_MT_D)\
 $(LIB_BEL_NULL_MT_D)\
 $(LIB_BER_NULL_MT_D)\
 $(LIB_BEC_COMERROBJ_MT_D)\
 $(LIB_BEC_COMERROBJ_WC_MT_D)\
 $(LIB_BE_COMERROBJ_MT_D)\
 $(LIB_BEL_COMERROBJ_MT_D)\
 $(LIB_BER_COMERROBJ_MT_D)\
 $(LIB_BEC_SPEECH_MT_D)\
 $(LIB_BEC_SPEECH_WC_MT_D)\
 $(LIB_BE_SPEECH_MT_D)\
 $(LIB_BEL_SPEECH_MT_D)\
 $(LIB_BER_SPEECH_MT_D)\
 $(LIB_BEC_WINEVLOG_MT_D)\
 $(LIB_BE_WINEVLOG_MT_D)\
 $(LIB_BEL_WINEVLOG_MT_D)\
 $(LIB_BER_WINEVLOG_MT_D)\
 $(LIB_BEC_WINMSGBX_MT_D)\
 $(LIB_BE_WINMSGBX_MT_D)\
 $(LIB_BEL_WINMSGBX_MT_D)\
 $(LIB_BER_WINMSGBX_MT_D)\
 $(LIB_BEC_W32CONS_MT_D)\
 $(LIB_BEC_W32CONS_WC_MT_D)\
 $(LIB_BE_W32CONS_MT_D)\
 $(LIB_BEL_W32CONS_MT_D)\
 $(LIB_BER_W32CONS_MT_D)\
 $(LIB_BEC_W32DBGR_MT_D)\
 $(LIB_BEC_W32DBGR_WC_MT_D)\
 $(LIB_BE_W32DBGR_MT_D)\
 $(LIB_BEL_W32DBGR_MT_D)\
 $(LIB_BER_W32DBGR_MT_D)\
 $(LIB_BEC_W32SYSLOG_MT_D)\
 $(LIB_BEC_W32SYSLOG_WC_MT_D)\
 $(LIB_BE_W32SYSLOG_MT_D)\
 $(LIB_BEL_W32SYSLOG_MT_D)\
 $(LIB_BER_W32SYSLOG_MT_D)\
 $(LIB_BE_LRSPLIT_MT_R)\
 $(LIB_BE_N_MT_R)\
 $(LIB_BEC_TEST_MT_R)\
 $(LIB_BE_TEST_MT_R)\
 $(LIB_BEL_TEST_MT_R)\
 $(LIB_BER_TEST_MT_R)\
 $(LIB_BEC_FAIL_MT_R)\
 $(LIB_BE_FAIL_MT_R)\
 $(LIB_BEL_FAIL_MT_R)\
 $(LIB_BER_FAIL_MT_R)\
 $(LIB_BEC_FILE_MT_R)\
 $(LIB_BEC_FILE_WC_MT_R)\
 $(LIB_BE_FILE_MT_R)\
 $(LIB_BEL_FILE_MT_R)\
 $(LIB_BER_FILE_MT_R)\
 $(LIB_BEC_FPRINTF_MT_R)\
 $(LIB_BEC_FPRINTF_WC_MT_R)\
 $(LIB_BE_FPRINTF_MT_R)\
 $(LIB_BEL_FPRINTF_MT_R)\
 $(LIB_BER_FPRINTF_MT_R)\
 $(LIB_BEC_NULL_MT_R)\
 $(LIB_BE_NULL_MT_R)\
 $(LIB_BEL_NULL_MT_R)\
 $(LIB_BER_NULL_MT_R)\
 $(LIB_BEC_COMERROBJ_MT_R)\
 $(LIB_BEC_COMERROBJ_WC_MT_R)\
 $(LIB_BE_COMERROBJ_MT_R)\
 $(LIB_BEL_COMERROBJ_MT_R)\
 $(LIB_BER_COMERROBJ_MT_R)\
 $(LIB_BEC_SPEECH_MT_R)\
 $(LIB_BEC_SPEECH_WC_MT_R)\
 $(LIB_BE_SPEECH_MT_R)\
 $(LIB_BEL_SPEECH_MT_R)\
 $(LIB_BER_SPEECH_MT_R)\
 $(LIB_BEC_WINEVLOG_MT_R)\
 $(LIB_BE_WINEVLOG_MT_R)\
 $(LIB_BEL_WINEVLOG_MT_R)\
 $(LIB_BER_WINEVLOG_MT_R)\
 $(LIB_BEC_WINMSGBX_MT_R)\
 $(LIB_BE_WINMSGBX_MT_R)\
 $(LIB_BEL_WINMSGBX_MT_R)\
 $(LIB_BER_WINMSGBX_MT_R)\
 $(LIB_BEC_W32CONS_MT_R)\
 $(LIB_BEC_W32CONS_WC_MT_R)\
 $(LIB_BE_W32CONS_MT_R)\
 $(LIB_BEL_W32CONS_MT_R)\
 $(LIB_BER_W32CONS_MT_R)\
 $(LIB_BEC_W32DBGR_MT_R)\
 $(LIB_BEC_W32DBGR_WC_MT_R)\
 $(LIB_BE_W32DBGR_MT_R)\
 $(LIB_BEL_W32DBGR_MT_R)\
 $(LIB_BER_W32DBGR_MT_R)\
 $(LIB_BEC_W32SYSLOG_MT_R)\
 $(LIB_BEC_W32SYSLOG_WC_MT_R)\
 $(LIB_BE_W32SYSLOG_MT_R)\
 $(LIB_BEL_W32SYSLOG_MT_R)\
 $(LIB_BER_W32SYSLOG_MT_R)\
 $(LIB_BE_LRSPLIT_ST_D)\
 $(LIB_BE_N_ST_D)\
 $(LIB_BEC_TEST_ST_D)\
 $(LIB_BE_TEST_ST_D)\
 $(LIB_BEL_TEST_ST_D)\
 $(LIB_BER_TEST_ST_D)\
 $(LIB_BEC_FAIL_ST_D)\
 $(LIB_BE_FAIL_ST_D)\
 $(LIB_BEL_FAIL_ST_D)\
 $(LIB_BER_FAIL_ST_D)\
 $(LIB_BEC_FILE_ST_D)\
 $(LIB_BEC_FILE_WC_ST_D)\
 $(LIB_BE_FILE_ST_D)\
 $(LIB_BEL_FILE_ST_D)\
 $(LIB_BER_FILE_ST_D)\
 $(LIB_BEC_FPRINTF_ST_D)\
 $(LIB_BEC_FPRINTF_WC_ST_D)\
 $(LIB_BE_FPRINTF_ST_D)\
 $(LIB_BEL_FPRINTF_ST_D)\
 $(LIB_BER_FPRINTF_ST_D)\
 $(LIB_BEC_NULL_ST_D)\
 $(LIB_BE_NULL_ST_D)\
 $(LIB_BEL_NULL_ST_D)\
 $(LIB_BER_NULL_ST_D)\
 $(LIB_BEC_COMERROBJ_ST_D)\
 $(LIB_BEC_COMERROBJ_WC_ST_D)\
 $(LIB_BE_COMERROBJ_ST_D)\
 $(LIB_BEL_COMERROBJ_ST_D)\
 $(LIB_BER_COMERROBJ_ST_D)\
 $(LIB_BEC_SPEECH_ST_D)\
 $(LIB_BEC_SPEECH_WC_ST_D)\
 $(LIB_BE_SPEECH_ST_D)\
 $(LIB_BEL_SPEECH_ST_D)\
 $(LIB_BER_SPEECH_ST_D)\
 $(LIB_BEC_WINEVLOG_ST_D)\
 $(LIB_BE_WINEVLOG_ST_D)\
 $(LIB_BEL_WINEVLOG_ST_D)\
 $(LIB_BER_WINEVLOG_ST_D)\
 $(LIB_BEC_WINMSGBX_ST_D)\
 $(LIB_BE_WINMSGBX_ST_D)\
 $(LIB_BEL_WINMSGBX_ST_D)\
 $(LIB_BER_WINMSGBX_ST_D)\
 $(LIB_BEC_W32CONS_ST_D)\
 $(LIB_BEC_W32CONS_WC_ST_D)\
 $(LIB_BE_W32CONS_ST_D)\
 $(LIB_BEL_W32CONS_ST_D)\
 $(LIB_BER_W32CONS_ST_D)\
 $(LIB_BEC_W32DBGR_ST_D)\
 $(LIB_BEC_W32DBGR_WC_ST_D)\
 $(LIB_BE_W32DBGR_ST_D)\
 $(LIB_BEL_W32DBGR_ST_D)\
 $(LIB_BER_W32DBGR_ST_D)\
 $(LIB_BEC_W32SYSLOG_ST_D)\
 $(LIB_BEC_W32SYSLOG_WC_ST_D)\
 $(LIB_BE_W32SYSLOG_ST_D)\
 $(LIB_BEL_W32SYSLOG_ST_D)\
 $(LIB_BER_W32SYSLOG_ST_D)\
 $(LIB_BE_LRSPLIT_ST_R)\
 $(LIB_BE_N_ST_R)\
 $(LIB_BEC_TEST_ST_R)\
 $(LIB_BE_TEST_ST_R)\
 $(LIB_BEL_TEST_ST_R)\
 $(LIB_BER_TEST_ST_R)\
 $(LIB_BEC_FAIL_ST_R)\
 $(LIB_BE_FAIL_ST_R)\
 $(LIB_BEL_FAIL_ST_R)\
 $(LIB_BER_FAIL_ST_R)\
 $(LIB_BEC_FILE_ST_R)\
 $(LIB_BEC_FILE_WC_ST_R)\
 $(LIB_BE_FILE_ST_R)\
 $(LIB_BEL_FILE_ST_R)\
 $(LIB_BER_FILE_ST_R)\
 $(LIB_BEC_FPRINTF_ST_R)\
 $(LIB_BEC_FPRINTF_WC_ST_R)\
 $(LIB_BE_FPRINTF_ST_R)\
 $(LIB_BEL_FPRINTF_ST_R)\
 $(LIB_BER_FPRINTF_ST_R)\
 $(LIB_BEC_NULL_ST_R)\
 $(LIB_BE_NULL_ST_R)\
 $(LIB_BEL_NULL_ST_R)\
 $(LIB_BER_NULL_ST_R)\
 $(LIB_BEC_COMERROBJ_ST_R)\
 $(LIB_BEC_COMERROBJ_WC_ST_R)\
 $(LIB_BE_COMERROBJ_ST_R)\
 $(LIB_BEL_COMERROBJ_ST_R)\
 $(LIB_BER_COMERROBJ_ST_R)\
 $(LIB_BEC_SPEECH_ST_R)\
 $(LIB_BEC_SPEECH_WC_ST_R)\
 $(LIB_BE_SPEECH_ST_R)\
 $(LIB_BEL_SPEECH_ST_R)\
 $(LIB_BER_SPEECH_ST_R)\
 $(LIB_BEC_WINEVLOG_ST_R)\
 $(LIB_BE_WINEVLOG_ST_R)\
 $(LIB_BEL_WINEVLOG_ST_R)\
 $(LIB_BER_WINEVLOG_ST_R)\
 $(LIB_BEC_WINMSGBX_ST_R)\
 $(LIB_BE_WINMSGBX_ST_R)\
 $(LIB_BEL_WINMSGBX_ST_R)\
 $(LIB_BER_WINMSGBX_ST_R)\
 $(LIB_BEC_W32CONS_ST_R)\
 $(LIB_BEC_W32CONS_WC_ST_R)\
 $(LIB_BE_W32CONS_ST_R)\
 $(LIB_BEL_W32CONS_ST_R)\
 $(LIB_BER_W32CONS_ST_R)\
 $(LIB_BEC_W32DBGR_ST_R)\
 $(LIB_BEC_W32DBGR_WC_ST_R)\
 $(LIB_BE_W32DBGR_ST_R)\
 $(LIB_BEL_W32DBGR_ST_R)\
 $(LIB_BER_W32DBGR_ST_R)\
 $(LIB_BEC_W32SYSLOG_ST_R)\
 $(LIB_BEC_W32SYSLOG_WC_ST_R)\
 $(LIB_BE_W32SYSLOG_ST_R)\
 $(LIB_BEL_W32SYSLOG_ST_R)\
 $(LIB_BER_W32SYSLOG_ST_R)\
 \

TARGETS_LIB_ACE=\
 $(LIB_BEC_ACE_MT_D)\
 $(LIB_BE_ACE_MT_D)\
 $(LIB_BEL_ACE_MT_D)\
 $(LIB_BER_ACE_MT_D)\
 $(LIB_BEC_ACE_MT_R)\
 $(LIB_BE_ACE_MT_R)\
 $(LIB_BEL_ACE_MT_R)\
 $(LIB_BER_ACE_MT_R)\
 \

TARGETS_LIB_ALL=\
 $(TARGETS_LIB_CORE)\
 $(TARGETS_LIB_FE)\
 $(TARGETS_LIB_BE)\
 $(TARGETS_LIB_ACE)\
 \

TARGETS_LIB_B64=\
 $(LIB_B64_MT_D)\
 $(LIB_B64_MT_R)\
 $(LIB_B64_ST_D)\
 $(LIB_B64_ST_R)\
 \

TARGETS_LIB_SHWILD=\
 $(LIB_SHWILD_MT_D)\
 $(LIB_SHWILD_MT_R)\
 $(LIB_SHWILD_ST_D)\
 $(LIB_SHWILD_ST_R)\
 \

TARGETS_LIB_XTESTS=\
 $(LIB_XTESTS_MT_D)\
 $(LIB_XTESTS_MT_R)\
 $(LIB_XTESTS_ST_D)\
 $(LIB_XTESTS_ST_R)\
 \

########################################
# Programs

TARGETS_EXAMPLE_C=\
 $(EX_C_0_MT_D)\
 $(EX_C_1_MT_D)\
 $(EX_C_2_MT_D)\
 $(EX_C_3_MT_D)\
 $(EX_C_4_MT_D)\
 $(EX_C_5_MT_D)\
 $(EX_C_6_MT_D)\
 $(EX_C_0_MT_R)\
 $(EX_C_1_MT_R)\
 $(EX_C_2_MT_R)\
 $(EX_C_3_MT_R)\
 $(EX_C_4_MT_R)\
 $(EX_C_5_MT_R)\
 $(EX_C_6_MT_R)\
 $(EX_C_0_ST_D)\
 $(EX_C_1_ST_D)\
 $(EX_C_2_ST_D)\
 $(EX_C_3_ST_D)\
 $(EX_C_4_ST_D)\
 $(EX_C_5_ST_D)\
 $(EX_C_6_ST_D)\
 $(EX_C_0_ST_R)\
 $(EX_C_1_ST_R)\
 $(EX_C_2_ST_R)\
 $(EX_C_3_ST_R)\
 $(EX_C_4_ST_R)\
 $(EX_C_5_ST_R)\
 $(EX_C_6_ST_R)\
 \

TARGETS_EXAMPLE_CPP=\
 $(EX_CPP_0_MT_D)\
 $(EX_CPP_1_MT_D)\
 $(EX_CPP_2_MT_D)\
 $(EX_CPP_3_MT_D)\
 $(EX_CPP_4_MT_D)\
 $(EX_CPP_5_MT_D)\
 $(EX_CPP_6_MT_D)\
 $(EX_CPP_7_MT_D)\
 $(EX_CPP_9_MT_D)\
 $(EX_CPP_10_MT_D)\
 $(EX_CPP_11_MT_D)\
 $(EX_CPP_12_MT_D)\
 $(EX_CPP_13_MT_D)\
 $(EX_CPP_14_MT_D)\
 $(EX_CPP_15_MT_D)\
 $(EX_CPP_16_MT_D)\
 $(EX_CPP_17_MT_D)\
 $(EX_CPP_18_MT_D)\
 $(EX_CPP_19_MT_D)\
 $(EX_CPP_20_MT_D)\
 $(EX_CPP_21_MT_D)\
 $(EX_CPP_22_MT_D)\
 $(EX_CPP_23_MT_D)\
 $(EX_CPP_24_MT_D)\
 $(EX_CPP_25_MT_D)\
 $(EX_CPP_26_MT_D)\
 $(EX_CPP_27_MT_D)\
 $(EX_CPP_0_MT_R)\
 $(EX_CPP_1_MT_R)\
 $(EX_CPP_2_MT_R)\
 $(EX_CPP_3_MT_R)\
 $(EX_CPP_4_MT_R)\
 $(EX_CPP_5_MT_R)\
 $(EX_CPP_6_MT_R)\
 $(EX_CPP_7_MT_R)\
 $(EX_CPP_9_MT_R)\
 $(EX_CPP_10_MT_R)\
 $(EX_CPP_11_MT_R)\
 $(EX_CPP_12_MT_R)\
 $(EX_CPP_13_MT_R)\
 $(EX_CPP_14_MT_R)\
 $(EX_CPP_15_MT_R)\
 $(EX_CPP_16_MT_R)\
 $(EX_CPP_17_MT_R)\
 $(EX_CPP_18_MT_R)\
 $(EX_CPP_19_MT_R)\
 $(EX_CPP_20_MT_R)\
 $(EX_CPP_21_MT_R)\
 $(EX_CPP_22_MT_R)\
 $(EX_CPP_23_MT_R)\
 $(EX_CPP_24_MT_R)\
 $(EX_CPP_25_MT_R)\
 $(EX_CPP_26_MT_R)\
 $(EX_CPP_27_MT_R)\
 $(EX_CPP_0_ST_D)\
 $(EX_CPP_1_ST_D)\
 $(EX_CPP_2_ST_D)\
 $(EX_CPP_3_ST_D)\
 $(EX_CPP_4_ST_D)\
 $(EX_CPP_5_ST_D)\
 $(EX_CPP_6_ST_D)\
 $(EX_CPP_7_ST_D)\
 $(EX_CPP_9_ST_D)\
 $(EX_CPP_10_ST_D)\
 $(EX_CPP_11_ST_D)\
 $(EX_CPP_12_ST_D)\
 $(EX_CPP_13_ST_D)\
 $(EX_CPP_14_ST_D)\
 $(EX_CPP_15_ST_D)\
 $(EX_CPP_16_ST_D)\
 $(EX_CPP_17_ST_D)\
 $(EX_CPP_18_ST_D)\
 $(EX_CPP_19_ST_D)\
 $(EX_CPP_20_ST_D)\
 $(EX_CPP_21_ST_D)\
 $(EX_CPP_22_ST_D)\
 $(EX_CPP_23_ST_D)\
 $(EX_CPP_24_ST_D)\
 $(EX_CPP_25_ST_D)\
 $(EX_CPP_26_ST_D)\
 $(EX_CPP_27_ST_D)\
 $(EX_CPP_0_ST_R)\
 $(EX_CPP_1_ST_R)\
 $(EX_CPP_2_ST_R)\
 $(EX_CPP_3_ST_R)\
 $(EX_CPP_4_ST_R)\
 $(EX_CPP_5_ST_R)\
 $(EX_CPP_6_ST_R)\
 $(EX_CPP_7_ST_R)\
 $(EX_CPP_9_ST_R)\
 $(EX_CPP_10_ST_R)\
 $(EX_CPP_11_ST_R)\
 $(EX_CPP_12_ST_R)\
 $(EX_CPP_13_ST_R)\
 $(EX_CPP_14_ST_R)\
 $(EX_CPP_15_ST_R)\
 $(EX_CPP_16_ST_R)\
 $(EX_CPP_17_ST_R)\
 $(EX_CPP_18_ST_R)\
 $(EX_CPP_19_ST_R)\
 $(EX_CPP_20_ST_R)\
 $(EX_CPP_21_ST_R)\
 $(EX_CPP_22_ST_R)\
 $(EX_CPP_23_ST_R)\
 $(EX_CPP_24_ST_R)\
 $(EX_CPP_25_ST_R)\
 $(EX_CPP_26_ST_R)\
 $(EX_CPP_27_ST_R)\
 \

TARGETS_EXAMPLE=\
 $(TARGETS_EXAMPLE_C)\
 $(TARGETS_EXAMPLE_CPP)\
 \


TARGETS_SAMPLE=\
 \


TARGETS_TEST_COMPONENT=\
 $(TARG_TEST_COMP_core_initseq_MT_D)\
 $(TARG_TEST_COMP_custsev_MT_D)\
 $(TARG_TEST_COMP_file_mt_MT_D)\
 $(TARG_TEST_COMP_ins_args_MT_D)\
 $(TARG_TEST_COMP_ins_b64_MT_D)\
 $(TARG_TEST_COMP_ins_bool_MT_D)\
 $(TARG_TEST_COMP_ins_hostid_MT_D)\
 $(TARG_TEST_COMP_ins_int_MT_D)\
 $(TARG_TEST_COMP_ins_pad_MT_D)\
 $(TARG_TEST_COMP_ins_ptr_MT_D)\
 $(TARG_TEST_COMP_ins_prid_MT_D)\
 $(TARG_TEST_COMP_ins_real_MT_D)\
 $(TARG_TEST_COMP_ins_slice_MT_D)\
 $(TARG_TEST_COMP_ins_thrid_MT_D)\
 $(TARG_TEST_COMP_ins_w2m_MT_D)\
 $(TARG_TEST_COMP_log_1_MT_D)\
 $(TARG_TEST_COMP_pan_puts_MT_D)\
 $(TARG_TEST_COMP_pan_prtf_MT_D)\
 $(TARG_TEST_COMP_trace_1_MT_D)\
 $(TARG_TEST_COMP_core_initseq_MT_R)\
 $(TARG_TEST_COMP_custsev_MT_R)\
 $(TARG_TEST_COMP_file_mt_MT_R)\
 $(TARG_TEST_COMP_ins_args_MT_R)\
 $(TARG_TEST_COMP_ins_b64_MT_R)\
 $(TARG_TEST_COMP_ins_bool_MT_R)\
 $(TARG_TEST_COMP_ins_hostid_MT_R)\
 $(TARG_TEST_COMP_ins_int_MT_R)\
 $(TARG_TEST_COMP_ins_pad_MT_R)\
 $(TARG_TEST_COMP_ins_ptr_MT_R)\
 $(TARG_TEST_COMP_ins_prid_MT_R)\
 $(TARG_TEST_COMP_ins_real_MT_R)\
 $(TARG_TEST_COMP_ins_slice_MT_R)\
 $(TARG_TEST_COMP_ins_thrid_MT_R)\
 $(TARG_TEST_COMP_ins_w2m_MT_R)\
 $(TARG_TEST_COMP_log_1_MT_R)\
 $(TARG_TEST_COMP_pan_puts_MT_R)\
 $(TARG_TEST_COMP_pan_prtf_MT_R)\
 $(TARG_TEST_COMP_trace_1_MT_R)\
 $(TARG_TEST_COMP_core_initseq_ST_D)\
 $(TARG_TEST_COMP_custsev_ST_D)\
 $(TARG_TEST_COMP_ins_args_ST_D)\
 $(TARG_TEST_COMP_ins_b64_ST_D)\
 $(TARG_TEST_COMP_ins_bool_ST_D)\
 $(TARG_TEST_COMP_ins_hostid_ST_D)\
 $(TARG_TEST_COMP_ins_int_ST_D)\
 $(TARG_TEST_COMP_ins_pad_ST_D)\
 $(TARG_TEST_COMP_ins_ptr_ST_D)\
 $(TARG_TEST_COMP_ins_prid_ST_D)\
 $(TARG_TEST_COMP_ins_real_ST_D)\
 $(TARG_TEST_COMP_ins_slice_ST_D)\
 $(TARG_TEST_COMP_ins_thrid_ST_D)\
 $(TARG_TEST_COMP_ins_w2m_ST_D)\
 $(TARG_TEST_COMP_log_1_ST_D)\
 $(TARG_TEST_COMP_pan_puts_ST_D)\
 $(TARG_TEST_COMP_pan_prtf_ST_D)\
 $(TARG_TEST_COMP_trace_1_ST_D)\
 $(TARG_TEST_COMP_core_initseq_ST_R)\
 $(TARG_TEST_COMP_custsev_ST_R)\
 $(TARG_TEST_COMP_ins_args_ST_R)\
 $(TARG_TEST_COMP_ins_b64_ST_R)\
 $(TARG_TEST_COMP_ins_bool_ST_R)\
 $(TARG_TEST_COMP_ins_hostid_ST_R)\
 $(TARG_TEST_COMP_ins_int_ST_R)\
 $(TARG_TEST_COMP_ins_pad_ST_R)\
 $(TARG_TEST_COMP_ins_ptr_ST_R)\
 $(TARG_TEST_COMP_ins_prid_ST_R)\
 $(TARG_TEST_COMP_ins_real_ST_R)\
 $(TARG_TEST_COMP_ins_slice_ST_R)\
 $(TARG_TEST_COMP_ins_thrid_ST_R)\
 $(TARG_TEST_COMP_ins_w2m_ST_R)\
 $(TARG_TEST_COMP_log_1_ST_R)\
 $(TARG_TEST_COMP_pan_puts_ST_R)\
 $(TARG_TEST_COMP_pan_prtf_ST_R)\
 $(TARG_TEST_COMP_trace_1_ST_R)\
 \

TARGETS_TEST_PERFORMANCE=\
 $(TARG_TEST_PERF_ins_w2m_MT_D)\
 $(TARG_TEST_PERF_ins_w2m_MT_R)\
 $(TARG_TEST_PERF_ins_w2m_ST_D)\
 $(TARG_TEST_PERF_ins_w2m_ST_R)\
 \

TARGETS_TEST_SCRATCH_STD=\
 $(TEST__MT_D_API_W_BE_FPRINTF)\
 $(TEST__MT_D_API_W_BE_COMERROBJ)\
 $(TEST__MT_D_API_W_BE_WINEVLOG)\
 $(TEST__MT_D_API_W_BE_W32CONS)\
 $(TEST__MT_D_API_W_BE_W32DBGR)\
 $(TEST__MT_D_API_W_BE_W32SYSLOG)\
 $(TEST__MT_D_API_W_BELR_2_W32DBGR_FPRINTF)\
 $(TEST__MT_D_API_W_BELR_3_W32DBGR_W32SYSLOG)\
 $(TARGET_TEST_FE_MT_D)\
 $(TEST__MT_D_BE_N_FAIL)\
 $(TEST__MT_R_API_W_BE_FPRINTF)\
 $(TEST__MT_R_API_W_BE_COMERROBJ)\
 $(TEST__MT_R_API_W_BE_WINEVLOG)\
 $(TEST__MT_R_API_W_BE_W32CONS)\
 $(TEST__MT_R_API_W_BE_W32DBGR)\
 $(TEST__MT_R_API_W_BE_W32SYSLOG)\
 $(TEST__MT_R_API_W_BELR_2_W32DBGR_FPRINTF)\
 $(TEST__MT_R_API_W_BELR_3_W32DBGR_W32SYSLOG)\
 $(TARGET_TEST_FE_MT_R)\
 $(TEST__MT_R_BE_N_FAIL)\
 $(TEST__ST_D_API_W_BE_FPRINTF)\
 $(TEST__ST_D_API_W_BE_COMERROBJ)\
 $(TEST__ST_D_API_W_BE_WINEVLOG)\
 $(TEST__ST_D_API_W_BE_W32CONS)\
 $(TEST__ST_D_API_W_BE_W32DBGR)\
 $(TEST__ST_D_API_W_BE_W32SYSLOG)\
 $(TEST__ST_D_API_W_BELR_2_W32DBGR_FPRINTF)\
 $(TEST__ST_D_API_W_BELR_3_W32DBGR_W32SYSLOG)\
 $(TARGET_TEST_FE_ST_D)\
 $(TEST__ST_D_BE_N_FAIL)\
 $(TEST__ST_R_API_W_BE_FPRINTF)\
 $(TEST__ST_R_API_W_BE_COMERROBJ)\
 $(TEST__ST_R_API_W_BE_WINEVLOG)\
 $(TEST__ST_R_API_W_BE_W32CONS)\
 $(TEST__ST_R_API_W_BE_W32DBGR)\
 $(TEST__ST_R_API_W_BE_W32SYSLOG)\
 $(TEST__ST_R_API_W_BELR_2_W32DBGR_FPRINTF)\
 $(TEST__ST_R_API_W_BELR_3_W32DBGR_W32SYSLOG)\
 $(TARGET_TEST_FE_ST_R)\
 $(TEST__ST_R_BE_N_FAIL)\

TARGETS_TEST_SCRATCH_ACE=\
 $(TEST__MT_D_API_W_BE_ACE)\
 $(TEST__MT_R_API_W_BE_ACE)\
 \

TARGETS_TEST_SCRATCH=\
 $(TARGETS_TEST_SCRATCH_STD)\
 \
# $(TARG_TEST_SCRT_file_MT_D)\
# $(TARG_TEST_SCRT_file_MT_R)\
# $(TARG_TEST_SCRT_file_ST_D)\
# $(TARG_TEST_SCRT_file_ST_R)\
 \
# $(TARG_TEST_SCRT_file_MT_D)\
# $(TARG_TEST_SCRT_file_MT_R)\
# $(TARG_TEST_SCRT_file_ST_D)\
# $(TARG_TEST_SCRT_file_ST_R)\
 \

# $(TARGETS_TEST_SCRATCH_ACE)\
# \

TARGETS_TEST_UNIT=\
 $(TARG_TEST_UNIT_lvls_dyninit_MT_D)\
 $(TARG_TEST_UNIT_lvls_vals_MT_D)\
 $(TARG_TEST_UNIT_getcurrtm_MT_D)\
 $(TARG_TEST_UNIT_getversion_MT_D)\
 $(TARG_TEST_UNIT_gethostname_MT_D)\
 $(TARG_TEST_UNIT_onbailout_MT_D)\
 $(TARG_TEST_UNIT_strnlen_MT_D)\
 \
 $(TARG_TEST_UNIT_bec_CEO_MT_D)\
 $(TARG_TEST_UNIT_bec_file_MT_D)\
 $(TARG_TEST_UNIT_bec_fprintf_MT_D)\
 $(TARG_TEST_UNIT_bec_fail_MT_D)\
 $(TARG_TEST_UNIT_be_fail_MT_D)\
 $(TARG_TEST_UNIT_be_lrsplit_MT_D)\
 $(TARG_TEST_UNIT_be_N_MT_D)\
 \
 $(TARG_TEST_UNIT_fe_all_MT_D)\
 $(TARG_TEST_UNIT_fe_fail_MT_D)\
 $(TARG_TEST_UNIT_fe_N_MT_D)\
 $(TARG_TEST_UNIT_fe_null_MT_D)\
 $(TARG_TEST_UNIT_fe_simple_MT_D)\
 $(TARG_TEST_UNIT_fe_WinReg_MT_D)\
 $(TARG_TEST_UNIT_lvls_dyninit_MT_R)\
 $(TARG_TEST_UNIT_lvls_vals_MT_R)\
 $(TARG_TEST_UNIT_getcurrtm_MT_R)\
 $(TARG_TEST_UNIT_getversion_MT_R)\
 $(TARG_TEST_UNIT_gethostname_MT_R)\
 $(TARG_TEST_UNIT_onbailout_MT_R)\
 $(TARG_TEST_UNIT_strnlen_MT_R)\
 \
 $(TARG_TEST_UNIT_bec_CEO_MT_R)\
 $(TARG_TEST_UNIT_bec_file_MT_R)\
 $(TARG_TEST_UNIT_bec_fprintf_MT_R)\
 $(TARG_TEST_UNIT_bec_fail_MT_R)\
 $(TARG_TEST_UNIT_be_fail_MT_R)\
 $(TARG_TEST_UNIT_be_lrsplit_MT_R)\
 $(TARG_TEST_UNIT_be_N_MT_R)\
 \
 $(TARG_TEST_UNIT_fe_all_MT_R)\
 $(TARG_TEST_UNIT_fe_fail_MT_R)\
 $(TARG_TEST_UNIT_fe_N_MT_R)\
 $(TARG_TEST_UNIT_fe_null_MT_R)\
 $(TARG_TEST_UNIT_fe_simple_MT_R)\
 $(TARG_TEST_UNIT_fe_WinReg_MT_R)\
 $(TARG_TEST_UNIT_lvls_dyninit_ST_D)\
 $(TARG_TEST_UNIT_lvls_vals_ST_D)\
 $(TARG_TEST_UNIT_getcurrtm_ST_D)\
 $(TARG_TEST_UNIT_getversion_ST_D)\
 $(TARG_TEST_UNIT_gethostname_ST_D)\
 $(TARG_TEST_UNIT_onbailout_ST_D)\
 $(TARG_TEST_UNIT_strnlen_ST_D)\
 \
 $(TARG_TEST_UNIT_bec_CEO_ST_D)\
 $(TARG_TEST_UNIT_bec_file_ST_D)\
 $(TARG_TEST_UNIT_bec_fprintf_ST_D)\
 $(TARG_TEST_UNIT_bec_fail_ST_D)\
 $(TARG_TEST_UNIT_be_fail_ST_D)\
 $(TARG_TEST_UNIT_be_lrsplit_ST_D)\
 $(TARG_TEST_UNIT_be_N_ST_D)\
 \
 $(TARG_TEST_UNIT_fe_all_ST_D)\
 $(TARG_TEST_UNIT_fe_fail_ST_D)\
 $(TARG_TEST_UNIT_fe_N_ST_D)\
 $(TARG_TEST_UNIT_fe_null_ST_D)\
 $(TARG_TEST_UNIT_fe_simple_ST_D)\
 $(TARG_TEST_UNIT_fe_WinReg_ST_D)\
 $(TARG_TEST_UNIT_lvls_dyninit_ST_R)\
 $(TARG_TEST_UNIT_lvls_vals_ST_R)\
 $(TARG_TEST_UNIT_getcurrtm_ST_R)\
 $(TARG_TEST_UNIT_getversion_ST_R)\
 $(TARG_TEST_UNIT_gethostname_ST_R)\
 $(TARG_TEST_UNIT_onbailout_ST_R)\
 $(TARG_TEST_UNIT_strnlen_ST_R)\
 \
 $(TARG_TEST_UNIT_bec_CEO_ST_R)\
 $(TARG_TEST_UNIT_bec_file_ST_R)\
 $(TARG_TEST_UNIT_bec_fprintf_ST_R)\
 $(TARG_TEST_UNIT_bec_fail_ST_R)\
 $(TARG_TEST_UNIT_be_fail_ST_R)\
 $(TARG_TEST_UNIT_be_lrsplit_ST_R)\
 $(TARG_TEST_UNIT_be_N_ST_R)\
 \
 $(TARG_TEST_UNIT_fe_all_ST_R)\
 $(TARG_TEST_UNIT_fe_fail_ST_R)\
 $(TARG_TEST_UNIT_fe_N_ST_R)\
 $(TARG_TEST_UNIT_fe_null_ST_R)\
 $(TARG_TEST_UNIT_fe_simple_ST_R)\
 $(TARG_TEST_UNIT_fe_WinReg_ST_R)\
 \

############################################################
# Third-party libraries

LIBS_3PTY_ACE					=	-lace
LIBS_3PTY_COMERROBJ				=	-ladvapi32 -lole32 -loleaut32 -luser32
LIBS_3PTY_FPRINTF				=	-ladvapi32 -luser32
LIBS_3PTY_SYSLOG				=	-ladvapi32 -luser32
LIBS_3PTY_SPEECH				=	-ladvapi32 -lole32 -loleaut32 -luser32
LIBS_3PTY_WINEVLOG				=	-ladvapi32 -luser32
LIBS_3PTY_WINMSGBX				=	-ladvapi32 -luser32
LIBS_3PTY_W32CONS				=	-ladvapi32 -luser32
LIBS_3PTY_W32DBGR				=	-ladvapi32 -luser32
LIBS_3PTY_W32SYSLOG				=	-ladvapi32 -luser32 -lws2_32
LIBS_3PTY_W32DBGR_FPRINTF		=	-ladvapi32 -luser32
LIBS_3PTY_W32DBGR_W32SYSLOG		=	-ladvapi32 -luser32 -lws2_32
LIBS_3PTY_BE_N_FAIL				=	-ladvapi32 -luser32
LIBS_3PTY_TEST_UNIT				=	-ladvapi32 -luser32

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
	$(TARG_TEST_COMP_core_initseq_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_core_initseq_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_core_initseq_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_core_initseq_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_custsev_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_custsev_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_custsev_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_custsev_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_file_mt_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_file_mt_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_args_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_args_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_args_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_args_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_b64_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_b64_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_b64_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_b64_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_bool_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_bool_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_bool_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_bool_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_hostid_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_hostid_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_hostid_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_hostid_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_int_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_int_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_int_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_int_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_pad_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_pad_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_pad_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_pad_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_ptr_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_ptr_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_ptr_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_ptr_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_prid_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_prid_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_prid_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_prid_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_real_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_real_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_real_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_real_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_thrid_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_thrid_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_thrid_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_thrid_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_w2m_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_w2m_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_w2m_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_w2m_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_log_1_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_log_1_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_log_1_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_log_1_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_pan_puts_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_pan_puts_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_pan_puts_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_pan_puts_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_pan_prtf_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_pan_prtf_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_pan_prtf_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_pan_prtf_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_trace_1_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_trace_1_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_trace_1_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_trace_1_ST_R) --verbosity=$(TEST_VERBOSITY)

test.performance_:
	@echo Running Test:Performance programs ...
	$(TARG_TEST_PERF_ins_w2m_MT_R) on
	$(TARG_TEST_PERF_ins_w2m_MT_R) off
	$(TARG_TEST_PERF_ins_w2m_ST_R) on
	$(TARG_TEST_PERF_ins_w2m_ST_R) off

test.scratch_:
	@echo Running Test:Scratch programs ...
	$(TEST__MT_D_API_W_BE_FPRINTF)
	$(TEST__MT_D_API_W_BE_COMERROBJ)
	$(TEST__MT_D_API_W_BE_WINEVLOG)
	$(TEST__MT_D_API_W_BE_W32CONS)
	$(TEST__MT_D_API_W_BE_W32DBGR)
	$(TEST__MT_D_API_W_BE_W32SYSLOG)
	$(TEST__MT_D_API_W_BELR_2_W32DBGR_FPRINTF)
	$(TEST__MT_D_API_W_BELR_3_W32DBGR_W32SYSLOG)
	$(TARGET_TEST_FE_MT_D)
	$(TEST__MT_D_API_W_BE_FPRINTF)
	$(TEST__MT_D_BE_N_FAIL)
	$(TEST__MT_R_API_W_BE_FPRINTF)
	$(TEST__MT_R_API_W_BE_COMERROBJ)
	$(TEST__MT_R_API_W_BE_WINEVLOG)
	$(TEST__MT_R_API_W_BE_W32CONS)
	$(TEST__MT_R_API_W_BE_W32DBGR)
	$(TEST__MT_R_API_W_BE_W32SYSLOG)
	$(TEST__MT_R_API_W_BELR_2_W32DBGR_FPRINTF)
	$(TEST__MT_R_API_W_BELR_3_W32DBGR_W32SYSLOG)
	$(TARGET_TEST_FE_MT_R)
	$(TEST__MT_R_API_W_BE_FPRINTF)
	$(TEST__MT_R_BE_N_FAIL)
	$(TEST__ST_D_API_W_BE_FPRINTF)
	$(TEST__ST_D_API_W_BE_COMERROBJ)
	$(TEST__ST_D_API_W_BE_WINEVLOG)
	$(TEST__ST_D_API_W_BE_W32CONS)
	$(TEST__ST_D_API_W_BE_W32DBGR)
	$(TEST__ST_D_API_W_BE_W32SYSLOG)
	$(TEST__ST_D_API_W_BELR_2_W32DBGR_FPRINTF)
	$(TEST__ST_D_API_W_BELR_3_W32DBGR_W32SYSLOG)
	$(TARGET_TEST_FE_ST_D)
	$(TEST__ST_D_API_W_BE_FPRINTF)
	$(TEST__ST_D_BE_N_FAIL)
	$(TEST__ST_R_API_W_BE_FPRINTF)
	$(TEST__ST_R_API_W_BE_COMERROBJ)
	$(TEST__ST_R_API_W_BE_WINEVLOG)
	$(TEST__ST_R_API_W_BE_W32CONS)
	$(TEST__ST_R_API_W_BE_W32DBGR)
	$(TEST__ST_R_API_W_BE_W32SYSLOG)
	$(TEST__ST_R_API_W_BELR_2_W32DBGR_FPRINTF)
	$(TEST__ST_R_API_W_BELR_3_W32DBGR_W32SYSLOG)
	$(TARGET_TEST_FE_ST_R)
	$(TEST__ST_R_API_W_BE_FPRINTF)
	$(TEST__ST_R_BE_N_FAIL)

test.unit_:
	@echo Running Test:Unit programs ...
	$(TARG_TEST_UNIT_lvls_dyninit_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_lvls_dyninit_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_lvls_dyninit_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_lvls_dyninit_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_lvls_vals_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_lvls_vals_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_lvls_vals_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_lvls_vals_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_getcurrtm_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_getcurrtm_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_getcurrtm_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_getcurrtm_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_getversion_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_getversion_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_getversion_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_getversion_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_gethostname_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_gethostname_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_gethostname_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_gethostname_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_onbailout_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_onbailout_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_onbailout_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_onbailout_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_strnlen_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_strnlen_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_strnlen_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_strnlen_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_bec_CEO_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_bec_CEO_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_bec_CEO_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_bec_CEO_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_bec_file_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_bec_file_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_bec_file_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_bec_file_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_bec_fprintf_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_bec_fprintf_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_bec_fprintf_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_bec_fprintf_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_bec_fail_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_bec_fail_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_bec_fail_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_bec_fail_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_be_fail_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_be_fail_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_be_fail_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_be_fail_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_be_lrsplit_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_be_lrsplit_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_be_lrsplit_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_be_lrsplit_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_be_N_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_be_N_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_be_N_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_be_N_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_all_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_all_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_all_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_all_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_fail_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_fail_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_fail_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_fail_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_N_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_N_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_N_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_N_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_null_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_null_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_null_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_null_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_simple_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_simple_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_simple_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_simple_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_WinReg_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_WinReg_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_WinReg_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_WinReg_ST_R) --verbosity=$(TEST_VERBOSITY)

test.examples_:
	@echo Running Example programs ...
	$(EX_C_0_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_1_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_2_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_3_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_4_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_5_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_6_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_7_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_0_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_1_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_2_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_3_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_4_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_5_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_6_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_7_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_0_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_1_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_2_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_3_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_4_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_5_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_6_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_7_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_0_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_1_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_2_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_3_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_4_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_5_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_6_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_7_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_0_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_1_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_2_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_3_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_4_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_5_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_6_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_7_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_9_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_10_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_11_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_12_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_13_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_14_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_15_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_16_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_17_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_18_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_19_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_20_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_21_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_22_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_23_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_24_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_25_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_26_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_27_MT_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_0_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_1_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_2_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_3_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_4_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_5_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_6_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_7_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_9_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_10_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_11_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_12_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_13_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_14_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_15_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_16_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_17_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_18_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_19_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_20_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_21_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_22_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_23_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_24_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_25_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_26_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_27_MT_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_0_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_1_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_2_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_3_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_4_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_5_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_6_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_7_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_9_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_10_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_11_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_12_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_13_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_14_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_15_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_16_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_17_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_18_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_19_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_20_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_21_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_22_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_23_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_24_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_25_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_26_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_27_ST_D) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_0_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_1_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_2_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_3_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_4_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_5_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_6_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_7_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_9_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_10_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_11_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_12_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_13_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_14_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_15_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_16_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_17_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_18_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_19_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_20_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_21_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_22_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_23_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_24_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_25_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_26_ST_R) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_27_ST_R) --verbosity=$(TEST_VERBOSITY)

test.component:		build.test.component test.component_

test.performance:	build.test.performance test.performance_

test.scratch:		build.test.scratch test.scratch_

test.unit:			build.test.unit test.unit_

test.examples:		build.examples test.examples_

test.ace:			build.libs.ace build.libs.core $(TARGETS_TEST_SCRATCH_ACE)
	$(TEST__MT_D_API_W_BE_ACE)
	$(TEST__MT_R_API_W_BE_ACE)

test:                       test.unit test.component

test.all:                   test.scratch test.examples test.performance test.ace test


# clean targets

clean.libs.core:
	@echo Cleaning Core libraries ...
	@-if exist util.*.obj $(RM) util.*.obj
	@-if exist core.*.obj $(RM) core.*.obj
	@-if exist inserters.*.obj $(RM) inserters.*.obj
	@-if exist $(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).core.$(COMP_TAG)*.a $(RM) $(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).core.$(COMP_TAG)*.a
	@-if exist $(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).util.$(COMP_TAG)*.a $(RM) $(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).util.$(COMP_TAG)*.a

clean.libs.be:
	@echo Cleaning Back-end libraries ...
	@-if exist bec.*.obj $(RM) bec.*.obj
	@-if exist bel.*.obj $(RM) bel.*.obj
	@-if exist ber.*.obj $(RM) ber.*.obj
	@-if exist be.*.obj $(RM) be.*.obj
	@-if exist $(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.*.$(COMP_TAG)*.a $(RM) $(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bec.*.$(COMP_TAG)*.a
	@-if exist $(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.*.$(COMP_TAG)*.a $(RM) $(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).bel.*.$(COMP_TAG)*.a
	@-if exist $(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.*.$(COMP_TAG)*.a $(RM) $(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).ber.*.$(COMP_TAG)*.a
	@-if exist $(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.*.$(COMP_TAG)*.a $(RM) $(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).be.*.$(COMP_TAG)*.a


clean.libs.fe:
	@echo Cleaning Front-end libraries ...
	@-if exist fe.*.obj $(RM) fe.*.obj
	@-if exist $(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).fe.*.$(COMP_TAG)*.a $(RM) $(PROJ_LIB_DIR)\lib$(PROJ_TAG_VER).fe.*.$(COMP_TAG)*.a

clean.libs.b64:
	@echo Cleaning b64 libraries ...
	@-if exist b64.*.obj $(RM) b64.*.obj
	@-if exist $(PROJ_LIB_DIR)\$(B64_TAG_VER).pan.$(COMP_TAG)*.a $(RM) $(PROJ_LIB_DIR)\$(B64_TAG_VER).pan.$(COMP_TAG)*.a

clean.libs.shwild:
	@echo Cleaning shwild libraries ...
	@-if exist shwild.*.obj $(RM) shwild.*.obj
	@-if exist $(PROJ_LIB_DIR)\$(SHWILD_TAG_VER).pan.$(COMP_TAG)*.a $(RM) $(PROJ_LIB_DIR)\$(SHWILD_TAG_VER).pan.$(COMP_TAG)*.a

clean.libs.xtests:
	@echo Cleaning xTests libraries ...
	@-if exist xtests.*.obj $(RM) xtests.*.obj
	@-if exist $(PROJ_LIB_DIR)\$(XTESTS_TAG_VER).pan.$(COMP_TAG)*.a $(RM) $(PROJ_LIB_DIR)\$(XTESTS_TAG_VER).pan.$(COMP_TAG)*.a

clean.libs.ace:
	@echo Cleaning ACE libraries ...
	@-if exist $(LIB_BEC_ACE_MT_D) $(RM) $(LIB_BEC_ACE_MT_D)
	@-if exist $(LIB_BE_ACE_MT_D) $(RM) $(LIB_BE_ACE_MT_D)
	@-if exist $(LIB_BEL_ACE_MT_D) $(RM) $(LIB_BEL_ACE_MT_D)
	@-if exist $(LIB_BER_ACE_MT_D) $(RM) $(LIB_BER_ACE_MT_D)
	@-if exist $(LIB_BEC_ACE_MT_R) $(RM) $(LIB_BEC_ACE_MT_R)
	@-if exist $(LIB_BE_ACE_MT_R) $(RM) $(LIB_BE_ACE_MT_R)
	@-if exist $(LIB_BEL_ACE_MT_R) $(RM) $(LIB_BEL_ACE_MT_R)
	@-if exist $(LIB_BER_ACE_MT_R) $(RM) $(LIB_BER_ACE_MT_R)
	@-$(RM) $(OBJ_BEC_ACE_MT_D)
	@-$(RM) $(OBJ_BE_ACE_MT_D)
	@-$(RM) $(OBJ_BEL_ACE_MT_D)
	@-$(RM) $(OBJ_BER_ACE_MT_D)
	@-$(RM) $(OBJ_BEC_ACE_MT_R)
	@-$(RM) $(OBJ_BE_ACE_MT_R)
	@-$(RM) $(OBJ_BEL_ACE_MT_R)
	@-$(RM) $(OBJ_BER_ACE_MT_R)

clean.examples:
	@echo Cleaning examples ...
	@-if exist ex.*.obj $(RM) ex.*.obj
	@-if exist $(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.*.$(COMP_TAG)*.exe $(RM) $(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.*.$(COMP_TAG)*.exe

clean.samples:
	@echo Cleaning samples ...

clean.samples.all:	clean.samples

#	@-$(RM) $(TARGETS_SAMPLE)

clean.test.unit:
	@echo Cleaning unit tests ...
	@-if exist test.unit.*.obj $(RM) test.unit.*.obj
	@-if exist $(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.*.$(COMP_TAG)*.exe $(RM) $(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.*.$(COMP_TAG)*.exe

clean.test.component:
	@echo Cleaning component tests ...
	@-if exist test.component.*.obj $(RM) test.component.*.obj
	@-if exist $(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.*.$(COMP_TAG)*.exe $(RM) $(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.*.$(COMP_TAG)*.exe

clean.test.performance:
	@echo Cleaning performance tests ...
	@-if exist test.performance.*.obj $(RM) test.performance.*.obj
	@-if exist $(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.performance.*.$(COMP_TAG)*.exe $(RM) $(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.performance.*.$(COMP_TAG)*.exe

clean.test.scratch:
	@echo Cleaning scratch tests ...
	@-if exist test.*.obj $(RM) test.*.obj
	@-if exist $(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.*.$(COMP_TAG)*.exe $(RM) $(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.*.$(COMP_TAG)*.exe

clean.test.ace:
	@echo Cleaning ACE tests ...
	@-if exist $(TEST__MT_D_API_W_BE_ACE) $(RM) $(TEST__MT_D_API_W_BE_ACE)
	@-if exist $(TEST__MT_R_API_W_BE_ACE) $(RM) $(TEST__MT_R_API_W_BE_ACE)

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

$(LIB_UTIL_MT_D): $(OBJ_UTIL_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_UTIL_MT_D)

$(OBJ_utl_bailout_MT_D): $(PROJ_SRC_DIR)\util\bailout.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\bailout.c
$(OBJ_utl_init_code_strs_MT_D): $(PROJ_SRC_DIR)\util\init_code_strings.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\init_code_strings.c
$(OBJ_utl_sev_strs_MT_D): $(PROJ_SRC_DIR)\util\severity_strings.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\severity_strings.c
$(OBJ_utl_time_MT_D): $(PROJ_SRC_DIR)\util\time.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\time.cpp
$(OBJ_utl_host_name_MT_D): $(PROJ_SRC_DIR)\util\hostname.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\hostname.c
$(OBJ_utl_snprintf_MT_D): $(PROJ_SRC_DIR)\util\snprintf.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\snprintf.c
$(OBJ_utl_strdup_MT_D): $(PROJ_SRC_DIR)\util\strdup.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\strdup.c
$(OBJ_utl_procid_MT_D): $(PROJ_SRC_DIR)\util\processid.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\processid.c
$(OBJ_utl_thread_MT_D): $(PROJ_SRC_DIR)\util\threadid.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\threadid.c
$(OBJ_utl_be_context_MT_D): $(PROJ_SRC_DIR)\util\be.context.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\be.context.cpp
$(OBJ_utl_core_apidefs_MT_D): $(PROJ_SRC_DIR)\util\core.apidefs.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\core.apidefs.cpp
$(OBJ_utl_be_parse_MT_D): $(PROJ_SRC_DIR)\util\be.parse.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\be.parse.cpp
$(OBJ_utl_strnlen_MT_D): $(PROJ_SRC_DIR)\util\strnlen.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\strnlen.cpp

$(LIB_UTIL_MT_R): $(OBJ_UTIL_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_UTIL_MT_R)

$(OBJ_utl_bailout_MT_R): $(PROJ_SRC_DIR)\util\bailout.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\bailout.c
$(OBJ_utl_init_code_strs_MT_R): $(PROJ_SRC_DIR)\util\init_code_strings.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\init_code_strings.c
$(OBJ_utl_sev_strs_MT_R): $(PROJ_SRC_DIR)\util\severity_strings.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\severity_strings.c
$(OBJ_utl_time_MT_R): $(PROJ_SRC_DIR)\util\time.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\time.cpp
$(OBJ_utl_host_name_MT_R): $(PROJ_SRC_DIR)\util\hostname.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\hostname.c
$(OBJ_utl_snprintf_MT_R): $(PROJ_SRC_DIR)\util\snprintf.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\snprintf.c
$(OBJ_utl_strdup_MT_R): $(PROJ_SRC_DIR)\util\strdup.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\strdup.c
$(OBJ_utl_procid_MT_R): $(PROJ_SRC_DIR)\util\processid.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\processid.c
$(OBJ_utl_thread_MT_R): $(PROJ_SRC_DIR)\util\threadid.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\threadid.c
$(OBJ_utl_be_context_MT_R): $(PROJ_SRC_DIR)\util\be.context.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\be.context.cpp
$(OBJ_utl_core_apidefs_MT_R): $(PROJ_SRC_DIR)\util\core.apidefs.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\core.apidefs.cpp
$(OBJ_utl_be_parse_MT_R): $(PROJ_SRC_DIR)\util\be.parse.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\be.parse.cpp
$(OBJ_utl_strnlen_MT_R): $(PROJ_SRC_DIR)\util\strnlen.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\strnlen.cpp

$(LIB_UTIL_ST_D): $(OBJ_UTIL_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_UTIL_ST_D)

$(OBJ_utl_bailout_ST_D): $(PROJ_SRC_DIR)\util\bailout.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\bailout.c
$(OBJ_utl_init_code_strs_ST_D): $(PROJ_SRC_DIR)\util\init_code_strings.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\init_code_strings.c
$(OBJ_utl_sev_strs_ST_D): $(PROJ_SRC_DIR)\util\severity_strings.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\severity_strings.c
$(OBJ_utl_time_ST_D): $(PROJ_SRC_DIR)\util\time.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\time.cpp
$(OBJ_utl_host_name_ST_D): $(PROJ_SRC_DIR)\util\hostname.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\hostname.c
$(OBJ_utl_snprintf_ST_D): $(PROJ_SRC_DIR)\util\snprintf.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\snprintf.c
$(OBJ_utl_strdup_ST_D): $(PROJ_SRC_DIR)\util\strdup.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\strdup.c
$(OBJ_utl_procid_ST_D): $(PROJ_SRC_DIR)\util\processid.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\processid.c
$(OBJ_utl_thread_ST_D): $(PROJ_SRC_DIR)\util\threadid.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\threadid.c
$(OBJ_utl_be_context_ST_D): $(PROJ_SRC_DIR)\util\be.context.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\be.context.cpp
$(OBJ_utl_core_apidefs_ST_D): $(PROJ_SRC_DIR)\util\core.apidefs.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\core.apidefs.cpp
$(OBJ_utl_be_parse_ST_D): $(PROJ_SRC_DIR)\util\be.parse.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\be.parse.cpp
$(OBJ_utl_strnlen_ST_D): $(PROJ_SRC_DIR)\util\strnlen.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\strnlen.cpp

$(LIB_UTIL_ST_R): $(OBJ_UTIL_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_UTIL_ST_R)

$(OBJ_utl_bailout_ST_R): $(PROJ_SRC_DIR)\util\bailout.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\bailout.c
$(OBJ_utl_init_code_strs_ST_R): $(PROJ_SRC_DIR)\util\init_code_strings.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\init_code_strings.c
$(OBJ_utl_sev_strs_ST_R): $(PROJ_SRC_DIR)\util\severity_strings.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\severity_strings.c
$(OBJ_utl_time_ST_R): $(PROJ_SRC_DIR)\util\time.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\time.cpp
$(OBJ_utl_host_name_ST_R): $(PROJ_SRC_DIR)\util\hostname.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\hostname.c
$(OBJ_utl_snprintf_ST_R): $(PROJ_SRC_DIR)\util\snprintf.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\snprintf.c
$(OBJ_utl_strdup_ST_R): $(PROJ_SRC_DIR)\util\strdup.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\strdup.c
$(OBJ_utl_procid_ST_R): $(PROJ_SRC_DIR)\util\processid.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\processid.c
$(OBJ_utl_thread_ST_R): $(PROJ_SRC_DIR)\util\threadid.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\threadid.c
$(OBJ_utl_be_context_ST_R): $(PROJ_SRC_DIR)\util\be.context.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\be.context.cpp
$(OBJ_utl_core_apidefs_ST_R): $(PROJ_SRC_DIR)\util\core.apidefs.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\core.apidefs.cpp
$(OBJ_utl_be_parse_ST_R): $(PROJ_SRC_DIR)\util\be.parse.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\be.parse.cpp
$(OBJ_utl_strnlen_ST_R): $(PROJ_SRC_DIR)\util\strnlen.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\util\strnlen.cpp


########################################
# Main library - 'pantheios.X.core.a'

$(LIB_CORE_MT_D): $(OBJ_CORE_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_CORE_MT_D)

$(OBJ_cr_api_MT_D): $(PROJ_SRC_DIR)\core\api.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\core\api.cpp
$(OBJ_cr_auto_MT_D): $(PROJ_SRC_DIR)\core\auto.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\core\auto.cpp
$(OBJ_cr_logprintf_MT_D): $(PROJ_SRC_DIR)\core\logprintf.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\core\logprintf.c

$(OBJ_ins_args_MT_D): $(PROJ_SRC_DIR)\inserters\args.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\args.cpp
$(OBJ_ins_b64_MT_D): $(PROJ_SRC_DIR)\inserters\b64.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\b64.cpp
$(OBJ_ins_blob_MT_D): $(PROJ_SRC_DIR)\inserters\blob.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\blob.cpp
$(OBJ_ins_bool_MT_D): $(PROJ_SRC_DIR)\inserters\boolean.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\boolean.cpp
$(OBJ_ins_excp_MT_D): $(PROJ_SRC_DIR)\inserters\exception.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\exception.cpp
$(OBJ_ins_host_MT_D): $(PROJ_SRC_DIR)\inserters\hostid.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\hostid.cpp
$(OBJ_ins_int_MT_D): $(PROJ_SRC_DIR)\inserters\integer.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\integer.cpp
$(OBJ_ins_ptr_MT_D): $(PROJ_SRC_DIR)\inserters\pointer.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\pointer.cpp
$(OBJ_ins_prid_MT_D): $(PROJ_SRC_DIR)\inserters\processid.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\processid.cpp
$(OBJ_ins_real_MT_D): $(PROJ_SRC_DIR)\inserters\real.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\real.cpp
$(OBJ_ins_slice_MT_D): $(PROJ_SRC_DIR)\inserters\slice.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\slice.cpp
$(OBJ_ins_thrid_MT_D): $(PROJ_SRC_DIR)\inserters\threadid.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\threadid.cpp
$(OBJ_ins_w2m_MT_D): $(PROJ_SRC_DIR)\inserters\w2m.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\w2m.cpp

$(LIB_CORE_MT_R): $(OBJ_CORE_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_CORE_MT_R)

$(OBJ_cr_api_MT_R): $(PROJ_SRC_DIR)\core\api.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\core\api.cpp
$(OBJ_cr_auto_MT_R): $(PROJ_SRC_DIR)\core\auto.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\core\auto.cpp
$(OBJ_cr_logprintf_MT_R): $(PROJ_SRC_DIR)\core\logprintf.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\core\logprintf.c

$(OBJ_ins_args_MT_R): $(PROJ_SRC_DIR)\inserters\args.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\args.cpp
$(OBJ_ins_b64_MT_R): $(PROJ_SRC_DIR)\inserters\b64.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\b64.cpp
$(OBJ_ins_blob_MT_R): $(PROJ_SRC_DIR)\inserters\blob.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\blob.cpp
$(OBJ_ins_bool_MT_R): $(PROJ_SRC_DIR)\inserters\boolean.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\boolean.cpp
$(OBJ_ins_excp_MT_R): $(PROJ_SRC_DIR)\inserters\exception.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\exception.cpp
$(OBJ_ins_host_MT_R): $(PROJ_SRC_DIR)\inserters\hostid.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\hostid.cpp
$(OBJ_ins_int_MT_R): $(PROJ_SRC_DIR)\inserters\integer.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\integer.cpp
$(OBJ_ins_ptr_MT_R): $(PROJ_SRC_DIR)\inserters\pointer.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\pointer.cpp
$(OBJ_ins_prid_MT_R): $(PROJ_SRC_DIR)\inserters\processid.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\processid.cpp
$(OBJ_ins_real_MT_R): $(PROJ_SRC_DIR)\inserters\real.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\real.cpp
$(OBJ_ins_slice_MT_R): $(PROJ_SRC_DIR)\inserters\slice.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\slice.cpp
$(OBJ_ins_thrid_MT_R): $(PROJ_SRC_DIR)\inserters\threadid.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\threadid.cpp
$(OBJ_ins_w2m_MT_R): $(PROJ_SRC_DIR)\inserters\w2m.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\w2m.cpp

$(LIB_CORE_ST_D): $(OBJ_CORE_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_CORE_ST_D)

$(OBJ_cr_api_ST_D): $(PROJ_SRC_DIR)\core\api.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\core\api.cpp
$(OBJ_cr_auto_ST_D): $(PROJ_SRC_DIR)\core\auto.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\core\auto.cpp
$(OBJ_cr_logprintf_ST_D): $(PROJ_SRC_DIR)\core\logprintf.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\core\logprintf.c

$(OBJ_ins_args_ST_D): $(PROJ_SRC_DIR)\inserters\args.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\args.cpp
$(OBJ_ins_b64_ST_D): $(PROJ_SRC_DIR)\inserters\b64.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\b64.cpp
$(OBJ_ins_blob_ST_D): $(PROJ_SRC_DIR)\inserters\blob.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\blob.cpp
$(OBJ_ins_bool_ST_D): $(PROJ_SRC_DIR)\inserters\boolean.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\boolean.cpp
$(OBJ_ins_excp_ST_D): $(PROJ_SRC_DIR)\inserters\exception.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\exception.cpp
$(OBJ_ins_host_ST_D): $(PROJ_SRC_DIR)\inserters\hostid.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\hostid.cpp
$(OBJ_ins_int_ST_D): $(PROJ_SRC_DIR)\inserters\integer.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\integer.cpp
$(OBJ_ins_ptr_ST_D): $(PROJ_SRC_DIR)\inserters\pointer.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\pointer.cpp
$(OBJ_ins_prid_ST_D): $(PROJ_SRC_DIR)\inserters\processid.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\processid.cpp
$(OBJ_ins_real_ST_D): $(PROJ_SRC_DIR)\inserters\real.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\real.cpp
$(OBJ_ins_slice_ST_D): $(PROJ_SRC_DIR)\inserters\slice.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\slice.cpp
$(OBJ_ins_thrid_ST_D): $(PROJ_SRC_DIR)\inserters\threadid.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\threadid.cpp
$(OBJ_ins_w2m_ST_D): $(PROJ_SRC_DIR)\inserters\w2m.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\w2m.cpp

$(LIB_CORE_ST_R): $(OBJ_CORE_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_CORE_ST_R)

$(OBJ_cr_api_ST_R): $(PROJ_SRC_DIR)\core\api.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\core\api.cpp
$(OBJ_cr_auto_ST_R): $(PROJ_SRC_DIR)\core\auto.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\core\auto.cpp
$(OBJ_cr_logprintf_ST_R): $(PROJ_SRC_DIR)\core\logprintf.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\core\logprintf.c

$(OBJ_ins_args_ST_R): $(PROJ_SRC_DIR)\inserters\args.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\args.cpp
$(OBJ_ins_b64_ST_R): $(PROJ_SRC_DIR)\inserters\b64.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\b64.cpp
$(OBJ_ins_blob_ST_R): $(PROJ_SRC_DIR)\inserters\blob.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\blob.cpp
$(OBJ_ins_bool_ST_R): $(PROJ_SRC_DIR)\inserters\boolean.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\boolean.cpp
$(OBJ_ins_excp_ST_R): $(PROJ_SRC_DIR)\inserters\exception.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\exception.cpp
$(OBJ_ins_host_ST_R): $(PROJ_SRC_DIR)\inserters\hostid.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\hostid.cpp
$(OBJ_ins_int_ST_R): $(PROJ_SRC_DIR)\inserters\integer.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\integer.cpp
$(OBJ_ins_ptr_ST_R): $(PROJ_SRC_DIR)\inserters\pointer.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\pointer.cpp
$(OBJ_ins_prid_ST_R): $(PROJ_SRC_DIR)\inserters\processid.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\processid.cpp
$(OBJ_ins_real_ST_R): $(PROJ_SRC_DIR)\inserters\real.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\real.cpp
$(OBJ_ins_slice_ST_R): $(PROJ_SRC_DIR)\inserters\slice.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\slice.cpp
$(OBJ_ins_thrid_ST_R): $(PROJ_SRC_DIR)\inserters\threadid.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\threadid.cpp
$(OBJ_ins_w2m_ST_R): $(PROJ_SRC_DIR)\inserters\w2m.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\inserters\w2m.cpp


########################################
# Backend util components

########################################
# Backend library - 'pantheios.be.lrsplit.a'

$(LIB_BE_LRSPLIT_MT_D): $(OBJ_BE_LRSPLIT_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_LRSPLIT_MT_D)

$(OBJ_be_lrsplit__MT_D): $(PROJ_SRC_DIR)\backends\be.lrsplit.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.lrsplit.c

$(LIB_BE_LRSPLIT_MT_R): $(OBJ_BE_LRSPLIT_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_LRSPLIT_MT_R)

$(OBJ_be_lrsplit__MT_R): $(PROJ_SRC_DIR)\backends\be.lrsplit.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.lrsplit.c

$(LIB_BE_LRSPLIT_ST_D): $(OBJ_BE_LRSPLIT_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_LRSPLIT_ST_D)

$(OBJ_be_lrsplit__ST_D): $(PROJ_SRC_DIR)\backends\be.lrsplit.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.lrsplit.c

$(LIB_BE_LRSPLIT_ST_R): $(OBJ_BE_LRSPLIT_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_LRSPLIT_ST_R)

$(OBJ_be_lrsplit__ST_R): $(PROJ_SRC_DIR)\backends\be.lrsplit.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.lrsplit.c

########################################
# Backend library - 'pantheios.be.N.a'

$(LIB_BE_N_MT_D): $(OBJ_BE_N_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_N_MT_D)

$(OBJ_be_N__MT_D): $(PROJ_SRC_DIR)\backends\be.N.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.N.c

$(LIB_BE_N_MT_R): $(OBJ_BE_N_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_N_MT_R)

$(OBJ_be_N__MT_R): $(PROJ_SRC_DIR)\backends\be.N.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.N.c

$(LIB_BE_N_ST_D): $(OBJ_BE_N_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_N_ST_D)

$(OBJ_be_N__ST_D): $(PROJ_SRC_DIR)\backends\be.N.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.N.c

$(LIB_BE_N_ST_R): $(OBJ_BE_N_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_N_ST_R)

$(OBJ_be_N__ST_R): $(PROJ_SRC_DIR)\backends\be.N.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.N.c

########################################
# Back-end library - 'pantheios.bec.test.a'

$(LIB_BEC_TEST_MT_D): $(OBJ_BEC_TEST_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_TEST_MT_D)

$(OBJ_bec_test_MT_D): $(PROJ_SRC_DIR)\backends\bec.test.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.test.cpp

$(LIB_BEC_TEST_MT_R): $(OBJ_BEC_TEST_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_TEST_MT_R)

$(OBJ_bec_test_MT_R): $(PROJ_SRC_DIR)\backends\bec.test.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.test.cpp

$(LIB_BEC_TEST_ST_D): $(OBJ_BEC_TEST_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_TEST_ST_D)

$(OBJ_bec_test_ST_D): $(PROJ_SRC_DIR)\backends\bec.test.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.test.cpp

$(LIB_BEC_TEST_ST_R): $(OBJ_BEC_TEST_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_TEST_ST_R)

$(OBJ_bec_test_ST_R): $(PROJ_SRC_DIR)\backends\bec.test.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.test.cpp

########################################
# Back-end library - 'pantheios.be.test.a'

$(LIB_BE_TEST_MT_D): $(OBJ_BE_TEST_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_TEST_MT_D)

$(OBJ_be_test_MT_D): $(PROJ_SRC_DIR)\backends\be.test.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.test.c

$(LIB_BE_TEST_MT_R): $(OBJ_BE_TEST_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_TEST_MT_R)

$(OBJ_be_test_MT_R): $(PROJ_SRC_DIR)\backends\be.test.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.test.c

$(LIB_BE_TEST_ST_D): $(OBJ_BE_TEST_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_TEST_ST_D)

$(OBJ_be_test_ST_D): $(PROJ_SRC_DIR)\backends\be.test.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.test.c

$(LIB_BE_TEST_ST_R): $(OBJ_BE_TEST_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_TEST_ST_R)

$(OBJ_be_test_ST_R): $(PROJ_SRC_DIR)\backends\be.test.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.test.c

########################################
# Back-end library - 'pantheios.bel.test.a'

$(LIB_BEL_TEST_MT_D): $(OBJ_BEL_TEST_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_TEST_MT_D)

$(OBJ_bel_test_MT_D): $(PROJ_SRC_DIR)\backends\bel.test.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.test.c

$(LIB_BEL_TEST_MT_R): $(OBJ_BEL_TEST_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_TEST_MT_R)

$(OBJ_bel_test_MT_R): $(PROJ_SRC_DIR)\backends\bel.test.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.test.c

$(LIB_BEL_TEST_ST_D): $(OBJ_BEL_TEST_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_TEST_ST_D)

$(OBJ_bel_test_ST_D): $(PROJ_SRC_DIR)\backends\bel.test.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.test.c

$(LIB_BEL_TEST_ST_R): $(OBJ_BEL_TEST_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_TEST_ST_R)

$(OBJ_bel_test_ST_R): $(PROJ_SRC_DIR)\backends\bel.test.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.test.c

########################################
# Back-end library - 'pantheios.ber.test.a'

$(LIB_BER_TEST_MT_D): $(OBJ_BER_TEST_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_TEST_MT_D)

$(OBJ_ber_test_MT_D): $(PROJ_SRC_DIR)\backends\ber.test.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.test.c

$(LIB_BER_TEST_MT_R): $(OBJ_BER_TEST_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_TEST_MT_R)

$(OBJ_ber_test_MT_R): $(PROJ_SRC_DIR)\backends\ber.test.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.test.c

$(LIB_BER_TEST_ST_D): $(OBJ_BER_TEST_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_TEST_ST_D)

$(OBJ_ber_test_ST_D): $(PROJ_SRC_DIR)\backends\ber.test.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.test.c

$(LIB_BER_TEST_ST_R): $(OBJ_BER_TEST_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_TEST_ST_R)

$(OBJ_ber_test_ST_R): $(PROJ_SRC_DIR)\backends\ber.test.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.test.c

########################################
# Backend library - 'pantheios.bec.fail.a'

$(LIB_BEC_FAIL_MT_D): $(OBJ_BEC_FAIL_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_FAIL_MT_D)

$(OBJ_bec_fail__MT_D): $(PROJ_SRC_DIR)\backends\bec.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.fail.c

$(LIB_BEC_FAIL_MT_R): $(OBJ_BEC_FAIL_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_FAIL_MT_R)

$(OBJ_bec_fail__MT_R): $(PROJ_SRC_DIR)\backends\bec.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.fail.c

$(LIB_BEC_FAIL_ST_D): $(OBJ_BEC_FAIL_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_FAIL_ST_D)

$(OBJ_bec_fail__ST_D): $(PROJ_SRC_DIR)\backends\bec.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.fail.c

$(LIB_BEC_FAIL_ST_R): $(OBJ_BEC_FAIL_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_FAIL_ST_R)

$(OBJ_bec_fail__ST_R): $(PROJ_SRC_DIR)\backends\bec.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.fail.c


########################################
# Backend library - 'pantheios.be.fail.a'

$(LIB_BE_FAIL_MT_D): $(OBJ_BE_FAIL_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_FAIL_MT_D)

$(OBJ_be_fail__MT_D): $(PROJ_SRC_DIR)\backends\be.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.fail.c

$(LIB_BE_FAIL_MT_R): $(OBJ_BE_FAIL_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_FAIL_MT_R)

$(OBJ_be_fail__MT_R): $(PROJ_SRC_DIR)\backends\be.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.fail.c

$(LIB_BE_FAIL_ST_D): $(OBJ_BE_FAIL_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_FAIL_ST_D)

$(OBJ_be_fail__ST_D): $(PROJ_SRC_DIR)\backends\be.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.fail.c

$(LIB_BE_FAIL_ST_R): $(OBJ_BE_FAIL_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_FAIL_ST_R)

$(OBJ_be_fail__ST_R): $(PROJ_SRC_DIR)\backends\be.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.fail.c


########################################
# Backend library - 'pantheios.bel.fail.a'

$(LIB_BEL_FAIL_MT_D): $(OBJ_BEL_FAIL_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_FAIL_MT_D)

$(OBJ_bel_fail__MT_D): $(PROJ_SRC_DIR)\backends\bel.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.fail.c

$(LIB_BEL_FAIL_MT_R): $(OBJ_BEL_FAIL_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_FAIL_MT_R)

$(OBJ_bel_fail__MT_R): $(PROJ_SRC_DIR)\backends\bel.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.fail.c

$(LIB_BEL_FAIL_ST_D): $(OBJ_BEL_FAIL_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_FAIL_ST_D)

$(OBJ_bel_fail__ST_D): $(PROJ_SRC_DIR)\backends\bel.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.fail.c

$(LIB_BEL_FAIL_ST_R): $(OBJ_BEL_FAIL_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_FAIL_ST_R)

$(OBJ_bel_fail__ST_R): $(PROJ_SRC_DIR)\backends\bel.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.fail.c


########################################
# Backend library - 'pantheios.ber.fail.a'

$(LIB_BER_FAIL_MT_D): $(OBJ_BER_FAIL_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_FAIL_MT_D)

$(OBJ_ber_fail__MT_D): $(PROJ_SRC_DIR)\backends\ber.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.fail.c

$(LIB_BER_FAIL_MT_R): $(OBJ_BER_FAIL_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_FAIL_MT_R)

$(OBJ_ber_fail__MT_R): $(PROJ_SRC_DIR)\backends\ber.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.fail.c

$(LIB_BER_FAIL_ST_D): $(OBJ_BER_FAIL_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_FAIL_ST_D)

$(OBJ_ber_fail__ST_D): $(PROJ_SRC_DIR)\backends\ber.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.fail.c

$(LIB_BER_FAIL_ST_R): $(OBJ_BER_FAIL_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_FAIL_ST_R)

$(OBJ_ber_fail__ST_R): $(PROJ_SRC_DIR)\backends\ber.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.fail.c


########################################
# Backend library - 'pantheios.bec.file.a'

$(LIB_BEC_FILE_MT_D): $(OBJ_BEC_FILE_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_FILE_MT_D)

$(OBJ_bec_file__MT_D): $(PROJ_SRC_DIR)\backends\bec.file.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.file.cpp

$(LIB_BEC_FILE_MT_R): $(OBJ_BEC_FILE_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_FILE_MT_R)

$(OBJ_bec_file__MT_R): $(PROJ_SRC_DIR)\backends\bec.file.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.file.cpp

$(LIB_BEC_FILE_ST_D): $(OBJ_BEC_FILE_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_FILE_ST_D)

$(OBJ_bec_file__ST_D): $(PROJ_SRC_DIR)\backends\bec.file.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.file.cpp

$(LIB_BEC_FILE_ST_R): $(OBJ_BEC_FILE_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_FILE_ST_R)

$(OBJ_bec_file__ST_R): $(PROJ_SRC_DIR)\backends\bec.file.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.file.cpp


########################################
# Backend library - 'pantheios.bec.file.WithCallback.a'

$(LIB_BEC_FILE_WC_MT_D): $(OBJ_BEC_FILE_WC_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_FILE_WC_MT_D)

$(OBJ_bec_file_WC__MT_D): $(PROJ_SRC_DIR)\backends\bec.file.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.file.cpp

$(LIB_BEC_FILE_WC_MT_R): $(OBJ_BEC_FILE_WC_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_FILE_WC_MT_R)

$(OBJ_bec_file_WC__MT_R): $(PROJ_SRC_DIR)\backends\bec.file.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.file.cpp

$(LIB_BEC_FILE_WC_ST_D): $(OBJ_BEC_FILE_WC_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_FILE_WC_ST_D)

$(OBJ_bec_file_WC__ST_D): $(PROJ_SRC_DIR)\backends\bec.file.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.file.cpp

$(LIB_BEC_FILE_WC_ST_R): $(OBJ_BEC_FILE_WC_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_FILE_WC_ST_R)

$(OBJ_bec_file_WC__ST_R): $(PROJ_SRC_DIR)\backends\bec.file.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.file.cpp


########################################
# Backend library - 'pantheios.be.file.a'

$(LIB_BE_FILE_MT_D): $(OBJ_BE_FILE_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_FILE_MT_D)

$(OBJ_be_file__MT_D): $(PROJ_SRC_DIR)\backends\be.file.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.file.c

$(LIB_BE_FILE_MT_R): $(OBJ_BE_FILE_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_FILE_MT_R)

$(OBJ_be_file__MT_R): $(PROJ_SRC_DIR)\backends\be.file.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.file.c

$(LIB_BE_FILE_ST_D): $(OBJ_BE_FILE_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_FILE_ST_D)

$(OBJ_be_file__ST_D): $(PROJ_SRC_DIR)\backends\be.file.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.file.c

$(LIB_BE_FILE_ST_R): $(OBJ_BE_FILE_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_FILE_ST_R)

$(OBJ_be_file__ST_R): $(PROJ_SRC_DIR)\backends\be.file.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.file.c


########################################
# Backend library - 'pantheios.bel.file.a'

$(LIB_BEL_FILE_MT_D): $(OBJ_BEL_FILE_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_FILE_MT_D)

$(OBJ_bel_file__MT_D): $(PROJ_SRC_DIR)\backends\bel.file.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.file.c

$(LIB_BEL_FILE_MT_R): $(OBJ_BEL_FILE_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_FILE_MT_R)

$(OBJ_bel_file__MT_R): $(PROJ_SRC_DIR)\backends\bel.file.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.file.c

$(LIB_BEL_FILE_ST_D): $(OBJ_BEL_FILE_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_FILE_ST_D)

$(OBJ_bel_file__ST_D): $(PROJ_SRC_DIR)\backends\bel.file.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.file.c

$(LIB_BEL_FILE_ST_R): $(OBJ_BEL_FILE_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_FILE_ST_R)

$(OBJ_bel_file__ST_R): $(PROJ_SRC_DIR)\backends\bel.file.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.file.c


########################################
# Backend library - 'pantheios.ber.file.a'

$(LIB_BER_FILE_MT_D): $(OBJ_BER_FILE_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_FILE_MT_D)

$(OBJ_ber_file__MT_D): $(PROJ_SRC_DIR)\backends\ber.file.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.file.c

$(LIB_BER_FILE_MT_R): $(OBJ_BER_FILE_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_FILE_MT_R)

$(OBJ_ber_file__MT_R): $(PROJ_SRC_DIR)\backends\ber.file.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.file.c

$(LIB_BER_FILE_ST_D): $(OBJ_BER_FILE_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_FILE_ST_D)

$(OBJ_ber_file__ST_D): $(PROJ_SRC_DIR)\backends\ber.file.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.file.c

$(LIB_BER_FILE_ST_R): $(OBJ_BER_FILE_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_FILE_ST_R)

$(OBJ_ber_file__ST_R): $(PROJ_SRC_DIR)\backends\ber.file.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.file.c


########################################
# Backend library - 'pantheios.bec.fprintf.a'

$(LIB_BEC_FPRINTF_MT_D): $(OBJ_BEC_FPRINTF_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_FPRINTF_MT_D)

$(OBJ_bec_fprintf__MT_D): $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp

$(LIB_BEC_FPRINTF_MT_R): $(OBJ_BEC_FPRINTF_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_FPRINTF_MT_R)

$(OBJ_bec_fprintf__MT_R): $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp

$(LIB_BEC_FPRINTF_ST_D): $(OBJ_BEC_FPRINTF_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_FPRINTF_ST_D)

$(OBJ_bec_fprintf__ST_D): $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp

$(LIB_BEC_FPRINTF_ST_R): $(OBJ_BEC_FPRINTF_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_FPRINTF_ST_R)

$(OBJ_bec_fprintf__ST_R): $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp


########################################
# Backend library - 'pantheios.bec.fprintf.WithCallback.a'

$(LIB_BEC_FPRINTF_WC_MT_D): $(OBJ_BEC_FPRINTF_WC_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_FPRINTF_WC_MT_D)

$(OBJ_bec_fprintf_WC__MT_D): $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp

$(LIB_BEC_FPRINTF_WC_MT_R): $(OBJ_BEC_FPRINTF_WC_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_FPRINTF_WC_MT_R)

$(OBJ_bec_fprintf_WC__MT_R): $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp

$(LIB_BEC_FPRINTF_WC_ST_D): $(OBJ_BEC_FPRINTF_WC_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_FPRINTF_WC_ST_D)

$(OBJ_bec_fprintf_WC__ST_D): $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp

$(LIB_BEC_FPRINTF_WC_ST_R): $(OBJ_BEC_FPRINTF_WC_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_FPRINTF_WC_ST_R)

$(OBJ_bec_fprintf_WC__ST_R): $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp


########################################
# Backend library - 'pantheios.be.fprintf.a'

$(LIB_BE_FPRINTF_MT_D): $(OBJ_BE_FPRINTF_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_FPRINTF_MT_D)

$(OBJ_be_fprintf__MT_D): $(PROJ_SRC_DIR)\backends\be.fprintf.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.fprintf.c

$(LIB_BE_FPRINTF_MT_R): $(OBJ_BE_FPRINTF_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_FPRINTF_MT_R)

$(OBJ_be_fprintf__MT_R): $(PROJ_SRC_DIR)\backends\be.fprintf.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.fprintf.c

$(LIB_BE_FPRINTF_ST_D): $(OBJ_BE_FPRINTF_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_FPRINTF_ST_D)

$(OBJ_be_fprintf__ST_D): $(PROJ_SRC_DIR)\backends\be.fprintf.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.fprintf.c

$(LIB_BE_FPRINTF_ST_R): $(OBJ_BE_FPRINTF_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_FPRINTF_ST_R)

$(OBJ_be_fprintf__ST_R): $(PROJ_SRC_DIR)\backends\be.fprintf.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.fprintf.c


########################################
# Backend library - 'pantheios.bel.fprintf.a'

$(LIB_BEL_FPRINTF_MT_D): $(OBJ_BEL_FPRINTF_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_FPRINTF_MT_D)

$(OBJ_bel_fprintf__MT_D): $(PROJ_SRC_DIR)\backends\bel.fprintf.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.fprintf.c

$(LIB_BEL_FPRINTF_MT_R): $(OBJ_BEL_FPRINTF_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_FPRINTF_MT_R)

$(OBJ_bel_fprintf__MT_R): $(PROJ_SRC_DIR)\backends\bel.fprintf.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.fprintf.c

$(LIB_BEL_FPRINTF_ST_D): $(OBJ_BEL_FPRINTF_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_FPRINTF_ST_D)

$(OBJ_bel_fprintf__ST_D): $(PROJ_SRC_DIR)\backends\bel.fprintf.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.fprintf.c

$(LIB_BEL_FPRINTF_ST_R): $(OBJ_BEL_FPRINTF_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_FPRINTF_ST_R)

$(OBJ_bel_fprintf__ST_R): $(PROJ_SRC_DIR)\backends\bel.fprintf.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.fprintf.c


########################################
# Backend library - 'pantheios.ber.fprintf.a'

$(LIB_BER_FPRINTF_MT_D): $(OBJ_BER_FPRINTF_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_FPRINTF_MT_D)

$(OBJ_ber_fprintf__MT_D): $(PROJ_SRC_DIR)\backends\ber.fprintf.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.fprintf.c

$(LIB_BER_FPRINTF_MT_R): $(OBJ_BER_FPRINTF_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_FPRINTF_MT_R)

$(OBJ_ber_fprintf__MT_R): $(PROJ_SRC_DIR)\backends\ber.fprintf.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.fprintf.c

$(LIB_BER_FPRINTF_ST_D): $(OBJ_BER_FPRINTF_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_FPRINTF_ST_D)

$(OBJ_ber_fprintf__ST_D): $(PROJ_SRC_DIR)\backends\ber.fprintf.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.fprintf.c

$(LIB_BER_FPRINTF_ST_R): $(OBJ_BER_FPRINTF_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_FPRINTF_ST_R)

$(OBJ_ber_fprintf__ST_R): $(PROJ_SRC_DIR)\backends\ber.fprintf.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.fprintf.c


########################################
# Backend library - 'pantheios.bec.null.a'

$(LIB_BEC_NULL_MT_D): $(OBJ_BEC_NULL_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_NULL_MT_D)

$(OBJ_bec_null__MT_D): $(PROJ_SRC_DIR)\backends\bec.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.null.c

$(LIB_BEC_NULL_MT_R): $(OBJ_BEC_NULL_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_NULL_MT_R)

$(OBJ_bec_null__MT_R): $(PROJ_SRC_DIR)\backends\bec.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.null.c

$(LIB_BEC_NULL_ST_D): $(OBJ_BEC_NULL_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_NULL_ST_D)

$(OBJ_bec_null__ST_D): $(PROJ_SRC_DIR)\backends\bec.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.null.c

$(LIB_BEC_NULL_ST_R): $(OBJ_BEC_NULL_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_NULL_ST_R)

$(OBJ_bec_null__ST_R): $(PROJ_SRC_DIR)\backends\bec.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.null.c


########################################
# Backend library - 'pantheios.be.null.a'

$(LIB_BE_NULL_MT_D): $(OBJ_BE_NULL_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_NULL_MT_D)

$(OBJ_be_null__MT_D): $(PROJ_SRC_DIR)\backends\be.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.null.c

$(LIB_BE_NULL_MT_R): $(OBJ_BE_NULL_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_NULL_MT_R)

$(OBJ_be_null__MT_R): $(PROJ_SRC_DIR)\backends\be.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.null.c

$(LIB_BE_NULL_ST_D): $(OBJ_BE_NULL_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_NULL_ST_D)

$(OBJ_be_null__ST_D): $(PROJ_SRC_DIR)\backends\be.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.null.c

$(LIB_BE_NULL_ST_R): $(OBJ_BE_NULL_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_NULL_ST_R)

$(OBJ_be_null__ST_R): $(PROJ_SRC_DIR)\backends\be.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.null.c


########################################
# Backend library - 'pantheios.bel.null.a'

$(LIB_BEL_NULL_MT_D): $(OBJ_BEL_NULL_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_NULL_MT_D)

$(OBJ_bel_null__MT_D): $(PROJ_SRC_DIR)\backends\bel.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.null.c

$(LIB_BEL_NULL_MT_R): $(OBJ_BEL_NULL_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_NULL_MT_R)

$(OBJ_bel_null__MT_R): $(PROJ_SRC_DIR)\backends\bel.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.null.c

$(LIB_BEL_NULL_ST_D): $(OBJ_BEL_NULL_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_NULL_ST_D)

$(OBJ_bel_null__ST_D): $(PROJ_SRC_DIR)\backends\bel.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.null.c

$(LIB_BEL_NULL_ST_R): $(OBJ_BEL_NULL_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_NULL_ST_R)

$(OBJ_bel_null__ST_R): $(PROJ_SRC_DIR)\backends\bel.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.null.c


########################################
# Backend library - 'pantheios.ber.null.a'

$(LIB_BER_NULL_MT_D): $(OBJ_BER_NULL_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_NULL_MT_D)

$(OBJ_ber_null__MT_D): $(PROJ_SRC_DIR)\backends\ber.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.null.c

$(LIB_BER_NULL_MT_R): $(OBJ_BER_NULL_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_NULL_MT_R)

$(OBJ_ber_null__MT_R): $(PROJ_SRC_DIR)\backends\ber.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.null.c

$(LIB_BER_NULL_ST_D): $(OBJ_BER_NULL_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_NULL_ST_D)

$(OBJ_ber_null__ST_D): $(PROJ_SRC_DIR)\backends\ber.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.null.c

$(LIB_BER_NULL_ST_R): $(OBJ_BER_NULL_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_NULL_ST_R)

$(OBJ_ber_null__ST_R): $(PROJ_SRC_DIR)\backends\ber.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.null.c


########################################
# Backend library - 'pantheios.bec.ACE.a'

$(LIB_BEC_ACE_MT_D): $(OBJ_BEC_ACE_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_ACE_MT_D)

$(OBJ_bec_ACE__MT_D): $(PROJ_SRC_DIR)\backends\bec.ACE.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES_ACE) -o $@ $(PROJ_SRC_DIR)\backends\bec.ACE.cpp

$(LIB_BEC_ACE_MT_R): $(OBJ_BEC_ACE_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_ACE_MT_R)

$(OBJ_bec_ACE__MT_R): $(PROJ_SRC_DIR)\backends\bec.ACE.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES_ACE) -o $@ $(PROJ_SRC_DIR)\backends\bec.ACE.cpp


########################################
# Backend library - 'pantheios.be.ACE.a'

$(LIB_BE_ACE_MT_D): $(OBJ_BE_ACE_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_ACE_MT_D)

$(OBJ_be_ACE__MT_D): $(PROJ_SRC_DIR)\backends\be.ACE.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES_ACE) -o $@ $(PROJ_SRC_DIR)\backends\be.ACE.c

$(LIB_BE_ACE_MT_R): $(OBJ_BE_ACE_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_ACE_MT_R)

$(OBJ_be_ACE__MT_R): $(PROJ_SRC_DIR)\backends\be.ACE.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES_ACE) -o $@ $(PROJ_SRC_DIR)\backends\be.ACE.c


########################################
# Backend library - 'pantheios.bel.ACE.a'

$(LIB_BEL_ACE_MT_D): $(OBJ_BEL_ACE_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_ACE_MT_D)

$(OBJ_bel_ACE__MT_D): $(PROJ_SRC_DIR)\backends\bel.ACE.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES_ACE) -o $@ $(PROJ_SRC_DIR)\backends\bel.ACE.c

$(LIB_BEL_ACE_MT_R): $(OBJ_BEL_ACE_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_ACE_MT_R)

$(OBJ_bel_ACE__MT_R): $(PROJ_SRC_DIR)\backends\bel.ACE.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES_ACE) -o $@ $(PROJ_SRC_DIR)\backends\bel.ACE.c


########################################
# Backend library - 'pantheios.ber.ACE.a'

$(LIB_BER_ACE_MT_D): $(OBJ_BER_ACE_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_ACE_MT_D)

$(OBJ_ber_ACE__MT_D): $(PROJ_SRC_DIR)\backends\ber.ACE.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES_ACE) -o $@ $(PROJ_SRC_DIR)\backends\ber.ACE.c

$(LIB_BER_ACE_MT_R): $(OBJ_BER_ACE_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_ACE_MT_R)

$(OBJ_ber_ACE__MT_R): $(PROJ_SRC_DIR)\backends\ber.ACE.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES_ACE) -o $@ $(PROJ_SRC_DIR)\backends\ber.ACE.c


########################################
# Backend library - 'pantheios.bec.COMErrorObject.a'

$(LIB_BEC_COMERROBJ_MT_D): $(OBJ_BEC_COMERROBJ_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_COMERROBJ_MT_D)

$(OBJ_bec_COMERROBJ__MT_D): $(PROJ_SRC_DIR)\backends\bec.COMErrorObject.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.COMErrorObject.cpp

$(LIB_BEC_COMERROBJ_MT_R): $(OBJ_BEC_COMERROBJ_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_COMERROBJ_MT_R)

$(OBJ_bec_COMERROBJ__MT_R): $(PROJ_SRC_DIR)\backends\bec.COMErrorObject.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.COMErrorObject.cpp

$(LIB_BEC_COMERROBJ_ST_D): $(OBJ_BEC_COMERROBJ_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_COMERROBJ_ST_D)

$(OBJ_bec_COMERROBJ__ST_D): $(PROJ_SRC_DIR)\backends\bec.COMErrorObject.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.COMErrorObject.cpp

$(LIB_BEC_COMERROBJ_ST_R): $(OBJ_BEC_COMERROBJ_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_COMERROBJ_ST_R)

$(OBJ_bec_COMERROBJ__ST_R): $(PROJ_SRC_DIR)\backends\bec.COMErrorObject.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.COMErrorObject.cpp


########################################
# Backend library - 'pantheios.bec.COMErrorObject.WithCallback.a'

$(LIB_BEC_COMERROBJ_WC_MT_D): $(OBJ_BEC_COMERROBJ_WC_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_COMERROBJ_WC_MT_D)

$(OBJ_bec_COMERROBJ_WC__MT_D): $(PROJ_SRC_DIR)\backends\bec.COMErrorObject.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.COMErrorObject.cpp

$(LIB_BEC_COMERROBJ_WC_MT_R): $(OBJ_BEC_COMERROBJ_WC_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_COMERROBJ_WC_MT_R)

$(OBJ_bec_COMERROBJ_WC__MT_R): $(PROJ_SRC_DIR)\backends\bec.COMErrorObject.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.COMErrorObject.cpp

$(LIB_BEC_COMERROBJ_WC_ST_D): $(OBJ_BEC_COMERROBJ_WC_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_COMERROBJ_WC_ST_D)

$(OBJ_bec_COMERROBJ_WC__ST_D): $(PROJ_SRC_DIR)\backends\bec.COMErrorObject.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.COMErrorObject.cpp

$(LIB_BEC_COMERROBJ_WC_ST_R): $(OBJ_BEC_COMERROBJ_WC_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_COMERROBJ_WC_ST_R)

$(OBJ_bec_COMERROBJ_WC__ST_R): $(PROJ_SRC_DIR)\backends\bec.COMErrorObject.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.COMErrorObject.cpp


########################################
# Backend library - 'pantheios.be.COMErrorObject.a'

$(LIB_BE_COMERROBJ_MT_D): $(OBJ_BE_COMERROBJ_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_COMERROBJ_MT_D)

$(OBJ_be_COMERROBJ__MT_D): $(PROJ_SRC_DIR)\backends\be.COMErrorObject.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.COMErrorObject.c

$(LIB_BE_COMERROBJ_MT_R): $(OBJ_BE_COMERROBJ_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_COMERROBJ_MT_R)

$(OBJ_be_COMERROBJ__MT_R): $(PROJ_SRC_DIR)\backends\be.COMErrorObject.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.COMErrorObject.c

$(LIB_BE_COMERROBJ_ST_D): $(OBJ_BE_COMERROBJ_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_COMERROBJ_ST_D)

$(OBJ_be_COMERROBJ__ST_D): $(PROJ_SRC_DIR)\backends\be.COMErrorObject.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.COMErrorObject.c

$(LIB_BE_COMERROBJ_ST_R): $(OBJ_BE_COMERROBJ_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_COMERROBJ_ST_R)

$(OBJ_be_COMERROBJ__ST_R): $(PROJ_SRC_DIR)\backends\be.COMErrorObject.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.COMErrorObject.c


########################################
# Backend library - 'pantheios.bel.COMErrorObject.a'

$(LIB_BEL_COMERROBJ_MT_D): $(OBJ_BEL_COMERROBJ_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_COMERROBJ_MT_D)

$(OBJ_bel_COMERROBJ__MT_D): $(PROJ_SRC_DIR)\backends\bel.COMErrorObject.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.COMErrorObject.c

$(LIB_BEL_COMERROBJ_MT_R): $(OBJ_BEL_COMERROBJ_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_COMERROBJ_MT_R)

$(OBJ_bel_COMERROBJ__MT_R): $(PROJ_SRC_DIR)\backends\bel.COMErrorObject.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.COMErrorObject.c

$(LIB_BEL_COMERROBJ_ST_D): $(OBJ_BEL_COMERROBJ_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_COMERROBJ_ST_D)

$(OBJ_bel_COMERROBJ__ST_D): $(PROJ_SRC_DIR)\backends\bel.COMErrorObject.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.COMErrorObject.c

$(LIB_BEL_COMERROBJ_ST_R): $(OBJ_BEL_COMERROBJ_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_COMERROBJ_ST_R)

$(OBJ_bel_COMERROBJ__ST_R): $(PROJ_SRC_DIR)\backends\bel.COMErrorObject.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.COMErrorObject.c


########################################
# Backend library - 'pantheios.ber.COMErrorObject.a'

$(LIB_BER_COMERROBJ_MT_D): $(OBJ_BER_COMERROBJ_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_COMERROBJ_MT_D)

$(OBJ_ber_COMERROBJ__MT_D): $(PROJ_SRC_DIR)\backends\ber.COMErrorObject.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.COMErrorObject.c

$(LIB_BER_COMERROBJ_MT_R): $(OBJ_BER_COMERROBJ_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_COMERROBJ_MT_R)

$(OBJ_ber_COMERROBJ__MT_R): $(PROJ_SRC_DIR)\backends\ber.COMErrorObject.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.COMErrorObject.c

$(LIB_BER_COMERROBJ_ST_D): $(OBJ_BER_COMERROBJ_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_COMERROBJ_ST_D)

$(OBJ_ber_COMERROBJ__ST_D): $(PROJ_SRC_DIR)\backends\ber.COMErrorObject.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.COMErrorObject.c

$(LIB_BER_COMERROBJ_ST_R): $(OBJ_BER_COMERROBJ_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_COMERROBJ_ST_R)

$(OBJ_ber_COMERROBJ__ST_R): $(PROJ_SRC_DIR)\backends\ber.COMErrorObject.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.COMErrorObject.c


########################################
# Backend library - 'pantheios.bec.speech.a'

$(LIB_BEC_SPEECH_MT_D): $(OBJ_BEC_SPEECH_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_SPEECH_MT_D)

$(OBJ_bec_SPEECH__MT_D): $(PROJ_SRC_DIR)\backends\bec.speech.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.speech.cpp

$(LIB_BEC_SPEECH_MT_R): $(OBJ_BEC_SPEECH_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_SPEECH_MT_R)

$(OBJ_bec_SPEECH__MT_R): $(PROJ_SRC_DIR)\backends\bec.speech.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.speech.cpp

$(LIB_BEC_SPEECH_ST_D): $(OBJ_BEC_SPEECH_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_SPEECH_ST_D)

$(OBJ_bec_SPEECH__ST_D): $(PROJ_SRC_DIR)\backends\bec.speech.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.speech.cpp

$(LIB_BEC_SPEECH_ST_R): $(OBJ_BEC_SPEECH_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_SPEECH_ST_R)

$(OBJ_bec_SPEECH__ST_R): $(PROJ_SRC_DIR)\backends\bec.speech.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.speech.cpp


########################################
# Backend library - 'pantheios.bec.speech.WithCallback.a'

$(LIB_BEC_SPEECH_WC_MT_D): $(OBJ_BEC_SPEECH_WC_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_SPEECH_WC_MT_D)

$(OBJ_bec_SPEECH_WC__MT_D): $(PROJ_SRC_DIR)\backends\bec.speech.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.speech.cpp

$(LIB_BEC_SPEECH_WC_MT_R): $(OBJ_BEC_SPEECH_WC_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_SPEECH_WC_MT_R)

$(OBJ_bec_SPEECH_WC__MT_R): $(PROJ_SRC_DIR)\backends\bec.speech.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.speech.cpp

$(LIB_BEC_SPEECH_WC_ST_D): $(OBJ_BEC_SPEECH_WC_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_SPEECH_WC_ST_D)

$(OBJ_bec_SPEECH_WC__ST_D): $(PROJ_SRC_DIR)\backends\bec.speech.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.speech.cpp

$(LIB_BEC_SPEECH_WC_ST_R): $(OBJ_BEC_SPEECH_WC_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_SPEECH_WC_ST_R)

$(OBJ_bec_SPEECH_WC__ST_R): $(PROJ_SRC_DIR)\backends\bec.speech.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.speech.cpp


########################################
# Backend library - 'pantheios.be.speech.a'

$(LIB_BE_SPEECH_MT_D): $(OBJ_BE_SPEECH_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_SPEECH_MT_D)

$(OBJ_be_SPEECH__MT_D): $(PROJ_SRC_DIR)\backends\be.speech.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.speech.c

$(LIB_BE_SPEECH_MT_R): $(OBJ_BE_SPEECH_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_SPEECH_MT_R)

$(OBJ_be_SPEECH__MT_R): $(PROJ_SRC_DIR)\backends\be.speech.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.speech.c

$(LIB_BE_SPEECH_ST_D): $(OBJ_BE_SPEECH_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_SPEECH_ST_D)

$(OBJ_be_SPEECH__ST_D): $(PROJ_SRC_DIR)\backends\be.speech.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.speech.c

$(LIB_BE_SPEECH_ST_R): $(OBJ_BE_SPEECH_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_SPEECH_ST_R)

$(OBJ_be_SPEECH__ST_R): $(PROJ_SRC_DIR)\backends\be.speech.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.speech.c


########################################
# Backend library - 'pantheios.bel.speech.a'

$(LIB_BEL_SPEECH_MT_D): $(OBJ_BEL_SPEECH_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_SPEECH_MT_D)

$(OBJ_bel_SPEECH__MT_D): $(PROJ_SRC_DIR)\backends\bel.speech.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.speech.c

$(LIB_BEL_SPEECH_MT_R): $(OBJ_BEL_SPEECH_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_SPEECH_MT_R)

$(OBJ_bel_SPEECH__MT_R): $(PROJ_SRC_DIR)\backends\bel.speech.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.speech.c

$(LIB_BEL_SPEECH_ST_D): $(OBJ_BEL_SPEECH_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_SPEECH_ST_D)

$(OBJ_bel_SPEECH__ST_D): $(PROJ_SRC_DIR)\backends\bel.speech.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.speech.c

$(LIB_BEL_SPEECH_ST_R): $(OBJ_BEL_SPEECH_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_SPEECH_ST_R)

$(OBJ_bel_SPEECH__ST_R): $(PROJ_SRC_DIR)\backends\bel.speech.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.speech.c


########################################
# Backend library - 'pantheios.ber.speech.a'

$(LIB_BER_SPEECH_MT_D): $(OBJ_BER_SPEECH_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_SPEECH_MT_D)

$(OBJ_ber_SPEECH__MT_D): $(PROJ_SRC_DIR)\backends\ber.speech.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.speech.c

$(LIB_BER_SPEECH_MT_R): $(OBJ_BER_SPEECH_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_SPEECH_MT_R)

$(OBJ_ber_SPEECH__MT_R): $(PROJ_SRC_DIR)\backends\ber.speech.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.speech.c

$(LIB_BER_SPEECH_ST_D): $(OBJ_BER_SPEECH_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_SPEECH_ST_D)

$(OBJ_ber_SPEECH__ST_D): $(PROJ_SRC_DIR)\backends\ber.speech.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.speech.c

$(LIB_BER_SPEECH_ST_R): $(OBJ_BER_SPEECH_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_SPEECH_ST_R)

$(OBJ_ber_SPEECH__ST_R): $(PROJ_SRC_DIR)\backends\ber.speech.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.speech.c


########################################
# Backend library - 'pantheios.bec.WindowsEventLog.a'

$(LIB_BEC_WINEVLOG_MT_D): $(OBJ_BEC_WINEVLOG_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_WINEVLOG_MT_D)

$(OBJ_bec_WINEVLOG__MT_D): $(PROJ_SRC_DIR)\backends\bec.WindowsEventLog.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsEventLog.cpp

$(LIB_BEC_WINEVLOG_MT_R): $(OBJ_BEC_WINEVLOG_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_WINEVLOG_MT_R)

$(OBJ_bec_WINEVLOG__MT_R): $(PROJ_SRC_DIR)\backends\bec.WindowsEventLog.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsEventLog.cpp

$(LIB_BEC_WINEVLOG_ST_D): $(OBJ_BEC_WINEVLOG_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_WINEVLOG_ST_D)

$(OBJ_bec_WINEVLOG__ST_D): $(PROJ_SRC_DIR)\backends\bec.WindowsEventLog.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsEventLog.cpp

$(LIB_BEC_WINEVLOG_ST_R): $(OBJ_BEC_WINEVLOG_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_WINEVLOG_ST_R)

$(OBJ_bec_WINEVLOG__ST_R): $(PROJ_SRC_DIR)\backends\bec.WindowsEventLog.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsEventLog.cpp


########################################
# Backend library - 'pantheios.be.WindowsEventLog.a'

$(LIB_BE_WINEVLOG_MT_D): $(OBJ_BE_WINEVLOG_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_WINEVLOG_MT_D)

$(OBJ_be_WINEVLOG__MT_D): $(PROJ_SRC_DIR)\backends\be.WindowsEventLog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.WindowsEventLog.c

$(LIB_BE_WINEVLOG_MT_R): $(OBJ_BE_WINEVLOG_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_WINEVLOG_MT_R)

$(OBJ_be_WINEVLOG__MT_R): $(PROJ_SRC_DIR)\backends\be.WindowsEventLog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.WindowsEventLog.c

$(LIB_BE_WINEVLOG_ST_D): $(OBJ_BE_WINEVLOG_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_WINEVLOG_ST_D)

$(OBJ_be_WINEVLOG__ST_D): $(PROJ_SRC_DIR)\backends\be.WindowsEventLog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.WindowsEventLog.c

$(LIB_BE_WINEVLOG_ST_R): $(OBJ_BE_WINEVLOG_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_WINEVLOG_ST_R)

$(OBJ_be_WINEVLOG__ST_R): $(PROJ_SRC_DIR)\backends\be.WindowsEventLog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.WindowsEventLog.c


########################################
# Backend library - 'pantheios.bel.WindowsEventLog.a'

$(LIB_BEL_WINEVLOG_MT_D): $(OBJ_BEL_WINEVLOG_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_WINEVLOG_MT_D)

$(OBJ_bel_WINEVLOG__MT_D): $(PROJ_SRC_DIR)\backends\bel.WindowsEventLog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.WindowsEventLog.c

$(LIB_BEL_WINEVLOG_MT_R): $(OBJ_BEL_WINEVLOG_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_WINEVLOG_MT_R)

$(OBJ_bel_WINEVLOG__MT_R): $(PROJ_SRC_DIR)\backends\bel.WindowsEventLog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.WindowsEventLog.c

$(LIB_BEL_WINEVLOG_ST_D): $(OBJ_BEL_WINEVLOG_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_WINEVLOG_ST_D)

$(OBJ_bel_WINEVLOG__ST_D): $(PROJ_SRC_DIR)\backends\bel.WindowsEventLog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.WindowsEventLog.c

$(LIB_BEL_WINEVLOG_ST_R): $(OBJ_BEL_WINEVLOG_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_WINEVLOG_ST_R)

$(OBJ_bel_WINEVLOG__ST_R): $(PROJ_SRC_DIR)\backends\bel.WindowsEventLog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.WindowsEventLog.c


########################################
# Backend library - 'pantheios.ber.WindowsEventLog.a'

$(LIB_BER_WINEVLOG_MT_D): $(OBJ_BER_WINEVLOG_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_WINEVLOG_MT_D)

$(OBJ_ber_WINEVLOG__MT_D): $(PROJ_SRC_DIR)\backends\ber.WindowsEventLog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.WindowsEventLog.c

$(LIB_BER_WINEVLOG_MT_R): $(OBJ_BER_WINEVLOG_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_WINEVLOG_MT_R)

$(OBJ_ber_WINEVLOG__MT_R): $(PROJ_SRC_DIR)\backends\ber.WindowsEventLog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.WindowsEventLog.c

$(LIB_BER_WINEVLOG_ST_D): $(OBJ_BER_WINEVLOG_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_WINEVLOG_ST_D)

$(OBJ_ber_WINEVLOG__ST_D): $(PROJ_SRC_DIR)\backends\ber.WindowsEventLog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.WindowsEventLog.c

$(LIB_BER_WINEVLOG_ST_R): $(OBJ_BER_WINEVLOG_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_WINEVLOG_ST_R)

$(OBJ_ber_WINEVLOG__ST_R): $(PROJ_SRC_DIR)\backends\ber.WindowsEventLog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.WindowsEventLog.c


########################################
# Backend library - 'pantheios.bec.WindowsMessageBox.a'

$(LIB_BEC_WINMSGBX_MT_D): $(OBJ_BEC_WINMSGBX_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_WINMSGBX_MT_D)

$(OBJ_bec_WINMSGBX__MT_D): $(PROJ_SRC_DIR)\backends\bec.WindowsMessageBox.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsMessageBox.cpp

$(LIB_BEC_WINMSGBX_MT_R): $(OBJ_BEC_WINMSGBX_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_WINMSGBX_MT_R)

$(OBJ_bec_WINMSGBX__MT_R): $(PROJ_SRC_DIR)\backends\bec.WindowsMessageBox.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsMessageBox.cpp

$(LIB_BEC_WINMSGBX_ST_D): $(OBJ_BEC_WINMSGBX_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_WINMSGBX_ST_D)

$(OBJ_bec_WINMSGBX__ST_D): $(PROJ_SRC_DIR)\backends\bec.WindowsMessageBox.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsMessageBox.cpp

$(LIB_BEC_WINMSGBX_ST_R): $(OBJ_BEC_WINMSGBX_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_WINMSGBX_ST_R)

$(OBJ_bec_WINMSGBX__ST_R): $(PROJ_SRC_DIR)\backends\bec.WindowsMessageBox.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsMessageBox.cpp


########################################
# Backend library - 'pantheios.be.WindowsMessageBox.a'

$(LIB_BE_WINMSGBX_MT_D): $(OBJ_BE_WINMSGBX_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_WINMSGBX_MT_D)

$(OBJ_be_WINMSGBX__MT_D): $(PROJ_SRC_DIR)\backends\be.WindowsMessageBox.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.WindowsMessageBox.c

$(LIB_BE_WINMSGBX_MT_R): $(OBJ_BE_WINMSGBX_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_WINMSGBX_MT_R)

$(OBJ_be_WINMSGBX__MT_R): $(PROJ_SRC_DIR)\backends\be.WindowsMessageBox.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.WindowsMessageBox.c

$(LIB_BE_WINMSGBX_ST_D): $(OBJ_BE_WINMSGBX_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_WINMSGBX_ST_D)

$(OBJ_be_WINMSGBX__ST_D): $(PROJ_SRC_DIR)\backends\be.WindowsMessageBox.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.WindowsMessageBox.c

$(LIB_BE_WINMSGBX_ST_R): $(OBJ_BE_WINMSGBX_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_WINMSGBX_ST_R)

$(OBJ_be_WINMSGBX__ST_R): $(PROJ_SRC_DIR)\backends\be.WindowsMessageBox.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.WindowsMessageBox.c


########################################
# Backend library - 'pantheios.bel.WindowsMessageBox.a'

$(LIB_BEL_WINMSGBX_MT_D): $(OBJ_BEL_WINMSGBX_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_WINMSGBX_MT_D)

$(OBJ_bel_WINMSGBX__MT_D): $(PROJ_SRC_DIR)\backends\bel.WindowsMessageBox.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.WindowsMessageBox.c

$(LIB_BEL_WINMSGBX_MT_R): $(OBJ_BEL_WINMSGBX_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_WINMSGBX_MT_R)

$(OBJ_bel_WINMSGBX__MT_R): $(PROJ_SRC_DIR)\backends\bel.WindowsMessageBox.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.WindowsMessageBox.c

$(LIB_BEL_WINMSGBX_ST_D): $(OBJ_BEL_WINMSGBX_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_WINMSGBX_ST_D)

$(OBJ_bel_WINMSGBX__ST_D): $(PROJ_SRC_DIR)\backends\bel.WindowsMessageBox.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.WindowsMessageBox.c

$(LIB_BEL_WINMSGBX_ST_R): $(OBJ_BEL_WINMSGBX_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_WINMSGBX_ST_R)

$(OBJ_bel_WINMSGBX__ST_R): $(PROJ_SRC_DIR)\backends\bel.WindowsMessageBox.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.WindowsMessageBox.c


########################################
# Backend library - 'pantheios.ber.WindowsMessageBox.a'

$(LIB_BER_WINMSGBX_MT_D): $(OBJ_BER_WINMSGBX_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_WINMSGBX_MT_D)

$(OBJ_ber_WINMSGBX__MT_D): $(PROJ_SRC_DIR)\backends\ber.WindowsMessageBox.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.WindowsMessageBox.c

$(LIB_BER_WINMSGBX_MT_R): $(OBJ_BER_WINMSGBX_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_WINMSGBX_MT_R)

$(OBJ_ber_WINMSGBX__MT_R): $(PROJ_SRC_DIR)\backends\ber.WindowsMessageBox.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.WindowsMessageBox.c

$(LIB_BER_WINMSGBX_ST_D): $(OBJ_BER_WINMSGBX_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_WINMSGBX_ST_D)

$(OBJ_ber_WINMSGBX__ST_D): $(PROJ_SRC_DIR)\backends\ber.WindowsMessageBox.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.WindowsMessageBox.c

$(LIB_BER_WINMSGBX_ST_R): $(OBJ_BER_WINMSGBX_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_WINMSGBX_ST_R)

$(OBJ_ber_WINMSGBX__ST_R): $(PROJ_SRC_DIR)\backends\ber.WindowsMessageBox.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.WindowsMessageBox.c


########################################
# Backend library - 'pantheios.bec.WindowsConsole.a'

$(LIB_BEC_W32CONS_MT_D): $(OBJ_BEC_W32CONS_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_W32CONS_MT_D)

$(OBJ_bec_W32CONS__MT_D): $(PROJ_SRC_DIR)\backends\bec.WindowsConsole.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsConsole.cpp

$(LIB_BEC_W32CONS_MT_R): $(OBJ_BEC_W32CONS_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_W32CONS_MT_R)

$(OBJ_bec_W32CONS__MT_R): $(PROJ_SRC_DIR)\backends\bec.WindowsConsole.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsConsole.cpp

$(LIB_BEC_W32CONS_ST_D): $(OBJ_BEC_W32CONS_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_W32CONS_ST_D)

$(OBJ_bec_W32CONS__ST_D): $(PROJ_SRC_DIR)\backends\bec.WindowsConsole.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsConsole.cpp

$(LIB_BEC_W32CONS_ST_R): $(OBJ_BEC_W32CONS_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_W32CONS_ST_R)

$(OBJ_bec_W32CONS__ST_R): $(PROJ_SRC_DIR)\backends\bec.WindowsConsole.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsConsole.cpp


########################################
# Backend library - 'pantheios.bec.WindowsConsole.WithCallback.a'

$(LIB_BEC_W32CONS_WC_MT_D): $(OBJ_BEC_W32CONS_WC_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_W32CONS_WC_MT_D)

$(OBJ_bec_W32CONS_WC__MT_D): $(PROJ_SRC_DIR)\backends\bec.WindowsConsole.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsConsole.cpp

$(LIB_BEC_W32CONS_WC_MT_R): $(OBJ_BEC_W32CONS_WC_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_W32CONS_WC_MT_R)

$(OBJ_bec_W32CONS_WC__MT_R): $(PROJ_SRC_DIR)\backends\bec.WindowsConsole.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsConsole.cpp

$(LIB_BEC_W32CONS_WC_ST_D): $(OBJ_BEC_W32CONS_WC_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_W32CONS_WC_ST_D)

$(OBJ_bec_W32CONS_WC__ST_D): $(PROJ_SRC_DIR)\backends\bec.WindowsConsole.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsConsole.cpp

$(LIB_BEC_W32CONS_WC_ST_R): $(OBJ_BEC_W32CONS_WC_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_W32CONS_WC_ST_R)

$(OBJ_bec_W32CONS_WC__ST_R): $(PROJ_SRC_DIR)\backends\bec.WindowsConsole.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsConsole.cpp


########################################
# Backend library - 'pantheios.be.WindowsConsole.a'

$(LIB_BE_W32CONS_MT_D): $(OBJ_BE_W32CONS_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_W32CONS_MT_D)

$(OBJ_be_W32CONS__MT_D): $(PROJ_SRC_DIR)\backends\be.WindowsConsole.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.WindowsConsole.c

$(LIB_BE_W32CONS_MT_R): $(OBJ_BE_W32CONS_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_W32CONS_MT_R)

$(OBJ_be_W32CONS__MT_R): $(PROJ_SRC_DIR)\backends\be.WindowsConsole.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.WindowsConsole.c

$(LIB_BE_W32CONS_ST_D): $(OBJ_BE_W32CONS_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_W32CONS_ST_D)

$(OBJ_be_W32CONS__ST_D): $(PROJ_SRC_DIR)\backends\be.WindowsConsole.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.WindowsConsole.c

$(LIB_BE_W32CONS_ST_R): $(OBJ_BE_W32CONS_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_W32CONS_ST_R)

$(OBJ_be_W32CONS__ST_R): $(PROJ_SRC_DIR)\backends\be.WindowsConsole.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.WindowsConsole.c


########################################
# Backend library - 'pantheios.bel.WindowsConsole.a'

$(LIB_BEL_W32CONS_MT_D): $(OBJ_BEL_W32CONS_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_W32CONS_MT_D)

$(OBJ_bel_W32CONS__MT_D): $(PROJ_SRC_DIR)\backends\bel.WindowsConsole.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.WindowsConsole.c

$(LIB_BEL_W32CONS_MT_R): $(OBJ_BEL_W32CONS_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_W32CONS_MT_R)

$(OBJ_bel_W32CONS__MT_R): $(PROJ_SRC_DIR)\backends\bel.WindowsConsole.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.WindowsConsole.c

$(LIB_BEL_W32CONS_ST_D): $(OBJ_BEL_W32CONS_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_W32CONS_ST_D)

$(OBJ_bel_W32CONS__ST_D): $(PROJ_SRC_DIR)\backends\bel.WindowsConsole.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.WindowsConsole.c

$(LIB_BEL_W32CONS_ST_R): $(OBJ_BEL_W32CONS_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_W32CONS_ST_R)

$(OBJ_bel_W32CONS__ST_R): $(PROJ_SRC_DIR)\backends\bel.WindowsConsole.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.WindowsConsole.c


########################################
# Backend library - 'pantheios.ber.WindowsConsole.a'

$(LIB_BER_W32CONS_MT_D): $(OBJ_BER_W32CONS_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_W32CONS_MT_D)

$(OBJ_ber_W32CONS__MT_D): $(PROJ_SRC_DIR)\backends\ber.WindowsConsole.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.WindowsConsole.c

$(LIB_BER_W32CONS_MT_R): $(OBJ_BER_W32CONS_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_W32CONS_MT_R)

$(OBJ_ber_W32CONS__MT_R): $(PROJ_SRC_DIR)\backends\ber.WindowsConsole.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.WindowsConsole.c

$(LIB_BER_W32CONS_ST_D): $(OBJ_BER_W32CONS_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_W32CONS_ST_D)

$(OBJ_ber_W32CONS__ST_D): $(PROJ_SRC_DIR)\backends\ber.WindowsConsole.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.WindowsConsole.c

$(LIB_BER_W32CONS_ST_R): $(OBJ_BER_W32CONS_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_W32CONS_ST_R)

$(OBJ_ber_W32CONS__ST_R): $(PROJ_SRC_DIR)\backends\ber.WindowsConsole.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.WindowsConsole.c


########################################
# Backend library - 'pantheios.bec.WindowsDebugger.a'

$(LIB_BEC_W32DBGR_MT_D): $(OBJ_BEC_W32DBGR_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_W32DBGR_MT_D)

$(OBJ_bec_W32DBGR__MT_D): $(PROJ_SRC_DIR)\backends\bec.WindowsDebugger.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsDebugger.cpp

$(LIB_BEC_W32DBGR_MT_R): $(OBJ_BEC_W32DBGR_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_W32DBGR_MT_R)

$(OBJ_bec_W32DBGR__MT_R): $(PROJ_SRC_DIR)\backends\bec.WindowsDebugger.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsDebugger.cpp

$(LIB_BEC_W32DBGR_ST_D): $(OBJ_BEC_W32DBGR_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_W32DBGR_ST_D)

$(OBJ_bec_W32DBGR__ST_D): $(PROJ_SRC_DIR)\backends\bec.WindowsDebugger.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsDebugger.cpp

$(LIB_BEC_W32DBGR_ST_R): $(OBJ_BEC_W32DBGR_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_W32DBGR_ST_R)

$(OBJ_bec_W32DBGR__ST_R): $(PROJ_SRC_DIR)\backends\bec.WindowsDebugger.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsDebugger.cpp


########################################
# Backend library - 'pantheios.bec.WindowsDebugger.WithCallback.a'

$(LIB_BEC_W32DBGR_WC_MT_D): $(OBJ_BEC_W32DBGR_WC_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_W32DBGR_WC_MT_D)

$(OBJ_bec_W32DBGR_WC__MT_D): $(PROJ_SRC_DIR)\backends\bec.WindowsDebugger.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsDebugger.cpp

$(LIB_BEC_W32DBGR_WC_MT_R): $(OBJ_BEC_W32DBGR_WC_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_W32DBGR_WC_MT_R)

$(OBJ_bec_W32DBGR_WC__MT_R): $(PROJ_SRC_DIR)\backends\bec.WindowsDebugger.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsDebugger.cpp

$(LIB_BEC_W32DBGR_WC_ST_D): $(OBJ_BEC_W32DBGR_WC_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_W32DBGR_WC_ST_D)

$(OBJ_bec_W32DBGR_WC__ST_D): $(PROJ_SRC_DIR)\backends\bec.WindowsDebugger.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsDebugger.cpp

$(LIB_BEC_W32DBGR_WC_ST_R): $(OBJ_BEC_W32DBGR_WC_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_W32DBGR_WC_ST_R)

$(OBJ_bec_W32DBGR_WC__ST_R): $(PROJ_SRC_DIR)\backends\bec.WindowsDebugger.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsDebugger.cpp


########################################
# Backend library - 'pantheios.be.WindowsDebugger.a'

$(LIB_BE_W32DBGR_MT_D): $(OBJ_BE_W32DBGR_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_W32DBGR_MT_D)

$(OBJ_be_W32DBGR__MT_D): $(PROJ_SRC_DIR)\backends\be.WindowsDebugger.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.WindowsDebugger.c

$(LIB_BE_W32DBGR_MT_R): $(OBJ_BE_W32DBGR_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_W32DBGR_MT_R)

$(OBJ_be_W32DBGR__MT_R): $(PROJ_SRC_DIR)\backends\be.WindowsDebugger.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.WindowsDebugger.c

$(LIB_BE_W32DBGR_ST_D): $(OBJ_BE_W32DBGR_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_W32DBGR_ST_D)

$(OBJ_be_W32DBGR__ST_D): $(PROJ_SRC_DIR)\backends\be.WindowsDebugger.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.WindowsDebugger.c

$(LIB_BE_W32DBGR_ST_R): $(OBJ_BE_W32DBGR_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_W32DBGR_ST_R)

$(OBJ_be_W32DBGR__ST_R): $(PROJ_SRC_DIR)\backends\be.WindowsDebugger.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.WindowsDebugger.c


########################################
# Backend library - 'pantheios.bel.WindowsDebugger.a'

$(LIB_BEL_W32DBGR_MT_D): $(OBJ_BEL_W32DBGR_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_W32DBGR_MT_D)

$(OBJ_bel_W32DBGR__MT_D): $(PROJ_SRC_DIR)\backends\bel.WindowsDebugger.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.WindowsDebugger.c

$(LIB_BEL_W32DBGR_MT_R): $(OBJ_BEL_W32DBGR_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_W32DBGR_MT_R)

$(OBJ_bel_W32DBGR__MT_R): $(PROJ_SRC_DIR)\backends\bel.WindowsDebugger.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.WindowsDebugger.c

$(LIB_BEL_W32DBGR_ST_D): $(OBJ_BEL_W32DBGR_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_W32DBGR_ST_D)

$(OBJ_bel_W32DBGR__ST_D): $(PROJ_SRC_DIR)\backends\bel.WindowsDebugger.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.WindowsDebugger.c

$(LIB_BEL_W32DBGR_ST_R): $(OBJ_BEL_W32DBGR_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_W32DBGR_ST_R)

$(OBJ_bel_W32DBGR__ST_R): $(PROJ_SRC_DIR)\backends\bel.WindowsDebugger.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.WindowsDebugger.c


########################################
# Backend library - 'pantheios.ber.WindowsDebugger.a'

$(LIB_BER_W32DBGR_MT_D): $(OBJ_BER_W32DBGR_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_W32DBGR_MT_D)

$(OBJ_ber_W32DBGR__MT_D): $(PROJ_SRC_DIR)\backends\ber.WindowsDebugger.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.WindowsDebugger.c

$(LIB_BER_W32DBGR_MT_R): $(OBJ_BER_W32DBGR_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_W32DBGR_MT_R)

$(OBJ_ber_W32DBGR__MT_R): $(PROJ_SRC_DIR)\backends\ber.WindowsDebugger.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.WindowsDebugger.c

$(LIB_BER_W32DBGR_ST_D): $(OBJ_BER_W32DBGR_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_W32DBGR_ST_D)

$(OBJ_ber_W32DBGR__ST_D): $(PROJ_SRC_DIR)\backends\ber.WindowsDebugger.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.WindowsDebugger.c

$(LIB_BER_W32DBGR_ST_R): $(OBJ_BER_W32DBGR_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_W32DBGR_ST_R)

$(OBJ_ber_W32DBGR__ST_R): $(PROJ_SRC_DIR)\backends\ber.WindowsDebugger.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.WindowsDebugger.c


########################################
# Backend library - 'pantheios.bec.WindowsSyslog.a'

$(LIB_BEC_W32SYSLOG_MT_D): $(OBJ_BEC_W32SYSLOG_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_W32SYSLOG_MT_D)

$(OBJ_bec_W32SYSLOG__MT_D): $(PROJ_SRC_DIR)\backends\bec.WindowsSyslog.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsSyslog.cpp

$(LIB_BEC_W32SYSLOG_MT_R): $(OBJ_BEC_W32SYSLOG_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_W32SYSLOG_MT_R)

$(OBJ_bec_W32SYSLOG__MT_R): $(PROJ_SRC_DIR)\backends\bec.WindowsSyslog.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsSyslog.cpp

$(LIB_BEC_W32SYSLOG_ST_D): $(OBJ_BEC_W32SYSLOG_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_W32SYSLOG_ST_D)

$(OBJ_bec_W32SYSLOG__ST_D): $(PROJ_SRC_DIR)\backends\bec.WindowsSyslog.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsSyslog.cpp

$(LIB_BEC_W32SYSLOG_ST_R): $(OBJ_BEC_W32SYSLOG_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_W32SYSLOG_ST_R)

$(OBJ_bec_W32SYSLOG__ST_R): $(PROJ_SRC_DIR)\backends\bec.WindowsSyslog.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsSyslog.cpp


########################################
# Backend library - 'pantheios.bec.WindowsSyslog.WithCallback.a'

$(LIB_BEC_W32SYSLOG_WC_MT_D): $(OBJ_BEC_W32SYSLOG_WC_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_W32SYSLOG_WC_MT_D)

$(OBJ_bec_W32SYSLOG_WC__MT_D): $(PROJ_SRC_DIR)\backends\bec.WindowsSyslog.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsSyslog.cpp

$(LIB_BEC_W32SYSLOG_WC_MT_R): $(OBJ_BEC_W32SYSLOG_WC_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_W32SYSLOG_WC_MT_R)

$(OBJ_bec_W32SYSLOG_WC__MT_R): $(PROJ_SRC_DIR)\backends\bec.WindowsSyslog.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsSyslog.cpp

$(LIB_BEC_W32SYSLOG_WC_ST_D): $(OBJ_BEC_W32SYSLOG_WC_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_W32SYSLOG_WC_ST_D)

$(OBJ_bec_W32SYSLOG_WC__ST_D): $(PROJ_SRC_DIR)\backends\bec.WindowsSyslog.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsSyslog.cpp

$(LIB_BEC_W32SYSLOG_WC_ST_R): $(OBJ_BEC_W32SYSLOG_WC_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEC_W32SYSLOG_WC_ST_R)

$(OBJ_bec_W32SYSLOG_WC__ST_R): $(PROJ_SRC_DIR)\backends\bec.WindowsSyslog.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bec.WindowsSyslog.cpp


########################################
# Backend library - 'pantheios.be.WindowsSyslog.a'

$(LIB_BE_W32SYSLOG_MT_D): $(OBJ_BE_W32SYSLOG_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_W32SYSLOG_MT_D)

$(OBJ_be_W32SYSLOG__MT_D): $(PROJ_SRC_DIR)\backends\be.WindowsSyslog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.WindowsSyslog.c

$(LIB_BE_W32SYSLOG_MT_R): $(OBJ_BE_W32SYSLOG_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_W32SYSLOG_MT_R)

$(OBJ_be_W32SYSLOG__MT_R): $(PROJ_SRC_DIR)\backends\be.WindowsSyslog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.WindowsSyslog.c

$(LIB_BE_W32SYSLOG_ST_D): $(OBJ_BE_W32SYSLOG_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_W32SYSLOG_ST_D)

$(OBJ_be_W32SYSLOG__ST_D): $(PROJ_SRC_DIR)\backends\be.WindowsSyslog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.WindowsSyslog.c

$(LIB_BE_W32SYSLOG_ST_R): $(OBJ_BE_W32SYSLOG_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BE_W32SYSLOG_ST_R)

$(OBJ_be_W32SYSLOG__ST_R): $(PROJ_SRC_DIR)\backends\be.WindowsSyslog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\be.WindowsSyslog.c


########################################
# Backend library - 'pantheios.bel.WindowsSyslog.a'

$(LIB_BEL_W32SYSLOG_MT_D): $(OBJ_BEL_W32SYSLOG_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_W32SYSLOG_MT_D)

$(OBJ_bel_W32SYSLOG__MT_D): $(PROJ_SRC_DIR)\backends\bel.WindowsSyslog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.WindowsSyslog.c

$(LIB_BEL_W32SYSLOG_MT_R): $(OBJ_BEL_W32SYSLOG_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_W32SYSLOG_MT_R)

$(OBJ_bel_W32SYSLOG__MT_R): $(PROJ_SRC_DIR)\backends\bel.WindowsSyslog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.WindowsSyslog.c

$(LIB_BEL_W32SYSLOG_ST_D): $(OBJ_BEL_W32SYSLOG_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_W32SYSLOG_ST_D)

$(OBJ_bel_W32SYSLOG__ST_D): $(PROJ_SRC_DIR)\backends\bel.WindowsSyslog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.WindowsSyslog.c

$(LIB_BEL_W32SYSLOG_ST_R): $(OBJ_BEL_W32SYSLOG_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BEL_W32SYSLOG_ST_R)

$(OBJ_bel_W32SYSLOG__ST_R): $(PROJ_SRC_DIR)\backends\bel.WindowsSyslog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\bel.WindowsSyslog.c


########################################
# Backend library - 'pantheios.ber.WindowsSyslog.a'

$(LIB_BER_W32SYSLOG_MT_D): $(OBJ_BER_W32SYSLOG_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_W32SYSLOG_MT_D)

$(OBJ_ber_W32SYSLOG__MT_D): $(PROJ_SRC_DIR)\backends\ber.WindowsSyslog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.WindowsSyslog.c

$(LIB_BER_W32SYSLOG_MT_R): $(OBJ_BER_W32SYSLOG_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_W32SYSLOG_MT_R)

$(OBJ_ber_W32SYSLOG__MT_R): $(PROJ_SRC_DIR)\backends\ber.WindowsSyslog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.WindowsSyslog.c

$(LIB_BER_W32SYSLOG_ST_D): $(OBJ_BER_W32SYSLOG_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_W32SYSLOG_ST_D)

$(OBJ_ber_W32SYSLOG__ST_D): $(PROJ_SRC_DIR)\backends\ber.WindowsSyslog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.WindowsSyslog.c

$(LIB_BER_W32SYSLOG_ST_R): $(OBJ_BER_W32SYSLOG_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_BER_W32SYSLOG_ST_R)

$(OBJ_ber_W32SYSLOG__ST_R): $(PROJ_SRC_DIR)\backends\ber.WindowsSyslog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\backends\ber.WindowsSyslog.c

########################################
# Front-end library - 'pantheios.fe.all.a'

$(LIB_FE_ALL_MT_D): $(OBJ_FE_ALL_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_FE_ALL_MT_D)

$(OBJ_fe_all__MT_D): $(PROJ_SRC_DIR)\frontends\fe.all.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\frontends\fe.all.c

$(LIB_FE_ALL_MT_R): $(OBJ_FE_ALL_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_FE_ALL_MT_R)

$(OBJ_fe_all__MT_R): $(PROJ_SRC_DIR)\frontends\fe.all.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\frontends\fe.all.c

$(LIB_FE_ALL_ST_D): $(OBJ_FE_ALL_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_FE_ALL_ST_D)

$(OBJ_fe_all__ST_D): $(PROJ_SRC_DIR)\frontends\fe.all.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\frontends\fe.all.c

$(LIB_FE_ALL_ST_R): $(OBJ_FE_ALL_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_FE_ALL_ST_R)

$(OBJ_fe_all__ST_R): $(PROJ_SRC_DIR)\frontends\fe.all.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\frontends\fe.all.c

########################################
# Front-end library - 'pantheios.fe.fail.a'

$(LIB_FE_FAIL_MT_D): $(OBJ_FE_FAIL_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_FE_FAIL_MT_D)

$(OBJ_fe_fail__MT_D): $(PROJ_SRC_DIR)\frontends\fe.fail.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\frontends\fe.fail.c

$(LIB_FE_FAIL_MT_R): $(OBJ_FE_FAIL_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_FE_FAIL_MT_R)

$(OBJ_fe_fail__MT_R): $(PROJ_SRC_DIR)\frontends\fe.fail.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\frontends\fe.fail.c

$(LIB_FE_FAIL_ST_D): $(OBJ_FE_FAIL_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_FE_FAIL_ST_D)

$(OBJ_fe_fail__ST_D): $(PROJ_SRC_DIR)\frontends\fe.fail.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\frontends\fe.fail.c

$(LIB_FE_FAIL_ST_R): $(OBJ_FE_FAIL_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_FE_FAIL_ST_R)

$(OBJ_fe_fail__ST_R): $(PROJ_SRC_DIR)\frontends\fe.fail.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\frontends\fe.fail.c

########################################
# Front-end library - 'pantheios.fe.N.a'

$(LIB_FE_N_MT_D): $(OBJ_FE_N_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_FE_N_MT_D)

$(OBJ_fe_N__MT_D): $(PROJ_SRC_DIR)\frontends\fe.N.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\frontends\fe.N.c

$(LIB_FE_N_MT_R): $(OBJ_FE_N_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_FE_N_MT_R)

$(OBJ_fe_N__MT_R): $(PROJ_SRC_DIR)\frontends\fe.N.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\frontends\fe.N.c

$(LIB_FE_N_ST_D): $(OBJ_FE_N_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_FE_N_ST_D)

$(OBJ_fe_N__ST_D): $(PROJ_SRC_DIR)\frontends\fe.N.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\frontends\fe.N.c

$(LIB_FE_N_ST_R): $(OBJ_FE_N_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_FE_N_ST_R)

$(OBJ_fe_N__ST_R): $(PROJ_SRC_DIR)\frontends\fe.N.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\frontends\fe.N.c

########################################
# Front-end library - 'pantheios.fe.null.a'

$(LIB_FE_NULL_MT_D): $(OBJ_FE_NULL_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_FE_NULL_MT_D)

$(OBJ_fe_null__MT_D): $(PROJ_SRC_DIR)\frontends\fe.null.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\frontends\fe.null.c

$(LIB_FE_NULL_MT_R): $(OBJ_FE_NULL_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_FE_NULL_MT_R)

$(OBJ_fe_null__MT_R): $(PROJ_SRC_DIR)\frontends\fe.null.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\frontends\fe.null.c

$(LIB_FE_NULL_ST_D): $(OBJ_FE_NULL_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_FE_NULL_ST_D)

$(OBJ_fe_null__ST_D): $(PROJ_SRC_DIR)\frontends\fe.null.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\frontends\fe.null.c

$(LIB_FE_NULL_ST_R): $(OBJ_FE_NULL_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_FE_NULL_ST_R)

$(OBJ_fe_null__ST_R): $(PROJ_SRC_DIR)\frontends\fe.null.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\frontends\fe.null.c

########################################
# Front-end library - 'pantheios.fe.simple.a'

$(LIB_FE_SIMPLE_MT_D): $(OBJ_FE_SIMPLE_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_FE_SIMPLE_MT_D)

$(OBJ_fe_simple__MT_D): $(PROJ_SRC_DIR)\frontends\fe.simple.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\frontends\fe.simple.c

$(LIB_FE_SIMPLE_MT_R): $(OBJ_FE_SIMPLE_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_FE_SIMPLE_MT_R)

$(OBJ_fe_simple__MT_R): $(PROJ_SRC_DIR)\frontends\fe.simple.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\frontends\fe.simple.c

$(LIB_FE_SIMPLE_ST_D): $(OBJ_FE_SIMPLE_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_FE_SIMPLE_ST_D)

$(OBJ_fe_simple__ST_D): $(PROJ_SRC_DIR)\frontends\fe.simple.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\frontends\fe.simple.c

$(LIB_FE_SIMPLE_ST_R): $(OBJ_FE_SIMPLE_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_FE_SIMPLE_ST_R)

$(OBJ_fe_simple__ST_R): $(PROJ_SRC_DIR)\frontends\fe.simple.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\frontends\fe.simple.c

########################################
# Front-end library - 'pantheios.fe.WindowsRegistry.a'

$(LIB_FE_WINREG_MT_D): $(OBJ_FE_WINREG_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_FE_WINREG_MT_D)

$(OBJ_fe_winreg__MT_D): $(PROJ_SRC_DIR)\frontends\fe.WindowsRegistry.cpp $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\frontends\fe.WindowsRegistry.cpp

$(LIB_FE_WINREG_MT_R): $(OBJ_FE_WINREG_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_FE_WINREG_MT_R)

$(OBJ_fe_winreg__MT_R): $(PROJ_SRC_DIR)\frontends\fe.WindowsRegistry.cpp $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\frontends\fe.WindowsRegistry.cpp

$(LIB_FE_WINREG_ST_D): $(OBJ_FE_WINREG_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_FE_WINREG_ST_D)

$(OBJ_fe_winreg__ST_D): $(PROJ_SRC_DIR)\frontends\fe.WindowsRegistry.cpp $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\frontends\fe.WindowsRegistry.cpp

$(LIB_FE_WINREG_ST_R): $(OBJ_FE_WINREG_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_FE_WINREG_ST_R)

$(OBJ_fe_winreg__ST_R): $(PROJ_SRC_DIR)\frontends\fe.WindowsRegistry.cpp $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_SRC_DIR)\frontends\fe.WindowsRegistry.cpp


########################################
# b64 library - 'b64.X.pan.core.a'

$(LIB_B64_MT_D): $(OBJ_B64_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_B64_MT_D)

$(OBJ_b64_b64_MT_D): $(B64_SRC_DIR)\b64.c $(B64_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_B64_ARGS_MT_D) $(CC_B64_INCLUDES_MT_D) -o $@ $(B64_SRC_DIR)\b64.c

$(LIB_B64_MT_R): $(OBJ_B64_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_B64_MT_R)

$(OBJ_b64_b64_MT_R): $(B64_SRC_DIR)\b64.c $(B64_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_B64_ARGS_MT_R) $(CC_B64_INCLUDES_MT_R) -o $@ $(B64_SRC_DIR)\b64.c

$(LIB_B64_ST_D): $(OBJ_B64_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_B64_ST_D)

$(OBJ_b64_b64_ST_D): $(B64_SRC_DIR)\b64.c $(B64_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_B64_ARGS_ST_D) $(CC_B64_INCLUDES_ST_D) -o $@ $(B64_SRC_DIR)\b64.c

$(LIB_B64_ST_R): $(OBJ_B64_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_B64_ST_R)

$(OBJ_b64_b64_ST_R): $(B64_SRC_DIR)\b64.c $(B64_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_B64_ARGS_ST_R) $(CC_B64_INCLUDES_ST_R) -o $@ $(B64_SRC_DIR)\b64.c

########################################
# shwild library - 'shwild.X.pan.core.a'

$(LIB_SHWILD_MT_D): $(OBJ_SHWILD_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_SHWILD_MT_D)

$(OBJ_shw_api_MT_D): $(SHWILD_SRC_DIR)\api.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_MT_D) $(CPPC_SHWILD_INCLUDES_MT_D) -o $@ $(SHWILD_SRC_DIR)\api.cpp
$(OBJ_shw_matches_MT_D): $(SHWILD_SRC_DIR)\matches.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_MT_D) $(CPPC_SHWILD_INCLUDES_MT_D) -o $@ $(SHWILD_SRC_DIR)\matches.cpp
$(OBJ_shw_pattern_MT_D): $(SHWILD_SRC_DIR)\pattern.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_MT_D) $(CPPC_SHWILD_INCLUDES_MT_D) -o $@ $(SHWILD_SRC_DIR)\pattern.cpp

$(LIB_SHWILD_MT_R): $(OBJ_SHWILD_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_SHWILD_MT_R)

$(OBJ_shw_api_MT_R): $(SHWILD_SRC_DIR)\api.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_MT_R) $(CPPC_SHWILD_INCLUDES_MT_R) -o $@ $(SHWILD_SRC_DIR)\api.cpp
$(OBJ_shw_matches_MT_R): $(SHWILD_SRC_DIR)\matches.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_MT_R) $(CPPC_SHWILD_INCLUDES_MT_R) -o $@ $(SHWILD_SRC_DIR)\matches.cpp
$(OBJ_shw_pattern_MT_R): $(SHWILD_SRC_DIR)\pattern.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_MT_R) $(CPPC_SHWILD_INCLUDES_MT_R) -o $@ $(SHWILD_SRC_DIR)\pattern.cpp

$(LIB_SHWILD_ST_D): $(OBJ_SHWILD_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_SHWILD_ST_D)

$(OBJ_shw_api_ST_D): $(SHWILD_SRC_DIR)\api.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_ST_D) $(CPPC_SHWILD_INCLUDES_ST_D) -o $@ $(SHWILD_SRC_DIR)\api.cpp
$(OBJ_shw_matches_ST_D): $(SHWILD_SRC_DIR)\matches.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_ST_D) $(CPPC_SHWILD_INCLUDES_ST_D) -o $@ $(SHWILD_SRC_DIR)\matches.cpp
$(OBJ_shw_pattern_ST_D): $(SHWILD_SRC_DIR)\pattern.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_ST_D) $(CPPC_SHWILD_INCLUDES_ST_D) -o $@ $(SHWILD_SRC_DIR)\pattern.cpp

$(LIB_SHWILD_ST_R): $(OBJ_SHWILD_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_SHWILD_ST_R)

$(OBJ_shw_api_ST_R): $(SHWILD_SRC_DIR)\api.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_ST_R) $(CPPC_SHWILD_INCLUDES_ST_R) -o $@ $(SHWILD_SRC_DIR)\api.cpp
$(OBJ_shw_matches_ST_R): $(SHWILD_SRC_DIR)\matches.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_ST_R) $(CPPC_SHWILD_INCLUDES_ST_R) -o $@ $(SHWILD_SRC_DIR)\matches.cpp
$(OBJ_shw_pattern_ST_R): $(SHWILD_SRC_DIR)\pattern.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_ST_R) $(CPPC_SHWILD_INCLUDES_ST_R) -o $@ $(SHWILD_SRC_DIR)\pattern.cpp

########################################
# xTests library - 'xtests.X.pan.core.a'

$(LIB_XTESTS_MT_D): $(OBJ_XTESTS_MT_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_XTESTS_MT_D)

$(OBJ_xts_core_MT_D): $(XTESTS_SRC_DIR)\xtests.core.cpp $(XTESTS_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_XTESTS_ARGS_MT_D) $(CPPC_XTESTS_INCLUDES_MT_D) -o $@ $(XTESTS_SRC_DIR)\xtests.core.cpp

$(LIB_XTESTS_MT_R): $(OBJ_XTESTS_MT_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_XTESTS_MT_R)

$(OBJ_xts_core_MT_R): $(XTESTS_SRC_DIR)\xtests.core.cpp $(XTESTS_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_XTESTS_ARGS_MT_R) $(CPPC_XTESTS_INCLUDES_MT_R) -o $@ $(XTESTS_SRC_DIR)\xtests.core.cpp

$(LIB_XTESTS_ST_D): $(OBJ_XTESTS_ST_D) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_XTESTS_ST_D)

$(OBJ_xts_core_ST_D): $(XTESTS_SRC_DIR)\xtests.core.cpp $(XTESTS_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_XTESTS_ARGS_ST_D) $(CPPC_XTESTS_INCLUDES_ST_D) -o $@ $(XTESTS_SRC_DIR)\xtests.core.cpp

$(LIB_XTESTS_ST_R): $(OBJ_XTESTS_ST_R) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) -r $@ $(OBJ_XTESTS_ST_R)

$(OBJ_xts_core_ST_R): $(XTESTS_SRC_DIR)\xtests.core.cpp $(XTESTS_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_XTESTS_ARGS_ST_R) $(CPPC_XTESTS_INCLUDES_ST_R) -o $@ $(XTESTS_SRC_DIR)\xtests.core.cpp

##################################################
# Examples

#  object files

$(OBJ_EX_CPP_0_MT_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.101\example.cpp.101.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.101\example.cpp.101.cpp
$(OBJ_EX_CPP_1_MT_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.strings\example.cpp.strings.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.strings\example.cpp.strings.cpp
$(OBJ_EX_CPP_2_MT_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.integer\example.cpp.integer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.integer\example.cpp.integer.cpp
$(OBJ_EX_CPP_3_MT_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pointer\example.cpp.pointer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pointer\example.cpp.pointer.cpp
$(OBJ_EX_CPP_4_MT_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.real\example.cpp.real.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.real\example.cpp.real.cpp
$(OBJ_EX_CPP_5_MT_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.blob\example.cpp.blob.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.blob\example.cpp.blob.cpp
$(OBJ_EX_CPP_6_MT_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hetero1\example.cpp.hetero1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hetero1\example.cpp.hetero1.cpp
$(OBJ_EX_CPP_7_MT_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.character\example.cpp.character.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.character\example.cpp.character.cpp
$(OBJ_EX_CPP_8_MT_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.implicit_link_1\example.cpp.implicit_link_1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.implicit_link_1\example.cpp.implicit_link_1.cpp
$(OBJ_EX_CPP_9_MT_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_severity_levels\example.cpp.custom_severity_levels.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_severity_levels\example.cpp.custom_severity_levels.cpp
$(OBJ_EX_CPP_10_MT_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.callback_be\example.cpp.callback_be.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.callback_be\example.cpp.callback_be.cpp
$(OBJ_EX_CPP_11_MT_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_fe\example.cpp.custom_fe.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_fe\example.cpp.custom_fe.cpp
$(OBJ_EX_CPP_12_MT_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_type_1\example.cpp.custom_type_1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_type_1\example.cpp.custom_type_1.cpp
$(OBJ_EX_CPP_13_MT_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.process_id\example.cpp.process_id.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.process_id\example.cpp.process_id.cpp
$(OBJ_EX_CPP_14_MT_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.thread_id\example.cpp.thread_id.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.thread_id\example.cpp.thread_id.cpp
$(OBJ_EX_CPP_15_MT_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.args\example.cpp.args.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.args\example.cpp.args.cpp
$(OBJ_EX_CPP_16_MT_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.file\example.cpp.file.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.file\example.cpp.file.cpp
$(OBJ_EX_CPP_17_MT_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.tracing\example.cpp.tracing.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.tracing\example.cpp.tracing.cpp
$(OBJ_EX_CPP_18_MT_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.highres\example.cpp.highres.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.highres\example.cpp.highres.cpp
$(OBJ_EX_CPP_19_MT_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.lowres\example.cpp.lowres.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.lowres\example.cpp.lowres.cpp
$(OBJ_EX_CPP_20_MT_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.b64\example.cpp.b64.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.b64\example.cpp.b64.cpp
$(OBJ_EX_CPP_21_MT_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.api.no_namespace\example.cpp.api.no_namespace.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.api.no_namespace\example.cpp.api.no_namespace.cpp
$(OBJ_EX_CPP_22_MT_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.tracing.with_function\example.cpp.tracing.with_function.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.tracing.with_function\example.cpp.tracing.with_function.cpp
$(OBJ_EX_CPP_23_MT_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.1\example.cpp.mx.1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.1\example.cpp.mx.1.cpp
$(OBJ_EX_CPP_24_MT_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.2\example.cpp.mx.2.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.2\example.cpp.mx.2.cpp
$(OBJ_EX_CPP_25_MT_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hex_ptr\example.cpp.hex_ptr.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hex_ptr\example.cpp.hex_ptr.cpp
$(OBJ_EX_CPP_26_MT_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.assert\example.cpp.assert.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.assert\example.cpp.assert.cpp
$(OBJ_EX_CPP_27_MT_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pad\example.cpp.pad.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pad\example.cpp.pad.cpp
$(OBJ_EX_C_0_MT_D):	$(PROJ_EXAMPLES_DIR)\c\example.c.101\example.c.101.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.101\example.c.101.c
$(OBJ_EX_C_1_MT_D):	$(PROJ_EXAMPLES_DIR)\c\example.c.log_n\example.c.log_n.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.log_n\example.c.log_n.c
$(OBJ_EX_C_2_MT_D):	$(PROJ_EXAMPLES_DIR)\c\example.c.core.pantheios_logprintf\example.c.core.pantheios_logprintf.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.core.pantheios_logprintf\example.c.core.pantheios_logprintf.c
$(OBJ_EX_C_3_MT_D):	$(PROJ_EXAMPLES_DIR)\c\example.c.N\example.c.N.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.N\example.c.N.c
$(OBJ_EX_C_4_MT_D):	$(PROJ_EXAMPLES_DIR)\c\example.c.gethostname\example.c.gethostname.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.gethostname\example.c.gethostname.c
$(OBJ_EX_C_5_MT_D):	$(PROJ_EXAMPLES_DIR)\c\example.c.getcurrenttime\example.c.getcurrenttime.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.getcurrenttime\example.c.getcurrenttime.c
$(OBJ_EX_C_6_MT_D):	$(PROJ_EXAMPLES_DIR)\c\example.c.assert\example.c.assert.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.assert\example.c.assert.c
$(OBJ_EX_C_7_MT_D):	$(PROJ_EXAMPLES_DIR)\c\example.c.extended_severity\example.c.extended_severity.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.extended_severity\example.c.extended_severity.c

$(OBJ_EX_CPP_0_MT_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.101\example.cpp.101.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.101\example.cpp.101.cpp
$(OBJ_EX_CPP_1_MT_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.strings\example.cpp.strings.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.strings\example.cpp.strings.cpp
$(OBJ_EX_CPP_2_MT_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.integer\example.cpp.integer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.integer\example.cpp.integer.cpp
$(OBJ_EX_CPP_3_MT_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pointer\example.cpp.pointer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pointer\example.cpp.pointer.cpp
$(OBJ_EX_CPP_4_MT_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.real\example.cpp.real.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.real\example.cpp.real.cpp
$(OBJ_EX_CPP_5_MT_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.blob\example.cpp.blob.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.blob\example.cpp.blob.cpp
$(OBJ_EX_CPP_6_MT_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hetero1\example.cpp.hetero1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hetero1\example.cpp.hetero1.cpp
$(OBJ_EX_CPP_7_MT_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.character\example.cpp.character.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.character\example.cpp.character.cpp
$(OBJ_EX_CPP_8_MT_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.implicit_link_1\example.cpp.implicit_link_1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.implicit_link_1\example.cpp.implicit_link_1.cpp
$(OBJ_EX_CPP_9_MT_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_severity_levels\example.cpp.custom_severity_levels.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_severity_levels\example.cpp.custom_severity_levels.cpp
$(OBJ_EX_CPP_10_MT_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.callback_be\example.cpp.callback_be.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.callback_be\example.cpp.callback_be.cpp
$(OBJ_EX_CPP_11_MT_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_fe\example.cpp.custom_fe.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_fe\example.cpp.custom_fe.cpp
$(OBJ_EX_CPP_12_MT_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_type_1\example.cpp.custom_type_1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_type_1\example.cpp.custom_type_1.cpp
$(OBJ_EX_CPP_13_MT_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.process_id\example.cpp.process_id.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.process_id\example.cpp.process_id.cpp
$(OBJ_EX_CPP_14_MT_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.thread_id\example.cpp.thread_id.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.thread_id\example.cpp.thread_id.cpp
$(OBJ_EX_CPP_15_MT_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.args\example.cpp.args.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.args\example.cpp.args.cpp
$(OBJ_EX_CPP_16_MT_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.file\example.cpp.file.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.file\example.cpp.file.cpp
$(OBJ_EX_CPP_17_MT_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.tracing\example.cpp.tracing.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.tracing\example.cpp.tracing.cpp
$(OBJ_EX_CPP_18_MT_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.highres\example.cpp.highres.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.highres\example.cpp.highres.cpp
$(OBJ_EX_CPP_19_MT_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.lowres\example.cpp.lowres.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.lowres\example.cpp.lowres.cpp
$(OBJ_EX_CPP_20_MT_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.b64\example.cpp.b64.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.b64\example.cpp.b64.cpp
$(OBJ_EX_CPP_21_MT_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.api.no_namespace\example.cpp.api.no_namespace.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.api.no_namespace\example.cpp.api.no_namespace.cpp
$(OBJ_EX_CPP_22_MT_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.tracing.with_function\example.cpp.tracing.with_function.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.tracing.with_function\example.cpp.tracing.with_function.cpp
$(OBJ_EX_CPP_23_MT_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.1\example.cpp.mx.1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.1\example.cpp.mx.1.cpp
$(OBJ_EX_CPP_24_MT_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.2\example.cpp.mx.2.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.2\example.cpp.mx.2.cpp
$(OBJ_EX_CPP_25_MT_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hex_ptr\example.cpp.hex_ptr.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hex_ptr\example.cpp.hex_ptr.cpp
$(OBJ_EX_CPP_26_MT_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.assert\example.cpp.assert.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.assert\example.cpp.assert.cpp
$(OBJ_EX_CPP_27_MT_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pad\example.cpp.pad.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pad\example.cpp.pad.cpp
$(OBJ_EX_C_0_MT_R):	$(PROJ_EXAMPLES_DIR)\c\example.c.101\example.c.101.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.101\example.c.101.c
$(OBJ_EX_C_1_MT_R):	$(PROJ_EXAMPLES_DIR)\c\example.c.log_n\example.c.log_n.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.log_n\example.c.log_n.c
$(OBJ_EX_C_2_MT_R):	$(PROJ_EXAMPLES_DIR)\c\example.c.core.pantheios_logprintf\example.c.core.pantheios_logprintf.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.core.pantheios_logprintf\example.c.core.pantheios_logprintf.c
$(OBJ_EX_C_3_MT_R):	$(PROJ_EXAMPLES_DIR)\c\example.c.N\example.c.N.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.N\example.c.N.c
$(OBJ_EX_C_4_MT_R):	$(PROJ_EXAMPLES_DIR)\c\example.c.gethostname\example.c.gethostname.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.gethostname\example.c.gethostname.c
$(OBJ_EX_C_5_MT_R):	$(PROJ_EXAMPLES_DIR)\c\example.c.getcurrenttime\example.c.getcurrenttime.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.getcurrenttime\example.c.getcurrenttime.c
$(OBJ_EX_C_6_MT_R):	$(PROJ_EXAMPLES_DIR)\c\example.c.assert\example.c.assert.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.assert\example.c.assert.c
$(OBJ_EX_C_7_MT_R):	$(PROJ_EXAMPLES_DIR)\c\example.c.extended_severity\example.c.extended_severity.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.extended_severity\example.c.extended_severity.c

$(OBJ_EX_CPP_0_ST_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.101\example.cpp.101.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.101\example.cpp.101.cpp
$(OBJ_EX_CPP_1_ST_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.strings\example.cpp.strings.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.strings\example.cpp.strings.cpp
$(OBJ_EX_CPP_2_ST_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.integer\example.cpp.integer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.integer\example.cpp.integer.cpp
$(OBJ_EX_CPP_3_ST_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pointer\example.cpp.pointer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pointer\example.cpp.pointer.cpp
$(OBJ_EX_CPP_4_ST_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.real\example.cpp.real.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.real\example.cpp.real.cpp
$(OBJ_EX_CPP_5_ST_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.blob\example.cpp.blob.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.blob\example.cpp.blob.cpp
$(OBJ_EX_CPP_6_ST_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hetero1\example.cpp.hetero1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hetero1\example.cpp.hetero1.cpp
$(OBJ_EX_CPP_7_ST_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.character\example.cpp.character.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.character\example.cpp.character.cpp
$(OBJ_EX_CPP_8_ST_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.implicit_link_1\example.cpp.implicit_link_1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.implicit_link_1\example.cpp.implicit_link_1.cpp
$(OBJ_EX_CPP_9_ST_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_severity_levels\example.cpp.custom_severity_levels.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_severity_levels\example.cpp.custom_severity_levels.cpp
$(OBJ_EX_CPP_10_ST_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.callback_be\example.cpp.callback_be.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.callback_be\example.cpp.callback_be.cpp
$(OBJ_EX_CPP_11_ST_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_fe\example.cpp.custom_fe.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_fe\example.cpp.custom_fe.cpp
$(OBJ_EX_CPP_12_ST_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_type_1\example.cpp.custom_type_1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_type_1\example.cpp.custom_type_1.cpp
$(OBJ_EX_CPP_13_ST_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.process_id\example.cpp.process_id.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.process_id\example.cpp.process_id.cpp
$(OBJ_EX_CPP_14_ST_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.thread_id\example.cpp.thread_id.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.thread_id\example.cpp.thread_id.cpp
$(OBJ_EX_CPP_15_ST_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.args\example.cpp.args.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.args\example.cpp.args.cpp
$(OBJ_EX_CPP_16_ST_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.file\example.cpp.file.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.file\example.cpp.file.cpp
$(OBJ_EX_CPP_17_ST_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.tracing\example.cpp.tracing.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.tracing\example.cpp.tracing.cpp
$(OBJ_EX_CPP_18_ST_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.highres\example.cpp.highres.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.highres\example.cpp.highres.cpp
$(OBJ_EX_CPP_19_ST_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.lowres\example.cpp.lowres.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.lowres\example.cpp.lowres.cpp
$(OBJ_EX_CPP_20_ST_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.b64\example.cpp.b64.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.b64\example.cpp.b64.cpp
$(OBJ_EX_CPP_21_ST_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.api.no_namespace\example.cpp.api.no_namespace.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.api.no_namespace\example.cpp.api.no_namespace.cpp
$(OBJ_EX_CPP_22_ST_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.tracing.with_function\example.cpp.tracing.with_function.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.tracing.with_function\example.cpp.tracing.with_function.cpp
$(OBJ_EX_CPP_23_ST_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.1\example.cpp.mx.1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.1\example.cpp.mx.1.cpp
$(OBJ_EX_CPP_24_ST_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.2\example.cpp.mx.2.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.2\example.cpp.mx.2.cpp
$(OBJ_EX_CPP_25_ST_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hex_ptr\example.cpp.hex_ptr.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hex_ptr\example.cpp.hex_ptr.cpp
$(OBJ_EX_CPP_26_ST_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.assert\example.cpp.assert.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.assert\example.cpp.assert.cpp
$(OBJ_EX_CPP_27_ST_D):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pad\example.cpp.pad.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pad\example.cpp.pad.cpp
$(OBJ_EX_C_0_ST_D):	$(PROJ_EXAMPLES_DIR)\c\example.c.101\example.c.101.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.101\example.c.101.c
$(OBJ_EX_C_1_ST_D):	$(PROJ_EXAMPLES_DIR)\c\example.c.log_n\example.c.log_n.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.log_n\example.c.log_n.c
$(OBJ_EX_C_2_ST_D):	$(PROJ_EXAMPLES_DIR)\c\example.c.core.pantheios_logprintf\example.c.core.pantheios_logprintf.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.core.pantheios_logprintf\example.c.core.pantheios_logprintf.c
$(OBJ_EX_C_3_ST_D):	$(PROJ_EXAMPLES_DIR)\c\example.c.N\example.c.N.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.N\example.c.N.c
$(OBJ_EX_C_4_ST_D):	$(PROJ_EXAMPLES_DIR)\c\example.c.gethostname\example.c.gethostname.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.gethostname\example.c.gethostname.c
$(OBJ_EX_C_5_ST_D):	$(PROJ_EXAMPLES_DIR)\c\example.c.getcurrenttime\example.c.getcurrenttime.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.getcurrenttime\example.c.getcurrenttime.c
$(OBJ_EX_C_6_ST_D):	$(PROJ_EXAMPLES_DIR)\c\example.c.assert\example.c.assert.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.assert\example.c.assert.c
$(OBJ_EX_C_7_ST_D):	$(PROJ_EXAMPLES_DIR)\c\example.c.extended_severity\example.c.extended_severity.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.extended_severity\example.c.extended_severity.c

$(OBJ_EX_CPP_0_ST_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.101\example.cpp.101.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.101\example.cpp.101.cpp
$(OBJ_EX_CPP_1_ST_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.strings\example.cpp.strings.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.strings\example.cpp.strings.cpp
$(OBJ_EX_CPP_2_ST_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.integer\example.cpp.integer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.integer\example.cpp.integer.cpp
$(OBJ_EX_CPP_3_ST_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pointer\example.cpp.pointer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pointer\example.cpp.pointer.cpp
$(OBJ_EX_CPP_4_ST_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.real\example.cpp.real.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.real\example.cpp.real.cpp
$(OBJ_EX_CPP_5_ST_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.blob\example.cpp.blob.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.blob\example.cpp.blob.cpp
$(OBJ_EX_CPP_6_ST_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hetero1\example.cpp.hetero1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hetero1\example.cpp.hetero1.cpp
$(OBJ_EX_CPP_7_ST_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.character\example.cpp.character.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.character\example.cpp.character.cpp
$(OBJ_EX_CPP_8_ST_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.implicit_link_1\example.cpp.implicit_link_1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.implicit_link_1\example.cpp.implicit_link_1.cpp
$(OBJ_EX_CPP_9_ST_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_severity_levels\example.cpp.custom_severity_levels.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_severity_levels\example.cpp.custom_severity_levels.cpp
$(OBJ_EX_CPP_10_ST_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.callback_be\example.cpp.callback_be.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.callback_be\example.cpp.callback_be.cpp
$(OBJ_EX_CPP_11_ST_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_fe\example.cpp.custom_fe.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_fe\example.cpp.custom_fe.cpp
$(OBJ_EX_CPP_12_ST_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_type_1\example.cpp.custom_type_1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_type_1\example.cpp.custom_type_1.cpp
$(OBJ_EX_CPP_13_ST_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.process_id\example.cpp.process_id.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.process_id\example.cpp.process_id.cpp
$(OBJ_EX_CPP_14_ST_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.thread_id\example.cpp.thread_id.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.thread_id\example.cpp.thread_id.cpp
$(OBJ_EX_CPP_15_ST_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.args\example.cpp.args.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.args\example.cpp.args.cpp
$(OBJ_EX_CPP_16_ST_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.file\example.cpp.file.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.file\example.cpp.file.cpp
$(OBJ_EX_CPP_17_ST_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.tracing\example.cpp.tracing.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.tracing\example.cpp.tracing.cpp
$(OBJ_EX_CPP_18_ST_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.highres\example.cpp.highres.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.highres\example.cpp.highres.cpp
$(OBJ_EX_CPP_19_ST_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.lowres\example.cpp.lowres.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.lowres\example.cpp.lowres.cpp
$(OBJ_EX_CPP_20_ST_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.b64\example.cpp.b64.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.b64\example.cpp.b64.cpp
$(OBJ_EX_CPP_21_ST_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.api.no_namespace\example.cpp.api.no_namespace.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.api.no_namespace\example.cpp.api.no_namespace.cpp
$(OBJ_EX_CPP_22_ST_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.tracing.with_function\example.cpp.tracing.with_function.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.tracing.with_function\example.cpp.tracing.with_function.cpp
$(OBJ_EX_CPP_23_ST_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.1\example.cpp.mx.1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.1\example.cpp.mx.1.cpp
$(OBJ_EX_CPP_24_ST_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.2\example.cpp.mx.2.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.2\example.cpp.mx.2.cpp
$(OBJ_EX_CPP_25_ST_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hex_ptr\example.cpp.hex_ptr.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hex_ptr\example.cpp.hex_ptr.cpp
$(OBJ_EX_CPP_26_ST_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.assert\example.cpp.assert.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.assert\example.cpp.assert.cpp
$(OBJ_EX_CPP_27_ST_R):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pad\example.cpp.pad.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pad\example.cpp.pad.cpp
$(OBJ_EX_C_0_ST_R):	$(PROJ_EXAMPLES_DIR)\c\example.c.101\example.c.101.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.101\example.c.101.c
$(OBJ_EX_C_1_ST_R):	$(PROJ_EXAMPLES_DIR)\c\example.c.log_n\example.c.log_n.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.log_n\example.c.log_n.c
$(OBJ_EX_C_2_ST_R):	$(PROJ_EXAMPLES_DIR)\c\example.c.core.pantheios_logprintf\example.c.core.pantheios_logprintf.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.core.pantheios_logprintf\example.c.core.pantheios_logprintf.c
$(OBJ_EX_C_3_ST_R):	$(PROJ_EXAMPLES_DIR)\c\example.c.N\example.c.N.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.N\example.c.N.c
$(OBJ_EX_C_4_ST_R):	$(PROJ_EXAMPLES_DIR)\c\example.c.gethostname\example.c.gethostname.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.gethostname\example.c.gethostname.c
$(OBJ_EX_C_5_ST_R):	$(PROJ_EXAMPLES_DIR)\c\example.c.getcurrenttime\example.c.getcurrenttime.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.getcurrenttime\example.c.getcurrenttime.c
$(OBJ_EX_C_6_ST_R):	$(PROJ_EXAMPLES_DIR)\c\example.c.assert\example.c.assert.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.assert\example.c.assert.c
$(OBJ_EX_C_7_ST_R):	$(PROJ_EXAMPLES_DIR)\c\example.c.extended_severity\example.c.extended_severity.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_EXAMPLES_DIR)\c\example.c.extended_severity\example.c.extended_severity.c


# executables

$(EX_CPP_0_MT_D): \
			$(OBJ_EX_CPP_0_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_ALL_MT_D)\
			$(LIB_BE_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_CPP_0_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_ALL_MT_D)\
		$(LIB_BE_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(EX_CPP_1_MT_D): \
			$(OBJ_EX_CPP_1_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_CPP_1_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(EX_CPP_2_MT_D): \
			$(OBJ_EX_CPP_2_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_CPP_2_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(EX_CPP_3_MT_D): \
			$(OBJ_EX_CPP_3_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_CPP_3_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(EX_CPP_4_MT_D): \
			$(OBJ_EX_CPP_4_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_CPP_4_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(EX_CPP_5_MT_D): \
			$(OBJ_EX_CPP_5_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_CPP_5_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(EX_CPP_6_MT_D): \
			$(OBJ_EX_CPP_6_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_CPP_6_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(EX_CPP_7_MT_D): \
			$(OBJ_EX_CPP_7_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_CPP_7_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)


$(EX_CPP_9_MT_D): \
			$(OBJ_EX_CPP_9_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_CPP_9_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(EX_CPP_10_MT_D): \
			$(OBJ_EX_CPP_10_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_CPP_10_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(EX_CPP_11_MT_D): \
			$(OBJ_EX_CPP_11_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_CPP_11_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(EX_CPP_12_MT_D): \
			$(OBJ_EX_CPP_12_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_CPP_12_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(EX_CPP_13_MT_D): \
			$(OBJ_EX_CPP_13_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_CPP_13_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(EX_CPP_14_MT_D): \
			$(OBJ_EX_CPP_14_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_CPP_14_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(EX_CPP_15_MT_D): \
			$(OBJ_EX_CPP_15_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_CPP_15_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(EX_CPP_16_MT_D): \
			$(OBJ_EX_CPP_16_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_LRSPLIT_MT_D)\
			$(LIB_BEL_FILE_MT_D)\
			$(LIB_BER_FILE_MT_D)\
			$(LIB_BEC_FILE_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_CPP_16_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_LRSPLIT_MT_D)\
		$(LIB_BEL_FILE_MT_D)\
		$(LIB_BER_FILE_MT_D)\
		$(LIB_BEC_FILE_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(EX_CPP_17_MT_D): \
			$(OBJ_EX_CPP_17_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_CPP_17_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(EX_CPP_18_MT_D): \
			$(OBJ_EX_CPP_18_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_WC_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_CPP_18_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_WC_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(EX_CPP_19_MT_D): \
			$(OBJ_EX_CPP_19_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_WC_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_CPP_19_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_WC_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(EX_CPP_20_MT_D): \
			$(OBJ_EX_CPP_20_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(LIB_B64_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_CPP_20_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_B64_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(EX_CPP_21_MT_D): \
			$(OBJ_EX_CPP_21_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(LIB_B64_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_CPP_21_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_B64_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(EX_CPP_22_MT_D): \
			$(OBJ_EX_CPP_22_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(LIB_B64_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_CPP_22_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_B64_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)


$(EX_CPP_23_MT_D): \
			$(OBJ_EX_CPP_23_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_N_MT_D)\
			$(LIB_BEC_W32CONS_MT_D)\
			$(LIB_BEC_W32SYSLOG_MT_D)\
			$(LIB_B64_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_CPP_23_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_N_MT_D)\
		$(LIB_BEC_W32CONS_MT_D)\
		$(LIB_BEC_W32SYSLOG_MT_D)\
		$(LIB_B64_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_W32SYSLOG)\
		$(TARGET_LIB_MT_D)

$(EX_CPP_24_MT_D): \
			$(OBJ_EX_CPP_24_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_N_MT_D)\
			$(LIB_BEC_W32CONS_MT_D)\
			$(LIB_BEC_W32SYSLOG_MT_D)\
			$(LIB_B64_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_CPP_24_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_N_MT_D)\
		$(LIB_BEC_W32CONS_MT_D)\
		$(LIB_BEC_W32SYSLOG_MT_D)\
		$(LIB_B64_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_W32SYSLOG)\
		$(TARGET_LIB_MT_D)

$(EX_CPP_25_MT_D): \
			$(OBJ_EX_CPP_25_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_CPP_25_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(EX_CPP_26_MT_D): \
			$(OBJ_EX_CPP_26_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_CPP_26_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(EX_CPP_27_MT_D): \
			$(OBJ_EX_CPP_27_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_CPP_27_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(EX_C_0_MT_D): \
			$(OBJ_EX_C_0_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_ALL_MT_D)\
			$(LIB_BE_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_C_0_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_ALL_MT_D)\
		$(LIB_BE_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(EX_C_1_MT_D): \
			$(OBJ_EX_C_1_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_C_1_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(EX_C_2_MT_D): \
			$(OBJ_EX_C_2_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_C_2_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(EX_C_3_MT_D): \
			$(OBJ_EX_C_3_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_N_MT_D)\
			$(LIB_BE_N_MT_D)\
			$(LIB_BEC_FILE_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(LIB_BEC_NULL_MT_D)\
			$(LIB_BEC_W32SYSLOG_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_C_3_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_N_MT_D)\
		$(LIB_BE_N_MT_D)\
		$(LIB_BEC_FILE_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_BEC_NULL_MT_D)\
		$(LIB_BEC_W32SYSLOG_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_W32SYSLOG)\
		$(TARGET_LIB_MT_D)

$(EX_C_4_MT_D): \
			$(OBJ_EX_C_4_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_C_4_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(EX_C_5_MT_D): \
			$(OBJ_EX_C_5_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_C_5_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(EX_C_6_MT_D): \
			$(OBJ_EX_C_6_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_C_6_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(EX_C_7_MT_D): \
			$(OBJ_EX_C_7_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_EX_C_7_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(EX_CPP_0_MT_R): \
			$(OBJ_EX_CPP_0_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_ALL_MT_R)\
			$(LIB_BE_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_CPP_0_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_ALL_MT_R)\
		$(LIB_BE_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(EX_CPP_1_MT_R): \
			$(OBJ_EX_CPP_1_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_CPP_1_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(EX_CPP_2_MT_R): \
			$(OBJ_EX_CPP_2_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_CPP_2_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(EX_CPP_3_MT_R): \
			$(OBJ_EX_CPP_3_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_CPP_3_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(EX_CPP_4_MT_R): \
			$(OBJ_EX_CPP_4_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_CPP_4_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(EX_CPP_5_MT_R): \
			$(OBJ_EX_CPP_5_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_CPP_5_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(EX_CPP_6_MT_R): \
			$(OBJ_EX_CPP_6_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_CPP_6_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(EX_CPP_7_MT_R): \
			$(OBJ_EX_CPP_7_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_CPP_7_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)


$(EX_CPP_9_MT_R): \
			$(OBJ_EX_CPP_9_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_CPP_9_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(EX_CPP_10_MT_R): \
			$(OBJ_EX_CPP_10_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_CPP_10_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(EX_CPP_11_MT_R): \
			$(OBJ_EX_CPP_11_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_CPP_11_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(EX_CPP_12_MT_R): \
			$(OBJ_EX_CPP_12_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_CPP_12_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(EX_CPP_13_MT_R): \
			$(OBJ_EX_CPP_13_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_CPP_13_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(EX_CPP_14_MT_R): \
			$(OBJ_EX_CPP_14_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_CPP_14_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(EX_CPP_15_MT_R): \
			$(OBJ_EX_CPP_15_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_CPP_15_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(EX_CPP_16_MT_R): \
			$(OBJ_EX_CPP_16_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_LRSPLIT_MT_R)\
			$(LIB_BEL_FILE_MT_R)\
			$(LIB_BER_FILE_MT_R)\
			$(LIB_BEC_FILE_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_CPP_16_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_LRSPLIT_MT_R)\
		$(LIB_BEL_FILE_MT_R)\
		$(LIB_BER_FILE_MT_R)\
		$(LIB_BEC_FILE_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(EX_CPP_17_MT_R): \
			$(OBJ_EX_CPP_17_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_CPP_17_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(EX_CPP_18_MT_R): \
			$(OBJ_EX_CPP_18_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_WC_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_CPP_18_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_WC_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(EX_CPP_19_MT_R): \
			$(OBJ_EX_CPP_19_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_WC_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_CPP_19_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_WC_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(EX_CPP_20_MT_R): \
			$(OBJ_EX_CPP_20_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(LIB_B64_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_CPP_20_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_B64_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(EX_CPP_21_MT_R): \
			$(OBJ_EX_CPP_21_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(LIB_B64_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_CPP_21_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_B64_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(EX_CPP_22_MT_R): \
			$(OBJ_EX_CPP_22_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(LIB_B64_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_CPP_22_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_B64_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)


$(EX_CPP_23_MT_R): \
			$(OBJ_EX_CPP_23_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_N_MT_R)\
			$(LIB_BEC_W32CONS_MT_R)\
			$(LIB_BEC_W32SYSLOG_MT_R)\
			$(LIB_B64_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_CPP_23_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_N_MT_R)\
		$(LIB_BEC_W32CONS_MT_R)\
		$(LIB_BEC_W32SYSLOG_MT_R)\
		$(LIB_B64_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_W32SYSLOG)\
		$(TARGET_LIB_MT_R)

$(EX_CPP_24_MT_R): \
			$(OBJ_EX_CPP_24_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_N_MT_R)\
			$(LIB_BEC_W32CONS_MT_R)\
			$(LIB_BEC_W32SYSLOG_MT_R)\
			$(LIB_B64_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_CPP_24_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_N_MT_R)\
		$(LIB_BEC_W32CONS_MT_R)\
		$(LIB_BEC_W32SYSLOG_MT_R)\
		$(LIB_B64_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_W32SYSLOG)\
		$(TARGET_LIB_MT_R)

$(EX_CPP_25_MT_R): \
			$(OBJ_EX_CPP_25_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_CPP_25_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(EX_CPP_26_MT_R): \
			$(OBJ_EX_CPP_26_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_CPP_26_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(EX_CPP_27_MT_R): \
			$(OBJ_EX_CPP_27_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_CPP_27_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(EX_C_0_MT_R): \
			$(OBJ_EX_C_0_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_ALL_MT_R)\
			$(LIB_BE_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_C_0_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_ALL_MT_R)\
		$(LIB_BE_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(EX_C_1_MT_R): \
			$(OBJ_EX_C_1_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_C_1_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(EX_C_2_MT_R): \
			$(OBJ_EX_C_2_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_C_2_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(EX_C_3_MT_R): \
			$(OBJ_EX_C_3_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_N_MT_R)\
			$(LIB_BE_N_MT_R)\
			$(LIB_BEC_FILE_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(LIB_BEC_NULL_MT_R)\
			$(LIB_BEC_W32SYSLOG_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_C_3_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_N_MT_R)\
		$(LIB_BE_N_MT_R)\
		$(LIB_BEC_FILE_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_BEC_NULL_MT_R)\
		$(LIB_BEC_W32SYSLOG_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_W32SYSLOG)\
		$(TARGET_LIB_MT_R)

$(EX_C_4_MT_R): \
			$(OBJ_EX_C_4_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_C_4_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(EX_C_5_MT_R): \
			$(OBJ_EX_C_5_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_C_5_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(EX_C_6_MT_R): \
			$(OBJ_EX_C_6_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_C_6_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(EX_C_7_MT_R): \
			$(OBJ_EX_C_7_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_EX_C_7_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(EX_CPP_0_ST_D): \
			$(OBJ_EX_CPP_0_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_ALL_ST_D)\
			$(LIB_BE_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_CPP_0_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_ALL_ST_D)\
		$(LIB_BE_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(EX_CPP_1_ST_D): \
			$(OBJ_EX_CPP_1_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_CPP_1_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(EX_CPP_2_ST_D): \
			$(OBJ_EX_CPP_2_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_CPP_2_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(EX_CPP_3_ST_D): \
			$(OBJ_EX_CPP_3_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_CPP_3_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(EX_CPP_4_ST_D): \
			$(OBJ_EX_CPP_4_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_CPP_4_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(EX_CPP_5_ST_D): \
			$(OBJ_EX_CPP_5_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_CPP_5_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(EX_CPP_6_ST_D): \
			$(OBJ_EX_CPP_6_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_CPP_6_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(EX_CPP_7_ST_D): \
			$(OBJ_EX_CPP_7_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_CPP_7_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)


$(EX_CPP_9_ST_D): \
			$(OBJ_EX_CPP_9_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_CPP_9_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(EX_CPP_10_ST_D): \
			$(OBJ_EX_CPP_10_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_CPP_10_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(EX_CPP_11_ST_D): \
			$(OBJ_EX_CPP_11_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_CPP_11_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(EX_CPP_12_ST_D): \
			$(OBJ_EX_CPP_12_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_CPP_12_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(EX_CPP_13_ST_D): \
			$(OBJ_EX_CPP_13_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_CPP_13_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(EX_CPP_14_ST_D): \
			$(OBJ_EX_CPP_14_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_CPP_14_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(EX_CPP_15_ST_D): \
			$(OBJ_EX_CPP_15_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_CPP_15_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(EX_CPP_16_ST_D): \
			$(OBJ_EX_CPP_16_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_LRSPLIT_ST_D)\
			$(LIB_BEL_FILE_ST_D)\
			$(LIB_BER_FILE_ST_D)\
			$(LIB_BEC_FILE_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_CPP_16_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_LRSPLIT_ST_D)\
		$(LIB_BEL_FILE_ST_D)\
		$(LIB_BER_FILE_ST_D)\
		$(LIB_BEC_FILE_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(EX_CPP_17_ST_D): \
			$(OBJ_EX_CPP_17_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_CPP_17_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(EX_CPP_18_ST_D): \
			$(OBJ_EX_CPP_18_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_WC_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_CPP_18_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_WC_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(EX_CPP_19_ST_D): \
			$(OBJ_EX_CPP_19_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_WC_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_CPP_19_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_WC_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(EX_CPP_20_ST_D): \
			$(OBJ_EX_CPP_20_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(LIB_B64_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_CPP_20_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_B64_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(EX_CPP_21_ST_D): \
			$(OBJ_EX_CPP_21_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(LIB_B64_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_CPP_21_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_B64_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(EX_CPP_22_ST_D): \
			$(OBJ_EX_CPP_22_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(LIB_B64_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_CPP_22_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_B64_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)


$(EX_CPP_23_ST_D): \
			$(OBJ_EX_CPP_23_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_N_ST_D)\
			$(LIB_BEC_W32CONS_ST_D)\
			$(LIB_BEC_W32SYSLOG_ST_D)\
			$(LIB_B64_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_CPP_23_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_N_ST_D)\
		$(LIB_BEC_W32CONS_ST_D)\
		$(LIB_BEC_W32SYSLOG_ST_D)\
		$(LIB_B64_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIBS_3PTY_W32SYSLOG)\
		$(TARGET_LIB_ST_D)

$(EX_CPP_24_ST_D): \
			$(OBJ_EX_CPP_24_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_N_ST_D)\
			$(LIB_BEC_W32CONS_ST_D)\
			$(LIB_BEC_W32SYSLOG_ST_D)\
			$(LIB_B64_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_CPP_24_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_N_ST_D)\
		$(LIB_BEC_W32CONS_ST_D)\
		$(LIB_BEC_W32SYSLOG_ST_D)\
		$(LIB_B64_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIBS_3PTY_W32SYSLOG)\
		$(TARGET_LIB_ST_D)

$(EX_CPP_25_ST_D): \
			$(OBJ_EX_CPP_25_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_CPP_25_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(EX_CPP_26_ST_D): \
			$(OBJ_EX_CPP_26_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_CPP_26_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(EX_CPP_27_ST_D): \
			$(OBJ_EX_CPP_27_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_CPP_27_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(EX_C_0_ST_D): \
			$(OBJ_EX_C_0_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_ALL_ST_D)\
			$(LIB_BE_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_C_0_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_ALL_ST_D)\
		$(LIB_BE_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(EX_C_1_ST_D): \
			$(OBJ_EX_C_1_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_C_1_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(EX_C_2_ST_D): \
			$(OBJ_EX_C_2_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_C_2_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(EX_C_3_ST_D): \
			$(OBJ_EX_C_3_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_N_ST_D)\
			$(LIB_BE_N_ST_D)\
			$(LIB_BEC_FILE_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(LIB_BEC_NULL_ST_D)\
			$(LIB_BEC_W32SYSLOG_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_C_3_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_N_ST_D)\
		$(LIB_BE_N_ST_D)\
		$(LIB_BEC_FILE_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_BEC_NULL_ST_D)\
		$(LIB_BEC_W32SYSLOG_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIBS_3PTY_W32SYSLOG)\
		$(TARGET_LIB_ST_D)

$(EX_C_4_ST_D): \
			$(OBJ_EX_C_4_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_C_4_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(EX_C_5_ST_D): \
			$(OBJ_EX_C_5_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_C_5_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(EX_C_6_ST_D): \
			$(OBJ_EX_C_6_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_C_6_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(EX_C_7_ST_D): \
			$(OBJ_EX_C_7_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_EX_C_7_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(EX_CPP_0_ST_R): \
			$(OBJ_EX_CPP_0_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_ALL_ST_R)\
			$(LIB_BE_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_CPP_0_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_ALL_ST_R)\
		$(LIB_BE_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)

$(EX_CPP_1_ST_R): \
			$(OBJ_EX_CPP_1_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_CPP_1_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)

$(EX_CPP_2_ST_R): \
			$(OBJ_EX_CPP_2_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_CPP_2_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)

$(EX_CPP_3_ST_R): \
			$(OBJ_EX_CPP_3_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_CPP_3_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)

$(EX_CPP_4_ST_R): \
			$(OBJ_EX_CPP_4_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_CPP_4_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)

$(EX_CPP_5_ST_R): \
			$(OBJ_EX_CPP_5_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_CPP_5_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)

$(EX_CPP_6_ST_R): \
			$(OBJ_EX_CPP_6_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_CPP_6_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)

$(EX_CPP_7_ST_R): \
			$(OBJ_EX_CPP_7_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_CPP_7_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)


$(EX_CPP_9_ST_R): \
			$(OBJ_EX_CPP_9_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_CPP_9_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)

$(EX_CPP_10_ST_R): \
			$(OBJ_EX_CPP_10_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_CPP_10_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)

$(EX_CPP_11_ST_R): \
			$(OBJ_EX_CPP_11_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_CPP_11_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)

$(EX_CPP_12_ST_R): \
			$(OBJ_EX_CPP_12_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_CPP_12_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)

$(EX_CPP_13_ST_R): \
			$(OBJ_EX_CPP_13_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_CPP_13_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)

$(EX_CPP_14_ST_R): \
			$(OBJ_EX_CPP_14_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_CPP_14_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)

$(EX_CPP_15_ST_R): \
			$(OBJ_EX_CPP_15_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_CPP_15_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)

$(EX_CPP_16_ST_R): \
			$(OBJ_EX_CPP_16_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_LRSPLIT_ST_R)\
			$(LIB_BEL_FILE_ST_R)\
			$(LIB_BER_FILE_ST_R)\
			$(LIB_BEC_FILE_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_CPP_16_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_LRSPLIT_ST_R)\
		$(LIB_BEL_FILE_ST_R)\
		$(LIB_BER_FILE_ST_R)\
		$(LIB_BEC_FILE_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)

$(EX_CPP_17_ST_R): \
			$(OBJ_EX_CPP_17_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_CPP_17_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)

$(EX_CPP_18_ST_R): \
			$(OBJ_EX_CPP_18_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_WC_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_CPP_18_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_WC_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)

$(EX_CPP_19_ST_R): \
			$(OBJ_EX_CPP_19_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_WC_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_CPP_19_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_WC_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)

$(EX_CPP_20_ST_R): \
			$(OBJ_EX_CPP_20_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(LIB_B64_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_CPP_20_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_B64_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)

$(EX_CPP_21_ST_R): \
			$(OBJ_EX_CPP_21_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(LIB_B64_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_CPP_21_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_B64_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)

$(EX_CPP_22_ST_R): \
			$(OBJ_EX_CPP_22_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(LIB_B64_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_CPP_22_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_B64_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)


$(EX_CPP_23_ST_R): \
			$(OBJ_EX_CPP_23_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_N_ST_R)\
			$(LIB_BEC_W32CONS_ST_R)\
			$(LIB_BEC_W32SYSLOG_ST_R)\
			$(LIB_B64_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_CPP_23_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_N_ST_R)\
		$(LIB_BEC_W32CONS_ST_R)\
		$(LIB_BEC_W32SYSLOG_ST_R)\
		$(LIB_B64_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIBS_3PTY_W32SYSLOG)\
		$(TARGET_LIB_ST_R)

$(EX_CPP_24_ST_R): \
			$(OBJ_EX_CPP_24_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_N_ST_R)\
			$(LIB_BEC_W32CONS_ST_R)\
			$(LIB_BEC_W32SYSLOG_ST_R)\
			$(LIB_B64_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_CPP_24_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_N_ST_R)\
		$(LIB_BEC_W32CONS_ST_R)\
		$(LIB_BEC_W32SYSLOG_ST_R)\
		$(LIB_B64_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIBS_3PTY_W32SYSLOG)\
		$(TARGET_LIB_ST_R)

$(EX_CPP_25_ST_R): \
			$(OBJ_EX_CPP_25_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_CPP_25_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)

$(EX_CPP_26_ST_R): \
			$(OBJ_EX_CPP_26_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_CPP_26_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)

$(EX_CPP_27_ST_R): \
			$(OBJ_EX_CPP_27_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_CPP_27_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)

$(EX_C_0_ST_R): \
			$(OBJ_EX_C_0_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_ALL_ST_R)\
			$(LIB_BE_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_C_0_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_ALL_ST_R)\
		$(LIB_BE_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)

$(EX_C_1_ST_R): \
			$(OBJ_EX_C_1_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_C_1_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)

$(EX_C_2_ST_R): \
			$(OBJ_EX_C_2_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_C_2_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)

$(EX_C_3_ST_R): \
			$(OBJ_EX_C_3_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_N_ST_R)\
			$(LIB_BE_N_ST_R)\
			$(LIB_BEC_FILE_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(LIB_BEC_NULL_ST_R)\
			$(LIB_BEC_W32SYSLOG_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_C_3_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_N_ST_R)\
		$(LIB_BE_N_ST_R)\
		$(LIB_BEC_FILE_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_BEC_NULL_ST_R)\
		$(LIB_BEC_W32SYSLOG_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIBS_3PTY_W32SYSLOG)\
		$(TARGET_LIB_ST_R)

$(EX_C_4_ST_R): \
			$(OBJ_EX_C_4_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_C_4_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)

$(EX_C_5_ST_R): \
			$(OBJ_EX_C_5_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_C_5_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)

$(EX_C_6_ST_R): \
			$(OBJ_EX_C_6_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_C_6_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)

$(EX_C_7_ST_R): \
			$(OBJ_EX_C_7_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_EX_C_7_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)


##################################################
# Tests

##############################
# Component Tests

$(TARG_TEST_COMP_core_initseq_MT_D):	\
			$(OBJ_TEST_COMP_core_initseq_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_COMP_core_initseq_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_COMP_core_initseq_MT_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.core.initialisation_sequence\test.component.core.initialisation_sequence.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.core.initialisation_sequence\test.component.core.initialisation_sequence.c

$(TARG_TEST_COMP_core_initseq_MT_R):	\
			$(OBJ_TEST_COMP_core_initseq_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_COMP_core_initseq_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_COMP_core_initseq_MT_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.core.initialisation_sequence\test.component.core.initialisation_sequence.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.core.initialisation_sequence\test.component.core.initialisation_sequence.c

$(TARG_TEST_COMP_core_initseq_ST_D):	\
			$(OBJ_TEST_COMP_core_initseq_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_COMP_core_initseq_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_COMP_core_initseq_ST_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.core.initialisation_sequence\test.component.core.initialisation_sequence.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.core.initialisation_sequence\test.component.core.initialisation_sequence.c

$(TARG_TEST_COMP_core_initseq_ST_R):	\
			$(OBJ_TEST_COMP_core_initseq_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_COMP_core_initseq_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_COMP_core_initseq_ST_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.core.initialisation_sequence\test.component.core.initialisation_sequence.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.core.initialisation_sequence\test.component.core.initialisation_sequence.c

$(TARG_TEST_COMP_custsev_MT_D):	\
			$(OBJ_TEST_COMP_custsev_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_ALL_MT_D)\
			$(LIB_BE_TEST_MT_D)\
			$(LIB_BEC_TEST_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_COMP_custsev_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_ALL_MT_D)\
		$(LIB_BE_TEST_MT_D)\
		$(LIB_BEC_TEST_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_COMP_custsev_MT_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.custom_severity\test.component.custom_severity.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.custom_severity\test.component.custom_severity.cpp

$(TARG_TEST_COMP_custsev_MT_R):	\
			$(OBJ_TEST_COMP_custsev_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_ALL_MT_R)\
			$(LIB_BE_TEST_MT_R)\
			$(LIB_BEC_TEST_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_COMP_custsev_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_ALL_MT_R)\
		$(LIB_BE_TEST_MT_R)\
		$(LIB_BEC_TEST_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_COMP_custsev_MT_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.custom_severity\test.component.custom_severity.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.custom_severity\test.component.custom_severity.cpp

$(TARG_TEST_COMP_custsev_ST_D):	\
			$(OBJ_TEST_COMP_custsev_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_ALL_ST_D)\
			$(LIB_BE_TEST_ST_D)\
			$(LIB_BEC_TEST_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_COMP_custsev_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_ALL_ST_D)\
		$(LIB_BE_TEST_ST_D)\
		$(LIB_BEC_TEST_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_COMP_custsev_ST_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.custom_severity\test.component.custom_severity.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.custom_severity\test.component.custom_severity.cpp

$(TARG_TEST_COMP_custsev_ST_R):	\
			$(OBJ_TEST_COMP_custsev_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_ALL_ST_R)\
			$(LIB_BE_TEST_ST_R)\
			$(LIB_BEC_TEST_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_COMP_custsev_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_ALL_ST_R)\
		$(LIB_BE_TEST_ST_R)\
		$(LIB_BEC_TEST_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_COMP_custsev_ST_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.custom_severity\test.component.custom_severity.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.custom_severity\test.component.custom_severity.cpp

$(TARG_TEST_COMP_file_mt_MT_D):	\
			$(OBJ_TEST_COMP_file_mt_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_N_MT_D)\
			$(LIB_BE_N_MT_D)\
			$(LIB_BEC_FILE_MT_D)\
			$(LIB_BEC_W32CONS_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_COMP_file_mt_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_N_MT_D)\
		$(LIB_BE_N_MT_D)\
		$(LIB_BEC_FILE_MT_D)\
		$(LIB_BEC_W32CONS_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_COMP_file_mt_MT_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.be.file.threading\test.component.be.file.threading.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.be.file.threading\test.component.be.file.threading.cpp

$(TARG_TEST_COMP_file_mt_MT_R):	\
			$(OBJ_TEST_COMP_file_mt_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_N_MT_R)\
			$(LIB_BE_N_MT_R)\
			$(LIB_BEC_FILE_MT_R)\
			$(LIB_BEC_W32CONS_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_COMP_file_mt_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_N_MT_R)\
		$(LIB_BE_N_MT_R)\
		$(LIB_BEC_FILE_MT_R)\
		$(LIB_BEC_W32CONS_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_COMP_file_mt_MT_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.be.file.threading\test.component.be.file.threading.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.be.file.threading\test.component.be.file.threading.cpp

$(TARG_TEST_COMP_ins_args_MT_D):	\
			$(OBJ_TEST_COMP_ins_args_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_ALL_MT_D)\
			$(LIB_BE_TEST_MT_D)\
			$(LIB_BEC_TEST_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_COMP_ins_args_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_ALL_MT_D)\
		$(LIB_BE_TEST_MT_D)\
		$(LIB_BEC_TEST_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_COMP_ins_args_MT_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.args\test.component.inserters.args.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.args\test.component.inserters.args.cpp

$(TARG_TEST_COMP_ins_args_MT_R):	\
			$(OBJ_TEST_COMP_ins_args_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_ALL_MT_R)\
			$(LIB_BE_TEST_MT_R)\
			$(LIB_BEC_TEST_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_COMP_ins_args_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_ALL_MT_R)\
		$(LIB_BE_TEST_MT_R)\
		$(LIB_BEC_TEST_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_COMP_ins_args_MT_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.args\test.component.inserters.args.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.args\test.component.inserters.args.cpp

$(TARG_TEST_COMP_ins_args_ST_D):	\
			$(OBJ_TEST_COMP_ins_args_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_ALL_ST_D)\
			$(LIB_BE_TEST_ST_D)\
			$(LIB_BEC_TEST_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_COMP_ins_args_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_ALL_ST_D)\
		$(LIB_BE_TEST_ST_D)\
		$(LIB_BEC_TEST_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_COMP_ins_args_ST_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.args\test.component.inserters.args.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.args\test.component.inserters.args.cpp

$(TARG_TEST_COMP_ins_args_ST_R):	\
			$(OBJ_TEST_COMP_ins_args_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_ALL_ST_R)\
			$(LIB_BE_TEST_ST_R)\
			$(LIB_BEC_TEST_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_COMP_ins_args_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_ALL_ST_R)\
		$(LIB_BE_TEST_ST_R)\
		$(LIB_BEC_TEST_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_COMP_ins_args_ST_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.args\test.component.inserters.args.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.args\test.component.inserters.args.cpp

$(TARG_TEST_COMP_ins_b64_MT_D):	\
			$(OBJ_TEST_COMP_ins_b64_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_ALL_MT_D)\
			$(LIB_BE_TEST_MT_D)\
			$(LIB_BEC_TEST_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(LIB_B64_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_COMP_ins_b64_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_ALL_MT_D)\
		$(LIB_BE_TEST_MT_D)\
		$(LIB_BEC_TEST_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_B64_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_COMP_ins_b64_MT_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.b64\test.component.inserters.b64.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.b64\test.component.inserters.b64.cpp

$(TARG_TEST_COMP_ins_b64_MT_R):	\
			$(OBJ_TEST_COMP_ins_b64_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_ALL_MT_R)\
			$(LIB_BE_TEST_MT_R)\
			$(LIB_BEC_TEST_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(LIB_B64_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_COMP_ins_b64_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_ALL_MT_R)\
		$(LIB_BE_TEST_MT_R)\
		$(LIB_BEC_TEST_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_B64_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_COMP_ins_b64_MT_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.b64\test.component.inserters.b64.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.b64\test.component.inserters.b64.cpp

$(TARG_TEST_COMP_ins_b64_ST_D):	\
			$(OBJ_TEST_COMP_ins_b64_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_ALL_ST_D)\
			$(LIB_BE_TEST_ST_D)\
			$(LIB_BEC_TEST_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(LIB_B64_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_COMP_ins_b64_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_ALL_ST_D)\
		$(LIB_BE_TEST_ST_D)\
		$(LIB_BEC_TEST_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_B64_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_COMP_ins_b64_ST_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.b64\test.component.inserters.b64.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.b64\test.component.inserters.b64.cpp

$(TARG_TEST_COMP_ins_b64_ST_R):	\
			$(OBJ_TEST_COMP_ins_b64_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_ALL_ST_R)\
			$(LIB_BE_TEST_ST_R)\
			$(LIB_BEC_TEST_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(LIB_B64_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_COMP_ins_b64_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_ALL_ST_R)\
		$(LIB_BE_TEST_ST_R)\
		$(LIB_BEC_TEST_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_B64_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_COMP_ins_b64_ST_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.b64\test.component.inserters.b64.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.b64\test.component.inserters.b64.cpp

$(TARG_TEST_COMP_ins_bool_MT_D):	\
			$(OBJ_TEST_COMP_ins_bool_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_ALL_MT_D)\
			$(LIB_BE_TEST_MT_D)\
			$(LIB_BEC_TEST_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_COMP_ins_bool_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_ALL_MT_D)\
		$(LIB_BE_TEST_MT_D)\
		$(LIB_BEC_TEST_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_COMP_ins_bool_MT_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.boolean\test.component.inserters.boolean.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.boolean\test.component.inserters.boolean.cpp

$(TARG_TEST_COMP_ins_bool_MT_R):	\
			$(OBJ_TEST_COMP_ins_bool_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_ALL_MT_R)\
			$(LIB_BE_TEST_MT_R)\
			$(LIB_BEC_TEST_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_COMP_ins_bool_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_ALL_MT_R)\
		$(LIB_BE_TEST_MT_R)\
		$(LIB_BEC_TEST_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_COMP_ins_bool_MT_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.boolean\test.component.inserters.boolean.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.boolean\test.component.inserters.boolean.cpp

$(TARG_TEST_COMP_ins_bool_ST_D):	\
			$(OBJ_TEST_COMP_ins_bool_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_ALL_ST_D)\
			$(LIB_BE_TEST_ST_D)\
			$(LIB_BEC_TEST_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_COMP_ins_bool_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_ALL_ST_D)\
		$(LIB_BE_TEST_ST_D)\
		$(LIB_BEC_TEST_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_COMP_ins_bool_ST_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.boolean\test.component.inserters.boolean.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.boolean\test.component.inserters.boolean.cpp

$(TARG_TEST_COMP_ins_bool_ST_R):	\
			$(OBJ_TEST_COMP_ins_bool_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_ALL_ST_R)\
			$(LIB_BE_TEST_ST_R)\
			$(LIB_BEC_TEST_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_COMP_ins_bool_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_ALL_ST_R)\
		$(LIB_BE_TEST_ST_R)\
		$(LIB_BEC_TEST_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_COMP_ins_bool_ST_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.boolean\test.component.inserters.boolean.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.boolean\test.component.inserters.boolean.cpp

$(TARG_TEST_COMP_ins_hostid_MT_D):	\
			$(OBJ_TEST_COMP_ins_hostid_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_ALL_MT_D)\
			$(LIB_BE_TEST_MT_D)\
			$(LIB_BEC_TEST_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_COMP_ins_hostid_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_ALL_MT_D)\
		$(LIB_BE_TEST_MT_D)\
		$(LIB_BEC_TEST_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_COMP_ins_hostid_MT_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.hostId\test.component.inserters.hostId.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.hostId\test.component.inserters.hostId.cpp

$(TARG_TEST_COMP_ins_hostid_MT_R):	\
			$(OBJ_TEST_COMP_ins_hostid_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_ALL_MT_R)\
			$(LIB_BE_TEST_MT_R)\
			$(LIB_BEC_TEST_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_COMP_ins_hostid_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_ALL_MT_R)\
		$(LIB_BE_TEST_MT_R)\
		$(LIB_BEC_TEST_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_COMP_ins_hostid_MT_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.hostId\test.component.inserters.hostId.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.hostId\test.component.inserters.hostId.cpp

$(TARG_TEST_COMP_ins_hostid_ST_D):	\
			$(OBJ_TEST_COMP_ins_hostid_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_ALL_ST_D)\
			$(LIB_BE_TEST_ST_D)\
			$(LIB_BEC_TEST_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_COMP_ins_hostid_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_ALL_ST_D)\
		$(LIB_BE_TEST_ST_D)\
		$(LIB_BEC_TEST_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_COMP_ins_hostid_ST_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.hostId\test.component.inserters.hostId.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.hostId\test.component.inserters.hostId.cpp

$(TARG_TEST_COMP_ins_hostid_ST_R):	\
			$(OBJ_TEST_COMP_ins_hostid_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_ALL_ST_R)\
			$(LIB_BE_TEST_ST_R)\
			$(LIB_BEC_TEST_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_COMP_ins_hostid_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_ALL_ST_R)\
		$(LIB_BE_TEST_ST_R)\
		$(LIB_BEC_TEST_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_COMP_ins_hostid_ST_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.hostId\test.component.inserters.hostId.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.hostId\test.component.inserters.hostId.cpp

$(TARG_TEST_COMP_ins_int_MT_D):	\
			$(OBJ_TEST_COMP_ins_int_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_ALL_MT_D)\
			$(LIB_BE_TEST_MT_D)\
			$(LIB_BEC_TEST_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_COMP_ins_int_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_ALL_MT_D)\
		$(LIB_BE_TEST_MT_D)\
		$(LIB_BEC_TEST_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_COMP_ins_int_MT_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.integer\test.component.inserters.integer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.integer\test.component.inserters.integer.cpp

$(TARG_TEST_COMP_ins_int_MT_R):	\
			$(OBJ_TEST_COMP_ins_int_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_ALL_MT_R)\
			$(LIB_BE_TEST_MT_R)\
			$(LIB_BEC_TEST_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_COMP_ins_int_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_ALL_MT_R)\
		$(LIB_BE_TEST_MT_R)\
		$(LIB_BEC_TEST_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_COMP_ins_int_MT_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.integer\test.component.inserters.integer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.integer\test.component.inserters.integer.cpp

$(TARG_TEST_COMP_ins_int_ST_D):	\
			$(OBJ_TEST_COMP_ins_int_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_ALL_ST_D)\
			$(LIB_BE_TEST_ST_D)\
			$(LIB_BEC_TEST_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_COMP_ins_int_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_ALL_ST_D)\
		$(LIB_BE_TEST_ST_D)\
		$(LIB_BEC_TEST_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_COMP_ins_int_ST_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.integer\test.component.inserters.integer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.integer\test.component.inserters.integer.cpp

$(TARG_TEST_COMP_ins_int_ST_R):	\
			$(OBJ_TEST_COMP_ins_int_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_ALL_ST_R)\
			$(LIB_BE_TEST_ST_R)\
			$(LIB_BEC_TEST_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_COMP_ins_int_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_ALL_ST_R)\
		$(LIB_BE_TEST_ST_R)\
		$(LIB_BEC_TEST_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_COMP_ins_int_ST_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.integer\test.component.inserters.integer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.integer\test.component.inserters.integer.cpp

$(TARG_TEST_COMP_ins_pad_MT_D):	\
			$(OBJ_TEST_COMP_ins_pad_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_ALL_MT_D)\
			$(LIB_BE_TEST_MT_D)\
			$(LIB_BEC_TEST_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_COMP_ins_pad_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_ALL_MT_D)\
		$(LIB_BE_TEST_MT_D)\
		$(LIB_BEC_TEST_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_COMP_ins_pad_MT_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pad\test.component.inserters.pad.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pad\test.component.inserters.pad.cpp

$(TARG_TEST_COMP_ins_pad_MT_R):	\
			$(OBJ_TEST_COMP_ins_pad_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_ALL_MT_R)\
			$(LIB_BE_TEST_MT_R)\
			$(LIB_BEC_TEST_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_COMP_ins_pad_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_ALL_MT_R)\
		$(LIB_BE_TEST_MT_R)\
		$(LIB_BEC_TEST_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_COMP_ins_pad_MT_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pad\test.component.inserters.pad.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pad\test.component.inserters.pad.cpp

$(TARG_TEST_COMP_ins_pad_ST_D):	\
			$(OBJ_TEST_COMP_ins_pad_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_ALL_ST_D)\
			$(LIB_BE_TEST_ST_D)\
			$(LIB_BEC_TEST_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_COMP_ins_pad_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_ALL_ST_D)\
		$(LIB_BE_TEST_ST_D)\
		$(LIB_BEC_TEST_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_COMP_ins_pad_ST_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pad\test.component.inserters.pad.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pad\test.component.inserters.pad.cpp

$(TARG_TEST_COMP_ins_pad_ST_R):	\
			$(OBJ_TEST_COMP_ins_pad_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_ALL_ST_R)\
			$(LIB_BE_TEST_ST_R)\
			$(LIB_BEC_TEST_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_COMP_ins_pad_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_ALL_ST_R)\
		$(LIB_BE_TEST_ST_R)\
		$(LIB_BEC_TEST_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_COMP_ins_pad_ST_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pad\test.component.inserters.pad.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pad\test.component.inserters.pad.cpp

$(TARG_TEST_COMP_ins_ptr_MT_D):	\
			$(OBJ_TEST_COMP_ins_ptr_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_ALL_MT_D)\
			$(LIB_BE_TEST_MT_D)\
			$(LIB_BEC_TEST_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_COMP_ins_ptr_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_ALL_MT_D)\
		$(LIB_BE_TEST_MT_D)\
		$(LIB_BEC_TEST_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_COMP_ins_ptr_MT_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pointer\test.component.inserters.pointer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pointer\test.component.inserters.pointer.cpp

$(TARG_TEST_COMP_ins_ptr_MT_R):	\
			$(OBJ_TEST_COMP_ins_ptr_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_ALL_MT_R)\
			$(LIB_BE_TEST_MT_R)\
			$(LIB_BEC_TEST_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_COMP_ins_ptr_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_ALL_MT_R)\
		$(LIB_BE_TEST_MT_R)\
		$(LIB_BEC_TEST_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_COMP_ins_ptr_MT_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pointer\test.component.inserters.pointer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pointer\test.component.inserters.pointer.cpp

$(TARG_TEST_COMP_ins_ptr_ST_D):	\
			$(OBJ_TEST_COMP_ins_ptr_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_ALL_ST_D)\
			$(LIB_BE_TEST_ST_D)\
			$(LIB_BEC_TEST_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_COMP_ins_ptr_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_ALL_ST_D)\
		$(LIB_BE_TEST_ST_D)\
		$(LIB_BEC_TEST_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_COMP_ins_ptr_ST_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pointer\test.component.inserters.pointer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pointer\test.component.inserters.pointer.cpp

$(TARG_TEST_COMP_ins_ptr_ST_R):	\
			$(OBJ_TEST_COMP_ins_ptr_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_ALL_ST_R)\
			$(LIB_BE_TEST_ST_R)\
			$(LIB_BEC_TEST_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_COMP_ins_ptr_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_ALL_ST_R)\
		$(LIB_BE_TEST_ST_R)\
		$(LIB_BEC_TEST_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_COMP_ins_ptr_ST_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pointer\test.component.inserters.pointer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pointer\test.component.inserters.pointer.cpp

$(TARG_TEST_COMP_ins_prid_MT_D):	\
			$(OBJ_TEST_COMP_ins_prid_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_ALL_MT_D)\
			$(LIB_BE_TEST_MT_D)\
			$(LIB_BEC_TEST_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_COMP_ins_prid_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_ALL_MT_D)\
		$(LIB_BE_TEST_MT_D)\
		$(LIB_BEC_TEST_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_COMP_ins_prid_MT_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.processId\test.component.inserters.processId.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.processId\test.component.inserters.processId.cpp

$(TARG_TEST_COMP_ins_prid_MT_R):	\
			$(OBJ_TEST_COMP_ins_prid_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_ALL_MT_R)\
			$(LIB_BE_TEST_MT_R)\
			$(LIB_BEC_TEST_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_COMP_ins_prid_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_ALL_MT_R)\
		$(LIB_BE_TEST_MT_R)\
		$(LIB_BEC_TEST_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_COMP_ins_prid_MT_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.processId\test.component.inserters.processId.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.processId\test.component.inserters.processId.cpp

$(TARG_TEST_COMP_ins_prid_ST_D):	\
			$(OBJ_TEST_COMP_ins_prid_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_ALL_ST_D)\
			$(LIB_BE_TEST_ST_D)\
			$(LIB_BEC_TEST_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_COMP_ins_prid_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_ALL_ST_D)\
		$(LIB_BE_TEST_ST_D)\
		$(LIB_BEC_TEST_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_COMP_ins_prid_ST_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.processId\test.component.inserters.processId.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.processId\test.component.inserters.processId.cpp

$(TARG_TEST_COMP_ins_prid_ST_R):	\
			$(OBJ_TEST_COMP_ins_prid_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_ALL_ST_R)\
			$(LIB_BE_TEST_ST_R)\
			$(LIB_BEC_TEST_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_COMP_ins_prid_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_ALL_ST_R)\
		$(LIB_BE_TEST_ST_R)\
		$(LIB_BEC_TEST_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_COMP_ins_prid_ST_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.processId\test.component.inserters.processId.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.processId\test.component.inserters.processId.cpp

$(TARG_TEST_COMP_ins_real_MT_D):	\
			$(OBJ_TEST_COMP_ins_real_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_ALL_MT_D)\
			$(LIB_BE_TEST_MT_D)\
			$(LIB_BEC_TEST_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_COMP_ins_real_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_ALL_MT_D)\
		$(LIB_BE_TEST_MT_D)\
		$(LIB_BEC_TEST_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_COMP_ins_real_MT_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.real\test.component.inserters.real.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.real\test.component.inserters.real.cpp

$(TARG_TEST_COMP_ins_real_MT_R):	\
			$(OBJ_TEST_COMP_ins_real_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_ALL_MT_R)\
			$(LIB_BE_TEST_MT_R)\
			$(LIB_BEC_TEST_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_COMP_ins_real_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_ALL_MT_R)\
		$(LIB_BE_TEST_MT_R)\
		$(LIB_BEC_TEST_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_COMP_ins_real_MT_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.real\test.component.inserters.real.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.real\test.component.inserters.real.cpp

$(TARG_TEST_COMP_ins_real_ST_D):	\
			$(OBJ_TEST_COMP_ins_real_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_ALL_ST_D)\
			$(LIB_BE_TEST_ST_D)\
			$(LIB_BEC_TEST_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_COMP_ins_real_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_ALL_ST_D)\
		$(LIB_BE_TEST_ST_D)\
		$(LIB_BEC_TEST_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_COMP_ins_real_ST_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.real\test.component.inserters.real.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.real\test.component.inserters.real.cpp

$(TARG_TEST_COMP_ins_real_ST_R):	\
			$(OBJ_TEST_COMP_ins_real_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_ALL_ST_R)\
			$(LIB_BE_TEST_ST_R)\
			$(LIB_BEC_TEST_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_COMP_ins_real_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_ALL_ST_R)\
		$(LIB_BE_TEST_ST_R)\
		$(LIB_BEC_TEST_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_COMP_ins_real_ST_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.real\test.component.inserters.real.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.real\test.component.inserters.real.cpp

$(TARG_TEST_COMP_ins_slice_MT_D):	\
			$(OBJ_TEST_COMP_ins_slice_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_ALL_MT_D)\
			$(LIB_BE_TEST_MT_D)\
			$(LIB_BEC_TEST_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_COMP_ins_slice_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_ALL_MT_D)\
		$(LIB_BE_TEST_MT_D)\
		$(LIB_BEC_TEST_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_COMP_ins_slice_MT_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.slice\test.component.inserters.slice.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.slice\test.component.inserters.slice.cpp

$(TARG_TEST_COMP_ins_slice_MT_R):	\
			$(OBJ_TEST_COMP_ins_slice_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_ALL_MT_R)\
			$(LIB_BE_TEST_MT_R)\
			$(LIB_BEC_TEST_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_COMP_ins_slice_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_ALL_MT_R)\
		$(LIB_BE_TEST_MT_R)\
		$(LIB_BEC_TEST_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_COMP_ins_slice_MT_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.slice\test.component.inserters.slice.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.slice\test.component.inserters.slice.cpp

$(TARG_TEST_COMP_ins_slice_ST_D):	\
			$(OBJ_TEST_COMP_ins_slice_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_ALL_ST_D)\
			$(LIB_BE_TEST_ST_D)\
			$(LIB_BEC_TEST_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_COMP_ins_slice_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_ALL_ST_D)\
		$(LIB_BE_TEST_ST_D)\
		$(LIB_BEC_TEST_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_COMP_ins_slice_ST_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.slice\test.component.inserters.slice.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.slice\test.component.inserters.slice.cpp

$(TARG_TEST_COMP_ins_slice_ST_R):	\
			$(OBJ_TEST_COMP_ins_slice_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_ALL_ST_R)\
			$(LIB_BE_TEST_ST_R)\
			$(LIB_BEC_TEST_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_COMP_ins_slice_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_ALL_ST_R)\
		$(LIB_BE_TEST_ST_R)\
		$(LIB_BEC_TEST_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_COMP_ins_slice_ST_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.slice\test.component.inserters.slice.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.slice\test.component.inserters.slice.cpp

$(TARG_TEST_COMP_ins_thrid_MT_D):	\
			$(OBJ_TEST_COMP_ins_thrid_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_ALL_MT_D)\
			$(LIB_BE_TEST_MT_D)\
			$(LIB_BEC_TEST_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_COMP_ins_thrid_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_ALL_MT_D)\
		$(LIB_BE_TEST_MT_D)\
		$(LIB_BEC_TEST_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_COMP_ins_thrid_MT_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.threadId\test.component.inserters.threadId.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.threadId\test.component.inserters.threadId.cpp

$(TARG_TEST_COMP_ins_thrid_MT_R):	\
			$(OBJ_TEST_COMP_ins_thrid_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_ALL_MT_R)\
			$(LIB_BE_TEST_MT_R)\
			$(LIB_BEC_TEST_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_COMP_ins_thrid_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_ALL_MT_R)\
		$(LIB_BE_TEST_MT_R)\
		$(LIB_BEC_TEST_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_COMP_ins_thrid_MT_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.threadId\test.component.inserters.threadId.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.threadId\test.component.inserters.threadId.cpp

$(TARG_TEST_COMP_ins_thrid_ST_D):	\
			$(OBJ_TEST_COMP_ins_thrid_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_ALL_ST_D)\
			$(LIB_BE_TEST_ST_D)\
			$(LIB_BEC_TEST_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_COMP_ins_thrid_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_ALL_ST_D)\
		$(LIB_BE_TEST_ST_D)\
		$(LIB_BEC_TEST_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_COMP_ins_thrid_ST_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.threadId\test.component.inserters.threadId.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.threadId\test.component.inserters.threadId.cpp

$(TARG_TEST_COMP_ins_thrid_ST_R):	\
			$(OBJ_TEST_COMP_ins_thrid_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_ALL_ST_R)\
			$(LIB_BE_TEST_ST_R)\
			$(LIB_BEC_TEST_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_COMP_ins_thrid_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_ALL_ST_R)\
		$(LIB_BE_TEST_ST_R)\
		$(LIB_BEC_TEST_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_COMP_ins_thrid_ST_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.threadId\test.component.inserters.threadId.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.threadId\test.component.inserters.threadId.cpp

$(TARG_TEST_COMP_ins_w2m_MT_D):	\
			$(OBJ_TEST_COMP_ins_w2m_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_ALL_MT_D)\
			$(LIB_BE_TEST_MT_D)\
			$(LIB_BEC_TEST_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_COMP_ins_w2m_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_ALL_MT_D)\
		$(LIB_BE_TEST_MT_D)\
		$(LIB_BEC_TEST_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_COMP_ins_w2m_MT_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.w2m\test.component.inserters.w2m.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.w2m\test.component.inserters.w2m.cpp

$(TARG_TEST_COMP_ins_w2m_MT_R):	\
			$(OBJ_TEST_COMP_ins_w2m_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_ALL_MT_R)\
			$(LIB_BE_TEST_MT_R)\
			$(LIB_BEC_TEST_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_COMP_ins_w2m_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_ALL_MT_R)\
		$(LIB_BE_TEST_MT_R)\
		$(LIB_BEC_TEST_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_COMP_ins_w2m_MT_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.w2m\test.component.inserters.w2m.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.w2m\test.component.inserters.w2m.cpp

$(TARG_TEST_COMP_ins_w2m_ST_D):	\
			$(OBJ_TEST_COMP_ins_w2m_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_ALL_ST_D)\
			$(LIB_BE_TEST_ST_D)\
			$(LIB_BEC_TEST_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_COMP_ins_w2m_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_ALL_ST_D)\
		$(LIB_BE_TEST_ST_D)\
		$(LIB_BEC_TEST_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_COMP_ins_w2m_ST_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.w2m\test.component.inserters.w2m.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.w2m\test.component.inserters.w2m.cpp

$(TARG_TEST_COMP_ins_w2m_ST_R):	\
			$(OBJ_TEST_COMP_ins_w2m_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_ALL_ST_R)\
			$(LIB_BE_TEST_ST_R)\
			$(LIB_BEC_TEST_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_COMP_ins_w2m_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_ALL_ST_R)\
		$(LIB_BE_TEST_ST_R)\
		$(LIB_BEC_TEST_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_COMP_ins_w2m_ST_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.w2m\test.component.inserters.w2m.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.w2m\test.component.inserters.w2m.cpp

$(TARG_TEST_COMP_log_1_MT_D):	\
			$(OBJ_TEST_COMP_log_1_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_ALL_MT_D)\
			$(LIB_BE_TEST_MT_D)\
			$(LIB_BEC_TEST_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_COMP_log_1_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_ALL_MT_D)\
		$(LIB_BE_TEST_MT_D)\
		$(LIB_BEC_TEST_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_COMP_log_1_MT_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.log.1\test.component.log.1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.log.1\test.component.log.1.cpp

$(TARG_TEST_COMP_log_1_MT_R):	\
			$(OBJ_TEST_COMP_log_1_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_ALL_MT_R)\
			$(LIB_BE_TEST_MT_R)\
			$(LIB_BEC_TEST_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_COMP_log_1_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_ALL_MT_R)\
		$(LIB_BE_TEST_MT_R)\
		$(LIB_BEC_TEST_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_COMP_log_1_MT_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.log.1\test.component.log.1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.log.1\test.component.log.1.cpp

$(TARG_TEST_COMP_log_1_ST_D):	\
			$(OBJ_TEST_COMP_log_1_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_ALL_ST_D)\
			$(LIB_BE_TEST_ST_D)\
			$(LIB_BEC_TEST_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_COMP_log_1_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_ALL_ST_D)\
		$(LIB_BE_TEST_ST_D)\
		$(LIB_BEC_TEST_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_COMP_log_1_ST_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.log.1\test.component.log.1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.log.1\test.component.log.1.cpp

$(TARG_TEST_COMP_log_1_ST_R):	\
			$(OBJ_TEST_COMP_log_1_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_ALL_ST_R)\
			$(LIB_BE_TEST_ST_R)\
			$(LIB_BEC_TEST_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_COMP_log_1_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_ALL_ST_R)\
		$(LIB_BE_TEST_ST_R)\
		$(LIB_BEC_TEST_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_COMP_log_1_ST_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.log.1\test.component.log.1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.log.1\test.component.log.1.cpp

$(TARG_TEST_COMP_trace_1_MT_D):	\
			$(OBJ_TEST_COMP_trace_1_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_ALL_MT_D)\
			$(LIB_BE_TEST_MT_D)\
			$(LIB_BEC_TEST_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_COMP_trace_1_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_ALL_MT_D)\
		$(LIB_BE_TEST_MT_D)\
		$(LIB_BEC_TEST_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_COMP_trace_1_MT_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.trace.1\test.component.trace.1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.trace.1\test.component.trace.1.cpp

$(TARG_TEST_COMP_trace_1_MT_R):	\
			$(OBJ_TEST_COMP_trace_1_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_ALL_MT_R)\
			$(LIB_BE_TEST_MT_R)\
			$(LIB_BEC_TEST_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_COMP_trace_1_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_ALL_MT_R)\
		$(LIB_BE_TEST_MT_R)\
		$(LIB_BEC_TEST_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_COMP_trace_1_MT_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.trace.1\test.component.trace.1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.trace.1\test.component.trace.1.cpp

$(TARG_TEST_COMP_trace_1_ST_D):	\
			$(OBJ_TEST_COMP_trace_1_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_ALL_ST_D)\
			$(LIB_BE_TEST_ST_D)\
			$(LIB_BEC_TEST_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_COMP_trace_1_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_ALL_ST_D)\
		$(LIB_BE_TEST_ST_D)\
		$(LIB_BEC_TEST_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_COMP_trace_1_ST_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.trace.1\test.component.trace.1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.trace.1\test.component.trace.1.cpp

$(TARG_TEST_COMP_trace_1_ST_R):	\
			$(OBJ_TEST_COMP_trace_1_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_ALL_ST_R)\
			$(LIB_BE_TEST_ST_R)\
			$(LIB_BEC_TEST_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_COMP_trace_1_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_ALL_ST_R)\
		$(LIB_BE_TEST_ST_R)\
		$(LIB_BEC_TEST_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_COMP_trace_1_ST_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.trace.1\test.component.trace.1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.trace.1\test.component.trace.1.cpp

$(TARG_TEST_COMP_pan_puts_MT_D):	\
			$(OBJ_TEST_COMP_pan_puts_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_ALL_MT_D)\
			$(LIB_BE_TEST_MT_D)\
			$(LIB_BEC_TEST_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_COMP_pan_puts_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_ALL_MT_D)\
		$(LIB_BE_TEST_MT_D)\
		$(LIB_BEC_TEST_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_COMP_pan_puts_MT_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logputs\test.component.core.pantheios_logputs.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logputs\test.component.core.pantheios_logputs.cpp

$(TARG_TEST_COMP_pan_puts_MT_R):	\
			$(OBJ_TEST_COMP_pan_puts_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_ALL_MT_R)\
			$(LIB_BE_TEST_MT_R)\
			$(LIB_BEC_TEST_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_COMP_pan_puts_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_ALL_MT_R)\
		$(LIB_BE_TEST_MT_R)\
		$(LIB_BEC_TEST_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_COMP_pan_puts_MT_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logputs\test.component.core.pantheios_logputs.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logputs\test.component.core.pantheios_logputs.cpp

$(TARG_TEST_COMP_pan_puts_ST_D):	\
			$(OBJ_TEST_COMP_pan_puts_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_ALL_ST_D)\
			$(LIB_BE_TEST_ST_D)\
			$(LIB_BEC_TEST_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_COMP_pan_puts_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_ALL_ST_D)\
		$(LIB_BE_TEST_ST_D)\
		$(LIB_BEC_TEST_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_COMP_pan_puts_ST_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logputs\test.component.core.pantheios_logputs.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logputs\test.component.core.pantheios_logputs.cpp

$(TARG_TEST_COMP_pan_puts_ST_R):	\
			$(OBJ_TEST_COMP_pan_puts_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_ALL_ST_R)\
			$(LIB_BE_TEST_ST_R)\
			$(LIB_BEC_TEST_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_COMP_pan_puts_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_ALL_ST_R)\
		$(LIB_BE_TEST_ST_R)\
		$(LIB_BEC_TEST_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_COMP_pan_puts_ST_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logputs\test.component.core.pantheios_logputs.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logputs\test.component.core.pantheios_logputs.cpp

$(TARG_TEST_COMP_pan_prtf_MT_D):	\
			$(OBJ_TEST_COMP_pan_prtf_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_ALL_MT_D)\
			$(LIB_BE_TEST_MT_D)\
			$(LIB_BEC_TEST_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_COMP_pan_prtf_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_ALL_MT_D)\
		$(LIB_BE_TEST_MT_D)\
		$(LIB_BEC_TEST_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_COMP_pan_prtf_MT_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logprintf\test.component.core.pantheios_logprintf.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logprintf\test.component.core.pantheios_logprintf.cpp

$(TARG_TEST_COMP_pan_prtf_MT_R):	\
			$(OBJ_TEST_COMP_pan_prtf_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_ALL_MT_R)\
			$(LIB_BE_TEST_MT_R)\
			$(LIB_BEC_TEST_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_COMP_pan_prtf_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_ALL_MT_R)\
		$(LIB_BE_TEST_MT_R)\
		$(LIB_BEC_TEST_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_COMP_pan_prtf_MT_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logprintf\test.component.core.pantheios_logprintf.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logprintf\test.component.core.pantheios_logprintf.cpp

$(TARG_TEST_COMP_pan_prtf_ST_D):	\
			$(OBJ_TEST_COMP_pan_prtf_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_ALL_ST_D)\
			$(LIB_BE_TEST_ST_D)\
			$(LIB_BEC_TEST_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_COMP_pan_prtf_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_ALL_ST_D)\
		$(LIB_BE_TEST_ST_D)\
		$(LIB_BEC_TEST_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_COMP_pan_prtf_ST_D):	$(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logprintf\test.component.core.pantheios_logprintf.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logprintf\test.component.core.pantheios_logprintf.cpp

$(TARG_TEST_COMP_pan_prtf_ST_R):	\
			$(OBJ_TEST_COMP_pan_prtf_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_ALL_ST_R)\
			$(LIB_BE_TEST_ST_R)\
			$(LIB_BEC_TEST_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_COMP_pan_prtf_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_ALL_ST_R)\
		$(LIB_BE_TEST_ST_R)\
		$(LIB_BEC_TEST_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_COMP_pan_prtf_ST_R):	$(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logprintf\test.component.core.pantheios_logprintf.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logprintf\test.component.core.pantheios_logprintf.cpp

##############################
# Performance Tests

$(TARG_TEST_PERF_ins_w2m_MT_D):	\
			$(OBJ_TEST_PERF_ins_w2m_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_NULL_MT_D)\
			$(LIB_BEC_NULL_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_PERF_ins_w2m_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_NULL_MT_D)\
		$(LIB_BEC_NULL_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_PERF_ins_w2m_MT_D):	$(PROJ_TEST_PERFORMANCE_DIR)\test.performance.inserters.w2m\test.performance.inserters.w2m.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_PERFORMANCE_DIR)\test.performance.inserters.w2m\test.performance.inserters.w2m.cpp

$(TARG_TEST_PERF_ins_w2m_MT_R):	\
			$(OBJ_TEST_PERF_ins_w2m_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_NULL_MT_R)\
			$(LIB_BEC_NULL_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_PERF_ins_w2m_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_NULL_MT_R)\
		$(LIB_BEC_NULL_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_PERF_ins_w2m_MT_R):	$(PROJ_TEST_PERFORMANCE_DIR)\test.performance.inserters.w2m\test.performance.inserters.w2m.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_PERFORMANCE_DIR)\test.performance.inserters.w2m\test.performance.inserters.w2m.cpp

$(TARG_TEST_PERF_ins_w2m_ST_D):	\
			$(OBJ_TEST_PERF_ins_w2m_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_NULL_ST_D)\
			$(LIB_BEC_NULL_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_PERF_ins_w2m_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_NULL_ST_D)\
		$(LIB_BEC_NULL_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_PERF_ins_w2m_ST_D):	$(PROJ_TEST_PERFORMANCE_DIR)\test.performance.inserters.w2m\test.performance.inserters.w2m.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_PERFORMANCE_DIR)\test.performance.inserters.w2m\test.performance.inserters.w2m.cpp

$(TARG_TEST_PERF_ins_w2m_ST_R):	\
			$(OBJ_TEST_PERF_ins_w2m_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_NULL_ST_R)\
			$(LIB_BEC_NULL_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_PERF_ins_w2m_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_NULL_ST_R)\
		$(LIB_BEC_NULL_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_PERF_ins_w2m_ST_R):	$(PROJ_TEST_PERFORMANCE_DIR)\test.performance.inserters.w2m\test.performance.inserters.w2m.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_PERFORMANCE_DIR)\test.performance.inserters.w2m\test.performance.inserters.w2m.cpp

##############################
# Scratch Tests

#  object files

$(OBJ_TEST_API_MT_D):	$(PROJ_TEST_SCRATCH_DIR)\test.scratch.api\test.scratch.api.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_SCRATCH_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_SCRATCH_DIR)\test.scratch.api\test.scratch.api.cpp
$(OBJ_TEST_FE_MT_D):	$(PROJ_TEST_SCRATCH_DIR)\test.scratch.fe\test.scratch.fe.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_SCRATCH_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_SCRATCH_DIR)\test.scratch.fe\test.scratch.fe.cpp
$(OBJ_TEST_BE_N_MT_D):	$(PROJ_TEST_SCRATCH_DIR)\test.scratch.be.N.fail\test.scratch.be.N.fail.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_SCRATCH_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_SCRATCH_DIR)\test.scratch.be.N.fail\test.scratch.be.N.fail.cpp
$(OBJ_TEST_API_MT_R):	$(PROJ_TEST_SCRATCH_DIR)\test.scratch.api\test.scratch.api.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_SCRATCH_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_SCRATCH_DIR)\test.scratch.api\test.scratch.api.cpp
$(OBJ_TEST_FE_MT_R):	$(PROJ_TEST_SCRATCH_DIR)\test.scratch.fe\test.scratch.fe.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_SCRATCH_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_SCRATCH_DIR)\test.scratch.fe\test.scratch.fe.cpp
$(OBJ_TEST_BE_N_MT_R):	$(PROJ_TEST_SCRATCH_DIR)\test.scratch.be.N.fail\test.scratch.be.N.fail.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_SCRATCH_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_SCRATCH_DIR)\test.scratch.be.N.fail\test.scratch.be.N.fail.cpp
$(OBJ_TEST_API_ST_D):	$(PROJ_TEST_SCRATCH_DIR)\test.scratch.api\test.scratch.api.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_SCRATCH_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_SCRATCH_DIR)\test.scratch.api\test.scratch.api.cpp
$(OBJ_TEST_FE_ST_D):	$(PROJ_TEST_SCRATCH_DIR)\test.scratch.fe\test.scratch.fe.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_SCRATCH_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_SCRATCH_DIR)\test.scratch.fe\test.scratch.fe.cpp
$(OBJ_TEST_BE_N_ST_D):	$(PROJ_TEST_SCRATCH_DIR)\test.scratch.be.N.fail\test.scratch.be.N.fail.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_SCRATCH_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_SCRATCH_DIR)\test.scratch.be.N.fail\test.scratch.be.N.fail.cpp
$(OBJ_TEST_API_ST_R):	$(PROJ_TEST_SCRATCH_DIR)\test.scratch.api\test.scratch.api.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_SCRATCH_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_SCRATCH_DIR)\test.scratch.api\test.scratch.api.cpp
$(OBJ_TEST_FE_ST_R):	$(PROJ_TEST_SCRATCH_DIR)\test.scratch.fe\test.scratch.fe.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_SCRATCH_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_SCRATCH_DIR)\test.scratch.fe\test.scratch.fe.cpp
$(OBJ_TEST_BE_N_ST_R):	$(PROJ_TEST_SCRATCH_DIR)\test.scratch.be.N.fail\test.scratch.be.N.fail.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_SCRATCH_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_SCRATCH_DIR)\test.scratch.be.N.fail\test.scratch.be.N.fail.cpp

# executables

$(TEST__MT_D_API_W_BE_ACE):	\
			$(OBJ_TEST_API_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_ACE_MT_D)\
			$(LIB_BEC_ACE_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ -L"$(ACE)\lib" -L"$(ACE)\ace"\
		$(OBJ_TEST_API_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_ACE_MT_D)\
		$(LIB_BEC_ACE_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_ACE)\
		$(TARGET_LIB_MT_D)

$(TEST__MT_D_API_W_BE_FPRINTF):	\
			$(OBJ_TEST_API_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_API_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_FPRINTF)\
		$(TARGET_LIB_MT_D)

$(TEST__MT_D_API_W_BE_COMERROBJ):		\
			$(OBJ_TEST_API_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_COMERROBJ_MT_D)\
			$(LIB_BEC_COMERROBJ_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_API_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_COMERROBJ_MT_D)\
		$(LIB_BEC_COMERROBJ_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_COMERROBJ)\
		$(TARGET_LIB_MT_D)

$(TEST__MT_D_API_W_BE_WINEVLOG):	\
			$(OBJ_TEST_API_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_WINEVLOG_MT_D)\
			$(LIB_BEC_WINEVLOG_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_API_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_WINEVLOG_MT_D)\
		$(LIB_BEC_WINEVLOG_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_WINEVLOG)\
		$(TARGET_LIB_MT_D)

$(TEST__MT_D_API_W_BE_W32CONS):	\
			$(OBJ_TEST_API_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_W32CONS_MT_D)\
			$(LIB_BEC_W32CONS_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_API_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_W32CONS_MT_D)\
		$(LIB_BEC_W32CONS_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_W32CONS)\
		$(TARGET_LIB_MT_D)

$(TEST__MT_D_API_W_BE_W32DBGR):	\
			$(OBJ_TEST_API_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_W32DBGR_MT_D)\
			$(LIB_BEC_W32DBGR_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_API_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_W32DBGR_MT_D)\
		$(LIB_BEC_W32DBGR_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_W32DBGR)\
		$(TARGET_LIB_MT_D)

$(TEST__MT_D_API_W_BE_W32SYSLOG):		\
			$(OBJ_TEST_API_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_W32SYSLOG_MT_D)\
			$(LIB_BEC_W32SYSLOG_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_API_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_W32SYSLOG_MT_D)\
		$(LIB_BEC_W32SYSLOG_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_W32SYSLOG)\
		$(TARGET_LIB_MT_D)

$(TEST__MT_D_API_W_BELR_2_W32DBGR_FPRINTF):	\
			$(OBJ_TEST_API_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_LRSPLIT_MT_D)\
			$(LIB_BEL_W32DBGR_MT_D)\
			$(LIB_BEC_W32DBGR_MT_D)\
			$(LIB_BER_FPRINTF_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_API_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_LRSPLIT_MT_D)\
		$(LIB_BEL_W32DBGR_MT_D)\
		$(LIB_BEC_W32DBGR_MT_D)\
		$(LIB_BER_FPRINTF_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_W32DBGR_FPRINTF)\
		$(TARGET_LIB_MT_D)

$(TEST__MT_D_API_W_BELR_3_W32DBGR_W32SYSLOG):	\
			$(OBJ_TEST_API_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_LRSPLIT_MT_D)\
			$(LIB_BEL_W32DBGR_MT_D)\
			$(LIB_BEC_W32DBGR_MT_D)\
			$(LIB_BER_W32SYSLOG_MT_D)\
			$(LIB_BEC_W32SYSLOG_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_API_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_LRSPLIT_MT_D)\
		$(LIB_BEL_W32DBGR_MT_D)\
		$(LIB_BEC_W32DBGR_MT_D)\
		$(LIB_BER_W32SYSLOG_MT_D)\
		$(LIB_BEC_W32SYSLOG_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_W32DBGR_W32SYSLOG)\
		$(TARGET_LIB_MT_D)

$(TARGET_TEST_FE_MT_D): \
			$(OBJ_TEST_FE_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_FE_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(TARGET_LIB_MT_D)

$(TEST__MT_D_BE_N_FAIL):	\
			$(OBJ_TEST_BE_N_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_N_MT_D)\
			$(LIB_BE_N_MT_D)\
			$(LIB_BEC_FAIL_MT_D)\
			$(LIB_BEC_FILE_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_BE_N_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_FE_N_MT_D)\
		$(LIB_BE_N_MT_D)\
		$(LIB_BEC_FAIL_MT_D)\
		$(LIB_BEC_FILE_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_D)

$(TEST__MT_R_API_W_BE_ACE):	\
			$(OBJ_TEST_API_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_ACE_MT_R)\
			$(LIB_BEC_ACE_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ -L"$(ACE)\lib" -L"$(ACE)\ace"\
		$(OBJ_TEST_API_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_ACE_MT_R)\
		$(LIB_BEC_ACE_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_ACE)\
		$(TARGET_LIB_MT_R)

$(TEST__MT_R_API_W_BE_FPRINTF):	\
			$(OBJ_TEST_API_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_API_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_FPRINTF)\
		$(TARGET_LIB_MT_R)

$(TEST__MT_R_API_W_BE_COMERROBJ):		\
			$(OBJ_TEST_API_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_COMERROBJ_MT_R)\
			$(LIB_BEC_COMERROBJ_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_API_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_COMERROBJ_MT_R)\
		$(LIB_BEC_COMERROBJ_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_COMERROBJ)\
		$(TARGET_LIB_MT_R)

$(TEST__MT_R_API_W_BE_WINEVLOG):	\
			$(OBJ_TEST_API_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_WINEVLOG_MT_R)\
			$(LIB_BEC_WINEVLOG_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_API_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_WINEVLOG_MT_R)\
		$(LIB_BEC_WINEVLOG_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_WINEVLOG)\
		$(TARGET_LIB_MT_R)

$(TEST__MT_R_API_W_BE_W32CONS):	\
			$(OBJ_TEST_API_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_W32CONS_MT_R)\
			$(LIB_BEC_W32CONS_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_API_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_W32CONS_MT_R)\
		$(LIB_BEC_W32CONS_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_W32CONS)\
		$(TARGET_LIB_MT_R)

$(TEST__MT_R_API_W_BE_W32DBGR):	\
			$(OBJ_TEST_API_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_W32DBGR_MT_R)\
			$(LIB_BEC_W32DBGR_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_API_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_W32DBGR_MT_R)\
		$(LIB_BEC_W32DBGR_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_W32DBGR)\
		$(TARGET_LIB_MT_R)

$(TEST__MT_R_API_W_BE_W32SYSLOG):		\
			$(OBJ_TEST_API_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_W32SYSLOG_MT_R)\
			$(LIB_BEC_W32SYSLOG_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_API_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_W32SYSLOG_MT_R)\
		$(LIB_BEC_W32SYSLOG_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_W32SYSLOG)\
		$(TARGET_LIB_MT_R)

$(TEST__MT_R_API_W_BELR_2_W32DBGR_FPRINTF):	\
			$(OBJ_TEST_API_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_LRSPLIT_MT_R)\
			$(LIB_BEL_W32DBGR_MT_R)\
			$(LIB_BEC_W32DBGR_MT_R)\
			$(LIB_BER_FPRINTF_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_API_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_LRSPLIT_MT_R)\
		$(LIB_BEL_W32DBGR_MT_R)\
		$(LIB_BEC_W32DBGR_MT_R)\
		$(LIB_BER_FPRINTF_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_W32DBGR_FPRINTF)\
		$(TARGET_LIB_MT_R)

$(TEST__MT_R_API_W_BELR_3_W32DBGR_W32SYSLOG):	\
			$(OBJ_TEST_API_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_LRSPLIT_MT_R)\
			$(LIB_BEL_W32DBGR_MT_R)\
			$(LIB_BEC_W32DBGR_MT_R)\
			$(LIB_BER_W32SYSLOG_MT_R)\
			$(LIB_BEC_W32SYSLOG_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_API_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_LRSPLIT_MT_R)\
		$(LIB_BEL_W32DBGR_MT_R)\
		$(LIB_BEC_W32DBGR_MT_R)\
		$(LIB_BER_W32SYSLOG_MT_R)\
		$(LIB_BEC_W32SYSLOG_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_W32DBGR_W32SYSLOG)\
		$(TARGET_LIB_MT_R)

$(TARGET_TEST_FE_MT_R): \
			$(OBJ_TEST_FE_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_FE_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(TARGET_LIB_MT_R)

$(TEST__MT_R_BE_N_FAIL):	\
			$(OBJ_TEST_BE_N_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_N_MT_R)\
			$(LIB_BE_N_MT_R)\
			$(LIB_BEC_FAIL_MT_R)\
			$(LIB_BEC_FILE_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_BE_N_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_FE_N_MT_R)\
		$(LIB_BE_N_MT_R)\
		$(LIB_BEC_FAIL_MT_R)\
		$(LIB_BEC_FILE_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_MT_R)

$(TEST__ST_D_API_W_BE_FPRINTF):	\
			$(OBJ_TEST_API_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_API_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIBS_3PTY_FPRINTF)\
		$(TARGET_LIB_ST_D)

$(TEST__ST_D_API_W_BE_COMERROBJ):		\
			$(OBJ_TEST_API_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_COMERROBJ_ST_D)\
			$(LIB_BEC_COMERROBJ_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_API_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_COMERROBJ_ST_D)\
		$(LIB_BEC_COMERROBJ_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIBS_3PTY_COMERROBJ)\
		$(TARGET_LIB_ST_D)

$(TEST__ST_D_API_W_BE_WINEVLOG):	\
			$(OBJ_TEST_API_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_WINEVLOG_ST_D)\
			$(LIB_BEC_WINEVLOG_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_API_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_WINEVLOG_ST_D)\
		$(LIB_BEC_WINEVLOG_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIBS_3PTY_WINEVLOG)\
		$(TARGET_LIB_ST_D)

$(TEST__ST_D_API_W_BE_W32CONS):	\
			$(OBJ_TEST_API_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_W32CONS_ST_D)\
			$(LIB_BEC_W32CONS_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_API_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_W32CONS_ST_D)\
		$(LIB_BEC_W32CONS_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIBS_3PTY_W32CONS)\
		$(TARGET_LIB_ST_D)

$(TEST__ST_D_API_W_BE_W32DBGR):	\
			$(OBJ_TEST_API_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_W32DBGR_ST_D)\
			$(LIB_BEC_W32DBGR_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_API_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_W32DBGR_ST_D)\
		$(LIB_BEC_W32DBGR_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIBS_3PTY_W32DBGR)\
		$(TARGET_LIB_ST_D)

$(TEST__ST_D_API_W_BE_W32SYSLOG):		\
			$(OBJ_TEST_API_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_W32SYSLOG_ST_D)\
			$(LIB_BEC_W32SYSLOG_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_API_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_W32SYSLOG_ST_D)\
		$(LIB_BEC_W32SYSLOG_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIBS_3PTY_W32SYSLOG)\
		$(TARGET_LIB_ST_D)

$(TEST__ST_D_API_W_BELR_2_W32DBGR_FPRINTF):	\
			$(OBJ_TEST_API_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_LRSPLIT_ST_D)\
			$(LIB_BEL_W32DBGR_ST_D)\
			$(LIB_BEC_W32DBGR_ST_D)\
			$(LIB_BER_FPRINTF_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_API_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_LRSPLIT_ST_D)\
		$(LIB_BEL_W32DBGR_ST_D)\
		$(LIB_BEC_W32DBGR_ST_D)\
		$(LIB_BER_FPRINTF_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIBS_3PTY_W32DBGR_FPRINTF)\
		$(TARGET_LIB_ST_D)

$(TEST__ST_D_API_W_BELR_3_W32DBGR_W32SYSLOG):	\
			$(OBJ_TEST_API_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_LRSPLIT_ST_D)\
			$(LIB_BEL_W32DBGR_ST_D)\
			$(LIB_BEC_W32DBGR_ST_D)\
			$(LIB_BER_W32SYSLOG_ST_D)\
			$(LIB_BEC_W32SYSLOG_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_API_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_LRSPLIT_ST_D)\
		$(LIB_BEL_W32DBGR_ST_D)\
		$(LIB_BEC_W32DBGR_ST_D)\
		$(LIB_BER_W32SYSLOG_ST_D)\
		$(LIB_BEC_W32SYSLOG_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIBS_3PTY_W32DBGR_W32SYSLOG)\
		$(TARGET_LIB_ST_D)

$(TARGET_TEST_FE_ST_D): \
			$(OBJ_TEST_FE_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_FE_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(TARGET_LIB_ST_D)

$(TEST__ST_D_BE_N_FAIL):	\
			$(OBJ_TEST_BE_N_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_N_ST_D)\
			$(LIB_BE_N_ST_D)\
			$(LIB_BEC_FAIL_ST_D)\
			$(LIB_BEC_FILE_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_BE_N_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_FE_N_ST_D)\
		$(LIB_BE_N_ST_D)\
		$(LIB_BEC_FAIL_ST_D)\
		$(LIB_BEC_FILE_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_D)

$(TEST__ST_R_API_W_BE_FPRINTF):	\
			$(OBJ_TEST_API_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_API_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIBS_3PTY_FPRINTF)\
		$(TARGET_LIB_ST_R)

$(TEST__ST_R_API_W_BE_COMERROBJ):		\
			$(OBJ_TEST_API_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_COMERROBJ_ST_R)\
			$(LIB_BEC_COMERROBJ_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_API_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_COMERROBJ_ST_R)\
		$(LIB_BEC_COMERROBJ_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIBS_3PTY_COMERROBJ)\
		$(TARGET_LIB_ST_R)

$(TEST__ST_R_API_W_BE_WINEVLOG):	\
			$(OBJ_TEST_API_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_WINEVLOG_ST_R)\
			$(LIB_BEC_WINEVLOG_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_API_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_WINEVLOG_ST_R)\
		$(LIB_BEC_WINEVLOG_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIBS_3PTY_WINEVLOG)\
		$(TARGET_LIB_ST_R)

$(TEST__ST_R_API_W_BE_W32CONS):	\
			$(OBJ_TEST_API_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_W32CONS_ST_R)\
			$(LIB_BEC_W32CONS_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_API_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_W32CONS_ST_R)\
		$(LIB_BEC_W32CONS_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIBS_3PTY_W32CONS)\
		$(TARGET_LIB_ST_R)

$(TEST__ST_R_API_W_BE_W32DBGR):	\
			$(OBJ_TEST_API_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_W32DBGR_ST_R)\
			$(LIB_BEC_W32DBGR_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_API_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_W32DBGR_ST_R)\
		$(LIB_BEC_W32DBGR_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIBS_3PTY_W32DBGR)\
		$(TARGET_LIB_ST_R)

$(TEST__ST_R_API_W_BE_W32SYSLOG):		\
			$(OBJ_TEST_API_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_W32SYSLOG_ST_R)\
			$(LIB_BEC_W32SYSLOG_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_API_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_W32SYSLOG_ST_R)\
		$(LIB_BEC_W32SYSLOG_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIBS_3PTY_W32SYSLOG)\
		$(TARGET_LIB_ST_R)

$(TEST__ST_R_API_W_BELR_2_W32DBGR_FPRINTF):	\
			$(OBJ_TEST_API_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_LRSPLIT_ST_R)\
			$(LIB_BEL_W32DBGR_ST_R)\
			$(LIB_BEC_W32DBGR_ST_R)\
			$(LIB_BER_FPRINTF_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_API_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_LRSPLIT_ST_R)\
		$(LIB_BEL_W32DBGR_ST_R)\
		$(LIB_BEC_W32DBGR_ST_R)\
		$(LIB_BER_FPRINTF_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIBS_3PTY_W32DBGR_FPRINTF)\
		$(TARGET_LIB_ST_R)

$(TEST__ST_R_API_W_BELR_3_W32DBGR_W32SYSLOG):	\
			$(OBJ_TEST_API_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_LRSPLIT_ST_R)\
			$(LIB_BEL_W32DBGR_ST_R)\
			$(LIB_BEC_W32DBGR_ST_R)\
			$(LIB_BER_W32SYSLOG_ST_R)\
			$(LIB_BEC_W32SYSLOG_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_API_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_LRSPLIT_ST_R)\
		$(LIB_BEL_W32DBGR_ST_R)\
		$(LIB_BEC_W32DBGR_ST_R)\
		$(LIB_BER_W32SYSLOG_ST_R)\
		$(LIB_BEC_W32SYSLOG_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIBS_3PTY_W32DBGR_W32SYSLOG)\
		$(TARGET_LIB_ST_R)

$(TARGET_TEST_FE_ST_R): \
			$(OBJ_TEST_FE_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_FE_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(TARGET_LIB_ST_R)

$(TEST__ST_R_BE_N_FAIL):	\
			$(OBJ_TEST_BE_N_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_N_ST_R)\
			$(LIB_BE_N_ST_R)\
			$(LIB_BEC_FAIL_ST_R)\
			$(LIB_BEC_FILE_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_BE_N_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_FE_N_ST_R)\
		$(LIB_BE_N_ST_R)\
		$(LIB_BEC_FAIL_ST_R)\
		$(LIB_BEC_FILE_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_ST_R)

##############################
# Unit Tests

$(TARG_TEST_UNIT_lvls_dyninit_MT_D):	\
			$(OBJ_TEST_UNIT_lvls_dyninit_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_UNIT_lvls_dyninit_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_UNIT_lvls_dyninit_MT_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.levels.dynamic_initialisation\test.unit.levels.dynamic_initialisation.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.levels.dynamic_initialisation\test.unit.levels.dynamic_initialisation.cpp

$(TARG_TEST_UNIT_lvls_dyninit_MT_R):	\
			$(OBJ_TEST_UNIT_lvls_dyninit_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_UNIT_lvls_dyninit_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_UNIT_lvls_dyninit_MT_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.levels.dynamic_initialisation\test.unit.levels.dynamic_initialisation.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.levels.dynamic_initialisation\test.unit.levels.dynamic_initialisation.cpp

$(TARG_TEST_UNIT_lvls_dyninit_ST_D):	\
			$(OBJ_TEST_UNIT_lvls_dyninit_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_UNIT_lvls_dyninit_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_UNIT_lvls_dyninit_ST_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.levels.dynamic_initialisation\test.unit.levels.dynamic_initialisation.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.levels.dynamic_initialisation\test.unit.levels.dynamic_initialisation.cpp

$(TARG_TEST_UNIT_lvls_dyninit_ST_R):	\
			$(OBJ_TEST_UNIT_lvls_dyninit_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_UNIT_lvls_dyninit_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_UNIT_lvls_dyninit_ST_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.levels.dynamic_initialisation\test.unit.levels.dynamic_initialisation.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.levels.dynamic_initialisation\test.unit.levels.dynamic_initialisation.cpp

$(TARG_TEST_UNIT_lvls_vals_MT_D):	\
			$(OBJ_TEST_UNIT_lvls_vals_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_UNIT_lvls_vals_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_UNIT_lvls_vals_MT_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.levels.values\test.unit.levels.values.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.levels.values\test.unit.levels.values.c

$(TARG_TEST_UNIT_lvls_vals_MT_R):	\
			$(OBJ_TEST_UNIT_lvls_vals_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_UNIT_lvls_vals_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_UNIT_lvls_vals_MT_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.levels.values\test.unit.levels.values.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.levels.values\test.unit.levels.values.c

$(TARG_TEST_UNIT_lvls_vals_ST_D):	\
			$(OBJ_TEST_UNIT_lvls_vals_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_UNIT_lvls_vals_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_UNIT_lvls_vals_ST_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.levels.values\test.unit.levels.values.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.levels.values\test.unit.levels.values.c

$(TARG_TEST_UNIT_lvls_vals_ST_R):	\
			$(OBJ_TEST_UNIT_lvls_vals_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_UNIT_lvls_vals_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_UNIT_lvls_vals_ST_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.levels.values\test.unit.levels.values.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.levels.values\test.unit.levels.values.c

$(TARG_TEST_UNIT_getcurrtm_MT_D):	\
			$(OBJ_TEST_UNIT_getcurrtm_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(LIB_SHWILD_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_UNIT_getcurrtm_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_SHWILD_MT_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_UNIT_getcurrtm_MT_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.getcurrenttime\test.unit.util.getcurrenttime.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.getcurrenttime\test.unit.util.getcurrenttime.cpp

$(TARG_TEST_UNIT_getcurrtm_MT_R):	\
			$(OBJ_TEST_UNIT_getcurrtm_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(LIB_SHWILD_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_UNIT_getcurrtm_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_SHWILD_MT_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_UNIT_getcurrtm_MT_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.getcurrenttime\test.unit.util.getcurrenttime.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.getcurrenttime\test.unit.util.getcurrenttime.cpp

$(TARG_TEST_UNIT_getcurrtm_ST_D):	\
			$(OBJ_TEST_UNIT_getcurrtm_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(LIB_SHWILD_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_UNIT_getcurrtm_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_SHWILD_ST_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_UNIT_getcurrtm_ST_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.getcurrenttime\test.unit.util.getcurrenttime.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.getcurrenttime\test.unit.util.getcurrenttime.cpp

$(TARG_TEST_UNIT_getcurrtm_ST_R):	\
			$(OBJ_TEST_UNIT_getcurrtm_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(LIB_SHWILD_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_UNIT_getcurrtm_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_SHWILD_ST_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_UNIT_getcurrtm_ST_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.getcurrenttime\test.unit.util.getcurrenttime.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.getcurrenttime\test.unit.util.getcurrenttime.cpp

$(TARG_TEST_UNIT_getversion_MT_D):	\
			$(OBJ_TEST_UNIT_getversion_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_FE_FAIL_MT_D)\
			$(LIB_BE_FAIL_MT_D)\
			$(LIB_BEC_FAIL_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(LIB_SHWILD_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_UNIT_getversion_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIB_FE_FAIL_MT_D)\
		$(LIB_BE_FAIL_MT_D)\
		$(LIB_BEC_FAIL_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_SHWILD_MT_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_UNIT_getversion_MT_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.getversion\test.unit.getversion.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.getversion\test.unit.getversion.c

$(TARG_TEST_UNIT_getversion_MT_R):	\
			$(OBJ_TEST_UNIT_getversion_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_FE_FAIL_MT_R)\
			$(LIB_BE_FAIL_MT_R)\
			$(LIB_BEC_FAIL_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(LIB_SHWILD_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_UNIT_getversion_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIB_FE_FAIL_MT_R)\
		$(LIB_BE_FAIL_MT_R)\
		$(LIB_BEC_FAIL_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_SHWILD_MT_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_UNIT_getversion_MT_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.getversion\test.unit.getversion.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.getversion\test.unit.getversion.c

$(TARG_TEST_UNIT_getversion_ST_D):	\
			$(OBJ_TEST_UNIT_getversion_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_FE_FAIL_ST_D)\
			$(LIB_BE_FAIL_ST_D)\
			$(LIB_BEC_FAIL_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(LIB_SHWILD_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_UNIT_getversion_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIB_FE_FAIL_ST_D)\
		$(LIB_BE_FAIL_ST_D)\
		$(LIB_BEC_FAIL_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_SHWILD_ST_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_UNIT_getversion_ST_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.getversion\test.unit.getversion.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.getversion\test.unit.getversion.c

$(TARG_TEST_UNIT_getversion_ST_R):	\
			$(OBJ_TEST_UNIT_getversion_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_FE_FAIL_ST_R)\
			$(LIB_BE_FAIL_ST_R)\
			$(LIB_BEC_FAIL_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(LIB_SHWILD_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_UNIT_getversion_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIB_FE_FAIL_ST_R)\
		$(LIB_BE_FAIL_ST_R)\
		$(LIB_BEC_FAIL_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_SHWILD_ST_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_UNIT_getversion_ST_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.getversion\test.unit.getversion.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.getversion\test.unit.getversion.c

$(TARG_TEST_UNIT_gethostname_MT_D):	\
			$(OBJ_TEST_UNIT_gethostname_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(LIB_SHWILD_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_UNIT_gethostname_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_SHWILD_MT_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_UNIT_gethostname_MT_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.gethostname\test.unit.util.gethostname.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.gethostname\test.unit.util.gethostname.cpp

$(TARG_TEST_UNIT_gethostname_MT_R):	\
			$(OBJ_TEST_UNIT_gethostname_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(LIB_SHWILD_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_UNIT_gethostname_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_SHWILD_MT_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_UNIT_gethostname_MT_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.gethostname\test.unit.util.gethostname.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.gethostname\test.unit.util.gethostname.cpp

$(TARG_TEST_UNIT_gethostname_ST_D):	\
			$(OBJ_TEST_UNIT_gethostname_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(LIB_SHWILD_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_UNIT_gethostname_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_SHWILD_ST_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_UNIT_gethostname_ST_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.gethostname\test.unit.util.gethostname.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.gethostname\test.unit.util.gethostname.cpp

$(TARG_TEST_UNIT_gethostname_ST_R):	\
			$(OBJ_TEST_UNIT_gethostname_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(LIB_SHWILD_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_UNIT_gethostname_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_SHWILD_ST_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_UNIT_gethostname_ST_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.gethostname\test.unit.util.gethostname.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.gethostname\test.unit.util.gethostname.cpp

$(TARG_TEST_UNIT_onbailout_MT_D):	\
			$(OBJ_TEST_UNIT_onbailout_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(LIB_SHWILD_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_UNIT_onbailout_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_SHWILD_MT_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_UNIT_onbailout_MT_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.onbailout\test.unit.util.onbailout.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.onbailout\test.unit.util.onbailout.cpp

$(TARG_TEST_UNIT_onbailout_MT_R):	\
			$(OBJ_TEST_UNIT_onbailout_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(LIB_SHWILD_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_UNIT_onbailout_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_SHWILD_MT_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_UNIT_onbailout_MT_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.onbailout\test.unit.util.onbailout.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.onbailout\test.unit.util.onbailout.cpp

$(TARG_TEST_UNIT_onbailout_ST_D):	\
			$(OBJ_TEST_UNIT_onbailout_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(LIB_SHWILD_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_UNIT_onbailout_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_SHWILD_ST_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_UNIT_onbailout_ST_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.onbailout\test.unit.util.onbailout.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.onbailout\test.unit.util.onbailout.cpp

$(TARG_TEST_UNIT_onbailout_ST_R):	\
			$(OBJ_TEST_UNIT_onbailout_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(LIB_SHWILD_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_UNIT_onbailout_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_SHWILD_ST_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_UNIT_onbailout_ST_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.onbailout\test.unit.util.onbailout.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.onbailout\test.unit.util.onbailout.cpp

$(TARG_TEST_UNIT_strnlen_MT_D):	\
			$(OBJ_TEST_UNIT_strnlen_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(LIB_SHWILD_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_UNIT_strnlen_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_SHWILD_MT_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_UNIT_strnlen_MT_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.strnlen\test.unit.util.strnlen.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.strnlen\test.unit.util.strnlen.cpp

$(TARG_TEST_UNIT_strnlen_MT_R):	\
			$(OBJ_TEST_UNIT_strnlen_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(LIB_SHWILD_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_UNIT_strnlen_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_SHWILD_MT_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_UNIT_strnlen_MT_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.strnlen\test.unit.util.strnlen.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.strnlen\test.unit.util.strnlen.cpp

$(TARG_TEST_UNIT_strnlen_ST_D):	\
			$(OBJ_TEST_UNIT_strnlen_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(LIB_SHWILD_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_UNIT_strnlen_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_SHWILD_ST_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_UNIT_strnlen_ST_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.strnlen\test.unit.util.strnlen.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.strnlen\test.unit.util.strnlen.cpp

$(TARG_TEST_UNIT_strnlen_ST_R):	\
			$(OBJ_TEST_UNIT_strnlen_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(LIB_SHWILD_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_UNIT_strnlen_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_SHWILD_ST_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_UNIT_strnlen_ST_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.strnlen\test.unit.util.strnlen.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.strnlen\test.unit.util.strnlen.cpp

$(TARG_TEST_UNIT_bec_CEO_MT_D):	\
			$(OBJ_TEST_UNIT_bec_CEO_MT_D)\
			$(LIB_BEC_COMERROBJ_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(LIB_SHWILD_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_UNIT_bec_CEO_MT_D)\
		$(LIB_BEC_COMERROBJ_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_SHWILD_MT_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_UNIT_bec_CEO_MT_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.bec.COMErrorObject\test.unit.bec.COMErrorObject.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.bec.COMErrorObject\test.unit.bec.COMErrorObject.cpp

$(TARG_TEST_UNIT_bec_CEO_MT_R):	\
			$(OBJ_TEST_UNIT_bec_CEO_MT_R)\
			$(LIB_BEC_COMERROBJ_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(LIB_SHWILD_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_UNIT_bec_CEO_MT_R)\
		$(LIB_BEC_COMERROBJ_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_SHWILD_MT_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_UNIT_bec_CEO_MT_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.bec.COMErrorObject\test.unit.bec.COMErrorObject.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.bec.COMErrorObject\test.unit.bec.COMErrorObject.cpp

$(TARG_TEST_UNIT_bec_CEO_ST_D):	\
			$(OBJ_TEST_UNIT_bec_CEO_ST_D)\
			$(LIB_BEC_COMERROBJ_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(LIB_SHWILD_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_UNIT_bec_CEO_ST_D)\
		$(LIB_BEC_COMERROBJ_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_SHWILD_ST_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_UNIT_bec_CEO_ST_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.bec.COMErrorObject\test.unit.bec.COMErrorObject.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.bec.COMErrorObject\test.unit.bec.COMErrorObject.cpp

$(TARG_TEST_UNIT_bec_CEO_ST_R):	\
			$(OBJ_TEST_UNIT_bec_CEO_ST_R)\
			$(LIB_BEC_COMERROBJ_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(LIB_SHWILD_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_UNIT_bec_CEO_ST_R)\
		$(LIB_BEC_COMERROBJ_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_SHWILD_ST_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_UNIT_bec_CEO_ST_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.bec.COMErrorObject\test.unit.bec.COMErrorObject.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.bec.COMErrorObject\test.unit.bec.COMErrorObject.cpp

$(TARG_TEST_UNIT_bec_file_MT_D):	\
			$(OBJ_TEST_UNIT_bec_file_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_BEC_FILE_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_NULL_MT_D)\
			$(LIB_BEC_NULL_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(LIB_SHWILD_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_UNIT_bec_file_MT_D)\
		$(LIB_BEC_FILE_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_NULL_MT_D)\
		$(LIB_BEC_NULL_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_SHWILD_MT_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_UNIT_bec_file_MT_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.bec.file\test.unit.bec.file.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.bec.file\test.unit.bec.file.cpp

$(TARG_TEST_UNIT_bec_file_MT_R):	\
			$(OBJ_TEST_UNIT_bec_file_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_BEC_FILE_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_NULL_MT_R)\
			$(LIB_BEC_NULL_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(LIB_SHWILD_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_UNIT_bec_file_MT_R)\
		$(LIB_BEC_FILE_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_NULL_MT_R)\
		$(LIB_BEC_NULL_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_SHWILD_MT_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_UNIT_bec_file_MT_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.bec.file\test.unit.bec.file.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.bec.file\test.unit.bec.file.cpp

$(TARG_TEST_UNIT_bec_file_ST_D):	\
			$(OBJ_TEST_UNIT_bec_file_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_BEC_FILE_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_NULL_ST_D)\
			$(LIB_BEC_NULL_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(LIB_SHWILD_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_UNIT_bec_file_ST_D)\
		$(LIB_BEC_FILE_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_NULL_ST_D)\
		$(LIB_BEC_NULL_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_SHWILD_ST_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_UNIT_bec_file_ST_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.bec.file\test.unit.bec.file.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.bec.file\test.unit.bec.file.cpp

$(TARG_TEST_UNIT_bec_file_ST_R):	\
			$(OBJ_TEST_UNIT_bec_file_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_BEC_FILE_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_NULL_ST_R)\
			$(LIB_BEC_NULL_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(LIB_SHWILD_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_UNIT_bec_file_ST_R)\
		$(LIB_BEC_FILE_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_NULL_ST_R)\
		$(LIB_BEC_NULL_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_SHWILD_ST_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_UNIT_bec_file_ST_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.bec.file\test.unit.bec.file.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.bec.file\test.unit.bec.file.cpp

$(TARG_TEST_UNIT_bec_fprintf_MT_D):	\
			$(OBJ_TEST_UNIT_bec_fprintf_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_BEC_FPRINTF_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_BE_NULL_MT_D)\
			$(LIB_BEC_NULL_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(LIB_SHWILD_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_UNIT_bec_fprintf_MT_D)\
		$(LIB_BEC_FPRINTF_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_BE_NULL_MT_D)\
		$(LIB_BEC_NULL_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_SHWILD_MT_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_UNIT_bec_fprintf_MT_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.bec.fprintf\test.unit.bec.fprintf.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.bec.fprintf\test.unit.bec.fprintf.cpp

$(TARG_TEST_UNIT_bec_fprintf_MT_R):	\
			$(OBJ_TEST_UNIT_bec_fprintf_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_BEC_FPRINTF_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_BE_NULL_MT_R)\
			$(LIB_BEC_NULL_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(LIB_SHWILD_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_UNIT_bec_fprintf_MT_R)\
		$(LIB_BEC_FPRINTF_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_BE_NULL_MT_R)\
		$(LIB_BEC_NULL_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_SHWILD_MT_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_UNIT_bec_fprintf_MT_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.bec.fprintf\test.unit.bec.fprintf.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.bec.fprintf\test.unit.bec.fprintf.cpp

$(TARG_TEST_UNIT_bec_fprintf_ST_D):	\
			$(OBJ_TEST_UNIT_bec_fprintf_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_BEC_FPRINTF_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_BE_NULL_ST_D)\
			$(LIB_BEC_NULL_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(LIB_SHWILD_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_UNIT_bec_fprintf_ST_D)\
		$(LIB_BEC_FPRINTF_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_BE_NULL_ST_D)\
		$(LIB_BEC_NULL_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_SHWILD_ST_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_UNIT_bec_fprintf_ST_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.bec.fprintf\test.unit.bec.fprintf.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.bec.fprintf\test.unit.bec.fprintf.cpp

$(TARG_TEST_UNIT_bec_fprintf_ST_R):	\
			$(OBJ_TEST_UNIT_bec_fprintf_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_BEC_FPRINTF_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_BE_NULL_ST_R)\
			$(LIB_BEC_NULL_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(LIB_SHWILD_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_UNIT_bec_fprintf_ST_R)\
		$(LIB_BEC_FPRINTF_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_BE_NULL_ST_R)\
		$(LIB_BEC_NULL_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_SHWILD_ST_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_UNIT_bec_fprintf_ST_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.bec.fprintf\test.unit.bec.fprintf.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.bec.fprintf\test.unit.bec.fprintf.cpp

$(TARG_TEST_UNIT_bec_fail_MT_D):	\
			$(OBJ_TEST_UNIT_bec_fail_MT_D)\
			$(LIB_BEC_FAIL_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(LIB_SHWILD_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_UNIT_bec_fail_MT_D)\
		$(LIB_BEC_FAIL_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_SHWILD_MT_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_UNIT_bec_fail_MT_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.bec.fail\test.unit.bec.fail.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.bec.fail\test.unit.bec.fail.c

$(TARG_TEST_UNIT_bec_fail_MT_R):	\
			$(OBJ_TEST_UNIT_bec_fail_MT_R)\
			$(LIB_BEC_FAIL_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(LIB_SHWILD_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_UNIT_bec_fail_MT_R)\
		$(LIB_BEC_FAIL_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_SHWILD_MT_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_UNIT_bec_fail_MT_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.bec.fail\test.unit.bec.fail.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.bec.fail\test.unit.bec.fail.c

$(TARG_TEST_UNIT_bec_fail_ST_D):	\
			$(OBJ_TEST_UNIT_bec_fail_ST_D)\
			$(LIB_BEC_FAIL_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(LIB_SHWILD_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_UNIT_bec_fail_ST_D)\
		$(LIB_BEC_FAIL_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_SHWILD_ST_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_UNIT_bec_fail_ST_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.bec.fail\test.unit.bec.fail.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.bec.fail\test.unit.bec.fail.c

$(TARG_TEST_UNIT_bec_fail_ST_R):	\
			$(OBJ_TEST_UNIT_bec_fail_ST_R)\
			$(LIB_BEC_FAIL_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(LIB_SHWILD_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_UNIT_bec_fail_ST_R)\
		$(LIB_BEC_FAIL_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_SHWILD_ST_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_UNIT_bec_fail_ST_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.bec.fail\test.unit.bec.fail.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.bec.fail\test.unit.bec.fail.c

$(TARG_TEST_UNIT_be_fail_MT_D):	\
			$(OBJ_TEST_UNIT_be_fail_MT_D)\
			$(LIB_BE_FAIL_MT_D)\
			$(LIB_BEC_FAIL_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(LIB_SHWILD_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_UNIT_be_fail_MT_D)\
		$(LIB_BE_FAIL_MT_D)\
		$(LIB_BEC_FAIL_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_SHWILD_MT_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_UNIT_be_fail_MT_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.be.fail\test.unit.be.fail.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.be.fail\test.unit.be.fail.c

$(TARG_TEST_UNIT_be_fail_MT_R):	\
			$(OBJ_TEST_UNIT_be_fail_MT_R)\
			$(LIB_BE_FAIL_MT_R)\
			$(LIB_BEC_FAIL_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(LIB_SHWILD_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_UNIT_be_fail_MT_R)\
		$(LIB_BE_FAIL_MT_R)\
		$(LIB_BEC_FAIL_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_SHWILD_MT_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_UNIT_be_fail_MT_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.be.fail\test.unit.be.fail.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.be.fail\test.unit.be.fail.c

$(TARG_TEST_UNIT_be_fail_ST_D):	\
			$(OBJ_TEST_UNIT_be_fail_ST_D)\
			$(LIB_BE_FAIL_ST_D)\
			$(LIB_BEC_FAIL_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(LIB_SHWILD_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_UNIT_be_fail_ST_D)\
		$(LIB_BE_FAIL_ST_D)\
		$(LIB_BEC_FAIL_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_SHWILD_ST_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_UNIT_be_fail_ST_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.be.fail\test.unit.be.fail.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.be.fail\test.unit.be.fail.c

$(TARG_TEST_UNIT_be_fail_ST_R):	\
			$(OBJ_TEST_UNIT_be_fail_ST_R)\
			$(LIB_BE_FAIL_ST_R)\
			$(LIB_BEC_FAIL_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(LIB_SHWILD_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_UNIT_be_fail_ST_R)\
		$(LIB_BE_FAIL_ST_R)\
		$(LIB_BEC_FAIL_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_SHWILD_ST_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_UNIT_be_fail_ST_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.be.fail\test.unit.be.fail.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.be.fail\test.unit.be.fail.c

#
$(TARG_TEST_UNIT_be_lrsplit_MT_D):	\
			$(OBJ_TEST_UNIT_be_lrsplit_MT_D)\
			$(LIB_BE_LRSPLIT_MT_D)\
			$(LIB_FE_ALL_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(LIB_SHWILD_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_UNIT_be_lrsplit_MT_D)\
		$(LIB_BE_LRSPLIT_MT_D)\
		$(LIB_FE_ALL_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_SHWILD_MT_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_UNIT_be_lrsplit_MT_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.be.lrsplit\test.unit.be.lrsplit.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.be.lrsplit\test.unit.be.lrsplit.c

$(TARG_TEST_UNIT_be_lrsplit_MT_R):	\
			$(OBJ_TEST_UNIT_be_lrsplit_MT_R)\
			$(LIB_BE_LRSPLIT_MT_R)\
			$(LIB_FE_ALL_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(LIB_SHWILD_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_UNIT_be_lrsplit_MT_R)\
		$(LIB_BE_LRSPLIT_MT_R)\
		$(LIB_FE_ALL_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_SHWILD_MT_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_UNIT_be_lrsplit_MT_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.be.lrsplit\test.unit.be.lrsplit.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.be.lrsplit\test.unit.be.lrsplit.c

$(TARG_TEST_UNIT_be_lrsplit_ST_D):	\
			$(OBJ_TEST_UNIT_be_lrsplit_ST_D)\
			$(LIB_BE_LRSPLIT_ST_D)\
			$(LIB_FE_ALL_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(LIB_SHWILD_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_UNIT_be_lrsplit_ST_D)\
		$(LIB_BE_LRSPLIT_ST_D)\
		$(LIB_FE_ALL_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_SHWILD_ST_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_UNIT_be_lrsplit_ST_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.be.lrsplit\test.unit.be.lrsplit.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.be.lrsplit\test.unit.be.lrsplit.c

$(TARG_TEST_UNIT_be_lrsplit_ST_R):	\
			$(OBJ_TEST_UNIT_be_lrsplit_ST_R)\
			$(LIB_BE_LRSPLIT_ST_R)\
			$(LIB_FE_ALL_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(LIB_SHWILD_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_UNIT_be_lrsplit_ST_R)\
		$(LIB_BE_LRSPLIT_ST_R)\
		$(LIB_FE_ALL_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_SHWILD_ST_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_UNIT_be_lrsplit_ST_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.be.lrsplit\test.unit.be.lrsplit.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.be.lrsplit\test.unit.be.lrsplit.c

$(TARG_TEST_UNIT_be_N_MT_D):	\
			$(OBJ_TEST_UNIT_be_N_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_CORE_MT_D)\
			$(LIB_BE_N_MT_D)\
			$(LIB_FE_ALL_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(LIB_SHWILD_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_UNIT_be_N_MT_D)\
		$(LIB_BE_N_MT_D)\
		$(LIB_FE_ALL_MT_D)\
		$(LIB_CORE_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_SHWILD_MT_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_UNIT_be_N_MT_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.be.N\test.unit.be.N.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.be.N\test.unit.be.N.c

$(TARG_TEST_UNIT_be_N_MT_R):	\
			$(OBJ_TEST_UNIT_be_N_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_CORE_MT_R)\
			$(LIB_BE_N_MT_R)\
			$(LIB_FE_ALL_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(LIB_SHWILD_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_UNIT_be_N_MT_R)\
		$(LIB_BE_N_MT_R)\
		$(LIB_FE_ALL_MT_R)\
		$(LIB_CORE_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_SHWILD_MT_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_UNIT_be_N_MT_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.be.N\test.unit.be.N.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.be.N\test.unit.be.N.c

$(TARG_TEST_UNIT_be_N_ST_D):	\
			$(OBJ_TEST_UNIT_be_N_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_CORE_ST_D)\
			$(LIB_BE_N_ST_D)\
			$(LIB_FE_ALL_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(LIB_SHWILD_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_UNIT_be_N_ST_D)\
		$(LIB_BE_N_ST_D)\
		$(LIB_FE_ALL_ST_D)\
		$(LIB_CORE_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_SHWILD_ST_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_UNIT_be_N_ST_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.be.N\test.unit.be.N.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.be.N\test.unit.be.N.c

$(TARG_TEST_UNIT_be_N_ST_R):	\
			$(OBJ_TEST_UNIT_be_N_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_CORE_ST_R)\
			$(LIB_BE_N_ST_R)\
			$(LIB_FE_ALL_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(LIB_SHWILD_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_UNIT_be_N_ST_R)\
		$(LIB_BE_N_ST_R)\
		$(LIB_FE_ALL_ST_R)\
		$(LIB_CORE_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_SHWILD_ST_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_UNIT_be_N_ST_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.be.N\test.unit.be.N.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.be.N\test.unit.be.N.c

$(TARG_TEST_UNIT_fe_all_MT_D):	\
			$(OBJ_TEST_UNIT_fe_all_MT_D)\
			$(LIB_FE_ALL_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(LIB_SHWILD_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_UNIT_fe_all_MT_D)\
		$(LIB_FE_ALL_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_SHWILD_MT_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_UNIT_fe_all_MT_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.all\test.unit.fe.all.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.all\test.unit.fe.all.c

$(TARG_TEST_UNIT_fe_all_MT_R):	\
			$(OBJ_TEST_UNIT_fe_all_MT_R)\
			$(LIB_FE_ALL_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(LIB_SHWILD_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_UNIT_fe_all_MT_R)\
		$(LIB_FE_ALL_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_SHWILD_MT_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_UNIT_fe_all_MT_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.all\test.unit.fe.all.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.all\test.unit.fe.all.c

$(TARG_TEST_UNIT_fe_all_ST_D):	\
			$(OBJ_TEST_UNIT_fe_all_ST_D)\
			$(LIB_FE_ALL_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(LIB_SHWILD_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_UNIT_fe_all_ST_D)\
		$(LIB_FE_ALL_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_SHWILD_ST_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_UNIT_fe_all_ST_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.all\test.unit.fe.all.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.all\test.unit.fe.all.c

$(TARG_TEST_UNIT_fe_all_ST_R):	\
			$(OBJ_TEST_UNIT_fe_all_ST_R)\
			$(LIB_FE_ALL_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(LIB_SHWILD_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_UNIT_fe_all_ST_R)\
		$(LIB_FE_ALL_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_SHWILD_ST_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_UNIT_fe_all_ST_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.all\test.unit.fe.all.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.all\test.unit.fe.all.c

$(TARG_TEST_UNIT_fe_fail_MT_D):	\
			$(OBJ_TEST_UNIT_fe_fail_MT_D)\
			$(LIB_FE_FAIL_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(LIB_SHWILD_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_UNIT_fe_fail_MT_D)\
		$(LIB_FE_FAIL_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_SHWILD_MT_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_UNIT_fe_fail_MT_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.fail\test.unit.fe.fail.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.fail\test.unit.fe.fail.c

$(TARG_TEST_UNIT_fe_fail_MT_R):	\
			$(OBJ_TEST_UNIT_fe_fail_MT_R)\
			$(LIB_FE_FAIL_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(LIB_SHWILD_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_UNIT_fe_fail_MT_R)\
		$(LIB_FE_FAIL_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_SHWILD_MT_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_UNIT_fe_fail_MT_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.fail\test.unit.fe.fail.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.fail\test.unit.fe.fail.c

$(TARG_TEST_UNIT_fe_fail_ST_D):	\
			$(OBJ_TEST_UNIT_fe_fail_ST_D)\
			$(LIB_FE_FAIL_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(LIB_SHWILD_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_UNIT_fe_fail_ST_D)\
		$(LIB_FE_FAIL_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_SHWILD_ST_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_UNIT_fe_fail_ST_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.fail\test.unit.fe.fail.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.fail\test.unit.fe.fail.c

$(TARG_TEST_UNIT_fe_fail_ST_R):	\
			$(OBJ_TEST_UNIT_fe_fail_ST_R)\
			$(LIB_FE_FAIL_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(LIB_SHWILD_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_UNIT_fe_fail_ST_R)\
		$(LIB_FE_FAIL_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_SHWILD_ST_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_UNIT_fe_fail_ST_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.fail\test.unit.fe.fail.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.fail\test.unit.fe.fail.c

$(TARG_TEST_UNIT_fe_N_MT_D):	\
			$(OBJ_TEST_UNIT_fe_N_MT_D)\
			$(LIB_FE_N_MT_D)\
			$(LIB_UTIL_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(LIB_SHWILD_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_UNIT_fe_N_MT_D)\
		$(LIB_FE_N_MT_D)\
		$(LIB_UTIL_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_SHWILD_MT_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_UNIT_fe_N_MT_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.N\test.unit.fe.N.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.N\test.unit.fe.N.c

$(TARG_TEST_UNIT_fe_N_MT_R):	\
			$(OBJ_TEST_UNIT_fe_N_MT_R)\
			$(LIB_FE_N_MT_R)\
			$(LIB_UTIL_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(LIB_SHWILD_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_UNIT_fe_N_MT_R)\
		$(LIB_FE_N_MT_R)\
		$(LIB_UTIL_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_SHWILD_MT_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_UNIT_fe_N_MT_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.N\test.unit.fe.N.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.N\test.unit.fe.N.c

$(TARG_TEST_UNIT_fe_N_ST_D):	\
			$(OBJ_TEST_UNIT_fe_N_ST_D)\
			$(LIB_FE_N_ST_D)\
			$(LIB_UTIL_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(LIB_SHWILD_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_UNIT_fe_N_ST_D)\
		$(LIB_FE_N_ST_D)\
		$(LIB_UTIL_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_SHWILD_ST_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_UNIT_fe_N_ST_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.N\test.unit.fe.N.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.N\test.unit.fe.N.c

$(TARG_TEST_UNIT_fe_N_ST_R):	\
			$(OBJ_TEST_UNIT_fe_N_ST_R)\
			$(LIB_FE_N_ST_R)\
			$(LIB_UTIL_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(LIB_SHWILD_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_UNIT_fe_N_ST_R)\
		$(LIB_FE_N_ST_R)\
		$(LIB_UTIL_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_SHWILD_ST_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_UNIT_fe_N_ST_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.N\test.unit.fe.N.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.N\test.unit.fe.N.c

$(TARG_TEST_UNIT_fe_null_MT_D):	\
			$(OBJ_TEST_UNIT_fe_null_MT_D)\
			$(LIB_FE_NULL_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(LIB_SHWILD_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_UNIT_fe_null_MT_D)\
		$(LIB_FE_NULL_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_SHWILD_MT_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_UNIT_fe_null_MT_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.null\test.unit.fe.null.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.null\test.unit.fe.null.c

$(TARG_TEST_UNIT_fe_null_MT_R):	\
			$(OBJ_TEST_UNIT_fe_null_MT_R)\
			$(LIB_FE_NULL_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(LIB_SHWILD_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_UNIT_fe_null_MT_R)\
		$(LIB_FE_NULL_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_SHWILD_MT_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_UNIT_fe_null_MT_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.null\test.unit.fe.null.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.null\test.unit.fe.null.c

$(TARG_TEST_UNIT_fe_null_ST_D):	\
			$(OBJ_TEST_UNIT_fe_null_ST_D)\
			$(LIB_FE_NULL_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(LIB_SHWILD_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_UNIT_fe_null_ST_D)\
		$(LIB_FE_NULL_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_SHWILD_ST_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_UNIT_fe_null_ST_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.null\test.unit.fe.null.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.null\test.unit.fe.null.c

$(TARG_TEST_UNIT_fe_null_ST_R):	\
			$(OBJ_TEST_UNIT_fe_null_ST_R)\
			$(LIB_FE_NULL_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(LIB_SHWILD_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_UNIT_fe_null_ST_R)\
		$(LIB_FE_NULL_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_SHWILD_ST_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_UNIT_fe_null_ST_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.null\test.unit.fe.null.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.null\test.unit.fe.null.c

$(TARG_TEST_UNIT_fe_simple_MT_D):	\
			$(OBJ_TEST_UNIT_fe_simple_MT_D)\
			$(LIB_FE_SIMPLE_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(LIB_SHWILD_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_UNIT_fe_simple_MT_D)\
		$(LIB_FE_SIMPLE_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_SHWILD_MT_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_UNIT_fe_simple_MT_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.simple\test.unit.fe.simple.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_D) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.simple\test.unit.fe.simple.c

$(TARG_TEST_UNIT_fe_simple_MT_R):	\
			$(OBJ_TEST_UNIT_fe_simple_MT_R)\
			$(LIB_FE_SIMPLE_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(LIB_SHWILD_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_UNIT_fe_simple_MT_R)\
		$(LIB_FE_SIMPLE_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_SHWILD_MT_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_UNIT_fe_simple_MT_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.simple\test.unit.fe.simple.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_MT_R) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.simple\test.unit.fe.simple.c

$(TARG_TEST_UNIT_fe_simple_ST_D):	\
			$(OBJ_TEST_UNIT_fe_simple_ST_D)\
			$(LIB_FE_SIMPLE_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(LIB_SHWILD_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_UNIT_fe_simple_ST_D)\
		$(LIB_FE_SIMPLE_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_SHWILD_ST_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_UNIT_fe_simple_ST_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.simple\test.unit.fe.simple.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_ST_D) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.simple\test.unit.fe.simple.c

$(TARG_TEST_UNIT_fe_simple_ST_R):	\
			$(OBJ_TEST_UNIT_fe_simple_ST_R)\
			$(LIB_FE_SIMPLE_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(LIB_SHWILD_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_UNIT_fe_simple_ST_R)\
		$(LIB_FE_SIMPLE_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_SHWILD_ST_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_UNIT_fe_simple_ST_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.simple\test.unit.fe.simple.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_ST_R) $(CC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.simple\test.unit.fe.simple.c

$(TARG_TEST_UNIT_fe_WinReg_MT_D):	\
			$(OBJ_TEST_UNIT_fe_WinReg_MT_D)\
			$(LIB_FE_WINREG_MT_D)\
			$(LIB_XTESTS_MT_D)\
			$(LIB_SHWILD_MT_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_D) -o $@ \
		$(OBJ_TEST_UNIT_fe_WinReg_MT_D)\
		$(LIB_FE_WINREG_MT_D)\
		$(LIB_XTESTS_MT_D)\
		$(LIB_SHWILD_MT_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_D)

$(OBJ_TEST_UNIT_fe_WinReg_MT_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.WindowsRegistry\test.unit.fe.WindowsRegistry.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.WindowsRegistry\test.unit.fe.WindowsRegistry.cpp

$(TARG_TEST_UNIT_fe_WinReg_MT_R):	\
			$(OBJ_TEST_UNIT_fe_WinReg_MT_R)\
			$(LIB_FE_WINREG_MT_R)\
			$(LIB_XTESTS_MT_R)\
			$(LIB_SHWILD_MT_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_MT_R) -o $@ \
		$(OBJ_TEST_UNIT_fe_WinReg_MT_R)\
		$(LIB_FE_WINREG_MT_R)\
		$(LIB_XTESTS_MT_R)\
		$(LIB_SHWILD_MT_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_MT_R)

$(OBJ_TEST_UNIT_fe_WinReg_MT_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.WindowsRegistry\test.unit.fe.WindowsRegistry.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_MT_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.WindowsRegistry\test.unit.fe.WindowsRegistry.cpp

$(TARG_TEST_UNIT_fe_WinReg_ST_D):	\
			$(OBJ_TEST_UNIT_fe_WinReg_ST_D)\
			$(LIB_FE_WINREG_ST_D)\
			$(LIB_XTESTS_ST_D)\
			$(LIB_SHWILD_ST_D)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_D) -o $@ \
		$(OBJ_TEST_UNIT_fe_WinReg_ST_D)\
		$(LIB_FE_WINREG_ST_D)\
		$(LIB_XTESTS_ST_D)\
		$(LIB_SHWILD_ST_D)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_D)

$(OBJ_TEST_UNIT_fe_WinReg_ST_D):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.WindowsRegistry\test.unit.fe.WindowsRegistry.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_D) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.WindowsRegistry\test.unit.fe.WindowsRegistry.cpp

$(TARG_TEST_UNIT_fe_WinReg_ST_R):	\
			$(OBJ_TEST_UNIT_fe_WinReg_ST_R)\
			$(LIB_FE_WINREG_ST_R)\
			$(LIB_XTESTS_ST_R)\
			$(LIB_SHWILD_ST_R)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_ST_R) -o $@ \
		$(OBJ_TEST_UNIT_fe_WinReg_ST_R)\
		$(LIB_FE_WINREG_ST_R)\
		$(LIB_XTESTS_ST_R)\
		$(LIB_SHWILD_ST_R)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_ST_R)

$(OBJ_TEST_UNIT_fe_WinReg_ST_R):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.WindowsRegistry\test.unit.fe.WindowsRegistry.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_ST_R) $(CPPC_INCLUDES) -o $@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.WindowsRegistry\test.unit.fe.WindowsRegistry.cpp

############################### end of file ################################
