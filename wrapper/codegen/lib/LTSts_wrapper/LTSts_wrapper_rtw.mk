###########################################################################
## Makefile generated for component 'LTSts_wrapper'. 
## 
## Makefile     : LTSts_wrapper_rtw.mk
## Generated on : Sun Mar 28 21:52:57 2021
## Final product: ./LTSts_wrapper.lib
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

PRODUCT_NAME              = LTSts_wrapper
MAKEFILE                  = LTSts_wrapper_rtw.mk
MATLAB_ROOT               = C:/PROGRA~1/MATLAB/R2021a
MATLAB_BIN                = C:/PROGRA~1/MATLAB/R2021a/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/win64
START_DIR                 = D:/MATLAB/FSDAgit/FSDA-MATLAB_Coder/wrapper/codegen/lib/LTSts_wrapper
TGT_FCN_LIB               = ISO_C
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 
RELATIVE_PATH_TO_ANCHOR   = .
COMPILER_COMMAND_FILE     = LTSts_wrapper_rtw_comp.rsp
CMD_FILE                  = LTSts_wrapper_rtw.rsp
C_STANDARD_OPTS           = -fwrapv
CPP_STANDARD_OPTS         = -fwrapv
MODELLIB                  = LTSts_wrapper.lib

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

PRODUCT = ./LTSts_wrapper.lib
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
DEFINES_STANDARD = -DMODEL=LTSts_wrapper

DEFINES = $(DEFINES_) $(DEFINES_CUSTOM) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)/LTSts_wrapper_data.c $(START_DIR)/rt_nonfinite.c $(START_DIR)/rtGetNaN.c $(START_DIR)/rtGetInf.c $(START_DIR)/LTSts_wrapper_initialize.c $(START_DIR)/LTSts_wrapper_terminate.c $(START_DIR)/LTSts_wrapper.c $(START_DIR)/eml_setop.c $(START_DIR)/sprintf.c $(START_DIR)/str2double.c $(START_DIR)/colon.c $(START_DIR)/bc.c $(START_DIR)/int2str.c $(START_DIR)/ifWhileCond.c $(START_DIR)/norminv.c $(START_DIR)/eml_erfcore.c $(START_DIR)/subsets.c $(START_DIR)/combsFS.c $(START_DIR)/randperm.c $(START_DIR)/rand.c $(START_DIR)/find.c $(START_DIR)/randsample.c $(START_DIR)/xnrm2.c $(START_DIR)/any.c $(START_DIR)/mtimes.c $(START_DIR)/bsxfun.c $(START_DIR)/LTSts.c $(START_DIR)/mldivide.c $(START_DIR)/blockedSummation.c $(START_DIR)/minOrMax.c $(START_DIR)/HUrho.c $(START_DIR)/zscore.c $(START_DIR)/vvarstd.c $(START_DIR)/rank.c $(START_DIR)/svd.c $(START_DIR)/zscoreFS.c $(START_DIR)/median.c $(START_DIR)/quickselect.c $(START_DIR)/pdist.c $(START_DIR)/scanfornan.c $(START_DIR)/prctile.c $(START_DIR)/sortIdx.c $(START_DIR)/RobRegrSize.c $(START_DIR)/GYfilt.c $(START_DIR)/mad.c $(START_DIR)/nanmedian.c $(START_DIR)/gammainc.c $(START_DIR)/inv.c $(START_DIR)/diag.c $(START_DIR)/tcdf.c $(START_DIR)/betainc.c $(START_DIR)/eml_betainc.c $(START_DIR)/string1.c $(START_DIR)/array2table.c $(START_DIR)/fcdf.c $(START_DIR)/FSRinvmdr.c $(START_DIR)/eml_rand_mt19937ar_stateful.c $(START_DIR)/str2double1.c $(START_DIR)/eml_rand_mt19937ar.c $(START_DIR)/xzgetrf.c $(START_DIR)/xgeqp3.c $(START_DIR)/sort.c $(START_DIR)/xaxpy.c $(START_DIR)/xrotg.c $(START_DIR)/gammaln.c $(START_DIR)/LTSts_wrapper_emxutil.c $(START_DIR)/LTSts_wrapper_emxAPI.c $(START_DIR)/LTSts_wrapper_rtwutil.c

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = LTSts_wrapper_data.obj rt_nonfinite.obj rtGetNaN.obj rtGetInf.obj LTSts_wrapper_initialize.obj LTSts_wrapper_terminate.obj LTSts_wrapper.obj eml_setop.obj sprintf.obj str2double.obj colon.obj bc.obj int2str.obj ifWhileCond.obj norminv.obj eml_erfcore.obj subsets.obj combsFS.obj randperm.obj rand.obj find.obj randsample.obj xnrm2.obj any.obj mtimes.obj bsxfun.obj LTSts.obj mldivide.obj blockedSummation.obj minOrMax.obj HUrho.obj zscore.obj vvarstd.obj rank.obj svd.obj zscoreFS.obj median.obj quickselect.obj pdist.obj scanfornan.obj prctile.obj sortIdx.obj RobRegrSize.obj GYfilt.obj mad.obj nanmedian.obj gammainc.obj inv.obj diag.obj tcdf.obj betainc.obj eml_betainc.obj string1.obj array2table.obj fcdf.obj FSRinvmdr.obj eml_rand_mt19937ar_stateful.obj str2double1.obj eml_rand_mt19937ar.obj xzgetrf.obj xgeqp3.obj sort.obj xaxpy.obj xrotg.obj gammaln.obj LTSts_wrapper_emxutil.obj LTSts_wrapper_emxAPI.obj LTSts_wrapper_rtwutil.obj

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

CFLAGS_OPTS = -fopenmp
CFLAGS_BASIC = $(DEFINES) $(INCLUDES) @$(COMPILER_COMMAND_FILE)

CFLAGS += $(CFLAGS_OPTS) $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_OPTS = -fopenmp
CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES) @$(COMPILER_COMMAND_FILE)

CPPFLAGS += $(CPPFLAGS_OPTS) $(CPPFLAGS_BASIC)

#---------------
# C++ Linker
#---------------

CPP_LDFLAGS_ = -fopenmp

CPP_LDFLAGS += $(CPP_LDFLAGS_)

#------------------------------
# C++ Shared Library Linker
#------------------------------

CPP_SHAREDLIB_LDFLAGS_ = -fopenmp

CPP_SHAREDLIB_LDFLAGS += $(CPP_SHAREDLIB_LDFLAGS_)

#-----------
# Linker
#-----------

LDFLAGS_ = -fopenmp

LDFLAGS += $(LDFLAGS_)

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

#--------------------------
# Shared Library Linker
#--------------------------

SHAREDLIB_LDFLAGS_ = -fopenmp

SHAREDLIB_LDFLAGS += $(SHAREDLIB_LDFLAGS_)

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


LTSts_wrapper_data.obj : $(START_DIR)/LTSts_wrapper_data.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_nonfinite.obj : $(START_DIR)/rt_nonfinite.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rtGetNaN.obj : $(START_DIR)/rtGetNaN.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rtGetInf.obj : $(START_DIR)/rtGetInf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


LTSts_wrapper_initialize.obj : $(START_DIR)/LTSts_wrapper_initialize.c
	$(CC) $(CFLAGS) -o "$@" "$<"


LTSts_wrapper_terminate.obj : $(START_DIR)/LTSts_wrapper_terminate.c
	$(CC) $(CFLAGS) -o "$@" "$<"


LTSts_wrapper.obj : $(START_DIR)/LTSts_wrapper.c
	$(CC) $(CFLAGS) -o "$@" "$<"


eml_setop.obj : $(START_DIR)/eml_setop.c
	$(CC) $(CFLAGS) -o "$@" "$<"


sprintf.obj : $(START_DIR)/sprintf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


str2double.obj : $(START_DIR)/str2double.c
	$(CC) $(CFLAGS) -o "$@" "$<"


colon.obj : $(START_DIR)/colon.c
	$(CC) $(CFLAGS) -o "$@" "$<"


bc.obj : $(START_DIR)/bc.c
	$(CC) $(CFLAGS) -o "$@" "$<"


int2str.obj : $(START_DIR)/int2str.c
	$(CC) $(CFLAGS) -o "$@" "$<"


ifWhileCond.obj : $(START_DIR)/ifWhileCond.c
	$(CC) $(CFLAGS) -o "$@" "$<"


norminv.obj : $(START_DIR)/norminv.c
	$(CC) $(CFLAGS) -o "$@" "$<"


eml_erfcore.obj : $(START_DIR)/eml_erfcore.c
	$(CC) $(CFLAGS) -o "$@" "$<"


subsets.obj : $(START_DIR)/subsets.c
	$(CC) $(CFLAGS) -o "$@" "$<"


combsFS.obj : $(START_DIR)/combsFS.c
	$(CC) $(CFLAGS) -o "$@" "$<"


randperm.obj : $(START_DIR)/randperm.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rand.obj : $(START_DIR)/rand.c
	$(CC) $(CFLAGS) -o "$@" "$<"


find.obj : $(START_DIR)/find.c
	$(CC) $(CFLAGS) -o "$@" "$<"


randsample.obj : $(START_DIR)/randsample.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xnrm2.obj : $(START_DIR)/xnrm2.c
	$(CC) $(CFLAGS) -o "$@" "$<"


any.obj : $(START_DIR)/any.c
	$(CC) $(CFLAGS) -o "$@" "$<"


mtimes.obj : $(START_DIR)/mtimes.c
	$(CC) $(CFLAGS) -o "$@" "$<"


bsxfun.obj : $(START_DIR)/bsxfun.c
	$(CC) $(CFLAGS) -o "$@" "$<"


LTSts.obj : $(START_DIR)/LTSts.c
	$(CC) $(CFLAGS) -o "$@" "$<"


mldivide.obj : $(START_DIR)/mldivide.c
	$(CC) $(CFLAGS) -o "$@" "$<"


blockedSummation.obj : $(START_DIR)/blockedSummation.c
	$(CC) $(CFLAGS) -o "$@" "$<"


minOrMax.obj : $(START_DIR)/minOrMax.c
	$(CC) $(CFLAGS) -o "$@" "$<"


HUrho.obj : $(START_DIR)/HUrho.c
	$(CC) $(CFLAGS) -o "$@" "$<"


zscore.obj : $(START_DIR)/zscore.c
	$(CC) $(CFLAGS) -o "$@" "$<"


vvarstd.obj : $(START_DIR)/vvarstd.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rank.obj : $(START_DIR)/rank.c
	$(CC) $(CFLAGS) -o "$@" "$<"


svd.obj : $(START_DIR)/svd.c
	$(CC) $(CFLAGS) -o "$@" "$<"


zscoreFS.obj : $(START_DIR)/zscoreFS.c
	$(CC) $(CFLAGS) -o "$@" "$<"


median.obj : $(START_DIR)/median.c
	$(CC) $(CFLAGS) -o "$@" "$<"


quickselect.obj : $(START_DIR)/quickselect.c
	$(CC) $(CFLAGS) -o "$@" "$<"


pdist.obj : $(START_DIR)/pdist.c
	$(CC) $(CFLAGS) -o "$@" "$<"


scanfornan.obj : $(START_DIR)/scanfornan.c
	$(CC) $(CFLAGS) -o "$@" "$<"


prctile.obj : $(START_DIR)/prctile.c
	$(CC) $(CFLAGS) -o "$@" "$<"


sortIdx.obj : $(START_DIR)/sortIdx.c
	$(CC) $(CFLAGS) -o "$@" "$<"


RobRegrSize.obj : $(START_DIR)/RobRegrSize.c
	$(CC) $(CFLAGS) -o "$@" "$<"


GYfilt.obj : $(START_DIR)/GYfilt.c
	$(CC) $(CFLAGS) -o "$@" "$<"


mad.obj : $(START_DIR)/mad.c
	$(CC) $(CFLAGS) -o "$@" "$<"


nanmedian.obj : $(START_DIR)/nanmedian.c
	$(CC) $(CFLAGS) -o "$@" "$<"


gammainc.obj : $(START_DIR)/gammainc.c
	$(CC) $(CFLAGS) -o "$@" "$<"


inv.obj : $(START_DIR)/inv.c
	$(CC) $(CFLAGS) -o "$@" "$<"


diag.obj : $(START_DIR)/diag.c
	$(CC) $(CFLAGS) -o "$@" "$<"


tcdf.obj : $(START_DIR)/tcdf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


betainc.obj : $(START_DIR)/betainc.c
	$(CC) $(CFLAGS) -o "$@" "$<"


eml_betainc.obj : $(START_DIR)/eml_betainc.c
	$(CC) $(CFLAGS) -o "$@" "$<"


string1.obj : $(START_DIR)/string1.c
	$(CC) $(CFLAGS) -o "$@" "$<"


array2table.obj : $(START_DIR)/array2table.c
	$(CC) $(CFLAGS) -o "$@" "$<"


fcdf.obj : $(START_DIR)/fcdf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FSRinvmdr.obj : $(START_DIR)/FSRinvmdr.c
	$(CC) $(CFLAGS) -o "$@" "$<"


eml_rand_mt19937ar_stateful.obj : $(START_DIR)/eml_rand_mt19937ar_stateful.c
	$(CC) $(CFLAGS) -o "$@" "$<"


str2double1.obj : $(START_DIR)/str2double1.c
	$(CC) $(CFLAGS) -o "$@" "$<"


eml_rand_mt19937ar.obj : $(START_DIR)/eml_rand_mt19937ar.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xzgetrf.obj : $(START_DIR)/xzgetrf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xgeqp3.obj : $(START_DIR)/xgeqp3.c
	$(CC) $(CFLAGS) -o "$@" "$<"


sort.obj : $(START_DIR)/sort.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xaxpy.obj : $(START_DIR)/xaxpy.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xrotg.obj : $(START_DIR)/xrotg.c
	$(CC) $(CFLAGS) -o "$@" "$<"


gammaln.obj : $(START_DIR)/gammaln.c
	$(CC) $(CFLAGS) -o "$@" "$<"


LTSts_wrapper_emxutil.obj : $(START_DIR)/LTSts_wrapper_emxutil.c
	$(CC) $(CFLAGS) -o "$@" "$<"


LTSts_wrapper_emxAPI.obj : $(START_DIR)/LTSts_wrapper_emxAPI.c
	$(CC) $(CFLAGS) -o "$@" "$<"


LTSts_wrapper_rtwutil.obj : $(START_DIR)/LTSts_wrapper_rtwutil.c
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

