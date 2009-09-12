############################################################################
# File: 	makefile
#
# Purpose:	Makefile for the Pantheios project, for the Arturius C/C++ Compiler Multiplexer
#			compiler, on Win32
#
# Created:	15th Feburary 2005
# Updated:	4th July 2009
#
############################################################################


############################################################################
# Symbols

########################################
# Project & compiler version

COMP_TAG			=	ar
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

CC                      =   arcc.debug
CPPC                    =   arcc.debug
AR                      =   lib
LD                      =   arld
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

CC_B64_INCLUDES_DEBUG =\
$(CC_B64_INCLUDES_BASE)\
 \

CC_B64_INCLUDES_RELEASE =\
$(CC_B64_INCLUDES_BASE)\
 \


CPPC_B64_INCLUDES_BASE =\
$(CPPC_INCLUDES_BASE)\
 \

CPPC_B64_INCLUDES_DEBUG =\
$(CPPC_B64_INCLUDES_BASE)\
 \

CPPC_B64_INCLUDES_RELEASE =\
$(CPPC_B64_INCLUDES_BASE)\
 \


# shwild

CPPC_SHWILD_INCLUDES_BASE =\
$(CPPC_INCLUDES_BASE)\
 \

CPPC_SHWILD_INCLUDES_DEBUG =\
$(CPPC_SHWILD_INCLUDES_BASE)\
 \

CPPC_SHWILD_INCLUDES_RELEASE =\
$(CPPC_SHWILD_INCLUDES_BASE)\
 \


# xTests

CPPC_XTESTS_INCLUDES_BASE =\
$(CPPC_INCLUDES_BASE)\
 \

CPPC_XTESTS_INCLUDES_DEBUG =\
$(CPPC_XTESTS_INCLUDES_BASE)\
 \

CPPC_XTESTS_INCLUDES_RELEASE =\
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

TARGET_LIB_DEBUG	= 
TARGET_LIB_RELEASE	= 

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
CC_F_WARNING_MAX		=	--warning-level=maximum
CC_F_WARNING_ERR		=	--warnings-as-errors=on
CC_F_WARNINGS_LIMIT		=	
CC_F_MINIMUM_SIZE		=	--minimum-size
#CC_F_MAXIMUM_SPEED		=	--maximum-speed
CC_APP_F_WARNING_MAX	=	$(CC_F_WARNING_MAX)
CC_APP_F_WARNING_ERR	=	$(CC_F_WARNING_ERR)

# CPPC flags

CPPC_F_NOLOGO			=	
CPPC_F_COMPILE_ONLY 	=	-c
CPPC_F_WARNING_MAX		=	--warning-level=maximum
CPPC_F_WARNING_ERR		=	--warnings-as-errors=on
CPPC_F_EXCEPTIONS_ON	=	--exception-handling=on
CPPC_F_EXCEPTIONS_OFF	=	--exception-handling=off
CPPC_F_EXCEPTIONS		=	$(CPPC_F_EXCEPTIONS_ON)
CPPC_F_RTTI_ON			=	
CPPC_F_RTTI_OFF 		=	
CPPC_F_RTTI				=	$(CPPC_F_RTTI_ON)
CPPC_F_WARNINGS_LIMIT	=	
CPPC_F_MINIMUM_SIZE 	=	--minimum-size
CPPC_F_MAXIMUM_SPEED	=	--maximum-speed
CPPC_F_OPTIMISED		=	$(CPPC_F_MAXIMUM_SPEED)
CPPC_APP_F_WARNING_MAX	=	$(CPPC_F_WARNING_MAX)
CPPC_APP_F_WARNING_ERR	=	$(CPPC_F_WARNING_ERR)



CC_TOOL_FLAGS		=	--compilers=bc56,dmb-stlport,gcc34,icl8,vc6,vc71,ow12 --active-compiler=vc/6 --announce-tool-commands

CPPC_TOOL_FLAGS 	=	--compilers=bc56,dmb-stlport,gcc34,icl8,vc6,vc71 --active-compiler=vc/6 --announce-tool-commands



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
CC_LIB_ARGS_DEBUG			=	$(CC_FLAGS) -D_DEBUG -UNDEBUG  $(CC_DEFS) -DPANTHEIOS_NO_AUTO_INIT
CC_LIB_ARGS_RELEASE			=	$(CC_FLAGS) -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS) -DPANTHEIOS_NO_AUTO_INIT

CPPC_LIB_ARGS_DEBUG			=	$(CPPC_FLAGS) -D_DEBUG -UNDEBUG  $(CPPC_DEFS) -DPANTHEIOS_NO_AUTO_INIT
CPPC_LIB_ARGS_RELEASE			=	$(CPPC_FLAGS) -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS) -DPANTHEIOS_NO_AUTO_INIT


# - b64
CC_B64_ARGS_DEBUG			=	$(CC_B64_FLAGS) -D_DEBUG -UNDEBUG  $(CC_DEFS)
CC_B64_ARGS_RELEASE			=	$(CC_B64_FLAGS) -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS)

CPPC_B64_ARGS_DEBUG			=	$(CPPC_B64_FLAGS) -D_DEBUG -UNDEBUG  $(CPPC_DEFS)
CPPC_B64_ARGS_RELEASE			=	$(CPPC_B64_FLAGS) -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS)


# - shwild
CC_SHWILD_ARGS_DEBUG			=	$(CC_SHWILD_FLAGS) -D_DEBUG -UNDEBUG  $(CC_DEFS)
CC_SHWILD_ARGS_RELEASE			=	$(CC_SHWILD_FLAGS) -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS)

CPPC_SHWILD_ARGS_DEBUG		=	$(CPPC_SHWILD_FLAGS) -D_DEBUG -UNDEBUG  $(CPPC_DEFS)
CPPC_SHWILD_ARGS_RELEASE		=	$(CPPC_SHWILD_FLAGS) -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS)


# - xTests
CC_XTESTS_ARGS_DEBUG			=	$(CC_XTESTS_FLAGS) -D_DEBUG -UNDEBUG  $(CC_DEFS)
CC_XTESTS_ARGS_RELEASE			=	$(CC_XTESTS_FLAGS) -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS)

CPPC_XTESTS_ARGS_DEBUG			=	$(CPPC_XTESTS_FLAGS) -D_DEBUG -UNDEBUG  $(CPPC_DEFS)
CPPC_XTESTS_ARGS_RELEASE			=	$(CPPC_XTESTS_FLAGS) -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS)


# - Examples
CC_EXAMPLE_ARGS_DEBUG		=	$(CC_EXAMPLE_FLAGS) -D_DEBUG -UNDEBUG  $(CC_DEFS)
CC_EXAMPLE_ARGS_RELEASE		=	$(CC_EXAMPLE_FLAGS) -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS)

CPPC_EXAMPLE_ARGS_DEBUG		=	$(CPPC_EXAMPLE_FLAGS) -D_DEBUG -UNDEBUG  $(CPPC_DEFS)
CPPC_EXAMPLE_ARGS_RELEASE		=	$(CPPC_EXAMPLE_FLAGS) -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS)


# - Test (Component)
CC_TEST_COMPONENT_ARGS_DEBUG			=	$(CC_TEST_COMPONENT_FLAGS) -D_DEBUG -UNDEBUG  $(CC_DEFS)
CC_TEST_COMPONENT_ARGS_RELEASE			=	$(CC_TEST_COMPONENT_FLAGS) -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS)

CPPC_TEST_COMPONENT_ARGS_DEBUG			=	$(CPPC_TEST_COMPONENT_FLAGS) -D_DEBUG -UNDEBUG  $(CPPC_DEFS)
CPPC_TEST_COMPONENT_ARGS_RELEASE			=	$(CPPC_TEST_COMPONENT_FLAGS) -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS)


# - Test (Scratch)
CC_TEST_SCRATCH_ARGS_DEBUG			=	$(CC_TEST_SCRATCH_FLAGS) -D_DEBUG -UNDEBUG  $(CC_DEFS)
CC_TEST_SCRATCH_ARGS_RELEASE			=	$(CC_TEST_SCRATCH_FLAGS) -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS)

CPPC_TEST_SCRATCH_ARGS_DEBUG			=	$(CPPC_TEST_SCRATCH_FLAGS) -D_DEBUG -UNDEBUG  $(CPPC_DEFS)
CPPC_TEST_SCRATCH_ARGS_RELEASE			=	$(CPPC_TEST_SCRATCH_FLAGS) -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS)


# - Test (Unit)
CC_TEST_UNIT_ARGS_DEBUG			=	$(CC_TEST_UNIT_FLAGS) -D_DEBUG -UNDEBUG  $(CC_DEFS)
CC_TEST_UNIT_ARGS_RELEASE			=	$(CC_TEST_UNIT_FLAGS) -DNDEBUG -U_DEBUG $(CC_F_MAXIMUM_SPEED)  $(CC_DEFS)

CPPC_TEST_UNIT_ARGS_DEBUG			=	$(CPPC_TEST_UNIT_FLAGS) -D_DEBUG -UNDEBUG  $(CPPC_DEFS)
CPPC_TEST_UNIT_ARGS_RELEASE			=	$(CPPC_TEST_UNIT_FLAGS) -DNDEBUG -U_DEBUG $(CPPC_F_MAXIMUM_SPEED)  $(CPPC_DEFS)


# AR args

AR_ARGS 			=	


# LD flags

LD_ARGS 		=	

LD_F_NOLOGO = 

# LD args

LD_ARGS_DEBUG =  $(LD_ARGS) $(LD_F_NOLOGO) $(LIBPATHS) $(COMMON_LIB)
LD_ARGS_RELEASE =  $(LD_ARGS) $(LD_F_NOLOGO) $(LIBPATHS) $(COMMON_LIB)

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
 $(PROJ_INCLUDE_DIR)\pantheios\inserters\fmt.hpp\
 $(PROJ_INCLUDE_DIR)\pantheios\inserters\hex_ptr.hpp\
 $(PROJ_INCLUDE_DIR)\pantheios\inserters\hostid.hpp\
 $(PROJ_INCLUDE_DIR)\pantheios\inserters\integer.hpp\
 $(PROJ_INCLUDE_DIR)\pantheios\inserters\pad.hpp\
 $(PROJ_INCLUDE_DIR)\pantheios\inserters\pointer.hpp\
 $(PROJ_INCLUDE_DIR)\pantheios\inserters\processid.hpp\
 $(PROJ_INCLUDE_DIR)\pantheios\inserters\real.hpp\
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
LIB_UTIL_DEBUG				=   $(PROJ_LIB_DIR)\$(PROJ_TAG_VER).util.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib

#  core
LIB_CORE_DEBUG				=   $(PROJ_LIB_DIR)\$(PROJ_TAG_VER).core.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib

#  front-end(s)
LIB_FE_ALL_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).fe.all.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_FE_FAIL_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).fe.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_FE_N_DEBUG				=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).fe.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_FE_NULL_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).fe.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_FE_SIMPLE_DEBUG		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).fe.simple.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_FE_WINREG_DEBUG		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).fe.WindowsRegistry.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib

#  back-end(s)
LIB_BE_LRSPLIT_DEBUG 		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.lrsplit.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BE_N_DEBUG 			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEC_TEST_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BE_TEST_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEL_TEST_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BER_TEST_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEC_FAIL_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BE_FAIL_DEBUG 			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEL_FAIL_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BER_FAIL_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEC_FILE_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEC_FILE_WC_DEBUG		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.file.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BE_FILE_DEBUG 			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEL_FILE_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BER_FILE_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEC_FPRINTF_DEBUG		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEC_FPRINTF_WC_DEBUG	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.fprintf.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BE_FPRINTF_DEBUG 		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEL_FPRINTF_DEBUG		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BER_FPRINTF_DEBUG		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEC_NULL_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BE_NULL_DEBUG 			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEL_NULL_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BER_NULL_DEBUG			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEC_COMERROBJ_DEBUG	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEC_COMERROBJ_WC_DEBUG	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.COMErrorObject.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BE_COMERROBJ_DEBUG 	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEL_COMERROBJ_DEBUG	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BER_COMERROBJ_DEBUG	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEC_SPEECH_DEBUG		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.speech.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEC_SPEECH_WC_DEBUG	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.speech.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BE_SPEECH_DEBUG 		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.speech.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEL_SPEECH_DEBUG		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.speech.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BER_SPEECH_DEBUG		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.speech.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEC_WINEVLOG_DEBUG		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.WindowsEventLog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BE_WINEVLOG_DEBUG 		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.WindowsEventLog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEL_WINEVLOG_DEBUG		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.WindowsEventLog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BER_WINEVLOG_DEBUG		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.WindowsEventLog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEC_WINMSGBX_DEBUG		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.WindowsMessageBox.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BE_WINMSGBX_DEBUG 		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.WindowsMessageBox.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEL_WINMSGBX_DEBUG		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.WindowsMessageBox.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BER_WINMSGBX_DEBUG		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.WindowsMessageBox.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEC_W32CONS_DEBUG		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.WindowsConsole.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEC_W32CONS_WC_DEBUG	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.WindowsConsole.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BE_W32CONS_DEBUG 		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.WindowsConsole.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEL_W32CONS_DEBUG		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.WindowsConsole.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BER_W32CONS_DEBUG		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.WindowsConsole.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEC_W32DBGR_DEBUG		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.WindowsDebugger.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEC_W32DBGR_WC_DEBUG	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.WindowsDebugger.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BE_W32DBGR_DEBUG 		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.WindowsDebugger.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEL_W32DBGR_DEBUG		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.WindowsDebugger.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BER_W32DBGR_DEBUG		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.WindowsDebugger.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEC_W32SYSLOG_DEBUG	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.WindowsSyslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEC_W32SYSLOG_WC_DEBUG	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.WindowsSyslog.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BE_W32SYSLOG_DEBUG 	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.WindowsSyslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BEL_W32SYSLOG_DEBUG	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.WindowsSyslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_BER_W32SYSLOG_DEBUG	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.WindowsSyslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib

#  util
LIB_UTIL_RELEASE				=   $(PROJ_LIB_DIR)\$(PROJ_TAG_VER).util.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib

#  core
LIB_CORE_RELEASE				=   $(PROJ_LIB_DIR)\$(PROJ_TAG_VER).core.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib

#  front-end(s)
LIB_FE_ALL_RELEASE			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).fe.all.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_FE_FAIL_RELEASE			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).fe.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_FE_N_RELEASE				=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).fe.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_FE_NULL_RELEASE			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).fe.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_FE_SIMPLE_RELEASE		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).fe.simple.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_FE_WINREG_RELEASE		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).fe.WindowsRegistry.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib

#  back-end(s)
LIB_BE_LRSPLIT_RELEASE 		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.lrsplit.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BE_N_RELEASE 			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEC_TEST_RELEASE			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BE_TEST_RELEASE			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEL_TEST_RELEASE			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BER_TEST_RELEASE			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.test.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEC_FAIL_RELEASE			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BE_FAIL_RELEASE 			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEL_FAIL_RELEASE			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BER_FAIL_RELEASE			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEC_FILE_RELEASE			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEC_FILE_WC_RELEASE		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.file.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BE_FILE_RELEASE 			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEL_FILE_RELEASE			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BER_FILE_RELEASE			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEC_FPRINTF_RELEASE		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEC_FPRINTF_WC_RELEASE	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.fprintf.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BE_FPRINTF_RELEASE 		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEL_FPRINTF_RELEASE		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BER_FPRINTF_RELEASE		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEC_NULL_RELEASE			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BE_NULL_RELEASE 			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEL_NULL_RELEASE			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BER_NULL_RELEASE			=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEC_COMERROBJ_RELEASE	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEC_COMERROBJ_WC_RELEASE	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.COMErrorObject.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BE_COMERROBJ_RELEASE 	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEL_COMERROBJ_RELEASE	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BER_COMERROBJ_RELEASE	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEC_SPEECH_RELEASE		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.speech.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEC_SPEECH_WC_RELEASE	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.speech.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BE_SPEECH_RELEASE 		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.speech.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEL_SPEECH_RELEASE		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.speech.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BER_SPEECH_RELEASE		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.speech.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEC_WINEVLOG_RELEASE		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.WindowsEventLog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BE_WINEVLOG_RELEASE 		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.WindowsEventLog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEL_WINEVLOG_RELEASE		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.WindowsEventLog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BER_WINEVLOG_RELEASE		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.WindowsEventLog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEC_WINMSGBX_RELEASE		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.WindowsMessageBox.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BE_WINMSGBX_RELEASE 		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.WindowsMessageBox.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEL_WINMSGBX_RELEASE		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.WindowsMessageBox.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BER_WINMSGBX_RELEASE		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.WindowsMessageBox.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEC_W32CONS_RELEASE		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.WindowsConsole.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEC_W32CONS_WC_RELEASE	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.WindowsConsole.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BE_W32CONS_RELEASE 		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.WindowsConsole.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEL_W32CONS_RELEASE		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.WindowsConsole.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BER_W32CONS_RELEASE		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.WindowsConsole.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEC_W32DBGR_RELEASE		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.WindowsDebugger.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEC_W32DBGR_WC_RELEASE	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.WindowsDebugger.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BE_W32DBGR_RELEASE 		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.WindowsDebugger.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEL_W32DBGR_RELEASE		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.WindowsDebugger.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BER_W32DBGR_RELEASE		=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.WindowsDebugger.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEC_W32SYSLOG_RELEASE	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.WindowsSyslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEC_W32SYSLOG_WC_RELEASE	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.WindowsSyslog.WithCallback.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BE_W32SYSLOG_RELEASE 	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.WindowsSyslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BEL_W32SYSLOG_RELEASE	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.WindowsSyslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib
LIB_BER_W32SYSLOG_RELEASE	=	$(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.WindowsSyslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib







# b64
LIB_B64_DEBUG			=   $(PROJ_LIB_DIR)\$(B64_TAG_VER).pan.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_B64_RELEASE			=   $(PROJ_LIB_DIR)\$(B64_TAG_VER).pan.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib

# shwild
LIB_SHWILD_DEBUG         =   $(PROJ_LIB_DIR)\$(SHWILD_TAG_VER).pan.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_SHWILD_RELEASE         =   $(PROJ_LIB_DIR)\$(SHWILD_TAG_VER).pan.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib

# xtests
LIB_XTESTS_DEBUG         =   $(PROJ_LIB_DIR)\$(XTESTS_TAG_VER).pan.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.lib
LIB_XTESTS_RELEASE         =   $(PROJ_LIB_DIR)\$(XTESTS_TAG_VER).pan.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).lib

########################################
# Examples

EX_CPP_0_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.0.$(COMP_TAG).debug.exe
EX_CPP_1_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.1.$(COMP_TAG).debug.exe
EX_CPP_2_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.2.$(COMP_TAG).debug.exe
EX_CPP_3_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.3.$(COMP_TAG).debug.exe
EX_CPP_4_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.4.$(COMP_TAG).debug.exe
EX_CPP_5_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.5.$(COMP_TAG).debug.exe
EX_CPP_6_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.6.$(COMP_TAG).debug.exe
EX_CPP_7_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.7.$(COMP_TAG).debug.exe
EX_CPP_9_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.9.$(COMP_TAG).debug.exe
EX_CPP_10_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.10.$(COMP_TAG).debug.exe
EX_CPP_11_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.11.$(COMP_TAG).debug.exe
EX_CPP_12_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.12.$(COMP_TAG).debug.exe
EX_CPP_13_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.13.$(COMP_TAG).debug.exe
EX_CPP_14_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.14.$(COMP_TAG).debug.exe
EX_CPP_15_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.15.$(COMP_TAG).debug.exe
EX_CPP_16_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.16.$(COMP_TAG).debug.exe
EX_CPP_18_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.18.$(COMP_TAG).debug.exe
EX_CPP_19_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.19.$(COMP_TAG).debug.exe
EX_CPP_20_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.20.$(COMP_TAG).debug.exe
EX_CPP_21_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.21.$(COMP_TAG).debug.exe
EX_CPP_23_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.23.$(COMP_TAG).debug.exe
EX_CPP_24_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.24.$(COMP_TAG).debug.exe
EX_CPP_25_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.25.$(COMP_TAG).debug.exe
EX_CPP_26_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.26.$(COMP_TAG).debug.exe
EX_CPP_27_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.27.$(COMP_TAG).debug.exe
EX_C_0_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.0.$(COMP_TAG).debug.exe
EX_C_1_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.1.$(COMP_TAG).debug.exe
EX_C_2_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.2.$(COMP_TAG).debug.exe
EX_C_3_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.3.$(COMP_TAG).debug.exe
EX_C_4_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.4.$(COMP_TAG).debug.exe
EX_C_5_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.5.$(COMP_TAG).debug.exe
EX_C_6_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.6.$(COMP_TAG).debug.exe
EX_C_7_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.7.$(COMP_TAG).debug.exe
EX_CPP_0_RELEASE			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.0.$(COMP_TAG).exe
EX_CPP_1_RELEASE			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.1.$(COMP_TAG).exe
EX_CPP_2_RELEASE			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.2.$(COMP_TAG).exe
EX_CPP_3_RELEASE			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.3.$(COMP_TAG).exe
EX_CPP_4_RELEASE			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.4.$(COMP_TAG).exe
EX_CPP_5_RELEASE			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.5.$(COMP_TAG).exe
EX_CPP_6_RELEASE			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.6.$(COMP_TAG).exe
EX_CPP_7_RELEASE			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.7.$(COMP_TAG).exe
EX_CPP_9_RELEASE			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.9.$(COMP_TAG).exe
EX_CPP_10_RELEASE		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.10.$(COMP_TAG).exe
EX_CPP_11_RELEASE		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.11.$(COMP_TAG).exe
EX_CPP_12_RELEASE		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.12.$(COMP_TAG).exe
EX_CPP_13_RELEASE		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.13.$(COMP_TAG).exe
EX_CPP_14_RELEASE		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.14.$(COMP_TAG).exe
EX_CPP_15_RELEASE		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.15.$(COMP_TAG).exe
EX_CPP_16_RELEASE		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.16.$(COMP_TAG).exe
EX_CPP_18_RELEASE		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.18.$(COMP_TAG).exe
EX_CPP_19_RELEASE		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.19.$(COMP_TAG).exe
EX_CPP_20_RELEASE		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.20.$(COMP_TAG).exe
EX_CPP_21_RELEASE		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.21.$(COMP_TAG).exe
EX_CPP_23_RELEASE		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.23.$(COMP_TAG).exe
EX_CPP_24_RELEASE		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.24.$(COMP_TAG).exe
EX_CPP_25_RELEASE		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.25.$(COMP_TAG).exe
EX_CPP_26_RELEASE		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.26.$(COMP_TAG).exe
EX_CPP_27_RELEASE		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.cpp.27.$(COMP_TAG).exe
EX_C_0_RELEASE			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.0.$(COMP_TAG).exe
EX_C_1_RELEASE			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.1.$(COMP_TAG).exe
EX_C_2_RELEASE			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.2.$(COMP_TAG).exe
EX_C_3_RELEASE			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.3.$(COMP_TAG).exe
EX_C_4_RELEASE			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.4.$(COMP_TAG).exe
EX_C_5_RELEASE			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.5.$(COMP_TAG).exe
EX_C_6_RELEASE			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.6.$(COMP_TAG).exe
EX_C_7_RELEASE			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).ex.c.7.$(COMP_TAG).exe

########################################
# Tests

##############################
# Component Tests

TARG_TEST_COMP_core_initseq_DEBUG	=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.core.init_sequence.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_core_initseq_RELEASE	=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.core.init_sequence.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_custsev_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.custom_severity.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_custsev_RELEASE			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.custom_severity.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_ins_args_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.args.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_ins_args_RELEASE		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.args.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_ins_b64_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.b64.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_ins_b64_RELEASE			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.b64.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_ins_bool_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.boolean.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_ins_bool_RELEASE		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.boolean.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_ins_hostid_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.hostId.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_ins_hostid_RELEASE		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.hostId.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_ins_int_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.integer.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_ins_int_RELEASE			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.integer.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_ins_pad_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.pad.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_ins_pad_RELEASE			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.pad.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_ins_ptr_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.pointer.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_ins_ptr_RELEASE			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.pointer.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_ins_prid_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.processId.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_ins_prid_RELEASE		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.processId.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_ins_real_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.real.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_ins_real_RELEASE		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.real.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_ins_thrid_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.threadId.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_ins_thrid_RELEASE		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.threadId.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_ins_w2m_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.w2m.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_ins_w2m_RELEASE		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserters.w2m.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_log_1_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.log.1.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_log_1_RELEASE			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.log.1.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_pan_puts_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.core.pan_logputs.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_pan_puts_RELEASE		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.core.pan_logputs.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_COMP_pan_prtf_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.core.pan_logprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_COMP_pan_prtf_RELEASE		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.core.pan_logprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe

##############################
# Performance Tests

TARG_TEST_PERF_ins_w2m_DEBUG		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserter.w2m.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_PERF_ins_w2m_RELEASE		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.component.inserter.w2m.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe

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
TEST__DEBUG_API_W_BE_FPRINTF					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TEST__DEBUG_API_W_BE_COMERROBJ				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TEST__DEBUG_API_W_BE_WINEVLOG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.WindowsEventLog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TEST__DEBUG_API_W_BE_WINMSGBX				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.WindowsMessageBox.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TEST__DEBUG_API_W_BE_W32CONS					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.WindowsConsole.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TEST__DEBUG_API_W_BE_W32DBGR					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.WindowsDebugger.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TEST__DEBUG_API_W_BE_W32SYSLOG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.WindowsSyslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TEST__DEBUG_API_W_BELR_2_W32DBGR_FPRINTF		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.l.WindowsDebugger-r.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TEST__DEBUG_API_W_BELR_3_W32DBGR_W32SYSLOG	=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.l.WindowsDebugger-r.W32syslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARGET_TEST_FE_DEBUG 						=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.fe.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TEST__DEBUG_BE_N_FAIL						=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.N.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TEST__RELEASE_API_W_BE_FPRINTF					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TEST__RELEASE_API_W_BE_COMERROBJ				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TEST__RELEASE_API_W_BE_WINEVLOG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.WindowsEventLog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TEST__RELEASE_API_W_BE_WINMSGBX				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.WindowsMessageBox.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TEST__RELEASE_API_W_BE_W32CONS					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.WindowsConsole.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TEST__RELEASE_API_W_BE_W32DBGR					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.WindowsDebugger.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TEST__RELEASE_API_W_BE_W32SYSLOG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.WindowsSyslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TEST__RELEASE_API_W_BELR_2_W32DBGR_FPRINTF		=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.l.WindowsDebugger-r.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TEST__RELEASE_API_W_BELR_3_W32DBGR_W32SYSLOG	=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.l.WindowsDebugger-r.W32syslog.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARGET_TEST_FE_RELEASE 						=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.fe.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TEST__RELEASE_BE_N_FAIL						=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.scratch.be.N.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe

##############################
# Unit Tests
#
# NOTE: dynamic_initialisation is contracted, as scares CodeWarrior's linker (for being longer than 63 chars)

TARG_TEST_UNIT_lvls_dyninit_DEBUG			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.levels.dynamic_init.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_lvls_dyninit_RELEASE			=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.levels.dynamic_init.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_lvls_vals_DEBUG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.levels.values.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_lvls_vals_RELEASE				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.levels.values.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_getcurrtm_DEBUG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.getcurrenttime.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_getcurrtm_RELEASE				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.getcurrenttime.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_getversion_DEBUG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.getversion.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_getversion_RELEASE				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.getversion.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_gethostname_DEBUG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.gethostname.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_gethostname_RELEASE				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.gethostname.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_onbailout_DEBUG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.onbailout.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_strnlen_DEBUG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.strnlen.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_onbailout_RELEASE				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.onbailout.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_strnlen_RELEASE				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.util.strnlen.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_bec_CEO_DEBUG					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.bec.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_bec_CEO_RELEASE					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.bec.COMErrorObject.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_bec_file_DEBUG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.bec.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_bec_file_RELEASE				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.bec.file.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_bec_fprintf_DEBUG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.bec.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_bec_fprintf_RELEASE				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.bec.fprintf.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_bec_fail_DEBUG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.bec.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_bec_fail_RELEASE				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.bec.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_be_fail_DEBUG					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_be_fail_RELEASE					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_be_fail_DEBUG					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_be_fail_RELEASE					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_be_lrsplit_DEBUG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.lrsplit.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_be_lrsplit_RELEASE				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.lrsplit.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_be_N_DEBUG					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_be_N_RELEASE					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.be.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_fe_all_DEBUG					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.all.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_fe_all_RELEASE					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.all.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_fe_fail_DEBUG					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_fe_fail_RELEASE					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.fail.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_fe_N_DEBUG					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_fe_N_RELEASE					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.N.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_fe_null_DEBUG					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_fe_null_RELEASE					=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.null.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_fe_simple_DEBUG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.simple.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_fe_simple_RELEASE				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.simple.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe
TARG_TEST_UNIT_fe_WinReg_DEBUG				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.WindowsRegistry.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).debug.exe
TARG_TEST_UNIT_fe_WinReg_RELEASE				=	$(PROJ_BIN_DIR)\$(PROJ_TAG_VER).test.unit.fe.WindowsRegistry.$(COMP_TAG)$(OS_TAG)$(ARCH_TAG).exe

############################################################
# Objects

########################################
# Libraries

# core

OBJ_utl_bailout_DEBUG		= $(PROJ_OBJ_DIR)\util.bailout.debug.obj
OBJ_utl_init_code_strs_DEBUG	= $(PROJ_OBJ_DIR)\util.init_err_strings.debug.obj
OBJ_utl_sev_strs_DEBUG		= $(PROJ_OBJ_DIR)\util.sev_strings.debug.obj
OBJ_utl_snprintf_DEBUG 		= $(PROJ_OBJ_DIR)\util.snprintf.debug.obj
OBJ_utl_strdup_DEBUG 		= $(PROJ_OBJ_DIR)\util.strdup.debug.obj
OBJ_utl_procid_DEBUG 		= $(PROJ_OBJ_DIR)\util.procid.debug.obj
OBJ_utl_thread_DEBUG 		= $(PROJ_OBJ_DIR)\util.thread.debug.obj
OBJ_utl_be_context_DEBUG		= $(PROJ_OBJ_DIR)\util.be_context.debug.obj
OBJ_utl_core_apidefs_DEBUG	= $(PROJ_OBJ_DIR)\util.core_apidefs.debug.obj
OBJ_utl_be_parse_DEBUG		= $(PROJ_OBJ_DIR)\util.be_parse.debug.obj
OBJ_utl_strnlen_DEBUG		= $(PROJ_OBJ_DIR)\util.strnlen.debug.obj
OBJ_utl_time_DEBUG			= $(PROJ_OBJ_DIR)\util.time.debug.obj
OBJ_utl_host_name_DEBUG		= $(PROJ_OBJ_DIR)\util.host_name.debug.obj
OBJ_cr_api_DEBUG 			= $(PROJ_OBJ_DIR)\core.api.debug.obj
OBJ_cr_auto_DEBUG 			= $(PROJ_OBJ_DIR)\core.auto.debug.obj
OBJ_cr_logprintf_DEBUG		= $(PROJ_OBJ_DIR)\core.logprintf.debug.obj
OBJ_ins_args_DEBUG	 		= $(PROJ_OBJ_DIR)\inserters.args.debug.obj
OBJ_ins_b64_DEBUG	 		= $(PROJ_OBJ_DIR)\inserters.b64.debug.obj
OBJ_ins_blob_DEBUG	 		= $(PROJ_OBJ_DIR)\inserters.blob.debug.obj
OBJ_ins_bool_DEBUG	 		= $(PROJ_OBJ_DIR)\inserters.boolean.debug.obj
OBJ_ins_host_DEBUG	 		= $(PROJ_OBJ_DIR)\inserters.hostid.debug.obj
OBJ_ins_int_DEBUG	 		= $(PROJ_OBJ_DIR)\inserters.integer.debug.obj
OBJ_ins_ptr_DEBUG	 		= $(PROJ_OBJ_DIR)\inserters.pointer.debug.obj
OBJ_ins_prid_DEBUG	 		= $(PROJ_OBJ_DIR)\inserters.processid.debug.obj
OBJ_ins_real_DEBUG	 		= $(PROJ_OBJ_DIR)\inserters.real.debug.obj
OBJ_ins_thrid_DEBUG	 		= $(PROJ_OBJ_DIR)\inserters.threadid.debug.obj
OBJ_ins_w2m_DEBUG	 		= $(PROJ_OBJ_DIR)\inserters.w2m.debug.obj
#PDB_bec_test_DEBUG 			= $(PROJ_OBJ_DIR)\bec.test.debug.pdb
OBJ_bec_test_DEBUG 			= $(PROJ_OBJ_DIR)\bec.test.debug.obj
OBJ_be_test_DEBUG 			= $(PROJ_OBJ_DIR)\be.test.debug.obj
OBJ_bel_test_DEBUG 			= $(PROJ_OBJ_DIR)\bel.test.debug.obj
OBJ_ber_test_DEBUG 			= $(PROJ_OBJ_DIR)\ber.test.debug.obj
OBJ_be_lrsplit__DEBUG		= $(PROJ_OBJ_DIR)\be.lrsplit.debug.obj
OBJ_be_N__DEBUG				= $(PROJ_OBJ_DIR)\be.N.debug.obj
OBJ_bec_fail__DEBUG			= $(PROJ_OBJ_DIR)\bec.fail.debug.obj
OBJ_be_fail__DEBUG			= $(PROJ_OBJ_DIR)\be.fail.debug.obj
OBJ_bel_fail__DEBUG			= $(PROJ_OBJ_DIR)\bel.fail.debug.obj
OBJ_ber_fail__DEBUG			= $(PROJ_OBJ_DIR)\ber.fail.debug.obj
OBJ_bec_file__DEBUG			= $(PROJ_OBJ_DIR)\bec.file.debug.obj
OBJ_bec_file_WC__DEBUG		= $(PROJ_OBJ_DIR)\bec.file.WithCallback.debug.obj
OBJ_be_file__DEBUG			= $(PROJ_OBJ_DIR)\be.file.debug.obj
OBJ_bel_file__DEBUG			= $(PROJ_OBJ_DIR)\bel.file.debug.obj
OBJ_ber_file__DEBUG			= $(PROJ_OBJ_DIR)\ber.file.debug.obj
OBJ_bec_fprintf__DEBUG		= $(PROJ_OBJ_DIR)\bec.fprintf.debug.obj
OBJ_bec_fprintf_WC__DEBUG	= $(PROJ_OBJ_DIR)\bec.fprintf.WithCallback.debug.obj
OBJ_be_fprintf__DEBUG		= $(PROJ_OBJ_DIR)\be.fprintf.debug.obj
OBJ_bel_fprintf__DEBUG		= $(PROJ_OBJ_DIR)\bel.fprintf.debug.obj
OBJ_ber_fprintf__DEBUG		= $(PROJ_OBJ_DIR)\ber.fprintf.debug.obj
OBJ_bec_null__DEBUG			= $(PROJ_OBJ_DIR)\bec.null.debug.obj
OBJ_be_null__DEBUG			= $(PROJ_OBJ_DIR)\be.null.debug.obj
OBJ_bel_null__DEBUG			= $(PROJ_OBJ_DIR)\bel.null.debug.obj
OBJ_ber_null__DEBUG			= $(PROJ_OBJ_DIR)\ber.null.debug.obj
OBJ_bec_ACE__DEBUG			= $(PROJ_OBJ_DIR)\bec.ACE.debug.obj
OBJ_be_ACE__DEBUG			= $(PROJ_OBJ_DIR)\be.ACE.debug.obj
OBJ_bel_ACE__DEBUG			= $(PROJ_OBJ_DIR)\bel.ACE.debug.obj
OBJ_ber_ACE__DEBUG			= $(PROJ_OBJ_DIR)\ber.ACE.debug.obj
OBJ_bec_COMERROBJ__DEBUG		= $(PROJ_OBJ_DIR)\bec.COMErrorObject.debug.obj
OBJ_bec_COMERROBJ_WC__DEBUG		= $(PROJ_OBJ_DIR)\bec.COMErrorObject.WithCallback.debug.obj
OBJ_be_COMERROBJ__DEBUG		= $(PROJ_OBJ_DIR)\be.COMErrorObject.debug.obj
OBJ_bel_COMERROBJ__DEBUG		= $(PROJ_OBJ_DIR)\bel.COMErrorObject.debug.obj
OBJ_ber_COMERROBJ__DEBUG		= $(PROJ_OBJ_DIR)\ber.COMErrorObject.debug.obj
OBJ_bec_SPEECH__DEBUG		= $(PROJ_OBJ_DIR)\bec.speech.debug.obj
OBJ_bec_SPEECH_WC__DEBUG		= $(PROJ_OBJ_DIR)\bec.speech.WithCallback.debug.obj
OBJ_be_SPEECH__DEBUG			= $(PROJ_OBJ_DIR)\be.speech.debug.obj
OBJ_bel_SPEECH__DEBUG		= $(PROJ_OBJ_DIR)\bel.speech.debug.obj
OBJ_ber_SPEECH__DEBUG		= $(PROJ_OBJ_DIR)\ber.speech.debug.obj
OBJ_bec_WINEVLOG__DEBUG		= $(PROJ_OBJ_DIR)\bec.WindowsEventLog.debug.obj
OBJ_be_WINEVLOG__DEBUG		= $(PROJ_OBJ_DIR)\be.WindowsEventLog.debug.obj
OBJ_bel_WINEVLOG__DEBUG		= $(PROJ_OBJ_DIR)\bel.WindowsEventLog.debug.obj
OBJ_ber_WINEVLOG__DEBUG		= $(PROJ_OBJ_DIR)\ber.WindowsEventLog.debug.obj
OBJ_bec_WINMSGBX__DEBUG		= $(PROJ_OBJ_DIR)\bec.WindowsMessageBox.debug.obj
OBJ_be_WINMSGBX__DEBUG		= $(PROJ_OBJ_DIR)\be.WindowsMessageBox.debug.obj
OBJ_bel_WINMSGBX__DEBUG		= $(PROJ_OBJ_DIR)\bel.WindowsMessageBox.debug.obj
OBJ_ber_WINMSGBX__DEBUG		= $(PROJ_OBJ_DIR)\ber.WindowsMessageBox.debug.obj
OBJ_bec_W32CONS__DEBUG		= $(PROJ_OBJ_DIR)\bec.WindowsConsole.debug.obj
OBJ_bec_W32CONS_WC__DEBUG	= $(PROJ_OBJ_DIR)\bec.WindowsConsole.WithCallback.debug.obj
OBJ_be_W32CONS__DEBUG		= $(PROJ_OBJ_DIR)\be.WindowsConsole.debug.obj
OBJ_bel_W32CONS__DEBUG		= $(PROJ_OBJ_DIR)\bel.WindowsConsole.debug.obj
OBJ_ber_W32CONS__DEBUG		= $(PROJ_OBJ_DIR)\ber.WindowsConsole.debug.obj
OBJ_bec_W32DBGR__DEBUG		= $(PROJ_OBJ_DIR)\bec.WindowsDebugger.debug.obj
OBJ_bec_W32DBGR_WC__DEBUG		= $(PROJ_OBJ_DIR)\bec.WindowsDebugger.WithCallback.debug.obj
OBJ_be_W32DBGR__DEBUG		= $(PROJ_OBJ_DIR)\be.WindowsDebugger.debug.obj
OBJ_bel_W32DBGR__DEBUG		= $(PROJ_OBJ_DIR)\bel.WindowsDebugger.debug.obj
OBJ_ber_W32DBGR__DEBUG		= $(PROJ_OBJ_DIR)\ber.WindowsDebugger.debug.obj
OBJ_bec_W32SYSLOG__DEBUG		= $(PROJ_OBJ_DIR)\bec.WindowsSyslog.debug.obj
OBJ_bec_W32SYSLOG_WC__DEBUG		= $(PROJ_OBJ_DIR)\bec.WindowsSyslog.WithCallback.debug.obj
OBJ_be_W32SYSLOG__DEBUG		= $(PROJ_OBJ_DIR)\be.WindowsSyslog.debug.obj
OBJ_bel_W32SYSLOG__DEBUG		= $(PROJ_OBJ_DIR)\bel.WindowsSyslog.debug.obj
OBJ_ber_W32SYSLOG__DEBUG		= $(PROJ_OBJ_DIR)\ber.WindowsSyslog.debug.obj
OBJ_fe_all__DEBUG 			= $(PROJ_OBJ_DIR)\fe.all.debug.obj
OBJ_fe_fail__DEBUG 			= $(PROJ_OBJ_DIR)\fe.fail.debug.obj
OBJ_fe_N__DEBUG 				= $(PROJ_OBJ_DIR)\fe.N.debug.obj
OBJ_fe_null__DEBUG 			= $(PROJ_OBJ_DIR)\fe.null.debug.obj
OBJ_fe_simple__DEBUG 		= $(PROJ_OBJ_DIR)\fe.simple.debug.obj
OBJ_fe_winreg__DEBUG 		= $(PROJ_OBJ_DIR)\fe.WindowsRegistry.debug.obj

OBJ_UTIL_DEBUG=\
 $(OBJ_utl_bailout_DEBUG)\
 $(OBJ_utl_init_code_strs_DEBUG)\
 $(OBJ_utl_sev_strs_DEBUG)\
 $(OBJ_utl_snprintf_DEBUG)\
 $(OBJ_utl_strdup_DEBUG)\
 $(OBJ_utl_procid_DEBUG)\
 $(OBJ_utl_thread_DEBUG)\
 $(OBJ_utl_be_context_DEBUG)\
 $(OBJ_utl_core_apidefs_DEBUG)\
 $(OBJ_utl_be_parse_DEBUG)\
 $(OBJ_utl_strnlen_DEBUG)\
 $(OBJ_utl_time_DEBUG)\
 $(OBJ_utl_host_name_DEBUG)\
 \

OBJ_CORE_DEBUG=\
 $(OBJ_cr_api_DEBUG)\
 $(OBJ_cr_auto_DEBUG)\
 $(OBJ_cr_logprintf_DEBUG)\
 $(OBJ_ins_args_DEBUG)\
 $(OBJ_ins_b64_DEBUG)\
 $(OBJ_ins_blob_DEBUG)\
 $(OBJ_ins_bool_DEBUG)\
 $(OBJ_ins_host_DEBUG)\
 $(OBJ_ins_int_DEBUG)\
 $(OBJ_ins_ptr_DEBUG)\
 $(OBJ_ins_prid_DEBUG)\
 $(OBJ_ins_real_DEBUG)\
 $(OBJ_ins_thrid_DEBUG)\
 $(OBJ_ins_w2m_DEBUG)\
 \


OBJ_BE_LRSPLIT_DEBUG=\
 $(OBJ_be_lrsplit__DEBUG)\
 \

OBJ_BE_N_DEBUG=\
 $(OBJ_be_N__DEBUG)\
 \

OBJ_BEC_TEST_DEBUG=\
 $(OBJ_bec_test_DEBUG)\
 \


OBJ_BE_TEST_DEBUG=\
 $(OBJ_be_test_DEBUG)\
 \


OBJ_BEL_TEST_DEBUG=\
 $(OBJ_bel_test_DEBUG)\
 \


OBJ_BER_TEST_DEBUG=\
 $(OBJ_ber_test_DEBUG)\
 \


OBJ_BEC_FAIL_DEBUG=\
 $(OBJ_bec_fail__DEBUG)\
 \

OBJ_BE_FAIL_DEBUG=\
 $(OBJ_be_fail__DEBUG)\
 \

OBJ_BEL_FAIL_DEBUG=\
 $(OBJ_bel_fail__DEBUG)\
 \

OBJ_BER_FAIL_DEBUG=\
 $(OBJ_ber_fail__DEBUG)\
 \

OBJ_BEC_FILE_DEBUG=\
 $(OBJ_bec_file__DEBUG)\
 \

OBJ_BEC_FILE_WC_DEBUG=\
 $(OBJ_bec_file_WC__DEBUG)\
 \

OBJ_BE_FILE_DEBUG=\
 $(OBJ_be_file__DEBUG)\
 \

OBJ_BEL_FILE_DEBUG=\
 $(OBJ_bel_file__DEBUG)\
 \

OBJ_BER_FILE_DEBUG=\
 $(OBJ_ber_file__DEBUG)\
 \

OBJ_BEC_FPRINTF_DEBUG=\
 $(OBJ_bec_fprintf__DEBUG)\
 \

OBJ_BEC_FPRINTF_WC_DEBUG=\
 $(OBJ_bec_fprintf_WC__DEBUG)\
 \

OBJ_BE_FPRINTF_DEBUG=\
 $(OBJ_be_fprintf__DEBUG)\
 \

OBJ_BEL_FPRINTF_DEBUG=\
 $(OBJ_bel_fprintf__DEBUG)\
 \

OBJ_BER_FPRINTF_DEBUG=\
 $(OBJ_ber_fprintf__DEBUG)\
 \

OBJ_BEC_NULL_DEBUG=\
 $(OBJ_bec_null__DEBUG)\
 \

OBJ_BE_NULL_DEBUG=\
 $(OBJ_be_null__DEBUG)\
 \

OBJ_BEL_NULL_DEBUG=\
 $(OBJ_bel_null__DEBUG)\
 \

OBJ_BER_NULL_DEBUG=\
 $(OBJ_ber_null__DEBUG)\
 \

OBJ_BEC_ACE_DEBUG=\
 $(OBJ_bec_ACE__DEBUG)\
 \

OBJ_BE_ACE_DEBUG=\
 $(OBJ_be_ACE__DEBUG)\
 \

OBJ_BEL_ACE_DEBUG=\
 $(OBJ_bel_ACE__DEBUG)\
 \

OBJ_BER_ACE_DEBUG=\
 $(OBJ_ber_ACE__DEBUG)\
 \

OBJ_BEC_COMERROBJ_DEBUG=\
 $(OBJ_bec_COMERROBJ__DEBUG)\
 \

OBJ_BEC_COMERROBJ_WC_DEBUG=\
 $(OBJ_bec_COMERROBJ_WC__DEBUG)\
 \

OBJ_BE_COMERROBJ_DEBUG=\
 $(OBJ_be_COMERROBJ__DEBUG)\
 \

OBJ_BEL_COMERROBJ_DEBUG=\
 $(OBJ_bel_COMERROBJ__DEBUG)\
 \

OBJ_BER_COMERROBJ_DEBUG=\
 $(OBJ_ber_COMERROBJ__DEBUG)\
 \

OBJ_BEC_SPEECH_DEBUG=\
 $(OBJ_bec_SPEECH__DEBUG)\
 \

OBJ_BEC_SPEECH_WC_DEBUG=\
 $(OBJ_bec_SPEECH_WC__DEBUG)\
 \

OBJ_BE_SPEECH_DEBUG=\
 $(OBJ_be_SPEECH__DEBUG)\
 \

OBJ_BEL_SPEECH_DEBUG=\
 $(OBJ_bel_SPEECH__DEBUG)\
 \

OBJ_BER_SPEECH_DEBUG=\
 $(OBJ_ber_SPEECH__DEBUG)\
 \

OBJ_BEC_WINEVLOG_DEBUG=\
 $(OBJ_bec_WINEVLOG__DEBUG)\
 \

OBJ_BE_WINEVLOG_DEBUG=\
 $(OBJ_be_WINEVLOG__DEBUG)\
 \

OBJ_BEL_WINEVLOG_DEBUG=\
 $(OBJ_bel_WINEVLOG__DEBUG)\
 \

OBJ_BER_WINEVLOG_DEBUG=\
 $(OBJ_ber_WINEVLOG__DEBUG)\
 \

OBJ_BEC_WINMSGBX_DEBUG=\
 $(OBJ_bec_WINMSGBX__DEBUG)\
 \

OBJ_BE_WINMSGBX_DEBUG=\
 $(OBJ_be_WINMSGBX__DEBUG)\
 \

OBJ_BEL_WINMSGBX_DEBUG=\
 $(OBJ_bel_WINMSGBX__DEBUG)\
 \

OBJ_BER_WINMSGBX_DEBUG=\
 $(OBJ_ber_WINMSGBX__DEBUG)\
 \

OBJ_BEC_W32CONS_DEBUG=\
 $(OBJ_bec_W32CONS__DEBUG)\
 \

OBJ_BEC_W32CONS_WC_DEBUG=\
 $(OBJ_bec_W32CONS_WC__DEBUG)\
 \

OBJ_BE_W32CONS_DEBUG=\
 $(OBJ_be_W32CONS__DEBUG)\
 \

OBJ_BEL_W32CONS_DEBUG=\
 $(OBJ_bel_W32CONS__DEBUG)\
 \

OBJ_BER_W32CONS_DEBUG=\
 $(OBJ_ber_W32CONS__DEBUG)\
 \

OBJ_BEC_W32DBGR_DEBUG=\
 $(OBJ_bec_W32DBGR__DEBUG)\
 \

OBJ_BEC_W32DBGR_WC_DEBUG=\
 $(OBJ_bec_W32DBGR_WC__DEBUG)\
 \

OBJ_BE_W32DBGR_DEBUG=\
 $(OBJ_be_W32DBGR__DEBUG)\
 \

OBJ_BEL_W32DBGR_DEBUG=\
 $(OBJ_bel_W32DBGR__DEBUG)\
 \

OBJ_BER_W32DBGR_DEBUG=\
 $(OBJ_ber_W32DBGR__DEBUG)\
 \

OBJ_BEC_W32SYSLOG_DEBUG=\
 $(OBJ_bec_W32SYSLOG__DEBUG)\
 \

OBJ_BEC_W32SYSLOG_WC_DEBUG=\
 $(OBJ_bec_W32SYSLOG_WC__DEBUG)\
 \

OBJ_BE_W32SYSLOG_DEBUG=\
 $(OBJ_be_W32SYSLOG__DEBUG)\
 \

OBJ_BEL_W32SYSLOG_DEBUG=\
 $(OBJ_bel_W32SYSLOG__DEBUG)\
 \

OBJ_BER_W32SYSLOG_DEBUG=\
 $(OBJ_ber_W32SYSLOG__DEBUG)\
 \

OBJ_FE_ALL_DEBUG=\
 $(OBJ_fe_all__DEBUG)\
 \

OBJ_FE_FAIL_DEBUG=\
 $(OBJ_fe_fail__DEBUG)\
 \

OBJ_FE_N_DEBUG=\
 $(OBJ_fe_N__DEBUG)\
 \

OBJ_FE_NULL_DEBUG=\
 $(OBJ_fe_null__DEBUG)\
 \

OBJ_FE_SIMPLE_DEBUG=\
 $(OBJ_fe_simple__DEBUG)\
 \

OBJ_FE_WINREG_DEBUG=\
 $(OBJ_fe_winreg__DEBUG)\
 \

OBJ_utl_bailout_RELEASE		= $(PROJ_OBJ_DIR)\util.bailout.obj
OBJ_utl_init_code_strs_RELEASE	= $(PROJ_OBJ_DIR)\util.init_err_strings.obj
OBJ_utl_sev_strs_RELEASE		= $(PROJ_OBJ_DIR)\util.sev_strings.obj
OBJ_utl_snprintf_RELEASE 		= $(PROJ_OBJ_DIR)\util.snprintf.obj
OBJ_utl_strdup_RELEASE 		= $(PROJ_OBJ_DIR)\util.strdup.obj
OBJ_utl_procid_RELEASE 		= $(PROJ_OBJ_DIR)\util.procid.obj
OBJ_utl_thread_RELEASE 		= $(PROJ_OBJ_DIR)\util.thread.obj
OBJ_utl_be_context_RELEASE		= $(PROJ_OBJ_DIR)\util.be_context.obj
OBJ_utl_core_apidefs_RELEASE	= $(PROJ_OBJ_DIR)\util.core_apidefs.obj
OBJ_utl_be_parse_RELEASE		= $(PROJ_OBJ_DIR)\util.be_parse.obj
OBJ_utl_strnlen_RELEASE		= $(PROJ_OBJ_DIR)\util.strnlen.obj
OBJ_utl_time_RELEASE			= $(PROJ_OBJ_DIR)\util.time.obj
OBJ_utl_host_name_RELEASE		= $(PROJ_OBJ_DIR)\util.host_name.obj
OBJ_cr_api_RELEASE 			= $(PROJ_OBJ_DIR)\core.api.obj
OBJ_cr_auto_RELEASE 			= $(PROJ_OBJ_DIR)\core.auto.obj
OBJ_cr_logprintf_RELEASE		= $(PROJ_OBJ_DIR)\core.logprintf.obj
OBJ_ins_args_RELEASE	 		= $(PROJ_OBJ_DIR)\inserters.args.obj
OBJ_ins_b64_RELEASE	 		= $(PROJ_OBJ_DIR)\inserters.b64.obj
OBJ_ins_blob_RELEASE	 		= $(PROJ_OBJ_DIR)\inserters.blob.obj
OBJ_ins_bool_RELEASE	 		= $(PROJ_OBJ_DIR)\inserters.boolean.obj
OBJ_ins_host_RELEASE	 		= $(PROJ_OBJ_DIR)\inserters.hostid.obj
OBJ_ins_int_RELEASE	 		= $(PROJ_OBJ_DIR)\inserters.integer.obj
OBJ_ins_ptr_RELEASE	 		= $(PROJ_OBJ_DIR)\inserters.pointer.obj
OBJ_ins_prid_RELEASE	 		= $(PROJ_OBJ_DIR)\inserters.processid.obj
OBJ_ins_real_RELEASE	 		= $(PROJ_OBJ_DIR)\inserters.real.obj
OBJ_ins_thrid_RELEASE	 		= $(PROJ_OBJ_DIR)\inserters.threadid.obj
OBJ_ins_w2m_RELEASE	 		= $(PROJ_OBJ_DIR)\inserters.w2m.obj
#PDB_bec_test_RELEASE 			= $(PROJ_OBJ_DIR)\bec.test.pdb
OBJ_bec_test_RELEASE 			= $(PROJ_OBJ_DIR)\bec.test.obj
OBJ_be_test_RELEASE 			= $(PROJ_OBJ_DIR)\be.test.obj
OBJ_bel_test_RELEASE 			= $(PROJ_OBJ_DIR)\bel.test.obj
OBJ_ber_test_RELEASE 			= $(PROJ_OBJ_DIR)\ber.test.obj
OBJ_be_lrsplit__RELEASE		= $(PROJ_OBJ_DIR)\be.lrsplit.obj
OBJ_be_N__RELEASE				= $(PROJ_OBJ_DIR)\be.N.obj
OBJ_bec_fail__RELEASE			= $(PROJ_OBJ_DIR)\bec.fail.obj
OBJ_be_fail__RELEASE			= $(PROJ_OBJ_DIR)\be.fail.obj
OBJ_bel_fail__RELEASE			= $(PROJ_OBJ_DIR)\bel.fail.obj
OBJ_ber_fail__RELEASE			= $(PROJ_OBJ_DIR)\ber.fail.obj
OBJ_bec_file__RELEASE			= $(PROJ_OBJ_DIR)\bec.file.obj
OBJ_bec_file_WC__RELEASE		= $(PROJ_OBJ_DIR)\bec.file.WithCallback.obj
OBJ_be_file__RELEASE			= $(PROJ_OBJ_DIR)\be.file.obj
OBJ_bel_file__RELEASE			= $(PROJ_OBJ_DIR)\bel.file.obj
OBJ_ber_file__RELEASE			= $(PROJ_OBJ_DIR)\ber.file.obj
OBJ_bec_fprintf__RELEASE		= $(PROJ_OBJ_DIR)\bec.fprintf.obj
OBJ_bec_fprintf_WC__RELEASE	= $(PROJ_OBJ_DIR)\bec.fprintf.WithCallback.obj
OBJ_be_fprintf__RELEASE		= $(PROJ_OBJ_DIR)\be.fprintf.obj
OBJ_bel_fprintf__RELEASE		= $(PROJ_OBJ_DIR)\bel.fprintf.obj
OBJ_ber_fprintf__RELEASE		= $(PROJ_OBJ_DIR)\ber.fprintf.obj
OBJ_bec_null__RELEASE			= $(PROJ_OBJ_DIR)\bec.null.obj
OBJ_be_null__RELEASE			= $(PROJ_OBJ_DIR)\be.null.obj
OBJ_bel_null__RELEASE			= $(PROJ_OBJ_DIR)\bel.null.obj
OBJ_ber_null__RELEASE			= $(PROJ_OBJ_DIR)\ber.null.obj
OBJ_bec_ACE__RELEASE			= $(PROJ_OBJ_DIR)\bec.ACE.obj
OBJ_be_ACE__RELEASE			= $(PROJ_OBJ_DIR)\be.ACE.obj
OBJ_bel_ACE__RELEASE			= $(PROJ_OBJ_DIR)\bel.ACE.obj
OBJ_ber_ACE__RELEASE			= $(PROJ_OBJ_DIR)\ber.ACE.obj
OBJ_bec_COMERROBJ__RELEASE		= $(PROJ_OBJ_DIR)\bec.COMErrorObject.obj
OBJ_bec_COMERROBJ_WC__RELEASE		= $(PROJ_OBJ_DIR)\bec.COMErrorObject.WithCallback.obj
OBJ_be_COMERROBJ__RELEASE		= $(PROJ_OBJ_DIR)\be.COMErrorObject.obj
OBJ_bel_COMERROBJ__RELEASE		= $(PROJ_OBJ_DIR)\bel.COMErrorObject.obj
OBJ_ber_COMERROBJ__RELEASE		= $(PROJ_OBJ_DIR)\ber.COMErrorObject.obj
OBJ_bec_SPEECH__RELEASE		= $(PROJ_OBJ_DIR)\bec.speech.obj
OBJ_bec_SPEECH_WC__RELEASE		= $(PROJ_OBJ_DIR)\bec.speech.WithCallback.obj
OBJ_be_SPEECH__RELEASE			= $(PROJ_OBJ_DIR)\be.speech.obj
OBJ_bel_SPEECH__RELEASE		= $(PROJ_OBJ_DIR)\bel.speech.obj
OBJ_ber_SPEECH__RELEASE		= $(PROJ_OBJ_DIR)\ber.speech.obj
OBJ_bec_WINEVLOG__RELEASE		= $(PROJ_OBJ_DIR)\bec.WindowsEventLog.obj
OBJ_be_WINEVLOG__RELEASE		= $(PROJ_OBJ_DIR)\be.WindowsEventLog.obj
OBJ_bel_WINEVLOG__RELEASE		= $(PROJ_OBJ_DIR)\bel.WindowsEventLog.obj
OBJ_ber_WINEVLOG__RELEASE		= $(PROJ_OBJ_DIR)\ber.WindowsEventLog.obj
OBJ_bec_WINMSGBX__RELEASE		= $(PROJ_OBJ_DIR)\bec.WindowsMessageBox.obj
OBJ_be_WINMSGBX__RELEASE		= $(PROJ_OBJ_DIR)\be.WindowsMessageBox.obj
OBJ_bel_WINMSGBX__RELEASE		= $(PROJ_OBJ_DIR)\bel.WindowsMessageBox.obj
OBJ_ber_WINMSGBX__RELEASE		= $(PROJ_OBJ_DIR)\ber.WindowsMessageBox.obj
OBJ_bec_W32CONS__RELEASE		= $(PROJ_OBJ_DIR)\bec.WindowsConsole.obj
OBJ_bec_W32CONS_WC__RELEASE	= $(PROJ_OBJ_DIR)\bec.WindowsConsole.WithCallback.obj
OBJ_be_W32CONS__RELEASE		= $(PROJ_OBJ_DIR)\be.WindowsConsole.obj
OBJ_bel_W32CONS__RELEASE		= $(PROJ_OBJ_DIR)\bel.WindowsConsole.obj
OBJ_ber_W32CONS__RELEASE		= $(PROJ_OBJ_DIR)\ber.WindowsConsole.obj
OBJ_bec_W32DBGR__RELEASE		= $(PROJ_OBJ_DIR)\bec.WindowsDebugger.obj
OBJ_bec_W32DBGR_WC__RELEASE		= $(PROJ_OBJ_DIR)\bec.WindowsDebugger.WithCallback.obj
OBJ_be_W32DBGR__RELEASE		= $(PROJ_OBJ_DIR)\be.WindowsDebugger.obj
OBJ_bel_W32DBGR__RELEASE		= $(PROJ_OBJ_DIR)\bel.WindowsDebugger.obj
OBJ_ber_W32DBGR__RELEASE		= $(PROJ_OBJ_DIR)\ber.WindowsDebugger.obj
OBJ_bec_W32SYSLOG__RELEASE		= $(PROJ_OBJ_DIR)\bec.WindowsSyslog.obj
OBJ_bec_W32SYSLOG_WC__RELEASE		= $(PROJ_OBJ_DIR)\bec.WindowsSyslog.WithCallback.obj
OBJ_be_W32SYSLOG__RELEASE		= $(PROJ_OBJ_DIR)\be.WindowsSyslog.obj
OBJ_bel_W32SYSLOG__RELEASE		= $(PROJ_OBJ_DIR)\bel.WindowsSyslog.obj
OBJ_ber_W32SYSLOG__RELEASE		= $(PROJ_OBJ_DIR)\ber.WindowsSyslog.obj
OBJ_fe_all__RELEASE 			= $(PROJ_OBJ_DIR)\fe.all.obj
OBJ_fe_fail__RELEASE 			= $(PROJ_OBJ_DIR)\fe.fail.obj
OBJ_fe_N__RELEASE 				= $(PROJ_OBJ_DIR)\fe.N.obj
OBJ_fe_null__RELEASE 			= $(PROJ_OBJ_DIR)\fe.null.obj
OBJ_fe_simple__RELEASE 		= $(PROJ_OBJ_DIR)\fe.simple.obj
OBJ_fe_winreg__RELEASE 		= $(PROJ_OBJ_DIR)\fe.WindowsRegistry.obj

OBJ_UTIL_RELEASE=\
 $(OBJ_utl_bailout_RELEASE)\
 $(OBJ_utl_init_code_strs_RELEASE)\
 $(OBJ_utl_sev_strs_RELEASE)\
 $(OBJ_utl_snprintf_RELEASE)\
 $(OBJ_utl_strdup_RELEASE)\
 $(OBJ_utl_procid_RELEASE)\
 $(OBJ_utl_thread_RELEASE)\
 $(OBJ_utl_be_context_RELEASE)\
 $(OBJ_utl_core_apidefs_RELEASE)\
 $(OBJ_utl_be_parse_RELEASE)\
 $(OBJ_utl_strnlen_RELEASE)\
 $(OBJ_utl_time_RELEASE)\
 $(OBJ_utl_host_name_RELEASE)\
 \

OBJ_CORE_RELEASE=\
 $(OBJ_cr_api_RELEASE)\
 $(OBJ_cr_auto_RELEASE)\
 $(OBJ_cr_logprintf_RELEASE)\
 $(OBJ_ins_args_RELEASE)\
 $(OBJ_ins_b64_RELEASE)\
 $(OBJ_ins_blob_RELEASE)\
 $(OBJ_ins_bool_RELEASE)\
 $(OBJ_ins_host_RELEASE)\
 $(OBJ_ins_int_RELEASE)\
 $(OBJ_ins_ptr_RELEASE)\
 $(OBJ_ins_prid_RELEASE)\
 $(OBJ_ins_real_RELEASE)\
 $(OBJ_ins_thrid_RELEASE)\
 $(OBJ_ins_w2m_RELEASE)\
 \


OBJ_BE_LRSPLIT_RELEASE=\
 $(OBJ_be_lrsplit__RELEASE)\
 \

OBJ_BE_N_RELEASE=\
 $(OBJ_be_N__RELEASE)\
 \

OBJ_BEC_TEST_RELEASE=\
 $(OBJ_bec_test_RELEASE)\
 \


OBJ_BE_TEST_RELEASE=\
 $(OBJ_be_test_RELEASE)\
 \


OBJ_BEL_TEST_RELEASE=\
 $(OBJ_bel_test_RELEASE)\
 \


OBJ_BER_TEST_RELEASE=\
 $(OBJ_ber_test_RELEASE)\
 \


OBJ_BEC_FAIL_RELEASE=\
 $(OBJ_bec_fail__RELEASE)\
 \

OBJ_BE_FAIL_RELEASE=\
 $(OBJ_be_fail__RELEASE)\
 \

OBJ_BEL_FAIL_RELEASE=\
 $(OBJ_bel_fail__RELEASE)\
 \

OBJ_BER_FAIL_RELEASE=\
 $(OBJ_ber_fail__RELEASE)\
 \

OBJ_BEC_FILE_RELEASE=\
 $(OBJ_bec_file__RELEASE)\
 \

OBJ_BEC_FILE_WC_RELEASE=\
 $(OBJ_bec_file_WC__RELEASE)\
 \

OBJ_BE_FILE_RELEASE=\
 $(OBJ_be_file__RELEASE)\
 \

OBJ_BEL_FILE_RELEASE=\
 $(OBJ_bel_file__RELEASE)\
 \

OBJ_BER_FILE_RELEASE=\
 $(OBJ_ber_file__RELEASE)\
 \

OBJ_BEC_FPRINTF_RELEASE=\
 $(OBJ_bec_fprintf__RELEASE)\
 \

OBJ_BEC_FPRINTF_WC_RELEASE=\
 $(OBJ_bec_fprintf_WC__RELEASE)\
 \

OBJ_BE_FPRINTF_RELEASE=\
 $(OBJ_be_fprintf__RELEASE)\
 \

OBJ_BEL_FPRINTF_RELEASE=\
 $(OBJ_bel_fprintf__RELEASE)\
 \

OBJ_BER_FPRINTF_RELEASE=\
 $(OBJ_ber_fprintf__RELEASE)\
 \

OBJ_BEC_NULL_RELEASE=\
 $(OBJ_bec_null__RELEASE)\
 \

OBJ_BE_NULL_RELEASE=\
 $(OBJ_be_null__RELEASE)\
 \

OBJ_BEL_NULL_RELEASE=\
 $(OBJ_bel_null__RELEASE)\
 \

OBJ_BER_NULL_RELEASE=\
 $(OBJ_ber_null__RELEASE)\
 \

OBJ_BEC_ACE_RELEASE=\
 $(OBJ_bec_ACE__RELEASE)\
 \

OBJ_BE_ACE_RELEASE=\
 $(OBJ_be_ACE__RELEASE)\
 \

OBJ_BEL_ACE_RELEASE=\
 $(OBJ_bel_ACE__RELEASE)\
 \

OBJ_BER_ACE_RELEASE=\
 $(OBJ_ber_ACE__RELEASE)\
 \

OBJ_BEC_COMERROBJ_RELEASE=\
 $(OBJ_bec_COMERROBJ__RELEASE)\
 \

OBJ_BEC_COMERROBJ_WC_RELEASE=\
 $(OBJ_bec_COMERROBJ_WC__RELEASE)\
 \

OBJ_BE_COMERROBJ_RELEASE=\
 $(OBJ_be_COMERROBJ__RELEASE)\
 \

OBJ_BEL_COMERROBJ_RELEASE=\
 $(OBJ_bel_COMERROBJ__RELEASE)\
 \

OBJ_BER_COMERROBJ_RELEASE=\
 $(OBJ_ber_COMERROBJ__RELEASE)\
 \

OBJ_BEC_SPEECH_RELEASE=\
 $(OBJ_bec_SPEECH__RELEASE)\
 \

OBJ_BEC_SPEECH_WC_RELEASE=\
 $(OBJ_bec_SPEECH_WC__RELEASE)\
 \

OBJ_BE_SPEECH_RELEASE=\
 $(OBJ_be_SPEECH__RELEASE)\
 \

OBJ_BEL_SPEECH_RELEASE=\
 $(OBJ_bel_SPEECH__RELEASE)\
 \

OBJ_BER_SPEECH_RELEASE=\
 $(OBJ_ber_SPEECH__RELEASE)\
 \

OBJ_BEC_WINEVLOG_RELEASE=\
 $(OBJ_bec_WINEVLOG__RELEASE)\
 \

OBJ_BE_WINEVLOG_RELEASE=\
 $(OBJ_be_WINEVLOG__RELEASE)\
 \

OBJ_BEL_WINEVLOG_RELEASE=\
 $(OBJ_bel_WINEVLOG__RELEASE)\
 \

OBJ_BER_WINEVLOG_RELEASE=\
 $(OBJ_ber_WINEVLOG__RELEASE)\
 \

OBJ_BEC_WINMSGBX_RELEASE=\
 $(OBJ_bec_WINMSGBX__RELEASE)\
 \

OBJ_BE_WINMSGBX_RELEASE=\
 $(OBJ_be_WINMSGBX__RELEASE)\
 \

OBJ_BEL_WINMSGBX_RELEASE=\
 $(OBJ_bel_WINMSGBX__RELEASE)\
 \

OBJ_BER_WINMSGBX_RELEASE=\
 $(OBJ_ber_WINMSGBX__RELEASE)\
 \

OBJ_BEC_W32CONS_RELEASE=\
 $(OBJ_bec_W32CONS__RELEASE)\
 \

OBJ_BEC_W32CONS_WC_RELEASE=\
 $(OBJ_bec_W32CONS_WC__RELEASE)\
 \

OBJ_BE_W32CONS_RELEASE=\
 $(OBJ_be_W32CONS__RELEASE)\
 \

OBJ_BEL_W32CONS_RELEASE=\
 $(OBJ_bel_W32CONS__RELEASE)\
 \

OBJ_BER_W32CONS_RELEASE=\
 $(OBJ_ber_W32CONS__RELEASE)\
 \

OBJ_BEC_W32DBGR_RELEASE=\
 $(OBJ_bec_W32DBGR__RELEASE)\
 \

OBJ_BEC_W32DBGR_WC_RELEASE=\
 $(OBJ_bec_W32DBGR_WC__RELEASE)\
 \

OBJ_BE_W32DBGR_RELEASE=\
 $(OBJ_be_W32DBGR__RELEASE)\
 \

OBJ_BEL_W32DBGR_RELEASE=\
 $(OBJ_bel_W32DBGR__RELEASE)\
 \

OBJ_BER_W32DBGR_RELEASE=\
 $(OBJ_ber_W32DBGR__RELEASE)\
 \

OBJ_BEC_W32SYSLOG_RELEASE=\
 $(OBJ_bec_W32SYSLOG__RELEASE)\
 \

OBJ_BEC_W32SYSLOG_WC_RELEASE=\
 $(OBJ_bec_W32SYSLOG_WC__RELEASE)\
 \

OBJ_BE_W32SYSLOG_RELEASE=\
 $(OBJ_be_W32SYSLOG__RELEASE)\
 \

OBJ_BEL_W32SYSLOG_RELEASE=\
 $(OBJ_bel_W32SYSLOG__RELEASE)\
 \

OBJ_BER_W32SYSLOG_RELEASE=\
 $(OBJ_ber_W32SYSLOG__RELEASE)\
 \

OBJ_FE_ALL_RELEASE=\
 $(OBJ_fe_all__RELEASE)\
 \

OBJ_FE_FAIL_RELEASE=\
 $(OBJ_fe_fail__RELEASE)\
 \

OBJ_FE_N_RELEASE=\
 $(OBJ_fe_N__RELEASE)\
 \

OBJ_FE_NULL_RELEASE=\
 $(OBJ_fe_null__RELEASE)\
 \

OBJ_FE_SIMPLE_RELEASE=\
 $(OBJ_fe_simple__RELEASE)\
 \

OBJ_FE_WINREG_RELEASE=\
 $(OBJ_fe_winreg__RELEASE)\
 \


# b64

OBJ_b64_b64_DEBUG            = $(PROJ_OBJ_DIR)\b64.pan.b64.debug.obj

OBJ_B64_DEBUG=\
 $(OBJ_b64_b64_DEBUG)\
 \

OBJ_b64_b64_RELEASE            = $(PROJ_OBJ_DIR)\b64.pan.b64.obj

OBJ_B64_RELEASE=\
 $(OBJ_b64_b64_RELEASE)\
 \


# shwild

OBJ_shw_api_DEBUG            = $(PROJ_OBJ_DIR)\shwild.pan.api.debug.obj
OBJ_shw_matches_DEBUG        = $(PROJ_OBJ_DIR)\shwild.pan.matches.debug.obj
OBJ_shw_pattern_DEBUG        = $(PROJ_OBJ_DIR)\shwild.pan.pattern.debug.obj

OBJ_SHWILD_DEBUG=\
 $(OBJ_shw_api_DEBUG)\
 $(OBJ_shw_matches_DEBUG)\
 $(OBJ_shw_pattern_DEBUG)\
 \

OBJ_shw_api_RELEASE            = $(PROJ_OBJ_DIR)\shwild.pan.api.obj
OBJ_shw_matches_RELEASE        = $(PROJ_OBJ_DIR)\shwild.pan.matches.obj
OBJ_shw_pattern_RELEASE        = $(PROJ_OBJ_DIR)\shwild.pan.pattern.obj

OBJ_SHWILD_RELEASE=\
 $(OBJ_shw_api_RELEASE)\
 $(OBJ_shw_matches_RELEASE)\
 $(OBJ_shw_pattern_RELEASE)\
 \


# xtests

OBJ_xts_core_DEBUG           = $(PROJ_OBJ_DIR)\xtests.pan.core.api.debug.obj

OBJ_XTESTS_DEBUG=\
 $(OBJ_xts_core_DEBUG)\
 \

OBJ_xts_core_RELEASE           = $(PROJ_OBJ_DIR)\xtests.pan.core.api.obj

OBJ_XTESTS_RELEASE=\
 $(OBJ_xts_core_RELEASE)\
 \



########################################
# Examples

OBJ_EX_CPP_0_DEBUG			=	.\ex.cpp.0.debug.obj
OBJ_EX_CPP_1_DEBUG			=	.\ex.cpp.1.debug.obj
OBJ_EX_CPP_2_DEBUG			=	.\ex.cpp.2.debug.obj
OBJ_EX_CPP_3_DEBUG			=	.\ex.cpp.3.debug.obj
OBJ_EX_CPP_4_DEBUG			=	.\ex.cpp.4.debug.obj
OBJ_EX_CPP_5_DEBUG			=	.\ex.cpp.5.debug.obj
OBJ_EX_CPP_6_DEBUG			=	.\ex.cpp.6.debug.obj
OBJ_EX_CPP_7_DEBUG			=	.\ex.cpp.7.debug.obj
OBJ_EX_CPP_8_DEBUG			=	.\ex.cpp.8.debug.obj
OBJ_EX_CPP_9_DEBUG			=	.\ex.cpp.9.debug.obj
OBJ_EX_CPP_10_DEBUG		=	.\ex.cpp.10.debug.obj
OBJ_EX_CPP_11_DEBUG		=	.\ex.cpp.11.debug.obj
OBJ_EX_CPP_12_DEBUG		=	.\ex.cpp.12.debug.obj
OBJ_EX_CPP_13_DEBUG		=	.\ex.cpp.13.debug.obj
OBJ_EX_CPP_14_DEBUG		=	.\ex.cpp.14.debug.obj
OBJ_EX_CPP_15_DEBUG		=	.\ex.cpp.15.debug.obj
OBJ_EX_CPP_16_DEBUG		=	.\ex.cpp.16.debug.obj
OBJ_EX_CPP_18_DEBUG		=	.\ex.cpp.18.debug.obj
OBJ_EX_CPP_19_DEBUG		=	.\ex.cpp.19.debug.obj
OBJ_EX_CPP_20_DEBUG		=	.\ex.cpp.20.debug.obj
OBJ_EX_CPP_21_DEBUG		=	.\ex.cpp.21.debug.obj
OBJ_EX_CPP_23_DEBUG		=	.\ex.cpp.23.debug.obj
OBJ_EX_CPP_24_DEBUG		=	.\ex.cpp.24.debug.obj
OBJ_EX_CPP_25_DEBUG		=	.\ex.cpp.25.debug.obj
OBJ_EX_CPP_26_DEBUG		=	.\ex.cpp.26.debug.obj
OBJ_EX_CPP_27_DEBUG		=	.\ex.cpp.27.debug.obj
OBJ_EX_C_0_DEBUG			=	.\ex.c.0.debug.obj
OBJ_EX_C_1_DEBUG			=	.\ex.c.1.debug.obj
OBJ_EX_C_2_DEBUG			=	.\ex.c.2.debug.obj
OBJ_EX_C_3_DEBUG			=	.\ex.c.3.debug.obj
OBJ_EX_C_4_DEBUG			=	.\ex.c.4.debug.obj
OBJ_EX_C_5_DEBUG			=	.\ex.c.5.debug.obj
OBJ_EX_C_6_DEBUG			=	.\ex.c.6.debug.obj
OBJ_EX_C_7_DEBUG			=	.\ex.c.7.debug.obj
OBJ_EX_CPP_0_RELEASE			=	.\ex.cpp.0.obj
OBJ_EX_CPP_1_RELEASE			=	.\ex.cpp.1.obj
OBJ_EX_CPP_2_RELEASE			=	.\ex.cpp.2.obj
OBJ_EX_CPP_3_RELEASE			=	.\ex.cpp.3.obj
OBJ_EX_CPP_4_RELEASE			=	.\ex.cpp.4.obj
OBJ_EX_CPP_5_RELEASE			=	.\ex.cpp.5.obj
OBJ_EX_CPP_6_RELEASE			=	.\ex.cpp.6.obj
OBJ_EX_CPP_7_RELEASE			=	.\ex.cpp.7.obj
OBJ_EX_CPP_8_RELEASE			=	.\ex.cpp.8.obj
OBJ_EX_CPP_9_RELEASE			=	.\ex.cpp.9.obj
OBJ_EX_CPP_10_RELEASE		=	.\ex.cpp.10.obj
OBJ_EX_CPP_11_RELEASE		=	.\ex.cpp.11.obj
OBJ_EX_CPP_12_RELEASE		=	.\ex.cpp.12.obj
OBJ_EX_CPP_13_RELEASE		=	.\ex.cpp.13.obj
OBJ_EX_CPP_14_RELEASE		=	.\ex.cpp.14.obj
OBJ_EX_CPP_15_RELEASE		=	.\ex.cpp.15.obj
OBJ_EX_CPP_16_RELEASE		=	.\ex.cpp.16.obj
OBJ_EX_CPP_18_RELEASE		=	.\ex.cpp.18.obj
OBJ_EX_CPP_19_RELEASE		=	.\ex.cpp.19.obj
OBJ_EX_CPP_20_RELEASE		=	.\ex.cpp.20.obj
OBJ_EX_CPP_21_RELEASE		=	.\ex.cpp.21.obj
OBJ_EX_CPP_23_RELEASE		=	.\ex.cpp.23.obj
OBJ_EX_CPP_24_RELEASE		=	.\ex.cpp.24.obj
OBJ_EX_CPP_25_RELEASE		=	.\ex.cpp.25.obj
OBJ_EX_CPP_26_RELEASE		=	.\ex.cpp.26.obj
OBJ_EX_CPP_27_RELEASE		=	.\ex.cpp.27.obj
OBJ_EX_C_0_RELEASE			=	.\ex.c.0.obj
OBJ_EX_C_1_RELEASE			=	.\ex.c.1.obj
OBJ_EX_C_2_RELEASE			=	.\ex.c.2.obj
OBJ_EX_C_3_RELEASE			=	.\ex.c.3.obj
OBJ_EX_C_4_RELEASE			=	.\ex.c.4.obj
OBJ_EX_C_5_RELEASE			=	.\ex.c.5.obj
OBJ_EX_C_6_RELEASE			=	.\ex.c.6.obj
OBJ_EX_C_7_RELEASE			=	.\ex.c.7.obj

########################################
# Tests

##############################
# Component Tests

OBJ_TEST_COMP_core_initseq_DEBUG	=	.\test.component.core.init_sequence.debug.obj
OBJ_TEST_COMP_core_initseq_RELEASE	=	.\test.component.core.init_sequence.obj
OBJ_TEST_COMP_custsev_DEBUG	=	.\test.component.custom_severity.debug.obj
OBJ_TEST_COMP_custsev_RELEASE	=	.\test.component.custom_severity.obj
OBJ_TEST_COMP_ins_args_DEBUG	=	.\test.component.inserters.args.debug.obj
OBJ_TEST_COMP_ins_args_RELEASE	=	.\test.component.inserters.args.obj
OBJ_TEST_COMP_ins_b64_DEBUG	=	.\test.component.inserters.b64.debug.obj
OBJ_TEST_COMP_ins_b64_RELEASE	=	.\test.component.inserters.b64.obj
OBJ_TEST_COMP_ins_bool_DEBUG	=	.\test.component.inserters.boolean.debug.obj
OBJ_TEST_COMP_ins_bool_RELEASE	=	.\test.component.inserters.boolean.obj
OBJ_TEST_COMP_ins_hostid_DEBUG	=	.\test.component.inserters.hostId.debug.obj
OBJ_TEST_COMP_ins_hostid_RELEASE	=	.\test.component.inserters.hostId.obj
OBJ_TEST_COMP_ins_int_DEBUG	=	.\test.component.inserters.integer.debug.obj
OBJ_TEST_COMP_ins_int_RELEASE	=	.\test.component.inserters.integer.obj
OBJ_TEST_COMP_ins_pad_DEBUG	=	.\test.component.inserters.pad.debug.obj
OBJ_TEST_COMP_ins_pad_RELEASE	=	.\test.component.inserters.pad.obj
OBJ_TEST_COMP_ins_ptr_DEBUG	=	.\test.component.inserters.pointer.debug.obj
OBJ_TEST_COMP_ins_ptr_RELEASE	=	.\test.component.inserters.pointer.obj
OBJ_TEST_COMP_ins_prid_DEBUG	=	.\test.component.inserters.processId.debug.obj
OBJ_TEST_COMP_ins_prid_RELEASE	=	.\test.component.inserters.processId.obj
OBJ_TEST_COMP_ins_real_DEBUG	=	.\test.component.inserters.real.debug.obj
OBJ_TEST_COMP_ins_real_RELEASE	=	.\test.component.inserters.real.obj
OBJ_TEST_COMP_ins_thrid_DEBUG	=	.\test.component.inserters.threadId.debug.obj
OBJ_TEST_COMP_ins_thrid_RELEASE	=	.\test.component.inserters.threadId.obj
OBJ_TEST_COMP_ins_w2m_DEBUG	=	.\test.component.inserters.w2m.debug.obj
OBJ_TEST_COMP_ins_w2m_RELEASE	=	.\test.component.inserters.w2m.obj
OBJ_TEST_COMP_log_1_DEBUG	=	.\test.component.log.1.debug.obj
OBJ_TEST_COMP_log_1_RELEASE	=	.\test.component.log.1.obj
OBJ_TEST_COMP_pan_puts_DEBUG	=	.\test.component.core.pan_logputs.debug.obj
OBJ_TEST_COMP_pan_puts_RELEASE	=	.\test.component.core.pan_logputs.obj
OBJ_TEST_COMP_pan_prtf_DEBUG	=	.\test.component.core.pan_logprintf.debug.obj
OBJ_TEST_COMP_pan_prtf_RELEASE	=	.\test.component.core.pan_logprintf.obj

##############################
# Performance Tests

OBJ_TEST_PERF_ins_w2m_DEBUG		=	.\test.performance.inserters.w2m.debug.obj
OBJ_TEST_PERF_ins_w2m_RELEASE		=	.\test.performance.inserters.w2m.obj

##############################
# Scratch Tests

OBJ_TEST_API_DEBUG			=	.\test.api.debug.obj
OBJ_TEST_FE_DEBUG			=	.\test.fe.debug.obj
OBJ_TEST_BE_N_DEBUG			=	.\test.be.N.fail.debug.obj
OBJ_TEST_API_RELEASE			=	.\test.api.obj
OBJ_TEST_FE_RELEASE			=	.\test.fe.obj
OBJ_TEST_BE_N_RELEASE			=	.\test.be.N.fail.obj

##############################
# Unit Tests

OBJ_TEST_UNIT_lvls_dyninit_DEBUG	=	.\test.unit.levels.dynamic_init.debug.obj
OBJ_TEST_UNIT_lvls_dyninit_RELEASE	=	.\test.unit.levels.dynamic_init.obj
OBJ_TEST_UNIT_lvls_vals_DEBUG	=	.\test.unit.levels.values.debug.obj
OBJ_TEST_UNIT_lvls_vals_RELEASE	=	.\test.unit.levels.values.obj
OBJ_TEST_UNIT_getcurrtm_DEBUG	=	.\test.unit.util.getcurrenttime.debug.obj
OBJ_TEST_UNIT_getcurrtm_RELEASE	=	.\test.unit.util.getcurrenttime.obj
OBJ_TEST_UNIT_getversion_DEBUG	=	.\test.unit.getversion.debug.obj
OBJ_TEST_UNIT_getversion_RELEASE	=	.\test.unit.getversion.obj
OBJ_TEST_UNIT_gethostname_DEBUG	=	.\test.unit.util.gethostname.debug.obj
OBJ_TEST_UNIT_gethostname_RELEASE	=	.\test.unit.util.gethostname.obj
OBJ_TEST_UNIT_onbailout_DEBUG	=	.\test.unit.util.onbailout.debug.obj
OBJ_TEST_UNIT_strnlen_DEBUG	=	.\test.unit.util.strnlen.debug.obj
OBJ_TEST_UNIT_onbailout_RELEASE	=	.\test.unit.util.onbailout.obj
OBJ_TEST_UNIT_strnlen_RELEASE	=	.\test.unit.util.strnlen.obj
OBJ_TEST_UNIT_bec_CEO_DEBUG		=	.\test.unit.bec.COMErrorObject.debug.obj
OBJ_TEST_UNIT_bec_CEO_RELEASE		=	.\test.unit.bec.COMErrorObject.obj
OBJ_TEST_UNIT_bec_file_DEBUG		=	.\test.unit.bec.file.debug.obj
OBJ_TEST_UNIT_bec_file_RELEASE		=	.\test.unit.bec.file.obj
OBJ_TEST_UNIT_bec_fprintf_DEBUG	=	.\test.unit.bec.fprintf.debug.obj
OBJ_TEST_UNIT_bec_fprintf_RELEASE	=	.\test.unit.bec.fprintf.obj
OBJ_TEST_UNIT_bec_fail_DEBUG		=	.\test.unit.bec.fail.debug.obj
OBJ_TEST_UNIT_bec_fail_RELEASE		=	.\test.unit.bec.fail.obj
OBJ_TEST_UNIT_be_fail_DEBUG		=	.\test.unit.be.fail.debug.obj
OBJ_TEST_UNIT_be_fail_RELEASE		=	.\test.unit.be.fail.obj
OBJ_TEST_UNIT_be_lrsplit_DEBUG	=	.\test.unit.be.lrsplit.debug.obj
OBJ_TEST_UNIT_be_lrsplit_RELEASE	=	.\test.unit.be.lrsplit.obj
OBJ_TEST_UNIT_be_N_DEBUG			=	.\test.unit.be.N.debug.obj
OBJ_TEST_UNIT_be_N_RELEASE			=	.\test.unit.be.N.obj
OBJ_TEST_UNIT_fe_all_DEBUG		=	.\test.unit.fe.all.debug.obj
OBJ_TEST_UNIT_fe_all_RELEASE		=	.\test.unit.fe.all.obj
OBJ_TEST_UNIT_fe_fail_DEBUG		=	.\test.unit.fe.fail.debug.obj
OBJ_TEST_UNIT_fe_fail_RELEASE		=	.\test.unit.fe.fail.obj
OBJ_TEST_UNIT_fe_N_DEBUG			=	.\test.unit.fe.N.debug.obj
OBJ_TEST_UNIT_fe_N_RELEASE			=	.\test.unit.fe.N.obj
OBJ_TEST_UNIT_fe_null_DEBUG		=	.\test.unit.fe.null.debug.obj
OBJ_TEST_UNIT_fe_null_RELEASE		=	.\test.unit.fe.null.obj
OBJ_TEST_UNIT_fe_simple_DEBUG	=	.\test.unit.fe.simple.debug.obj
OBJ_TEST_UNIT_fe_simple_RELEASE	=	.\test.unit.fe.simple.obj
OBJ_TEST_UNIT_fe_WinReg_DEBUG	=	.\test.unit.fe.WindowsRegistry.debug.obj
OBJ_TEST_UNIT_fe_WinReg_RELEASE	=	.\test.unit.fe.WindowsRegistry.obj

##################################################
# Target groups

########################################
# Objects

# util
OBJS_UTIL=\
 $(OBJ_UTIL_DEBUG)\
 $(OBJ_UTIL_RELEASE)\
 \

# core
OBJS_CORE=\
 $(OBJ_CORE_DEBUG)\
 $(OBJ_CORE_RELEASE)\
 \

OBJS_FE=\
 $(OBJ_FE_ALL_DEBUG)\
 $(OBJ_FE_FAIL_DEBUG)\
 $(OBJ_FE_N_DEBUG)\
 $(OBJ_FE_NULL_DEBUG)\
 $(OBJ_FE_SIMPLE_DEBUG)\
 $(OBJ_FE_WINREG_DEBUG)\
 $(OBJ_FE_ALL_RELEASE)\
 $(OBJ_FE_FAIL_RELEASE)\
 $(OBJ_FE_N_RELEASE)\
 $(OBJ_FE_NULL_RELEASE)\
 $(OBJ_FE_SIMPLE_RELEASE)\
 $(OBJ_FE_WINREG_RELEASE)\
 \

OBJS_BE=\
 $(OBJ_BE_LRSPLIT_DEBUG)\
 $(OBJ_BE_N_DEBUG)\
 $(OBJ_BEC_TEST_DEBUG)\
 $(OBJ_BE_TEST_DEBUG)\
 $(OBJ_BEL_TEST_DEBUG)\
 $(OBJ_BER_TEST_DEBUG)\
 $(OBJ_BEC_FAIL_DEBUG)\
 $(OBJ_BE_FAIL_DEBUG)\
 $(OBJ_BEL_FAIL_DEBUG)\
 $(OBJ_BER_FAIL_DEBUG)\
 $(OBJ_BEC_FILE_DEBUG)\
 $(OBJ_BEC_FILE_WC_DEBUG)\
 $(OBJ_BE_FILE_DEBUG)\
 $(OBJ_BEL_FILE_DEBUG)\
 $(OBJ_BER_FILE_DEBUG)\
 $(OBJ_BEC_FPRINTF_DEBUG)\
 $(OBJ_BEC_FPRINTF_WC_DEBUG)\
 $(OBJ_BE_FPRINTF_DEBUG)\
 $(OBJ_BEL_FPRINTF_DEBUG)\
 $(OBJ_BER_FPRINTF_DEBUG)\
 $(OBJ_BEC_NULL_DEBUG)\
 $(OBJ_BE_NULL_DEBUG)\
 $(OBJ_BEL_NULL_DEBUG)\
 $(OBJ_BER_NULL_DEBUG)\
 $(OBJ_BEC_COMERROBJ_DEBUG)\
 $(OBJ_BEC_COMERROBJ_WC_DEBUG)\
 $(OBJ_BE_COMERROBJ_DEBUG)\
 $(OBJ_BEL_COMERROBJ_DEBUG)\
 $(OBJ_BER_COMERROBJ_DEBUG)\
 $(OBJ_BEC_SPEECH_DEBUG)\
 $(OBJ_BEC_SPEECH_WC_DEBUG)\
 $(OBJ_BE_SPEECH_DEBUG)\
 $(OBJ_BEL_SPEECH_DEBUG)\
 $(OBJ_BER_SPEECH_DEBUG)\
 $(OBJ_BEC_WINEVLOG_DEBUG)\
 $(OBJ_BE_WINEVLOG_DEBUG)\
 $(OBJ_BEL_WINEVLOG_DEBUG)\
 $(OBJ_BER_WINEVLOG_DEBUG)\
 $(OBJ_BEC_WINMSGBX_DEBUG)\
 $(OBJ_BE_WINMSGBX_DEBUG)\
 $(OBJ_BEL_WINMSGBX_DEBUG)\
 $(OBJ_BER_WINMSGBX_DEBUG)\
 $(OBJ_BEC_W32CONS_DEBUG)\
 $(OBJ_BEC_W32CONS_WC_DEBUG)\
 $(OBJ_BE_W32CONS_DEBUG)\
 $(OBJ_BEL_W32CONS_DEBUG)\
 $(OBJ_BER_W32CONS_DEBUG)\
 $(OBJ_BEC_W32DBGR_DEBUG)\
 $(OBJ_BEC_W32DBGR_WC_DEBUG)\
 $(OBJ_BE_W32DBGR_DEBUG)\
 $(OBJ_BEL_W32DBGR_DEBUG)\
 $(OBJ_BER_W32DBGR_DEBUG)\
 $(OBJ_BEC_W32SYSLOG_DEBUG)\
 $(OBJ_BEC_W32SYSLOG_WC_DEBUG)\
 $(OBJ_BE_W32SYSLOG_DEBUG)\
 $(OBJ_BEL_W32SYSLOG_DEBUG)\
 $(OBJ_BER_W32SYSLOG_DEBUG)\
 $(OBJ_BE_LRSPLIT_RELEASE)\
 $(OBJ_BE_N_RELEASE)\
 $(OBJ_BEC_TEST_RELEASE)\
 $(OBJ_BE_TEST_RELEASE)\
 $(OBJ_BEL_TEST_RELEASE)\
 $(OBJ_BER_TEST_RELEASE)\
 $(OBJ_BEC_FAIL_RELEASE)\
 $(OBJ_BE_FAIL_RELEASE)\
 $(OBJ_BEL_FAIL_RELEASE)\
 $(OBJ_BER_FAIL_RELEASE)\
 $(OBJ_BEC_FILE_RELEASE)\
 $(OBJ_BEC_FILE_WC_RELEASE)\
 $(OBJ_BE_FILE_RELEASE)\
 $(OBJ_BEL_FILE_RELEASE)\
 $(OBJ_BER_FILE_RELEASE)\
 $(OBJ_BEC_FPRINTF_RELEASE)\
 $(OBJ_BEC_FPRINTF_WC_RELEASE)\
 $(OBJ_BE_FPRINTF_RELEASE)\
 $(OBJ_BEL_FPRINTF_RELEASE)\
 $(OBJ_BER_FPRINTF_RELEASE)\
 $(OBJ_BEC_NULL_RELEASE)\
 $(OBJ_BE_NULL_RELEASE)\
 $(OBJ_BEL_NULL_RELEASE)\
 $(OBJ_BER_NULL_RELEASE)\
 $(OBJ_BEC_COMERROBJ_RELEASE)\
 $(OBJ_BEC_COMERROBJ_WC_RELEASE)\
 $(OBJ_BE_COMERROBJ_RELEASE)\
 $(OBJ_BEL_COMERROBJ_RELEASE)\
 $(OBJ_BER_COMERROBJ_RELEASE)\
 $(OBJ_BEC_SPEECH_RELEASE)\
 $(OBJ_BEC_SPEECH_WC_RELEASE)\
 $(OBJ_BE_SPEECH_RELEASE)\
 $(OBJ_BEL_SPEECH_RELEASE)\
 $(OBJ_BER_SPEECH_RELEASE)\
 $(OBJ_BEC_WINEVLOG_RELEASE)\
 $(OBJ_BE_WINEVLOG_RELEASE)\
 $(OBJ_BEL_WINEVLOG_RELEASE)\
 $(OBJ_BER_WINEVLOG_RELEASE)\
 $(OBJ_BEC_WINMSGBX_RELEASE)\
 $(OBJ_BE_WINMSGBX_RELEASE)\
 $(OBJ_BEL_WINMSGBX_RELEASE)\
 $(OBJ_BER_WINMSGBX_RELEASE)\
 $(OBJ_BEC_W32CONS_RELEASE)\
 $(OBJ_BEC_W32CONS_WC_RELEASE)\
 $(OBJ_BE_W32CONS_RELEASE)\
 $(OBJ_BEL_W32CONS_RELEASE)\
 $(OBJ_BER_W32CONS_RELEASE)\
 $(OBJ_BEC_W32DBGR_RELEASE)\
 $(OBJ_BEC_W32DBGR_WC_RELEASE)\
 $(OBJ_BE_W32DBGR_RELEASE)\
 $(OBJ_BEL_W32DBGR_RELEASE)\
 $(OBJ_BER_W32DBGR_RELEASE)\
 $(OBJ_BEC_W32SYSLOG_RELEASE)\
 $(OBJ_BEC_W32SYSLOG_WC_RELEASE)\
 $(OBJ_BE_W32SYSLOG_RELEASE)\
 $(OBJ_BEL_W32SYSLOG_RELEASE)\
 $(OBJ_BER_W32SYSLOG_RELEASE)\
 \


OBJS_ACE=\
 \

# b64
OBJS_B64=\
 $(OBJ_B64_DEBUG)\
 $(OBJ_B64_RELEASE)\
 \

# shwild
OBJS_SHWILD=\
 $(OBJ_SHWILD_DEBUG)\
 $(OBJ_SHWILD_RELEASE)\
 \

# xtests
OBJS_XTESTS=\
 $(OBJ_XTESTS_DEBUG)\
 $(OBJ_XTESTS_RELEASE)\
 \

# examples
OBJS_EXAMPLE_C=\
 $(OBJ_EX_C_0_DEBUG)\
 $(OBJ_EX_C_1_DEBUG)\
 $(OBJ_EX_C_2_DEBUG)\
 $(OBJ_EX_C_3_DEBUG)\
 $(OBJ_EX_C_4_DEBUG)\
 $(OBJ_EX_C_5_DEBUG)\
 $(OBJ_EX_C_6_DEBUG)\
 $(OBJ_EX_C_7_DEBUG)\
 $(OBJ_EX_C_0_RELEASE)\
 $(OBJ_EX_C_1_RELEASE)\
 $(OBJ_EX_C_2_RELEASE)\
 $(OBJ_EX_C_3_RELEASE)\
 $(OBJ_EX_C_4_RELEASE)\
 $(OBJ_EX_C_5_RELEASE)\
 $(OBJ_EX_C_6_RELEASE)\
 $(OBJ_EX_C_7_RELEASE)\
 \

OBJS_EXAMPLE_CPP=\
 $(OBJ_EX_CPP_0_DEBUG)\
 $(OBJ_EX_CPP_1_DEBUG)\
 $(OBJ_EX_CPP_2_DEBUG)\
 $(OBJ_EX_CPP_3_DEBUG)\
 $(OBJ_EX_CPP_4_DEBUG)\
 $(OBJ_EX_CPP_5_DEBUG)\
 $(OBJ_EX_CPP_6_DEBUG)\
 $(OBJ_EX_CPP_7_DEBUG)\
 $(OBJ_EX_CPP_8_DEBUG)\
 $(OBJ_EX_CPP_9_DEBUG)\
 $(OBJ_EX_CPP_10_DEBUG)\
 $(OBJ_EX_CPP_11_DEBUG)\
 $(OBJ_EX_CPP_12_DEBUG)\
 $(OBJ_EX_CPP_13_DEBUG)\
 $(OBJ_EX_CPP_14_DEBUG)\
 $(OBJ_EX_CPP_15_DEBUG)\
 $(OBJ_EX_CPP_16_DEBUG)\
 $(OBJ_EX_CPP_18_DEBUG)\
 $(OBJ_EX_CPP_19_DEBUG)\
 $(OBJ_EX_CPP_20_DEBUG)\
 $(OBJ_EX_CPP_21_DEBUG)\
 $(OBJ_EX_CPP_23_DEBUG)\
 $(OBJ_EX_CPP_24_DEBUG)\
 $(OBJ_EX_CPP_25_DEBUG)\
 $(OBJ_EX_CPP_26_DEBUG)\
 $(OBJ_EX_CPP_27_DEBUG)\
 $(OBJ_EX_CPP_0_RELEASE)\
 $(OBJ_EX_CPP_1_RELEASE)\
 $(OBJ_EX_CPP_2_RELEASE)\
 $(OBJ_EX_CPP_3_RELEASE)\
 $(OBJ_EX_CPP_4_RELEASE)\
 $(OBJ_EX_CPP_5_RELEASE)\
 $(OBJ_EX_CPP_6_RELEASE)\
 $(OBJ_EX_CPP_7_RELEASE)\
 $(OBJ_EX_CPP_8_RELEASE)\
 $(OBJ_EX_CPP_9_RELEASE)\
 $(OBJ_EX_CPP_10_RELEASE)\
 $(OBJ_EX_CPP_11_RELEASE)\
 $(OBJ_EX_CPP_12_RELEASE)\
 $(OBJ_EX_CPP_13_RELEASE)\
 $(OBJ_EX_CPP_14_RELEASE)\
 $(OBJ_EX_CPP_15_RELEASE)\
 $(OBJ_EX_CPP_16_RELEASE)\
 $(OBJ_EX_CPP_18_RELEASE)\
 $(OBJ_EX_CPP_19_RELEASE)\
 $(OBJ_EX_CPP_20_RELEASE)\
 $(OBJ_EX_CPP_21_RELEASE)\
 $(OBJ_EX_CPP_23_RELEASE)\
 $(OBJ_EX_CPP_24_RELEASE)\
 $(OBJ_EX_CPP_25_RELEASE)\
 $(OBJ_EX_CPP_26_RELEASE)\
 $(OBJ_EX_CPP_27_RELEASE)\
 \

OBJS_EXAMPLE=\
 $(OBJS_EXAMPLE_C)\
 $(OBJS_EXAMPLE_CPP)\
 \


# Component Tests
OBJS_TEST_COMPONENT=\
 $(OBJ_TEST_COMP_core_initseq_DEBUG)\
 $(OBJ_TEST_COMP_custsev_DEBUG)\
 $(OBJ_TEST_COMP_ins_args_DEBUG)\
 $(OBJ_TEST_COMP_ins_b64_DEBUG)\
 $(OBJ_TEST_COMP_ins_bool_DEBUG)\
 $(OBJ_TEST_COMP_ins_hostid_DEBUG)\
 $(OBJ_TEST_COMP_ins_int_DEBUG)\
 $(OBJ_TEST_COMP_ins_pad_DEBUG)\
 $(OBJ_TEST_COMP_ins_ptr_DEBUG)\
 $(OBJ_TEST_COMP_ins_prid_DEBUG)\
 $(OBJ_TEST_COMP_ins_real_DEBUG)\
 $(OBJ_TEST_COMP_ins_thrid_DEBUG)\
 $(OBJ_TEST_COMP_ins_w2m_DEBUG)\
 $(OBJ_TEST_COMP_log_1_DEBUG)\
 $(OBJ_TEST_COMP_pan_puts_DEBUG)\
 $(OBJ_TEST_COMP_pan_prtf_DEBUG)\
 $(OBJ_TEST_COMP_core_initseq_RELEASE)\
 $(OBJ_TEST_COMP_custsev_RELEASE)\
 $(OBJ_TEST_COMP_ins_args_RELEASE)\
 $(OBJ_TEST_COMP_ins_b64_RELEASE)\
 $(OBJ_TEST_COMP_ins_bool_RELEASE)\
 $(OBJ_TEST_COMP_ins_hostid_RELEASE)\
 $(OBJ_TEST_COMP_ins_int_RELEASE)\
 $(OBJ_TEST_COMP_ins_pad_RELEASE)\
 $(OBJ_TEST_COMP_ins_ptr_RELEASE)\
 $(OBJ_TEST_COMP_ins_prid_RELEASE)\
 $(OBJ_TEST_COMP_ins_real_RELEASE)\
 $(OBJ_TEST_COMP_ins_thrid_RELEASE)\
 $(OBJ_TEST_COMP_ins_w2m_RELEASE)\
 $(OBJ_TEST_COMP_log_1_RELEASE)\
 $(OBJ_TEST_COMP_pan_puts_RELEASE)\
 $(OBJ_TEST_COMP_pan_prtf_RELEASE)\
 \

# Performance Tests
OBJS_TEST_PERFORMANCE=\
 $(OBJ_TEST_PERF_ins_w2m_DEBUG)\
 $(OBJ_TEST_PERF_ins_w2m_RELEASE)\
 \

# Scratch Tests
OBJS_TEST_SCRATCH=\
 $(OBJ_TEST_API_DEBUG)\
 $(OBJ_TEST_FE_DEBUG)\
 $(OBJ_TEST_BE_N_DEBUG)\
 $(OBJ_TEST_API_RELEASE)\
 $(OBJ_TEST_FE_RELEASE)\
 $(OBJ_TEST_BE_N_RELEASE)\
 \

# Unit Tests
OBJS_TEST_UNIT=\
 $(OBJ_TEST_UNIT_lvls_dyninit_DEBUG)\
 $(OBJ_TEST_UNIT_lvls_vals_DEBUG)\
 $(OBJ_TEST_UNIT_getcurrtm_DEBUG)\
 $(OBJ_TEST_UNIT_getversion_DEBUG)\
 $(OBJ_TEST_UNIT_gethostname_DEBUG)\
 $(OBJ_TEST_UNIT_onbailout_DEBUG)\
 $(OBJ_TEST_UNIT_strnlen_DEBUG)\
 \
 $(OBJ_TEST_UNIT_bec_CEO_DEBUG)\
 $(OBJ_TEST_UNIT_bec_file_DEBUG)\
 $(OBJ_TEST_UNIT_bec_fprintf_DEBUG)\
 $(OBJ_TEST_UNIT_bec_fail_DEBUG)\
 $(OBJ_TEST_UNIT_be_fail_DEBUG)\
 $(OBJ_TEST_UNIT_be_lrsplit_DEBUG)\
 $(OBJ_TEST_UNIT_be_N_DEBUG)\
 \
 $(OBJ_TEST_UNIT_fe_all_DEBUG)\
 $(OBJ_TEST_UNIT_fe_fail_DEBUG)\
 $(OBJ_TEST_UNIT_fe_N_DEBUG)\
 $(OBJ_TEST_UNIT_fe_null_DEBUG)\
 $(OBJ_TEST_UNIT_fe_simple_DEBUG)\
 $(OBJ_TEST_UNIT_fe_WinReg_DEBUG)\
 $(OBJ_TEST_UNIT_lvls_dyninit_RELEASE)\
 $(OBJ_TEST_UNIT_lvls_vals_RELEASE)\
 $(OBJ_TEST_UNIT_getcurrtm_RELEASE)\
 $(OBJ_TEST_UNIT_getversion_RELEASE)\
 $(OBJ_TEST_UNIT_gethostname_RELEASE)\
 $(OBJ_TEST_UNIT_onbailout_RELEASE)\
 $(OBJ_TEST_UNIT_strnlen_RELEASE)\
 \
 $(OBJ_TEST_UNIT_bec_CEO_RELEASE)\
 $(OBJ_TEST_UNIT_bec_file_RELEASE)\
 $(OBJ_TEST_UNIT_bec_fprintf_RELEASE)\
 $(OBJ_TEST_UNIT_bec_fail_RELEASE)\
 $(OBJ_TEST_UNIT_be_fail_RELEASE)\
 $(OBJ_TEST_UNIT_be_lrsplit_RELEASE)\
 $(OBJ_TEST_UNIT_be_N_RELEASE)\
 \
 $(OBJ_TEST_UNIT_fe_all_RELEASE)\
 $(OBJ_TEST_UNIT_fe_fail_RELEASE)\
 $(OBJ_TEST_UNIT_fe_N_RELEASE)\
 $(OBJ_TEST_UNIT_fe_null_RELEASE)\
 $(OBJ_TEST_UNIT_fe_simple_RELEASE)\
 $(OBJ_TEST_UNIT_fe_WinReg_RELEASE)\
 \

########################################
# Libraries

# $(LIB_UTIL [ ` [ N a m e T a g ] ` ] )\

TARGETS_LIB_UTIL=\
 $(LIB_UTIL_DEBUG)\
 $(LIB_UTIL_RELEASE)\
 \

TARGETS_LIB_CORE=\
 $(LIB_CORE_DEBUG)\
 $(LIB_CORE_RELEASE)\
 \

TARGETS_LIB_FE=\
 $(LIB_FE_ALL_DEBUG)\
 $(LIB_FE_FAIL_DEBUG)\
 $(LIB_FE_N_DEBUG)\
 $(LIB_FE_NULL_DEBUG)\
 $(LIB_FE_SIMPLE_DEBUG)\
 $(LIB_FE_WINREG_DEBUG)\
 $(LIB_FE_ALL_RELEASE)\
 $(LIB_FE_FAIL_RELEASE)\
 $(LIB_FE_N_RELEASE)\
 $(LIB_FE_NULL_RELEASE)\
 $(LIB_FE_SIMPLE_RELEASE)\
 $(LIB_FE_WINREG_RELEASE)\
 \

TARGETS_LIB_BE=\
 $(LIB_BE_LRSPLIT_DEBUG)\
 $(LIB_BE_N_DEBUG)\
 $(LIB_BEC_TEST_DEBUG)\
 $(LIB_BE_TEST_DEBUG)\
 $(LIB_BEL_TEST_DEBUG)\
 $(LIB_BER_TEST_DEBUG)\
 $(LIB_BEC_FAIL_DEBUG)\
 $(LIB_BE_FAIL_DEBUG)\
 $(LIB_BEL_FAIL_DEBUG)\
 $(LIB_BER_FAIL_DEBUG)\
 $(LIB_BEC_FILE_DEBUG)\
 $(LIB_BEC_FILE_WC_DEBUG)\
 $(LIB_BE_FILE_DEBUG)\
 $(LIB_BEL_FILE_DEBUG)\
 $(LIB_BER_FILE_DEBUG)\
 $(LIB_BEC_FPRINTF_DEBUG)\
 $(LIB_BEC_FPRINTF_WC_DEBUG)\
 $(LIB_BE_FPRINTF_DEBUG)\
 $(LIB_BEL_FPRINTF_DEBUG)\
 $(LIB_BER_FPRINTF_DEBUG)\
 $(LIB_BEC_NULL_DEBUG)\
 $(LIB_BE_NULL_DEBUG)\
 $(LIB_BEL_NULL_DEBUG)\
 $(LIB_BER_NULL_DEBUG)\
 $(LIB_BEC_COMERROBJ_DEBUG)\
 $(LIB_BEC_COMERROBJ_WC_DEBUG)\
 $(LIB_BE_COMERROBJ_DEBUG)\
 $(LIB_BEL_COMERROBJ_DEBUG)\
 $(LIB_BER_COMERROBJ_DEBUG)\
 $(LIB_BEC_SPEECH_DEBUG)\
 $(LIB_BEC_SPEECH_WC_DEBUG)\
 $(LIB_BE_SPEECH_DEBUG)\
 $(LIB_BEL_SPEECH_DEBUG)\
 $(LIB_BER_SPEECH_DEBUG)\
 $(LIB_BEC_WINEVLOG_DEBUG)\
 $(LIB_BE_WINEVLOG_DEBUG)\
 $(LIB_BEL_WINEVLOG_DEBUG)\
 $(LIB_BER_WINEVLOG_DEBUG)\
 $(LIB_BEC_WINMSGBX_DEBUG)\
 $(LIB_BE_WINMSGBX_DEBUG)\
 $(LIB_BEL_WINMSGBX_DEBUG)\
 $(LIB_BER_WINMSGBX_DEBUG)\
 $(LIB_BEC_W32CONS_DEBUG)\
 $(LIB_BEC_W32CONS_WC_DEBUG)\
 $(LIB_BE_W32CONS_DEBUG)\
 $(LIB_BEL_W32CONS_DEBUG)\
 $(LIB_BER_W32CONS_DEBUG)\
 $(LIB_BEC_W32DBGR_DEBUG)\
 $(LIB_BEC_W32DBGR_WC_DEBUG)\
 $(LIB_BE_W32DBGR_DEBUG)\
 $(LIB_BEL_W32DBGR_DEBUG)\
 $(LIB_BER_W32DBGR_DEBUG)\
 $(LIB_BEC_W32SYSLOG_DEBUG)\
 $(LIB_BEC_W32SYSLOG_WC_DEBUG)\
 $(LIB_BE_W32SYSLOG_DEBUG)\
 $(LIB_BEL_W32SYSLOG_DEBUG)\
 $(LIB_BER_W32SYSLOG_DEBUG)\
 $(LIB_BE_LRSPLIT_RELEASE)\
 $(LIB_BE_N_RELEASE)\
 $(LIB_BEC_TEST_RELEASE)\
 $(LIB_BE_TEST_RELEASE)\
 $(LIB_BEL_TEST_RELEASE)\
 $(LIB_BER_TEST_RELEASE)\
 $(LIB_BEC_FAIL_RELEASE)\
 $(LIB_BE_FAIL_RELEASE)\
 $(LIB_BEL_FAIL_RELEASE)\
 $(LIB_BER_FAIL_RELEASE)\
 $(LIB_BEC_FILE_RELEASE)\
 $(LIB_BEC_FILE_WC_RELEASE)\
 $(LIB_BE_FILE_RELEASE)\
 $(LIB_BEL_FILE_RELEASE)\
 $(LIB_BER_FILE_RELEASE)\
 $(LIB_BEC_FPRINTF_RELEASE)\
 $(LIB_BEC_FPRINTF_WC_RELEASE)\
 $(LIB_BE_FPRINTF_RELEASE)\
 $(LIB_BEL_FPRINTF_RELEASE)\
 $(LIB_BER_FPRINTF_RELEASE)\
 $(LIB_BEC_NULL_RELEASE)\
 $(LIB_BE_NULL_RELEASE)\
 $(LIB_BEL_NULL_RELEASE)\
 $(LIB_BER_NULL_RELEASE)\
 $(LIB_BEC_COMERROBJ_RELEASE)\
 $(LIB_BEC_COMERROBJ_WC_RELEASE)\
 $(LIB_BE_COMERROBJ_RELEASE)\
 $(LIB_BEL_COMERROBJ_RELEASE)\
 $(LIB_BER_COMERROBJ_RELEASE)\
 $(LIB_BEC_SPEECH_RELEASE)\
 $(LIB_BEC_SPEECH_WC_RELEASE)\
 $(LIB_BE_SPEECH_RELEASE)\
 $(LIB_BEL_SPEECH_RELEASE)\
 $(LIB_BER_SPEECH_RELEASE)\
 $(LIB_BEC_WINEVLOG_RELEASE)\
 $(LIB_BE_WINEVLOG_RELEASE)\
 $(LIB_BEL_WINEVLOG_RELEASE)\
 $(LIB_BER_WINEVLOG_RELEASE)\
 $(LIB_BEC_WINMSGBX_RELEASE)\
 $(LIB_BE_WINMSGBX_RELEASE)\
 $(LIB_BEL_WINMSGBX_RELEASE)\
 $(LIB_BER_WINMSGBX_RELEASE)\
 $(LIB_BEC_W32CONS_RELEASE)\
 $(LIB_BEC_W32CONS_WC_RELEASE)\
 $(LIB_BE_W32CONS_RELEASE)\
 $(LIB_BEL_W32CONS_RELEASE)\
 $(LIB_BER_W32CONS_RELEASE)\
 $(LIB_BEC_W32DBGR_RELEASE)\
 $(LIB_BEC_W32DBGR_WC_RELEASE)\
 $(LIB_BE_W32DBGR_RELEASE)\
 $(LIB_BEL_W32DBGR_RELEASE)\
 $(LIB_BER_W32DBGR_RELEASE)\
 $(LIB_BEC_W32SYSLOG_RELEASE)\
 $(LIB_BEC_W32SYSLOG_WC_RELEASE)\
 $(LIB_BE_W32SYSLOG_RELEASE)\
 $(LIB_BEL_W32SYSLOG_RELEASE)\
 $(LIB_BER_W32SYSLOG_RELEASE)\
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
 $(LIB_B64_DEBUG)\
 $(LIB_B64_RELEASE)\
 \

TARGETS_LIB_SHWILD=\
 $(LIB_SHWILD_DEBUG)\
 $(LIB_SHWILD_RELEASE)\
 \

TARGETS_LIB_XTESTS=\
 $(LIB_XTESTS_DEBUG)\
 $(LIB_XTESTS_RELEASE)\
 \

########################################
# Programs

TARGETS_EXAMPLE_C=\
 $(EX_C_0_DEBUG)\
 $(EX_C_1_DEBUG)\
 $(EX_C_2_DEBUG)\
 $(EX_C_3_DEBUG)\
 $(EX_C_4_DEBUG)\
 $(EX_C_5_DEBUG)\
 $(EX_C_6_DEBUG)\
 $(EX_C_0_RELEASE)\
 $(EX_C_1_RELEASE)\
 $(EX_C_2_RELEASE)\
 $(EX_C_3_RELEASE)\
 $(EX_C_4_RELEASE)\
 $(EX_C_5_RELEASE)\
 $(EX_C_6_RELEASE)\
 \

TARGETS_EXAMPLE_CPP=\
 $(EX_CPP_0_DEBUG)\
 $(EX_CPP_1_DEBUG)\
 $(EX_CPP_2_DEBUG)\
 $(EX_CPP_3_DEBUG)\
 $(EX_CPP_4_DEBUG)\
 $(EX_CPP_5_DEBUG)\
 $(EX_CPP_6_DEBUG)\
 $(EX_CPP_7_DEBUG)\
 $(EX_CPP_9_DEBUG)\
 $(EX_CPP_10_DEBUG)\
 $(EX_CPP_11_DEBUG)\
 $(EX_CPP_12_DEBUG)\
 $(EX_CPP_13_DEBUG)\
 $(EX_CPP_14_DEBUG)\
 $(EX_CPP_15_DEBUG)\
 $(EX_CPP_16_DEBUG)\
 $(EX_CPP_18_DEBUG)\
 $(EX_CPP_19_DEBUG)\
 $(EX_CPP_20_DEBUG)\
 $(EX_CPP_21_DEBUG)\
 $(EX_CPP_23_DEBUG)\
 $(EX_CPP_24_DEBUG)\
 $(EX_CPP_25_DEBUG)\
 $(EX_CPP_26_DEBUG)\
 $(EX_CPP_27_DEBUG)\
 $(EX_CPP_0_RELEASE)\
 $(EX_CPP_1_RELEASE)\
 $(EX_CPP_2_RELEASE)\
 $(EX_CPP_3_RELEASE)\
 $(EX_CPP_4_RELEASE)\
 $(EX_CPP_5_RELEASE)\
 $(EX_CPP_6_RELEASE)\
 $(EX_CPP_7_RELEASE)\
 $(EX_CPP_9_RELEASE)\
 $(EX_CPP_10_RELEASE)\
 $(EX_CPP_11_RELEASE)\
 $(EX_CPP_12_RELEASE)\
 $(EX_CPP_13_RELEASE)\
 $(EX_CPP_14_RELEASE)\
 $(EX_CPP_15_RELEASE)\
 $(EX_CPP_16_RELEASE)\
 $(EX_CPP_18_RELEASE)\
 $(EX_CPP_19_RELEASE)\
 $(EX_CPP_20_RELEASE)\
 $(EX_CPP_21_RELEASE)\
 $(EX_CPP_23_RELEASE)\
 $(EX_CPP_24_RELEASE)\
 $(EX_CPP_25_RELEASE)\
 $(EX_CPP_26_RELEASE)\
 $(EX_CPP_27_RELEASE)\
 \

TARGETS_EXAMPLE=\
 $(TARGETS_EXAMPLE_C)\
 $(TARGETS_EXAMPLE_CPP)\
 \


TARGETS_SAMPLE=\
 \


TARGETS_TEST_COMPONENT=\
 $(TARG_TEST_COMP_core_initseq_DEBUG)\
 $(TARG_TEST_COMP_custsev_DEBUG)\
 $(TARG_TEST_COMP_ins_args_DEBUG)\
 $(TARG_TEST_COMP_ins_b64_DEBUG)\
 $(TARG_TEST_COMP_ins_bool_DEBUG)\
 $(TARG_TEST_COMP_ins_hostid_DEBUG)\
 $(TARG_TEST_COMP_ins_int_DEBUG)\
 $(TARG_TEST_COMP_ins_pad_DEBUG)\
 $(TARG_TEST_COMP_ins_ptr_DEBUG)\
 $(TARG_TEST_COMP_ins_prid_DEBUG)\
 $(TARG_TEST_COMP_ins_real_DEBUG)\
 $(TARG_TEST_COMP_ins_thrid_DEBUG)\
 $(TARG_TEST_COMP_ins_w2m_DEBUG)\
 $(TARG_TEST_COMP_log_1_DEBUG)\
 $(TARG_TEST_COMP_pan_puts_DEBUG)\
 $(TARG_TEST_COMP_pan_prtf_DEBUG)\
 $(TARG_TEST_COMP_core_initseq_RELEASE)\
 $(TARG_TEST_COMP_custsev_RELEASE)\
 $(TARG_TEST_COMP_ins_args_RELEASE)\
 $(TARG_TEST_COMP_ins_b64_RELEASE)\
 $(TARG_TEST_COMP_ins_bool_RELEASE)\
 $(TARG_TEST_COMP_ins_hostid_RELEASE)\
 $(TARG_TEST_COMP_ins_int_RELEASE)\
 $(TARG_TEST_COMP_ins_pad_RELEASE)\
 $(TARG_TEST_COMP_ins_ptr_RELEASE)\
 $(TARG_TEST_COMP_ins_prid_RELEASE)\
 $(TARG_TEST_COMP_ins_real_RELEASE)\
 $(TARG_TEST_COMP_ins_thrid_RELEASE)\
 $(TARG_TEST_COMP_ins_w2m_RELEASE)\
 $(TARG_TEST_COMP_log_1_RELEASE)\
 $(TARG_TEST_COMP_pan_puts_RELEASE)\
 $(TARG_TEST_COMP_pan_prtf_RELEASE)\
 \

TARGETS_TEST_PERFORMANCE=\
 $(TARG_TEST_PERF_ins_w2m_DEBUG)\
 $(TARG_TEST_PERF_ins_w2m_RELEASE)\
 \

TARGETS_TEST_SCRATCH_STD=\
 $(TEST__DEBUG_API_W_BE_FPRINTF)\
 $(TEST__DEBUG_API_W_BE_COMERROBJ)\
 $(TEST__DEBUG_API_W_BE_WINEVLOG)\
 $(TEST__DEBUG_API_W_BE_W32CONS)\
 $(TEST__DEBUG_API_W_BE_W32DBGR)\
 $(TEST__DEBUG_API_W_BE_W32SYSLOG)\
 $(TEST__DEBUG_API_W_BELR_2_W32DBGR_FPRINTF)\
 $(TEST__DEBUG_API_W_BELR_3_W32DBGR_W32SYSLOG)\
 $(TARGET_TEST_FE_DEBUG)\
 $(TEST__DEBUG_BE_N_FAIL)\
 $(TEST__RELEASE_API_W_BE_FPRINTF)\
 $(TEST__RELEASE_API_W_BE_COMERROBJ)\
 $(TEST__RELEASE_API_W_BE_WINEVLOG)\
 $(TEST__RELEASE_API_W_BE_W32CONS)\
 $(TEST__RELEASE_API_W_BE_W32DBGR)\
 $(TEST__RELEASE_API_W_BE_W32SYSLOG)\
 $(TEST__RELEASE_API_W_BELR_2_W32DBGR_FPRINTF)\
 $(TEST__RELEASE_API_W_BELR_3_W32DBGR_W32SYSLOG)\
 $(TARGET_TEST_FE_RELEASE)\
 $(TEST__RELEASE_BE_N_FAIL)\

TARGETS_TEST_SCRATCH_ACE=\
 \

TARGETS_TEST_SCRATCH=\
 $(TARGETS_TEST_SCRATCH_STD)\
 \
# $(TARG_TEST_SCRT_file_DEBUG)\
# $(TARG_TEST_SCRT_file_RELEASE)\
 \
# $(TARG_TEST_SCRT_file_DEBUG)\
# $(TARG_TEST_SCRT_file_RELEASE)\
 \

# $(TARGETS_TEST_SCRATCH_ACE)\
# \

TARGETS_TEST_UNIT=\
 $(TARG_TEST_UNIT_lvls_dyninit_DEBUG)\
 $(TARG_TEST_UNIT_lvls_vals_DEBUG)\
 $(TARG_TEST_UNIT_getcurrtm_DEBUG)\
 $(TARG_TEST_UNIT_getversion_DEBUG)\
 $(TARG_TEST_UNIT_gethostname_DEBUG)\
 $(TARG_TEST_UNIT_onbailout_DEBUG)\
 $(TARG_TEST_UNIT_strnlen_DEBUG)\
 \
 $(TARG_TEST_UNIT_bec_CEO_DEBUG)\
 $(TARG_TEST_UNIT_bec_file_DEBUG)\
 $(TARG_TEST_UNIT_bec_fprintf_DEBUG)\
 $(TARG_TEST_UNIT_bec_fail_DEBUG)\
 $(TARG_TEST_UNIT_be_fail_DEBUG)\
 $(TARG_TEST_UNIT_be_lrsplit_DEBUG)\
 $(TARG_TEST_UNIT_be_N_DEBUG)\
 \
 $(TARG_TEST_UNIT_fe_all_DEBUG)\
 $(TARG_TEST_UNIT_fe_fail_DEBUG)\
 $(TARG_TEST_UNIT_fe_N_DEBUG)\
 $(TARG_TEST_UNIT_fe_null_DEBUG)\
 $(TARG_TEST_UNIT_fe_simple_DEBUG)\
 $(TARG_TEST_UNIT_fe_WinReg_DEBUG)\
 $(TARG_TEST_UNIT_lvls_dyninit_RELEASE)\
 $(TARG_TEST_UNIT_lvls_vals_RELEASE)\
 $(TARG_TEST_UNIT_getcurrtm_RELEASE)\
 $(TARG_TEST_UNIT_getversion_RELEASE)\
 $(TARG_TEST_UNIT_gethostname_RELEASE)\
 $(TARG_TEST_UNIT_onbailout_RELEASE)\
 $(TARG_TEST_UNIT_strnlen_RELEASE)\
 \
 $(TARG_TEST_UNIT_bec_CEO_RELEASE)\
 $(TARG_TEST_UNIT_bec_file_RELEASE)\
 $(TARG_TEST_UNIT_bec_fprintf_RELEASE)\
 $(TARG_TEST_UNIT_bec_fail_RELEASE)\
 $(TARG_TEST_UNIT_be_fail_RELEASE)\
 $(TARG_TEST_UNIT_be_lrsplit_RELEASE)\
 $(TARG_TEST_UNIT_be_N_RELEASE)\
 \
 $(TARG_TEST_UNIT_fe_all_RELEASE)\
 $(TARG_TEST_UNIT_fe_fail_RELEASE)\
 $(TARG_TEST_UNIT_fe_N_RELEASE)\
 $(TARG_TEST_UNIT_fe_null_RELEASE)\
 $(TARG_TEST_UNIT_fe_simple_RELEASE)\
 $(TARG_TEST_UNIT_fe_WinReg_RELEASE)\
 \

############################################################
# Third-party libraries

LIBS_3PTY_ACE					=	ace.lib
LIBS_3PTY_COMERROBJ				=	advapi32.lib ole32.lib oleaut32.lib user32.lib
LIBS_3PTY_FPRINTF				=	advapi32.lib user32.lib
LIBS_3PTY_SYSLOG				=	advapi32.lib user32.lib
LIBS_3PTY_SPEECH				=	advapi32.lib ole32.lib oleaut32.lib user32.lib
LIBS_3PTY_WINEVLOG				=	advapi32.lib user32.lib
LIBS_3PTY_WINMSGBX				=	advapi32.lib user32.lib
LIBS_3PTY_W32CONS				=	advapi32.lib user32.lib
LIBS_3PTY_W32DBGR				=	advapi32.lib user32.lib
LIBS_3PTY_W32SYSLOG				=	advapi32.lib user32.lib ws2_32.lib
LIBS_3PTY_W32DBGR_FPRINTF		=	advapi32.lib user32.lib
LIBS_3PTY_W32DBGR_W32SYSLOG		=	advapi32.lib user32.lib ws2_32.lib
LIBS_3PTY_BE_N_FAIL				=	advapi32.lib user32.lib
LIBS_3PTY_TEST_UNIT				=	advapi32.lib user32.lib

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

build.all:                                                              build.libs.all build.examples build.samples build.test.all


# test targets

test.component_:
	@echo Running Test:Component programs ...
	$(TARG_TEST_COMP_core_initseq_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_core_initseq_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_custsev_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_custsev_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_args_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_args_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_b64_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_b64_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_bool_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_bool_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_hostid_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_hostid_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_int_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_int_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_pad_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_pad_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_ptr_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_ptr_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_prid_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_prid_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_real_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_real_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_thrid_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_thrid_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_w2m_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_ins_w2m_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_log_1_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_log_1_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_pan_puts_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_pan_puts_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_pan_prtf_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_COMP_pan_prtf_RELEASE) --verbosity=$(TEST_VERBOSITY)

test.performance_:
	@echo Running Test:Performance programs ...
	$(TARG_TEST_PERF_ins_w2m_DEBUG) on
	$(TARG_TEST_PERF_ins_w2m_DEBUG) off
	$(TARG_TEST_PERF_ins_w2m_RELEASE) on
	$(TARG_TEST_PERF_ins_w2m_RELEASE) off

test.scratch_:
	@echo Running Test:Scratch programs ...
	$(TEST__DEBUG_API_W_BE_FPRINTF)
	$(TEST__DEBUG_API_W_BE_COMERROBJ)
	$(TEST__DEBUG_API_W_BE_WINEVLOG)
	$(TEST__DEBUG_API_W_BE_W32CONS)
	$(TEST__DEBUG_API_W_BE_W32DBGR)
	$(TEST__DEBUG_API_W_BE_W32SYSLOG)
	$(TEST__DEBUG_API_W_BELR_2_W32DBGR_FPRINTF)
	$(TEST__DEBUG_API_W_BELR_3_W32DBGR_W32SYSLOG)
	$(TARGET_TEST_FE_DEBUG)
	$(TEST__DEBUG_API_W_BE_FPRINTF)
	$(TEST__DEBUG_BE_N_FAIL)
	$(TEST__RELEASE_API_W_BE_FPRINTF)
	$(TEST__RELEASE_API_W_BE_COMERROBJ)
	$(TEST__RELEASE_API_W_BE_WINEVLOG)
	$(TEST__RELEASE_API_W_BE_W32CONS)
	$(TEST__RELEASE_API_W_BE_W32DBGR)
	$(TEST__RELEASE_API_W_BE_W32SYSLOG)
	$(TEST__RELEASE_API_W_BELR_2_W32DBGR_FPRINTF)
	$(TEST__RELEASE_API_W_BELR_3_W32DBGR_W32SYSLOG)
	$(TARGET_TEST_FE_RELEASE)
	$(TEST__RELEASE_API_W_BE_FPRINTF)
	$(TEST__RELEASE_BE_N_FAIL)

test.unit_:
	@echo Running Test:Unit programs ...
	$(TARG_TEST_UNIT_lvls_dyninit_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_lvls_dyninit_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_lvls_vals_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_lvls_vals_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_getcurrtm_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_getcurrtm_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_getversion_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_getversion_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_gethostname_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_gethostname_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_onbailout_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_onbailout_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_strnlen_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_strnlen_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_bec_CEO_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_bec_CEO_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_bec_file_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_bec_file_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_bec_fprintf_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_bec_fprintf_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_bec_fail_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_bec_fail_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_be_fail_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_be_fail_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_be_lrsplit_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_be_lrsplit_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_be_N_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_be_N_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_all_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_all_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_fail_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_fail_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_N_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_N_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_null_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_null_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_simple_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_simple_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_WinReg_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(TARG_TEST_UNIT_fe_WinReg_RELEASE) --verbosity=$(TEST_VERBOSITY)

test.examples_:
	@echo Running Example programs ...
	$(EX_C_0_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_1_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_2_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_3_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_4_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_5_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_6_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_7_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_0_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_1_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_2_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_3_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_4_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_5_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_6_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_C_7_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_0_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_1_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_2_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_3_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_4_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_5_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_6_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_7_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_9_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_10_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_11_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_12_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_13_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_14_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_15_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_16_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_18_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_19_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_20_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_21_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_23_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_24_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_25_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_26_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_27_DEBUG) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_0_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_1_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_2_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_3_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_4_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_5_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_6_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_7_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_9_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_10_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_11_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_12_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_13_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_14_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_15_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_16_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_18_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_19_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_20_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_21_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_23_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_24_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_25_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_26_RELEASE) --verbosity=$(TEST_VERBOSITY)
	$(EX_CPP_27_RELEASE) --verbosity=$(TEST_VERBOSITY)

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
	@-if exist util.*.obj $(RM) util.*.obj
	@-if exist core.*.obj $(RM) core.*.obj
	@-if exist inserters.*.obj $(RM) inserters.*.obj
	@-if exist $(PROJ_LIB_DIR)\$(PROJ_TAG_VER).core.$(COMP_TAG)*.lib $(RM) $(PROJ_LIB_DIR)\$(PROJ_TAG_VER).core.$(COMP_TAG)*.lib
	@-if exist $(PROJ_LIB_DIR)\$(PROJ_TAG_VER).util.$(COMP_TAG)*.lib $(RM) $(PROJ_LIB_DIR)\$(PROJ_TAG_VER).util.$(COMP_TAG)*.lib

clean.libs.be:
	@echo Cleaning Back-end libraries ...
	@-if exist bec.*.obj $(RM) bec.*.obj
	@-if exist bel.*.obj $(RM) bel.*.obj
	@-if exist ber.*.obj $(RM) ber.*.obj
	@-if exist be.*.obj $(RM) be.*.obj
	@-if exist $(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.*.$(COMP_TAG)*.lib $(RM) $(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bec.*.$(COMP_TAG)*.lib
	@-if exist $(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.*.$(COMP_TAG)*.lib $(RM) $(PROJ_LIB_DIR)\$(PROJ_TAG_VER).bel.*.$(COMP_TAG)*.lib
	@-if exist $(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.*.$(COMP_TAG)*.lib $(RM) $(PROJ_LIB_DIR)\$(PROJ_TAG_VER).ber.*.$(COMP_TAG)*.lib
	@-if exist $(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.*.$(COMP_TAG)*.lib $(RM) $(PROJ_LIB_DIR)\$(PROJ_TAG_VER).be.*.$(COMP_TAG)*.lib


clean.libs.fe:
	@echo Cleaning Front-end libraries ...
	@-if exist fe.*.obj $(RM) fe.*.obj
	@-if exist $(PROJ_LIB_DIR)\$(PROJ_TAG_VER).fe.*.$(COMP_TAG)*.lib $(RM) $(PROJ_LIB_DIR)\$(PROJ_TAG_VER).fe.*.$(COMP_TAG)*.lib

clean.libs.b64:
	@echo Cleaning b64 libraries ...
	@-if exist b64.*.obj $(RM) b64.*.obj
	@-if exist $(PROJ_LIB_DIR)\$(B64_TAG_VER).pan.$(COMP_TAG)*.lib $(RM) $(PROJ_LIB_DIR)\$(B64_TAG_VER).pan.$(COMP_TAG)*.lib

clean.libs.shwild:
	@echo Cleaning shwild libraries ...
	@-if exist shwild.*.obj $(RM) shwild.*.obj
	@-if exist $(PROJ_LIB_DIR)\$(SHWILD_TAG_VER).pan.$(COMP_TAG)*.lib $(RM) $(PROJ_LIB_DIR)\$(SHWILD_TAG_VER).pan.$(COMP_TAG)*.lib

clean.libs.xtests:
	@echo Cleaning xTests libraries ...
	@-if exist xtests.*.obj $(RM) xtests.*.obj
	@-if exist $(PROJ_LIB_DIR)\$(XTESTS_TAG_VER).pan.$(COMP_TAG)*.lib $(RM) $(PROJ_LIB_DIR)\$(XTESTS_TAG_VER).pan.$(COMP_TAG)*.lib

clean.libs.ace:
	@echo Cleaning ACE libraries ...

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

$(LIB_UTIL_DEBUG): $(OBJ_UTIL_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_UTIL_DEBUG)

$(OBJ_utl_bailout_DEBUG): $(PROJ_SRC_DIR)\util\bailout.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\util\bailout.c
$(OBJ_utl_init_code_strs_DEBUG): $(PROJ_SRC_DIR)\util\init_code_strings.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\util\init_code_strings.c
$(OBJ_utl_sev_strs_DEBUG): $(PROJ_SRC_DIR)\util\severity_strings.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\util\severity_strings.c
$(OBJ_utl_time_DEBUG): $(PROJ_SRC_DIR)\util\time.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\util\time.cpp
$(OBJ_utl_host_name_DEBUG): $(PROJ_SRC_DIR)\util\hostname.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\util\hostname.c
$(OBJ_utl_snprintf_DEBUG): $(PROJ_SRC_DIR)\util\snprintf.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\util\snprintf.c
$(OBJ_utl_strdup_DEBUG): $(PROJ_SRC_DIR)\util\strdup.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\util\strdup.c
$(OBJ_utl_procid_DEBUG): $(PROJ_SRC_DIR)\util\processid.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\util\processid.c
$(OBJ_utl_thread_DEBUG): $(PROJ_SRC_DIR)\util\threadid.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\util\threadid.c
$(OBJ_utl_be_context_DEBUG): $(PROJ_SRC_DIR)\util\be.context.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\util\be.context.cpp
$(OBJ_utl_core_apidefs_DEBUG): $(PROJ_SRC_DIR)\util\core.apidefs.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\util\core.apidefs.cpp
$(OBJ_utl_be_parse_DEBUG): $(PROJ_SRC_DIR)\util\be.parse.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\util\be.parse.cpp
$(OBJ_utl_strnlen_DEBUG): $(PROJ_SRC_DIR)\util\strnlen.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\util\strnlen.cpp

$(LIB_UTIL_RELEASE): $(OBJ_UTIL_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_UTIL_RELEASE)

$(OBJ_utl_bailout_RELEASE): $(PROJ_SRC_DIR)\util\bailout.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\util\bailout.c
$(OBJ_utl_init_code_strs_RELEASE): $(PROJ_SRC_DIR)\util\init_code_strings.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\util\init_code_strings.c
$(OBJ_utl_sev_strs_RELEASE): $(PROJ_SRC_DIR)\util\severity_strings.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\util\severity_strings.c
$(OBJ_utl_time_RELEASE): $(PROJ_SRC_DIR)\util\time.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\util\time.cpp
$(OBJ_utl_host_name_RELEASE): $(PROJ_SRC_DIR)\util\hostname.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\util\hostname.c
$(OBJ_utl_snprintf_RELEASE): $(PROJ_SRC_DIR)\util\snprintf.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\util\snprintf.c
$(OBJ_utl_strdup_RELEASE): $(PROJ_SRC_DIR)\util\strdup.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\util\strdup.c
$(OBJ_utl_procid_RELEASE): $(PROJ_SRC_DIR)\util\processid.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\util\processid.c
$(OBJ_utl_thread_RELEASE): $(PROJ_SRC_DIR)\util\threadid.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\util\threadid.c
$(OBJ_utl_be_context_RELEASE): $(PROJ_SRC_DIR)\util\be.context.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\util\be.context.cpp
$(OBJ_utl_core_apidefs_RELEASE): $(PROJ_SRC_DIR)\util\core.apidefs.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\util\core.apidefs.cpp
$(OBJ_utl_be_parse_RELEASE): $(PROJ_SRC_DIR)\util\be.parse.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\util\be.parse.cpp
$(OBJ_utl_strnlen_RELEASE): $(PROJ_SRC_DIR)\util\strnlen.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\util\strnlen.cpp


########################################
# Main library - 'pantheios.X.core.a'

$(LIB_CORE_DEBUG): $(OBJ_CORE_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_CORE_DEBUG)

$(OBJ_cr_api_DEBUG): $(PROJ_SRC_DIR)\core\api.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\core\api.cpp
$(OBJ_cr_auto_DEBUG): $(PROJ_SRC_DIR)\core\auto.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\core\auto.cpp
$(OBJ_cr_logprintf_DEBUG): $(PROJ_SRC_DIR)\core\logprintf.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\core\logprintf.c

$(OBJ_ins_args_DEBUG): $(PROJ_SRC_DIR)\inserters\args.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\inserters\args.cpp
$(OBJ_ins_b64_DEBUG): $(PROJ_SRC_DIR)\inserters\b64.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\inserters\b64.cpp
$(OBJ_ins_blob_DEBUG): $(PROJ_SRC_DIR)\inserters\blob.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\inserters\blob.cpp
$(OBJ_ins_bool_DEBUG): $(PROJ_SRC_DIR)\inserters\boolean.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\inserters\boolean.cpp
$(OBJ_ins_host_DEBUG): $(PROJ_SRC_DIR)\inserters\hostid.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\inserters\hostid.cpp
$(OBJ_ins_int_DEBUG): $(PROJ_SRC_DIR)\inserters\integer.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\inserters\integer.cpp
$(OBJ_ins_ptr_DEBUG): $(PROJ_SRC_DIR)\inserters\pointer.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\inserters\pointer.cpp
$(OBJ_ins_prid_DEBUG): $(PROJ_SRC_DIR)\inserters\processid.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\inserters\processid.cpp
$(OBJ_ins_real_DEBUG): $(PROJ_SRC_DIR)\inserters\real.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\inserters\real.cpp
$(OBJ_ins_thrid_DEBUG): $(PROJ_SRC_DIR)\inserters\threadid.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\inserters\threadid.cpp
$(OBJ_ins_w2m_DEBUG): $(PROJ_SRC_DIR)\inserters\w2m.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\inserters\w2m.cpp

$(LIB_CORE_RELEASE): $(OBJ_CORE_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_CORE_RELEASE)

$(OBJ_cr_api_RELEASE): $(PROJ_SRC_DIR)\core\api.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\core\api.cpp
$(OBJ_cr_auto_RELEASE): $(PROJ_SRC_DIR)\core\auto.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\core\auto.cpp
$(OBJ_cr_logprintf_RELEASE): $(PROJ_SRC_DIR)\core\logprintf.c $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\core\logprintf.c

$(OBJ_ins_args_RELEASE): $(PROJ_SRC_DIR)\inserters\args.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\inserters\args.cpp
$(OBJ_ins_b64_RELEASE): $(PROJ_SRC_DIR)\inserters\b64.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\inserters\b64.cpp
$(OBJ_ins_blob_RELEASE): $(PROJ_SRC_DIR)\inserters\blob.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\inserters\blob.cpp
$(OBJ_ins_bool_RELEASE): $(PROJ_SRC_DIR)\inserters\boolean.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\inserters\boolean.cpp
$(OBJ_ins_host_RELEASE): $(PROJ_SRC_DIR)\inserters\hostid.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\inserters\hostid.cpp
$(OBJ_ins_int_RELEASE): $(PROJ_SRC_DIR)\inserters\integer.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\inserters\integer.cpp
$(OBJ_ins_ptr_RELEASE): $(PROJ_SRC_DIR)\inserters\pointer.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\inserters\pointer.cpp
$(OBJ_ins_prid_RELEASE): $(PROJ_SRC_DIR)\inserters\processid.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\inserters\processid.cpp
$(OBJ_ins_real_RELEASE): $(PROJ_SRC_DIR)\inserters\real.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\inserters\real.cpp
$(OBJ_ins_thrid_RELEASE): $(PROJ_SRC_DIR)\inserters\threadid.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\inserters\threadid.cpp
$(OBJ_ins_w2m_RELEASE): $(PROJ_SRC_DIR)\inserters\w2m.cpp $(CORE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\inserters\w2m.cpp


########################################
# Backend util components

########################################
# Backend library - 'pantheios.be.lrsplit.a'

$(LIB_BE_LRSPLIT_DEBUG): $(OBJ_BE_LRSPLIT_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BE_LRSPLIT_DEBUG)

$(OBJ_be_lrsplit__DEBUG): $(PROJ_SRC_DIR)\backends\be.lrsplit.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\be.lrsplit.c

$(LIB_BE_LRSPLIT_RELEASE): $(OBJ_BE_LRSPLIT_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BE_LRSPLIT_RELEASE)

$(OBJ_be_lrsplit__RELEASE): $(PROJ_SRC_DIR)\backends\be.lrsplit.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\be.lrsplit.c

########################################
# Backend library - 'pantheios.be.N.a'

$(LIB_BE_N_DEBUG): $(OBJ_BE_N_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BE_N_DEBUG)

$(OBJ_be_N__DEBUG): $(PROJ_SRC_DIR)\backends\be.N.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\be.N.c

$(LIB_BE_N_RELEASE): $(OBJ_BE_N_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BE_N_RELEASE)

$(OBJ_be_N__RELEASE): $(PROJ_SRC_DIR)\backends\be.N.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\be.N.c

########################################
# Back-end library - 'pantheios.bec.test.a'

$(LIB_BEC_TEST_DEBUG): $(OBJ_BEC_TEST_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_TEST_DEBUG)

$(OBJ_bec_test_DEBUG): $(PROJ_SRC_DIR)\backends\bec.test.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.test.cpp

$(LIB_BEC_TEST_RELEASE): $(OBJ_BEC_TEST_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_TEST_RELEASE)

$(OBJ_bec_test_RELEASE): $(PROJ_SRC_DIR)\backends\bec.test.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.test.cpp

########################################
# Back-end library - 'pantheios.be.test.a'

$(LIB_BE_TEST_DEBUG): $(OBJ_BE_TEST_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BE_TEST_DEBUG)

$(OBJ_be_test_DEBUG): $(PROJ_SRC_DIR)\backends\be.test.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\be.test.c

$(LIB_BE_TEST_RELEASE): $(OBJ_BE_TEST_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BE_TEST_RELEASE)

$(OBJ_be_test_RELEASE): $(PROJ_SRC_DIR)\backends\be.test.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\be.test.c

########################################
# Back-end library - 'pantheios.bel.test.a'

$(LIB_BEL_TEST_DEBUG): $(OBJ_BEL_TEST_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEL_TEST_DEBUG)

$(OBJ_bel_test_DEBUG): $(PROJ_SRC_DIR)\backends\bel.test.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bel.test.c

$(LIB_BEL_TEST_RELEASE): $(OBJ_BEL_TEST_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEL_TEST_RELEASE)

$(OBJ_bel_test_RELEASE): $(PROJ_SRC_DIR)\backends\bel.test.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bel.test.c

########################################
# Back-end library - 'pantheios.ber.test.a'

$(LIB_BER_TEST_DEBUG): $(OBJ_BER_TEST_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BER_TEST_DEBUG)

$(OBJ_ber_test_DEBUG): $(PROJ_SRC_DIR)\backends\ber.test.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\ber.test.c

$(LIB_BER_TEST_RELEASE): $(OBJ_BER_TEST_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BER_TEST_RELEASE)

$(OBJ_ber_test_RELEASE): $(PROJ_SRC_DIR)\backends\ber.test.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\ber.test.c

########################################
# Backend library - 'pantheios.bec.fail.a'

$(LIB_BEC_FAIL_DEBUG): $(OBJ_BEC_FAIL_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_FAIL_DEBUG)

$(OBJ_bec_fail__DEBUG): $(PROJ_SRC_DIR)\backends\bec.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.fail.c

$(LIB_BEC_FAIL_RELEASE): $(OBJ_BEC_FAIL_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_FAIL_RELEASE)

$(OBJ_bec_fail__RELEASE): $(PROJ_SRC_DIR)\backends\bec.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.fail.c


########################################
# Backend library - 'pantheios.be.fail.a'

$(LIB_BE_FAIL_DEBUG): $(OBJ_BE_FAIL_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BE_FAIL_DEBUG)

$(OBJ_be_fail__DEBUG): $(PROJ_SRC_DIR)\backends\be.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\be.fail.c

$(LIB_BE_FAIL_RELEASE): $(OBJ_BE_FAIL_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BE_FAIL_RELEASE)

$(OBJ_be_fail__RELEASE): $(PROJ_SRC_DIR)\backends\be.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\be.fail.c


########################################
# Backend library - 'pantheios.bel.fail.a'

$(LIB_BEL_FAIL_DEBUG): $(OBJ_BEL_FAIL_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEL_FAIL_DEBUG)

$(OBJ_bel_fail__DEBUG): $(PROJ_SRC_DIR)\backends\bel.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bel.fail.c

$(LIB_BEL_FAIL_RELEASE): $(OBJ_BEL_FAIL_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEL_FAIL_RELEASE)

$(OBJ_bel_fail__RELEASE): $(PROJ_SRC_DIR)\backends\bel.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bel.fail.c


########################################
# Backend library - 'pantheios.ber.fail.a'

$(LIB_BER_FAIL_DEBUG): $(OBJ_BER_FAIL_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BER_FAIL_DEBUG)

$(OBJ_ber_fail__DEBUG): $(PROJ_SRC_DIR)\backends\ber.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\ber.fail.c

$(LIB_BER_FAIL_RELEASE): $(OBJ_BER_FAIL_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BER_FAIL_RELEASE)

$(OBJ_ber_fail__RELEASE): $(PROJ_SRC_DIR)\backends\ber.fail.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\ber.fail.c


########################################
# Backend library - 'pantheios.bec.file.a'

$(LIB_BEC_FILE_DEBUG): $(OBJ_BEC_FILE_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_FILE_DEBUG)

$(OBJ_bec_file__DEBUG): $(PROJ_SRC_DIR)\backends\bec.file.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.file.cpp

$(LIB_BEC_FILE_RELEASE): $(OBJ_BEC_FILE_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_FILE_RELEASE)

$(OBJ_bec_file__RELEASE): $(PROJ_SRC_DIR)\backends\bec.file.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.file.cpp


########################################
# Backend library - 'pantheios.bec.file.WithCallback.a'

$(LIB_BEC_FILE_WC_DEBUG): $(OBJ_BEC_FILE_WC_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_FILE_WC_DEBUG)

$(OBJ_bec_file_WC__DEBUG): $(PROJ_SRC_DIR)\backends\bec.file.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.file.cpp

$(LIB_BEC_FILE_WC_RELEASE): $(OBJ_BEC_FILE_WC_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_FILE_WC_RELEASE)

$(OBJ_bec_file_WC__RELEASE): $(PROJ_SRC_DIR)\backends\bec.file.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.file.cpp


########################################
# Backend library - 'pantheios.be.file.a'

$(LIB_BE_FILE_DEBUG): $(OBJ_BE_FILE_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BE_FILE_DEBUG)

$(OBJ_be_file__DEBUG): $(PROJ_SRC_DIR)\backends\be.file.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\be.file.c

$(LIB_BE_FILE_RELEASE): $(OBJ_BE_FILE_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BE_FILE_RELEASE)

$(OBJ_be_file__RELEASE): $(PROJ_SRC_DIR)\backends\be.file.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\be.file.c


########################################
# Backend library - 'pantheios.bel.file.a'

$(LIB_BEL_FILE_DEBUG): $(OBJ_BEL_FILE_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEL_FILE_DEBUG)

$(OBJ_bel_file__DEBUG): $(PROJ_SRC_DIR)\backends\bel.file.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bel.file.c

$(LIB_BEL_FILE_RELEASE): $(OBJ_BEL_FILE_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEL_FILE_RELEASE)

$(OBJ_bel_file__RELEASE): $(PROJ_SRC_DIR)\backends\bel.file.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bel.file.c


########################################
# Backend library - 'pantheios.ber.file.a'

$(LIB_BER_FILE_DEBUG): $(OBJ_BER_FILE_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BER_FILE_DEBUG)

$(OBJ_ber_file__DEBUG): $(PROJ_SRC_DIR)\backends\ber.file.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\ber.file.c

$(LIB_BER_FILE_RELEASE): $(OBJ_BER_FILE_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BER_FILE_RELEASE)

$(OBJ_ber_file__RELEASE): $(PROJ_SRC_DIR)\backends\ber.file.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\ber.file.c


########################################
# Backend library - 'pantheios.bec.fprintf.a'

$(LIB_BEC_FPRINTF_DEBUG): $(OBJ_BEC_FPRINTF_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_FPRINTF_DEBUG)

$(OBJ_bec_fprintf__DEBUG): $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp

$(LIB_BEC_FPRINTF_RELEASE): $(OBJ_BEC_FPRINTF_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_FPRINTF_RELEASE)

$(OBJ_bec_fprintf__RELEASE): $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp


########################################
# Backend library - 'pantheios.bec.fprintf.WithCallback.a'

$(LIB_BEC_FPRINTF_WC_DEBUG): $(OBJ_BEC_FPRINTF_WC_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_FPRINTF_WC_DEBUG)

$(OBJ_bec_fprintf_WC__DEBUG): $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp

$(LIB_BEC_FPRINTF_WC_RELEASE): $(OBJ_BEC_FPRINTF_WC_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_FPRINTF_WC_RELEASE)

$(OBJ_bec_fprintf_WC__RELEASE): $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.fprintf.cpp


########################################
# Backend library - 'pantheios.be.fprintf.a'

$(LIB_BE_FPRINTF_DEBUG): $(OBJ_BE_FPRINTF_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BE_FPRINTF_DEBUG)

$(OBJ_be_fprintf__DEBUG): $(PROJ_SRC_DIR)\backends\be.fprintf.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\be.fprintf.c

$(LIB_BE_FPRINTF_RELEASE): $(OBJ_BE_FPRINTF_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BE_FPRINTF_RELEASE)

$(OBJ_be_fprintf__RELEASE): $(PROJ_SRC_DIR)\backends\be.fprintf.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\be.fprintf.c


########################################
# Backend library - 'pantheios.bel.fprintf.a'

$(LIB_BEL_FPRINTF_DEBUG): $(OBJ_BEL_FPRINTF_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEL_FPRINTF_DEBUG)

$(OBJ_bel_fprintf__DEBUG): $(PROJ_SRC_DIR)\backends\bel.fprintf.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bel.fprintf.c

$(LIB_BEL_FPRINTF_RELEASE): $(OBJ_BEL_FPRINTF_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEL_FPRINTF_RELEASE)

$(OBJ_bel_fprintf__RELEASE): $(PROJ_SRC_DIR)\backends\bel.fprintf.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bel.fprintf.c


########################################
# Backend library - 'pantheios.ber.fprintf.a'

$(LIB_BER_FPRINTF_DEBUG): $(OBJ_BER_FPRINTF_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BER_FPRINTF_DEBUG)

$(OBJ_ber_fprintf__DEBUG): $(PROJ_SRC_DIR)\backends\ber.fprintf.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\ber.fprintf.c

$(LIB_BER_FPRINTF_RELEASE): $(OBJ_BER_FPRINTF_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BER_FPRINTF_RELEASE)

$(OBJ_ber_fprintf__RELEASE): $(PROJ_SRC_DIR)\backends\ber.fprintf.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\ber.fprintf.c


########################################
# Backend library - 'pantheios.bec.null.a'

$(LIB_BEC_NULL_DEBUG): $(OBJ_BEC_NULL_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_NULL_DEBUG)

$(OBJ_bec_null__DEBUG): $(PROJ_SRC_DIR)\backends\bec.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.null.c

$(LIB_BEC_NULL_RELEASE): $(OBJ_BEC_NULL_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_NULL_RELEASE)

$(OBJ_bec_null__RELEASE): $(PROJ_SRC_DIR)\backends\bec.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.null.c


########################################
# Backend library - 'pantheios.be.null.a'

$(LIB_BE_NULL_DEBUG): $(OBJ_BE_NULL_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BE_NULL_DEBUG)

$(OBJ_be_null__DEBUG): $(PROJ_SRC_DIR)\backends\be.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\be.null.c

$(LIB_BE_NULL_RELEASE): $(OBJ_BE_NULL_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BE_NULL_RELEASE)

$(OBJ_be_null__RELEASE): $(PROJ_SRC_DIR)\backends\be.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\be.null.c


########################################
# Backend library - 'pantheios.bel.null.a'

$(LIB_BEL_NULL_DEBUG): $(OBJ_BEL_NULL_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEL_NULL_DEBUG)

$(OBJ_bel_null__DEBUG): $(PROJ_SRC_DIR)\backends\bel.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bel.null.c

$(LIB_BEL_NULL_RELEASE): $(OBJ_BEL_NULL_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEL_NULL_RELEASE)

$(OBJ_bel_null__RELEASE): $(PROJ_SRC_DIR)\backends\bel.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bel.null.c


########################################
# Backend library - 'pantheios.ber.null.a'

$(LIB_BER_NULL_DEBUG): $(OBJ_BER_NULL_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BER_NULL_DEBUG)

$(OBJ_ber_null__DEBUG): $(PROJ_SRC_DIR)\backends\ber.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\ber.null.c

$(LIB_BER_NULL_RELEASE): $(OBJ_BER_NULL_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BER_NULL_RELEASE)

$(OBJ_ber_null__RELEASE): $(PROJ_SRC_DIR)\backends\ber.null.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\ber.null.c


########################################
# Backend library - 'pantheios.bec.ACE.a'


########################################
# Backend library - 'pantheios.be.ACE.a'


########################################
# Backend library - 'pantheios.bel.ACE.a'


########################################
# Backend library - 'pantheios.ber.ACE.a'


########################################
# Backend library - 'pantheios.bec.COMErrorObject.a'

$(LIB_BEC_COMERROBJ_DEBUG): $(OBJ_BEC_COMERROBJ_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_COMERROBJ_DEBUG)

$(OBJ_bec_COMERROBJ__DEBUG): $(PROJ_SRC_DIR)\backends\bec.COMErrorObject.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.COMErrorObject.cpp

$(LIB_BEC_COMERROBJ_RELEASE): $(OBJ_BEC_COMERROBJ_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_COMERROBJ_RELEASE)

$(OBJ_bec_COMERROBJ__RELEASE): $(PROJ_SRC_DIR)\backends\bec.COMErrorObject.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.COMErrorObject.cpp


########################################
# Backend library - 'pantheios.bec.COMErrorObject.WithCallback.a'

$(LIB_BEC_COMERROBJ_WC_DEBUG): $(OBJ_BEC_COMERROBJ_WC_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_COMERROBJ_WC_DEBUG)

$(OBJ_bec_COMERROBJ_WC__DEBUG): $(PROJ_SRC_DIR)\backends\bec.COMErrorObject.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.COMErrorObject.cpp

$(LIB_BEC_COMERROBJ_WC_RELEASE): $(OBJ_BEC_COMERROBJ_WC_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_COMERROBJ_WC_RELEASE)

$(OBJ_bec_COMERROBJ_WC__RELEASE): $(PROJ_SRC_DIR)\backends\bec.COMErrorObject.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.COMErrorObject.cpp


########################################
# Backend library - 'pantheios.be.COMErrorObject.a'

$(LIB_BE_COMERROBJ_DEBUG): $(OBJ_BE_COMERROBJ_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BE_COMERROBJ_DEBUG)

$(OBJ_be_COMERROBJ__DEBUG): $(PROJ_SRC_DIR)\backends\be.COMErrorObject.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\be.COMErrorObject.c

$(LIB_BE_COMERROBJ_RELEASE): $(OBJ_BE_COMERROBJ_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BE_COMERROBJ_RELEASE)

$(OBJ_be_COMERROBJ__RELEASE): $(PROJ_SRC_DIR)\backends\be.COMErrorObject.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\be.COMErrorObject.c


########################################
# Backend library - 'pantheios.bel.COMErrorObject.a'

$(LIB_BEL_COMERROBJ_DEBUG): $(OBJ_BEL_COMERROBJ_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEL_COMERROBJ_DEBUG)

$(OBJ_bel_COMERROBJ__DEBUG): $(PROJ_SRC_DIR)\backends\bel.COMErrorObject.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bel.COMErrorObject.c

$(LIB_BEL_COMERROBJ_RELEASE): $(OBJ_BEL_COMERROBJ_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEL_COMERROBJ_RELEASE)

$(OBJ_bel_COMERROBJ__RELEASE): $(PROJ_SRC_DIR)\backends\bel.COMErrorObject.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bel.COMErrorObject.c


########################################
# Backend library - 'pantheios.ber.COMErrorObject.a'

$(LIB_BER_COMERROBJ_DEBUG): $(OBJ_BER_COMERROBJ_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BER_COMERROBJ_DEBUG)

$(OBJ_ber_COMERROBJ__DEBUG): $(PROJ_SRC_DIR)\backends\ber.COMErrorObject.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\ber.COMErrorObject.c

$(LIB_BER_COMERROBJ_RELEASE): $(OBJ_BER_COMERROBJ_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BER_COMERROBJ_RELEASE)

$(OBJ_ber_COMERROBJ__RELEASE): $(PROJ_SRC_DIR)\backends\ber.COMErrorObject.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\ber.COMErrorObject.c


########################################
# Backend library - 'pantheios.bec.speech.a'

$(LIB_BEC_SPEECH_DEBUG): $(OBJ_BEC_SPEECH_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_SPEECH_DEBUG)

$(OBJ_bec_SPEECH__DEBUG): $(PROJ_SRC_DIR)\backends\bec.speech.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.speech.cpp

$(LIB_BEC_SPEECH_RELEASE): $(OBJ_BEC_SPEECH_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_SPEECH_RELEASE)

$(OBJ_bec_SPEECH__RELEASE): $(PROJ_SRC_DIR)\backends\bec.speech.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.speech.cpp


########################################
# Backend library - 'pantheios.bec.speech.WithCallback.a'

$(LIB_BEC_SPEECH_WC_DEBUG): $(OBJ_BEC_SPEECH_WC_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_SPEECH_WC_DEBUG)

$(OBJ_bec_SPEECH_WC__DEBUG): $(PROJ_SRC_DIR)\backends\bec.speech.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.speech.cpp

$(LIB_BEC_SPEECH_WC_RELEASE): $(OBJ_BEC_SPEECH_WC_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_SPEECH_WC_RELEASE)

$(OBJ_bec_SPEECH_WC__RELEASE): $(PROJ_SRC_DIR)\backends\bec.speech.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.speech.cpp


########################################
# Backend library - 'pantheios.be.speech.a'

$(LIB_BE_SPEECH_DEBUG): $(OBJ_BE_SPEECH_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BE_SPEECH_DEBUG)

$(OBJ_be_SPEECH__DEBUG): $(PROJ_SRC_DIR)\backends\be.speech.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\be.speech.c

$(LIB_BE_SPEECH_RELEASE): $(OBJ_BE_SPEECH_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BE_SPEECH_RELEASE)

$(OBJ_be_SPEECH__RELEASE): $(PROJ_SRC_DIR)\backends\be.speech.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\be.speech.c


########################################
# Backend library - 'pantheios.bel.speech.a'

$(LIB_BEL_SPEECH_DEBUG): $(OBJ_BEL_SPEECH_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEL_SPEECH_DEBUG)

$(OBJ_bel_SPEECH__DEBUG): $(PROJ_SRC_DIR)\backends\bel.speech.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bel.speech.c

$(LIB_BEL_SPEECH_RELEASE): $(OBJ_BEL_SPEECH_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEL_SPEECH_RELEASE)

$(OBJ_bel_SPEECH__RELEASE): $(PROJ_SRC_DIR)\backends\bel.speech.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bel.speech.c


########################################
# Backend library - 'pantheios.ber.speech.a'

$(LIB_BER_SPEECH_DEBUG): $(OBJ_BER_SPEECH_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BER_SPEECH_DEBUG)

$(OBJ_ber_SPEECH__DEBUG): $(PROJ_SRC_DIR)\backends\ber.speech.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\ber.speech.c

$(LIB_BER_SPEECH_RELEASE): $(OBJ_BER_SPEECH_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BER_SPEECH_RELEASE)

$(OBJ_ber_SPEECH__RELEASE): $(PROJ_SRC_DIR)\backends\ber.speech.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\ber.speech.c


########################################
# Backend library - 'pantheios.bec.WindowsEventLog.a'

$(LIB_BEC_WINEVLOG_DEBUG): $(OBJ_BEC_WINEVLOG_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_WINEVLOG_DEBUG)

$(OBJ_bec_WINEVLOG__DEBUG): $(PROJ_SRC_DIR)\backends\bec.WindowsEventLog.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.WindowsEventLog.cpp

$(LIB_BEC_WINEVLOG_RELEASE): $(OBJ_BEC_WINEVLOG_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_WINEVLOG_RELEASE)

$(OBJ_bec_WINEVLOG__RELEASE): $(PROJ_SRC_DIR)\backends\bec.WindowsEventLog.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.WindowsEventLog.cpp


########################################
# Backend library - 'pantheios.be.WindowsEventLog.a'

$(LIB_BE_WINEVLOG_DEBUG): $(OBJ_BE_WINEVLOG_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BE_WINEVLOG_DEBUG)

$(OBJ_be_WINEVLOG__DEBUG): $(PROJ_SRC_DIR)\backends\be.WindowsEventLog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\be.WindowsEventLog.c

$(LIB_BE_WINEVLOG_RELEASE): $(OBJ_BE_WINEVLOG_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BE_WINEVLOG_RELEASE)

$(OBJ_be_WINEVLOG__RELEASE): $(PROJ_SRC_DIR)\backends\be.WindowsEventLog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\be.WindowsEventLog.c


########################################
# Backend library - 'pantheios.bel.WindowsEventLog.a'

$(LIB_BEL_WINEVLOG_DEBUG): $(OBJ_BEL_WINEVLOG_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEL_WINEVLOG_DEBUG)

$(OBJ_bel_WINEVLOG__DEBUG): $(PROJ_SRC_DIR)\backends\bel.WindowsEventLog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bel.WindowsEventLog.c

$(LIB_BEL_WINEVLOG_RELEASE): $(OBJ_BEL_WINEVLOG_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEL_WINEVLOG_RELEASE)

$(OBJ_bel_WINEVLOG__RELEASE): $(PROJ_SRC_DIR)\backends\bel.WindowsEventLog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bel.WindowsEventLog.c


########################################
# Backend library - 'pantheios.ber.WindowsEventLog.a'

$(LIB_BER_WINEVLOG_DEBUG): $(OBJ_BER_WINEVLOG_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BER_WINEVLOG_DEBUG)

$(OBJ_ber_WINEVLOG__DEBUG): $(PROJ_SRC_DIR)\backends\ber.WindowsEventLog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\ber.WindowsEventLog.c

$(LIB_BER_WINEVLOG_RELEASE): $(OBJ_BER_WINEVLOG_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BER_WINEVLOG_RELEASE)

$(OBJ_ber_WINEVLOG__RELEASE): $(PROJ_SRC_DIR)\backends\ber.WindowsEventLog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\ber.WindowsEventLog.c


########################################
# Backend library - 'pantheios.bec.WindowsMessageBox.a'

$(LIB_BEC_WINMSGBX_DEBUG): $(OBJ_BEC_WINMSGBX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_WINMSGBX_DEBUG)

$(OBJ_bec_WINMSGBX__DEBUG): $(PROJ_SRC_DIR)\backends\bec.WindowsMessageBox.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.WindowsMessageBox.cpp

$(LIB_BEC_WINMSGBX_RELEASE): $(OBJ_BEC_WINMSGBX_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_WINMSGBX_RELEASE)

$(OBJ_bec_WINMSGBX__RELEASE): $(PROJ_SRC_DIR)\backends\bec.WindowsMessageBox.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.WindowsMessageBox.cpp


########################################
# Backend library - 'pantheios.be.WindowsMessageBox.a'

$(LIB_BE_WINMSGBX_DEBUG): $(OBJ_BE_WINMSGBX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BE_WINMSGBX_DEBUG)

$(OBJ_be_WINMSGBX__DEBUG): $(PROJ_SRC_DIR)\backends\be.WindowsMessageBox.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\be.WindowsMessageBox.c

$(LIB_BE_WINMSGBX_RELEASE): $(OBJ_BE_WINMSGBX_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BE_WINMSGBX_RELEASE)

$(OBJ_be_WINMSGBX__RELEASE): $(PROJ_SRC_DIR)\backends\be.WindowsMessageBox.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\be.WindowsMessageBox.c


########################################
# Backend library - 'pantheios.bel.WindowsMessageBox.a'

$(LIB_BEL_WINMSGBX_DEBUG): $(OBJ_BEL_WINMSGBX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEL_WINMSGBX_DEBUG)

$(OBJ_bel_WINMSGBX__DEBUG): $(PROJ_SRC_DIR)\backends\bel.WindowsMessageBox.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bel.WindowsMessageBox.c

$(LIB_BEL_WINMSGBX_RELEASE): $(OBJ_BEL_WINMSGBX_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEL_WINMSGBX_RELEASE)

$(OBJ_bel_WINMSGBX__RELEASE): $(PROJ_SRC_DIR)\backends\bel.WindowsMessageBox.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bel.WindowsMessageBox.c


########################################
# Backend library - 'pantheios.ber.WindowsMessageBox.a'

$(LIB_BER_WINMSGBX_DEBUG): $(OBJ_BER_WINMSGBX_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BER_WINMSGBX_DEBUG)

$(OBJ_ber_WINMSGBX__DEBUG): $(PROJ_SRC_DIR)\backends\ber.WindowsMessageBox.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\ber.WindowsMessageBox.c

$(LIB_BER_WINMSGBX_RELEASE): $(OBJ_BER_WINMSGBX_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BER_WINMSGBX_RELEASE)

$(OBJ_ber_WINMSGBX__RELEASE): $(PROJ_SRC_DIR)\backends\ber.WindowsMessageBox.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\ber.WindowsMessageBox.c


########################################
# Backend library - 'pantheios.bec.WindowsConsole.a'

$(LIB_BEC_W32CONS_DEBUG): $(OBJ_BEC_W32CONS_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_W32CONS_DEBUG)

$(OBJ_bec_W32CONS__DEBUG): $(PROJ_SRC_DIR)\backends\bec.WindowsConsole.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.WindowsConsole.cpp

$(LIB_BEC_W32CONS_RELEASE): $(OBJ_BEC_W32CONS_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_W32CONS_RELEASE)

$(OBJ_bec_W32CONS__RELEASE): $(PROJ_SRC_DIR)\backends\bec.WindowsConsole.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.WindowsConsole.cpp


########################################
# Backend library - 'pantheios.bec.WindowsConsole.WithCallback.a'

$(LIB_BEC_W32CONS_WC_DEBUG): $(OBJ_BEC_W32CONS_WC_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_W32CONS_WC_DEBUG)

$(OBJ_bec_W32CONS_WC__DEBUG): $(PROJ_SRC_DIR)\backends\bec.WindowsConsole.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.WindowsConsole.cpp

$(LIB_BEC_W32CONS_WC_RELEASE): $(OBJ_BEC_W32CONS_WC_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_W32CONS_WC_RELEASE)

$(OBJ_bec_W32CONS_WC__RELEASE): $(PROJ_SRC_DIR)\backends\bec.WindowsConsole.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.WindowsConsole.cpp


########################################
# Backend library - 'pantheios.be.WindowsConsole.a'

$(LIB_BE_W32CONS_DEBUG): $(OBJ_BE_W32CONS_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BE_W32CONS_DEBUG)

$(OBJ_be_W32CONS__DEBUG): $(PROJ_SRC_DIR)\backends\be.WindowsConsole.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\be.WindowsConsole.c

$(LIB_BE_W32CONS_RELEASE): $(OBJ_BE_W32CONS_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BE_W32CONS_RELEASE)

$(OBJ_be_W32CONS__RELEASE): $(PROJ_SRC_DIR)\backends\be.WindowsConsole.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\be.WindowsConsole.c


########################################
# Backend library - 'pantheios.bel.WindowsConsole.a'

$(LIB_BEL_W32CONS_DEBUG): $(OBJ_BEL_W32CONS_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEL_W32CONS_DEBUG)

$(OBJ_bel_W32CONS__DEBUG): $(PROJ_SRC_DIR)\backends\bel.WindowsConsole.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bel.WindowsConsole.c

$(LIB_BEL_W32CONS_RELEASE): $(OBJ_BEL_W32CONS_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEL_W32CONS_RELEASE)

$(OBJ_bel_W32CONS__RELEASE): $(PROJ_SRC_DIR)\backends\bel.WindowsConsole.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bel.WindowsConsole.c


########################################
# Backend library - 'pantheios.ber.WindowsConsole.a'

$(LIB_BER_W32CONS_DEBUG): $(OBJ_BER_W32CONS_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BER_W32CONS_DEBUG)

$(OBJ_ber_W32CONS__DEBUG): $(PROJ_SRC_DIR)\backends\ber.WindowsConsole.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\ber.WindowsConsole.c

$(LIB_BER_W32CONS_RELEASE): $(OBJ_BER_W32CONS_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BER_W32CONS_RELEASE)

$(OBJ_ber_W32CONS__RELEASE): $(PROJ_SRC_DIR)\backends\ber.WindowsConsole.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\ber.WindowsConsole.c


########################################
# Backend library - 'pantheios.bec.WindowsDebugger.a'

$(LIB_BEC_W32DBGR_DEBUG): $(OBJ_BEC_W32DBGR_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_W32DBGR_DEBUG)

$(OBJ_bec_W32DBGR__DEBUG): $(PROJ_SRC_DIR)\backends\bec.WindowsDebugger.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.WindowsDebugger.cpp

$(LIB_BEC_W32DBGR_RELEASE): $(OBJ_BEC_W32DBGR_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_W32DBGR_RELEASE)

$(OBJ_bec_W32DBGR__RELEASE): $(PROJ_SRC_DIR)\backends\bec.WindowsDebugger.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.WindowsDebugger.cpp


########################################
# Backend library - 'pantheios.bec.WindowsDebugger.WithCallback.a'

$(LIB_BEC_W32DBGR_WC_DEBUG): $(OBJ_BEC_W32DBGR_WC_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_W32DBGR_WC_DEBUG)

$(OBJ_bec_W32DBGR_WC__DEBUG): $(PROJ_SRC_DIR)\backends\bec.WindowsDebugger.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.WindowsDebugger.cpp

$(LIB_BEC_W32DBGR_WC_RELEASE): $(OBJ_BEC_W32DBGR_WC_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_W32DBGR_WC_RELEASE)

$(OBJ_bec_W32DBGR_WC__RELEASE): $(PROJ_SRC_DIR)\backends\bec.WindowsDebugger.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.WindowsDebugger.cpp


########################################
# Backend library - 'pantheios.be.WindowsDebugger.a'

$(LIB_BE_W32DBGR_DEBUG): $(OBJ_BE_W32DBGR_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BE_W32DBGR_DEBUG)

$(OBJ_be_W32DBGR__DEBUG): $(PROJ_SRC_DIR)\backends\be.WindowsDebugger.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\be.WindowsDebugger.c

$(LIB_BE_W32DBGR_RELEASE): $(OBJ_BE_W32DBGR_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BE_W32DBGR_RELEASE)

$(OBJ_be_W32DBGR__RELEASE): $(PROJ_SRC_DIR)\backends\be.WindowsDebugger.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\be.WindowsDebugger.c


########################################
# Backend library - 'pantheios.bel.WindowsDebugger.a'

$(LIB_BEL_W32DBGR_DEBUG): $(OBJ_BEL_W32DBGR_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEL_W32DBGR_DEBUG)

$(OBJ_bel_W32DBGR__DEBUG): $(PROJ_SRC_DIR)\backends\bel.WindowsDebugger.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bel.WindowsDebugger.c

$(LIB_BEL_W32DBGR_RELEASE): $(OBJ_BEL_W32DBGR_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEL_W32DBGR_RELEASE)

$(OBJ_bel_W32DBGR__RELEASE): $(PROJ_SRC_DIR)\backends\bel.WindowsDebugger.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bel.WindowsDebugger.c


########################################
# Backend library - 'pantheios.ber.WindowsDebugger.a'

$(LIB_BER_W32DBGR_DEBUG): $(OBJ_BER_W32DBGR_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BER_W32DBGR_DEBUG)

$(OBJ_ber_W32DBGR__DEBUG): $(PROJ_SRC_DIR)\backends\ber.WindowsDebugger.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\ber.WindowsDebugger.c

$(LIB_BER_W32DBGR_RELEASE): $(OBJ_BER_W32DBGR_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BER_W32DBGR_RELEASE)

$(OBJ_ber_W32DBGR__RELEASE): $(PROJ_SRC_DIR)\backends\ber.WindowsDebugger.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\ber.WindowsDebugger.c


########################################
# Backend library - 'pantheios.bec.WindowsSyslog.a'

$(LIB_BEC_W32SYSLOG_DEBUG): $(OBJ_BEC_W32SYSLOG_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_W32SYSLOG_DEBUG)

$(OBJ_bec_W32SYSLOG__DEBUG): $(PROJ_SRC_DIR)\backends\bec.WindowsSyslog.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.WindowsSyslog.cpp

$(LIB_BEC_W32SYSLOG_RELEASE): $(OBJ_BEC_W32SYSLOG_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_W32SYSLOG_RELEASE)

$(OBJ_bec_W32SYSLOG__RELEASE): $(PROJ_SRC_DIR)\backends\bec.WindowsSyslog.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.WindowsSyslog.cpp


########################################
# Backend library - 'pantheios.bec.WindowsSyslog.WithCallback.a'

$(LIB_BEC_W32SYSLOG_WC_DEBUG): $(OBJ_BEC_W32SYSLOG_WC_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_W32SYSLOG_WC_DEBUG)

$(OBJ_bec_W32SYSLOG_WC__DEBUG): $(PROJ_SRC_DIR)\backends\bec.WindowsSyslog.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.WindowsSyslog.cpp

$(LIB_BEC_W32SYSLOG_WC_RELEASE): $(OBJ_BEC_W32SYSLOG_WC_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEC_W32SYSLOG_WC_RELEASE)

$(OBJ_bec_W32SYSLOG_WC__RELEASE): $(PROJ_SRC_DIR)\backends\bec.WindowsSyslog.cpp $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) -DPANTHEIOS_BE_USE_CALLBACK $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bec.WindowsSyslog.cpp


########################################
# Backend library - 'pantheios.be.WindowsSyslog.a'

$(LIB_BE_W32SYSLOG_DEBUG): $(OBJ_BE_W32SYSLOG_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BE_W32SYSLOG_DEBUG)

$(OBJ_be_W32SYSLOG__DEBUG): $(PROJ_SRC_DIR)\backends\be.WindowsSyslog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\be.WindowsSyslog.c

$(LIB_BE_W32SYSLOG_RELEASE): $(OBJ_BE_W32SYSLOG_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BE_W32SYSLOG_RELEASE)

$(OBJ_be_W32SYSLOG__RELEASE): $(PROJ_SRC_DIR)\backends\be.WindowsSyslog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\be.WindowsSyslog.c


########################################
# Backend library - 'pantheios.bel.WindowsSyslog.a'

$(LIB_BEL_W32SYSLOG_DEBUG): $(OBJ_BEL_W32SYSLOG_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEL_W32SYSLOG_DEBUG)

$(OBJ_bel_W32SYSLOG__DEBUG): $(PROJ_SRC_DIR)\backends\bel.WindowsSyslog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bel.WindowsSyslog.c

$(LIB_BEL_W32SYSLOG_RELEASE): $(OBJ_BEL_W32SYSLOG_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BEL_W32SYSLOG_RELEASE)

$(OBJ_bel_W32SYSLOG__RELEASE): $(PROJ_SRC_DIR)\backends\bel.WindowsSyslog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\bel.WindowsSyslog.c


########################################
# Backend library - 'pantheios.ber.WindowsSyslog.a'

$(LIB_BER_W32SYSLOG_DEBUG): $(OBJ_BER_W32SYSLOG_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BER_W32SYSLOG_DEBUG)

$(OBJ_ber_W32SYSLOG__DEBUG): $(PROJ_SRC_DIR)\backends\ber.WindowsSyslog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\ber.WindowsSyslog.c

$(LIB_BER_W32SYSLOG_RELEASE): $(OBJ_BER_W32SYSLOG_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_BER_W32SYSLOG_RELEASE)

$(OBJ_ber_W32SYSLOG__RELEASE): $(PROJ_SRC_DIR)\backends\ber.WindowsSyslog.c $(BE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\backends\ber.WindowsSyslog.c

########################################
# Front-end library - 'pantheios.fe.all.a'

$(LIB_FE_ALL_DEBUG): $(OBJ_FE_ALL_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_FE_ALL_DEBUG)

$(OBJ_fe_all__DEBUG): $(PROJ_SRC_DIR)\frontends\fe.all.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\frontends\fe.all.c

$(LIB_FE_ALL_RELEASE): $(OBJ_FE_ALL_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_FE_ALL_RELEASE)

$(OBJ_fe_all__RELEASE): $(PROJ_SRC_DIR)\frontends\fe.all.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\frontends\fe.all.c

########################################
# Front-end library - 'pantheios.fe.fail.a'

$(LIB_FE_FAIL_DEBUG): $(OBJ_FE_FAIL_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_FE_FAIL_DEBUG)

$(OBJ_fe_fail__DEBUG): $(PROJ_SRC_DIR)\frontends\fe.fail.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\frontends\fe.fail.c

$(LIB_FE_FAIL_RELEASE): $(OBJ_FE_FAIL_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_FE_FAIL_RELEASE)

$(OBJ_fe_fail__RELEASE): $(PROJ_SRC_DIR)\frontends\fe.fail.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\frontends\fe.fail.c

########################################
# Front-end library - 'pantheios.fe.N.a'

$(LIB_FE_N_DEBUG): $(OBJ_FE_N_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_FE_N_DEBUG)

$(OBJ_fe_N__DEBUG): $(PROJ_SRC_DIR)\frontends\fe.N.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\frontends\fe.N.c

$(LIB_FE_N_RELEASE): $(OBJ_FE_N_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_FE_N_RELEASE)

$(OBJ_fe_N__RELEASE): $(PROJ_SRC_DIR)\frontends\fe.N.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\frontends\fe.N.c

########################################
# Front-end library - 'pantheios.fe.null.a'

$(LIB_FE_NULL_DEBUG): $(OBJ_FE_NULL_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_FE_NULL_DEBUG)

$(OBJ_fe_null__DEBUG): $(PROJ_SRC_DIR)\frontends\fe.null.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\frontends\fe.null.c

$(LIB_FE_NULL_RELEASE): $(OBJ_FE_NULL_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_FE_NULL_RELEASE)

$(OBJ_fe_null__RELEASE): $(PROJ_SRC_DIR)\frontends\fe.null.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\frontends\fe.null.c

########################################
# Front-end library - 'pantheios.fe.simple.a'

$(LIB_FE_SIMPLE_DEBUG): $(OBJ_FE_SIMPLE_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_FE_SIMPLE_DEBUG)

$(OBJ_fe_simple__DEBUG): $(PROJ_SRC_DIR)\frontends\fe.simple.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\frontends\fe.simple.c

$(LIB_FE_SIMPLE_RELEASE): $(OBJ_FE_SIMPLE_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_FE_SIMPLE_RELEASE)

$(OBJ_fe_simple__RELEASE): $(PROJ_SRC_DIR)\frontends\fe.simple.c $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_LIB_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\frontends\fe.simple.c

########################################
# Front-end library - 'pantheios.fe.WindowsRegistry.a'

$(LIB_FE_WINREG_DEBUG): $(OBJ_FE_WINREG_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_FE_WINREG_DEBUG)

$(OBJ_fe_winreg__DEBUG): $(PROJ_SRC_DIR)\frontends\fe.WindowsRegistry.cpp $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\frontends\fe.WindowsRegistry.cpp

$(LIB_FE_WINREG_RELEASE): $(OBJ_FE_WINREG_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_FE_WINREG_RELEASE)

$(OBJ_fe_winreg__RELEASE): $(PROJ_SRC_DIR)\frontends\fe.WindowsRegistry.cpp $(FE_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_LIB_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_SRC_DIR)\frontends\fe.WindowsRegistry.cpp


########################################
# b64 library - 'b64.X.pan.core.a'

$(LIB_B64_DEBUG): $(OBJ_B64_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_B64_DEBUG)

$(OBJ_b64_b64_DEBUG): $(B64_SRC_DIR)\b64.c $(B64_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_B64_ARGS_DEBUG) $(CC_B64_INCLUDES_DEBUG) --output-path=$@ $(B64_SRC_DIR)\b64.c

$(LIB_B64_RELEASE): $(OBJ_B64_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_B64_RELEASE)

$(OBJ_b64_b64_RELEASE): $(B64_SRC_DIR)\b64.c $(B64_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_B64_ARGS_RELEASE) $(CC_B64_INCLUDES_RELEASE) --output-path=$@ $(B64_SRC_DIR)\b64.c

########################################
# shwild library - 'shwild.X.pan.core.a'

$(LIB_SHWILD_DEBUG): $(OBJ_SHWILD_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_SHWILD_DEBUG)

$(OBJ_shw_api_DEBUG): $(SHWILD_SRC_DIR)\api.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_DEBUG) $(CPPC_SHWILD_INCLUDES_DEBUG) --output-path=$@ $(SHWILD_SRC_DIR)\api.cpp
$(OBJ_shw_matches_DEBUG): $(SHWILD_SRC_DIR)\matches.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_DEBUG) $(CPPC_SHWILD_INCLUDES_DEBUG) --output-path=$@ $(SHWILD_SRC_DIR)\matches.cpp
$(OBJ_shw_pattern_DEBUG): $(SHWILD_SRC_DIR)\pattern.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_DEBUG) $(CPPC_SHWILD_INCLUDES_DEBUG) --output-path=$@ $(SHWILD_SRC_DIR)\pattern.cpp

$(LIB_SHWILD_RELEASE): $(OBJ_SHWILD_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_SHWILD_RELEASE)

$(OBJ_shw_api_RELEASE): $(SHWILD_SRC_DIR)\api.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_RELEASE) $(CPPC_SHWILD_INCLUDES_RELEASE) --output-path=$@ $(SHWILD_SRC_DIR)\api.cpp
$(OBJ_shw_matches_RELEASE): $(SHWILD_SRC_DIR)\matches.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_RELEASE) $(CPPC_SHWILD_INCLUDES_RELEASE) --output-path=$@ $(SHWILD_SRC_DIR)\matches.cpp
$(OBJ_shw_pattern_RELEASE): $(SHWILD_SRC_DIR)\pattern.cpp $(SHWILD_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_SHWILD_ARGS_RELEASE) $(CPPC_SHWILD_INCLUDES_RELEASE) --output-path=$@ $(SHWILD_SRC_DIR)\pattern.cpp

########################################
# xTests library - 'xtests.X.pan.core.a'

$(LIB_XTESTS_DEBUG): $(OBJ_XTESTS_DEBUG) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_XTESTS_DEBUG)

$(OBJ_xts_core_DEBUG): $(XTESTS_SRC_DIR)\xtests.core.cpp $(XTESTS_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_XTESTS_ARGS_DEBUG) $(CPPC_XTESTS_INCLUDES_DEBUG) --output-path=$@ $(XTESTS_SRC_DIR)\xtests.core.cpp

$(LIB_XTESTS_RELEASE): $(OBJ_XTESTS_RELEASE) $(PROJ_MAKEFILE_NAME)
	@-if not exist $(PROJ_LIB_DIR)\NUL mkdir $(PROJ_LIB_DIR)
	$(AR) $(AR_ARGS) $@ $(OBJ_XTESTS_RELEASE)

$(OBJ_xts_core_RELEASE): $(XTESTS_SRC_DIR)\xtests.core.cpp $(XTESTS_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_XTESTS_ARGS_RELEASE) $(CPPC_XTESTS_INCLUDES_RELEASE) --output-path=$@ $(XTESTS_SRC_DIR)\xtests.core.cpp

##################################################
# Examples

#  object files

$(OBJ_EX_CPP_0_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.101\example.cpp.101.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.101\example.cpp.101.cpp
$(OBJ_EX_CPP_1_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.strings\example.cpp.strings.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.strings\example.cpp.strings.cpp
$(OBJ_EX_CPP_2_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.integer\example.cpp.integer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.integer\example.cpp.integer.cpp
$(OBJ_EX_CPP_3_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pointer\example.cpp.pointer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pointer\example.cpp.pointer.cpp
$(OBJ_EX_CPP_4_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.real\example.cpp.real.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.real\example.cpp.real.cpp
$(OBJ_EX_CPP_5_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.blob\example.cpp.blob.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.blob\example.cpp.blob.cpp
$(OBJ_EX_CPP_6_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hetero1\example.cpp.hetero1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hetero1\example.cpp.hetero1.cpp
$(OBJ_EX_CPP_7_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.character\example.cpp.character.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.character\example.cpp.character.cpp
$(OBJ_EX_CPP_8_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.implicit_link_1\example.cpp.implicit_link_1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.implicit_link_1\example.cpp.implicit_link_1.cpp
$(OBJ_EX_CPP_9_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_severity_levels\example.cpp.custom_severity_levels.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_severity_levels\example.cpp.custom_severity_levels.cpp
$(OBJ_EX_CPP_10_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.callback_be\example.cpp.callback_be.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.callback_be\example.cpp.callback_be.cpp
$(OBJ_EX_CPP_11_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_fe\example.cpp.custom_fe.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_fe\example.cpp.custom_fe.cpp
$(OBJ_EX_CPP_12_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_type_1\example.cpp.custom_type_1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_type_1\example.cpp.custom_type_1.cpp
$(OBJ_EX_CPP_13_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.process_id\example.cpp.process_id.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.process_id\example.cpp.process_id.cpp
$(OBJ_EX_CPP_14_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.thread_id\example.cpp.thread_id.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.thread_id\example.cpp.thread_id.cpp
$(OBJ_EX_CPP_15_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.args\example.cpp.args.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.args\example.cpp.args.cpp
$(OBJ_EX_CPP_16_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.file\example.cpp.file.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.file\example.cpp.file.cpp
$(OBJ_EX_CPP_18_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.highres\example.cpp.highres.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.highres\example.cpp.highres.cpp
$(OBJ_EX_CPP_19_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.lowres\example.cpp.lowres.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.lowres\example.cpp.lowres.cpp
$(OBJ_EX_CPP_20_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.b64\example.cpp.b64.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.b64\example.cpp.b64.cpp
$(OBJ_EX_CPP_21_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.api.no_namespace\example.cpp.api.no_namespace.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.api.no_namespace\example.cpp.api.no_namespace.cpp
$(OBJ_EX_CPP_23_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.1\example.cpp.mx.1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.1\example.cpp.mx.1.cpp
$(OBJ_EX_CPP_24_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.2\example.cpp.mx.2.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.2\example.cpp.mx.2.cpp
$(OBJ_EX_CPP_25_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hex_ptr\example.cpp.hex_ptr.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hex_ptr\example.cpp.hex_ptr.cpp
$(OBJ_EX_CPP_26_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.assert\example.cpp.assert.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.assert\example.cpp.assert.cpp
$(OBJ_EX_CPP_27_DEBUG):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pad\example.cpp.pad.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pad\example.cpp.pad.cpp
$(OBJ_EX_C_0_DEBUG):	$(PROJ_EXAMPLES_DIR)\c\example.c.101\example.c.101.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\c\example.c.101\example.c.101.c
$(OBJ_EX_C_1_DEBUG):	$(PROJ_EXAMPLES_DIR)\c\example.c.log_n\example.c.log_n.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\c\example.c.log_n\example.c.log_n.c
$(OBJ_EX_C_2_DEBUG):	$(PROJ_EXAMPLES_DIR)\c\example.c.core.pantheios_logprintf\example.c.core.pantheios_logprintf.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\c\example.c.core.pantheios_logprintf\example.c.core.pantheios_logprintf.c
$(OBJ_EX_C_3_DEBUG):	$(PROJ_EXAMPLES_DIR)\c\example.c.N\example.c.N.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\c\example.c.N\example.c.N.c
$(OBJ_EX_C_4_DEBUG):	$(PROJ_EXAMPLES_DIR)\c\example.c.gethostname\example.c.gethostname.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\c\example.c.gethostname\example.c.gethostname.c
$(OBJ_EX_C_5_DEBUG):	$(PROJ_EXAMPLES_DIR)\c\example.c.getcurrenttime\example.c.getcurrenttime.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\c\example.c.getcurrenttime\example.c.getcurrenttime.c
$(OBJ_EX_C_6_DEBUG):	$(PROJ_EXAMPLES_DIR)\c\example.c.assert\example.c.assert.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\c\example.c.assert\example.c.assert.c
$(OBJ_EX_C_7_DEBUG):	$(PROJ_EXAMPLES_DIR)\c\example.c.extended_severity\example.c.extended_severity.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\c\example.c.extended_severity\example.c.extended_severity.c

$(OBJ_EX_CPP_0_RELEASE):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.101\example.cpp.101.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.101\example.cpp.101.cpp
$(OBJ_EX_CPP_1_RELEASE):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.strings\example.cpp.strings.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.strings\example.cpp.strings.cpp
$(OBJ_EX_CPP_2_RELEASE):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.integer\example.cpp.integer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.integer\example.cpp.integer.cpp
$(OBJ_EX_CPP_3_RELEASE):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pointer\example.cpp.pointer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pointer\example.cpp.pointer.cpp
$(OBJ_EX_CPP_4_RELEASE):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.real\example.cpp.real.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.real\example.cpp.real.cpp
$(OBJ_EX_CPP_5_RELEASE):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.blob\example.cpp.blob.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.blob\example.cpp.blob.cpp
$(OBJ_EX_CPP_6_RELEASE):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hetero1\example.cpp.hetero1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hetero1\example.cpp.hetero1.cpp
$(OBJ_EX_CPP_7_RELEASE):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.character\example.cpp.character.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.character\example.cpp.character.cpp
$(OBJ_EX_CPP_8_RELEASE):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.implicit_link_1\example.cpp.implicit_link_1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.implicit_link_1\example.cpp.implicit_link_1.cpp
$(OBJ_EX_CPP_9_RELEASE):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_severity_levels\example.cpp.custom_severity_levels.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_severity_levels\example.cpp.custom_severity_levels.cpp
$(OBJ_EX_CPP_10_RELEASE):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.callback_be\example.cpp.callback_be.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.callback_be\example.cpp.callback_be.cpp
$(OBJ_EX_CPP_11_RELEASE):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_fe\example.cpp.custom_fe.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_fe\example.cpp.custom_fe.cpp
$(OBJ_EX_CPP_12_RELEASE):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_type_1\example.cpp.custom_type_1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.custom_type_1\example.cpp.custom_type_1.cpp
$(OBJ_EX_CPP_13_RELEASE):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.process_id\example.cpp.process_id.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.process_id\example.cpp.process_id.cpp
$(OBJ_EX_CPP_14_RELEASE):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.thread_id\example.cpp.thread_id.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.thread_id\example.cpp.thread_id.cpp
$(OBJ_EX_CPP_15_RELEASE):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.args\example.cpp.args.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.args\example.cpp.args.cpp
$(OBJ_EX_CPP_16_RELEASE):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.file\example.cpp.file.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.file\example.cpp.file.cpp
$(OBJ_EX_CPP_18_RELEASE):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.highres\example.cpp.highres.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.highres\example.cpp.highres.cpp
$(OBJ_EX_CPP_19_RELEASE):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.lowres\example.cpp.lowres.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.lowres\example.cpp.lowres.cpp
$(OBJ_EX_CPP_20_RELEASE):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.b64\example.cpp.b64.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.b64\example.cpp.b64.cpp
$(OBJ_EX_CPP_21_RELEASE):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.api.no_namespace\example.cpp.api.no_namespace.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.api.no_namespace\example.cpp.api.no_namespace.cpp
$(OBJ_EX_CPP_23_RELEASE):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.1\example.cpp.mx.1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.1\example.cpp.mx.1.cpp
$(OBJ_EX_CPP_24_RELEASE):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.2\example.cpp.mx.2.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.mx.2\example.cpp.mx.2.cpp
$(OBJ_EX_CPP_25_RELEASE):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hex_ptr\example.cpp.hex_ptr.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.hex_ptr\example.cpp.hex_ptr.cpp
$(OBJ_EX_CPP_26_RELEASE):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.assert\example.cpp.assert.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.assert\example.cpp.assert.cpp
$(OBJ_EX_CPP_27_RELEASE):	$(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pad\example.cpp.pad.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_EXAMPLE_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\cpp\example.cpp.pad\example.cpp.pad.cpp
$(OBJ_EX_C_0_RELEASE):	$(PROJ_EXAMPLES_DIR)\c\example.c.101\example.c.101.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\c\example.c.101\example.c.101.c
$(OBJ_EX_C_1_RELEASE):	$(PROJ_EXAMPLES_DIR)\c\example.c.log_n\example.c.log_n.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\c\example.c.log_n\example.c.log_n.c
$(OBJ_EX_C_2_RELEASE):	$(PROJ_EXAMPLES_DIR)\c\example.c.core.pantheios_logprintf\example.c.core.pantheios_logprintf.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\c\example.c.core.pantheios_logprintf\example.c.core.pantheios_logprintf.c
$(OBJ_EX_C_3_RELEASE):	$(PROJ_EXAMPLES_DIR)\c\example.c.N\example.c.N.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\c\example.c.N\example.c.N.c
$(OBJ_EX_C_4_RELEASE):	$(PROJ_EXAMPLES_DIR)\c\example.c.gethostname\example.c.gethostname.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\c\example.c.gethostname\example.c.gethostname.c
$(OBJ_EX_C_5_RELEASE):	$(PROJ_EXAMPLES_DIR)\c\example.c.getcurrenttime\example.c.getcurrenttime.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\c\example.c.getcurrenttime\example.c.getcurrenttime.c
$(OBJ_EX_C_6_RELEASE):	$(PROJ_EXAMPLES_DIR)\c\example.c.assert\example.c.assert.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\c\example.c.assert\example.c.assert.c
$(OBJ_EX_C_7_RELEASE):	$(PROJ_EXAMPLES_DIR)\c\example.c.extended_severity\example.c.extended_severity.c $(TEST_C_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_EXAMPLE_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_EXAMPLES_DIR)\c\example.c.extended_severity\example.c.extended_severity.c


# executables

$(EX_CPP_0_DEBUG): \
			$(OBJ_EX_CPP_0_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_ALL_DEBUG)\
			$(LIB_BE_FPRINTF_DEBUG)\
			$(LIB_BEC_FPRINTF_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_CPP_0_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_ALL_DEBUG)\
		$(LIB_BE_FPRINTF_DEBUG)\
		$(LIB_BEC_FPRINTF_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)

$(EX_CPP_1_DEBUG): \
			$(OBJ_EX_CPP_1_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_FPRINTF_DEBUG)\
			$(LIB_BEC_FPRINTF_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_CPP_1_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_FPRINTF_DEBUG)\
		$(LIB_BEC_FPRINTF_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)

$(EX_CPP_2_DEBUG): \
			$(OBJ_EX_CPP_2_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_FPRINTF_DEBUG)\
			$(LIB_BEC_FPRINTF_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_CPP_2_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_FPRINTF_DEBUG)\
		$(LIB_BEC_FPRINTF_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)

$(EX_CPP_3_DEBUG): \
			$(OBJ_EX_CPP_3_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_FPRINTF_DEBUG)\
			$(LIB_BEC_FPRINTF_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_CPP_3_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_FPRINTF_DEBUG)\
		$(LIB_BEC_FPRINTF_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)

$(EX_CPP_4_DEBUG): \
			$(OBJ_EX_CPP_4_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_FPRINTF_DEBUG)\
			$(LIB_BEC_FPRINTF_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_CPP_4_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_FPRINTF_DEBUG)\
		$(LIB_BEC_FPRINTF_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)

$(EX_CPP_5_DEBUG): \
			$(OBJ_EX_CPP_5_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_FPRINTF_DEBUG)\
			$(LIB_BEC_FPRINTF_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_CPP_5_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_FPRINTF_DEBUG)\
		$(LIB_BEC_FPRINTF_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)

$(EX_CPP_6_DEBUG): \
			$(OBJ_EX_CPP_6_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_FPRINTF_DEBUG)\
			$(LIB_BEC_FPRINTF_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_CPP_6_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_FPRINTF_DEBUG)\
		$(LIB_BEC_FPRINTF_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)

$(EX_CPP_7_DEBUG): \
			$(OBJ_EX_CPP_7_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_FPRINTF_DEBUG)\
			$(LIB_BEC_FPRINTF_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_CPP_7_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_FPRINTF_DEBUG)\
		$(LIB_BEC_FPRINTF_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)


$(EX_CPP_9_DEBUG): \
			$(OBJ_EX_CPP_9_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_FPRINTF_DEBUG)\
			$(LIB_BEC_FPRINTF_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_CPP_9_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_FPRINTF_DEBUG)\
		$(LIB_BEC_FPRINTF_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)

$(EX_CPP_10_DEBUG): \
			$(OBJ_EX_CPP_10_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_FPRINTF_DEBUG)\
			$(LIB_BEC_FPRINTF_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_CPP_10_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_FPRINTF_DEBUG)\
		$(LIB_BEC_FPRINTF_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)

$(EX_CPP_11_DEBUG): \
			$(OBJ_EX_CPP_11_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_FPRINTF_DEBUG)\
			$(LIB_BEC_FPRINTF_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_CPP_11_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_FPRINTF_DEBUG)\
		$(LIB_BEC_FPRINTF_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)

$(EX_CPP_12_DEBUG): \
			$(OBJ_EX_CPP_12_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_FPRINTF_DEBUG)\
			$(LIB_BEC_FPRINTF_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_CPP_12_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_FPRINTF_DEBUG)\
		$(LIB_BEC_FPRINTF_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)

$(EX_CPP_13_DEBUG): \
			$(OBJ_EX_CPP_13_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_FPRINTF_DEBUG)\
			$(LIB_BEC_FPRINTF_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_CPP_13_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_FPRINTF_DEBUG)\
		$(LIB_BEC_FPRINTF_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)

$(EX_CPP_14_DEBUG): \
			$(OBJ_EX_CPP_14_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_FPRINTF_DEBUG)\
			$(LIB_BEC_FPRINTF_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_CPP_14_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_FPRINTF_DEBUG)\
		$(LIB_BEC_FPRINTF_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)

$(EX_CPP_15_DEBUG): \
			$(OBJ_EX_CPP_15_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_FPRINTF_DEBUG)\
			$(LIB_BEC_FPRINTF_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_CPP_15_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_FPRINTF_DEBUG)\
		$(LIB_BEC_FPRINTF_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)

$(EX_CPP_16_DEBUG): \
			$(OBJ_EX_CPP_16_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_LRSPLIT_DEBUG)\
			$(LIB_BEL_FILE_DEBUG)\
			$(LIB_BER_FILE_DEBUG)\
			$(LIB_BEC_FILE_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_CPP_16_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_LRSPLIT_DEBUG)\
		$(LIB_BEL_FILE_DEBUG)\
		$(LIB_BER_FILE_DEBUG)\
		$(LIB_BEC_FILE_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)

$(EX_CPP_18_DEBUG): \
			$(OBJ_EX_CPP_18_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_FPRINTF_DEBUG)\
			$(LIB_BEC_FPRINTF_WC_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_CPP_18_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_FPRINTF_DEBUG)\
		$(LIB_BEC_FPRINTF_WC_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)

$(EX_CPP_19_DEBUG): \
			$(OBJ_EX_CPP_19_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_FPRINTF_DEBUG)\
			$(LIB_BEC_FPRINTF_WC_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_CPP_19_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_FPRINTF_DEBUG)\
		$(LIB_BEC_FPRINTF_WC_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)

$(EX_CPP_20_DEBUG): \
			$(OBJ_EX_CPP_20_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_FPRINTF_DEBUG)\
			$(LIB_BEC_FPRINTF_DEBUG)\
			$(LIB_B64_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_CPP_20_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_FPRINTF_DEBUG)\
		$(LIB_BEC_FPRINTF_DEBUG)\
		$(LIB_B64_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)

$(EX_CPP_21_DEBUG): \
			$(OBJ_EX_CPP_21_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_FPRINTF_DEBUG)\
			$(LIB_BEC_FPRINTF_DEBUG)\
			$(LIB_B64_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_CPP_21_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_FPRINTF_DEBUG)\
		$(LIB_BEC_FPRINTF_DEBUG)\
		$(LIB_B64_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)


$(EX_CPP_23_DEBUG): \
			$(OBJ_EX_CPP_23_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_N_DEBUG)\
			$(LIB_BEC_W32CONS_DEBUG)\
			$(LIB_BEC_W32SYSLOG_DEBUG)\
			$(LIB_B64_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_CPP_23_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_N_DEBUG)\
		$(LIB_BEC_W32CONS_DEBUG)\
		$(LIB_BEC_W32SYSLOG_DEBUG)\
		$(LIB_B64_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIBS_3PTY_W32SYSLOG)\
		$(TARGET_LIB_DEBUG)

$(EX_CPP_24_DEBUG): \
			$(OBJ_EX_CPP_24_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_N_DEBUG)\
			$(LIB_BEC_W32CONS_DEBUG)\
			$(LIB_BEC_W32SYSLOG_DEBUG)\
			$(LIB_B64_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_CPP_24_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_N_DEBUG)\
		$(LIB_BEC_W32CONS_DEBUG)\
		$(LIB_BEC_W32SYSLOG_DEBUG)\
		$(LIB_B64_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIBS_3PTY_W32SYSLOG)\
		$(TARGET_LIB_DEBUG)

$(EX_CPP_25_DEBUG): \
			$(OBJ_EX_CPP_25_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_FPRINTF_DEBUG)\
			$(LIB_BEC_FPRINTF_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_CPP_25_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_FPRINTF_DEBUG)\
		$(LIB_BEC_FPRINTF_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)

$(EX_CPP_26_DEBUG): \
			$(OBJ_EX_CPP_26_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_FPRINTF_DEBUG)\
			$(LIB_BEC_FPRINTF_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_CPP_26_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_FPRINTF_DEBUG)\
		$(LIB_BEC_FPRINTF_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)

$(EX_CPP_27_DEBUG): \
			$(OBJ_EX_CPP_27_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_FPRINTF_DEBUG)\
			$(LIB_BEC_FPRINTF_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_CPP_27_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_FPRINTF_DEBUG)\
		$(LIB_BEC_FPRINTF_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)

$(EX_C_0_DEBUG): \
			$(OBJ_EX_C_0_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_ALL_DEBUG)\
			$(LIB_BE_FPRINTF_DEBUG)\
			$(LIB_BEC_FPRINTF_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_C_0_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_ALL_DEBUG)\
		$(LIB_BE_FPRINTF_DEBUG)\
		$(LIB_BEC_FPRINTF_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)

$(EX_C_1_DEBUG): \
			$(OBJ_EX_C_1_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_FPRINTF_DEBUG)\
			$(LIB_BEC_FPRINTF_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_C_1_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_FPRINTF_DEBUG)\
		$(LIB_BEC_FPRINTF_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)

$(EX_C_2_DEBUG): \
			$(OBJ_EX_C_2_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_FPRINTF_DEBUG)\
			$(LIB_BEC_FPRINTF_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_C_2_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_FPRINTF_DEBUG)\
		$(LIB_BEC_FPRINTF_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)

$(EX_C_3_DEBUG): \
			$(OBJ_EX_C_3_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_N_DEBUG)\
			$(LIB_BE_N_DEBUG)\
			$(LIB_BEC_FILE_DEBUG)\
			$(LIB_BEC_FPRINTF_DEBUG)\
			$(LIB_BEC_NULL_DEBUG)\
			$(LIB_BEC_W32SYSLOG_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_C_3_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_N_DEBUG)\
		$(LIB_BE_N_DEBUG)\
		$(LIB_BEC_FILE_DEBUG)\
		$(LIB_BEC_FPRINTF_DEBUG)\
		$(LIB_BEC_NULL_DEBUG)\
		$(LIB_BEC_W32SYSLOG_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIBS_3PTY_W32SYSLOG)\
		$(TARGET_LIB_DEBUG)

$(EX_C_4_DEBUG): \
			$(OBJ_EX_C_4_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_C_4_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)

$(EX_C_5_DEBUG): \
			$(OBJ_EX_C_5_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_C_5_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)

$(EX_C_6_DEBUG): \
			$(OBJ_EX_C_6_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_FPRINTF_DEBUG)\
			$(LIB_BEC_FPRINTF_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_C_6_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_FPRINTF_DEBUG)\
		$(LIB_BEC_FPRINTF_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)

$(EX_C_7_DEBUG): \
			$(OBJ_EX_C_7_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_FPRINTF_DEBUG)\
			$(LIB_BEC_FPRINTF_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_EX_C_7_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_FPRINTF_DEBUG)\
		$(LIB_BEC_FPRINTF_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)

$(EX_CPP_0_RELEASE): \
			$(OBJ_EX_CPP_0_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_ALL_RELEASE)\
			$(LIB_BE_FPRINTF_RELEASE)\
			$(LIB_BEC_FPRINTF_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_CPP_0_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_ALL_RELEASE)\
		$(LIB_BE_FPRINTF_RELEASE)\
		$(LIB_BEC_FPRINTF_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)

$(EX_CPP_1_RELEASE): \
			$(OBJ_EX_CPP_1_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_FPRINTF_RELEASE)\
			$(LIB_BEC_FPRINTF_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_CPP_1_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_FPRINTF_RELEASE)\
		$(LIB_BEC_FPRINTF_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)

$(EX_CPP_2_RELEASE): \
			$(OBJ_EX_CPP_2_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_FPRINTF_RELEASE)\
			$(LIB_BEC_FPRINTF_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_CPP_2_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_FPRINTF_RELEASE)\
		$(LIB_BEC_FPRINTF_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)

$(EX_CPP_3_RELEASE): \
			$(OBJ_EX_CPP_3_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_FPRINTF_RELEASE)\
			$(LIB_BEC_FPRINTF_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_CPP_3_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_FPRINTF_RELEASE)\
		$(LIB_BEC_FPRINTF_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)

$(EX_CPP_4_RELEASE): \
			$(OBJ_EX_CPP_4_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_FPRINTF_RELEASE)\
			$(LIB_BEC_FPRINTF_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_CPP_4_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_FPRINTF_RELEASE)\
		$(LIB_BEC_FPRINTF_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)

$(EX_CPP_5_RELEASE): \
			$(OBJ_EX_CPP_5_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_FPRINTF_RELEASE)\
			$(LIB_BEC_FPRINTF_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_CPP_5_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_FPRINTF_RELEASE)\
		$(LIB_BEC_FPRINTF_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)

$(EX_CPP_6_RELEASE): \
			$(OBJ_EX_CPP_6_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_FPRINTF_RELEASE)\
			$(LIB_BEC_FPRINTF_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_CPP_6_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_FPRINTF_RELEASE)\
		$(LIB_BEC_FPRINTF_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)

$(EX_CPP_7_RELEASE): \
			$(OBJ_EX_CPP_7_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_FPRINTF_RELEASE)\
			$(LIB_BEC_FPRINTF_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_CPP_7_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_FPRINTF_RELEASE)\
		$(LIB_BEC_FPRINTF_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)


$(EX_CPP_9_RELEASE): \
			$(OBJ_EX_CPP_9_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_FPRINTF_RELEASE)\
			$(LIB_BEC_FPRINTF_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_CPP_9_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_FPRINTF_RELEASE)\
		$(LIB_BEC_FPRINTF_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)

$(EX_CPP_10_RELEASE): \
			$(OBJ_EX_CPP_10_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_FPRINTF_RELEASE)\
			$(LIB_BEC_FPRINTF_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_CPP_10_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_FPRINTF_RELEASE)\
		$(LIB_BEC_FPRINTF_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)

$(EX_CPP_11_RELEASE): \
			$(OBJ_EX_CPP_11_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_FPRINTF_RELEASE)\
			$(LIB_BEC_FPRINTF_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_CPP_11_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_FPRINTF_RELEASE)\
		$(LIB_BEC_FPRINTF_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)

$(EX_CPP_12_RELEASE): \
			$(OBJ_EX_CPP_12_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_FPRINTF_RELEASE)\
			$(LIB_BEC_FPRINTF_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_CPP_12_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_FPRINTF_RELEASE)\
		$(LIB_BEC_FPRINTF_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)

$(EX_CPP_13_RELEASE): \
			$(OBJ_EX_CPP_13_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_FPRINTF_RELEASE)\
			$(LIB_BEC_FPRINTF_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_CPP_13_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_FPRINTF_RELEASE)\
		$(LIB_BEC_FPRINTF_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)

$(EX_CPP_14_RELEASE): \
			$(OBJ_EX_CPP_14_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_FPRINTF_RELEASE)\
			$(LIB_BEC_FPRINTF_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_CPP_14_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_FPRINTF_RELEASE)\
		$(LIB_BEC_FPRINTF_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)

$(EX_CPP_15_RELEASE): \
			$(OBJ_EX_CPP_15_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_FPRINTF_RELEASE)\
			$(LIB_BEC_FPRINTF_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_CPP_15_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_FPRINTF_RELEASE)\
		$(LIB_BEC_FPRINTF_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)

$(EX_CPP_16_RELEASE): \
			$(OBJ_EX_CPP_16_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_LRSPLIT_RELEASE)\
			$(LIB_BEL_FILE_RELEASE)\
			$(LIB_BER_FILE_RELEASE)\
			$(LIB_BEC_FILE_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_CPP_16_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_LRSPLIT_RELEASE)\
		$(LIB_BEL_FILE_RELEASE)\
		$(LIB_BER_FILE_RELEASE)\
		$(LIB_BEC_FILE_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)

$(EX_CPP_18_RELEASE): \
			$(OBJ_EX_CPP_18_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_FPRINTF_RELEASE)\
			$(LIB_BEC_FPRINTF_WC_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_CPP_18_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_FPRINTF_RELEASE)\
		$(LIB_BEC_FPRINTF_WC_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)

$(EX_CPP_19_RELEASE): \
			$(OBJ_EX_CPP_19_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_FPRINTF_RELEASE)\
			$(LIB_BEC_FPRINTF_WC_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_CPP_19_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_FPRINTF_RELEASE)\
		$(LIB_BEC_FPRINTF_WC_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)

$(EX_CPP_20_RELEASE): \
			$(OBJ_EX_CPP_20_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_FPRINTF_RELEASE)\
			$(LIB_BEC_FPRINTF_RELEASE)\
			$(LIB_B64_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_CPP_20_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_FPRINTF_RELEASE)\
		$(LIB_BEC_FPRINTF_RELEASE)\
		$(LIB_B64_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)

$(EX_CPP_21_RELEASE): \
			$(OBJ_EX_CPP_21_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_FPRINTF_RELEASE)\
			$(LIB_BEC_FPRINTF_RELEASE)\
			$(LIB_B64_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_CPP_21_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_FPRINTF_RELEASE)\
		$(LIB_BEC_FPRINTF_RELEASE)\
		$(LIB_B64_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)


$(EX_CPP_23_RELEASE): \
			$(OBJ_EX_CPP_23_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_N_RELEASE)\
			$(LIB_BEC_W32CONS_RELEASE)\
			$(LIB_BEC_W32SYSLOG_RELEASE)\
			$(LIB_B64_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_CPP_23_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_N_RELEASE)\
		$(LIB_BEC_W32CONS_RELEASE)\
		$(LIB_BEC_W32SYSLOG_RELEASE)\
		$(LIB_B64_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIBS_3PTY_W32SYSLOG)\
		$(TARGET_LIB_RELEASE)

$(EX_CPP_24_RELEASE): \
			$(OBJ_EX_CPP_24_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_N_RELEASE)\
			$(LIB_BEC_W32CONS_RELEASE)\
			$(LIB_BEC_W32SYSLOG_RELEASE)\
			$(LIB_B64_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_CPP_24_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_N_RELEASE)\
		$(LIB_BEC_W32CONS_RELEASE)\
		$(LIB_BEC_W32SYSLOG_RELEASE)\
		$(LIB_B64_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIBS_3PTY_W32SYSLOG)\
		$(TARGET_LIB_RELEASE)

$(EX_CPP_25_RELEASE): \
			$(OBJ_EX_CPP_25_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_FPRINTF_RELEASE)\
			$(LIB_BEC_FPRINTF_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_CPP_25_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_FPRINTF_RELEASE)\
		$(LIB_BEC_FPRINTF_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)

$(EX_CPP_26_RELEASE): \
			$(OBJ_EX_CPP_26_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_FPRINTF_RELEASE)\
			$(LIB_BEC_FPRINTF_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_CPP_26_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_FPRINTF_RELEASE)\
		$(LIB_BEC_FPRINTF_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)

$(EX_CPP_27_RELEASE): \
			$(OBJ_EX_CPP_27_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_FPRINTF_RELEASE)\
			$(LIB_BEC_FPRINTF_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_CPP_27_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_FPRINTF_RELEASE)\
		$(LIB_BEC_FPRINTF_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)

$(EX_C_0_RELEASE): \
			$(OBJ_EX_C_0_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_ALL_RELEASE)\
			$(LIB_BE_FPRINTF_RELEASE)\
			$(LIB_BEC_FPRINTF_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_C_0_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_ALL_RELEASE)\
		$(LIB_BE_FPRINTF_RELEASE)\
		$(LIB_BEC_FPRINTF_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)

$(EX_C_1_RELEASE): \
			$(OBJ_EX_C_1_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_FPRINTF_RELEASE)\
			$(LIB_BEC_FPRINTF_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_C_1_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_FPRINTF_RELEASE)\
		$(LIB_BEC_FPRINTF_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)

$(EX_C_2_RELEASE): \
			$(OBJ_EX_C_2_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_FPRINTF_RELEASE)\
			$(LIB_BEC_FPRINTF_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_C_2_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_FPRINTF_RELEASE)\
		$(LIB_BEC_FPRINTF_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)

$(EX_C_3_RELEASE): \
			$(OBJ_EX_C_3_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_N_RELEASE)\
			$(LIB_BE_N_RELEASE)\
			$(LIB_BEC_FILE_RELEASE)\
			$(LIB_BEC_FPRINTF_RELEASE)\
			$(LIB_BEC_NULL_RELEASE)\
			$(LIB_BEC_W32SYSLOG_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_C_3_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_N_RELEASE)\
		$(LIB_BE_N_RELEASE)\
		$(LIB_BEC_FILE_RELEASE)\
		$(LIB_BEC_FPRINTF_RELEASE)\
		$(LIB_BEC_NULL_RELEASE)\
		$(LIB_BEC_W32SYSLOG_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIBS_3PTY_W32SYSLOG)\
		$(TARGET_LIB_RELEASE)

$(EX_C_4_RELEASE): \
			$(OBJ_EX_C_4_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_C_4_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)

$(EX_C_5_RELEASE): \
			$(OBJ_EX_C_5_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_C_5_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)

$(EX_C_6_RELEASE): \
			$(OBJ_EX_C_6_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_FPRINTF_RELEASE)\
			$(LIB_BEC_FPRINTF_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_C_6_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_FPRINTF_RELEASE)\
		$(LIB_BEC_FPRINTF_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)

$(EX_C_7_RELEASE): \
			$(OBJ_EX_C_7_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_FPRINTF_RELEASE)\
			$(LIB_BEC_FPRINTF_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_EX_C_7_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_FPRINTF_RELEASE)\
		$(LIB_BEC_FPRINTF_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)


##################################################
# Tests

##############################
# Component Tests

$(TARG_TEST_COMP_core_initseq_DEBUG):	\
			$(OBJ_TEST_COMP_core_initseq_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_COMP_core_initseq_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_COMP_core_initseq_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.core.initialisation_sequence\test.component.core.initialisation_sequence.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.core.initialisation_sequence\test.component.core.initialisation_sequence.c

$(TARG_TEST_COMP_core_initseq_RELEASE):	\
			$(OBJ_TEST_COMP_core_initseq_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_COMP_core_initseq_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_COMP_core_initseq_RELEASE):	$(PROJ_TEST_COMPONENT_DIR)\test.component.core.initialisation_sequence\test.component.core.initialisation_sequence.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.core.initialisation_sequence\test.component.core.initialisation_sequence.c

$(TARG_TEST_COMP_custsev_DEBUG):	\
			$(OBJ_TEST_COMP_custsev_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_ALL_DEBUG)\
			$(LIB_BE_TEST_DEBUG)\
			$(LIB_BEC_TEST_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_COMP_custsev_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_ALL_DEBUG)\
		$(LIB_BE_TEST_DEBUG)\
		$(LIB_BEC_TEST_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_COMP_custsev_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.custom_severity\test.component.custom_severity.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.custom_severity\test.component.custom_severity.cpp

$(TARG_TEST_COMP_custsev_RELEASE):	\
			$(OBJ_TEST_COMP_custsev_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_ALL_RELEASE)\
			$(LIB_BE_TEST_RELEASE)\
			$(LIB_BEC_TEST_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_COMP_custsev_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_ALL_RELEASE)\
		$(LIB_BE_TEST_RELEASE)\
		$(LIB_BEC_TEST_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_COMP_custsev_RELEASE):	$(PROJ_TEST_COMPONENT_DIR)\test.component.custom_severity\test.component.custom_severity.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.custom_severity\test.component.custom_severity.cpp

$(TARG_TEST_COMP_ins_args_DEBUG):	\
			$(OBJ_TEST_COMP_ins_args_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_ALL_DEBUG)\
			$(LIB_BE_TEST_DEBUG)\
			$(LIB_BEC_TEST_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_COMP_ins_args_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_ALL_DEBUG)\
		$(LIB_BE_TEST_DEBUG)\
		$(LIB_BEC_TEST_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_COMP_ins_args_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.args\test.component.inserters.args.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.args\test.component.inserters.args.cpp

$(TARG_TEST_COMP_ins_args_RELEASE):	\
			$(OBJ_TEST_COMP_ins_args_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_ALL_RELEASE)\
			$(LIB_BE_TEST_RELEASE)\
			$(LIB_BEC_TEST_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_COMP_ins_args_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_ALL_RELEASE)\
		$(LIB_BE_TEST_RELEASE)\
		$(LIB_BEC_TEST_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_COMP_ins_args_RELEASE):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.args\test.component.inserters.args.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.args\test.component.inserters.args.cpp

$(TARG_TEST_COMP_ins_b64_DEBUG):	\
			$(OBJ_TEST_COMP_ins_b64_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_ALL_DEBUG)\
			$(LIB_BE_TEST_DEBUG)\
			$(LIB_BEC_TEST_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(LIB_B64_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_COMP_ins_b64_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_ALL_DEBUG)\
		$(LIB_BE_TEST_DEBUG)\
		$(LIB_BEC_TEST_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_B64_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_COMP_ins_b64_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.b64\test.component.inserters.b64.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.b64\test.component.inserters.b64.cpp

$(TARG_TEST_COMP_ins_b64_RELEASE):	\
			$(OBJ_TEST_COMP_ins_b64_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_ALL_RELEASE)\
			$(LIB_BE_TEST_RELEASE)\
			$(LIB_BEC_TEST_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(LIB_B64_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_COMP_ins_b64_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_ALL_RELEASE)\
		$(LIB_BE_TEST_RELEASE)\
		$(LIB_BEC_TEST_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_B64_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_COMP_ins_b64_RELEASE):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.b64\test.component.inserters.b64.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.b64\test.component.inserters.b64.cpp

$(TARG_TEST_COMP_ins_bool_DEBUG):	\
			$(OBJ_TEST_COMP_ins_bool_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_ALL_DEBUG)\
			$(LIB_BE_TEST_DEBUG)\
			$(LIB_BEC_TEST_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_COMP_ins_bool_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_ALL_DEBUG)\
		$(LIB_BE_TEST_DEBUG)\
		$(LIB_BEC_TEST_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_COMP_ins_bool_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.boolean\test.component.inserters.boolean.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.boolean\test.component.inserters.boolean.cpp

$(TARG_TEST_COMP_ins_bool_RELEASE):	\
			$(OBJ_TEST_COMP_ins_bool_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_ALL_RELEASE)\
			$(LIB_BE_TEST_RELEASE)\
			$(LIB_BEC_TEST_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_COMP_ins_bool_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_ALL_RELEASE)\
		$(LIB_BE_TEST_RELEASE)\
		$(LIB_BEC_TEST_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_COMP_ins_bool_RELEASE):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.boolean\test.component.inserters.boolean.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.boolean\test.component.inserters.boolean.cpp

$(TARG_TEST_COMP_ins_hostid_DEBUG):	\
			$(OBJ_TEST_COMP_ins_hostid_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_ALL_DEBUG)\
			$(LIB_BE_TEST_DEBUG)\
			$(LIB_BEC_TEST_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_COMP_ins_hostid_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_ALL_DEBUG)\
		$(LIB_BE_TEST_DEBUG)\
		$(LIB_BEC_TEST_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_COMP_ins_hostid_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.hostId\test.component.inserters.hostId.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.hostId\test.component.inserters.hostId.cpp

$(TARG_TEST_COMP_ins_hostid_RELEASE):	\
			$(OBJ_TEST_COMP_ins_hostid_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_ALL_RELEASE)\
			$(LIB_BE_TEST_RELEASE)\
			$(LIB_BEC_TEST_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_COMP_ins_hostid_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_ALL_RELEASE)\
		$(LIB_BE_TEST_RELEASE)\
		$(LIB_BEC_TEST_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_COMP_ins_hostid_RELEASE):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.hostId\test.component.inserters.hostId.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.hostId\test.component.inserters.hostId.cpp

$(TARG_TEST_COMP_ins_int_DEBUG):	\
			$(OBJ_TEST_COMP_ins_int_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_ALL_DEBUG)\
			$(LIB_BE_TEST_DEBUG)\
			$(LIB_BEC_TEST_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_COMP_ins_int_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_ALL_DEBUG)\
		$(LIB_BE_TEST_DEBUG)\
		$(LIB_BEC_TEST_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_COMP_ins_int_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.integer\test.component.inserters.integer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.integer\test.component.inserters.integer.cpp

$(TARG_TEST_COMP_ins_int_RELEASE):	\
			$(OBJ_TEST_COMP_ins_int_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_ALL_RELEASE)\
			$(LIB_BE_TEST_RELEASE)\
			$(LIB_BEC_TEST_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_COMP_ins_int_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_ALL_RELEASE)\
		$(LIB_BE_TEST_RELEASE)\
		$(LIB_BEC_TEST_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_COMP_ins_int_RELEASE):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.integer\test.component.inserters.integer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.integer\test.component.inserters.integer.cpp

$(TARG_TEST_COMP_ins_pad_DEBUG):	\
			$(OBJ_TEST_COMP_ins_pad_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_ALL_DEBUG)\
			$(LIB_BE_TEST_DEBUG)\
			$(LIB_BEC_TEST_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_COMP_ins_pad_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_ALL_DEBUG)\
		$(LIB_BE_TEST_DEBUG)\
		$(LIB_BEC_TEST_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_COMP_ins_pad_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pad\test.component.inserters.pad.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pad\test.component.inserters.pad.cpp

$(TARG_TEST_COMP_ins_pad_RELEASE):	\
			$(OBJ_TEST_COMP_ins_pad_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_ALL_RELEASE)\
			$(LIB_BE_TEST_RELEASE)\
			$(LIB_BEC_TEST_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_COMP_ins_pad_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_ALL_RELEASE)\
		$(LIB_BE_TEST_RELEASE)\
		$(LIB_BEC_TEST_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_COMP_ins_pad_RELEASE):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pad\test.component.inserters.pad.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pad\test.component.inserters.pad.cpp

$(TARG_TEST_COMP_ins_ptr_DEBUG):	\
			$(OBJ_TEST_COMP_ins_ptr_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_ALL_DEBUG)\
			$(LIB_BE_TEST_DEBUG)\
			$(LIB_BEC_TEST_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_COMP_ins_ptr_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_ALL_DEBUG)\
		$(LIB_BE_TEST_DEBUG)\
		$(LIB_BEC_TEST_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_COMP_ins_ptr_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pointer\test.component.inserters.pointer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pointer\test.component.inserters.pointer.cpp

$(TARG_TEST_COMP_ins_ptr_RELEASE):	\
			$(OBJ_TEST_COMP_ins_ptr_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_ALL_RELEASE)\
			$(LIB_BE_TEST_RELEASE)\
			$(LIB_BEC_TEST_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_COMP_ins_ptr_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_ALL_RELEASE)\
		$(LIB_BE_TEST_RELEASE)\
		$(LIB_BEC_TEST_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_COMP_ins_ptr_RELEASE):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pointer\test.component.inserters.pointer.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.pointer\test.component.inserters.pointer.cpp

$(TARG_TEST_COMP_ins_prid_DEBUG):	\
			$(OBJ_TEST_COMP_ins_prid_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_ALL_DEBUG)\
			$(LIB_BE_TEST_DEBUG)\
			$(LIB_BEC_TEST_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_COMP_ins_prid_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_ALL_DEBUG)\
		$(LIB_BE_TEST_DEBUG)\
		$(LIB_BEC_TEST_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_COMP_ins_prid_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.processId\test.component.inserters.processId.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.processId\test.component.inserters.processId.cpp

$(TARG_TEST_COMP_ins_prid_RELEASE):	\
			$(OBJ_TEST_COMP_ins_prid_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_ALL_RELEASE)\
			$(LIB_BE_TEST_RELEASE)\
			$(LIB_BEC_TEST_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_COMP_ins_prid_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_ALL_RELEASE)\
		$(LIB_BE_TEST_RELEASE)\
		$(LIB_BEC_TEST_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_COMP_ins_prid_RELEASE):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.processId\test.component.inserters.processId.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.processId\test.component.inserters.processId.cpp

$(TARG_TEST_COMP_ins_real_DEBUG):	\
			$(OBJ_TEST_COMP_ins_real_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_ALL_DEBUG)\
			$(LIB_BE_TEST_DEBUG)\
			$(LIB_BEC_TEST_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_COMP_ins_real_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_ALL_DEBUG)\
		$(LIB_BE_TEST_DEBUG)\
		$(LIB_BEC_TEST_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_COMP_ins_real_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.real\test.component.inserters.real.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.real\test.component.inserters.real.cpp

$(TARG_TEST_COMP_ins_real_RELEASE):	\
			$(OBJ_TEST_COMP_ins_real_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_ALL_RELEASE)\
			$(LIB_BE_TEST_RELEASE)\
			$(LIB_BEC_TEST_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_COMP_ins_real_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_ALL_RELEASE)\
		$(LIB_BE_TEST_RELEASE)\
		$(LIB_BEC_TEST_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_COMP_ins_real_RELEASE):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.real\test.component.inserters.real.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.real\test.component.inserters.real.cpp

$(TARG_TEST_COMP_ins_thrid_DEBUG):	\
			$(OBJ_TEST_COMP_ins_thrid_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_ALL_DEBUG)\
			$(LIB_BE_TEST_DEBUG)\
			$(LIB_BEC_TEST_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_COMP_ins_thrid_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_ALL_DEBUG)\
		$(LIB_BE_TEST_DEBUG)\
		$(LIB_BEC_TEST_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_COMP_ins_thrid_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.threadId\test.component.inserters.threadId.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.threadId\test.component.inserters.threadId.cpp

$(TARG_TEST_COMP_ins_thrid_RELEASE):	\
			$(OBJ_TEST_COMP_ins_thrid_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_ALL_RELEASE)\
			$(LIB_BE_TEST_RELEASE)\
			$(LIB_BEC_TEST_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_COMP_ins_thrid_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_ALL_RELEASE)\
		$(LIB_BE_TEST_RELEASE)\
		$(LIB_BEC_TEST_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_COMP_ins_thrid_RELEASE):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.threadId\test.component.inserters.threadId.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.threadId\test.component.inserters.threadId.cpp

$(TARG_TEST_COMP_ins_w2m_DEBUG):	\
			$(OBJ_TEST_COMP_ins_w2m_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_ALL_DEBUG)\
			$(LIB_BE_TEST_DEBUG)\
			$(LIB_BEC_TEST_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_COMP_ins_w2m_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_ALL_DEBUG)\
		$(LIB_BE_TEST_DEBUG)\
		$(LIB_BEC_TEST_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_COMP_ins_w2m_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.w2m\test.component.inserters.w2m.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.w2m\test.component.inserters.w2m.cpp

$(TARG_TEST_COMP_ins_w2m_RELEASE):	\
			$(OBJ_TEST_COMP_ins_w2m_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_ALL_RELEASE)\
			$(LIB_BE_TEST_RELEASE)\
			$(LIB_BEC_TEST_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_COMP_ins_w2m_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_ALL_RELEASE)\
		$(LIB_BE_TEST_RELEASE)\
		$(LIB_BEC_TEST_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_COMP_ins_w2m_RELEASE):	$(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.w2m\test.component.inserters.w2m.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.inserters.w2m\test.component.inserters.w2m.cpp

$(TARG_TEST_COMP_log_1_DEBUG):	\
			$(OBJ_TEST_COMP_log_1_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_ALL_DEBUG)\
			$(LIB_BE_TEST_DEBUG)\
			$(LIB_BEC_TEST_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_COMP_log_1_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_ALL_DEBUG)\
		$(LIB_BE_TEST_DEBUG)\
		$(LIB_BEC_TEST_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_COMP_log_1_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.log.1\test.component.log.1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.log.1\test.component.log.1.cpp

$(TARG_TEST_COMP_log_1_RELEASE):	\
			$(OBJ_TEST_COMP_log_1_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_ALL_RELEASE)\
			$(LIB_BE_TEST_RELEASE)\
			$(LIB_BEC_TEST_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_COMP_log_1_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_ALL_RELEASE)\
		$(LIB_BE_TEST_RELEASE)\
		$(LIB_BEC_TEST_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_COMP_log_1_RELEASE):	$(PROJ_TEST_COMPONENT_DIR)\test.component.log.1\test.component.log.1.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.log.1\test.component.log.1.cpp

$(TARG_TEST_COMP_pan_puts_DEBUG):	\
			$(OBJ_TEST_COMP_pan_puts_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_ALL_DEBUG)\
			$(LIB_BE_TEST_DEBUG)\
			$(LIB_BEC_TEST_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_COMP_pan_puts_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_ALL_DEBUG)\
		$(LIB_BE_TEST_DEBUG)\
		$(LIB_BEC_TEST_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_COMP_pan_puts_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logputs\test.component.core.pantheios_logputs.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logputs\test.component.core.pantheios_logputs.cpp

$(TARG_TEST_COMP_pan_puts_RELEASE):	\
			$(OBJ_TEST_COMP_pan_puts_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_ALL_RELEASE)\
			$(LIB_BE_TEST_RELEASE)\
			$(LIB_BEC_TEST_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_COMP_pan_puts_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_ALL_RELEASE)\
		$(LIB_BE_TEST_RELEASE)\
		$(LIB_BEC_TEST_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_COMP_pan_puts_RELEASE):	$(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logputs\test.component.core.pantheios_logputs.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logputs\test.component.core.pantheios_logputs.cpp

$(TARG_TEST_COMP_pan_prtf_DEBUG):	\
			$(OBJ_TEST_COMP_pan_prtf_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_ALL_DEBUG)\
			$(LIB_BE_TEST_DEBUG)\
			$(LIB_BEC_TEST_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_COMP_pan_prtf_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_ALL_DEBUG)\
		$(LIB_BE_TEST_DEBUG)\
		$(LIB_BEC_TEST_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_COMP_pan_prtf_DEBUG):	$(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logprintf\test.component.core.pantheios_logprintf.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logprintf\test.component.core.pantheios_logprintf.cpp

$(TARG_TEST_COMP_pan_prtf_RELEASE):	\
			$(OBJ_TEST_COMP_pan_prtf_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_ALL_RELEASE)\
			$(LIB_BE_TEST_RELEASE)\
			$(LIB_BEC_TEST_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_COMP_pan_prtf_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_ALL_RELEASE)\
		$(LIB_BE_TEST_RELEASE)\
		$(LIB_BEC_TEST_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_COMP_pan_prtf_RELEASE):	$(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logprintf\test.component.core.pantheios_logprintf.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_COMPONENT_DIR)\test.component.core.pantheios_logprintf\test.component.core.pantheios_logprintf.cpp

##############################
# Performance Tests

$(TARG_TEST_PERF_ins_w2m_DEBUG):	\
			$(OBJ_TEST_PERF_ins_w2m_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_NULL_DEBUG)\
			$(LIB_BEC_NULL_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_PERF_ins_w2m_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_NULL_DEBUG)\
		$(LIB_BEC_NULL_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_PERF_ins_w2m_DEBUG):	$(PROJ_TEST_PERFORMANCE_DIR)\test.performance.inserters.w2m\test.performance.inserters.w2m.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_PERFORMANCE_DIR)\test.performance.inserters.w2m\test.performance.inserters.w2m.cpp

$(TARG_TEST_PERF_ins_w2m_RELEASE):	\
			$(OBJ_TEST_PERF_ins_w2m_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_NULL_RELEASE)\
			$(LIB_BEC_NULL_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_PERF_ins_w2m_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_NULL_RELEASE)\
		$(LIB_BEC_NULL_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_PERF_ins_w2m_RELEASE):	$(PROJ_TEST_PERFORMANCE_DIR)\test.performance.inserters.w2m\test.performance.inserters.w2m.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_PERFORMANCE_DIR)\test.performance.inserters.w2m\test.performance.inserters.w2m.cpp

##############################
# Scratch Tests

#  object files

$(OBJ_TEST_API_DEBUG):	$(PROJ_TEST_SCRATCH_DIR)\test.scratch.api\test.scratch.api.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_SCRATCH_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_SCRATCH_DIR)\test.scratch.api\test.scratch.api.cpp
$(OBJ_TEST_FE_DEBUG):	$(PROJ_TEST_SCRATCH_DIR)\test.scratch.fe\test.scratch.fe.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_SCRATCH_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_SCRATCH_DIR)\test.scratch.fe\test.scratch.fe.cpp
$(OBJ_TEST_BE_N_DEBUG):	$(PROJ_TEST_SCRATCH_DIR)\test.scratch.be.N.fail\test.scratch.be.N.fail.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_SCRATCH_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_SCRATCH_DIR)\test.scratch.be.N.fail\test.scratch.be.N.fail.cpp
$(OBJ_TEST_API_RELEASE):	$(PROJ_TEST_SCRATCH_DIR)\test.scratch.api\test.scratch.api.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_SCRATCH_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_SCRATCH_DIR)\test.scratch.api\test.scratch.api.cpp
$(OBJ_TEST_FE_RELEASE):	$(PROJ_TEST_SCRATCH_DIR)\test.scratch.fe\test.scratch.fe.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_SCRATCH_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_SCRATCH_DIR)\test.scratch.fe\test.scratch.fe.cpp
$(OBJ_TEST_BE_N_RELEASE):	$(PROJ_TEST_SCRATCH_DIR)\test.scratch.be.N.fail\test.scratch.be.N.fail.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_SCRATCH_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_SCRATCH_DIR)\test.scratch.be.N.fail\test.scratch.be.N.fail.cpp

# executables

$(TEST__DEBUG_API_W_BE_FPRINTF):	\
			$(OBJ_TEST_API_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_FPRINTF_DEBUG)\
			$(LIB_BEC_FPRINTF_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_API_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_FPRINTF_DEBUG)\
		$(LIB_BEC_FPRINTF_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIBS_3PTY_FPRINTF)\
		$(TARGET_LIB_DEBUG)

$(TEST__DEBUG_API_W_BE_COMERROBJ):		\
			$(OBJ_TEST_API_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_COMERROBJ_DEBUG)\
			$(LIB_BEC_COMERROBJ_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_API_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_COMERROBJ_DEBUG)\
		$(LIB_BEC_COMERROBJ_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIBS_3PTY_COMERROBJ)\
		$(TARGET_LIB_DEBUG)

$(TEST__DEBUG_API_W_BE_WINEVLOG):	\
			$(OBJ_TEST_API_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_WINEVLOG_DEBUG)\
			$(LIB_BEC_WINEVLOG_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_API_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_WINEVLOG_DEBUG)\
		$(LIB_BEC_WINEVLOG_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIBS_3PTY_WINEVLOG)\
		$(TARGET_LIB_DEBUG)

$(TEST__DEBUG_API_W_BE_W32CONS):	\
			$(OBJ_TEST_API_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_W32CONS_DEBUG)\
			$(LIB_BEC_W32CONS_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_API_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_W32CONS_DEBUG)\
		$(LIB_BEC_W32CONS_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIBS_3PTY_W32CONS)\
		$(TARGET_LIB_DEBUG)

$(TEST__DEBUG_API_W_BE_W32DBGR):	\
			$(OBJ_TEST_API_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_W32DBGR_DEBUG)\
			$(LIB_BEC_W32DBGR_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_API_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_W32DBGR_DEBUG)\
		$(LIB_BEC_W32DBGR_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIBS_3PTY_W32DBGR)\
		$(TARGET_LIB_DEBUG)

$(TEST__DEBUG_API_W_BE_W32SYSLOG):		\
			$(OBJ_TEST_API_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_W32SYSLOG_DEBUG)\
			$(LIB_BEC_W32SYSLOG_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_API_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_W32SYSLOG_DEBUG)\
		$(LIB_BEC_W32SYSLOG_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIBS_3PTY_W32SYSLOG)\
		$(TARGET_LIB_DEBUG)

$(TEST__DEBUG_API_W_BELR_2_W32DBGR_FPRINTF):	\
			$(OBJ_TEST_API_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_LRSPLIT_DEBUG)\
			$(LIB_BEL_W32DBGR_DEBUG)\
			$(LIB_BEC_W32DBGR_DEBUG)\
			$(LIB_BER_FPRINTF_DEBUG)\
			$(LIB_BEC_FPRINTF_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_API_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_LRSPLIT_DEBUG)\
		$(LIB_BEL_W32DBGR_DEBUG)\
		$(LIB_BEC_W32DBGR_DEBUG)\
		$(LIB_BER_FPRINTF_DEBUG)\
		$(LIB_BEC_FPRINTF_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIBS_3PTY_W32DBGR_FPRINTF)\
		$(TARGET_LIB_DEBUG)

$(TEST__DEBUG_API_W_BELR_3_W32DBGR_W32SYSLOG):	\
			$(OBJ_TEST_API_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_LRSPLIT_DEBUG)\
			$(LIB_BEL_W32DBGR_DEBUG)\
			$(LIB_BEC_W32DBGR_DEBUG)\
			$(LIB_BER_W32SYSLOG_DEBUG)\
			$(LIB_BEC_W32SYSLOG_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_API_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_LRSPLIT_DEBUG)\
		$(LIB_BEL_W32DBGR_DEBUG)\
		$(LIB_BEC_W32DBGR_DEBUG)\
		$(LIB_BER_W32SYSLOG_DEBUG)\
		$(LIB_BEC_W32SYSLOG_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIBS_3PTY_W32DBGR_W32SYSLOG)\
		$(TARGET_LIB_DEBUG)

$(TARGET_TEST_FE_DEBUG): \
			$(OBJ_TEST_FE_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_FE_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(TARGET_LIB_DEBUG)

$(TEST__DEBUG_BE_N_FAIL):	\
			$(OBJ_TEST_BE_N_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_N_DEBUG)\
			$(LIB_BE_N_DEBUG)\
			$(LIB_BEC_FAIL_DEBUG)\
			$(LIB_BEC_FILE_DEBUG)\
			$(LIB_BEC_FPRINTF_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_BE_N_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_FE_N_DEBUG)\
		$(LIB_BE_N_DEBUG)\
		$(LIB_BEC_FAIL_DEBUG)\
		$(LIB_BEC_FILE_DEBUG)\
		$(LIB_BEC_FPRINTF_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_DEBUG)

$(TEST__RELEASE_API_W_BE_FPRINTF):	\
			$(OBJ_TEST_API_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_FPRINTF_RELEASE)\
			$(LIB_BEC_FPRINTF_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_API_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_FPRINTF_RELEASE)\
		$(LIB_BEC_FPRINTF_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIBS_3PTY_FPRINTF)\
		$(TARGET_LIB_RELEASE)

$(TEST__RELEASE_API_W_BE_COMERROBJ):		\
			$(OBJ_TEST_API_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_COMERROBJ_RELEASE)\
			$(LIB_BEC_COMERROBJ_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_API_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_COMERROBJ_RELEASE)\
		$(LIB_BEC_COMERROBJ_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIBS_3PTY_COMERROBJ)\
		$(TARGET_LIB_RELEASE)

$(TEST__RELEASE_API_W_BE_WINEVLOG):	\
			$(OBJ_TEST_API_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_WINEVLOG_RELEASE)\
			$(LIB_BEC_WINEVLOG_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_API_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_WINEVLOG_RELEASE)\
		$(LIB_BEC_WINEVLOG_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIBS_3PTY_WINEVLOG)\
		$(TARGET_LIB_RELEASE)

$(TEST__RELEASE_API_W_BE_W32CONS):	\
			$(OBJ_TEST_API_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_W32CONS_RELEASE)\
			$(LIB_BEC_W32CONS_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_API_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_W32CONS_RELEASE)\
		$(LIB_BEC_W32CONS_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIBS_3PTY_W32CONS)\
		$(TARGET_LIB_RELEASE)

$(TEST__RELEASE_API_W_BE_W32DBGR):	\
			$(OBJ_TEST_API_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_W32DBGR_RELEASE)\
			$(LIB_BEC_W32DBGR_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_API_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_W32DBGR_RELEASE)\
		$(LIB_BEC_W32DBGR_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIBS_3PTY_W32DBGR)\
		$(TARGET_LIB_RELEASE)

$(TEST__RELEASE_API_W_BE_W32SYSLOG):		\
			$(OBJ_TEST_API_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_W32SYSLOG_RELEASE)\
			$(LIB_BEC_W32SYSLOG_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_API_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_W32SYSLOG_RELEASE)\
		$(LIB_BEC_W32SYSLOG_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIBS_3PTY_W32SYSLOG)\
		$(TARGET_LIB_RELEASE)

$(TEST__RELEASE_API_W_BELR_2_W32DBGR_FPRINTF):	\
			$(OBJ_TEST_API_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_LRSPLIT_RELEASE)\
			$(LIB_BEL_W32DBGR_RELEASE)\
			$(LIB_BEC_W32DBGR_RELEASE)\
			$(LIB_BER_FPRINTF_RELEASE)\
			$(LIB_BEC_FPRINTF_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_API_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_LRSPLIT_RELEASE)\
		$(LIB_BEL_W32DBGR_RELEASE)\
		$(LIB_BEC_W32DBGR_RELEASE)\
		$(LIB_BER_FPRINTF_RELEASE)\
		$(LIB_BEC_FPRINTF_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIBS_3PTY_W32DBGR_FPRINTF)\
		$(TARGET_LIB_RELEASE)

$(TEST__RELEASE_API_W_BELR_3_W32DBGR_W32SYSLOG):	\
			$(OBJ_TEST_API_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_LRSPLIT_RELEASE)\
			$(LIB_BEL_W32DBGR_RELEASE)\
			$(LIB_BEC_W32DBGR_RELEASE)\
			$(LIB_BER_W32SYSLOG_RELEASE)\
			$(LIB_BEC_W32SYSLOG_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_API_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_LRSPLIT_RELEASE)\
		$(LIB_BEL_W32DBGR_RELEASE)\
		$(LIB_BEC_W32DBGR_RELEASE)\
		$(LIB_BER_W32SYSLOG_RELEASE)\
		$(LIB_BEC_W32SYSLOG_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIBS_3PTY_W32DBGR_W32SYSLOG)\
		$(TARGET_LIB_RELEASE)

$(TARGET_TEST_FE_RELEASE): \
			$(OBJ_TEST_FE_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_FE_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(TARGET_LIB_RELEASE)

$(TEST__RELEASE_BE_N_FAIL):	\
			$(OBJ_TEST_BE_N_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_N_RELEASE)\
			$(LIB_BE_N_RELEASE)\
			$(LIB_BEC_FAIL_RELEASE)\
			$(LIB_BEC_FILE_RELEASE)\
			$(LIB_BEC_FPRINTF_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_BE_N_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_FE_N_RELEASE)\
		$(LIB_BE_N_RELEASE)\
		$(LIB_BEC_FAIL_RELEASE)\
		$(LIB_BEC_FILE_RELEASE)\
		$(LIB_BEC_FPRINTF_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIBS_3PTY_BE_N_FAIL)\
		$(TARGET_LIB_RELEASE)

##############################
# Unit Tests

$(TARG_TEST_UNIT_lvls_dyninit_DEBUG):	\
			$(OBJ_TEST_UNIT_lvls_dyninit_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_UNIT_lvls_dyninit_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_UNIT_lvls_dyninit_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.levels.dynamic_initialisation\test.unit.levels.dynamic_initialisation.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.levels.dynamic_initialisation\test.unit.levels.dynamic_initialisation.cpp

$(TARG_TEST_UNIT_lvls_dyninit_RELEASE):	\
			$(OBJ_TEST_UNIT_lvls_dyninit_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_UNIT_lvls_dyninit_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_UNIT_lvls_dyninit_RELEASE):	$(PROJ_TEST_UNIT_DIR)\test.unit.levels.dynamic_initialisation\test.unit.levels.dynamic_initialisation.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.levels.dynamic_initialisation\test.unit.levels.dynamic_initialisation.cpp

$(TARG_TEST_UNIT_lvls_vals_DEBUG):	\
			$(OBJ_TEST_UNIT_lvls_vals_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_UNIT_lvls_vals_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_UNIT_lvls_vals_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.levels.values\test.unit.levels.values.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.levels.values\test.unit.levels.values.c

$(TARG_TEST_UNIT_lvls_vals_RELEASE):	\
			$(OBJ_TEST_UNIT_lvls_vals_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_UNIT_lvls_vals_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_UNIT_lvls_vals_RELEASE):	$(PROJ_TEST_UNIT_DIR)\test.unit.levels.values\test.unit.levels.values.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.levels.values\test.unit.levels.values.c

$(TARG_TEST_UNIT_getcurrtm_DEBUG):	\
			$(OBJ_TEST_UNIT_getcurrtm_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(LIB_SHWILD_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_UNIT_getcurrtm_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_SHWILD_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_UNIT_getcurrtm_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.getcurrenttime\test.unit.util.getcurrenttime.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.getcurrenttime\test.unit.util.getcurrenttime.cpp

$(TARG_TEST_UNIT_getcurrtm_RELEASE):	\
			$(OBJ_TEST_UNIT_getcurrtm_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(LIB_SHWILD_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_UNIT_getcurrtm_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_SHWILD_RELEASE)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_UNIT_getcurrtm_RELEASE):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.getcurrenttime\test.unit.util.getcurrenttime.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.getcurrenttime\test.unit.util.getcurrenttime.cpp

$(TARG_TEST_UNIT_getversion_DEBUG):	\
			$(OBJ_TEST_UNIT_getversion_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_FE_FAIL_DEBUG)\
			$(LIB_BE_FAIL_DEBUG)\
			$(LIB_BEC_FAIL_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(LIB_SHWILD_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_UNIT_getversion_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIB_FE_FAIL_DEBUG)\
		$(LIB_BE_FAIL_DEBUG)\
		$(LIB_BEC_FAIL_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_SHWILD_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_UNIT_getversion_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.getversion\test.unit.getversion.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.getversion\test.unit.getversion.c

$(TARG_TEST_UNIT_getversion_RELEASE):	\
			$(OBJ_TEST_UNIT_getversion_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_FE_FAIL_RELEASE)\
			$(LIB_BE_FAIL_RELEASE)\
			$(LIB_BEC_FAIL_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(LIB_SHWILD_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_UNIT_getversion_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIB_FE_FAIL_RELEASE)\
		$(LIB_BE_FAIL_RELEASE)\
		$(LIB_BEC_FAIL_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_SHWILD_RELEASE)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_UNIT_getversion_RELEASE):	$(PROJ_TEST_UNIT_DIR)\test.unit.getversion\test.unit.getversion.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.getversion\test.unit.getversion.c

$(TARG_TEST_UNIT_gethostname_DEBUG):	\
			$(OBJ_TEST_UNIT_gethostname_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(LIB_SHWILD_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_UNIT_gethostname_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_SHWILD_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_UNIT_gethostname_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.gethostname\test.unit.util.gethostname.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.gethostname\test.unit.util.gethostname.cpp

$(TARG_TEST_UNIT_gethostname_RELEASE):	\
			$(OBJ_TEST_UNIT_gethostname_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(LIB_SHWILD_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_UNIT_gethostname_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_SHWILD_RELEASE)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_UNIT_gethostname_RELEASE):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.gethostname\test.unit.util.gethostname.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.gethostname\test.unit.util.gethostname.cpp

$(TARG_TEST_UNIT_onbailout_DEBUG):	\
			$(OBJ_TEST_UNIT_onbailout_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(LIB_SHWILD_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_UNIT_onbailout_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_SHWILD_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_UNIT_onbailout_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.onbailout\test.unit.util.onbailout.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.onbailout\test.unit.util.onbailout.cpp

$(TARG_TEST_UNIT_onbailout_RELEASE):	\
			$(OBJ_TEST_UNIT_onbailout_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(LIB_SHWILD_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_UNIT_onbailout_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_SHWILD_RELEASE)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_UNIT_onbailout_RELEASE):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.onbailout\test.unit.util.onbailout.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.onbailout\test.unit.util.onbailout.cpp

$(TARG_TEST_UNIT_strnlen_DEBUG):	\
			$(OBJ_TEST_UNIT_strnlen_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(LIB_SHWILD_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_UNIT_strnlen_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_SHWILD_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_UNIT_strnlen_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.strnlen\test.unit.util.strnlen.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.strnlen\test.unit.util.strnlen.cpp

$(TARG_TEST_UNIT_strnlen_RELEASE):	\
			$(OBJ_TEST_UNIT_strnlen_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(LIB_SHWILD_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_UNIT_strnlen_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_SHWILD_RELEASE)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_UNIT_strnlen_RELEASE):	$(PROJ_TEST_UNIT_DIR)\test.unit.util.strnlen\test.unit.util.strnlen.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.util.strnlen\test.unit.util.strnlen.cpp

$(TARG_TEST_UNIT_bec_CEO_DEBUG):	\
			$(OBJ_TEST_UNIT_bec_CEO_DEBUG)\
			$(LIB_BEC_COMERROBJ_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(LIB_SHWILD_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_UNIT_bec_CEO_DEBUG)\
		$(LIB_BEC_COMERROBJ_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_SHWILD_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_UNIT_bec_CEO_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.bec.COMErrorObject\test.unit.bec.COMErrorObject.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.bec.COMErrorObject\test.unit.bec.COMErrorObject.cpp

$(TARG_TEST_UNIT_bec_CEO_RELEASE):	\
			$(OBJ_TEST_UNIT_bec_CEO_RELEASE)\
			$(LIB_BEC_COMERROBJ_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(LIB_SHWILD_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_UNIT_bec_CEO_RELEASE)\
		$(LIB_BEC_COMERROBJ_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_SHWILD_RELEASE)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_UNIT_bec_CEO_RELEASE):	$(PROJ_TEST_UNIT_DIR)\test.unit.bec.COMErrorObject\test.unit.bec.COMErrorObject.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.bec.COMErrorObject\test.unit.bec.COMErrorObject.cpp

$(TARG_TEST_UNIT_bec_file_DEBUG):	\
			$(OBJ_TEST_UNIT_bec_file_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_BEC_FILE_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_NULL_DEBUG)\
			$(LIB_BEC_NULL_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(LIB_SHWILD_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_UNIT_bec_file_DEBUG)\
		$(LIB_BEC_FILE_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_NULL_DEBUG)\
		$(LIB_BEC_NULL_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_SHWILD_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_UNIT_bec_file_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.bec.file\test.unit.bec.file.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.bec.file\test.unit.bec.file.cpp

$(TARG_TEST_UNIT_bec_file_RELEASE):	\
			$(OBJ_TEST_UNIT_bec_file_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_BEC_FILE_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_NULL_RELEASE)\
			$(LIB_BEC_NULL_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(LIB_SHWILD_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_UNIT_bec_file_RELEASE)\
		$(LIB_BEC_FILE_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_NULL_RELEASE)\
		$(LIB_BEC_NULL_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_SHWILD_RELEASE)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_UNIT_bec_file_RELEASE):	$(PROJ_TEST_UNIT_DIR)\test.unit.bec.file\test.unit.bec.file.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.bec.file\test.unit.bec.file.cpp

$(TARG_TEST_UNIT_bec_fprintf_DEBUG):	\
			$(OBJ_TEST_UNIT_bec_fprintf_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_BEC_FPRINTF_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_BE_NULL_DEBUG)\
			$(LIB_BEC_NULL_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(LIB_SHWILD_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_UNIT_bec_fprintf_DEBUG)\
		$(LIB_BEC_FPRINTF_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_BE_NULL_DEBUG)\
		$(LIB_BEC_NULL_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_SHWILD_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_UNIT_bec_fprintf_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.bec.fprintf\test.unit.bec.fprintf.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.bec.fprintf\test.unit.bec.fprintf.cpp

$(TARG_TEST_UNIT_bec_fprintf_RELEASE):	\
			$(OBJ_TEST_UNIT_bec_fprintf_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_BEC_FPRINTF_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_BE_NULL_RELEASE)\
			$(LIB_BEC_NULL_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(LIB_SHWILD_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_UNIT_bec_fprintf_RELEASE)\
		$(LIB_BEC_FPRINTF_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_BE_NULL_RELEASE)\
		$(LIB_BEC_NULL_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_SHWILD_RELEASE)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_UNIT_bec_fprintf_RELEASE):	$(PROJ_TEST_UNIT_DIR)\test.unit.bec.fprintf\test.unit.bec.fprintf.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.bec.fprintf\test.unit.bec.fprintf.cpp

$(TARG_TEST_UNIT_bec_fail_DEBUG):	\
			$(OBJ_TEST_UNIT_bec_fail_DEBUG)\
			$(LIB_BEC_FAIL_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(LIB_SHWILD_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_UNIT_bec_fail_DEBUG)\
		$(LIB_BEC_FAIL_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_SHWILD_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_UNIT_bec_fail_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.bec.fail\test.unit.bec.fail.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.bec.fail\test.unit.bec.fail.c

$(TARG_TEST_UNIT_bec_fail_RELEASE):	\
			$(OBJ_TEST_UNIT_bec_fail_RELEASE)\
			$(LIB_BEC_FAIL_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(LIB_SHWILD_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_UNIT_bec_fail_RELEASE)\
		$(LIB_BEC_FAIL_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_SHWILD_RELEASE)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_UNIT_bec_fail_RELEASE):	$(PROJ_TEST_UNIT_DIR)\test.unit.bec.fail\test.unit.bec.fail.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.bec.fail\test.unit.bec.fail.c

$(TARG_TEST_UNIT_be_fail_DEBUG):	\
			$(OBJ_TEST_UNIT_be_fail_DEBUG)\
			$(LIB_BE_FAIL_DEBUG)\
			$(LIB_BEC_FAIL_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(LIB_SHWILD_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_UNIT_be_fail_DEBUG)\
		$(LIB_BE_FAIL_DEBUG)\
		$(LIB_BEC_FAIL_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_SHWILD_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_UNIT_be_fail_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.be.fail\test.unit.be.fail.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.be.fail\test.unit.be.fail.c

$(TARG_TEST_UNIT_be_fail_RELEASE):	\
			$(OBJ_TEST_UNIT_be_fail_RELEASE)\
			$(LIB_BE_FAIL_RELEASE)\
			$(LIB_BEC_FAIL_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(LIB_SHWILD_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_UNIT_be_fail_RELEASE)\
		$(LIB_BE_FAIL_RELEASE)\
		$(LIB_BEC_FAIL_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_SHWILD_RELEASE)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_UNIT_be_fail_RELEASE):	$(PROJ_TEST_UNIT_DIR)\test.unit.be.fail\test.unit.be.fail.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.be.fail\test.unit.be.fail.c

#
$(TARG_TEST_UNIT_be_lrsplit_DEBUG):	\
			$(OBJ_TEST_UNIT_be_lrsplit_DEBUG)\
			$(LIB_BE_LRSPLIT_DEBUG)\
			$(LIB_FE_ALL_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(LIB_SHWILD_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_UNIT_be_lrsplit_DEBUG)\
		$(LIB_BE_LRSPLIT_DEBUG)\
		$(LIB_FE_ALL_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_SHWILD_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_UNIT_be_lrsplit_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.be.lrsplit\test.unit.be.lrsplit.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.be.lrsplit\test.unit.be.lrsplit.c

$(TARG_TEST_UNIT_be_lrsplit_RELEASE):	\
			$(OBJ_TEST_UNIT_be_lrsplit_RELEASE)\
			$(LIB_BE_LRSPLIT_RELEASE)\
			$(LIB_FE_ALL_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(LIB_SHWILD_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_UNIT_be_lrsplit_RELEASE)\
		$(LIB_BE_LRSPLIT_RELEASE)\
		$(LIB_FE_ALL_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_SHWILD_RELEASE)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_UNIT_be_lrsplit_RELEASE):	$(PROJ_TEST_UNIT_DIR)\test.unit.be.lrsplit\test.unit.be.lrsplit.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.be.lrsplit\test.unit.be.lrsplit.c

$(TARG_TEST_UNIT_be_N_DEBUG):	\
			$(OBJ_TEST_UNIT_be_N_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_CORE_DEBUG)\
			$(LIB_BE_N_DEBUG)\
			$(LIB_FE_ALL_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(LIB_SHWILD_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_UNIT_be_N_DEBUG)\
		$(LIB_BE_N_DEBUG)\
		$(LIB_FE_ALL_DEBUG)\
		$(LIB_CORE_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_SHWILD_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_UNIT_be_N_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.be.N\test.unit.be.N.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.be.N\test.unit.be.N.c

$(TARG_TEST_UNIT_be_N_RELEASE):	\
			$(OBJ_TEST_UNIT_be_N_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_CORE_RELEASE)\
			$(LIB_BE_N_RELEASE)\
			$(LIB_FE_ALL_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(LIB_SHWILD_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_UNIT_be_N_RELEASE)\
		$(LIB_BE_N_RELEASE)\
		$(LIB_FE_ALL_RELEASE)\
		$(LIB_CORE_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_SHWILD_RELEASE)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_UNIT_be_N_RELEASE):	$(PROJ_TEST_UNIT_DIR)\test.unit.be.N\test.unit.be.N.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.be.N\test.unit.be.N.c

$(TARG_TEST_UNIT_fe_all_DEBUG):	\
			$(OBJ_TEST_UNIT_fe_all_DEBUG)\
			$(LIB_FE_ALL_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(LIB_SHWILD_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_UNIT_fe_all_DEBUG)\
		$(LIB_FE_ALL_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_SHWILD_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_UNIT_fe_all_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.all\test.unit.fe.all.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.all\test.unit.fe.all.c

$(TARG_TEST_UNIT_fe_all_RELEASE):	\
			$(OBJ_TEST_UNIT_fe_all_RELEASE)\
			$(LIB_FE_ALL_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(LIB_SHWILD_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_UNIT_fe_all_RELEASE)\
		$(LIB_FE_ALL_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_SHWILD_RELEASE)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_UNIT_fe_all_RELEASE):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.all\test.unit.fe.all.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.all\test.unit.fe.all.c

$(TARG_TEST_UNIT_fe_fail_DEBUG):	\
			$(OBJ_TEST_UNIT_fe_fail_DEBUG)\
			$(LIB_FE_FAIL_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(LIB_SHWILD_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_UNIT_fe_fail_DEBUG)\
		$(LIB_FE_FAIL_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_SHWILD_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_UNIT_fe_fail_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.fail\test.unit.fe.fail.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.fail\test.unit.fe.fail.c

$(TARG_TEST_UNIT_fe_fail_RELEASE):	\
			$(OBJ_TEST_UNIT_fe_fail_RELEASE)\
			$(LIB_FE_FAIL_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(LIB_SHWILD_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_UNIT_fe_fail_RELEASE)\
		$(LIB_FE_FAIL_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_SHWILD_RELEASE)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_UNIT_fe_fail_RELEASE):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.fail\test.unit.fe.fail.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.fail\test.unit.fe.fail.c

$(TARG_TEST_UNIT_fe_N_DEBUG):	\
			$(OBJ_TEST_UNIT_fe_N_DEBUG)\
			$(LIB_FE_N_DEBUG)\
			$(LIB_UTIL_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(LIB_SHWILD_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_UNIT_fe_N_DEBUG)\
		$(LIB_FE_N_DEBUG)\
		$(LIB_UTIL_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_SHWILD_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_UNIT_fe_N_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.N\test.unit.fe.N.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.N\test.unit.fe.N.c

$(TARG_TEST_UNIT_fe_N_RELEASE):	\
			$(OBJ_TEST_UNIT_fe_N_RELEASE)\
			$(LIB_FE_N_RELEASE)\
			$(LIB_UTIL_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(LIB_SHWILD_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_UNIT_fe_N_RELEASE)\
		$(LIB_FE_N_RELEASE)\
		$(LIB_UTIL_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_SHWILD_RELEASE)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_UNIT_fe_N_RELEASE):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.N\test.unit.fe.N.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.N\test.unit.fe.N.c

$(TARG_TEST_UNIT_fe_null_DEBUG):	\
			$(OBJ_TEST_UNIT_fe_null_DEBUG)\
			$(LIB_FE_NULL_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(LIB_SHWILD_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_UNIT_fe_null_DEBUG)\
		$(LIB_FE_NULL_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_SHWILD_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_UNIT_fe_null_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.null\test.unit.fe.null.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.null\test.unit.fe.null.c

$(TARG_TEST_UNIT_fe_null_RELEASE):	\
			$(OBJ_TEST_UNIT_fe_null_RELEASE)\
			$(LIB_FE_NULL_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(LIB_SHWILD_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_UNIT_fe_null_RELEASE)\
		$(LIB_FE_NULL_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_SHWILD_RELEASE)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_UNIT_fe_null_RELEASE):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.null\test.unit.fe.null.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.null\test.unit.fe.null.c

$(TARG_TEST_UNIT_fe_simple_DEBUG):	\
			$(OBJ_TEST_UNIT_fe_simple_DEBUG)\
			$(LIB_FE_SIMPLE_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(LIB_SHWILD_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_UNIT_fe_simple_DEBUG)\
		$(LIB_FE_SIMPLE_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_SHWILD_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_UNIT_fe_simple_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.simple\test.unit.fe.simple.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_DEBUG) $(CC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.simple\test.unit.fe.simple.c

$(TARG_TEST_UNIT_fe_simple_RELEASE):	\
			$(OBJ_TEST_UNIT_fe_simple_RELEASE)\
			$(LIB_FE_SIMPLE_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(LIB_SHWILD_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_UNIT_fe_simple_RELEASE)\
		$(LIB_FE_SIMPLE_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_SHWILD_RELEASE)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_UNIT_fe_simple_RELEASE):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.simple\test.unit.fe.simple.c $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CC) $(CC_TEST_UNIT_ARGS_RELEASE) $(CC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.simple\test.unit.fe.simple.c

$(TARG_TEST_UNIT_fe_WinReg_DEBUG):	\
			$(OBJ_TEST_UNIT_fe_WinReg_DEBUG)\
			$(LIB_FE_WINREG_DEBUG)\
			$(LIB_XTESTS_DEBUG)\
			$(LIB_SHWILD_DEBUG)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_DEBUG) $@ \
		$(OBJ_TEST_UNIT_fe_WinReg_DEBUG)\
		$(LIB_FE_WINREG_DEBUG)\
		$(LIB_XTESTS_DEBUG)\
		$(LIB_SHWILD_DEBUG)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_DEBUG)

$(OBJ_TEST_UNIT_fe_WinReg_DEBUG):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.WindowsRegistry\test.unit.fe.WindowsRegistry.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_DEBUG) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.WindowsRegistry\test.unit.fe.WindowsRegistry.cpp

$(TARG_TEST_UNIT_fe_WinReg_RELEASE):	\
			$(OBJ_TEST_UNIT_fe_WinReg_RELEASE)\
			$(LIB_FE_WINREG_RELEASE)\
			$(LIB_XTESTS_RELEASE)\
			$(LIB_SHWILD_RELEASE)\
			$(PROJ_MAKEFILE_NAME)
	$(LD) $(LD_ARGS_RELEASE) $@ \
		$(OBJ_TEST_UNIT_fe_WinReg_RELEASE)\
		$(LIB_FE_WINREG_RELEASE)\
		$(LIB_XTESTS_RELEASE)\
		$(LIB_SHWILD_RELEASE)\
		$(LIBS_3PTY_TEST_UNIT)\
		$(TARGET_LIB_RELEASE)

$(OBJ_TEST_UNIT_fe_WinReg_RELEASE):	$(PROJ_TEST_UNIT_DIR)\test.unit.fe.WindowsRegistry\test.unit.fe.WindowsRegistry.cpp $(TEST_CPP_HEADERS) $(PROJ_MAKEFILE_NAME)
	$(CPPC) $(CPPC_TEST_UNIT_ARGS_RELEASE) $(CPPC_INCLUDES) --output-path=$@ $(PROJ_TEST_UNIT_DIR)\test.unit.fe.WindowsRegistry\test.unit.fe.WindowsRegistry.cpp

############################### end of file ################################
