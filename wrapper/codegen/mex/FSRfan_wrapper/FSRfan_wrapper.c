/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRfan_wrapper.c
 *
 * Code generation for function 'FSRfan_wrapper'
 *
 */

/* Include files */
#include "FSRfan_wrapper.h"
#include "FSRfan_wrapper_data.h"
#include "FSRfan_wrapper_emxutil.h"
#include "FSRfan_wrapper_mexutil.h"
#include "FSRfan_wrapper_types.h"
#include "LXS.h"
#include "Score.h"
#include "ScoreYJ.h"
#include "ScoreYJall.h"
#include "bc.h"
#include "cat.h"
#include "chkinputR.h"
#include "colon.h"
#include "eml_mtimes_helper.h"
#include "indexShapeCheck.h"
#include "int2str.h"
#include "linsolve.h"
#include "log.h"
#include "mtimes.h"
#include "normYJ.h"
#include "nullAssignment.h"
#include "power.h"
#include "rank.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "strcmp.h"
#include "subsets.h"
#include "mwmathutil.h"
#include <stdio.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    60,               /* lineNo */
    "FSRfan_wrapper", /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\FSRfan_wrapper.m" /* pathName
                                                                         */
};

static emlrtRSInfo b_emlrtRSI = {
    970,                                              /* lineNo */
    "FSRfan",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    968,                                              /* lineNo */
    "FSRfan",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    944,                                              /* lineNo */
    "FSRfan",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    933,                                              /* lineNo */
    "FSRfan",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    930,                                              /* lineNo */
    "FSRfan",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI = {
    908,                                              /* lineNo */
    "FSRfan",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pathName */
};

static emlrtRSInfo h_emlrtRSI = {
    885,                                              /* lineNo */
    "FSRfan",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI = {
    870,                                              /* lineNo */
    "FSRfan",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pathName */
};

static emlrtRSInfo j_emlrtRSI = {
    863,                                              /* lineNo */
    "FSRfan",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pathName */
};

static emlrtRSInfo k_emlrtRSI = {
    856,                                              /* lineNo */
    "FSRfan",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pathName */
};

static emlrtRSInfo l_emlrtRSI = {
    844,                                              /* lineNo */
    "FSRfan",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pathName */
};

static emlrtRSInfo m_emlrtRSI = {
    817,                                              /* lineNo */
    "FSRfan",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pathName */
};

static emlrtRSInfo n_emlrtRSI = {
    811,                                              /* lineNo */
    "FSRfan",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pathName */
};

static emlrtRSInfo o_emlrtRSI = {
    808,                                              /* lineNo */
    "FSRfan",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pathName */
};

static emlrtRSInfo p_emlrtRSI = {
    806,                                              /* lineNo */
    "FSRfan",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pathName */
};

static emlrtRSInfo q_emlrtRSI = {
    792,                                              /* lineNo */
    "FSRfan",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pathName */
};

static emlrtRSInfo r_emlrtRSI = {
    785,                                              /* lineNo */
    "FSRfan",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pathName */
};

static emlrtRSInfo s_emlrtRSI = {
    780,                                              /* lineNo */
    "FSRfan",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pathName */
};

static emlrtRSInfo t_emlrtRSI = {
    761,                                              /* lineNo */
    "FSRfan",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pathName */
};

static emlrtRSInfo u_emlrtRSI = {
    742,                                              /* lineNo */
    "FSRfan",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pathName */
};

static emlrtRSInfo v_emlrtRSI = {
    725,                                              /* lineNo */
    "FSRfan",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pathName */
};

static emlrtRSInfo w_emlrtRSI = {
    605,                                              /* lineNo */
    "FSRfan",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pathName */
};

static emlrtRSInfo x_emlrtRSI = {
    599,                                              /* lineNo */
    "FSRfan",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pathName */
};

static emlrtRSInfo ce_emlrtRSI = {
    35,        /* lineNo */
    "fprintf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" /* pathName
                                                                          */
};

static emlrtRSInfo fe_emlrtRSI = {
    22,    /* lineNo */
    "cat", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pathName
                                                                          */
};

static emlrtMCInfo emlrtMCI = {
    848,                                              /* lineNo */
    13,                                               /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtMCInfo b_emlrtMCI = {
    856,                                              /* lineNo */
    17,                                               /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtMCInfo c_emlrtMCI = {
    922,                                              /* lineNo */
    21,                                               /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtMCInfo d_emlrtMCI = {
    968,                                              /* lineNo */
    29,                                               /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtDCInfo emlrtDCI = {
    761,                                               /* lineNo */
    23,                                                /* colNo */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    805,                                               /* lineNo */
    19,                                                /* colNo */
    "la",                                              /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    824,                                               /* lineNo */
    19,                                                /* colNo */
    "lms",                                             /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtRTEInfo c_emlrtRTEI = {
    852,                                              /* lineNo */
    16,                                               /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtECInfo emlrtECI = {
    -1,                                               /* nDims */
    930,                                              /* lineNo */
    15,                                               /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtECInfo b_emlrtECI = {
    -1,                                               /* nDims */
    933,                                              /* lineNo */
    13,                                               /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    947,                                               /* lineNo */
    25,                                                /* colNo */
    "ord",                                             /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    947,                                               /* lineNo */
    28,                                                /* colNo */
    "ord",                                             /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtECInfo c_emlrtECI = {
    -1,                                               /* nDims */
    962,                                              /* lineNo */
    30,                                               /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtDCInfo b_emlrtDCI = {
    965,                                               /* lineNo */
    31,                                                /* colNo */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    965,                                               /* lineNo */
    31,                                                /* colNo */
    "Unlai",                                           /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtECInfo d_emlrtECI = {
    -1,                                               /* nDims */
    965,                                              /* lineNo */
    25,                                               /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtDCInfo c_emlrtDCI = {
    970,                                               /* lineNo */
    31,                                                /* colNo */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    970,                                               /* lineNo */
    31,                                                /* colNo */
    "Unlai",                                           /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    822,                                               /* lineNo */
    17,                                                /* colNo */
    "binit",                                           /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtECInfo e_emlrtECI = {
    -1,                                               /* nDims */
    822,                                              /* lineNo */
    9,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    827,                                               /* lineNo */
    17,                                                /* colNo */
    "binit",                                           /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtECInfo f_emlrtECI = {
    -1,                                               /* nDims */
    827,                                              /* lineNo */
    9,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    978,                                               /* lineNo */
    8,                                                 /* colNo */
    "Un",                                              /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = {
    742,                                               /* lineNo */
    35,                                                /* colNo */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = {
    742,                                               /* lineNo */
    35,                                                /* colNo */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    4                                                  /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    60,               /* lineNo */
    9,                /* colNo */
    "Un",             /* aName */
    "FSRfan_wrapper", /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\FSRfan_wrapper.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = {
    787,                                               /* lineNo */
    11,                                                /* colNo */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    787,                                               /* lineNo */
    11,                                                /* colNo */
    "seq100boo",                                       /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    811,                                               /* lineNo */
    22,                                                /* colNo */
    "la",                                              /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    808,                                               /* lineNo */
    18,                                                /* colNo */
    "la",                                              /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = {
    830,                                               /* lineNo */
    10,                                                /* colNo */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    830,                                               /* lineNo */
    10,                                                /* colNo */
    "bsbT",                                            /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    837,                                               /* lineNo */
    10,                                                /* colNo */
    "z",                                               /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    838,                                               /* lineNo */
    10,                                                /* colNo */
    "y",                                               /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    839,                                               /* lineNo */
    10,                                                /* colNo */
    "X",                                               /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    854,                                               /* lineNo */
    30,                                                /* colNo */
    "seq100boo",                                       /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    863,                                               /* lineNo */
    46,                                                /* colNo */
    "la",                                              /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    870,                                               /* lineNo */
    48,                                                /* colNo */
    "la",                                              /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    865,                                               /* lineNo */
    21,                                                /* colNo */
    "Sco",                                             /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = {
    865,                                               /* lineNo */
    21,                                                /* colNo */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    872,                                               /* lineNo */
    21,                                                /* colNo */
    "Sco",                                             /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = {
    872,                                               /* lineNo */
    21,                                                /* colNo */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    885,                                               /* lineNo */
    53,                                                /* colNo */
    "la",                                              /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    978,                                               /* lineNo */
    5,                                                 /* colNo */
    "Un",                                              /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    889,                                               /* lineNo */
    21,                                                /* colNo */
    "Sco",                                             /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = {
    889,                                               /* lineNo */
    21,                                                /* colNo */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    890,                                               /* lineNo */
    21,                                                /* colNo */
    "Scop",                                            /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = {
    890,                                               /* lineNo */
    21,                                                /* colNo */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    891,                                               /* lineNo */
    21,                                                /* colNo */
    "Scon",                                            /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = {
    891,                                               /* lineNo */
    21,                                                /* colNo */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    893,                                               /* lineNo */
    25,                                                /* colNo */
    "Scob",                                            /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = {
    893,                                               /* lineNo */
    25,                                                /* colNo */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    950,                                               /* lineNo */
    22,                                                /* colNo */
    "bsbT",                                            /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    953,                                               /* lineNo */
    22,                                                /* colNo */
    "X",                                               /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    954,                                               /* lineNo */
    22,                                                /* colNo */
    "y",                                               /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    955,                                               /* lineNo */
    22,                                                /* colNo */
    "z",                                               /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    962,                                               /* lineNo */
    26,                                                /* colNo */
    "seq",                                             /* aName */
    "FSRfan",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtRTEInfo wb_emlrtRTEI = {
    599,                                              /* lineNo */
    2,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = {
    599,                                              /* lineNo */
    4,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = {
    737,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = {
    739,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = {
    742,                                              /* lineNo */
    17,                                               /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = {
    742,                                              /* lineNo */
    31,                                               /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = {
    60,               /* lineNo */
    9,                /* colNo */
    "FSRfan_wrapper", /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\FSRfan_wrapper.m" /* pName
                                                                         */
};

static emlrtRTEInfo fc_emlrtRTEI = {
    761,                                              /* lineNo */
    6,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo gc_emlrtRTEI = {
    761,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo hc_emlrtRTEI = {
    767,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = {
    768,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = {
    769,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = {
    780,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo lc_emlrtRTEI =
    {
        84,      /* lineNo */
        5,       /* colNo */
        "colon", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pName
                                                                          */
};

static emlrtRTEInfo mc_emlrtRTEI =
    {
        105,     /* lineNo */
        9,       /* colNo */
        "colon", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pName
                                                                          */
};

static emlrtRTEInfo nc_emlrtRTEI =
    {
        88,      /* lineNo */
        5,       /* colNo */
        "colon", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pName
                                                                          */
};

static emlrtRTEInfo oc_emlrtRTEI = {
    784,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = {
    785,                                              /* lineNo */
    8,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = {
    786,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = {
    787,                                              /* lineNo */
    11,                                               /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = {
    598,                                              /* lineNo */
    11,                                               /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = {
    985,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = {
    806,                                              /* lineNo */
    13,                                               /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo vc_emlrtRTEI = {
    999,                                              /* lineNo */
    5,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo wc_emlrtRTEI = {
    996,                                              /* lineNo */
    9,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo xc_emlrtRTEI = {
    819,                                              /* lineNo */
    9,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo yc_emlrtRTEI = {
    1000,                                             /* lineNo */
    5,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = {
    824,                                              /* lineNo */
    9,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo bd_emlrtRTEI = {
    1001,                                             /* lineNo */
    5,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = {
    830,                                              /* lineNo */
    10,                                               /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = {
    837,                                              /* lineNo */
    5,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = {
    838,                                              /* lineNo */
    5,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = {
    839,                                              /* lineNo */
    5,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = {
    842,                                              /* lineNo */
    5,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = {
    978,                                              /* lineNo */
    5,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo id_emlrtRTEI = {
    917,                                              /* lineNo */
    17,                                               /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = {
    924,                                              /* lineNo */
    17,                                               /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = {
    930,                                              /* lineNo */
    15,                                               /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = {
    939,                                              /* lineNo */
    17,                                               /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo md_emlrtRTEI = {
    27,     /* lineNo */
    6,      /* colNo */
    "sort", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m" /* pName
                                                                         */
};

static emlrtRTEInfo od_emlrtRTEI = {
    949,                                              /* lineNo */
    17,                                               /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = {
    950,                                              /* lineNo */
    22,                                               /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = {
    953,                                              /* lineNo */
    17,                                               /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = {
    954,                                              /* lineNo */
    17,                                               /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = {
    955,                                              /* lineNo */
    17,                                               /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo td_emlrtRTEI = {
    742,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo ud_emlrtRTEI = {
    792,                                              /* lineNo */
    2,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo vd_emlrtRTEI = {
    908,                                              /* lineNo */
    14,                                               /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo wd_emlrtRTEI = {
    962,                                              /* lineNo */
    21,                                               /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo xd_emlrtRTEI = {
    1,                /* lineNo */
    16,               /* colNo */
    "FSRfan_wrapper", /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\FSRfan_wrapper.m" /* pName
                                                                         */
};

static emlrtRTEInfo yd_emlrtRTEI = {
    739,                                              /* lineNo */
    6,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRTEInfo ae_emlrtRTEI = {
    817,                                              /* lineNo */
    9,                                                /* colNo */
    "FSRfan",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pName */
};

static emlrtRSInfo ut_emlrtRSI = {
    848,                                              /* lineNo */
    "FSRfan",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pathName */
};

static emlrtRSInfo vt_emlrtRSI = {
    968,                                              /* lineNo */
    "FSRfan",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pathName */
};

static emlrtRSInfo wt_emlrtRSI = {
    856,                                              /* lineNo */
    "FSRfan",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pathName */
};

static emlrtRSInfo xt_emlrtRSI = {
    922,                                              /* lineNo */
    "FSRfan",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRfan.m" /* pathName */
};

/* Function Declarations */
static void b_disp(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                   const mxArray *d, emlrtMCInfo *location);

static const mxArray *b_emlrt_marshallOut(const real_T u);

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[63]);

static const mxArray *h_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[45]);

static const mxArray *i_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u_data[],
                                          const int32_T u_size[2]);

static const mxArray *j_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[10]);

static const mxArray *k_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[96]);

/* Function Definitions */
static void b_disp(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                   const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 3, &pArrays[0],
                        (const char_T *)"disp", true, location);
}

static const mxArray *b_emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[63])
{
  static const int32_T iv[2] = {1, 63};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 63, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *h_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[45])
{
  static const int32_T iv[2] = {1, 45};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 45, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *i_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u_data[],
                                          const int32_T u_size[2])
{
  const mxArray *m;
  const mxArray *y;
  int32_T iv[2];
  y = NULL;
  iv[0] = 1;
  iv[1] = u_size[1];
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, u_size[1], m, &u_data[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *j_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[10])
{
  static const int32_T iv[2] = {1, 10};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 10, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *k_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[96])
{
  static const int32_T iv[2] = {1, 96};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 96, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

void FSRfan_wrapper(const emlrtStack *sp, const emxArray_real_T *y,
                    const emxArray_real_T *X, boolean_T intercept,
                    boolean_T nocheck, const emxArray_real_T *la, real_T h,
                    real_T nsamp, const emxArray_real_T *lms, real_T init,
                    const emxArray_char_T *family, boolean_T msg,
                    struct_FSRfan_T *out)
{
  static const char_T b_cv4[96] = {
      'R', 'a', 'n', 'k', ' ', 'p', 'r', 'o', 'b', 'l', 'e', 'm', ' ', 'i',
      'n', ' ', 's', 't', 'e', 'p', ' ', '%', 'd', ':', ' ', 'B', 'e', 't',
      'a', ' ', 'c', 'o', 'e', 'f', 'f', 'i', 'c', 'i', 'e', 'n', 't', 's',
      ' ', 'a', 'r', 'e', ' ', 'u', 's', 'e', 'd', ' ', 'f', 'r', 'o', 'm',
      ' ', 't', 'h', 'e', ' ', 'm', 'o', 's', 't', ' ', 'r', 'e', 'c', 'e',
      'n', 't', ' ', 'c', 'o', 'r', 'r', 'e', 'c', 't', 'l', 'y', ' ', 'c',
      'o', 'm', 'p', 'u', 't', 'e', 'd', ' ', 's', 't', 'e', 'p'};
  static const char_T b_cv1[63] = {
      'A', 't', 't', 'e', 'n', 't',  'i', 'o', 'n', ' ', ':', ' ', 'i',
      'n', 'i', 't', ' ', 's', 'h',  'o', 'u', 'l', 'd', ' ', 'b', 'e',
      ' ', 'l', 'a', 'r', 'g', 'e',  'r', ' ', 't', 'h', 'a', 'n', ' ',
      'p', '+', '1', '.', ' ', '\\', 'n', 'I', 't', ' ', 'i', 's', ' ',
      's', 'e', 't', ' ', 't', 'o',  ' ', 'p', '+', '2', '.'};
  static const char_T b_cv2[45] = {'I', 'n', 'i', 't', 'i', 'a', 'l', ' ', 's',
                                   'u', 'b', 's', 'e', 't', ' ', 'd', 'o', 'e',
                                   's', ' ', 'n', 'o', 't', ' ', 'f', 'o', 'r',
                                   'm', ' ', 'f', 'u', 'l', 'l', ' ', 'r', 'a',
                                   'n', 'k', ' ', 'm', 'a', 't', 'r', 'i', 'x'};
  static const char_T b_cv5[44] = {
      'W', 'a', 'r', 'n', 'i', 'n', 'g', ':', ' ', 'i', 'n', 't', 'e', 'r', 'c',
      'h', 'a', 'n', 'g', 'e', ' ', 'g', 'r', 'e', 'a', 't', 'e', 'r', ' ', 't',
      'h', 'a', 'n', ' ', '1', '0', ' ', 'w', 'h', 'e', 'n', ' ', 'm', '='};
  static const char_T b_cv3[10] = {'F', 'S', 'R', ':', 'F',
                                   'S', 'R', 'f', 'a', 'n'};
  static const char_T b_cv[7] = {'f', 'p', 'r', 'i', 'n', 't', 'f'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_boolean_T *bsbT;
  emxArray_boolean_T *oldbsbT;
  emxArray_boolean_T *r1;
  emxArray_boolean_T *seq100boo;
  emxArray_int32_T *iidx;
  emxArray_int32_T *r2;
  emxArray_real_T *Unlai;
  emxArray_real_T *Xb;
  emxArray_real_T *b_b;
  emxArray_real_T *b_r;
  emxArray_real_T *b_y;
  emxArray_real_T *blast;
  emxArray_real_T *bsb;
  emxArray_real_T *nsampArray;
  emxArray_real_T *r;
  emxArray_real_T *r3;
  emxArray_real_T *seq;
  emxArray_real_T *seq100;
  emxArray_real_T *unit;
  emxArray_real_T *yb;
  emxArray_real_T *z;
  emxArray_real_T *zb;
  struct_T expl_temp;
  real_T outSCpn_Score_data[4];
  real_T BoxCox;
  real_T b;
  real_T b_init;
  real_T n;
  real_T outSC_Score_data;
  real_T p;
  int32_T b_tmp_size[2];
  int32_T sizes[2];
  int32_T tmp_size[2];
  int32_T b_i;
  int32_T b_loop_ub_tmp;
  int32_T b_n;
  int32_T end;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T irank;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T mm;
  uint32_T b_mm;
  char_T c_tmp_data[54];
  char_T b_tmp_data[12];
  char_T tmp_data[10];
  int8_T input_sizes_idx_1;
  boolean_T empty_non_axis_sizes;
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
  /*  Wrapper function for FSRfan. NV pair names are not taken as */
  /*  inputs. Instead, just the values are taken as inputs. */
  /*  Required input arguments */
  /*  y: a column vector of doubles of any length */
  /*  ARGS{1}{1} = coder.typeof(0,[Inf 1],[1 0]); */
  /*  X: an array of doubles of any dimensions */
  /*  ARGS{1}{2} = coder.typeof(0,[Inf Inf],[1 1]); */
  /*  Optional input arguments (name / pairs) */
  /*  intercept */
  /*  Optional input arguments (name / pairs) */
  /*  nocheck is a boolean */
  /*  la: a column vector of doubles of any length */
  /*  h a scalar double */
  /*  nsamp: a scalar of type double */
  /*  lms: an array of doubles of any dimensions */
  /*  even if generally will be just a scalar of type double */
  /*  init a scalar double */
  /*  family a char */
  /*  this char can only contain  */
  /*  'BoxCox'  'YJ', 'YJpn' or 'YJall'. */
  /*  This is something to ask RL */
  /*  assert(size(family,1) == 1); */
  /*  assert(all(size(family) <= [Inf Inf])); */
  /*  msg is a boolean */
  st.site = &emlrtRSI;
  /* FSRfan monitors the values of the score test statistic for each lambda */
  /*  */
  /* <a href="matlab: docsearchFS('FSRfan')">Link to the help function</a> */
  /*  */
  /*  The transformations for negative and positive responses were determined */
  /*  by Yeo and Johnson (2000) by imposing the smoothness condition that the */
  /*  second derivative of zYJ(λ) with respect to y be smooth at y = 0. However
   */
  /*  some authors, for example Weisberg (2005), query the physical */
  /*  interpretability of this constraint which is oftern violated in data */
  /*  analysis. Accordingly, Atkinson et al (2019) and (2020) extend the */
  /*  Yeo-Johnson transformation to allow two values of the transformations */
  /*  parameter: $\lambda_N$ for negative observations and $\lambda_P$ for */
  /*  non-negative ones. */
  /*  FSRfan monitors: */
  /*  1) the t test associated with the constructed variable computed assuming
   */
  /*  the same transformation parameter for positive and negative observations
   */
  /*  fixed. In short we call this test, "global score test for positive */
  /*  observations". */
  /*  2) the t test associated with the constructed variable computed assuming
   */
  /*  a different transformation for positive observations keeping the value of
   */
  /*  the transformation parameter for negative observations fixed. In short we
   */
  /*  call this test, "test for positive observations". */
  /*  3) the t test associated with the constructed variable computed assuming
   */
  /*  a different transformation for negative observations keeping the value of
   */
  /*  the transformation parameter for positive observations fixed. In short we
   */
  /*  call this test, "test for negative observations". */
  /*  4) the F test for the joint presence of the two constructed variables */
  /*  described in points 2) and 3. */
  /*  4) the F likelihood ratio test based on the MLE of $\lambda_P$ and */
  /*  $\lambda_N$. In this case the residual sum of squares of the null model */
  /*  bsaed on a single trasnformation parameter $\lambda$ is compared with the
   */
  /*  residual sum of squares of the model based on data transformed data using
   */
  /*  MLE of $\lambda_P$ and $\lambda_N$. */
  /*  */
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
  /*                Missing values (NaN's) and infinite values */
  /*                (Inf's) are allowed, since observations (rows) with missing
   * or */
  /*                infinite values will automatically be excluded from the */
  /*                computations. NOTICE THAT THE INTERCEPT MUST ALWAYS BE
   * INCLUDED. */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*  */
  /*         family :   string which identifies the family of transformations
   * which */
  /*                    must be used. Character. Possible values are 'BoxCox' */
  /*                    (default), 'YJ', 'YJpn' or 'YJall'. */
  /*                    The Box-Cox family of power transformations equals */
  /*                    $(y^{\lambda}-1)/\lambda$ for $\lambda$ not equal to
   * zero, */
  /*                    and $\log(y)$ if $\lambda = 0$. */
  /*                    The Yeo-Johnson (YJ) transformation is the Box-Cox */
  /*                    transformation of $y+1$ for nonnegative values, and of
   */
  /*                    $|y|+1$ with parameter $2-\lambda$ for $y$ negative. */
  /*                    Remember that BoxCox can be used just */
  /*                    if input y is positive. Yeo-Johnson family of */
  /*                    transformations does not have this limitation. */
  /*                    If family is 'YJpn' Yeo-Johnson family is applied but in
   */
  /*                    this case it is also possible to monitor (in the output
   */
  /*                    arguments out.Scorep and out.Scoren) the score test */
  /*                    respectively for positive and negative observations. */
  /*                    If family is 'YJall', it is also possible to monitor */
  /*                    the joint F test for the presence of the two */
  /*                    constructed variables for positive and negative */
  /*                    observations. */
  /*                    Example - 'family','YJ' */
  /*                    Data Types - char */
  /*  */
  /*            h   :   The number of observations that have determined the */
  /*                    least trimmed (median of) squares estimator. Integer. */
  /*                    Generally h is an integer greater or equal than */
  /*                    [(n+size(X,2)+1)/2] but smaller then n */
  /*                    Example - 'h',5 */
  /*                    Data Types - double */
  /*  */
  /*        init    :   Search initialization. Scalar. */
  /*                    It specifies the initial subset size to start */
  /*                    monitoring the value of the score test, if init is not
   */
  /*                    specified it will be set equal to: */
  /*                     p+1, if the sample size is smaller than 40; */
  /*                     min(3*p+1,floor(0.5*(n+p+1))), otherwise. */
  /*                     Example - 'init',100 starts monitoring from step m=100
   */
  /*                     Data Types - double */
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
  /*            la  :   values of the transformation parameter for which it is
   */
  /*                    necessary to compute the score test. Vector. */
  /*                    Default value of lambda is la=[-1 -0.5 0 0.5 1]; that */
  /*                    is the five most common values of lambda */
  /*                    Example - 'la',[-1 -0.5] */
  /*                    Data Types - double */
  /*  */
  /*        lms     :   Criterion to use to find the initlal */
  /*                  subset to initialize the search. Scalar or Vector. */
  /*                  If lms=1 (default) Least Median of Squares is */
  /*                  computed, else Least trimmed of Squares is computed. */
  /*                  If, lms is matrix with size */
  /*                  p-1+intercept-by-length(la) it contains in column */
  /*                  j=1,..., lenght(la) the list of units forming the initial
   */
  /*                  subset for the search associated with la(j). In this last
   */
  /*                  case previous input option nsamp is ignored. */
  /*                  Example - 'lms',1 */
  /*                  Data Types - double */
  /*  */
  /*          msg   : Level of output to display. Boolean. */
  /*                    Boolean scalar which controls whether to display or not
   */
  /*                    messages on the screen. */
  /*                    If msg==true (default) messages are */
  /*                    displayed on the screen about estimated time to compute
   */
  /*                    the LMS (LTS) for each value of lambda else no message
   */
  /*                    is displayed on the screen */
  /*                   Example - 'msg',false */
  /*                   Data Types - logical */
  /*  */
  /*        nocheck :   Check input arguments. Boolean. */
  /*                    If nocheck is equal to true no check is performed */
  /*                    on matrix y and matrix X. Notice that y and X are left
   */
  /*                    unchanged. In other words the additional column of ones
   */
  /*                    for the intercept is not added. As default
   * nocheck=false. */
  /*                    Example - 'nocheck',true */
  /*                    Data Types - boolean */
  /*  */
  /*        nsamp   :   Number of subsamples which will be extracted to find */
  /*                    the robust estimator. Scalar. */
  /*                    If nsamp=0 all subsets will be extracted. They will be
   */
  /*                    (n choose p). Remark: if the number of all possible */
  /*                    subset is <1000 the default is to extract all subsets */
  /*                    otherwise just 1000. If nsamp is a matrix of size */
  /*                    r-by-p, it contains in the rows the subsets which sill
   */
  /*                    have to be extracted. For example, if p=3 and nsamp=[ 2
   */
  /*                    4 9; 23 45 49; 90 34 1]; the first subset is made up of
   */
  /*                    units [2 4 9], the second subset of units [23 45 49] */
  /*                    and the third subset of units [90 34 1]; */
  /*                    Example - 'nsamp',1000 */
  /*                    Data Types - double */
  /*  */
  /*       scoremle: likelihood ratio test for the two different transformation
   */
  /*                 parameters $\lambda_P$ and $\lambda_N$. Boolean. */
  /*                 If scoremle is true it is possible to compute the */
  /*                 likelihood ratio test. In this case the residual sum of */
  /*                 squares of the null model bsaed on a single trasnformation
   */
  /*                 parameter $\lambda$ is compared with the residual sum of */
  /*                 squares of the model based on data transformed data using
   */
  /*                 MLE of $\lambda_P$ and $\lambda_N$. If scoremle is true it
   */
  /*                 is possible through following option usefmin, to control */
  /*                 the parameters of the optmization routine. */
  /*                Example - 'scoremle',true */
  /*                Data Types - logical */
  /*  */
  /*     usefmin :  use solver to find MLE of lambda. Boolean or struct. */
  /*                This option takes effect only when input option 'family' is
   */
  /*                'YJpn'  or 'YJall'. If usefmin is true or usefmin is a */
  /*                struct it is possible to use MATLAB solvers fminsearch or */
  /*                fminunc to find the maximum likelihood estimates of */
  /*                $\lambda_P$ and $\lambda_N$. The default value of usefmin */
  /*                is false that is solver is not used and the likelihood is */
  /*                evaluated at the grid of points with steps 0.01. */
  /*                If usefmin is a structure it may contain the following */
  /*                fields: */
  /*                usefmin.MaxIter = Maximum number of iterations (default is
   * 1000). */
  /*                usefmin.TolX   = Termination tolerance for the parameters */
  /*                    (default is 1e-7). */
  /*                usefmin.solver = name of the solver. Possible values are */
  /*                    'fminsearch' (default) and 'fminunc'. fminunc needs the
   */
  /*                    optimization toolbox. */
  /*                usefmin.displayLevel = amount of information displayed by */
  /*                    the algorithm. possible values are 'off' (displays no */
  /*                    information, this is the default), 'final' (displays */
  /*                    just the final output) and 'iter' (displays iterative */
  /*                    output to the command window). */
  /*                Example - 'usefmin',true */
  /*                Data Types - boolean or struct */
  /*  */
  /*        plots   :  Plot on the screen. Scalar. */
  /*                    If plots=1 the fan plot is produced */
  /*                    else (default) no plot is produced. */
  /*                    Example - 'plots',1 */
  /*                    Data Types - double */
  /*                    REMARK: all the following options work only if plots=1
   */
  /*  */
  /*  */
  /*        conflev :   Confidence level. Scalar or vector. Confidence level */
  /*                    for the bands (default is 0.99, that is we plot two */
  /*                    horizontal lines in correspondence of value -2.58 and */
  /*                    2.58). */
  /*                    Example - 'conflev',[0.9 0.95 0.99] */
  /*                    Data Types - double */
  /*  */
  /*        FontSize:   font size of the labels of  the axes. Scalar. */
  /*                    Default value is 12. */
  /*                    Example - 'FontSize',20 */
  /*                    Data Types - double */
  /*  */
  /*        labx    :   a label for the x-axis. Character. */
  /*                    default: 'Subset size m' */
  /*                    Example - 'labx','my labx' */
  /*                    Data Types - char */
  /*  */
  /*        laby    :   a label for the y-axis. Character. */
  /*                    default:'Score test statistic' */
  /*                    Example - 'laby','my laby' */
  /*                    Data Types - char */
  /*  */
  /*        lwd     :   linewidth of the curves which */
  /*                    contain the score test. Scalar. */
  /*                    Default line width=2. */
  /*                    Example - 'lwd',5 */
  /*                    Data Types - double */
  /*  */
  /*        lwdenv  :   width of the lines associated */
  /*                    with the envelopes. Scalar. */
  /*                    Default is lwdenv=1. */
  /*                    Example - 'lwdenv',5 */
  /*                    Data Types - double */
  /*  */
  /*     SizeAxesNum:   Scalar which controls the size of the numbers of the */
  /*                    axes. Scalar. */
  /*                    Default value is 10. */
  /*                   Example - 'SizeAxesNum',12 */
  /*                   Data Types - double */
  /*  */
  /*        tag     :   handle of the plot which is about to be created. */
  /*                    Character. The default is to use tag 'pl_fan'. Notice */
  /*                    that if the program finds a plot which has a tag equal
   */
  /*                    to the one specified by the user, then the output of */
  /*                    the new plot overwrites the existing one in the same */
  /*                    window else a new window is created Example - */
  /*                    'tag','mytag' Data Types - char */
  /*  */
  /*        titl    :   a label for the title. Character. */
  /*                    default: 'Fan plot' */
  /*                    Example - 'titl','my title' */
  /*                    Data Types - char */
  /*  */
  /*        xlimx   :   Minimum and maximum of the x axis. Vector. */
  /*                    Default value is [init n] */
  /*                    Example - 'xlimx',[0 1] */
  /*                    Data Types - double */
  /*  */
  /*        ylimy   :  Minimum and maximum of the y axis. Vector. */
  /*                    Default value for ylimy(1)=max(min(score_test),-20). */
  /*                    Default value for ylimy(2)=min(max(score_test),20). */
  /*                    Example - 'ylimy',[0 1] */
  /*                    Data Types - double */
  /*  */
  /*   Output: */
  /*  */
  /*          out:   structure which contains the following fields */
  /*  */
  /*   out.Score  = (n-init+1) x length(la)+1 matrix containing the values of
   * the */
  /*                score test for each value of the transformation parameter:
   */
  /*                1st col = fwd search index; */
  /*                2nd col = value of the score test in each step of the */
  /*                fwd search for la(1); */
  /*                ........... */
  /*                end col = value of the score test in each step of the fwd */
  /*                search for la(end). */
  /*   out.Scorep = (n-init+1) x length(la)+1 matrix containing the values of
   * the */
  /*                score test for positive observations for each value of the
   */
  /*                transformation parameter. */
  /*                1st col = fwd search index; */
  /*                2nd col = value of the (positive) score test in each step */
  /*                of the fwd search for la(1); */
  /*                ........... */
  /*                end col = value of the (positive) score test in each step */
  /*                of the fwd search for la(end). */
  /*                Note that this output is present only if input option */
  /*                family is 'YJpn' or 'YJall'. */
  /*  out.Scoren  = (n-init+1) x length(la)+1 matrix containing the values of
   * the */
  /*                score test for positive observations for each value of the
   */
  /*                transformation parameter: */
  /*                1st col = fwd search index; */
  /*                2nd col = value of the (negative) score test in each step */
  /*                of the fwd search for la(1); */
  /*                ........... */
  /*                end col = value of the (negative) score test in each step */
  /*                of the fwd search for la(end). */
  /*                Note that this output is present only if input option */
  /*                family is 'YJpn' or 'YJall'. */
  /*  out.Scoreb  = (n-init+1) x length(la)+1 matrix containing the values of
   * the */
  /*                score test for the joint presence of both constructed */
  /*                variables (associated with positive and negative */
  /*                observations) for each value of the transformation */
  /*                parameter.  In this case the reference distribution is the
   */
  /*                $F$ with 2 and subset_size-p degrees of freedom. */
  /*                1st col = fwd search index (subset_size); */
  /*                2nd col = value of the score test in each step */
  /*                of the fwd search for la(1); */
  /*                ........... */
  /*                end col = value of the score test in each step */
  /*                of the fwd search for la(end). */
  /*                Note that this output is present only if input option */
  /*                family is 'YJall' */
  /*  out.Scoremle  = (n-init+1) x length(la)+1 matrix containing the values of
   * the */
  /*                (score) likelihood ratio test for the joint presence of both
   * constructed */
  /*                variables (associated with positive and negative */
  /*                observations) for each value of the transformation */
  /*                parameter.  In this case the reference distribution is the
   */
  /*                $F$ with 2 and subset_size-p degrees of freedom. */
  /*                1st col = fwd search index (subset_size); */
  /*                2nd col = value of the score test in each step */
  /*                of the fwd search for la(1); */
  /*                ........... */
  /*                end col = value of the score test in each step */
  /*                of the fwd search for la(end). */
  /*                Note that this output is present only if input option */
  /*                scoremle is true */
  /*     out.laMLE = (n-init+1) x 2*length(la)+1 matrix containing the values of
   * the */
  /*                maximum ikelihood estimate of laP and laN. */
  /*                Columns 2:3 are associated with  the search which has */
  /*                ordered the data using to la(1); */
  /*                ......... */
  /*                Columns 2*length(la):2*length(la)+1 are associated with */
  /*                the search which has ordered the data using to */
  /*                la(length(la)). */
  /*                Note that
   * out.laMLE(end,2)=out.laMLE(end,2)=...=out.laMLE(end,2*length(la)) */
  /*                because all these variables contain the MLE of laP based on
   */
  /*                all the observations. Similarly notice that */
  /*                out.laMLE(end,3)=out.laMLE(end,5)=...=out.laMLE(end,2*length(la)+1)
   */
  /*                because all these variables contain the MLE of laN based on
   */
  /*                all the observations. This output is present only if input
   */
  /*                option scoremle is true. */
  /*   out.la     = vector containing the values of lambda for which fan plot */
  /*                is constructed */
  /*   out.bs     = matrix of size p x length(la) containing the units forming
   */
  /*                the initial subset for each value of lambda */
  /*   out.Un     = cell of size length(la). */
  /*                out.Un{i} is a n-init) x 11 matrix which contains the */
  /*                unit(s) included in the subset at each step in the search */
  /*                associated with la(i). */
  /*                REMARK: in every step the new subset is compared with the
   * old subset. Un */
  /*                contains the unit(s) present in the new subset but not in */
  /*                the old one Un(1,:) for example contains the unit included
   */
  /*                in step init+1 ... Un(end,2) contains the units included in
   * the */
  /*                final step of the search */
  /*   out.y      = A vector with n elements that contains the response */
  /*                variable which has been used */
  /*   out.X      = Data matrix of explanatory variables */
  /*                which has been used (it also contains the column of ones if
   */
  /*                input option intercept was missing or equal to 1) */
  /*  */
  /*  */
  /*  See also: Score, ScoreYJ, ScoreYJpn */
  /*  */
  /*  References: */
  /*  */
  /*  Atkinson, A.C. and Riani, M. (2000), "Robust Diagnostic Regression */
  /*  Analysis", Springer Verlag, New York. */
  /*  Atkinson, A.C. and Riani, M. (2002a), Tests in the fan plot for robust, */
  /*  diagnostic transformations in regression, "Chemometrics and Intelligent */
  /*  Laboratory Systems", Vol. 60, pp. 87-100. */
  /*  Atkinson, A.C. Riani, M., Corbellini A. (2019), The analysis of */
  /*  transformations for profit-and-loss data, Journal of the Royal */
  /*  Statistical Society, Series C, "Applied Statistics", */
  /*  https://doi.org/10.1111/rssc.12389 */
  /*  Atkinson, A.C. Riani, M. and Corbellini A. (2020), The Box-Cox */
  /*  Transformation: Review and Extensions, "Statistical Science", in press. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('FSRfan')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     %% FSRfan with all default options. */
  /*     % Store values of the score test statistic */
  /*     % for the five most common values of $\lambda$. */
  /*     % Produce also a fan plot and display it on the screen. */
  /*     % Common part to all examples: load wool dataset. */
  /*     XX=load('wool.txt'); */
  /*     y=XX(:,end); */
  /*     X=XX(:,1:end-1); */
  /*     % Function FSRfan stores the score test statistic. */
  /*     % In this case we use the five most common values of lambda are
   * considered */
  /*     [out]=FSRfan(y,X); */
  /*     fanplot(out); */
  /*     %The fan plot shows the log transformation is diffused throughout the
   * data and does not depend on the presence of particular observations. */
  /* } */
  /* { */
  /*     % FSRfan with optional arguments. */
  /*     % Produce a personalized fan plot with required font sizes */
  /*     % for labels and axes. */
  /*     XX=load('wool.txt'); */
  /*     y=XX(:,end); */
  /*     X=XX(:,1:end-1); */
  /*     [out]=FSRfan(y,X,'plots',1,'FontSize',16,'SizeAxesNum',16); */
  /* } */
  /* { */
  /*     % Example specifying $\lambda$. */
  /*     % Produce a fan plot for each value of $\lambda$ inside vector la. */
  /*     % Extract in matrix Un the units which entered the search in each step
   */
  /*     XX=load('wool.txt'); */
  /*     y=XX(:,end); */
  /*     X=XX(:,1:end-1); */
  /*     la=[-1 -0.5 0 0.5]; */
  /*     [out]=FSRfan(y,X,'la',la,'plots',1); */
  /*     Unsel=cell2mat(out.Un); */
  /*     lla=length(la); */
  /*     nr=size(Unsel,1)/lla; */
  /*     Un=[Unsel(1:nr,1) reshape(Unsel(:,2),nr,lla)]; */
  /* } */
  /* { */
  /*     % Example specifying the confidence level and the initial */
  /*     % starting point for monitoring. */
  /*     % Construct fan plot specifying the confidence level and the initial */
  /*     % starting point for monitoring. */
  /*     XX=load('wool.txt'); */
  /*     y=XX(:,end); */
  /*     X=XX(:,1:end-1); */
  /*     [out]=FSRfan(y,X,'init',size(X,2)+2,'nsamp',0,'conflev',0.95,'plots',1);
   */
  /* } */
  /* { */
  /*     % Example with starting point based on LTS. */
  /*     % Extraction of all subsamples, construct */
  /*     % fan plot specifying the confidence level and the initial starting */
  /*     % point for monitoring based on p+2 observations strong line width for
   */
  /*     % lines associated with the confidence bands. */
  /*     XX=load('wool.txt'); */
  /*     y=XX(:,end); */
  /*     X=XX(:,1:end-1); */
  /*     [out]=FSRfan(y,X,'init',size(X,2)+2,'nsamp',0,'lms',0,'lwdenv',3,'plots',1);
   */
  /* } */
  /* { */
  /*     %% Fan plot using fidelity cards data. */
  /*     % In the example, la is the vector contanining the most common values
   */
  /*     % of the transformation parameter. */
  /*     % Store the score test statistics for the specified values of lambda */
  /*     % and automatically produce the fan plot */
  /*     XX=load('loyalty.txt'); */
  /*     namey='Sales' */
  /*     y=XX(:,end); */
  /*     nameX={'Number of visits', 'Age', 'Number of persons in the family'};
   */
  /*     X=XX(:,1:end-1); */
  /*     % la = vector contanining the most common values of the transformation
   */
  /*     % parameter */
  /*     la=[0 1/3 0.4 0.5]; */
  /*     % Store the score test statistics for the specified values of lambda */
  /*     % and automatically produce the fan plot */
  /*     [out]=FSRfan(y,X,'la',la,'init',size(X,2)+2,'plots',1,'lwd',3); */
  /*     % The fan plot shows the even if the third root is the best value of
   * the */
  /*     % transformation parameter at the end of the search in earlier steps it
   */
  /*     % lies very close to the upper rejection region. The best value of the
   */
  /*     % transformation parameter seems to be the one associated with l=0.4 */
  /*     % which is always the confidence bands but at the end of search, due to
   */
  /*     % the presence of particular observations it goes below the lower */
  /*     % rejection line. */
  /* } */
  /* { */
  /*     %% Compare BoxCox with Yeo and Johnson transformation. */
  /*     % Store values of the score test statistic */
  /*     % for the five most common values of $\lambda$. */
  /*     % Produce also a fan plot and display it on the screen. */
  /*     % Common part to all examples: load wool dataset. */
  /*     XX=load('wool.txt'); */
  /*     y=XX(:,end); */
  /*     X=XX(:,1:end-1); */
  /*     % Store the score test statistic using Box Cox transformation. */
  /*     [outBC]=FSRfan(y,X,'nsamp',0); */
  /*     % Store the score test statistic using Yeo and Johnson transformation.
   */
  /*     [outYJ]=FSRfan(y,X,'family','YJ','nsamp',0); */
  /*     fanplot(outBC,'titl','Box Cox'); */
  /*     fanplot(outYJ,'titl','Yeo and Johnson','tag','YJ'); */
  /*     disp('Maximum difference in absolute value') */
  /*     disp(max(max(abs(outYJ.Score-outBC.Score)))) */
  /* } */
  /* { */
  /*     %% Example of monitoring of score test for positive and negative
   * obseravations. */
  /*     rng('default') */
  /*     rng(10) */
  /*     close all */
  /*     n=200; */
  /*  */
  /*     X=randn(n,3); */
  /*     beta=[ 1; 1; 1]; */
  /*     sig=0.5; */
  /*     y=X*beta+sig*randn(n,1); */
  /*  */
  /*     disp('Fit in the true scale') */
  /*     disp('R2 of the model in the true scale') */
  /*     if verLessThanFS(8.1) */
  /*         out=regstats(y,X,'linear',{'rsquare'}); */
  /*         disp(out.rsquare) */
  /*     else */
  /*         outlmori=fitlm(X,y); */
  /*         disp(outlmori.Rsquared.Ordinary) */
  /*     end */
  /*     [~,~,BigAx]=yXplot(y,X,'tag','ori'); */
  /*     title(BigAx,'Data in the original scale') */
  /*  */
  /*  */
  /*     % Find the data to transform */
  /*     la=-0.25; */
  /*     ytra=normYJ(y,[],la,'inverse',true); */
  /*     if any(isnan(ytra)) */
  /*         disp('response with missing values') */
  /*     end */
  /*  */
  /*     disp('Fit in the transformed scale') */
  /*     disp('R2 of the model in the wrong (inverse) scale') */
  /*     if verLessThanFS(8.1) */
  /*         out=regstats(ytra,X,'linear',{'rsquare'}); */
  /*         disp(out.rsquare) */
  /*     else */
  /*         outlmtra=fitlm(X,ytra); */
  /*         disp(outlmtra.Rsquared.Ordinary) */
  /*     end */
  /*     [~,~,BigAx]=yXplot(ytra,X,'tag','tra','namey','Data to transform (zoom
   * of y [0 500])','ylimy',[0 500]); */
  /*     title(BigAx,'Data in the inverse scale') */
  /*  */
  /*     la=[ -0.5 -0.25 0]; */
  /*     out=FSRfan(ytra,X,'la',la,'family','YJpn','plots',1,'init',round(n/2),'msg',0);
   */
  /*     title('Extended fan plot') */
  /* } */
  /* { */
  /*     %% Example of monitoring all score tests (also the F test). */
  /*     rng('default') */
  /*     rng(1000) */
  /*     close all */
  /*     n=200; */
  /*  */
  /*     X=randn(n,3); */
  /*     beta=[ 1; 1; 1]; */
  /*     sig=0.5; */
  /*     y=X*beta+sig*randn(n,1); */
  /*  */
  /*     % Find the data to transform */
  /*     la=0; */
  /*     ytra=normYJ(y,[],la,'inverse',true); */
  /*     if any(isnan(ytra)) */
  /*         disp('response with missing values') */
  /*     end */
  /*  */
  /*     la=[ -0.1 0 0.1]; */
  /*     % In this case  family is YJall */
  /*     out=FSRfan(ytra,X,'la',la,'family','YJall','plots',1,'init',round(n/2),'msg',0);
   */
  /*      */
  /* } */
  /* { */
  /*    %% Comparison of  F test based on constructed variables with F test
   * based on MLE. */
  /*     rng('default') */
  /*     rng(100) */
  /*     close all */
  /*     n=200; */
  /*  */
  /*     X=randn(n,3); */
  /*     beta=[ 1; 1; 1]; */
  /*     sig=0.5; */
  /*     y=X*beta+sig*randn(n,1); */
  /*  */
  /*     % Find the data to transform */
  /*     la=0; */
  /*     ytra=normYJ(y,[],la,'inverse',true); */
  /*     if any(isnan(ytra)) */
  /*         disp('response with missing values') */
  /*     end */
  /*  */
  /*     la=[ -0.1 0 0.1]; */
  /*     % Monitor test based on MLE using option scoremle */
  /*     scoremle= true; */
  /*     out=FSRfan(ytra,X,'la',la,'family','YJall','plots',1,'init',round(n/2),'msg',false,'scoremle',true);
   */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checking */
  i = out->y->size[0];
  out->y->size[0] = y->size[0];
  emxEnsureCapacity_real_T(&st, out->y, i, &wb_emlrtRTEI);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->y->data[i] = y->data[i];
  }
  i = out->X->size[0] * out->X->size[1];
  out->X->size[0] = X->size[0];
  out->X->size[1] = X->size[1];
  emxEnsureCapacity_real_T(&st, out->X, i, &xb_emlrtRTEI);
  loop_ub = X->size[0] * X->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->X->data[i] = X->data[i];
  }
  b_st.site = &x_emlrtRSI;
  chkinputR(&b_st, out->y, out->X, intercept, nocheck, &n, &p);
  /*  User options */
  /*  If the number of all possible subsets is <1000 the default is to extract
   */
  /*  all subsets, otherwise just 1000. */
  b_st.site = &w_emlrtRSI;
  bc(&b_st, n, p);
  /*  REMARK: a fast approximation of the bc computed above is: */
  /*  ncomb=floor(exp( gammaln(n+1) - gammaln(n-p+1) - gammaln(p+1) ) + .5); */
  /*  Write in structure 'options' the options chosen by the user */
  b_init = init;
  if (b_strcmp(family)) {
    BoxCox = 1.0;
  } else if (c_strcmp(family)) {
    BoxCox = 0.0;
  } else if (d_strcmp(family)) {
    BoxCox = -1.0;
  } else if (e_strcmp(family)) {
    BoxCox = -2.0;
  } else {
    BoxCox = rtNaN;
  }
  /*  Specify where to send the output of the current procedure if options plot
   */
  /*  =1 */
  if (init < p + 1.0) {
    b_st.site = &v_emlrtRSI;
    c_st.site = &ce_emlrtRSI;
    d_st.site = &pt_emlrtRSI;
    e_st.site = &qt_emlrtRSI;
    c_emlrt_marshallIn(&d_st,
                       feval(&d_st, emlrt_marshallOut(&d_st, b_cv),
                             b_emlrt_marshallOut(1.0),
                             c_emlrt_marshallOut(&e_st, b_cv1), &g_emlrtMCI),
                       "<output of feval>");
    b_init = p + 2.0;
  }
  emxInit_boolean_T(&st, &bsbT, 1, &yb_emlrtRTEI, true);
  /*  Start of the forward search */
  /*  Initialization of the n x 1 Boolean vector which contains a true in */
  /*  correspondence of the units belonging to subset in each step */
  loop_ub_tmp = (int32_T)n;
  i = bsbT->size[0];
  bsbT->size[0] = (int32_T)n;
  emxEnsureCapacity_boolean_T(&st, bsbT, i, &yb_emlrtRTEI);
  for (i = 0; i < loop_ub_tmp; i++) {
    bsbT->data[i] = false;
  }
  emxInit_real_T(&st, &b_y, 2, &yd_emlrtRTEI, true);
  if (muDoubleScalarIsNaN(n)) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    emxEnsureCapacity_real_T(&st, b_y, i, &ac_emlrtRTEI);
    b_y->data[0] = rtNaN;
  } else if (n < 1.0) {
    b_y->size[0] = 1;
    b_y->size[1] = 0;
  } else if (muDoubleScalarIsInf(n) && (1.0 == n)) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    emxEnsureCapacity_real_T(&st, b_y, i, &ac_emlrtRTEI);
    b_y->data[0] = rtNaN;
  } else {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    loop_ub = (int32_T)muDoubleScalarFloor(n - 1.0);
    b_y->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&st, b_y, i, &ac_emlrtRTEI);
    for (i = 0; i <= loop_ub; i++) {
      b_y->data[i] = (real_T)i + 1.0;
    }
  }
  emxInit_real_T(&st, &seq, 1, &bc_emlrtRTEI, true);
  i = seq->size[0];
  seq->size[0] = b_y->size[1];
  emxEnsureCapacity_real_T(&st, seq, i, &bc_emlrtRTEI);
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq->data[i] = b_y->data[i];
  }
  /*   Unlai is a Matrix whose 2:11th col contains the unit(s) just included. */
  b_st.site = &u_emlrtRSI;
  c_st.site = &ld_emlrtRSI;
  if (muDoubleScalarIsNaN(b_init + 1.0) || muDoubleScalarIsNaN(n)) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    emxEnsureCapacity_real_T(&c_st, b_y, i, &ac_emlrtRTEI);
    b_y->data[0] = rtNaN;
  } else if (n < b_init + 1.0) {
    b_y->size[0] = 1;
    b_y->size[1] = 0;
  } else if ((muDoubleScalarIsInf(b_init + 1.0) || muDoubleScalarIsInf(n)) &&
             (b_init + 1.0 == n)) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    emxEnsureCapacity_real_T(&c_st, b_y, i, &ac_emlrtRTEI);
    b_y->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(b_init + 1.0) == b_init + 1.0) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    loop_ub = (int32_T)muDoubleScalarFloor(n - (b_init + 1.0));
    b_y->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&c_st, b_y, i, &ac_emlrtRTEI);
    for (i = 0; i <= loop_ub; i++) {
      b_y->data[i] = (b_init + 1.0) + (real_T)i;
    }
  } else {
    d_st.site = &md_emlrtRSI;
    eml_float_colon(&d_st, b_init + 1.0, n, b_y);
  }
  b = n - b_init;
  if (!(b >= 0.0)) {
    emlrtNonNegativeCheckR2012b(b, &e_emlrtDCI, &st);
  }
  loop_ub = (int32_T)muDoubleScalarFloor(b);
  if (b != loop_ub) {
    emlrtIntegerCheckR2012b(b, &d_emlrtDCI, &st);
  }
  emxInit_real_T(&st, &b_b, 1, &vd_emlrtRTEI, true);
  i = b_b->size[0];
  b_b->size[0] = b_y->size[1];
  emxEnsureCapacity_real_T(&st, b_b, i, &cc_emlrtRTEI);
  irank = b_y->size[1];
  for (i = 0; i < irank; i++) {
    b_b->data[i] = b_y->data[i];
  }
  emxInit_real_T(&st, &r, 2, &dc_emlrtRTEI, true);
  i = r->size[0] * r->size[1];
  r->size[0] = (int32_T)b;
  r->size[1] = 10;
  emxEnsureCapacity_real_T(&st, r, i, &dc_emlrtRTEI);
  irank = (int32_T)b * 10;
  for (i = 0; i < irank; i++) {
    r->data[i] = rtNaN;
  }
  emxInit_real_T(&st, &Unlai, 2, &td_emlrtRTEI, true);
  b_st.site = &u_emlrtRSI;
  b_cat(&b_st, b_b, r, Unlai);
  /*  Un = cell which will contain the matrices Unlai for each value of lambda
   */
  if (la->size[0] == 0) {
    b_n = 0;
  } else {
    b_n = muIntScalarMax_sint32(la->size[0], 1);
  }
  i = out->Un->size[0];
  out->Un->size[0] = b_n;
  emxEnsureCapacity_cell_wrap_0(&st, out->Un, i, &ec_emlrtRTEI);
  emxFree_real_T(&r);
  for (i = 0; i < b_n; i++) {
    irank = out->Un->size[0] - 1;
    if (i > out->Un->size[0] - 1) {
      emlrtDynamicBoundsCheckR2012b(i, 0, out->Un->size[0] - 1, &j_emlrtBCI,
                                    &st);
    }
    out->Un->data[i].f1->size[0] = 0;
    if (i > irank) {
      emlrtDynamicBoundsCheckR2012b(i, 0, irank, &j_emlrtBCI, &st);
    }
    i1 = out->Un->data[i].f1->size[0] * out->Un->data[i].f1->size[1];
    out->Un->data[i].f1->size[1] = 11;
    emxEnsureCapacity_real_T(&st, out->Un->data[i].f1, i1, &ec_emlrtRTEI);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  /*  Initialize matrix which will contain the score test */
  b_st.site = &t_emlrtRSI;
  c_st.site = &ld_emlrtRSI;
  if (muDoubleScalarIsNaN(b_init) || muDoubleScalarIsNaN(n)) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    emxEnsureCapacity_real_T(&c_st, b_y, i, &ac_emlrtRTEI);
    b_y->data[0] = rtNaN;
  } else if (n < b_init) {
    b_y->size[0] = 1;
    b_y->size[1] = 0;
  } else if ((muDoubleScalarIsInf(b_init) || muDoubleScalarIsInf(n)) &&
             (b_init == n)) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    emxEnsureCapacity_real_T(&c_st, b_y, i, &ac_emlrtRTEI);
    b_y->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(b_init) == b_init) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&c_st, b_y, i, &ac_emlrtRTEI);
    for (i = 0; i <= loop_ub; i++) {
      b_y->data[i] = b_init + (real_T)i;
    }
  } else {
    d_st.site = &md_emlrtRSI;
    eml_float_colon(&d_st, b_init, n, b_y);
  }
  b_st.site = &t_emlrtRSI;
  i = b_b->size[0];
  b_b->size[0] = b_y->size[1];
  emxEnsureCapacity_real_T(&b_st, b_b, i, &fc_emlrtRTEI);
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_b->data[i] = b_y->data[i];
  }
  if (b + 1.0 != (int32_T)muDoubleScalarFloor(b + 1.0)) {
    emlrtIntegerCheckR2012b(b + 1.0, &emlrtDCI, &b_st);
  }
  c_st.site = &de_emlrtRSI;
  if (b_b->size[0] != 0) {
    irank = b_b->size[0];
  } else if (((int32_T)(b + 1.0) != 0) && (b_n != 0)) {
    irank = (int32_T)((n - b_init) + 1.0);
  } else {
    irank = 0;
    i = (int32_T)((n - b_init) + 1.0);
    if (i > 0) {
      irank = i;
    }
  }
  d_st.site = &ee_emlrtRSI;
  if ((b_b->size[0] != irank) && (b_b->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  i = (int32_T)((n - b_init) + 1.0);
  if ((i != irank) && ((i != 0) && (b_n != 0))) {
    emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (irank == 0);
  if (empty_non_axis_sizes || (b_b->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || ((i != 0) && (b_n != 0))) {
    sizes[1] = b_n;
  } else {
    sizes[1] = 0;
  }
  i = out->Score->size[0] * out->Score->size[1];
  out->Score->size[0] = irank;
  out->Score->size[1] = input_sizes_idx_1 + sizes[1];
  emxEnsureCapacity_real_T(&c_st, out->Score, i, &gc_emlrtRTEI);
  loop_ub = input_sizes_idx_1;
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < irank; i1++) {
      out->Score->data[i1] = b_b->data[i1];
    }
  }
  loop_ub = sizes[1];
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < irank; i1++) {
      out->Score->data[i1 + out->Score->size[0] * (i + input_sizes_idx_1)] =
          rtNaN;
    }
  }
  /*  if BoxCox==-1 */
  /*      Scop=Sco; */
  /*      Scon=Sco; */
  /*  elseif BoxCox==-2 */
  i = out->Scorep->size[0] * out->Scorep->size[1];
  out->Scorep->size[0] = out->Score->size[0];
  out->Scorep->size[1] = out->Score->size[1];
  emxEnsureCapacity_real_T(&st, out->Scorep, i, &hc_emlrtRTEI);
  loop_ub = out->Score->size[0] * out->Score->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->Scorep->data[i] = out->Score->data[i];
  }
  i = out->Scoren->size[0] * out->Scoren->size[1];
  out->Scoren->size[0] = out->Score->size[0];
  out->Scoren->size[1] = out->Score->size[1];
  emxEnsureCapacity_real_T(&st, out->Scoren, i, &ic_emlrtRTEI);
  loop_ub = out->Score->size[0] * out->Score->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->Scoren->data[i] = out->Score->data[i];
  }
  i = out->Scoreb->size[0] * out->Scoreb->size[1];
  out->Scoreb->size[0] = out->Score->size[0];
  out->Scoreb->size[1] = out->Score->size[1];
  emxEnsureCapacity_real_T(&st, out->Scoreb, i, &jc_emlrtRTEI);
  loop_ub = out->Score->size[0] * out->Score->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->Scoreb->data[i] = out->Score->data[i];
  }
  /*  end */
  /*  The second column of matrix r will contain the OLS residuals at each step
   */
  /*  of the forward search */
  b_st.site = &s_emlrtRSI;
  c_st.site = &fe_emlrtRSI;
  d_st.site = &ee_emlrtRSI;
  if ((int32_T)n != seq->size[0]) {
    emlrtErrorWithMessageIdR2018a(&d_st, &b_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  emxInit_real_T(&d_st, &b_r, 2, &kc_emlrtRTEI, true);
  i = b_r->size[0] * b_r->size[1];
  b_r->size[0] = seq->size[0];
  b_r->size[1] = 2;
  emxEnsureCapacity_real_T(&c_st, b_r, i, &kc_emlrtRTEI);
  loop_ub = seq->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_r->data[i] = seq->data[i];
  }
  for (i = 0; i < loop_ub_tmp; i++) {
    b_r->data[i + b_r->size[0]] = 0.0;
  }
  /*  If n is very large, the step of the search is printed every 100 step */
  /*  seq100 is linked to printing */
  b = muDoubleScalarCeil(n / 1000.0);
  if (muDoubleScalarIsNaN(b)) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    emxEnsureCapacity_real_T(&st, b_y, i, &lc_emlrtRTEI);
    b_y->data[0] = rtNaN;
  } else if (b < 1.0) {
    b_y->size[0] = 1;
    b_y->size[1] = 0;
  } else if (muDoubleScalarIsInf(b) && (1.0 == b)) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    emxEnsureCapacity_real_T(&st, b_y, i, &nc_emlrtRTEI);
    b_y->data[0] = rtNaN;
  } else {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = (int32_T)(b - 1.0) + 1;
    emxEnsureCapacity_real_T(&st, b_y, i, &mc_emlrtRTEI);
    loop_ub = (int32_T)(b - 1.0);
    for (i = 0; i <= loop_ub; i++) {
      b_y->data[i] = (real_T)i + 1.0;
    }
  }
  emxInit_real_T(&st, &seq100, 2, &oc_emlrtRTEI, true);
  i = seq100->size[0] * seq100->size[1];
  seq100->size[0] = 1;
  seq100->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(&st, seq100, i, &oc_emlrtRTEI);
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq100->data[i] = 1000.0 * b_y->data[i];
  }
  emxFree_real_T(&b_y);
  emxInit_boolean_T(&st, &r1, 2, &pc_emlrtRTEI, true);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = 1;
  r1->size[1] = seq100->size[1];
  emxEnsureCapacity_boolean_T(&st, r1, i, &pc_emlrtRTEI);
  loop_ub = seq100->size[1];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = (seq100->data[i] > n);
  }
  emxInit_boolean_T(&st, &seq100boo, 1, &qc_emlrtRTEI, true);
  b_st.site = &r_emlrtRSI;
  b_nullAssignment(&b_st, seq100, r1);
  i = seq100boo->size[0];
  seq100boo->size[0] = (int32_T)n;
  emxEnsureCapacity_boolean_T(&st, seq100boo, i, &qc_emlrtRTEI);
  emxFree_boolean_T(&r1);
  for (i = 0; i < loop_ub_tmp; i++) {
    seq100boo->data[i] = false;
  }
  emxInit_int32_T(&st, &r2, 2, &xd_emlrtRTEI, true);
  i = r2->size[0] * r2->size[1];
  r2->size[0] = 1;
  r2->size[1] = seq100->size[1];
  emxEnsureCapacity_int32_T(&st, r2, i, &rc_emlrtRTEI);
  loop_ub = seq100->size[1];
  for (i = 0; i < loop_ub; i++) {
    if (seq100->data[i] != (int32_T)muDoubleScalarFloor(seq100->data[i])) {
      emlrtIntegerCheckR2012b(seq100->data[i], &f_emlrtDCI, &st);
    }
    i1 = (int32_T)seq100->data[i];
    if ((i1 < 1) || (i1 > (int32_T)n)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)seq100->data[i], 1, (int32_T)n,
                                    &k_emlrtBCI, &st);
    }
    r2->data[i] = i1;
  }
  emxFree_real_T(&seq100);
  loop_ub = r2->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq100boo->data[r2->data[i] - 1] = true;
  }
  emxFree_int32_T(&r2);
  emxInit_real_T(&st, &nsampArray, 2, &ud_emlrtRTEI, true);
  b_loop_ub_tmp = (int32_T)p;
  i = out->bs->size[0] * out->bs->size[1];
  out->bs->size[0] = (int32_T)p;
  out->bs->size[1] = b_n;
  emxEnsureCapacity_real_T(&st, out->bs, i, &ec_emlrtRTEI);
  b_st.site = &q_emlrtRSI;
  subsets(&b_st, nsamp, n, p, nsampArray);
  /*  opts is a structure which contains the options to use in linsolve */
  /*  loop over the values of \lambda */
  i = out->Un->size[0];
  out->Un->size[0] = b_n;
  emxEnsureCapacity_cell_wrap_0(&st, out->Un, i, &sc_emlrtRTEI);
  emxInit_real_T(&st, &z, 1, &uc_emlrtRTEI, true);
  emxInit_real_T(&st, &bsb, 1, &xc_emlrtRTEI, true);
  emxInit_real_T(&st, &zb, 1, &dd_emlrtRTEI, true);
  emxInit_real_T(&st, &yb, 1, &ed_emlrtRTEI, true);
  emxInit_real_T(&st, &Xb, 2, &fd_emlrtRTEI, true);
  emxInit_real_T(&st, &blast, 1, &gd_emlrtRTEI, true);
  emxInit_boolean_T(&st, &oldbsbT, 1, &ld_emlrtRTEI, true);
  emxInit_real_T(&st, &unit, 1, &wd_emlrtRTEI, true);
  emxInit_real_T(&st, &r3, 1, &xd_emlrtRTEI, true);
  emxInit_int32_T(&st, &iidx, 1, &xd_emlrtRTEI, true);
  emxInitStruct_struct_T(&st, &expl_temp, &ae_emlrtRTEI, true);
  for (b_i = 0; b_i < b_n; b_i++) {
    if (BoxCox == 1.0) {
      /*  Construct transformed z according to power tansformation */
      if (b_i + 1 > la->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, la->size[0], &emlrtBCI, &st);
      }
      if (muDoubleScalarAbs(la->data[b_i]) < 1.0E-8) {
        i = z->size[0];
        z->size[0] = out->y->size[0];
        emxEnsureCapacity_real_T(&st, z, i, &uc_emlrtRTEI);
        loop_ub = out->y->size[0];
        for (i = 0; i < loop_ub; i++) {
          z->data[i] = out->y->data[i];
        }
        b_st.site = &p_emlrtRSI;
        b_log(&b_st, z);
      } else {
        if (b_i + 1 > la->size[0]) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, la->size[0], &m_emlrtBCI,
                                        &st);
        }
        b_st.site = &o_emlrtRSI;
        power(&b_st, out->y, la->data[b_i], z);
      }
    } else {
      if (b_i + 1 > la->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, la->size[0], &l_emlrtBCI,
                                      &st);
      }
      b_st.site = &n_emlrtRSI;
      normYJ(&b_st, out->y, la->data[b_i], z);
    }
    /*  Find initial subset to initialize the search using as y transformed */
    /*  vector z */
    loop_ub = lms->size[0];
    if (lms->size[0] == 1) {
      b_st.site = &m_emlrtRSI;
      LXS(&b_st, z, out->X, lms, h, nsampArray, msg, &expl_temp);
      i = bsb->size[0];
      bsb->size[0] = expl_temp.bs->size[1];
      emxEnsureCapacity_real_T(&st, bsb, i, &xc_emlrtRTEI);
      loop_ub = expl_temp.bs->size[1];
      for (i = 0; i < loop_ub; i++) {
        bsb->data[i] = expl_temp.bs->data[i];
      }
      /*  Store information about the units forming subset for each value of */
      /*  lambda */
      if (b_i + 1 > out->bs->size[1]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, out->bs->size[1], &g_emlrtBCI,
                                      &st);
      }
      emlrtSubAssignSizeCheckR2012b(
          &out->bs->size[0], 1, &expl_temp.bs->size[1], 1, &e_emlrtECI, &st);
      loop_ub = expl_temp.bs->size[1];
      for (i = 0; i < loop_ub; i++) {
        out->bs->data[i + out->bs->size[0] * b_i] = expl_temp.bs->data[i];
      }
    } else {
      if (b_i + 1 > lms->size[1]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, lms->size[1], &b_emlrtBCI,
                                      &st);
      }
      i = bsb->size[0];
      bsb->size[0] = lms->size[0];
      emxEnsureCapacity_real_T(&st, bsb, i, &ad_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        bsb->data[i] = lms->data[i + lms->size[0] * b_i];
      }
      /*  Store information about the units forming subset for each value of */
      /*  lambda */
      if (b_i + 1 > out->bs->size[1]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, out->bs->size[1], &h_emlrtBCI,
                                      &st);
      }
      loop_ub = lms->size[0];
      emlrtSubAssignSizeCheckR2012b(&out->bs->size[0], 1, &lms->size[0], 1,
                                    &f_emlrtECI, &st);
      for (i = 0; i < loop_ub; i++) {
        out->bs->data[i + out->bs->size[0] * b_i] =
            lms->data[i + lms->size[0] * b_i];
      }
    }
    i = iidx->size[0];
    iidx->size[0] = bsb->size[0];
    emxEnsureCapacity_int32_T(&st, iidx, i, &cd_emlrtRTEI);
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      if (bsb->data[i] != (int32_T)muDoubleScalarFloor(bsb->data[i])) {
        emlrtIntegerCheckR2012b(bsb->data[i], &g_emlrtDCI, &st);
      }
      i1 = (int32_T)bsb->data[i];
      if ((i1 < 1) || (i1 > bsbT->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i], 1, bsbT->size[0],
                                      &n_emlrtBCI, &st);
      }
      iidx->data[i] = i1;
    }
    loop_ub = iidx->size[0];
    for (i = 0; i < loop_ub; i++) {
      bsbT->data[iidx->data[i] - 1] = true;
    }
    /*  bsb=[1 8 12 15]; */
    /* ini0 = initial value for forward search loop */
    /*  FS loop for a particular value of vector la */
    i = zb->size[0];
    zb->size[0] = bsb->size[0];
    emxEnsureCapacity_real_T(&st, zb, i, &dd_emlrtRTEI);
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)bsb->data[i];
      if ((i1 < 1) || (i1 > z->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i], 1, z->size[0],
                                      &o_emlrtBCI, &st);
      }
      zb->data[i] = z->data[i1 - 1];
    }
    i = yb->size[0];
    yb->size[0] = bsb->size[0];
    emxEnsureCapacity_real_T(&st, yb, i, &ed_emlrtRTEI);
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)bsb->data[i];
      if ((i1 < 1) || (i1 > out->y->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i], 1, out->y->size[0],
                                      &p_emlrtBCI, &st);
      }
      yb->data[i] = out->y->data[i1 - 1];
    }
    loop_ub = out->X->size[1];
    i = Xb->size[0] * Xb->size[1];
    Xb->size[0] = bsb->size[0];
    Xb->size[1] = out->X->size[1];
    emxEnsureCapacity_real_T(&st, Xb, i, &fd_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      irank = bsb->size[0];
      for (i1 = 0; i1 < irank; i1++) {
        i2 = (int32_T)bsb->data[i1];
        if ((i2 < 1) || (i2 > out->X->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i1], 1,
                                        out->X->size[0], &q_emlrtBCI, &st);
        }
        Xb->data[i1 + Xb->size[0] * i] =
            out->X->data[(i2 + out->X->size[0] * i) - 1];
      }
    }
    /*  last correctly computed beta oefficients */
    i = blast->size[0];
    blast->size[0] = (int32_T)p;
    emxEnsureCapacity_real_T(&st, blast, i, &gd_emlrtRTEI);
    for (i = 0; i < b_loop_ub_tmp; i++) {
      blast->data[i] = rtNaN;
    }
    guard1 = false;
    if (!nocheck) {
      b_st.site = &l_emlrtRSI;
      c_st.site = &sc_emlrtRSI;
      irank = local_rank(&c_st, Xb);
      if (irank != p) {
        b_st.site = &ut_emlrtRSI;
        disp(&b_st, h_emlrt_marshallOut(&b_st, b_cv2), &emlrtMCI);
        /*  FS loop will not be performed */
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
    if (guard1) {
      i = (int32_T)(n + (1.0 - (real_T)bsb->size[0]));
      emlrtForLoopVectorCheckR2021a(bsb->size[0], 1.0, n, mxDOUBLE_CLASS, i,
                                    &c_emlrtRTEI, &st);
      for (mm = 0; mm < i; mm++) {
        b_mm = (uint32_T)bsb->size[0] + mm;
        /*  if n>1000 show every 100 steps the fwd search index */
        if (msg) {
          if (((int32_T)b_mm < 1) || ((int32_T)b_mm > seq100boo->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_mm, 1, seq100boo->size[0],
                                          &r_emlrtBCI, &st);
          }
          if (seq100boo->data[(int32_T)b_mm - 1]) {
            /*  OLD CODE if length(intersect(mm,seq100))==1 */
            b_st.site = &k_emlrtRSI;
            int2str(&b_st, b_mm, tmp_data, sizes);
            tmp_size[0] = 1;
            loop_ub = sizes[1];
            tmp_size[1] = sizes[1] + 2;
            b_tmp_data[0] = 'm';
            b_tmp_data[1] = '=';
            if (0 <= loop_ub - 1) {
              memcpy(&b_tmp_data[2], &tmp_data[0], loop_ub * sizeof(char_T));
            }
            b_st.site = &wt_emlrtRSI;
            disp(&b_st, i_emlrt_marshallOut(&b_st, b_tmp_data, tmp_size),
                 &b_emlrtMCI);
          }
        }
        if (b_mm >= b_init) {
          if (BoxCox == 1.0) {
            /*  Compute and store the value of the score test */
            if (b_i + 1 > la->size[0]) {
              emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, la->size[0],
                                            &s_emlrtBCI, &st);
            }
            b_st.site = &j_emlrtRSI;
            Score(&b_st, yb, Xb, la->data[b_i], (real_T *)&outSC_Score_data,
                  &irank, &b);
            /*  Store score test for the units belonging to subset */
            b = ((real_T)b_mm - b_init) + 1.0;
            if (b != (int32_T)muDoubleScalarFloor(b)) {
              emlrtIntegerCheckR2012b(b, &h_emlrtDCI, &st);
            }
            if (((int32_T)b < 1) || ((int32_T)b > out->Score->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b, 1, out->Score->size[0],
                                            &u_emlrtBCI, &st);
            }
            if (((int32_T)(b_i + 2U) < 1) ||
                ((int32_T)(b_i + 2U) > out->Score->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 2U), 1,
                                            out->Score->size[1], &u_emlrtBCI,
                                            &st);
            }
            out->Score
                ->data[((int32_T)b + out->Score->size[0] * (b_i + 1)) - 1] =
                outSC_Score_data;
          } else if (BoxCox == 0.0) {
            /*  Compute and store the value of the score test using Yeo */
            /*  and Johnson transformation (just the global test) */
            if (b_i + 1 > la->size[0]) {
              emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, la->size[0],
                                            &t_emlrtBCI, &st);
            }
            b_st.site = &i_emlrtRSI;
            ScoreYJ(&b_st, yb, Xb, la->data[b_i], (real_T *)&outSC_Score_data,
                    &irank, &b);
            /*  Store score test for the units belonging to subset */
            b = ((real_T)b_mm - b_init) + 1.0;
            if (b != (int32_T)muDoubleScalarFloor(b)) {
              emlrtIntegerCheckR2012b(b, &i_emlrtDCI, &st);
            }
            if (((int32_T)b < 1) || ((int32_T)b > out->Score->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b, 1, out->Score->size[0],
                                            &v_emlrtBCI, &st);
            }
            if (((int32_T)(b_i + 2U) < 1) ||
                ((int32_T)(b_i + 2U) > out->Score->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 2U), 1,
                                            out->Score->size[1], &v_emlrtBCI,
                                            &st);
            }
            out->Score
                ->data[((int32_T)b + out->Score->size[0] * (b_i + 1)) - 1] =
                outSC_Score_data;
          } else if ((BoxCox == -1.0) || (BoxCox == -2.0)) {
            /* [outSC]=ScoreYJ(yb,Xb,'la',la(i),'nocheck',true); */
            /*  [outSCpn]=ScoreYJpn(yb,Xb,'la',la(i),'nocheck',true); */
            /*  [outSCpn]=ScoreYJpn(yb,Xb,'la',la(i),'nocheck',true); */
            /*                      if i==1 */
            if (b_i + 1 > la->size[0]) {
              emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, la->size[0],
                                            &w_emlrtBCI, &st);
            }
            b_st.site = &h_emlrtRSI;
            ScoreYJall(&b_st, yb, Xb, la->data[b_i], outSCpn_Score_data, sizes);
            b = ((real_T)b_mm - b_init) + 1.0;
            if (b != (int32_T)muDoubleScalarFloor(b)) {
              emlrtIntegerCheckR2012b(b, &j_emlrtDCI, &st);
            }
            if (((int32_T)b < 1) || ((int32_T)b > out->Score->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b, 1, out->Score->size[0],
                                            &y_emlrtBCI, &st);
            }
            if (((int32_T)(b_i + 2U) < 1) ||
                ((int32_T)(b_i + 2U) > out->Score->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 2U), 1,
                                            out->Score->size[1], &y_emlrtBCI,
                                            &st);
            }
            out->Score
                ->data[((int32_T)b + out->Score->size[0] * (b_i + 1)) - 1] =
                outSCpn_Score_data[0];
            b = ((real_T)b_mm - b_init) + 1.0;
            if (b != (int32_T)muDoubleScalarFloor(b)) {
              emlrtIntegerCheckR2012b(b, &k_emlrtDCI, &st);
            }
            if (((int32_T)b < 1) || ((int32_T)b > out->Scorep->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b, 1, out->Scorep->size[0],
                                            &ab_emlrtBCI, &st);
            }
            if (((int32_T)(b_i + 2U) < 1) ||
                ((int32_T)(b_i + 2U) > out->Scorep->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 2U), 1,
                                            out->Scorep->size[1], &ab_emlrtBCI,
                                            &st);
            }
            out->Scorep
                ->data[((int32_T)b + out->Scorep->size[0] * (b_i + 1)) - 1] =
                outSCpn_Score_data[1];
            b = ((real_T)b_mm - b_init) + 1.0;
            if (b != (int32_T)muDoubleScalarFloor(b)) {
              emlrtIntegerCheckR2012b(b, &l_emlrtDCI, &st);
            }
            if (((int32_T)b < 1) || ((int32_T)b > out->Scoren->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b, 1, out->Scoren->size[0],
                                            &bb_emlrtBCI, &st);
            }
            if (((int32_T)(b_i + 2U) < 1) ||
                ((int32_T)(b_i + 2U) > out->Scoren->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 2U), 1,
                                            out->Scoren->size[1], &bb_emlrtBCI,
                                            &st);
            }
            out->Scoren
                ->data[((int32_T)b + out->Scoren->size[0] * (b_i + 1)) - 1] =
                outSCpn_Score_data[2];
            if (BoxCox == -2.0) {
              b = ((real_T)b_mm - b_init) + 1.0;
              if (b != (int32_T)muDoubleScalarFloor(b)) {
                emlrtIntegerCheckR2012b(b, &m_emlrtDCI, &st);
              }
              if (((int32_T)b < 1) || ((int32_T)b > out->Scoreb->size[0])) {
                emlrtDynamicBoundsCheckR2012b(
                    (int32_T)b, 1, out->Scoreb->size[0], &cb_emlrtBCI, &st);
              }
              if (((int32_T)(b_i + 2U) < 1) ||
                  ((int32_T)(b_i + 2U) > out->Scoreb->size[1])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 2U), 1,
                                              out->Scoreb->size[1],
                                              &cb_emlrtBCI, &st);
              }
              out->Scoreb
                  ->data[((int32_T)b + out->Scoreb->size[0] * (b_i + 1)) - 1] =
                  outSCpn_Score_data[3];
            }
          }
        }
        /*  Implicitly control the rank of Xb checking the condition number */
        /*  for inversion (which in the case of a rectangular matrix is */
        /*  nothing but the rank) */
        /*  Old instruction was b=Xb\yb; */
        b_st.site = &g_emlrtRSI;
        linsolve(&b_st, Xb, zb, b_b, &b);
        /*  disp([mm condNumber]) */
        if (!(b < p)) {
          /*  rank is ok */
          i1 = blast->size[0];
          blast->size[0] = b_b->size[0];
          emxEnsureCapacity_real_T(&st, blast, i1, &id_emlrtRTEI);
          loop_ub = b_b->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            blast->data[i1] = b_b->data[i1];
          }
          /*  Store correctly computed b for the case of rank problem */
        } else {
          /*  number of independent columns is smaller than number of parameters
           */
          b_st.site = &xt_emlrtRSI;
          b_disp(&b_st, j_emlrt_marshallOut(&b_st, b_cv3),
                 k_emlrt_marshallOut(&b_st, b_cv4), b_emlrt_marshallOut(b_mm),
                 &c_emlrtMCI);
          loop_ub = blast->size[0];
          i1 = b_b->size[0];
          b_b->size[0] = blast->size[0];
          emxEnsureCapacity_real_T(&st, b_b, i1, &jd_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub; i1++) {
            b_b->data[i1] = blast->data[i1];
          }
        }
        /*  e= (n x 1) vector of residuals for all units using b estimated */
        /*  using subset and transformed response */
        b_st.site = &f_emlrtRSI;
        c_st.site = &mb_emlrtRSI;
        dynamic_size_checks(&c_st, out->X, b_b, out->X->size[1], b_b->size[0]);
        c_st.site = &lb_emlrtRSI;
        mtimes(&c_st, out->X, b_b, r3);
        loop_ub = z->size[0];
        if (z->size[0] != r3->size[0]) {
          emlrtSizeEqCheck1DR2012b(z->size[0], r3->size[0], &emlrtECI, &st);
        }
        /*  r_i =e_i^2 */
        i1 = b_b->size[0];
        b_b->size[0] = z->size[0];
        emxEnsureCapacity_real_T(&st, b_b, i1, &kd_emlrtRTEI);
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_b->data[i1] = z->data[i1] - r3->data[i1];
        }
        b_st.site = &e_emlrtRSI;
        b_power(&b_st, b_b, r3);
        emlrtSubAssignSizeCheckR2012b(&b_r->size[0], 1, &r3->size[0], 1,
                                      &b_emlrtECI, &st);
        loop_ub = r3->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_r->data[i1 + b_r->size[0]] = r3->data[i1];
        }
        if (b_mm < n) {
          /*  store units forming old subset in vector oldbsb */
          loop_ub = bsbT->size[0];
          i1 = oldbsbT->size[0];
          oldbsbT->size[0] = bsbT->size[0];
          emxEnsureCapacity_boolean_T(&st, oldbsbT, i1, &ld_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub; i1++) {
            oldbsbT->data[i1] = bsbT->data[i1];
          }
          /*  order the r_i and include the smallest among the units */
          /*   forming the group of potential outliers */
          /*  ord=sortrows(r,2); */
          b_st.site = &d_emlrtRSI;
          loop_ub = b_r->size[0];
          i1 = b_b->size[0];
          b_b->size[0] = b_r->size[0];
          emxEnsureCapacity_real_T(&b_st, b_b, i1, &md_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub; i1++) {
            b_b->data[i1] = b_r->data[i1 + b_r->size[0]];
          }
          c_st.site = &wl_emlrtRSI;
          b_sort(&c_st, b_b, iidx);
          i1 = b_b->size[0];
          b_b->size[0] = iidx->size[0];
          emxEnsureCapacity_real_T(&b_st, b_b, i1, &nd_emlrtRTEI);
          loop_ub = iidx->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            b_b->data[i1] = iidx->data[i1];
          }
          /*  bsb= units forming the new  subset */
          if (1 > b_b->size[0]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, b_b->size[0], &c_emlrtBCI, &st);
          }
          irank = (int32_T)((real_T)b_mm + 1.0);
          if (((int32_T)((real_T)b_mm + 1.0) < 1) ||
              ((int32_T)((real_T)b_mm + 1.0) > b_b->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)((real_T)b_mm + 1.0), 1,
                                          b_b->size[0], &d_emlrtBCI, &st);
          }
          i1 = bsbT->size[0];
          bsbT->size[0] = (int32_T)n;
          emxEnsureCapacity_boolean_T(&st, bsbT, i1, &od_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub_tmp; i1++) {
            bsbT->data[i1] = false;
          }
          i1 = iidx->size[0];
          iidx->size[0] = (int32_T)((real_T)b_mm + 1.0);
          emxEnsureCapacity_int32_T(&st, iidx, i1, &pd_emlrtRTEI);
          for (i1 = 0; i1 < irank; i1++) {
            i2 = (int32_T)b_b->data[i1];
            if ((i2 < 1) || (i2 > (int32_T)n)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_b->data[i1], 1,
                                            (int32_T)n, &db_emlrtBCI, &st);
            }
            iidx->data[i1] = i2;
          }
          loop_ub = iidx->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            bsbT->data[iidx->data[i1] - 1] = true;
          }
          loop_ub = out->X->size[1];
          i1 = Xb->size[0] * Xb->size[1];
          Xb->size[0] = (int32_T)((real_T)b_mm + 1.0);
          Xb->size[1] = out->X->size[1];
          emxEnsureCapacity_real_T(&st, Xb, i1, &qd_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub; i1++) {
            for (i2 = 0; i2 < irank; i2++) {
              end = (int32_T)b_b->data[i2];
              if ((end < 1) || (end > out->X->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)b_b->data[i2], 1,
                                              out->X->size[0], &eb_emlrtBCI,
                                              &st);
              }
              Xb->data[i2 + Xb->size[0] * i1] =
                  out->X->data[(end + out->X->size[0] * i1) - 1];
            }
          }
          /*  subset of X */
          i1 = yb->size[0];
          yb->size[0] = (int32_T)((real_T)b_mm + 1.0);
          emxEnsureCapacity_real_T(&st, yb, i1, &rd_emlrtRTEI);
          for (i1 = 0; i1 < irank; i1++) {
            i2 = (int32_T)b_b->data[i1];
            if ((i2 < 1) || (i2 > out->y->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_b->data[i1], 1,
                                            out->y->size[0], &fb_emlrtBCI, &st);
            }
            yb->data[i1] = out->y->data[i2 - 1];
          }
          /*  subset of y */
          i1 = zb->size[0];
          zb->size[0] = (int32_T)((real_T)b_mm + 1.0);
          emxEnsureCapacity_real_T(&st, zb, i1, &sd_emlrtRTEI);
          for (i1 = 0; i1 < irank; i1++) {
            i2 = (int32_T)b_b->data[i1];
            if ((i2 < 1) || (i2 > z->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_b->data[i1], 1,
                                            z->size[0], &gb_emlrtBCI, &st);
            }
            zb->data[i1] = z->data[i2 - 1];
          }
          /*  subset of z */
          if (b_mm >= b_init) {
            /*  unit = vector containing units which just entered subset; */
            /*  unit=setdiff(bsb,oldbsb); */
            /*  new instruction to find unit */
            loop_ub = oldbsbT->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              oldbsbT->data[i1] = !oldbsbT->data[i1];
            }
            if (bsbT->size[0] != oldbsbT->size[0]) {
              emlrtSizeEqCheck1DR2012b(bsbT->size[0], oldbsbT->size[0],
                                       &c_emlrtECI, &st);
            }
            end = bsbT->size[0] - 1;
            irank = 0;
            for (loop_ub = 0; loop_ub <= end; loop_ub++) {
              if (bsbT->data[loop_ub] && oldbsbT->data[loop_ub]) {
                irank++;
              }
            }
            i1 = unit->size[0];
            unit->size[0] = irank;
            emxEnsureCapacity_real_T(&st, unit, i1, &ec_emlrtRTEI);
            irank = 0;
            for (loop_ub = 0; loop_ub <= end; loop_ub++) {
              if (bsbT->data[loop_ub] && oldbsbT->data[loop_ub]) {
                if (loop_ub + 1 > seq->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, seq->size[0],
                                                &hb_emlrtBCI, &st);
                }
                unit->data[irank] = seq->data[loop_ub];
                irank++;
              }
            }
            if (unit->size[0] <= 10) {
              if (2 > unit->size[0] + 1) {
                i1 = -1;
                i2 = -1;
              } else {
                i1 = 0;
                i2 = unit->size[0];
              }
              b = ((real_T)b_mm - b_init) + 1.0;
              if (b != (int32_T)muDoubleScalarFloor(b)) {
                emlrtIntegerCheckR2012b(b, &b_emlrtDCI, &st);
              }
              if (((int32_T)b < 1) || ((int32_T)b > Unlai->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)b, 1, Unlai->size[0],
                                              &e_emlrtBCI, &st);
              }
              sizes[0] = 1;
              irank = i2 - i1;
              sizes[1] = irank;
              emlrtSubAssignSizeCheckR2012b(&sizes[0], 2, &unit->size[0], 1,
                                            &d_emlrtECI, &st);
              for (i2 = 0; i2 < irank; i2++) {
                Unlai->data[((int32_T)b + Unlai->size[0] * ((i1 + i2) + 1)) -
                            1] = unit->data[i2];
              }
            } else {
              if (msg) {
                b_st.site = &c_emlrtRSI;
                int2str(&b_st, b_mm, tmp_data, sizes);
                b_tmp_size[0] = 1;
                loop_ub = sizes[1];
                b_tmp_size[1] = sizes[1] + 44;
                for (i1 = 0; i1 < 44; i1++) {
                  c_tmp_data[i1] = b_cv5[i1];
                }
                if (0 <= loop_ub - 1) {
                  memcpy(&c_tmp_data[44], &tmp_data[0],
                         loop_ub * sizeof(char_T));
                }
                b_st.site = &vt_emlrtRSI;
                disp(&b_st, i_emlrt_marshallOut(&b_st, c_tmp_data, b_tmp_size),
                     &d_emlrtMCI);
              }
              b_st.site = &b_emlrtRSI;
              c_indexShapeCheck(&b_st, unit->size[0]);
              b = ((real_T)b_mm - b_init) + 1.0;
              if (b != (int32_T)muDoubleScalarFloor(b)) {
                emlrtIntegerCheckR2012b(b, &c_emlrtDCI, &st);
              }
              if (((int32_T)b < 1) || ((int32_T)b > Unlai->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)b, 1, Unlai->size[0],
                                              &f_emlrtBCI, &st);
              }
              for (i1 = 0; i1 < 10; i1++) {
                Unlai->data[((int32_T)b + Unlai->size[0] * (i1 + 1)) - 1] =
                    unit->data[i1];
              }
            }
          }
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
    }
    /*  rank check */
    /*  Store in cell Un matrix Unlai */
    loop_ub = Unlai->size[0] * 11;
    if (b_i > out->Un->size[0] - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, out->Un->size[0] - 1, &i_emlrtBCI,
                                    &st);
    }
    i = out->Un->data[b_i].f1->size[0] * out->Un->data[b_i].f1->size[1];
    out->Un->data[b_i].f1->size[0] = Unlai->size[0];
    emxEnsureCapacity_real_T(&st, out->Un->data[b_i].f1, i, &hd_emlrtRTEI);
    if (b_i > out->Un->size[0] - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, out->Un->size[0] - 1, &i_emlrtBCI,
                                    &st);
    }
    i = out->Un->data[b_i].f1->size[0] * out->Un->data[b_i].f1->size[1];
    out->Un->data[b_i].f1->size[1] = 11;
    emxEnsureCapacity_real_T(&st, out->Un->data[b_i].f1, i, &hd_emlrtRTEI);
    irank = out->Un->size[0] - 1;
    if (b_i > out->Un->size[0] - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, out->Un->size[0] - 1, &i_emlrtBCI,
                                    &st);
    }
    if (b_i > out->Un->size[0] - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, out->Un->size[0] - 1, &i_emlrtBCI,
                                    &st);
    }
    for (i = 0; i < loop_ub; i++) {
      if (b_i > irank) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, irank, &x_emlrtBCI, &st);
      }
      out->Un->data[b_i].f1->data[i] = Unlai->data[i];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  emxFreeStruct_struct_T(&expl_temp);
  emxFree_int32_T(&iidx);
  emxFree_real_T(&r3);
  emxFree_real_T(&unit);
  emxFree_boolean_T(&oldbsbT);
  emxFree_real_T(&b_b);
  emxFree_real_T(&blast);
  emxFree_real_T(&Xb);
  emxFree_real_T(&yb);
  emxFree_real_T(&zb);
  emxFree_real_T(&bsb);
  emxFree_real_T(&z);
  emxFree_real_T(&nsampArray);
  emxFree_boolean_T(&seq100boo);
  emxFree_real_T(&b_r);
  emxFree_real_T(&Unlai);
  emxFree_real_T(&seq);
  emxFree_boolean_T(&bsbT);
  /*  Structure returned by function FSRfan */
  i = out->la->size[0] * out->la->size[1];
  out->la->size[0] = la->size[0];
  out->la->size[1] = 1;
  emxEnsureCapacity_real_T(&st, out->la, i, &tc_emlrtRTEI);
  loop_ub = la->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->la->data[i] = la->data[i];
  }
  if ((BoxCox == -1.0) || (BoxCox == -2.0)) {
    if (!(BoxCox == -2.0)) {
      i = out->Scoreb->size[0] * out->Scoreb->size[1];
      out->Scoreb->size[0] = 1;
      out->Scoreb->size[1] = 1;
      emxEnsureCapacity_real_T(&st, out->Scoreb, i, &wc_emlrtRTEI);
      out->Scoreb->data[0] = rtNaN;
    }
  } else {
    i = out->Scorep->size[0] * out->Scorep->size[1];
    out->Scorep->size[0] = 1;
    out->Scorep->size[1] = 1;
    emxEnsureCapacity_real_T(&st, out->Scorep, i, &vc_emlrtRTEI);
    out->Scorep->data[0] = rtNaN;
    i = out->Scoren->size[0] * out->Scoren->size[1];
    out->Scoren->size[0] = 1;
    out->Scoren->size[1] = 1;
    emxEnsureCapacity_real_T(&st, out->Scoren, i, &yc_emlrtRTEI);
    out->Scoren->data[0] = rtNaN;
    i = out->Scoreb->size[0] * out->Scoreb->size[1];
    out->Scoreb->size[0] = 1;
    out->Scoreb->size[1] = 1;
    emxEnsureCapacity_real_T(&st, out->Scoreb, i, &bd_emlrtRTEI);
    out->Scoreb->data[0] = rtNaN;
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (FSRfan_wrapper.c) */
