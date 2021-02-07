###########################################################################
## Makefile generated for component 'addt'. 
## 
## Makefile     : addt_rtw.mk
## Generated on : Sun Feb 07 14:50:48 2021
## Final product: .\addt.lib
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

PRODUCT_NAME              = addt
MAKEFILE                  = addt_rtw.mk
MATLAB_ROOT               = C:\PROGRA~1\MATLAB\R2021a
MATLAB_BIN                = C:\PROGRA~1\MATLAB\R2021a\bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)\win64
START_DIR                 = F:\FSDA-MATLAB_Coder\addt\codegen\lib\addt
TGT_FCN_LIB               = ISO_C
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 
RELATIVE_PATH_TO_ANCHOR   = .
COMPILER_COMMAND_FILE     = addt_rtw_comp.rsp
CMD_FILE                  = addt_rtw.rsp
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 
NODEBUG                   = 1
MODELLIB                  = addt.lib

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          Microsoft Visual C++ 2019 v16.0 | nmake (64-bit Windows)
# Supported Version(s):    16.0
# ToolchainInfo Version:   2021a
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# NODEBUG
# cvarsdll
# cvarsmt
# conlibsmt
# ldebug
# conflags
# cflags

#-----------
# MACROS
#-----------

MW_EXTERNLIB_DIR    = $(MATLAB_ROOT)\extern\lib\win64\microsoft
MW_LIB_DIR          = $(MATLAB_ROOT)\lib\win64
CPU                 = AMD64
APPVER              = 5.02
CVARSFLAG           = $(cvarsmt)
CFLAGS_ADDITIONAL   = -D_CRT_SECURE_NO_WARNINGS
CPPFLAGS_ADDITIONAL = -EHs -D_CRT_SECURE_NO_WARNINGS /wd4251
LIBS_TOOLCHAIN      = $(conlibs)

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = 

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: Microsoft Visual C Compiler
CC = cl

# Linker: Microsoft Visual C Linker
LD = link

# C++ Compiler: Microsoft Visual C++ Compiler
CPP = cl

# C++ Linker: Microsoft Visual C++ Linker
CPP_LD = link

# Archiver: Microsoft Visual C/C++ Archiver
AR = lib

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = "$(MEX_PATH)\mex"

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: NMAKE Utility
MAKE = nmake


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -Zi
C_OUTPUT_FLAG       = -Fo
LDDEBUG             = /DEBUG
OUTPUT_FLAG         = -out:
CPPDEBUG            = -Zi
CPP_OUTPUT_FLAG     = -Fo
CPPLDDEBUG          = /DEBUG
OUTPUT_FLAG         = -out:
ARDEBUG             =
STATICLIB_OUTPUT_FLAG = -out:
MEX_DEBUG           = -g
RM                  = @del
ECHO                = @echo
MV                  = @ren
RUN                 = @cmd /C

#--------------------------------------
# "Faster Runs" Build Configuration
#--------------------------------------

ARFLAGS              = /nologo
CFLAGS               = $(cflags) $(CVARSFLAG) $(CFLAGS_ADDITIONAL) \
                       /O2 /Oy-
CPPFLAGS             = /TP $(cflags) $(CVARSFLAG) $(CPPFLAGS_ADDITIONAL) \
                       /O2 /Oy-
CPP_LDFLAGS          = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN)
CPP_SHAREDLIB_LDFLAGS  = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN) \
                         -dll -def:$(DEF_FILE)
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN)
MEX_CPPFLAGS         =
MEX_CPPLDFLAGS       =
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN) \
                       -dll -def:$(DEF_FILE)



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = .\addt.lib
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

DEFINES_CUSTOM = 
DEFINES_STANDARD = -DMODEL=addt

DEFINES = $(DEFINES_CUSTOM) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)\addt_data.c $(START_DIR)\rt_nonfinite.c $(START_DIR)\rtGetNaN.c $(START_DIR)\rtGetInf.c $(START_DIR)\addt_initialize.c $(START_DIR)\addt_terminate.c $(START_DIR)\addt.c $(START_DIR)\find.c $(START_DIR)\int2str.c $(START_DIR)\rank.c $(START_DIR)\svd.c $(START_DIR)\xnrm2.c $(START_DIR)\qr.c $(START_DIR)\mrdivide_helper.c $(START_DIR)\qrsolve.c $(START_DIR)\mean.c $(START_DIR)\mpower.c $(START_DIR)\tcdf.c $(START_DIR)\eml_betainc.c $(START_DIR)\eml_gammainc.c $(START_DIR)\nullAssignment.c $(START_DIR)\xaxpy.c $(START_DIR)\xrotg.c $(START_DIR)\xzlarfg.c $(START_DIR)\xzlarf.c $(START_DIR)\xgerc.c $(START_DIR)\sqrt.c $(START_DIR)\gammaln.c $(START_DIR)\addt_emxutil.c $(START_DIR)\addt_emxAPI.c $(START_DIR)\addt_rtwutil.c

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = addt_data.obj rt_nonfinite.obj rtGetNaN.obj rtGetInf.obj addt_initialize.obj addt_terminate.obj addt.obj find.obj int2str.obj rank.obj svd.obj xnrm2.obj qr.obj mrdivide_helper.obj qrsolve.obj mean.obj mpower.obj tcdf.obj eml_betainc.obj eml_gammainc.obj nullAssignment.obj xaxpy.obj xrotg.obj xzlarfg.obj xzlarf.obj xgerc.obj sqrt.obj gammaln.obj addt_emxutil.obj addt_emxAPI.obj addt_rtwutil.obj

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

CFLAGS_ = /source-charset:utf-8
CFLAGS_BASIC = $(DEFINES) @$(COMPILER_COMMAND_FILE)

CFLAGS = $(CFLAGS) $(CFLAGS_) $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_ = /source-charset:utf-8
CPPFLAGS_BASIC = $(DEFINES) @$(COMPILER_COMMAND_FILE)

CPPFLAGS = $(CPPFLAGS) $(CPPFLAGS_) $(CPPFLAGS_BASIC)

###########################################################################
## INLINED COMMANDS
###########################################################################


!include $(MATLAB_ROOT)\rtw\c\tools\vcdefs.mak


###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build clean info prebuild download execute set_environment_variables


all : build
	@cmd /C "@echo ### Successfully generated all binary outputs."


build : set_environment_variables prebuild $(PRODUCT)


prebuild : 


download : $(PRODUCT)


execute : download


set_environment_variables : 
	@set INCLUDE=$(INCLUDES);$(INCLUDE)
	@set LIB=$(LIB)


###########################################################################
## FINAL TARGET
###########################################################################

#---------------------------------
# Create a static library         
#---------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS)
	@cmd /C "@echo ### Creating static library "$(PRODUCT)" ..."
	$(AR) $(ARFLAGS) -out:$(PRODUCT) @$(CMD_FILE)
	@cmd /C "@echo ### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(RELATIVE_PATH_TO_ANCHOR)}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(RELATIVE_PATH_TO_ANCHOR)}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(START_DIR)}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(START_DIR)}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{F:\FSDA-MATLAB_Coder\addt}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{F:\FSDA-MATLAB_Coder\addt}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


addt_data.obj : $(START_DIR)\addt_data.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\addt_data.c


rt_nonfinite.obj : $(START_DIR)\rt_nonfinite.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\rt_nonfinite.c


rtGetNaN.obj : $(START_DIR)\rtGetNaN.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\rtGetNaN.c


rtGetInf.obj : $(START_DIR)\rtGetInf.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\rtGetInf.c


addt_initialize.obj : $(START_DIR)\addt_initialize.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\addt_initialize.c


addt_terminate.obj : $(START_DIR)\addt_terminate.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\addt_terminate.c


addt.obj : $(START_DIR)\addt.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\addt.c


find.obj : $(START_DIR)\find.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\find.c


int2str.obj : $(START_DIR)\int2str.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\int2str.c


rank.obj : $(START_DIR)\rank.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\rank.c


svd.obj : $(START_DIR)\svd.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\svd.c


xnrm2.obj : $(START_DIR)\xnrm2.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\xnrm2.c


qr.obj : $(START_DIR)\qr.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\qr.c


mrdivide_helper.obj : $(START_DIR)\mrdivide_helper.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\mrdivide_helper.c


qrsolve.obj : $(START_DIR)\qrsolve.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\qrsolve.c


mean.obj : $(START_DIR)\mean.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\mean.c


mpower.obj : $(START_DIR)\mpower.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\mpower.c


tcdf.obj : $(START_DIR)\tcdf.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\tcdf.c


eml_betainc.obj : $(START_DIR)\eml_betainc.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\eml_betainc.c


eml_gammainc.obj : $(START_DIR)\eml_gammainc.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\eml_gammainc.c


nullAssignment.obj : $(START_DIR)\nullAssignment.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\nullAssignment.c


xaxpy.obj : $(START_DIR)\xaxpy.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\xaxpy.c


xrotg.obj : $(START_DIR)\xrotg.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\xrotg.c


xzlarfg.obj : $(START_DIR)\xzlarfg.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\xzlarfg.c


xzlarf.obj : $(START_DIR)\xzlarf.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\xzlarf.c


xgerc.obj : $(START_DIR)\xgerc.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\xgerc.c


sqrt.obj : $(START_DIR)\sqrt.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\sqrt.c


gammaln.obj : $(START_DIR)\gammaln.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\gammaln.c


addt_emxutil.obj : $(START_DIR)\addt_emxutil.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\addt_emxutil.c


addt_emxAPI.obj : $(START_DIR)\addt_emxAPI.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\addt_emxAPI.c


addt_rtwutil.obj : $(START_DIR)\addt_rtwutil.c
	$(CC) $(CFLAGS) -Fo"$@" $(START_DIR)\addt_rtwutil.c


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw $(COMPILER_COMMAND_FILE) $(MAKEFILE)


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@cmd /C "@echo ### PRODUCT = $(PRODUCT)"
	@cmd /C "@echo ### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@cmd /C "@echo ### BUILD_TYPE = $(BUILD_TYPE)"
	@cmd /C "@echo ### INCLUDES = $(INCLUDES)"
	@cmd /C "@echo ### DEFINES = $(DEFINES)"
	@cmd /C "@echo ### ALL_SRCS = $(ALL_SRCS)"
	@cmd /C "@echo ### ALL_OBJS = $(ALL_OBJS)"
	@cmd /C "@echo ### LIBS = $(LIBS)"
	@cmd /C "@echo ### MODELREF_LIBS = $(MODELREF_LIBS)"
	@cmd /C "@echo ### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@cmd /C "@echo ### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@cmd /C "@echo ### CFLAGS = $(CFLAGS)"
	@cmd /C "@echo ### LDFLAGS = $(LDFLAGS)"
	@cmd /C "@echo ### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@cmd /C "@echo ### CPPFLAGS = $(CPPFLAGS)"
	@cmd /C "@echo ### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@cmd /C "@echo ### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@cmd /C "@echo ### ARFLAGS = $(ARFLAGS)"
	@cmd /C "@echo ### MEX_CFLAGS = $(MEX_CFLAGS)"
	@cmd /C "@echo ### MEX_CPPFLAGS = $(MEX_CPPFLAGS)"
	@cmd /C "@echo ### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@cmd /C "@echo ### MEX_CPPLDFLAGS = $(MEX_CPPLDFLAGS)"
	@cmd /C "@echo ### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@cmd /C "@echo ### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@cmd /C "@echo ### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	@if exist $(PRODUCT) $(RM) $(PRODUCT)
	$(RM) $(ALL_OBJS)
	$(ECHO) "### Deleted all derived files."


