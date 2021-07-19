/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LXS_wrapper.c
 *
 * Code generation for function 'LXS_wrapper'
 *
 */

/* Include files */
#include "LXS_wrapper.h"
#include "FSM.h"
#include "LXS.h"
#include "LXS_wrapper_data.h"
#include "LXS_wrapper_emxutil.h"
#include "LXS_wrapper_mexutil.h"
#include "LXS_wrapper_types.h"
#include "abs.h"
#include "bc.h"
#include "chkinputR.h"
#include "combineVectorElements.h"
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
    1070,                                          /* lineNo */
    13,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo b_emlrtRTEI = {
    1068,                                          /* lineNo */
    13,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRSInfo emlrtRSI = {
    62,            /* lineNo */
    "LXS_wrapper", /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\LXS_wrapper.m" /* pathName
                                                                      */
};

static emlrtRSInfo b_emlrtRSI = {
    1070,                                          /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    1068,                                          /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    1022,                                          /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    1003,                                          /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    988,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI = {
    986,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo h_emlrtRSI = {
    984,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI = {
    981,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo j_emlrtRSI = {
    977,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo k_emlrtRSI = {
    973,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo l_emlrtRSI = {
    967,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo m_emlrtRSI = {
    954,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo n_emlrtRSI = {
    946,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo o_emlrtRSI = {
    943,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo p_emlrtRSI = {
    928,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo q_emlrtRSI = {
    907,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo r_emlrtRSI = {
    895,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo s_emlrtRSI = {
    893,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo t_emlrtRSI = {
    875,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo u_emlrtRSI = {
    868,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo v_emlrtRSI = {
    864,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo w_emlrtRSI = {
    823,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo x_emlrtRSI = {
    815,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo y_emlrtRSI = {
    813,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo ab_emlrtRSI = {
    811,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo bb_emlrtRSI = {
    805,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo cb_emlrtRSI = {
    747,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo db_emlrtRSI = {
    740,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo eb_emlrtRSI = {
    737,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo fb_emlrtRSI = {
    734,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo gb_emlrtRSI = {
    726,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo hb_emlrtRSI = {
    721,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo ib_emlrtRSI = {
    716,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo jb_emlrtRSI = {
    710,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo kb_emlrtRSI = {
    705,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo lb_emlrtRSI = {
    696,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo mb_emlrtRSI = {
    654,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo nb_emlrtRSI = {
    550,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo ob_emlrtRSI = {
    523,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo pb_emlrtRSI = {
    521,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo qb_emlrtRSI = {
    443,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo rb_emlrtRSI = {
    430,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo veb_emlrtRSI = {
    32,     /* lineNo */
    "sort", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m" /* pathName
                                                                         */
};

static emlrtMCInfo emlrtMCI = {
    546,                                           /* lineNo */
    17,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtMCInfo b_emlrtMCI = {
    1018,                                          /* lineNo */
    9,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtMCInfo c_emlrtMCI = {
    1065,                                          /* lineNo */
    9,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtBCInfo emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    1081,                                           /* lineNo */
    25,                                             /* colNo */
    "X",                                            /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtECInfo emlrtECI = {
    -1,                                            /* nDims */
    977,                                           /* lineNo */
    21,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtECInfo b_emlrtECI = {
    -1,                                            /* nDims */
    973,                                           /* lineNo */
    19,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    930,                                            /* lineNo */
    26,                                             /* colNo */
    "indsorres2",                                   /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtDCInfo emlrtDCI = {
    930,                                            /* lineNo */
    26,                                             /* colNo */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    1                                               /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    930,                                            /* lineNo */
    24,                                             /* colNo */
    "indsorres2",                                   /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtECInfo c_emlrtECI = {
    -1,                                            /* nDims */
    875,                                           /* lineNo */
    11,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    822,                                            /* lineNo */
    9,                                              /* colNo */
    "brob",                                         /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    747,                                            /* lineNo */
    32,                                             /* colNo */
    "r2s",                                          /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    747,                                            /* lineNo */
    32,                                             /* colNo */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    1                                               /* checkKind */
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

static emlrtECInfo d_emlrtECI = {
    -1,                                            /* nDims */
    734,                                           /* lineNo */
    15,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    730,                                            /* lineNo */
    33,                                             /* colNo */
    "b",                                            /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    730,                                            /* lineNo */
    17,                                             /* colNo */
    "b",                                            /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    714,                                            /* lineNo */
    15,                                             /* colNo */
    "C",                                            /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtRTEInfo c_emlrtRTEI = {
    708,                                           /* lineNo */
    7,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    684,                                            /* lineNo */
    31,                                             /* colNo */
    "X",                                            /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = {
    672,                                            /* lineNo */
    1,                                              /* colNo */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    4                                               /* checkKind */
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

static emlrtDCInfo d_emlrtDCI = {
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
    805,                                            /* lineNo */
    13,                                             /* colNo */
    "time",                                         /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    744,                                            /* lineNo */
    22,                                             /* colNo */
    "r2s",                                          /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = {
    744,                                            /* lineNo */
    22,                                             /* colNo */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    1                                               /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    930,                                            /* lineNo */
    13,                                             /* colNo */
    "weights",                                      /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    1051,                                           /* lineNo */
    18,                                             /* colNo */
    "seq",                                          /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    967,                                            /* lineNo */
    18,                                             /* colNo */
    "X",                                            /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    967,                                            /* lineNo */
    36,                                             /* colNo */
    "y",                                            /* aName */
    "LXS",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtRTEInfo mc_emlrtRTEI = {
    430,                                           /* lineNo */
    2,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = {
    430,                                           /* lineNo */
    4,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = {
    431,                                           /* lineNo */
    1,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = {
    454,                                           /* lineNo */
    1,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = {
    701,                                           /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = {
    681,                                           /* lineNo */
    9,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = {
    686,                                           /* lineNo */
    13,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = {
    1048,                                          /* lineNo */
    1,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = {
    684,                                           /* lineNo */
    13,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo vc_emlrtRTEI = {
    696,                                           /* lineNo */
    16,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo wc_emlrtRTEI = {
    698,                                           /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo xc_emlrtRTEI = {
    720,                                           /* lineNo */
    9,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo yc_emlrtRTEI = {
    714,                                           /* lineNo */
    13,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = {
    875,                                           /* lineNo */
    1,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo bd_emlrtRTEI = {
    717,                                           /* lineNo */
    9,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = {
    721,                                           /* lineNo */
    12,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = {
    1022,                                          /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = {
    734,                                           /* lineNo */
    15,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = {
    1025,                                          /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = {
    936,                                           /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo id_emlrtRTEI = {
    930,                                           /* lineNo */
    13,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = {
    747,                                           /* lineNo */
    26,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = {
    755,                                           /* lineNo */
    17,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = {
    62,            /* lineNo */
    1,             /* colNo */
    "LXS_wrapper", /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\LXS_wrapper.m" /* pName */
};

static emlrtRTEInfo md_emlrtRTEI = {
    1051,                                          /* lineNo */
    1,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo nd_emlrtRTEI = {
    954,                                           /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo od_emlrtRTEI = {
    1087,                                          /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = {
    1081,                                          /* lineNo */
    13,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = {
    967,                                           /* lineNo */
    16,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = {
    967,                                           /* lineNo */
    34,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = {
    973,                                           /* lineNo */
    9,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo td_emlrtRTEI = {
    977,                                           /* lineNo */
    21,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo ud_emlrtRTEI = {
    1003,                                          /* lineNo */
    9,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo vd_emlrtRTEI = {
    696,                                           /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo wd_emlrtRTEI = {
    737,                                           /* lineNo */
    13,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo xd_emlrtRTEI = {
    929,                                           /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo yd_emlrtRTEI = {
    1,             /* lineNo */
    18,            /* colNo */
    "LXS_wrapper", /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\LXS_wrapper.m" /* pName */
};

static emlrtRTEInfo ae_emlrtRTEI = {
    1051,                                          /* lineNo */
    18,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo be_emlrtRTEI = {
    967,                                           /* lineNo */
    18,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo ce_emlrtRTEI = {
    696,                                           /* lineNo */
    12,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRSInfo qhb_emlrtRSI = {
    546,                                           /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo thb_emlrtRSI = {
    1018,                                          /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo uhb_emlrtRSI = {
    1065,                                          /* lineNo */
    "LXS",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

/* Function Declarations */
static const mxArray *u_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[54]);

static const mxArray *v_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[58]);

static const mxArray *w_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[122]);

static const mxArray *x_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[66]);

static const mxArray *y_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[30]);

/* Function Definitions */
static const mxArray *u_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[54])
{
  static const int32_T iv[2] = {1, 54};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 54, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *v_emlrt_marshallOut(const emlrtStack *sp,
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

static const mxArray *w_emlrt_marshallOut(const emlrtStack *sp,
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

static const mxArray *x_emlrt_marshallOut(const emlrtStack *sp,
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

static const mxArray *y_emlrt_marshallOut(const emlrtStack *sp,
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

void LXS_wrapper(LXS_wrapperStackData *SD, const emlrtStack *sp,
                 const emxArray_real_T *y, const emxArray_real_T *X,
                 const real_T bonflevoutX_data[],
                 const int32_T bonflevoutX_size[2], real_T conflev, real_T h,
                 boolean_T intercept, real_T lms, boolean_T msg,
                 boolean_T nocheck, boolean_T nomes, real_T nsamp,
                 boolean_T rew, boolean_T yxsave, struct_LXS_T *out,
                 emxArray_real_T *C)
{
  static const char_T b_cv10[122] = {
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
  static const char_T b_cv7[66] = {
      'A', 't', 't', 'e', 'n', 't', 'i', 'o', 'n', ':', ' ', 't', 'h', 'e',
      'r', 'e', ' ', 'w', 'a', 's', ' ', 'a', 'n', ' ', 'e', 'x', 'a', 'c',
      't', ' ', 'f', 'i', 't', '.', ' ', 'R', 'o', 'b', 'u', 's', 't', ' ',
      'e', 's', 't', 'i', 'm', 'a', 't', 'e', ' ', 'o', 'f', ' ', 's', '^',
      '2', ' ', 'i', 's', ' ', '<', '1', 'e', '-', '7'};
  static const char_T b_cv9[62] = {
      'W', 'a', 'r', 'n', 'i', 'n', 'g', ':', ' ',  'N', 'u', 'm', 'b',
      'e', 'r', ' ', 'o', 'f', ' ', 's', 'u', 'b',  's', 'e', 't', 's',
      ' ', 'w', 'i', 't', 'h', 'o', 'u', 't', ' ',  'f', 'u', 'l', 'l',
      ' ', 'r', 'a', 'n', 'k', ' ', 'e', 'q', 'u',  'a', 'l', ' ', 't',
      'o', ' ', '%', '.', '1', 'f', '%', '%', '\\', 'n'};
  static const char_T b_cv6[58] = {
      'T', 'o', 't', 'a', 'l', ' ', 'e', 's', 't',  'i', 'm', 'a',
      't', 'e', 'd', ' ', 't', 'i', 'm', 'e', ' ',  't', 'o', ' ',
      'c', 'o', 'm', 'p', 'l', 'e', 't', 'e', ' ',  'F', 'A', 'S',
      'T', 'L', 'T', 'S', ':', ' ', '%', '5', '.',  '2', 'f', ' ',
      's', 'e', 'c', 'o', 'n', 'd', 's', ' ', '\\', 'n'};
  static const char_T b_cv4[54] = {
      'T', 'o', 't', 'a', 'l', ' ', 'e', 's', 't', 'i', 'm',  'a', 't', 'e',
      'd', ' ', 't', 'i', 'm', 'e', ' ', 't', 'o', ' ', 'c',  'o', 'm', 'p',
      'l', 'e', 't', 'e', ' ', 'L', 'T', 'S', ':', ' ', '%',  '5', '.', '2',
      'f', ' ', 's', 'e', 'c', 'o', 'n', 'd', 's', ' ', '\\', 'n'};
  static const char_T b_cv5[54] = {
      'T', 'o', 't', 'a', 'l', ' ', 'e', 's', 't', 'i', 'm',  'a', 't', 'e',
      'd', ' ', 't', 'i', 'm', 'e', ' ', 't', 'o', ' ', 'c',  'o', 'm', 'p',
      'l', 'e', 't', 'e', ' ', 'L', 'M', 'S', ':', ' ', '%',  '5', '.', '2',
      'f', ' ', 's', 'e', 'c', 'o', 'n', 'd', 's', ' ', '\\', 'n'};
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
  emlrtStack st;
  emlrtTimespec expl_temp;
  emxArray_boolean_T *weights;
  emxArray_int32_T *b_r2;
  emxArray_int32_T *ia;
  emxArray_int32_T *ib;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_real_T b_time_data;
  emxArray_real_T c_time_data;
  emxArray_real_T d_time_data;
  emxArray_real_T *Xwithoutint;
  emxArray_real_T *b_C;
  emxArray_real_T *b_Xwithoutint;
  emxArray_real_T *b_expl_temp;
  emxArray_real_T *b_y;
  emxArray_real_T *c_expl_temp;
  emxArray_real_T *c_y;
  emxArray_real_T *d_expl_temp;
  emxArray_real_T *e_expl_temp;
  emxArray_real_T *f_expl_temp;
  emxArray_real_T *outFSM_outliers;
  emxArray_real_T *outliers;
  emxArray_real_T *r2;
  emxArray_real_T *seq;
  real_T time_data[1000];
  real_T expl_temp_data[10];
  real_T b_conflev;
  real_T n;
  real_T ncomb;
  real_T nselected;
  real_T p;
  real_T rmin;
  real_T singsub;
  real_T tsampling;
  real_T ttic_tv_nsec;
  int32_T b_tmp_size[2];
  int32_T critdef_size[2];
  int32_T tmp_size[2];
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T lmsopt;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T nz;
  int32_T time_size;
  char_T tmp_data[310];
  char_T b_tmp_data[58];
  char_T b_cv8[30];
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
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_y, 1, &yd_emlrtRTEI, true);
  /*  Wrapper function for LXS (when lms is a scalar). NV pair names are not
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
  /*  lms: a scalar of type double */
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
  /*         out.outliers = row vector containing the list of the units declared
   */
  /*                        as outliers using confidence level specified in */
  /*                        input scalar conflev. */
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
  /*  See also FSReda, Sreg, MMreg, LTSts */
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
  emxEnsureCapacity_real_T(&st, b_y, i, &mc_emlrtRTEI);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] = y->data[i];
  }
  i = out->X->size[0] * out->X->size[1];
  out->X->size[0] = X->size[0];
  out->X->size[1] = X->size[1];
  emxEnsureCapacity_real_T(&st, out->X, i, &nc_emlrtRTEI);
  loop_ub = X->size[0] * X->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->X->data[i] = X->data[i];
  }
  b_st.site = &rb_emlrtRSI;
  chkinputR(&b_st, b_y, out->X, intercept, nocheck, &n, &p);
  emxInit_real_T(&st, &seq, 2, &oc_emlrtRTEI, true);
  if (muDoubleScalarIsNaN(n)) {
    i = seq->size[0] * seq->size[1];
    seq->size[0] = 1;
    seq->size[1] = 1;
    emxEnsureCapacity_real_T(&st, seq, i, &oc_emlrtRTEI);
    seq->data[0] = rtNaN;
  } else if (n < 1.0) {
    seq->size[0] = 1;
    seq->size[1] = 0;
  } else if (muDoubleScalarIsInf(n) && (1.0 == n)) {
    i = seq->size[0] * seq->size[1];
    seq->size[0] = 1;
    seq->size[1] = 1;
    emxEnsureCapacity_real_T(&st, seq, i, &oc_emlrtRTEI);
    seq->data[0] = rtNaN;
  } else {
    i = seq->size[0] * seq->size[1];
    seq->size[0] = 1;
    loop_ub = (int32_T)muDoubleScalarFloor(n - 1.0);
    seq->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&st, seq, i, &oc_emlrtRTEI);
    for (i = 0; i <= loop_ub; i++) {
      seq->data[i] = (real_T)i + 1.0;
    }
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
  b_st.site = &qb_emlrtRSI;
  ncomb = bc(&b_st, n, p);
  /*  Set the "half" of the data points. */
  /*  initialize brob which will be the vector of estimated robust regression */
  /*  coefficients */
  loop_ub_tmp = (int32_T)p;
  i = out->beta->size[0];
  out->beta->size[0] = (int32_T)p;
  emxEnsureCapacity_real_T(&st, out->beta, i, &pc_emlrtRTEI);
  for (i = 0; i < loop_ub_tmp; i++) {
    out->beta->data[i] = -99.0;
  }
  /*  Write in structure 'options' the options chosen by the user */
  rmin = nsamp;
  /*  And check if the optional user parameters are reasonable. */
  /*  Check h and bdp */
  /*  The user has only specified h: no need to specify bdp. */
  if (h < p + 1.0) {
    b_st.site = &pb_emlrtRSI;
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
    b_st.site = &pb_emlrtRSI;
    b_error(&b_st, b_tmp_data, b_tmp_size);
  } else if (h >= n) {
    b_st.site = &ob_emlrtRSI;
    c_error(&b_st);
  }
  /*  the user has only specified bdp: h is defined accordingly */
  /*  Check number of subsamples to extract */
  if (nsamp > ncomb) {
    if (msg) {
      b_st.site = &qhb_emlrtRSI;
      disp(&b_st, s_emlrt_marshallOut(&b_st, b_cv1), &emlrtMCI);
    }
    rmin = 0.0;
  } else if (nsamp < 0.0) {
    b_st.site = &nb_emlrtRSI;
    d_error(&b_st);
  }
  /*  Default values for the optional */
  /*  parameters are set inside structure 'options' */
  /*  Number of data points on which estimates are based */
  /*  Number of subsets to extract */
  /*  if options.lms==1 then LMS, else LTS */
  if (lms == 2.0) {
    /*  lms=struct; */
    /*  ij is a scalar used to ensure that the best first bestr non singular */
    /*  subsets are stored */
    /*  lmsopt is associated with the message about total computing time */
    lmsopt = 2;
  } else {
    /*  lmsopt is associated with the message about total computing time */
    lmsopt = (lms == 1.0);
  }
  /*  Scalar which controls the messages displayed on the screen */
  /*  if options.nomes==true no message about estimated time to compute LMS is
   * displayed */
  /*  Extract in the rows of matrix C the indexes of all required subsets */
  b_st.site = &mb_emlrtRSI;
  subsets(&b_st, rmin, n, p, ncomb, msg, C, &nselected);
  /*  Store the indices in varargout */
  /*  rmin will contain the minimum value of LMS (LTS) */
  rmin = rtInf;
  /*  initialise and start timer. */
  tsampling = muDoubleScalarCeil(muDoubleScalarMin(nselected / 100.0, 1000.0));
  if ((int32_T)tsampling < 0) {
    emlrtNonNegativeCheckR2012b((int32_T)tsampling, &c_emlrtDCI, &st);
  }
  time_size = (int32_T)tsampling;
  if ((int32_T)tsampling < 0) {
    emlrtNonNegativeCheckR2012b((int32_T)tsampling, &c_emlrtDCI, &st);
  }
  loop_ub = (int32_T)tsampling;
  if (0 <= loop_ub - 1) {
    memset(&time_data[0], 0, loop_ub * sizeof(real_T));
  }
  /*  bonflevoutX option to search for outliers in the X space */
  emxInit_real_T(&st, &Xwithoutint, 2, &rc_emlrtRTEI, true);
  emxInit_real_T(&st, &outliers, 1, &wc_emlrtRTEI, true);
  if ((bonflevoutX_size[0] != 0) && (bonflevoutX_size[1] != 0)) {
    bonflevout = true;
    if (nocheck) {
      i = Xwithoutint->size[0] * Xwithoutint->size[1];
      Xwithoutint->size[0] = out->X->size[0];
      Xwithoutint->size[1] = out->X->size[1];
      emxEnsureCapacity_real_T(&st, Xwithoutint, i, &rc_emlrtRTEI);
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
                                        &j_emlrtBCI, &st);
        }
        i1 = out->X->size[1];
      }
      loop_ub = out->X->size[0];
      i2 = Xwithoutint->size[0] * Xwithoutint->size[1];
      Xwithoutint->size[0] = out->X->size[0];
      b_loop_ub = i1 - i;
      Xwithoutint->size[1] = b_loop_ub;
      emxEnsureCapacity_real_T(&st, Xwithoutint, i2, &uc_emlrtRTEI);
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          Xwithoutint->data[i2 + Xwithoutint->size[0] * i1] =
              out->X->data[i2 + out->X->size[0] * (i + i1)];
        }
      }
    } else {
      i = Xwithoutint->size[0] * Xwithoutint->size[1];
      Xwithoutint->size[0] = out->X->size[0];
      Xwithoutint->size[1] = out->X->size[1];
      emxEnsureCapacity_real_T(&st, Xwithoutint, i, &sc_emlrtRTEI);
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
    emxInit_real_T(&st, &b_Xwithoutint, 2, &vc_emlrtRTEI, true);
    i = b_Xwithoutint->size[0] * b_Xwithoutint->size[1];
    b_Xwithoutint->size[0] = Xwithoutint->size[0];
    b_Xwithoutint->size[1] = Xwithoutint->size[1];
    emxEnsureCapacity_real_T(&st, b_Xwithoutint, i, &vc_emlrtRTEI);
    loop_ub = Xwithoutint->size[0] * Xwithoutint->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_Xwithoutint->data[i] = Xwithoutint->data[i];
    }
    emxInit_real_T(&st, &outFSM_outliers, 2, &vd_emlrtRTEI, true);
    emxInit_real_T(&st, &b_expl_temp, 2, &ce_emlrtRTEI, true);
    emxInit_real_T(&st, &c_expl_temp, 2, &ce_emlrtRTEI, true);
    emxInit_real_T(&st, &d_expl_temp, 2, &ce_emlrtRTEI, true);
    emxInit_real_T(&st, &e_expl_temp, 2, &ce_emlrtRTEI, true);
    emxInit_real_T(&st, &f_expl_temp, 2, &ce_emlrtRTEI, true);
    b_st.site = &lb_emlrtRSI;
    FSM(SD, &b_st, b_Xwithoutint, bonflevoutX_data, bonflevoutX_size,
        muDoubleScalarFloor(n * 0.6), critdef_data, critdef_size,
        (real_T)Xwithoutint->size[1] + 1.0, outFSM_outliers, b_expl_temp,
        c_expl_temp, d_expl_temp, e_expl_temp, f_expl_temp, expl_temp_data,
        tmp_size, b_expl_temp_data, b_tmp_size);
    i = outliers->size[0];
    outliers->size[0] = outFSM_outliers->size[0] * outFSM_outliers->size[1];
    emxEnsureCapacity_real_T(&st, outliers, i, &wc_emlrtRTEI);
    loop_ub = outFSM_outliers->size[0] * outFSM_outliers->size[1];
    emxFree_real_T(&b_Xwithoutint);
    emxFree_real_T(&f_expl_temp);
    emxFree_real_T(&e_expl_temp);
    emxFree_real_T(&d_expl_temp);
    emxFree_real_T(&c_expl_temp);
    emxFree_real_T(&b_expl_temp);
    for (i = 0; i < loop_ub; i++) {
      outliers->data[i] = outFSM_outliers->data[i];
    }
    emxFree_real_T(&outFSM_outliers);
  } else {
    bonflevout = false;
    i = outliers->size[0];
    outliers->size[0] = 1;
    emxEnsureCapacity_real_T(&st, outliers, i, &qc_emlrtRTEI);
    outliers->data[0] = 0.0;
  }
  /*  Computation of LMS (LTS) */
  b_st.site = &kb_emlrtRSI;
  expl_temp = tic(&b_st);
  b_conflev = expl_temp.tv_sec;
  ttic_tv_nsec = expl_temp.tv_nsec;
  i = out->bs->size[0] * out->bs->size[1];
  out->bs->size[0] = 1;
  out->bs->size[1] = (int32_T)p;
  emxEnsureCapacity_real_T(&st, out->bs, i, &tc_emlrtRTEI);
  for (i = 0; i < loop_ub_tmp; i++) {
    out->bs->data[i] = 0.0;
  }
  i = (int32_T)nselected;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, nselected, mxDOUBLE_CLASS,
                                (int32_T)nselected, &c_emlrtRTEI, &st);
  emxInit_real_T(&st, &r2, 1, &wd_emlrtRTEI, true);
  emxInit_int32_T(&st, &ia, 1, &yd_emlrtRTEI, true);
  emxInit_int32_T(&st, &ib, 1, &yd_emlrtRTEI, true);
  emxInit_real_T(&st, &b_C, 2, &yc_emlrtRTEI, true);
  emxInit_real_T(&st, &c_y, 1, &cd_emlrtRTEI, true);
  for (b_i = 0; b_i < i; b_i++) {
    if (b_i + 1U <= (uint32_T)tsampling) {
      b_st.site = &jb_emlrtRSI;
      expl_temp = tic(&b_st);
      b_conflev = expl_temp.tv_sec;
      ttic_tv_nsec = expl_temp.tv_nsec;
    }
    /*  extract a subset of size p */
    if ((b_i + 1 < 1) || (b_i + 1 > C->size[0])) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, C->size[0], &i_emlrtBCI, &st);
    }
    guard1 = false;
    if (bonflevout) {
      b_st.site = &ib_emlrtRSI;
      c_st.site = &sdb_emlrtRSI;
      loop_ub = C->size[1];
      i1 = b_C->size[0] * b_C->size[1];
      b_C->size[0] = 1;
      b_C->size[1] = C->size[1];
      emxEnsureCapacity_real_T(&c_st, b_C, i1, &yc_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_C->data[i1] = C->data[b_i + C->size[0] * i1];
      }
      d_st.site = &tdb_emlrtRSI;
      c_do_vectors(&d_st, b_C, outliers, r2, ia, ib);
      if (r2->size[0] != 0) {
        i1 = out->residuals->size[0];
        out->residuals->size[0] = 1;
        emxEnsureCapacity_real_T(&st, out->residuals, i1, &bd_emlrtRTEI);
        out->residuals->data[0] = rtNaN;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
    if (guard1) {
      loop_ub = C->size[1];
      b_loop_ub = out->X->size[1];
      i1 = Xwithoutint->size[0] * Xwithoutint->size[1];
      Xwithoutint->size[0] = C->size[1];
      Xwithoutint->size[1] = out->X->size[1];
      emxEnsureCapacity_real_T(&st, Xwithoutint, i1, &xc_emlrtRTEI);
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          if (C->data[b_i + C->size[0] * i2] !=
              (int32_T)muDoubleScalarFloor(C->data[b_i + C->size[0] * i2])) {
            emlrtIntegerCheckR2012b(C->data[b_i + C->size[0] * i2], &d_emlrtDCI,
                                    &st);
          }
          nz = (int32_T)C->data[b_i + C->size[0] * i2];
          if ((nz < 1) || (nz > out->X->size[0])) {
            emlrtDynamicBoundsCheckR2012b(nz, 1, out->X->size[0], &k_emlrtBCI,
                                          &st);
          }
          Xwithoutint->data[i2 + Xwithoutint->size[0] * i1] =
              out->X->data[(nz + out->X->size[0] * i1) - 1];
        }
      }
      loop_ub = C->size[1];
      i1 = b_C->size[0] * b_C->size[1];
      b_C->size[0] = 1;
      b_C->size[1] = C->size[1];
      emxEnsureCapacity_real_T(&st, b_C, i1, &yc_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_C->data[i1] = C->data[b_i + C->size[0] * i1];
      }
      b_st.site = &hb_emlrtRSI;
      b_indexShapeCheck(&b_st, b_y->size[0], *(int32_T(*)[2])b_C->size);
      loop_ub = C->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        i2 = (int32_T)C->data[b_i + C->size[0] * i1];
        if ((i2 < 1) || (i2 > b_y->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, b_y->size[0], &l_emlrtBCI, &st);
        }
      }
      /*  if rank(Xb)==p Warning: this instruction has been replaced by a */
      /*  posteriori control on vector b */
      /*  Compute the vector of coefficients using matrice Xb and yb */
      loop_ub = C->size[1];
      i1 = c_y->size[0];
      c_y->size[0] = C->size[1];
      emxEnsureCapacity_real_T(&st, c_y, i1, &cd_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        c_y->data[i1] = b_y->data[(int32_T)C->data[b_i + C->size[0] * i1] - 1];
      }
      b_st.site = &gb_emlrtRSI;
      mldivide(&b_st, Xwithoutint, c_y, out->residuals);
    }
    if (1 > out->residuals->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, out->residuals->size[0], &h_emlrtBCI,
                                    &st);
    }
    if (!muDoubleScalarIsNaN(out->residuals->data[0])) {
      if (1 > out->residuals->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, out->residuals->size[0],
                                      &g_emlrtBCI, &st);
      }
      if (!muDoubleScalarIsInf(out->residuals->data[0])) {
        /*  Residuals for all observations using b based on subset */
        b_st.site = &fb_emlrtRSI;
        c_st.site = &gc_emlrtRSI;
        dynamic_size_checks(&c_st, out->X, out->residuals, out->X->size[1],
                            out->residuals->size[0]);
        c_st.site = &fc_emlrtRSI;
        mtimes(&c_st, out->X, out->residuals, r2);
        loop_ub = b_y->size[0];
        if (b_y->size[0] != r2->size[0]) {
          emlrtSizeEqCheck1DR2012b(b_y->size[0], r2->size[0], &d_emlrtECI, &st);
        }
        /*  Squared residuals for all the observations */
        i1 = c_y->size[0];
        c_y->size[0] = b_y->size[0];
        emxEnsureCapacity_real_T(&st, c_y, i1, &fd_emlrtRTEI);
        for (i1 = 0; i1 < loop_ub; i1++) {
          c_y->data[i1] = b_y->data[i1] - r2->data[i1];
        }
        b_st.site = &eb_emlrtRSI;
        power(&b_st, c_y, r2);
        /*  Ordering of squared residuals */
        b_st.site = &db_emlrtRSI;
        c_st.site = &veb_emlrtRSI;
        c_sort(&c_st, r2);
        if (lms == 1.0) {
          /*  LMS */
          if (h != (int32_T)muDoubleScalarFloor(h)) {
            emlrtIntegerCheckR2012b(h, &e_emlrtDCI, &st);
          }
          if (((int32_T)h < 1) || ((int32_T)h > r2->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)h, 1, r2->size[0],
                                          &n_emlrtBCI, &st);
          }
          ncomb = r2->data[(int32_T)h - 1];
        } else {
          /*  STANDARD LTS without concentration steps */
          if (1 > r2->size[0]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, r2->size[0], &f_emlrtBCI, &st);
          }
          if (h != (int32_T)muDoubleScalarFloor(h)) {
            emlrtIntegerCheckR2012b(h, &b_emlrtDCI, &st);
          }
          if (((int32_T)h < 1) || ((int32_T)h > r2->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)h, 1, r2->size[0],
                                          &e_emlrtBCI, &st);
          }
          tmp_size[0] = 1;
          tmp_size[1] = (int32_T)h;
          b_st.site = &cb_emlrtRSI;
          b_indexShapeCheck(&b_st, r2->size[0], tmp_size);
          i1 = r2->size[0];
          r2->size[0] = (int32_T)h;
          emxEnsureCapacity_real_T(&st, r2, i1, &jd_emlrtRTEI);
          b_st.site = &cb_emlrtRSI;
          ncomb = sum(&b_st, r2);
        }
        if (ncomb < rmin) {
          /*  rmin = smallest ordered quantile or smallest truncated sum. */
          rmin = ncomb;
          /*  brob = \beta_lms or \beta_lts */
          i1 = out->beta->size[0];
          out->beta->size[0] = out->residuals->size[0];
          emxEnsureCapacity_real_T(&st, out->beta, i1, &kd_emlrtRTEI);
          loop_ub = out->residuals->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            out->beta->data[i1] = out->residuals->data[i1];
          }
          /*  bs = units forming best subset according to lms or lts */
          loop_ub = C->size[1];
          i1 = out->bs->size[0] * out->bs->size[1];
          out->bs->size[0] = 1;
          out->bs->size[1] = C->size[1];
          emxEnsureCapacity_real_T(&st, out->bs, i1, &tc_emlrtRTEI);
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
    if (!nomes) {
      if (b_i + 1U <= (uint32_T)tsampling) {
        /*  sampling time until step tsampling */
        if (((int32_T)(b_i + 1U) < 1) || ((int32_T)(b_i + 1U) > time_size)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1, time_size,
                                        &m_emlrtBCI, &st);
        }
        b_st.site = &bb_emlrtRSI;
        time_data[b_i] = toc(&b_st, b_conflev, ttic_tv_nsec);
      } else if ((b_i + 1U == (uint32_T)((int32_T)tsampling + 1)) && msg) {
        /*  stop sampling and print the estimated time */
        switch (lmsopt) {
        case 1:
          b_st.site = &ab_emlrtRSI;
          c_time_data.data = &time_data[0];
          c_time_data.size = &time_size;
          c_time_data.allocatedSize = 1000;
          c_time_data.numDimensions = 1;
          c_time_data.canFreeData = false;
          c_st.site = &ab_emlrtRSI;
          ncomb = nselected * median(&c_st, &c_time_data);
          c_st.site = &wv_emlrtRSI;
          d_st.site = &fhb_emlrtRSI;
          e_st.site = &ghb_emlrtRSI;
          g_emlrt_marshallIn(&d_st,
                             d_feval(&d_st, d_emlrt_marshallOut(&d_st, b_cv3),
                                     f_emlrt_marshallOut(1.0),
                                     u_emlrt_marshallOut(&e_st, b_cv5),
                                     f_emlrt_marshallOut(ncomb), &y_emlrtMCI),
                             "<output of feval>");
          break;
        case 2:
          b_st.site = &y_emlrtRSI;
          d_time_data.data = &time_data[0];
          d_time_data.size = &time_size;
          d_time_data.allocatedSize = 1000;
          d_time_data.numDimensions = 1;
          d_time_data.canFreeData = false;
          c_st.site = &y_emlrtRSI;
          ncomb = nselected * median(&c_st, &d_time_data);
          c_st.site = &wv_emlrtRSI;
          d_st.site = &fhb_emlrtRSI;
          e_st.site = &ghb_emlrtRSI;
          g_emlrt_marshallIn(&d_st,
                             d_feval(&d_st, d_emlrt_marshallOut(&d_st, b_cv3),
                                     f_emlrt_marshallOut(1.0),
                                     v_emlrt_marshallOut(&e_st, b_cv6),
                                     f_emlrt_marshallOut(ncomb), &y_emlrtMCI),
                             "<output of feval>");
          break;
        default:
          b_st.site = &x_emlrtRSI;
          b_time_data.data = &time_data[0];
          b_time_data.size = &time_size;
          b_time_data.allocatedSize = 1000;
          b_time_data.numDimensions = 1;
          b_time_data.canFreeData = false;
          c_st.site = &x_emlrtRSI;
          ncomb = nselected * median(&c_st, &b_time_data);
          c_st.site = &wv_emlrtRSI;
          d_st.site = &fhb_emlrtRSI;
          e_st.site = &ghb_emlrtRSI;
          g_emlrt_marshallIn(&d_st,
                             d_feval(&d_st, d_emlrt_marshallOut(&d_st, b_cv3),
                                     f_emlrt_marshallOut(1.0),
                                     u_emlrt_marshallOut(&e_st, b_cv4),
                                     f_emlrt_marshallOut(ncomb), &y_emlrtMCI),
                             "<output of feval>");
          break;
        }
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  emxFree_real_T(&b_C);
  emxFree_int32_T(&ib);
  emxFree_real_T(&outliers);
  if (1 > out->beta->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, out->beta->size[0], &d_emlrtBCI, &st);
  }
  if (out->beta->data[0] == -99.0) {
    b_st.site = &w_emlrtRSI;
    n_error(&b_st);
  }
  if (lms == 1.0) {
    /*  Estimate of scale based on h-quantile of all squared residuals */
    b_st.site = &v_emlrtRSI;
    if (rmin < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &sb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    ncomb = muDoubleScalarSqrt(rmin);
  } else {
    /*  Estimate of scale based on the first h squared smallest residuals */
    ncomb = rmin / h;
    b_st.site = &u_emlrtRSI;
    if (ncomb < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &sb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    ncomb = muDoubleScalarSqrt(ncomb);
  }
  /*  residuals = Raw residuals using robust estimate of beta */
  b_st.site = &t_emlrtRSI;
  c_st.site = &gc_emlrtRSI;
  dynamic_size_checks(&c_st, out->X, out->beta, out->X->size[1],
                      out->beta->size[0]);
  c_st.site = &fc_emlrtRSI;
  mtimes(&c_st, out->X, out->beta, out->residuals);
  if (b_y->size[0] != out->residuals->size[0]) {
    emlrtSizeEqCheck1DR2012b(b_y->size[0], out->residuals->size[0], &c_emlrtECI,
                             &st);
  }
  i = out->residuals->size[0];
  out->residuals->size[0] = b_y->size[0];
  emxEnsureCapacity_real_T(&st, out->residuals, i, &ad_emlrtRTEI);
  loop_ub = b_y->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->residuals->data[i] = b_y->data[i] - out->residuals->data[i];
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
    tsampling = ncomb * (1.4826 * (5.0 / (n - p) + 1.0));
  } else {
    /*  Consistency factor based on the variance of the truncated normal
     * distribution. */
    /*  1-h/n=trimming percentage */
    /*  Compute variance of the truncated normal distribution. */
    b_st.site = &s_emlrtRSI;
    rmin = norminv(0.5 * (h / n + 1.0));
    /* factor=1/sqrt(1-(2*a.*normpdf(a))./(2*normcdf(a)-1)); */
    rmin =
        1.0 - 2.0 * (n / h) * rmin *
                  (muDoubleScalarExp(-0.5 * rmin * rmin) / 2.5066282746310002);
    b_st.site = &r_emlrtRSI;
    if (rmin < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &sb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    rmin = muDoubleScalarSqrt(rmin);
    /*  Note that factor=sqrt(factor1) */
    /*      v=1; */
    /*      a=chi2inv(h/n,1); */
    /*      factor1=(h/n)/(chi2cdf(a,1+2)); */
    /*  Apply the asymptotic consistency factor to the preliminary scale
     * estimate */
    tsampling = ncomb * (1.0 / rmin);
    /*  Apply small sample correction factor of Pison et al. */
    if (h < n) {
      b_st.site = &q_emlrtRSI;
      rmin = corfactorRAW(&b_st, n, h / n);
      b_st.site = &q_emlrtRSI;
      if (rmin < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &sb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      rmin = muDoubleScalarSqrt(rmin);
      tsampling *= rmin;
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
  emxInit_boolean_T(&st, &weights, 1, &xd_emlrtRTEI, true);
  if (muDoubleScalarAbs(tsampling) > 1.0E-7) {
    /*  Assign weight=1 to the h units which show the smallest h squared */
    /*  residuals */
    b_st.site = &p_emlrtRSI;
    c_st.site = &p_emlrtRSI;
    power(&c_st, out->residuals, r2);
    c_st.site = &ll_emlrtRSI;
    sort(&c_st, r2, ia);
    i = r2->size[0];
    r2->size[0] = ia->size[0];
    emxEnsureCapacity_real_T(&b_st, r2, i, &dd_emlrtRTEI);
    loop_ub = ia->size[0];
    for (i = 0; i < loop_ub; i++) {
      r2->data[i] = ia->data[i];
    }
    loop_ub_tmp = (int32_T)n;
    i = out->weights->size[0];
    out->weights->size[0] = (int32_T)n;
    emxEnsureCapacity_boolean_T(&st, out->weights, i, &hd_emlrtRTEI);
    for (i = 0; i < loop_ub_tmp; i++) {
      out->weights->data[i] = false;
    }
    if (1 > r2->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, r2->size[0], &c_emlrtBCI, &st);
    }
    if (h != (int32_T)muDoubleScalarFloor(h)) {
      emlrtIntegerCheckR2012b(h, &emlrtDCI, &st);
    }
    loop_ub_tmp = (int32_T)h;
    if (((int32_T)h < 1) || ((int32_T)h > r2->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)h, 1, r2->size[0], &b_emlrtBCI,
                                    &st);
    }
    emxInit_int32_T(&st, &r, 2, &yd_emlrtRTEI, true);
    i = r->size[0] * r->size[1];
    r->size[0] = 1;
    r->size[1] = (int32_T)h;
    emxEnsureCapacity_int32_T(&st, r, i, &id_emlrtRTEI);
    for (i = 0; i < loop_ub_tmp; i++) {
      i1 = (int32_T)r2->data[i];
      if ((i1 < 1) || (i1 > (int32_T)n)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)r2->data[i], 1, (int32_T)n,
                                      &o_emlrtBCI, &st);
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
    b_abs(&b_st, out->residuals, r2);
    i = weights->size[0];
    weights->size[0] = r2->size[0];
    emxEnsureCapacity_boolean_T(&st, weights, i, &nd_emlrtRTEI);
    loop_ub = r2->size[0];
    for (i = 0; i < loop_ub; i++) {
      weights->data[i] = (r2->data[i] <= ncomb);
    }
    /*  weights is a boolean vector. */
    /*     %% Reweighting part */
    /*  if options.rew==true use reweighted version of LMS/LTS, */
    if (rew) {
      /*  Find new estimate of beta using only observations which have */
      /*  weight equal to 1. Notice that new brob overwrites old brob */
      /*  computed previously. */
      loop_ub_tmp = weights->size[0] - 1;
      nz = 0;
      for (b_i = 0; b_i <= loop_ub_tmp; b_i++) {
        if (weights->data[b_i]) {
          nz++;
        }
      }
      emxInit_int32_T(&st, &b_r2, 1, &be_emlrtRTEI, true);
      i = b_r2->size[0];
      b_r2->size[0] = nz;
      emxEnsureCapacity_int32_T(&st, b_r2, i, &ld_emlrtRTEI);
      nz = 0;
      for (b_i = 0; b_i <= loop_ub_tmp; b_i++) {
        if (weights->data[b_i]) {
          b_r2->data[nz] = b_i + 1;
          nz++;
        }
      }
      loop_ub = out->X->size[1];
      i = Xwithoutint->size[0] * Xwithoutint->size[1];
      Xwithoutint->size[0] = b_r2->size[0];
      Xwithoutint->size[1] = out->X->size[1];
      emxEnsureCapacity_real_T(&st, Xwithoutint, i, &qd_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        b_loop_ub = b_r2->size[0];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          if (b_r2->data[i1] > out->X->size[0]) {
            emlrtDynamicBoundsCheckR2012b(b_r2->data[i1], 1, out->X->size[0],
                                          &q_emlrtBCI, &st);
          }
          Xwithoutint->data[i1 + Xwithoutint->size[0] * i] =
              out->X->data[(b_r2->data[i1] + out->X->size[0] * i) - 1];
        }
      }
      i = c_y->size[0];
      c_y->size[0] = b_r2->size[0];
      emxEnsureCapacity_real_T(&st, c_y, i, &rd_emlrtRTEI);
      loop_ub = b_r2->size[0];
      for (i = 0; i < loop_ub; i++) {
        if (b_r2->data[i] > b_y->size[0]) {
          emlrtDynamicBoundsCheckR2012b(b_r2->data[i], 1, b_y->size[0],
                                        &r_emlrtBCI, &st);
        }
        c_y->data[i] = b_y->data[b_r2->data[i] - 1];
      }
      emxFree_int32_T(&b_r2);
      b_st.site = &l_emlrtRSI;
      mldivide(&b_st, Xwithoutint, c_y, out->beta);
      /*  The QR decomposition is equivalent to the above but less efficient: */
      /*  [Q,R]=qr(X(weights==1,:),0); */
      /*  brob = R\(Q'*y(weights==1)); */
      /*  Computation of reweighted residuals. */
      b_st.site = &k_emlrtRSI;
      c_st.site = &gc_emlrtRSI;
      dynamic_size_checks(&c_st, out->X, out->beta, out->X->size[1],
                          out->beta->size[0]);
      c_st.site = &fc_emlrtRSI;
      mtimes(&c_st, out->X, out->beta, out->residuals);
      if (b_y->size[0] != out->residuals->size[0]) {
        emlrtSizeEqCheck1DR2012b(b_y->size[0], out->residuals->size[0],
                                 &b_emlrtECI, &st);
      }
      i = out->residuals->size[0];
      out->residuals->size[0] = b_y->size[0];
      emxEnsureCapacity_real_T(&st, out->residuals, i, &sd_emlrtRTEI);
      loop_ub = b_y->size[0];
      for (i = 0; i < loop_ub; i++) {
        out->residuals->data[i] = b_y->data[i] - out->residuals->data[i];
      }
      /*  Find new estimate of scale using only observations which have */
      /*  weight equal to 1. */
      b_st.site = &j_emlrtRSI;
      power(&b_st, out->residuals, r2);
      if (weights->size[0] != r2->size[0]) {
        emlrtSizeEqCheck1DR2012b(weights->size[0], r2->size[0], &emlrtECI, &st);
      }
      b_st.site = &j_emlrtRSI;
      c_st.site = &mm_emlrtRSI;
      d_st.site = &te_emlrtRSI;
      nz = combineVectorElements(&d_st, weights);
      i = r2->size[0];
      r2->size[0] = weights->size[0];
      emxEnsureCapacity_real_T(&st, r2, i, &td_emlrtRTEI);
      loop_ub = weights->size[0];
      for (i = 0; i < loop_ub; i++) {
        r2->data[i] *= (real_T)weights->data[i];
      }
      b_st.site = &j_emlrtRSI;
      tsampling = sum(&b_st, r2) / ((real_T)nz - 1.0);
      b_st.site = &j_emlrtRSI;
      if (tsampling < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &sb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      tsampling = muDoubleScalarSqrt(tsampling);
      /*  Compute new standardized residuals. */
      /*  Apply consistency factor to reweighted estimate of sigma */
      b_st.site = &i_emlrtRSI;
      c_st.site = &mm_emlrtRSI;
      d_st.site = &te_emlrtRSI;
      nz = combineVectorElements(&d_st, weights);
      if (nz < n) {
        /*  factor=consistencyfactor(hrew,n,1); */
        b_st.site = &h_emlrtRSI;
        rmin = norminv(0.5 * ((real_T)nz / n + 1.0));
        /* factor=1/sqrt(1-(2*a.*normpdf(a))./(2*normcdf(a)-1)); */
        rmin = 1.0 -
               2.0 * (n / (real_T)nz) * rmin *
                   (muDoubleScalarExp(-0.5 * rmin * rmin) / 2.5066282746310002);
        b_st.site = &g_emlrtRSI;
        if (rmin < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &b_st, &sb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
        }
        rmin = muDoubleScalarSqrt(rmin);
        /*  Apply small sample correction factor to reweighted estimate of sigma
         */
        b_st.site = &f_emlrtRSI;
        ncomb = corfactorREW(&b_st, n, (real_T)nz / n);
        b_st.site = &f_emlrtRSI;
        if (ncomb < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &b_st, &sb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
        }
        ncomb = muDoubleScalarSqrt(ncomb);
        ncomb *= 1.0 / rmin;
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
      b_abs(&b_st, out->residuals, r2);
      b_st.site = &e_emlrtRSI;
      rmin = norminv(b_conflev);
      i = weights->size[0];
      weights->size[0] = r2->size[0];
      emxEnsureCapacity_boolean_T(&st, weights, i, &ud_emlrtRTEI);
      loop_ub = r2->size[0];
      for (i = 0; i < loop_ub; i++) {
        weights->data[i] = (r2->data[i] <= rmin);
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
      b_st.site = &thb_emlrtRSI;
      disp(&b_st, x_emlrt_marshallOut(&b_st, b_cv7), &b_emlrtMCI);
    }
    /*  There is an approximate perfect fit for the first h observations. */
    /*  We consider as outliers all units with residual greater than 1e-7. */
    b_st.site = &d_emlrtRSI;
    b_abs(&b_st, out->residuals, r2);
    i = weights->size[0];
    weights->size[0] = r2->size[0];
    emxEnsureCapacity_boolean_T(&st, weights, i, &ed_emlrtRTEI);
    loop_ub = r2->size[0];
    for (i = 0; i < loop_ub; i++) {
      weights->data[i] = (r2->data[i] <= 1.0E-7);
    }
    /*  Store the weights */
    i = out->weights->size[0];
    out->weights->size[0] = weights->size[0];
    emxEnsureCapacity_boolean_T(&st, out->weights, i, &gd_emlrtRTEI);
    loop_ub = weights->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->weights->data[i] = weights->data[i];
    }
    out->rew = false;
    /*  s is set to 0 */
    tsampling = 0.0;
    /*  Standardized residuals are artificially set equal to raw residuals. */
  }
  emxFree_real_T(&c_y);
  emxFree_int32_T(&ia);
  emxFree_real_T(&r2);
  emxFree_real_T(&Xwithoutint);
  /*  Store quantities in the out structure */
  /*  Store robust estimate of beta coefficients */
  /*  Store robust estimate of s */
  out->scale = tsampling;
  /*  Store standardized residuals */
  /*  Store units forming initial subset */
  /*  Store list of units declared as outliers */
  loop_ub_tmp = weights->size[0] - 1;
  nz = 0;
  for (b_i = 0; b_i <= loop_ub_tmp; b_i++) {
    if (!weights->data[b_i]) {
      nz++;
    }
  }
  emxInit_int32_T(&st, &r1, 1, &ae_emlrtRTEI, true);
  i = r1->size[0];
  r1->size[0] = nz;
  emxEnsureCapacity_int32_T(&st, r1, i, &ld_emlrtRTEI);
  nz = 0;
  for (b_i = 0; b_i <= loop_ub_tmp; b_i++) {
    if (!weights->data[b_i]) {
      r1->data[nz] = b_i + 1;
      nz++;
    }
  }
  emxFree_boolean_T(&weights);
  i = out->outliers->size[0] * out->outliers->size[1];
  out->outliers->size[0] = 1;
  out->outliers->size[1] = r1->size[0];
  emxEnsureCapacity_real_T(&st, out->outliers, i, &md_emlrtRTEI);
  loop_ub = r1->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (r1->data[i] > seq->size[1]) {
      emlrtDynamicBoundsCheckR2012b(r1->data[i], 1, seq->size[1], &p_emlrtBCI,
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
      b_cv8[i] = '-';
    }
    b_st.site = &uhb_emlrtRSI;
    disp(&b_st, y_emlrt_marshallOut(&b_st, b_cv8), &c_emlrtMCI);
    ncomb = 100.0 * singsub / nselected;
    if (bonflevout) {
      b_st.site = &c_emlrtRSI;
      c_st.site = &wv_emlrtRSI;
      d_st.site = &fhb_emlrtRSI;
      e_st.site = &ghb_emlrtRSI;
      ncomb = g_emlrt_marshallIn(
          &d_st,
          d_feval(&d_st, d_emlrt_marshallOut(&d_st, b_cv3),
                  f_emlrt_marshallOut(1.0), w_emlrt_marshallOut(&e_st, b_cv10),
                  f_emlrt_marshallOut(ncomb), &y_emlrtMCI),
          "<output of feval>");
      emlrtDisplayR2012b(f_emlrt_marshallOut(ncomb), (char_T *)"ans",
                         &b_emlrtRTEI, &st);
    } else {
      b_st.site = &b_emlrtRSI;
      c_st.site = &wv_emlrtRSI;
      d_st.site = &fhb_emlrtRSI;
      e_st.site = &ghb_emlrtRSI;
      ncomb = g_emlrt_marshallIn(
          &d_st,
          d_feval(&d_st, d_emlrt_marshallOut(&d_st, b_cv3),
                  f_emlrt_marshallOut(1.0), p_emlrt_marshallOut(&e_st, b_cv9),
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
                                        &emlrtBCI, &st);
        }
        i1 = out->X->size[1];
      }
      nz = out->X->size[0] - 1;
      loop_ub = out->X->size[0];
      loop_ub_tmp = i1 - i;
      for (i1 = 0; i1 < loop_ub_tmp; i1++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          out->X->data[i2 + (nz + 1) * i1] =
              out->X->data[i2 + out->X->size[0] * (i + i1)];
        }
      }
      i = out->X->size[0] * out->X->size[1];
      out->X->size[0] = nz + 1;
      out->X->size[1] = loop_ub_tmp;
      emxEnsureCapacity_real_T(&st, out->X, i, &pd_emlrtRTEI);
    }
    /*  Store response */
    i = out->y->size[0] * out->y->size[1];
    out->y->size[0] = b_y->size[0];
    out->y->size[1] = 1;
    emxEnsureCapacity_real_T(&st, out->y, i, &od_emlrtRTEI);
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

/* End of code generation (LXS_wrapper.c) */
