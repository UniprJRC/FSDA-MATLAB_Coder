/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LXS_wrapper1.c
 *
 * Code generation for function 'LXS_wrapper1'
 *
 */

/* Include files */
#include "LXS_wrapper1.h"
#include "FSM.h"
#include "LXS.h"
#include "LXS_wrapper1_data.h"
#include "LXS_wrapper1_emxutil.h"
#include "LXS_wrapper1_mexutil.h"
#include "LXS_wrapper1_types.h"
#include "abs.h"
#include "bc.h"
#include "chkinputR.h"
#include "combineVectorElements.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "eml_setop.h"
#include "error.h"
#include "indexShapeCheck.h"
#include "int2str.h"
#include "median.h"
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
#include "toc.h"
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

static emlrtRSInfo emlrtRSI = {
    78,             /* lineNo */
    "LXS_wrapper1", /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\LXS_wrapper1.m" /* pathName
                                                                       */
};

static emlrtRSInfo b_emlrtRSI = {
    1064,                                          /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    1062,                                          /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    1016,                                          /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    997,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    982,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI = {
    980,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo h_emlrtRSI = {
    978,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI = {
    975,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo j_emlrtRSI = {
    971,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo k_emlrtRSI = {
    967,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo l_emlrtRSI = {
    961,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo m_emlrtRSI = {
    948,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo n_emlrtRSI = {
    940,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo o_emlrtRSI = {
    937,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo p_emlrtRSI = {
    922,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo q_emlrtRSI = {
    901,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo r_emlrtRSI = {
    889,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo s_emlrtRSI = {
    887,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo t_emlrtRSI = {
    869,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo u_emlrtRSI = {
    852,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo v_emlrtRSI = {
    837,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo w_emlrtRSI = {
    823,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo x_emlrtRSI = {
    813,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo y_emlrtRSI = {
    805,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo ab_emlrtRSI = {
    790,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo bb_emlrtRSI = {
    783,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo cb_emlrtRSI = {
    775,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo db_emlrtRSI = {
    764,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo eb_emlrtRSI = {
    726,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo fb_emlrtRSI = {
    721,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo gb_emlrtRSI = {
    716,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo hb_emlrtRSI = {
    710,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo ib_emlrtRSI = {
    705,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo jb_emlrtRSI = {
    696,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo kb_emlrtRSI = {
    654,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo lb_emlrtRSI = {
    550,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo mb_emlrtRSI = {
    523,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo nb_emlrtRSI = {
    521,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo ob_emlrtRSI = {
    443,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo pb_emlrtRSI = {
    430,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo gfb_emlrtRSI = {
    17,    /* lineNo */
    "max", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m" /* pathName
                                                                        */
};

static emlrtRSInfo hfb_emlrtRSI =
    {
        38,         /* lineNo */
        "minOrMax", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" /* pathName */
};

static emlrtRSInfo ifb_emlrtRSI =
    {
        77,        /* lineNo */
        "maximum", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" /* pathName */
};

static emlrtRSInfo jfb_emlrtRSI = {
    175,             /* lineNo */
    "unaryMinOrMax", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo kfb_emlrtRSI = {
    871,                    /* lineNo */
    "maxRealVectorOmitNaN", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" /* pathName */
};

static emlrtMCInfo emlrtMCI = {
    546,                                           /* lineNo */
    17,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtMCInfo b_emlrtMCI = {
    1012,                                          /* lineNo */
    9,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtMCInfo c_emlrtMCI = {
    1059,                                          /* lineNo */
    9,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtBCInfo emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    961,                                            /* lineNo */
    36,                                             /* colNo */
    "y",                                            /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    961,                                            /* lineNo */
    18,                                             /* colNo */
    "X",                                            /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    1045,                                           /* lineNo */
    18,                                             /* colNo */
    "seq",                                          /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    924,                                            /* lineNo */
    13,                                             /* colNo */
    "weights",                                      /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    779,                                            /* lineNo */
    21,                                             /* colNo */
    "bestscales",                                   /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    805,                                            /* lineNo */
    13,                                             /* colNo */
    "time",                                         /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    786,                                            /* lineNo */
    17,                                             /* colNo */
    "bestscales",                                   /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    721,                                            /* lineNo */
    14,                                             /* colNo */
    "y",                                            /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtDCInfo emlrtDCI = {
    720,                                            /* lineNo */
    14,                                             /* colNo */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    1                                               /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    720,                                            /* lineNo */
    14,                                             /* colNo */
    "X",                                            /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    672,                                            /* lineNo */
    1,                                              /* colNo */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    4                                               /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = {
    616,                                            /* lineNo */
    5,                                              /* colNo */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    1                                               /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = {
    616,                                            /* lineNo */
    23,                                             /* colNo */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    4                                               /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = {
    616,                                            /* lineNo */
    23,                                             /* colNo */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    1                                               /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    1075,                                           /* lineNo */
    25,                                             /* colNo */
    "X",                                            /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtECInfo emlrtECI = {
    -1,                                            /* nDims */
    971,                                           /* lineNo */
    21,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtECInfo b_emlrtECI = {
    -1,                                            /* nDims */
    967,                                           /* lineNo */
    19,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    924,                                            /* lineNo */
    26,                                             /* colNo */
    "indsorres2",                                   /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = {
    924,                                            /* lineNo */
    26,                                             /* colNo */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    1                                               /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    924,                                            /* lineNo */
    24,                                             /* colNo */
    "indsorres2",                                   /* aName */
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

static emlrtBCInfo m_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    845,                                            /* lineNo */
    29,                                             /* colNo */
    "bestsubset",                                   /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtECInfo d_emlrtECI = {
    -1,                                            /* nDims */
    788,                                           /* lineNo */
    17,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    788,                                            /* lineNo */
    28,                                             /* colNo */
    "bestsubset",                                   /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtECInfo e_emlrtECI = {
    -1,                                            /* nDims */
    781,                                           /* lineNo */
    21,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    781,                                            /* lineNo */
    32,                                             /* colNo */
    "bestsubset",                                   /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    837,                                            /* lineNo */
    38,                                             /* colNo */
    "bestbetas",                                    /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtRTEInfo c_emlrtRTEI = {
    836,                                           /* lineNo */
    11,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtBCInfo q_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    822,                                            /* lineNo */
    9,                                              /* colNo */
    "brob",                                         /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    792,                                            /* lineNo */
    22,                                             /* colNo */
    "brob",                                         /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtECInfo f_emlrtECI = {
    -1,                                            /* nDims */
    787,                                           /* lineNo */
    17,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtBCInfo s_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    787,                                            /* lineNo */
    27,                                             /* colNo */
    "bestbetas",                                    /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtECInfo g_emlrtECI = {
    -1,                                            /* nDims */
    780,                                           /* lineNo */
    21,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtBCInfo t_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    780,                                            /* lineNo */
    31,                                             /* colNo */
    "bestbetas",                                    /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    730,                                            /* lineNo */
    33,                                             /* colNo */
    "b",                                            /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    730,                                            /* lineNo */
    17,                                             /* colNo */
    "b",                                            /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    714,                                            /* lineNo */
    15,                                             /* colNo */
    "C",                                            /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtRTEInfo d_emlrtRTEI = {
    708,                                           /* lineNo */
    7,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtBCInfo x_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    684,                                            /* lineNo */
    31,                                             /* colNo */
    "X",                                            /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = {
    618,                                            /* lineNo */
    29,                                             /* colNo */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    1                                               /* checkKind */
};

static emlrtRTEInfo oc_emlrtRTEI = {
    430,                                           /* lineNo */
    2,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = {
    430,                                           /* lineNo */
    4,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = {
    431,                                           /* lineNo */
    1,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = {
    454,                                           /* lineNo */
    1,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = {
    616,                                           /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = {
    617,                                           /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo vc_emlrtRTEI = {
    618,                                           /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo wc_emlrtRTEI = {
    701,                                           /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo xc_emlrtRTEI = {
    681,                                           /* lineNo */
    9,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo yc_emlrtRTEI = {
    686,                                           /* lineNo */
    13,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = {
    1042,                                          /* lineNo */
    1,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo bd_emlrtRTEI = {
    684,                                           /* lineNo */
    13,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = {
    696,                                           /* lineNo */
    16,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = {
    698,                                           /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = {
    720,                                           /* lineNo */
    9,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = {
    714,                                           /* lineNo */
    13,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = {
    837,                                           /* lineNo */
    28,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = {
    717,                                           /* lineNo */
    9,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo id_emlrtRTEI = {
    869,                                           /* lineNo */
    1,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = {
    843,                                           /* lineNo */
    13,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = {
    721,                                           /* lineNo */
    12,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo md_emlrtRTEI = {
    1016,                                          /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo nd_emlrtRTEI = {
    1019,                                          /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo od_emlrtRTEI = {
    930,                                           /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = {
    924,                                           /* lineNo */
    13,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = {
    78,             /* lineNo */
    1,              /* colNo */
    "LXS_wrapper1", /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\LXS_wrapper1.m" /* pName
                                                                       */
};

static emlrtRTEInfo rd_emlrtRTEI = {
    1045,                                          /* lineNo */
    1,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = {
    948,                                           /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo td_emlrtRTEI = {
    1081,                                          /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo ud_emlrtRTEI = {
    1075,                                          /* lineNo */
    13,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo vd_emlrtRTEI = {
    961,                                           /* lineNo */
    16,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo wd_emlrtRTEI = {
    961,                                           /* lineNo */
    34,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo xd_emlrtRTEI = {
    967,                                           /* lineNo */
    9,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo yd_emlrtRTEI = {
    971,                                           /* lineNo */
    21,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo ae_emlrtRTEI = {
    997,                                           /* lineNo */
    9,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo be_emlrtRTEI = {
    696,                                           /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo ce_emlrtRTEI = {
    764,                                           /* lineNo */
    13,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo de_emlrtRTEI = {
    923,                                           /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo ee_emlrtRTEI = {
    1,              /* lineNo */
    18,             /* colNo */
    "LXS_wrapper1", /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\LXS_wrapper1.m" /* pName
                                                                       */
};

static emlrtRTEInfo fe_emlrtRTEI = {
    1045,                                          /* lineNo */
    18,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo ge_emlrtRTEI = {
    961,                                           /* lineNo */
    18,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo he_emlrtRTEI = {
    431,                                           /* lineNo */
    6,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo ie_emlrtRTEI = {
    696,                                           /* lineNo */
    12,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo je_emlrtRTEI = {
    764,                                           /* lineNo */
    19,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRSInfo gib_emlrtRSI = {
    546,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo jib_emlrtRSI = {
    1012,                                          /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo kib_emlrtRSI = {
    1059,                                          /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

/* Function Declarations */
static const mxArray *u_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[58]);

static const mxArray *v_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[122]);

static const mxArray *w_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[66]);

static const mxArray *x_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[30]);

/* Function Definitions */
static const mxArray *u_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[58])
{
  static const int32_T iv[2] = {1, 58};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 58, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *v_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[122])
{
  static const int32_T iv[2] = {1, 122};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 122, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *w_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[66])
{
  static const int32_T iv[2] = {1, 66};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 66, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *x_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[30])
{
  static const int32_T iv[2] = {1, 30};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 30, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

void LXS_wrapper1(LXS_wrapper1StackData *SD, const emlrtStack *sp,
                  const emxArray_real_T *y, const emxArray_real_T *X,
                  const real_T bonflevoutX_data[],
                  const int32_T bonflevoutX_size[2], real_T conflev, real_T h,
                  boolean_T intercept, const struct0_T *lms, boolean_T msg,
                  boolean_T nocheck, boolean_T nomes, real_T nsamp,
                  boolean_T rew, boolean_T yxsave, struct_LXSlmsstruct_T *out,
                  emxArray_real_T *C)
{
  static const char_T b_cv8[122] = {
      'W', 'a', 'r', 'n', 'i', 'n', 'g', ':', ' ',  'N', 'u', 'm', 'b', 'e',
      'r', ' ', 'o', 'f', ' ', 's', 'u', 'b', 's',  'e', 't', 's', ' ', 'w',
      'i', 't', 'h', 'o', 'u', 't', ' ', 'f', 'u',  'l', 'l', ' ', 'r', 'a',
      'n', 'k', ' ', 'o', 'r', ' ', 'e', 'x', 'c',  'l', 'u', 'd', 'e', 'd',
      ' ', 'b', 'e', 'c', 'a', 'u', 's', 'e', ' ',  'c', 'o', 'n', 't', 'a',
      'i', 'n', 'i', 'n', 'g', ' ', 'r', 'e', 'm',  'o', 't', 'e', ' ', 'u',
      'n', 'i', 't', 's', ' ', 'i', 'n', ' ', 't',  'h', 'e', ' ', 'X', ' ',
      's', 'p', 'a', 'c', 'e', ' ', 'e', 'q', 'u',  'a', 'l', ' ', 't', 'o',
      ' ', '%', '.', '1', 'f', ' ', '%', '%', '\\', 'n'};
  static const char_T b_cv1[67] = {
      'N', 'u', 'm', 'b', 'e', 'r', ' ', 'o', 'f', ' ', 's', 'u', 'b', 's',
      'e', 't', 's', ' ', 't', 'o', ' ', 'e', 'x', 't', 'r', 'a', 'c', 't',
      ' ', 'g', 'r', 'e', 'a', 't', 'e', 'r', ' ', 't', 'h', 'a', 'n', ' ',
      '(', 'n', ' ', 'p', ')', '.', ' ', 'I', 't', ' ', 'i', 's', ' ', 's',
      'e', 't', ' ', 't', 'o', ' ', '(', 'n', ' ', 'p', ')'};
  static const char_T b_cv5[66] = {
      'A', 't', 't', 'e', 'n', 't', 'i', 'o', 'n', ':', ' ', 't', 'h', 'e',
      'r', 'e', ' ', 'w', 'a', 's', ' ', 'a', 'n', ' ', 'e', 'x', 'a', 'c',
      't', ' ', 'f', 'i', 't', '.', ' ', 'R', 'o', 'b', 'u', 's', 't', ' ',
      'e', 's', 't', 'i', 'm', 'a', 't', 'e', ' ', 'o', 'f', ' ', 's', '^',
      '2', ' ', 'i', 's', ' ', '<', '1', 'e', '-', '7'};
  static const char_T b_cv7[62] = {
      'W', 'a', 'r', 'n', 'i', 'n', 'g', ':', ' ',  'N', 'u', 'm', 'b',
      'e', 'r', ' ', 'o', 'f', ' ', 's', 'u', 'b',  's', 'e', 't', 's',
      ' ', 'w', 'i', 't', 'h', 'o', 'u', 't', ' ',  'f', 'u', 'l', 'l',
      ' ', 'r', 'a', 'n', 'k', ' ', 'e', 'q', 'u',  'a', 'l', ' ', 't',
      'o', ' ', '%', '.', '1', 'f', '%', '%', '\\', 'n'};
  static const char_T b_cv4[58] = {
      'T', 'o', 't', 'a', 'l', ' ', 'e', 's', 't',  'i', 'm', 'a',
      't', 'e', 'd', ' ', 't', 'i', 'm', 'e', ' ',  't', 'o', ' ',
      'c', 'o', 'm', 'p', 'l', 'e', 't', 'e', ' ',  'F', 'A', 'S',
      'T', 'L', 'T', 'S', ':', ' ', '%', '5', '.',  '2', 'f', ' ',
      's', 'e', 'c', 'o', 'n', 'd', 's', ' ', '\\', 'n'};
  static const char_T b_cv[34] = {'T', 'h', 'e', ' ', 'L', 'T', 'S', ' ', '(',
                                  'L', 'M', 'S', ')', ' ', 'm', 'u', 's', 't',
                                  ' ', 'c', 'o', 'v', 'e', 'r', ' ', 'a', 't',
                                  ' ', 'l', 'e', 'a', 's', 't', ' '};
  static const char_T b_cv2[14] = {' ', 'o', 'b', 's', 'e', 'r', 'v',
                                   'a', 't', 'i', 'o', 'n', 's', '.'};
  static const char_T b_cv3[7] = {'f', 'p', 'r', 'i', 'n', 't', 'f'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack k_st;
  emlrtStack st;
  emlrtTimespec expl_temp;
  emxArray_boolean_T *weights;
  emxArray_int32_T *ia;
  emxArray_int32_T *ib;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_real_T b_time_data;
  emxArray_real_T *Xwithoutint;
  emxArray_real_T *b;
  emxArray_real_T *b_Xwithoutint;
  emxArray_real_T *b_expl_temp;
  emxArray_real_T *b_y;
  emxArray_real_T *bestbetas;
  emxArray_real_T *bestsubset;
  emxArray_real_T *c_expl_temp;
  emxArray_real_T *c_y;
  emxArray_real_T *d_expl_temp;
  emxArray_real_T *d_y;
  emxArray_real_T *e_expl_temp;
  emxArray_real_T *f_expl_temp;
  emxArray_real_T *g_expl_temp;
  emxArray_real_T *outFSM_outliers;
  emxArray_real_T *outliers;
  emxArray_real_T *seq;
  emxArray_real_T *tmp_betarw;
  real_T time_data[1000];
  real_T expl_temp_data[10];
  real_T b_conflev;
  real_T d;
  real_T n;
  real_T ncomb;
  real_T nselected;
  real_T p;
  real_T singsub;
  real_T sworst;
  real_T tmp_numscale2rw;
  real_T tsampling;
  real_T ttic_tv_nsec;
  int32_T b_tmp_size[2];
  int32_T critdef_size[2];
  int32_T tmp_size[2];
  int32_T b_i;
  int32_T b_loop_ub_tmp;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T idx;
  int32_T last;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T time_size;
  uint32_T ij;
  char_T tmp_data[310];
  char_T b_tmp_data[58];
  char_T b_cv6[30];
  char_T b_expl_temp_data[3];
  char_T critdef_data[3];
  boolean_T bonflevout;
  boolean_T exitg1;
  boolean_T guard1 = false;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  j_st.prev = &i_st;
  j_st.tls = i_st.tls;
  k_st.prev = &c_st;
  k_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_y, 1, &ee_emlrtRTEI, true);
  /*  Wrapper function for LXS (when lms is a struct). NV pair names are not
   * taken as */
  /*  inputs. Instead, just the values are taken as inputs. */
  /*  Required input arguments */
  /*  y: a column vector of doubles of any length */
  /*  ARGS{1}{1} = coder.typeof(0,[Inf 1],[1 0]); */
  /*  X: an array of doubles of any dimensions */
  /*  ARGS{1}{2} = coder.typeof(0,[Inf Inf],[1 1]); */
  /*  Optional input arguments (name / pairs) in (case insensitive) */
  /*  alphabetical order */
  /*  bonflevoutX a scalar double or an empty value */
  /*  conflev a scalar double */
  /*  h a scalar double */
  /*  intercept */
  /*  nocheck is a boolean */
  /*  lms: a struct (with 5 fields of type scalar double) */
  /*  field bestr a scalar of type double */
  /*  field refsteps a scalar of type double */
  /*  field refstepsbestr a scalar of type double */
  /*  field reftol a scalar of type double */
  /*  field reftolbestr a scalar of type double */
  /*  msg is a boolean */
  /*  nomes is a boolean */
  /*  nsamp: a scalar of type double */
  /*  rew is a boolean */
  /*  yxsave is a boolean */
  st.site = &emlrtRSI;
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
  i = b_y->size[0];
  b_y->size[0] = y->size[0];
  emxEnsureCapacity_real_T(&st, b_y, i, &oc_emlrtRTEI);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] = y->data[i];
  }
  i = out->X->size[0] * out->X->size[1];
  out->X->size[0] = X->size[0];
  out->X->size[1] = X->size[1];
  emxEnsureCapacity_real_T(&st, out->X, i, &pc_emlrtRTEI);
  loop_ub = X->size[0] * X->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->X->data[i] = X->data[i];
  }
  emxInit_real_T(&st, &c_y, 2, &he_emlrtRTEI, true);
  b_st.site = &pb_emlrtRSI;
  chkinputR(&b_st, b_y, out->X, intercept, nocheck, &n, &p);
  if (muDoubleScalarIsNaN(n)) {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = 1;
    emxEnsureCapacity_real_T(&st, c_y, i, &qc_emlrtRTEI);
    c_y->data[0] = rtNaN;
  } else if (n < 1.0) {
    c_y->size[0] = 1;
    c_y->size[1] = 0;
  } else if (muDoubleScalarIsInf(n) && (1.0 == n)) {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = 1;
    emxEnsureCapacity_real_T(&st, c_y, i, &qc_emlrtRTEI);
    c_y->data[0] = rtNaN;
  } else {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    loop_ub = (int32_T)muDoubleScalarFloor(n - 1.0);
    c_y->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&st, c_y, i, &qc_emlrtRTEI);
    for (i = 0; i <= loop_ub; i++) {
      c_y->data[i] = (real_T)i + 1.0;
    }
  }
  emxInit_real_T(&st, &seq, 1, &rc_emlrtRTEI, true);
  i = seq->size[0];
  seq->size[0] = c_y->size[1];
  emxEnsureCapacity_real_T(&st, seq, i, &rc_emlrtRTEI);
  loop_ub = c_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq->data[i] = c_y->data[i];
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
  b_st.site = &ob_emlrtRSI;
  ncomb = bc(&b_st, n, p);
  /*  Set the "half" of the data points. */
  /*  initialize brob which will be the vector of estimated robust regression */
  /*  coefficients */
  loop_ub_tmp = (int32_T)p;
  i = out->beta->size[0];
  out->beta->size[0] = (int32_T)p;
  emxEnsureCapacity_real_T(&st, out->beta, i, &sc_emlrtRTEI);
  for (i = 0; i < loop_ub_tmp; i++) {
    out->beta->data[i] = -99.0;
  }
  /*  Write in structure 'options' the options chosen by the user */
  tsampling = nsamp;
  /*  And check if the optional user parameters are reasonable. */
  /*  Check h and bdp */
  /*  The user has only specified h: no need to specify bdp. */
  if (h < p + 1.0) {
    b_st.site = &nb_emlrtRSI;
    int2str(&b_st, p + 1.0, tmp_data, tmp_size);
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
      b_tmp_data[(i + tmp_size[1]) + 34] = b_cv2[i];
    }
    b_st.site = &nb_emlrtRSI;
    b_error(&b_st, b_tmp_data, b_tmp_size);
  } else if (h >= n) {
    b_st.site = &mb_emlrtRSI;
    c_error(&b_st);
  }
  /*  the user has only specified bdp: h is defined accordingly */
  /*  Check number of subsamples to extract */
  if (nsamp > ncomb) {
    if (msg) {
      b_st.site = &gib_emlrtRSI;
      disp(&b_st, s_emlrt_marshallOut(&b_st, b_cv1), &emlrtMCI);
    }
    tsampling = 0.0;
  } else if (nsamp < 0.0) {
    b_st.site = &lb_emlrtRSI;
    d_error(&b_st);
  }
  emxInit_real_T(&st, &bestbetas, 2, &tc_emlrtRTEI, true);
  /*  Default values for the optional */
  /*  parameters are set inside structure 'options' */
  /*  Number of data points on which estimates are based */
  /*  Number of subsets to extract */
  /*  if options.lms==1 then LMS, else LTS */
  if (!(lms->bestr >= 0.0)) {
    emlrtNonNegativeCheckR2012b(lms->bestr, &d_emlrtDCI, &st);
  }
  i = (int32_T)muDoubleScalarFloor(lms->bestr);
  if (lms->bestr != i) {
    emlrtIntegerCheckR2012b(lms->bestr, &e_emlrtDCI, &st);
  }
  b_loop_ub_tmp = (int32_T)lms->bestr;
  i1 = bestbetas->size[0] * bestbetas->size[1];
  bestbetas->size[0] = b_loop_ub_tmp;
  bestbetas->size[1] = (int32_T)p;
  emxEnsureCapacity_real_T(&st, bestbetas, i1, &tc_emlrtRTEI);
  if (b_loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(lms->bestr, &c_emlrtDCI, &st);
  }
  last = b_loop_ub_tmp * (int32_T)p;
  for (i1 = 0; i1 < last; i1++) {
    bestbetas->data[i1] = 0.0;
  }
  emxInit_real_T(&st, &bestsubset, 2, &uc_emlrtRTEI, true);
  i1 = bestsubset->size[0] * bestsubset->size[1];
  bestsubset->size[0] = b_loop_ub_tmp;
  bestsubset->size[1] = (int32_T)p;
  emxEnsureCapacity_real_T(&st, bestsubset, i1, &uc_emlrtRTEI);
  for (i1 = 0; i1 < last; i1++) {
    bestsubset->data[i1] = 0.0;
  }
  if (b_loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(lms->bestr, &g_emlrtDCI, &st);
  }
  i = out->residuals->size[0];
  out->residuals->size[0] = b_loop_ub_tmp;
  emxEnsureCapacity_real_T(&st, out->residuals, i, &vc_emlrtRTEI);
  for (i = 0; i < b_loop_ub_tmp; i++) {
    out->residuals->data[i] = rtInf;
  }
  sworst = rtInf;
  /*  ij is a scalar used to ensure that the best first bestr non singular */
  /*  subsets are stored */
  ij = 1U;
  /*  lmsopt is associated with the message about total computing time */
  /*  Scalar which controls the messages displayed on the screen */
  /*  if options.nomes==true no message about estimated time to compute LMS is
   * displayed */
  /*  Extract in the rows of matrix C the indexes of all required subsets */
  b_st.site = &kb_emlrtRSI;
  subsets(&b_st, tsampling, n, p, ncomb, msg, C, &nselected);
  /*  Store the indices in varargout */
  /*  rmin will contain the minimum value of LMS (LTS) */
  /*  initialise and start timer. */
  tsampling = muDoubleScalarCeil(muDoubleScalarMin(nselected / 100.0, 1000.0));
  if ((int32_T)tsampling < 0) {
    emlrtNonNegativeCheckR2012b((int32_T)tsampling, &b_emlrtDCI, &st);
  }
  time_size = (int32_T)tsampling;
  if ((int32_T)tsampling < 0) {
    emlrtNonNegativeCheckR2012b((int32_T)tsampling, &b_emlrtDCI, &st);
  }
  loop_ub = (int32_T)tsampling;
  if (0 <= loop_ub - 1) {
    memset(&time_data[0], 0, loop_ub * sizeof(real_T));
  }
  /*  bonflevoutX option to search for outliers in the X space */
  emxInit_real_T(&st, &Xwithoutint, 2, &xc_emlrtRTEI, true);
  emxInit_real_T(&st, &outliers, 1, &dd_emlrtRTEI, true);
  if ((bonflevoutX_size[0] != 0) && (bonflevoutX_size[1] != 0)) {
    bonflevout = true;
    if (nocheck) {
      i = Xwithoutint->size[0] * Xwithoutint->size[1];
      Xwithoutint->size[0] = out->X->size[0];
      Xwithoutint->size[1] = out->X->size[1];
      emxEnsureCapacity_real_T(&st, Xwithoutint, i, &xc_emlrtRTEI);
      loop_ub = out->X->size[0] * out->X->size[1];
      for (i = 0; i < loop_ub; i++) {
        Xwithoutint->data[i] = out->X->data[i];
      }
    } else if (intercept) {
      if (2 > out->X->size[1]) {
        i = 0;
        i1 = 0;
      } else {
        i = 1;
        if (out->X->size[1] < 1) {
          emlrtDynamicBoundsCheckR2012b(out->X->size[1], 1, out->X->size[1],
                                        &x_emlrtBCI, &st);
        }
        i1 = out->X->size[1];
      }
      loop_ub = out->X->size[0];
      i2 = Xwithoutint->size[0] * Xwithoutint->size[1];
      Xwithoutint->size[0] = out->X->size[0];
      idx = i1 - i;
      Xwithoutint->size[1] = idx;
      emxEnsureCapacity_real_T(&st, Xwithoutint, i2, &bd_emlrtRTEI);
      for (i1 = 0; i1 < idx; i1++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          Xwithoutint->data[i2 + Xwithoutint->size[0] * i1] =
              out->X->data[i2 + out->X->size[0] * (i + i1)];
        }
      }
    } else {
      i = Xwithoutint->size[0] * Xwithoutint->size[1];
      Xwithoutint->size[0] = out->X->size[0];
      Xwithoutint->size[1] = out->X->size[1];
      emxEnsureCapacity_real_T(&st, Xwithoutint, i, &yc_emlrtRTEI);
      loop_ub = out->X->size[0] * out->X->size[1];
      for (i = 0; i < loop_ub; i++) {
        Xwithoutint->data[i] = out->X->data[i];
      }
    }
    if (Xwithoutint->size[1] > 1) {
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
    emxInit_real_T(&st, &b_Xwithoutint, 2, &cd_emlrtRTEI, true);
    i = b_Xwithoutint->size[0] * b_Xwithoutint->size[1];
    b_Xwithoutint->size[0] = Xwithoutint->size[0];
    b_Xwithoutint->size[1] = Xwithoutint->size[1];
    emxEnsureCapacity_real_T(&st, b_Xwithoutint, i, &cd_emlrtRTEI);
    loop_ub = Xwithoutint->size[0] * Xwithoutint->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_Xwithoutint->data[i] = Xwithoutint->data[i];
    }
    emxInit_real_T(&st, &outFSM_outliers, 2, &be_emlrtRTEI, true);
    emxInit_real_T(&st, &c_expl_temp, 2, &ie_emlrtRTEI, true);
    emxInit_real_T(&st, &d_expl_temp, 2, &ie_emlrtRTEI, true);
    emxInit_real_T(&st, &e_expl_temp, 2, &ie_emlrtRTEI, true);
    emxInit_real_T(&st, &f_expl_temp, 2, &ie_emlrtRTEI, true);
    emxInit_real_T(&st, &g_expl_temp, 2, &ie_emlrtRTEI, true);
    b_st.site = &jb_emlrtRSI;
    FSM(SD, &b_st, b_Xwithoutint, bonflevoutX_data, bonflevoutX_size,
        muDoubleScalarFloor(n * 0.6), critdef_data, critdef_size,
        (real_T)Xwithoutint->size[1] + 1.0, outFSM_outliers, c_expl_temp,
        d_expl_temp, e_expl_temp, f_expl_temp, g_expl_temp, expl_temp_data,
        tmp_size, b_expl_temp_data, b_tmp_size);
    i = outliers->size[0];
    outliers->size[0] = outFSM_outliers->size[0] * outFSM_outliers->size[1];
    emxEnsureCapacity_real_T(&st, outliers, i, &dd_emlrtRTEI);
    loop_ub = outFSM_outliers->size[0] * outFSM_outliers->size[1];
    emxFree_real_T(&b_Xwithoutint);
    emxFree_real_T(&g_expl_temp);
    emxFree_real_T(&f_expl_temp);
    emxFree_real_T(&e_expl_temp);
    emxFree_real_T(&d_expl_temp);
    emxFree_real_T(&c_expl_temp);
    for (i = 0; i < loop_ub; i++) {
      outliers->data[i] = outFSM_outliers->data[i];
    }
    emxFree_real_T(&outFSM_outliers);
  } else {
    bonflevout = false;
    i = outliers->size[0];
    outliers->size[0] = 1;
    emxEnsureCapacity_real_T(&st, outliers, i, &wc_emlrtRTEI);
    outliers->data[0] = 0.0;
  }
  /*  Computation of LMS (LTS) */
  b_st.site = &ib_emlrtRSI;
  expl_temp = tic(&b_st);
  b_conflev = expl_temp.tv_sec;
  ttic_tv_nsec = expl_temp.tv_nsec;
  i = out->bs->size[0] * out->bs->size[1];
  out->bs->size[0] = 1;
  out->bs->size[1] = (int32_T)p;
  emxEnsureCapacity_real_T(&st, out->bs, i, &ad_emlrtRTEI);
  for (i = 0; i < loop_ub_tmp; i++) {
    out->bs->data[i] = 0.0;
  }
  i = (int32_T)nselected;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, nselected, mxDOUBLE_CLASS,
                                (int32_T)nselected, &d_emlrtRTEI, &st);
  emxInit_real_T(&st, &b, 1, &hd_emlrtRTEI, true);
  emxInit_real_T(&st, &tmp_betarw, 1, &ce_emlrtRTEI, true);
  emxInit_int32_T(&st, &ia, 1, &ee_emlrtRTEI, true);
  emxInit_int32_T(&st, &ib, 1, &ee_emlrtRTEI, true);
  emxInit_real_T(&st, &b_expl_temp, 1, &je_emlrtRTEI, true);
  emxInit_real_T(&st, &d_y, 1, &kd_emlrtRTEI, true);
  for (b_i = 0; b_i < i; b_i++) {
    if (b_i + 1U <= (uint32_T)tsampling) {
      b_st.site = &hb_emlrtRSI;
      expl_temp = tic(&b_st);
      b_conflev = expl_temp.tv_sec;
      ttic_tv_nsec = expl_temp.tv_nsec;
    }
    /*  extract a subset of size p */
    if ((b_i + 1 < 1) || (b_i + 1 > C->size[0])) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, C->size[0], &w_emlrtBCI, &st);
    }
    guard1 = false;
    if (bonflevout) {
      b_st.site = &gb_emlrtRSI;
      c_st.site = &qdb_emlrtRSI;
      loop_ub = C->size[1];
      i1 = c_y->size[0] * c_y->size[1];
      c_y->size[0] = 1;
      c_y->size[1] = C->size[1];
      emxEnsureCapacity_real_T(&c_st, c_y, i1, &fd_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        c_y->data[i1] = C->data[b_i + C->size[0] * i1];
      }
      d_st.site = &rdb_emlrtRSI;
      c_do_vectors(&d_st, c_y, outliers, b, ia, ib);
      if (b->size[0] != 0) {
        i1 = b->size[0];
        b->size[0] = 1;
        emxEnsureCapacity_real_T(&st, b, i1, &hd_emlrtRTEI);
        b->data[0] = rtNaN;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
    if (guard1) {
      loop_ub = C->size[1];
      idx = out->X->size[1];
      i1 = Xwithoutint->size[0] * Xwithoutint->size[1];
      Xwithoutint->size[0] = C->size[1];
      Xwithoutint->size[1] = out->X->size[1];
      emxEnsureCapacity_real_T(&st, Xwithoutint, i1, &ed_emlrtRTEI);
      for (i1 = 0; i1 < idx; i1++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          if (C->data[b_i + C->size[0] * i2] !=
              (int32_T)muDoubleScalarFloor(C->data[b_i + C->size[0] * i2])) {
            emlrtIntegerCheckR2012b(C->data[b_i + C->size[0] * i2], &emlrtDCI,
                                    &st);
          }
          last = (int32_T)C->data[b_i + C->size[0] * i2];
          if ((last < 1) || (last > out->X->size[0])) {
            emlrtDynamicBoundsCheckR2012b(
                (int32_T)C->data[b_i + C->size[0] * i2], 1, out->X->size[0],
                &i_emlrtBCI, &st);
          }
          Xwithoutint->data[i2 + Xwithoutint->size[0] * i1] =
              out->X->data[(last + out->X->size[0] * i1) - 1];
        }
      }
      loop_ub = C->size[1];
      i1 = c_y->size[0] * c_y->size[1];
      c_y->size[0] = 1;
      c_y->size[1] = C->size[1];
      emxEnsureCapacity_real_T(&st, c_y, i1, &fd_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        c_y->data[i1] = C->data[b_i + C->size[0] * i1];
      }
      b_st.site = &fb_emlrtRSI;
      b_indexShapeCheck(&b_st, b_y->size[0], *(int32_T(*)[2])c_y->size);
      loop_ub = C->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        i2 = (int32_T)C->data[b_i + C->size[0] * i1];
        if ((i2 < 1) || (i2 > b_y->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, b_y->size[0], &h_emlrtBCI, &st);
        }
      }
      /*  if rank(Xb)==p Warning: this instruction has been replaced by a */
      /*  posteriori control on vector b */
      /*  Compute the vector of coefficients using matrice Xb and yb */
      loop_ub = C->size[1];
      i1 = d_y->size[0];
      d_y->size[0] = C->size[1];
      emxEnsureCapacity_real_T(&st, d_y, i1, &kd_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        d_y->data[i1] = b_y->data[(int32_T)C->data[b_i + C->size[0] * i1] - 1];
      }
      b_st.site = &eb_emlrtRSI;
      mldivide(&b_st, Xwithoutint, d_y, b);
    }
    if (1 > b->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, b->size[0], &v_emlrtBCI, &st);
    }
    if (!muDoubleScalarIsNaN(b->data[0])) {
      if (1 > b->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, b->size[0], &u_emlrtBCI, &st);
      }
      if (!muDoubleScalarIsInf(b->data[0])) {
        /*  in this case the user has chosen the FAST LTS (with concentration
         * steps) */
        b_st.site = &db_emlrtRSI;
        IRWLSreg(&b_st, b_y, out->X, b, lms->refsteps, lms->reftol, h,
                 tmp_betarw, &tmp_numscale2rw, b_expl_temp);
        if (ij > (uint32_T)lms->bestr) {
          if (tmp_numscale2rw < sworst) {
            /*  Find position of the maximum value of previously stored */
            /*  best scales */
            b_st.site = &cb_emlrtRSI;
            c_st.site = &gfb_emlrtRSI;
            d_st.site = &hfb_emlrtRSI;
            e_st.site = &ifb_emlrtRSI;
            if (out->residuals->size[0] < 1) {
              emlrtErrorWithMessageIdR2018a(
                  &e_st, &g_emlrtRTEI,
                  "Coder:toolbox:eml_min_or_max_varDimZero",
                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
            }
            f_st.site = &oab_emlrtRSI;
            last = out->residuals->size[0];
            if (out->residuals->size[0] <= 2) {
              if (out->residuals->size[0] == 1) {
                idx = 1;
              } else if ((out->residuals->data[0] < out->residuals->data[1]) ||
                         (muDoubleScalarIsNaN(out->residuals->data[0]) &&
                          (!muDoubleScalarIsNaN(out->residuals->data[1])))) {
                idx = 2;
              } else {
                idx = 1;
              }
            } else {
              g_st.site = &gt_emlrtRSI;
              if (!muDoubleScalarIsNaN(out->residuals->data[0])) {
                idx = 1;
              } else {
                idx = 0;
                h_st.site = &ht_emlrtRSI;
                if (out->residuals->size[0] > 2147483646) {
                  i_st.site = &gc_emlrtRSI;
                  check_forloop_overflow_error(&i_st);
                }
                loop_ub = 2;
                exitg1 = false;
                while ((!exitg1) && (loop_ub <= last)) {
                  if (!muDoubleScalarIsNaN(out->residuals->data[loop_ub - 1])) {
                    idx = loop_ub;
                    exitg1 = true;
                  } else {
                    loop_ub++;
                  }
                }
              }
              if (idx == 0) {
                idx = 1;
              } else {
                g_st.site = &ft_emlrtRSI;
                ncomb = out->residuals->data[idx - 1];
                loop_ub_tmp = idx + 1;
                h_st.site = &it_emlrtRSI;
                if ((idx + 1 <= out->residuals->size[0]) &&
                    (out->residuals->size[0] > 2147483646)) {
                  i_st.site = &gc_emlrtRSI;
                  check_forloop_overflow_error(&i_st);
                }
                for (loop_ub = loop_ub_tmp; loop_ub <= last; loop_ub++) {
                  d = out->residuals->data[loop_ub - 1];
                  if (ncomb < d) {
                    ncomb = d;
                    idx = loop_ub;
                  }
                }
              }
            }
            /*  Store numscale2rw, betarw and indexes of the units forming the
             */
            /*  best subset for the current iteration */
            if ((idx < 1) || (idx > out->residuals->size[0])) {
              emlrtDynamicBoundsCheckR2012b(idx, 1, out->residuals->size[0],
                                            &e_emlrtBCI, &st);
            }
            out->residuals->data[idx - 1] = tmp_numscale2rw;
            if (idx > bestbetas->size[0]) {
              emlrtDynamicBoundsCheckR2012b(idx, 1, bestbetas->size[0],
                                            &t_emlrtBCI, &st);
            }
            tmp_size[0] = 1;
            tmp_size[1] = bestbetas->size[1];
            b_tmp_size[0] = 1;
            loop_ub = tmp_betarw->size[0];
            b_tmp_size[1] = tmp_betarw->size[0];
            emlrtSubAssignSizeCheckR2012b(&tmp_size[0], 2, &b_tmp_size[0], 2,
                                          &g_emlrtECI, &st);
            for (i1 = 0; i1 < loop_ub; i1++) {
              bestbetas->data[(idx + bestbetas->size[0] * i1) - 1] =
                  tmp_betarw->data[i1];
            }
            if (idx > bestsubset->size[0]) {
              emlrtDynamicBoundsCheckR2012b(idx, 1, bestsubset->size[0],
                                            &o_emlrtBCI, &st);
            }
            loop_ub = C->size[1];
            i1 = c_y->size[0] * c_y->size[1];
            c_y->size[0] = 1;
            c_y->size[1] = C->size[1];
            emxEnsureCapacity_real_T(&st, c_y, i1, &fd_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              c_y->data[i1] = C->data[b_i + C->size[0] * i1];
            }
            tmp_size[0] = 1;
            tmp_size[1] = bestsubset->size[1];
            emlrtSubAssignSizeCheckR2012b(&tmp_size[0], 2, &c_y->size[0], 2,
                                          &e_emlrtECI, &st);
            loop_ub = C->size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              bestsubset->data[(idx + bestsubset->size[0] * i1) - 1] =
                  C->data[b_i + C->size[0] * i1];
            }
            /*  sworst = the best scale among the bestr found up to now */
            b_st.site = &bb_emlrtRSI;
            c_st.site = &jc_emlrtRSI;
            d_st.site = &kc_emlrtRSI;
            e_st.site = &lc_emlrtRSI;
            f_st.site = &jfb_emlrtRSI;
            g_st.site = &kfb_emlrtRSI;
            last = out->residuals->size[0];
            if (out->residuals->size[0] <= 2) {
              if (out->residuals->size[0] == 1) {
                sworst = out->residuals->data[0];
              } else if ((out->residuals->data[0] < out->residuals->data[1]) ||
                         (muDoubleScalarIsNaN(out->residuals->data[0]) &&
                          (!muDoubleScalarIsNaN(out->residuals->data[1])))) {
                sworst = out->residuals->data[1];
              } else {
                sworst = out->residuals->data[0];
              }
            } else {
              h_st.site = &gt_emlrtRSI;
              if (!muDoubleScalarIsNaN(out->residuals->data[0])) {
                idx = 1;
              } else {
                idx = 0;
                i_st.site = &ht_emlrtRSI;
                if (out->residuals->size[0] > 2147483646) {
                  j_st.site = &gc_emlrtRSI;
                  check_forloop_overflow_error(&j_st);
                }
                loop_ub = 2;
                exitg1 = false;
                while ((!exitg1) && (loop_ub <= last)) {
                  if (!muDoubleScalarIsNaN(out->residuals->data[loop_ub - 1])) {
                    idx = loop_ub;
                    exitg1 = true;
                  } else {
                    loop_ub++;
                  }
                }
              }
              if (idx == 0) {
                sworst = out->residuals->data[0];
              } else {
                h_st.site = &ft_emlrtRSI;
                sworst = out->residuals->data[idx - 1];
                loop_ub_tmp = idx + 1;
                i_st.site = &it_emlrtRSI;
                if ((idx + 1 <= out->residuals->size[0]) &&
                    (out->residuals->size[0] > 2147483646)) {
                  j_st.site = &gc_emlrtRSI;
                  check_forloop_overflow_error(&j_st);
                }
                for (loop_ub = loop_ub_tmp; loop_ub <= last; loop_ub++) {
                  d = out->residuals->data[loop_ub - 1];
                  if (sworst < d) {
                    sworst = d;
                  }
                }
              }
            }
          }
        } else {
          if ((int32_T)ij > out->residuals->size[0]) {
            emlrtDynamicBoundsCheckR2012b(
                (int32_T)ij, 1, out->residuals->size[0], &g_emlrtBCI, &st);
          }
          out->residuals->data[(int32_T)ij - 1] = tmp_numscale2rw;
          if ((int32_T)ij > bestbetas->size[0]) {
            emlrtDynamicBoundsCheckR2012b((int32_T)ij, 1, bestbetas->size[0],
                                          &s_emlrtBCI, &st);
          }
          tmp_size[0] = 1;
          tmp_size[1] = bestbetas->size[1];
          b_tmp_size[0] = 1;
          loop_ub = tmp_betarw->size[0];
          b_tmp_size[1] = tmp_betarw->size[0];
          emlrtSubAssignSizeCheckR2012b(&tmp_size[0], 2, &b_tmp_size[0], 2,
                                        &f_emlrtECI, &st);
          for (i1 = 0; i1 < loop_ub; i1++) {
            bestbetas->data[((int32_T)ij + bestbetas->size[0] * i1) - 1] =
                tmp_betarw->data[i1];
          }
          if ((int32_T)ij > bestsubset->size[0]) {
            emlrtDynamicBoundsCheckR2012b((int32_T)ij, 1, bestsubset->size[0],
                                          &n_emlrtBCI, &st);
          }
          loop_ub = C->size[1];
          i1 = c_y->size[0] * c_y->size[1];
          c_y->size[0] = 1;
          c_y->size[1] = C->size[1];
          emxEnsureCapacity_real_T(&st, c_y, i1, &fd_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub; i1++) {
            c_y->data[i1] = C->data[b_i + C->size[0] * i1];
          }
          tmp_size[0] = 1;
          tmp_size[1] = bestsubset->size[1];
          emlrtSubAssignSizeCheckR2012b(&tmp_size[0], 2, &c_y->size[0], 2,
                                        &d_emlrtECI, &st);
          loop_ub = C->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            bestsubset->data[((int32_T)ij + bestsubset->size[0] * i1) - 1] =
                C->data[b_i + C->size[0] * i1];
          }
          /*  sworst = the best scale among the bestr found up to now */
          b_st.site = &ab_emlrtRSI;
          c_st.site = &jc_emlrtRSI;
          d_st.site = &kc_emlrtRSI;
          e_st.site = &lc_emlrtRSI;
          if (out->residuals->size[0] < 1) {
            emlrtErrorWithMessageIdR2018a(
                &e_st, &g_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
                "Coder:toolbox:eml_min_or_max_varDimZero", 0);
          }
          f_st.site = &jfb_emlrtRSI;
          g_st.site = &kfb_emlrtRSI;
          last = out->residuals->size[0];
          if (out->residuals->size[0] <= 2) {
            if (out->residuals->size[0] == 1) {
              sworst = out->residuals->data[0];
            } else if ((out->residuals->data[0] < out->residuals->data[1]) ||
                       (muDoubleScalarIsNaN(out->residuals->data[0]) &&
                        (!muDoubleScalarIsNaN(out->residuals->data[1])))) {
              sworst = out->residuals->data[1];
            } else {
              sworst = out->residuals->data[0];
            }
          } else {
            h_st.site = &gt_emlrtRSI;
            if (!muDoubleScalarIsNaN(out->residuals->data[0])) {
              idx = 1;
            } else {
              idx = 0;
              i_st.site = &ht_emlrtRSI;
              if (out->residuals->size[0] > 2147483646) {
                j_st.site = &gc_emlrtRSI;
                check_forloop_overflow_error(&j_st);
              }
              loop_ub = 2;
              exitg1 = false;
              while ((!exitg1) && (loop_ub <= last)) {
                if (!muDoubleScalarIsNaN(out->residuals->data[loop_ub - 1])) {
                  idx = loop_ub;
                  exitg1 = true;
                } else {
                  loop_ub++;
                }
              }
            }
            if (idx == 0) {
              sworst = out->residuals->data[0];
            } else {
              h_st.site = &ft_emlrtRSI;
              sworst = out->residuals->data[idx - 1];
              loop_ub_tmp = idx + 1;
              i_st.site = &it_emlrtRSI;
              if ((idx + 1 <= out->residuals->size[0]) &&
                  (out->residuals->size[0] > 2147483646)) {
                j_st.site = &gc_emlrtRSI;
                check_forloop_overflow_error(&j_st);
              }
              for (loop_ub = loop_ub_tmp; loop_ub <= last; loop_ub++) {
                d = out->residuals->data[loop_ub - 1];
                if (sworst < d) {
                  sworst = d;
                }
              }
            }
          }
          ij++;
          if (1 > (int32_T)p) {
            emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)p, &r_emlrtBCI, &st);
          }
          out->beta->data[0] = 1.0;
        }
      } else {
        singsub++;
      }
    } else {
      singsub++;
    }
    if (!nomes) {
      if (b_i + 1U <= (uint32_T)tsampling) {
        /*  sampling time until step tsampling */
        if (((int32_T)(b_i + 1U) < 1) || ((int32_T)(b_i + 1U) > time_size)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1, time_size,
                                        &f_emlrtBCI, &st);
        }
        b_st.site = &y_emlrtRSI;
        time_data[b_i] = toc(&b_st, b_conflev, ttic_tv_nsec);
      } else if ((b_i + 1U == (uint32_T)((int32_T)tsampling + 1)) && msg) {
        /*  stop sampling and print the estimated time */
        b_st.site = &x_emlrtRSI;
        b_time_data.data = &time_data[0];
        b_time_data.size = &time_size;
        b_time_data.allocatedSize = 1000;
        b_time_data.numDimensions = 1;
        b_time_data.canFreeData = false;
        c_st.site = &x_emlrtRSI;
        ncomb = nselected * median(&c_st, &b_time_data);
        c_st.site = &uv_emlrtRSI;
        d_st.site = &uhb_emlrtRSI;
        k_st.site = &vhb_emlrtRSI;
        g_emlrt_marshallIn(&d_st,
                           d_feval(&d_st, d_emlrt_marshallOut(&d_st, b_cv3),
                                   f_emlrt_marshallOut(1.0),
                                   u_emlrt_marshallOut(&k_st, b_cv4),
                                   f_emlrt_marshallOut(ncomb), &y_emlrtMCI),
                           "<output of feval>");
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  emxFree_int32_T(&ib);
  emxFree_real_T(&c_y);
  emxFree_real_T(&outliers);
  emxFree_real_T(&Xwithoutint);
  if (1 > (int32_T)p) {
    emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)p, &q_emlrtBCI, &st);
  }
  if (out->beta->data[0] == -99.0) {
    b_st.site = &w_emlrtRSI;
    n_error(&b_st);
  }
  /*  perform C-steps on best 'bestr' solutions, till convergence or for a */
  /*  maximum of refstepsbestr steps using a convergence tolerance as specified
   */
  /*  by scalar reftolbestr */
  ncomb = rtInf;
  tsampling = rtInf;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, lms->bestr, mxDOUBLE_CLASS,
                                (int32_T)lms->bestr, &c_emlrtRTEI, &st);
  for (b_i = 0; b_i < b_loop_ub_tmp; b_i++) {
    if ((int32_T)(b_i + 1U) > bestbetas->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1, bestbetas->size[0],
                                    &p_emlrtBCI, &st);
    }
    loop_ub = bestbetas->size[1];
    i = d_y->size[0];
    d_y->size[0] = bestbetas->size[1];
    emxEnsureCapacity_real_T(&st, d_y, i, &gd_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      d_y->data[i] = bestbetas->data[b_i + bestbetas->size[0] * i];
    }
    b_st.site = &v_emlrtRSI;
    IRWLSreg(&b_st, b_y, out->X, d_y, lms->refstepsbestr, lms->reftolbestr, h,
             tmp_betarw, &tmp_numscale2rw, b_expl_temp);
    if (tmp_numscale2rw < ncomb) {
      /*  sh0 = superbestscale */
      tsampling = tmp_numscale2rw;
      /*  brob = superbestbeta */
      loop_ub = tmp_betarw->size[0];
      i = out->beta->size[0];
      out->beta->size[0] = tmp_betarw->size[0];
      emxEnsureCapacity_real_T(&st, out->beta, i, &jd_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        out->beta->data[i] = tmp_betarw->data[i];
      }
      /*  bs = superbestsubset, units forming best subset according to fastlts
       */
      if ((int32_T)(b_i + 1U) > bestsubset->size[0]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1,
                                      bestsubset->size[0], &m_emlrtBCI, &st);
      }
      loop_ub = bestsubset->size[1];
      i = out->bs->size[0] * out->bs->size[1];
      out->bs->size[0] = 1;
      out->bs->size[1] = bestsubset->size[1];
      emxEnsureCapacity_real_T(&st, out->bs, i, &ad_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        out->bs->data[i] = bestsubset->data[b_i + bestsubset->size[0] * i];
      }
      ncomb = tmp_numscale2rw;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  emxFree_real_T(&b_expl_temp);
  emxFree_real_T(&tmp_betarw);
  emxFree_real_T(&bestsubset);
  /*  Pass from numerator of squared estimate of the scale to proper scale */
  /*  estimate */
  tsampling /= h;
  b_st.site = &u_emlrtRSI;
  if (tsampling < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &tb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  tsampling = muDoubleScalarSqrt(tsampling);
  /*  residuals = Raw residuals using robust estimate of beta */
  b_st.site = &t_emlrtRSI;
  c_st.site = &ec_emlrtRSI;
  dynamic_size_checks(&c_st, out->X, out->beta, out->X->size[1],
                      out->beta->size[0]);
  c_st.site = &dc_emlrtRSI;
  mtimes(&c_st, out->X, out->beta, out->residuals);
  if (b_y->size[0] != out->residuals->size[0]) {
    emlrtSizeEqCheck1DR2012b(b_y->size[0], out->residuals->size[0], &c_emlrtECI,
                             &st);
  }
  i = out->residuals->size[0];
  out->residuals->size[0] = b_y->size[0];
  emxEnsureCapacity_real_T(&st, out->residuals, i, &id_emlrtRTEI);
  loop_ub = b_y->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->residuals->data[i] = b_y->data[i] - out->residuals->data[i];
  }
  /*  Consistency factor */
  /*  Consistency factor based on the variance of the truncated normal
   * distribution. */
  /*  1-h/n=trimming percentage */
  /*  Compute variance of the truncated normal distribution. */
  b_st.site = &s_emlrtRSI;
  ncomb = norminv(0.5 * (h / n + 1.0));
  /* factor=1/sqrt(1-(2*a.*normpdf(a))./(2*normcdf(a)-1)); */
  d = 1.0 - 2.0 * (n / h) * ncomb *
                (muDoubleScalarExp(-0.5 * ncomb * ncomb) / 2.5066282746310002);
  b_st.site = &r_emlrtRSI;
  if (d < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &tb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  d = muDoubleScalarSqrt(d);
  /*  Note that factor=sqrt(factor1) */
  /*      v=1; */
  /*      a=chi2inv(h/n,1); */
  /*      factor1=(h/n)/(chi2cdf(a,1+2)); */
  /*  Apply the asymptotic consistency factor to the preliminary scale estimate
   */
  tsampling *= 1.0 / d;
  /*  Apply small sample correction factor of Pison et al. */
  if (h < n) {
    b_st.site = &q_emlrtRSI;
    d = corfactorRAW(&b_st, n, h / n);
    b_st.site = &q_emlrtRSI;
    if (d < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &tb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    d = muDoubleScalarSqrt(d);
    tsampling *= d;
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
  emxInit_boolean_T(&st, &weights, 1, &de_emlrtRTEI, true);
  if (muDoubleScalarAbs(tsampling) > 1.0E-7) {
    /*  Assign weight=1 to the h units which show the smallest h squared */
    /*  residuals */
    b_st.site = &p_emlrtRSI;
    c_st.site = &p_emlrtRSI;
    power(&c_st, out->residuals, b);
    c_st.site = &jl_emlrtRSI;
    sort(&c_st, b, ia);
    i = b->size[0];
    b->size[0] = ia->size[0];
    emxEnsureCapacity_real_T(&b_st, b, i, &ld_emlrtRTEI);
    loop_ub = ia->size[0];
    for (i = 0; i < loop_ub; i++) {
      b->data[i] = ia->data[i];
    }
    loop_ub_tmp = (int32_T)n;
    i = out->weights->size[0];
    out->weights->size[0] = (int32_T)n;
    emxEnsureCapacity_boolean_T(&st, out->weights, i, &od_emlrtRTEI);
    for (i = 0; i < loop_ub_tmp; i++) {
      out->weights->data[i] = false;
    }
    if (1 > b->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, b->size[0], &l_emlrtBCI, &st);
    }
    if (h != (int32_T)muDoubleScalarFloor(h)) {
      emlrtIntegerCheckR2012b(h, &f_emlrtDCI, &st);
    }
    loop_ub_tmp = (int32_T)h;
    if (((int32_T)h < 1) || ((int32_T)h > b->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)h, 1, b->size[0], &k_emlrtBCI,
                                    &st);
    }
    emxInit_int32_T(&st, &r, 2, &ee_emlrtRTEI, true);
    i = r->size[0] * r->size[1];
    r->size[0] = 1;
    r->size[1] = (int32_T)h;
    emxEnsureCapacity_int32_T(&st, r, i, &pd_emlrtRTEI);
    for (i = 0; i < loop_ub_tmp; i++) {
      i1 = (int32_T)b->data[i];
      if ((i1 < 1) || (i1 > (int32_T)n)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b->data[i], 1, (int32_T)n,
                                      &d_emlrtBCI, &st);
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
    b_st.site = &o_emlrtRSI;
    ncomb = 2.0 * n / asvar(&b_st, h, n);
    /*  Confidence level which is used for outlier detection */
    b_conflev = (conflev + 1.0) / 2.0;
    b_st.site = &n_emlrtRSI;
    ncomb = tinv(&b_st, b_conflev, ncomb);
    /*  Observations with a standardized residual smaller than the quantile */
    /*  threshold have a weight equal to 1, else the weight is equal to 0. */
    /*  REMARK: using this threshold, even if the sample is homogeneous, */
    /*  you are willing to declare at least 2.5% units as outliers. */
    /*  Remark: sqrt(chi2inv(0.975,1)) = tinv(0.9875,\infinity) = quantile */
    loop_ub = out->residuals->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->residuals->data[i] /= tsampling;
    }
    b_st.site = &m_emlrtRSI;
    b_abs(&b_st, out->residuals, b);
    i = weights->size[0];
    weights->size[0] = b->size[0];
    emxEnsureCapacity_boolean_T(&st, weights, i, &sd_emlrtRTEI);
    loop_ub = b->size[0];
    for (i = 0; i < loop_ub; i++) {
      weights->data[i] = (b->data[i] <= ncomb);
    }
    /*  weights is a boolean vector. */
    /*     %% Reweighting part */
    /*  if options.rew==true use reweighted version of LMS/LTS, */
    if (rew) {
      /*  Find new estimate of beta using only observations which have */
      /*  weight equal to 1. Notice that new brob overwrites old brob */
      /*  computed previously. */
      loop_ub_tmp = weights->size[0] - 1;
      last = 0;
      for (b_i = 0; b_i <= loop_ub_tmp; b_i++) {
        if (weights->data[b_i]) {
          last++;
        }
      }
      emxInit_int32_T(&st, &r2, 1, &ge_emlrtRTEI, true);
      i = r2->size[0];
      r2->size[0] = last;
      emxEnsureCapacity_int32_T(&st, r2, i, &qd_emlrtRTEI);
      last = 0;
      for (b_i = 0; b_i <= loop_ub_tmp; b_i++) {
        if (weights->data[b_i]) {
          r2->data[last] = b_i + 1;
          last++;
        }
      }
      loop_ub = out->X->size[1];
      i = bestbetas->size[0] * bestbetas->size[1];
      bestbetas->size[0] = r2->size[0];
      bestbetas->size[1] = out->X->size[1];
      emxEnsureCapacity_real_T(&st, bestbetas, i, &vd_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        idx = r2->size[0];
        for (i1 = 0; i1 < idx; i1++) {
          if (r2->data[i1] > out->X->size[0]) {
            emlrtDynamicBoundsCheckR2012b(r2->data[i1], 1, out->X->size[0],
                                          &b_emlrtBCI, &st);
          }
          bestbetas->data[i1 + bestbetas->size[0] * i] =
              out->X->data[(r2->data[i1] + out->X->size[0] * i) - 1];
        }
      }
      i = d_y->size[0];
      d_y->size[0] = r2->size[0];
      emxEnsureCapacity_real_T(&st, d_y, i, &wd_emlrtRTEI);
      loop_ub = r2->size[0];
      for (i = 0; i < loop_ub; i++) {
        if (r2->data[i] > b_y->size[0]) {
          emlrtDynamicBoundsCheckR2012b(r2->data[i], 1, b_y->size[0], &emlrtBCI,
                                        &st);
        }
        d_y->data[i] = b_y->data[r2->data[i] - 1];
      }
      emxFree_int32_T(&r2);
      b_st.site = &l_emlrtRSI;
      mldivide(&b_st, bestbetas, d_y, out->beta);
      /*  The QR decomposition is equivalent to the above but less efficient: */
      /*  [Q,R]=qr(X(weights==1,:),0); */
      /*  brob = R\(Q'*y(weights==1)); */
      /*  Computation of reweighted residuals. */
      b_st.site = &k_emlrtRSI;
      c_st.site = &ec_emlrtRSI;
      dynamic_size_checks(&c_st, out->X, out->beta, out->X->size[1],
                          out->beta->size[0]);
      c_st.site = &dc_emlrtRSI;
      mtimes(&c_st, out->X, out->beta, out->residuals);
      if (b_y->size[0] != out->residuals->size[0]) {
        emlrtSizeEqCheck1DR2012b(b_y->size[0], out->residuals->size[0],
                                 &b_emlrtECI, &st);
      }
      i = out->residuals->size[0];
      out->residuals->size[0] = b_y->size[0];
      emxEnsureCapacity_real_T(&st, out->residuals, i, &xd_emlrtRTEI);
      loop_ub = b_y->size[0];
      for (i = 0; i < loop_ub; i++) {
        out->residuals->data[i] = b_y->data[i] - out->residuals->data[i];
      }
      /*  Find new estimate of scale using only observations which have */
      /*  weight equal to 1. */
      b_st.site = &j_emlrtRSI;
      power(&b_st, out->residuals, b);
      if (weights->size[0] != b->size[0]) {
        emlrtSizeEqCheck1DR2012b(weights->size[0], b->size[0], &emlrtECI, &st);
      }
      b_st.site = &j_emlrtRSI;
      c_st.site = &km_emlrtRSI;
      d_st.site = &re_emlrtRSI;
      last = combineVectorElements(&d_st, weights);
      i = b->size[0];
      b->size[0] = weights->size[0];
      emxEnsureCapacity_real_T(&st, b, i, &yd_emlrtRTEI);
      loop_ub = weights->size[0];
      for (i = 0; i < loop_ub; i++) {
        b->data[i] *= (real_T)weights->data[i];
      }
      b_st.site = &j_emlrtRSI;
      tsampling = sum(&b_st, b) / ((real_T)last - 1.0);
      b_st.site = &j_emlrtRSI;
      if (tsampling < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &tb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      tsampling = muDoubleScalarSqrt(tsampling);
      /*  Compute new standardized residuals. */
      /*  Apply consistency factor to reweighted estimate of sigma */
      b_st.site = &i_emlrtRSI;
      c_st.site = &km_emlrtRSI;
      d_st.site = &re_emlrtRSI;
      last = combineVectorElements(&d_st, weights);
      if (last < n) {
        /*  factor=consistencyfactor(hrew,n,1); */
        b_st.site = &h_emlrtRSI;
        ncomb = norminv(0.5 * ((real_T)last / n + 1.0));
        /* factor=1/sqrt(1-(2*a.*normpdf(a))./(2*normcdf(a)-1)); */
        d = 1.0 -
            2.0 * (n / (real_T)last) * ncomb *
                (muDoubleScalarExp(-0.5 * ncomb * ncomb) / 2.5066282746310002);
        b_st.site = &g_emlrtRSI;
        if (d < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &b_st, &tb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
        }
        d = muDoubleScalarSqrt(d);
        /*  Apply small sample correction factor to reweighted estimate of sigma
         */
        b_st.site = &f_emlrtRSI;
        ncomb = corfactorREW(&b_st, n, (real_T)last / n);
        b_st.site = &f_emlrtRSI;
        if (ncomb < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &b_st, &tb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
        }
        ncomb = muDoubleScalarSqrt(ncomb);
        ncomb *= 1.0 / d;
      } else {
        ncomb = 1.0;
      }
      tsampling *= ncomb;
      loop_ub = out->residuals->size[0];
      for (i = 0; i < loop_ub; i++) {
        out->residuals->data[i] /= tsampling;
      }
      /*  Declare as outliers the observations which have a standardized */
      /*  residual greater than cutoff. */
      /*  REMARK: while the first threshold was based on the Student T */
      /*  (with modified degrees of freedom), in this second round the */
      /*  threshold is based on the Normal. Notice that: */
      /*  sqrt(chi2inv(0.975,1)) = tinv(0.9875,\infinity) = norminv(0.9875) */
      b_st.site = &e_emlrtRSI;
      b_abs(&b_st, out->residuals, b);
      b_st.site = &e_emlrtRSI;
      d = norminv(b_conflev);
      i = weights->size[0];
      weights->size[0] = b->size[0];
      emxEnsureCapacity_boolean_T(&st, weights, i, &ae_emlrtRTEI);
      loop_ub = b->size[0];
      for (i = 0; i < loop_ub; i++) {
        weights->data[i] = (b->data[i] <= d);
      }
      /*  The new vector of weights overwrites previous vector of weigths */
      /*  before reweighting. */
      /*  Store information about reweighting */
      out->rew = true;
    } else {
      /*  The default is no reweighting */
      out->rew = false;
    }
  } else {
    /*  Perfect fit */
    if (msg) {
      b_st.site = &jib_emlrtRSI;
      disp(&b_st, w_emlrt_marshallOut(&b_st, b_cv5), &b_emlrtMCI);
    }
    /*  There is an approximate perfect fit for the first h observations. */
    /*  We consider as outliers all units with residual greater than 1e-7. */
    b_st.site = &d_emlrtRSI;
    b_abs(&b_st, out->residuals, b);
    i = weights->size[0];
    weights->size[0] = b->size[0];
    emxEnsureCapacity_boolean_T(&st, weights, i, &md_emlrtRTEI);
    loop_ub = b->size[0];
    for (i = 0; i < loop_ub; i++) {
      weights->data[i] = (b->data[i] <= 1.0E-7);
    }
    /*  Store the weights */
    i = out->weights->size[0];
    out->weights->size[0] = weights->size[0];
    emxEnsureCapacity_boolean_T(&st, out->weights, i, &nd_emlrtRTEI);
    loop_ub = weights->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->weights->data[i] = weights->data[i];
    }
    out->rew = false;
    /*  s is set to 0 */
    tsampling = 0.0;
    /*  Standardized residuals are artificially set equal to raw residuals. */
  }
  emxFree_real_T(&d_y);
  emxFree_int32_T(&ia);
  emxFree_real_T(&b);
  emxFree_real_T(&bestbetas);
  /*  Store quantities in the out structure */
  /*  Store robust estimate of beta coefficients */
  /*  Store robust estimate of s */
  out->scale = tsampling;
  /*  Store standardized residuals */
  /*  Store units forming initial subset */
  /*  Store list of units declared as outliers */
  loop_ub_tmp = weights->size[0] - 1;
  last = 0;
  for (b_i = 0; b_i <= loop_ub_tmp; b_i++) {
    if (!weights->data[b_i]) {
      last++;
    }
  }
  emxInit_int32_T(&st, &r1, 1, &fe_emlrtRTEI, true);
  i = r1->size[0];
  r1->size[0] = last;
  emxEnsureCapacity_int32_T(&st, r1, i, &qd_emlrtRTEI);
  last = 0;
  for (b_i = 0; b_i <= loop_ub_tmp; b_i++) {
    if (!weights->data[b_i]) {
      r1->data[last] = b_i + 1;
      last++;
    }
  }
  emxFree_boolean_T(&weights);
  i = out->outliers->size[0];
  out->outliers->size[0] = r1->size[0];
  emxEnsureCapacity_real_T(&st, out->outliers, i, &rd_emlrtRTEI);
  loop_ub = r1->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (r1->data[i] > seq->size[0]) {
      emlrtDynamicBoundsCheckR2012b(r1->data[i], 1, seq->size[0], &c_emlrtBCI,
                                    &st);
    }
    out->outliers->data[i] = seq->data[r1->data[i] - 1];
  }
  emxFree_int32_T(&r1);
  emxFree_real_T(&seq);
  /*  Store confidence level which is used to draw the horizontal lines in the
   */
  /*  plot */
  out->conflev = conflev;
  /*  Store the number of observations that have determined the LTS (LMS) */
  /*  estimator, i.e. the value of h. */
  out->h = h;
  /*  Store number of singular subsets */
  out->singsub = singsub;
  if (msg && (singsub / nselected > 0.1)) {
    for (i = 0; i < 30; i++) {
      b_cv6[i] = '-';
    }
    b_st.site = &kib_emlrtRSI;
    disp(&b_st, x_emlrt_marshallOut(&b_st, b_cv6), &c_emlrtMCI);
    ncomb = 100.0 * singsub / nselected;
    if (bonflevout) {
      b_st.site = &c_emlrtRSI;
      c_st.site = &uv_emlrtRSI;
      d_st.site = &uhb_emlrtRSI;
      k_st.site = &vhb_emlrtRSI;
      ncomb = g_emlrt_marshallIn(
          &d_st,
          d_feval(&d_st, d_emlrt_marshallOut(&d_st, b_cv3),
                  f_emlrt_marshallOut(1.0), v_emlrt_marshallOut(&k_st, b_cv8),
                  f_emlrt_marshallOut(ncomb), &y_emlrtMCI),
          "<output of feval>");
      emlrtDisplayR2012b(f_emlrt_marshallOut(ncomb), (char_T *)"ans",
                         &b_emlrtRTEI, &st);
    } else {
      b_st.site = &b_emlrtRSI;
      c_st.site = &uv_emlrtRSI;
      d_st.site = &uhb_emlrtRSI;
      k_st.site = &vhb_emlrtRSI;
      ncomb = g_emlrt_marshallIn(
          &d_st,
          d_feval(&d_st, d_emlrt_marshallOut(&d_st, b_cv3),
                  f_emlrt_marshallOut(1.0), p_emlrt_marshallOut(&k_st, b_cv7),
                  f_emlrt_marshallOut(ncomb), &y_emlrtMCI),
          "<output of feval>");
      emlrtDisplayR2012b(f_emlrt_marshallOut(ncomb), (char_T *)"ans",
                         &emlrtRTEI, &st);
    }
  }
  if (yxsave) {
    if ((!nocheck) && intercept) {
      /*  Store X (without the column of ones if there is an intercept) */
      if (2 > out->X->size[1]) {
        i = 0;
        i1 = 0;
      } else {
        i = 1;
        if (out->X->size[1] < 1) {
          emlrtDynamicBoundsCheckR2012b(out->X->size[1], 1, out->X->size[1],
                                        &j_emlrtBCI, &st);
        }
        i1 = out->X->size[1];
      }
      last = out->X->size[0] - 1;
      loop_ub = out->X->size[0];
      loop_ub_tmp = i1 - i;
      for (i1 = 0; i1 < loop_ub_tmp; i1++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          out->X->data[i2 + (last + 1) * i1] =
              out->X->data[i2 + out->X->size[0] * (i + i1)];
        }
      }
      i = out->X->size[0] * out->X->size[1];
      out->X->size[0] = last + 1;
      out->X->size[1] = loop_ub_tmp;
      emxEnsureCapacity_real_T(&st, out->X, i, &ud_emlrtRTEI);
    }
    /*  Store response */
    i = out->y->size[0] * out->y->size[1];
    out->y->size[0] = b_y->size[0];
    out->y->size[1] = 1;
    emxEnsureCapacity_real_T(&st, out->y, i, &td_emlrtRTEI);
    loop_ub = b_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->y->data[i] = b_y->data[i];
    }
  } else {
    out->X->size[0] = 0;
    out->X->size[1] = 0;
    out->y->size[0] = 0;
    out->y->size[1] = 0;
  }
  emxFree_real_T(&b_y);
  /*  Store information about the class of the object */
  out->class[0] = 'L';
  out->class[1] = 'T';
  out->class[2] = 'S';
  /*  Create plots */
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (LXS_wrapper1.c) */
