/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRmdr_wrapper.c
 *
 * Code generation for function 'FSRmdr_wrapper'
 *
 */

/* Include files */
#include "FSRmdr_wrapper.h"
#include "FSRmdr_wrapper_data.h"
#include "FSRmdr_wrapper_emxutil.h"
#include "FSRmdr_wrapper_mexutil.h"
#include "FSRmdr_wrapper_types.h"
#include "any.h"
#include "cat.h"
#include "chkinputR.h"
#include "colon.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "eml_setop.h"
#include "ifWhileCond.h"
#include "indexShapeCheck.h"
#include "int2str.h"
#include "linsolve.h"
#include "mrdivide_helper.h"
#include "mtimes.h"
#include "power.h"
#include "randsample.h"
#include "rank.h"
#include "repelem.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "sprintf.h"
#include "sum.h"
#include "mwmathutil.h"
#include <stdio.h>
#include <string.h>

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 542, /* lineNo */
  5,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 734,/* lineNo */
  17,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRSInfo emlrtRSI = { 50,    /* lineNo */
  "FSRmdr_wrapper",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\FSRmdr_wrapper.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 875, /* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 866, /* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 865, /* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 864, /* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 838, /* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 836, /* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 810, /* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 807, /* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 801, /* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 791, /* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 784, /* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 783, /* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 778, /* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 765, /* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 761, /* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 760, /* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 756, /* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 741, /* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 740, /* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 734, /* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 720, /* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 714, /* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 707, /* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 706, /* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 705,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 702,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 701,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 686,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 677,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 669,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 668,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 653,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 640,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 626,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 621,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 620,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 615,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 611,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 605,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 597,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 566,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 545,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 542,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 537,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 516,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 514,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 510,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 457,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo te_emlrtRSI = { 35, /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtRSInfo bf_emlrtRSI = { 22, /* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo cf_emlrtRSI = { 96, /* lineNo */
  "cat_impl",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo df_emlrtRSI = { 28, /* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo ef_emlrtRSI = { 117,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo hf_emlrtRSI = { 24, /* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo kf_emlrtRSI = { 23, /* lineNo */
  "intersect",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\intersect.m"/* pathName */
};

static emlrtRSInfo lf_emlrtRSI = { 70, /* lineNo */
  "eml_setop",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"/* pathName */
};

static emlrtRSInfo ng_emlrtRSI = { 19, /* lineNo */
  "setdiff",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\setdiff.m"/* pathName */
};

static emlrtRSInfo sg_emlrtRSI = { 38, /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtRSInfo gh_emlrtRSI = { 20, /* lineNo */
  "mrdivide_helper",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_helper.m"/* pathName */
};

static emlrtRSInfo si_emlrtRSI = { 34, /* lineNo */
  "rdivide_helper",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_helper.m"/* pathName */
};

static emlrtRSInfo ti_emlrtRSI = { 51, /* lineNo */
  "div",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m"/* pathName */
};

static emlrtRSInfo ui_emlrtRSI = { 259,/* lineNo */
  "assertCompatibleSize",              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m"/* pathName */
};

static emlrtRSInfo vi_emlrtRSI = { 45, /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo wi_emlrtRSI = { 127,/* lineNo */
  "flatIter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo xi_emlrtRSI = { 214,/* lineNo */
  "flatIter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo yi_emlrtRSI = { 185,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo aj_emlrtRSI = { 867,/* lineNo */
  "minRealVectorOmitNaN",              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo bj_emlrtRSI = { 62, /* lineNo */
  "vectorMinOrMaxInPlace",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo cj_emlrtRSI = { 54, /* lineNo */
  "vectorMinOrMaxInPlace",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo dj_emlrtRSI = { 103,/* lineNo */
  "findFirst",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo ej_emlrtRSI = { 120,/* lineNo */
  "minOrMaxRealVectorKernel",          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo fj_emlrtRSI = { 27, /* lineNo */
  "sort",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 523,   /* lineNo */
  13,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 658, /* lineNo */
  9,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 659, /* lineNo */
  9,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 669, /* lineNo */
  17,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 735, /* lineNo */
  17,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 722, /* lineNo */
  21,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 723, /* lineNo */
  21,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 724, /* lineNo */
  21,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtMCInfo i_emlrtMCI = { 864, /* lineNo */
  25,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtMCInfo j_emlrtMCI = { 865, /* lineNo */
  25,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtMCInfo m_emlrtMCI = { 66,  /* lineNo */
  18,                                  /* colNo */
  "fprintf",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 19,/* lineNo */
  23,                                  /* colNo */
  "scalexpAlloc",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 271,/* lineNo */
  27,                                  /* colNo */
  "check_non_axis_size",               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 16,/* lineNo */
  19,                                  /* colNo */
  "mrdivide_helper",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_helper.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  626,                                 /* lineNo */
  23,                                  /* colNo */
  "bsbsteps",                          /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  566,                                 /* lineNo */
  17,                                  /* colNo */
  "X",                                 /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 605,   /* lineNo */
  22,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 605, /* lineNo */
  22,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo h_emlrtRTEI = { 665,/* lineNo */
  12,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  686,                                 /* lineNo */
  20,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtDCInfo c_emlrtDCI = { 701, /* lineNo */
  36,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  701,                                 /* lineNo */
  36,                                  /* colNo */
  "X",                                 /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  693,                                 /* lineNo */
  22,                                  /* colNo */
  "bsbx",                              /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  693,                                 /* lineNo */
  24,                                  /* colNo */
  "bsbx",                              /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  693,                                 /* lineNo */
  17,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  705,                                 /* lineNo */
  55,                                  /* colNo */
  "bsbx",                              /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  705,                                 /* lineNo */
  57,                                  /* colNo */
  "bsbx",                              /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  705,                                 /* lineNo */
  34,                                  /* colNo */
  "bsbx",                              /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  705,                                 /* lineNo */
  36,                                  /* colNo */
  "bsbx",                              /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  705,                                 /* lineNo */
  29,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  706,                                 /* lineNo */
  40,                                  /* colNo */
  "bsbx",                              /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  706,                                 /* lineNo */
  42,                                  /* colNo */
  "bsbx",                              /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  707,                                 /* lineNo */
  51,                                  /* colNo */
  "bsbx",                              /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  707,                                 /* lineNo */
  53,                                  /* colNo */
  "bsbx",                              /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  714,                                 /* lineNo */
  30,                                  /* colNo */
  "bsbx",                              /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  714,                                 /* lineNo */
  32,                                  /* colNo */
  "bsbx",                              /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo d_emlrtECI = { -1,  /* nDims */
  740,                                 /* lineNo */
  11,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtECInfo e_emlrtECI = { 2,   /* nDims */
  778,                                 /* lineNo */
  28,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtECInfo f_emlrtECI = { 2,   /* nDims */
  783,                                 /* lineNo */
  41,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtECInfo g_emlrtECI = { -1,  /* nDims */
  783,                                 /* lineNo */
  41,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtECInfo h_emlrtECI = { -1,  /* nDims */
  785,                                 /* lineNo */
  29,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtECInfo i_emlrtECI = { -1,  /* nDims */
  741,                                 /* lineNo */
  9,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtECInfo j_emlrtECI = { -1,  /* nDims */
  796,                                 /* lineNo */
  25,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  757,                                 /* lineNo */
  31,                                  /* colNo */
  "S2",                                /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  761,                                 /* lineNo */
  31,                                  /* colNo */
  "S2",                                /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  803,                                 /* lineNo */
  38,                                  /* colNo */
  "S2",                                /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  810,                                 /* lineNo */
  79,                                  /* colNo */
  "S2",                                /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  842,                                 /* lineNo */
  21,                                  /* colNo */
  "ord",                               /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  842,                                 /* lineNo */
  24,                                  /* colNo */
  "ord",                               /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo k_emlrtECI = { -1,  /* nDims */
  856,                                 /* lineNo */
  26,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  874,                                 /* lineNo */
  29,                                  /* colNo */
  "ord",                               /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  874,                                 /* lineNo */
  34,                                  /* colNo */
  "ord",                               /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  877,                                 /* lineNo */
  29,                                  /* colNo */
  "ord",                               /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  877,                                 /* lineNo */
  34,                                  /* colNo */
  "ord",                               /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 754, /* lineNo */
  22,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  754,                                 /* lineNo */
  22,                                  /* colNo */
  "Bols",                              /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  754,                                 /* lineNo */
  33,                                  /* colNo */
  "Bols",                              /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  754,                                 /* lineNo */
  35,                                  /* colNo */
  "Bols",                              /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo l_emlrtECI = { -1,  /* nDims */
  754,                                 /* lineNo */
  17,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  748,                                 /* lineNo */
  24,                                  /* colNo */
  "BB",                                /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo m_emlrtECI = { -1,  /* nDims */
  748,                                 /* lineNo */
  17,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtDCInfo e_emlrtDCI = { 861, /* lineNo */
  24,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  861,                                 /* lineNo */
  24,                                  /* colNo */
  "Un",                                /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo n_emlrtECI = { -1,  /* nDims */
  861,                                 /* lineNo */
  21,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtDCInfo f_emlrtDCI = { 866, /* lineNo */
  28,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  866,                                 /* lineNo */
  28,                                  /* colNo */
  "Un",                                /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo o_emlrtECI = { -1,  /* nDims */
  866,                                 /* lineNo */
  25,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtDCInfo g_emlrtDCI = { 611, /* lineNo */
  20,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 611, /* lineNo */
  20,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 622, /* lineNo */
  16,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  528,                                 /* lineNo */
  10,                                  /* colNo */
  "X",                                 /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 528, /* lineNo */
  10,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  473,                                 /* lineNo */
  12,                                  /* colNo */
  "iniseq",                            /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  529,                                 /* lineNo */
  10,                                  /* colNo */
  "y",                                 /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  515,                                 /* lineNo */
  14,                                  /* colNo */
  "X",                                 /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  526,                                 /* lineNo */
  10,                                  /* colNo */
  "y",                                 /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 526, /* lineNo */
  10,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  586,                                 /* lineNo */
  6,                                   /* colNo */
  "bsbT",                              /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  593,                                 /* lineNo */
  5,                                   /* colNo */
  "seq",                               /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 611, /* lineNo */
  16,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 611, /* lineNo */
  16,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 615, /* lineNo */
  20,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 615, /* lineNo */
  20,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 622, /* lineNo */
  5,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 631, /* lineNo */
  13,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  631,                                 /* lineNo */
  13,                                  /* colNo */
  "boobsbsteps",                       /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 640, /* lineNo */
  33,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  701,                                 /* lineNo */
  36,                                  /* colNo */
  "nclx",                              /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  745,                                 /* lineNo */
  16,                                  /* colNo */
  "boobsbsteps",                       /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  748,                                 /* lineNo */
  20,                                  /* colNo */
  "BB",                                /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 826, /* lineNo */
  19,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  826,                                 /* lineNo */
  19,                                  /* colNo */
  "r",                                 /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  757,                                 /* lineNo */
  17,                                  /* colNo */
  "S2",                                /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 757, /* lineNo */
  17,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  845,                                 /* lineNo */
  18,                                  /* colNo */
  "bsbT",                              /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  848,                                 /* lineNo */
  18,                                  /* colNo */
  "X",                                 /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  761,                                 /* lineNo */
  17,                                  /* colNo */
  "S2",                                /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 761, /* lineNo */
  17,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  849,                                 /* lineNo */
  18,                                  /* colNo */
  "y",                                 /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  773,                                 /* lineNo */
  30,                                  /* colNo */
  "X",                                 /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 773, /* lineNo */
  30,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  705,                                 /* lineNo */
  72,                                  /* colNo */
  "nclx",                              /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  856,                                 /* lineNo */
  22,                                  /* colNo */
  "seq",                               /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  706,                                 /* lineNo */
  35,                                  /* colNo */
  "X",                                 /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 706, /* lineNo */
  35,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  791,                                 /* lineNo */
  31,                                  /* colNo */
  "r",                                 /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  785,                                 /* lineNo */
  29,                                  /* colNo */
  "hi",                                /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  791,                                 /* lineNo */
  49,                                  /* colNo */
  "e",                                 /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  794,                                 /* lineNo */
  48,                                  /* colNo */
  "ncl",                               /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  796,                                 /* lineNo */
  27,                                  /* colNo */
  "r",                                 /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  796,                                 /* lineNo */
  55,                                  /* colNo */
  "r",                                 /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  803,                                 /* lineNo */
  24,                                  /* colNo */
  "S2",                                /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 803, /* lineNo */
  24,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  810,                                 /* lineNo */
  65,                                  /* colNo */
  "S2",                                /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 810, /* lineNo */
  65,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  810,                                 /* lineNo */
  25,                                  /* colNo */
  "mdr",                               /* aName */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 810,/* lineNo */
  25,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo gb_emlrtRTEI = { 13,/* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = { 50,/* lineNo */
  34,                                  /* colNo */
  "FSRmdr_wrapper",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\FSRmdr_wrapper.m"/* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = { 457,/* lineNo */
  2,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = { 457,/* lineNo */
  4,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = { 470,/* lineNo */
  5,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = { 472,/* lineNo */
  5,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = { 510,/* lineNo */
  4,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = { 50,/* lineNo */
  1,                                   /* colNo */
  "FSRmdr_wrapper",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\FSRmdr_wrapper.m"/* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = { 511,/* lineNo */
  5,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = { 528,/* lineNo */
  5,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = { 474,/* lineNo */
  5,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = { 529,/* lineNo */
  5,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = { 526,/* lineNo */
  5,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = { 515,/* lineNo */
  9,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = { 558,/* lineNo */
  1,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = { 560,/* lineNo */
  5,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = { 568,/* lineNo */
  5,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = { 566,/* lineNo */
  13,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = { 585,/* lineNo */
  1,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = { 586,/* lineNo */
  6,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = { 28,/* lineNo */
  9,                                   /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = { 589,/* lineNo */
  1,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = { 597,/* lineNo */
  1,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = { 84,/* lineNo */
  5,                                   /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo fc_emlrtRTEI = { 105,/* lineNo */
  9,                                   /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo gc_emlrtRTEI = { 88,/* lineNo */
  5,                                   /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo hc_emlrtRTEI = { 601,/* lineNo */
  1,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = { 605,/* lineNo */
  7,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = { 605,/* lineNo */
  1,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = { 611,/* lineNo */
  5,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = { 611,/* lineNo */
  1,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = { 615,/* lineNo */
  6,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = { 615,/* lineNo */
  20,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = { 615,/* lineNo */
  1,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = { 620,/* lineNo */
  4,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = { 621,/* lineNo */
  5,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = { 626,/* lineNo */
  14,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = { 622,/* lineNo */
  5,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = { 626,/* lineNo */
  5,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = { 627,/* lineNo */
  5,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo vc_emlrtRTEI = { 630,/* lineNo */
  1,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo wc_emlrtRTEI = { 631,/* lineNo */
  13,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo xc_emlrtRTEI = { 640,/* lineNo */
  14,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo yc_emlrtRTEI = { 640,/* lineNo */
  29,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = { 640,/* lineNo */
  1,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo bd_emlrtRTEI = { 642,/* lineNo */
  1,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = { 643,/* lineNo */
  8,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = { 661,/* lineNo */
  5,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = { 692,/* lineNo */
  17,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = { 686,/* lineNo */
  13,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = { 736,/* lineNo */
  17,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = { 687,/* lineNo */
  13,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo id_emlrtRTEI = { 740,/* lineNo */
  9,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = { 726,/* lineNo */
  17,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = { 727,/* lineNo */
  17,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = { 714,/* lineNo */
  25,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo md_emlrtRTEI = { 728,/* lineNo */
  17,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo nd_emlrtRTEI = { 819,/* lineNo */
  13,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo od_emlrtRTEI = { 748,/* lineNo */
  20,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = { 729,/* lineNo */
  17,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = { 730,/* lineNo */
  17,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = { 826,/* lineNo */
  19,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = { 701,/* lineNo */
  34,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo td_emlrtRTEI = { 27,/* lineNo */
  6,                                   /* colNo */
  "sort",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"/* pName */
};

static emlrtRTEInfo ud_emlrtRTEI = { 28,/* lineNo */
  5,                                   /* colNo */
  "sort",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"/* pName */
};

static emlrtRTEInfo vd_emlrtRTEI = { 701,/* lineNo */
  25,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo wd_emlrtRTEI = { 760,/* lineNo */
  17,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo xd_emlrtRTEI = { 842,/* lineNo */
  13,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo yd_emlrtRTEI = { 844,/* lineNo */
  13,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo ae_emlrtRTEI = { 845,/* lineNo */
  18,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo be_emlrtRTEI = { 705,/* lineNo */
  49,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo ce_emlrtRTEI = { 848,/* lineNo */
  13,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo de_emlrtRTEI = { 849,/* lineNo */
  13,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo ee_emlrtRTEI = { 773,/* lineNo */
  21,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo fe_emlrtRTEI = { 706,/* lineNo */
  29,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo ge_emlrtRTEI = { 877,/* lineNo */
  21,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo he_emlrtRTEI = { 707,/* lineNo */
  46,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo ie_emlrtRTEI = { 778,/* lineNo */
  28,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo je_emlrtRTEI = { 788,/* lineNo */
  25,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo ke_emlrtRTEI = { 783,/* lineNo */
  25,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo le_emlrtRTEI = { 34,/* lineNo */
  1,                                   /* colNo */
  "rdivide_helper",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_helper.m"/* pName */
};

static emlrtRTEInfo me_emlrtRTEI = { 791,/* lineNo */
  21,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo ne_emlrtRTEI = { 796,/* lineNo */
  27,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo oe_emlrtRTEI = { 796,/* lineNo */
  53,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo pe_emlrtRTEI = { 566,/* lineNo */
  5,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo qe_emlrtRTEI = { 593,/* lineNo */
  1,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo re_emlrtRTEI = { 643,/* lineNo */
  1,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo se_emlrtRTEI = { 677,/* lineNo */
  10,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo te_emlrtRTEI = { 778,/* lineNo */
  21,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo ue_emlrtRTEI = { 794,/* lineNo */
  25,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo ve_emlrtRTEI = { 856,/* lineNo */
  17,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo we_emlrtRTEI = { 1,/* lineNo */
  30,                                  /* colNo */
  "FSRmdr_wrapper",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\FSRmdr_wrapper.m"/* pName */
};

static emlrtRTEInfo xe_emlrtRTEI = { 626,/* lineNo */
  23,                                  /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo ye_emlrtRTEI = { 589,/* lineNo */
  6,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo af_emlrtRTEI = { 542,/* lineNo */
  5,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRTEInfo bf_emlrtRTEI = { 640,/* lineNo */
  6,                                   /* colNo */
  "FSRmdr",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pName */
};

static emlrtRSInfo gk_emlrtRSI = { 659,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo hk_emlrtRSI = { 724,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo ik_emlrtRSI = { 658,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo jk_emlrtRSI = { 523,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo kk_emlrtRSI = { 66, /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtRSInfo lk_emlrtRSI = { 68, /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtRSInfo mk_emlrtRSI = { 542,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo nk_emlrtRSI = { 865,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo ok_emlrtRSI = { 864,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo pk_emlrtRSI = { 669,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo qk_emlrtRSI = { 722,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo rk_emlrtRSI = { 735,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

static emlrtRSInfo sk_emlrtRSI = { 723,/* lineNo */
  "FSRmdr",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m"/* pathName */
};

/* Function Declarations */
static void b_disp(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [25]);
static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [22]);
static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const char_T u[7]);
static void disp(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                 emlrtMCInfo *location);
static const mxArray *e_emlrt_marshallOut(const real_T u);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[29]);
static const mxArray *f_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [62]);
static const mxArray *g_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [63]);
static const mxArray *h_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [39]);
static const mxArray *i_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [42]);
static const mxArray *j_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_char_T *u);
static const mxArray *k_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [57]);
static const mxArray *l_emlrt_marshallOut(const emlrtStack *sp, const char_T
  u_data[], const int32_T u_size[2]);
static const mxArray *m_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [12]);
static const mxArray *n_emlrt_marshallOut(const emxArray_real_T *u);
static const mxArray *o_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [72]);

/* Function Definitions */
static void b_disp(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 1, &pArray, (const char_T *)
                        "disp", true, location);
}

static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [25])
{
  static const int32_T iv[2] = { 1, 25 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 25, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [22])
{
  static const int32_T iv[2] = { 1, 22 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 22, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const char_T u[7])
{
  static const int32_T iv[2] = { 1, 7 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void disp(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                 emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, NULL, 2, &pArrays[0], (const char_T *)
                        "disp", true, location);
}

static const mxArray *e_emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[29])
{
  static const int32_T iv[2] = { 1, 29 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 29, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *f_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [62])
{
  static const int32_T iv[2] = { 1, 62 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 62, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *g_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [63])
{
  static const int32_T iv[2] = { 1, 63 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 63, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *h_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [39])
{
  static const int32_T iv[2] = { 1, 39 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 39, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *i_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [42])
{
  static const int32_T iv[2] = { 1, 42 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 42, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *j_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_char_T *u)
{
  const mxArray *m;
  const mxArray *y;
  int32_T iv[2];
  y = NULL;
  iv[0] = 1;
  iv[1] = u->size[1];
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, u->size[1], m, &u->data[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *k_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [57])
{
  static const int32_T iv[2] = { 1, 57 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 57, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *l_emlrt_marshallOut(const emlrtStack *sp, const char_T
  u_data[], const int32_T u_size[2])
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

static const mxArray *m_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [12])
{
  static const int32_T iv[2] = { 1, 12 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 12, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *n_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T i;
  y = NULL;
  iv[0] = 1;
  iv[1] = u->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->size[1]; b_i++) {
    pData[i] = u->data[b_i];
    i++;
  }

  emlrtAssign(&y, m);
  return y;
}

static const mxArray *o_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [72])
{
  static const int32_T iv[2] = { 1, 72 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 72, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

void FSRmdr_wrapper(const emlrtStack *sp, const emxArray_real_T *y, const
                    emxArray_real_T *X, const emxArray_real_T *bsb, boolean_T
                    bsbmfullrank, const emxArray_real_T *bsbsteps, const
                    emxArray_real_T *constr, real_T init, boolean_T intercept,
                    boolean_T internationaltrade, boolean_T msg, boolean_T
                    nocheck, const real_T threshlevoutX_data[], const int32_T
                    threshlevoutX_size[2], emxArray_real_T *mdr, emxArray_real_T
                    *Un, emxArray_real_T *BB, emxArray_real_T *Bols,
                    emxArray_real_T *S2)
{
  static const char_T cv8[72] = { 'E', 's', 't', 'i', 'm', 'a', 't', 'e', ' ',
    'o', 'f', ' ', '\\', 'b', 'e', 't', 'a', ' ', 'w', 'h', 'i', 'c', 'h', ' ',
    'i', 's', ' ', 'u', 's', 'e', 'd', ' ', 'i', 's', ' ', 'b', 'a', 's', 'e',
    'd', ' ', 'o', 'n', ' ', 'p', 'r', 'e', 'v', 'i', 'o', 'u', 's', ' ', 's',
    't', 'e', 'p', ' ', 'w', 'i', 't', 'h', ' ', 'f', 'u', 'l', 'l', ' ', 'r',
    'a', 'n', 'k' };

  static const char_T cv4[63] = { 'A', 't', 't', 'e', 'n', 't', 'i', 'o', 'n',
    ' ', ':', ' ', 'i', 'n', 'i', 't', '1', ' ', 's', 'h', 'o', 'u', 'l', 'd',
    ' ', 'b', 'e', ' ', 's', 'm', 'a', 'l', 'l', 'e', 'r', ' ', 't', 'h', 'a',
    'n', ' ', 'n', '.', ' ', '\\', 'n', 'I', 't', ' ', 'i', 's', ' ', 's', 'e',
    't', ' ', 't', 'o', ' ', 'n', '-', '1', '.' };

  static const char_T cv3[62] = { 'A', 't', 't', 'e', 'n', 't', 'i', 'o', 'n',
    ' ', ':', ' ', 'i', 'n', 'i', 't', '1', ' ', 's', 'h', 'o', 'u', 'l', 'd',
    ' ', 'b', 'e', ' ', 'l', 'a', 'r', 'g', 'e', 'r', ' ', 't', 'h', 'a', 'n',
    ' ', 'p', '.', ' ', '\\', 'n', 'I', 't', ' ', 'i', 's', ' ', 's', 'e', 't',
    ' ', 't', 'o', ' ', 'p', '+', '1', '.' };

  static const char_T cv5[57] = { 'S', 'u', 'p', 'p', 'l', 'i', 'e', 'd', ' ',
    'i', 'n', 'i', 't', 'i', 'a', 'l', ' ', 's', 'u', 'b', 's', 'e', 't', ' ',
    'd', 'o', 'e', 's', ' ', 'n', 'o', 't', ' ', 'p', 'r', 'o', 'd', 'u', 'c',
    'e', ' ', 'f', 'u', 'l', 'l', ' ', 'r', 'a', 'n', 'k', ' ', 'm', 'a', 't',
    'r', 'i', 'x' };

  static const char_T cv12[44] = { 'W', 'a', 'r', 'n', 'i', 'n', 'g', ':', ' ',
    'i', 'n', 't', 'e', 'r', 'c', 'h', 'a', 'n', 'g', 'e', ' ', 'g', 'r', 'e',
    'a', 't', 'e', 'r', ' ', 't', 'h', 'a', 'n', ' ', '1', '0', ' ', 'w', 'h',
    'e', 'n', ' ', 'm', '=' };

  static const char_T cv1[42] = { 'U', 'n', 'a', 'b', 'l', 'e', ' ', 't', 'o',
    ' ', 'r', 'a', 'n', 'd', 'o', 'm', 'l', 'y', ' ', 's', 'a', 'm', 'p', 'l',
    'e', ' ', 'f', 'u', 'l', 'l', ' ', 'r', 'a', 'n', 'k', ' ', 'm', 'a', 't',
    'r', 'i', 'x' };

  static const char_T cv7[42] = { 'M', 'a', 't', 'r', 'i', 'x', ' ', 'w', 'i',
    't', 'h', 'o', 'u', 't', ' ', 'f', 'u', 'l', 'l', ' ', 'r', 'a', 'n', 'k',
    ' ', 'a', 't', ' ', 's', 't', 'e', 'p', ' ', 'm', '=', ' ', '%', '.', '0',
    'f', '\\', 'n' };

  static const char_T cv9[39] = { 'F', 'S', 'D', 'A', ':', 'F', 'S', 'R', 'm',
    'd', 'r', ',', 'R', 'a', 'n', 'k', ' ', 'p', 'r', 'o', 'b', 'l', 'e', 'm',
    ' ', 'i', 'n', ' ', 's', 't', 'e', 'p', ' ', '%', '.', '0', 'f', '\\', 'n' };

  static const char_T cv13[30] = { 'N', 'u', 'm', 'b', 'e', 'r', ' ', 'o', 'f',
    ' ', 'u', 'n', 'i', 't', 's', ' ', 'w', 'h', 'i', 'c', 'h', ' ', 'e', 'n',
    't', 'e', 'r', 'e', 'd', '=' };

  static const char_T cv6[29] = { 'F', 'S', ' ', 'l', 'o', 'o', 'p', ' ', 'w',
    'i', 'l', 'l', ' ', 'n', 'o', 't', ' ', 'b', 'e', ' ', 'p', 'e', 'r', 'f',
    'o', 'r', 'm', 'e', 'd' };

  static const char_T cv11[25] = { 'p', 'r', 'o', 'd', 'u', 'c', 'e', ' ', 'a',
    ' ', 's', 'i', 'n', 'g', 'u', 'l', 'a', 'r', ' ', 'm', 'a', 't', 'r', 'i',
    'x' };

  static const char_T cv[22] = { 'F', 'S', 'D', 'A', ':', 'F', 'S', 'R', 'm',
    'd', 'r', ':', 'N', 'o', 'F', 'u', 'l', 'l', 'R', 'a', 'n', 'k' };

  static const char_T cv10[12] = { 'O', 'b', 's', 'e', 'r', 'v', 'a', 't', 'i',
    'o', 'n', 's' };

  static const char_T cv2[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

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
  emxArray_boolean_T *boobsbsteps;
  emxArray_boolean_T *bsbT;
  emxArray_boolean_T *c_bsbsteps;
  emxArray_boolean_T *unitstopenalize;
  emxArray_char_T *r;
  emxArray_int32_T *ia;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_real_T b_constr;
  emxArray_real_T *Xb;
  emxArray_real_T *Xbb;
  emxArray_real_T *Xncl;
  emxArray_real_T *b_X;
  emxArray_real_T *b_b;
  emxArray_real_T *b_bsb;
  emxArray_real_T *b_bsbsteps;
  emxArray_real_T *b_r;
  emxArray_real_T *b_y;
  emxArray_real_T *blast;
  emxArray_real_T *bsbstepdef;
  emxArray_real_T *c_y;
  emxArray_real_T *e;
  emxArray_real_T *hi;
  emxArray_real_T *iniseq;
  emxArray_real_T *ncl;
  emxArray_real_T *ord;
  emxArray_real_T *r3;
  emxArray_real_T *r4;
  emxArray_real_T *r5;
  emxArray_real_T *resBSB;
  emxArray_real_T *seq;
  emxArray_real_T *seq500;
  emxArray_real_T *unit;
  emxArray_real_T *weight;
  emxArray_real_T *yb;
  emxArray_uint32_T *truerownamestopenalize;
  real_T b;
  real_T b_mm;
  real_T d;
  real_T d1;
  real_T init1;
  real_T initdef;
  real_T n;
  real_T p;
  real_T *x;
  int32_T b_result[2];
  int32_T b_tmp_size[2];
  int32_T c_result[2];
  int32_T c_tmp_size[2];
  int32_T thpmm_size[2];
  int32_T tmp_size[2];
  int32_T b_i;
  int32_T b_n;
  int32_T exitg1;
  int32_T i;
  int32_T i1;
  int32_T ini0;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T mm;
  int32_T nwhile;
  int32_T result;
  int32_T sizes_idx_1;
  uint32_T ij;
  char_T c_tmp_data[54];
  char_T d_tmp_data[40];
  char_T b_tmp_data[12];
  char_T tmp_data[10];
  int8_T input_sizes_idx_1;
  boolean_T Ra;
  boolean_T b_p;
  boolean_T bonflevout;
  boolean_T exitg2;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
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
  f_st.prev = &d_st;
  f_st.tls = d_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  j_st.prev = &i_st;
  j_st.tls = i_st.tls;
  k_st.prev = &j_st;
  k_st.tls = j_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_bsb, 1, &hb_emlrtRTEI, true);

  /*  Required input arguments */
  /*  y: a column vector of doubles of any length */
  /*  X: an array of doubles of any dimension */
  /*  bsb: a column vector of doubles of any length */
  /*  Optional input arguments (name / pairs) */
  /*  bsbmfullrank */
  /*  bsbsteps: a missing value, a scalar or a column vector of doubles of any length */
  /*  constr: a missing value, a scalar or a column vector of doubles of any length */
  /*  init a scalar double */
  /*  intercept a scalar boolean */
  /*  internationaltrade a scalar boolean */
  /*  msg is a scalar boolean */
  /*  nocheck is a boolean */
  /*  threshlevoutX a scalar double or an empty value */
  st.site = &emlrtRSI;
  i = b_bsb->size[0];
  b_bsb->size[0] = bsb->size[0];
  emxEnsureCapacity_real_T(&st, b_bsb, i, &hb_emlrtRTEI);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_bsb->data[i] = bsb->data[i];
  }

  emxInit_real_T(&st, &b_y, 1, &we_emlrtRTEI, true);

  /* FSRmdr computes minimum deletion residual and other basic linear regression quantities in each step of the search */
  /*  */
  /* <a href="matlab: docsearchFS('FSRmdr')">Link to the help function</a> */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*     y:         Response variable. Vector. Response variable, specified as */
  /*                a vector of length n, where n is the number of */
  /*                observations. Each entry in y is the response for the */
  /*                corresponding row of X. */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*   X :          Predictor variables. Matrix. Matrix of explanatory */
  /*                variables (also called 'regressors') of dimension n x (p-1) */
  /*                where p denotes the number of explanatory variables */
  /*                including the intercept. */
  /*                Rows of X represent observations, and columns represent */
  /*                variables. By default, there is a constant term in the */
  /*                model, unless you explicitly remove it using input option */
  /*                intercept, so do not include a column of 1s in X. Missing */
  /*                values (NaN's) and infinite values (Inf's) are allowed, */
  /*                since observations (rows) with missing or infinite values */
  /*                will automatically be excluded from the computations. */
  /*   bsb     :    list of units forming the initial subset. Vector. If bsb=0 */
  /*                (default) then the procedure starts with p units randomly */
  /*                chosen else if bsb is not 0 the search will start with */
  /*                m0=length(bsb) */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*  */
  /*  bsbmfullrank :What to do in case subset at step m (say bsbm) produces a */
  /*                non singular X. Scalar. */
  /*                This options controls what to do when rank(X(bsbm,:)) is */
  /*                smaller then number of explanatory variables. */
  /*                If bsbmfullrank = 1 (default is 1) these units (whose number */
  /*                is say mnofullrank) are constrained to enter the search in */
  /*                the final n-mnofullrank steps else the search continues */
  /*                using as estimate of beta at step m the estimate of beta */
  /*                found in the previous step. */
  /*                Example - 'bsbmfullrank',1 */
  /*                Data Types - double */
  /*  */
  /*    bsbsteps :  Save the units forming subsets. Vector. It specifies for */
  /*                which steps of the fwd search it */
  /*                is necessary to save the units forming subsets. If bsbsteps */
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
  /*   constr :     Constrained search. Vector. r x 1 vector which contains the */
  /*                list of units which are forced to join the search in the */
  /*                last r steps. The default is constr=[]. */
  /*                 No constraint is imposed */
  /*                Example - 'constr',[1:10] forces the first 10 units to join */
  /*                the subset in the last 10 steps */
  /*                Data Types - double */
  /*  */
  /*   init :       Search initialization. Scalar. */
  /*                It specifies the point where to initialize the search and */
  /*                start monitoring required diagnostics. If it is not */
  /*                specified it is set equal to: */
  /*                    p+1, if the sample size is smaller than 40; */
  /*                    min(3*p+1,floor(0.5*(n+p+1))), otherwise. */
  /*                Example - 'init',100 starts monitoring from step m=100 */
  /*                Data Types - double */
  /*  */
  /*     intercept :  Indicator for constant term. true (default) | false. */
  /*                  Indicator for the constant term (intercept) in the fit, */
  /*                  specified as the comma-separated pair consisting of */
  /*                  'Intercept' and either true to include or false to remove */
  /*                  the constant term from the model. */
  /*                  Example - 'intercept',false */
  /*                  Data Types - boolean */
  /*  */
  /*  internationaltrade : criterion for updating subset. Boolean. */
  /*                If internationaltrade is true (default is false) residuals */
  /*                which have large of the final column of X (generally */
  /*                quantity) are reduced. Note that this guarantees that */
  /*                leverge units which have a large value of  X will tend to */
  /*                stay in the subset. This option is particularly useful in */
  /*                the context of international trade data where we */
  /*                regress value (value=price*Q) on quantity (Q). In other */
  /*                words, we use the residuals as if we were regressing y/X */
  /*                (that is price) on the vector of ones. */
  /*                Example - 'internationaltrade',true */
  /*                Data Types - boolean */
  /*  */
  /*   msg  :       Level of output to display. Scalar. It controls whether to */
  /*                display or not messages about great interchange on the */
  /*                screen If msg==1 (default) */
  /*                messages are displayed on the screen */
  /*                else no message is displayed on the screen */
  /*                Example - 'msg',1 */
  /*                Data Types - double */
  /*  */
  /*   nocheck:     Check input arguments. Boolean. If nocheck is equal to true no */
  /*                check is performed on matrix y and matrix X. Notice that y */
  /*                and X are left unchanged. In other words the additioanl */
  /*                column of ones for the intercept is not added. As default */
  /*                nocheck=false. The controls on h, alpha and nsamp still remain */
  /*                Example - 'nocheck',true */
  /*                Data Types - boolean */
  /*  */
  /* threshlevoutX: threshold for high leverage units. Scalar or empty value. */
  /*                Threshold to bound the effect of high leverage units in the */
  /*                computation of deletion residuals. In the computation of */
  /*                the quantity $h_i(m^*) = x_i^T\{X(m^*)^TX(m^*)\}^{-1}x_i$, */
  /*                $i \notin S^{(m)}_*$, units which very far from the bulk of */
  /*                the data (represented by $X(m^*)$) will have a huge value */
  /*                of $h_i(m^*)$ and consequently of the deletion residuals. */
  /*                In order to tackle this problem it is possible to put a */
  /*                bound to the value of $h_i(m^*)$. For example */
  /*                threshlevoutX=r imposes the contrainst that $h_i(m^*)$ */
  /*                cannot exceed $r \times p/m$. The default value of */
  /*                threshlevoutX is empty, which means that no threshold is */
  /*                imposed. */
  /*                Example - 'threshlevoutX',5 */
  /*                Data Types - double */
  /*  */
  /*   plots :      Plot on the screen. Scalar. If equal to one a plot of */
  /*                minimum deletion residual appears  on the screen with 1%, */
  /*                50% and 99% confidence bands else (default) no plot is */
  /*                shown. */
  /*                Example - 'plots',1 */
  /*                Data Types - double */
  /*                Remark: the plot which is produced is very simple. In order */
  /*                to control a series of options in this plot and in order to */
  /*                connect it dynamically to the other forward plots it is */
  /*                necessary to use function mdrplot. */
  /*  */
  /*  */
  /*  Output: */
  /*  */
  /*   mdr:          n -init x 2 matrix which contains the monitoring of minimum */
  /*                deletion residual at each step of the forward search. */
  /*                1st col = fwd search index (from init to n-1). */
  /*                2nd col = minimum deletion residual. */
  /*                REMARK: if in a certain step of the search matrix is */
  /*                singular, this procedure checks how many observations */
  /*                produce a singular matrix. In this case mdr is a column */
  /*                vector which contains the list of units for which matrix X */
  /*                is non singular. */
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
  /*   BB:          Units belonging to subset in each step. Matrix. */
  /*                n x (n-init+1) or n-by-length(bsbsteps) matrix (depending on input */
  /*                option bsbsteps) which contains information about the units */
  /*                belonging to the subset at each step of the forward search. */
  /*                BB has the following structure */
  /*                1-st row has number 1 in correspondence of the steps in */
  /*                    which unit 1 is included inside subset and a missing */
  /*                    value for the other steps */
  /*                ...... */
  /*                (n-1)-th row has number n-1 in correspondence of the steps in */
  /*                    which unit n-1 is included inside subset and a missing */
  /*                    value for the other steps */
  /*                n-th row has number n in correspondence of the steps in */
  /*                    which unit n is included inside subset and a missing */
  /*                    value for the other steps */
  /*                The size of matrix BB is n x (n-init+1) if option input */
  /*                bsbsteps is 0 else the size is n-by-length(bsbsteps). */
  /*   Bols:        OLS coefficents. Matrix. */
  /*                (n-init+1) x (p+1) matrix containing the monitoring of */
  /*                estimated beta coefficients in each step of the forward */
  /*                search. */
  /*   S2:          S2 and R2. Matrix. */
  /*                (n-init+1) x 3 matrix containing the monitoring of S2 (2nd */
  /*                column)and R2 (third column) in each step of the forward */
  /*                search. */
  /*  */
  /*  */
  /*  More About: */
  /*  */
  /*                Let $S^{(m)}_* \in \cal{M}$ be the  optimum subset of size $m$, */
  /*                for which the matrix of regressors is $X(m^*)$. Least squares */
  /*                applied to this subset yields parameter estimates */
  /*                $\hat{\beta}(m^*)$ and $s^2(m^*)$, the mean square estimate of */
  /*                $\sigma^2$ on $m-p$ degrees of freedom. Residuals can be */
  /*                calculated for all observations including those not in */
  /*                $S^{(m)}_*$. The $n$ resulting least squares residuals are */
  /*                \begin{equation} */
  /*                  e_i(m^*) =  y_i -x_i^T\hat{\beta}(m^*). \label{eq2.14a} */
  /*                \end{equation} */
  /*                The search moves forward */
  /*                with the subset $S^{(m+1)}_*$ consisting of the observations with */
  /*                the $m+1$ smallest absolute values of $e_i(m^*)$. When $m < n$ the */
  /*                estimates of the parameters are based on only those observations */
  /*                giving the central $m$ residuals. */
  /*                To test for outliers the deletion residual is calculated for the */
  /*                $n-m$ observations not in $S^{(m)}_*$. These residuals are */
  /*                \begin{equation} */
  /*                r_i^*(m^*)  = \frac{y_{i} - x_{i}^T\hat{\beta}(m^*)} { */
  /*                \sqrt{s^2(m^*)\{1 + h_i(m^*)\}}}  = \frac{e_{i}(m^*)} { */
  /*                \sqrt{s^2(m^*)\{1 + h_i(m^*)\}}}, */
  /*                \end{equation} */
  /*                where $h_i(m^*) = x_i^T\{X(m^*)^TX(m^*)\}^{-1}x_i$;  the leverage */
  /*                of each observation depends on $S^{(m)}_*$. Let the observation */
  /*                nearest to those constituting $S^{(m)}_*$ be */
  /*                $i_{\mbox{min}}$ where */
  /*                \[ */
  /*                i_{\mbox{min}} = \arg \min | r^*_i(m^*)| \; \mbox{for} \; i \notin S^{(m)}_*, */
  /*                \] */
  /*                the observation with the minimum absolute deletion  residual among */
  /*                those not in $S^{(m)}_*$. This function computes */
  /*                $r_i^*(m^*)$ for $m^*=init, init+1, \ldots, n-1$. */
  /*  */
  /*  See also: FSR, FSReda */
  /*  */
  /*  */
  /*  References: */
  /*  */
  /*  Atkinson, A.C. and Riani, M. (2000), "Robust Diagnostic Regression */
  /*  Analysis", Springer Verlag, New York. */
  /*  Atkinson, A.C. and Riani, M. (2006), Distribution theory and */
  /*  simulations for tests of outliers in regression, "Journal of */
  /*  Computational and Graphical Statistics", Vol. 15, pp. 460-476. */
  /*  Riani, M. and Atkinson, A.C. (2007), Fast calibrations of the forward */
  /*  search for testing multiple outliers in regression, "Advances in Data */
  /*  Analysis and Classification", Vol. 1, pp. 123-141. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('FSRmdr')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % FSRmdr with all default options. */
  /*     % Compute minimum deletion residual. */
  /*     % Monitor minimum deletion residual in each step of the forward search. */
  /*     % Common part to all examples: load fishery dataset. */
  /*      load('fishery'); */
  /*      y=fishery{:,2}; */
  /*      X=fishery{:,1}; */
  /*      % Find starting subset */
  /*      [out]=LXS(y,X,'nsamp',10000); */
  /*      [mdr] = FSRmdr(y,X,out.bs); */
  /*      plot(mdr(:,1),mdr(:,2)) */
  /*      title('Monitoring of minimum deletion residual') */
  /* } */
  /* { */
  /*     % FSRmdr with optional arguments. */
  /*     % Choose step to start monitoring. */
  /*     % Compute minimum deletion residual and start monitoring it from step */
  /*     % 60. */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*      % Find starting subset */
  /*      [out]=LXS(y,X,'nsamp',10000); */
  /*     [mdr] = FSRmdr(y,X,out.bs,'init',60); */
  /* } */
  /* { */
  /*     % Analyze units entering the search in the final steps. */
  /*     % Compute minimum deletion residual and analyze the units entering */
  /*     % subset in each step of the fwd search (matrix Un).  As is well known, */
  /*     % the FS provides an ordering of the data from those most in agreement */
  /*     % with a suggested model (which enter the first steps) to those least in */
  /*     % agreement with it (which are included in the final steps). */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*      % Find starting subset */
  /*      [out]=LXS(y,X,'nsamp',10000); */
  /*     [mdr,Un] = FSRmdr(y,X,out.bs); */
  /* } */
  /* { */
  /*     % Units forming subset in each step. */
  /*     % Obtain detailed information about the units forming subset in each */
  /*     % step of the forward search (matrix BB). */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*      % Find starting subset */
  /*      [out]=LXS(y,X,'nsamp',10000); */
  /*     [mdr,Un,BB] = FSRmdr(y,X,out.bs); */
  /* } */
  /* { */
  /*     % Monitor \( \hat  \beta \). */
  /*     % Monitor how the estimates of beta coefficients changes as the subset */
  /*     % size increases (matrix Bols). */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*      % Find starting subset */
  /*      [out]=LXS(y,X,'nsamp',10000); */
  /*     [mdr,Un,BB,Bols] = FSRmdr(y,X,out.bs); */
  /* } */
  /* { */
  /*     % Monitor $s^2$. */
  /*     % Monitor the estimate of $\sigma^2$ in each step of the fwd search */
  /*     % (matrix S2). */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*      % Find starting subset */
  /*      [out]=LXS(y,X,'nsamp',10000); */
  /*     [mdr,Un,BB,Bols,S2] = FSRmdr(y,X,out.bs); */
  /*     plot(S2(:,1),S2(:,2)) */
  /*     title('Monitoring of s2') */
  /* } */
  /* { */
  /*     % Specify a regression model without intercept. */
  /*     % FSRmdr using a regression model without intercept. */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*      % Find starting subset */
  /*      [out]=LXS(y,X,'nsamp',10000); */
  /*     [mdr,Un,BB,Bols,S2] = FSRmdr(y,X,out.bs,'intercept',false); */
  /* } */
  /* { */
  /*     % Example of the use of option nocheck. */
  /*     %FSRmdr applied without doing any checks on y and X variables. */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*      % Find starting subset */
  /*      [out]=LXS(y,X,'nsamp',10000); */
  /*     [mdr,Un,BB,Bols,S2] = FSRmdr(y,X,out.bs,'nocheck',true); */
  /* } */
  /* { */
  /*     %% Monitoring of s2, and the evolution of beta coefficients for the Hawkins dataset */
  /*     load('hawkins.txt'); */
  /*     y=hawkins(:,9); */
  /*     X=hawkins(:,1:8); */
  /*     [out]=LXS(y,X,'nsamp',10000); */
  /*     [~,~,~,Bols,S2] = FSRmdr(y,X,out.bs); */
  /*     if isnan(S2) */
  /*         disp('NoFullRank in initial subset, please rerun FSRmdr') */
  /*     else */
  /*         %The forward plot of s2 shows that initially the estimate is virtually */
  /*         %zero. The four line segments comprising the plot correspond to the four */
  /*         %groups of observations */
  /*  */
  /*         % Plot of the monitoring of S2 and R2 */
  /*         figure; */
  /*         subplot(1,2,1) */
  /*         plot(S2(:,1),S2(:,2)) */
  /*         xlabel('Subset size m'); */
  /*         ylabel('S2'); */
  /*         subplot(1,2,2) */
  /*         plot(S2(:,1),S2(:,3)) */
  /*         xlabel('Subset size m'); */
  /*         ylabel('R2'); */
  /*  */
  /*         %The forward plots of the estimates of the beta coefficients show that they are virtually constant until m = 86, after which they start fluctuating in different directions. */
  /*  */
  /*         % Plots of the monitoring of "Estimates of beta coefficients" */
  /*         figure; */
  /*         for j=3:size(Bols,2) */
  /*             subplot(2,4,j-2) */
  /*             plot(Bols(:,1),Bols(:,j)) */
  /*             xlabel('Subset size m'); */
  /*             ylabel(['b' num2str(j-2)]); */
  /*         end */
  /*     end */
  /* } */
  /* { */
  /*     %% Store units forming subsets in selected steps. */
  /*     % In this example the units forming subset are stored just for */
  /*     % selected steps. */
  /*     load('hawkins.txt'); */
  /*     y=hawkins(:,9); */
  /*     X=hawkins(:,1:8); */
  /*     rng('default') */
  /*     rng(100) */
  /*     [out]=LXS(y,X,'nsamp',10000); */
  /*     [mdr,Un,BB,Bols,S2] = FSRmdr(y,X,out.bs,'bsbsteps',[30 60]); */
  /*     if isnan(S2) */
  /*         disp('NoFullRank in initial subset, please rerun FSRmdr') */
  /*     else */
  /*         % BB has just two columns */
  /*         % First column contains information about units forming subset at step m=30 */
  /*         % sum(~isnan(BB(:,1))) is 30 */
  /*         % Second column contains information about units forming subset at step m=60 */
  /*         % sum(~isnan(BB(:,2))) is 60 */
  /*         disp(sum(~isnan(BB(:,1)))) */
  /*         disp(sum(~isnan(BB(:,2)))) */
  /*     end */
  /* } */
  /* { */
  /*     %% Example of the use of option threshlevoutX. */
  /*     % In this example a set of remote units is added to a cloud of points. */
  /*     % The purpose of this example is to show that in presence of units very far */
  /*     % from the bulk of th data (bad or good elverage points) it is necessary to */
  /*     % bound their effect putting a constraint on their leverage hi=xi'(X'X)xi */
  /*     rng(10000) */
  /*     n=100; */
  /*     p=1; */
  /*     X=randn(n,p); */
  /*     epsil=10; */
  /*     beta=ones(p,1); */
  /*     y=X*beta+randn(n,1)*epsil; */
  /*     % Add 10 very remote points */
  /*     add=3; */
  /*     Xadd=X(1:add,:)+5000; */
  /*     yadd=y(1:add)+200; */
  /*     Xall=[X;Xadd]; */
  /*     yall=[y;yadd]; */
  /*     outLXS=LXS(y,X); */
  /*     bs=outLXS.bs; */
  /*     subplot(2,1,1) */
  /*     out1=FSRmdr(yall,Xall,bs,'plots',1); */
  /*     xylim=axis; */
  /*     ylabel('mdr') */
  /*     title('Monitoring of mdr without bound on the leverage') */
  /*     subplot(2,1,2) */
  /*     out2=FSRmdr(yall,Xall,bs,'plots',1,'threshlevoutX',10); */
  /*     ylim(xylim(3:4)); */
  /*     ylabel('mdr') */
  /*     title('Monitoring of mdr with bound on the leverage') */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checking */
  i = b_y->size[0];
  b_y->size[0] = y->size[0];
  emxEnsureCapacity_real_T(&st, b_y, i, &ib_emlrtRTEI);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] = y->data[i];
  }

  emxInit_real_T(&st, &b_X, 2, &we_emlrtRTEI, true);
  i = b_X->size[0] * b_X->size[1];
  b_X->size[0] = X->size[0];
  b_X->size[1] = X->size[1];
  emxEnsureCapacity_real_T(&st, b_X, i, &jb_emlrtRTEI);
  loop_ub = X->size[0] * X->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_X->data[i] = X->data[i];
  }

  b_st.site = &xb_emlrtRSI;
  chkinputR(&b_st, b_y, b_X, intercept, nocheck, &n, &p);

  /*  User options */
  if (n < 40.0) {
    initdef = p + 1.0;
  } else {
    initdef = muDoubleScalarMin(3.0 * p + 1.0, muDoubleScalarFloor(0.5 * ((n + p)
      + 1.0)));
  }

  /*  Default for vector bsbsteps which indicates for which steps of the fwd */
  /*  search units forming subset have to be saved */
  emxInit_real_T(&st, &bsbstepdef, 2, &kb_emlrtRTEI, true);
  if (n <= 5000.0) {
    i = bsbstepdef->size[0] * bsbstepdef->size[1];
    bsbstepdef->size[0] = 1;
    bsbstepdef->size[1] = 1;
    emxEnsureCapacity_real_T(&st, bsbstepdef, i, &kb_emlrtRTEI);
    bsbstepdef->data[0] = 0.0;
  } else {
    b = 100.0 * muDoubleScalarFloor(n / 100.0);
    emxInit_real_T(&st, &iniseq, 2, &lb_emlrtRTEI, true);
    if (muDoubleScalarIsNaN(b)) {
      i = iniseq->size[0] * iniseq->size[1];
      iniseq->size[0] = 1;
      iniseq->size[1] = 1;
      emxEnsureCapacity_real_T(&st, iniseq, i, &lb_emlrtRTEI);
      iniseq->data[0] = rtNaN;
    } else {
      i = iniseq->size[0] * iniseq->size[1];
      iniseq->size[0] = 1;
      loop_ub = (int32_T)muDoubleScalarFloor((b - 100.0) / 100.0);
      iniseq->size[1] = loop_ub + 1;
      emxEnsureCapacity_real_T(&st, iniseq, i, &lb_emlrtRTEI);
      for (i = 0; i <= loop_ub; i++) {
        iniseq->data[i] = 100.0 * (real_T)i + 100.0;
      }
    }

    nwhile = iniseq->size[1] - 1;
    loop_ub = 0;
    for (b_i = 0; b_i <= nwhile; b_i++) {
      if (iniseq->data[b_i] > initdef) {
        loop_ub++;
      }
    }

    sizes_idx_1 = 0;
    for (b_i = 0; b_i <= nwhile; b_i++) {
      if (iniseq->data[b_i] > initdef) {
        if (b_i + 1 > iniseq->size[1]) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, iniseq->size[1],
            &hb_emlrtBCI, &st);
        }

        iniseq->data[sizes_idx_1] = iniseq->data[b_i];
        sizes_idx_1++;
      }
    }

    i = iniseq->size[0] * iniseq->size[1];
    iniseq->size[0] = 1;
    iniseq->size[1] = loop_ub;
    emxEnsureCapacity_real_T(&st, iniseq, i, &nb_emlrtRTEI);
    i = bsbstepdef->size[0] * bsbstepdef->size[1];
    bsbstepdef->size[0] = 1;
    bsbstepdef->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&st, bsbstepdef, i, &qb_emlrtRTEI);
    bsbstepdef->data[0] = initdef;
    for (i = 0; i < loop_ub; i++) {
      bsbstepdef->data[i + 1] = iniseq->data[i];
    }

    emxFree_real_T(&iniseq);

    /*  OLD WRONG statement */
    /*  bsbstepdef = [initdef 100:100:100*floor(n/100)]; */
  }

  emxInit_boolean_T(&st, &bsbT, 1, &yb_emlrtRTEI, true);

  /* init1=options.init; */
  /*  Write in structure 'options' the options chosen by the user */
  /*  And check if the optional user parameters are reasonable. */
  i = bsbT->size[0];
  bsbT->size[0] = bsb->size[0];
  emxEnsureCapacity_boolean_T(&st, bsbT, i, &mb_emlrtRTEI);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[i] = (bsb->data[i] == 0.0);
  }

  emxInit_real_T(&st, &Xb, 2, &ob_emlrtRTEI, true);
  emxInit_real_T(&st, &yb, 1, &sb_emlrtRTEI, true);
  b_st.site = &wb_emlrtRSI;
  if (ifWhileCond(&b_st, bsbT)) {
    i = Xb->size[0] * Xb->size[1];
    Xb->size[0] = 1;
    Xb->size[1] = 1;
    emxEnsureCapacity_real_T(&st, Xb, i, &ob_emlrtRTEI);
    Xb->data[0] = 0.0;
    Ra = true;
    nwhile = 1;
    while (Ra && (nwhile < 100)) {
      b_st.site = &vb_emlrtRSI;
      randsample(&b_st, n, p, b_bsb);
      loop_ub = b_X->size[1];
      i = Xb->size[0] * Xb->size[1];
      Xb->size[0] = b_bsb->size[0];
      Xb->size[1] = b_X->size[1];
      emxEnsureCapacity_real_T(&st, Xb, i, &tb_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        sizes_idx_1 = b_bsb->size[0];
        for (i1 = 0; i1 < sizes_idx_1; i1++) {
          b_i = (int32_T)b_bsb->data[i1];
          if ((b_i < 1) || (b_i > b_X->size[0])) {
            emlrtDynamicBoundsCheckR2012b(b_i, 1, b_X->size[0], &jb_emlrtBCI,
              &st);
          }

          Xb->data[i1 + Xb->size[0] * i] = b_X->data[(b_i + b_X->size[0] * i) -
            1];
        }
      }

      b_st.site = &ub_emlrtRSI;
      c_st.site = &td_emlrtRSI;
      sizes_idx_1 = local_rank(&c_st, Xb);
      Ra = (sizes_idx_1 < p);
      nwhile++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }

    if (nwhile == 100) {
      b_st.site = &jk_emlrtRSI;
      disp(&b_st, c_emlrt_marshallOut(&b_st, cv), i_emlrt_marshallOut(&b_st, cv1),
           &emlrtMCI);
    }

    i = yb->size[0];
    yb->size[0] = b_bsb->size[0];
    emxEnsureCapacity_real_T(&st, yb, i, &sb_emlrtRTEI);
    loop_ub = b_bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      if (b_bsb->data[i] != (int32_T)muDoubleScalarFloor(b_bsb->data[i])) {
        emlrtIntegerCheckR2012b(b_bsb->data[i], &k_emlrtDCI, &st);
      }

      i1 = (int32_T)b_bsb->data[i];
      if ((i1 < 1) || (i1 > b_y->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, b_y->size[0], &kb_emlrtBCI, &st);
      }

      yb->data[i] = b_y->data[i1 - 1];
    }
  } else {
    loop_ub = b_X->size[1];
    i = Xb->size[0] * Xb->size[1];
    Xb->size[0] = bsb->size[0];
    Xb->size[1] = b_X->size[1];
    emxEnsureCapacity_real_T(&st, Xb, i, &pb_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      sizes_idx_1 = bsb->size[0];
      for (i1 = 0; i1 < sizes_idx_1; i1++) {
        if (bsb->data[i1] != (int32_T)muDoubleScalarFloor(bsb->data[i1])) {
          emlrtIntegerCheckR2012b(bsb->data[i1], &j_emlrtDCI, &st);
        }

        b_i = (int32_T)bsb->data[i1];
        if ((b_i < 1) || (b_i > b_X->size[0])) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, b_X->size[0], &gb_emlrtBCI, &st);
        }

        Xb->data[i1 + Xb->size[0] * i] = b_X->data[(b_i + b_X->size[0] * i) - 1];
      }
    }

    i = yb->size[0];
    yb->size[0] = bsb->size[0];
    emxEnsureCapacity_real_T(&st, yb, i, &rb_emlrtRTEI);
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)bsb->data[i];
      if ((i1 < 1) || (i1 > b_y->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i], 1, b_y->size[0],
          &ib_emlrtBCI, &st);
      }

      yb->data[i] = b_y->data[i1 - 1];
    }
  }

  ini0 = b_bsb->size[0];

  /*  check init */
  init1 = init;
  if (init < p + 1.0) {
    b_st.site = &tb_emlrtRSI;
    c_st.site = &te_emlrtRSI;
    d_st.site = &kk_emlrtRSI;
    e_st.site = &lk_emlrtRSI;
    c_emlrt_marshallIn(&d_st, feval(&d_st, d_emlrt_marshallOut(&d_st, cv2),
      e_emlrt_marshallOut(1.0), f_emlrt_marshallOut(&e_st, cv3), &m_emlrtMCI),
                       "<output of feval>");
    init1 = p + 1.0;
  } else if (init < b_bsb->size[0]) {
    emxInit_char_T(&st, &r, 2, &af_emlrtRTEI, true);
    b_st.site = &sb_emlrtRSI;
    b_sprintf(&b_st, b_bsb->size[0], r);
    b_st.site = &mk_emlrtRSI;
    emlrtDisplayR2012b(j_emlrt_marshallOut(&b_st, r), (char_T *)"ans",
                       &emlrtRTEI, &st);
    init1 = b_bsb->size[0];
    emxFree_char_T(&r);
  } else if (init >= n) {
    b_st.site = &rb_emlrtRSI;
    c_st.site = &te_emlrtRSI;
    d_st.site = &kk_emlrtRSI;
    e_st.site = &lk_emlrtRSI;
    c_emlrt_marshallIn(&d_st, feval(&d_st, d_emlrt_marshallOut(&d_st, cv2),
      e_emlrt_marshallOut(1.0), g_emlrt_marshallOut(&e_st, cv4), &m_emlrtMCI),
                       "<output of feval>");
    init1 = n - 1.0;
  }

  emxInit_real_T(&st, &b_bsbsteps, 2, &ub_emlrtRTEI, true);

  /*  if ~isempty(constr) */
  /*      constr=constr(:); */
  /*      constr(constr>n)=[]; */
  /*  end */
  i = b_bsbsteps->size[0] * b_bsbsteps->size[1];
  b_bsbsteps->size[0] = bsbsteps->size[0];
  b_bsbsteps->size[1] = bsbsteps->size[1];
  emxEnsureCapacity_real_T(&st, b_bsbsteps, i, &ub_emlrtRTEI);
  loop_ub = bsbsteps->size[0] * bsbsteps->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_bsbsteps->data[i] = bsbsteps->data[i];
  }

  if ((bsbsteps->size[0] == 0) || (bsbsteps->size[1] == 0)) {
    i = b_bsbsteps->size[0] * b_bsbsteps->size[1];
    b_bsbsteps->size[0] = 1;
    b_bsbsteps->size[1] = bsbstepdef->size[1];
    emxEnsureCapacity_real_T(&st, b_bsbsteps, i, &vb_emlrtRTEI);
    loop_ub = bsbstepdef->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_bsbsteps->data[i] = bsbstepdef->data[i];
    }
  }

  emxFree_real_T(&bsbstepdef);
  emxInit_real_T(&st, &weight, 1, &pe_emlrtRTEI, true);
  emxInit_real_T(&st, &hi, 1, &te_emlrtRTEI, true);
  if (internationaltrade) {
    if (b_X->size[1] < 1) {
      emlrtDynamicBoundsCheckR2012b(b_X->size[1], 1, b_X->size[1], &b_emlrtBCI,
        &st);
    }

    loop_ub = b_X->size[0];
    i = hi->size[0];
    hi->size[0] = b_X->size[0];
    emxEnsureCapacity_real_T(&st, hi, i, &xb_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      hi->data[i] = b_X->data[i + b_X->size[0] * (b_X->size[1] - 1)];
    }

    b_st.site = &qb_emlrtRSI;
    power(&b_st, hi, weight);
  } else {
    i = weight->size[0];
    weight->size[0] = 1;
    emxEnsureCapacity_real_T(&st, weight, i, &wb_emlrtRTEI);
    weight->data[0] = 0.0;
  }

  bonflevout = ((threshlevoutX_size[0] != 0) && (threshlevoutX_size[1] != 0));

  /*  Initialise key matrices */
  /*  Initialization of the n x 1 Boolean vector which contains a true in */
  /*  correspondence of the units belonging to subset in each step */
  loop_ub_tmp = (int32_T)n;
  i = bsbT->size[0];
  bsbT->size[0] = (int32_T)n;
  emxEnsureCapacity_boolean_T(&st, bsbT, i, &yb_emlrtRTEI);
  for (i = 0; i < loop_ub_tmp; i++) {
    bsbT->data[i] = false;
  }

  emxInit_int32_T(&st, &ia, 1, &we_emlrtRTEI, true);
  i = ia->size[0];
  ia->size[0] = b_bsb->size[0];
  emxEnsureCapacity_int32_T(&st, ia, i, &ac_emlrtRTEI);
  loop_ub = b_bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    i1 = (int32_T)b_bsb->data[i];
    if ((i1 < 1) || (i1 > (int32_T)n)) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, (int32_T)n, &lb_emlrtBCI, &st);
    }

    ia->data[i] = i1;
  }

  loop_ub = ia->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[ia->data[i] - 1] = true;
  }

  /*  sequence from 1 to n. */
  emxInit_real_T(&st, &c_y, 2, &ye_emlrtRTEI, true);
  if (muDoubleScalarIsNaN(n)) {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = 1;
    emxEnsureCapacity_real_T(&st, c_y, i, &bc_emlrtRTEI);
    c_y->data[0] = rtNaN;
  } else if (n < 1.0) {
    c_y->size[0] = 1;
    c_y->size[1] = 0;
  } else if (muDoubleScalarIsInf(n) && (1.0 == n)) {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = 1;
    emxEnsureCapacity_real_T(&st, c_y, i, &bc_emlrtRTEI);
    c_y->data[0] = rtNaN;
  } else {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    loop_ub = (int32_T)muDoubleScalarFloor(n - 1.0);
    c_y->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&st, c_y, i, &bc_emlrtRTEI);
    for (i = 0; i <= loop_ub; i++) {
      c_y->data[i] = (real_T)i + 1.0;
    }
  }

  emxInit_real_T(&st, &seq, 1, &cc_emlrtRTEI, true);
  i = seq->size[0];
  seq->size[0] = c_y->size[1];
  emxEnsureCapacity_real_T(&st, seq, i, &cc_emlrtRTEI);
  loop_ub = c_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq->data[i] = c_y->data[i];
  }

  /*  the set complementary to bsb. */
  /*  ncl=setdiff(seq,bsb); */
  nwhile = bsbT->size[0] - 1;
  loop_ub = 0;
  for (b_i = 0; b_i <= nwhile; b_i++) {
    if (!bsbT->data[b_i]) {
      loop_ub++;
    }
  }

  emxInit_real_T(&st, &ncl, 1, &qe_emlrtRTEI, true);
  i = ncl->size[0];
  ncl->size[0] = loop_ub;
  emxEnsureCapacity_real_T(&st, ncl, i, &nb_emlrtRTEI);
  sizes_idx_1 = 0;
  for (b_i = 0; b_i <= nwhile; b_i++) {
    if (!bsbT->data[b_i]) {
      if (b_i + 1 > seq->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0], &mb_emlrtBCI,
          &st);
      }

      ncl->data[sizes_idx_1] = seq->data[b_i];
      sizes_idx_1++;
    }
  }

  /*  The second column of matrix R will contain the OLS residuals at each step */
  /*  of the search */
  b_st.site = &pb_emlrtRSI;
  c_st.site = &bf_emlrtRSI;
  d_st.site = &cf_emlrtRSI;
  if ((int32_T)n != seq->size[0]) {
    emlrtErrorWithMessageIdR2018a(&d_st, &f_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  emxInit_real_T(&d_st, &b_r, 2, &dc_emlrtRTEI, true);
  i = b_r->size[0] * b_r->size[1];
  b_r->size[0] = seq->size[0];
  b_r->size[1] = 2;
  emxEnsureCapacity_real_T(&c_st, b_r, i, &dc_emlrtRTEI);
  loop_ub = seq->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_r->data[i] = seq->data[i];
  }

  for (i = 0; i < loop_ub_tmp; i++) {
    b_r->data[i + b_r->size[0]] = 0.0;
  }

  /*  If n is very large (>500), the step of the search is printed every 500 step */
  /*  seq500 is linked to printing */
  b = muDoubleScalarCeil(n / 500.0);
  if (muDoubleScalarIsNaN(b)) {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = 1;
    emxEnsureCapacity_real_T(&st, c_y, i, &ec_emlrtRTEI);
    c_y->data[0] = rtNaN;
  } else if (b < 1.0) {
    c_y->size[0] = 1;
    c_y->size[1] = 0;
  } else if (muDoubleScalarIsInf(b) && (1.0 == b)) {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = 1;
    emxEnsureCapacity_real_T(&st, c_y, i, &gc_emlrtRTEI);
    c_y->data[0] = rtNaN;
  } else {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = (int32_T)(b - 1.0) + 1;
    emxEnsureCapacity_real_T(&st, c_y, i, &fc_emlrtRTEI);
    loop_ub = (int32_T)(b - 1.0);
    for (i = 0; i <= loop_ub; i++) {
      c_y->data[i] = (real_T)i + 1.0;
    }
  }

  emxInit_real_T(&st, &seq500, 2, &hc_emlrtRTEI, true);
  i = seq500->size[0] * seq500->size[1];
  seq500->size[0] = 1;
  seq500->size[1] = c_y->size[1];
  emxEnsureCapacity_real_T(&st, seq500, i, &hc_emlrtRTEI);
  loop_ub = c_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq500->data[i] = 500.0 * c_y->data[i];
  }

  /*  Matrix Bols will contain the beta coefficients in each step of the fwd */
  /*  search. The first column of Bols contains the fwd search index */
  b_st.site = &ob_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  if (muDoubleScalarIsNaN(init1) || muDoubleScalarIsNaN(n)) {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = 1;
    emxEnsureCapacity_real_T(&c_st, c_y, i, &bc_emlrtRTEI);
    c_y->data[0] = rtNaN;
  } else if (n < init1) {
    c_y->size[0] = 1;
    c_y->size[1] = 0;
  } else if ((muDoubleScalarIsInf(init1) || muDoubleScalarIsInf(n)) && (init1 ==
              n)) {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = 1;
    emxEnsureCapacity_real_T(&c_st, c_y, i, &bc_emlrtRTEI);
    c_y->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(init1) == init1) {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    loop_ub = (int32_T)muDoubleScalarFloor(n - init1);
    c_y->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&c_st, c_y, i, &bc_emlrtRTEI);
    for (i = 0; i <= loop_ub; i++) {
      c_y->data[i] = init1 + (real_T)i;
    }
  } else {
    d_st.site = &ef_emlrtRSI;
    eml_float_colon(&d_st, init1, n, c_y);
  }

  emxInit_real_T(&c_st, &b_b, 1, &se_emlrtRTEI, true);
  b_st.site = &ob_emlrtRSI;
  i = b_b->size[0];
  b_b->size[0] = c_y->size[1];
  emxEnsureCapacity_real_T(&b_st, b_b, i, &ic_emlrtRTEI);
  loop_ub = c_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_b->data[i] = c_y->data[i];
  }

  d = n - init1;
  if (!(d + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d + 1.0, &emlrtDCI, &b_st);
  }

  d1 = (int32_T)muDoubleScalarFloor(d + 1.0);
  if (d + 1.0 != d1) {
    emlrtIntegerCheckR2012b(d + 1.0, &b_emlrtDCI, &b_st);
  }

  c_st.site = &hf_emlrtRSI;
  if (b_b->size[0] != 0) {
    result = b_b->size[0];
  } else if (((int32_T)(d + 1.0) != 0) && ((int32_T)p != 0)) {
    result = (int32_T)((n - init1) + 1.0);
  } else {
    result = 0;
    i = (int32_T)((n - init1) + 1.0);
    if (i > 0) {
      result = i;
    }
  }

  d_st.site = &cf_emlrtRSI;
  if ((b_b->size[0] != result) && (b_b->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &f_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  i = (int32_T)((n - init1) + 1.0);
  if ((i != result) && ((i != 0) && ((int32_T)p != 0))) {
    emlrtErrorWithMessageIdR2018a(&d_st, &f_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  Ra = (result == 0);
  if (Ra || (b_b->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }

  if (Ra || ((i != 0) && ((int32_T)p != 0))) {
    sizes_idx_1 = (int32_T)p;
  } else {
    sizes_idx_1 = 0;
  }

  i1 = Bols->size[0] * Bols->size[1];
  Bols->size[0] = result;
  Bols->size[1] = input_sizes_idx_1 + sizes_idx_1;
  emxEnsureCapacity_real_T(&c_st, Bols, i1, &jc_emlrtRTEI);
  loop_ub = input_sizes_idx_1;
  for (i1 = 0; i1 < loop_ub; i1++) {
    for (b_i = 0; b_i < result; b_i++) {
      Bols->data[b_i] = b_b->data[b_i];
    }
  }

  for (i1 = 0; i1 < sizes_idx_1; i1++) {
    for (b_i = 0; b_i < result; b_i++) {
      Bols->data[b_i + Bols->size[0] * (i1 + input_sizes_idx_1)] = rtNaN;
    }
  }

  /* initial value of beta coefficients is set to NaN */
  /*  S2 = (n-init1+1) x 3 matrix which will contain: */
  /*  1st col = fwd search index */
  /*  2nd col = S2= \sum e_i^2 / (m-p) */
  /*  3rd col = R^2 */
  b_st.site = &nb_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  if (muDoubleScalarIsNaN(init1) || muDoubleScalarIsNaN(n)) {
    i1 = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = 1;
    emxEnsureCapacity_real_T(&c_st, c_y, i1, &bc_emlrtRTEI);
    c_y->data[0] = rtNaN;
  } else if (n < init1) {
    c_y->size[0] = 1;
    c_y->size[1] = 0;
  } else if ((muDoubleScalarIsInf(init1) || muDoubleScalarIsInf(n)) && (init1 ==
              n)) {
    i1 = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = 1;
    emxEnsureCapacity_real_T(&c_st, c_y, i1, &bc_emlrtRTEI);
    c_y->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(init1) == init1) {
    i1 = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = (int32_T)muDoubleScalarFloor(n - init1) + 1;
    emxEnsureCapacity_real_T(&c_st, c_y, i1, &bc_emlrtRTEI);
    loop_ub = (int32_T)muDoubleScalarFloor(n - init1);
    for (i1 = 0; i1 <= loop_ub; i1++) {
      c_y->data[i1] = init1 + (real_T)i1;
    }
  } else {
    d_st.site = &ef_emlrtRSI;
    eml_float_colon(&d_st, init1, n, c_y);
  }

  b_st.site = &nb_emlrtRSI;
  i1 = b_b->size[0];
  b_b->size[0] = c_y->size[1];
  emxEnsureCapacity_real_T(&b_st, b_b, i1, &kc_emlrtRTEI);
  loop_ub = c_y->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_b->data[i1] = c_y->data[i1];
  }

  if (!(d + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d + 1.0, &h_emlrtDCI, &b_st);
  }

  if (d + 1.0 != d1) {
    emlrtIntegerCheckR2012b(d + 1.0, &g_emlrtDCI, &b_st);
  }

  if (!(d + 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d + 1.0, &m_emlrtDCI, &b_st);
  }

  if (d + 1.0 != d1) {
    emlrtIntegerCheckR2012b(d + 1.0, &l_emlrtDCI, &b_st);
  }

  c_st.site = &hf_emlrtRSI;
  if (b_b->size[0] != 0) {
    result = b_b->size[0];
  } else if (i != 0) {
    result = i;
  } else {
    result = 0;
  }

  d_st.site = &cf_emlrtRSI;
  if ((b_b->size[0] != result) && (b_b->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &f_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if ((i != result) && (i != 0)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &f_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  Ra = (result == 0);
  if (Ra || (b_b->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }

  if (Ra || (i != 0)) {
    sizes_idx_1 = 2;
  } else {
    sizes_idx_1 = 0;
  }

  i = S2->size[0] * S2->size[1];
  S2->size[0] = result;
  S2->size[1] = input_sizes_idx_1 + sizes_idx_1;
  emxEnsureCapacity_real_T(&c_st, S2, i, &lc_emlrtRTEI);
  loop_ub = input_sizes_idx_1;
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < result; i1++) {
      S2->data[i1] = b_b->data[i1];
    }
  }

  for (i = 0; i < sizes_idx_1; i++) {
    for (i1 = 0; i1 < result; i1++) {
      S2->data[i1 + S2->size[0] * (i + input_sizes_idx_1)] = rtNaN;
    }
  }

  /* initial value of S2 (R2) is set to NaN */
  /*  mdr = (n-init1-1) x 2 matrix which will contain min deletion residual */
  /*  among nobsb r_i^* */
  b_st.site = &mb_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  if (muDoubleScalarIsNaN(init1) || muDoubleScalarIsNaN(n - 1.0)) {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = 1;
    emxEnsureCapacity_real_T(&c_st, c_y, i, &bc_emlrtRTEI);
    c_y->data[0] = rtNaN;
  } else if (n - 1.0 < init1) {
    c_y->size[0] = 1;
    c_y->size[1] = 0;
  } else if ((muDoubleScalarIsInf(init1) || muDoubleScalarIsInf(n - 1.0)) &&
             (init1 == n - 1.0)) {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = 1;
    emxEnsureCapacity_real_T(&c_st, c_y, i, &bc_emlrtRTEI);
    c_y->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(init1) == init1) {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    loop_ub = (int32_T)muDoubleScalarFloor((n - 1.0) - init1);
    c_y->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&c_st, c_y, i, &bc_emlrtRTEI);
    for (i = 0; i <= loop_ub; i++) {
      c_y->data[i] = init1 + (real_T)i;
    }
  } else {
    d_st.site = &ef_emlrtRSI;
    eml_float_colon(&d_st, init1, n - 1.0, c_y);
  }

  b_st.site = &mb_emlrtRSI;
  i = b_b->size[0];
  b_b->size[0] = c_y->size[1];
  emxEnsureCapacity_real_T(&b_st, b_b, i, &mc_emlrtRTEI);
  loop_ub = c_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_b->data[i] = c_y->data[i];
  }

  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &o_emlrtDCI, &b_st);
  }

  b = (int32_T)muDoubleScalarFloor(d);
  if (d != b) {
    emlrtIntegerCheckR2012b(d, &n_emlrtDCI, &b_st);
  }

  i = hi->size[0];
  loop_ub = (int32_T)d;
  hi->size[0] = (int32_T)d;
  emxEnsureCapacity_real_T(&b_st, hi, i, &nc_emlrtRTEI);
  if (d != b) {
    emlrtIntegerCheckR2012b(d, &n_emlrtDCI, &b_st);
  }

  for (i = 0; i < loop_ub; i++) {
    hi->data[i] = rtNaN;
  }

  c_st.site = &bf_emlrtRSI;
  d_st.site = &cf_emlrtRSI;
  if ((int32_T)d != b_b->size[0]) {
    emlrtErrorWithMessageIdR2018a(&d_st, &f_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  i = mdr->size[0] * mdr->size[1];
  mdr->size[0] = b_b->size[0];
  mdr->size[1] = 2;
  emxEnsureCapacity_real_T(&st, mdr, i, &oc_emlrtRTEI);
  loop_ub = b_b->size[0];
  for (i = 0; i < loop_ub; i++) {
    mdr->data[i] = b_b->data[i];
  }

  loop_ub = hi->size[0];
  for (i = 0; i < loop_ub; i++) {
    mdr->data[i + mdr->size[0]] = rtNaN;
  }

  emxInit_boolean_T(&st, &c_bsbsteps, 2, &pc_emlrtRTEI, true);

  /* initial value of mdr is set to NaN */
  /*  Matrix BB will contain the units forming subset in each step (or in */
  /*  selected steps) of the forward search. The first column contains */
  /*  information about units forming subset at step init1. */
  i = c_bsbsteps->size[0] * c_bsbsteps->size[1];
  c_bsbsteps->size[0] = b_bsbsteps->size[0];
  c_bsbsteps->size[1] = b_bsbsteps->size[1];
  emxEnsureCapacity_boolean_T(&st, c_bsbsteps, i, &pc_emlrtRTEI);
  loop_ub = b_bsbsteps->size[0] * b_bsbsteps->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_bsbsteps->data[i] = (b_bsbsteps->data[i] == 0.0);
  }

  b_st.site = &lb_emlrtRSI;
  if (b_ifWhileCond(&b_st, c_bsbsteps)) {
    b_st.site = &kb_emlrtRSI;
    c_st.site = &df_emlrtRSI;
    if (muDoubleScalarIsNaN(init1) || muDoubleScalarIsNaN(n)) {
      i = c_y->size[0] * c_y->size[1];
      c_y->size[0] = 1;
      c_y->size[1] = 1;
      emxEnsureCapacity_real_T(&c_st, c_y, i, &bc_emlrtRTEI);
      c_y->data[0] = rtNaN;
    } else if (n < init1) {
      c_y->size[0] = 1;
      c_y->size[1] = 0;
    } else if ((muDoubleScalarIsInf(init1) || muDoubleScalarIsInf(n)) && (init1 ==
                n)) {
      i = c_y->size[0] * c_y->size[1];
      c_y->size[0] = 1;
      c_y->size[1] = 1;
      emxEnsureCapacity_real_T(&c_st, c_y, i, &bc_emlrtRTEI);
      c_y->data[0] = rtNaN;
    } else if (muDoubleScalarFloor(init1) == init1) {
      i = c_y->size[0] * c_y->size[1];
      c_y->size[0] = 1;
      c_y->size[1] = (int32_T)muDoubleScalarFloor(n - init1) + 1;
      emxEnsureCapacity_real_T(&c_st, c_y, i, &bc_emlrtRTEI);
      loop_ub = (int32_T)muDoubleScalarFloor(n - init1);
      for (i = 0; i <= loop_ub; i++) {
        c_y->data[i] = init1 + (real_T)i;
      }
    } else {
      d_st.site = &ef_emlrtRSI;
      eml_float_colon(&d_st, init1, n, c_y);
    }

    i = b_bsbsteps->size[0] * b_bsbsteps->size[1];
    b_bsbsteps->size[0] = 1;
    b_bsbsteps->size[1] = c_y->size[1];
    emxEnsureCapacity_real_T(&st, b_bsbsteps, i, &qc_emlrtRTEI);
    loop_ub = c_y->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_bsbsteps->data[i] = c_y->data[i];
    }

    i = BB->size[0] * BB->size[1];
    BB->size[0] = (int32_T)n;
    emxEnsureCapacity_real_T(&st, BB, i, &sc_emlrtRTEI);
    if (d + 1.0 != d1) {
      emlrtIntegerCheckR2012b(d + 1.0, &i_emlrtDCI, &st);
    }

    i = BB->size[0] * BB->size[1];
    BB->size[1] = (int32_T)(d + 1.0);
    emxEnsureCapacity_real_T(&st, BB, i, &sc_emlrtRTEI);
    if (d + 1.0 != d1) {
      emlrtIntegerCheckR2012b(d + 1.0, &p_emlrtDCI, &st);
    }

    loop_ub = (int32_T)n * (int32_T)(d + 1.0);
    for (i = 0; i < loop_ub; i++) {
      BB->data[i] = rtNaN;
    }
  } else {
    /*  The number of columns of matrix BB is equal to the number of steps */
    /*  for which bsbsteps is greater or equal than init1 */
    b_st.site = &jb_emlrtRSI;
    indexShapeCheck(&b_st, *(int32_T (*)[2])b_bsbsteps->size, *(int32_T (*)[2])
                    b_bsbsteps->size);
    nwhile = b_bsbsteps->size[0] * b_bsbsteps->size[1];
    for (b_i = 0; b_i < nwhile; b_i++) {
      if (b_bsbsteps->data[b_i] >= init1) {
        i = b_bsbsteps->size[0] * b_bsbsteps->size[1];
        if ((b_i + 1 < 1) || (b_i + 1 > i)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, i, &emlrtBCI, &st);
        }
      }
    }

    nwhile = b_bsbsteps->size[0] * b_bsbsteps->size[1] - 1;
    loop_ub = 0;
    for (b_i = 0; b_i <= nwhile; b_i++) {
      if (b_bsbsteps->data[b_i] >= init1) {
        loop_ub++;
      }
    }

    emxInit_int32_T(&st, &r1, 1, &xe_emlrtRTEI, true);
    i = r1->size[0];
    r1->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(&st, r1, i, &nb_emlrtRTEI);
    sizes_idx_1 = 0;
    for (b_i = 0; b_i <= nwhile; b_i++) {
      if (b_bsbsteps->data[b_i] >= init1) {
        r1->data[sizes_idx_1] = b_i + 1;
        sizes_idx_1++;
      }
    }

    i = hi->size[0];
    hi->size[0] = r1->size[0];
    emxEnsureCapacity_real_T(&st, hi, i, &rc_emlrtRTEI);
    loop_ub = r1->size[0];
    for (i = 0; i < loop_ub; i++) {
      hi->data[i] = b_bsbsteps->data[r1->data[i] - 1];
    }

    i = b_bsbsteps->size[0] * b_bsbsteps->size[1];
    b_bsbsteps->size[0] = r1->size[0];
    b_bsbsteps->size[1] = 1;
    emxEnsureCapacity_real_T(&st, b_bsbsteps, i, &tc_emlrtRTEI);
    loop_ub = r1->size[0];
    emxFree_int32_T(&r1);
    for (i = 0; i < loop_ub; i++) {
      b_bsbsteps->data[i] = hi->data[i];
    }

    if (b_bsbsteps->size[0] == 0) {
      nwhile = 0;
    } else {
      nwhile = muIntScalarMax_sint32(b_bsbsteps->size[0], 1);
    }

    i = BB->size[0] * BB->size[1];
    BB->size[0] = (int32_T)n;
    BB->size[1] = nwhile;
    emxEnsureCapacity_real_T(&st, BB, i, &uc_emlrtRTEI);
    loop_ub = (int32_T)n * nwhile;
    for (i = 0; i < loop_ub; i++) {
      BB->data[i] = rtNaN;
    }

    /*    BB = NaN(n, sum(bsbsteps>=init1)); */
  }

  emxFree_boolean_T(&c_bsbsteps);
  emxInit_boolean_T(&st, &boobsbsteps, 1, &vc_emlrtRTEI, true);
  i = boobsbsteps->size[0];
  boobsbsteps->size[0] = (int32_T)n;
  emxEnsureCapacity_boolean_T(&st, boobsbsteps, i, &vc_emlrtRTEI);
  for (i = 0; i < loop_ub_tmp; i++) {
    boobsbsteps->data[i] = false;
  }

  emxInit_int32_T(&st, &r2, 2, &we_emlrtRTEI, true);
  i = r2->size[0] * r2->size[1];
  r2->size[0] = b_bsbsteps->size[0];
  r2->size[1] = b_bsbsteps->size[1];
  emxEnsureCapacity_int32_T(&st, r2, i, &wc_emlrtRTEI);
  loop_ub = b_bsbsteps->size[0] * b_bsbsteps->size[1];
  for (i = 0; i < loop_ub; i++) {
    d1 = b_bsbsteps->data[i];
    if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
      emlrtIntegerCheckR2012b(d1, &q_emlrtDCI, &st);
    }

    if (((int32_T)d1 < 1) || ((int32_T)d1 > (int32_T)n)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d1, 1, (int32_T)n, &nb_emlrtBCI,
        &st);
    }

    r2->data[i] = (int32_T)d1;
  }

  loop_ub = r2->size[0] * r2->size[1];
  for (i = 0; i < loop_ub; i++) {
    boobsbsteps->data[r2->data[i] - 1] = true;
  }

  emxFree_int32_T(&r2);

  /*  ij = index which is linked with the columns of matrix BB. During the */
  /*  search every time a subset is stored inside matrix BB ij increases by one */
  ij = 1U;

  /*   Un is a Matrix whose 2nd column:11th col contains the unit(s) just */
  /*   included. */
  b_st.site = &ib_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  if (muDoubleScalarIsNaN(init1 + 1.0) || muDoubleScalarIsNaN(n)) {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = 1;
    emxEnsureCapacity_real_T(&c_st, c_y, i, &bc_emlrtRTEI);
    c_y->data[0] = rtNaN;
  } else if (n < init1 + 1.0) {
    c_y->size[0] = 1;
    c_y->size[1] = 0;
  } else if ((muDoubleScalarIsInf(init1 + 1.0) || muDoubleScalarIsInf(n)) &&
             (init1 + 1.0 == n)) {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = 1;
    emxEnsureCapacity_real_T(&c_st, c_y, i, &bc_emlrtRTEI);
    c_y->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(init1 + 1.0) == init1 + 1.0) {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    loop_ub = (int32_T)muDoubleScalarFloor(n - (init1 + 1.0));
    c_y->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&c_st, c_y, i, &bc_emlrtRTEI);
    for (i = 0; i <= loop_ub; i++) {
      c_y->data[i] = (init1 + 1.0) + (real_T)i;
    }
  } else {
    d_st.site = &ef_emlrtRSI;
    eml_float_colon(&d_st, init1 + 1.0, n, c_y);
  }

  if (d != b) {
    emlrtIntegerCheckR2012b(d, &r_emlrtDCI, &st);
  }

  i = hi->size[0];
  hi->size[0] = c_y->size[1];
  emxEnsureCapacity_real_T(&st, hi, i, &xc_emlrtRTEI);
  loop_ub = c_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    hi->data[i] = c_y->data[i];
  }

  emxInit_real_T(&st, &r3, 2, &yc_emlrtRTEI, true);
  i = r3->size[0] * r3->size[1];
  r3->size[0] = (int32_T)d;
  r3->size[1] = 10;
  emxEnsureCapacity_real_T(&st, r3, i, &yc_emlrtRTEI);
  loop_ub = (int32_T)d * 10;
  for (i = 0; i < loop_ub; i++) {
    r3->data[i] = rtNaN;
  }

  emxInit_real_T(&st, &r4, 2, &bf_emlrtRTEI, true);
  b_st.site = &ib_emlrtRSI;
  b_cat(&b_st, hi, r3, r4);
  i = Un->size[0] * Un->size[1];
  Un->size[0] = r4->size[0];
  Un->size[1] = 11;
  emxEnsureCapacity_real_T(&st, Un, i, &ad_emlrtRTEI);
  loop_ub = r4->size[0] * 11;
  emxFree_real_T(&r3);
  for (i = 0; i < loop_ub; i++) {
    Un->data[i] = r4->data[i];
  }

  emxFree_real_T(&r4);
  emxInit_real_T(&st, &blast, 1, &bd_emlrtRTEI, true);
  emxInit_real_T(&st, &Xbb, 2, &re_emlrtRTEI, true);
  emxInit_real_T(&st, &resBSB, 1, &cd_emlrtRTEI, true);
  i = blast->size[0];
  blast->size[0] = 1;
  emxEnsureCapacity_real_T(&st, blast, i, &bd_emlrtRTEI);
  blast->data[0] = 0.0;
  i = Xbb->size[0] * Xbb->size[1];
  Xbb->size[0] = 1;
  emxEnsureCapacity_real_T(&st, Xbb, i, &nb_emlrtRTEI);
  i = resBSB->size[0];
  resBSB->size[0] = 1;
  emxEnsureCapacity_real_T(&st, resBSB, i, &cd_emlrtRTEI);
  resBSB->data[0] = 0.0;

  /*  opts is a structure which contains the options to use in linsolve */
  /*  Start of the forward search */
  emxInit_real_T(&st, &e, 1, &id_emlrtRTEI, true);
  emxInit_real_T(&st, &Xncl, 2, &ee_emlrtRTEI, true);
  emxInit_boolean_T(&st, &unitstopenalize, 1, &ke_emlrtRTEI, true);
  emxInit_real_T(&st, &ord, 2, &me_emlrtRTEI, true);
  emxInit_uint32_T(&st, &truerownamestopenalize, 1, &ue_emlrtRTEI, true);
  emxInit_real_T(&st, &unit, 1, &ve_emlrtRTEI, true);
  emxInit_real_T(&st, &r5, 2, &we_emlrtRTEI, true);
  guard1 = false;
  if (!nocheck) {
    b_st.site = &hb_emlrtRSI;
    c_st.site = &td_emlrtRSI;
    sizes_idx_1 = local_rank(&c_st, Xb);
    if (sizes_idx_1 != p) {
      b_st.site = &ik_emlrtRSI;
      disp(&b_st, c_emlrt_marshallOut(&b_st, cv), k_emlrt_marshallOut(&b_st, cv5),
           &b_emlrtMCI);
      b_st.site = &gk_emlrtRSI;
      disp(&b_st, c_emlrt_marshallOut(&b_st, cv), emlrt_marshallOut(&b_st, cv6),
           &c_emlrtMCI);
      i = mdr->size[0] * mdr->size[1];
      mdr->size[0] = 1;
      mdr->size[1] = 1;
      emxEnsureCapacity_real_T(&st, mdr, i, &dd_emlrtRTEI);
      mdr->data[0] = rtNaN;

      /*  FS loop will not be performed */
      /*  rank check */
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    i = (int32_T)(n + (1.0 - (real_T)ini0));
    emlrtForLoopVectorCheckR2021a(ini0, 1.0, n, mxDOUBLE_CLASS, i, &h_emlrtRTEI,
      &st);
    mm = 0;
    do {
      exitg1 = 0;
      if (mm <= i - 1) {
        b_mm = (real_T)ini0 + (real_T)mm;

        /*  if n>5000 show every 500 steps the fwd search index */
        if (msg && (n > 5000.0)) {
          b_st.site = &gb_emlrtRSI;
          c_st.site = &kf_emlrtRSI;
          d_st.site = &lf_emlrtRSI;
          do_vectors(&d_st, b_mm, seq500, (real_T *)&initdef, b_result, (int32_T
                      *)&nwhile, &sizes_idx_1, (int32_T *)&loop_ub, &result);
          if (b_result[1] == 1) {
            b_st.site = &fb_emlrtRSI;
            int2str(&b_st, b_mm, tmp_data, b_result);
            tmp_size[0] = 1;
            tmp_size[1] = b_result[1] + 2;
            b_tmp_data[0] = 'm';
            b_tmp_data[1] = '=';
            loop_ub = b_result[1];
            if (0 <= loop_ub - 1) {
              memcpy(&b_tmp_data[2], &tmp_data[0], loop_ub * sizeof(char_T));
            }

            b_st.site = &pk_emlrtRSI;
            b_disp(&b_st, l_emlrt_marshallOut(&b_st, b_tmp_data, tmp_size),
                   &d_emlrtMCI);
          }
        }

        /*  Implicitly control the rank of Xb checking the condition number */
        /*  for inversion (which in the case of a rectangular matrix is */
        /*  nothing but the rank) */
        /*  Old instruction was b=Xb\yb; */
        b_st.site = &eb_emlrtRSI;
        linsolve(&b_st, Xb, yb, b_b, &initdef);

        /*  disp([mm condNumber]) */
        Ra = !(initdef < p);
        guard2 = false;
        if (Ra) {
          /*  rank is ok */
          b_st.site = &db_emlrtRSI;
          c_st.site = &mc_emlrtRSI;
          dynamic_size_checks(&c_st, Xb, b_b, Xb->size[1], b_b->size[0]);
          c_st.site = &lc_emlrtRSI;
          mtimes(&c_st, Xb, b_b, resBSB);
          if (yb->size[0] != resBSB->size[0]) {
            emlrtSizeEqCheck1DR2012b(yb->size[0], resBSB->size[0], &emlrtECI,
              &st);
          }

          i1 = resBSB->size[0];
          resBSB->size[0] = yb->size[0];
          emxEnsureCapacity_real_T(&st, resBSB, i1, &fd_emlrtRTEI);
          loop_ub = yb->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            resBSB->data[i1] = yb->data[i1] - resBSB->data[i1];
          }

          i1 = blast->size[0];
          blast->size[0] = b_b->size[0];
          emxEnsureCapacity_real_T(&st, blast, i1, &hd_emlrtRTEI);
          loop_ub = b_b->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            blast->data[i1] = b_b->data[i1];
          }

          /*  Store correctly computed b for the case of rank problem */
          guard2 = true;

          /*  number of independent columns is smaller than number of parameters */
        } else if (bsbmfullrank) {
          i = b_b->size[0];
          b_b->size[0] = (int32_T)n;
          emxEnsureCapacity_real_T(&st, b_b, i, &ed_emlrtRTEI);
          for (i = 0; i < loop_ub_tmp; i++) {
            b_b->data[i] = 0.0;
          }

          if (1.0 > b_mm) {
            loop_ub = 0;
          } else {
            if (1 > (int32_T)n) {
              emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)n, &d_emlrtBCI, &st);
            }

            if (((int32_T)b_mm < 1) || ((int32_T)b_mm > (int32_T)n)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_mm, 1, (int32_T)n,
                &e_emlrtBCI, &st);
            }

            loop_ub = (int32_T)b_mm;
          }

          if (loop_ub != b_bsb->size[0]) {
            emlrtSubAssignSizeCheck1dR2017a(loop_ub, b_bsb->size[0], &b_emlrtECI,
              &st);
          }

          for (i = 0; i < loop_ub; i++) {
            b_b->data[i] = b_bsb->data[i];
          }

          sizes_idx_1 = 1;
          while (sizes_idx_1 == 1) {
            /*  Increase the size of the subset by one unit iteratively until you */
            /*  obtain a full rank matrix */
            b_i = 0;
            exitg2 = false;
            while ((!exitg2) && (b_i <= ncl->size[0] - 1)) {
              b_st.site = &cb_emlrtRSI;
              if (b_i + 1 > ncl->size[0]) {
                emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, ncl->size[0],
                  &ob_emlrtBCI, &b_st);
              }

              d = ncl->data[b_i];
              if (d != (int32_T)muDoubleScalarFloor(d)) {
                emlrtIntegerCheckR2012b(d, &c_emlrtDCI, &b_st);
              }

              if (((int32_T)d < 1) || ((int32_T)d > b_X->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, b_X->size[0],
                  &c_emlrtBCI, &b_st);
              }

              c_st.site = &hf_emlrtRSI;
              if ((Xb->size[0] != 0) && (Xb->size[1] != 0)) {
                result = Xb->size[1];
              } else if (b_X->size[1] != 0) {
                result = b_X->size[1];
              } else {
                result = Xb->size[1];
              }

              d_st.site = &cf_emlrtRSI;
              if ((Xb->size[1] != result) && ((Xb->size[0] != 0) && (Xb->size[1]
                    != 0))) {
                emlrtErrorWithMessageIdR2018a(&d_st, &f_emlrtRTEI,
                  "MATLAB:catenate:matrixDimensionMismatch",
                  "MATLAB:catenate:matrixDimensionMismatch", 0);
              }

              if ((b_X->size[1] != result) && (b_X->size[1] != 0)) {
                emlrtErrorWithMessageIdR2018a(&d_st, &f_emlrtRTEI,
                  "MATLAB:catenate:matrixDimensionMismatch",
                  "MATLAB:catenate:matrixDimensionMismatch", 0);
              }

              Ra = (result == 0);
              if (Ra || ((Xb->size[0] != 0) && (Xb->size[1] != 0))) {
                sizes_idx_1 = Xb->size[0];
              } else {
                sizes_idx_1 = 0;
              }

              if (Ra || (b_X->size[1] != 0)) {
                nwhile = 1;
              } else {
                nwhile = 0;
              }

              loop_ub = b_X->size[1];
              i = c_y->size[0] * c_y->size[1];
              c_y->size[0] = 1;
              c_y->size[1] = b_X->size[1];
              emxEnsureCapacity_real_T(&c_st, c_y, i, &sd_emlrtRTEI);
              for (i = 0; i < loop_ub; i++) {
                c_y->data[i] = b_X->data[((int32_T)ncl->data[b_i] + b_X->size[0]
                  * i) - 1];
              }

              i = Xbb->size[0] * Xbb->size[1];
              Xbb->size[0] = sizes_idx_1 + nwhile;
              Xbb->size[1] = result;
              emxEnsureCapacity_real_T(&c_st, Xbb, i, &vd_emlrtRTEI);
              for (i = 0; i < result; i++) {
                for (i1 = 0; i1 < sizes_idx_1; i1++) {
                  Xbb->data[i1 + Xbb->size[0] * i] = Xb->data[i1 + sizes_idx_1 *
                    i];
                }
              }

              for (i = 0; i < result; i++) {
                for (i1 = 0; i1 < nwhile; i1++) {
                  Xbb->data[sizes_idx_1 + Xbb->size[0] * i] = c_y->data[nwhile *
                    i];
                }
              }

              b_st.site = &bb_emlrtRSI;
              c_st.site = &td_emlrtRSI;
              sizes_idx_1 = local_rank(&c_st, Xbb);
              if (sizes_idx_1 == p) {
                sizes_idx_1 = 0;
                b_i++;
                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b(&st);
                }
              } else {
                if (1 > Xbb->size[0] - 1) {
                  loop_ub = 0;
                } else {
                  if (1 > b_b->size[0]) {
                    emlrtDynamicBoundsCheckR2012b(1, 1, b_b->size[0],
                      &f_emlrtBCI, &st);
                  }

                  if ((Xbb->size[0] - 1 < 1) || (Xbb->size[0] - 1 > b_b->size[0]))
                  {
                    emlrtDynamicBoundsCheckR2012b(Xbb->size[0] - 1, 1, b_b->
                      size[0], &g_emlrtBCI, &st);
                  }

                  loop_ub = Xbb->size[0] - 1;
                }

                c_result[0] = 1;
                c_result[1] = loop_ub;
                b_st.site = &ab_emlrtRSI;
                b_indexShapeCheck(&b_st, b_b->size[0], c_result);
                if (1 > Xbb->size[0]) {
                  sizes_idx_1 = 0;
                } else {
                  if (1 > b_b->size[0]) {
                    emlrtDynamicBoundsCheckR2012b(1, 1, b_b->size[0],
                      &h_emlrtBCI, &st);
                  }

                  if (Xbb->size[0] > b_b->size[0]) {
                    emlrtDynamicBoundsCheckR2012b(Xbb->size[0], 1, b_b->size[0],
                      &i_emlrtBCI, &st);
                  }

                  sizes_idx_1 = Xbb->size[0];
                }

                i = hi->size[0];
                hi->size[0] = loop_ub + 1;
                emxEnsureCapacity_real_T(&st, hi, i, &be_emlrtRTEI);
                for (i = 0; i < loop_ub; i++) {
                  hi->data[i] = b_b->data[i];
                }

                if (b_i + 1 > ncl->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, ncl->size[0],
                    &yb_emlrtBCI, &st);
                }

                hi->data[loop_ub] = ncl->data[b_i];
                if (sizes_idx_1 != hi->size[0]) {
                  emlrtSubAssignSizeCheck1dR2017a(sizes_idx_1, hi->size[0],
                    &c_emlrtECI, &st);
                }

                for (i = 0; i < sizes_idx_1; i++) {
                  b_b->data[i] = hi->data[i];
                }

                if (1 > Xbb->size[0]) {
                  loop_ub = 0;
                } else {
                  if (1 > b_b->size[0]) {
                    emlrtDynamicBoundsCheckR2012b(1, 1, b_b->size[0],
                      &j_emlrtBCI, &st);
                  }

                  if (Xbb->size[0] > b_b->size[0]) {
                    emlrtDynamicBoundsCheckR2012b(Xbb->size[0], 1, b_b->size[0],
                      &k_emlrtBCI, &st);
                  }

                  loop_ub = Xbb->size[0];
                }

                c_result[0] = 1;
                c_result[1] = loop_ub;
                b_st.site = &y_emlrtRSI;
                b_indexShapeCheck(&b_st, b_b->size[0], c_result);
                sizes_idx_1 = b_X->size[1];
                i = Xb->size[0] * Xb->size[1];
                Xb->size[0] = loop_ub;
                Xb->size[1] = b_X->size[1];
                emxEnsureCapacity_real_T(&st, Xb, i, &fe_emlrtRTEI);
                for (i = 0; i < sizes_idx_1; i++) {
                  for (i1 = 0; i1 < loop_ub; i1++) {
                    if (b_b->data[i1] != (int32_T)muDoubleScalarFloor(b_b->
                         data[i1])) {
                      emlrtIntegerCheckR2012b(b_b->data[i1], &w_emlrtDCI, &st);
                    }

                    b_i = (int32_T)b_b->data[i1];
                    if ((b_i < 1) || (b_i > b_X->size[0])) {
                      emlrtDynamicBoundsCheckR2012b(b_i, 1, b_X->size[0],
                        &bc_emlrtBCI, &st);
                    }

                    Xb->data[i1 + Xb->size[0] * i] = b_X->data[(b_i + b_X->size
                      [0] * i) - 1];
                  }
                }

                if (1 > Xbb->size[0]) {
                  loop_ub = 0;
                } else {
                  if (1 > b_b->size[0]) {
                    emlrtDynamicBoundsCheckR2012b(1, 1, b_b->size[0],
                      &l_emlrtBCI, &st);
                  }

                  if (Xbb->size[0] > b_b->size[0]) {
                    emlrtDynamicBoundsCheckR2012b(Xbb->size[0], 1, b_b->size[0],
                      &m_emlrtBCI, &st);
                  }

                  loop_ub = Xbb->size[0];
                }

                c_result[0] = 1;
                c_result[1] = loop_ub;
                b_st.site = &x_emlrtRSI;
                b_indexShapeCheck(&b_st, b_b->size[0], c_result);
                b_st.site = &x_emlrtRSI;
                c_st.site = &ng_emlrtRSI;
                i = hi->size[0];
                hi->size[0] = loop_ub;
                emxEnsureCapacity_real_T(&c_st, hi, i, &he_emlrtRTEI);
                for (i = 0; i < loop_ub; i++) {
                  hi->data[i] = b_b->data[i];
                }

                d_st.site = &lf_emlrtRSI;
                b_do_vectors(&d_st, seq, hi, ncl, ia, &result);
                sizes_idx_1 = 1;
                exitg2 = true;
              }
            }

            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&st);
            }
          }

          /*  check how many observations produce a singular X matrix */
          if (1 > Xbb->size[0] - 1) {
            loop_ub = 0;
          } else {
            if (1 > b_b->size[0]) {
              emlrtDynamicBoundsCheckR2012b(1, 1, b_b->size[0], &n_emlrtBCI, &st);
            }

            if ((Xbb->size[0] - 1 < 1) || (Xbb->size[0] - 1 > b_b->size[0])) {
              emlrtDynamicBoundsCheckR2012b(Xbb->size[0] - 1, 1, b_b->size[0],
                &o_emlrtBCI, &st);
            }

            loop_ub = Xbb->size[0] - 1;
          }

          c_result[0] = 1;
          c_result[1] = loop_ub;
          b_st.site = &w_emlrtRSI;
          b_indexShapeCheck(&b_st, b_b->size[0], c_result);
          if (msg) {
            b_st.site = &v_emlrtRSI;
            c_st.site = &sg_emlrtRSI;
            d_st.site = &kk_emlrtRSI;
            e_st.site = &lk_emlrtRSI;
            c_emlrt_marshallIn(&d_st, b_feval(&d_st, d_emlrt_marshallOut(&d_st,
              cv2), e_emlrt_marshallOut(1.0), h_emlrt_marshallOut(&e_st, cv9),
              e_emlrt_marshallOut(b_mm), &m_emlrtMCI), "<output of feval>");
            b_st.site = &qk_emlrtRSI;
            b_disp(&b_st, m_emlrt_marshallOut(&b_st, cv10), &f_emlrtMCI);
            i = c_y->size[0] * c_y->size[1];
            c_y->size[0] = 1;
            c_y->size[1] = loop_ub;
            emxEnsureCapacity_real_T(&st, c_y, i, &ld_emlrtRTEI);
            for (i = 0; i < loop_ub; i++) {
              c_y->data[i] = b_b->data[i];
            }

            b_st.site = &sk_emlrtRSI;
            b_disp(&b_st, n_emlrt_marshallOut(c_y), &g_emlrtMCI);
            b_st.site = &hk_emlrtRSI;
            b_disp(&b_st, b_emlrt_marshallOut(&b_st, cv11), &h_emlrtMCI);
          }

          i = mdr->size[0] * mdr->size[1];
          mdr->size[0] = loop_ub;
          mdr->size[1] = 1;
          emxEnsureCapacity_real_T(&st, mdr, i, &jd_emlrtRTEI);
          for (i = 0; i < loop_ub; i++) {
            mdr->data[i] = b_b->data[i];
          }

          i = Un->size[0] * Un->size[1];
          Un->size[0] = 1;
          Un->size[1] = 1;
          emxEnsureCapacity_real_T(&st, Un, i, &kd_emlrtRTEI);
          Un->data[0] = rtNaN;
          i = BB->size[0] * BB->size[1];
          BB->size[0] = 1;
          BB->size[1] = 1;
          emxEnsureCapacity_real_T(&st, BB, i, &md_emlrtRTEI);
          BB->data[0] = rtNaN;
          i = Bols->size[0] * Bols->size[1];
          Bols->size[0] = 1;
          Bols->size[1] = 1;
          emxEnsureCapacity_real_T(&st, Bols, i, &pd_emlrtRTEI);
          Bols->data[0] = rtNaN;
          i = S2->size[0] * S2->size[1];
          S2->size[0] = 1;
          S2->size[1] = 1;
          emxEnsureCapacity_real_T(&st, S2, i, &qd_emlrtRTEI);
          S2->data[0] = rtNaN;
          exitg1 = 1;
        } else {
          b_st.site = &u_emlrtRSI;
          c_st.site = &sg_emlrtRSI;
          d_st.site = &kk_emlrtRSI;
          e_st.site = &lk_emlrtRSI;
          initdef = c_emlrt_marshallIn(&d_st, b_feval(&d_st, d_emlrt_marshallOut
            (&d_st, cv2), e_emlrt_marshallOut(1.0), i_emlrt_marshallOut(&e_st,
            cv7), e_emlrt_marshallOut(b_mm), &m_emlrtMCI), "<output of feval>");
          emlrtDisplayR2012b(e_emlrt_marshallOut(initdef), (char_T *)"ans",
                             &b_emlrtRTEI, &st);
          b_st.site = &rk_emlrtRSI;
          b_disp(&b_st, o_emlrt_marshallOut(&b_st, cv8), &e_emlrtMCI);
          i1 = b_b->size[0];
          b_b->size[0] = blast->size[0];
          emxEnsureCapacity_real_T(&st, b_b, i1, &gd_emlrtRTEI);
          loop_ub = blast->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            b_b->data[i1] = blast->data[i1];
          }

          /*  disp([mm b']) */
          guard2 = true;
        }

        if (guard2) {
          b_st.site = &t_emlrtRSI;
          c_st.site = &mc_emlrtRSI;
          dynamic_size_checks(&c_st, b_X, b_b, b_X->size[1], b_b->size[0]);
          c_st.site = &lc_emlrtRSI;
          mtimes(&c_st, b_X, b_b, e);
          if (b_y->size[0] != e->size[0]) {
            emlrtSizeEqCheck1DR2012b(b_y->size[0], e->size[0], &d_emlrtECI, &st);
          }

          i1 = e->size[0];
          e->size[0] = b_y->size[0];
          emxEnsureCapacity_real_T(&st, e, i1, &id_emlrtRTEI);
          loop_ub = b_y->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            e->data[i1] = b_y->data[i1] - e->data[i1];
          }

          /*  e = vector of residual for all units using b estimated using subset */
          b_st.site = &s_emlrtRSI;
          power(&b_st, e, hi);
          emlrtSubAssignSizeCheckR2012b(&b_r->size[0], 1, &hi->size[0], 1,
            &i_emlrtECI, &st);
          loop_ub = hi->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            b_r->data[i1 + b_r->size[0]] = hi->data[i1];
          }

          if (b_mm >= init1) {
            /*  Store units belonging to the subset */
            if (((int32_T)b_mm < 1) || ((int32_T)b_mm > boobsbsteps->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_mm, 1, boobsbsteps->size
                [0], &pb_emlrtBCI, &st);
            }

            if (boobsbsteps->data[(int32_T)b_mm - 1]) {
              /*  OLD CODE */
              /*  intersect(mm,bsbsteps)==mm */
              i1 = ia->size[0];
              ia->size[0] = b_bsb->size[0];
              emxEnsureCapacity_int32_T(&st, ia, i1, &od_emlrtRTEI);
              loop_ub = b_bsb->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                b_i = (int32_T)b_bsb->data[i1];
                if ((b_i < 1) || (b_i > BB->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(b_i, 1, BB->size[0],
                    &qb_emlrtBCI, &st);
                }

                ia->data[i1] = b_i - 1;
              }

              if (((int32_T)ij < 1) || ((int32_T)ij > BB->size[1])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)ij, 1, BB->size[1],
                  &db_emlrtBCI, &st);
              }

              emlrtSubAssignSizeCheckR2012b(&ia->size[0], 1, &b_bsb->size[0], 1,
                &m_emlrtECI, &st);
              loop_ub = b_bsb->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                BB->data[ia->data[i1] + BB->size[0] * ((int32_T)ij - 1)] =
                  b_bsb->data[i1];
              }

              ij++;
            }

            if (Ra) {
              /*  Store beta coefficients if there is no rank problem */
              if (2.0 > p + 1.0) {
                i1 = 0;
                b_i = 0;
              } else {
                if (2 > Bols->size[1]) {
                  emlrtDynamicBoundsCheckR2012b(2, 1, Bols->size[1],
                    &bb_emlrtBCI, &st);
                }

                i1 = 1;
                if (((int32_T)(p + 1.0) < 1) || ((int32_T)(p + 1.0) > Bols->
                     size[1])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)(p + 1.0), 1,
                    Bols->size[1], &cb_emlrtBCI, &st);
                }

                b_i = (int32_T)(p + 1.0);
              }

              d = (b_mm - init1) + 1.0;
              d1 = (int32_T)muDoubleScalarFloor(d);
              if (d != d1) {
                emlrtIntegerCheckR2012b(d, &d_emlrtDCI, &st);
              }

              if (((int32_T)d < 1) || ((int32_T)d > Bols->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Bols->size[0],
                  &ab_emlrtBCI, &st);
              }

              c_result[0] = 1;
              c_result[1] = b_i - i1;
              b_result[0] = 1;
              b_result[1] = b_b->size[0];
              emlrtSubAssignSizeCheckR2012b(&c_result[0], 2, &b_result[0], 2,
                &l_emlrtECI, &st);
              loop_ub = b_b->size[0];
              for (b_i = 0; b_i < loop_ub; b_i++) {
                Bols->data[((int32_T)d + Bols->size[0] * (i1 + b_i)) - 1] =
                  b_b->data[b_i];
              }

              /*  Compute and store estimate of sigma^2 */
              b_st.site = &r_emlrtRSI;
              c_st.site = &mc_emlrtRSI;
              b_dynamic_size_checks(&c_st, resBSB, resBSB, resBSB->size[0],
                                    resBSB->size[0]);
              initdef = b_mtimes(resBSB, resBSB);
              if (2 > S2->size[1]) {
                emlrtDynamicBoundsCheckR2012b(2, 1, S2->size[1], &p_emlrtBCI,
                  &st);
              }

              if (d != d1) {
                emlrtIntegerCheckR2012b(d, &t_emlrtDCI, &st);
              }

              if (((int32_T)d < 1) || ((int32_T)d > S2->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, S2->size[0],
                  &sb_emlrtBCI, &st);
              }

              S2->data[((int32_T)d + S2->size[0]) - 1] = initdef / (b_mm - p);

              /*  Store R2 */
              /*  S2(mm-init1+1,3)=1-var(resBSB)/var(yb); */
              b_st.site = &q_emlrtRSI;
              b = sum(&b_st, yb) / b_mm;
              i1 = b_b->size[0];
              b_b->size[0] = yb->size[0];
              emxEnsureCapacity_real_T(&st, b_b, i1, &wd_emlrtRTEI);
              loop_ub = yb->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                b_b->data[i1] = yb->data[i1] - b;
              }

              if (3 > S2->size[1]) {
                emlrtDynamicBoundsCheckR2012b(3, 1, S2->size[1], &q_emlrtBCI,
                  &st);
              }

              b_st.site = &p_emlrtRSI;
              c_st.site = &mc_emlrtRSI;
              b_dynamic_size_checks(&c_st, resBSB, resBSB, resBSB->size[0],
                                    resBSB->size[0]);
              b_st.site = &p_emlrtRSI;
              c_st.site = &mc_emlrtRSI;
              b_dynamic_size_checks(&c_st, b_b, b_b, b_b->size[0], b_b->size[0]);
              if (d != d1) {
                emlrtIntegerCheckR2012b(d, &u_emlrtDCI, &st);
              }

              if (((int32_T)d < 1) || ((int32_T)d > S2->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, S2->size[0],
                  &vb_emlrtBCI, &st);
              }

              S2->data[((int32_T)d + S2->size[0] * 2) - 1] = 1.0 - initdef /
                b_mtimes(b_b, b_b);
              if (b_mm < n) {
                b_st.site = &o_emlrtRSI;
                c_st.site = &mc_emlrtRSI;
                c_dynamic_size_checks(&c_st, Xb, Xb, Xb->size[0], Xb->size[0]);
                c_st.site = &lc_emlrtRSI;
                c_mtimes(&c_st, Xb, Xb, b_bsbsteps);

                /*  Take minimum deletion residual among noBSB */
                /*  hi (the leverage for the units not belonging to the */
                /*  subset) is defined as follows */
                /*  hi=diag(X(ncl,:)*inv(Xb'*Xb)*(X(ncl,:))'); */
                /*  Take units not belonging to bsb */
                loop_ub = b_X->size[1];
                i1 = Xncl->size[0] * Xncl->size[1];
                Xncl->size[0] = ncl->size[0];
                Xncl->size[1] = b_X->size[1];
                emxEnsureCapacity_real_T(&st, Xncl, i1, &ee_emlrtRTEI);
                for (i1 = 0; i1 < loop_ub; i1++) {
                  sizes_idx_1 = ncl->size[0];
                  for (b_i = 0; b_i < sizes_idx_1; b_i++) {
                    if (ncl->data[b_i] != (int32_T)muDoubleScalarFloor(ncl->
                         data[b_i])) {
                      emlrtIntegerCheckR2012b(ncl->data[b_i], &v_emlrtDCI, &st);
                    }

                    nwhile = (int32_T)ncl->data[b_i];
                    if ((nwhile < 1) || (nwhile > b_X->size[0])) {
                      emlrtDynamicBoundsCheckR2012b(nwhile, 1, b_X->size[0],
                        &xb_emlrtBCI, &st);
                    }

                    Xncl->data[b_i + Xncl->size[0] * i1] = b_X->data[(nwhile +
                      b_X->size[0] * i1) - 1];
                  }
                }

                /*  mmX=inv(mAm); */
                /*  hi = sum((Xncl*mmX).*Xncl,2); */
                b_st.site = &n_emlrtRSI;
                if (b_bsbsteps->size[1] != b_X->size[1]) {
                  emlrtErrorWithMessageIdR2018a(&b_st, &g_emlrtRTEI,
                    "MATLAB:dimagree", "MATLAB:dimagree", 0);
                }

                c_st.site = &gh_emlrtRSI;
                mrdiv(&c_st, Xncl, b_bsbsteps, r5);
                c_result[0] = ncl->size[0];
                c_result[1] = b_X->size[1];
                b_result[0] = (*(int32_T (*)[2])r5->size)[0];
                b_result[1] = (*(int32_T (*)[2])r5->size)[1];
                emlrtSizeEqCheckNDR2012b(&b_result[0], &c_result[0], &e_emlrtECI,
                  &st);
                i1 = b_bsbsteps->size[0] * b_bsbsteps->size[1];
                b_bsbsteps->size[0] = r5->size[0];
                b_bsbsteps->size[1] = r5->size[1];
                emxEnsureCapacity_real_T(&st, b_bsbsteps, i1, &ie_emlrtRTEI);
                loop_ub = r5->size[0] * r5->size[1];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  b_bsbsteps->data[i1] = r5->data[i1] * Xncl->data[i1];
                }

                b_st.site = &n_emlrtRSI;
                b_sum(&b_st, b_bsbsteps, hi);

                /* hiall=sum((X/mAm).*X,2); */
                if (bonflevout) {
                  thpmm_size[0] = threshlevoutX_size[0];
                  thpmm_size[1] = threshlevoutX_size[1];
                  loop_ub = threshlevoutX_size[0] * threshlevoutX_size[1];
                  for (i1 = 0; i1 < loop_ub; i1++) {
                    initdef = threshlevoutX_data[0] * p / b_mm;
                  }

                  b_st.site = &m_emlrtRSI;
                  repelem(&b_st, (real_T *)&initdef, thpmm_size, n - b_mm, r5);
                  if (1 != r5->size[1]) {
                    emlrtDimSizeEqCheckR2012b(1, r5->size[1], &f_emlrtECI, &st);
                  }

                  if (hi->size[0] != r5->size[0]) {
                    emlrtSizeEqCheck1DR2012b(hi->size[0], r5->size[0],
                      &g_emlrtECI, &st);
                  }

                  i1 = unitstopenalize->size[0];
                  unitstopenalize->size[0] = hi->size[0];
                  emxEnsureCapacity_boolean_T(&st, unitstopenalize, i1,
                    &ke_emlrtRTEI);
                  loop_ub = hi->size[0];
                  for (i1 = 0; i1 < loop_ub; i1++) {
                    unitstopenalize->data[i1] = (hi->data[i1] > r5->data[i1]);
                  }

                  b_st.site = &l_emlrtRSI;
                  if (any(&b_st, unitstopenalize)) {
                    nwhile = unitstopenalize->size[0];
                    loop_ub = 0;
                    for (b_i = 0; b_i < nwhile; b_i++) {
                      if (unitstopenalize->data[b_i]) {
                        loop_ub++;
                      }
                    }

                    i1 = threshlevoutX_size[0] * threshlevoutX_size[1];
                    if (loop_ub != i1) {
                      emlrtSubAssignSizeCheck1dR2017a(loop_ub, i1, &h_emlrtECI,
                        &st);
                    }

                    nwhile = unitstopenalize->size[0];
                    for (b_i = 0; b_i < nwhile; b_i++) {
                      if (unitstopenalize->data[b_i]) {
                        if (b_i + 1 > hi->size[0]) {
                          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, hi->size[0],
                            &dc_emlrtBCI, &st);
                        }

                        hi->data[b_i] = initdef;
                      }
                    }
                  }
                } else {
                  i1 = unitstopenalize->size[0];
                  unitstopenalize->size[0] = 1;
                  emxEnsureCapacity_boolean_T(&st, unitstopenalize, i1,
                    &je_emlrtRTEI);
                  unitstopenalize->data[0] = false;
                }

                b_st.site = &k_emlrtRSI;
                loop_ub = ncl->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  b_i = (int32_T)ncl->data[i1];
                  if ((b_i < 1) || (b_i > b_r->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(b_i, 1, b_r->size[0],
                      &cc_emlrtBCI, &b_st);
                  }
                }

                loop_ub = hi->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  hi->data[i1]++;
                }

                c_st.site = &si_emlrtRSI;
                d_st.site = &ti_emlrtRSI;
                f_st.site = &ui_emlrtRSI;
                g_st.site = &xe_emlrtRSI;
                h_st.site = &vi_emlrtRSI;
                if (ncl->size[0] <= hi->size[0]) {
                  nwhile = ncl->size[0];
                } else {
                  nwhile = hi->size[0];
                }

                Ra = true;
                b_p = true;
                result = 0;
                exitg2 = false;
                while ((!exitg2) && (result < 2)) {
                  if (result + 1 <= 1) {
                    i1 = nwhile;
                    b_i = ncl->size[0];
                  } else {
                    i1 = 1;
                    b_i = 1;
                  }

                  if (i1 != b_i) {
                    b_p = false;
                    exitg2 = true;
                  } else {
                    result++;
                  }
                }

                if (b_p) {
                  b_p = true;
                  result = 0;
                  exitg2 = false;
                  while ((!exitg2) && (result < 2)) {
                    if (result + 1 <= 1) {
                      i1 = nwhile;
                      b_i = hi->size[0];
                    } else {
                      i1 = 1;
                      b_i = 1;
                    }

                    if (i1 != b_i) {
                      b_p = false;
                      exitg2 = true;
                    } else {
                      result++;
                    }
                  }

                  if (!b_p) {
                    Ra = false;
                  }
                } else {
                  Ra = false;
                }

                if (!Ra) {
                  emlrtErrorWithMessageIdR2018a(&h_st, &c_emlrtRTEI,
                    "MATLAB:dimagree", "MATLAB:dimagree", 0);
                }

                h_st.site = &ye_emlrtRSI;
                i_st.site = &wi_emlrtRSI;
                if (ncl->size[0] <= hi->size[0]) {
                  nwhile = ncl->size[0];
                } else {
                  nwhile = hi->size[0];
                }

                Ra = true;
                b_p = true;
                result = 0;
                exitg2 = false;
                while ((!exitg2) && (result < 2)) {
                  if (result + 1 <= 1) {
                    i1 = nwhile;
                    b_i = ncl->size[0];
                  } else {
                    i1 = 1;
                    b_i = 1;
                  }

                  if (i1 != b_i) {
                    b_p = false;
                    exitg2 = true;
                  } else {
                    result++;
                  }
                }

                if (b_p) {
                  b_p = true;
                  result = 0;
                  exitg2 = false;
                  while ((!exitg2) && (result < 2)) {
                    if (result + 1 <= 1) {
                      i1 = nwhile;
                      b_i = hi->size[0];
                    } else {
                      i1 = 1;
                      b_i = 1;
                    }

                    if (i1 != b_i) {
                      b_p = false;
                      exitg2 = true;
                    } else {
                      result++;
                    }
                  }

                  if (!b_p) {
                    Ra = false;
                  }
                } else {
                  Ra = false;
                }

                if (!Ra) {
                  emlrtErrorWithMessageIdR2018a(&i_st, &c_emlrtRTEI,
                    "MATLAB:dimagree", "MATLAB:dimagree", 0);
                }

                i_st.site = &xi_emlrtRSI;
                if ((1 <= nwhile) && (nwhile > 2147483646)) {
                  j_st.site = &oc_emlrtRSI;
                  check_forloop_overflow_error(&j_st);
                }

                i1 = b_b->size[0];
                b_b->size[0] = ncl->size[0];
                emxEnsureCapacity_real_T(&c_st, b_b, i1, &le_emlrtRTEI);
                loop_ub = ncl->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  b_b->data[i1] = b_r->data[((int32_T)ncl->data[i1] + b_r->size
                    [0]) - 1] / hi->data[i1];
                }

                b_st.site = &k_emlrtRSI;
                loop_ub = ncl->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  b_i = (int32_T)ncl->data[i1];
                  if ((b_i < 1) || (b_i > e->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(b_i, 1, e->size[0],
                      &ec_emlrtBCI, &b_st);
                  }
                }

                c_st.site = &bf_emlrtRSI;
                d_st.site = &cf_emlrtRSI;
                if (ncl->size[0] != b_b->size[0]) {
                  emlrtErrorWithMessageIdR2018a(&d_st, &f_emlrtRTEI,
                    "MATLAB:catenate:matrixDimensionMismatch",
                    "MATLAB:catenate:matrixDimensionMismatch", 0);
                }

                i1 = ord->size[0] * ord->size[1];
                ord->size[0] = b_b->size[0];
                ord->size[1] = 2;
                emxEnsureCapacity_real_T(&c_st, ord, i1, &me_emlrtRTEI);
                loop_ub = b_b->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  ord->data[i1] = b_b->data[i1];
                }

                loop_ub = ncl->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  ord->data[i1 + ord->size[0]] = e->data[(int32_T)ncl->data[i1]
                    - 1];
                }

                if (bonflevout) {
                  nwhile = unitstopenalize->size[0] - 1;
                  loop_ub = 0;
                  for (b_i = 0; b_i <= nwhile; b_i++) {
                    if (unitstopenalize->data[b_i]) {
                      loop_ub++;
                    }
                  }

                  i1 = truerownamestopenalize->size[0];
                  truerownamestopenalize->size[0] = loop_ub;
                  emxEnsureCapacity_uint32_T(&st, truerownamestopenalize, i1,
                    &nb_emlrtRTEI);
                  sizes_idx_1 = 0;
                  for (b_i = 0; b_i <= nwhile; b_i++) {
                    if (unitstopenalize->data[b_i]) {
                      if (b_i + 1 > ncl->size[0]) {
                        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, ncl->size[0],
                          &fc_emlrtBCI, &st);
                      }

                      truerownamestopenalize->data[sizes_idx_1] = (uint32_T)
                        ncl->data[b_i];
                      sizes_idx_1++;
                    }
                  }

                  /*  disp(ncl(unittopenalize)) */
                  i1 = ia->size[0];
                  ia->size[0] = truerownamestopenalize->size[0];
                  emxEnsureCapacity_int32_T(&st, ia, i1, &ne_emlrtRTEI);
                  loop_ub = truerownamestopenalize->size[0];
                  for (i1 = 0; i1 < loop_ub; i1++) {
                    if (((int32_T)truerownamestopenalize->data[i1] < 1) ||
                        ((int32_T)truerownamestopenalize->data[i1] > b_r->size[0]))
                    {
                      emlrtDynamicBoundsCheckR2012b((int32_T)
                        truerownamestopenalize->data[i1], 1, b_r->size[0],
                        &gc_emlrtBCI, &st);
                    }

                    ia->data[i1] = (int32_T)truerownamestopenalize->data[i1] - 1;
                  }

                  loop_ub = truerownamestopenalize->size[0];
                  for (i1 = 0; i1 < loop_ub; i1++) {
                    b_i = (int32_T)truerownamestopenalize->data[i1];
                    if ((b_i < 1) || (b_i > b_r->size[0])) {
                      emlrtDynamicBoundsCheckR2012b(b_i, 1, b_r->size[0],
                        &hc_emlrtBCI, &st);
                    }
                  }

                  i1 = hi->size[0];
                  hi->size[0] = truerownamestopenalize->size[0];
                  emxEnsureCapacity_real_T(&st, hi, i1, &oe_emlrtRTEI);
                  loop_ub = truerownamestopenalize->size[0];
                  for (i1 = 0; i1 < loop_ub; i1++) {
                    hi->data[i1] = b_r->data[((int32_T)
                      truerownamestopenalize->data[i1] + b_r->size[0]) - 1] *
                      1.0E+7;
                  }

                  emlrtSubAssignSizeCheckR2012b(&ia->size[0], 1, &hi->size[0], 1,
                    &j_emlrtECI, &st);
                  loop_ub = hi->size[0];
                  for (i1 = 0; i1 < loop_ub; i1++) {
                    b_r->data[ia->data[i1] + b_r->size[0]] = hi->data[i1];
                  }
                }

                /*  Store minimum deletion residual in matrix mdr */
                /*  selmdr=sortrows(ord,1); */
                b_st.site = &j_emlrtRSI;
                c_st.site = &ad_emlrtRSI;
                d_st.site = &bd_emlrtRSI;
                f_st.site = &cd_emlrtRSI;
                if (ord->size[0] < 1) {
                  emlrtErrorWithMessageIdR2018a(&f_st, &d_emlrtRTEI,
                    "Coder:toolbox:eml_min_or_max_varDimZero",
                    "Coder:toolbox:eml_min_or_max_varDimZero", 0);
                }

                g_st.site = &yi_emlrtRSI;
                h_st.site = &aj_emlrtRSI;
                nwhile = ord->size[0];
                if (ord->size[0] <= 2) {
                  if (ord->size[0] == 1) {
                    initdef = ord->data[0];
                  } else if ((ord->data[0] > ord->data[1]) ||
                             (muDoubleScalarIsNaN(ord->data[0]) &&
                              (!muDoubleScalarIsNaN(ord->data[1])))) {
                    initdef = ord->data[1];
                  } else {
                    initdef = ord->data[0];
                  }
                } else {
                  i_st.site = &cj_emlrtRSI;
                  if (!muDoubleScalarIsNaN(ord->data[0])) {
                    sizes_idx_1 = 1;
                  } else {
                    sizes_idx_1 = 0;
                    j_st.site = &dj_emlrtRSI;
                    if (ord->size[0] > 2147483646) {
                      k_st.site = &oc_emlrtRSI;
                      check_forloop_overflow_error(&k_st);
                    }

                    result = 2;
                    exitg2 = false;
                    while ((!exitg2) && (result <= nwhile)) {
                      if (!muDoubleScalarIsNaN(ord->data[result - 1])) {
                        sizes_idx_1 = result;
                        exitg2 = true;
                      } else {
                        result++;
                      }
                    }
                  }

                  if (sizes_idx_1 == 0) {
                    initdef = ord->data[0];
                  } else {
                    i_st.site = &bj_emlrtRSI;
                    initdef = ord->data[sizes_idx_1 - 1];
                    loop_ub = sizes_idx_1 + 1;
                    j_st.site = &ej_emlrtRSI;
                    if (sizes_idx_1 + 1 > ord->size[0]) {
                      Ra = false;
                    } else {
                      Ra = (ord->size[0] > 2147483646);
                    }

                    if (Ra) {
                      k_st.site = &oc_emlrtRSI;
                      check_forloop_overflow_error(&k_st);
                    }

                    for (result = loop_ub; result <= nwhile; result++) {
                      b = ord->data[result - 1];
                      if (initdef > b) {
                        initdef = b;
                      }
                    }
                  }
                }

                if (2 > S2->size[1]) {
                  emlrtDynamicBoundsCheckR2012b(2, 1, S2->size[1], &r_emlrtBCI,
                    &st);
                }

                if (d != d1) {
                  emlrtIntegerCheckR2012b(d, &x_emlrtDCI, &st);
                }

                if (((int32_T)d < 1) || ((int32_T)d > S2->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, S2->size[0],
                    &ic_emlrtBCI, &st);
                }

                if (S2->data[((int32_T)d + S2->size[0]) - 1] == 0.0) {
                  b_st.site = &i_emlrtRSI;
                  c_sprintf(&b_st, (b_mm - init1) + 1.0);
                } else {
                  if (2 > S2->size[1]) {
                    emlrtDynamicBoundsCheckR2012b(2, 1, S2->size[1], &s_emlrtBCI,
                      &st);
                  }

                  if (d != d1) {
                    emlrtIntegerCheckR2012b(d, &y_emlrtDCI, &st);
                  }

                  if (((int32_T)d < 1) || ((int32_T)d > S2->size[0])) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, S2->size[0],
                      &jc_emlrtBCI, &st);
                  }

                  if (d != d1) {
                    emlrtIntegerCheckR2012b(d, &ab_emlrtDCI, &st);
                  }

                  if (((int32_T)d < 1) || ((int32_T)d > mdr->size[0])) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, mdr->size[0],
                      &kc_emlrtBCI, &st);
                  }

                  mdr->data[((int32_T)d + mdr->size[0]) - 1] = muDoubleScalarAbs
                    (initdef) / S2->data[((int32_T)d + S2->size[0]) - 1];
                  if (d != d1) {
                    emlrtIntegerCheckR2012b(d, &ab_emlrtDCI, &st);
                  }

                  if (((int32_T)d < 1) || ((int32_T)d > mdr->size[0])) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, mdr->size[0],
                      &kc_emlrtBCI, &st);
                  }

                  b_st.site = &h_emlrtRSI;
                  x = &mdr->data[((int32_T)d + mdr->size[0]) - 1];
                  if (*x < 0.0) {
                    emlrtErrorWithMessageIdR2018a(&b_st, &gb_emlrtRTEI,
                      "Coder:toolbox:ElFunDomainError",
                      "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
                  }

                  *x = muDoubleScalarSqrt(*x);
                }
              }

              /* if mm<n */
            }

            /* ~RankProblem */
          }

          /* mm>=init1 */
          if (b_mm < n) {
            /*  store units forming old subset in vector oldbsb */
            i1 = unitstopenalize->size[0];
            unitstopenalize->size[0] = bsbT->size[0];
            emxEnsureCapacity_boolean_T(&st, unitstopenalize, i1, &nd_emlrtRTEI);
            loop_ub = bsbT->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              unitstopenalize->data[i1] = bsbT->data[i1];
            }

            /*  order the r_i */
            /*  units inside vector constr are forced to join the search in */
            /*  the final k steps */
            if ((constr->size[0] != 0) && (constr->size[1] != 0) && (b_mm < n -
                 (real_T)constr->size[0])) {
              i1 = ia->size[0];
              ia->size[0] = constr->size[0];
              emxEnsureCapacity_int32_T(&st, ia, i1, &rd_emlrtRTEI);
              loop_ub = constr->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                d = constr->data[i1];
                if (d != (int32_T)muDoubleScalarFloor(d)) {
                  emlrtIntegerCheckR2012b(d, &s_emlrtDCI, &st);
                }

                if (((int32_T)d < 1) || ((int32_T)d > b_r->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, b_r->size[0],
                    &rb_emlrtBCI, &st);
                }

                ia->data[i1] = (int32_T)d;
              }

              loop_ub = ia->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                b_r->data[(ia->data[i1] + b_r->size[0]) - 1] = rtInf;
              }
            }

            /*  If internationaltrade is true residuals which have large of */
            /*  the final column of X (generally quantity) are reduced. Note */
            /*  that this guarantees that leverge units which have a large */
            /*  value of  X will tend to stay in the subset. */
            /*  In other words, we use the residuals as if we were regressing */
            /*  y/X (that is price) on the vector of ones. */
            if (!internationaltrade) {
              b_st.site = &g_emlrtRSI;
              loop_ub = b_r->size[0];
              i1 = b_b->size[0];
              b_b->size[0] = b_r->size[0];
              emxEnsureCapacity_real_T(&b_st, b_b, i1, &td_emlrtRTEI);
              for (i1 = 0; i1 < loop_ub; i1++) {
                b_b->data[i1] = b_r->data[i1 + b_r->size[0]];
              }

              c_st.site = &fj_emlrtRSI;
              sort(&c_st, b_b, ia);
              i1 = b_b->size[0];
              b_b->size[0] = ia->size[0];
              emxEnsureCapacity_real_T(&b_st, b_b, i1, &ud_emlrtRTEI);
              loop_ub = ia->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                b_b->data[i1] = ia->data[i1];
              }
            } else {
              b_st.site = &f_emlrtRSI;
              c_st.site = &si_emlrtRSI;
              d_st.site = &ti_emlrtRSI;
              f_st.site = &ui_emlrtRSI;
              g_st.site = &xe_emlrtRSI;
              h_st.site = &vi_emlrtRSI;
              if (b_r->size[0] <= weight->size[0]) {
                nwhile = b_r->size[0];
              } else {
                nwhile = weight->size[0];
              }

              Ra = true;
              b_p = true;
              result = 0;
              exitg2 = false;
              while ((!exitg2) && (result < 2)) {
                if (result + 1 <= 1) {
                  i1 = nwhile;
                  b_i = b_r->size[0];
                } else {
                  i1 = 1;
                  b_i = 1;
                }

                if (i1 != b_i) {
                  b_p = false;
                  exitg2 = true;
                } else {
                  result++;
                }
              }

              if (b_p) {
                b_p = true;
                result = 0;
                exitg2 = false;
                while ((!exitg2) && (result < 2)) {
                  if (result + 1 <= 1) {
                    i1 = nwhile;
                    b_i = weight->size[0];
                  } else {
                    i1 = 1;
                    b_i = 1;
                  }

                  if (i1 != b_i) {
                    b_p = false;
                    exitg2 = true;
                  } else {
                    result++;
                  }
                }

                if (!b_p) {
                  Ra = false;
                }
              } else {
                Ra = false;
              }

              if (!Ra) {
                emlrtErrorWithMessageIdR2018a(&h_st, &c_emlrtRTEI,
                  "MATLAB:dimagree", "MATLAB:dimagree", 0);
              }

              h_st.site = &ye_emlrtRSI;
              i_st.site = &wi_emlrtRSI;
              if (b_r->size[0] <= weight->size[0]) {
                nwhile = b_r->size[0];
              } else {
                nwhile = weight->size[0];
              }

              Ra = true;
              b_p = true;
              result = 0;
              exitg2 = false;
              while ((!exitg2) && (result < 2)) {
                if (result + 1 <= 1) {
                  i1 = nwhile;
                  b_i = b_r->size[0];
                } else {
                  i1 = 1;
                  b_i = 1;
                }

                if (i1 != b_i) {
                  b_p = false;
                  exitg2 = true;
                } else {
                  result++;
                }
              }

              if (b_p) {
                b_p = true;
                result = 0;
                exitg2 = false;
                while ((!exitg2) && (result < 2)) {
                  if (result + 1 <= 1) {
                    i1 = nwhile;
                    b_i = weight->size[0];
                  } else {
                    i1 = 1;
                    b_i = 1;
                  }

                  if (i1 != b_i) {
                    b_p = false;
                    exitg2 = true;
                  } else {
                    result++;
                  }
                }

                if (!b_p) {
                  Ra = false;
                }
              } else {
                Ra = false;
              }

              if (!Ra) {
                emlrtErrorWithMessageIdR2018a(&i_st, &c_emlrtRTEI,
                  "MATLAB:dimagree", "MATLAB:dimagree", 0);
              }

              i_st.site = &xi_emlrtRSI;
              if ((1 <= nwhile) && (nwhile > 2147483646)) {
                j_st.site = &oc_emlrtRSI;
                check_forloop_overflow_error(&j_st);
              }

              b_st.site = &f_emlrtRSI;
              loop_ub = b_r->size[0];
              i1 = b_b->size[0];
              b_b->size[0] = b_r->size[0];
              emxEnsureCapacity_real_T(&b_st, b_b, i1, &td_emlrtRTEI);
              for (i1 = 0; i1 < loop_ub; i1++) {
                b_b->data[i1] = b_r->data[i1 + b_r->size[0]] / weight->data[i1];
              }

              c_st.site = &fj_emlrtRSI;
              sort(&c_st, b_b, ia);
              i1 = b_b->size[0];
              b_b->size[0] = ia->size[0];
              emxEnsureCapacity_real_T(&b_st, b_b, i1, &ud_emlrtRTEI);
              loop_ub = ia->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                b_b->data[i1] = ia->data[i1];
              }
            }

            /*  bsb= units forming the new  subset */
            if (1 > b_b->size[0]) {
              emlrtDynamicBoundsCheckR2012b(1, 1, b_b->size[0], &t_emlrtBCI, &st);
            }

            sizes_idx_1 = (int32_T)(b_mm + 1.0);
            if (((int32_T)(b_mm + 1.0) < 1) || ((int32_T)(b_mm + 1.0) >
                 b_b->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(b_mm + 1.0), 1, b_b->size
                [0], &u_emlrtBCI, &st);
            }

            i1 = b_bsb->size[0];
            b_bsb->size[0] = (int32_T)(b_mm + 1.0);
            emxEnsureCapacity_real_T(&st, b_bsb, i1, &xd_emlrtRTEI);
            for (i1 = 0; i1 < sizes_idx_1; i1++) {
              b_bsb->data[i1] = b_b->data[i1];
            }

            i1 = bsbT->size[0];
            bsbT->size[0] = (int32_T)n;
            emxEnsureCapacity_boolean_T(&st, bsbT, i1, &yd_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub_tmp; i1++) {
              bsbT->data[i1] = false;
            }

            i1 = ia->size[0];
            ia->size[0] = (int32_T)(b_mm + 1.0);
            emxEnsureCapacity_int32_T(&st, ia, i1, &ae_emlrtRTEI);
            for (i1 = 0; i1 < sizes_idx_1; i1++) {
              b_i = (int32_T)b_b->data[i1];
              if ((b_i < 1) || (b_i > (int32_T)n)) {
                emlrtDynamicBoundsCheckR2012b((int32_T)b_b->data[i1], 1,
                  (int32_T)n, &tb_emlrtBCI, &st);
              }

              ia->data[i1] = b_i;
            }

            loop_ub = ia->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              bsbT->data[ia->data[i1] - 1] = true;
            }

            loop_ub = b_X->size[1];
            i1 = Xb->size[0] * Xb->size[1];
            Xb->size[0] = (int32_T)(b_mm + 1.0);
            Xb->size[1] = b_X->size[1];
            emxEnsureCapacity_real_T(&st, Xb, i1, &ce_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              for (b_i = 0; b_i < sizes_idx_1; b_i++) {
                nwhile = (int32_T)b_b->data[b_i];
                if ((nwhile < 1) || (nwhile > b_X->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)b_b->data[b_i], 1,
                    b_X->size[0], &ub_emlrtBCI, &st);
                }

                Xb->data[b_i + Xb->size[0] * i1] = b_X->data[(nwhile + b_X->
                  size[0] * i1) - 1];
              }
            }

            /*  subset of X */
            i1 = yb->size[0];
            yb->size[0] = (int32_T)(b_mm + 1.0);
            emxEnsureCapacity_real_T(&st, yb, i1, &de_emlrtRTEI);
            for (i1 = 0; i1 < sizes_idx_1; i1++) {
              b_i = (int32_T)b_b->data[i1];
              if ((b_i < 1) || (b_i > b_y->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)b_b->data[i1], 1,
                  b_y->size[0], &wb_emlrtBCI, &st);
              }

              yb->data[i1] = b_y->data[b_i - 1];
            }

            /*  subset of y */
            if (b_mm >= init1) {
              /*  unit = vector containing units which just entered subset; */
              /*  unit=setdiff(bsb,oldbsb); */
              /*  new instruction to find unit */
              loop_ub = unitstopenalize->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                unitstopenalize->data[i1] = !unitstopenalize->data[i1];
              }

              if (bsbT->size[0] != unitstopenalize->size[0]) {
                emlrtSizeEqCheck1DR2012b(bsbT->size[0], unitstopenalize->size[0],
                  &k_emlrtECI, &st);
              }

              nwhile = bsbT->size[0] - 1;
              loop_ub = 0;
              for (b_i = 0; b_i <= nwhile; b_i++) {
                if (bsbT->data[b_i] && unitstopenalize->data[b_i]) {
                  loop_ub++;
                }
              }

              i1 = unit->size[0];
              unit->size[0] = loop_ub;
              emxEnsureCapacity_real_T(&st, unit, i1, &nb_emlrtRTEI);
              sizes_idx_1 = 0;
              for (b_i = 0; b_i <= nwhile; b_i++) {
                if (bsbT->data[b_i] && unitstopenalize->data[b_i]) {
                  if (b_i + 1 > seq->size[0]) {
                    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                      &ac_emlrtBCI, &st);
                  }

                  unit->data[sizes_idx_1] = seq->data[b_i];
                  sizes_idx_1++;
                }
              }

              /*  If the interchange involves more than 10 units, store only the */
              /*  first 10. */
              if (unit->size[0] <= 10) {
                if (2 > unit->size[0] + 1) {
                  i1 = -1;
                  b_i = -1;
                } else {
                  i1 = 0;
                  b_i = unit->size[0];
                }

                d = (b_mm - init1) + 1.0;
                if (d != (int32_T)muDoubleScalarFloor(d)) {
                  emlrtIntegerCheckR2012b(d, &e_emlrtDCI, &st);
                }

                if (((int32_T)d < 1) || ((int32_T)d > Un->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Un->size[0],
                    &eb_emlrtBCI, &st);
                }

                c_result[0] = 1;
                sizes_idx_1 = b_i - i1;
                c_result[1] = sizes_idx_1;
                emlrtSubAssignSizeCheckR2012b(&c_result[0], 2, &unit->size[0], 1,
                  &n_emlrtECI, &st);
                for (b_i = 0; b_i < sizes_idx_1; b_i++) {
                  Un->data[((int32_T)d + Un->size[0] * ((i1 + b_i) + 1)) - 1] =
                    unit->data[b_i];
                }
              } else if (msg) {
                b_st.site = &e_emlrtRSI;
                int2str(&b_st, b_mm, tmp_data, b_result);
                b_tmp_size[0] = 1;
                b_tmp_size[1] = b_result[1] + 44;
                for (i1 = 0; i1 < 44; i1++) {
                  c_tmp_data[i1] = cv12[i1];
                }

                loop_ub = b_result[1];
                if (0 <= loop_ub - 1) {
                  memcpy(&c_tmp_data[44], &tmp_data[0], loop_ub * sizeof(char_T));
                }

                b_st.site = &ok_emlrtRSI;
                b_disp(&b_st, l_emlrt_marshallOut(&b_st, c_tmp_data, b_tmp_size),
                       &i_emlrtMCI);
                b_st.site = &d_emlrtRSI;
                int2str(&b_st, unit->size[0], tmp_data, b_result);
                c_tmp_size[0] = 1;
                c_tmp_size[1] = b_result[1] + 30;
                for (i1 = 0; i1 < 30; i1++) {
                  d_tmp_data[i1] = cv13[i1];
                }

                loop_ub = b_result[1];
                if (0 <= loop_ub - 1) {
                  memcpy(&d_tmp_data[30], &tmp_data[0], loop_ub * sizeof(char_T));
                }

                b_st.site = &nk_emlrtRSI;
                b_disp(&b_st, l_emlrt_marshallOut(&b_st, d_tmp_data, c_tmp_size),
                       &j_emlrtMCI);
                b_st.site = &c_emlrtRSI;
                c_indexShapeCheck(&b_st, unit->size[0]);
                d = (b_mm - init1) + 1.0;
                if (d != (int32_T)muDoubleScalarFloor(d)) {
                  emlrtIntegerCheckR2012b(d, &f_emlrtDCI, &st);
                }

                if (((int32_T)d < 1) || ((int32_T)d > Un->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Un->size[0],
                    &fb_emlrtBCI, &st);
                }

                c_result[0] = 1;
                c_result[1] = 10;
                nwhile = 10;
                emlrtSubAssignSizeCheckR2012b(&c_result[0], 2, &nwhile, 1,
                  &o_emlrtECI, &st);
                for (i1 = 0; i1 < 10; i1++) {
                  Un->data[((int32_T)d + Un->size[0] * (i1 + 1)) - 1] =
                    unit->data[i1];
                }
              }
            }

            if (b_mm < n - 1.0) {
              if ((constr->size[0] != 0) && (constr->size[1] != 0) && (b_mm < (n
                    - (real_T)constr->size[0]) - 1.0)) {
                /*  disp(mm) */
                if (b_mm + 2.0 > n) {
                  i1 = 0;
                  b_i = 0;
                } else {
                  if (((int32_T)(b_mm + 2.0) < 1) || ((int32_T)(b_mm + 2.0) >
                       b_b->size[0])) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)(b_mm + 2.0), 1,
                      b_b->size[0], &v_emlrtBCI, &st);
                  }

                  i1 = (int32_T)(b_mm + 2.0) - 1;
                  if (((int32_T)n < 1) || ((int32_T)n > b_b->size[0])) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, b_b->size[0],
                      &w_emlrtBCI, &st);
                  }

                  b_i = (int32_T)n;
                }

                /*  ncl= units forming the new noclean */
                b_st.site = &b_emlrtRSI;
                c_st.site = &ng_emlrtRSI;
                nwhile = constr->size[0];
                sizes_idx_1 = b_i - i1;
                for (b_i = 0; b_i < sizes_idx_1; b_i++) {
                  b_b->data[b_i] = b_b->data[i1 + b_i];
                }

                i1 = b_b->size[0];
                b_b->size[0] = sizes_idx_1;
                emxEnsureCapacity_real_T(&c_st, b_b, i1, &nb_emlrtRTEI);
                b_constr = *constr;
                b_n = nwhile;
                b_constr.size = &b_n;
                b_constr.numDimensions = 1;
                d_st.site = &lf_emlrtRSI;
                b_do_vectors(&d_st, b_b, &b_constr, ncl, ia, &result);
              } else {
                if (b_mm + 2.0 > n) {
                  i1 = 0;
                  b_i = 0;
                } else {
                  if (((int32_T)(b_mm + 2.0) < 1) || ((int32_T)(b_mm + 2.0) >
                       b_b->size[0])) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)(b_mm + 2.0), 1,
                      b_b->size[0], &x_emlrtBCI, &st);
                  }

                  i1 = (int32_T)(b_mm + 2.0) - 1;
                  if (((int32_T)n < 1) || ((int32_T)n > b_b->size[0])) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, b_b->size[0],
                      &y_emlrtBCI, &st);
                  }

                  b_i = (int32_T)n;
                }

                loop_ub = b_i - i1;
                b_i = ncl->size[0];
                ncl->size[0] = loop_ub;
                emxEnsureCapacity_real_T(&st, ncl, b_i, &ge_emlrtRTEI);
                for (b_i = 0; b_i < loop_ub; b_i++) {
                  ncl->data[b_i] = b_b->data[i1 + b_i];
                }

                /*  ncl= units forming the new noclean */
              }
            }
          }

          /*  if mm<n */
          mm++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
      } else {
        /*  for mm=ini0:n loop */
        /*  Plot minimum deletion residual with 1%, 50% and 99% envelopes */
        /*  rank check */
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  emxFree_int32_T(&ia);
  emxFree_real_T(&c_y);
  emxFree_real_T(&r5);
  emxFree_real_T(&b_X);
  emxFree_real_T(&b_y);
  emxFree_real_T(&unit);
  emxFree_uint32_T(&truerownamestopenalize);
  emxFree_real_T(&ord);
  emxFree_boolean_T(&unitstopenalize);
  emxFree_real_T(&hi);
  emxFree_real_T(&Xncl);
  emxFree_real_T(&e);
  emxFree_real_T(&b_b);
  emxFree_real_T(&resBSB);
  emxFree_real_T(&Xbb);
  emxFree_real_T(&blast);
  emxFree_boolean_T(&boobsbsteps);
  emxFree_real_T(&seq500);
  emxFree_real_T(&b_r);
  emxFree_real_T(&ncl);
  emxFree_real_T(&seq);
  emxFree_boolean_T(&bsbT);
  emxFree_real_T(&weight);
  emxFree_real_T(&b_bsbsteps);
  emxFree_real_T(&yb);
  emxFree_real_T(&Xb);
  emxFree_real_T(&b_bsb);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (FSRmdr_wrapper.c) */
