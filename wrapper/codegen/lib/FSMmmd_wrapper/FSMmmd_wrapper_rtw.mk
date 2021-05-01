###########################################################################
## Makefile generated for component 'FSMmmd_wrapper'. 
## 
## Makefile     : FSMmmd_wrapper_rtw.mk
## Generated on : Sat Mar 20 18:59:21 2021
## Final product: ./FSMmmd_wrapper.lib
## Product type : static-library
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile
# COMPILER_COMMAND_FILE   Compiler command listing model reference header paths
# CMD_FILE                Command file
# MODELLIB                Static library target

PRODUCT_NAME              = FSMmmd_wrapper
MAKEFILE                  = FSMmmd_wrapper_rtw.mk
MATLAB_ROOT               = C:/PROGRA~1/MATLAB/R2021a
MATLAB_BIN                = C:/PROGRA~1/MATLAB/R2021a/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/win64
START_DIR                 = D:/MATLAB/FSDAgit/FSDA-MATLAB_Coder/wrapper/codegen/lib/FSMmmd_wrapper
TGT_FCN_LIB               = ISO_C
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 
RELATIVE_PATH_TO_ANCHOR   = .
COMPILER_COMMAND_FILE     = FSMmmd_wrapper_rtw_comp.rsp
CMD_FILE                  = FSMmmd_wrapper_rtw.rsp
C_STANDARD_OPTS           = -fwrapv
CPP_STANDARD_OPTS         = -fwrapv
MODELLIB                  = FSMmmd_wrapper.lib

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          MinGW64 | gmake (64-bit Windows)
# Supported Version(s):    6.x
# ToolchainInfo Version:   2021a
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# C_STANDARD_OPTS
# CPP_STANDARD_OPTS
# MINGW_ROOT
# MINGW_C_STANDARD_OPTS

#-----------
# MACROS
#-----------

WARN_FLAGS            = -Wall -W -Wwrite-strings -Winline -Wstrict-prototypes -Wnested-externs -Wpointer-arith -Wcast-align
WARN_FLAGS_MAX        = $(WARN_FLAGS) -Wcast-qual -Wshadow
CPP_WARN_FLAGS        = -Wall -W -Wwrite-strings -Winline -Wpointer-arith -Wcast-align
CPP_WARN_FLAGS_MAX    = $(CPP_WARN_FLAGS) -Wcast-qual -Wshadow
MW_EXTERNLIB_DIR      = $(MATLAB_ROOT)/extern/lib/win64/mingw64
SHELL                 = %SystemRoot%/system32/cmd.exe

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = -lws2_32

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: GNU C Compiler
CC_PATH = $(MINGW_ROOT)
CC = "$(CC_PATH)/gcc"

# Linker: GNU Linker
LD_PATH = $(MINGW_ROOT)
LD = "$(LD_PATH)/g++"

# C++ Compiler: GNU C++ Compiler
CPP_PATH = $(MINGW_ROOT)
CPP = "$(CPP_PATH)/g++"

# C++ Linker: GNU C++ Linker
CPP_LD_PATH = $(MINGW_ROOT)
CPP_LD = "$(CPP_LD_PATH)/g++"

# Archiver: GNU Archiver
AR_PATH = $(MINGW_ROOT)
AR = "$(AR_PATH)/ar"

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = "$(MEX_PATH)/mex"

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: GMAKE Utility
MAKE_PATH = %MATLAB%/bin/win64
MAKE = "$(MAKE_PATH)/gmake"


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -g
C_OUTPUT_FLAG       = -o
LDDEBUG             = -g
OUTPUT_FLAG         = -o
CPPDEBUG            = -g
CPP_OUTPUT_FLAG     = -o
CPPLDDEBUG          = -g
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
MEX_DEBUG           = -g
RM                  = @del
ECHO                = @echo
MV                  = @move
RUN                 =

#--------------------------------
# "Debug" Build Configuration
#--------------------------------

ARFLAGS              = ruvs \
                       $(ARDEBUG)
CFLAGS               = -c $(MINGW_C_STANDARD_OPTS) -m64 \
                       -O0 \
                       $(CDEBUG)
CPPFLAGS             = -c $(CPP_STANDARD_OPTS) -m64 \
                       -O0 \
                       $(CPPDEBUG)
CPP_LDFLAGS          =  -static -m64 \
                       $(CPPLDDEBUG)
CPP_SHAREDLIB_LDFLAGS  = -shared -Wl,--no-undefined \
                         $(CPPLDDEBUG) \
                         -Wl,--out-implib,$(basename $(PRODUCT)).lib
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              =  -static -m64 \
                       $(LDDEBUG)
MEX_CPPFLAGS         =
MEX_CPPLDFLAGS       =
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = -shared -Wl,--no-undefined \
                       $(LDDEBUG) \
                       -Wl,--out-implib,$(basename $(PRODUCT)).lib



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = ./FSMmmd_wrapper.lib
PRODUCT_TYPE = "static-library"
BUILD_TYPE = "Static Library"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = 

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_ = -D__USE_MINGW_ANSI_STDIO=1
DEFINES_CUSTOM = 
DEFINES_STANDARD = -DMODEL=FSMmmd_wrapper

DEFINES = $(DEFINES_) $(DEFINES_CUSTOM) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)/FSMmmd_wrapper_data.c $(START_DIR)/rt_nonfinite.c $(START_DIR)/rtGetNaN.c $(START_DIR)/rtGetInf.c $(START_DIR)/FSMmmd_wrapper_initialize.c $(START_DIR)/FSMmmd_wrapper_terminate.c $(START_DIR)/FSMmmd_wrapper.c $(START_DIR)/int2str.c $(START_DIR)/rank.c $(START_DIR)/svd.c $(START_DIR)/xnrm2.c $(START_DIR)/ifWhileCond.c $(START_DIR)/randsample.c $(START_DIR)/rand.c $(START_DIR)/cov.c $(START_DIR)/colon.c $(START_DIR)/mod.c $(START_DIR)/minOrMax.c $(START_DIR)/cat.c $(START_DIR)/sum.c $(START_DIR)/bsxfun.c $(START_DIR)/mtimes.c $(START_DIR)/inv.c $(START_DIR)/qr.c $(START_DIR)/power.c $(START_DIR)/quickselectFS.c $(START_DIR)/find.c $(START_DIR)/eml_rand_mt19937ar_stateful.c $(START_DIR)/chkinputM.c $(START_DIR)/xaxpy.c $(START_DIR)/xrotg.c $(START_DIR)/eml_rand_mt19937ar.c $(START_DIR)/xzgetrf.c $(START_DIR)/xzlarfg.c $(START_DIR)/xzlarf.c $(START_DIR)/xgerc.c $(START_DIR)/mrdivide_helper.c $(START_DIR)/FSMmmd_wrapper_emxutil.c $(START_DIR)/FSMmmd_wrapper_emxAPI.c

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = FSMmmd_wrapper_data.obj rt_nonfinite.obj rtGetNaN.obj rtGetInf.obj FSMmmd_wrapper_initialize.obj FSMmmd_wrapper_terminate.obj FSMmmd_wrapper.obj int2str.obj rank.obj svd.obj xnrm2.obj ifWhileCond.obj randsample.obj rand.obj cov.obj colon.obj mod.obj minOrMax.obj cat.obj sum.obj bsxfun.obj mtimes.obj inv.obj qr.obj power.obj quickselectFS.obj find.obj eml_rand_mt19937ar_stateful.obj chkinputM.obj xaxpy.obj xrotg.obj eml_rand_mt19937ar.obj xzgetrf.obj xzlarfg.obj xzlarf.obj xgerc.obj mrdivide_helper.obj FSMmmd_wrapper_emxutil.obj FSMmmd_wrapper_emxAPI.obj

ALL_OBJS = $(OBJS)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = 

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_BASIC = $(DEFINES) $(INCLUDES) @$(COMPILER_COMMAND_FILE)

CFLAGS += $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES) @$(COMPILER_COMMAND_FILE)

CPPFLAGS += $(CPPFLAGS_BASIC)

#---------------------
# MEX C++ Compiler
#---------------------

MEX_CPP_Compiler_BASIC =  @$(COMPILER_COMMAND_FILE)

MEX_CPPFLAGS += $(MEX_CPP_Compiler_BASIC)

#-----------------
# MEX Compiler
#-----------------

MEX_Compiler_BASIC =  @$(COMPILER_COMMAND_FILE)

MEX_CFLAGS += $(MEX_Compiler_BASIC)

###########################################################################
## INLINED COMMANDS
###########################################################################


MINGW_C_STANDARD_OPTS = $(C_STANDARD_OPTS)


###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build clean info prebuild download execute


all : build
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


prebuild : 


download : $(PRODUCT)


execute : download


###########################################################################
## FINAL TARGET
###########################################################################

#---------------------------------
# Create a static library         
#---------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS)
	@echo "### Creating static library "$(PRODUCT)" ..."
	$(AR) $(ARFLAGS)  $(PRODUCT) @$(CMD_FILE)
	@echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.obj : %.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : %.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : D:/MATLAB/FSDAgit/FSDA-MATLAB_Coder/wrapper/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : D:/MATLAB/FSDAgit/FSDA-MATLAB_Coder/wrapper/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


FSMmmd_wrapper_data.obj : $(START_DIR)/FSMmmd_wrapper_data.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_nonfinite.obj : $(START_DIR)/rt_nonfinite.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rtGetNaN.obj : $(START_DIR)/rtGetNaN.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rtGetInf.obj : $(START_DIR)/rtGetInf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FSMmmd_wrapper_initialize.obj : $(START_DIR)/FSMmmd_wrapper_initialize.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FSMmmd_wrapper_terminate.obj : $(START_DIR)/FSMmmd_wrapper_terminate.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FSMmmd_wrapper.obj : $(START_DIR)/FSMmmd_wrapper.c
	$(CC) $(CFLAGS) -o "$@" "$<"


int2str.obj : $(START_DIR)/int2str.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rank.obj : $(START_DIR)/rank.c
	$(CC) $(CFLAGS) -o "$@" "$<"


svd.obj : $(START_DIR)/svd.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xnrm2.obj : $(START_DIR)/xnrm2.c
	$(CC) $(CFLAGS) -o "$@" "$<"


ifWhileCond.obj : $(START_DIR)/ifWhileCond.c
	$(CC) $(CFLAGS) -o "$@" "$<"


randsample.obj : $(START_DIR)/randsample.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rand.obj : $(START_DIR)/rand.c
	$(CC) $(CFLAGS) -o "$@" "$<"


cov.obj : $(START_DIR)/cov.c
	$(CC) $(CFLAGS) -o "$@" "$<"


colon.obj : $(START_DIR)/colon.c
	$(CC) $(CFLAGS) -o "$@" "$<"


mod.obj : $(START_DIR)/mod.c
	$(CC) $(CFLAGS) -o "$@" "$<"


minOrMax.obj : $(START_DIR)/minOrMax.c
	$(CC) $(CFLAGS) -o "$@" "$<"


cat.obj : $(START_DIR)/cat.c
	$(CC) $(CFLAGS) -o "$@" "$<"


sum.obj : $(START_DIR)/sum.c
	$(CC) $(CFLAGS) -o "$@" "$<"


bsxfun.obj : $(START_DIR)/bsxfun.c
	$(CC) $(CFLAGS) -o "$@" "$<"


mtimes.obj : $(START_DIR)/mtimes.c
	$(CC) $(CFLAGS) -o "$@" "$<"


inv.obj : $(START_DIR)/inv.c
	$(CC) $(CFLAGS) -o "$@" "$<"


qr.obj : $(START_DIR)/qr.c
	$(CC) $(CFLAGS) -o "$@" "$<"


power.obj : $(START_DIR)/power.c
	$(CC) $(CFLAGS) -o "$@" "$<"


quickselectFS.obj : $(START_DIR)/quickselectFS.c
	$(CC) $(CFLAGS) -o "$@" "$<"


find.obj : $(START_DIR)/find.c
	$(CC) $(CFLAGS) -o "$@" "$<"


eml_rand_mt19937ar_stateful.obj : $(START_DIR)/eml_rand_mt19937ar_stateful.c
	$(CC) $(CFLAGS) -o "$@" "$<"


chkinputM.obj : $(START_DIR)/chkinputM.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xaxpy.obj : $(START_DIR)/xaxpy.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xrotg.obj : $(START_DIR)/xrotg.c
	$(CC) $(CFLAGS) -o "$@" "$<"


eml_rand_mt19937ar.obj : $(START_DIR)/eml_rand_mt19937ar.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xzgetrf.obj : $(START_DIR)/xzgetrf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xzlarfg.obj : $(START_DIR)/xzlarfg.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xzlarf.obj : $(START_DIR)/xzlarf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xgerc.obj : $(START_DIR)/xgerc.c
	$(CC) $(CFLAGS) -o "$@" "$<"


mrdivide_helper.obj : $(START_DIR)/mrdivide_helper.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FSMmmd_wrapper_emxutil.obj : $(START_DIR)/FSMmmd_wrapper_emxutil.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FSMmmd_wrapper_emxAPI.obj : $(START_DIR)/FSMmmd_wrapper_emxAPI.c
	$(CC) $(CFLAGS) -o "$@" "$<"


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw $(COMPILER_COMMAND_FILE) $(MAKEFILE)


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo "### PRODUCT = $(PRODUCT)"
	@echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@echo "### BUILD_TYPE = $(BUILD_TYPE)"
	@echo "### INCLUDES = $(INCLUDES)"
	@echo "### DEFINES = $(DEFINES)"
	@echo "### ALL_SRCS = $(ALL_SRCS)"
	@echo "### ALL_OBJS = $(ALL_OBJS)"
	@echo "### LIBS = $(LIBS)"
	@echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	@echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@echo "### CFLAGS = $(CFLAGS)"
	@echo "### LDFLAGS = $(LDFLAGS)"
	@echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "### CPPFLAGS = $(CPPFLAGS)"
	@echo "### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@echo "### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@echo "### ARFLAGS = $(ARFLAGS)"
	@echo "### MEX_CFLAGS = $(MEX_CFLAGS)"
	@echo "### MEX_CPPFLAGS = $(MEX_CPPFLAGS)"
	@echo "### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@echo "### MEX_CPPLDFLAGS = $(MEX_CPPLDFLAGS)"
	@echo "### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@echo "### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	$(RM) $(subst /,\,$(PRODUCT))
	$(RM) $(subst /,\,$(ALL_OBJS))
	$(ECHO) "### Deleted all derived files."


