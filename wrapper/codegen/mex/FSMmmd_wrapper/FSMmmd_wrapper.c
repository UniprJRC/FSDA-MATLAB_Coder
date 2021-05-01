/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSMmmd_wrapper.c
 *
 * Code generation for function 'FSMmmd_wrapper'
 *
 */

/* Include files */
#include "FSMmmd_wrapper.h"
#include "FSMmmd_wrapper_data.h"
#include "FSMmmd_wrapper_emxutil.h"
#include "FSMmmd_wrapper_mexutil.h"
#include "FSMmmd_wrapper_types.h"
#include "abs.h"
#include "bsxfun.h"
#include "cat.h"
#include "chkinputM.h"
#include "colon.h"
#include "combineVectorElements.h"
#include "cov.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "find.h"
#include "ifWhileCond.h"
#include "indexShapeCheck.h"
#include "int2str.h"
#include "inv.h"
#include "mod.h"
#include "mrdivide_helper.h"
#include "mtimes.h"
#include "power.h"
#include "qr.h"
#include "quickselectFS.h"
#include "randsample.h"
#include "rank.h"
#include "rt_nonfinite.h"
#include "sum.h"
#include "mwmathutil.h"
#include <stdio.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 27,    /* lineNo */
  "FSMmmd_wrapper",                    /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\FSMmmd_wrapper.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 372, /* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 815, /* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 813, /* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 812, /* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 798, /* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 788, /* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 781, /* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 773, /* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 770, /* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 703, /* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 634, /* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 617, /* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 594, /* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 592, /* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 578, /* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 576, /* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 575, /* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 573, /* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 572, /* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 566, /* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 564, /* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 556, /* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 554, /* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 549, /* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 547,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 546,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 544,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 535,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 533,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 529,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 527,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 526,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 523,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 521,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 506,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 479,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 471,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 458,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 430,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 416,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 410,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 397,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 389,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 382,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 381,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 374,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 358,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 344,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 257,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 255,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 251,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 205,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo af_emlrtRSI = { 38, /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtRSInfo bf_emlrtRSI = { 117,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo if_emlrtRSI = { 22, /* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo jf_emlrtRSI = { 96, /* lineNo */
  "cat_impl",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo kf_emlrtRSI = { 185,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo lf_emlrtRSI = { 867,/* lineNo */
  "minRealVectorOmitNaN",              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo mf_emlrtRSI = { 62, /* lineNo */
  "vectorMinOrMaxInPlace",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo nf_emlrtRSI = { 54, /* lineNo */
  "vectorMinOrMaxInPlace",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo of_emlrtRSI = { 103,/* lineNo */
  "findFirst",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo pf_emlrtRSI = { 120,/* lineNo */
  "minOrMaxRealVectorKernel",          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\vectorMinOrMaxInPlace.m"/* pathName */
};

static emlrtRSInfo li_emlrtRSI = { 15, /* lineNo */
  "sum",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"/* pathName */
};

static emlrtRSInfo oi_emlrtRSI = { 20, /* lineNo */
  "mrdivide_helper",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_helper.m"/* pathName */
};

static emlrtRSInfo fk_emlrtRSI = { 17, /* lineNo */
  "min",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"/* pathName */
};

static emlrtRSInfo gk_emlrtRSI = { 40, /* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo hk_emlrtRSI = { 90, /* lineNo */
  "minimum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo ik_emlrtRSI = { 161,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 264,   /* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 352, /* lineNo */
  9,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 393, /* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 434, /* lineNo */
  9,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 437, /* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 582, /* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 584, /* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 812, /* lineNo */
  25,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtMCInfo i_emlrtMCI = { 813, /* lineNo */
  25,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtMCInfo m_emlrtMCI = { 66,  /* lineNo */
  18,                                  /* colNo */
  "fprintf",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 26,/* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 271,/* lineNo */
  27,                                  /* colNo */
  "check_non_axis_size",               /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 16,/* lineNo */
  19,                                  /* colNo */
  "mrdivide_helper",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\mrdivide_helper.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  779,                                 /* lineNo */
  31,                                  /* colNo */
  "seq",                               /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  778,                                 /* lineNo */
  32,                                  /* colNo */
  "seq",                               /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  463,                                 /* lineNo */
  37,                                  /* colNo */
  "seq",                               /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  463,                                 /* lineNo */
  24,                                  /* colNo */
  "BB",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { 2,     /* nDims */
  430,                                 /* lineNo */
  30,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 446,/* lineNo */
  14,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  501,                                 /* lineNo */
  32,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  520,                                 /* lineNo */
  27,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtECInfo d_emlrtECI = { 2,   /* nDims */
  526,                                 /* lineNo */
  59,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtECInfo e_emlrtECI = { 2,   /* nDims */
  529,                                 /* lineNo */
  19,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  532,                                 /* lineNo */
  30,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo f_emlrtECI = { 2,   /* nDims */
  532,                                 /* lineNo */
  28,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtECInfo g_emlrtECI = { 2,   /* nDims */
  535,                                 /* lineNo */
  27,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtECInfo h_emlrtECI = { 2,   /* nDims */
  546,                                 /* lineNo */
  67,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtECInfo i_emlrtECI = { 2,   /* nDims */
  549,                                 /* lineNo */
  15,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  553,                                 /* lineNo */
  26,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo j_emlrtECI = { 2,   /* nDims */
  553,                                 /* lineNo */
  24,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtECInfo k_emlrtECI = { 2,   /* nDims */
  556,                                 /* lineNo */
  23,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtECInfo l_emlrtECI = { 2,   /* nDims */
  564,                                 /* lineNo */
  31,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtECInfo m_emlrtECI = { -1,  /* nDims */
  627,                                 /* lineNo */
  28,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtBCInfo g_emlrtBCI = { 1,   /* iFirst */
  10,                                  /* iLast */
  723,                                 /* lineNo */
  33,                                  /* colNo */
  "unitadd",                           /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { 1,   /* iFirst */
  10,                                  /* iLast */
  732,                                 /* lineNo */
  32,                                  /* colNo */
  "unitadd",                           /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { 1,   /* iFirst */
  10,                                  /* iLast */
  713,                                 /* lineNo */
  37,                                  /* colNo */
  "bsbradd",                           /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { 1,   /* iFirst */
  10,                                  /* iLast */
  738,                                 /* lineNo */
  45,                                  /* colNo */
  "bsbradd",                           /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  781,                                 /* lineNo */
  39,                                  /* colNo */
  "bsbeq",                             /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  781,                                 /* lineNo */
  41,                                  /* colNo */
  "bsbeq",                             /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo n_emlrtECI = { -1,  /* nDims */
  788,                                 /* lineNo */
  27,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  461,                                 /* lineNo */
  28,                                  /* colNo */
  "BB",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo o_emlrtECI = { -1,  /* nDims */
  461,                                 /* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  463,                                 /* lineNo */
  29,                                  /* colNo */
  "BB",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo p_emlrtECI = { -1,  /* nDims */
  463,                                 /* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 809,   /* lineNo */
  24,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  809,                                 /* lineNo */
  24,                                  /* colNo */
  "Un",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo q_emlrtECI = { -1,  /* nDims */
  809,                                 /* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtDCInfo b_emlrtDCI = { 815, /* lineNo */
  24,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  815,                                 /* lineNo */
  24,                                  /* colNo */
  "Un",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo r_emlrtECI = { -1,  /* nDims */
  815,                                 /* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtDCInfo c_emlrtDCI = { 386, /* lineNo */
  24,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 386, /* lineNo */
  24,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  257,                                 /* lineNo */
  24,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 321, /* lineNo */
  6,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  321,                                 /* lineNo */
  6,                                   /* colNo */
  "bsbT",                              /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 386, /* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 386, /* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 410, /* lineNo */
  33,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 410, /* lineNo */
  33,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  397,                                 /* lineNo */
  27,                                  /* colNo */
  "bsbsteps",                          /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 416, /* lineNo */
  19,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 416, /* lineNo */
  19,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  430,                                 /* lineNo */
  12,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  430,                                 /* lineNo */
  36,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  430,                                 /* lineNo */
  52,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  450,                                 /* lineNo */
  18,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 450, /* lineNo */
  18,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  452,                                 /* lineNo */
  18,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  575,                                 /* lineNo */
  26,                                  /* colNo */
  "Ym",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 575, /* lineNo */
  26,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  575,                                 /* lineNo */
  37,                                  /* colNo */
  "Ym",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  572,                                 /* lineNo */
  26,                                  /* colNo */
  "Ym",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  544,                                 /* lineNo */
  22,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  576,                                 /* lineNo */
  29,                                  /* colNo */
  "Ym",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  26,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 506, /* lineNo */
  26,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 461, /* lineNo */
  24,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  461,                                 /* lineNo */
  24,                                  /* colNo */
  "BB",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  572,                                 /* lineNo */
  38,                                  /* colNo */
  "Ym",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  502,                                 /* lineNo */
  29,                                  /* colNo */
  "seq",                               /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  573,                                 /* lineNo */
  29,                                  /* colNo */
  "Ym",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  523,                                 /* lineNo */
  34,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 609, /* lineNo */
  23,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  609,                                 /* lineNo */
  23,                                  /* colNo */
  "MDmod",                             /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  521,                                 /* lineNo */
  34,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  607,                                 /* lineNo */
  17,                                  /* colNo */
  "MDmod",                             /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  553,                                 /* lineNo */
  26,                                  /* colNo */
  "unit",                              /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  532,                                 /* lineNo */
  30,                                  /* colNo */
  "unitout",                           /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  629,                                 /* lineNo */
  37,                                  /* colNo */
  "MDltminT",                          /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 629, /* lineNo */
  37,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  653,                                 /* lineNo */
  17,                                  /* colNo */
  "bsbT",                              /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  798,                                 /* lineNo */
  17,                                  /* colNo */
  "mmd",                               /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 798, /* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 674, /* lineNo */
  37,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  674,                                 /* lineNo */
  37,                                  /* colNo */
  "MDltminT",                          /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  690,                                 /* lineNo */
  21,                                  /* colNo */
  "MDmod",                             /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  675,                                 /* lineNo */
  29,                                  /* colNo */
  "bsb",                               /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  775,                                 /* lineNo */
  29,                                  /* colNo */
  "seq",                               /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  681,                                 /* lineNo */
  27,                                  /* colNo */
  "MDmod",                             /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  680,                                 /* lineNo */
  29,                                  /* colNo */
  "bsb",                               /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  755,                                 /* lineNo */
  26,                                  /* colNo */
  "bsbT",                              /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  747,                                 /* lineNo */
  30,                                  /* colNo */
  "bsbriniT",                          /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 784, /* lineNo */
  26,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  784,                                 /* lineNo */
  26,                                  /* colNo */
  "bsbT",                              /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  711,                                 /* lineNo */
  24,                                  /* colNo */
  "bsbT",                              /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  720,                                 /* lineNo */
  29,                                  /* colNo */
  "bsbriniT",                          /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  727,                                 /* lineNo */
  21,                                  /* colNo */
  "MDmod",                             /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  718,                                 /* lineNo */
  37,                                  /* colNo */
  "unitout",                           /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo x_emlrtRTEI = { 13,/* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtRTEInfo y_emlrtRTEI = { 27,/* lineNo */
  24,                                  /* colNo */
  "FSMmmd_wrapper",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\FSMmmd_wrapper.m"/* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = { 205,/* lineNo */
  1,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = { 251,/* lineNo */
  4,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = { 257,/* lineNo */
  22,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo db_emlrtRTEI = { 28,/* lineNo */
  9,                                   /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = { 309,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = { 320,/* lineNo */
  1,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = { 321,/* lineNo */
  6,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = { 326,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = { 327,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = { 328,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = { 329,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = { 330,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = { 331,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = { 332,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = { 381,/* lineNo */
  12,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = { 84,/* lineNo */
  5,                                   /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = { 88,/* lineNo */
  5,                                   /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = { 105,/* lineNo */
  9,                                   /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = { 374,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = { 382,/* lineNo */
  9,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = { 372,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = { 379,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = { 386,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = { 27,/* lineNo */
  1,                                   /* colNo */
  "FSMmmd_wrapper",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\FSMmmd_wrapper.m"/* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = { 410,/* lineNo */
  14,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = { 397,/* lineNo */
  9,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = { 410,/* lineNo */
  29,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = { 402,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = { 410,/* lineNo */
  1,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo fc_emlrtRTEI = { 416,/* lineNo */
  6,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo gc_emlrtRTEI = { 416,/* lineNo */
  19,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo hc_emlrtRTEI = { 416,/* lineNo */
  1,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = { 423,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = { 430,/* lineNo */
  10,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = { 438,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = { 439,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = { 440,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = { 430,/* lineNo */
  30,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = { 450,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = { 452,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = { 458,/* lineNo */
  24,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = { 471,/* lineNo */
  9,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = { 575,/* lineNo */
  23,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = { 540,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = { 575,/* lineNo */
  34,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo vc_emlrtRTEI = { 572,/* lineNo */
  23,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo wc_emlrtRTEI = { 544,/* lineNo */
  20,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo xc_emlrtRTEI = { 501,/* lineNo */
  42,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo yc_emlrtRTEI = { 544,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = { 506,/* lineNo */
  24,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo bd_emlrtRTEI = { 461,/* lineNo */
  24,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = { 506,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = { 576,/* lineNo */
  26,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = { 572,/* lineNo */
  35,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = { 578,/* lineNo */
  20,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = { 546,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = { 523,/* lineNo */
  32,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo id_emlrtRTEI = { 523,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = { 586,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = { 549,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = { 573,/* lineNo */
  26,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo md_emlrtRTEI = { 587,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo nd_emlrtRTEI = { 521,/* lineNo */
  32,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo od_emlrtRTEI = { 588,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = { 521,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = { 526,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = { 604,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = { 609,/* lineNo */
  23,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo td_emlrtRTEI = { 615,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ud_emlrtRTEI = { 553,/* lineNo */
  24,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo vd_emlrtRTEI = { 529,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo wd_emlrtRTEI = { 564,/* lineNo */
  31,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo xd_emlrtRTEI = { 553,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo yd_emlrtRTEI = { 556,/* lineNo */
  25,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ae_emlrtRTEI = { 532,/* lineNo */
  28,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo be_emlrtRTEI = { 621,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ce_emlrtRTEI = { 532,/* lineNo */
  25,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo de_emlrtRTEI = { 629,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ee_emlrtRTEI = { 627,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo fe_emlrtRTEI = { 535,/* lineNo */
  29,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ge_emlrtRTEI = { 644,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo he_emlrtRTEI = { 660,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ie_emlrtRTEI = { 1,/* lineNo */
  22,                                  /* colNo */
  "FSMmmd_wrapper",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\FSMmmd_wrapper.m"/* pName */
};

static emlrtRTEInfo je_emlrtRTEI = { 770,/* lineNo */
  38,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ke_emlrtRTEI = { 771,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo le_emlrtRTEI = { 803,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo me_emlrtRTEI = { 689,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ne_emlrtRTEI = { 788,/* lineNo */
  34,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo oe_emlrtRTEI = { 788,/* lineNo */
  27,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo pe_emlrtRTEI = { 681,/* lineNo */
  27,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo qe_emlrtRTEI = { 732,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo re_emlrtRTEI = { 788,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo se_emlrtRTEI = { 738,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo te_emlrtRTEI = { 739,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ue_emlrtRTEI = { 781,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ve_emlrtRTEI = { 757,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo we_emlrtRTEI = { 754,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo xe_emlrtRTEI = { 783,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ye_emlrtRTEI = { 755,/* lineNo */
  26,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo af_emlrtRTEI = { 784,/* lineNo */
  26,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo bf_emlrtRTEI = { 27,/* lineNo */
  22,                                  /* colNo */
  "FSMmmd_wrapper",                    /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\FSMmmd_wrapper.m"/* pName */
};

static emlrtRTEInfo cf_emlrtRTEI = { 284,/* lineNo */
  9,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo df_emlrtRTEI = { 421,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ef_emlrtRTEI = { 479,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ff_emlrtRTEI = { 527,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo gf_emlrtRTEI = { 564,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo hf_emlrtRTEI = { 573,/* lineNo */
  20,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo if_emlrtRTEI = { 364,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo jf_emlrtRTEI = { 594,/* lineNo */
  27,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo kf_emlrtRTEI = { 452,/* lineNo */
  18,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo lf_emlrtRTEI = { 463,/* lineNo */
  24,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo mf_emlrtRTEI = { 572,/* lineNo */
  26,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo nf_emlrtRTEI = { 572,/* lineNo */
  38,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo of_emlrtRTEI = { 573,/* lineNo */
  29,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo pf_emlrtRTEI = { 521,/* lineNo */
  34,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo qf_emlrtRTEI = { 778,/* lineNo */
  32,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo rf_emlrtRTEI = { 779,/* lineNo */
  31,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo sf_emlrtRTEI = { 374,/* lineNo */
  31,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo uf_emlrtRTEI = { 410,/* lineNo */
  6,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRSInfo lk_emlrtRSI = { 437,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo mk_emlrtRSI = { 584,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo nk_emlrtRSI = { 66, /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtRSInfo ok_emlrtRSI = { 68, /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtRSInfo pk_emlrtRSI = { 69, /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtRSInfo qk_emlrtRSI = { 393,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo rk_emlrtRSI = { 434,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo sk_emlrtRSI = { 582,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo tk_emlrtRSI = { 264,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo uk_emlrtRSI = { 352,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo vk_emlrtRSI = { 813,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo wk_emlrtRSI = { 812,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const char_T u[7]);
static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const char_T u[4]);
static const mxArray *d_emlrt_marshallOut(const real_T u);
static void disp(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                 emlrtMCInfo *location);
static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [61]);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[29]);
static const mxArray *f_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [62]);
static const mxArray *g_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [21]);
static const mxArray *h_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [22]);
static const mxArray *i_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [42]);
static const mxArray *j_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [100]);
static const mxArray *k_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [67]);
static const mxArray *l_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [63]);
static const mxArray *m_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [41]);
static const mxArray *n_emlrt_marshallOut(const emlrtStack *sp, const char_T
  u_data[], const int32_T u_size[2]);

/* Function Definitions */
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const char_T u[7])
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

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const char_T u[4])
{
  static const int32_T iv[2] = { 1, 4 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 4, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *d_emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
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

static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [61])
{
  static const int32_T iv[2] = { 1, 61 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 61, m, &u[0]);
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
  [21])
{
  static const int32_T iv[2] = { 1, 21 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 21, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *h_emlrt_marshallOut(const emlrtStack *sp, const char_T u
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

static const mxArray *j_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [100])
{
  static const int32_T iv[2] = { 1, 100 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 100, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *k_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [67])
{
  static const int32_T iv[2] = { 1, 67 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 67, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *l_emlrt_marshallOut(const emlrtStack *sp, const char_T u
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

static const mxArray *m_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [41])
{
  static const int32_T iv[2] = { 1, 41 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 41, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *n_emlrt_marshallOut(const emlrtStack *sp, const char_T
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

void FSMmmd_wrapper(const emlrtStack *sp, const emxArray_real_T *Y, const
                    emxArray_real_T *bsb, const emxArray_real_T *bsbsteps,
                    real_T init, boolean_T msg, boolean_T nocheck,
                    emxArray_real_T *mmd, emxArray_real_T *Un, emxArray_real_T
                    *BB)
{
  static const char_T cv2[100] = { 'A', 't', 't', 'e', 'n', 't', 'i', 'o', 'n',
    ' ', ':', ' ', 'i', 'n', 'i', 't', '1', ' ', 's', 'h', 'o', 'u', 'l', 'd',
    ' ', 'b', 'e', ' ', '>', '=', ' ', 'l', 'e', 'n', 'g', 't', 'h', ' ', 'o',
    'f', ' ', 's', 'u', 'p', 'p', 'l', 'i', 'e', 'd', ' ', 's', 'u', 'b', 's',
    'e', 't', '.', ' ', 'I', 't', ' ', 'i', 's', ' ', 's', 'e', 't', ' ', 'e',
    'q', 'u', 'a', 'l', ' ', 't', 'o', ' ', 's', 'i', 'z', 'e', ' ', 'o', 'f',
    ' ', 's', 'u', 'p', 'p', 'l', 'i', 'e', 'd', ' ', 's', 'u', 'b', 's', 'e',
    't' };

  static const char_T cv6[67] = { 'I', 't', ' ', 'i', 's', ' ', 'i', 'm', 'p',
    'o', 's', 's', 'i', 'b', 'l', 'e', ' ', 't', 'o', ' ', 'm', 'o', 'n', 'i',
    't', 'o', 'r', ' ', 't', 'h', 'e', ' ', 's', 'u', 'b', 's', 'e', 't', ' ',
    'f', 'o', 'r', ' ', 'v', 'a', 'l', 'u', 'e', 's', ' ', 's', 'm', 'a', 'l',
    'l', 'e', 'r', ' ', 't', 'h', 'a', 'n', ' ', 'i', 'n', 'i', 't' };

  static const char_T cv7[63] = { 'T', 'h', 'e', ' ', 's', 'u', 'p', 'p', 'l',
    'i', 'e', 'd', ' ', 'i', 'n', 'i', 't', 'i', 'a', 'l', ' ', 's', 'u', 'b',
    's', 'e', 't', ' ', 'd', 'o', 'e', 's', ' ', 'n', 'o', 't', ' ', 'p', 'r',
    'o', 'd', 'u', 'c', 'e', ' ', 'a', ' ', 'f', 'u', 'l', 'l', ' ', 'r', 'a',
    'n', 'k', ' ', 'm', 'a', 't', 'r', 'i', 'x' };

  static const char_T b_varargin_1[62] = { 'A', 't', 't', 'e', 'n', 't', 'i',
    'o', 'n', ' ', ':', ' ', 'i', 'n', 'i', 't', '1', ' ', 's', 'h', 'o', 'u',
    'l', 'd', ' ', 'b', 'e', ' ', 's', 'm', 'a', 'l', 'l', 'e', 'r', ' ', 't',
    'h', 'a', 'n', ' ', 'n', '.', ' ', '\x0a', 'I', 't', ' ', 'i', 's', ' ', 's',
    'e', 't', ' ', 't', 'o', ' ', 'n', '-', '1', '.' };

  static const char_T varargin_1[61] = { 'A', 't', 't', 'e', 'n', 't', 'i', 'o',
    'n', ' ', ':', ' ', 'i', 'n', 'i', 't', '1', ' ', 's', 'h', 'o', 'u', 'l',
    'd', ' ', 'b', 'e', ' ', 'l', 'a', 'r', 'g', 'e', 'r', ' ', 't', 'h', 'a',
    'n', ' ', 'v', '.', ' ', '\x0a', 'I', 't', ' ', 'i', 's', ' ', 's', 'e', 't',
    ' ', 't', 'o', ' ', 'v', '+', '1', '.' };

  static const char_T cv10[44] = { 'W', 'a', 'r', 'n', 'i', 'n', 'g', ':', ' ',
    'i', 'n', 't', 'e', 'r', 'c', 'h', 'a', 'n', 'g', 'e', ' ', 'g', 'r', 'e',
    'a', 't', 'e', 'r', ' ', 't', 'h', 'a', 'n', ' ', '1', '0', ' ', 'w', 'h',
    'e', 'n', ' ', 'm', '=' };

  static const char_T cv1[42] = { 'U', 'n', 'a', 'b', 'l', 'e', ' ', 't', 'o',
    ' ', 'r', 'a', 'n', 'd', 'o', 'm', 'l', 'y', ' ', 's', 'a', 'm', 'p', 'l',
    'e', ' ', 'f', 'u', 'l', 'l', ' ', 'r', 'a', 'n', 'k', ' ', 'm', 'a', 't',
    'r', 'i', 'x' };

  static const char_T cv9[41] = { 'S', 'u', 'b', 's', 'e', 't', ' ', 'a', 't',
    ' ', 's', 't', 'e', 'p', ' ', 'm', 'm', ' ', 'i', 's', ' ', 'n', 'o', 't',
    ' ', 'f', 'u', 'l', 'l', ' ', 'r', 'a', 'n', 'k', ' ', 'm', 'a', 't', 'r',
    'i', 'x' };

  static const char_T cv11[30] = { 'N', 'u', 'm', 'b', 'e', 'r', ' ', 'o', 'f',
    ' ', 'u', 'n', 'i', 't', 's', ' ', 'w', 'h', 'i', 'c', 'h', ' ', 'e', 'n',
    't', 'e', 'r', 'e', 'd', '=' };

  static const char_T cv8[29] = { 'F', 'S', ' ', 'l', 'o', 'o', 'p', ' ', 'w',
    'i', 'l', 'l', ' ', 'n', 'o', 't', ' ', 'b', 'e', ' ', 'p', 'e', 'r', 'f',
    'o', 'r', 'm', 'e', 'd' };

  static const char_T b_cv[22] = { 'F', 'S', 'D', 'A', ':', 'F', 'S', 'M', 'm',
    'm', 'd', ':', 'N', 'o', 'F', 'u', 'l', 'l', 'R', 'a', 'n', 'k' };

  static const char_T cv5[21] = { 'F', 'S', 'D', 'A', ':', 'F', 'S', 'M', 'm',
    'm', 'd', ':', 'W', 'r', 'o', 'n', 'g', 'I', 'n', 'i', 't' };

  static const char_T cv3[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  static const char_T cv4[4] = { '%', 's', '\\', 'n' };

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
  emlrtStack l_st;
  emlrtStack st;
  emxArray_boolean_T *MDltminT;
  emxArray_boolean_T *MDltminbsb;
  emxArray_boolean_T *bsbT;
  emxArray_boolean_T *bsbriniT;
  emxArray_boolean_T *c_bsbsteps;
  emxArray_boolean_T *oldbsbT;
  emxArray_int32_T *bsbr;
  emxArray_int32_T *ii;
  emxArray_int32_T *r10;
  emxArray_int32_T *r3;
  emxArray_int32_T *r4;
  emxArray_int32_T *r5;
  emxArray_int32_T *r6;
  emxArray_int32_T *r7;
  emxArray_int32_T *r8;
  emxArray_int32_T *r9;
  emxArray_int32_T *unit;
  emxArray_real_T *MD;
  emxArray_real_T *R;
  emxArray_real_T *S;
  emxArray_real_T *Szi;
  emxArray_real_T *Yb;
  emxArray_real_T *Ym;
  emxArray_real_T *b_Y;
  emxArray_real_T *b_bsb;
  emxArray_real_T *b_bsbsteps;
  emxArray_real_T *c_Y;
  emxArray_real_T *meoldbsb;
  emxArray_real_T *mi;
  emxArray_real_T *mibsbr;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *seq;
  emxArray_real_T *unitout;
  emxArray_real_T *y;
  emxArray_real_T *ym;
  emxArray_real_T *zi;
  emxArray_uint32_T *bsbrini;
  real_T a;
  real_T b_mm;
  real_T d;
  real_T ex;
  real_T init1;
  real_T ksor;
  real_T percn;
  real_T rankgap;
  real_T *x;
  int32_T bsbradd[10];
  int32_T d_tmp_data[10];
  int32_T unitadd[10];
  int32_T b_tmp_size[2];
  int32_T iv[2];
  int32_T tmp_size[2];
  int32_T ym_size[2];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T idx;
  int32_T ini0;
  int32_T loop_ub;
  int32_T lunit;
  int32_T m;
  int32_T mm;
  int32_T n;
  int32_T nwhile;
  int32_T partialTrueCount;
  int32_T trueCount;
  int32_T v;
  int32_T zz;
  uint32_T ij;
  char_T b_tmp_data[54];
  char_T c_tmp_data[40];
  char_T tmp_data[10];
  boolean_T Ra;
  boolean_T b_guard1 = false;
  boolean_T exitg1;
  boolean_T exitg2;
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
  f_st.prev = &c_st;
  f_st.tls = c_st.tls;
  g_st.prev = &d_st;
  g_st.tls = d_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  j_st.prev = &i_st;
  j_st.tls = i_st.tls;
  k_st.prev = &j_st;
  k_st.tls = j_st.tls;
  l_st.prev = &k_st;
  l_st.tls = k_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_bsb, 1, &y_emlrtRTEI, true);

  /*  Required input arguments */
  /*  Y: an array of doubles of any dimension */
  /*  bsb: a column vector of doubles of any length */
  /*  bsbsteps: a missing value, a scalar or a column vector of doubles of any length */
  /*  init a scalar double */
  /*  msg is a scalar boolean */
  /*  nocheck is a boolean */
  st.site = &emlrtRSI;
  i = b_bsb->size[0];
  b_bsb->size[0] = bsb->size[0];
  emxEnsureCapacity_real_T(&st, b_bsb, i, &y_emlrtRTEI);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_bsb->data[i] = bsb->data[i];
  }

  emxInit_real_T(&st, &b_Y, 2, &bf_emlrtRTEI, true);

  /* FSMmmd monitors minMD */
  /*  */
  /* <a href="matlab: docsearchFS('FSMmmd')">Link to the help function</a> */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*  Y :           Input data. Matrix. */
  /*                n x v data matrix; n observations and v variables. Rows of */
  /*                Y represent observations, and columns represent variables. */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*                 Data Types - single|double */
  /*  bsb :         Units forming subset. Vector. List of units forming the initial subset. */
  /*                If bsb=0 (default) then the procedure starts with p units randomly */
  /*                chosen else if bsb is not 0 the search will start with */
  /*                m0=length(bsb) */
  /*                Data Types - single | double */
  /*  */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*    bsbsteps :  Save the units forming subsets. Vector. It specifies for */
  /*                which steps of the fwd search it */
  /*                is necessary to save the units forming subsets. If bsbsteps */
  /*                is 0 we store the units forming subset in all steps. The */
  /*                default is store the units forming subset in all steps if */
  /*                n<=5000, else to store the units forming subset at steps */
  /*                init and steps which are multiple of 100. For example, as */
  /*                default, if n=7530 and init=6, */
  /*                units forming subset are stored for */
  /*                m=init, 100, 200, ..., 7500. */
  /*                Example - 'bsbsteps',[100 200] stores the unis forming */
  /*                subset in steps 100 and 200. */
  /*                Data Types - double */
  /*  */
  /*  init :       Point where to start monitoring */
  /*                required diagnostics. Scalar. Note that if bsb is supplied, */
  /*                init>=length(bsb). If init is not specified it will */
  /*                be set equal to floor(n*0.6). */
  /*                  Example - 'init',50 */
  /*                  Data Types - double */
  /*  */
  /*   msg  :     It controls whether to display or not messages */
  /*                about great interchange on the screen. Scalar. */
  /*                If msg==1 (default) messages are displyed on the screen */
  /*                else no message is displayed on the screen. */
  /*                  Example - 'msg',0 */
  /*                  Data Types - double */
  /*  */
  /*  nocheck :   It controls wether to perform checks on */
  /*                matrix Y. Boolean. If nocheck is equal to true no check is */
  /*                performed on matrix Y. As default nocheck=false. */
  /*                  Example - 'nocheck',false */
  /*                  Data Types - logical */
  /*  */
  /*  */
  /*  plots :     It specify whether it is necessary to produce the plots of minimum Mahalanobis */
  /*                  distance. Scalar. If plots=1, a plot of the monitoring of minMD among */
  /*                the units not belonging to the subset is produced on the */
  /*                screen with 1% 50% and 99% confidence bands */
  /*                else (default) no plot is produced. */
  /*                  Example - 'plots',0 */
  /*                  Data Types - double */
  /*  */
  /*  */
  /*  Remark :      The user should only give the input arguments that have to */
  /*                change their default value. */
  /*                The name of the input arguments needs to be followed by */
  /*                their value. The order of the input arguments is of no */
  /*                importance. */
  /*  */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite */
  /*                values will automatically be excluded from the */
  /*                computations. y can be both a row of column vector. */
  /*  */
  /*  Output: */
  /*  */
  /*  mmd :         (n-init) x 2 matrix which contains the monitoring of minimum */
  /*                Mahalanobis distance each step of the forward search. */
  /*                1st col = fwd search index (from init to n-1); */
  /*                2nd col = minimum Mahalanobis distance. */
  /*  Un :          (n-init) x 11 Matrix which contains the unit(s) included */
  /*                in the subset at each step of the search. */
  /*                REMARK: in every step the new subset is compared with the */
  /*                old subset. Un contains the unit(s) present in the new */
  /*                subset but not in the old one. */
  /*                Un(1,2) for example contains the unit included in step */
  /*                init+1. */
  /*                Un(end,2) contains the units included in the final step */
  /*                of the search. */
  /*  */
  /*   Optional Output: */
  /*  */
  /*  BB :   n x (n-init+1) matrix containing units belonging to subset in */
  /*                each step of the search. Each row is associated to a unit */
  /*                while each colum is associated to a step of the fwd search. */
  /*  */
  /*  See also FSMenvmmd.m, FSM.m, FSMmmdeasy, quickselectFS.m */
  /*  */
  /*  References: */
  /*  */
  /*  Atkinson, A.C., Riani, M. and Cerioli, A. (2004), "Exploring multivariate */
  /*  data with the forward search", Springer Verlag, New York. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* <a href="matlab: docsearchFS('FSMmmd')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     %% Minimum Mahalanobis distance. */
  /*     % Personalized initial subset (small n). Create an initial subset with */
  /*     % the 4 observations which fell the smallest */
  /*     % number of times outside the robust bivariate ellipses and with the */
  /*     % lowest Mahalanobis Distance. */
  /*     rng('default') */
  /*     n=200; */
  /*     v=3; */
  /*     m0=4; */
  /*     randn('state',123456); */
  /*     Y=randn(n,v); */
  /*     %Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:)=Ycont(1:5,:)+3; */
  /*     [fre]=unibiv(Y); */
  /*     fre=sortrows(fre,[3 4]); */
  /*     bs=fre(1:m0,1); */
  /*     mmd=FSMmmd(Ycont,bs); */
  /*     plot(mmd(:,1),mmd(:,2)) */
  /* } */
  /* { */
  /*     %% FSMmmd with optional arguments. */
  /*     % Plotting the bandwith of the minimum Mahalanobis distance */
  /*     n=200; */
  /*     v=3; */
  /*     m0=4; */
  /*     randn('state',123456); */
  /*     Y=randn(n,v); */
  /*     %Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:)=Ycont(1:5,:)+3; */
  /*     [fre]=unibiv(Y); */
  /*     fre=sortrows(fre,[3 4]); */
  /*     bs=fre(1:m0,1); */
  /*     [mmd]=FSMmmd(Ycont,bs,'plots',1); */
  /*     % The output is exactly the same as that of FSMmmdeasy */
  /*     % mmd1=FSMmmdeasy(Ycont,bs,'plots',1); */
  /* } */
  /* { */
  /*     % Checking the unit(s) included in the subset at each step of the */
  /*     % search. */
  /*     % Un contains the unit(s) present in the new subset but not in the old one. */
  /*     n=200; */
  /*     v=3; */
  /*     m0=4; */
  /*     randn('state',123456); */
  /*     Y=randn(n,v); */
  /*     %Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:)=Ycont(1:5,:)+3; */
  /*     [fre]=unibiv(Y); */
  /*     fre=sortrows(fre,[3 4]); */
  /*     bs=fre(1:m0,1); */
  /*     [mmd,Un]=FSMmmd(Ycont,bs,'plots',1); */
  /*     % The output is exactly the same as that of FSMmmdeasy */
  /*     % [mmd1,Un]=FSMmmdeasy(Ycont,bs,'plots',1); */
  /* } */
  /* { */
  /*     % Checking the units belonging to subset in each step of the search. */
  /*     % Personalized initial subset (large n). Each row of BB matrix */
  /*     % is associated to a unit while each colum is associated to a step of the fwd search. */
  /*     n=20000; */
  /*     v=3; */
  /*     m0=10; */
  /*     randn('state',123456); */
  /*     Y=randn(n,v); */
  /*     % 25 per cent of Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5000,:)=Ycont(1:5000,:)+3; */
  /*     [fre]=unibiv(Y); */
  /*     fre=sortrows(fre,[3 4]); */
  /*     bs=fre(1:m0,1); */
  /*     [mmd,Un,BB]=FSMmmd(Ycont,bs,'plots',1); */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checking */
  /* chkinputM does not do any check if option nocheck=true */
  i = b_Y->size[0] * b_Y->size[1];
  b_Y->size[0] = Y->size[0];
  b_Y->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(&st, b_Y, i, &ab_emlrtRTEI);
  loop_ub = Y->size[0] * Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_Y->data[i] = Y->data[i];
  }

  emxInit_boolean_T(&st, &bsbT, 1, &fb_emlrtRTEI, true);
  b_st.site = &cc_emlrtRSI;
  chkinputM(&b_st, b_Y, nocheck);

  /*  rows(Y) */
  v = b_Y->size[1];
  n = b_Y->size[0];

  /*  Do not use implicit expansion */
  /*  Input parameters checking */
  /* init1=options.init; */
  /*  Write in structure 'options' the options chosen by the user */
  /*  And check if the optional user parameters are reasonable. */
  i = bsbT->size[0];
  bsbT->size[0] = bsb->size[0];
  emxEnsureCapacity_boolean_T(&st, bsbT, i, &bb_emlrtRTEI);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[i] = (bsb->data[i] == 0.0);
  }

  emxInit_real_T(&st, &Yb, 2, &oc_emlrtRTEI, true);
  emxInit_real_T(&st, &c_Y, 2, &jc_emlrtRTEI, true);
  b_st.site = &bc_emlrtRSI;
  if (ifWhileCond(&b_st, bsbT)) {
    Ra = true;
    nwhile = 1;
    while (Ra && (nwhile < 100)) {
      /*  Extract a random sample of size v+1 */
      b_st.site = &ac_emlrtRSI;
      randsample(&b_st, n, (real_T)v + 1.0, b_bsb);

      /*  Check if the var-cov matrix of the random sample is full (i.e =v) */
      b_st.site = &yb_emlrtRSI;
      loop_ub = b_Y->size[1];
      i = c_Y->size[0] * c_Y->size[1];
      c_Y->size[0] = b_bsb->size[0];
      c_Y->size[1] = b_Y->size[1];
      emxEnsureCapacity_real_T(&b_st, c_Y, i, &cb_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        m = b_bsb->size[0];
        for (i1 = 0; i1 < m; i1++) {
          i2 = (int32_T)b_bsb->data[i1];
          if ((i2 < 1) || (i2 > b_Y->size[0])) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, b_Y->size[0], &q_emlrtBCI,
              &b_st);
          }

          c_Y->data[i1 + c_Y->size[0] * i] = b_Y->data[(i2 + b_Y->size[0] * i) -
            1];
        }
      }

      c_st.site = &yb_emlrtRSI;
      cov(&c_st, c_Y, Yb);
      c_st.site = &rd_emlrtRSI;
      m = local_rank(&c_st, Yb);
      Ra = (m < v);
      nwhile++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }

    if (nwhile == 100) {
      b_st.site = &tk_emlrtRSI;
      disp(&b_st, h_emlrt_marshallOut(&b_st, b_cv), i_emlrt_marshallOut(&b_st,
            cv1), &emlrtMCI);
    }
  }

  emxInit_real_T(&st, &ym, 2, &rc_emlrtRTEI, true);

  /*  percn = scalar which controls up to which point of the search it is */
  /*  better to use linear indexing to extract the units forming subset. For */
  /*  example percn=0.85*n means that units belonging to susbet are found using */
  /*  linear indexing up to step m=0.85*n. After m=0.85*n units belonging to */
  /*  subset are found using a n-by-1 logical vector */
  percn = 0.85 * (real_T)b_Y->size[0];

  /*  nrepmin = scalar which controls the maximum number of repeated minima */
  /*  which must be taken in order to find new subset */
  if (b_Y->size[0] < 1) {
    ym->size[0] = 1;
    ym->size[1] = 0;
  } else {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = b_Y->size[0];
    emxEnsureCapacity_real_T(&st, ym, i, &db_emlrtRTEI);
    loop_ub = b_Y->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      ym->data[i] = (real_T)i + 1.0;
    }
  }

  emxInit_real_T(&st, &seq, 1, &cf_emlrtRTEI, true);
  i = seq->size[0];
  seq->size[0] = ym->size[1];
  emxEnsureCapacity_real_T(&st, seq, i, &eb_emlrtRTEI);
  loop_ub = ym->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq->data[i] = ym->data[i];
  }

  for (b_i = 0; b_i < 10; b_i++) {
    unitadd[b_i] = 0;
    bsbradd[b_i] = 0;
  }

  /*  Initialization of the n x 1 Boolean vector which contains a true in */
  /*  correspondence of the units belonging to subset in each step */
  i = bsbT->size[0];
  bsbT->size[0] = b_Y->size[0];
  emxEnsureCapacity_boolean_T(&st, bsbT, i, &fb_emlrtRTEI);
  loop_ub = b_Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[i] = false;
  }

  emxInit_int32_T(&st, &ii, 1, &tf_emlrtRTEI, true);
  i = ii->size[0];
  ii->size[0] = b_bsb->size[0];
  emxEnsureCapacity_int32_T(&st, ii, i, &gb_emlrtRTEI);
  loop_ub = b_bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (b_bsb->data[i] != (int32_T)muDoubleScalarFloor(b_bsb->data[i])) {
      emlrtIntegerCheckR2012b(b_bsb->data[i], &e_emlrtDCI, &st);
    }

    i1 = (int32_T)b_bsb->data[i];
    if ((i1 < 1) || (i1 > b_Y->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)b_bsb->data[i], 1, b_Y->size[0],
        &r_emlrtBCI, &st);
    }

    ii->data[i] = i1;
  }

  loop_ub = ii->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[ii->data[i] - 1] = true;
  }

  emxInit_real_T(&st, &S, 2, &hb_emlrtRTEI, true);

  /*  Initialization for Matlab coder */
  rankgap = 0.0;
  i = S->size[0] * S->size[1];
  S->size[0] = b_Y->size[1];
  S->size[1] = b_Y->size[1];
  emxEnsureCapacity_real_T(&st, S, i, &hb_emlrtRTEI);
  loop_ub = b_Y->size[1] * b_Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    S->data[i] = 0.0;
  }

  emxInit_real_T(&st, &meoldbsb, 2, &ib_emlrtRTEI, true);
  i = meoldbsb->size[0] * meoldbsb->size[1];
  meoldbsb->size[0] = 1;
  meoldbsb->size[1] = b_Y->size[1];
  emxEnsureCapacity_real_T(&st, meoldbsb, i, &ib_emlrtRTEI);
  loop_ub = b_Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    meoldbsb->data[i] = 0.0;
  }

  emxInit_boolean_T(&st, &oldbsbT, 1, &jb_emlrtRTEI, true);
  i = oldbsbT->size[0];
  oldbsbT->size[0] = bsbT->size[0];
  emxEnsureCapacity_boolean_T(&st, oldbsbT, i, &jb_emlrtRTEI);
  loop_ub = bsbT->size[0];
  for (i = 0; i < loop_ub; i++) {
    oldbsbT->data[i] = bsbT->data[i];
  }

  emxInit_int32_T(&st, &bsbr, 1, &kb_emlrtRTEI, true);
  i = bsbr->size[0];
  bsbr->size[0] = b_Y->size[0];
  emxEnsureCapacity_int32_T(&st, bsbr, i, &kb_emlrtRTEI);
  loop_ub = b_Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbr->data[i] = 0;
  }

  emxInit_real_T(&st, &unitout, 1, &lb_emlrtRTEI, true);
  i = unitout->size[0];
  unitout->size[0] = b_Y->size[0];
  emxEnsureCapacity_real_T(&st, unitout, i, &lb_emlrtRTEI);
  loop_ub = b_Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    unitout->data[i] = 0.0;
  }

  emxInit_boolean_T(&st, &bsbriniT, 1, &mb_emlrtRTEI, true);
  i = bsbriniT->size[0];
  bsbriniT->size[0] = bsbT->size[0];
  emxEnsureCapacity_boolean_T(&st, bsbriniT, i, &mb_emlrtRTEI);
  loop_ub = bsbT->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbriniT->data[i] = bsbT->data[i];
  }

  emxInit_uint32_T(&st, &bsbrini, 1, &nb_emlrtRTEI, true);
  i = bsbrini->size[0];
  bsbrini->size[0] = b_Y->size[0];
  emxEnsureCapacity_uint32_T(&st, bsbrini, i, &nb_emlrtRTEI);
  loop_ub = b_Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbrini->data[i] = 0U;
  }

  ini0 = b_bsb->size[0];

  /*  check init */
  init1 = init;
  if (init < (real_T)b_Y->size[1] + 1.0) {
    b_st.site = &xb_emlrtRSI;
    c_st.site = &af_emlrtRSI;
    d_st.site = &nk_emlrtRSI;
    e_st.site = &ok_emlrtRSI;
    f_st.site = &pk_emlrtRSI;
    c_emlrt_marshallIn(&d_st, b_feval(&d_st, b_emlrt_marshallOut(&d_st, cv3),
      d_emlrt_marshallOut(1.0), c_emlrt_marshallOut(&e_st, cv4),
      e_emlrt_marshallOut(&f_st, varargin_1), &m_emlrtMCI), "<output of feval>");
    init1 = (real_T)b_Y->size[1] + 1.0;
  } else if (init < b_bsb->size[0]) {
    b_st.site = &uk_emlrtRSI;
    b_disp(&b_st, j_emlrt_marshallOut(&b_st, cv2), &b_emlrtMCI);
    init1 = b_bsb->size[0];
  } else if (init >= b_Y->size[0]) {
    b_st.site = &wb_emlrtRSI;
    c_st.site = &af_emlrtRSI;
    d_st.site = &nk_emlrtRSI;
    e_st.site = &ok_emlrtRSI;
    f_st.site = &pk_emlrtRSI;
    c_emlrt_marshallIn(&d_st, b_feval(&d_st, b_emlrt_marshallOut(&d_st, cv3),
      d_emlrt_marshallOut(1.0), c_emlrt_marshallOut(&e_st, cv4),
      f_emlrt_marshallOut(&f_st, b_varargin_1), &m_emlrtMCI),
                       "<output of feval>");
    init1 = (real_T)b_Y->size[0] - 1.0;
  }

  /*  Matrix BB will contain the units forming subset in each step (or in */
  /*  selected steps) of the forward search. The first column contains */
  /*  information about units forming subset at step init1. */
  emxInit_int32_T(&st, &unit, 1, &df_emlrtRTEI, true);
  emxInit_real_T(&st, &b_bsbsteps, 1, &if_emlrtRTEI, true);
  if ((bsbsteps->size[0] == 0) || (bsbsteps->size[1] == 0)) {
    /*  Default for vector bsbsteps which indicates for which steps of the fwd */
    /*  search units forming subset have to be saved */
    if (b_Y->size[0] <= 5000) {
      b_st.site = &b_emlrtRSI;
      if (muDoubleScalarIsNaN(init1)) {
        ym_size[1] = 1;
      } else if (b_Y->size[0] < init1) {
        ym_size[1] = 0;
      } else if (muDoubleScalarIsInf(init1) && (init1 == b_Y->size[0])) {
        ym_size[1] = 1;
      } else if (muDoubleScalarFloor(init1) == init1) {
        ym_size[1] = (int32_T)((real_T)b_Y->size[0] - init1) + 1;
      } else {
        c_st.site = &bf_emlrtRSI;
        eml_float_colon(&c_st, init1, b_Y->size[0], ym);
        ym_size[1] = ym->size[1];
      }

      b_st.site = &b_emlrtRSI;
      if (muDoubleScalarIsNaN(init1)) {
        i = ym->size[0] * ym->size[1];
        ym->size[0] = 1;
        ym->size[1] = 1;
        emxEnsureCapacity_real_T(&b_st, ym, i, &pb_emlrtRTEI);
        ym->data[0] = rtNaN;
      } else if (b_Y->size[0] < init1) {
        ym->size[0] = 1;
        ym->size[1] = 0;
      } else if (muDoubleScalarIsInf(init1) && (init1 == b_Y->size[0])) {
        i = ym->size[0] * ym->size[1];
        ym->size[0] = 1;
        ym->size[1] = 1;
        emxEnsureCapacity_real_T(&b_st, ym, i, &qb_emlrtRTEI);
        ym->data[0] = rtNaN;
      } else if (muDoubleScalarFloor(init1) == init1) {
        i = ym->size[0] * ym->size[1];
        ym->size[0] = 1;
        ym->size[1] = (int32_T)((real_T)b_Y->size[0] - init1) + 1;
        emxEnsureCapacity_real_T(&b_st, ym, i, &rb_emlrtRTEI);
        loop_ub = (int32_T)((real_T)b_Y->size[0] - init1);
        for (i = 0; i <= loop_ub; i++) {
          ym->data[i] = init1 + (real_T)i;
        }
      } else {
        c_st.site = &bf_emlrtRSI;
        eml_float_colon(&c_st, init1, b_Y->size[0], ym);
      }

      i = b_bsbsteps->size[0];
      b_bsbsteps->size[0] = ym_size[1];
      emxEnsureCapacity_real_T(&st, b_bsbsteps, i, &vb_emlrtRTEI);
      loop_ub = ym_size[1];
      for (i = 0; i < loop_ub; i++) {
        b_bsbsteps->data[i] = ym->data[i];
      }
    } else {
      emxInit_real_T(&st, &y, 2, &sf_emlrtRTEI, true);
      b_st.site = &vb_emlrtRSI;
      a = (init1 + 100.0) - b_mod(init1);
      m = 100 * (int32_T)muDoubleScalarFloor((real_T)b_Y->size[0] / 100.0);
      if (muDoubleScalarIsNaN(a)) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(&b_st, y, i, &pb_emlrtRTEI);
        y->data[0] = rtNaN;
      } else if (m < a) {
        y->size[0] = 1;
        y->size[1] = 0;
      } else if (muDoubleScalarIsInf(a) && (a == m)) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(&b_st, y, i, &qb_emlrtRTEI);
        y->data[0] = rtNaN;
      } else if (muDoubleScalarFloor(a) == a) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        loop_ub = (int32_T)muDoubleScalarFloor(((real_T)m - a) / 100.0);
        y->size[1] = loop_ub + 1;
        emxEnsureCapacity_real_T(&b_st, y, i, &rb_emlrtRTEI);
        for (i = 0; i <= loop_ub; i++) {
          y->data[i] = a + 100.0 * (real_T)i;
        }
      } else {
        c_st.site = &bf_emlrtRSI;
        b_eml_float_colon(&c_st, a, m, y);
      }

      i = b_bsbsteps->size[0];
      b_bsbsteps->size[0] = y->size[1] + 1;
      emxEnsureCapacity_real_T(&st, b_bsbsteps, i, &sb_emlrtRTEI);
      b_bsbsteps->data[0] = init1;
      loop_ub = y->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_bsbsteps->data[i + 1] = y->data[i];
      }

      emxFree_real_T(&y);
    }

    i = BB->size[0] * BB->size[1];
    BB->size[0] = b_Y->size[0];
    BB->size[1] = b_bsbsteps->size[0];
    emxEnsureCapacity_real_T(&st, BB, i, &wb_emlrtRTEI);
    loop_ub = b_Y->size[0] * b_bsbsteps->size[0];
    for (i = 0; i < loop_ub; i++) {
      BB->data[i] = rtNaN;
    }
  } else {
    emxInit_boolean_T(&st, &c_bsbsteps, 2, &ob_emlrtRTEI, true);
    i = c_bsbsteps->size[0] * c_bsbsteps->size[1];
    c_bsbsteps->size[0] = bsbsteps->size[0];
    c_bsbsteps->size[1] = 1;
    emxEnsureCapacity_boolean_T(&st, c_bsbsteps, i, &ob_emlrtRTEI);
    loop_ub = bsbsteps->size[0];
    for (i = 0; i < loop_ub; i++) {
      c_bsbsteps->data[i] = (bsbsteps->data[i] == 0.0);
    }

    b_st.site = &ub_emlrtRSI;
    if (b_ifWhileCond(&b_st, c_bsbsteps)) {
      b_st.site = &tb_emlrtRSI;
      c_st.site = &ef_emlrtRSI;
      if (muDoubleScalarIsNaN(init1)) {
        i = ym->size[0] * ym->size[1];
        ym->size[0] = 1;
        ym->size[1] = 1;
        emxEnsureCapacity_real_T(&c_st, ym, i, &db_emlrtRTEI);
        ym->data[0] = rtNaN;
      } else if (b_Y->size[0] < init1) {
        ym->size[0] = 1;
        ym->size[1] = 0;
      } else if (muDoubleScalarIsInf(init1) && (init1 == b_Y->size[0])) {
        i = ym->size[0] * ym->size[1];
        ym->size[0] = 1;
        ym->size[1] = 1;
        emxEnsureCapacity_real_T(&c_st, ym, i, &db_emlrtRTEI);
        ym->data[0] = rtNaN;
      } else if (muDoubleScalarFloor(init1) == init1) {
        i = ym->size[0] * ym->size[1];
        ym->size[0] = 1;
        ym->size[1] = (int32_T)((real_T)b_Y->size[0] - init1) + 1;
        emxEnsureCapacity_real_T(&c_st, ym, i, &db_emlrtRTEI);
        loop_ub = (int32_T)((real_T)b_Y->size[0] - init1);
        for (i = 0; i <= loop_ub; i++) {
          ym->data[i] = init1 + (real_T)i;
        }
      } else {
        d_st.site = &bf_emlrtRSI;
        eml_float_colon(&d_st, init1, b_Y->size[0], ym);
      }

      i = b_bsbsteps->size[0];
      b_bsbsteps->size[0] = ym->size[1];
      emxEnsureCapacity_real_T(&st, b_bsbsteps, i, &ub_emlrtRTEI);
      loop_ub = ym->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_bsbsteps->data[i] = ym->data[i];
      }

      i = BB->size[0] * BB->size[1];
      BB->size[0] = b_Y->size[0];
      emxEnsureCapacity_real_T(&st, BB, i, &xb_emlrtRTEI);
      d = ((real_T)b_Y->size[0] - init1) + 1.0;
      if (!(d >= 0.0)) {
        emlrtNonNegativeCheckR2012b(d, &d_emlrtDCI, &st);
      }

      if (d != (int32_T)muDoubleScalarFloor(d)) {
        emlrtIntegerCheckR2012b(d, &c_emlrtDCI, &st);
      }

      i = BB->size[0] * BB->size[1];
      BB->size[1] = (int32_T)d;
      emxEnsureCapacity_real_T(&st, BB, i, &xb_emlrtRTEI);
      d = ((real_T)b_Y->size[0] - init1) + 1.0;
      if (!(d >= 0.0)) {
        emlrtNonNegativeCheckR2012b(d, &g_emlrtDCI, &st);
      }

      if (d != (int32_T)muDoubleScalarFloor(d)) {
        emlrtIntegerCheckR2012b(d, &f_emlrtDCI, &st);
      }

      loop_ub = b_Y->size[0] * (int32_T)d;
      for (i = 0; i < loop_ub; i++) {
        BB->data[i] = rtNaN;
      }
    } else {
      b_st.site = &sb_emlrtRSI;
      c_st.site = &yc_emlrtRSI;
      d_st.site = &ad_emlrtRSI;
      g_st.site = &bd_emlrtRSI;
      h_st.site = &tc_emlrtRSI;
      i_st.site = &uc_emlrtRSI;
      j_st.site = &vc_emlrtRSI;
      m = bsbsteps->size[0];
      i = ym->size[0] * ym->size[1];
      ym->size[0] = 1;
      ym->size[1] = 1;
      emxEnsureCapacity_real_T(&j_st, ym, i, &tb_emlrtRTEI);
      k_st.site = &xc_emlrtRSI;
      ym->data[0] = bsbsteps->data[0];
      k_st.site = &wc_emlrtRSI;
      if ((2 <= bsbsteps->size[0]) && (bsbsteps->size[0] > 2147483646)) {
        l_st.site = &oc_emlrtRSI;
        check_forloop_overflow_error(&l_st);
      }

      for (b_i = 2; b_i <= m; b_i++) {
        a = ym->data[0];
        ksor = bsbsteps->data[b_i - 1];
        if (muDoubleScalarIsNaN(ksor)) {
          Ra = false;
        } else if (muDoubleScalarIsNaN(a)) {
          Ra = true;
        } else {
          Ra = (a > ksor);
        }

        if (Ra) {
          ym->data[0] = ksor;
        }
      }

      ym_size[0] = 1;
      ym_size[1] = 1;
      for (i = 0; i < 1; i++) {
        Ra = (ym->data[0] < init1);
      }

      b_st.site = &sb_emlrtRSI;
      if (c_ifWhileCond((boolean_T *)&Ra, ym_size)) {
        b_st.site = &qk_emlrtRSI;
        disp(&b_st, g_emlrt_marshallOut(&b_st, cv5), k_emlrt_marshallOut(&b_st,
              cv6), &c_emlrtMCI);
      }

      b_st.site = &rb_emlrtRSI;
      indexShapeCheck(&b_st, *(int32_T (*)[2])bsbsteps->size, *(int32_T (*)[2])
                      bsbsteps->size);
      m = bsbsteps->size[0] - 1;
      trueCount = 0;
      for (b_i = 0; b_i <= m; b_i++) {
        if (bsbsteps->data[b_i] >= init1) {
          trueCount++;
        }
      }

      i = unit->size[0];
      unit->size[0] = trueCount;
      emxEnsureCapacity_int32_T(&st, unit, i, &yb_emlrtRTEI);
      partialTrueCount = 0;
      for (b_i = 0; b_i <= m; b_i++) {
        if (bsbsteps->data[b_i] >= init1) {
          unit->data[partialTrueCount] = b_i + 1;
          partialTrueCount++;
        }
      }

      i = b_bsbsteps->size[0];
      b_bsbsteps->size[0] = unit->size[0];
      emxEnsureCapacity_real_T(&st, b_bsbsteps, i, &bc_emlrtRTEI);
      loop_ub = unit->size[0];
      for (i = 0; i < loop_ub; i++) {
        if (unit->data[i] > bsbsteps->size[0]) {
          emlrtDynamicBoundsCheckR2012b(unit->data[i], 1, bsbsteps->size[0],
            &s_emlrtBCI, &st);
        }

        b_bsbsteps->data[i] = bsbsteps->data[unit->data[i] - 1];
      }

      i = BB->size[0] * BB->size[1];
      BB->size[0] = b_Y->size[0];
      BB->size[1] = unit->size[0];
      emxEnsureCapacity_real_T(&st, BB, i, &dc_emlrtRTEI);
      loop_ub = b_Y->size[0] * unit->size[0];
      for (i = 0; i < loop_ub; i++) {
        BB->data[i] = rtNaN;
      }
    }

    emxFree_boolean_T(&c_bsbsteps);
  }

  /*   Un is a Matrix whose 2nd column:11th col contain the unit(s) just */
  /*   included. */
  b_st.site = &qb_emlrtRSI;
  c_st.site = &ef_emlrtRSI;
  if (muDoubleScalarIsNaN(init1 + 1.0)) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = 1;
    emxEnsureCapacity_real_T(&c_st, ym, i, &db_emlrtRTEI);
    ym->data[0] = rtNaN;
  } else if (b_Y->size[0] < init1 + 1.0) {
    ym->size[0] = 1;
    ym->size[1] = 0;
  } else if (muDoubleScalarIsInf(init1 + 1.0) && (init1 + 1.0 == b_Y->size[0]))
  {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = 1;
    emxEnsureCapacity_real_T(&c_st, ym, i, &db_emlrtRTEI);
    ym->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(init1 + 1.0) == init1 + 1.0) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = (int32_T)muDoubleScalarFloor((real_T)b_Y->size[0] - (init1 +
      1.0)) + 1;
    emxEnsureCapacity_real_T(&c_st, ym, i, &db_emlrtRTEI);
    loop_ub = (int32_T)muDoubleScalarFloor((real_T)b_Y->size[0] - (init1 + 1.0));
    for (i = 0; i <= loop_ub; i++) {
      ym->data[i] = (init1 + 1.0) + (real_T)i;
    }
  } else {
    d_st.site = &bf_emlrtRSI;
    eml_float_colon(&d_st, init1 + 1.0, b_Y->size[0], ym);
  }

  d = (real_T)b_Y->size[0] - init1;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &i_emlrtDCI, &st);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &h_emlrtDCI, &st);
  }

  emxInit_real_T(&st, &Szi, 1, &ff_emlrtRTEI, true);
  i = Szi->size[0];
  Szi->size[0] = ym->size[1];
  emxEnsureCapacity_real_T(&st, Szi, i, &ac_emlrtRTEI);
  loop_ub = ym->size[1];
  for (i = 0; i < loop_ub; i++) {
    Szi->data[i] = ym->data[i];
  }

  emxInit_real_T(&st, &r, 2, &cc_emlrtRTEI, true);
  i = r->size[0] * r->size[1];
  r->size[0] = (int32_T)d;
  r->size[1] = 10;
  emxEnsureCapacity_real_T(&st, r, i, &cc_emlrtRTEI);
  loop_ub = (int32_T)d * 10;
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = rtNaN;
  }

  emxInit_real_T(&st, &r1, 2, &uf_emlrtRTEI, true);
  b_st.site = &qb_emlrtRSI;
  cat(&b_st, Szi, r, r1);
  i = Un->size[0] * Un->size[1];
  Un->size[0] = r1->size[0];
  Un->size[1] = 11;
  emxEnsureCapacity_real_T(&st, Un, i, &ec_emlrtRTEI);
  loop_ub = r1->size[0] * 11;
  emxFree_real_T(&r);
  for (i = 0; i < loop_ub; i++) {
    Un->data[i] = r1->data[i];
  }

  emxFree_real_T(&r1);

  /*   mmd has two columns */
  /*   1st col = dimension of the subset */
  /*   2nd col min. Mahalanobis distances among the units */
  /*   which do not belong to the subset */
  b_st.site = &pb_emlrtRSI;
  c_st.site = &ef_emlrtRSI;
  if (muDoubleScalarIsNaN(init1)) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = 1;
    emxEnsureCapacity_real_T(&c_st, ym, i, &db_emlrtRTEI);
    ym->data[0] = rtNaN;
  } else if ((real_T)b_Y->size[0] - 1.0 < init1) {
    ym->size[0] = 1;
    ym->size[1] = 0;
  } else if (muDoubleScalarIsInf(init1) && (init1 == (real_T)b_Y->size[0] - 1.0))
  {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = 1;
    emxEnsureCapacity_real_T(&c_st, ym, i, &db_emlrtRTEI);
    ym->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(init1) == init1) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = (int32_T)(((real_T)b_Y->size[0] - 1.0) - init1) + 1;
    emxEnsureCapacity_real_T(&c_st, ym, i, &db_emlrtRTEI);
    loop_ub = (int32_T)(((real_T)b_Y->size[0] - 1.0) - init1);
    for (i = 0; i <= loop_ub; i++) {
      ym->data[i] = init1 + (real_T)i;
    }
  } else {
    d_st.site = &bf_emlrtRSI;
    eml_float_colon(&d_st, init1, (real_T)b_Y->size[0] - 1.0, ym);
  }

  emxInit_real_T(&c_st, &MD, 1, &gf_emlrtRTEI, true);
  b_st.site = &pb_emlrtRSI;
  i = MD->size[0];
  MD->size[0] = ym->size[1];
  emxEnsureCapacity_real_T(&b_st, MD, i, &fc_emlrtRTEI);
  loop_ub = ym->size[1];
  for (i = 0; i < loop_ub; i++) {
    MD->data[i] = ym->data[i];
  }

  d = (real_T)b_Y->size[0] - init1;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &k_emlrtDCI, &b_st);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &j_emlrtDCI, &b_st);
  }

  i = Szi->size[0];
  Szi->size[0] = (int32_T)d;
  emxEnsureCapacity_real_T(&b_st, Szi, i, &gc_emlrtRTEI);
  d = (real_T)b_Y->size[0] - init1;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &k_emlrtDCI, &b_st);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &j_emlrtDCI, &b_st);
  }

  loop_ub = (int32_T)d;
  for (i = 0; i < loop_ub; i++) {
    Szi->data[i] = 0.0;
  }

  c_st.site = &if_emlrtRSI;
  d_st.site = &jf_emlrtRSI;
  if ((int32_T)((real_T)b_Y->size[0] - init1) != MD->size[0]) {
    emlrtErrorWithMessageIdR2018a(&d_st, &c_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  i = mmd->size[0] * mmd->size[1];
  mmd->size[0] = MD->size[0];
  mmd->size[1] = 2;
  emxEnsureCapacity_real_T(&st, mmd, i, &hc_emlrtRTEI);
  loop_ub = MD->size[0];
  for (i = 0; i < loop_ub; i++) {
    mmd->data[i] = MD->data[i];
  }

  loop_ub = Szi->size[0];
  for (i = 0; i < loop_ub; i++) {
    mmd->data[i + mmd->size[0]] = 0.0;
  }

  /*  unit is the vector which will contain the units which enter subset at each */
  /*  step. It is initialized as a vector of zeros */
  i = unit->size[0];
  unit->size[0] = b_bsb->size[0];
  emxEnsureCapacity_int32_T(&st, unit, i, &ic_emlrtRTEI);
  loop_ub = b_bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    unit->data[i] = 0;
  }

  lunit = b_bsb->size[0];

  /*  If the subset Y(bsb,:) is not full rank or a column is constant, then we */
  /*  return as output an empty structure. */
  b_st.site = &ob_emlrtRSI;
  loop_ub = b_bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    i1 = (int32_T)b_bsb->data[i];
    if ((i1 < 1) || (i1 > b_Y->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, b_Y->size[0], &t_emlrtBCI, &b_st);
    }
  }

  loop_ub = b_Y->size[1];
  i = c_Y->size[0] * c_Y->size[1];
  c_Y->size[0] = b_bsb->size[0];
  c_Y->size[1] = b_Y->size[1];
  emxEnsureCapacity_real_T(&b_st, c_Y, i, &jc_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    m = b_bsb->size[0];
    for (i1 = 0; i1 < m; i1++) {
      c_Y->data[i1 + c_Y->size[0] * i] = b_Y->data[((int32_T)b_bsb->data[i1] +
        b_Y->size[0] * i) - 1];
    }
  }

  c_st.site = &rd_emlrtRSI;
  m = local_rank(&c_st, c_Y);
  emxInit_real_T(&st, &Ym, 2, &ef_emlrtRTEI, true);
  emxInit_real_T(&st, &mi, 2, &cd_emlrtRTEI, true);
  emxInit_real_T(&st, &mibsbr, 2, &pd_emlrtRTEI, true);
  emxInit_real_T(&st, &zi, 2, &qd_emlrtRTEI, true);
  emxInit_real_T(&st, &R, 2, &hf_emlrtRTEI, true);
  emxInit_boolean_T(&st, &MDltminT, 1, &be_emlrtRTEI, true);
  emxInit_boolean_T(&st, &MDltminbsb, 1, &ee_emlrtRTEI, true);
  emxInit_real_T(&st, &r2, 2, &jf_emlrtRTEI, true);
  emxInit_int32_T(&st, &r3, 1, &kf_emlrtRTEI, true);
  emxInit_int32_T(&st, &r4, 1, &lf_emlrtRTEI, true);
  emxInit_int32_T(&st, &r5, 1, &mf_emlrtRTEI, true);
  emxInit_int32_T(&st, &r6, 1, &nf_emlrtRTEI, true);
  emxInit_int32_T(&st, &r7, 1, &of_emlrtRTEI, true);
  emxInit_int32_T(&st, &r8, 1, &pf_emlrtRTEI, true);
  emxInit_int32_T(&st, &r9, 1, &qf_emlrtRTEI, true);
  emxInit_int32_T(&st, &r10, 1, &rf_emlrtRTEI, true);
  guard1 = false;
  if (m < v) {
    guard1 = true;
  } else {
    b_st.site = &ob_emlrtRSI;
    loop_ub = b_bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)b_bsb->data[i];
      if ((i1 < 1) || (i1 > b_Y->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, b_Y->size[0], &u_emlrtBCI, &b_st);
      }
    }

    c_st.site = &qc_emlrtRSI;
    d_st.site = &rc_emlrtRSI;
    g_st.site = &sc_emlrtRSI;
    if (((b_bsb->size[0] != 1) || (b_Y->size[1] != 1)) && (b_bsb->size[0] == 1))
    {
      emlrtErrorWithMessageIdR2018a(&g_st, &b_emlrtRTEI,
        "Coder:toolbox:autoDimIncompatibility",
        "Coder:toolbox:autoDimIncompatibility", 0);
    }

    if (b_bsb->size[0] < 1) {
      emlrtErrorWithMessageIdR2018a(&g_st, &emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero",
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    h_st.site = &tc_emlrtRSI;
    i_st.site = &uc_emlrtRSI;
    j_st.site = &vc_emlrtRSI;
    m = b_bsb->size[0];
    i = b_Y->size[1] - 1;
    i1 = mibsbr->size[0] * mibsbr->size[1];
    mibsbr->size[0] = 1;
    mibsbr->size[1] = b_Y->size[1];
    emxEnsureCapacity_real_T(&j_st, mibsbr, i1, &tb_emlrtRTEI);
    if (b_Y->size[1] >= 1) {
      k_st.site = &xc_emlrtRSI;
      if (b_Y->size[1] > 2147483646) {
        l_st.site = &oc_emlrtRSI;
        check_forloop_overflow_error(&l_st);
      }

      for (nwhile = 0; nwhile <= i; nwhile++) {
        mibsbr->data[nwhile] = b_Y->data[((int32_T)b_bsb->data[0] + b_Y->size[0]
          * nwhile) - 1];
        k_st.site = &wc_emlrtRSI;
        if ((2 <= m) && (m > 2147483646)) {
          l_st.site = &oc_emlrtRSI;
          check_forloop_overflow_error(&l_st);
        }

        for (b_i = 2; b_i <= m; b_i++) {
          a = mibsbr->data[nwhile];
          ksor = b_Y->data[((int32_T)b_bsb->data[b_i - 1] + b_Y->size[0] *
                            nwhile) - 1];
          if (muDoubleScalarIsNaN(ksor)) {
            Ra = false;
          } else if (muDoubleScalarIsNaN(a)) {
            Ra = true;
          } else {
            Ra = (a < ksor);
          }

          if (Ra) {
            mibsbr->data[nwhile] = ksor;
          }
        }
      }
    }

    b_st.site = &ob_emlrtRSI;
    loop_ub = b_bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)b_bsb->data[i];
      if ((i1 < 1) || (i1 > b_Y->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, b_Y->size[0], &v_emlrtBCI, &b_st);
      }
    }

    c_st.site = &yc_emlrtRSI;
    d_st.site = &ad_emlrtRSI;
    g_st.site = &bd_emlrtRSI;
    if (((b_bsb->size[0] != 1) || (b_Y->size[1] != 1)) && (b_bsb->size[0] == 1))
    {
      emlrtErrorWithMessageIdR2018a(&g_st, &b_emlrtRTEI,
        "Coder:toolbox:autoDimIncompatibility",
        "Coder:toolbox:autoDimIncompatibility", 0);
    }

    h_st.site = &tc_emlrtRSI;
    i_st.site = &uc_emlrtRSI;
    j_st.site = &vc_emlrtRSI;
    m = b_bsb->size[0];
    i = b_Y->size[1] - 1;
    i1 = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = b_Y->size[1];
    emxEnsureCapacity_real_T(&j_st, ym, i1, &tb_emlrtRTEI);
    if (b_Y->size[1] >= 1) {
      k_st.site = &xc_emlrtRSI;
      if (b_Y->size[1] > 2147483646) {
        l_st.site = &oc_emlrtRSI;
        check_forloop_overflow_error(&l_st);
      }

      for (nwhile = 0; nwhile <= i; nwhile++) {
        ym->data[nwhile] = b_Y->data[((int32_T)b_bsb->data[0] + b_Y->size[0] *
          nwhile) - 1];
        k_st.site = &wc_emlrtRSI;
        if ((2 <= m) && (m > 2147483646)) {
          l_st.site = &oc_emlrtRSI;
          check_forloop_overflow_error(&l_st);
        }

        for (b_i = 2; b_i <= m; b_i++) {
          a = ym->data[nwhile];
          ksor = b_Y->data[((int32_T)b_bsb->data[b_i - 1] + b_Y->size[0] *
                            nwhile) - 1];
          if (muDoubleScalarIsNaN(ksor)) {
            Ra = false;
          } else if (muDoubleScalarIsNaN(a)) {
            Ra = true;
          } else {
            Ra = (a > ksor);
          }

          if (Ra) {
            ym->data[nwhile] = ksor;
          }
        }
      }
    }

    ym_size[0] = (*(int32_T (*)[2])mibsbr->size)[0];
    ym_size[1] = (*(int32_T (*)[2])mibsbr->size)[1];
    iv[0] = (*(int32_T (*)[2])ym->size)[0];
    iv[1] = (*(int32_T (*)[2])ym->size)[1];
    emlrtSizeEqCheckNDR2012b(&ym_size[0], &iv[0], &emlrtECI, &st);
    b_st.site = &ob_emlrtRSI;
    i = mibsbr->size[0] * mibsbr->size[1];
    mibsbr->size[0] = 1;
    emxEnsureCapacity_real_T(&b_st, mibsbr, i, &nc_emlrtRTEI);
    loop_ub = mibsbr->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      mibsbr->data[i] -= ym->data[i];
    }

    c_st.site = &yc_emlrtRSI;
    d_st.site = &ad_emlrtRSI;
    g_st.site = &bd_emlrtRSI;
    if (mibsbr->size[1] < 1) {
      emlrtErrorWithMessageIdR2018a(&g_st, &emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero",
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    h_st.site = &kf_emlrtRSI;
    i_st.site = &lf_emlrtRSI;
    nwhile = mibsbr->size[1];
    if (mibsbr->size[1] <= 2) {
      if (mibsbr->size[1] == 1) {
        ex = mibsbr->data[0];
      } else if ((mibsbr->data[0] > mibsbr->data[1]) || (muDoubleScalarIsNaN
                  (mibsbr->data[0]) && (!muDoubleScalarIsNaN(mibsbr->data[1]))))
      {
        ex = mibsbr->data[1];
      } else {
        ex = mibsbr->data[0];
      }
    } else {
      j_st.site = &nf_emlrtRSI;
      if (!muDoubleScalarIsNaN(mibsbr->data[0])) {
        idx = 1;
      } else {
        idx = 0;
        k_st.site = &of_emlrtRSI;
        if (mibsbr->size[1] > 2147483646) {
          l_st.site = &oc_emlrtRSI;
          check_forloop_overflow_error(&l_st);
        }

        partialTrueCount = 2;
        exitg1 = false;
        while ((!exitg1) && (partialTrueCount <= nwhile)) {
          if (!muDoubleScalarIsNaN(mibsbr->data[partialTrueCount - 1])) {
            idx = partialTrueCount;
            exitg1 = true;
          } else {
            partialTrueCount++;
          }
        }
      }

      if (idx == 0) {
        ex = mibsbr->data[0];
      } else {
        j_st.site = &mf_emlrtRSI;
        ex = mibsbr->data[idx - 1];
        m = idx + 1;
        k_st.site = &pf_emlrtRSI;
        if ((idx + 1 <= mibsbr->size[1]) && (mibsbr->size[1] > 2147483646)) {
          l_st.site = &oc_emlrtRSI;
          check_forloop_overflow_error(&l_st);
        }

        for (partialTrueCount = m; partialTrueCount <= nwhile; partialTrueCount
             ++) {
          d = mibsbr->data[partialTrueCount - 1];
          if (ex > d) {
            ex = d;
          }
        }
      }
    }

    if (ex == 0.0) {
      guard1 = true;
    } else {
      /*  ij = index which is linked with the columns of matrix BB. During the */
      /*  search every time a subset is stored inside matrix BB ij icreases by one */
      ij = 1U;
      i = n - ini0;
      emlrtForLoopVectorCheckR2021a(ini0, 1.0, n, mxDOUBLE_CLASS, i + 1,
        &f_emlrtRTEI, &st);
      mm = 0;
      exitg1 = false;
      while ((!exitg1) && (mm <= i)) {
        b_mm = (real_T)ini0 + (real_T)mm;

        /*  Extract units forming subset */
        if (b_mm <= percn) {
          loop_ub = b_Y->size[1];
          i1 = Yb->size[0] * Yb->size[1];
          Yb->size[0] = b_bsb->size[0];
          Yb->size[1] = b_Y->size[1];
          emxEnsureCapacity_real_T(&st, Yb, i1, &oc_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub; i1++) {
            m = b_bsb->size[0];
            for (i2 = 0; i2 < m; i2++) {
              if (b_bsb->data[i2] != (int32_T)muDoubleScalarFloor(b_bsb->data[i2]))
              {
                emlrtIntegerCheckR2012b(b_bsb->data[i2], &l_emlrtDCI, &st);
              }

              partialTrueCount = (int32_T)b_bsb->data[i2];
              if ((partialTrueCount < 1) || (partialTrueCount > b_Y->size[0])) {
                emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1, b_Y->size[0],
                  &w_emlrtBCI, &st);
              }

              Yb->data[i2 + Yb->size[0] * i1] = b_Y->data[(partialTrueCount +
                b_Y->size[0] * i1) - 1];
            }
          }
        } else {
          m = bsbT->size[0] - 1;
          trueCount = 0;
          for (b_i = 0; b_i <= m; b_i++) {
            if (bsbT->data[b_i]) {
              trueCount++;
            }
          }

          i1 = r3->size[0];
          r3->size[0] = trueCount;
          emxEnsureCapacity_int32_T(&st, r3, i1, &yb_emlrtRTEI);
          partialTrueCount = 0;
          for (b_i = 0; b_i <= m; b_i++) {
            if (bsbT->data[b_i]) {
              r3->data[partialTrueCount] = b_i + 1;
              partialTrueCount++;
            }
          }

          loop_ub = b_Y->size[1];
          i1 = Yb->size[0] * Yb->size[1];
          Yb->size[0] = r3->size[0];
          Yb->size[1] = b_Y->size[1];
          emxEnsureCapacity_real_T(&st, Yb, i1, &pc_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub; i1++) {
            m = r3->size[0];
            for (i2 = 0; i2 < m; i2++) {
              if (r3->data[i2] > b_Y->size[0]) {
                emlrtDynamicBoundsCheckR2012b(r3->data[i2], 1, b_Y->size[0],
                  &x_emlrtBCI, &st);
              }

              Yb->data[i2 + Yb->size[0] * i1] = b_Y->data[(r3->data[i2] +
                b_Y->size[0] * i1) - 1];
            }
          }
        }

        /*  If required, store units forming subset at each step */
        if (b_mm >= init1) {
          b_st.site = &nb_emlrtRSI;
          i1 = Szi->size[0];
          Szi->size[0] = b_bsbsteps->size[0];
          emxEnsureCapacity_real_T(&b_st, Szi, i1, &qc_emlrtRTEI);
          loop_ub = b_bsbsteps->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            Szi->data[i1] = b_mm - b_bsbsteps->data[i1];
          }

          c_st.site = &nb_emlrtRSI;
          b_abs(&c_st, Szi, MD);
          c_st.site = &yc_emlrtRSI;
          d_st.site = &ad_emlrtRSI;
          g_st.site = &bd_emlrtRSI;
          if (MD->size[0] < 1) {
            emlrtErrorWithMessageIdR2018a(&g_st, &emlrtRTEI,
              "Coder:toolbox:eml_min_or_max_varDimZero",
              "Coder:toolbox:eml_min_or_max_varDimZero", 0);
          }

          h_st.site = &kf_emlrtRSI;
          i_st.site = &lf_emlrtRSI;
          nwhile = MD->size[0];
          if (MD->size[0] <= 2) {
            if (MD->size[0] == 1) {
              ex = MD->data[0];
            } else if ((MD->data[0] > MD->data[1]) || (muDoubleScalarIsNaN
                        (MD->data[0]) && (!muDoubleScalarIsNaN(MD->data[1])))) {
              ex = MD->data[1];
            } else {
              ex = MD->data[0];
            }
          } else {
            j_st.site = &nf_emlrtRSI;
            if (!muDoubleScalarIsNaN(MD->data[0])) {
              idx = 1;
            } else {
              idx = 0;
              k_st.site = &of_emlrtRSI;
              if (MD->size[0] > 2147483646) {
                l_st.site = &oc_emlrtRSI;
                check_forloop_overflow_error(&l_st);
              }

              partialTrueCount = 2;
              exitg2 = false;
              while ((!exitg2) && (partialTrueCount <= nwhile)) {
                if (!muDoubleScalarIsNaN(MD->data[partialTrueCount - 1])) {
                  idx = partialTrueCount;
                  exitg2 = true;
                } else {
                  partialTrueCount++;
                }
              }
            }

            if (idx == 0) {
              ex = MD->data[0];
            } else {
              j_st.site = &mf_emlrtRSI;
              ex = MD->data[idx - 1];
              m = idx + 1;
              k_st.site = &pf_emlrtRSI;
              if ((idx + 1 <= MD->size[0]) && (MD->size[0] > 2147483646)) {
                l_st.site = &oc_emlrtRSI;
                check_forloop_overflow_error(&l_st);
              }

              for (partialTrueCount = m; partialTrueCount <= nwhile;
                   partialTrueCount++) {
                d = MD->data[partialTrueCount - 1];
                if (ex > d) {
                  ex = d;
                }
              }
            }
          }

          if (ex == 0.0) {
            /*  intersect(mm,bsbsteps)==mm */
            if (b_mm <= percn) {
              i1 = ii->size[0];
              ii->size[0] = b_bsb->size[0];
              emxEnsureCapacity_int32_T(&st, ii, i1, &bd_emlrtRTEI);
              loop_ub = b_bsb->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                if (b_bsb->data[i1] != (int32_T)muDoubleScalarFloor(b_bsb->
                     data[i1])) {
                  emlrtIntegerCheckR2012b(b_bsb->data[i1], &o_emlrtDCI, &st);
                }

                i2 = (int32_T)b_bsb->data[i1];
                if ((i2 < 1) || (i2 > BB->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)b_bsb->data[i1], 1,
                    BB->size[0], &fb_emlrtBCI, &st);
                }

                ii->data[i1] = i2 - 1;
              }

              if (((int32_T)ij < 1) || ((int32_T)ij > BB->size[1])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)ij, 1, BB->size[1],
                  &m_emlrtBCI, &st);
              }

              emlrtSubAssignSizeCheckR2012b(&ii->size[0], 1, &b_bsb->size[0], 1,
                &o_emlrtECI, &st);
              loop_ub = b_bsb->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                BB->data[ii->data[i1] + BB->size[0] * ((int32_T)ij - 1)] =
                  b_bsb->data[i1];
              }
            } else {
              m = bsbT->size[0];
              for (b_i = 0; b_i < m; b_i++) {
                if (bsbT->data[b_i] && (b_i + 1 > BB->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, BB->size[0],
                    &d_emlrtBCI, &st);
                }
              }

              if (((int32_T)ij < 1) || ((int32_T)ij > BB->size[1])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)ij, 1, BB->size[1],
                  &n_emlrtBCI, &st);
              }

              m = bsbT->size[0];
              for (b_i = 0; b_i < m; b_i++) {
                if (bsbT->data[b_i] && (b_i + 1 > seq->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                    &c_emlrtBCI, &st);
                }
              }

              m = bsbT->size[0];
              trueCount = 0;
              for (b_i = 0; b_i < m; b_i++) {
                if (bsbT->data[b_i]) {
                  trueCount++;
                }
              }

              emlrtSubAssignSizeCheckR2012b(&trueCount, 1, &trueCount, 1,
                &p_emlrtECI, &st);
              m = bsbT->size[0] - 1;
              trueCount = 0;
              for (b_i = 0; b_i <= m; b_i++) {
                if (bsbT->data[b_i]) {
                  trueCount++;
                }
              }

              i1 = r4->size[0];
              r4->size[0] = trueCount;
              emxEnsureCapacity_int32_T(&st, r4, i1, &yb_emlrtRTEI);
              partialTrueCount = 0;
              for (b_i = 0; b_i <= m; b_i++) {
                if (bsbT->data[b_i]) {
                  r4->data[partialTrueCount] = b_i + 1;
                  partialTrueCount++;
                }
              }

              loop_ub = r4->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                BB->data[(r4->data[i1] + BB->size[0] * ((int32_T)ij - 1)) - 1] =
                  seq->data[r4->data[i1] - 1];
              }
            }

            ij++;
          }
        }

        /*  Find vector of means inside subset */
        /*  Note that ym is a row vector */
        b_st.site = &mb_emlrtRSI;
        sum(&b_st, Yb, ym);
        i1 = ym->size[0] * ym->size[1];
        ym->size[0] = 1;
        emxEnsureCapacity_real_T(&st, ym, i1, &rc_emlrtRTEI);
        loop_ub = ym->size[1] - 1;
        for (i1 = 0; i1 <= loop_ub; i1++) {
          ym->data[i1] /= b_mm;
        }

        /*  Ym = n-by-v matrix containing deviations from the means computed */
        /*  using units forming subset */
        /*  Ym=Y-one*ym; */
        b_st.site = &lb_emlrtRSI;
        bsxfun(&b_st, b_Y, ym, Ym);
        b_guard1 = false;
        if (b_mm - (real_T)lunit > (real_T)v + 1.0) {
          /*  Find new S */
          if (lunit > 1) {
            /*  S0=S; */
            /*  Find units which left subset */
            /*  Inefficient code is */
            /*  unitout=setdiff(oldbsb,bsb); */
            /*  unitoutT = Boolean for units which left subset */
            /*  ~oldbsbF = units which were in previous subset */
            /*  ~bsbT = units which are not in the current subset */
            /*  unitoutT=~oldbsbF & ~bsbT; */
            /*  Given that \not A intersect \not B = \not (A U B) */
            if ((b_mm > percn) || (rankgap > 10.0)) {
              /*  unitoutT=~(~oldbsbT | bsbT); */
              i1 = MDltminT->size[0];
              MDltminT->size[0] = bsbT->size[0];
              emxEnsureCapacity_boolean_T(&st, MDltminT, i1, &xc_emlrtRTEI);
              loop_ub = bsbT->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                MDltminT->data[i1] = !bsbT->data[i1];
              }

              if (oldbsbT->size[0] != MDltminT->size[0]) {
                emlrtSizeEqCheck1DR2012b(oldbsbT->size[0], MDltminT->size[0],
                  &b_emlrtECI, &st);
              }

              m = oldbsbT->size[0] - 1;
              trueCount = 0;
              for (b_i = 0; b_i <= m; b_i++) {
                if (oldbsbT->data[b_i] && MDltminT->data[b_i]) {
                  trueCount++;
                }
              }

              i1 = unitout->size[0];
              unitout->size[0] = trueCount;
              emxEnsureCapacity_real_T(&st, unitout, i1, &yb_emlrtRTEI);
              partialTrueCount = 0;
              for (b_i = 0; b_i <= m; b_i++) {
                if (oldbsbT->data[b_i] && MDltminT->data[b_i]) {
                  if (b_i + 1 > seq->size[0]) {
                    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                      &hb_emlrtBCI, &st);
                  }

                  unitout->data[partialTrueCount] = seq->data[b_i];
                  partialTrueCount++;
                }
              }
            }

            nwhile = unitout->size[0];
            loop_ub = b_Y->size[1];
            i1 = c_Y->size[0] * c_Y->size[1];
            c_Y->size[0] = unitout->size[0];
            c_Y->size[1] = b_Y->size[1];
            emxEnsureCapacity_real_T(&st, c_Y, i1, &ad_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              m = unitout->size[0];
              for (i2 = 0; i2 < m; i2++) {
                if (unitout->data[i2] != (int32_T)muDoubleScalarFloor
                    (unitout->data[i2])) {
                  emlrtIntegerCheckR2012b(unitout->data[i2], &n_emlrtDCI, &st);
                }

                partialTrueCount = (int32_T)unitout->data[i2];
                if ((partialTrueCount < 1) || (partialTrueCount > b_Y->size[0]))
                {
                  emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1, b_Y->size[0],
                    &eb_emlrtBCI, &st);
                }

                c_Y->data[i2 + c_Y->size[0] * i1] = b_Y->data[(partialTrueCount
                  + b_Y->size[0] * i1) - 1];
              }
            }

            b_st.site = &kb_emlrtRSI;
            sum(&b_st, c_Y, mi);
            i1 = mi->size[0] * mi->size[1];
            mi->size[0] = 1;
            emxEnsureCapacity_real_T(&st, mi, i1, &cd_emlrtRTEI);
            loop_ub = mi->size[1] - 1;
            for (i1 = 0; i1 <= loop_ub; i1++) {
              mi->data[i1] /= (real_T)unitout->size[0];
            }

            /*  bsbr units which remained in subset */
            /*  old inefficient code */
            /*  bsbr=setdiff(oldbsb,unitout); */
            /*  If mm>percn or if rankgap is greater than nrepmin, the units */
            /*  which remained in subset are found using Boolean */
            /*  operations */
            /*  else they were immediately stored when repeated minima */
            /*  were taken */
            if ((b_mm > percn) || (rankgap > 10.0)) {
              /*  oldbsbT = units which were in previous subset */
              /*  bsbT = units which are in current subset */
              if (oldbsbT->size[0] != bsbT->size[0]) {
                emlrtSizeEqCheck1DR2012b(oldbsbT->size[0], bsbT->size[0],
                  &c_emlrtECI, &st);
              }

              m = oldbsbT->size[0] - 1;
              trueCount = 0;
              for (b_i = 0; b_i <= m; b_i++) {
                if (oldbsbT->data[b_i] && bsbT->data[b_i]) {
                  trueCount++;
                }
              }

              i1 = r8->size[0];
              r8->size[0] = trueCount;
              emxEnsureCapacity_int32_T(&st, r8, i1, &yb_emlrtRTEI);
              partialTrueCount = 0;
              for (b_i = 0; b_i <= m; b_i++) {
                if (oldbsbT->data[b_i] && bsbT->data[b_i]) {
                  r8->data[partialTrueCount] = b_i + 1;
                  partialTrueCount++;
                }
              }

              loop_ub = b_Y->size[1];
              i1 = c_Y->size[0] * c_Y->size[1];
              c_Y->size[0] = r8->size[0];
              c_Y->size[1] = b_Y->size[1];
              emxEnsureCapacity_real_T(&st, c_Y, i1, &nd_emlrtRTEI);
              for (i1 = 0; i1 < loop_ub; i1++) {
                m = r8->size[0];
                for (i2 = 0; i2 < m; i2++) {
                  if (r8->data[i2] > b_Y->size[0]) {
                    emlrtDynamicBoundsCheckR2012b(r8->data[i2], 1, b_Y->size[0],
                      &lb_emlrtBCI, &st);
                  }

                  c_Y->data[i2 + c_Y->size[0] * i1] = b_Y->data[(r8->data[i2] +
                    b_Y->size[0] * i1) - 1];
                }
              }

              b_st.site = &jb_emlrtRSI;
              sum(&b_st, c_Y, mibsbr);
              i1 = mibsbr->size[0] * mibsbr->size[1];
              mibsbr->size[0] = 1;
              emxEnsureCapacity_real_T(&st, mibsbr, i1, &pd_emlrtRTEI);
              ksor = (b_mm - 1.0) - (real_T)unitout->size[0];
              loop_ub = mibsbr->size[1] - 1;
              for (i1 = 0; i1 <= loop_ub; i1++) {
                mibsbr->data[i1] /= ksor;
              }
            } else {
              loop_ub = b_Y->size[1];
              i1 = c_Y->size[0] * c_Y->size[1];
              c_Y->size[0] = bsbr->size[0];
              c_Y->size[1] = b_Y->size[1];
              emxEnsureCapacity_real_T(&st, c_Y, i1, &hd_emlrtRTEI);
              for (i1 = 0; i1 < loop_ub; i1++) {
                m = bsbr->size[0];
                for (i2 = 0; i2 < m; i2++) {
                  if ((bsbr->data[i2] < 1) || (bsbr->data[i2] > b_Y->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(bsbr->data[i2], 1, b_Y->size[0],
                      &jb_emlrtBCI, &st);
                  }

                  c_Y->data[i2 + c_Y->size[0] * i1] = b_Y->data[(bsbr->data[i2]
                    + b_Y->size[0] * i1) - 1];
                }
              }

              b_st.site = &ib_emlrtRSI;
              sum(&b_st, c_Y, mibsbr);
              i1 = mibsbr->size[0] * mibsbr->size[1];
              mibsbr->size[0] = 1;
              emxEnsureCapacity_real_T(&st, mibsbr, i1, &id_emlrtRTEI);
              ksor = (b_mm - 1.0) - (real_T)unitout->size[0];
              loop_ub = mibsbr->size[1] - 1;
              for (i1 = 0; i1 <= loop_ub; i1++) {
                mibsbr->data[i1] /= ksor;
              }
            }

            ym_size[0] = (*(int32_T (*)[2])mi->size)[0];
            ym_size[1] = (*(int32_T (*)[2])mi->size)[1];
            iv[0] = (*(int32_T (*)[2])mibsbr->size)[0];
            iv[1] = (*(int32_T (*)[2])mibsbr->size)[1];
            emlrtSizeEqCheckNDR2012b(&ym_size[0], &iv[0], &d_emlrtECI, &st);
            a = (real_T)unitout->size[0] * ((b_mm - 1.0) - (real_T)unitout->
              size[0]) / (b_mm - 1.0);
            b_st.site = &hb_emlrtRSI;
            if (a < 0.0) {
              emlrtErrorWithMessageIdR2018a(&b_st, &x_emlrtRTEI,
                "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
            }

            a = muDoubleScalarSqrt(a);
            i1 = zi->size[0] * zi->size[1];
            zi->size[0] = 1;
            zi->size[1] = mi->size[1];
            emxEnsureCapacity_real_T(&st, zi, i1, &qd_emlrtRTEI);
            loop_ub = mi->size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              zi->data[i1] = a * (mi->data[i1] - mibsbr->data[i1]);
            }

            b_st.site = &gb_emlrtRSI;
            c_st.site = &mc_emlrtRSI;
            dynamic_size_checks(&c_st, S, zi, S->size[1], zi->size[1]);
            c_st.site = &lc_emlrtRSI;
            mtimes(&c_st, S, zi, Szi);

            /*  S=S+(S*(zi')*zi*S)/(1-zi*S*(zi')); */
            b_st.site = &fb_emlrtRSI;
            c_st.site = &mc_emlrtRSI;
            b_dynamic_size_checks(&c_st, zi, Szi, zi->size[1], Szi->size[0]);
            ksor = b_mtimes(zi, Szi);
            i1 = r2->size[0] * r2->size[1];
            r2->size[0] = Szi->size[0];
            r2->size[1] = Szi->size[0];
            emxEnsureCapacity_real_T(&st, r2, i1, &vd_emlrtRTEI);
            loop_ub = Szi->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              m = Szi->size[0];
              for (i2 = 0; i2 < m; i2++) {
                r2->data[i2 + r2->size[0] * i1] = Szi->data[i2] * Szi->data[i1] /
                  (1.0 - ksor);
              }
            }

            ym_size[0] = (*(int32_T (*)[2])S->size)[0];
            ym_size[1] = (*(int32_T (*)[2])S->size)[1];
            iv[0] = (*(int32_T (*)[2])r2->size)[0];
            iv[1] = (*(int32_T (*)[2])r2->size)[1];
            emlrtSizeEqCheckNDR2012b(&ym_size[0], &iv[0], &e_emlrtECI, &st);
            loop_ub = S->size[0] * S->size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              S->data[i1] += r2->data[i1];
            }

            if (unitout->size[0] > 1) {
              i1 = unitout->size[0];
              for (b_i = 0; b_i < i1; b_i++) {
                if (b_i + 1 > unitout->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, unitout->size[0],
                    &ob_emlrtBCI, &st);
                }

                i2 = (int32_T)unitout->data[b_i];
                if ((i2 < 1) || (i2 > b_Y->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(i2, 1, b_Y->size[0], &e_emlrtBCI,
                    &st);
                }

                loop_ub = b_Y->size[1];
                i2 = zi->size[0] * zi->size[1];
                zi->size[0] = 1;
                zi->size[1] = b_Y->size[1];
                emxEnsureCapacity_real_T(&st, zi, i2, &ae_emlrtRTEI);
                for (i2 = 0; i2 < loop_ub; i2++) {
                  zi->data[i2] = b_Y->data[((int32_T)unitout->data[b_i] +
                    b_Y->size[0] * i2) - 1];
                }

                ym_size[0] = (*(int32_T (*)[2])zi->size)[0];
                ym_size[1] = (*(int32_T (*)[2])zi->size)[1];
                iv[0] = (*(int32_T (*)[2])mi->size)[0];
                iv[1] = (*(int32_T (*)[2])mi->size)[1];
                emlrtSizeEqCheckNDR2012b(&ym_size[0], &iv[0], &f_emlrtECI, &st);
                loop_ub = b_Y->size[1];
                i2 = zi->size[0] * zi->size[1];
                zi->size[0] = 1;
                zi->size[1] = b_Y->size[1];
                emxEnsureCapacity_real_T(&st, zi, i2, &ce_emlrtRTEI);
                for (i2 = 0; i2 < loop_ub; i2++) {
                  zi->data[i2] = b_Y->data[((int32_T)unitout->data[b_i] +
                    b_Y->size[0] * i2) - 1] - mi->data[i2];
                }

                b_st.site = &eb_emlrtRSI;
                c_st.site = &mc_emlrtRSI;
                dynamic_size_checks(&c_st, S, zi, S->size[1], zi->size[1]);
                c_st.site = &lc_emlrtRSI;
                mtimes(&c_st, S, zi, Szi);

                /*  S=S+(S*(zi')*zi*S)/(1-zi*S*(zi')); */
                b_st.site = &db_emlrtRSI;
                c_st.site = &mc_emlrtRSI;
                b_dynamic_size_checks(&c_st, zi, Szi, zi->size[1], Szi->size[0]);
                ksor = b_mtimes(zi, Szi);
                i2 = r2->size[0] * r2->size[1];
                r2->size[0] = Szi->size[0];
                r2->size[1] = Szi->size[0];
                emxEnsureCapacity_real_T(&st, r2, i2, &fe_emlrtRTEI);
                loop_ub = Szi->size[0];
                for (i2 = 0; i2 < loop_ub; i2++) {
                  m = Szi->size[0];
                  for (partialTrueCount = 0; partialTrueCount < m;
                       partialTrueCount++) {
                    r2->data[partialTrueCount + r2->size[0] * i2] = Szi->
                      data[partialTrueCount] * Szi->data[i2] / (1.0 - ksor);
                  }
                }

                ym_size[0] = (*(int32_T (*)[2])S->size)[0];
                ym_size[1] = (*(int32_T (*)[2])S->size)[1];
                iv[0] = (*(int32_T (*)[2])r2->size)[0];
                iv[1] = (*(int32_T (*)[2])r2->size)[1];
                emlrtSizeEqCheckNDR2012b(&ym_size[0], &iv[0], &g_emlrtECI, &st);
                loop_ub = S->size[0] * S->size[1];
                for (i2 = 0; i2 < loop_ub; i2++) {
                  S->data[i2] += r2->data[i2];
                }

                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b(&st);
                }
              }
            }
          } else {
            nwhile = 0;
            i1 = mibsbr->size[0] * mibsbr->size[1];
            mibsbr->size[0] = 1;
            mibsbr->size[1] = meoldbsb->size[1];
            emxEnsureCapacity_real_T(&st, mibsbr, i1, &tc_emlrtRTEI);
            loop_ub = meoldbsb->size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              mibsbr->data[i1] = meoldbsb->data[i1];
            }
          }

          /*  mi = mean of units entering subset */
          loop_ub = b_Y->size[1];
          i1 = c_Y->size[0] * c_Y->size[1];
          c_Y->size[0] = unit->size[0];
          c_Y->size[1] = b_Y->size[1];
          emxEnsureCapacity_real_T(&st, c_Y, i1, &wc_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub; i1++) {
            m = unit->size[0];
            for (i2 = 0; i2 < m; i2++) {
              if ((unit->data[i2] < 1) || (unit->data[i2] > b_Y->size[0])) {
                emlrtDynamicBoundsCheckR2012b(unit->data[i2], 1, b_Y->size[0],
                  &cb_emlrtBCI, &st);
              }

              c_Y->data[i2 + c_Y->size[0] * i1] = b_Y->data[(unit->data[i2] +
                b_Y->size[0] * i1) - 1];
            }
          }

          b_st.site = &cb_emlrtRSI;
          sum(&b_st, c_Y, mi);
          i1 = mi->size[0] * mi->size[1];
          mi->size[0] = 1;
          emxEnsureCapacity_real_T(&st, mi, i1, &yc_emlrtRTEI);
          loop_ub = mi->size[1] - 1;
          for (i1 = 0; i1 <= loop_ub; i1++) {
            mi->data[i1] /= (real_T)lunit;
          }

          /*  zi=sqrt(kin*(mm-1-k)/(mm-1-k+kin))*(mi-mean(Y(bsbr,:),1)); */
          ym_size[0] = (*(int32_T (*)[2])mi->size)[0];
          ym_size[1] = (*(int32_T (*)[2])mi->size)[1];
          iv[0] = (*(int32_T (*)[2])mibsbr->size)[0];
          iv[1] = (*(int32_T (*)[2])mibsbr->size)[1];
          emlrtSizeEqCheckNDR2012b(&ym_size[0], &iv[0], &h_emlrtECI, &st);
          ksor = (b_mm - 1.0) - (real_T)nwhile;
          a = (real_T)lunit * ksor / (ksor + (real_T)lunit);
          b_st.site = &bb_emlrtRSI;
          if (a < 0.0) {
            emlrtErrorWithMessageIdR2018a(&b_st, &x_emlrtRTEI,
              "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError",
              3, 4, 4, "sqrt");
          }

          a = muDoubleScalarSqrt(a);
          i1 = zi->size[0] * zi->size[1];
          zi->size[0] = 1;
          zi->size[1] = mi->size[1];
          emxEnsureCapacity_real_T(&st, zi, i1, &gd_emlrtRTEI);
          loop_ub = mi->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            zi->data[i1] = a * (mi->data[i1] - mibsbr->data[i1]);
          }

          b_st.site = &ab_emlrtRSI;
          c_st.site = &mc_emlrtRSI;
          dynamic_size_checks(&c_st, S, zi, S->size[1], zi->size[1]);
          c_st.site = &lc_emlrtRSI;
          mtimes(&c_st, S, zi, Szi);

          /*  S=S+(S*(zi')*zi*S)/(1-zi*S*(zi')); */
          b_st.site = &y_emlrtRSI;
          c_st.site = &mc_emlrtRSI;
          b_dynamic_size_checks(&c_st, zi, Szi, zi->size[1], Szi->size[0]);
          ksor = b_mtimes(zi, Szi);
          i1 = r2->size[0] * r2->size[1];
          r2->size[0] = Szi->size[0];
          r2->size[1] = Szi->size[0];
          emxEnsureCapacity_real_T(&st, r2, i1, &kd_emlrtRTEI);
          loop_ub = Szi->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            m = Szi->size[0];
            for (i2 = 0; i2 < m; i2++) {
              r2->data[i2 + r2->size[0] * i1] = Szi->data[i2] * Szi->data[i1] /
                (ksor + 1.0);
            }
          }

          ym_size[0] = (*(int32_T (*)[2])S->size)[0];
          ym_size[1] = (*(int32_T (*)[2])S->size)[1];
          iv[0] = (*(int32_T (*)[2])r2->size)[0];
          iv[1] = (*(int32_T (*)[2])r2->size)[1];
          emlrtSizeEqCheckNDR2012b(&ym_size[0], &iv[0], &i_emlrtECI, &st);
          loop_ub = S->size[0] * S->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            S->data[i1] -= r2->data[i1];
          }

          if (lunit > 1) {
            /* mi=mean(Y(unit,:),1); */
            for (b_i = 0; b_i < lunit; b_i++) {
              if (b_i + 1 > unit->size[0]) {
                emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, unit->size[0],
                  &nb_emlrtBCI, &st);
              }

              i1 = unit->data[b_i];
              if ((i1 < 1) || (i1 > b_Y->size[0])) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, b_Y->size[0], &f_emlrtBCI,
                  &st);
              }

              loop_ub = b_Y->size[1];
              i1 = zi->size[0] * zi->size[1];
              zi->size[0] = 1;
              zi->size[1] = b_Y->size[1];
              emxEnsureCapacity_real_T(&st, zi, i1, &ud_emlrtRTEI);
              for (i1 = 0; i1 < loop_ub; i1++) {
                zi->data[i1] = b_Y->data[(unit->data[b_i] + b_Y->size[0] * i1) -
                  1];
              }

              ym_size[0] = (*(int32_T (*)[2])zi->size)[0];
              ym_size[1] = (*(int32_T (*)[2])zi->size)[1];
              iv[0] = (*(int32_T (*)[2])mi->size)[0];
              iv[1] = (*(int32_T (*)[2])mi->size)[1];
              emlrtSizeEqCheckNDR2012b(&ym_size[0], &iv[0], &j_emlrtECI, &st);
              loop_ub = b_Y->size[1];
              i1 = zi->size[0] * zi->size[1];
              zi->size[0] = 1;
              zi->size[1] = b_Y->size[1];
              emxEnsureCapacity_real_T(&st, zi, i1, &xd_emlrtRTEI);
              for (i1 = 0; i1 < loop_ub; i1++) {
                zi->data[i1] = b_Y->data[(unit->data[b_i] + b_Y->size[0] * i1) -
                  1] - mi->data[i1];
              }

              b_st.site = &x_emlrtRSI;
              c_st.site = &mc_emlrtRSI;
              dynamic_size_checks(&c_st, S, zi, S->size[1], zi->size[1]);
              c_st.site = &lc_emlrtRSI;
              mtimes(&c_st, S, zi, Szi);

              /*  S=S-(S*(zi')*zi*S)/(1+zi*S*(zi')); */
              b_st.site = &w_emlrtRSI;
              c_st.site = &mc_emlrtRSI;
              b_dynamic_size_checks(&c_st, zi, Szi, zi->size[1], Szi->size[0]);
              ksor = b_mtimes(zi, Szi);
              i1 = r2->size[0] * r2->size[1];
              r2->size[0] = Szi->size[0];
              r2->size[1] = Szi->size[0];
              emxEnsureCapacity_real_T(&st, r2, i1, &yd_emlrtRTEI);
              loop_ub = Szi->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                m = Szi->size[0];
                for (i2 = 0; i2 < m; i2++) {
                  r2->data[i2 + r2->size[0] * i1] = Szi->data[i2] * Szi->data[i1]
                    / (ksor + 1.0);
                }
              }

              ym_size[0] = (*(int32_T (*)[2])S->size)[0];
              ym_size[1] = (*(int32_T (*)[2])S->size)[1];
              iv[0] = (*(int32_T (*)[2])r2->size)[0];
              iv[1] = (*(int32_T (*)[2])r2->size)[1];
              emlrtSizeEqCheckNDR2012b(&ym_size[0], &iv[0], &k_emlrtECI, &st);
              loop_ub = S->size[0] * S->size[1];
              for (i1 = 0; i1 < loop_ub; i1++) {
                S->data[i1] -= r2->data[i1];
              }

              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(&st);
              }
            }
          }

          /*  Compute Mahalanobis distance using updating formulae */
          /*  Note that up for n>30000 it seems faster to use bsxfun rather */
          /*  than .* */
          if (n < 30000) {
            b_st.site = &v_emlrtRSI;
            c_st.site = &mc_emlrtRSI;
            c_dynamic_size_checks(&c_st, Ym, S, Ym->size[1], S->size[0]);
            c_st.site = &lc_emlrtRSI;
            c_mtimes(&c_st, Ym, S, r2);
            ym_size[0] = (*(int32_T (*)[2])r2->size)[0];
            ym_size[1] = (*(int32_T (*)[2])r2->size)[1];
            iv[0] = (*(int32_T (*)[2])Ym->size)[0];
            iv[1] = (*(int32_T (*)[2])Ym->size)[1];
            emlrtSizeEqCheckNDR2012b(&ym_size[0], &iv[0], &l_emlrtECI, &st);
            i1 = c_Y->size[0] * c_Y->size[1];
            c_Y->size[0] = r2->size[0];
            c_Y->size[1] = r2->size[1];
            emxEnsureCapacity_real_T(&st, c_Y, i1, &wd_emlrtRTEI);
            loop_ub = r2->size[0] * r2->size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              c_Y->data[i1] = r2->data[i1] * Ym->data[i1];
            }

            b_st.site = &v_emlrtRSI;
            b_sum(&b_st, c_Y, MD);
            loop_ub = MD->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              MD->data[i1] *= b_mm - 1.0;
            }
          } else {
            b_st.site = &u_emlrtRSI;
            c_st.site = &mc_emlrtRSI;
            c_dynamic_size_checks(&c_st, Ym, S, Ym->size[1], S->size[0]);
            c_st.site = &lc_emlrtRSI;
            c_mtimes(&c_st, Ym, S, R);
            b_st.site = &u_emlrtRSI;
            b_bsxfun(&b_st, R, Ym, r2);
            b_st.site = &u_emlrtRSI;
            b_sum(&b_st, r2, MD);
            loop_ub = MD->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              MD->data[i1] *= b_mm - 1.0;
            }
          }

          b_guard1 = true;
        } else {
          /*  In the initial step of the search the inverse is computed directly */
          if (b_mm > percn) {
            m = bsbT->size[0] - 1;
            trueCount = 0;
            for (b_i = 0; b_i <= m; b_i++) {
              if (bsbT->data[b_i]) {
                trueCount++;
              }
            }

            i1 = r5->size[0];
            r5->size[0] = trueCount;
            emxEnsureCapacity_int32_T(&st, r5, i1, &yb_emlrtRTEI);
            partialTrueCount = 0;
            for (b_i = 0; b_i <= m; b_i++) {
              if (bsbT->data[b_i]) {
                r5->data[partialTrueCount] = b_i + 1;
                partialTrueCount++;
              }
            }

            loop_ub = Ym->size[1];
            i1 = r2->size[0] * r2->size[1];
            r2->size[0] = r5->size[0];
            r2->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(&st, r2, i1, &vc_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              m = r5->size[0];
              for (i2 = 0; i2 < m; i2++) {
                if (r5->data[i2] > Ym->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(r5->data[i2], 1, Ym->size[0],
                    &bb_emlrtBCI, &st);
                }

                r2->data[i2 + r2->size[0] * i1] = Ym->data[(r5->data[i2] +
                  Ym->size[0] * i1) - 1];
              }
            }

            m = bsbT->size[0] - 1;
            trueCount = 0;
            for (b_i = 0; b_i <= m; b_i++) {
              if (bsbT->data[b_i]) {
                trueCount++;
              }
            }

            i1 = r6->size[0];
            r6->size[0] = trueCount;
            emxEnsureCapacity_int32_T(&st, r6, i1, &yb_emlrtRTEI);
            partialTrueCount = 0;
            for (b_i = 0; b_i <= m; b_i++) {
              if (bsbT->data[b_i]) {
                r6->data[partialTrueCount] = b_i + 1;
                partialTrueCount++;
              }
            }

            b_st.site = &t_emlrtRSI;
            loop_ub = Ym->size[1];
            i1 = Yb->size[0] * Yb->size[1];
            Yb->size[0] = r6->size[0];
            Yb->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(&b_st, Yb, i1, &ed_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              m = r6->size[0];
              for (i2 = 0; i2 < m; i2++) {
                if (r6->data[i2] > Ym->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(r6->data[i2], 1, Ym->size[0],
                    &gb_emlrtBCI, &b_st);
                }

                Yb->data[i2 + Yb->size[0] * i1] = Ym->data[(r6->data[i2] +
                  Ym->size[0] * i1) - 1];
              }
            }

            c_st.site = &mc_emlrtRSI;
            c_dynamic_size_checks(&c_st, r2, Yb, r5->size[0], r6->size[0]);
            c_st.site = &lc_emlrtRSI;
            d_mtimes(&c_st, r2, Yb, R);
            b_st.site = &t_emlrtRSI;
            inv(&b_st, R, S);
            m = bsbT->size[0] - 1;
            trueCount = 0;
            for (b_i = 0; b_i <= m; b_i++) {
              if (bsbT->data[b_i]) {
                trueCount++;
              }
            }

            i1 = r7->size[0];
            r7->size[0] = trueCount;
            emxEnsureCapacity_int32_T(&st, r7, i1, &yb_emlrtRTEI);
            partialTrueCount = 0;
            for (b_i = 0; b_i <= m; b_i++) {
              if (bsbT->data[b_i]) {
                r7->data[partialTrueCount] = b_i + 1;
                partialTrueCount++;
              }
            }

            loop_ub = Ym->size[1];
            i1 = c_Y->size[0] * c_Y->size[1];
            c_Y->size[0] = r7->size[0];
            c_Y->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(&st, c_Y, i1, &ld_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              m = r7->size[0];
              for (i2 = 0; i2 < m; i2++) {
                if (r7->data[i2] > Ym->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(r7->data[i2], 1, Ym->size[0],
                    &ib_emlrtBCI, &st);
                }

                c_Y->data[i2 + c_Y->size[0] * i1] = Ym->data[(r7->data[i2] +
                  Ym->size[0] * i1) - 1];
              }
            }

            b_st.site = &s_emlrtRSI;
            qr(&b_st, c_Y, Yb, R);
          } else {
            loop_ub = Ym->size[1];
            i1 = r2->size[0] * r2->size[1];
            r2->size[0] = b_bsb->size[0];
            r2->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(&st, r2, i1, &sc_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              m = b_bsb->size[0];
              for (i2 = 0; i2 < m; i2++) {
                if (b_bsb->data[i2] != (int32_T)muDoubleScalarFloor(b_bsb->
                     data[i2])) {
                  emlrtIntegerCheckR2012b(b_bsb->data[i2], &m_emlrtDCI, &st);
                }

                partialTrueCount = (int32_T)b_bsb->data[i2];
                if ((partialTrueCount < 1) || (partialTrueCount > Ym->size[0]))
                {
                  emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1, Ym->size[0],
                    &y_emlrtBCI, &st);
                }

                r2->data[i2 + r2->size[0] * i1] = Ym->data[(partialTrueCount +
                  Ym->size[0] * i1) - 1];
              }
            }

            b_st.site = &r_emlrtRSI;
            loop_ub = Ym->size[1];
            i1 = Yb->size[0] * Yb->size[1];
            Yb->size[0] = b_bsb->size[0];
            Yb->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(&b_st, Yb, i1, &uc_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              m = b_bsb->size[0];
              for (i2 = 0; i2 < m; i2++) {
                partialTrueCount = (int32_T)b_bsb->data[i2];
                if ((partialTrueCount < 1) || (partialTrueCount > Ym->size[0]))
                {
                  emlrtDynamicBoundsCheckR2012b((int32_T)b_bsb->data[i2], 1,
                    Ym->size[0], &ab_emlrtBCI, &b_st);
                }

                Yb->data[i2 + Yb->size[0] * i1] = Ym->data[(partialTrueCount +
                  Ym->size[0] * i1) - 1];
              }
            }

            c_st.site = &mc_emlrtRSI;
            c_dynamic_size_checks(&c_st, r2, Yb, b_bsb->size[0], b_bsb->size[0]);
            c_st.site = &lc_emlrtRSI;
            d_mtimes(&c_st, r2, Yb, R);
            b_st.site = &r_emlrtRSI;
            inv(&b_st, R, S);
            loop_ub = Ym->size[1];
            i1 = c_Y->size[0] * c_Y->size[1];
            c_Y->size[0] = b_bsb->size[0];
            c_Y->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(&st, c_Y, i1, &dd_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              m = b_bsb->size[0];
              for (i2 = 0; i2 < m; i2++) {
                partialTrueCount = (int32_T)b_bsb->data[i2];
                if ((partialTrueCount < 1) || (partialTrueCount > Ym->size[0]))
                {
                  emlrtDynamicBoundsCheckR2012b((int32_T)b_bsb->data[i2], 1,
                    Ym->size[0], &db_emlrtBCI, &st);
                }

                c_Y->data[i2 + c_Y->size[0] * i1] = Ym->data[(partialTrueCount +
                  Ym->size[0] * i1) - 1];
              }
            }

            b_st.site = &q_emlrtRSI;
            qr(&b_st, c_Y, Yb, R);
          }

          b_st.site = &p_emlrtRSI;
          i1 = MDltminT->size[0];
          MDltminT->size[0] = S->size[0] * S->size[1];
          emxEnsureCapacity_boolean_T(&b_st, MDltminT, i1, &fd_emlrtRTEI);
          loop_ub = S->size[0] * S->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            MDltminT->data[i1] = muDoubleScalarIsInf(S->data[i1]);
          }

          c_st.site = &li_emlrtRSI;
          d_st.site = &tf_emlrtRSI;
          m = combineVectorElements(&d_st, MDltminT);
          if (m > 0) {
            b_st.site = &sk_emlrtRSI;
            disp(&b_st, h_emlrt_marshallOut(&b_st, b_cv), m_emlrt_marshallOut
                 (&b_st, cv9), &f_emlrtMCI);
            b_st.site = &mk_emlrtRSI;
            b_disp(&b_st, emlrt_marshallOut(&b_st, cv8), &g_emlrtMCI);
            i = mmd->size[0] * mmd->size[1];
            mmd->size[0] = 1;
            mmd->size[1] = 1;
            emxEnsureCapacity_real_T(&st, mmd, i, &jd_emlrtRTEI);
            mmd->data[0] = rtNaN;
            i = Un->size[0] * Un->size[1];
            Un->size[0] = 1;
            Un->size[1] = 1;
            emxEnsureCapacity_real_T(&st, Un, i, &md_emlrtRTEI);
            Un->data[0] = rtNaN;
            i = BB->size[0] * BB->size[1];
            BB->size[0] = 1;
            BB->size[1] = 1;
            emxEnsureCapacity_real_T(&st, BB, i, &od_emlrtRTEI);
            BB->data[0] = rtNaN;
            exitg1 = true;
          } else {
            b_st.site = &o_emlrtRSI;
            if (R->size[1] != Ym->size[1]) {
              emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI,
                "MATLAB:dimagree", "MATLAB:dimagree", 0);
            }

            c_st.site = &oi_emlrtRSI;
            mrdiv(&c_st, Ym, R, Yb);

            /*  Compute squared Mahalanobis distances */
            b_st.site = &n_emlrtRSI;
            power(&b_st, Yb, r2);
            b_st.site = &n_emlrtRSI;
            b_sum(&b_st, r2, MD);
            loop_ub = MD->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              MD->data[i1] *= b_mm - 1.0;
            }

            b_guard1 = true;
          }
        }

        if (b_guard1) {
          if (b_mm < n) {
            /*  MDmod contains modified Mahalanobis distances. The */
            /*  Mahalanobis distance of the units belonging to subset are set */
            /*  to inf because we need to consider the minimum of the units */
            /*  outside subset */
            i1 = Szi->size[0];
            Szi->size[0] = MD->size[0];
            emxEnsureCapacity_real_T(&st, Szi, i1, &rd_emlrtRTEI);
            loop_ub = MD->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              Szi->data[i1] = MD->data[i1];
            }

            if (b_mm > percn) {
              m = bsbT->size[0];
              for (b_i = 0; b_i < m; b_i++) {
                if (bsbT->data[b_i]) {
                  if (b_i + 1 > Szi->size[0]) {
                    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Szi->size[0],
                      &mb_emlrtBCI, &st);
                  }

                  Szi->data[b_i] = rtInf;
                }
              }
            } else {
              i1 = ii->size[0];
              ii->size[0] = b_bsb->size[0];
              emxEnsureCapacity_int32_T(&st, ii, i1, &sd_emlrtRTEI);
              loop_ub = b_bsb->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                if (b_bsb->data[i1] != (int32_T)muDoubleScalarFloor(b_bsb->
                     data[i1])) {
                  emlrtIntegerCheckR2012b(b_bsb->data[i1], &p_emlrtDCI, &st);
                }

                i2 = (int32_T)b_bsb->data[i1];
                if ((i2 < 1) || (i2 > MD->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)b_bsb->data[i1], 1,
                    MD->size[0], &kb_emlrtBCI, &st);
                }

                ii->data[i1] = i2;
              }

              loop_ub = ii->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                Szi->data[ii->data[i1] - 1] = rtInf;
              }
            }

            /*  oldbsbF=bsbF; */
            i1 = oldbsbT->size[0];
            oldbsbT->size[0] = bsbT->size[0];
            emxEnsureCapacity_boolean_T(&st, oldbsbT, i1, &td_emlrtRTEI);
            loop_ub = bsbT->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              oldbsbT->data[i1] = bsbT->data[i1];
            }

            /*  Take minimum distance of the units not belonging to subset */
            b_st.site = &m_emlrtRSI;
            c_st.site = &fk_emlrtRSI;
            d_st.site = &gk_emlrtRSI;
            g_st.site = &hk_emlrtRSI;
            if (Szi->size[0] < 1) {
              emlrtErrorWithMessageIdR2018a(&g_st, &emlrtRTEI,
                "Coder:toolbox:eml_min_or_max_varDimZero",
                "Coder:toolbox:eml_min_or_max_varDimZero", 0);
            }

            h_st.site = &ik_emlrtRSI;
            nwhile = Szi->size[0];
            if (Szi->size[0] <= 2) {
              if (Szi->size[0] == 1) {
                ex = Szi->data[0];
                idx = 1;
              } else if ((Szi->data[0] > Szi->data[1]) || (muDoubleScalarIsNaN
                          (Szi->data[0]) && (!muDoubleScalarIsNaN(Szi->data[1]))))
              {
                ex = Szi->data[1];
                idx = 2;
              } else {
                ex = Szi->data[0];
                idx = 1;
              }
            } else {
              i_st.site = &nf_emlrtRSI;
              if (!muDoubleScalarIsNaN(Szi->data[0])) {
                idx = 1;
              } else {
                idx = 0;
                j_st.site = &of_emlrtRSI;
                if (Szi->size[0] > 2147483646) {
                  k_st.site = &oc_emlrtRSI;
                  check_forloop_overflow_error(&k_st);
                }

                partialTrueCount = 2;
                exitg2 = false;
                while ((!exitg2) && (partialTrueCount <= nwhile)) {
                  if (!muDoubleScalarIsNaN(Szi->data[partialTrueCount - 1])) {
                    idx = partialTrueCount;
                    exitg2 = true;
                  } else {
                    partialTrueCount++;
                  }
                }
              }

              if (idx == 0) {
                ex = Szi->data[0];
                idx = 1;
              } else {
                i_st.site = &mf_emlrtRSI;
                ex = Szi->data[idx - 1];
                m = idx + 1;
                j_st.site = &pf_emlrtRSI;
                if ((idx + 1 <= Szi->size[0]) && (Szi->size[0] > 2147483646)) {
                  k_st.site = &oc_emlrtRSI;
                  check_forloop_overflow_error(&k_st);
                }

                for (partialTrueCount = m; partialTrueCount <= nwhile;
                     partialTrueCount++) {
                  d = Szi->data[partialTrueCount - 1];
                  if (ex > d) {
                    ex = d;
                    idx = partialTrueCount;
                  }
                }
              }
            }

            /*  MDltminT = n x 1 Boolean vector which is true if corresponding MD is */
            /*  smaller or equal minMD */
            i1 = MDltminT->size[0];
            MDltminT->size[0] = MD->size[0];
            emxEnsureCapacity_boolean_T(&st, MDltminT, i1, &be_emlrtRTEI);
            loop_ub = MD->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              MDltminT->data[i1] = (MD->data[i1] <= ex);
            }

            /*  MDltminbsb = n x 1 Boolean vector (if m>percn) or */
            /*  int32 vector containing the units which certainly remain inside subset */
            /*  i.e. those which have a true in MDltminT and belong to previous subset */
            if (b_mm > percn) {
              if (MDltminT->size[0] != bsbT->size[0]) {
                emlrtSizeEqCheck1DR2012b(MDltminT->size[0], bsbT->size[0],
                  &m_emlrtECI, &st);
              }

              i1 = MDltminbsb->size[0];
              MDltminbsb->size[0] = MDltminT->size[0];
              emxEnsureCapacity_boolean_T(&st, MDltminbsb, i1, &ee_emlrtRTEI);
              loop_ub = MDltminT->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                MDltminbsb->data[i1] = (MDltminT->data[i1] && bsbT->data[i1]);
              }
            } else {
              i1 = MDltminbsb->size[0];
              MDltminbsb->size[0] = b_bsb->size[0];
              emxEnsureCapacity_boolean_T(&st, MDltminbsb, i1, &de_emlrtRTEI);
              loop_ub = b_bsb->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                if (b_bsb->data[i1] != (int32_T)muDoubleScalarFloor(b_bsb->
                     data[i1])) {
                  emlrtIntegerCheckR2012b(b_bsb->data[i1], &q_emlrtDCI, &st);
                }

                i2 = (int32_T)b_bsb->data[i1];
                if ((i2 < 1) || (i2 > MDltminT->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(i2, 1, MDltminT->size[0],
                    &pb_emlrtBCI, &st);
                }

                MDltminbsb->data[i1] = MDltminT->data[i2 - 1];
              }
            }

            /*  Find number of units of old subset which have a MD <= minMD */
            b_st.site = &l_emlrtRSI;
            c_st.site = &li_emlrtRSI;
            d_st.site = &tf_emlrtRSI;
            m = combineVectorElements(&d_st, MDltminbsb);

            /*  rankgap is the difference between m+1 (size of new size) and */
            /*  the number of units of old subset which have a distance <= */
            /*  minMD. For example if rankgap is =3, three more units must be */
            /*  added. */
            rankgap = (b_mm + 1.0) - (real_T)m;
            if (rankgap == 1.0) {
              /*  Just one new unit entered subset */
              i1 = unit->size[0];
              unit->size[0] = 1;
              emxEnsureCapacity_int32_T(&st, unit, i1, &ge_emlrtRTEI);
              unit->data[0] = idx;

              /*  Compute new bsbT and new bsb */
              if (b_mm <= percn) {
                /*  new bsb is equal to oldbsb plus unit which just entered */
                i1 = b_bsb->size[0];
                i2 = b_bsb->size[0];
                b_bsb->size[0]++;
                emxEnsureCapacity_real_T(&st, b_bsb, i2, &ie_emlrtRTEI);
                b_bsb->data[i1] = idx;
              }

              /*  bsbT is equal to old bsbT after adding a single true in */
              /*  correspondence of the unit which entered subset */
              if ((idx < 1) || (idx > bsbT->size[0])) {
                emlrtDynamicBoundsCheckR2012b(idx, 1, bsbT->size[0],
                  &qb_emlrtBCI, &st);
              }

              bsbT->data[idx - 1] = true;
            } else if ((rankgap > 1.0) && (rankgap <= 10.0)) {
              /*  MDmod is the vector of Mahalanobis distance which will have */
              /*  a Inf in correspondence of the units of old subset which */
              /*  had a MD smaller than minMD */
              i1 = Szi->size[0];
              Szi->size[0] = MD->size[0];
              emxEnsureCapacity_real_T(&st, Szi, i1, &he_emlrtRTEI);
              loop_ub = MD->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                Szi->data[i1] = MD->data[i1];
              }

              /*  Find bsbrini, i.e. the vector which will contain the */
              /*  units which remain in the subset in the next step */
              /*  Note that bsbrini is defined using Boolean vector bsbT */
              /*  when mm is greater than percn otherwise it uses numerical */
              /*  vector bsb */
              if (b_mm <= percn) {
                /*  bsbrini = vector containing the list of the units */
                /*  which certainly remain inside subset (i.e. those */
                /*  which have a MD smaller than minMD). In order to find */
                /*  bsbr we must check whether the k units which will be */
                /*  included were or not in the previous subset */
                loop_ub = b_bsb->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  if (b_bsb->data[i1] != (int32_T)muDoubleScalarFloor
                      (b_bsb->data[i1])) {
                    emlrtIntegerCheckR2012b(b_bsb->data[i1], &s_emlrtDCI, &st);
                  }

                  i2 = (int32_T)b_bsb->data[i1];
                  if ((i2 < 1) || (i2 > MDltminT->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(i2, 1, MDltminT->size[0],
                      &sb_emlrtBCI, &st);
                  }
                }

                m = b_bsb->size[0] - 1;
                trueCount = 0;
                for (b_i = 0; b_i <= m; b_i++) {
                  if (MDltminT->data[(int32_T)b_bsb->data[b_i] - 1]) {
                    trueCount++;
                  }
                }

                i1 = bsbrini->size[0];
                bsbrini->size[0] = trueCount;
                emxEnsureCapacity_uint32_T(&st, bsbrini, i1, &yb_emlrtRTEI);
                partialTrueCount = 0;
                for (b_i = 0; b_i <= m; b_i++) {
                  if (MDltminT->data[(int32_T)b_bsb->data[b_i] - 1]) {
                    if (b_i + 1 > b_bsb->size[0]) {
                      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, b_bsb->size[0],
                        &ub_emlrtBCI, &st);
                    }

                    bsbrini->data[partialTrueCount] = (uint32_T)b_bsb->data[b_i];
                    partialTrueCount++;
                  }
                }

                /*  unitout = list of the units which potentially left */
                /*  subset. We say potentially because there are still k */
                /*  units to be included */
                /*  unitout=bsb(~bsbini); */
                m = b_bsb->size[0] - 1;
                trueCount = 0;
                for (b_i = 0; b_i <= m; b_i++) {
                  if (!MDltminT->data[(int32_T)b_bsb->data[b_i] - 1]) {
                    trueCount++;
                  }
                }

                i1 = unitout->size[0];
                unitout->size[0] = trueCount;
                emxEnsureCapacity_real_T(&st, unitout, i1, &yb_emlrtRTEI);
                partialTrueCount = 0;
                for (b_i = 0; b_i <= m; b_i++) {
                  if (!MDltminT->data[(int32_T)b_bsb->data[b_i] - 1]) {
                    if (b_i + 1 > b_bsb->size[0]) {
                      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, b_bsb->size[0],
                        &xb_emlrtBCI, &st);
                    }

                    unitout->data[partialTrueCount] = b_bsb->data[b_i];
                    partialTrueCount++;
                  }
                }

                i1 = ii->size[0];
                ii->size[0] = bsbrini->size[0];
                emxEnsureCapacity_int32_T(&st, ii, i1, &pe_emlrtRTEI);
                loop_ub = bsbrini->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  if (((int32_T)bsbrini->data[i1] < 1) || ((int32_T)
                       bsbrini->data[i1] > MD->size[0])) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)bsbrini->data[i1], 1,
                      MD->size[0], &wb_emlrtBCI, &st);
                  }

                  ii->data[i1] = (int32_T)bsbrini->data[i1];
                }

                loop_ub = ii->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  Szi->data[ii->data[i1] - 1] = rtInf;
                }
              } else {
                /*  bsbriniT = Boolean vector which is true if the */
                /*  corresponding unit belonged to previous subset and */
                /*  has a MD smaller than minMD. This vector is nothing */
                /*  but the Boolean version of bsbrini. */
                /*  bsbriniT=MDltminT & bsbT; */
                i1 = bsbriniT->size[0];
                bsbriniT->size[0] = MDltminbsb->size[0];
                emxEnsureCapacity_boolean_T(&st, bsbriniT, i1, &me_emlrtRTEI);
                loop_ub = MDltminbsb->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  bsbriniT->data[i1] = MDltminbsb->data[i1];
                }

                m = MDltminbsb->size[0];
                for (b_i = 0; b_i < m; b_i++) {
                  if (MDltminbsb->data[b_i]) {
                    if (b_i + 1 > Szi->size[0]) {
                      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Szi->size[0],
                        &tb_emlrtBCI, &st);
                    }

                    Szi->data[b_i] = rtInf;
                  }
                }
              }

              lunit = 0;
              zz = 0;

              /*  In the following loop we add k units to form the new */
              /*  subset of m+1 units Note that if the difference between */
              /*  m+1 and the rank of the min outside subset is equal to rankgap, */
              /*  than at most rankgap minima must be calculated to find */
              /*  the the (m+1)-th order statistic */
              i1 = (int32_T)rankgap;
              for (loop_ub = 0; loop_ub < i1; loop_ub++) {
                b_st.site = &k_emlrtRSI;
                c_st.site = &fk_emlrtRSI;
                d_st.site = &gk_emlrtRSI;
                g_st.site = &hk_emlrtRSI;
                if (Szi->size[0] < 1) {
                  emlrtErrorWithMessageIdR2018a(&g_st, &emlrtRTEI,
                    "Coder:toolbox:eml_min_or_max_varDimZero",
                    "Coder:toolbox:eml_min_or_max_varDimZero", 0);
                }

                h_st.site = &ik_emlrtRSI;
                nwhile = Szi->size[0];
                if (Szi->size[0] <= 2) {
                  if (Szi->size[0] == 1) {
                    idx = 1;
                  } else if ((Szi->data[0] > Szi->data[1]) ||
                             (muDoubleScalarIsNaN(Szi->data[0]) &&
                              (!muDoubleScalarIsNaN(Szi->data[1])))) {
                    idx = 2;
                  } else {
                    idx = 1;
                  }
                } else {
                  i_st.site = &nf_emlrtRSI;
                  if (!muDoubleScalarIsNaN(Szi->data[0])) {
                    idx = 1;
                  } else {
                    idx = 0;
                    j_st.site = &of_emlrtRSI;
                    if (Szi->size[0] > 2147483646) {
                      k_st.site = &oc_emlrtRSI;
                      check_forloop_overflow_error(&k_st);
                    }

                    partialTrueCount = 2;
                    exitg2 = false;
                    while ((!exitg2) && (partialTrueCount <= nwhile)) {
                      if (!muDoubleScalarIsNaN(Szi->data[partialTrueCount - 1]))
                      {
                        idx = partialTrueCount;
                        exitg2 = true;
                      } else {
                        partialTrueCount++;
                      }
                    }
                  }

                  if (idx == 0) {
                    idx = 1;
                  } else {
                    i_st.site = &mf_emlrtRSI;
                    a = Szi->data[idx - 1];
                    m = idx + 1;
                    j_st.site = &pf_emlrtRSI;
                    if ((idx + 1 <= Szi->size[0]) && (Szi->size[0] > 2147483646))
                    {
                      k_st.site = &oc_emlrtRSI;
                      check_forloop_overflow_error(&k_st);
                    }

                    for (partialTrueCount = m; partialTrueCount <= nwhile;
                         partialTrueCount++) {
                      d = Szi->data[partialTrueCount - 1];
                      if (a > d) {
                        a = d;
                        idx = partialTrueCount;
                      }
                    }
                  }
                }

                /*  minMDindex = index of the unit which is about to */
                /*  enter subset. We check whether unit minMDindex */
                /*  belonged or not to previous subset If unit minMDindex */
                /*  belonged to previous subset than a true is added into */
                /*  vector bsbriniT and the unit is included in vector */
                /*  bsbradd If unit minMDindex did not belong to previous */
                /*  subset, than minMDindex is included in vector unitadd */
                if ((idx < 1) || (idx > bsbT->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(idx, 1, bsbT->size[0],
                    &cc_emlrtBCI, &st);
                }

                if (bsbT->data[idx - 1]) {
                  if (b_mm <= percn) {
                    if ((zz + 1 < 1) || (zz + 1 > 10)) {
                      emlrtDynamicBoundsCheckR2012b(zz + 1, 1, 10, &i_emlrtBCI,
                        &st);
                    }

                    bsbradd[zz] = idx;
                    zz++;

                    /*  Delete from vector unitout (containing the */
                    /*  list of the units which went out of the */
                    /*  subset) element minMDindex */
                    m = unitout->size[0] - 1;
                    trueCount = 0;
                    for (b_i = 0; b_i <= m; b_i++) {
                      if ((int32_T)unitout->data[b_i] != idx) {
                        trueCount++;
                      }
                    }

                    partialTrueCount = 0;
                    for (b_i = 0; b_i <= m; b_i++) {
                      if ((int32_T)unitout->data[b_i] != idx) {
                        if (b_i + 1 > unitout->size[0]) {
                          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1,
                            unitout->size[0], &fc_emlrtBCI, &st);
                        }

                        unitout->data[partialTrueCount] = unitout->data[b_i];
                        partialTrueCount++;
                      }
                    }

                    i2 = unitout->size[0];
                    unitout->size[0] = trueCount;
                    emxEnsureCapacity_real_T(&st, unitout, i2, &yb_emlrtRTEI);
                  } else {
                    if (idx > bsbriniT->size[0]) {
                      emlrtDynamicBoundsCheckR2012b(idx, 1, bsbriniT->size[0],
                        &dc_emlrtBCI, &st);
                    }

                    bsbriniT->data[idx - 1] = true;
                  }
                } else {
                  if ((lunit + 1 < 1) || (lunit + 1 > 10)) {
                    emlrtDynamicBoundsCheckR2012b(lunit + 1, 1, 10, &g_emlrtBCI,
                      &st);
                  }

                  unitadd[lunit] = idx;
                  lunit++;
                }

                /*  disp(posunit(posncl1)) */
                if (idx > Szi->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(idx, 1, Szi->size[0],
                    &ec_emlrtBCI, &st);
                }

                Szi->data[idx - 1] = rtInf;
                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b(&st);
                }
              }

              /*  unit = vector containing all units which enter the new subset */
              /*  but did not belong to previous subset */
              if (1 > lunit) {
                lunit = 0;
              } else if (lunit > 10) {
                emlrtDynamicBoundsCheckR2012b(lunit, 1, 10, &h_emlrtBCI, &st);
              }

              i1 = unit->size[0];
              unit->size[0] = lunit;
              emxEnsureCapacity_int32_T(&st, unit, i1, &qe_emlrtRTEI);
              for (i1 = 0; i1 < lunit; i1++) {
                unit->data[i1] = unitadd[i1];
              }

              /*  bsbr = vector containing all units which enter the new */
              /*  subset and were also in the previous subset */
              /*  bsb = units forming new subset. */
              if (b_mm <= percn) {
                if (1 > zz) {
                  zz = 0;
                } else if (zz > 10) {
                  emlrtDynamicBoundsCheckR2012b(zz, 1, 10, &j_emlrtBCI, &st);
                }

                i1 = bsbr->size[0];
                bsbr->size[0] = bsbrini->size[0] + zz;
                emxEnsureCapacity_int32_T(&st, bsbr, i1, &se_emlrtRTEI);
                loop_ub = bsbrini->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  bsbr->data[i1] = (int32_T)bsbrini->data[i1];
                }

                for (i1 = 0; i1 < zz; i1++) {
                  bsbr->data[i1 + bsbrini->size[0]] = bsbradd[i1];
                }

                i1 = b_bsb->size[0];
                b_bsb->size[0] = bsbr->size[0] + lunit;
                emxEnsureCapacity_real_T(&st, b_bsb, i1, &te_emlrtRTEI);
                loop_ub = bsbr->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  b_bsb->data[i1] = bsbr->data[i1];
                }

                for (i1 = 0; i1 < lunit; i1++) {
                  b_bsb->data[i1 + bsbr->size[0]] = unitadd[i1];
                }

                i1 = bsbT->size[0];
                bsbT->size[0] = n;
                emxEnsureCapacity_boolean_T(&st, bsbT, i1, &we_emlrtRTEI);
                for (i1 = 0; i1 < n; i1++) {
                  bsbT->data[i1] = false;
                }

                i1 = ii->size[0];
                ii->size[0] = b_bsb->size[0];
                emxEnsureCapacity_int32_T(&st, ii, i1, &ye_emlrtRTEI);
                loop_ub = b_bsb->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  i2 = (int32_T)b_bsb->data[i1];
                  if ((i2 < 1) || (i2 > n)) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)b_bsb->data[i1], 1, n,
                      &yb_emlrtBCI, &st);
                  }

                  ii->data[i1] = i2;
                }

                loop_ub = ii->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  bsbT->data[ii->data[i1] - 1] = true;
                }
              } else {
                /*  After the instruction which follows bsbriniT */
                /*  will be exactly equal to bsbT */
                /*  Note that bsbT has been computed through the 3 following instructions */
                /*  -----------    bsbriniT=MDltminT & bsbT; */
                /*  -----------    bsbriniT(minMDindex)=true; */
                /*  -----------    bsbriniT(unit)=true; */
                for (i1 = 0; i1 < lunit; i1++) {
                  i2 = unitadd[i1];
                  if ((i2 < 1) || (i2 > bsbriniT->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(i2, 1, bsbriniT->size[0],
                      &ac_emlrtBCI, &st);
                  }

                  d_tmp_data[i1] = i2;
                }

                for (i1 = 0; i1 < lunit; i1++) {
                  bsbriniT->data[d_tmp_data[i1] - 1] = true;
                }

                i1 = bsbT->size[0];
                bsbT->size[0] = bsbriniT->size[0];
                emxEnsureCapacity_boolean_T(&st, bsbT, i1, &ve_emlrtRTEI);
                loop_ub = bsbriniT->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  bsbT->data[i1] = bsbriniT->data[i1];
                }
              }

              /*  Compute bsbT (Boolean vector which identifies new subset) */
            } else {
              /*   rankgap>nrepmin */
              /*  Old sorting */
              /*                  [~,MDsor]=sort(MD); */
              /*                  bsb=MDsor(1:mm+1); */
              /*                  bsbT=zeron1; */
              /*                  bsbT(bsb)=true; */
              /*  New sorting based on quickselectFS */
              i1 = Szi->size[0];
              Szi->size[0] = MD->size[0];
              emxEnsureCapacity_real_T(&st, Szi, i1, &je_emlrtRTEI);
              loop_ub = MD->size[0] - 1;
              for (i1 = 0; i1 <= loop_ub; i1++) {
                Szi->data[i1] = MD->data[i1];
              }

              b_st.site = &j_emlrtRSI;
              ksor = quickselectFS(&b_st, Szi, b_mm + 1.0, idx);
              i1 = bsbT->size[0];
              bsbT->size[0] = MD->size[0];
              emxEnsureCapacity_boolean_T(&st, bsbT, i1, &ke_emlrtRTEI);
              loop_ub = MD->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                bsbT->data[i1] = (MD->data[i1] <= ksor);
              }

              b_st.site = &i_emlrtRSI;
              c_st.site = &li_emlrtRSI;
              d_st.site = &tf_emlrtRSI;
              m = combineVectorElements(&d_st, bsbT);
              if (m == (int32_T)b_mm + 1) {
                if (b_mm <= percn) {
                  m = bsbT->size[0] - 1;
                  trueCount = 0;
                  for (b_i = 0; b_i <= m; b_i++) {
                    if (bsbT->data[b_i]) {
                      trueCount++;
                    }
                  }

                  i1 = b_bsb->size[0];
                  b_bsb->size[0] = trueCount;
                  emxEnsureCapacity_real_T(&st, b_bsb, i1, &yb_emlrtRTEI);
                  partialTrueCount = 0;
                  for (b_i = 0; b_i <= m; b_i++) {
                    if (bsbT->data[b_i]) {
                      if (b_i + 1 > seq->size[0]) {
                        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                          &vb_emlrtBCI, &st);
                      }

                      b_bsb->data[partialTrueCount] = seq->data[b_i];
                      partialTrueCount++;
                    }
                  }
                }
              } else {
                m = MD->size[0];
                for (b_i = 0; b_i < m; b_i++) {
                  if ((MD->data[b_i] < ksor) && (b_i + 1 > seq->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                      &b_emlrtBCI, &st);
                  }
                }

                m = MD->size[0];
                for (b_i = 0; b_i < m; b_i++) {
                  if ((MD->data[b_i] == ksor) && (b_i + 1 > seq->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                      &emlrtBCI, &st);
                  }
                }

                m = MD->size[0];
                trueCount = 0;
                for (b_i = 0; b_i < m; b_i++) {
                  if (MD->data[b_i] < ksor) {
                    trueCount++;
                  }
                }

                d = (b_mm + 1.0) - (real_T)trueCount;
                if (1.0 > d) {
                  loop_ub = 0;
                } else {
                  m = MD->size[0];
                  trueCount = 0;
                  for (b_i = 0; b_i < m; b_i++) {
                    if (MD->data[b_i] == ksor) {
                      trueCount++;
                    }
                  }

                  if (1 > trueCount) {
                    emlrtDynamicBoundsCheckR2012b(1, 1, trueCount, &k_emlrtBCI,
                      &st);
                  }

                  m = MD->size[0];
                  trueCount = 0;
                  for (b_i = 0; b_i < m; b_i++) {
                    if (MD->data[b_i] == ksor) {
                      trueCount++;
                    }
                  }

                  if (((int32_T)d < 1) || ((int32_T)d > trueCount)) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, trueCount,
                      &l_emlrtBCI, &st);
                  }

                  loop_ub = (int32_T)d;
                }

                m = MD->size[0];
                trueCount = 0;
                for (b_i = 0; b_i < m; b_i++) {
                  if (MD->data[b_i] == ksor) {
                    trueCount++;
                  }
                }

                ym_size[0] = 1;
                ym_size[1] = loop_ub;
                b_st.site = &h_emlrtRSI;
                b_indexShapeCheck(&b_st, trueCount, ym_size);
                m = MD->size[0] - 1;
                trueCount = 0;
                for (b_i = 0; b_i <= m; b_i++) {
                  if (MD->data[b_i] < ksor) {
                    trueCount++;
                  }
                }

                i1 = r9->size[0];
                r9->size[0] = trueCount;
                emxEnsureCapacity_int32_T(&st, r9, i1, &yb_emlrtRTEI);
                partialTrueCount = 0;
                nwhile = MD->size[0] - 1;
                trueCount = 0;
                for (b_i = 0; b_i <= m; b_i++) {
                  if (MD->data[b_i] < ksor) {
                    r9->data[partialTrueCount] = b_i + 1;
                    partialTrueCount++;
                  }

                  if (MD->data[b_i] == ksor) {
                    trueCount++;
                  }
                }

                i1 = r10->size[0];
                r10->size[0] = trueCount;
                emxEnsureCapacity_int32_T(&st, r10, i1, &yb_emlrtRTEI);
                partialTrueCount = 0;
                for (b_i = 0; b_i <= nwhile; b_i++) {
                  if (MD->data[b_i] == ksor) {
                    r10->data[partialTrueCount] = b_i + 1;
                    partialTrueCount++;
                  }
                }

                i1 = b_bsb->size[0];
                b_bsb->size[0] = r9->size[0] + loop_ub;
                emxEnsureCapacity_real_T(&st, b_bsb, i1, &ue_emlrtRTEI);
                m = r9->size[0];
                for (i1 = 0; i1 < m; i1++) {
                  b_bsb->data[i1] = seq->data[r9->data[i1] - 1];
                }

                for (i1 = 0; i1 < loop_ub; i1++) {
                  b_bsb->data[i1 + r9->size[0]] = seq->data[r10->data[i1] - 1];
                }

                i1 = bsbT->size[0];
                bsbT->size[0] = n;
                emxEnsureCapacity_boolean_T(&st, bsbT, i1, &xe_emlrtRTEI);
                for (i1 = 0; i1 < n; i1++) {
                  bsbT->data[i1] = false;
                }

                i1 = ii->size[0];
                ii->size[0] = b_bsb->size[0];
                emxEnsureCapacity_int32_T(&st, ii, i1, &af_emlrtRTEI);
                loop_ub = b_bsb->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  i2 = (int32_T)b_bsb->data[i1];
                  if (b_bsb->data[i1] != i2) {
                    emlrtIntegerCheckR2012b(b_bsb->data[i1], &t_emlrtDCI, &st);
                  }

                  if (i2 > n) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)b_bsb->data[i1], 1, n,
                      &bc_emlrtBCI, &st);
                  }

                  ii->data[i1] = i2;
                }

                loop_ub = ii->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  bsbT->data[ii->data[i1] - 1] = true;
                }
              }

              /*  unit = vector containing units which just entered subset; */
              i1 = MDltminT->size[0];
              MDltminT->size[0] = oldbsbT->size[0];
              emxEnsureCapacity_boolean_T(&st, MDltminT, i1, &ne_emlrtRTEI);
              loop_ub = oldbsbT->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                MDltminT->data[i1] = !oldbsbT->data[i1];
              }

              if (bsbT->size[0] != MDltminT->size[0]) {
                emlrtSizeEqCheck1DR2012b(bsbT->size[0], MDltminT->size[0],
                  &n_emlrtECI, &st);
              }

              b_st.site = &g_emlrtRSI;
              i1 = MDltminT->size[0];
              MDltminT->size[0] = bsbT->size[0];
              emxEnsureCapacity_boolean_T(&b_st, MDltminT, i1, &oe_emlrtRTEI);
              loop_ub = bsbT->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                MDltminT->data[i1] = (bsbT->data[i1] && MDltminT->data[i1]);
              }

              c_st.site = &cd_emlrtRSI;
              b_eml_find(&c_st, MDltminT, ii);
              i1 = unit->size[0];
              unit->size[0] = ii->size[0];
              emxEnsureCapacity_int32_T(&b_st, unit, i1, &re_emlrtRTEI);
              loop_ub = ii->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                unit->data[i1] = ii->data[i1];
              }
            }

            if (b_mm >= init1) {
              /*  mmd contains minimum of Mahalanobis distances among */
              /*  the units which are not in the subset at step m */
              d = (b_mm - init1) + 1.0;
              a = (int32_T)muDoubleScalarFloor(d);
              if (d != a) {
                emlrtIntegerCheckR2012b(d, &r_emlrtDCI, &st);
              }

              if (((int32_T)d < 1) || ((int32_T)d > mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, mmd->size[0],
                  &rb_emlrtBCI, &st);
              }

              mmd->data[((int32_T)d + mmd->size[0]) - 1] = ex;
              if (d != a) {
                emlrtIntegerCheckR2012b(d, &r_emlrtDCI, &st);
              }

              if (((int32_T)d < 1) || ((int32_T)d > mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, mmd->size[0],
                  &rb_emlrtBCI, &st);
              }

              b_st.site = &f_emlrtRSI;
              x = &mmd->data[((int32_T)d + mmd->size[0]) - 1];
              if (*x < 0.0) {
                emlrtErrorWithMessageIdR2018a(&b_st, &x_emlrtRTEI,
                  "Coder:toolbox:ElFunDomainError",
                  "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
              }

              *x = muDoubleScalarSqrt(*x);
            }

            /*  store mean of units forming old subset */
            i1 = meoldbsb->size[0] * meoldbsb->size[1];
            meoldbsb->size[0] = 1;
            meoldbsb->size[1] = ym->size[1];
            emxEnsureCapacity_real_T(&st, meoldbsb, i1, &le_emlrtRTEI);
            loop_ub = ym->size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              meoldbsb->data[i1] = ym->data[i1];
            }

            lunit = unit->size[0];
            if (b_mm >= init1) {
              if (unit->size[0] <= 10) {
                if (2 > unit->size[0] + 1) {
                  i1 = -1;
                  i2 = -1;
                } else {
                  i1 = 0;
                  i2 = unit->size[0];
                }

                d = (b_mm - init1) + 1.0;
                if (d != (int32_T)muDoubleScalarFloor(d)) {
                  emlrtIntegerCheckR2012b(d, &emlrtDCI, &st);
                }

                if (((int32_T)d < 1) || ((int32_T)d > Un->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Un->size[0],
                    &o_emlrtBCI, &st);
                }

                ym_size[0] = 1;
                nwhile = i2 - i1;
                ym_size[1] = nwhile;
                emlrtSubAssignSizeCheckR2012b(&ym_size[0], 2, &unit->size[0], 1,
                  &q_emlrtECI, &st);
                for (i2 = 0; i2 < nwhile; i2++) {
                  Un->data[((int32_T)d + Un->size[0] * ((i1 + i2) + 1)) - 1] =
                    unit->data[i2];
                }
              } else {
                if (msg) {
                  b_st.site = &e_emlrtRSI;
                  int2str(&b_st, b_mm, tmp_data, ym_size);
                  tmp_size[0] = 1;
                  tmp_size[1] = ym_size[1] + 44;
                  for (i1 = 0; i1 < 44; i1++) {
                    b_tmp_data[i1] = cv10[i1];
                  }

                  loop_ub = ym_size[1];
                  if (0 <= loop_ub - 1) {
                    memcpy(&b_tmp_data[44], &tmp_data[0], loop_ub * sizeof
                           (char_T));
                  }

                  b_st.site = &wk_emlrtRSI;
                  b_disp(&b_st, n_emlrt_marshallOut(&b_st, b_tmp_data, tmp_size),
                         &h_emlrtMCI);
                  b_st.site = &d_emlrtRSI;
                  int2str(&b_st, unit->size[0], tmp_data, ym_size);
                  b_tmp_size[0] = 1;
                  b_tmp_size[1] = ym_size[1] + 30;
                  for (i1 = 0; i1 < 30; i1++) {
                    c_tmp_data[i1] = cv11[i1];
                  }

                  loop_ub = ym_size[1];
                  if (0 <= loop_ub - 1) {
                    memcpy(&c_tmp_data[30], &tmp_data[0], loop_ub * sizeof
                           (char_T));
                  }

                  b_st.site = &vk_emlrtRSI;
                  b_disp(&b_st, n_emlrt_marshallOut(&b_st, c_tmp_data,
                          b_tmp_size), &i_emlrtMCI);
                }

                b_st.site = &c_emlrtRSI;
                c_indexShapeCheck(&b_st, unit->size[0]);
                d = (b_mm - init1) + 1.0;
                if (d != (int32_T)muDoubleScalarFloor(d)) {
                  emlrtIntegerCheckR2012b(d, &b_emlrtDCI, &st);
                }

                if (((int32_T)d < 1) || ((int32_T)d > Un->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Un->size[0],
                    &p_emlrtBCI, &st);
                }

                ym_size[0] = 1;
                ym_size[1] = 10;
                trueCount = 10;
                emlrtSubAssignSizeCheckR2012b(&ym_size[0], 2, &trueCount, 1,
                  &r_emlrtECI, &st);
                for (i1 = 0; i1 < 10; i1++) {
                  Un->data[((int32_T)d + Un->size[0] * (i1 + 1)) - 1] =
                    unit->data[i1];
                }
              }
            }
          }

          mm++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
      }
    }
  }

  if (guard1) {
    b_st.site = &rk_emlrtRSI;
    disp(&b_st, h_emlrt_marshallOut(&b_st, b_cv), l_emlrt_marshallOut(&b_st, cv7),
         &d_emlrtMCI);
    b_st.site = &lk_emlrtRSI;
    b_disp(&b_st, emlrt_marshallOut(&b_st, cv8), &e_emlrtMCI);
    i = mmd->size[0] * mmd->size[1];
    mmd->size[0] = 1;
    mmd->size[1] = 1;
    emxEnsureCapacity_real_T(&st, mmd, i, &kc_emlrtRTEI);
    mmd->data[0] = rtNaN;
    i = Un->size[0] * Un->size[1];
    Un->size[0] = 1;
    Un->size[1] = 1;
    emxEnsureCapacity_real_T(&st, Un, i, &lc_emlrtRTEI);
    Un->data[0] = rtNaN;
    i = BB->size[0] * BB->size[1];
    BB->size[0] = 1;
    BB->size[1] = 1;
    emxEnsureCapacity_real_T(&st, BB, i, &mc_emlrtRTEI);
    BB->data[0] = rtNaN;
  }

  emxFree_real_T(&c_Y);
  emxFree_int32_T(&ii);
  emxFree_int32_T(&r10);
  emxFree_int32_T(&r9);
  emxFree_int32_T(&r8);
  emxFree_int32_T(&r7);
  emxFree_int32_T(&r6);
  emxFree_int32_T(&r5);
  emxFree_int32_T(&r4);
  emxFree_int32_T(&r3);
  emxFree_real_T(&r2);
  emxFree_real_T(&b_bsbsteps);
  emxFree_boolean_T(&MDltminbsb);
  emxFree_boolean_T(&MDltminT);
  emxFree_real_T(&R);
  emxFree_real_T(&MD);
  emxFree_real_T(&Szi);
  emxFree_real_T(&zi);
  emxFree_real_T(&mibsbr);
  emxFree_real_T(&mi);
  emxFree_real_T(&Ym);
  emxFree_real_T(&ym);
  emxFree_real_T(&Yb);
  emxFree_int32_T(&unit);
  emxFree_uint32_T(&bsbrini);
  emxFree_boolean_T(&bsbriniT);
  emxFree_real_T(&unitout);
  emxFree_int32_T(&bsbr);
  emxFree_boolean_T(&oldbsbT);
  emxFree_real_T(&meoldbsb);
  emxFree_real_T(&S);
  emxFree_boolean_T(&bsbT);
  emxFree_real_T(&seq);
  emxFree_real_T(&b_bsb);
  emxFree_real_T(&b_Y);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (FSMmmd_wrapper.c) */
