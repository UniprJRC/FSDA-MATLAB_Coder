/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRbsb.c
 *
 * Code generation for function 'FSRbsb'
 *
 */

/* Include files */
#include "FSRbsb.h"
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_mexutil.h"
#include "FSR_wrapper_types.h"
#include "cat.h"
#include "colon.h"
#include "ifWhileCond.h"
#include "indexShapeCheck.h"
#include "int2str.h"
#include "mldivide.h"
#include "mtimes.h"
#include "power.h"
#include "randsample.h"
#include "rank.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo ulb_emlrtRSI = {
    474,                                              /* lineNo */
    "FSRbsb",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pathName */
};

static emlrtRSInfo vlb_emlrtRSI = {
    473,                                              /* lineNo */
    "FSRbsb",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pathName */
};

static emlrtRSInfo wlb_emlrtRSI = {
    449,                                              /* lineNo */
    "FSRbsb",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pathName */
};

static emlrtRSInfo xlb_emlrtRSI = {
    439,                                              /* lineNo */
    "FSRbsb",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pathName */
};

static emlrtRSInfo ylb_emlrtRSI = {
    437,                                              /* lineNo */
    "FSRbsb",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pathName */
};

static emlrtRSInfo amb_emlrtRSI = {
    427,                                              /* lineNo */
    "FSRbsb",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pathName */
};

static emlrtRSInfo bmb_emlrtRSI = {
    404,                                              /* lineNo */
    "FSRbsb",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pathName */
};

static emlrtRSInfo cmb_emlrtRSI = {
    381,                                              /* lineNo */
    "FSRbsb",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pathName */
};

static emlrtRSInfo dmb_emlrtRSI = {
    361,                                              /* lineNo */
    "FSRbsb",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pathName */
};

static emlrtRSInfo emb_emlrtRSI = {
    337,                                              /* lineNo */
    "FSRbsb",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pathName */
};

static emlrtRSInfo fmb_emlrtRSI = {
    282,                                              /* lineNo */
    "FSRbsb",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pathName */
};

static emlrtRSInfo gmb_emlrtRSI = {
    280,                                              /* lineNo */
    "FSRbsb",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pathName */
};

static emlrtRSInfo hmb_emlrtRSI = {
    277,                                              /* lineNo */
    "FSRbsb",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pathName */
};

static emlrtMCInfo fd_emlrtMCI = {
    404,                                              /* lineNo */
    17,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtMCInfo gd_emlrtMCI = {
    473,                                              /* lineNo */
    21,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtBCInfo lfb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    275,                                               /* lineNo */
    6,                                                 /* colNo */
    "X",                                               /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo mfb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    275,                                               /* lineNo */
    8,                                                 /* colNo */
    "X",                                               /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtRTEInfo yc_emlrtRTEI = {
    398,                                              /* lineNo */
    14,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtECInfo td_emlrtECI = {
    -1,                                               /* nDims */
    437,                                              /* lineNo */
    11,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtECInfo ud_emlrtECI = {
    -1,                                               /* nDims */
    439,                                              /* lineNo */
    9,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtBCInfo nfb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    452,                                               /* lineNo */
    21,                                                /* colNo */
    "ord",                                             /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo ofb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    452,                                               /* lineNo */
    24,                                                /* colNo */
    "ord",                                             /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtECInfo vd_emlrtECI = {
    -1,                                               /* nDims */
    466,                                              /* lineNo */
    26,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtDCInfo de_emlrtDCI = {
    471,                                               /* lineNo */
    24,                                                /* colNo */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo pfb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    471,                                               /* lineNo */
    24,                                                /* colNo */
    "Un",                                              /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtECInfo wd_emlrtECI = {
    -1,                                               /* nDims */
    471,                                              /* lineNo */
    21,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtDCInfo ee_emlrtDCI = {
    474,                                               /* lineNo */
    24,                                                /* colNo */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo qfb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    474,                                               /* lineNo */
    24,                                                /* colNo */
    "Un",                                              /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo rfb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    413,                                               /* lineNo */
    24,                                                /* colNo */
    "BB",                                              /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtECInfo xd_emlrtECI = {
    -1,                                               /* nDims */
    413,                                              /* lineNo */
    17,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtDCInfo fe_emlrtDCI = {
    362,                                               /* lineNo */
    16,                                                /* colNo */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtDCInfo ge_emlrtDCI = {
    362,                                               /* lineNo */
    16,                                                /* colNo */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    4                                                  /* checkKind */
};

static emlrtBCInfo sfb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    292,                                               /* lineNo */
    10,                                                /* colNo */
    "X",                                               /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo he_emlrtDCI = {
    292,                                               /* lineNo */
    10,                                                /* colNo */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo tfb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    293,                                               /* lineNo */
    10,                                                /* colNo */
    "y",                                               /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo ufb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    290,                                               /* lineNo */
    10,                                                /* colNo */
    "y",                                               /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo ie_emlrtDCI = {
    290,                                               /* lineNo */
    10,                                                /* colNo */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo vfb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    281,                                               /* lineNo */
    14,                                                /* colNo */
    "X",                                               /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo wfb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    330,                                               /* lineNo */
    6,                                                 /* colNo */
    "bsbT",                                            /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo xfb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    342,                                               /* lineNo */
    8,                                                 /* colNo */
    "seq100",                                          /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo je_emlrtDCI = {
    344,                                               /* lineNo */
    11,                                                /* colNo */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo yfb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    344,                                               /* lineNo */
    11,                                                /* colNo */
    "seq100boo",                                       /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo ke_emlrtDCI = {
    362,                                               /* lineNo */
    5,                                                 /* colNo */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtDCInfo le_emlrtDCI = {
    362,                                               /* lineNo */
    5,                                                 /* colNo */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    4                                                  /* checkKind */
};

static emlrtDCInfo me_emlrtDCI = {
    376,                                               /* lineNo */
    13,                                                /* colNo */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo agb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    376,                                               /* lineNo */
    13,                                                /* colNo */
    "boobsbsteps",                                     /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo ne_emlrtDCI = {
    381,                                               /* lineNo */
    32,                                                /* colNo */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtDCInfo oe_emlrtDCI = {
    381,                                               /* lineNo */
    32,                                                /* colNo */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    4                                                  /* checkKind */
};

static emlrtBCInfo bgb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    402,                                               /* lineNo */
    17,                                                /* colNo */
    "seq100boo",                                       /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo cgb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    410,                                               /* lineNo */
    16,                                                /* colNo */
    "boobsbsteps",                                     /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo dgb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    413,                                               /* lineNo */
    20,                                                /* colNo */
    "BB",                                              /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo egb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    455,                                               /* lineNo */
    18,                                                /* colNo */
    "bsbT",                                            /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo fgb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    458,                                               /* lineNo */
    18,                                                /* colNo */
    "X",                                               /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo ggb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    459,                                               /* lineNo */
    18,                                                /* colNo */
    "y",                                               /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo hgb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    466,                                               /* lineNo */
    22,                                                /* colNo */
    "seq",                                             /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtRTEInfo dfb_emlrtRTEI = {
    275,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo efb_emlrtRTEI = {
    277,                                              /* lineNo */
    4,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo ffb_emlrtRTEI = {
    292,                                              /* lineNo */
    5,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo gfb_emlrtRTEI = {
    290,                                              /* lineNo */
    5,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo hfb_emlrtRTEI = {
    293,                                              /* lineNo */
    5,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo ifb_emlrtRTEI = {
    281,                                              /* lineNo */
    9,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo jfb_emlrtRTEI = {
    329,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo kfb_emlrtRTEI = {
    330,                                              /* lineNo */
    6,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo lfb_emlrtRTEI = {
    333,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo mfb_emlrtRTEI = {
    337,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo nfb_emlrtRTEI = {
    341,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo ofb_emlrtRTEI = {
    1,                                                /* lineNo */
    20,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo pfb_emlrtRTEI = {
    343,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo qfb_emlrtRTEI = {
    344,                                              /* lineNo */
    11,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo rfb_emlrtRTEI = {
    362,                                              /* lineNo */
    5,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo sfb_emlrtRTEI = {
    375,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo tfb_emlrtRTEI = {
    376,                                              /* lineNo */
    13,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo ufb_emlrtRTEI = {
    381,                                              /* lineNo */
    14,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo vfb_emlrtRTEI = {
    381,                                              /* lineNo */
    28,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo wfb_emlrtRTEI = {
    413,                                              /* lineNo */
    20,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo xfb_emlrtRTEI = {
    437,                                              /* lineNo */
    11,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo yfb_emlrtRTEI = {
    444,                                              /* lineNo */
    13,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo agb_emlrtRTEI = {
    452,                                              /* lineNo */
    13,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo bgb_emlrtRTEI = {
    454,                                              /* lineNo */
    13,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo cgb_emlrtRTEI = {
    455,                                              /* lineNo */
    18,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo dgb_emlrtRTEI = {
    458,                                              /* lineNo */
    13,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo egb_emlrtRTEI = {
    459,                                              /* lineNo */
    13,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo fgb_emlrtRTEI = {
    427,                                              /* lineNo */
    13,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo ggb_emlrtRTEI = {
    466,                                              /* lineNo */
    17,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo hgb_emlrtRTEI = {
    333,                                              /* lineNo */
    8,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo igb_emlrtRTEI = {
    341,                                              /* lineNo */
    10,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRSInfo bob_emlrtRSI = {
    473,                                              /* lineNo */
    "FSRbsb",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pathName */
};

static emlrtRSInfo cob_emlrtRSI = {
    404,                                              /* lineNo */
    "FSRbsb",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pathName */
};

/* Function Definitions */
void FSRbsb(const emlrtStack *sp, const emxArray_real_T *y,
            const emxArray_real_T *X, emxArray_real_T *bsb, real_T varargin_4,
            emxArray_real_T *Un, emxArray_real32_T *BB)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_boolean_T *boobsbsteps;
  emxArray_boolean_T *bsbT;
  emxArray_boolean_T *oldbsbT;
  emxArray_boolean_T *seq100boo;
  emxArray_int32_T *b_r;
  emxArray_int32_T *iidx;
  emxArray_real_T *Xb;
  emxArray_real_T *b;
  emxArray_real_T *b_y;
  emxArray_real_T *c_y;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *seq;
  emxArray_real_T *seq100;
  emxArray_real_T *unit;
  emxArray_real_T *yb;
  real_T d;
  real_T init;
  int32_T b_X[2];
  int32_T b_tmp_size[2];
  int32_T tmp_size[2];
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T ini0;
  int32_T irank;
  int32_T loop_ub;
  int32_T mm;
  int32_T n;
  int32_T nwhile;
  int32_T p;
  uint32_T b_mm;
  uint32_T ij;
  char_T tmp_data[310];
  char_T c_tmp_data[54];
  char_T b_tmp_data[12];
  boolean_T Ra;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /* FSRbsb returns the units belonging to the subset in each step of the
   * forward search */
  /*  */
  /* <a href="matlab: docsearchFS('FSRbsb')">Link to the help function</a> */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*     y    :     Response variable. Vector. A vector with n elements that
   * contains */
  /*                the response variable. y can be either a row or a column
   * vector. */
  /*   X :          Predictor variables. Matrix. */
  /*                Matrix of explanatory variables (also called 'regressors')
   */
  /*                of dimension n x (p-1) where p denotes the number of */
  /*                explanatory variables including the intercept. */
  /*                Rows of X represent observations, and columns represent */
  /*                variables. By default, there is a constant term in the */
  /*                model, unless you explicitly remove it using input option */
  /*                intercept, so do not include a column of 1s in X. Missing */
  /*                values (NaN's) and infinite values (Inf's) are allowed, */
  /*                since observations (rows) with missing or infinite values */
  /*                will automatically be excluded from the computations. */
  /*   bsb :        list of units forming the initial subset. Vector | 0. If */
  /*                bsb=0 then the procedure starts with p units randomly */
  /*                chosen else if bsb is not 0 the search will start with */
  /*                m0=length(bsb) */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*        init  :     Search initialization. Scalar. */
  /*                    It specifies the initial subset size to start */
  /*                    monitoring units forming subset */
  /*                    Example - 'init',100 starts the search from step m=100
   */
  /*                    Data Types - double */
  /*  */
  /*     intercept :  Indicator for constant term. true (default) | false. */
  /*                  Indicator for the constant term (intercept) in the fit, */
  /*                  specified as the comma-separated pair consisting of */
  /*                  'Intercept' and either true to include or false to remove
   */
  /*                  the constant term from the model. */
  /*                  Example - 'intercept',false */
  /*                  Data Types - boolean */
  /*  */
  /*     nocheck  :    Check input arguments. Boolean. */
  /*                   If nocheck is equal to 1 no check is performed on */
  /*                   matrix y and matrix X. Notice that y and X are left */
  /*                   unchanged. In other words the additional column of ones
   * for */
  /*                   the intercept is not added. As default nocheck=false. */
  /*                   Example - 'nocheck',true */
  /*                   Data Types - boolean */
  /*  */
  /*    bsbsteps :  Save the units forming subsets in selected steps. Vector or
   */
  /*                empty value. */
  /*                It specifies for which steps of the fwd search it is */
  /*                necessary to save the units forming subset. If bsbsteps */
  /*                is 0 we store the units forming subset in all steps. If */
  /*                bsbsteps=[] or omitted, the default is to store the units */
  /*                forming subset in all steps if n<=5000, else to store the */
  /*                units forming subset at steps init and steps which are */
  /*                multiple of 100. For example, as default, if n=753 and */
  /*                init=6, units forming subset are stored for m=init, 100, */
  /*                200, 300, 400, 500 and 600. */
  /*                Example - 'bsbsteps',[100 200] stores the unis forming */
  /*                subset in steps 100 and 200. */
  /*                Data Types - double */
  /*  */
  /*        msg    :  Level of output to display. Boolean. It controls whether
   */
  /*                  to display or not messages on the screen */
  /*                  If msg==true (default) messages are displayed on the
   * screen about */
  /*                    step of the fwd search */
  /*                  else no message is displayed on the screen. */
  /*                Example - 'msg',true */
  /*                Data Types - boolean */
  /*  */
  /*        plots   : Plot on the screen. Scalar. */
  /*                  If plots=1 the monitoring units plot is displayed on the
   */
  /*                  screen. The default value of plots is 0 (that is no plot
   */
  /*                  is produced on the screen). */
  /*                  Example - 'plots',1 */
  /*                  Data Types - double */
  /*  */
  /*  */
  /*  Output: */
  /*  */
  /*   Un:          Units included in each step. Matrix. */
  /*                (n-init) x 11 Matrix which contains the unit(s) included */
  /*                in the subset at each step of the search. */
  /*                REMARK: in every step the new subset is compared with the */
  /*                old subset. Un contains the unit(s) present in the new */
  /*                subset but not in the old one. */
  /*                Un(1,2) for example contains the unit included in step */
  /*                init+1. */
  /*                Un(end,2) contains the units included in the final step */
  /*                of the search. */
  /*   BB:          Units belonging to subset in each step or selected steps.
   * Matrix. */
  /*                n-by-(n-init+1) or n-by-length(bsbsteps) matrix which */
  /*                contains the units belonging to the subset at each step (or
   */
  /*                in selected steps as specified by optional vector bsbsteps)
   */
  /*                of the forward search. */
  /*                More precisely: */
  /*                BB(:,1) contains the units forming subset in step
   * bsbsteps(1); */
  /*                ....; */
  /*                BB(:,end) contains the units forming subset in step
   * bsbsteps(end); */
  /*                Row 1 of matrix BB is referred to unit 1; */
  /*                ......; */
  /*                Row n of matrix BB is referred to unit n; */
  /*                Units not belonging to subset are denoted with NaN. */
  /*  */
  /*  See also FSRBbsb, FSRHbsb */
  /*  */
  /*  See also: FSReda */
  /*  */
  /*  References: */
  /*  */
  /*  Chaloner, K. and Brant, R. (1988), A Bayesian Approach to Outlier */
  /*  Detection and Residual Analysis, "Biometrika", Vol. 75, pp. 651-659. */
  /*  Riani, M., Corbellini, A. and Atkinson, A.C. (2018), Very Robust Bayesian
   */
  /*  Regression for Fraud Detection, "International Statistical Review", */
  /*  http://dx.doi.org/10.1111/insr.12247 */
  /*  Atkinson, A.C., Corbellini, A. and Riani, M., (2017), Robust Bayesian */
  /*  Regression with the Forward Search: Theory and Data Analysis, "Test", */
  /*  Vol. 26, pp. 869-886, DOI 10.1007/s11749-017-0542-6 */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('FSRbsb')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % FSRbsb with all default options. */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*     [out]=LXS(y,X,'nsamp',10000); */
  /*     Un = FSRbsb(y,X,out.bs); */
  /* } */
  /* { */
  /*     %% FSRbsb with optional arguments. */
  /*     % Monitoring units plot for fishery dataset */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*     [out]=LXS(y,X,'nsamp',10000); */
  /*     Un = FSRbsb(y,X,out.bs,'plots',1); */
  /* } */
  /* { */
  /*     %% Monitoring the units belonging to subset. */
  /*     state=1000; */
  /*     randn('state', state); */
  /*     n=100; */
  /*     X=randn(n,3); */
  /*     bet=[3;4;5]; */
  /*     y=3*randn(n,1)+X*bet; */
  /*     y(1:20)=y(1:20)+15; */
  /*     [outLMS]=LXS(y,X); */
  /*     bsb=outLMS.bs; */
  /*     % Store in matrix BB the units belonging to subset in each step of the
   * forward search */
  /*     [Un,BB] = FSRbsb(y,X,bsb); */
  /*     % Create the 'monitoring units plot' */
  /*     figure; */
  /*     seqr=[Un(1,1)-1; Un(:,1)]; */
  /*     plot(seqr,BB','bx'); */
  /*     xlabel('Subset size m'); */
  /*     ylabel('Monitoring units plot'); */
  /*     % The plot, which monitors the units belonging to subset in each step
   * of */
  /*     % the forward search shows that apart from unit 11 which enters the */
  /*     % search in step m=78 all the other contaminated units enter the search
   */
  /*     % in the last 19 steps. */
  /*  */
  /*     % if we consider the seed state=500, we obtain a plot showing that the
   */
  /*     % 20 contaminated units enter the search in the final 20 steps. */
  /*     state=500; */
  /*     randn('state', state); */
  /*     X=randn(n,3); */
  /*     y=3*randn(n,1)+X*bet; */
  /*     y(1:20)=y(1:20)+15; */
  /*     [outLMS]=LXS(y,X); */
  /*     bsb=outLMS.bs; */
  /*     % Store in matrix BB the units belonging to subset in each step of the
   * forward search */
  /*     [Un,BB] = FSRbsb(y,X,bsb); */
  /*     % Create the 'monitoring units plot' */
  /*     figure; */
  /*     seqr=[Un(1,1)-1; Un(:,1)]; */
  /*     plot(seqr,BB','bx'); */
  /*     xlabel('Subset size m'); */
  /*     ylabel('Monitoring units plot'); */
  /* } */
  /* { */
  /*     % Example with monitoring from step 60. */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*     [out]=LXS(y,X,'nsamp',10000); */
  /*     Un = FSRbsb(y,X,out.bs,'init',60); */
  /* } */
  /* { */
  /*     % FSR using a regression model without intercept. */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*     [out]=LXS(y,X); */
  /*     bsb=out.bs; */
  /*     [Un,BB] = FSRbsb(y,X,out.bs,'intercept',false); */
  /* } */
  /* { */
  /*     %FSR applied without doing any checks on y and X variables. */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*     [out]=LXS(y,X,'nsamp',10000); */
  /*     [Un,BB] = FSRbsb(y,X,out.bs,'nocheck',true); */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checking */
  /* chkinputR makes some input parameters and user options checking in
   * regression */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*  y:            Response variable. Vector. */
  /*                A vector with n elements that contains the response */
  /*                variables, possibly with missing values (NaN's) and */
  /*                infinite values (Inf's). */
  /*  X :           Predictor variables. Matrix. */
  /*                Data matrix of explanatory variables (also called */
  /*                'regressors') of dimension (n x p-1), possibly with missing
   */
  /*                values (NaN's) and infinite values (Inf's). Rows of X */
  /*                represent observations, and columns represent variables. */
  /*  nnargin:      nargin. Scalar. The number of input arguments specified for
   * the caller */
  /*                function. */
  /*  vvarargin:    nvarargin. Scalar. The variable length input argument list
   */
  /*                specified for the */
  /*                caller function. */
  /*  */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*  Output: */
  /*  */
  /*  y:            response without missing and infs. Vector. The new response
   * variable, with observations (rows) with */
  /*                missing or infinite values excluded. */
  /*  X:            Predictor variables without infs and missings. Matrix. */
  /*                The new matrix of explanatory variables, with missing or */
  /*                infinite values excluded. */
  /*  n:            Number of rows of X (observations). Scalar.  Number of */
  /*                rows after listwise exclusion. */
  /*  p:            Number of columns of X (variables). Scalar. */
  /*                Number of parameters to be estimated. */
  /*  */
  /*  */
  /*  More About: */
  /*  */
  /*  This routines preforms the following operations: */
  /*  1) If y is a row vector it is transformed in a column vector; */
  /*  2) Checks that X is a matrix that has not more than two dimensions; */
  /*  3) Checks dimension consistency of X and y; */
  /*  4) Removes observations with missing or infinite values from X or y */
  /*  (listwise exclusion); */
  /*  5) Adds to matrix X a column of ones if option intercept is 1; */
  /*  6) Checks if there are constant columns in matrix X. In other words, if */
  /*  Xj is a generic column of X (excluding the column which contains the */
  /*  intercept) it removes it if max(Xj)=min(Xj) and produces a warning. */
  /*  7) Computes final values of n and p after previous operations; */
  /*  8) Makes sure than n>=p; */
  /*  9) Makes sure that new X is full rank */
  /*  */
  /*  See also chkinputRB */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Example: */
  /* { */
  /*  example_producing_error */
  /*     %To examplify the behaviour of chkinputR, we call function FSR without
   * a */
  /*     %compulsory parameter ('y'). */
  /*     n=200; */
  /*     p=3; */
  /*     state1=123498; */
  /*     randn('state', state1); */
  /*     X=randn(n,p); */
  /*     [out]=FSR(X); */
  /* } */
  /*  Beginning of code */
  /*  chklist is the vector containing the names of optional arguments */
  /*  chkchk is the position of the option nocheck in vector chklist */
  /*  chkchk = strmatch('nocheck',chklist,'exact'); */
  /*  chkint is the position of the option intercept in vector chklist */
  /*  chkint = strmatch('intercept',chklist,'exact'); */
  /*  If nocheck=true, then skip checks on y and X */
  p = X->size[1];
  n = X->size[0];
  /*  User options */
  /*  We now overwrite inside structure options the default values with */
  /*  those chosen by the user */
  /*  Initialize Xb (necessary for MATLAB coder) */
  /*  otherwise the following message appears */
  /*  Variable 'Xb' is not fully defined on some execution paths. */
  if (1 > X->size[1]) {
    loop_ub = 0;
  } else {
    if (1 > X->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, X->size[0], &lfb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (X->size[1] > X->size[0]) {
      emlrtDynamicBoundsCheckR2012b(X->size[1], 1, X->size[0], &mfb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    loop_ub = X->size[1];
  }
  emxInit_real_T(sp, &Xb, 2, &dfb_emlrtRTEI, true);
  b_loop_ub = X->size[1];
  i = Xb->size[0] * Xb->size[1];
  Xb->size[0] = loop_ub;
  Xb->size[1] = X->size[1];
  emxEnsureCapacity_real_T(sp, Xb, i, &dfb_emlrtRTEI);
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      Xb->data[i1 + Xb->size[0] * i] = X->data[i1 + X->size[0] * i];
    }
  }
  emxInit_boolean_T(sp, &bsbT, 1, &jfb_emlrtRTEI, true);
  i = bsbT->size[0];
  bsbT->size[0] = bsb->size[0];
  emxEnsureCapacity_boolean_T(sp, bsbT, i, &efb_emlrtRTEI);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[i] = (bsb->data[i] == 0.0);
  }
  emxInit_real_T(sp, &yb, 1, &gfb_emlrtRTEI, true);
  st.site = &hmb_emlrtRSI;
  if (b_ifWhileCond(&st, bsbT)) {
    Ra = true;
    nwhile = 1;
    while (Ra && (nwhile < 100)) {
      st.site = &gmb_emlrtRSI;
      randsample(&st, n, p, bsb);
      loop_ub = X->size[1];
      i = Xb->size[0] * Xb->size[1];
      Xb->size[0] = bsb->size[0];
      Xb->size[1] = X->size[1];
      emxEnsureCapacity_real_T(sp, Xb, i, &ifb_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        b_loop_ub = bsb->size[0];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          i2 = (int32_T)bsb->data[i1];
          if ((i2 < 1) || (i2 > X->size[0])) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, X->size[0], &vfb_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          Xb->data[i1 + Xb->size[0] * i] = X->data[(i2 + X->size[0] * i) - 1];
        }
      }
      st.site = &fmb_emlrtRSI;
      b_st.site = &fc_emlrtRSI;
      irank = local_rank(&b_st, Xb);
      Ra = (irank < p);
      nwhile++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }
    i = yb->size[0];
    yb->size[0] = bsb->size[0];
    emxEnsureCapacity_real_T(sp, yb, i, &gfb_emlrtRTEI);
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      if (bsb->data[i] != (int32_T)muDoubleScalarFloor(bsb->data[i])) {
        emlrtIntegerCheckR2012b(bsb->data[i], &ie_emlrtDCI, (emlrtCTX)sp);
      }
      i1 = (int32_T)bsb->data[i];
      if ((i1 < 1) || (i1 > y->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, y->size[0], &ufb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      yb->data[i] = y->data[i1 - 1];
    }
  } else {
    loop_ub = X->size[1];
    i = Xb->size[0] * Xb->size[1];
    Xb->size[0] = bsb->size[0];
    Xb->size[1] = X->size[1];
    emxEnsureCapacity_real_T(sp, Xb, i, &ffb_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = bsb->size[0];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        if (bsb->data[i1] != (int32_T)muDoubleScalarFloor(bsb->data[i1])) {
          emlrtIntegerCheckR2012b(bsb->data[i1], &he_emlrtDCI, (emlrtCTX)sp);
        }
        i2 = (int32_T)bsb->data[i1];
        if ((i2 < 1) || (i2 > X->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, X->size[0], &sfb_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        Xb->data[i1 + Xb->size[0] * i] = X->data[(i2 + X->size[0] * i) - 1];
      }
    }
    i = yb->size[0];
    yb->size[0] = bsb->size[0];
    emxEnsureCapacity_real_T(sp, yb, i, &hfb_emlrtRTEI);
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)bsb->data[i];
      if ((i1 < 1) || (i1 > y->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i], 1, y->size[0],
                                      &tfb_emlrtBCI, (emlrtCTX)sp);
      }
      yb->data[i] = y->data[i1 - 1];
    }
  }
  ini0 = bsb->size[0];
  /*  check init */
  init = varargin_4;
  if (varargin_4 < X->size[1]) {
    init = X->size[1];
  } else if (varargin_4 < bsb->size[0]) {
    init = bsb->size[0];
  } else if (varargin_4 >= X->size[0]) {
    init = (real_T)X->size[0] - 1.0;
  }
  /*  Initialise key matrices */
  /*  Initialization of the n x 1 Boolean vector which contains a true in */
  /*  correspondence of the units belonging to subset in each step */
  i = bsbT->size[0];
  bsbT->size[0] = X->size[0];
  emxEnsureCapacity_boolean_T(sp, bsbT, i, &jfb_emlrtRTEI);
  loop_ub = X->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[i] = false;
  }
  emxInit_int32_T(sp, &iidx, 1, &ofb_emlrtRTEI, true);
  i = iidx->size[0];
  iidx->size[0] = bsb->size[0];
  emxEnsureCapacity_int32_T(sp, iidx, i, &kfb_emlrtRTEI);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    i1 = (int32_T)bsb->data[i];
    if ((i1 < 1) || (i1 > X->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i], 1, X->size[0],
                                    &wfb_emlrtBCI, (emlrtCTX)sp);
    }
    iidx->data[i] = i1;
  }
  loop_ub = iidx->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[iidx->data[i] - 1] = true;
  }
  /*  sequence from 1 to n. */
  emxInit_real_T(sp, &b_y, 2, &hgb_emlrtRTEI, true);
  if (X->size[0] < 1) {
    b_y->size[0] = 1;
    b_y->size[1] = 0;
  } else {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = X->size[0];
    emxEnsureCapacity_real_T(sp, b_y, i, &fd_emlrtRTEI);
    loop_ub = X->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_y->data[i] = (real_T)i + 1.0;
    }
  }
  emxInit_real_T(sp, &seq, 1, &lfb_emlrtRTEI, true);
  i = seq->size[0];
  seq->size[0] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, seq, i, &lfb_emlrtRTEI);
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq->data[i] = b_y->data[i];
  }
  /*  The second column of matrix R will contain the OLS residuals at each step
   */
  /*  of the forward search */
  st.site = &emb_emlrtRSI;
  b_st.site = &xk_emlrtRSI;
  c_st.site = &yk_emlrtRSI;
  if (X->size[0] != seq->size[0]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &nb_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  emxInit_real_T(&c_st, &r, 2, &mfb_emlrtRTEI, true);
  i = r->size[0] * r->size[1];
  r->size[0] = seq->size[0];
  r->size[1] = 2;
  emxEnsureCapacity_real_T(&b_st, r, i, &mfb_emlrtRTEI);
  loop_ub = seq->size[0];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = seq->data[i];
  }
  loop_ub = X->size[0];
  for (i = 0; i < loop_ub; i++) {
    r->data[i + r->size[0]] = 0.0;
  }
  /*  If n is very large, the step of the search is printed every 100 step */
  /*  seq100 is linked to printing */
  irank = (int32_T)muDoubleScalarCeil((real_T)X->size[0] / 100.0);
  if (irank < 1) {
    b_y->size[0] = 1;
    b_y->size[1] = 0;
  } else {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = irank;
    emxEnsureCapacity_real_T(sp, b_y, i, &xl_emlrtRTEI);
    loop_ub = irank - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_y->data[i] = (real_T)i + 1.0;
    }
  }
  emxInit_real_T(sp, &c_y, 2, &igb_emlrtRTEI, true);
  i = c_y->size[0] * c_y->size[1];
  c_y->size[0] = 1;
  c_y->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, c_y, i, &bs_emlrtRTEI);
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_y->data[i] = 100.0 * b_y->data[i];
  }
  emxInit_real_T(sp, &seq100, 2, &nfb_emlrtRTEI, true);
  i = seq100->size[0] * seq100->size[1];
  seq100->size[0] = 1;
  seq100->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, seq100, i, &nfb_emlrtRTEI);
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq100->data[i] = 100.0 * b_y->data[i];
  }
  p = c_y->size[1] - 1;
  nwhile = 0;
  for (b_loop_ub = 0; b_loop_ub <= p; b_loop_ub++) {
    if (c_y->data[b_loop_ub] <= n) {
      nwhile++;
    }
  }
  emxFree_real_T(&c_y);
  irank = 0;
  for (b_loop_ub = 0; b_loop_ub <= p; b_loop_ub++) {
    if (seq100->data[b_loop_ub] <= n) {
      if (b_loop_ub + 1 > seq100->size[1]) {
        emlrtDynamicBoundsCheckR2012b(b_loop_ub + 1, 1, seq100->size[1],
                                      &xfb_emlrtBCI, (emlrtCTX)sp);
      }
      seq100->data[irank] = seq100->data[b_loop_ub];
      irank++;
    }
  }
  emxInit_boolean_T(sp, &seq100boo, 1, &pfb_emlrtRTEI, true);
  i = seq100->size[0] * seq100->size[1];
  seq100->size[0] = 1;
  seq100->size[1] = nwhile;
  emxEnsureCapacity_real_T(sp, seq100, i, &ofb_emlrtRTEI);
  i = seq100boo->size[0];
  seq100boo->size[0] = X->size[0];
  emxEnsureCapacity_boolean_T(sp, seq100boo, i, &pfb_emlrtRTEI);
  loop_ub = X->size[0];
  for (i = 0; i < loop_ub; i++) {
    seq100boo->data[i] = false;
  }
  emxInit_int32_T(sp, &b_r, 2, &ofb_emlrtRTEI, true);
  i = b_r->size[0] * b_r->size[1];
  b_r->size[0] = 1;
  b_r->size[1] = nwhile;
  emxEnsureCapacity_int32_T(sp, b_r, i, &qfb_emlrtRTEI);
  for (i = 0; i < nwhile; i++) {
    i1 = (int32_T)seq100->data[i];
    if (seq100->data[i] != i1) {
      emlrtIntegerCheckR2012b(seq100->data[i], &je_emlrtDCI, (emlrtCTX)sp);
    }
    if ((i1 < 1) || (i1 > X->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)seq100->data[i], 1, X->size[0],
                                    &yfb_emlrtBCI, (emlrtCTX)sp);
    }
    b_r->data[i] = i1;
  }
  emxFree_real_T(&seq100);
  loop_ub = b_r->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq100boo->data[b_r->data[i] - 1] = true;
  }
  emxFree_int32_T(&b_r);
  /*  Matrix BB will contain the units forming subset in each step (or in */
  /*  selected steps) of the forward search. The first column contains */
  /*  information about units forming subset at step init1. */
  st.site = &dmb_emlrtRSI;
  b_st.site = &xc_emlrtRSI;
  if (muDoubleScalarIsNaN(init)) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, b_y, i, &fd_emlrtRTEI);
    b_y->data[0] = rtNaN;
  } else if (X->size[0] < init) {
    b_y->size[0] = 1;
    b_y->size[1] = 0;
  } else if (muDoubleScalarIsInf(init) && (init == X->size[0])) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, b_y, i, &fd_emlrtRTEI);
    b_y->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(init) == init) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = (int32_T)((real_T)X->size[0] - init) + 1;
    emxEnsureCapacity_real_T(&b_st, b_y, i, &fd_emlrtRTEI);
    loop_ub = (int32_T)((real_T)X->size[0] - init);
    for (i = 0; i <= loop_ub; i++) {
      b_y->data[i] = init + (real_T)i;
    }
  } else {
    c_st.site = &yc_emlrtRSI;
    eml_float_colon(&c_st, init, X->size[0], b_y);
  }
  i = BB->size[0] * BB->size[1];
  BB->size[0] = X->size[0];
  emxEnsureCapacity_real32_T(sp, BB, i, &rfb_emlrtRTEI);
  d = ((real_T)X->size[0] - init) + 1.0;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &ge_emlrtDCI, (emlrtCTX)sp);
  }
  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &fe_emlrtDCI, (emlrtCTX)sp);
  }
  i = BB->size[0] * BB->size[1];
  BB->size[1] = (int32_T)d;
  emxEnsureCapacity_real32_T(sp, BB, i, &rfb_emlrtRTEI);
  d = ((real_T)X->size[0] - init) + 1.0;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &le_emlrtDCI, (emlrtCTX)sp);
  }
  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &ke_emlrtDCI, (emlrtCTX)sp);
  }
  loop_ub = X->size[0] * (int32_T)d;
  for (i = 0; i < loop_ub; i++) {
    BB->data[i] = rtNaNF;
  }
  emxInit_boolean_T(sp, &boobsbsteps, 1, &sfb_emlrtRTEI, true);
  i = boobsbsteps->size[0];
  boobsbsteps->size[0] = X->size[0];
  emxEnsureCapacity_boolean_T(sp, boobsbsteps, i, &sfb_emlrtRTEI);
  loop_ub = X->size[0];
  for (i = 0; i < loop_ub; i++) {
    boobsbsteps->data[i] = false;
  }
  i = iidx->size[0];
  iidx->size[0] = b_y->size[1];
  emxEnsureCapacity_int32_T(sp, iidx, i, &tfb_emlrtRTEI);
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    if (b_y->data[i] != (int32_T)muDoubleScalarFloor(b_y->data[i])) {
      emlrtIntegerCheckR2012b(b_y->data[i], &me_emlrtDCI, (emlrtCTX)sp);
    }
    i1 = (int32_T)b_y->data[i];
    if ((i1 < 1) || (i1 > X->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)b_y->data[i], 1, X->size[0],
                                    &agb_emlrtBCI, (emlrtCTX)sp);
    }
    iidx->data[i] = i1;
  }
  loop_ub = iidx->size[0];
  for (i = 0; i < loop_ub; i++) {
    boobsbsteps->data[iidx->data[i] - 1] = true;
  }
  /*   UN is a Matrix whose 2nd column:11th col contains the unit(s) just */
  /*   included. */
  st.site = &cmb_emlrtRSI;
  b_st.site = &xc_emlrtRSI;
  if (muDoubleScalarIsNaN(init + 1.0)) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, b_y, i, &fd_emlrtRTEI);
    b_y->data[0] = rtNaN;
  } else if (X->size[0] < init + 1.0) {
    b_y->size[0] = 1;
    b_y->size[1] = 0;
  } else if (muDoubleScalarIsInf(init + 1.0) && (init + 1.0 == X->size[0])) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, b_y, i, &fd_emlrtRTEI);
    b_y->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(init + 1.0) == init + 1.0) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] =
        (int32_T)muDoubleScalarFloor((real_T)X->size[0] - (init + 1.0)) + 1;
    emxEnsureCapacity_real_T(&b_st, b_y, i, &fd_emlrtRTEI);
    loop_ub = (int32_T)muDoubleScalarFloor((real_T)X->size[0] - (init + 1.0));
    for (i = 0; i <= loop_ub; i++) {
      b_y->data[i] = (init + 1.0) + (real_T)i;
    }
  } else {
    c_st.site = &yc_emlrtRSI;
    eml_float_colon(&c_st, init + 1.0, X->size[0], b_y);
  }
  d = (real_T)X->size[0] - init;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &oe_emlrtDCI, (emlrtCTX)sp);
  }
  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &ne_emlrtDCI, (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &b, 1, &fgb_emlrtRTEI, true);
  i = b->size[0];
  b->size[0] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, b, i, &ufb_emlrtRTEI);
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    b->data[i] = b_y->data[i];
  }
  emxFree_real_T(&b_y);
  emxInit_real_T(sp, &r1, 2, &vfb_emlrtRTEI, true);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = (int32_T)d;
  r1->size[1] = 10;
  emxEnsureCapacity_real_T(sp, r1, i, &vfb_emlrtRTEI);
  loop_ub = (int32_T)d * 10;
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = rtNaN;
  }
  st.site = &cmb_emlrtRSI;
  b_cat(&st, b, r1, Un);
  /*  The last correctly computed beta oefficients */
  /*  Forward search loop */
  /*  ij = index which is linked with the columns of matrix BB. During the */
  /*  search every time a subset is stored inside matrix BB ij icreases by one
   */
  ij = 1U;
  i = X->size[0] - bsb->size[0];
  emlrtForLoopVectorCheckR2021a(bsb->size[0], 1.0, X->size[0], mxDOUBLE_CLASS,
                                i + 1, &yc_emlrtRTEI, (emlrtCTX)sp);
  emxFree_real_T(&r1);
  emxInit_boolean_T(sp, &oldbsbT, 1, &yfb_emlrtRTEI, true);
  emxInit_real_T(sp, &unit, 1, &ggb_emlrtRTEI, true);
  emxInit_real_T(sp, &r2, 1, &ofb_emlrtRTEI, true);
  for (mm = 0; mm <= i; mm++) {
    b_mm = (uint32_T)ini0 + mm;
    /*  if n>200 show every 100 steps the fwd search index */
    if (n > 200) {
      if (((int32_T)b_mm < 1) || ((int32_T)b_mm > seq100boo->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_mm, 1, seq100boo->size[0],
                                      &bgb_emlrtBCI, (emlrtCTX)sp);
      }
      if (seq100boo->data[(int32_T)b_mm - 1]) {
        /*  OLD CODE if length(intersect(mm,seq100))==1 */
        st.site = &bmb_emlrtRSI;
        int2str(&st, b_mm, tmp_data, b_X);
        tmp_size[0] = 1;
        loop_ub = b_X[1];
        tmp_size[1] = b_X[1] + 2;
        b_tmp_data[0] = 'm';
        b_tmp_data[1] = '=';
        if (0 <= loop_ub - 1) {
          memcpy(&b_tmp_data[2], &tmp_data[0], loop_ub * sizeof(char_T));
        }
        st.site = &cob_emlrtRSI;
        disp(&st, cb_emlrt_marshallOut(&st, b_tmp_data, tmp_size),
             &fd_emlrtMCI);
      }
    }
    /*  Store units belonging to the subset */
    if (b_mm >= init) {
      if (((int32_T)b_mm < 1) || ((int32_T)b_mm > boobsbsteps->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_mm, 1, boobsbsteps->size[0],
                                      &cgb_emlrtBCI, (emlrtCTX)sp);
      }
      if (boobsbsteps->data[(int32_T)b_mm - 1]) {
        /*  OLD CODE */
        /*  intersect(mm,bsbsteps)==mm */
        loop_ub = bsb->size[0];
        i1 = iidx->size[0];
        iidx->size[0] = bsb->size[0];
        emxEnsureCapacity_int32_T(sp, iidx, i1, &wfb_emlrtRTEI);
        for (i1 = 0; i1 < loop_ub; i1++) {
          i2 = (int32_T)bsb->data[i1];
          if ((i2 < 1) || (i2 > BB->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i1], 1,
                                          BB->size[0], &dgb_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          iidx->data[i1] = i2 - 1;
        }
        if (((int32_T)ij < 1) || ((int32_T)ij > BB->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)ij, 1, BB->size[1],
                                        &rfb_emlrtBCI, (emlrtCTX)sp);
        }
        emlrtSubAssignSizeCheckR2012b(&iidx->size[0], 1, &bsb->size[0], 1,
                                      &xd_emlrtECI, (emlrtCTX)sp);
        loop_ub = bsb->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          BB->data[iidx->data[i1] + BB->size[0] * ((int32_T)ij - 1)] =
              (real32_T)bsb->data[i1];
        }
        ij++;
      }
    }
    /*  Compute beta coefficients using subset */
    /*  rank is ok */
    st.site = &amb_emlrtRSI;
    mldivide(&st, Xb, yb, b);
    /*  e= vector of residual for all units using b estimated using subset */
    st.site = &ylb_emlrtRSI;
    b_st.site = &x_emlrtRSI;
    if (b->size[0] != X->size[1]) {
      if (((X->size[0] == 1) && (X->size[1] == 1)) || (b->size[0] == 1)) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &j_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &k_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    b_st.site = &w_emlrtRSI;
    mtimes(&b_st, X, b, r2);
    loop_ub = y->size[0];
    if (y->size[0] != r2->size[0]) {
      emlrtSizeEqCheck1DR2012b(y->size[0], r2->size[0], &td_emlrtECI,
                               (emlrtCTX)sp);
    }
    i1 = b->size[0];
    b->size[0] = y->size[0];
    emxEnsureCapacity_real_T(sp, b, i1, &xfb_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b->data[i1] = y->data[i1] - r2->data[i1];
    }
    st.site = &xlb_emlrtRSI;
    power(&st, b, r2);
    emlrtSubAssignSizeCheckR2012b(&r->size[0], 1, &r2->size[0], 1, &ud_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = r2->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      r->data[i1 + r->size[0]] = r2->data[i1];
    }
    if (b_mm < (uint32_T)n) {
      /*  store units forming old subset in vector oldbsb */
      loop_ub = bsbT->size[0];
      i1 = oldbsbT->size[0];
      oldbsbT->size[0] = bsbT->size[0];
      emxEnsureCapacity_boolean_T(sp, oldbsbT, i1, &yfb_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        oldbsbT->data[i1] = bsbT->data[i1];
      }
      /*  order the r_i and include the smallest among the units forming */
      /*  the group of potential outliers */
      /*  ord=sortrows(r,2); */
      st.site = &wlb_emlrtRSI;
      loop_ub = r->size[0];
      i1 = b->size[0];
      b->size[0] = r->size[0];
      emxEnsureCapacity_real_T(&st, b, i1, &tk_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b->data[i1] = r->data[i1 + r->size[0]];
      }
      b_st.site = &jl_emlrtRSI;
      sort(&b_st, b, iidx);
      i1 = b->size[0];
      b->size[0] = iidx->size[0];
      emxEnsureCapacity_real_T(&st, b, i1, &df_emlrtRTEI);
      loop_ub = iidx->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b->data[i1] = iidx->data[i1];
      }
      /*  bsb= units forming the new subset */
      if (1 > b->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, b->size[0], &nfb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if ((int32_T)b_mm + 1 > b->size[0]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_mm + 1, 1, b->size[0],
                                      &ofb_emlrtBCI, (emlrtCTX)sp);
      }
      i1 = bsb->size[0];
      bsb->size[0] = (int32_T)b_mm + 1;
      emxEnsureCapacity_real_T(sp, bsb, i1, &agb_emlrtRTEI);
      loop_ub = (int32_T)b_mm;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        bsb->data[i1] = b->data[i1];
      }
      i1 = bsbT->size[0];
      bsbT->size[0] = n;
      emxEnsureCapacity_boolean_T(sp, bsbT, i1, &bgb_emlrtRTEI);
      for (i1 = 0; i1 < n; i1++) {
        bsbT->data[i1] = false;
      }
      i1 = iidx->size[0];
      iidx->size[0] = (int32_T)b_mm + 1;
      emxEnsureCapacity_int32_T(sp, iidx, i1, &cgb_emlrtRTEI);
      loop_ub = (int32_T)b_mm;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        i2 = (int32_T)b->data[i1];
        if ((i2 < 1) || (i2 > n)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b->data[i1], 1, n,
                                        &egb_emlrtBCI, (emlrtCTX)sp);
        }
        iidx->data[i1] = i2;
      }
      loop_ub = iidx->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        bsbT->data[iidx->data[i1] - 1] = true;
      }
      loop_ub = X->size[1];
      i1 = Xb->size[0] * Xb->size[1];
      Xb->size[0] = (int32_T)b_mm + 1;
      Xb->size[1] = X->size[1];
      emxEnsureCapacity_real_T(sp, Xb, i1, &dgb_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_loop_ub = (int32_T)b_mm;
        for (i2 = 0; i2 <= b_loop_ub; i2++) {
          irank = (int32_T)b->data[i2];
          if ((irank < 1) || (irank > X->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b->data[i2], 1, X->size[0],
                                          &fgb_emlrtBCI, (emlrtCTX)sp);
          }
          Xb->data[i2 + Xb->size[0] * i1] =
              X->data[(irank + X->size[0] * i1) - 1];
        }
      }
      /*  subset of X */
      i1 = yb->size[0];
      yb->size[0] = (int32_T)b_mm + 1;
      emxEnsureCapacity_real_T(sp, yb, i1, &egb_emlrtRTEI);
      loop_ub = (int32_T)b_mm;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        i2 = (int32_T)b->data[i1];
        if ((i2 < 1) || (i2 > y->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b->data[i1], 1, y->size[0],
                                        &ggb_emlrtBCI, (emlrtCTX)sp);
        }
        yb->data[i1] = y->data[i2 - 1];
      }
      /*  subset of y */
      if (b_mm >= init) {
        /*  unit = vector containing units which just entered subset; */
        /*  unit=setdiff(bsb,oldbsb); */
        /*  new instruction to find unit */
        loop_ub = oldbsbT->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          oldbsbT->data[i1] = !oldbsbT->data[i1];
        }
        if (bsbT->size[0] != oldbsbT->size[0]) {
          emlrtSizeEqCheck1DR2012b(bsbT->size[0], oldbsbT->size[0],
                                   &vd_emlrtECI, (emlrtCTX)sp);
        }
        p = bsbT->size[0] - 1;
        nwhile = 0;
        for (b_loop_ub = 0; b_loop_ub <= p; b_loop_ub++) {
          if (bsbT->data[b_loop_ub] && oldbsbT->data[b_loop_ub]) {
            nwhile++;
          }
        }
        i1 = unit->size[0];
        unit->size[0] = nwhile;
        emxEnsureCapacity_real_T(sp, unit, i1, &ofb_emlrtRTEI);
        irank = 0;
        for (b_loop_ub = 0; b_loop_ub <= p; b_loop_ub++) {
          if (bsbT->data[b_loop_ub] && oldbsbT->data[b_loop_ub]) {
            if (b_loop_ub + 1 > seq->size[0]) {
              emlrtDynamicBoundsCheckR2012b(b_loop_ub + 1, 1, seq->size[0],
                                            &hgb_emlrtBCI, (emlrtCTX)sp);
            }
            unit->data[irank] = seq->data[b_loop_ub];
            irank++;
          }
        }
        /*  If the interchange involves more than 10 units, store only the */
        /*  first 10. */
        if (unit->size[0] <= 10) {
          if (2 > unit->size[0] + 1) {
            i1 = -1;
            i2 = -1;
          } else {
            i1 = 0;
            i2 = unit->size[0];
          }
          d = ((real_T)b_mm - init) + 1.0;
          if (d != (int32_T)muDoubleScalarFloor(d)) {
            emlrtIntegerCheckR2012b(d, &de_emlrtDCI, (emlrtCTX)sp);
          }
          if (((int32_T)d < 1) || ((int32_T)d > Un->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Un->size[0],
                                          &pfb_emlrtBCI, (emlrtCTX)sp);
          }
          b_X[0] = 1;
          irank = i2 - i1;
          b_X[1] = irank;
          emlrtSubAssignSizeCheckR2012b(&b_X[0], 2, &unit->size[0], 1,
                                        &wd_emlrtECI, (emlrtCTX)sp);
          for (i2 = 0; i2 < irank; i2++) {
            Un->data[((int32_T)d + Un->size[0] * ((i1 + i2) + 1)) - 1] =
                unit->data[i2];
          }
        } else {
          st.site = &vlb_emlrtRSI;
          int2str(&st, b_mm, tmp_data, b_X);
          b_tmp_size[0] = 1;
          loop_ub = b_X[1];
          b_tmp_size[1] = b_X[1] + 44;
          for (i1 = 0; i1 < 44; i1++) {
            c_tmp_data[i1] = cv15[i1];
          }
          if (0 <= loop_ub - 1) {
            memcpy(&c_tmp_data[44], &tmp_data[0], loop_ub * sizeof(char_T));
          }
          st.site = &bob_emlrtRSI;
          disp(&st, cb_emlrt_marshallOut(&st, c_tmp_data, b_tmp_size),
               &gd_emlrtMCI);
          st.site = &ulb_emlrtRSI;
          c_indexShapeCheck(&st, unit->size[0]);
          d = ((real_T)b_mm - init) + 1.0;
          if (d != (int32_T)muDoubleScalarFloor(d)) {
            emlrtIntegerCheckR2012b(d, &ee_emlrtDCI, (emlrtCTX)sp);
          }
          if (((int32_T)d < 1) || ((int32_T)d > Un->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Un->size[0],
                                          &qfb_emlrtBCI, (emlrtCTX)sp);
          }
          for (i1 = 0; i1 < 10; i1++) {
            Un->data[((int32_T)d + Un->size[0] * (i1 + 1)) - 1] =
                unit->data[i1];
          }
        }
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_int32_T(&iidx);
  emxFree_real_T(&r2);
  emxFree_real_T(&unit);
  emxFree_boolean_T(&oldbsbT);
  emxFree_real_T(&b);
  emxFree_boolean_T(&boobsbsteps);
  emxFree_boolean_T(&seq100boo);
  emxFree_real_T(&r);
  emxFree_real_T(&seq);
  emxFree_boolean_T(&bsbT);
  emxFree_real_T(&yb);
  emxFree_real_T(&Xb);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (FSRbsb.c) */
