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
#include "eml_mtimes_helper.h"
#include "ifWhileCond.h"
#include "indexShapeCheck.h"
#include "int2str.h"
#include "linsolve.h"
#include "mtimes.h"
#include "power.h"
#include "randsample.h"
#include "rank.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo kmb_emlrtRSI = {
    505,                                              /* lineNo */
    "FSRbsb",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pathName */
};

static emlrtRSInfo lmb_emlrtRSI = {
    504,                                              /* lineNo */
    "FSRbsb",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pathName */
};

static emlrtRSInfo mmb_emlrtRSI = {
    480,                                              /* lineNo */
    "FSRbsb",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pathName */
};

static emlrtRSInfo nmb_emlrtRSI = {
    470,                                              /* lineNo */
    "FSRbsb",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pathName */
};

static emlrtRSInfo omb_emlrtRSI = {
    468,                                              /* lineNo */
    "FSRbsb",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pathName */
};

static emlrtRSInfo pmb_emlrtRSI = {
    450,                                              /* lineNo */
    "FSRbsb",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pathName */
};

static emlrtRSInfo qmb_emlrtRSI = {
    429,                                              /* lineNo */
    "FSRbsb",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pathName */
};

static emlrtRSInfo rmb_emlrtRSI = {
    399,                                              /* lineNo */
    "FSRbsb",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pathName */
};

static emlrtRSInfo smb_emlrtRSI = {
    372,                                              /* lineNo */
    "FSRbsb",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pathName */
};

static emlrtRSInfo tmb_emlrtRSI = {
    344,                                              /* lineNo */
    "FSRbsb",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pathName */
};

static emlrtRSInfo umb_emlrtRSI = {
    278,                                              /* lineNo */
    "FSRbsb",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pathName */
};

static emlrtRSInfo vmb_emlrtRSI = {
    276,                                              /* lineNo */
    "FSRbsb",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pathName */
};

static emlrtRSInfo wmb_emlrtRSI = {
    273,                                              /* lineNo */
    "FSRbsb",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pathName */
};

static emlrtMCInfo ld_emlrtMCI = {
    429,                                              /* lineNo */
    17,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtMCInfo md_emlrtMCI = {
    504,                                              /* lineNo */
    21,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtBCInfo igb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    270,                                               /* lineNo */
    6,                                                 /* colNo */
    "X",                                               /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo jgb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    270,                                               /* lineNo */
    8,                                                 /* colNo */
    "X",                                               /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtRTEInfo bd_emlrtRTEI = {
    423,                                              /* lineNo */
    14,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtECInfo ae_emlrtECI = {
    -1,                                               /* nDims */
    468,                                              /* lineNo */
    11,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtECInfo be_emlrtECI = {
    -1,                                               /* nDims */
    470,                                              /* lineNo */
    9,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtBCInfo kgb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    483,                                               /* lineNo */
    21,                                                /* colNo */
    "ord",                                             /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo lgb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    483,                                               /* lineNo */
    24,                                                /* colNo */
    "ord",                                             /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtECInfo ce_emlrtECI = {
    -1,                                               /* nDims */
    497,                                              /* lineNo */
    26,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtDCInfo le_emlrtDCI = {
    502,                                               /* lineNo */
    24,                                                /* colNo */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo mgb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    502,                                               /* lineNo */
    24,                                                /* colNo */
    "Un",                                              /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtECInfo de_emlrtECI = {
    -1,                                               /* nDims */
    502,                                              /* lineNo */
    21,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtDCInfo me_emlrtDCI = {
    505,                                               /* lineNo */
    24,                                                /* colNo */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo ngb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    505,                                               /* lineNo */
    24,                                                /* colNo */
    "Un",                                              /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo ogb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    438,                                               /* lineNo */
    24,                                                /* colNo */
    "BB",                                              /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtECInfo ee_emlrtECI = {
    -1,                                               /* nDims */
    438,                                              /* lineNo */
    17,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtDCInfo ne_emlrtDCI = {
    376,                                               /* lineNo */
    20,                                                /* colNo */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtDCInfo oe_emlrtDCI = {
    376,                                               /* lineNo */
    20,                                                /* colNo */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    4                                                  /* checkKind */
};

static emlrtBCInfo pgb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    299,                                               /* lineNo */
    10,                                                /* colNo */
    "X",                                               /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo pe_emlrtDCI = {
    299,                                               /* lineNo */
    10,                                                /* colNo */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo qgb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    300,                                               /* lineNo */
    10,                                                /* colNo */
    "y",                                               /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo rgb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    286,                                               /* lineNo */
    10,                                                /* colNo */
    "y",                                               /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo qe_emlrtDCI = {
    286,                                               /* lineNo */
    10,                                                /* colNo */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo sgb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    277,                                               /* lineNo */
    14,                                                /* colNo */
    "X",                                               /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo tgb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    337,                                               /* lineNo */
    6,                                                 /* colNo */
    "bsbT",                                            /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo ugb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    349,                                               /* lineNo */
    8,                                                 /* colNo */
    "seq100",                                          /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo re_emlrtDCI = {
    351,                                               /* lineNo */
    11,                                                /* colNo */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo vgb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    351,                                               /* lineNo */
    11,                                                /* colNo */
    "seq100boo",                                       /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo se_emlrtDCI = {
    376,                                               /* lineNo */
    9,                                                 /* colNo */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtDCInfo te_emlrtDCI = {
    376,                                               /* lineNo */
    9,                                                 /* colNo */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    4                                                  /* checkKind */
};

static emlrtDCInfo ue_emlrtDCI = {
    394,                                               /* lineNo */
    13,                                                /* colNo */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo wgb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    394,                                               /* lineNo */
    13,                                                /* colNo */
    "boobsbsteps",                                     /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo ve_emlrtDCI = {
    399,                                               /* lineNo */
    32,                                                /* colNo */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtDCInfo we_emlrtDCI = {
    399,                                               /* lineNo */
    32,                                                /* colNo */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    4                                                  /* checkKind */
};

static emlrtBCInfo xgb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    427,                                               /* lineNo */
    17,                                                /* colNo */
    "seq100boo",                                       /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo ygb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    435,                                               /* lineNo */
    16,                                                /* colNo */
    "boobsbsteps",                                     /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo ahb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    438,                                               /* lineNo */
    20,                                                /* colNo */
    "BB",                                              /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo bhb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    486,                                               /* lineNo */
    18,                                                /* colNo */
    "bsbT",                                            /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo chb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    489,                                               /* lineNo */
    18,                                                /* colNo */
    "X",                                               /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo dhb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    490,                                               /* lineNo */
    18,                                                /* colNo */
    "y",                                               /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo ehb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    497,                                               /* lineNo */
    22,                                                /* colNo */
    "seq",                                             /* aName */
    "FSRbsb",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtRTEInfo wgb_emlrtRTEI = {
    270,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo xgb_emlrtRTEI = {
    273,                                              /* lineNo */
    4,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo ygb_emlrtRTEI = {
    299,                                              /* lineNo */
    5,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo ahb_emlrtRTEI = {
    286,                                              /* lineNo */
    5,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo bhb_emlrtRTEI = {
    300,                                              /* lineNo */
    5,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo chb_emlrtRTEI = {
    277,                                              /* lineNo */
    9,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo dhb_emlrtRTEI = {
    336,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo ehb_emlrtRTEI = {
    337,                                              /* lineNo */
    6,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo fhb_emlrtRTEI = {
    340,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo ghb_emlrtRTEI = {
    344,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo hhb_emlrtRTEI = {
    348,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo ihb_emlrtRTEI = {
    1,                                                /* lineNo */
    20,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo jhb_emlrtRTEI = {
    350,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo khb_emlrtRTEI = {
    351,                                              /* lineNo */
    11,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo lhb_emlrtRTEI = {
    376,                                              /* lineNo */
    9,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo mhb_emlrtRTEI = {
    393,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo nhb_emlrtRTEI = {
    394,                                              /* lineNo */
    13,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo ohb_emlrtRTEI = {
    399,                                              /* lineNo */
    14,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo phb_emlrtRTEI = {
    399,                                              /* lineNo */
    28,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo qhb_emlrtRTEI = {
    402,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo rhb_emlrtRTEI = {
    438,                                              /* lineNo */
    20,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo shb_emlrtRTEI = {
    461,                                              /* lineNo */
    13,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo thb_emlrtRTEI = {
    459,                                              /* lineNo */
    13,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo uhb_emlrtRTEI = {
    468,                                              /* lineNo */
    11,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo vhb_emlrtRTEI = {
    475,                                              /* lineNo */
    13,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo whb_emlrtRTEI = {
    483,                                              /* lineNo */
    13,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo xhb_emlrtRTEI = {
    485,                                              /* lineNo */
    13,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo yhb_emlrtRTEI = {
    486,                                              /* lineNo */
    18,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo aib_emlrtRTEI = {
    489,                                              /* lineNo */
    13,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo bib_emlrtRTEI = {
    490,                                              /* lineNo */
    13,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo cib_emlrtRTEI = {
    450,                                              /* lineNo */
    10,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo dib_emlrtRTEI = {
    497,                                              /* lineNo */
    17,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo eib_emlrtRTEI = {
    340,                                              /* lineNo */
    8,                                                /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRTEInfo fib_emlrtRTEI = {
    348,                                              /* lineNo */
    10,                                               /* colNo */
    "FSRbsb",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pName */
};

static emlrtRSInfo rob_emlrtRSI = {
    504,                                              /* lineNo */
    "FSRbsb",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pathName */
};

static emlrtRSInfo sob_emlrtRSI = {
    429,                                              /* lineNo */
    "FSRbsb",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRbsb.m" /* pathName */
};

/* Function Definitions */
void FSRbsb(const emlrtStack *sp, const emxArray_real_T *y,
            const emxArray_real_T *X, emxArray_real_T *bsb, real_T varargin_4,
            emxArray_real_T *Un, emxArray_real_T *BB)
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
  emxArray_real_T *blast;
  emxArray_real_T *c_y;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *seq;
  emxArray_real_T *seq100;
  emxArray_real_T *unit;
  emxArray_real_T *yb;
  real_T condNumber;
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
  /*  Atkinson, A.C. and Riani, M. (2000), "Robust Diagnostic Regression */
  /*  Analysis", Springer Verlag, New York. */
  /*  */
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
      emlrtDynamicBoundsCheckR2012b(1, 1, X->size[0], &igb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (X->size[1] > X->size[0]) {
      emlrtDynamicBoundsCheckR2012b(X->size[1], 1, X->size[0], &jgb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    loop_ub = X->size[1];
  }
  emxInit_real_T(sp, &Xb, 2, &wgb_emlrtRTEI, true);
  b_loop_ub = X->size[1];
  i = Xb->size[0] * Xb->size[1];
  Xb->size[0] = loop_ub;
  Xb->size[1] = X->size[1];
  emxEnsureCapacity_real_T(sp, Xb, i, &wgb_emlrtRTEI);
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      Xb->data[i1 + Xb->size[0] * i] = X->data[i1 + X->size[0] * i];
    }
  }
  emxInit_boolean_T(sp, &bsbT, 1, &dhb_emlrtRTEI, true);
  i = bsbT->size[0];
  bsbT->size[0] = bsb->size[0];
  emxEnsureCapacity_boolean_T(sp, bsbT, i, &xgb_emlrtRTEI);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[i] = (bsb->data[i] == 0.0);
  }
  emxInit_real_T(sp, &yb, 1, &ahb_emlrtRTEI, true);
  st.site = &wmb_emlrtRSI;
  if (b_ifWhileCond(&st, bsbT)) {
    Ra = true;
    nwhile = 1;
    while (Ra && (nwhile < 100)) {
      st.site = &vmb_emlrtRSI;
      randsample(&st, n, p, bsb);
      loop_ub = X->size[1];
      i = Xb->size[0] * Xb->size[1];
      Xb->size[0] = bsb->size[0];
      Xb->size[1] = X->size[1];
      emxEnsureCapacity_real_T(sp, Xb, i, &chb_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        b_loop_ub = bsb->size[0];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          i2 = (int32_T)bsb->data[i1];
          if ((i2 < 1) || (i2 > X->size[0])) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, X->size[0], &sgb_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          Xb->data[i1 + Xb->size[0] * i] = X->data[(i2 + X->size[0] * i) - 1];
        }
      }
      st.site = &umb_emlrtRSI;
      b_st.site = &mc_emlrtRSI;
      irank = local_rank(&b_st, Xb);
      Ra = (irank < p);
      nwhile++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }
    i = yb->size[0];
    yb->size[0] = bsb->size[0];
    emxEnsureCapacity_real_T(sp, yb, i, &ahb_emlrtRTEI);
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      if (bsb->data[i] != (int32_T)muDoubleScalarFloor(bsb->data[i])) {
        emlrtIntegerCheckR2012b(bsb->data[i], &qe_emlrtDCI, (emlrtCTX)sp);
      }
      i1 = (int32_T)bsb->data[i];
      if ((i1 < 1) || (i1 > y->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, y->size[0], &rgb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      yb->data[i] = y->data[i1 - 1];
    }
  } else {
    loop_ub = X->size[1];
    i = Xb->size[0] * Xb->size[1];
    Xb->size[0] = bsb->size[0];
    Xb->size[1] = X->size[1];
    emxEnsureCapacity_real_T(sp, Xb, i, &ygb_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = bsb->size[0];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        if (bsb->data[i1] != (int32_T)muDoubleScalarFloor(bsb->data[i1])) {
          emlrtIntegerCheckR2012b(bsb->data[i1], &pe_emlrtDCI, (emlrtCTX)sp);
        }
        i2 = (int32_T)bsb->data[i1];
        if ((i2 < 1) || (i2 > X->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, X->size[0], &pgb_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        Xb->data[i1 + Xb->size[0] * i] = X->data[(i2 + X->size[0] * i) - 1];
      }
    }
    i = yb->size[0];
    yb->size[0] = bsb->size[0];
    emxEnsureCapacity_real_T(sp, yb, i, &bhb_emlrtRTEI);
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)bsb->data[i];
      if ((i1 < 1) || (i1 > y->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i], 1, y->size[0],
                                      &qgb_emlrtBCI, (emlrtCTX)sp);
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
  emxEnsureCapacity_boolean_T(sp, bsbT, i, &dhb_emlrtRTEI);
  loop_ub = X->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[i] = false;
  }
  emxInit_int32_T(sp, &iidx, 1, &ihb_emlrtRTEI, true);
  i = iidx->size[0];
  iidx->size[0] = bsb->size[0];
  emxEnsureCapacity_int32_T(sp, iidx, i, &ehb_emlrtRTEI);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    i1 = (int32_T)bsb->data[i];
    if ((i1 < 1) || (i1 > X->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i], 1, X->size[0],
                                    &tgb_emlrtBCI, (emlrtCTX)sp);
    }
    iidx->data[i] = i1;
  }
  loop_ub = iidx->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[iidx->data[i] - 1] = true;
  }
  /*  sequence from 1 to n. */
  emxInit_real_T(sp, &b_y, 2, &eib_emlrtRTEI, true);
  if (X->size[0] < 1) {
    b_y->size[0] = 1;
    b_y->size[1] = 0;
  } else {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = X->size[0];
    emxEnsureCapacity_real_T(sp, b_y, i, &hd_emlrtRTEI);
    loop_ub = X->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_y->data[i] = (real_T)i + 1.0;
    }
  }
  emxInit_real_T(sp, &seq, 1, &fhb_emlrtRTEI, true);
  i = seq->size[0];
  seq->size[0] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, seq, i, &fhb_emlrtRTEI);
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq->data[i] = b_y->data[i];
  }
  /*  The second column of matrix R will contain the OLS residuals at each step
   */
  /*  of the forward search */
  st.site = &tmb_emlrtRSI;
  b_st.site = &fl_emlrtRSI;
  c_st.site = &gl_emlrtRSI;
  if (X->size[0] != seq->size[0]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &ob_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  emxInit_real_T(&c_st, &r, 2, &ghb_emlrtRTEI, true);
  i = r->size[0] * r->size[1];
  r->size[0] = seq->size[0];
  r->size[1] = 2;
  emxEnsureCapacity_real_T(&b_st, r, i, &ghb_emlrtRTEI);
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
    emxEnsureCapacity_real_T(sp, b_y, i, &vm_emlrtRTEI);
    loop_ub = irank - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_y->data[i] = (real_T)i + 1.0;
    }
  }
  emxInit_real_T(sp, &c_y, 2, &fib_emlrtRTEI, true);
  i = c_y->size[0] * c_y->size[1];
  c_y->size[0] = 1;
  c_y->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, c_y, i, &ys_emlrtRTEI);
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_y->data[i] = 100.0 * b_y->data[i];
  }
  emxInit_real_T(sp, &seq100, 2, &hhb_emlrtRTEI, true);
  i = seq100->size[0] * seq100->size[1];
  seq100->size[0] = 1;
  seq100->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, seq100, i, &hhb_emlrtRTEI);
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq100->data[i] = 100.0 * b_y->data[i];
  }
  nwhile = c_y->size[1] - 1;
  b_loop_ub = 0;
  for (loop_ub = 0; loop_ub <= nwhile; loop_ub++) {
    if (c_y->data[loop_ub] <= n) {
      b_loop_ub++;
    }
  }
  emxFree_real_T(&c_y);
  irank = 0;
  for (loop_ub = 0; loop_ub <= nwhile; loop_ub++) {
    if (seq100->data[loop_ub] <= n) {
      if (loop_ub + 1 > seq100->size[1]) {
        emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, seq100->size[1],
                                      &ugb_emlrtBCI, (emlrtCTX)sp);
      }
      seq100->data[irank] = seq100->data[loop_ub];
      irank++;
    }
  }
  emxInit_boolean_T(sp, &seq100boo, 1, &jhb_emlrtRTEI, true);
  i = seq100->size[0] * seq100->size[1];
  seq100->size[0] = 1;
  seq100->size[1] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, seq100, i, &ihb_emlrtRTEI);
  i = seq100boo->size[0];
  seq100boo->size[0] = X->size[0];
  emxEnsureCapacity_boolean_T(sp, seq100boo, i, &jhb_emlrtRTEI);
  loop_ub = X->size[0];
  for (i = 0; i < loop_ub; i++) {
    seq100boo->data[i] = false;
  }
  emxInit_int32_T(sp, &b_r, 2, &ihb_emlrtRTEI, true);
  i = b_r->size[0] * b_r->size[1];
  b_r->size[0] = 1;
  b_r->size[1] = b_loop_ub;
  emxEnsureCapacity_int32_T(sp, b_r, i, &khb_emlrtRTEI);
  for (i = 0; i < b_loop_ub; i++) {
    i1 = (int32_T)seq100->data[i];
    if (seq100->data[i] != i1) {
      emlrtIntegerCheckR2012b(seq100->data[i], &re_emlrtDCI, (emlrtCTX)sp);
    }
    if ((i1 < 1) || (i1 > X->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)seq100->data[i], 1, X->size[0],
                                    &vgb_emlrtBCI, (emlrtCTX)sp);
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
  st.site = &smb_emlrtRSI;
  b_st.site = &fd_emlrtRSI;
  if (muDoubleScalarIsNaN(init)) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, b_y, i, &hd_emlrtRTEI);
    b_y->data[0] = rtNaN;
  } else if (X->size[0] < init) {
    b_y->size[0] = 1;
    b_y->size[1] = 0;
  } else if (muDoubleScalarIsInf(init) && (init == X->size[0])) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, b_y, i, &hd_emlrtRTEI);
    b_y->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(init) == init) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = (int32_T)((real_T)X->size[0] - init) + 1;
    emxEnsureCapacity_real_T(&b_st, b_y, i, &hd_emlrtRTEI);
    loop_ub = (int32_T)((real_T)X->size[0] - init);
    for (i = 0; i <= loop_ub; i++) {
      b_y->data[i] = init + (real_T)i;
    }
  } else {
    c_st.site = &gd_emlrtRSI;
    eml_float_colon(&c_st, init, X->size[0], b_y);
  }
  i = BB->size[0] * BB->size[1];
  BB->size[0] = X->size[0];
  emxEnsureCapacity_real_T(sp, BB, i, &lhb_emlrtRTEI);
  condNumber = ((real_T)X->size[0] - init) + 1.0;
  if (!(condNumber >= 0.0)) {
    emlrtNonNegativeCheckR2012b(condNumber, &oe_emlrtDCI, (emlrtCTX)sp);
  }
  if (condNumber != (int32_T)muDoubleScalarFloor(condNumber)) {
    emlrtIntegerCheckR2012b(condNumber, &ne_emlrtDCI, (emlrtCTX)sp);
  }
  i = BB->size[0] * BB->size[1];
  BB->size[1] = (int32_T)condNumber;
  emxEnsureCapacity_real_T(sp, BB, i, &lhb_emlrtRTEI);
  condNumber = ((real_T)X->size[0] - init) + 1.0;
  if (!(condNumber >= 0.0)) {
    emlrtNonNegativeCheckR2012b(condNumber, &te_emlrtDCI, (emlrtCTX)sp);
  }
  if (condNumber != (int32_T)muDoubleScalarFloor(condNumber)) {
    emlrtIntegerCheckR2012b(condNumber, &se_emlrtDCI, (emlrtCTX)sp);
  }
  loop_ub = X->size[0] * (int32_T)condNumber;
  for (i = 0; i < loop_ub; i++) {
    BB->data[i] = rtNaN;
  }
  emxInit_boolean_T(sp, &boobsbsteps, 1, &mhb_emlrtRTEI, true);
  i = boobsbsteps->size[0];
  boobsbsteps->size[0] = X->size[0];
  emxEnsureCapacity_boolean_T(sp, boobsbsteps, i, &mhb_emlrtRTEI);
  loop_ub = X->size[0];
  for (i = 0; i < loop_ub; i++) {
    boobsbsteps->data[i] = false;
  }
  i = iidx->size[0];
  iidx->size[0] = b_y->size[1];
  emxEnsureCapacity_int32_T(sp, iidx, i, &nhb_emlrtRTEI);
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    if (b_y->data[i] != (int32_T)muDoubleScalarFloor(b_y->data[i])) {
      emlrtIntegerCheckR2012b(b_y->data[i], &ue_emlrtDCI, (emlrtCTX)sp);
    }
    i1 = (int32_T)b_y->data[i];
    if ((i1 < 1) || (i1 > X->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)b_y->data[i], 1, X->size[0],
                                    &wgb_emlrtBCI, (emlrtCTX)sp);
    }
    iidx->data[i] = i1;
  }
  loop_ub = iidx->size[0];
  for (i = 0; i < loop_ub; i++) {
    boobsbsteps->data[iidx->data[i] - 1] = true;
  }
  /*   UN is a Matrix whose 2nd column:11th col contains the unit(s) just */
  /*   included. */
  st.site = &rmb_emlrtRSI;
  b_st.site = &fd_emlrtRSI;
  if (muDoubleScalarIsNaN(init + 1.0)) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, b_y, i, &hd_emlrtRTEI);
    b_y->data[0] = rtNaN;
  } else if (X->size[0] < init + 1.0) {
    b_y->size[0] = 1;
    b_y->size[1] = 0;
  } else if (muDoubleScalarIsInf(init + 1.0) && (init + 1.0 == X->size[0])) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, b_y, i, &hd_emlrtRTEI);
    b_y->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(init + 1.0) == init + 1.0) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] =
        (int32_T)muDoubleScalarFloor((real_T)X->size[0] - (init + 1.0)) + 1;
    emxEnsureCapacity_real_T(&b_st, b_y, i, &hd_emlrtRTEI);
    loop_ub = (int32_T)muDoubleScalarFloor((real_T)X->size[0] - (init + 1.0));
    for (i = 0; i <= loop_ub; i++) {
      b_y->data[i] = (init + 1.0) + (real_T)i;
    }
  } else {
    c_st.site = &gd_emlrtRSI;
    eml_float_colon(&c_st, init + 1.0, X->size[0], b_y);
  }
  condNumber = (real_T)X->size[0] - init;
  if (!(condNumber >= 0.0)) {
    emlrtNonNegativeCheckR2012b(condNumber, &we_emlrtDCI, (emlrtCTX)sp);
  }
  if (condNumber != (int32_T)muDoubleScalarFloor(condNumber)) {
    emlrtIntegerCheckR2012b(condNumber, &ve_emlrtDCI, (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &b, 1, &cib_emlrtRTEI, true);
  i = b->size[0];
  b->size[0] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, b, i, &ohb_emlrtRTEI);
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    b->data[i] = b_y->data[i];
  }
  emxFree_real_T(&b_y);
  emxInit_real_T(sp, &r1, 2, &phb_emlrtRTEI, true);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = (int32_T)condNumber;
  r1->size[1] = 10;
  emxEnsureCapacity_real_T(sp, r1, i, &phb_emlrtRTEI);
  loop_ub = (int32_T)condNumber * 10;
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = rtNaN;
  }
  emxInit_real_T(sp, &blast, 1, &qhb_emlrtRTEI, true);
  st.site = &rmb_emlrtRSI;
  b_cat(&st, b, r1, Un);
  /*  The last correctly computed beta oefficients */
  i = blast->size[0];
  blast->size[0] = X->size[1];
  emxEnsureCapacity_real_T(sp, blast, i, &qhb_emlrtRTEI);
  loop_ub = X->size[1];
  emxFree_real_T(&r1);
  for (i = 0; i < loop_ub; i++) {
    blast->data[i] = rtNaN;
  }
  /*  opts is a structure which contains the options to use in linsolve */
  /*  Forward search loop */
  /*  ij = index which is linked with the columns of matrix BB. During the */
  /*  search every time a subset is stored inside matrix BB ij increases by one
   */
  ij = 1U;
  i = X->size[0] - bsb->size[0];
  emlrtForLoopVectorCheckR2021a(bsb->size[0], 1.0, X->size[0], mxDOUBLE_CLASS,
                                i + 1, &bd_emlrtRTEI, (emlrtCTX)sp);
  emxInit_boolean_T(sp, &oldbsbT, 1, &vhb_emlrtRTEI, true);
  emxInit_real_T(sp, &unit, 1, &dib_emlrtRTEI, true);
  emxInit_real_T(sp, &r2, 1, &ihb_emlrtRTEI, true);
  for (mm = 0; mm <= i; mm++) {
    b_mm = (uint32_T)ini0 + mm;
    /*  if n>200 show every 100 steps the fwd search index */
    if (n > 200) {
      if (((int32_T)b_mm < 1) || ((int32_T)b_mm > seq100boo->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_mm, 1, seq100boo->size[0],
                                      &xgb_emlrtBCI, (emlrtCTX)sp);
      }
      if (seq100boo->data[(int32_T)b_mm - 1]) {
        /*  OLD CODE if length(intersect(mm,seq100))==1 */
        st.site = &qmb_emlrtRSI;
        int2str(&st, b_mm, tmp_data, b_X);
        tmp_size[0] = 1;
        loop_ub = b_X[1];
        tmp_size[1] = b_X[1] + 2;
        b_tmp_data[0] = 'm';
        b_tmp_data[1] = '=';
        if (0 <= loop_ub - 1) {
          memcpy(&b_tmp_data[2], &tmp_data[0], loop_ub * sizeof(char_T));
        }
        st.site = &sob_emlrtRSI;
        disp(&st, cb_emlrt_marshallOut(&st, b_tmp_data, tmp_size),
             &ld_emlrtMCI);
      }
    }
    /*  Store units belonging to the subset */
    if (b_mm >= init) {
      if (((int32_T)b_mm < 1) || ((int32_T)b_mm > boobsbsteps->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_mm, 1, boobsbsteps->size[0],
                                      &ygb_emlrtBCI, (emlrtCTX)sp);
      }
      if (boobsbsteps->data[(int32_T)b_mm - 1]) {
        /*  OLD CODE */
        /*  intersect(mm,bsbsteps)==mm */
        loop_ub = bsb->size[0];
        i1 = iidx->size[0];
        iidx->size[0] = bsb->size[0];
        emxEnsureCapacity_int32_T(sp, iidx, i1, &rhb_emlrtRTEI);
        for (i1 = 0; i1 < loop_ub; i1++) {
          i2 = (int32_T)bsb->data[i1];
          if ((i2 < 1) || (i2 > BB->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i1], 1,
                                          BB->size[0], &ahb_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          iidx->data[i1] = i2 - 1;
        }
        if (((int32_T)ij < 1) || ((int32_T)ij > BB->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)ij, 1, BB->size[1],
                                        &ogb_emlrtBCI, (emlrtCTX)sp);
        }
        emlrtSubAssignSizeCheckR2012b(&iidx->size[0], 1, &bsb->size[0], 1,
                                      &ee_emlrtECI, (emlrtCTX)sp);
        loop_ub = bsb->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          BB->data[iidx->data[i1] + BB->size[0] * ((int32_T)ij - 1)] =
              bsb->data[i1];
        }
        ij++;
      }
    }
    /*  Compute beta coefficients using subset */
    /*  Implicitly control the rank of Xb checking the condition number */
    /*  for inversion (which in the case of a rectangular matrix is */
    /*  nothing but the rank) */
    /*  Old instruction was b=Xb\yb; */
    st.site = &pmb_emlrtRSI;
    linsolve(&st, Xb, yb, b, &condNumber);
    /*  disp([mm condNumber]) */
    if (!(condNumber < p)) {
      /*  rank is ok */
      i1 = blast->size[0];
      blast->size[0] = b->size[0];
      emxEnsureCapacity_real_T(sp, blast, i1, &thb_emlrtRTEI);
      loop_ub = b->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        blast->data[i1] = b->data[i1];
      }
    } else {
      loop_ub = blast->size[0];
      i1 = b->size[0];
      b->size[0] = blast->size[0];
      emxEnsureCapacity_real_T(sp, b, i1, &shb_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b->data[i1] = blast->data[i1];
      }
      /*  in case of rank problem, the last orrectly computed coefficients are
       * used */
    }
    /*  e= vector of residual for all units using b estimated using subset */
    st.site = &omb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    dynamic_size_checks(&b_st, X, b, X->size[1], b->size[0]);
    b_st.site = &eb_emlrtRSI;
    mtimes(&b_st, X, b, r2);
    loop_ub = y->size[0];
    if (y->size[0] != r2->size[0]) {
      emlrtSizeEqCheck1DR2012b(y->size[0], r2->size[0], &ae_emlrtECI,
                               (emlrtCTX)sp);
    }
    i1 = b->size[0];
    b->size[0] = y->size[0];
    emxEnsureCapacity_real_T(sp, b, i1, &uhb_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b->data[i1] = y->data[i1] - r2->data[i1];
    }
    st.site = &nmb_emlrtRSI;
    power(&st, b, r2);
    emlrtSubAssignSizeCheckR2012b(&r->size[0], 1, &r2->size[0], 1, &be_emlrtECI,
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
      emxEnsureCapacity_boolean_T(sp, oldbsbT, i1, &vhb_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        oldbsbT->data[i1] = bsbT->data[i1];
      }
      /*  order the r_i and include the smallest among the units forming */
      /*  the group of potential outliers */
      /*  ord=sortrows(r,2); */
      st.site = &mmb_emlrtRSI;
      loop_ub = r->size[0];
      i1 = b->size[0];
      b->size[0] = r->size[0];
      emxEnsureCapacity_real_T(&st, b, i1, &rl_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b->data[i1] = r->data[i1 + r->size[0]];
      }
      b_st.site = &ql_emlrtRSI;
      sort(&b_st, b, iidx);
      i1 = b->size[0];
      b->size[0] = iidx->size[0];
      emxEnsureCapacity_real_T(&st, b, i1, &cg_emlrtRTEI);
      loop_ub = iidx->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b->data[i1] = iidx->data[i1];
      }
      /*  bsb= units forming the new subset */
      if (1 > b->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, b->size[0], &kgb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if ((int32_T)b_mm + 1 > b->size[0]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_mm + 1, 1, b->size[0],
                                      &lgb_emlrtBCI, (emlrtCTX)sp);
      }
      i1 = bsb->size[0];
      bsb->size[0] = (int32_T)b_mm + 1;
      emxEnsureCapacity_real_T(sp, bsb, i1, &whb_emlrtRTEI);
      loop_ub = (int32_T)b_mm;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        bsb->data[i1] = b->data[i1];
      }
      i1 = bsbT->size[0];
      bsbT->size[0] = n;
      emxEnsureCapacity_boolean_T(sp, bsbT, i1, &xhb_emlrtRTEI);
      for (i1 = 0; i1 < n; i1++) {
        bsbT->data[i1] = false;
      }
      i1 = iidx->size[0];
      iidx->size[0] = (int32_T)b_mm + 1;
      emxEnsureCapacity_int32_T(sp, iidx, i1, &yhb_emlrtRTEI);
      loop_ub = (int32_T)b_mm;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        i2 = (int32_T)b->data[i1];
        if ((i2 < 1) || (i2 > n)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b->data[i1], 1, n,
                                        &bhb_emlrtBCI, (emlrtCTX)sp);
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
      emxEnsureCapacity_real_T(sp, Xb, i1, &aib_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_loop_ub = (int32_T)b_mm;
        for (i2 = 0; i2 <= b_loop_ub; i2++) {
          irank = (int32_T)b->data[i2];
          if ((irank < 1) || (irank > X->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b->data[i2], 1, X->size[0],
                                          &chb_emlrtBCI, (emlrtCTX)sp);
          }
          Xb->data[i2 + Xb->size[0] * i1] =
              X->data[(irank + X->size[0] * i1) - 1];
        }
      }
      /*  subset of X */
      i1 = yb->size[0];
      yb->size[0] = (int32_T)b_mm + 1;
      emxEnsureCapacity_real_T(sp, yb, i1, &bib_emlrtRTEI);
      loop_ub = (int32_T)b_mm;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        i2 = (int32_T)b->data[i1];
        if ((i2 < 1) || (i2 > y->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b->data[i1], 1, y->size[0],
                                        &dhb_emlrtBCI, (emlrtCTX)sp);
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
                                   &ce_emlrtECI, (emlrtCTX)sp);
        }
        nwhile = bsbT->size[0] - 1;
        b_loop_ub = 0;
        for (loop_ub = 0; loop_ub <= nwhile; loop_ub++) {
          if (bsbT->data[loop_ub] && oldbsbT->data[loop_ub]) {
            b_loop_ub++;
          }
        }
        i1 = unit->size[0];
        unit->size[0] = b_loop_ub;
        emxEnsureCapacity_real_T(sp, unit, i1, &ihb_emlrtRTEI);
        irank = 0;
        for (loop_ub = 0; loop_ub <= nwhile; loop_ub++) {
          if (bsbT->data[loop_ub] && oldbsbT->data[loop_ub]) {
            if (loop_ub + 1 > seq->size[0]) {
              emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, seq->size[0],
                                            &ehb_emlrtBCI, (emlrtCTX)sp);
            }
            unit->data[irank] = seq->data[loop_ub];
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
          condNumber = ((real_T)b_mm - init) + 1.0;
          if (condNumber != (int32_T)muDoubleScalarFloor(condNumber)) {
            emlrtIntegerCheckR2012b(condNumber, &le_emlrtDCI, (emlrtCTX)sp);
          }
          if (((int32_T)condNumber < 1) ||
              ((int32_T)condNumber > Un->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)condNumber, 1, Un->size[0],
                                          &mgb_emlrtBCI, (emlrtCTX)sp);
          }
          b_X[0] = 1;
          irank = i2 - i1;
          b_X[1] = irank;
          emlrtSubAssignSizeCheckR2012b(&b_X[0], 2, &unit->size[0], 1,
                                        &de_emlrtECI, (emlrtCTX)sp);
          for (i2 = 0; i2 < irank; i2++) {
            Un->data[((int32_T)condNumber + Un->size[0] * ((i1 + i2) + 1)) -
                     1] = unit->data[i2];
          }
        } else {
          st.site = &lmb_emlrtRSI;
          int2str(&st, b_mm, tmp_data, b_X);
          b_tmp_size[0] = 1;
          loop_ub = b_X[1];
          b_tmp_size[1] = b_X[1] + 44;
          for (i1 = 0; i1 < 44; i1++) {
            c_tmp_data[i1] = cv21[i1];
          }
          if (0 <= loop_ub - 1) {
            memcpy(&c_tmp_data[44], &tmp_data[0], loop_ub * sizeof(char_T));
          }
          st.site = &rob_emlrtRSI;
          disp(&st, cb_emlrt_marshallOut(&st, c_tmp_data, b_tmp_size),
               &md_emlrtMCI);
          st.site = &kmb_emlrtRSI;
          c_indexShapeCheck(&st, unit->size[0]);
          condNumber = ((real_T)b_mm - init) + 1.0;
          if (condNumber != (int32_T)muDoubleScalarFloor(condNumber)) {
            emlrtIntegerCheckR2012b(condNumber, &me_emlrtDCI, (emlrtCTX)sp);
          }
          if (((int32_T)condNumber < 1) ||
              ((int32_T)condNumber > Un->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)condNumber, 1, Un->size[0],
                                          &ngb_emlrtBCI, (emlrtCTX)sp);
          }
          for (i1 = 0; i1 < 10; i1++) {
            Un->data[((int32_T)condNumber + Un->size[0] * (i1 + 1)) - 1] =
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
  emxFree_real_T(&blast);
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
