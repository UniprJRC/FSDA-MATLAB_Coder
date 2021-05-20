###########################################################################
## Makefile generated for component 'fsdaC'. 
## 
## Makefile     : fsdaC_rtw.mk
## Generated on : Thu May 20 16:57:53 2021
## Final product: ./fsdaC.lib
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

PRODUCT_NAME              = fsdaC
MAKEFILE                  = fsdaC_rtw.mk
MATLAB_ROOT               = C:/PROGRA~1/MATLAB/R2021a
MATLAB_BIN                = C:/PROGRA~1/MATLAB/R2021a/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/win64
START_DIR                 = D:/MATLAB/FSDAgit/FSDA-MATLAB_Coder/wrapper/codegen/lib/fsdaC
TGT_FCN_LIB               = ISO_C
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 
RELATIVE_PATH_TO_ANCHOR   = .
COMPILER_COMMAND_FILE     = fsdaC_rtw_comp.rsp
CMD_FILE                  = fsdaC_rtw.rsp
C_STANDARD_OPTS           = -fwrapv
CPP_STANDARD_OPTS         = -fwrapv
MODELLIB                  = fsdaC.lib

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

PRODUCT = ./fsdaC.lib
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
DEFINES_STANDARD = -DMODEL=fsdaC

DEFINES = $(DEFINES_) $(DEFINES_CUSTOM) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)/coder_posix_time.c $(START_DIR)/fsdaC_data.c $(START_DIR)/rt_nonfinite.c $(START_DIR)/rtGetNaN.c $(START_DIR)/rtGetInf.c $(START_DIR)/fsdaC_initialize.c $(START_DIR)/fsdaC_terminate.c $(START_DIR)/FSM_wrapper.c $(START_DIR)/mtimes.c $(START_DIR)/minOrMax.c $(START_DIR)/find.c $(START_DIR)/int2str.c $(START_DIR)/rank.c $(START_DIR)/svd.c $(START_DIR)/xnrm2.c $(START_DIR)/unibiv.c $(START_DIR)/median.c $(START_DIR)/quickselect.c $(START_DIR)/mad.c $(START_DIR)/nanmedian.c $(START_DIR)/sortIdx.c $(START_DIR)/iqr.c $(START_DIR)/quantile.c $(START_DIR)/blockedSummation.c $(START_DIR)/vvarstd.c $(START_DIR)/gammaincinv.c $(START_DIR)/eml_gammainc.c $(START_DIR)/gammainc.c $(START_DIR)/betainc.c $(START_DIR)/eml_betainc.c $(START_DIR)/betaincinv.c $(START_DIR)/eig.c $(START_DIR)/eigStandard.c $(START_DIR)/xzhgeqz.c $(START_DIR)/strcmp.c $(START_DIR)/sortrowsLE.c $(START_DIR)/FSMmmd.c $(START_DIR)/ifWhileCond.c $(START_DIR)/randsample.c $(START_DIR)/randperm.c $(START_DIR)/rand.c $(START_DIR)/cov.c $(START_DIR)/colon.c $(START_DIR)/mod.c $(START_DIR)/cat.c $(START_DIR)/combineVectorElements.c $(START_DIR)/bsxfun.c $(START_DIR)/sum.c $(START_DIR)/inv.c $(START_DIR)/qr.c $(START_DIR)/mrdivide_helper.c $(START_DIR)/qrsolve.c $(START_DIR)/power.c $(START_DIR)/quickselectFS.c $(START_DIR)/FSMbonfbound.c $(START_DIR)/repmat.c $(START_DIR)/finv.c $(START_DIR)/chi2inv.c $(START_DIR)/FSMenvmmd.c $(START_DIR)/chi2cdf.c $(START_DIR)/FSMbsb.c $(START_DIR)/eml_setop.c $(START_DIR)/FSMbsb_wrapper.c $(START_DIR)/FSMmmd_wrapper.c $(START_DIR)/FSR_wrapper.c $(START_DIR)/bc.c $(START_DIR)/LXS.c $(START_DIR)/subsets.c $(START_DIR)/combsFS.c $(START_DIR)/isequal.c $(START_DIR)/pascal.c $(START_DIR)/lexunrank.c $(START_DIR)/FSM.c $(START_DIR)/tic.c $(START_DIR)/mldivide.c $(START_DIR)/toc.c $(START_DIR)/erfcinv.c $(START_DIR)/eml_erfcore.c $(START_DIR)/tinv.c $(START_DIR)/FSRmdr.c $(START_DIR)/sprintf.c $(START_DIR)/repelem.c $(START_DIR)/any.c $(START_DIR)/FSRcore.c $(START_DIR)/FSRbonfbound.c $(START_DIR)/FSRenvmdr.c $(START_DIR)/print_processing.c $(START_DIR)/FSRbsb.c $(START_DIR)/unique.c $(START_DIR)/FSRbsb_wrapper.c $(START_DIR)/FSRfan_wrapper.c $(START_DIR)/normYJ.c $(START_DIR)/Score.c $(START_DIR)/diag.c $(START_DIR)/ScoreYJ.c $(START_DIR)/ScoreYJall.c $(START_DIR)/FSRmdr_wrapper.c $(START_DIR)/LTSts_wrapper.c $(START_DIR)/str2double.c $(START_DIR)/LTSts.c $(START_DIR)/HUrho.c $(START_DIR)/zscore.c $(START_DIR)/zscoreFS.c $(START_DIR)/prctile.c $(START_DIR)/RobRegrSize.c $(START_DIR)/GYfilt.c $(START_DIR)/lsqcurvefit.c $(START_DIR)/factoryConstruct.c $(START_DIR)/checkStoppingCriteria.c $(START_DIR)/tcdf.c $(START_DIR)/string1.c $(START_DIR)/array2table.c $(START_DIR)/fcdf.c $(START_DIR)/FSRinvmdr.c $(START_DIR)/LXS_wrapper.c $(START_DIR)/LXS_wrapper1.c $(START_DIR)/addt_wrapper.c $(START_DIR)/eml_rand_mt19937ar_stateful.c $(START_DIR)/CoderTimeAPI.c $(START_DIR)/chkinputM.c $(START_DIR)/nullAssignment.c $(START_DIR)/xaxpy.c $(START_DIR)/xrotg.c $(START_DIR)/sort.c $(START_DIR)/sign.c $(START_DIR)/gammaln.c $(START_DIR)/sqrt.c $(START_DIR)/sortrows.c $(START_DIR)/eml_rand_mt19937ar.c $(START_DIR)/xzgetrf.c $(START_DIR)/xzgeqp3.c $(START_DIR)/xzlarfg.c $(START_DIR)/xzlarf.c $(START_DIR)/xgerc.c $(START_DIR)/xgeqp3.c $(START_DIR)/chkinputR.c $(START_DIR)/xunormqr.c $(START_DIR)/str2double1.c $(START_DIR)/hasFiniteBounds.c $(START_DIR)/jacobianFiniteDifference.c $(START_DIR)/computeFiniteDifferences.c $(START_DIR)/finDiffEvalAndChkErr.c $(START_DIR)/xgemv.c $(START_DIR)/projectBox.c $(START_DIR)/driver.c $(START_DIR)/linearLeastSquares.c $(START_DIR)/fsdaC_emxutil.c $(START_DIR)/fsdaC_emxAPI.c $(START_DIR)/fsdaC_rtwutil.c

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = coder_posix_time.obj fsdaC_data.obj rt_nonfinite.obj rtGetNaN.obj rtGetInf.obj fsdaC_initialize.obj fsdaC_terminate.obj FSM_wrapper.obj mtimes.obj minOrMax.obj find.obj int2str.obj rank.obj svd.obj xnrm2.obj unibiv.obj median.obj quickselect.obj mad.obj nanmedian.obj sortIdx.obj iqr.obj quantile.obj blockedSummation.obj vvarstd.obj gammaincinv.obj eml_gammainc.obj gammainc.obj betainc.obj eml_betainc.obj betaincinv.obj eig.obj eigStandard.obj xzhgeqz.obj strcmp.obj sortrowsLE.obj FSMmmd.obj ifWhileCond.obj randsample.obj randperm.obj rand.obj cov.obj colon.obj mod.obj cat.obj combineVectorElements.obj bsxfun.obj sum.obj inv.obj qr.obj mrdivide_helper.obj qrsolve.obj power.obj quickselectFS.obj FSMbonfbound.obj repmat.obj finv.obj chi2inv.obj FSMenvmmd.obj chi2cdf.obj FSMbsb.obj eml_setop.obj FSMbsb_wrapper.obj FSMmmd_wrapper.obj FSR_wrapper.obj bc.obj LXS.obj subsets.obj combsFS.obj isequal.obj pascal.obj lexunrank.obj FSM.obj tic.obj mldivide.obj toc.obj erfcinv.obj eml_erfcore.obj tinv.obj FSRmdr.obj sprintf.obj repelem.obj any.obj FSRcore.obj FSRbonfbound.obj FSRenvmdr.obj print_processing.obj FSRbsb.obj unique.obj FSRbsb_wrapper.obj FSRfan_wrapper.obj normYJ.obj Score.obj diag.obj ScoreYJ.obj ScoreYJall.obj FSRmdr_wrapper.obj LTSts_wrapper.obj str2double.obj LTSts.obj HUrho.obj zscore.obj zscoreFS.obj prctile.obj RobRegrSize.obj GYfilt.obj lsqcurvefit.obj factoryConstruct.obj checkStoppingCriteria.obj tcdf.obj string1.obj array2table.obj fcdf.obj FSRinvmdr.obj LXS_wrapper.obj LXS_wrapper1.obj addt_wrapper.obj eml_rand_mt19937ar_stateful.obj CoderTimeAPI.obj chkinputM.obj nullAssignment.obj xaxpy.obj xrotg.obj sort.obj sign.obj gammaln.obj sqrt.obj sortrows.obj eml_rand_mt19937ar.obj xzgetrf.obj xzgeqp3.obj xzlarfg.obj xzlarf.obj xgerc.obj xgeqp3.obj chkinputR.obj xunormqr.obj str2double1.obj hasFiniteBounds.obj jacobianFiniteDifference.obj computeFiniteDifferences.obj finDiffEvalAndChkErr.obj xgemv.obj projectBox.obj driver.obj linearLeastSquares.obj fsdaC_emxutil.obj fsdaC_emxAPI.obj fsdaC_rtwutil.obj

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


coder_posix_time.obj : $(START_DIR)/coder_posix_time.c
	$(CC) $(CFLAGS) -o "$@" "$<"


fsdaC_data.obj : $(START_DIR)/fsdaC_data.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_nonfinite.obj : $(START_DIR)/rt_nonfinite.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rtGetNaN.obj : $(START_DIR)/rtGetNaN.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rtGetInf.obj : $(START_DIR)/rtGetInf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


fsdaC_initialize.obj : $(START_DIR)/fsdaC_initialize.c
	$(CC) $(CFLAGS) -o "$@" "$<"


fsdaC_terminate.obj : $(START_DIR)/fsdaC_terminate.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FSM_wrapper.obj : $(START_DIR)/FSM_wrapper.c
	$(CC) $(CFLAGS) -o "$@" "$<"


mtimes.obj : $(START_DIR)/mtimes.c
	$(CC) $(CFLAGS) -o "$@" "$<"


minOrMax.obj : $(START_DIR)/minOrMax.c
	$(CC) $(CFLAGS) -o "$@" "$<"


find.obj : $(START_DIR)/find.c
	$(CC) $(CFLAGS) -o "$@" "$<"


int2str.obj : $(START_DIR)/int2str.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rank.obj : $(START_DIR)/rank.c
	$(CC) $(CFLAGS) -o "$@" "$<"


svd.obj : $(START_DIR)/svd.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xnrm2.obj : $(START_DIR)/xnrm2.c
	$(CC) $(CFLAGS) -o "$@" "$<"


unibiv.obj : $(START_DIR)/unibiv.c
	$(CC) $(CFLAGS) -o "$@" "$<"


median.obj : $(START_DIR)/median.c
	$(CC) $(CFLAGS) -o "$@" "$<"


quickselect.obj : $(START_DIR)/quickselect.c
	$(CC) $(CFLAGS) -o "$@" "$<"


mad.obj : $(START_DIR)/mad.c
	$(CC) $(CFLAGS) -o "$@" "$<"


nanmedian.obj : $(START_DIR)/nanmedian.c
	$(CC) $(CFLAGS) -o "$@" "$<"


sortIdx.obj : $(START_DIR)/sortIdx.c
	$(CC) $(CFLAGS) -o "$@" "$<"


iqr.obj : $(START_DIR)/iqr.c
	$(CC) $(CFLAGS) -o "$@" "$<"


quantile.obj : $(START_DIR)/quantile.c
	$(CC) $(CFLAGS) -o "$@" "$<"


blockedSummation.obj : $(START_DIR)/blockedSummation.c
	$(CC) $(CFLAGS) -o "$@" "$<"


vvarstd.obj : $(START_DIR)/vvarstd.c
	$(CC) $(CFLAGS) -o "$@" "$<"


gammaincinv.obj : $(START_DIR)/gammaincinv.c
	$(CC) $(CFLAGS) -o "$@" "$<"


eml_gammainc.obj : $(START_DIR)/eml_gammainc.c
	$(CC) $(CFLAGS) -o "$@" "$<"


gammainc.obj : $(START_DIR)/gammainc.c
	$(CC) $(CFLAGS) -o "$@" "$<"


betainc.obj : $(START_DIR)/betainc.c
	$(CC) $(CFLAGS) -o "$@" "$<"


eml_betainc.obj : $(START_DIR)/eml_betainc.c
	$(CC) $(CFLAGS) -o "$@" "$<"


betaincinv.obj : $(START_DIR)/betaincinv.c
	$(CC) $(CFLAGS) -o "$@" "$<"


eig.obj : $(START_DIR)/eig.c
	$(CC) $(CFLAGS) -o "$@" "$<"


eigStandard.obj : $(START_DIR)/eigStandard.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xzhgeqz.obj : $(START_DIR)/xzhgeqz.c
	$(CC) $(CFLAGS) -o "$@" "$<"


strcmp.obj : $(START_DIR)/strcmp.c
	$(CC) $(CFLAGS) -o "$@" "$<"


sortrowsLE.obj : $(START_DIR)/sortrowsLE.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FSMmmd.obj : $(START_DIR)/FSMmmd.c
	$(CC) $(CFLAGS) -o "$@" "$<"


ifWhileCond.obj : $(START_DIR)/ifWhileCond.c
	$(CC) $(CFLAGS) -o "$@" "$<"


randsample.obj : $(START_DIR)/randsample.c
	$(CC) $(CFLAGS) -o "$@" "$<"


randperm.obj : $(START_DIR)/randperm.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rand.obj : $(START_DIR)/rand.c
	$(CC) $(CFLAGS) -o "$@" "$<"


cov.obj : $(START_DIR)/cov.c
	$(CC) $(CFLAGS) -o "$@" "$<"


colon.obj : $(START_DIR)/colon.c
	$(CC) $(CFLAGS) -o "$@" "$<"


mod.obj : $(START_DIR)/mod.c
	$(CC) $(CFLAGS) -o "$@" "$<"


cat.obj : $(START_DIR)/cat.c
	$(CC) $(CFLAGS) -o "$@" "$<"


combineVectorElements.obj : $(START_DIR)/combineVectorElements.c
	$(CC) $(CFLAGS) -o "$@" "$<"


bsxfun.obj : $(START_DIR)/bsxfun.c
	$(CC) $(CFLAGS) -o "$@" "$<"


sum.obj : $(START_DIR)/sum.c
	$(CC) $(CFLAGS) -o "$@" "$<"


inv.obj : $(START_DIR)/inv.c
	$(CC) $(CFLAGS) -o "$@" "$<"


qr.obj : $(START_DIR)/qr.c
	$(CC) $(CFLAGS) -o "$@" "$<"


mrdivide_helper.obj : $(START_DIR)/mrdivide_helper.c
	$(CC) $(CFLAGS) -o "$@" "$<"


qrsolve.obj : $(START_DIR)/qrsolve.c
	$(CC) $(CFLAGS) -o "$@" "$<"


power.obj : $(START_DIR)/power.c
	$(CC) $(CFLAGS) -o "$@" "$<"


quickselectFS.obj : $(START_DIR)/quickselectFS.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FSMbonfbound.obj : $(START_DIR)/FSMbonfbound.c
	$(CC) $(CFLAGS) -o "$@" "$<"


repmat.obj : $(START_DIR)/repmat.c
	$(CC) $(CFLAGS) -o "$@" "$<"


finv.obj : $(START_DIR)/finv.c
	$(CC) $(CFLAGS) -o "$@" "$<"


chi2inv.obj : $(START_DIR)/chi2inv.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FSMenvmmd.obj : $(START_DIR)/FSMenvmmd.c
	$(CC) $(CFLAGS) -o "$@" "$<"


chi2cdf.obj : $(START_DIR)/chi2cdf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FSMbsb.obj : $(START_DIR)/FSMbsb.c
	$(CC) $(CFLAGS) -o "$@" "$<"


eml_setop.obj : $(START_DIR)/eml_setop.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FSMbsb_wrapper.obj : $(START_DIR)/FSMbsb_wrapper.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FSMmmd_wrapper.obj : $(START_DIR)/FSMmmd_wrapper.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FSR_wrapper.obj : $(START_DIR)/FSR_wrapper.c
	$(CC) $(CFLAGS) -o "$@" "$<"


bc.obj : $(START_DIR)/bc.c
	$(CC) $(CFLAGS) -o "$@" "$<"


LXS.obj : $(START_DIR)/LXS.c
	$(CC) $(CFLAGS) -o "$@" "$<"


subsets.obj : $(START_DIR)/subsets.c
	$(CC) $(CFLAGS) -o "$@" "$<"


combsFS.obj : $(START_DIR)/combsFS.c
	$(CC) $(CFLAGS) -o "$@" "$<"


isequal.obj : $(START_DIR)/isequal.c
	$(CC) $(CFLAGS) -o "$@" "$<"


pascal.obj : $(START_DIR)/pascal.c
	$(CC) $(CFLAGS) -o "$@" "$<"


lexunrank.obj : $(START_DIR)/lexunrank.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FSM.obj : $(START_DIR)/FSM.c
	$(CC) $(CFLAGS) -o "$@" "$<"


tic.obj : $(START_DIR)/tic.c
	$(CC) $(CFLAGS) -o "$@" "$<"


mldivide.obj : $(START_DIR)/mldivide.c
	$(CC) $(CFLAGS) -o "$@" "$<"


toc.obj : $(START_DIR)/toc.c
	$(CC) $(CFLAGS) -o "$@" "$<"


erfcinv.obj : $(START_DIR)/erfcinv.c
	$(CC) $(CFLAGS) -o "$@" "$<"


eml_erfcore.obj : $(START_DIR)/eml_erfcore.c
	$(CC) $(CFLAGS) -o "$@" "$<"


tinv.obj : $(START_DIR)/tinv.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FSRmdr.obj : $(START_DIR)/FSRmdr.c
	$(CC) $(CFLAGS) -o "$@" "$<"


sprintf.obj : $(START_DIR)/sprintf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


repelem.obj : $(START_DIR)/repelem.c
	$(CC) $(CFLAGS) -o "$@" "$<"


any.obj : $(START_DIR)/any.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FSRcore.obj : $(START_DIR)/FSRcore.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FSRbonfbound.obj : $(START_DIR)/FSRbonfbound.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FSRenvmdr.obj : $(START_DIR)/FSRenvmdr.c
	$(CC) $(CFLAGS) -o "$@" "$<"


print_processing.obj : $(START_DIR)/print_processing.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FSRbsb.obj : $(START_DIR)/FSRbsb.c
	$(CC) $(CFLAGS) -o "$@" "$<"


unique.obj : $(START_DIR)/unique.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FSRbsb_wrapper.obj : $(START_DIR)/FSRbsb_wrapper.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FSRfan_wrapper.obj : $(START_DIR)/FSRfan_wrapper.c
	$(CC) $(CFLAGS) -o "$@" "$<"


normYJ.obj : $(START_DIR)/normYJ.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Score.obj : $(START_DIR)/Score.c
	$(CC) $(CFLAGS) -o "$@" "$<"


diag.obj : $(START_DIR)/diag.c
	$(CC) $(CFLAGS) -o "$@" "$<"


ScoreYJ.obj : $(START_DIR)/ScoreYJ.c
	$(CC) $(CFLAGS) -o "$@" "$<"


ScoreYJall.obj : $(START_DIR)/ScoreYJall.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FSRmdr_wrapper.obj : $(START_DIR)/FSRmdr_wrapper.c
	$(CC) $(CFLAGS) -o "$@" "$<"


LTSts_wrapper.obj : $(START_DIR)/LTSts_wrapper.c
	$(CC) $(CFLAGS) -o "$@" "$<"


str2double.obj : $(START_DIR)/str2double.c
	$(CC) $(CFLAGS) -o "$@" "$<"


LTSts.obj : $(START_DIR)/LTSts.c
	$(CC) $(CFLAGS) -o "$@" "$<"


HUrho.obj : $(START_DIR)/HUrho.c
	$(CC) $(CFLAGS) -o "$@" "$<"


zscore.obj : $(START_DIR)/zscore.c
	$(CC) $(CFLAGS) -o "$@" "$<"


zscoreFS.obj : $(START_DIR)/zscoreFS.c
	$(CC) $(CFLAGS) -o "$@" "$<"


prctile.obj : $(START_DIR)/prctile.c
	$(CC) $(CFLAGS) -o "$@" "$<"


RobRegrSize.obj : $(START_DIR)/RobRegrSize.c
	$(CC) $(CFLAGS) -o "$@" "$<"


GYfilt.obj : $(START_DIR)/GYfilt.c
	$(CC) $(CFLAGS) -o "$@" "$<"


lsqcurvefit.obj : $(START_DIR)/lsqcurvefit.c
	$(CC) $(CFLAGS) -o "$@" "$<"


factoryConstruct.obj : $(START_DIR)/factoryConstruct.c
	$(CC) $(CFLAGS) -o "$@" "$<"


checkStoppingCriteria.obj : $(START_DIR)/checkStoppingCriteria.c
	$(CC) $(CFLAGS) -o "$@" "$<"


tcdf.obj : $(START_DIR)/tcdf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


string1.obj : $(START_DIR)/string1.c
	$(CC) $(CFLAGS) -o "$@" "$<"


array2table.obj : $(START_DIR)/array2table.c
	$(CC) $(CFLAGS) -o "$@" "$<"


fcdf.obj : $(START_DIR)/fcdf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FSRinvmdr.obj : $(START_DIR)/FSRinvmdr.c
	$(CC) $(CFLAGS) -o "$@" "$<"


LXS_wrapper.obj : $(START_DIR)/LXS_wrapper.c
	$(CC) $(CFLAGS) -o "$@" "$<"


LXS_wrapper1.obj : $(START_DIR)/LXS_wrapper1.c
	$(CC) $(CFLAGS) -o "$@" "$<"


addt_wrapper.obj : $(START_DIR)/addt_wrapper.c
	$(CC) $(CFLAGS) -o "$@" "$<"


eml_rand_mt19937ar_stateful.obj : $(START_DIR)/eml_rand_mt19937ar_stateful.c
	$(CC) $(CFLAGS) -o "$@" "$<"


CoderTimeAPI.obj : $(START_DIR)/CoderTimeAPI.c
	$(CC) $(CFLAGS) -o "$@" "$<"


chkinputM.obj : $(START_DIR)/chkinputM.c
	$(CC) $(CFLAGS) -o "$@" "$<"


nullAssignment.obj : $(START_DIR)/nullAssignment.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xaxpy.obj : $(START_DIR)/xaxpy.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xrotg.obj : $(START_DIR)/xrotg.c
	$(CC) $(CFLAGS) -o "$@" "$<"


sort.obj : $(START_DIR)/sort.c
	$(CC) $(CFLAGS) -o "$@" "$<"


sign.obj : $(START_DIR)/sign.c
	$(CC) $(CFLAGS) -o "$@" "$<"


gammaln.obj : $(START_DIR)/gammaln.c
	$(CC) $(CFLAGS) -o "$@" "$<"


sqrt.obj : $(START_DIR)/sqrt.c
	$(CC) $(CFLAGS) -o "$@" "$<"


sortrows.obj : $(START_DIR)/sortrows.c
	$(CC) $(CFLAGS) -o "$@" "$<"


eml_rand_mt19937ar.obj : $(START_DIR)/eml_rand_mt19937ar.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xzgetrf.obj : $(START_DIR)/xzgetrf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xzgeqp3.obj : $(START_DIR)/xzgeqp3.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xzlarfg.obj : $(START_DIR)/xzlarfg.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xzlarf.obj : $(START_DIR)/xzlarf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xgerc.obj : $(START_DIR)/xgerc.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xgeqp3.obj : $(START_DIR)/xgeqp3.c
	$(CC) $(CFLAGS) -o "$@" "$<"


chkinputR.obj : $(START_DIR)/chkinputR.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xunormqr.obj : $(START_DIR)/xunormqr.c
	$(CC) $(CFLAGS) -o "$@" "$<"


str2double1.obj : $(START_DIR)/str2double1.c
	$(CC) $(CFLAGS) -o "$@" "$<"


hasFiniteBounds.obj : $(START_DIR)/hasFiniteBounds.c
	$(CC) $(CFLAGS) -o "$@" "$<"


jacobianFiniteDifference.obj : $(START_DIR)/jacobianFiniteDifference.c
	$(CC) $(CFLAGS) -o "$@" "$<"


computeFiniteDifferences.obj : $(START_DIR)/computeFiniteDifferences.c
	$(CC) $(CFLAGS) -o "$@" "$<"


finDiffEvalAndChkErr.obj : $(START_DIR)/finDiffEvalAndChkErr.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xgemv.obj : $(START_DIR)/xgemv.c
	$(CC) $(CFLAGS) -o "$@" "$<"


projectBox.obj : $(START_DIR)/projectBox.c
	$(CC) $(CFLAGS) -o "$@" "$<"


driver.obj : $(START_DIR)/driver.c
	$(CC) $(CFLAGS) -o "$@" "$<"


linearLeastSquares.obj : $(START_DIR)/linearLeastSquares.c
	$(CC) $(CFLAGS) -o "$@" "$<"


fsdaC_emxutil.obj : $(START_DIR)/fsdaC_emxutil.c
	$(CC) $(CFLAGS) -o "$@" "$<"


fsdaC_emxAPI.obj : $(START_DIR)/fsdaC_emxAPI.c
	$(CC) $(CFLAGS) -o "$@" "$<"


fsdaC_rtwutil.obj : $(START_DIR)/fsdaC_rtwutil.c
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


