/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LXS.c
 *
 * Code generation for function 'LXS'
 *
 */

/* Include files */
#include "LXS.h"
#include "FSM.h"
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_mexutil.h"
#include "FSR_wrapper_types.h"
#include "abs.h"
#include "bc.h"
#include "eml_mtimes_helper.h"
#include "eml_setop.h"
#include "error.h"
#include "gammainc.h"
#include "gammaincinv.h"
#include "indexShapeCheck.h"
#include "int2str.h"
#include "mldivide.h"
#include "mtimes.h"
#include "norminv.h"
#include "power.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "subsets.h"
#include "sum.h"
#include "tic.h"
#include "tinv.h"
#include "warning.h"
#include "emlrt.h"
#include "mwmathutil.h"
#include <stdio.h>
#include <string.h>

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = {
    1064,                                          /* lineNo */
    13,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo b_emlrtRTEI = {
    1062,                                          /* lineNo */
    13,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRSInfo qd_emlrtRSI = {
    1064,                                          /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo rd_emlrtRSI = {
    1062,                                          /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo sd_emlrtRSI = {
    1016,                                          /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo td_emlrtRSI = {
    948,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo ud_emlrtRSI = {
    940,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo vd_emlrtRSI = {
    937,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo wd_emlrtRSI = {
    922,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo xd_emlrtRSI = {
    901,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo yd_emlrtRSI = {
    889,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo ae_emlrtRSI = {
    887,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo be_emlrtRSI = {
    869,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo ce_emlrtRSI = {
    862,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo de_emlrtRSI = {
    858,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo ee_emlrtRSI = {
    823,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo fe_emlrtRSI = {
    747,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo ge_emlrtRSI = {
    740,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo he_emlrtRSI = {
    737,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo ie_emlrtRSI = {
    734,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo je_emlrtRSI = {
    726,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo ke_emlrtRSI = {
    721,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo le_emlrtRSI = {
    716,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo me_emlrtRSI = {
    710,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo ne_emlrtRSI = {
    705,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo oe_emlrtRSI = {
    696,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo pe_emlrtRSI = {
    654,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo qe_emlrtRSI = {
    550,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo re_emlrtRSI = {
    523,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo se_emlrtRSI = {
    521,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo te_emlrtRSI = {
    443,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo reb_emlrtRSI = {
    32,     /* lineNo */
    "sort", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m" /* pathName
                                                                         */
};

static emlrtRSInfo sfb_emlrtRSI = {
    1280,                                          /* lineNo */
    "corfactorRAW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo tfb_emlrtRSI = {
    1281,                                          /* lineNo */
    "corfactorRAW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo ufb_emlrtRSI = {
    1289,                                          /* lineNo */
    "corfactorRAW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo vfb_emlrtRSI = {
    1128,                                          /* lineNo */
    "LXS/asvar",                                   /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo wfb_emlrtRSI = {
    1129,                                          /* lineNo */
    "LXS/asvar",                                   /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo xfb_emlrtRSI = {
    1131,                                          /* lineNo */
    "LXS/asvar",                                   /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo yfb_emlrtRSI = {
    1132,                                          /* lineNo */
    "LXS/asvar",                                   /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo agb_emlrtRSI = {
    1133,                                          /* lineNo */
    "LXS/asvar",                                   /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo bgb_emlrtRSI = {
    1134,                                          /* lineNo */
    "LXS/asvar",                                   /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtMCInfo d_emlrtMCI = {
    546,                                           /* lineNo */
    17,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtMCInfo e_emlrtMCI = {
    1012,                                          /* lineNo */
    9,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtMCInfo f_emlrtMCI = {
    1059,                                          /* lineNo */
    9,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtMCInfo kb_emlrtMCI = {
    1296,                                          /* lineNo */
    5,                                             /* colNo */
    "corfactorRAW",                                /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtMCInfo lb_emlrtMCI = {
    1297,                                          /* lineNo */
    5,                                             /* colNo */
    "corfactorRAW",                                /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtMCInfo mb_emlrtMCI = {
    1298,                                          /* lineNo */
    5,                                             /* colNo */
    "corfactorRAW",                                /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtMCInfo nb_emlrtMCI = {
    1299,                                          /* lineNo */
    5,                                             /* colNo */
    "corfactorRAW",                                /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtDCInfo b_emlrtDCI = {
    672,                                            /* lineNo */
    12,                                             /* colNo */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    4                                               /* checkKind */
};

static emlrtRTEInfo u_emlrtRTEI = {
    708,                                           /* lineNo */
    7,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    714,                                            /* lineNo */
    15,                                             /* colNo */
    "C",                                            /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    730,                                            /* lineNo */
    17,                                             /* colNo */
    "b",                                            /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    730,                                            /* lineNo */
    33,                                             /* colNo */
    "b",                                            /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtECInfo b_emlrtECI = {
    -1,                                            /* nDims */
    734,                                           /* lineNo */
    15,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    747,                                            /* lineNo */
    30,                                             /* colNo */
    "r2s",                                          /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = {
    747,                                            /* lineNo */
    32,                                             /* colNo */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    1                                               /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    747,                                            /* lineNo */
    32,                                             /* colNo */
    "r2s",                                          /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    822,                                            /* lineNo */
    9,                                              /* colNo */
    "brob",                                         /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtECInfo c_emlrtECI = {
    -1,                                            /* nDims */
    869,                                           /* lineNo */
    11,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    924,                                            /* lineNo */
    24,                                             /* colNo */
    "indsorres2",                                   /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = {
    924,                                            /* lineNo */
    26,                                             /* colNo */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    1                                               /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    924,                                            /* lineNo */
    26,                                             /* colNo */
    "indsorres2",                                   /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    720,                                            /* lineNo */
    14,                                             /* colNo */
    "X",                                            /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = {
    720,                                            /* lineNo */
    14,                                             /* colNo */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    1                                               /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    721,                                            /* lineNo */
    14,                                             /* colNo */
    "y",                                            /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    744,                                            /* lineNo */
    22,                                             /* colNo */
    "r2s",                                          /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = {
    744,                                            /* lineNo */
    22,                                             /* colNo */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    1                                               /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    924,                                            /* lineNo */
    13,                                             /* colNo */
    "weights",                                      /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    1045,                                           /* lineNo */
    18,                                             /* colNo */
    "seq",                                          /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtRTEInfo re_emlrtRTEI = {
    431,                                           /* lineNo */
    1,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo se_emlrtRTEI = {
    454,                                           /* lineNo */
    1,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo te_emlrtRTEI = {
    701,                                           /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo ue_emlrtRTEI = {
    1042,                                          /* lineNo */
    1,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo ve_emlrtRTEI = {
    1,                                                  /* lineNo */
    35,                                                 /* colNo */
    "chkinputR",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m" /* pName */
};

static emlrtRTEInfo we_emlrtRTEI = {
    698,                                           /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo xe_emlrtRTEI = {
    720,                                           /* lineNo */
    9,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo ye_emlrtRTEI = {
    714,                                           /* lineNo */
    13,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo af_emlrtRTEI = {
    869,                                           /* lineNo */
    1,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo bf_emlrtRTEI = {
    717,                                           /* lineNo */
    9,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo cf_emlrtRTEI = {
    721,                                           /* lineNo */
    12,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo ef_emlrtRTEI = {
    1016,                                          /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo ff_emlrtRTEI = {
    734,                                           /* lineNo */
    15,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo gf_emlrtRTEI = {
    930,                                           /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo hf_emlrtRTEI = {
    1019,                                          /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo if_emlrtRTEI = {
    924,                                           /* lineNo */
    13,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo jf_emlrtRTEI = {
    747,                                           /* lineNo */
    26,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo kf_emlrtRTEI = {
    755,                                           /* lineNo */
    17,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo lf_emlrtRTEI = {
    1,                                             /* lineNo */
    30,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo mf_emlrtRTEI = {
    1045,                                          /* lineNo */
    1,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo nf_emlrtRTEI = {
    948,                                           /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo of_emlrtRTEI = {
    696,                                           /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo pf_emlrtRTEI = {
    737,                                           /* lineNo */
    13,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo qf_emlrtRTEI = {
    923,                                           /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo rf_emlrtRTEI = {
    1045,                                          /* lineNo */
    18,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo sf_emlrtRTEI = {
    431,                                           /* lineNo */
    6,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo tf_emlrtRTEI = {
    696,                                           /* lineNo */
    12,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRSInfo kpb_emlrtRSI = {
    1299,                                          /* lineNo */
    "corfactorRAW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo lpb_emlrtRSI = {
    1298,                                          /* lineNo */
    "corfactorRAW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo mpb_emlrtRSI = {
    1297,                                          /* lineNo */
    "corfactorRAW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo npb_emlrtRSI = {
    1296,                                          /* lineNo */
    "corfactorRAW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo rpb_emlrtRSI = {
    1059,                                          /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo spb_emlrtRSI = {
    1012,                                          /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo tpb_emlrtRSI = {
    546,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

/* Function Declarations */
static real_T asvar(const emlrtStack *sp, real_T h, real_T n);

static real_T corfactorRAW(const emlrtStack *sp, real_T n, real_T alpha);

/* Function Definitions */
static real_T asvar(const emlrtStack *sp, real_T h, real_T n)
{
  static const int32_T b_iv[2] = {1, 6};
  static const int32_T iv1[2] = {1, 6};
  static const char_T b_cv[12] = {' ', ' ', '5', '.', '0', '0',
                                  '0', '0', 'e', '-', '0', '1'};
  static const char_T rfmt[6] = {'%', '1', '2', '.', '4', 'e'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  creal_T dc;
  creal_T dc1;
  real_T a;
  real_T b_xk;
  real_T c2;
  real_T hn;
  real_T qalfa;
  real_T xk;
  char_T b_str[12];
  char_T str[12];
  boolean_T b;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  /*  The part below contains subfunctions which are used only inside this file
   */
  /* asvar computes the new degrees of freedom for the Student T */
  hn = h / n;
  st.site = &vfb_emlrtRSI;
  b_st.site = &fn_emlrtRSI;
  if ((hn >= 0.0) && (hn <= 1.0)) {
    if (hn < 1.0) {
      c_st.site = &jn_emlrtRSI;
      dc = gammaincinv(&c_st, hn, 0.5);
      c_st.site = &in_emlrtRSI;
      dc1 = gammainc(&c_st, dc.re, 0.5);
      c_st.site = &in_emlrtRSI;
      if (muDoubleScalarHypot(dc1.re - hn, dc1.im) >
          hn * 1.4901161193847656E-8) {
        c_st.site = &hn_emlrtRSI;
        y = NULL;
        m = emlrtCreateCharArray(2, &b_iv[0]);
        emlrtInitCharArrayR2013a(&c_st, 6, m, &rfmt[0]);
        emlrtAssign(&y, m);
        b_y = NULL;
        m = emlrtCreateDoubleScalar(2.0);
        emlrtAssign(&b_y, m);
        d_st.site = &aqb_emlrtRSI;
        e_emlrt_marshallIn(&d_st, d_sprintf(&d_st, y, b_y, &s_emlrtMCI),
                           "<output of sprintf>", str);
        c_st.site = &dbb_emlrtRSI;
        c_y = NULL;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a(&c_st, 6, m, &rfmt[0]);
        emlrtAssign(&c_y, m);
        d_y = NULL;
        m = emlrtCreateDoubleScalar(hn);
        emlrtAssign(&d_y, m);
        d_st.site = &aqb_emlrtRSI;
        e_emlrt_marshallIn(&d_st, d_sprintf(&d_st, c_y, d_y, &s_emlrtMCI),
                           "<output of sprintf>", b_str);
        c_st.site = &gn_emlrtRSI;
        i_warning(&c_st, b_cv, str, b_str);
      }
      qalfa = dc.re * 2.0;
    } else {
      qalfa = rtInf;
    }
  } else {
    qalfa = rtNaN;
  }
  st.site = &wfb_emlrtRSI;
  xk = qalfa / 2.0;
  b_xk = xk;
  b = muDoubleScalarIsNaN(xk);
  if (!b) {
    if (xk < 0.0) {
      b_xk = 0.0;
    }
    b_st.site = &tbb_emlrtRSI;
    dc = gammainc(&b_st, b_xk, 1.5);
    c2 = dc.re;
  } else {
    c2 = rtNaN;
  }
  a = 1.0 / c2;
  st.site = &xfb_emlrtRSI;
  if (!b) {
    if (xk < 0.0) {
      xk = 0.0;
    }
    b_st.site = &tbb_emlrtRSI;
    dc = gammainc(&b_st, xk, 2.5);
    b_xk = dc.re;
  } else {
    b_xk = rtNaN;
  }
  st.site = &yfb_emlrtRSI;
  xk = qalfa * hn - c2;
  b_st.site = &bl_emlrtRSI;
  c_st.site = &cl_emlrtRSI;
  st.site = &agb_emlrtRSI;
  b_st.site = &bl_emlrtRSI;
  c_st.site = &cl_emlrtRSI;
  st.site = &bgb_emlrtRSI;
  b_st.site = &bl_emlrtRSI;
  c_st.site = &cl_emlrtRSI;
  return a * a *
         (((3.0 * b_xk - 2.0 * qalfa * c2) + hn * (qalfa * qalfa)) - xk * xk);
}

static real_T corfactorRAW(const emlrtStack *sp, real_T n, real_T alpha)
{
  static const int32_T b_iv[2] = {1, 17};
  static const int32_T iv1[2] = {1, 44};
  static const int32_T iv2[2] = {1, 36};
  static const int32_T iv3[2] = {1, 69};
  static const int32_T iv4[2] = {1, 75};
  static const int32_T iv5[2] = {1, 51};
  static const char_T c_u[75] = {
      'G', 'i', 'v', 'e', 'n', ' ', 't', 'h', 'a', 't', ' ', 't', 'h',
      'i', 's', ' ', 'v', 'a', 'l', 'u', 'e', ' ', 'i', 's', ' ', 'c',
      'l', 'e', 'a', 'r', 'l', 'y', ' ', 'w', 'r', 'o', 'n', 'g', ' ',
      'w', 'e', ' ', 'p', 'u', 't', ' ', 'i', 't', ' ', 'e', 'q', 'u',
      'a', 'l', ' ', 't', 'o', ' ', '1', ' ', '(', 'n', 'o', ' ', 'c',
      'o', 'r', 'r', 'e', 'c', 't', 'i', 'o', 'n', ')'};
  static const char_T b_u[69] = {
      'C', 'o', 'r', 'r', 'e', 'c', 't', 'i', 'o', 'n', ' ', 'f', 'a', 'c',
      't', 'o', 'r', ' ', 'f', 'o', 'r', ' ', 'c', 'o', 'v', 'a', 'r', 'i',
      'a', 'n', 'c', 'e', ' ', 'm', 'a', 't', 'r', 'i', 'x', ' ', 'b', 'a',
      's', 'e', 'd', ' ', 'o', 'n', ' ', 's', 'i', 'm', 'u', 'l', 'a', 't',
      'i', 'o', 'n', 's', ' ', 'f', 'o', 'u', 'n', 'd', ' ', '=', '1'};
  static const char_T d_u[51] = {
      'T', 'h', 'i', 's', ' ', 'm', 'a', 'y', ' ', 'h', 'a', 'p', 'p',
      'e', 'n', ' ', 'w', 'h', 'e', 'n', ' ', 'n', ' ', 'i', 's', ' ',
      'v', 'e', 'r', 'y', ' ', 's', 'm', 'a', 'l', 'l', ' ', 'a', 'n',
      'd', ' ', 'p', ' ', 'i', 's', ' ', 'l', 'a', 'r', 'g', 'e'};
  static const char_T u[44] = {
      'W', 'a', 'r', 'n', 'i', 'n', 'g', ':', ' ', 'p', 'r', 'o', 'b', 'l', 'e',
      'm', ' ', 'i', 'n', ' ', 's', 'u', 'b', 'f', 'u', 'n', 'c', 't', 'i', 'o',
      'n', ' ', 'c', 'o', 'r', 'f', 'a', 'c', 't', 'o', 'r', 'R', 'A', 'W'};
  static const char_T varargin_2[36] = {
      'C', 'o', 'n', 'd', 'i', 't', 'i', 'o', 'n', ' ', '1', '-',
      'a', 'l', 'p', 'h', 'a', '>', '=', '0', '.', '5', ' ', 'n',
      'o', 't', ' ', 'r', 'e', 's', 'p', 'e', 'c', 't', 'e', 'd'};
  static const char_T varargin_1[17] = {'F', 'S', 'D', 'A', ':', 'L',
                                        'X', 'S', ':', 'W', 'r', 'o',
                                        'n', 'g', 'B', 'd', 'p'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  const mxArray *y;
  real_T fp_500_n;
  real_T fp_875_n;
  real_T fp_alpha_n;
  real_T rawcorfac;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  /*  corfactorRAW function */
  st.site = &sfb_emlrtRSI;
  b_st.site = &bl_emlrtRSI;
  c_st.site = &cl_emlrtRSI;
  if (n < 0.0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &yb_emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  fp_500_n =
      1.0 - 1.2995580068132053 / muDoubleScalarPower(n, 0.604756680630497);
  st.site = &tfb_emlrtRSI;
  b_st.site = &bl_emlrtRSI;
  fp_875_n =
      1.0 - 0.70357229237653807 / muDoubleScalarPower(n, 1.01646567502486);
  if ((0.5 <= alpha) && (alpha <= 0.875)) {
    fp_alpha_n = fp_500_n + (fp_875_n - fp_500_n) / 0.375 * (alpha - 0.5);
  } else if ((0.875 < alpha) && (alpha < 1.0)) {
    fp_alpha_n = fp_875_n + (1.0 - fp_875_n) / 0.125 * (alpha - 0.875);
  } else {
    st.site = &ufb_emlrtRSI;
    y = NULL;
    m = emlrtCreateCharArray(2, &b_iv[0]);
    emlrtInitCharArrayR2013a(&st, 17, m, &varargin_1[0]);
    emlrtAssign(&y, m);
    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 36, m, &varargin_2[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &vpb_emlrtRSI;
    v_error(&b_st, y, c_y, &b_emlrtMCI);
  }
  rawcorfac = 1.0 / fp_alpha_n;
  if ((rawcorfac <= 0.0) || (rawcorfac > 50.0)) {
    rawcorfac = 1.0;
    /*  if msg==1 */
    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 44, m, &u[0]);
    emlrtAssign(&b_y, m);
    st.site = &npb_emlrtRSI;
    disp(&st, b_y, &kb_emlrtMCI);
    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 69, m, &b_u[0]);
    emlrtAssign(&d_y, m);
    st.site = &mpb_emlrtRSI;
    disp(&st, d_y, &lb_emlrtMCI);
    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 75, m, &c_u[0]);
    emlrtAssign(&e_y, m);
    st.site = &lpb_emlrtRSI;
    disp(&st, e_y, &mb_emlrtMCI);
    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 51, m, &d_u[0]);
    emlrtAssign(&f_y, m);
    st.site = &kpb_emlrtRSI;
    disp(&st, f_y, &nb_emlrtMCI);
    /*  end */
  }
  return rawcorfac;
}

void LXS(FSR_wrapperStackData *SD, const emlrtStack *sp,
         const emxArray_real_T *y, const emxArray_real_T *X, real_T varargin_2,
         real_T varargin_4, real_T varargin_6, boolean_T varargin_10,
         const real_T varargin_12_data[], const int32_T varargin_12_size[2],
         b_struct_T *out)
{
  static const int32_T b_iv[2] = {1, 67};
  static const int32_T iv1[2] = {1, 66};
  static const int32_T iv2[2] = {1, 30};
  static const int32_T iv3[2] = {1, 62};
  static const int32_T iv4[2] = {1, 122};
  static const char_T e_u[122] = {
      'W', 'a', 'r', 'n', 'i', 'n', 'g', ':', ' ',  'N', 'u', 'm', 'b', 'e',
      'r', ' ', 'o', 'f', ' ', 's', 'u', 'b', 's',  'e', 't', 's', ' ', 'w',
      'i', 't', 'h', 'o', 'u', 't', ' ', 'f', 'u',  'l', 'l', ' ', 'r', 'a',
      'n', 'k', ' ', 'o', 'r', ' ', 'e', 'x', 'c',  'l', 'u', 'd', 'e', 'd',
      ' ', 'b', 'e', 'c', 'a', 'u', 's', 'e', ' ',  'c', 'o', 'n', 't', 'a',
      'i', 'n', 'i', 'n', 'g', ' ', 'r', 'e', 'm',  'o', 't', 'e', ' ', 'u',
      'n', 'i', 't', 's', ' ', 'i', 'n', ' ', 't',  'h', 'e', ' ', 'X', ' ',
      's', 'p', 'a', 'c', 'e', ' ', 'e', 'q', 'u',  'a', 'l', ' ', 't', 'o',
      ' ', '%', '.', '1', 'f', ' ', '%', '%', '\\', 'n'};
  static const char_T u[67] = {
      'N', 'u', 'm', 'b', 'e', 'r', ' ', 'o', 'f', ' ', 's', 'u', 'b', 's',
      'e', 't', 's', ' ', 't', 'o', ' ', 'e', 'x', 't', 'r', 'a', 'c', 't',
      ' ', 'g', 'r', 'e', 'a', 't', 'e', 'r', ' ', 't', 'h', 'a', 'n', ' ',
      '(', 'n', ' ', 'p', ')', '.', ' ', 'I', 't', ' ', 'i', 's', ' ', 's',
      'e', 't', ' ', 't', 'o', ' ', '(', 'n', ' ', 'p', ')'};
  static const char_T b_u[66] = {
      'A', 't', 't', 'e', 'n', 't', 'i', 'o', 'n', ':', ' ', 't', 'h', 'e',
      'r', 'e', ' ', 'w', 'a', 's', ' ', 'a', 'n', ' ', 'e', 'x', 'a', 'c',
      't', ' ', 'f', 'i', 't', '.', ' ', 'R', 'o', 'b', 'u', 's', 't', ' ',
      'e', 's', 't', 'i', 'm', 'a', 't', 'e', ' ', 'o', 'f', ' ', 's', '^',
      '2', ' ', 'i', 's', ' ', '<', '1', 'e', '-', '7'};
  static const char_T d_u[62] = {
      'W', 'a', 'r', 'n', 'i', 'n', 'g', ':', ' ',  'N', 'u', 'm', 'b',
      'e', 'r', ' ', 'o', 'f', ' ', 's', 'u', 'b',  's', 'e', 't', 's',
      ' ', 'w', 'i', 't', 'h', 'o', 'u', 't', ' ',  'f', 'u', 'l', 'l',
      ' ', 'r', 'a', 'n', 'k', ' ', 'e', 'q', 'u',  'a', 'l', ' ', 't',
      'o', ' ', '%', '.', '1', 'f', '%', '%', '\\', 'n'};
  static const char_T b_cv[34] = {'T', 'h', 'e', ' ', 'L', 'T', 'S', ' ', '(',
                                  'L', 'M', 'S', ')', ' ', 'm', 'u', 's', 't',
                                  ' ', 'c', 'o', 'v', 'e', 'r', ' ', 'a', 't',
                                  ' ', 'l', 'e', 'a', 's', 't', ' '};
  static const char_T b_cv1[14] = {' ', 'o', 'b', 's', 'e', 'r', 'v',
                                   'a', 't', 'i', 'o', 'n', 's', '.'};
  static const char_T b_cv2[7] = {'f', 'p', 'r', 'i', 'n', 't', 'f'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_boolean_T *weights;
  emxArray_int32_T *ia;
  emxArray_int32_T *ib;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_real_T *C;
  emxArray_real_T *Xb;
  emxArray_real_T *b_X;
  emxArray_real_T *b_expl_temp;
  emxArray_real_T *b_y;
  emxArray_real_T *c_expl_temp;
  emxArray_real_T *d_expl_temp;
  emxArray_real_T *d_y;
  emxArray_real_T *expl_temp;
  emxArray_real_T *outFSM_outliers;
  emxArray_real_T *outliers;
  emxArray_real_T *r2;
  emxArray_real_T *seq;
  const mxArray *c_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m;
  const mxArray *m_y;
  const mxArray *n_y;
  real_T expl_temp_data[10];
  real_T ncomb;
  real_T nselected;
  real_T rrob;
  real_T singsub;
  real_T tsampling;
  int32_T b_tmp_size[2];
  int32_T critdef_size[2];
  int32_T tmp_size[2];
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T lmsopt;
  int32_T loop_ub;
  char_T tmp_data[310];
  char_T b_tmp_data[58];
  char_T c_u[30];
  char_T b_expl_temp_data[3];
  char_T critdef_data[3];
  boolean_T bonflevout;
  boolean_T guard1 = false;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /* LXS computes the Least Median of Squares (LMS) or Least Trimmed Squares
   * (LTS) estimators */
  /*  */
  /* <a href="matlab: docsearchFS('LXS')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     y:         Response variable. Vector. A vector with n elements that */
  /*                contains the response */
  /*                variable.  It can be either a row or a column vector. */
  /*     X :        Predictor variables. Matrix. Data matrix of explanatory */
  /*                variables (also called 'regressors') */
  /*                of dimension (n x p-1). Rows of X represent observations,
   * and */
  /*                columns represent variables. */
  /*  */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite
   */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*  */
  /*          bdp :  breakdown point. Scalar. */
  /*                It measures the fraction of outliers */
  /*                the algorithm should */
  /*                resist. In this case any value greater than 0 but smaller */
  /*                or equal than 0.5 will do fine. If on the other hand the */
  /*                purpose is subgroups detection then bdp can be greater than
   */
  /*                0.5. In any case however n*(1-bdp) must be greater than */
  /*                p. If this condition is not fulfilled an error will be */
  /*                given. Please specify h or bdp not both. */
  /*                  Example - 'bdp',0.4 */
  /*                  Data Types - double */
  /*  */
  /*  */
  /*  */
  /*   bonflevoutX : remote units in the X space. Scalar or empty (default). */
  /*                If the design matrix X contains several high leverage units
   */
  /*                (that is units which are very far from the bulk of the */
  /*                data), it may happen that the best subset may include some
   */
  /*                of these units. */
  /*                If boflevoutX is not empty, outlier detection procedure FSM
   */
  /*                is applied to the design matrix X,  using name/pair option
   */
  /*                'bonflev',bonflevoutX. The extracted subsets which contain
   */
  /*                at least one unit declared as outlier in the X space by FSM
   */
  /*                are removed (more precisely they are treated as singular */
  /*                subsets) from the list of candidate subsets to find the LXS
   */
  /*                solution. The default value of bonflevoutX is empty, that */
  /*                is FSM is not invoked. */
  /*                Example - 'bonflevoutX',0.95 */
  /*                Data Types - double */
  /*  */
  /*      conflev :  Confidence level which is */
  /*                used to declare units as outliers. Scalar */
  /*                Usually conflev=0.95, 0.975 0.99 (individual alpha) */
  /*                or 1-0.05/n, 1-0.025/n, 1-0.01/n (simultaneous alpha). */
  /*                Default value is 0.975 */
  /*                  Example - 'conflev',0.99 */
  /*                  Data Types - double */
  /*  */
  /*            h : The number of observations that have determined the least */
  /*                  trimmed squares estimator. Scalar. */
  /*                The number of observations that have determined the least */
  /*                trimmed squares estimator. h is an integer greater than p */
  /*                (number of columns of matrix X including the intercept but
   */
  /*                smaller then n. If the purpose is outlier detection than h
   */
  /*                does not have to be smaller than [0.5*(n+p+1)] (default */
  /*                value). On the other hand if the purpose is to find */
  /*                subgroups of homogeneous observations h can be smaller than
   */
  /*                [0.5*(n+p+1)]. If h <p+1 an error will be given. */
  /*                  Example - 'h',round(n*0,75) */
  /*                  Data Types - double */
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
  /*        lms   : Estimation method. Scalar, vector or structure. */
  /*                If lms is a scalar = 1 (default) Least Median of Squares is
   */
  /*                        computed, */
  /*                else if lms is a scalar = 2 fast lts with the all default
   * options is used */
  /*                else if lms is a scalar different from 1 and 2 standard lts
   */
  /*                        is used (without concentration steps) */
  /*                else if lms is a struct fast lts (with concentration steps)
   * is used. */
  /*                   In this case the user can control the following options:
   */
  /*                   lms.refsteps : scalar defining number of refining
   * iterations in each */
  /*                                subsample (default = 3). refsteps = 0 means
   */
  /*                                "raw-subsampling" without iterations. */
  /*                    lms.reftol  : scalar. Default value of tolerance for the
   * refining steps */
  /*                                The default value is 1e-6. */
  /*                    lms.bestr   : scalar defining number of "best betas" to
   * remember from the */
  /*                                subsamples. These will be later iterated
   * until convergence */
  /*                                (default=5). */
  /*              lms.refstepsbestr : scalar defining number of refining
   * iterations for each */
  /*                                best subset (default = 50). */
  /*               lms.reftolbestr  : scalar. Default value of tolerance for the
   * refining steps */
  /*                                for each of the best subsets */
  /*                                The default value is 1e-8. */
  /*                  Example - 'lms',1 */
  /*                  Data Types - double */
  /*  */
  /*       nocheck: Check input arguments. Boolean. If nocheck is equal to true
   * no */
  /*                check is performed on matrix y and matrix X. Notice that */
  /*                when no check is true y and X are left unchanged, that is */
  /*                the additional column of ones for the intercept is */
  /*                not added. As default nocheck=false. The controls on h, bdp
   */
  /*                and nsamp still remain. Example - 'nocheck',true */
  /*                Data Types - boolean */
  /*  */
  /*         nomes:  It controls whether to display or not on the screen */
  /*                messages about estimated  time to compute LMS (LTS) .
   * Boolean. */
  /*                If nomes is equal to true no message about estimated */
  /*                time to compute LMS (LTS) is displayed, else if nomes is */
  /*                equal to false (default), a message about estimated time is
   */
  /*                displayed. */
  /*                Example - 'nomes',true */
  /*                Data Types - logical */
  /*  */
  /*  */
  /*         msg  : It controls whether to display or not messages on the
   * screen. Boolean. */
  /*                 If msg==true (default) messages are displayed */
  /*                on the screen about estimated time to compute the estimator
   */
  /*                and the warnings about */
  /*                'MATLAB:rankDeficientMatrix', 'MATLAB:singularMatrix' and */
  /*                'MATLAB:nearlySingularMatrix' are set to off */
  /*                else no message is displayed on the screen */
  /*                Example - 'msg',false */
  /*                Data Types - logical */
  /*  */
  /*        nsamp : Number of subsamples which will be extracted to find the */
  /*                robust estimator or matrix with preextracted subsamples. */
  /*                Scalar or matrix. */
  /*                If nsamp=0 all subsets will be extracted. They will be (n */
  /*                choose p). If nsamp is (say) 200, 200 subsets will be */
  /*                extracted. If nsamp is a matrix of size r-by-p, it contains
   */
  /*                in the rows the subsets which sill have to be extracted. */
  /*                For example, if p=3 and nsamp=[ 2 4 9; 23 45 49; 90 34 1];
   */
  /*                the first subset is made up of units [2 4 9], the second */
  /*                subset of units [23 45 49] and the third subset of units */
  /*                [90 34 1]; */
  /*                  Example - 'nsamp',0 */
  /*                  Data Types - double */
  /*                Remark: if the number of all possible subset is <1000 the */
  /*                default is to extract all subsets, otherwise just 1000 if */
  /*                fastLTS is used (lms=2 or lms is a structure) or 3000 for */
  /*                standard LTS or LMS. */
  /*  */
  /*        rew   : LXS reweighted. Boolean. */
  /*                 If rew=true the reweighted version of LTS (LMS) is */
  /*                used and the output quantities refer to the reweighted */
  /*                version */
  /*                else no reweighting is performed (default). */
  /*                  Example - 'rew',true */
  /*                  Data Types - logical */
  /*  */
  /*        yxsave : the response vector y and data matrix X are saved into the
   * output */
  /*                 structure out. Scalar. */
  /*                Default is 0, i.e. no saving is done. */
  /*                Example - 'yxsave',1 */
  /*                Data Types - double */
  /*  */
  /*  */
  /*        plots : Plot on the screen. Scalar or structure. */
  /*                If plots = 1, a plot which shows the */
  /*                robust residuals against index number is shown on the */
  /*                screen. The confidence level which is used to draw the */
  /*                horizontal lines associated with the bands for the */
  /*                residuals is as specified in input option conflev. If */
  /*                conflev is missing a nominal 0.975 confidence interval will
   */
  /*                be used. */
  /*                  Example - 'plots',1 */
  /*                  Data Types - double */
  /*  */
  /*        Remark: The user should only give the input arguments that have to
   */
  /*                change their default value. The name of the input arguments
   */
  /*                needs to be followed by their value. The order of the input
   */
  /*                arguments is of no importance. */
  /*  */
  /*  */
  /*   Output: */
  /*  */
  /*   out :     A structure containing the following fields */
  /*  */
  /*             out.rew  = boolean. if out.rew=true all subsequent output
   * refers to */
  /*                        reweighted else no reweighting is done. */
  /*             out.beta = Vector of beta LTS (LMS) coefficient estimates, */
  /*                        including the intercept when options.intercept=true.
   */
  /*                        out.beta=[intercept slopes]. */
  /*               out.bs = p x 1 vector containing the units forming subset */
  /*                        associated with bLMS (bLTS). */
  /*        out.residuals = Vector containing the standardized residuals from */
  /*                        the regression. */
  /*            out.scale = Scale estimate of the residuals. */
  /*          out.weights = Vector like y containing weights. The elements of */
  /*                        this vector are 0 or 1. */
  /*                        These weights identify the h observations which are
   */
  /*                        used to compute the final LTS (LMS) estimate. */
  /*                        sum(out.weights)=h if there is not a perfect fit */
  /*                        otherwise sum(out.weights) can be greater than h */
  /*                out.h = The number of observations that have determined the
   */
  /*                        LTS (LMS) estimator, i.e. the value of h. */
  /*         out.outliers = vector containing the list of the units declared */
  /*                        as outliers using confidence level specified in */
  /*                        input scalar conflev */
  /*          out.conflev = confidence level which is used to declare outliers.
   */
  /*                        Remark: scalar out.conflev will be used */
  /*                        to draw the horizontal lines (confidence bands) in
   * the plots */
  /*          out.singsub = Number of subsets wihtout full rank. Notice that if
   */
  /*                        this number is greater than 0.1*(number of */
  /*                        subsamples) a warning is produced on the screen */
  /*            out.class = 'LTS' or 'LMS'. */
  /*             out.y    = response vector Y. The field is present only if
   * option */
  /*                        yxsave is set to 1. */
  /*             out.X    = data matrix X. The field is present only if option
   */
  /*                        yxsave is set to 1. */
  /*  */
  /*   Optional Output: */
  /*  */
  /*             C        : Indexes of the extracted subsamples. Matrix. */
  /*                        Matrix containing the indexes of the subsamples */
  /*                        extracted for computing the estimate (the so called
   */
  /*                        elemental sets). For example, if C(3,:)=[2 5 20], */
  /*                        implies that the third extracted subsample is */
  /*                        formed by units 2, 5 and 20. */
  /*  */
  /*  */
  /*  See also FSReda, Sreg, MMreg */
  /*  */
  /*  References: */
  /*  */
  /*    Rousseeuw P.J., Leroy A.M. (1987), "Robust regression and outlier */
  /*    detection", Wiley. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('LXS')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /*  */
  /* { */
  /*     % LXS with default input and output. */
  /*     % Compute LMS estimator without reweighting, add intercept to matrix X
   */
  /*     % and do not produce plots. */
  /*     n=200; */
  /*     p=3; */
  /*     randn('state', 123456); */
  /*     X=randn(n,p); */
  /*     y=randn(n,1); */
  /*     y(1:5)=y(1:5)+6; */
  /*     [out]=LXS(y,X); */
  /* } */
  /* { */
  /*     % LXS with optional arguments. */
  /*     % Compute LMS estimator, reweight and plot the residuals. */
  /*     n=200; */
  /*     p=3; */
  /*     randn('state', 123456); */
  /*     X=randn(n,p); */
  /*     y=randn(n,1); */
  /*     y(1:5)=y(1:5)+6; */
  /*     [out]=LXS(y,X,'rew',1,'plots',1); */
  /* } */
  /* { */
  /*     % LXS with optional output. */
  /*     % Generating the C matrix containing the indices of the subsamples */
  /*     % extracted for computing the estimate (the so called elemental sets).
   */
  /*     n=200; */
  /*     p=3; */
  /*     randn('state', 123456); */
  /*     X=randn(n,p); */
  /*     y=randn(n,1); */
  /*     y(1:5)=y(1:5)+6; */
  /*     [out,C]=LXS(y,X); */
  /* } */
  /* { */
  /*     % Reweighted LTS estimator. */
  /*     % Compute reweighted LTS estimator and produce the plot of */
  /*     % residuals. */
  /*     n=200; */
  /*     p=3; */
  /*     randn('state', 123456); */
  /*     X=randn(n,p); */
  /*     y=randn(n,1); */
  /*     y(1:5)=y(1:5)+6; */
  /*     [out]=LXS(y,X,'rew',1,'lms',0,'plots',1); */
  /* } */
  /* { */
  /*     % Specifying the number of subsamples. */
  /*     % Compute LMS estimator, without plots using 20000 subsamples. */
  /*     n=200; */
  /*     p=3; */
  /*     randn('state', 123456); */
  /*     X=randn(n,p); */
  /*     y=randn(n,1); */
  /*     y(1:5)=y(1:5)+6; */
  /*     [out]=LXS(y,X,'nsamp',20000); */
  /* } */
  /* { */
  /*     % Specifying a confidence level. */
  /*     % Compute reweighted LMS and use a confidence level for outlier */
  /*     % detection equal to 0.999. */
  /*     n=200; */
  /*     p=3; */
  /*     randn('state', 123456); */
  /*     X=randn(n,p); */
  /*     y=randn(n,1); */
  /*     y(1:5)=y(1:5)+6; */
  /*     [out]=LXS(y,X,'rew',1,'conflev',0.999); */
  /* } */
  /* { */
  /*     % Using fast options. */
  /*     % Compute LTS using fast options */
  /*     % detection equal to 0.999. */
  /*     lms=struct; */
  /*     % Do 5 refining steps for each elemental subset */
  /*     lms.refsteps=5; */
  /*     % Store the best 10 subsets */
  /*     lms.bestr=10; */
  /*     n=200; */
  /*     p=3; */
  /*     randn('state', 123456); */
  /*     X=randn(n,p); */
  /*     y=randn(n,1); */
  /*     y(1:5)=y(1:5)+6; */
  /*     [out]=LXS(y,X,'lms',lms,'plots',1); */
  /* } */
  /* { */
  /*     %% We compare the output of different procedures:  only the reweighted
   */
  /*     % LTS seems to detect half of the outlier with a Bonferroni */
  /*     %significance level. */
  /*     close all; */
  /*     state=100; */
  /*     randn('state', state); */
  /*     n=100; */
  /*     X=randn(n,3); */
  /*     bet=[3;4;5]; */
  /*     y=3*randn(n,1)+X*bet; */
  /*     y(1:20)=y(1:20)+13; */
  /*  */
  /*     % Define nominal confidence level */
  /*     conflev=[0.99,1-0.01/length(y)]; */
  /*     % Define number of subsets */
  /*     nsamp=3000; */
  /*     % Define the main title of the plots */
  /*     titl=''; */
  /*  */
  /*     % LMS with no reweighting */
  /*     [outLMS]=LXS(y,X,'nsamp',nsamp,'conflev',conflev(1)); */
  /*     h=subplot(2,2,1) */
  /*     laby='Scaled LMS residuals'; */
  /*     resindexplot(outLMS.residuals,'h',h,'title',titl,'laby',laby,'numlab','','conflev',conflev)
   */
  /*  */
  /*     % LTS with no reweighting */
  /*     h=subplot(2,2,2); */
  /*     [outLTS]=LXS(y,X,'nsamp',nsamp,'conflev',conflev(1),'lms',0); */
  /*     laby='Scaled LTS residuals'; */
  /*     resindexplot(outLTS.residuals,'h',h,'title',titl,'laby',laby,'numlab','','conflev',conflev);
   */
  /*  */
  /*     % LMS with reweighting */
  /*     [outLMSr]=LXS(y,X,'nsamp',nsamp,'conflev',conflev(1),'rew',1); */
  /*     h=subplot(2,2,3); */
  /*     laby='Scaled reweighted LMS residuals'; */
  /*     resindexplot(outLMSr.residuals,'h',h,'title',titl,'laby',laby,'numlab','','conflev',conflev)
   */
  /*  */
  /*     % LTS with reweighting */
  /*     [outLTSr]=LXS(y,X,'nsamp',nsamp,'conflev',conflev(1),'rew',1,'lms',0);
   */
  /*     h=subplot(2,2,4); */
  /*     laby='Scaled reweighted LTS residuals'; */
  /*     resindexplot(outLTSr.residuals,'h',h,'title',titl,'laby',laby,'numlab','','conflev',conflev);
   */
  /*     % By simply changing the seed to 543 (state=543), using a Bonferroni
   * size of 1%, no unit is declared as outlier. */
  /* } */
  /* { */
  /*     %% Example of the use of option bonflevoutX. */
  /*     % In this example a set of remote units is added to a cloud of points.
   */
  /*     % The purpose of this example is to show that while best LMS using all
   */
  /*     % default options contains some of the remote units. In order to make
   * sure */
  /*     % that the remote units are excluded from the best LMS subset it is */
  /*     % necessary to use option bonflevoutX. */
  /*     rng('default') */
  /*     rng(10000) */
  /*     n=100; */
  /*     p=1; */
  /*     X=randn(n,p); */
  /*     epsil=10; */
  /*     beta=ones(p,1); */
  /*     y=X*beta+randn(n,1)*epsil; */
  /*     % Add 10 very remote points */
  /*     add=10; */
  /*     Xadd=X(1:add,:)+5000; */
  /*     yadd=y(1:add)+200; */
  /*     Xall=[X;Xadd]; */
  /*     yall=[y;yadd]; */
  /*     out=LXS(yall,Xall); */
  /*     subplot(2,1,1) */
  /*     plot(Xall,yall,'o') */
  /*     xylim=axis; */
  /*     line(xylim(1:2),out.beta(1)+out.beta(2)*xylim(1:2)) */
  /*     title('Fit using best subset with option bonflevoutX empty') */
  /*     subplot(2,1,2) */
  /*     plot(Xall,yall,'o') */
  /*     out=LXS(yall,Xall,'bonflevoutX',0.99); */
  /*     line(xylim(1:2),out.beta(1)+out.beta(2)*xylim(1:2)) */
  /*     ylim(xylim(3:4)); */
  /*     title('Fit using best subset with option bonflevoutX  not empty') */
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
  emxInit_real_T(sp, &b_y, 2, &sf_emlrtRTEI, true);
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
  emxInit_real_T(sp, &seq, 1, &re_emlrtRTEI, true);
  i = seq->size[0];
  seq->size[0] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, seq, i, &re_emlrtRTEI);
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq->data[i] = b_y->data[i];
  }
  /*  User options */
  /*  singsub= scalar which will contain the number of singular subsets which */
  /*  are extracted (that is the subsets of size p which are not full rank) */
  singsub = 0.0;
  /*  If the number of all possible subsets is <10000 the default is to extract
   */
  /*  all subsets otherwise just 10000. */
  /*  Notice that we use bc, a fast version of nchoosek. One may also use the */
  /*  approximation floor(exp(gammaln(n+1)-gammaln(n-p+1)-gammaln(p+1))+0.5) */
  st.site = &te_emlrtRSI;
  ncomb = bc(&st, X->size[0], X->size[1]);
  /*  Set the "half" of the data points. */
  /*  initialize brob which will be the vector of estimated robust regression */
  /*  coefficients */
  i = out->beta->size[0];
  out->beta->size[0] = X->size[1];
  emxEnsureCapacity_real_T(sp, out->beta, i, &se_emlrtRTEI);
  loop_ub = X->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->beta->data[i] = -99.0;
  }
  /*  Write in structure 'options' the options chosen by the user */
  tsampling = varargin_6;
  /*  And check if the optional user parameters are reasonable. */
  /*  Check h and bdp */
  /*  The user has only specified h: no need to specify bdp. */
  if (varargin_4 < (real_T)X->size[1] + 1.0) {
    st.site = &se_emlrtRSI;
    int2str(&st, (real_T)X->size[1] + 1.0, tmp_data, tmp_size);
    b_tmp_size[0] = 1;
    b_tmp_size[1] = tmp_size[1] + 48;
    for (i = 0; i < 34; i++) {
      b_tmp_data[i] = b_cv[i];
    }
    loop_ub = tmp_size[1];
    if (0 <= loop_ub - 1) {
      memcpy(&b_tmp_data[34], &tmp_data[0], loop_ub * sizeof(char_T));
    }
    for (i = 0; i < 14; i++) {
      b_tmp_data[(i + tmp_size[1]) + 34] = b_cv1[i];
    }
    st.site = &se_emlrtRSI;
    c_error(&st, b_tmp_data, b_tmp_size);
  } else if (varargin_4 >= X->size[0]) {
    st.site = &re_emlrtRSI;
    d_error(&st);
  }
  /*  the user has only specified bdp: h is defined accordingly */
  /*  Check number of subsamples to extract */
  if (varargin_6 > ncomb) {
    if (varargin_10) {
      c_y = NULL;
      m = emlrtCreateCharArray(2, &b_iv[0]);
      emlrtInitCharArrayR2013a((emlrtCTX)sp, 67, m, &u[0]);
      emlrtAssign(&c_y, m);
      st.site = &tpb_emlrtRSI;
      disp(&st, c_y, &d_emlrtMCI);
    }
    tsampling = 0.0;
  } else if (varargin_6 < 0.0) {
    st.site = &qe_emlrtRSI;
    e_error(&st);
  }
  /*  Default values for the optional */
  /*  parameters are set inside structure 'options' */
  /*  Number of data points on which estimates are based */
  /*  Number of subsets to extract */
  /*  if options.lms==1 then LMS, else LTS */
  if (varargin_2 == 2.0) {
    /*  lms=struct; */
    /*  ij is a scalar used to ensure that the best first bestr non singular */
    /*  subsets are stored */
    /*  lmsopt is associated with the message about total computing time */
    lmsopt = 2;
  } else {
    /*  lmsopt is associated with the message about total computing time */
    lmsopt = (varargin_2 == 1.0);
  }
  emxInit_real_T(sp, &C, 2, &lf_emlrtRTEI, true);
  /*  Scalar which controls the messages displayed on the screen */
  /*  if options.nomes==true no message about estimated time to compute LMS is
   * displayed */
  /*  Extract in the rows of matrix C the indexes of all required subsets */
  st.site = &pe_emlrtRSI;
  subsets(&st, tsampling, X->size[0], X->size[1], ncomb, varargin_10, C,
          &nselected);
  /*  Store the indices in varargout */
  /*  rmin will contain the minimum value of LMS (LTS) */
  ncomb = rtInf;
  /*  initialise and start timer. */
  tsampling = muDoubleScalarCeil(muDoubleScalarMin(nselected / 100.0, 1000.0));
  if (!(tsampling >= 0.0)) {
    emlrtNonNegativeCheckR2012b(tsampling, &b_emlrtDCI, (emlrtCTX)sp);
  }
  /*  bonflevoutX option to search for outliers in the X space */
  emxInit_real_T(sp, &outliers, 1, &we_emlrtRTEI, true);
  emxInit_real_T(sp, &Xb, 2, &xe_emlrtRTEI, true);
  if ((varargin_12_size[0] != 0) && (varargin_12_size[1] != 0)) {
    bonflevout = true;
    if (X->size[1] > 1) {
      critdef_size[0] = 1;
      critdef_size[1] = 2;
      critdef_data[0] = 'm';
      critdef_data[1] = 'd';
    } else {
      critdef_size[0] = 1;
      critdef_size[1] = 3;
      critdef_data[0] = 'u';
      critdef_data[1] = 'n';
      critdef_data[2] = 'i';
    }
    emxInit_real_T(sp, &b_X, 2, &ve_emlrtRTEI, true);
    i = b_X->size[0] * b_X->size[1];
    b_X->size[0] = X->size[0];
    b_X->size[1] = X->size[1];
    emxEnsureCapacity_real_T(sp, b_X, i, &ve_emlrtRTEI);
    loop_ub = X->size[0] * X->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_X->data[i] = X->data[i];
    }
    emxInit_real_T(sp, &outFSM_outliers, 2, &of_emlrtRTEI, true);
    emxInit_real_T(sp, &expl_temp, 2, &tf_emlrtRTEI, true);
    emxInit_real_T(sp, &b_expl_temp, 2, &tf_emlrtRTEI, true);
    emxInit_real_T(sp, &c_expl_temp, 2, &tf_emlrtRTEI, true);
    emxInit_real_T(sp, &d_expl_temp, 2, &tf_emlrtRTEI, true);
    st.site = &oe_emlrtRSI;
    FSM(SD, &st, b_X, varargin_12_data, varargin_12_size,
        muDoubleScalarFloor((real_T)X->size[0] * 0.6), critdef_data,
        critdef_size, (real_T)X->size[1] + 1.0, outFSM_outliers, expl_temp, Xb,
        b_expl_temp, c_expl_temp, d_expl_temp, expl_temp_data, tmp_size,
        b_expl_temp_data, b_tmp_size);
    i = outliers->size[0];
    outliers->size[0] = outFSM_outliers->size[0] * outFSM_outliers->size[1];
    emxEnsureCapacity_real_T(sp, outliers, i, &we_emlrtRTEI);
    loop_ub = outFSM_outliers->size[0] * outFSM_outliers->size[1];
    emxFree_real_T(&b_X);
    emxFree_real_T(&d_expl_temp);
    emxFree_real_T(&c_expl_temp);
    emxFree_real_T(&b_expl_temp);
    emxFree_real_T(&expl_temp);
    for (i = 0; i < loop_ub; i++) {
      outliers->data[i] = outFSM_outliers->data[i];
    }
    emxFree_real_T(&outFSM_outliers);
  } else {
    bonflevout = false;
    i = outliers->size[0];
    outliers->size[0] = 1;
    emxEnsureCapacity_real_T(sp, outliers, i, &te_emlrtRTEI);
    outliers->data[0] = 0.0;
  }
  /*  Computation of LMS (LTS) */
  st.site = &ne_emlrtRSI;
  tic(&st);
  i = out->bs->size[0] * out->bs->size[1];
  out->bs->size[0] = 1;
  out->bs->size[1] = X->size[1];
  emxEnsureCapacity_real_T(sp, out->bs, i, &ue_emlrtRTEI);
  loop_ub = X->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->bs->data[i] = 0.0;
  }
  i = (int32_T)nselected;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, nselected, mxDOUBLE_CLASS,
                                (int32_T)nselected, &u_emlrtRTEI, (emlrtCTX)sp);
  emxInit_real_T(sp, &r2, 1, &pf_emlrtRTEI, true);
  emxInit_int32_T(sp, &ia, 1, &lf_emlrtRTEI, true);
  emxInit_int32_T(sp, &ib, 1, &lf_emlrtRTEI, true);
  emxInit_real_T(sp, &d_y, 1, &cf_emlrtRTEI, true);
  for (b_i = 0; b_i < i; b_i++) {
    if (b_i + 1U <= (uint32_T)tsampling) {
      st.site = &me_emlrtRSI;
      tic(&st);
    }
    /*  extract a subset of size p */
    if ((b_i + 1 < 1) || (b_i + 1 > C->size[0])) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, C->size[0], &c_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    guard1 = false;
    if (bonflevout) {
      st.site = &le_emlrtRSI;
      b_st.site = &odb_emlrtRSI;
      loop_ub = C->size[1];
      i1 = b_y->size[0] * b_y->size[1];
      b_y->size[0] = 1;
      b_y->size[1] = C->size[1];
      emxEnsureCapacity_real_T(&b_st, b_y, i1, &ye_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_y->data[i1] = C->data[b_i + C->size[0] * i1];
      }
      c_st.site = &pdb_emlrtRSI;
      c_do_vectors(&c_st, b_y, outliers, r2, ia, ib);
      if (r2->size[0] != 0) {
        i1 = out->residuals->size[0];
        out->residuals->size[0] = 1;
        emxEnsureCapacity_real_T(sp, out->residuals, i1, &bf_emlrtRTEI);
        out->residuals->data[0] = rtNaN;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
    if (guard1) {
      loop_ub = C->size[1];
      b_loop_ub = X->size[1];
      i1 = Xb->size[0] * Xb->size[1];
      Xb->size[0] = C->size[1];
      Xb->size[1] = X->size[1];
      emxEnsureCapacity_real_T(sp, Xb, i1, &xe_emlrtRTEI);
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          if (C->data[b_i + C->size[0] * i2] !=
              (int32_T)muDoubleScalarFloor(C->data[b_i + C->size[0] * i2])) {
            emlrtIntegerCheckR2012b(C->data[b_i + C->size[0] * i2], &e_emlrtDCI,
                                    (emlrtCTX)sp);
          }
          i3 = (int32_T)C->data[b_i + C->size[0] * i2];
          if ((i3 < 1) || (i3 > X->size[0])) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, X->size[0], &k_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          Xb->data[i2 + Xb->size[0] * i1] = X->data[(i3 + X->size[0] * i1) - 1];
        }
      }
      loop_ub = C->size[1];
      i1 = b_y->size[0] * b_y->size[1];
      b_y->size[0] = 1;
      b_y->size[1] = C->size[1];
      emxEnsureCapacity_real_T(sp, b_y, i1, &ye_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_y->data[i1] = C->data[b_i + C->size[0] * i1];
      }
      st.site = &ke_emlrtRSI;
      b_indexShapeCheck(&st, y->size[0], *(int32_T(*)[2])b_y->size);
      loop_ub = C->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        i2 = (int32_T)C->data[b_i + C->size[0] * i1];
        if ((i2 < 1) || (i2 > y->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, y->size[0], &l_emlrtBCI,
                                        (emlrtCTX)sp);
        }
      }
      /*  if rank(Xb)==p Warning: this instruction has been replaced by a */
      /*  posteriori control on vector b */
      /*  Compute the vector of coefficients using matrice Xb and yb */
      loop_ub = C->size[1];
      i1 = d_y->size[0];
      d_y->size[0] = C->size[1];
      emxEnsureCapacity_real_T(sp, d_y, i1, &cf_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        d_y->data[i1] = y->data[(int32_T)C->data[b_i + C->size[0] * i1] - 1];
      }
      st.site = &je_emlrtRSI;
      mldivide(&st, Xb, d_y, out->residuals);
    }
    if (1 > out->residuals->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, out->residuals->size[0], &d_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (!muDoubleScalarIsNaN(out->residuals->data[0])) {
      if (1 > out->residuals->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, out->residuals->size[0],
                                      &e_emlrtBCI, (emlrtCTX)sp);
      }
      if (!muDoubleScalarIsInf(out->residuals->data[0])) {
        /*  Residuals for all observations using b based on subset */
        st.site = &ie_emlrtRSI;
        b_st.site = &x_emlrtRSI;
        dynamic_size_checks(&b_st, X, out->residuals, X->size[1],
                            out->residuals->size[0]);
        b_st.site = &w_emlrtRSI;
        mtimes(&b_st, X, out->residuals, r2);
        loop_ub = y->size[0];
        if (y->size[0] != r2->size[0]) {
          emlrtSizeEqCheck1DR2012b(y->size[0], r2->size[0], &b_emlrtECI,
                                   (emlrtCTX)sp);
        }
        /*  Squared residuals for all the observations */
        i1 = d_y->size[0];
        d_y->size[0] = y->size[0];
        emxEnsureCapacity_real_T(sp, d_y, i1, &ff_emlrtRTEI);
        for (i1 = 0; i1 < loop_ub; i1++) {
          d_y->data[i1] = y->data[i1] - r2->data[i1];
        }
        st.site = &he_emlrtRSI;
        power(&st, d_y, r2);
        /*  Ordering of squared residuals */
        st.site = &ge_emlrtRSI;
        b_st.site = &reb_emlrtRSI;
        c_sort(&b_st, r2);
        if (varargin_2 == 1.0) {
          /*  LMS */
          if (varargin_4 != (int32_T)muDoubleScalarFloor(varargin_4)) {
            emlrtIntegerCheckR2012b(varargin_4, &f_emlrtDCI, (emlrtCTX)sp);
          }
          if ((int32_T)varargin_4 > r2->size[0]) {
            emlrtDynamicBoundsCheckR2012b((int32_T)varargin_4, 1, r2->size[0],
                                          &m_emlrtBCI, (emlrtCTX)sp);
          }
          rrob = r2->data[(int32_T)varargin_4 - 1];
        } else {
          /*  STANDARD LTS without concentration steps */
          if (1 > r2->size[0]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, r2->size[0], &f_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          if (varargin_4 != (int32_T)muDoubleScalarFloor(varargin_4)) {
            emlrtIntegerCheckR2012b(varargin_4, &c_emlrtDCI, (emlrtCTX)sp);
          }
          if ((int32_T)varargin_4 > r2->size[0]) {
            emlrtDynamicBoundsCheckR2012b((int32_T)varargin_4, 1, r2->size[0],
                                          &g_emlrtBCI, (emlrtCTX)sp);
          }
          tmp_size[0] = 1;
          tmp_size[1] = (int32_T)varargin_4;
          st.site = &fe_emlrtRSI;
          b_indexShapeCheck(&st, r2->size[0], tmp_size);
          i1 = r2->size[0];
          r2->size[0] = (int32_T)varargin_4;
          emxEnsureCapacity_real_T(sp, r2, i1, &jf_emlrtRTEI);
          st.site = &fe_emlrtRSI;
          rrob = sum(&st, r2);
        }
        if (rrob < ncomb) {
          /*  rmin = smallest ordered quantile or smallest truncated sum. */
          ncomb = rrob;
          /*  brob = \beta_lms or \beta_lts */
          i1 = out->beta->size[0];
          out->beta->size[0] = out->residuals->size[0];
          emxEnsureCapacity_real_T(sp, out->beta, i1, &kf_emlrtRTEI);
          loop_ub = out->residuals->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            out->beta->data[i1] = out->residuals->data[i1];
          }
          /*  bs = units forming best subset according to lms or lts */
          loop_ub = C->size[1];
          i1 = out->bs->size[0] * out->bs->size[1];
          out->bs->size[0] = 1;
          out->bs->size[1] = C->size[1];
          emxEnsureCapacity_real_T(sp, out->bs, i1, &ue_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub; i1++) {
            out->bs->data[i1] = C->data[b_i + C->size[0] * i1];
          }
        }
      } else {
        singsub++;
      }
    } else {
      singsub++;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(&d_y);
  emxFree_int32_T(&ib);
  emxFree_real_T(&b_y);
  emxFree_real_T(&C);
  emxFree_real_T(&Xb);
  emxFree_real_T(&outliers);
  if (1 > out->beta->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, out->beta->size[0], &h_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  if (out->beta->data[0] == -99.0) {
    st.site = &ee_emlrtRSI;
    o_error(&st);
  }
  if (varargin_2 == 1.0) {
    /*  Estimate of scale based on h-quantile of all squared residuals */
    st.site = &de_emlrtRSI;
    if (ncomb < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &st, &ac_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    tsampling = muDoubleScalarSqrt(ncomb);
  } else {
    /*  Estimate of scale based on the first h squared smallest residuals */
    tsampling = ncomb / varargin_4;
    st.site = &ce_emlrtRSI;
    if (tsampling < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &st, &ac_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    tsampling = muDoubleScalarSqrt(tsampling);
  }
  /*  residuals = Raw residuals using robust estimate of beta */
  st.site = &be_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  dynamic_size_checks(&b_st, X, out->beta, X->size[1], out->beta->size[0]);
  b_st.site = &w_emlrtRSI;
  mtimes(&b_st, X, out->beta, out->residuals);
  if (y->size[0] != out->residuals->size[0]) {
    emlrtSizeEqCheck1DR2012b(y->size[0], out->residuals->size[0], &c_emlrtECI,
                             (emlrtCTX)sp);
  }
  i = out->residuals->size[0];
  out->residuals->size[0] = y->size[0];
  emxEnsureCapacity_real_T(sp, out->residuals, i, &af_emlrtRTEI);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->residuals->data[i] = y->data[i] - out->residuals->data[i];
  }
  /*  Consistency factor */
  if (lmsopt == 1) {
    /*  Consistency factor based on the fact that med |z_i|/ \Phi^-1(0.75) is a
     */
    /*  consistent estimator of \sigma when z_i ~ N(0, \sigma^2) */
    /*  The additional factor 1+5/(n-p) was found by simulation by Rousseeuw and
     */
    /*  Leroy (1987), see p. 202 */
    /*  Apply the consistency factor to the preliminary scale estimate */
    tsampling *= 1.4826 * (5.0 / (real_T)(X->size[0] - X->size[1]) + 1.0);
  } else {
    /*  Consistency factor based on the variance of the truncated normal
     * distribution. */
    /*  1-h/n=trimming percentage */
    /*  Compute variance of the truncated normal distribution. */
    st.site = &ae_emlrtRSI;
    ncomb = norminv(&st, 0.5 * (varargin_4 / (real_T)X->size[0] + 1.0));
    /* factor=1/sqrt(1-(2*a.*normpdf(a))./(2*normcdf(a)-1)); */
    ncomb = 1.0 -
            2.0 * ((real_T)X->size[0] / varargin_4) * ncomb *
                (muDoubleScalarExp(-0.5 * ncomb * ncomb) / 2.5066282746310002);
    st.site = &yd_emlrtRSI;
    if (ncomb < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &st, &ac_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    ncomb = muDoubleScalarSqrt(ncomb);
    /*  Note that factor=sqrt(factor1) */
    /*      v=1; */
    /*      a=chi2inv(h/n,1); */
    /*      factor1=(h/n)/(chi2cdf(a,1+2)); */
    /*  Apply the asymptotic consistency factor to the preliminary scale
     * estimate */
    tsampling *= 1.0 / ncomb;
    /*  Apply small sample correction factor of Pison et al. */
    if (varargin_4 < X->size[0]) {
      st.site = &xd_emlrtRSI;
      ncomb = corfactorRAW(&st, X->size[0], varargin_4 / (real_T)X->size[0]);
      st.site = &xd_emlrtRSI;
      if (ncomb < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &st, &ac_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      ncomb = muDoubleScalarSqrt(ncomb);
      tsampling *= ncomb;
    }
    /*          % Analysis of the small sample correction factor of Pison et al.
     */
    /*          rangen=20:100; */
    /*          corf=zeros(length(rangen),1); */
    /*          for i=1:length(rangen) */
    /*              corf(i)=sqrt(corfactorRAW(1,rangen(i),0.7)); */
    /*          end */
    /*          plot(rangen',corf) */
    /*          disp('s0 after') */
    /*          disp(s0) */
  }
  emxInit_boolean_T(sp, &weights, 1, &qf_emlrtRTEI, true);
  if (muDoubleScalarAbs(tsampling) > 1.0E-7) {
    /*  Assign weight=1 to the h units which show the smallest h squared */
    /*  residuals */
    st.site = &wd_emlrtRSI;
    b_st.site = &wd_emlrtRSI;
    power(&b_st, out->residuals, r2);
    b_st.site = &jl_emlrtRSI;
    sort(&b_st, r2, ia);
    i = r2->size[0];
    r2->size[0] = ia->size[0];
    emxEnsureCapacity_real_T(&st, r2, i, &df_emlrtRTEI);
    loop_ub = ia->size[0];
    for (i = 0; i < loop_ub; i++) {
      r2->data[i] = ia->data[i];
    }
    i = out->weights->size[0];
    out->weights->size[0] = X->size[0];
    emxEnsureCapacity_boolean_T(sp, out->weights, i, &gf_emlrtRTEI);
    loop_ub = X->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->weights->data[i] = false;
    }
    if (1 > r2->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, r2->size[0], &i_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (varargin_4 != (int32_T)muDoubleScalarFloor(varargin_4)) {
      emlrtIntegerCheckR2012b(varargin_4, &d_emlrtDCI, (emlrtCTX)sp);
    }
    loop_ub = (int32_T)varargin_4;
    if ((int32_T)varargin_4 > r2->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)varargin_4, 1, r2->size[0],
                                    &j_emlrtBCI, (emlrtCTX)sp);
    }
    emxInit_int32_T(sp, &r, 2, &lf_emlrtRTEI, true);
    i = r->size[0] * r->size[1];
    r->size[0] = 1;
    r->size[1] = (int32_T)varargin_4;
    emxEnsureCapacity_int32_T(sp, r, i, &if_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)r2->data[i];
      if ((i1 < 1) || (i1 > X->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)r2->data[i], 1, X->size[0],
                                      &n_emlrtBCI, (emlrtCTX)sp);
      }
      r->data[i] = i1;
    }
    loop_ub = r->size[1];
    for (i = 0; i < loop_ub; i++) {
      out->weights->data[r->data[i] - 1] = true;
    }
    emxFree_int32_T(&r);
    /*  Initialize structure out */
    /*  Store inside structure out, the vector of the weights */
    /*  Compute the Student T quantile threshold . If options.conflev=0.975, */
    /*  1.25% on the right and */
    /*  1.25% on the left, globally 2.5%. */
    /*  m = factor which modifies the degrees of freedom used for computing */
    /*  the quantile. */
    st.site = &vd_emlrtRSI;
    ncomb = 2.0 * (real_T)X->size[0] / asvar(&st, varargin_4, X->size[0]);
    /*  Confidence level which is used for outlier detection */
    st.site = &ud_emlrtRSI;
    ncomb = tinv(&st, ncomb);
    /*  Observations with a standardized residual smaller than the quantile */
    /*  threshold have a weight equal to 1, else the weight is equal to 0. */
    /*  REMARK: using this threshold, even if the sample is homogeneous, */
    /*  you are willing to declare at least 2.5% units as outliers. */
    /*  Remark: sqrt(chi2inv(0.975,1)) = tinv(0.9875,\infinity) = quantile */
    loop_ub = out->residuals->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->residuals->data[i] /= tsampling;
    }
    st.site = &td_emlrtRSI;
    b_abs(&st, out->residuals, r2);
    i = weights->size[0];
    weights->size[0] = r2->size[0];
    emxEnsureCapacity_boolean_T(sp, weights, i, &nf_emlrtRTEI);
    loop_ub = r2->size[0];
    for (i = 0; i < loop_ub; i++) {
      weights->data[i] = (r2->data[i] <= ncomb);
    }
    /*  weights is a boolean vector. */
    /*     %% Reweighting part */
    /*  if options.rew==true use reweighted version of LMS/LTS, */
    /*  The default is no reweighting */
    out->rew = false;
  } else {
    /*  Perfect fit */
    if (varargin_10) {
      e_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a((emlrtCTX)sp, 66, m, &b_u[0]);
      emlrtAssign(&e_y, m);
      st.site = &spb_emlrtRSI;
      disp(&st, e_y, &e_emlrtMCI);
    }
    /*  There is an approximate perfect fit for the first h observations. */
    /*  We consider as outliers all units with residual greater than 1e-7. */
    st.site = &sd_emlrtRSI;
    b_abs(&st, out->residuals, r2);
    i = weights->size[0];
    weights->size[0] = r2->size[0];
    emxEnsureCapacity_boolean_T(sp, weights, i, &ef_emlrtRTEI);
    loop_ub = r2->size[0];
    for (i = 0; i < loop_ub; i++) {
      weights->data[i] = (r2->data[i] <= 1.0E-7);
    }
    /*  Store the weights */
    i = out->weights->size[0];
    out->weights->size[0] = weights->size[0];
    emxEnsureCapacity_boolean_T(sp, out->weights, i, &hf_emlrtRTEI);
    loop_ub = weights->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->weights->data[i] = weights->data[i];
    }
    out->rew = false;
    /*  s is set to 0 */
    tsampling = 0.0;
    /*  Standardized residuals are artificially set equal to raw residuals. */
  }
  emxFree_int32_T(&ia);
  emxFree_real_T(&r2);
  /*  Store quantities in the out structure */
  /*  Store robust estimate of beta coefficients */
  /*  Store robust estimate of s */
  out->scale = tsampling;
  /*  Store standardized residuals */
  /*  Store units forming initial subset */
  /*  Store list of units declared as outliers */
  b_loop_ub = weights->size[0] - 1;
  loop_ub = 0;
  for (b_i = 0; b_i <= b_loop_ub; b_i++) {
    if (!weights->data[b_i]) {
      loop_ub++;
    }
  }
  emxInit_int32_T(sp, &r1, 1, &rf_emlrtRTEI, true);
  i = r1->size[0];
  r1->size[0] = loop_ub;
  emxEnsureCapacity_int32_T(sp, r1, i, &lf_emlrtRTEI);
  loop_ub = 0;
  for (b_i = 0; b_i <= b_loop_ub; b_i++) {
    if (!weights->data[b_i]) {
      r1->data[loop_ub] = b_i + 1;
      loop_ub++;
    }
  }
  emxFree_boolean_T(&weights);
  i = out->outliers->size[0];
  out->outliers->size[0] = r1->size[0];
  emxEnsureCapacity_real_T(sp, out->outliers, i, &mf_emlrtRTEI);
  loop_ub = r1->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (r1->data[i] > seq->size[0]) {
      emlrtDynamicBoundsCheckR2012b(r1->data[i], 1, seq->size[0], &o_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    out->outliers->data[i] = seq->data[r1->data[i] - 1];
  }
  emxFree_int32_T(&r1);
  emxFree_real_T(&seq);
  /*  Store confidence level which is used to draw the horizontal lines in the
   */
  /*  plot */
  out->conflev = 0.975;
  /*  Store the number of observations that have determined the LTS (LMS) */
  /*  estimator, i.e. the value of h. */
  out->h = varargin_4;
  /*  Store number of singular subsets */
  out->singsub = singsub;
  if (varargin_10 && (singsub / nselected > 0.1)) {
    for (i = 0; i < 30; i++) {
      c_u[i] = '-';
    }
    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 30, m, &c_u[0]);
    emlrtAssign(&f_y, m);
    st.site = &rpb_emlrtRSI;
    disp(&st, f_y, &f_emlrtMCI);
    ncomb = 100.0 * singsub / nselected;
    if (bonflevout) {
      st.site = &rd_emlrtRSI;
      b_st.site = &sv_emlrtRSI;
      h_y = NULL;
      m = emlrtCreateDoubleScalar(1.0);
      emlrtAssign(&h_y, m);
      j_y = NULL;
      m = emlrtCreateDoubleScalar(ncomb);
      emlrtAssign(&j_y, m);
      l_y = NULL;
      m = emlrtCreateCharArray(2, &iv4[0]);
      emlrtInitCharArrayR2013a(&b_st, 122, m, &e_u[0]);
      emlrtAssign(&l_y, m);
      c_st.site = &jnb_emlrtRSI;
      ncomb =
          g_emlrt_marshallIn(&c_st,
                             d_feval(&c_st, g_emlrt_marshallOut(&c_st, b_cv2),
                                     h_y, l_y, j_y, &ab_emlrtMCI),
                             "<output of feval>");
      n_y = NULL;
      m = emlrtCreateDoubleScalar(ncomb);
      emlrtAssign(&n_y, m);
      emlrtDisplayR2012b(n_y, (char_T *)"ans", &b_emlrtRTEI, (emlrtCTX)sp);
    } else {
      st.site = &qd_emlrtRSI;
      b_st.site = &sv_emlrtRSI;
      g_y = NULL;
      m = emlrtCreateDoubleScalar(1.0);
      emlrtAssign(&g_y, m);
      i_y = NULL;
      m = emlrtCreateDoubleScalar(ncomb);
      emlrtAssign(&i_y, m);
      k_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(&b_st, 62, m, &d_u[0]);
      emlrtAssign(&k_y, m);
      c_st.site = &jnb_emlrtRSI;
      ncomb =
          g_emlrt_marshallIn(&c_st,
                             d_feval(&c_st, g_emlrt_marshallOut(&c_st, b_cv2),
                                     g_y, k_y, i_y, &ab_emlrtMCI),
                             "<output of feval>");
      m_y = NULL;
      m = emlrtCreateDoubleScalar(ncomb);
      emlrtAssign(&m_y, m);
      emlrtDisplayR2012b(m_y, (char_T *)"ans", &emlrtRTEI, (emlrtCTX)sp);
    }
  }
  out->X.size[0] = 0;
  out->X.size[1] = 0;
  out->y.size[0] = 0;
  out->y.size[1] = 0;
  /*  Store information about the class of the object */
  if (lmsopt == 1) {
    out->class[0] = 'L';
    out->class[1] = 'M';
    out->class[2] = 'S';
  } else {
    out->class[0] = 'L';
    out->class[1] = 'T';
    out->class[2] = 'S';
  }
  /*  Create plots */
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (LXS.c) */
