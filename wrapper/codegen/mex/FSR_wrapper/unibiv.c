/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * unibiv.c
 *
 * Code generation for function 'unibiv'
 *
 */

/* Include files */
#include "unibiv.h"
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_mexutil.h"
#include "FSR_wrapper_types.h"
#include "abs.h"
#include "combineVectorElements.h"
#include "eig.h"
#include "eml_mtimes_helper.h"
#include "find.h"
#include "finv.h"
#include "indexShapeCheck.h"
#include "iqr.h"
#include "mad.h"
#include "mean.h"
#include "median.h"
#include "mtimes.h"
#include "power.h"
#include "quantile.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "sqrt.h"
#include "std.h"
#include "sum.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo gi_emlrtRSI = { 495,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo hi_emlrtRSI = { 437,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo ii_emlrtRSI = { 431,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo ji_emlrtRSI = { 430,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo ki_emlrtRSI = { 428,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo li_emlrtRSI = { 424,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo mi_emlrtRSI = { 423,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo ni_emlrtRSI = { 420,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo oi_emlrtRSI = { 414,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo pi_emlrtRSI = { 413,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo qi_emlrtRSI = { 405,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo ri_emlrtRSI = { 404,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo si_emlrtRSI = { 400,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo ti_emlrtRSI = { 399,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo ui_emlrtRSI = { 398,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo vi_emlrtRSI = { 391,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo wi_emlrtRSI = { 345,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo xi_emlrtRSI = { 344,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo yi_emlrtRSI = { 343,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo aj_emlrtRSI = { 332,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo bj_emlrtRSI = { 331,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo cj_emlrtRSI = { 330,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo dj_emlrtRSI = { 329,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo ej_emlrtRSI = { 323,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo fj_emlrtRSI = { 307,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo gj_emlrtRSI = { 293,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo hj_emlrtRSI = { 292,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo ij_emlrtRSI = { 252,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo jj_emlrtRSI = { 240,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo kj_emlrtRSI = { 236,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo lj_emlrtRSI = { 221,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo mj_emlrtRSI = { 218,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo nj_emlrtRSI = { 216,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo oj_emlrtRSI = { 211,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo pj_emlrtRSI = { 209,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo kl_emlrtRSI = { 514,/* lineNo */
  "tiedrankFS",                        /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo ll_emlrtRSI = { 517,/* lineNo */
  "tiedrankFS",                        /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo ml_emlrtRSI = { 524,/* lineNo */
  "tiedrankFS",                        /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo nl_emlrtRSI = { 525,/* lineNo */
  "tiedrankFS",                        /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo ol_emlrtRSI = { 541,/* lineNo */
  "tiedrankFS",                        /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo pl_emlrtRSI = { 547,/* lineNo */
  "tiedrankFS",                        /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo vm_emlrtRSI = { 29, /* lineNo */
  "reshapeSizeChecks",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pathName */
};

static emlrtMCInfo p_emlrtMCI = { 302, /* lineNo */
  25,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtMCInfo q_emlrtMCI = { 321, /* lineNo */
  25,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtMCInfo r_emlrtMCI = { 314, /* lineNo */
  25,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtBCInfo fl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  208,                                 /* lineNo */
  11,                                  /* colNo */
  "Y",                                 /* aName */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo q_emlrtECI = { -1,  /* nDims */
  252,                                 /* lineNo */
  16,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtECInfo r_emlrtECI = { -1,  /* nDims */
  258,                                 /* lineNo */
  9,                                   /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtBCInfo gl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  291,                                 /* lineNo */
  19,                                  /* colNo */
  "Y",                                 /* aName */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo s_emlrtECI = { -1,  /* nDims */
  329,                                 /* lineNo */
  24,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtECInfo t_emlrtECI = { -1,  /* nDims */
  330,                                 /* lineNo */
  24,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtECInfo u_emlrtECI = { -1,  /* nDims */
  391,                                 /* lineNo */
  21,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtECInfo v_emlrtECI = { -1,  /* nDims */
  391,                                 /* lineNo */
  33,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtECInfo w_emlrtECI = { -1,  /* nDims */
  395,                                 /* lineNo */
  19,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtBCInfo hl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  460,                                 /* lineNo */
  51,                                  /* colNo */
  "new2",                              /* aName */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo il_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  460,                                 /* lineNo */
  89,                                  /* colNo */
  "new2",                              /* aName */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo x_emlrtECI = { -1,  /* nDims */
  466,                                 /* lineNo */
  18,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtBCInfo jl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  252,                                 /* lineNo */
  16,                                  /* colNo */
  "datax",                             /* aName */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = { 258,/* lineNo */
  15,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  258,                                 /* lineNo */
  15,                                  /* colNo */
  "univT",                             /* aName */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ll_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  258,                                 /* lineNo */
  32,                                  /* colNo */
  "univT",                             /* aName */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = { 258,/* lineNo */
  32,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ml_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  460,                                 /* lineNo */
  26,                                  /* colNo */
  "new2",                              /* aName */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  460,                                 /* lineNo */
  64,                                  /* colNo */
  "new2",                              /* aName */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ol_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  461,                                 /* lineNo */
  31,                                  /* colNo */
  "biv",                               /* aName */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  524,                                 /* lineNo */
  11,                                  /* colNo */
  "sx",                                /* aName */
  "tiedrankFS",                        /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  524,                                 /* lineNo */
  13,                                  /* colNo */
  "sx",                                /* aName */
  "tiedrankFS",                        /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo am_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  524,                                 /* lineNo */
  26,                                  /* colNo */
  "epsx",                              /* aName */
  "tiedrankFS",                        /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  524,                                 /* lineNo */
  28,                                  /* colNo */
  "epsx",                              /* aName */
  "tiedrankFS",                        /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo y_emlrtECI = { -1,  /* nDims */
  524,                                 /* lineNo */
  8,                                   /* colNo */
  "tiedrankFS",                        /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtBCInfo cm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  524,                                 /* lineNo */
  42,                                  /* colNo */
  "sx",                                /* aName */
  "tiedrankFS",                        /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  524,                                 /* lineNo */
  44,                                  /* colNo */
  "sx",                                /* aName */
  "tiedrankFS",                        /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo em_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  524,                                 /* lineNo */
  55,                                  /* colNo */
  "epsx",                              /* aName */
  "tiedrankFS",                        /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  524,                                 /* lineNo */
  57,                                  /* colNo */
  "epsx",                              /* aName */
  "tiedrankFS",                        /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ab_emlrtECI = { -1, /* nDims */
  524,                                 /* lineNo */
  39,                                  /* colNo */
  "tiedrankFS",                        /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtBCInfo gm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  19,                                  /* colNo */
  "ranks",                             /* aName */
  "tiedrankFS",                        /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  541,                                 /* lineNo */
  28,                                  /* colNo */
  "ranks",                             /* aName */
  "tiedrankFS",                        /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo im_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  540,                                 /* lineNo */
  11,                                  /* colNo */
  "ranks",                             /* aName */
  "tiedrankFS",                        /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  540,                                 /* lineNo */
  20,                                  /* colNo */
  "ranks",                             /* aName */
  "tiedrankFS",                        /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo bb_emlrtECI = { -1, /* nDims */
  546,                                 /* lineNo */
  1,                                   /* colNo */
  "tiedrankFS",                        /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = { 59,/* lineNo */
  23,                                  /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = { 52,/* lineNo */
  13,                                  /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pName */
};

static emlrtDCInfo kb_emlrtDCI = { 521,/* lineNo */
  23,                                  /* colNo */
  "tiedrankFS",                        /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo km_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  532,                                 /* lineNo */
  16,                                  /* colNo */
  "tieloc",                            /* aName */
  "tiedrankFS",                        /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  546,                                 /* lineNo */
  3,                                   /* colNo */
  "r",                                 /* aName */
  "tiedrankFS",                        /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  534,                                 /* lineNo */
  11,                                  /* colNo */
  "tieloc",                            /* aName */
  "tiedrankFS",                        /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  534,                                 /* lineNo */
  33,                                  /* colNo */
  "tieloc",                            /* aName */
  "tiedrankFS",                        /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo wj_emlrtRTEI = { 196,/* lineNo */
  1,                                   /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo xj_emlrtRTEI = { 198,/* lineNo */
  1,                                   /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo yj_emlrtRTEI = { 200,/* lineNo */
  1,                                   /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo ak_emlrtRTEI = { 204,/* lineNo */
  1,                                   /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo bk_emlrtRTEI = { 208,/* lineNo */
  5,                                   /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo ck_emlrtRTEI = { 208,/* lineNo */
  7,                                   /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo dk_emlrtRTEI = { 495,/* lineNo */
  1,                                   /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo ek_emlrtRTEI = { 214,/* lineNo */
  9,                                   /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo fk_emlrtRTEI = { 222,/* lineNo */
  13,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo gk_emlrtRTEI = { 219,/* lineNo */
  13,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo hk_emlrtRTEI = { 236,/* lineNo */
  5,                                   /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo ik_emlrtRTEI = { 252,/* lineNo */
  16,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo jk_emlrtRTEI = { 252,/* lineNo */
  32,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo kk_emlrtRTEI = { 252,/* lineNo */
  53,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo lk_emlrtRTEI = { 252,/* lineNo */
  49,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo mk_emlrtRTEI = { 1,/* lineNo */
  16,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo nk_emlrtRTEI = { 252,/* lineNo */
  5,                                   /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo ok_emlrtRTEI = { 258,/* lineNo */
  15,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo pk_emlrtRTEI = { 258,/* lineNo */
  26,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo qk_emlrtRTEI = { 291,/* lineNo */
  15,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo rk_emlrtRTEI = { 296,/* lineNo */
  17,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo sk_emlrtRTEI = { 329,/* lineNo */
  24,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo tk_emlrtRTEI = { 310,/* lineNo */
  21,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo uk_emlrtRTEI = { 345,/* lineNo */
  24,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo vk_emlrtRTEI = { 324,/* lineNo */
  21,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo wk_emlrtRTEI = { 330,/* lineNo */
  24,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo xk_emlrtRTEI = { 345,/* lineNo */
  45,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo yk_emlrtRTEI = { 391,/* lineNo */
  33,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo al_emlrtRTEI = { 86,/* lineNo */
  13,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo bl_emlrtRTEI = { 449,/* lineNo */
  13,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo cl_emlrtRTEI = { 457,/* lineNo */
  13,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo dl_emlrtRTEI = { 343,/* lineNo */
  21,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo el_emlrtRTEI = { 344,/* lineNo */
  21,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo sl_emlrtRTEI = { 517,/* lineNo */
  15,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo tl_emlrtRTEI = { 521,/* lineNo */
  1,                                   /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo ul_emlrtRTEI = { 524,/* lineNo */
  8,                                   /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo vl_emlrtRTEI = { 525,/* lineNo */
  1,                                   /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo wl_emlrtRTEI = { 528,/* lineNo */
  1,                                   /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo xl_emlrtRTEI = { 546,/* lineNo */
  3,                                   /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo yl_emlrtRTEI = { 547,/* lineNo */
  1,                                   /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo am_emlrtRTEI = { 541,/* lineNo */
  13,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo bm_emlrtRTEI = { 503,/* lineNo */
  14,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRTEInfo cm_emlrtRTEI = { 521,/* lineNo */
  10,                                  /* colNo */
  "unibiv",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pName */
};

static emlrtRSInfo bob_emlrtRSI = { 314,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo cob_emlrtRSI = { 321,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

static emlrtRSInfo dob_emlrtRSI = { 302,/* lineNo */
  "unibiv",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\unibiv.m"/* pathName */
};

/* Function Declarations */
static const mxArray *k_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [19]);
static void tiedrankFS(const emlrtStack *sp, const emxArray_real_T *x,
  emxArray_real_T *r);
static const mxArray *u_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [45]);
static const mxArray *v_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [49]);

/* Function Definitions */
static const mxArray *k_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [19])
{
  static const int32_T b_iv[2] = { 1, 19 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 19, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void tiedrankFS(const emlrtStack *sp, const emxArray_real_T *x,
  emxArray_real_T *r)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emlrtStack *b_r;
  emxArray_boolean_T *b_x;
  emxArray_int32_T *ii;
  emxArray_int32_T *rowidx;
  emxArray_real_T *b_ranks;
  emxArray_real_T *ranks;
  emxArray_real_T *tieloc;
  emxArray_real_T *y;
  real_T d;
  real_T ntied;
  real_T xLen;
  int32_T b_iv[2];
  int32_T exitg1;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T n;
  int32_T nz;
  uint32_T tiecount;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &tieloc, 1, &vl_emlrtRTEI, true);

  /*  This function is called just in case of C coder translation */
  /*  tiedrankFS is a simplified version of tiedrank */
  /*  to use with the C coder because tiedrank is not supported */
  /*    tiedrankFS computes the ranks of a sample, adjusting for ties. */
  /*    [R,] = tiedrankFS(x) computes the ranks of the values in the */
  /*    vector x.  If any x values are tied, TIEDRANK computes their average */
  /*    rank. */
  /*  Sort, then leave the NaNs (which are sorted to the end) alone */
  st.site = &kl_emlrtRSI;
  i = tieloc->size[0];
  tieloc->size[0] = x->size[0];
  emxEnsureCapacity_real_T(&st, tieloc, i, &rl_emlrtRTEI);
  loop_ub = x->size[0];
  for (i = 0; i < loop_ub; i++) {
    tieloc->data[i] = x->data[i];
  }

  emxInit_int32_T(&st, &rowidx, 1, &bm_emlrtRTEI, true);
  emxInit_int32_T(&st, &ii, 1, &dm_emlrtRTEI, true);
  b_st.site = &ql_emlrtRSI;
  sort(&b_st, tieloc, ii);
  i = rowidx->size[0];
  rowidx->size[0] = ii->size[0];
  emxEnsureCapacity_int32_T(&st, rowidx, i, &cg_emlrtRTEI);
  loop_ub = ii->size[0];
  for (i = 0; i < loop_ub; i++) {
    rowidx->data[i] = ii->data[i];
  }

  emxInit_boolean_T(&st, &b_x, 1, &sl_emlrtRTEI, true);
  st.site = &ll_emlrtRSI;
  i = b_x->size[0];
  b_x->size[0] = x->size[0];
  emxEnsureCapacity_boolean_T(&st, b_x, i, &sl_emlrtRTEI);
  loop_ub = x->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_x->data[i] = muDoubleScalarIsNaN(x->data[i]);
  }

  b_st.site = &rm_emlrtRSI;
  emxInit_real_T(&b_st, &y, 2, &cm_emlrtRTEI, true);
  c_st.site = &sd_emlrtRSI;
  nz = combineVectorElements(&c_st, b_x);
  xLen = (real_T)x->size[0] - (real_T)nz;

  /*  Use ranks counting from low end */
  if (xLen < 1.0) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = (int32_T)(xLen - 1.0) + 1;
    emxEnsureCapacity_real_T(sp, y, i, &hd_emlrtRTEI);
    loop_ub = (int32_T)(xLen - 1.0);
    for (i = 0; i <= loop_ub; i++) {
      y->data[i] = (real_T)i + 1.0;
    }
  }

  if (nz < 0) {
    emlrtNonNegativeCheckR2012b(nz, &kb_emlrtDCI, (emlrtCTX)sp);
  }

  emxInit_real_T(sp, &ranks, 1, &tl_emlrtRTEI, true);
  i = ranks->size[0];
  ranks->size[0] = y->size[1] + nz;
  emxEnsureCapacity_real_T(sp, ranks, i, &tl_emlrtRTEI);
  loop_ub = y->size[1];
  for (i = 0; i < loop_ub; i++) {
    ranks->data[i] = y->data[i];
  }

  for (i = 0; i < nz; i++) {
    ranks->data[i + y->size[1]] = rtNaN;
  }

  emxFree_real_T(&y);

  /*  Adjust for ties.  Avoid using diff(sx) here in case there are infs. */
  if (1.0 > xLen - 1.0) {
    loop_ub = 0;
  } else {
    if (1 > tieloc->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, tieloc->size[0], &xl_emlrtBCI,
        (emlrtCTX)sp);
    }

    if (((int32_T)(xLen - 1.0) < 1) || ((int32_T)(xLen - 1.0) > tieloc->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)(xLen - 1.0), 1, tieloc->size[0],
        &yl_emlrtBCI, (emlrtCTX)sp);
    }

    loop_ub = (int32_T)(xLen - 1.0);
  }

  b_iv[0] = 1;
  b_iv[1] = loop_ub;
  st.site = &ml_emlrtRSI;
  b_indexShapeCheck(&st, tieloc->size[0], b_iv);
  if (1.0 > xLen - 1.0) {
    i = 0;
  } else {
    if (1 > rowidx->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, rowidx->size[0], &am_emlrtBCI,
        (emlrtCTX)sp);
    }

    if (((int32_T)(xLen - 1.0) < 1) || ((int32_T)(xLen - 1.0) > rowidx->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)(xLen - 1.0), 1, rowidx->size[0],
        &bm_emlrtBCI, (emlrtCTX)sp);
    }

    i = (int32_T)(xLen - 1.0);
  }

  b_iv[0] = 1;
  b_iv[1] = i;
  st.site = &ml_emlrtRSI;
  b_indexShapeCheck(&st, rowidx->size[0], b_iv);
  if (loop_ub != i) {
    emlrtSizeEqCheck1DR2012b(loop_ub, i, &y_emlrtECI, (emlrtCTX)sp);
  }

  if (2.0 > xLen) {
    i = 0;
    nz = 0;
  } else {
    if (2 > tieloc->size[0]) {
      emlrtDynamicBoundsCheckR2012b(2, 1, tieloc->size[0], &cm_emlrtBCI,
        (emlrtCTX)sp);
    }

    i = 1;
    if (((int32_T)xLen < 1) || ((int32_T)xLen > tieloc->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)xLen, 1, tieloc->size[0],
        &dm_emlrtBCI, (emlrtCTX)sp);
    }

    nz = (int32_T)xLen;
  }

  b_iv[0] = 1;
  nz -= i;
  b_iv[1] = nz;
  st.site = &ml_emlrtRSI;
  b_indexShapeCheck(&st, tieloc->size[0], b_iv);
  if (2.0 > xLen) {
    n = -1;
    i1 = -1;
  } else {
    if (2 > rowidx->size[0]) {
      emlrtDynamicBoundsCheckR2012b(2, 1, rowidx->size[0], &em_emlrtBCI,
        (emlrtCTX)sp);
    }

    n = 0;
    if (((int32_T)xLen < 1) || ((int32_T)xLen > rowidx->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)xLen, 1, rowidx->size[0],
        &fm_emlrtBCI, (emlrtCTX)sp);
    }

    i1 = (int32_T)xLen - 1;
  }

  b_iv[0] = 1;
  n = i1 - n;
  b_iv[1] = n;
  st.site = &ml_emlrtRSI;
  b_indexShapeCheck(&st, rowidx->size[0], b_iv);
  if (nz != n) {
    emlrtSizeEqCheck1DR2012b(nz, n, &ab_emlrtECI, (emlrtCTX)sp);
  }

  if (loop_ub != nz) {
    emlrtSizeEqCheck1DR2012b(loop_ub, nz, &y_emlrtECI, (emlrtCTX)sp);
  }

  st.site = &nl_emlrtRSI;
  nz = b_x->size[0];
  b_x->size[0] = loop_ub;
  emxEnsureCapacity_boolean_T(&st, b_x, nz, &ul_emlrtRTEI);
  for (nz = 0; nz < loop_ub; nz++) {
    b_x->data[nz] = (tieloc->data[nz] >= tieloc->data[i + nz]);
  }

  b_st.site = &vb_emlrtRSI;
  c_eml_find(&b_st, b_x, ii);
  i = tieloc->size[0];
  tieloc->size[0] = ii->size[0] + 1;
  emxEnsureCapacity_real_T(sp, tieloc, i, &vl_emlrtRTEI);
  loop_ub = ii->size[0];
  emxFree_boolean_T(&b_x);
  for (i = 0; i < loop_ub; i++) {
    tieloc->data[i] = ii->data[i];
  }

  tieloc->data[ii->size[0]] = xLen + 2.0;
  i = r->size[0];
  r->size[0] = x->size[0];
  emxEnsureCapacity_real_T(sp, r, i, &wl_emlrtRTEI);
  loop_ub = x->size[0];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = 0.0;
  }

  tiecount = 1U;
  emxInit_real_T(sp, &b_ranks, 1, &am_emlrtRTEI, true);
  while (tiecount < (uint32_T)tieloc->size[0]) {
    if (((int32_T)tiecount < 1) || ((int32_T)tiecount > tieloc->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)tiecount, 1, tieloc->size[0],
        &km_emlrtBCI, (emlrtCTX)sp);
    }

    xLen = tieloc->data[(int32_T)tiecount - 1];
    ntied = 2.0;
    do {
      exitg1 = 0;
      if (((int32_T)(tiecount + 1U) < 1) || ((int32_T)(tiecount + 1U) >
           tieloc->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(tiecount + 1U), 1, tieloc->size
          [0], &mm_emlrtBCI, (emlrtCTX)sp);
      }

      if (((int32_T)tiecount < 1) || ((int32_T)tiecount > tieloc->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)tiecount, 1, tieloc->size[0],
          &nm_emlrtBCI, (emlrtCTX)sp);
      }

      if (tieloc->data[(int32_T)tiecount] == tieloc->data[(int32_T)tiecount - 1]
          + 1.0) {
        tiecount++;
        ntied++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtCTX)sp);
        }
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    /*  Compute mean of tied ranks */
    d = (xLen + ntied) - 1.0;
    if (xLen > d) {
      i = 0;
      nz = 0;
    } else {
      if (((int32_T)xLen < 1) || ((int32_T)xLen > ranks->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)xLen, 1, ranks->size[0],
          &gm_emlrtBCI, (emlrtCTX)sp);
      }

      i = (int32_T)xLen - 1;
      if (((int32_T)d < 1) || ((int32_T)d > ranks->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, ranks->size[0],
          &hm_emlrtBCI, (emlrtCTX)sp);
      }

      nz = (int32_T)d;
    }

    b_iv[0] = 1;
    loop_ub = nz - i;
    b_iv[1] = loop_ub;
    st.site = &ol_emlrtRSI;
    b_indexShapeCheck(&st, ranks->size[0], b_iv);
    if (xLen > d) {
      nz = -1;
      n = 0;
    } else {
      if (((int32_T)xLen < 1) || ((int32_T)xLen > ranks->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)xLen, 1, ranks->size[0],
          &im_emlrtBCI, (emlrtCTX)sp);
      }

      nz = (int32_T)xLen - 2;
      if (((int32_T)d < 1) || ((int32_T)d > ranks->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, ranks->size[0],
          &jm_emlrtBCI, (emlrtCTX)sp);
      }

      n = (int32_T)d;
    }

    i1 = b_ranks->size[0];
    b_ranks->size[0] = loop_ub;
    emxEnsureCapacity_real_T(sp, b_ranks, i1, &am_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_ranks->data[i1] = ranks->data[i + i1];
    }

    st.site = &ol_emlrtRSI;
    b_r = &st;
    d = sum(b_r, b_ranks);
    loop_ub = (n - nz) - 1;
    for (i = 0; i < loop_ub; i++) {
      ranks->data[(nz + i) + 1] = d / ntied;
    }

    tiecount++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  emxFree_real_T(&b_ranks);
  emxFree_real_T(&tieloc);

  /*  Broadcast the ranks back out, including NaN where required. */
  i = ii->size[0];
  ii->size[0] = rowidx->size[0];
  emxEnsureCapacity_int32_T(sp, ii, i, &xl_emlrtRTEI);
  loop_ub = rowidx->size[0];
  for (i = 0; i < loop_ub; i++) {
    if ((rowidx->data[i] < 1) || (rowidx->data[i] > x->size[0])) {
      emlrtDynamicBoundsCheckR2012b(rowidx->data[i], 1, x->size[0], &lm_emlrtBCI,
        (emlrtCTX)sp);
    }

    ii->data[i] = rowidx->data[i];
  }

  emxFree_int32_T(&rowidx);
  if (ii->size[0] != ranks->size[0]) {
    emlrtSubAssignSizeCheck1dR2017a(ii->size[0], ranks->size[0], &bb_emlrtECI,
      (emlrtCTX)sp);
  }

  loop_ub = ranks->size[0];
  for (i = 0; i < loop_ub; i++) {
    r->data[ii->data[i] - 1] = ranks->data[i];
  }

  emxFree_int32_T(&ii);
  emxFree_real_T(&ranks);
  st.site = &pl_emlrtRSI;
  nz = r->size[0];
  b_st.site = &vm_emlrtRSI;
  n = r->size[0];
  if (1 > r->size[0]) {
    n = 1;
  }

  if (x->size[0] > muIntScalarMax_sint32(nz, n)) {
    emlrtErrorWithMessageIdR2018a(&st, &ub_emlrtRTEI,
      "Coder:toolbox:reshape_emptyReshapeLimit",
      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }

  if (x->size[0] != r->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &tb_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  i = r->size[0];
  r->size[0] = x->size[0];
  emxEnsureCapacity_real_T(sp, r, i, &yl_emlrtRTEI);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

static const mxArray *u_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [45])
{
  static const int32_T b_iv[2] = { 1, 45 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 45, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *v_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [49])
{
  static const int32_T b_iv[2] = { 1, 49 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 49, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

void unibiv(FSR_wrapperStackData *SD, const emlrtStack *sp, const
            emxArray_real_T *Y, emxArray_real_T *fre)
{
  static const real_T b_b[3601] = { 1.0, 0.99999847691328769,
    0.99999390765779039, 0.99998629224742674, 0.99997563070539475,
    0.99996192306417131, 0.99994516936551214, 0.999925369660452,
    0.99990252400930424, 0.99987663248166059, 0.99984769515639127,
    0.99981571212164422, 0.9997806834748455, 0.99974260932269832,
    0.99970148978118312, 0.99965732497555726, 0.99961011504035435,
    0.999559860119384, 0.9995065603657316, 0.9994502159417572,
    0.99939082701909576, 0.99932839377865623, 0.99926291641062115,
    0.999194395114446, 0.99912283009885838, 0.9990482215818578,
    0.99897056979071475, 0.99888987496197, 0.99880613734143409,
    0.99871935718418625, 0.99862953475457383, 0.99853667032621174,
    0.998440764181981, 0.99834181661402832, 0.99823982792376531,
    0.99813479842186692, 0.99802672842827156, 0.997915618272179,
    0.99780146829205, 0.99768427883560529, 0.9975640502598242, 0.997440782930944,
    0.9973144772244581, 0.99718513352511573, 0.99705275222692025,
    0.996917333733128, 0.99677887845624713, 0.9966373868180366,
    0.99649285924950437, 0.99634529619090639, 0.99619469809174555,
    0.99604106541076953, 0.99588439861597033, 0.99572469818458209,
    0.99556196460308, 0.99539619836717885, 0.99522739998183118,
    0.99505556996122635, 0.99488070882878821, 0.99470281711717423,
    0.99452189536827329, 0.99433794413320464, 0.99415096397231539,
    0.99396095545517971, 0.99376791916059637, 0.99357185567658746,
    0.99337276560039645, 0.99317064953848611, 0.99296550810653694,
    0.99275734192944554, 0.992546151641322, 0.99233193788548868,
    0.99211470131447788, 0.99189444259002968, 0.99167116238309039,
    0.99144486137381038, 0.99121554025154168, 0.99098319971483628,
    0.9907478404714436, 0.9905094632383088, 0.99026806874157036,
    0.99002365771655754, 0.989776230907789, 0.98952578906896949,
    0.98927233296298833, 0.98901586336191682, 0.98875638104700581,
    0.98849388680868355, 0.98822838144655278, 0.9879598657693891,
    0.98768834059513777, 0.98741380675091139, 0.98713626507298791,
    0.98685571640680725, 0.98657216160696937, 0.98628560153723144,
    0.985996037070505, 0.98570346908885353, 0.98540789848349009,
    0.98510932615477387, 0.984807753012208, 0.98450317997443659,
    0.98419560796924188, 0.98388503793354165, 0.98357147081338592,
    0.98325490756395462, 0.98293534914955427, 0.98261279654361522,
    0.98228725072868872, 0.98195871269644364, 0.981627183447664,
    0.98129266399224513, 0.98095515534919153, 0.980614658546613,
    0.98027117462172186, 0.97992470462082959, 0.97957524959934406,
    0.97922281062176575, 0.978867388761685, 0.97850898510177842,
    0.97814760073380569, 0.97778323675860612, 0.97741589428609588,
    0.97704557443526363, 0.97667227833416792, 0.97629600711993336,
    0.97591676193874743, 0.97553454394585659, 0.97514935430556327,
    0.97476119419122176, 0.97437006478523525, 0.97397596727905156,
    0.97357890287316029, 0.97317887277708826, 0.97277587820939659,
    0.97236992039767656, 0.97196100057854629, 0.97154911999764615,
    0.97113427990963608, 0.97071648157819079, 0.97029572627599647,
    0.96987201528474676, 0.96944534989513886, 0.96901573140686947,
    0.96858316112863108, 0.96814764037810774, 0.96770917048197125,
    0.96726775277587684, 0.96682338860445938, 0.9663760793213293,
    0.96592582628906831, 0.96547263087922508, 0.96501649447231141,
    0.96455741845779808, 0.96409540423411011, 0.963630453208623,
    0.96316256679765822, 0.96269174642647881, 0.96221799352928539,
    0.96174130954921133, 0.96126169593831889, 0.96077915415759407,
    0.96029368567694307, 0.95980529197518694, 0.95931397454005751,
    0.958819734868193, 0.95832257446513325, 0.9578224948453149,
    0.95731949753206724, 0.95681358405760741, 0.95630475596303544,
    0.95579301479833012, 0.95527836212234363, 0.95476079950279746,
    0.95424032851627683, 0.95371695074822693, 0.953190667792947,
    0.9526614812535863, 0.9521293927421387, 0.95159440387943817,
    0.95105651629515353, 0.95051573162778369, 0.94997205152465247,
    0.94942547764190388, 0.94887601164449653, 0.94832365520619932,
    0.94776841000958567, 0.94721027774602884, 0.94664926011569639,
    0.9460853588275453, 0.94551857559931685, 0.94494891215753085,
    0.944376370237481, 0.94380095158322941, 0.943222657947601,
    0.94264149109217843, 0.94205745278729669, 0.941470544812038,
    0.94088076895422545, 0.94028812701041886, 0.93969262078590843,
    0.93909425209470909, 0.93849302275955593, 0.9378889346118976,
    0.93728198949189157, 0.93667218924839757, 0.93605953573897327,
    0.93544403082986727, 0.93482567639601444, 0.93420447432102949,
    0.93358042649720174, 0.932953534825489, 0.93232380121551217,
    0.9316912275855489, 0.93105581586252828, 0.93041756798202457,
    0.92977648588825135, 0.92913257153405615, 0.92848582688091352,
    0.92783625389892, 0.92718385456678742, 0.92652863087183734,
    0.92587058480999473, 0.92520971838578214, 0.92454603361231313,
    0.92387953251128674, 0.9232102171129809, 0.92253808945624638,
    0.92186315158850052, 0.92118540556572126, 0.92050485345244037,
    0.91982149732173768, 0.91913533925523438, 0.9184463813430872,
    0.91775462568398114, 0.917060074385124, 0.91636272956223963,
    0.915662593339561, 0.91495966784982474, 0.91425395523426367,
    0.91354545764260087, 0.91283417723304283, 0.912120116172273,
    0.91140327663544529, 0.91068366080617713, 0.90996127087654322,
    0.90923610904706853, 0.90850817752672186, 0.90777747853290869,
    0.907044014291465, 0.90630778703664994, 0.90556879901113962,
    0.90482705246601958, 0.90408254966077839, 0.90333529286330083,
    0.90258528434986063, 0.9018325264051138, 0.90107702132209155,
    0.90031877140219352, 0.8995577789551803, 0.898794046299167,
    0.89802757576061565, 0.89725836967432837, 0.89648643038344056,
    0.8957117602394129, 0.894934361602025, 0.89415423683936812,
    0.89337138832783758, 0.89258581845212548, 0.89179752960521408,
    0.8910065241883679, 0.89021280461112651, 0.88941637329129752,
    0.88861723265494885, 0.88781538513640135, 0.88701083317822171,
    0.88620357923121473, 0.88539362575441583, 0.88458097521508394,
    0.88376563008869347, 0.882947592858927, 0.88212686601766777,
    0.88130345206499217, 0.880477353509162, 0.87964857286661646,
    0.87881711266196538, 0.87798297542798054, 0.87714616370558873,
    0.87630668004386358, 0.87546452700001787, 0.87461970713939574,
    0.8737722230354652, 0.87292207726980964, 0.87206927243212062,
    0.87121381112018936, 0.8703556959398997, 0.869494929505219,
    0.8686315144381912, 0.86776545336892841, 0.86689674893560276,
    0.8660254037844386, 0.86515142056970451, 0.86427480195370465,
    0.86339555060677164, 0.86251366920725747, 0.86162916044152582,
    0.86074202700394364, 0.8598522715968735, 0.85895989693066443,
    0.85806490572364458, 0.85716730070211233, 0.85626708460032819,
    0.85536426016050671, 0.85445883013280743, 0.85355079727532746,
    0.85264016435409229, 0.85172693414304768, 0.85081110942405125,
    0.849892692986864, 0.84897168762914155, 0.848048096156426,
    0.84712192138213716, 0.846193166127564, 0.84526183322185611,
    0.84432792550201508, 0.84339144581288572, 0.84245239700714758,
    0.84151078194530615, 0.84056660349568424, 0.83961986453441317,
    0.838670567945424, 0.83771871662043884, 0.83676431345896163,
    0.83580736136827027, 0.83484786326340654, 0.83388582206716821,
    0.83292124071009943, 0.83195412213048259, 0.83098446927432823,
    0.8300122850953674, 0.82903757255504162, 0.8280603346224944,
    0.82708057427456183, 0.82609829449576389, 0.82511349827829517,
    0.82412618862201559, 0.82313636853444183, 0.82214404103073746,
    0.821149209133704, 0.82015187587377214, 0.8191520442889918,
    0.8181497174250234, 0.81714489833512849, 0.81613759008016029,
    0.81512779572855421, 0.81411551835631923, 0.81310076104702766,
    0.8120835268918063, 0.81106381898932667, 0.81004164044579607,
    0.80901699437494745, 0.8079898838980305, 0.80696031214380193,
    0.80592828224851576, 0.80489379735591415, 0.80385686061721739,
    0.80281747519111457, 0.801775644243754, 0.80073137094873348,
    0.79968465848709058, 0.79863551004729283, 0.79758392882522855,
    0.79652991802419626, 0.79547348085489589, 0.79441462053541811,
    0.79335334029123517, 0.7922896433551907, 0.79122353296749,
    0.79015501237569041, 0.78908408483469061, 0.7880107536067219,
    0.78693502196133736, 0.78585689317540186, 0.78477637053308291,
    0.78369345732583984, 0.78260815685241392, 0.78152047241881872,
    0.78043040733832969, 0.77933796493147411, 0.778243148526021,
    0.77714596145697079, 0.77604640706654593, 0.77494448870417953,
    0.77384020972650613, 0.772733573497351, 0.77162458338771989,
    0.77051324277578925, 0.76939955504689506, 0.76828352359352337,
    0.76716515181529965, 0.766044443118978, 0.76492140091843186,
    0.76379602863464224, 0.76266832969568832, 0.76153830753673679,
    0.76040596560003093, 0.7592713073348808, 0.75813433619765225,
    0.7569950556517564, 0.75585346916763951, 0.754709580222772,
    0.75356339230163794, 0.75241490889572438, 0.75126413350351118,
    0.75011106963045948, 0.74895572078900208, 0.74779809049853185,
    0.74663818228539136, 0.74547599968286216, 0.744311546231154,
    0.74314482547739424, 0.74197584097561631, 0.74080459628675011,
    0.73963109497860968, 0.7384553406258838, 0.73727733681012408,
    0.73609708711973432, 0.73491459514995983, 0.73372986450287636,
    0.73254289878737877, 0.73135370161917046, 0.73016227662075228,
    0.72896862742141155, 0.72777275765721039, 0.72657467097097583,
    0.72537437101228752, 0.72417186143746748, 0.72296714590956812,
    0.72176022809836216, 0.72055111168033037, 0.71933980033865108,
    0.71812629776318881, 0.71691060765048276, 0.71569273370373587,
    0.71447267963280336, 0.71325044915418156, 0.7120260459909965,
    0.71079947387299247, 0.70957073653652092, 0.70833983772452891,
    0.70710678118654757, 0.705871570678681, 0.70463420996359472,
    0.70339470281050387, 0.7021530529951624, 0.7009092642998509,
    0.69966334051336543, 0.69841528543100584, 0.69716510285456457,
    0.69591279659231431, 0.69465837045899725, 0.693401828275813,
    0.6921431738704068, 0.69088241107685833, 0.6896195437356698,
    0.68835457569375391, 0.687087510804423, 0.68581835292737625,
    0.68454710592868873, 0.68327377368079911, 0.68199836006249848,
    0.68072086895891781, 0.6794413042615165, 0.67815966986807064,
    0.67687596968266073, 0.67559020761566024, 0.67430238758372341,
    0.67301251350977331, 0.67172058932299017, 0.67042661895879907,
    0.66913060635885824, 0.66783255547104659, 0.66653247024945239,
    0.66523035465436076, 0.66392621265224161, 0.66262004821573739,
    0.66131186532365183, 0.66000166796093673, 0.65868946011868046,
    0.65737524579409579, 0.65605902899050728, 0.65474081371733972,
    0.65342060399010549, 0.65209840383039219, 0.65077421726585094,
    0.64944804833018366, 0.64811990106313089, 0.64678977951045957,
    0.64545768772395062, 0.64412362976138648, 0.64278760968653936,
    0.64144963156915791, 0.64010969948495544, 0.63876781751559775,
    0.63742398974868975, 0.636078220277764, 0.63473051320226759,
    0.63338087262755016, 0.63202930266485091, 0.63067580743128626,
    0.6293203910498375, 0.62796305764933791, 0.62660381136446053,
    0.62524265633570519, 0.6238795967093862, 0.62251463663761952,
    0.6211477802783103, 0.61977903179514016, 0.6184083953575541,
    0.61703587514074865, 0.61566147532565829, 0.61428520009894316,
    0.61290705365297649, 0.61152704018583115, 0.61014516390126761,
    0.60876142900872066, 0.60737583972328668, 0.605988400265711,
    0.60459911486237483, 0.60320798774528239, 0.60181502315204827,
    0.600420225325884, 0.59902359851558584, 0.597625146975521,
    0.59622487496561571, 0.59482278675134126, 0.59341888660370146,
    0.59201317879921955, 0.59060566761992539, 0.58919635735334208,
    0.58778525229247314, 0.58637235673578936, 0.5849576749872154,
    0.58354121135611758, 0.58212297015728942, 0.58070295571093977,
    0.57928117234267884, 0.57785762438350541, 0.57643231616979329,
    0.57500525204327857, 0.573576436351046, 0.57214587344551626,
    0.57071356768443171, 0.5692795234308442, 0.56784374505310131,
    0.56640623692483283, 0.56496700342493789, 0.56352604893757141,
    0.56208337785213058, 0.56063899456324173, 0.55919290347074679,
    0.5577451089796901, 0.55629561550030482, 0.55484442744799922,
    0.55339154924334411, 0.55193698531205815, 0.55048074008499559,
    0.54902281799813168, 0.54756322349255027, 0.546101961014429,
    0.54463903501502708, 0.54317444995067066, 0.54170821028273985,
    0.54024032047765513, 0.538770785006863, 0.53729960834682389,
    0.53582679497899655, 0.53435234938982634, 0.53287627607073,
    0.53139857951808289, 0.5299192642332049, 0.52843833472234714,
    0.52695579549667748, 0.52547165107226779, 0.5239859059700791,
    0.52249856471594891, 0.52100963184057625, 0.51951911187950939,
    0.51802700937313018, 0.51653332886664194, 0.51503807491005416,
    0.51354125205817014, 0.51204286487057149, 0.51054291791160578,
    0.50904141575037121, 0.5075383629607042, 0.50603376412116374,
    0.50452762381501925, 0.503019946630235, 0.50151073715945738,
    0.49999999999999989, 0.49848773975383032, 0.49697396102755526,
    0.49545866843240755, 0.49394186658423089, 0.49242356010346711,
    0.49090375361514094, 0.48938245174884626, 0.48785965913873275,
    0.4863353804234905, 0.48480962024633711, 0.48328238325500233,
    0.48175367410171538, 0.48022349744318887, 0.47869185794060687,
    0.47715876025960841, 0.47562420907027531, 0.47408820904711624,
    0.47255076486905406, 0.47101188121940996, 0.46947156278589086,
    0.46792981426057334, 0.46638664033989125, 0.46484204572461957,
    0.46329603511986178, 0.46174861323503391, 0.46019978478385171,
    0.45864955448431488, 0.45709792705869423, 0.45554490723351548,
    0.45399049973954686, 0.45243470931178265, 0.45087754068943081,
    0.44931899861589653, 0.44775908783876972, 0.44619781310980872,
    0.44463517918492751, 0.44307119082417962, 0.44150585279174526,
    0.43993916985591508, 0.43837114678907746, 0.43680178836770217,
    0.43523109937232751, 0.43365908458754421, 0.43208574880198231,
    0.430511096808295, 0.42893513340314587, 0.42735786338719228,
    0.42577929156507266, 0.42419942274539008, 0.42261826174069944,
    0.42103581336749091, 0.4194520824461771, 0.41786707380107685,
    0.41628079226040116, 0.41469324265623914, 0.41310442982454176,
    0.41151435860510888, 0.40992303384157275, 0.408330460381385,
    0.40673664307580021, 0.40514158677986262, 0.40354529635239,
    0.40194777665596021, 0.40034903255689491, 0.39874906892524625,
    0.39714789063478056, 0.395545502562965, 0.3939419095909511,
    0.39233711660356152, 0.39073112848927372, 0.38912395014020629,
    0.38751558645210293, 0.38590604232431869, 0.38429532265980371,
    0.38268343236508984, 0.381070376350274, 0.37945615952900513,
    0.37784078681846706, 0.37622426313936563, 0.37460659341591196,
    0.37298778257580895, 0.37136783555023473, 0.36974675727382933,
    0.36812455268467786, 0.3665012267242973, 0.36487678433761961,
    0.36325123047297836, 0.3616245700820922, 0.35999680812005125,
    0.35836794954530016, 0.35673799931962519, 0.35510696240813694,
    0.35347484377925714, 0.35184164840470172, 0.35020738125946743,
    0.34857204732181513, 0.34693565157325584, 0.34529819899853453,
    0.34365969458561607, 0.34202014332566882, 0.34037955021305011,
    0.33873792024529148, 0.33709525842308208, 0.33545156975025509,
    0.3338068592337709, 0.33216113188370339, 0.330514392713223,
    0.32886664673858329, 0.32721789897910386, 0.32556815445715676,
    0.3239174181981494, 0.32226569523051113, 0.32061299058567622,
    0.31895930929807004, 0.31730465640509209, 0.3156490369471025,
    0.31399245596740488, 0.31233491851223261, 0.31067642963073172,
    0.30901699437494745, 0.307356617799807, 0.30569530496310571,
    0.30403306092549021, 0.30236989075044451, 0.30070579950427306,
    0.29904079225608671, 0.2973748740777859, 0.29570805004404671,
    0.29404032523230389, 0.29237170472273677, 0.29070219359825239,
    0.28903179694447162, 0.28736051984971189, 0.28568836740497355,
    0.28401534470392253, 0.28234145684287648, 0.28066670892078771,
    0.27899110603922928, 0.2773146533023777, 0.27563735581699916,
    0.27395921869243234, 0.27228024704057435, 0.27060044597586352,
    0.2689198206152657, 0.26723837607825696, 0.2655561174868088,
    0.263873049965373, 0.26218917864086472, 0.26050450864264846,
    0.25881904510252074, 0.25713279315469628, 0.2554457579357905,
    0.25375794458480572, 0.25206935824311361, 0.2503800040544415,
    0.24868988716485474, 0.246999012722743, 0.24530738587880255,
    0.24361501178602257, 0.24192189559966767, 0.24022804247726379,
    0.23853345757858083, 0.23683814606561876, 0.23514211310258998,
    0.23344536385590547, 0.23174790349415728, 0.23004973718810445,
    0.22835087011065569, 0.2266513074368551, 0.22495105434386492,
    0.2232501160109514, 0.22154849761946724, 0.21984620435283755,
    0.21814324139654248, 0.2164396139381029, 0.21473532716706312,
    0.21303038627497661, 0.21132479645538857, 0.20961856290382183,
    0.20791169081775923, 0.20620418539662966, 0.20449605184179023,
    0.20278729535651249, 0.20107792114596457, 0.19936793441719719,
    0.19765734037912605, 0.19594614424251769, 0.19423435121997187,
    0.19252196652590745, 0.19080899537654469, 0.18909544298989128,
    0.18738131458572474, 0.18566661538557719, 0.18395135061272025,
    0.18223552549214744, 0.18051914525056006, 0.17880221511634958,
    0.17708474031958338, 0.17536672609198709, 0.17364817766693041,
    0.17192910027940952, 0.17020949916603262, 0.16848937956500257,
    0.16676874671610234, 0.1650476058606776, 0.16332596224162232,
    0.16160382110336111, 0.15988118769183493, 0.1581580672544835,
    0.15643446504023092, 0.15471038629946804, 0.15298583628403811,
    0.15126082024721915, 0.14953534344370958, 0.14780941112961055,
    0.14608302856241165, 0.14435620100097316, 0.14262893370551169,
    0.14090123193758258, 0.13917310096006547, 0.13744454603714659,
    0.1357155724343044, 0.13398618541829196, 0.13225639025712246,
    0.13052619222005149, 0.12879559657756282, 0.12706460860135038,
    0.12533323356430426, 0.12360147674049261, 0.12186934340514749,
    0.120136838834647, 0.11840396830650095, 0.11667073709933305,
    0.11493715049286661, 0.11320321376790661, 0.11146893220632546,
    0.10973431109104514, 0.10799935570602284, 0.10626407133623331,
    0.10452846326765346, 0.10279253678724691, 0.10105629718294633,
    0.0993197497436391, 0.097582899759149452, 0.095845752520224078,
    0.094108313318514283, 0.092370587446561653, 0.090632580197780116,
    0.0888942968664416, 0.087155742747658138, 0.08541692313736754,
    0.083677843332315441, 0.081938508630040985, 0.080198924328858875,
    0.078459095727845, 0.076719028126818592, 0.074978726826327752,
    0.073238197127631632, 0.071497444332685969, 0.069756473744125233,
    0.06801529066524821, 0.066273900400000071, 0.064532308252958012,
    0.0627905195293133, 0.061048539534856908, 0.059306373575961545,
    0.057564026959567312, 0.055821504993163719, 0.054078812984775314,
    0.052335956242943744, 0.050592940076713333, 0.048849769795613167,
    0.047106450709642679, 0.045362988129253684, 0.043619387365336007,
    0.041875653729199526, 0.040131792532559739, 0.038387809087519834,
    0.036643708706556276, 0.034899496702500858, 0.033155178388526274,
    0.031410759078128174, 0.02966624408511075, 0.027921638723568759,
    0.026176948307873139, 0.024432178152653247, 0.02268733357278134,
    0.020942419883357051, 0.019197442399689641, 0.0174524064372836,
    0.015707317311820648, 0.013962180339145352, 0.012217000835247136,
    0.010471784116245868, 0.0087265354983738965, 0.0069812602979616237,
    0.0052359638314195371, 0.0034906514152237985, 0.0017453283658982615,
    6.123233995736766E-17, -0.0017453283658983611, -0.0034906514152236758,
    -0.0052359638314196369, -0.0069812602979615005, -0.0087265354983739971,
    -0.010471784116245747, -0.012217000835247235, -0.01396218033914523,
    -0.015707317311820748, -0.017452406437283477, -0.019197442399689742,
    -0.020942419883356926, -0.022687333572781437, -0.024432178152653125,
    -0.026176948307873239, -0.027921638723568856, -0.029666244085110847,
    -0.031410759078128278, -0.033155178388526378, -0.034899496702500955,
    -0.036643708706556373, -0.038387809087519931, -0.040131792532559836,
    -0.041875653729199623, -0.043619387365336111, -0.045362988129253781,
    -0.047106450709642776, -0.048849769795613271, -0.050592940076713437,
    -0.052335956242943842, -0.054078812984775196, -0.055821504993163816,
    -0.057564026959567194, -0.059306373575961649, -0.061048539534856783,
    -0.0627905195293134, -0.064532308252957887, -0.066273900400000169,
    -0.068015290665248085, -0.06975647374412533, -0.071497444332685844,
    -0.07323819712763173, -0.074978726826327627, -0.076719028126818689,
    -0.078459095727844874, -0.080198924328858973, -0.081938508630040874,
    -0.083677843332315552, -0.085416923137367415, -0.087155742747658235,
    -0.088894296866441472, -0.090632580197780213, -0.092370587446561542,
    -0.094108313318514381, -0.095845752520223954, -0.09758289975914955,
    -0.099319749743638983, -0.10105629718294643, -0.10279253678724679,
    -0.10452846326765355, -0.10626407133623318, -0.10799935570602294,
    -0.10973431109104524, -0.11146893220632556, -0.11320321376790671,
    -0.11493715049286671, -0.11667073709933316, -0.11840396830650105,
    -0.1201368388346471, -0.12186934340514759, -0.12360147674049271,
    -0.12533323356430437, -0.12706460860135049, -0.1287955965775629,
    -0.1305261922200516, -0.13225639025712257, -0.13398618541829208,
    -0.13571557243430429, -0.13744454603714668, -0.13917310096006535,
    -0.14090123193758269, -0.14262893370551158, -0.14435620100097324,
    -0.14608302856241154, -0.14780941112961066, -0.14953534344370945,
    -0.15126082024721924, -0.152985836284038, -0.15471038629946815,
    -0.15643446504023081, -0.15815806725448359, -0.15988118769183479,
    -0.16160382110336119, -0.16332596224162221, -0.16504760586067771,
    -0.16676874671610223, -0.16848937956500265, -0.17020949916603251,
    -0.17192910027940961, -0.1736481776669303, -0.17536672609198717,
    -0.17708474031958327, -0.17880221511634969, -0.18051914525055995,
    -0.18223552549214753, -0.18395135061272014, -0.1856666153855773,
    -0.1873813145857246, -0.18909544298989139, -0.1908089953765448,
    -0.19252196652590753, -0.19423435121997196, -0.1959461442425178,
    -0.19765734037912613, -0.19936793441719727, -0.20107792114596465,
    -0.2027872953565126, -0.20449605184179034, -0.20620418539662974,
    -0.20791169081775934, -0.20961856290382191, -0.21132479645538865,
    -0.2130303862749767, -0.2147353271670632, -0.21643961393810279,
    -0.21814324139654256, -0.21984620435283744, -0.22154849761946732,
    -0.22325011601095129, -0.22495105434386503, -0.22665130743685497,
    -0.22835087011065577, -0.23004973718810434, -0.23174790349415736,
    -0.23344536385590534, -0.23514211310259006, -0.23683814606561862,
    -0.23853345757858094, -0.24022804247726368, -0.24192189559966779,
    -0.24361501178602246, -0.24530738587880263, -0.24699901272274286,
    -0.24868988716485485, -0.25038000405444139, -0.25206935824311372,
    -0.25375794458480561, -0.25544575793579061, -0.25713279315469617,
    -0.25881904510252085, -0.26050450864264829, -0.26218917864086477,
    -0.26387304996537286, -0.26555611748680891, -0.26723837607825685,
    -0.26891982061526581, -0.27060044597586363, -0.27228024704057441,
    -0.27395921869243245, -0.27563735581699927, -0.27731465330237776,
    -0.27899110603922933, -0.28066670892078777, -0.28234145684287654,
    -0.28401534470392265, -0.28568836740497366, -0.287360519849712,
    -0.28903179694447173, -0.2907021935982525, -0.29237170472273682,
    -0.29404032523230395, -0.2957080500440466, -0.29737487407778596,
    -0.2990407922560866, -0.30070579950427312, -0.3023698907504444,
    -0.30403306092549032, -0.3056953049631056, -0.30735661779980711,
    -0.30901699437494734, -0.31067642963073183, -0.3123349185122325,
    -0.313992455967405, -0.31564903694710239, -0.3173046564050922,
    -0.31895930929806993, -0.32061299058567633, -0.322265695230511,
    -0.32391741819814945, -0.32556815445715664, -0.32721789897910397,
    -0.32886664673858318, -0.33051439271322308, -0.33216113188370328,
    -0.333806859233771, -0.335451569750255, -0.33709525842308213,
    -0.33873792024529137, -0.34037955021305022, -0.34202014332566871,
    -0.34365969458561613, -0.34529819899853464, -0.34693565157325595,
    -0.34857204732181518, -0.35020738125946754, -0.35184164840470178,
    -0.3534748437792572, -0.35510696240813705, -0.3567379993196253,
    -0.35836794954530027, -0.3599968081200513, -0.36162457008209231,
    -0.36325123047297847, -0.36487678433761966, -0.36650122672429741,
    -0.368124552684678, -0.36974675727382944, -0.37136783555023484,
    -0.37298778257580883, -0.37460659341591207, -0.37622426313936552,
    -0.37784078681846717, -0.379456159529005, -0.38107037635027413,
    -0.38268343236508973, -0.38429532265980376, -0.38590604232431858,
    -0.387515586452103, -0.38912395014020618, -0.39073112848927377,
    -0.39233711660356141, -0.39394190959095116, -0.39554550256296489,
    -0.39714789063478068, -0.39874906892524614, -0.400349032556895,
    -0.4019477766559601, -0.40354529635239011, -0.40514158677986251,
    -0.40673664307580026, -0.40833046038138487, -0.4099230338415728,
    -0.41151435860510877, -0.41310442982454182, -0.414693242656239,
    -0.41628079226040104, -0.41786707380107696, -0.41945208244617721,
    -0.421035813367491, -0.42261826174069933, -0.42419942274539035,
    -0.42577929156507272, -0.42735786338719239, -0.42893513340314582,
    -0.43051109680829536, -0.43208574880198242, -0.43365908458754432,
    -0.4352310993723274, -0.43680178836770245, -0.43837114678907751,
    -0.43993916985591514, -0.44150585279174515, -0.44307119082417989,
    -0.44463517918492762, -0.44619781310980883, -0.44775908783876961,
    -0.44931899861589641, -0.45087754068943087, -0.45243470931178276,
    -0.45399049973954675, -0.45554490723351537, -0.45709792705869429,
    -0.458649554484315, -0.4601997847838516, -0.4617486132350338,
    -0.46329603511986189, -0.46484204572461968, -0.46638664033989113,
    -0.46792981426057323, -0.46947156278589092, -0.47101188121941007,
    -0.47255076486905395, -0.47408820904711613, -0.47562420907027536,
    -0.47715876025960846, -0.47869185794060676, -0.48022349744318882,
    -0.48175367410171543, -0.48328238325500245, -0.484809620246337,
    -0.48633538042349039, -0.48785965913873286, -0.48938245174884631,
    -0.49090375361514083, -0.492423560103467, -0.49394186658423117,
    -0.4954586684324076, -0.49697396102755531, -0.49848773975383021,
    -0.50000000000000022, -0.50151073715945749, -0.50301994663023508,
    -0.50452762381501914, -0.506033764121164, -0.50753836296070431,
    -0.50904141575037132, -0.51054291791160566, -0.51204286487057171,
    -0.51354125205817025, -0.51503807491005427, -0.51653332886664183,
    -0.51802700937313007, -0.5195191118795095, -0.52100963184057636,
    -0.5224985647159488, -0.523985905970079, -0.5254716510722679,
    -0.52695579549667759, -0.52843833472234714, -0.52991926423320479,
    -0.531398579518083, -0.53287627607073007, -0.53435234938982634,
    -0.53582679497899643, -0.537299608346824, -0.53877078500686315,
    -0.540240320477655, -0.54170821028273974, -0.54317444995067077,
    -0.54463903501502708, -0.546101961014429, -0.54756322349255016,
    -0.54902281799813191, -0.55048074008499559, -0.55193698531205815,
    -0.553391549243344, -0.55484442744799944, -0.55629561550030482,
    -0.5577451089796901, -0.55919290347074668, -0.560638994563242,
    -0.56208337785213069, -0.56352604893757141, -0.56496700342493789,
    -0.566406236924833, -0.56784374505310131, -0.5692795234308442,
    -0.5707135676844316, -0.57214587344551637, -0.57357643635104616,
    -0.57500525204327857, -0.57643231616979318, -0.57785762438350552,
    -0.579281172342679, -0.58070295571093977, -0.58212297015728931,
    -0.58354121135611736, -0.58495767498721551, -0.58637235673578925,
    -0.587785252292473, -0.58919635735334186, -0.5906056676199255,
    -0.59201317879921955, -0.59341888660370135, -0.59482278675134115,
    -0.59622487496561594, -0.59762514697552116, -0.59902359851558584,
    -0.60042022532588391, -0.60181502315204838, -0.6032079877452825,
    -0.60459911486237483, -0.60598840026571088, -0.60737583972328679,
    -0.60876142900872066, -0.61014516390126761, -0.611527040185831,
    -0.6129070536529766, -0.61428520009894327, -0.61566147532565829,
    -0.61703587514074854, -0.61840839535755432, -0.61977903179514016,
    -0.6211477802783103, -0.62251463663761941, -0.62387959670938631,
    -0.62524265633570519, -0.62660381136446053, -0.6279630576493378,
    -0.62932039104983761, -0.63067580743128626, -0.63202930266485091,
    -0.63338087262755, -0.63473051320226781, -0.63607822027776406,
    -0.63742398974868975, -0.63876781751559764, -0.64010969948495566,
    -0.64144963156915791, -0.64278760968653936, -0.64412362976138648,
    -0.64545768772395073, -0.64678977951045968, -0.64811990106313089,
    -0.64944804833018355, -0.65077421726585083, -0.6520984038303923,
    -0.65342060399010549, -0.65474081371733972, -0.65605902899050716,
    -0.6573752457940959, -0.65868946011868057, -0.66000166796093673,
    -0.66131186532365172, -0.66262004821573761, -0.66392621265224161,
    -0.66523035465436076, -0.66653247024945239, -0.66783255547104681,
    -0.66913060635885824, -0.67042661895879907, -0.67172058932299006,
    -0.67301251350977342, -0.67430238758372341, -0.67559020761566024,
    -0.67687596968266062, -0.67815966986807075, -0.67944130426151661,
    -0.68072086895891781, -0.68199836006249837, -0.68327377368079922,
    -0.68454710592868873, -0.68581835292737625, -0.68708751080442287,
    -0.68835457569375413, -0.6896195437356698, -0.69088241107685833,
    -0.69214317387040669, -0.69340182827581309, -0.69465837045899737,
    -0.69591279659231431, -0.69716510285456446, -0.69841528543100606,
    -0.69966334051336543, -0.7009092642998509, -0.70215305299516229,
    -0.70339470281050409, -0.70463420996359472, -0.705871570678681,
    -0.70710678118654746, -0.70833983772452869, -0.709570736536521,
    -0.71079947387299247, -0.71202604599099639, -0.71325044915418145,
    -0.71447267963280348, -0.71569273370373587, -0.71691060765048276,
    -0.7181262977631887, -0.7193398003386513, -0.72055111168033037,
    -0.72176022809836216, -0.72296714590956812, -0.72417186143746759,
    -0.72537437101228763, -0.72657467097097583, -0.72777275765721039,
    -0.72896862742141166, -0.73016227662075239, -0.73135370161917046,
    -0.73254289878737866, -0.73372986450287647, -0.73491459514995994,
    -0.73609708711973432, -0.737277336810124, -0.73845534062588392,
    -0.73963109497860979, -0.74080459628675011, -0.74197584097561631,
    -0.74314482547739436, -0.74431154623115414, -0.74547599968286216,
    -0.74663818228539136, -0.747798090498532, -0.74895572078900219,
    -0.75011106963045948, -0.75126413350351107, -0.75241490889572449,
    -0.75356339230163794, -0.754709580222772, -0.75585346916763951,
    -0.75699505565175662, -0.75813433619765236, -0.7592713073348808,
    -0.76040596560003082, -0.7615383075367369, -0.76266832969568843,
    -0.76379602863464213, -0.76492140091843175, -0.7660444431189779,
    -0.76716515181529965, -0.76828352359352337, -0.76939955504689506,
    -0.77051324277578914, -0.77162458338772, -0.77273357349735106,
    -0.77384020972650613, -0.77494448870417942, -0.776046407066546,
    -0.7771459614569709, -0.778243148526021, -0.779337964931474,
    -0.78043040733832991, -0.78152047241881883, -0.78260815685241392,
    -0.78369345732583973, -0.784776370533083, -0.785856893175402,
    -0.78693502196133736, -0.7880107536067219, -0.78908408483469084,
    -0.79015501237569041, -0.79122353296749, -0.79228964335519059,
    -0.79335334029123528, -0.79441462053541811, -0.79547348085489589,
    -0.79652991802419615, -0.79758392882522866, -0.79863551004729294,
    -0.79968465848709047, -0.80073137094873337, -0.80177564424375414,
    -0.80281747519111457, -0.80385686061721728, -0.804893797355914,
    -0.80592828224851587, -0.806960312143802, -0.8079898838980305,
    -0.80901699437494734, -0.81004164044579618, -0.81106381898932678,
    -0.8120835268918063, -0.81310076104702755, -0.81411551835631912,
    -0.81512779572855432, -0.81613759008016029, -0.81714489833512849,
    -0.81814971742502329, -0.81915204428899191, -0.82015187587377214,
    -0.821149209133704, -0.82214404103073735, -0.82313636853444194,
    -0.8241261886220157, -0.825113498278295, -0.82609829449576377,
    -0.82708057427456194, -0.8280603346224944, -0.82903757255504162,
    -0.8300122850953674, -0.83098446927432834, -0.83195412213048259,
    -0.83292124071009943, -0.8338858220671681, -0.83484786326340665,
    -0.83580736136827027, -0.83676431345896163, -0.83771871662043873,
    -0.83867056794542416, -0.83961986453441328, -0.84056660349568424,
    -0.841510781945306, -0.84245239700714769, -0.84339144581288572,
    -0.84432792550201508, -0.84526183322185611, -0.84619316612756412,
    -0.84712192138213716, -0.848048096156426, -0.84897168762914144,
    -0.8498926929868641, -0.85081110942405125, -0.85172693414304768,
    -0.85264016435409218, -0.85355079727532757, -0.85445883013280743,
    -0.8553642601605066, -0.85626708460032819, -0.85716730070211222,
    -0.85806490572364458, -0.85895989693066443, -0.85985227159687339,
    -0.86074202700394353, -0.86162916044152582, -0.86251366920725747,
    -0.86339555060677164, -0.86427480195370465, -0.86515142056970451,
    -0.86602540378443871, -0.86689674893560276, -0.8677654533689283,
    -0.86863151443819131, -0.869494929505219, -0.8703556959398997,
    -0.87121381112018936, -0.87206927243212073, -0.87292207726980975,
    -0.8737722230354652, -0.87461970713939574, -0.875464527000018,
    -0.87630668004386358, -0.87714616370558873, -0.87798297542798054,
    -0.87881711266196549, -0.87964857286661657, -0.880477353509162,
    -0.88130345206499217, -0.88212686601766788, -0.882947592858927,
    -0.88376563008869347, -0.88458097521508394, -0.88539362575441594,
    -0.88620357923121473, -0.88701083317822171, -0.88781538513640124,
    -0.88861723265494885, -0.88941637329129764, -0.89021280461112651,
    -0.89100652418836779, -0.89179752960521419, -0.89258581845212559,
    -0.89337138832783758, -0.89415423683936812, -0.89493436160202511,
    -0.8957117602394129, -0.89648643038344056, -0.89725836967432837,
    -0.89802757576061554, -0.898794046299167, -0.8995577789551803,
    -0.90031877140219352, -0.90107702132209155, -0.9018325264051138,
    -0.90258528434986063, -0.90333529286330072, -0.90408254966077828,
    -0.90482705246601958, -0.90556879901113962, -0.90630778703664994,
    -0.90704401429146486, -0.90777747853290869, -0.90850817752672186,
    -0.90923610904706853, -0.9099612708765431, -0.91068366080617724,
    -0.91140327663544529, -0.912120116172273, -0.91283417723304272,
    -0.913545457642601, -0.91425395523426378, -0.91495966784982474,
    -0.915662593339561, -0.91636272956223963, -0.917060074385124,
    -0.91775462568398114, -0.91844638134308709, -0.9191353392552345,
    -0.91982149732173768, -0.92050485345244037, -0.92118540556572115,
    -0.92186315158850063, -0.92253808945624638, -0.9232102171129809,
    -0.92387953251128674, -0.92454603361231324, -0.92520971838578214,
    -0.92587058480999473, -0.92652863087183723, -0.92718385456678754,
    -0.92783625389892, -0.92848582688091352, -0.92913257153405615,
    -0.92977648588825135, -0.93041756798202457, -0.93105581586252828,
    -0.9316912275855489, -0.93232380121551217, -0.93295353482548915,
    -0.93358042649720174, -0.93420447432102949, -0.93482567639601444,
    -0.93544403082986738, -0.93605953573897327, -0.93667218924839757,
    -0.93728198949189145, -0.93788893461189771, -0.93849302275955593,
    -0.93909425209470909, -0.93969262078590832, -0.940288127010419,
    -0.94088076895422545, -0.941470544812038, -0.94205745278729669,
    -0.94264149109217843, -0.943222657947601, -0.94380095158322941,
    -0.944376370237481, -0.944948912157531, -0.94551857559931685,
    -0.9460853588275453, -0.94664926011569628, -0.94721027774602884,
    -0.94776841000958578, -0.94832365520619932, -0.94887601164449653,
    -0.94942547764190388, -0.94997205152465258, -0.95051573162778369,
    -0.95105651629515353, -0.95159440387943828, -0.9521293927421387,
    -0.9526614812535863, -0.95319066779294692, -0.953716950748227,
    -0.95424032851627694, -0.95476079950279746, -0.95527836212234363,
    -0.95579301479833023, -0.95630475596303555, -0.95681358405760741,
    -0.95731949753206724, -0.95782249484531479, -0.95832257446513325,
    -0.958819734868193, -0.95931397454005751, -0.95980529197518683,
    -0.96029368567694307, -0.96077915415759418, -0.96126169593831889,
    -0.96174130954921133, -0.96221799352928539, -0.96269174642647881,
    -0.9631625667976581, -0.963630453208623, -0.96409540423411022,
    -0.96455741845779808, -0.96501649447231141, -0.965472630879225,
    -0.96592582628906831, -0.96637607932132941, -0.96682338860445938,
    -0.96726775277587673, -0.96770917048197125, -0.96814764037810774,
    -0.96858316112863108, -0.96901573140686947, -0.969445349895139,
    -0.96987201528474676, -0.97029572627599647, -0.97071648157819079,
    -0.97113427990963608, -0.97154911999764615, -0.97196100057854629,
    -0.97236992039767656, -0.97277587820939659, -0.97317887277708826,
    -0.97357890287316029, -0.97397596727905156, -0.97437006478523525,
    -0.97476119419122176, -0.97514935430556327, -0.97553454394585659,
    -0.97591676193874743, -0.97629600711993336, -0.97667227833416792,
    -0.97704557443526363, -0.97741589428609588, -0.97778323675860623,
    -0.97814760073380569, -0.97850898510177842, -0.978867388761685,
    -0.97922281062176586, -0.97957524959934406, -0.97992470462082959,
    -0.98027117462172175, -0.980614658546613, -0.98095515534919153,
    -0.98129266399224513, -0.981627183447664, -0.98195871269644364,
    -0.98228725072868872, -0.98261279654361522, -0.98293534914955416,
    -0.98325490756395462, -0.98357147081338592, -0.98388503793354165,
    -0.98419560796924188, -0.9845031799744367, -0.984807753012208,
    -0.98510932615477387, -0.98540789848349009, -0.98570346908885365,
    -0.985996037070505, -0.98628560153723144, -0.98657216160696937,
    -0.98685571640680736, -0.98713626507298791, -0.98741380675091139,
    -0.98768834059513766, -0.9879598657693891, -0.98822838144655278,
    -0.98849388680868355, -0.98875638104700581, -0.98901586336191682,
    -0.98927233296298833, -0.98952578906896949, -0.989776230907789,
    -0.99002365771655765, -0.99026806874157036, -0.9905094632383088,
    -0.9907478404714436, -0.99098319971483628, -0.99121554025154179,
    -0.99144486137381038, -0.99167116238309039, -0.99189444259002957,
    -0.99211470131447788, -0.99233193788548868, -0.992546151641322,
    -0.99275734192944554, -0.99296550810653694, -0.99317064953848611,
    -0.99337276560039645, -0.99357185567658746, -0.99376791916059637,
    -0.99396095545517971, -0.99415096397231539, -0.99433794413320464,
    -0.9945218953682734, -0.99470281711717423, -0.99488070882878821,
    -0.99505556996122624, -0.99522739998183118, -0.99539619836717885,
    -0.99556196460308, -0.99572469818458209, -0.99588439861597033,
    -0.99604106541076953, -0.99619469809174555, -0.99634529619090639,
    -0.99649285924950437, -0.9966373868180366, -0.99677887845624713,
    -0.996917333733128, -0.99705275222692025, -0.99718513352511573,
    -0.9973144772244581, -0.997440782930944, -0.99756405025982431,
    -0.99768427883560529, -0.99780146829205, -0.997915618272179,
    -0.99802672842827156, -0.998134798421867, -0.99823982792376531,
    -0.99834181661402832, -0.998440764181981, -0.99853667032621174,
    -0.99862953475457383, -0.99871935718418614, -0.998806137341434,
    -0.99888987496197, -0.99897056979071475, -0.9990482215818578,
    -0.99912283009885838, -0.999194395114446, -0.99926291641062115,
    -0.99932839377865623, -0.99939082701909576, -0.9994502159417572,
    -0.9995065603657316, -0.999559860119384, -0.99961011504035435,
    -0.99965732497555726, -0.99970148978118312, -0.99974260932269832,
    -0.9997806834748455, -0.99981571212164422, -0.99984769515639127,
    -0.99987663248166059, -0.99990252400930424, -0.999925369660452,
    -0.99994516936551214, -0.99996192306417131, -0.99997563070539475,
    -0.99998629224742674, -0.99999390765779039, -0.99999847691328769, -1.0,
    -0.99999847691328769, -0.99999390765779039, -0.99998629224742674,
    -0.99997563070539475, -0.99996192306417131, -0.99994516936551214,
    -0.999925369660452, -0.99990252400930424, -0.99987663248166059,
    -0.99984769515639127, -0.99981571212164422, -0.9997806834748455,
    -0.99974260932269832, -0.99970148978118312, -0.99965732497555726,
    -0.99961011504035435, -0.999559860119384, -0.9995065603657316,
    -0.9994502159417572, -0.99939082701909576, -0.99932839377865623,
    -0.99926291641062126, -0.999194395114446, -0.99912283009885838,
    -0.9990482215818578, -0.99897056979071475, -0.99888987496197,
    -0.99880613734143409, -0.99871935718418625, -0.99862953475457383,
    -0.99853667032621174, -0.998440764181981, -0.99834181661402832,
    -0.99823982792376531, -0.998134798421867, -0.99802672842827156,
    -0.997915618272179, -0.99780146829205, -0.99768427883560529,
    -0.99756405025982431, -0.997440782930944, -0.9973144772244581,
    -0.99718513352511573, -0.99705275222692025, -0.996917333733128,
    -0.99677887845624713, -0.9966373868180366, -0.99649285924950437,
    -0.99634529619090639, -0.99619469809174555, -0.99604106541076964,
    -0.99588439861597045, -0.99572469818458209, -0.99556196460308,
    -0.99539619836717885, -0.99522739998183118, -0.99505556996122635,
    -0.99488070882878821, -0.99470281711717423, -0.9945218953682734,
    -0.99433794413320464, -0.99415096397231539, -0.99396095545517971,
    -0.99376791916059637, -0.99357185567658746, -0.99337276560039645,
    -0.99317064953848611, -0.992965508106537, -0.99275734192944554,
    -0.99254615164132209, -0.99233193788548879, -0.99211470131447788,
    -0.99189444259002968, -0.9916711623830905, -0.99144486137381049,
    -0.99121554025154179, -0.99098319971483628, -0.9907478404714436,
    -0.99050946323830891, -0.99026806874157036, -0.99002365771655765,
    -0.989776230907789, -0.98952578906896949, -0.98927233296298833,
    -0.98901586336191694, -0.98875638104700592, -0.98849388680868355,
    -0.98822838144655289, -0.98795986576938921, -0.98768834059513777,
    -0.9874138067509115, -0.987136265072988, -0.98685571640680736,
    -0.98657216160696948, -0.98628560153723144, -0.985996037070505,
    -0.98570346908885365, -0.98540789848349009, -0.985109326154774,
    -0.98480775301220813, -0.9845031799744367, -0.984195607969242,
    -0.98388503793354165, -0.98357147081338592, -0.98325490756395462,
    -0.98293534914955427, -0.98261279654361522, -0.98228725072868872,
    -0.98195871269644375, -0.981627183447664, -0.98129266399224524,
    -0.98095515534919164, -0.98061465854661312, -0.98027117462172186,
    -0.9799247046208297, -0.97957524959934417, -0.97922281062176586,
    -0.978867388761685, -0.97850898510177842, -0.97814760073380569,
    -0.97778323675860623, -0.97741589428609588, -0.97704557443526363,
    -0.97667227833416792, -0.97629600711993347, -0.97591676193874755,
    -0.97553454394585659, -0.97514935430556327, -0.97476119419122187,
    -0.97437006478523536, -0.97397596727905167, -0.97357890287316029,
    -0.97317887277708837, -0.9727758782093967, -0.97236992039767667,
    -0.97196100057854629, -0.97154911999764626, -0.97113427990963619,
    -0.97071648157819079, -0.97029572627599658, -0.96987201528474687,
    -0.969445349895139, -0.96901573140686958, -0.96858316112863119,
    -0.96814764037810785, -0.96770917048197136, -0.96726775277587684,
    -0.96682338860445949, -0.96637607932132941, -0.96592582628906842,
    -0.96547263087922508, -0.96501649447231153, -0.96455741845779819,
    -0.96409540423411022, -0.96363045320862306, -0.96316256679765822,
    -0.96269174642647881, -0.9622179935292855, -0.96174130954921133,
    -0.96126169593831889, -0.96077915415759418, -0.96029368567694318,
    -0.95980529197518694, -0.95931397454005762, -0.95881973486819316,
    -0.95832257446513336, -0.9578224948453149, -0.95731949753206735,
    -0.95681358405760752, -0.95630475596303555, -0.95579301479833023,
    -0.95527836212234374, -0.95476079950279746, -0.95424032851627694,
    -0.953716950748227, -0.953190667792947, -0.9526614812535863,
    -0.95212939274213881, -0.95159440387943839, -0.95105651629515364,
    -0.9505157316277838, -0.94997205152465258, -0.949425477641904,
    -0.94887601164449653, -0.94832365520619943, -0.94776841000958578,
    -0.947210277746029, -0.94664926011569639, -0.94608535882754541,
    -0.945518575599317, -0.944948912157531, -0.94437637023748111,
    -0.94380095158322952, -0.94322265794760107, -0.94264149109217854,
    -0.9420574527872968, -0.941470544812038, -0.94088076895422557,
    -0.94028812701041908, -0.93969262078590843, -0.9390942520947092,
    -0.938493022759556, -0.93788893461189782, -0.93728198949189157,
    -0.93667218924839768, -0.93605953573897338, -0.93544403082986749,
    -0.93482567639601444, -0.9342044743210296, -0.93358042649720185,
    -0.93295353482548915, -0.93232380121551217, -0.931691227585549,
    -0.93105581586252839, -0.93041756798202468, -0.92977648588825146,
    -0.92913257153405615, -0.92848582688091363, -0.9278362538989201,
    -0.92718385456678754, -0.92652863087183734, -0.92587058480999485,
    -0.92520971838578225, -0.92454603361231336, -0.92387953251128685,
    -0.923210217112981, -0.92253808945624649, -0.92186315158850074,
    -0.92118540556572126, -0.92050485345244037, -0.91982149732173779,
    -0.91913533925523461, -0.9184463813430872, -0.91775462568398125,
    -0.91706007438512416, -0.91636272956223974, -0.91566259333956113,
    -0.91495966784982485, -0.91425395523426389, -0.91354545764260109,
    -0.91283417723304283, -0.91212011617227307, -0.9114032766354454,
    -0.91068366080617724, -0.90996127087654322, -0.90923610904706864,
    -0.908508177526722, -0.9077774785329088, -0.907044014291465,
    -0.90630778703665, -0.90556879901113974, -0.90482705246601969,
    -0.90408254966077839, -0.90333529286330083, -0.90258528434986074,
    -0.90183252640511391, -0.90107702132209166, -0.90031877140219363,
    -0.89955777895518041, -0.89879404629916715, -0.89802757576061565,
    -0.89725836967432848, -0.89648643038344067, -0.895711760239413,
    -0.89493436160202522, -0.89415423683936823, -0.89337138832783769,
    -0.89258581845212559, -0.8917975296052143, -0.8910065241883679,
    -0.89021280461112662, -0.88941637329129764, -0.88861723265494907,
    -0.88781538513640135, -0.88701083317822182, -0.88620357923121484,
    -0.885393625754416, -0.884580975215084, -0.88376563008869358,
    -0.8829475928589271, -0.882126866017668, -0.88130345206499228,
    -0.88047735350916212, -0.87964857286661668, -0.8788171126619656,
    -0.87798297542798065, -0.87714616370558884, -0.87630668004386369,
    -0.87546452700001809, -0.87461970713939585, -0.87377222303546531,
    -0.87292207726980986, -0.87206927243212085, -0.87121381112018947,
    -0.87035569593989981, -0.86949492950521912, -0.86863151443819142,
    -0.86776545336892852, -0.86689674893560287, -0.86602540378443882,
    -0.86515142056970462, -0.86427480195370476, -0.86339555060677176,
    -0.86251366920725758, -0.86162916044152593, -0.86074202700394364,
    -0.8598522715968735, -0.85895989693066455, -0.8580649057236448,
    -0.85716730070211233, -0.8562670846003283, -0.85536426016050682,
    -0.85445883013280766, -0.85355079727532768, -0.85264016435409229,
    -0.85172693414304779, -0.85081110942405147, -0.84989269298686421,
    -0.84897168762914155, -0.84804809615642607, -0.84712192138213738,
    -0.84619316612756423, -0.84526183322185622, -0.84432792550201519,
    -0.84339144581288583, -0.8424523970071478, -0.84151078194530626,
    -0.84056660349568435, -0.8396198645344134, -0.83867056794542427,
    -0.83771871662043884, -0.83676431345896185, -0.83580736136827039,
    -0.83484786326340676, -0.83388582206716821, -0.83292124071009954,
    -0.8319541221304827, -0.83098446927432856, -0.83001228509536751,
    -0.82903757255504185, -0.82806033462249462, -0.827080574274562,
    -0.82609829449576389, -0.82511349827829528, -0.82412618862201581,
    -0.82313636853444216, -0.82214404103073746, -0.82114920913370415,
    -0.82015187587377225, -0.819152044288992, -0.81814971742502351,
    -0.8171448983351286, -0.8161375900801604, -0.81512779572855443,
    -0.81411551835631923, -0.81310076104702778, -0.81208352689180641,
    -0.81106381898932689, -0.8100416404457963, -0.80901699437494745,
    -0.80798988389803061, -0.80696031214380215, -0.80592828224851609,
    -0.80489379735591426, -0.80385686061721751, -0.80281747519111479,
    -0.80177564424375425, -0.80073137094873359, -0.79968465848709069,
    -0.798635510047293, -0.79758392882522877, -0.79652991802419637,
    -0.795473480854896, -0.79441462053541834, -0.79335334029123539,
    -0.79228964335519081, -0.79122353296749015, -0.79015501237569064,
    -0.789084084834691, -0.788010753606722, -0.78693502196133747,
    -0.78585689317540208, -0.78477637053308313, -0.78369345732583984,
    -0.782608156852414, -0.781520472418819, -0.78043040733833,
    -0.77933796493147423, -0.77824314852602106, -0.77714596145697112,
    -0.77604640706654626, -0.77494448870417965, -0.77384020972650625,
    -0.77273357349735117, -0.77162458338772022, -0.77051324277578925,
    -0.76939955504689517, -0.76828352359352359, -0.76716515181529976,
    -0.76604444311897812, -0.764921400918432, -0.76379602863464235,
    -0.76266832969568854, -0.761538307536737, -0.760405965600031,
    -0.759271307334881, -0.75813433619765247, -0.75699505565175673,
    -0.75585346916763962, -0.75470958022277213, -0.75356339230163816,
    -0.75241490889572471, -0.75126413350351118, -0.7501110696304597,
    -0.74895572078900241, -0.74779809049853219, -0.74663818228539136,
    -0.74547599968286238, -0.74431154623115425, -0.74314482547739447,
    -0.74197584097561653, -0.74080459628675022, -0.7396310949786099,
    -0.73845534062588414, -0.73727733681012408, -0.73609708711973443,
    -0.73491459514996, -0.73372986450287669, -0.73254289878737877,
    -0.73135370161917057, -0.73016227662075261, -0.72896862742141177,
    -0.72777275765721061, -0.726574670970976, -0.72537437101228786,
    -0.72417186143746781, -0.72296714590956834, -0.72176022809836227,
    -0.72055111168033059, -0.71933980033865141, -0.71812629776318893,
    -0.71691060765048287, -0.71569273370373609, -0.7144726796328037,
    -0.71325044915418168, -0.71202604599099661, -0.71079947387299269,
    -0.70957073653652114, -0.70833983772452891, -0.70710678118654768,
    -0.70587157067868112, -0.70463420996359494, -0.7033947028105042,
    -0.70215305299516251, -0.70090926429985112, -0.69966334051336565,
    -0.69841528543100617, -0.69716510285456468, -0.69591279659231453,
    -0.69465837045899748, -0.69340182827581331, -0.69214317387040691,
    -0.69088241107685855, -0.68961954373567, -0.68835457569375424,
    -0.6870875108044231, -0.68581835292737636, -0.684547105928689,
    -0.68327377368079945, -0.68199836006249859, -0.68072086895891792,
    -0.67944130426151683, -0.678159669868071, -0.67687596968266084,
    -0.67559020761566035, -0.67430238758372363, -0.67301251350977365,
    -0.67172058932299028, -0.67042661895879929, -0.66913060635885846,
    -0.66783255547104692, -0.6665324702494525, -0.665230354654361,
    -0.66392621265224183, -0.66262004821573772, -0.66131186532365194,
    -0.66000166796093684, -0.65868946011868068, -0.657375245794096,
    -0.65605902899050728, -0.65474081371733983, -0.6534206039901056,
    -0.65209840383039241, -0.65077421726585127, -0.6494480483301841,
    -0.64811990106313144, -0.64678977951046013, -0.64545768772395129,
    -0.6441236297613866, -0.64278760968653947, -0.64144963156915813,
    -0.64010969948495589, -0.63876781751559741, -0.63742398974868952,
    -0.63607822027776384, -0.63473051320226759, -0.63338087262755027,
    -0.632029302664851, -0.63067580743128648, -0.62932039104983784,
    -0.62796305764933835, -0.626603811364461, -0.62524265633570575,
    -0.62387959670938686, -0.62251463663761963, -0.62114778027831052,
    -0.61977903179514038, -0.61840839535755454, -0.61703587514074842,
    -0.61566147532565807, -0.61428520009894316, -0.61290705365297649,
    -0.61152704018583126, -0.61014516390126783, -0.60876142900872088,
    -0.607375839723287, -0.60598840026571144, -0.60459911486237539,
    -0.60320798774528306, -0.60181502315204893, -0.60042022532588413,
    -0.599023598515586, -0.59762514697552138, -0.59622487496561616,
    -0.59482278675134093, -0.59341888660370123, -0.59201317879921944,
    -0.59060566761992528, -0.58919635735334208, -0.58778525229247325,
    -0.58637235673578947, -0.58495767498721574, -0.58354121135611792,
    -0.58212297015728987, -0.58070295571094033, -0.57928117234267951,
    -0.57785762438350607, -0.5764323161697934, -0.57500525204327879,
    -0.57357643635104638, -0.5721458734455166, -0.57071356768443138,
    -0.56927952343084409, -0.5678437450531012, -0.56640623692483283,
    -0.564967003424938, -0.56352604893757163, -0.56208337785213092,
    -0.56063899456324207, -0.55919290347074724, -0.55774510897969065,
    -0.55629561550030537, -0.554844427448, -0.55339154924334411,
    -0.55193698531205837, -0.55048074008499581, -0.54902281799813213,
    -0.54756322349254993, -0.54610196101442887, -0.544639035015027,
    -0.54317444995067066, -0.54170821028274, -0.54024032047765513,
    -0.53877078500686326, -0.53729960834682422, -0.5358267949789971,
    -0.5343523493898269, -0.53287627607073063, -0.53139857951808356,
    -0.529919264233205, -0.52843833472234725, -0.52695579549667781,
    -0.52547165107226812, -0.52398590597007877, -0.52249856471594858,
    -0.52100963184057625, -0.51951911187950928, -0.51802700937313029,
    -0.516533328866642, -0.51503807491005449, -0.51354125205817047,
    -0.51204286487057193, -0.51054291791160622, -0.50904141575037187,
    -0.50753836296070487, -0.50603376412116463, -0.50452762381501937,
    -0.5030199466302353, -0.50151073715945771, -0.50000000000000044,
    -0.49848773975383004, -0.49697396102755514, -0.49545866843240743,
    -0.493941866584231, -0.49242356010346722, -0.49090375361514105,
    -0.48938245174884654, -0.48785965913873308, -0.48633538042349095,
    -0.48480962024633761, -0.48328238325500306, -0.48175367410171605,
    -0.480223497443189, -0.478691857940607, -0.47715876025960868,
    -0.47562420907027558, -0.47408820904711596, -0.47255076486905379,
    -0.4710118812194099, -0.46947156278589075, -0.46792981426057345,
    -0.46638664033989136, -0.4648420457246199, -0.46329603511986212,
    -0.46174861323503441, -0.46019978478385221, -0.4586495544843156,
    -0.4570979270586949, -0.45554490723351559, -0.45399049973954692,
    -0.452434709311783, -0.45087754068943109, -0.44931899861589625,
    -0.44775908783876944, -0.44619781310980866, -0.4446351791849274,
    -0.44307119082417973, -0.44150585279174531, -0.43993916985591536,
    -0.43837114678907774, -0.43680178836770267, -0.435231099372328,
    -0.43365908458754493, -0.432085748801983, -0.43051109680829597,
    -0.428935133403146, -0.42735786338719262, -0.42577929156507294,
    -0.42419942274539058, -0.42261826174069916, -0.4210358133674908,
    -0.419452082446177, -0.41786707380107674, -0.41628079226040127,
    -0.41469324265623925, -0.41310442982454204, -0.41151435860510915,
    -0.40992303384157325, -0.40833046038138548, -0.40673664307580093,
    -0.40514158677986251, -0.40354529635239011, -0.40194777665596032,
    -0.40034903255689525, -0.39874906892524659, -0.39714789063478112,
    -0.39554550256296472, -0.393941909590951, -0.39233711660356146,
    -0.39073112848927383, -0.3891239501402064, -0.38751558645210321,
    -0.38590604232431897, -0.38429532265980421, -0.38268343236509034,
    -0.38107037635027474, -0.379456159529005, -0.37784078681846717,
    -0.37622426313936574, -0.37460659341591229, -0.37298778257580928,
    -0.37136783555023528, -0.36974675727382988, -0.36812455268467781,
    -0.36650122672429719, -0.36487678433761972, -0.36325123047297847,
    -0.36162457008209253, -0.35999680812005153, -0.35836794954530071,
    -0.35673799931962574, -0.35510696240813766, -0.35347484377925786,
    -0.35184164840470183, -0.3502073812594676, -0.34857204732181546,
    -0.34693565157325618, -0.34529819899853503, -0.34365969458561657,
    -0.34202014332566855, -0.34037955021305, -0.33873792024529137,
    -0.33709525842308219, -0.3354515697502552, -0.33380685923377124,
    -0.33216113188370372, -0.33051439271322353, -0.32886664673858385,
    -0.32721789897910464, -0.32556815445715664, -0.32391741819814951,
    -0.32226569523051124, -0.32061299058567655, -0.31895930929807037,
    -0.31730465640509264, -0.31564903694710222, -0.31399245596740477,
    -0.3123349185122325, -0.31067642963073183, -0.30901699437494756,
    -0.30735661779980733, -0.30569530496310604, -0.30403306092549076,
    -0.30236989075044507, -0.30070579950427379, -0.2990407922560866,
    -0.297374874077786, -0.29570805004404682, -0.29404032523230422,
    -0.2923717047227371, -0.29070219359825294, -0.28903179694447217,
    -0.28736051984971184, -0.2856883674049735, -0.28401534470392265,
    -0.28234145684287659, -0.28066670892078804, -0.27899110603922961,
    -0.27731465330237826, -0.27563735581699972, -0.27395921869243312,
    -0.27228024704057507, -0.27060044597586363, -0.26891982061526581,
    -0.26723837607825707, -0.26555611748680913, -0.26387304996537331,
    -0.26218917864086527, -0.26050450864264812, -0.25881904510252063,
    -0.25713279315469617, -0.25544575793579061, -0.25375794458480583,
    -0.25206935824311394, -0.25038000405444183, -0.24868988716485529,
    -0.24699901272274352, -0.2453073858788033, -0.24361501178602249,
    -0.24192189559966779, -0.2402280424772639, -0.23853345757858116,
    -0.23683814606561909, -0.23514211310259051, -0.23344536385590514,
    -0.23174790349415716, -0.23004973718810437, -0.2283508701106558,
    -0.22665130743685521, -0.22495105434386525, -0.22325011601095174,
    -0.22154849761946777, -0.21984620435283811, -0.21814324139654323,
    -0.21643961393810282, -0.21473532716706323, -0.21303038627497672,
    -0.2113247964553889, -0.20961856290382216, -0.20791169081775979,
    -0.20620418539663021, -0.20449605184179015, -0.20278729535651238,
    -0.20107792114596468, -0.1993679344171973, -0.19765734037912638,
    -0.19594614424251802, -0.19423435121997243, -0.192521966525908,
    -0.19080899537654547, -0.18909544298989206, -0.18738131458572463,
    -0.1856666153855773, -0.18395135061272036, -0.18223552549214778,
    -0.1805191452505604, -0.17880221511635014, -0.17708474031958307,
    -0.17536672609198697, -0.17364817766693033, -0.17192910027940964,
    -0.17020949916603276, -0.1684893795650029, -0.16676874671610267,
    -0.16504760586067815, -0.16332596224162288, -0.16160382110336188,
    -0.15988118769183482, -0.15815806725448361, -0.15643446504023104,
    -0.15471038629946837, -0.15298583628403845, -0.15126082024721971,
    -0.14953534344370925, -0.14780941112961046, -0.14608302856241157,
    -0.14435620100097327, -0.1426289337055118, -0.14090123193758292,
    -0.13917310096006583, -0.13744454603714715, -0.135715572434305,
    -0.13398618541829274, -0.13225639025712324, -0.13052619222005163,
    -0.12879559657756293, -0.12706460860135071, -0.12533323356430459,
    -0.12360147674049317, -0.12186934340514805, -0.1201368388346469,
    -0.11840396830650085, -0.11667073709933318, -0.11493715049286674,
    -0.11320321376790694, -0.11146893220632581, -0.10973431109104571,
    -0.1079993557060234, -0.10626407133623386, -0.10452846326765423,
    -0.10279253678724681, -0.10105629718294645, -0.099319749743639218,
    -0.097582899759149785, -0.095845752520224411, -0.094108313318514852,
    -0.092370587446561334, -0.090632580197780019, -0.088894296866441486,
    -0.087155742747658249, -0.085416923137367665, -0.083677843332315788,
    -0.081938508630041332, -0.080198924328859431, -0.078459095727845568,
    -0.076719028126819369, -0.074978726826327655, -0.073238197127631757,
    -0.0714974443326861, -0.06975647374412558, -0.068015290665248557,
    -0.06627390040000064, -0.064532308252957693, -0.062790519529313207,
    -0.061048539534856804, -0.05930637357596167, -0.057564026959567437,
    -0.055821504993164066, -0.054078812984775661, -0.052335956242944306,
    -0.0505929400767139, -0.048849769795613958, -0.047106450709643463,
    -0.0453629881292538, -0.043619387365336132, -0.041875653729199873,
    -0.040131792532560079, -0.038387809087520396, -0.036643708706556845,
    -0.034899496702500761, -0.033155178388526177, -0.0314107590781283,
    -0.029666244085110871, -0.027921638723569103, -0.026176948307873482,
    -0.02443217815265359, -0.022687333572781906, -0.020942419883357617,
    -0.019197442399690429, -0.017452406437283498, -0.015707317311820769,
    -0.013962180339145475, -0.012217000835247481, -0.010471784116246214,
    -0.0087265354983744638, -0.0069812602979613019, -0.0052359638314194382,
    -0.0034906514152236987, -0.0017453283658983838, -1.8369701987210297E-16,
    0.0017453283658980165, 0.0034906514152233314, 0.0052359638314190705,
    0.0069812602979609341, 0.0087265354983732078, 0.010471784116245846,
    0.012217000835247113, 0.013962180339145107, 0.0157073173118204,
    0.01745240643728313, 0.019197442399689176, 0.020942419883357249,
    0.022687333572781538, 0.024432178152653226, 0.026176948307873114,
    0.027921638723568735, 0.029666244085110503, 0.031410759078127931,
    0.033155178388525809, 0.034899496702500393, 0.036643708706555589,
    0.03838780908751914, 0.040131792532559711, 0.041875653729199505,
    0.043619387365335764, 0.045362988129253434, 0.047106450709642207,
    0.0488497697956127, 0.050592940076713534, 0.052335956242943946,
    0.054078812984775293, 0.0558215049931637, 0.057564026959567069,
    0.0593063735759613, 0.061048539534856443, 0.062790519529312833,
    0.064532308252957318, 0.066273900399999391, 0.068015290665248182,
    0.069756473744125219, 0.07149744433268572, 0.073238197127631383,
    0.0749787268263273, 0.07671902812681812, 0.078459095727845207,
    0.08019892432885907, 0.081938508630040971, 0.083677843332315427,
    0.08541692313736729, 0.087155742747657888, 0.088894296866441125,
    0.090632580197779644, 0.092370587446560973, 0.0941083133185136,
    0.095845752520224051, 0.097582899759149425, 0.099319749743638858,
    0.10105629718294608, 0.10279253678724644, 0.10452846326765299,
    0.1062640713362335, 0.10799935570602304, 0.10973431109104535,
    0.11146893220632545, 0.11320321376790658, 0.11493715049286636,
    0.11667073709933282, 0.11840396830650049, 0.12013683883464653,
    0.12186934340514681, 0.12360147674049192, 0.12533323356430423,
    0.12706460860135035, 0.12879559657756257, 0.13052619222005127,
    0.132256390257122, 0.13398618541829152, 0.1357155724343046,
    0.13744454603714679, 0.13917310096006547, 0.14090123193758256,
    0.14262893370551144, 0.14435620100097291, 0.1460830285624112,
    0.1478094111296101, 0.14953534344370889, 0.15126082024721846,
    0.15298583628403808, 0.154710386299468, 0.15643446504023067,
    0.15815806725448325, 0.15988118769183446, 0.16160382110336063,
    0.16332596224162252, 0.16504760586067779, 0.16676874671610231,
    0.16848937956500254, 0.1702094991660324, 0.17192910027940927,
    0.17364817766692997, 0.17536672609198661, 0.17708474031958271,
    0.17880221511634892, 0.18051914525056004, 0.18223552549214742,
    0.18395135061272, 0.18566661538557694, 0.18738131458572427,
    0.18909544298989084, 0.19080899537654425, 0.19252196652590764,
    0.19423435121997207, 0.19594614424251766, 0.19765734037912602,
    0.19936793441719694, 0.20107792114596432, 0.20278729535651205,
    0.20449605184178979, 0.20620418539662896, 0.20791169081775857,
    0.2096185629038218, 0.21132479645538854, 0.21303038627497636,
    0.21473532716706287, 0.21643961393810246, 0.218143241396542,
    0.21984620435283775, 0.22154849761946743, 0.22325011601095138,
    0.22495105434386492, 0.22665130743685485, 0.22835087011065544,
    0.230049737188104, 0.2317479034941568, 0.23344536385590478,
    0.23514211310258928, 0.23683814606561873, 0.2385334575785808,
    0.24022804247726354, 0.24192189559966745, 0.24361501178602213,
    0.24530738587880208, 0.24699901272274316, 0.24868988716485493,
    0.25038000405444144, 0.25206935824311361, 0.25375794458480549,
    0.25544575793579027, 0.25713279315469584, 0.2588190451025203,
    0.26050450864264779, 0.26218917864086405, 0.263873049965373,
    0.26555611748680874, 0.26723837607825673, 0.26891982061526548,
    0.2706004459758633, 0.27228024704057391, 0.27395921869243189,
    0.27563735581699939, 0.27731465330237787, 0.27899110603922922,
    0.28066670892078766, 0.2823414568428762, 0.28401534470392231,
    0.28568836740497311, 0.28736051984971145, 0.28903179694447095,
    0.29070219359825172, 0.29237170472273671, 0.29404032523230383,
    0.29570805004404649, 0.29737487407778568, 0.29904079225608626,
    0.30070579950427262, 0.30236989075044474, 0.30403306092549043,
    0.30569530496310571, 0.307356617799807, 0.30901699437494723,
    0.3106764296307315, 0.31233491851223216, 0.31399245596740444,
    0.31564903694710189, 0.31730465640509142, 0.31895930929807,
    0.32061299058567622, 0.32226569523051091, 0.32391741819814912,
    0.32556815445715631, 0.32721789897910342, 0.32886664673858351,
    0.33051439271322319, 0.33216113188370333, 0.3338068592337709,
    0.33545156975025486, 0.33709525842308186, 0.33873792024529104,
    0.34037955021304966, 0.34202014332566816, 0.34365969458561541,
    0.34529819899853387, 0.34693565157325584, 0.34857204732181507,
    0.35020738125946721, 0.3518416484047015, 0.3534748437792567,
    0.3551069624081365, 0.35673799931962541, 0.35836794954530038,
    0.35999680812005119, 0.3616245700820922, 0.36325123047297814,
    0.36487678433761933, 0.36650122672429686, 0.36812455268467742,
    0.36974675727382866, 0.37136783555023412, 0.37298778257580895,
    0.37460659341591196, 0.37622426313936541, 0.37784078681846683,
    0.37945615952900469, 0.38107037635027363, 0.38268343236509,
    0.38429532265980387, 0.38590604232431863, 0.38751558645210288,
    0.38912395014020607, 0.39073112848927349, 0.39233711660356113,
    0.39394190959095066, 0.39554550256296434, 0.39714789063477995,
    0.39874906892524625, 0.40034903255689491, 0.40194777665596,
    0.40354529635238978, 0.40514158677986217, 0.40673664307579976,
    0.40833046038138515, 0.40992303384157291, 0.41151435860510882,
    0.41310442982454171, 0.41469324265623891, 0.41628079226040093,
    0.41786707380107641, 0.41945208244617666, 0.42103581336749046,
    0.42261826174069883, 0.42419942274538947, 0.4257792915650726,
    0.42735786338719228, 0.42893513340314565, 0.4305110968082948,
    0.43208574880198186, 0.43365908458754382, 0.43523109937232768,
    0.43680178836770234, 0.4383711467890774, 0.439939169855915,
    0.44150585279174503, 0.4430711908241794, 0.44463517918492712,
    0.44619781310980833, 0.44775908783876911, 0.44931899861589591,
    0.45087754068943076, 0.45243470931178265, 0.45399049973954664,
    0.45554490723351526, 0.45709792705869379, 0.45864955448431449,
    0.46019978478385187, 0.46174861323503408, 0.46329603511986178,
    0.46484204572461957, 0.466386640339891, 0.46792981426057312,
    0.46947156278589042, 0.47101188121940957, 0.47255076486905345,
    0.47408820904711563, 0.47562420907027525, 0.47715876025960835,
    0.47869185794060665, 0.48022349744318871, 0.48175367410171493,
    0.48328238325500195, 0.48480962024633728, 0.48633538042349067,
    0.48785965913873275, 0.4893824517488462, 0.49090375361514071,
    0.49242356010346688, 0.49394186658423067, 0.49545866843240716,
    0.49697396102755481, 0.49848773975382976, 0.49999999999999933,
    0.50151073715945738, 0.503019946630235, 0.504527623815019,
    0.50603376412116352, 0.50753836296070376, 0.50904141575037087,
    0.51054291791160589, 0.5120428648705716, 0.51354125205817014,
    0.51503807491005416, 0.51653332886664172, 0.51802700937313,
    0.519519111879509, 0.52100963184057592, 0.52249856471594835,
    0.52398590597007855, 0.52547165107226779, 0.52695579549667748,
    0.528438334722347, 0.52991926423320468, 0.53139857951808256,
    0.53287627607072952, 0.53435234938982656, 0.53582679497899677,
    0.53729960834682389, 0.538770785006863, 0.54024032047765491,
    0.54170821028273963, 0.54317444995067032, 0.54463903501502664,
    0.54610196101442854, 0.5475632234925496, 0.5490228179981318,
    0.55048074008499548, 0.551936985312058, 0.55339154924334388,
    0.554844427447999, 0.55629561550030437, 0.55774510897968965,
    0.559192903470747, 0.56063899456324184, 0.56208337785213058,
    0.5635260489375713, 0.56496700342493777, 0.5664062369248325,
    0.56784374505310087, 0.56927952343084376, 0.57071356768443116,
    0.57214587344551626, 0.573576436351046, 0.57500525204327846,
    0.57643231616979307, 0.57785762438350508, 0.57928117234267851,
    0.58070295571093933, 0.58212297015728964, 0.58354121135611758,
    0.5849576749872154, 0.58637235673578925, 0.58778525229247292,
    0.58919635735334186, 0.59060566761992506, 0.59201317879921911,
    0.5934188866037009, 0.5948227867513407, 0.59622487496561583,
    0.597625146975521, 0.59902359851558573, 0.60042022532588379,
    0.60181502315204793, 0.60320798774528206, 0.60459911486237439,
    0.6059884002657111, 0.60737583972328668, 0.60876142900872054,
    0.6101451639012675, 0.61152704018583093, 0.61290705365297615,
    0.61428520009894283, 0.61566147532565785, 0.61703587514074809,
    0.61840839535755421, 0.61977903179514016, 0.6211477802783103,
    0.6225146366376193, 0.62387959670938586, 0.62524265633570475,
    0.62660381136446008, 0.627963057649338, 0.6293203910498375,
    0.63067580743128626, 0.6320293026648508, 0.63338087262754994,
    0.63473051320226737, 0.63607822027776362, 0.6374239897486893,
    0.63876781751559719, 0.64010969948495555, 0.6414496315691578,
    0.64278760968653925, 0.64412362976138637, 0.64545768772395029,
    0.64678977951045924, 0.64811990106313044, 0.64944804833018388,
    0.650774217265851, 0.65209840383039219, 0.65342060399010538,
    0.65474081371733961, 0.656059028990507, 0.65737524579409545,
    0.65868946011868013, 0.66000166796093629, 0.66131186532365127,
    0.6626200482157375, 0.6639262126522415, 0.66523035465436076,
    0.66653247024945228, 0.66783255547104636, 0.66913060635885779,
    0.67042661895879863, 0.67172058932299028, 0.67301251350977331,
    0.67430238758372329, 0.67559020761566013, 0.67687596968266051,
    0.6781596698680703, 0.67944130426151617, 0.68072086895891737,
    0.68199836006249792, 0.68327377368079922, 0.68454710592868862,
    0.68581835292737614, 0.68708751080442287, 0.68835457569375369,
    0.68961954373566947, 0.690882411076858, 0.69214317387040691,
    0.693401828275813, 0.69465837045899725, 0.6959127965923142,
    0.69716510285456434, 0.69841528543100562, 0.6996633405133651,
    0.70090926429985045, 0.702153052995162, 0.703394702810504,
    0.70463420996359472, 0.70587157067868089, 0.70710678118654735,
    0.70833983772452858, 0.70957073653652059, 0.71079947387299214,
    0.71202604599099661, 0.71325044915418168, 0.71447267963280336,
    0.71569273370373576, 0.71691060765048265, 0.71812629776318859,
    0.71933980033865086, 0.72055111168033, 0.72176022809836171,
    0.72296714590956768, 0.72417186143746759, 0.72537437101228752,
    0.72657467097097583, 0.72777275765721028, 0.72896862742141122,
    0.730162276620752, 0.73135370161917013, 0.73254289878737888,
    0.73372986450287647, 0.73491459514995983, 0.73609708711973421,
    0.73727733681012386, 0.73845534062588358, 0.73963109497860935,
    0.74080459628674966, 0.741975840975616, 0.74314482547739424,
    0.744311546231154, 0.745475999682862, 0.74663818228539114,
    0.74779809049853163, 0.74895572078900186, 0.75011106963045915,
    0.75126413350351129, 0.75241490889572449, 0.75356339230163794,
    0.7547095802227719, 0.7558534691676394, 0.75699505565175618,
    0.75813433619765191, 0.75927130733488046, 0.76040596560003049,
    0.76153830753673679, 0.76266832969568832, 0.76379602863464213,
    0.76492140091843164, 0.76604444311897779, 0.76716515181529932,
    0.768283523593523, 0.76939955504689517, 0.77051324277578936,
    0.77162458338772, 0.772733573497351, 0.773840209726506, 0.77494448870417942,
    0.77604640706654571, 0.77714596145697057, 0.77824314852602061,
    0.77933796493147367, 0.7804304073383298, 0.78152047241881872,
    0.78260815685241381, 0.78369345732583962, 0.78477637053308269,
    0.78585689317540153, 0.78693502196133691, 0.788010753606722,
    0.78908408483469072, 0.7901550123756903, 0.79122353296748993,
    0.79228964335519059, 0.79335334029123494, 0.79441462053541778,
    0.79547348085489555, 0.79652991802419582, 0.79758392882522855,
    0.79863551004729283, 0.79968465848709047, 0.80073137094873337,
    0.8017756442437538, 0.80281747519111424, 0.803856860617217,
    0.80489379735591426, 0.80592828224851587, 0.80696031214380193,
    0.80798988389803039, 0.80901699437494734, 0.81004164044579585,
    0.81106381898932645, 0.812083526891806, 0.81310076104702722,
    0.81411551835631935, 0.81512779572855421, 0.81613759008016018,
    0.81714489833512838, 0.81814971742502329, 0.81915204428899158,
    0.82015187587377181, 0.82114920913370371, 0.82214404103073757,
    0.82313636853444194, 0.82412618862201559, 0.825113498278295,
    0.82609829449576377, 0.82708057427456161, 0.82806033462249418,
    0.8290375725550414, 0.83001228509536706, 0.83098446927432834,
    0.83195412213048248, 0.83292124071009943, 0.833885822067168,
    0.83484786326340632, 0.83580736136826994, 0.83676431345896141,
    0.83771871662043884, 0.838670567945424, 0.83961986453441317,
    0.84056660349568413, 0.841510781945306, 0.84245239700714736,
    0.8433914458128855, 0.84432792550201474, 0.84526183322185577,
    0.84619316612756412, 0.84712192138213716, 0.84804809615642585,
    0.84897168762914133, 0.84989269298686376, 0.850811109424051,
    0.85172693414304734, 0.85264016435409229, 0.85355079727532746,
    0.85445883013280743, 0.8553642601605066, 0.85626708460032808,
    0.85716730070211211, 0.85806490572364436, 0.8589598969306641,
    0.859852271596873, 0.86074202700394375, 0.86162916044152571,
    0.86251366920725736, 0.86339555060677153, 0.86427480195370454,
    0.86515142056970429, 0.86602540378443837, 0.86689674893560242,
    0.86776545336892852, 0.86863151443819131, 0.869494929505219,
    0.87035569593989959, 0.87121381112018925, 0.8720692724321204,
    0.87292207726980942, 0.87377222303546487, 0.87461970713939541,
    0.87546452700001787, 0.87630668004386358, 0.87714616370558873,
    0.87798297542798043, 0.87881711266196516, 0.87964857286661624,
    0.88047735350916168, 0.88130345206499228, 0.88212686601766777,
    0.882947592858927, 0.88376563008869335, 0.88458097521508383,
    0.88539362575441571, 0.88620357923121451, 0.88701083317822138,
    0.887815385136401, 0.88861723265494885, 0.88941637329129752,
    0.89021280461112651, 0.89100652418836779, 0.891797529605214,
    0.89258581845212526, 0.89337138832783725, 0.8941542368393679,
    0.89493436160202511, 0.8957117602394129, 0.89648643038344045,
    0.89725836967432837, 0.89802757576061554, 0.89879404629916682,
    0.89955777895518008, 0.90031877140219319, 0.90107702132209166,
    0.9018325264051138, 0.90258528434986063, 0.90333529286330072,
    0.90408254966077828, 0.90482705246601935, 0.9055687990111394,
    0.90630778703664971, 0.907044014291465, 0.90777747853290869,
    0.90850817752672175, 0.90923610904706842, 0.9099612708765431,
    0.91068366080617691, 0.91140327663544507, 0.91212011617227273,
    0.9128341772330425, 0.913545457642601, 0.91425395523426367,
    0.91495966784982474, 0.9156625933395609, 0.91636272956223941,
    0.91706007438512382, 0.91775462568398092, 0.9184463813430872,
    0.9191353392552345, 0.91982149732173757, 0.92050485345244026,
    0.92118540556572115, 0.92186315158850041, 0.92253808945624616,
    0.92321021711298068, 0.92387953251128652, 0.92454603361231313,
    0.92520971838578214, 0.92587058480999473, 0.92652863087183723,
    0.92718385456678731, 0.92783625389891977, 0.9284858268809133,
    0.92913257153405593, 0.92977648588825146, 0.93041756798202457,
    0.93105581586252828, 0.9316912275855489, 0.93232380121551206,
    0.93295353482548893, 0.93358042649720152, 0.93420447432102927,
    0.93482567639601455, 0.93544403082986738, 0.93605953573897327,
    0.93667218924839757, 0.93728198949189145, 0.93788893461189748,
    0.93849302275955582, 0.93909425209470887, 0.93969262078590843,
    0.940288127010419, 0.94088076895422545, 0.94147054481203785,
    0.94205745278729669, 0.94264149109217832, 0.94322265794760085,
    0.94380095158322919, 0.94437637023748078, 0.94494891215753085,
    0.94551857559931685, 0.9460853588275453, 0.94664926011569628,
    0.94721027774602873, 0.94776841000958556, 0.9483236552061991,
    0.94887601164449664, 0.94942547764190388, 0.94997205152465247,
    0.95051573162778369, 0.95105651629515353, 0.951594403879438,
    0.95212939274213859, 0.95266148125358607, 0.95319066779294681,
    0.95371695074822693, 0.95424032851627683, 0.95476079950279735,
    0.95527836212234363, 0.95579301479833, 0.95630475596303532,
    0.9568135840576073, 0.95731949753206713, 0.9578224948453149,
    0.95832257446513325, 0.958819734868193, 0.95931397454005751,
    0.95980529197518683, 0.960293685676943, 0.960779154157594,
    0.96126169593831867, 0.96174130954921133, 0.96221799352928539,
    0.96269174642647881, 0.9631625667976581, 0.963630453208623, 0.96409540423411,
    0.964557418457798, 0.9650164944723113, 0.96547263087922508,
    0.96592582628906831, 0.9663760793213293, 0.96682338860445938,
    0.96726775277587673, 0.96770917048197114, 0.96814764037810763,
    0.968583161128631, 0.96901573140686936, 0.96944534989513886,
    0.96987201528474676, 0.97029572627599647, 0.97071648157819068,
    0.971134279909636, 0.971549119997646, 0.97196100057854606,
    0.97236992039767667, 0.97277587820939659, 0.97317887277708826,
    0.97357890287316029, 0.97397596727905156, 0.97437006478523513,
    0.97476119419122165, 0.97514935430556315, 0.97553454394585648,
    0.97591676193874743, 0.97629600711993336, 0.97667227833416792,
    0.97704557443526363, 0.97741589428609577, 0.97778323675860612,
    0.97814760073380558, 0.97850898510177831, 0.978867388761685,
    0.97922281062176575, 0.97957524959934406, 0.97992470462082959,
    0.98027117462172175, 0.98061465854661289, 0.98095515534919142,
    0.981292663992245, 0.981627183447664, 0.98195871269644364,
    0.98228725072868872, 0.98261279654361522, 0.98293534914955416,
    0.98325490756395451, 0.98357147081338581, 0.98388503793354154,
    0.984195607969242, 0.98450317997443659, 0.984807753012208,
    0.98510932615477387, 0.98540789848349009, 0.98570346908885353,
    0.98599603707050487, 0.98628560153723133, 0.98657216160696926,
    0.98685571640680725, 0.98713626507298791, 0.98741380675091139,
    0.98768834059513766, 0.9879598657693891, 0.98822838144655278,
    0.98849388680868344, 0.98875638104700581, 0.98901586336191682,
    0.98927233296298833, 0.98952578906896949, 0.98977623090778888,
    0.99002365771655754, 0.99026806874157025, 0.9905094632383088,
    0.99074784047144349, 0.99098319971483628, 0.99121554025154168,
    0.99144486137381038, 0.99167116238309039, 0.99189444259002957,
    0.99211470131447776, 0.99233193788548868, 0.992546151641322,
    0.99275734192944554, 0.99296550810653694, 0.993170649538486,
    0.99337276560039645, 0.99357185567658746, 0.99376791916059637,
    0.9939609554551796, 0.99415096397231528, 0.99433794413320464,
    0.99452189536827329, 0.99470281711717423, 0.99488070882878821,
    0.99505556996122624, 0.99522739998183118, 0.99539619836717874,
    0.99556196460308, 0.99572469818458209, 0.99588439861597033,
    0.99604106541076953, 0.99619469809174555, 0.99634529619090639,
    0.99649285924950426, 0.9966373868180366, 0.99677887845624713,
    0.996917333733128, 0.99705275222692025, 0.99718513352511573,
    0.9973144772244581, 0.997440782930944, 0.9975640502598242,
    0.99768427883560529, 0.99780146829205, 0.99791561827217889,
    0.99802672842827156, 0.99813479842186692, 0.99823982792376531,
    0.99834181661402832, 0.998440764181981, 0.99853667032621174,
    0.99862953475457383, 0.99871935718418614, 0.99880613734143409,
    0.99888987496197, 0.99897056979071475, 0.9990482215818578,
    0.99912283009885838, 0.999194395114446, 0.99926291641062115,
    0.99932839377865623, 0.99939082701909576, 0.9994502159417572,
    0.9995065603657316, 0.999559860119384, 0.99961011504035435,
    0.99965732497555726, 0.99970148978118312, 0.99974260932269832,
    0.9997806834748455, 0.99981571212164422, 0.99984769515639127,
    0.99987663248166059, 0.99990252400930424, 0.999925369660452,
    0.99994516936551214, 0.99996192306417131, 0.99997563070539475,
    0.99998629224742674, 0.99999390765779039, 0.99999847691328769, 1.0 };

  static const real_T c_b[3601] = { 0.0, 0.0017453283658983088,
    0.0034906514152237321, 0.0052359638314195805, 0.0069812602979615525,
    0.0087265354983739347, 0.010471784116245794, 0.012217000835247169,
    0.013962180339145272, 0.015707317311820675, 0.017452406437283512,
    0.019197442399689665, 0.020942419883356961, 0.022687333572781358,
    0.024432178152653153, 0.026176948307873153, 0.027921638723568881,
    0.029666244085110757, 0.031410759078128292, 0.033155178388526274,
    0.034899496702500969, 0.036643708706556276, 0.038387809087519938,
    0.040131792532559732, 0.04187565372919963, 0.043619387365336,
    0.045362988129253781, 0.047106450709642665, 0.048849769795613257,
    0.050592940076713312, 0.052335956242943835, 0.054078812984775293,
    0.0558215049931638, 0.057564026959567284, 0.059306373575961621,
    0.061048539534856873, 0.062790519529313374, 0.064532308252957984,
    0.066273900400000141, 0.068015290665248168, 0.0697564737441253,
    0.071497444332685928, 0.073238197127631688, 0.07497872682632771,
    0.076719028126818634, 0.078459095727844944, 0.080198924328858917,
    0.081938508630040929, 0.0836778433323155, 0.08541692313736747,
    0.087155742747658166, 0.088894296866441513, 0.090632580197780158,
    0.092370587446561583, 0.094108313318514325, 0.095845752520224,
    0.097582899759149466, 0.09931974974363901, 0.10105629718294634,
    0.10279253678724681, 0.10452846326765347, 0.10626407133623321,
    0.10799935570602284, 0.10973431109104527, 0.11146893220632548,
    0.11320321376790672, 0.11493715049286661, 0.11667073709933316,
    0.11840396830650095, 0.1201368388346471, 0.12186934340514748,
    0.12360147674049271, 0.12533323356430426, 0.12706460860135049,
    0.12879559657756279, 0.1305261922200516, 0.13225639025712244,
    0.13398618541829205, 0.13571557243430438, 0.13744454603714665,
    0.13917310096006544, 0.14090123193758267, 0.14262893370551166,
    0.14435620100097321, 0.14608302856241162, 0.14780941112961063,
    0.14953534344370956, 0.15126082024721924, 0.15298583628403806,
    0.15471038629946809, 0.15643446504023087, 0.15815806725448353,
    0.15988118769183488, 0.16160382110336113, 0.16332596224162227,
    0.16504760586067765, 0.16676874671610228, 0.16848937956500259,
    0.17020949916603256, 0.17192910027940952, 0.17364817766693033,
    0.17536672609198711, 0.17708474031958329, 0.17880221511634961,
    0.18051914525055998, 0.18223552549214747, 0.18395135061272017,
    0.18566661538557722, 0.18738131458572463, 0.18909544298989131,
    0.19080899537654483, 0.19252196652590742, 0.19423435121997198,
    0.19594614424251769, 0.19765734037912616, 0.19936793441719719,
    0.20107792114596468, 0.20278729535651249, 0.20449605184179034,
    0.20620418539662966, 0.20791169081775934, 0.20961856290382183,
    0.21132479645538868, 0.21303038627497656, 0.2147353271670632,
    0.21643961393810288, 0.21814324139654254, 0.21984620435283753,
    0.22154849761946729, 0.22325011601095138, 0.224951054343865,
    0.22665130743685505, 0.22835087011065575, 0.23004973718810443,
    0.23174790349415733, 0.23344536385590539, 0.23514211310259,
    0.23683814606561868, 0.23853345757858088, 0.24022804247726373,
    0.24192189559966773, 0.24361501178602252, 0.24530738587880258,
    0.24699901272274291, 0.24868988716485479, 0.25038000405444144,
    0.25206935824311366, 0.25375794458480566, 0.25544575793579055,
    0.25713279315469623, 0.25881904510252079, 0.2605045086426484,
    0.26218917864086472, 0.26387304996537286, 0.2655561174868088,
    0.26723837607825685, 0.2689198206152657, 0.27060044597586363,
    0.27228024704057435, 0.27395921869243245, 0.27563735581699916,
    0.27731465330237781, 0.27899110603922928, 0.28066670892078782,
    0.28234145684287648, 0.28401534470392265, 0.28568836740497355,
    0.287360519849712, 0.28903179694447162, 0.2907021935982525,
    0.29237170472273677, 0.294040325232304, 0.29570805004404671,
    0.297374874077786, 0.29904079225608671, 0.30070579950427312,
    0.30236989075044446, 0.30403306092549026, 0.30569530496310565,
    0.30735661779980705, 0.3090169943749474, 0.31067642963073178,
    0.31233491851223255, 0.31399245596740494, 0.31564903694710245,
    0.31730465640509214, 0.31895930929807, 0.32061299058567627,
    0.32226569523051107, 0.3239174181981494, 0.3255681544571567,
    0.32721789897910392, 0.32886664673858323, 0.330514392713223,
    0.33216113188370333, 0.33380685923377096, 0.33545156975025503,
    0.33709525842308208, 0.33873792024529137, 0.34037955021305011,
    0.34202014332566871, 0.34365969458561607, 0.34529819899853464,
    0.34693565157325584, 0.34857204732181518, 0.35020738125946743,
    0.35184164840470183, 0.35347484377925714, 0.35510696240813705,
    0.35673799931962519, 0.35836794954530027, 0.35999680812005119,
    0.36162457008209231, 0.36325123047297836, 0.36487678433761966,
    0.3665012267242973, 0.368124552684678, 0.36974675727382933,
    0.37136783555023484, 0.37298778257580895, 0.37460659341591207,
    0.37622426313936563, 0.37784078681846711, 0.37945615952900508,
    0.38107037635027408, 0.38268343236508978, 0.38429532265980371,
    0.38590604232431863, 0.387515586452103, 0.38912395014020623,
    0.39073112848927377, 0.39233711660356146, 0.3939419095909511,
    0.39554550256296495, 0.39714789063478062, 0.3987490689252462,
    0.40034903255689497, 0.40194777665596015, 0.40354529635239006,
    0.40514158677986256, 0.40673664307580021, 0.40833046038138493,
    0.4099230338415728, 0.41151435860510882, 0.41310442982454182,
    0.414693242656239, 0.41628079226040116, 0.41786707380107674,
    0.4194520824461771, 0.421035813367491, 0.42261826174069944,
    0.42419942274539019, 0.42577929156507266, 0.42735786338719239,
    0.42893513340314587, 0.43051109680829514, 0.43208574880198231,
    0.43365908458754432, 0.43523109937232751, 0.43680178836770223,
    0.4383711467890774, 0.43993916985591514, 0.4415058527917452,
    0.44307119082417973, 0.44463517918492751, 0.44619781310980883,
    0.44775908783876972, 0.44931899861589664, 0.45087754068943076,
    0.4524347093117827, 0.45399049973954675, 0.45554490723351554,
    0.45709792705869418, 0.45864955448431494, 0.46019978478385165,
    0.46174861323503391, 0.46329603511986173, 0.46484204572461962,
    0.46638664033989119, 0.4679298142605734, 0.46947156278589081,
    0.47101188121941, 0.472550764869054, 0.47408820904711629,
    0.47562420907027525, 0.47715876025960846, 0.47869185794060681,
    0.48022349744318893, 0.48175367410171532, 0.48328238325500239,
    0.48480962024633706, 0.4863353804234905, 0.48785965913873269,
    0.48938245174884626, 0.49090375361514088, 0.49242356010346716,
    0.493941866584231, 0.4954586684324076, 0.49697396102755537,
    0.49848773975383037, 0.5, 0.50151073715945738, 0.50301994663023508,
    0.50452762381501925, 0.50603376412116374, 0.50753836296070409,
    0.50904141575037132, 0.51054291791160566, 0.51204286487057149,
    0.51354125205817, 0.51503807491005416, 0.51653332886664183,
    0.51802700937313018, 0.51951911187950939, 0.52100963184057636,
    0.5224985647159488, 0.5239859059700791, 0.52547165107226779,
    0.52695579549667759, 0.52843833472234714, 0.5299192642332049,
    0.53139857951808289, 0.53287627607073, 0.53435234938982634,
    0.53582679497899666, 0.53729960834682389, 0.538770785006863,
    0.540240320477655, 0.54170821028273985, 0.54317444995067066,
    0.54463903501502708, 0.54610196101442909, 0.54756322349255027,
    0.5490228179981318, 0.55048074008499559, 0.55193698531205815,
    0.55339154924334411, 0.55484442744799933, 0.55629561550030482,
    0.55774510897969021, 0.5591929034707469, 0.56063899456324173,
    0.56208337785213058, 0.56352604893757152, 0.564967003424938,
    0.56640623692483283, 0.56784374505310131, 0.5692795234308442,
    0.57071356768443171, 0.57214587344551626, 0.573576436351046,
    0.57500525204327857, 0.57643231616979318, 0.5778576243835053,
    0.57928117234267884, 0.58070295571093977, 0.58212297015728942,
    0.58354121135611747, 0.5849576749872154, 0.58637235673578925,
    0.58778525229247314, 0.58919635735334208, 0.59060566761992539,
    0.59201317879921955, 0.59341888660370146, 0.59482278675134126,
    0.59622487496561583, 0.59762514697552116, 0.59902359851558584,
    0.600420225325884, 0.60181502315204827, 0.6032079877452825,
    0.60459911486237483, 0.605988400265711, 0.60737583972328668,
    0.60876142900872066, 0.61014516390126761, 0.61152704018583115,
    0.61290705365297649, 0.61428520009894327, 0.61566147532565829,
    0.61703587514074865, 0.61840839535755421, 0.61977903179514016,
    0.62114778027831041, 0.62251463663761952, 0.6238795967093862,
    0.62524265633570519, 0.62660381136446053, 0.62796305764933791,
    0.6293203910498375, 0.63067580743128626, 0.63202930266485091,
    0.63338087262755016, 0.6347305132022677, 0.636078220277764,
    0.63742398974868963, 0.63876781751559764, 0.64010969948495544,
    0.6414496315691578, 0.64278760968653925, 0.64412362976138648,
    0.64545768772395051, 0.64678977951045957, 0.64811990106313089,
    0.64944804833018366, 0.65077421726585094, 0.65209840383039219,
    0.65342060399010538, 0.65474081371733972, 0.65605902899050728,
    0.65737524579409579, 0.65868946011868046, 0.66000166796093673,
    0.66131186532365183, 0.6626200482157375, 0.66392621265224161,
    0.66523035465436087, 0.6665324702494525, 0.6678325554710467,
    0.66913060635885824, 0.67042661895879907, 0.67172058932299017,
    0.67301251350977331, 0.67430238758372341, 0.67559020761566024,
    0.67687596968266073, 0.67815966986807064, 0.67944130426151661,
    0.68072086895891781, 0.68199836006249848, 0.68327377368079911,
    0.68454710592868873, 0.68581835292737625, 0.687087510804423,
    0.688354575693754, 0.6896195437356698, 0.69088241107685844,
    0.6921431738704068, 0.693401828275813, 0.69465837045899737,
    0.69591279659231442, 0.69716510285456457, 0.69841528543100584,
    0.69966334051336543, 0.7009092642998509, 0.7021530529951624,
    0.70339470281050387, 0.7046342099635946, 0.705871570678681,
    0.70710678118654746, 0.7083398377245288, 0.70957073653652092,
    0.71079947387299247, 0.7120260459909965, 0.71325044915418156,
    0.71447267963280336, 0.71569273370373587, 0.71691060765048276,
    0.71812629776318881, 0.71933980033865119, 0.72055111168033037,
    0.72176022809836216, 0.72296714590956823, 0.72417186143746748,
    0.72537437101228763, 0.72657467097097594, 0.7277727576572105,
    0.72896862742141155, 0.73016227662075239, 0.73135370161917046,
    0.73254289878737877, 0.73372986450287636, 0.73491459514995994,
    0.73609708711973432, 0.73727733681012408, 0.7384553406258838,
    0.73963109497860968, 0.74080459628675011, 0.74197584097561642,
    0.74314482547739424, 0.74431154623115414, 0.74547599968286227,
    0.74663818228539136, 0.74779809049853185, 0.74895572078900219,
    0.75011106963045959, 0.75126413350351118, 0.75241490889572449,
    0.75356339230163782, 0.754709580222772, 0.75585346916763951,
    0.7569950556517564, 0.75813433619765225, 0.7592713073348808,
    0.76040596560003093, 0.76153830753673668, 0.76266832969568832,
    0.76379602863464213, 0.76492140091843175, 0.766044443118978,
    0.76716515181529954, 0.76828352359352337, 0.76939955504689506,
    0.77051324277578925, 0.77162458338772, 0.77273357349735106,
    0.77384020972650625, 0.77494448870417965, 0.77604640706654593,
    0.7771459614569709, 0.778243148526021, 0.77933796493147411,
    0.78043040733832969, 0.78152047241881872, 0.78260815685241392,
    0.78369345732583984, 0.78477637053308291, 0.78585689317540186,
    0.78693502196133736, 0.788010753606722, 0.78908408483469072,
    0.79015501237569041, 0.79122353296749, 0.7922896433551907,
    0.79335334029123517, 0.79441462053541811, 0.79547348085489589,
    0.79652991802419626, 0.79758392882522855, 0.79863551004729283,
    0.79968465848709058, 0.80073137094873348, 0.801775644243754,
    0.80281747519111457, 0.80385686061721739, 0.80489379735591415,
    0.80592828224851576, 0.80696031214380193, 0.8079898838980305,
    0.80901699437494745, 0.810041640445796, 0.81106381898932667,
    0.81208352689180618, 0.81310076104702766, 0.81411551835631923,
    0.81512779572855421, 0.81613759008016018, 0.81714489833512849,
    0.8181497174250234, 0.8191520442889918, 0.82015187587377214,
    0.821149209133704, 0.82214404103073746, 0.82313636853444183,
    0.8241261886220157, 0.82511349827829517, 0.82609829449576389,
    0.82708057427456183, 0.8280603346224944, 0.82903757255504174,
    0.83001228509536751, 0.83098446927432834, 0.83195412213048259,
    0.83292124071009954, 0.83388582206716821, 0.83484786326340654,
    0.83580736136827027, 0.83676431345896174, 0.83771871662043884,
    0.838670567945424, 0.83961986453441317, 0.84056660349568424,
    0.84151078194530615, 0.84245239700714758, 0.84339144581288561,
    0.84432792550201508, 0.84526183322185611, 0.846193166127564,
    0.84712192138213716, 0.84804809615642607, 0.84897168762914144,
    0.849892692986864, 0.85081110942405125, 0.85172693414304768,
    0.85264016435409218, 0.85355079727532746, 0.85445883013280743,
    0.85536426016050671, 0.85626708460032819, 0.85716730070211233,
    0.85806490572364458, 0.85895989693066443, 0.85985227159687339,
    0.86074202700394364, 0.86162916044152571, 0.86251366920725747,
    0.86339555060677164, 0.86427480195370476, 0.86515142056970451,
    0.86602540378443871, 0.86689674893560276, 0.86776545336892852,
    0.86863151443819131, 0.86949492950521912, 0.8703556959398997,
    0.87121381112018936, 0.87206927243212062, 0.87292207726980964,
    0.8737722230354652, 0.87461970713939574, 0.87546452700001787,
    0.87630668004386358, 0.87714616370558873, 0.87798297542798054,
    0.87881711266196538, 0.87964857286661646, 0.880477353509162,
    0.88130345206499217, 0.88212686601766777, 0.88294759285892688,
    0.88376563008869347, 0.88458097521508394, 0.88539362575441594,
    0.88620357923121473, 0.88701083317822171, 0.88781538513640135,
    0.88861723265494885, 0.88941637329129752, 0.89021280461112651,
    0.89100652418836779, 0.89179752960521408, 0.89258581845212548,
    0.89337138832783758, 0.89415423683936812, 0.89493436160202511,
    0.8957117602394129, 0.89648643038344056, 0.89725836967432837,
    0.89802757576061565, 0.898794046299167, 0.89955777895518041,
    0.90031877140219352, 0.90107702132209166, 0.9018325264051138,
    0.90258528434986063, 0.90333529286330083, 0.90408254966077839,
    0.90482705246601958, 0.90556879901113962, 0.90630778703664994,
    0.907044014291465, 0.90777747853290869, 0.90850817752672175,
    0.90923610904706853, 0.90996127087654322, 0.91068366080617713,
    0.91140327663544518, 0.912120116172273, 0.91283417723304283,
    0.91354545764260087, 0.91425395523426367, 0.91495966784982485,
    0.915662593339561, 0.91636272956223963, 0.917060074385124,
    0.91775462568398114, 0.91844638134308709, 0.9191353392552345,
    0.91982149732173757, 0.92050485345244037, 0.92118540556572115,
    0.92186315158850052, 0.92253808945624638, 0.9232102171129809,
    0.92387953251128674, 0.92454603361231313, 0.92520971838578214,
    0.92587058480999473, 0.92652863087183734, 0.92718385456678742,
    0.92783625389892, 0.92848582688091352, 0.92913257153405615,
    0.92977648588825146, 0.93041756798202457, 0.93105581586252828,
    0.9316912275855489, 0.93232380121551228, 0.932953534825489,
    0.93358042649720174, 0.93420447432102949, 0.93482567639601444,
    0.93544403082986727, 0.93605953573897327, 0.93667218924839757,
    0.93728198949189157, 0.9378889346118976, 0.93849302275955593,
    0.93909425209470909, 0.93969262078590832, 0.94028812701041886,
    0.94088076895422545, 0.941470544812038, 0.94205745278729669,
    0.94264149109217843, 0.943222657947601, 0.94380095158322941,
    0.944376370237481, 0.94494891215753085, 0.94551857559931674,
    0.9460853588275453, 0.94664926011569639, 0.94721027774602884,
    0.94776841000958567, 0.94832365520619932, 0.94887601164449653,
    0.94942547764190388, 0.94997205152465247, 0.95051573162778369,
    0.95105651629515353, 0.95159440387943817, 0.9521293927421387,
    0.9526614812535863, 0.953190667792947, 0.95371695074822693,
    0.95424032851627683, 0.95476079950279746, 0.95527836212234363,
    0.95579301479833012, 0.95630475596303544, 0.95681358405760741,
    0.95731949753206724, 0.9578224948453149, 0.95832257446513325,
    0.958819734868193, 0.95931397454005751, 0.95980529197518694,
    0.96029368567694307, 0.96077915415759418, 0.96126169593831889,
    0.96174130954921133, 0.96221799352928539, 0.96269174642647881,
    0.96316256679765822, 0.963630453208623, 0.96409540423411011,
    0.96455741845779808, 0.96501649447231141, 0.96547263087922508,
    0.96592582628906831, 0.9663760793213293, 0.96682338860445938,
    0.96726775277587673, 0.96770917048197125, 0.96814764037810774,
    0.96858316112863108, 0.96901573140686947, 0.96944534989513886,
    0.96987201528474676, 0.97029572627599647, 0.97071648157819079,
    0.97113427990963608, 0.97154911999764615, 0.97196100057854629,
    0.97236992039767656, 0.97277587820939659, 0.97317887277708826,
    0.97357890287316029, 0.97397596727905156, 0.97437006478523525,
    0.97476119419122176, 0.97514935430556327, 0.97553454394585659,
    0.97591676193874743, 0.97629600711993336, 0.97667227833416792,
    0.97704557443526363, 0.97741589428609588, 0.97778323675860612,
    0.97814760073380569, 0.97850898510177842, 0.978867388761685,
    0.97922281062176575, 0.97957524959934406, 0.97992470462082959,
    0.98027117462172186, 0.980614658546613, 0.98095515534919164,
    0.98129266399224513, 0.981627183447664, 0.98195871269644364,
    0.98228725072868861, 0.98261279654361522, 0.98293534914955427,
    0.98325490756395462, 0.98357147081338592, 0.98388503793354165,
    0.98419560796924188, 0.98450317997443659, 0.984807753012208,
    0.98510932615477387, 0.98540789848349009, 0.98570346908885353,
    0.98599603707050487, 0.98628560153723144, 0.98657216160696937,
    0.98685571640680725, 0.98713626507298791, 0.98741380675091139,
    0.98768834059513777, 0.9879598657693891, 0.98822838144655278,
    0.98849388680868355, 0.98875638104700581, 0.98901586336191682,
    0.98927233296298833, 0.98952578906896949, 0.989776230907789,
    0.99002365771655754, 0.99026806874157036, 0.9905094632383088,
    0.9907478404714436, 0.99098319971483628, 0.99121554025154168,
    0.99144486137381038, 0.99167116238309039, 0.99189444259002968,
    0.99211470131447788, 0.99233193788548868, 0.992546151641322,
    0.99275734192944554, 0.99296550810653694, 0.99317064953848611,
    0.99337276560039645, 0.99357185567658746, 0.99376791916059637,
    0.99396095545517971, 0.99415096397231539, 0.99433794413320464,
    0.99452189536827329, 0.99470281711717423, 0.99488070882878821,
    0.99505556996122624, 0.99522739998183118, 0.99539619836717885,
    0.99556196460308, 0.99572469818458209, 0.99588439861597033,
    0.99604106541076953, 0.99619469809174555, 0.99634529619090639,
    0.99649285924950437, 0.9966373868180366, 0.99677887845624713,
    0.996917333733128, 0.99705275222692025, 0.99718513352511573,
    0.9973144772244581, 0.997440782930944, 0.9975640502598242,
    0.99768427883560529, 0.99780146829205, 0.997915618272179,
    0.99802672842827156, 0.99813479842186692, 0.99823982792376531,
    0.99834181661402832, 0.998440764181981, 0.99853667032621174,
    0.99862953475457383, 0.99871935718418625, 0.99880613734143409,
    0.99888987496197, 0.99897056979071475, 0.9990482215818578,
    0.99912283009885838, 0.999194395114446, 0.99926291641062115,
    0.99932839377865623, 0.99939082701909576, 0.9994502159417572,
    0.9995065603657316, 0.999559860119384, 0.99961011504035435,
    0.99965732497555726, 0.99970148978118312, 0.99974260932269832,
    0.9997806834748455, 0.99981571212164422, 0.99984769515639127,
    0.99987663248166059, 0.99990252400930424, 0.999925369660452,
    0.99994516936551214, 0.99996192306417131, 0.99997563070539475,
    0.99998629224742674, 0.99999390765779039, 0.99999847691328769, 1.0,
    0.99999847691328769, 0.99999390765779039, 0.99998629224742674,
    0.99997563070539475, 0.99996192306417131, 0.99994516936551214,
    0.999925369660452, 0.99990252400930424, 0.99987663248166059,
    0.99984769515639127, 0.99981571212164422, 0.9997806834748455,
    0.99974260932269832, 0.99970148978118312, 0.99965732497555726,
    0.99961011504035435, 0.999559860119384, 0.9995065603657316,
    0.9994502159417572, 0.99939082701909576, 0.99932839377865623,
    0.99926291641062115, 0.999194395114446, 0.99912283009885838,
    0.9990482215818578, 0.99897056979071475, 0.99888987496197,
    0.99880613734143409, 0.99871935718418614, 0.99862953475457383,
    0.99853667032621174, 0.998440764181981, 0.99834181661402832,
    0.99823982792376531, 0.998134798421867, 0.99802672842827156,
    0.997915618272179, 0.99780146829205, 0.99768427883560529, 0.9975640502598242,
    0.997440782930944, 0.9973144772244581, 0.99718513352511573,
    0.99705275222692025, 0.996917333733128, 0.99677887845624713,
    0.9966373868180366, 0.99649285924950437, 0.99634529619090639,
    0.99619469809174555, 0.99604106541076953, 0.99588439861597033,
    0.99572469818458209, 0.99556196460308, 0.99539619836717885,
    0.99522739998183118, 0.99505556996122635, 0.99488070882878821,
    0.99470281711717423, 0.99452189536827329, 0.99433794413320464,
    0.99415096397231539, 0.99396095545517971, 0.99376791916059637,
    0.99357185567658746, 0.99337276560039645, 0.99317064953848611,
    0.99296550810653694, 0.99275734192944554, 0.992546151641322,
    0.99233193788548868, 0.99211470131447776, 0.99189444259002968,
    0.99167116238309039, 0.99144486137381038, 0.99121554025154168,
    0.99098319971483628, 0.9907478404714436, 0.9905094632383088,
    0.99026806874157036, 0.99002365771655754, 0.989776230907789,
    0.98952578906896949, 0.98927233296298833, 0.98901586336191682,
    0.98875638104700592, 0.98849388680868355, 0.98822838144655278,
    0.9879598657693891, 0.98768834059513777, 0.98741380675091139,
    0.98713626507298791, 0.98685571640680725, 0.98657216160696948,
    0.98628560153723144, 0.985996037070505, 0.98570346908885353,
    0.98540789848349009, 0.98510932615477387, 0.984807753012208,
    0.98450317997443659, 0.984195607969242, 0.98388503793354165,
    0.98357147081338592, 0.98325490756395462, 0.98293534914955427,
    0.98261279654361522, 0.98228725072868872, 0.98195871269644364,
    0.981627183447664, 0.98129266399224513, 0.98095515534919153,
    0.980614658546613, 0.98027117462172186, 0.97992470462082959,
    0.97957524959934406, 0.97922281062176575, 0.978867388761685,
    0.97850898510177842, 0.97814760073380569, 0.97778323675860612,
    0.97741589428609588, 0.97704557443526363, 0.97667227833416792,
    0.97629600711993336, 0.97591676193874743, 0.97553454394585659,
    0.97514935430556327, 0.97476119419122176, 0.97437006478523525,
    0.97397596727905167, 0.97357890287316029, 0.97317887277708826,
    0.97277587820939659, 0.97236992039767667, 0.97196100057854617,
    0.97154911999764615, 0.97113427990963608, 0.97071648157819079,
    0.97029572627599647, 0.96987201528474676, 0.96944534989513886,
    0.96901573140686947, 0.96858316112863108, 0.96814764037810774,
    0.96770917048197125, 0.96726775277587684, 0.96682338860445938,
    0.96637607932132941, 0.96592582628906831, 0.96547263087922508,
    0.96501649447231141, 0.96455741845779808, 0.96409540423411011,
    0.963630453208623, 0.9631625667976581, 0.96269174642647881,
    0.96221799352928528, 0.96174130954921133, 0.96126169593831878,
    0.96077915415759407, 0.96029368567694307, 0.95980529197518694,
    0.95931397454005751, 0.958819734868193, 0.95832257446513325,
    0.9578224948453149, 0.95731949753206724, 0.95681358405760741,
    0.95630475596303544, 0.95579301479833012, 0.95527836212234374,
    0.95476079950279746, 0.95424032851627694, 0.95371695074822693,
    0.953190667792947, 0.9526614812535863, 0.9521293927421387,
    0.95159440387943817, 0.95105651629515364, 0.95051573162778369,
    0.94997205152465258, 0.94942547764190388, 0.94887601164449653,
    0.94832365520619932, 0.94776841000958567, 0.94721027774602884,
    0.94664926011569639, 0.9460853588275453, 0.94551857559931685,
    0.94494891215753085, 0.94437637023748111, 0.94380095158322941,
    0.943222657947601, 0.94264149109217832, 0.94205745278729669,
    0.94147054481203785, 0.94088076895422545, 0.94028812701041886,
    0.93969262078590843, 0.93909425209470909, 0.93849302275955593,
    0.9378889346118976, 0.93728198949189157, 0.93667218924839757,
    0.93605953573897327, 0.93544403082986727, 0.93482567639601444,
    0.93420447432102949, 0.93358042649720174, 0.932953534825489,
    0.93232380121551217, 0.9316912275855489, 0.93105581586252828,
    0.93041756798202446, 0.92977648588825146, 0.92913257153405615,
    0.92848582688091352, 0.92783625389892, 0.92718385456678742,
    0.92652863087183734, 0.92587058480999473, 0.92520971838578214,
    0.92454603361231313, 0.92387953251128674, 0.9232102171129809,
    0.92253808945624638, 0.92186315158850052, 0.92118540556572126,
    0.92050485345244026, 0.91982149732173768, 0.91913533925523438,
    0.9184463813430872, 0.91775462568398114, 0.917060074385124,
    0.91636272956223952, 0.91566259333956113, 0.91495966784982474,
    0.91425395523426378, 0.91354545764260087, 0.91283417723304283,
    0.912120116172273, 0.91140327663544529, 0.910683660806177,
    0.90996127087654322, 0.90923610904706864, 0.90850817752672175,
    0.90777747853290858, 0.907044014291465, 0.90630778703665,
    0.90556879901113951, 0.90482705246601947, 0.90408254966077839,
    0.90333529286330083, 0.90258528434986052, 0.90183252640511369,
    0.90107702132209155, 0.90031877140219352, 0.89955777895518019,
    0.89879404629916693, 0.89802757576061565, 0.89725836967432848,
    0.89648643038344045, 0.89571176023941279, 0.894934361602025,
    0.89415423683936823, 0.89337138832783758, 0.89258581845212537,
    0.89179752960521408, 0.8910065241883679, 0.89021280461112662,
    0.88941637329129741, 0.88861723265494874, 0.88781538513640135,
    0.88701083317822182, 0.88620357923121462, 0.88539362575441583,
    0.88458097521508394, 0.88376563008869347, 0.88294759285892688,
    0.88212686601766777, 0.88130345206499228, 0.880477353509162,
    0.87964857286661646, 0.87881711266196538, 0.87798297542798054,
    0.87714616370558884, 0.87630668004386347, 0.87546452700001787,
    0.87461970713939585, 0.87377222303546531, 0.87292207726980953,
    0.87206927243212051, 0.87121381112018947, 0.8703556959398997,
    0.86949492950521889, 0.8686315144381912, 0.86776545336892841,
    0.86689674893560287, 0.8660254037844386, 0.8651514205697044,
    0.86427480195370465, 0.86339555060677176, 0.86251366920725736,
    0.86162916044152571, 0.86074202700394364, 0.8598522715968735,
    0.85895989693066432, 0.85806490572364447, 0.85716730070211233,
    0.85626708460032819, 0.85536426016050671, 0.85445883013280732,
    0.85355079727532746, 0.85264016435409229, 0.85172693414304768,
    0.85081110942405114, 0.84989269298686387, 0.84897168762914155,
    0.84804809615642607, 0.847121921382137, 0.846193166127564,
    0.84526183322185622, 0.84432792550201519, 0.84339144581288561,
    0.84245239700714747, 0.84151078194530615, 0.84056660349568435,
    0.83961986453441306, 0.838670567945424, 0.83771871662043884,
    0.83676431345896174, 0.83580736136827016, 0.83484786326340654,
    0.83388582206716821, 0.83292124071009954, 0.83195412213048248,
    0.83098446927432823, 0.83001228509536751, 0.82903757255504174,
    0.82806033462249429, 0.82708057427456172, 0.82609829449576389,
    0.82511349827829517, 0.82412618862201548, 0.82313636853444183,
    0.82214404103073746, 0.821149209133704, 0.820151875873772,
    0.81915204428899169, 0.8181497174250234, 0.8171448983351286,
    0.81613759008016007, 0.81512779572855421, 0.81411551835631923,
    0.81310076104702766, 0.8120835268918063, 0.81106381898932656,
    0.810041640445796, 0.80901699437494745, 0.80798988389803061,
    0.80696031214380182, 0.80592828224851576, 0.80489379735591415,
    0.80385686061721739, 0.80281747519111446, 0.80177564424375392,
    0.80073137094873359, 0.79968465848709058, 0.79863551004729272,
    0.79758392882522844, 0.79652991802419637, 0.795473480854896,
    0.794414620535418, 0.79335334029123517, 0.7922896433551907,
    0.79122353296749015, 0.7901550123756903, 0.78908408483469061,
    0.788010753606722, 0.78693502196133736, 0.78585689317540175,
    0.78477637053308291, 0.78369345732583984, 0.782608156852414,
    0.78152047241881861, 0.78043040733832969, 0.77933796493147411,
    0.77824314852602106, 0.77714596145697079, 0.77604640706654593,
    0.77494448870417965, 0.77384020972650625, 0.77273357349735083,
    0.77162458338771989, 0.77051324277578925, 0.76939955504689506,
    0.76828352359352325, 0.76716515181529954, 0.766044443118978,
    0.76492140091843186, 0.763796028634642, 0.76266832969568821,
    0.76153830753673668, 0.760405965600031, 0.75927130733488091,
    0.75813433619765214, 0.7569950556517564, 0.75585346916763962,
    0.75470958022277213, 0.75356339230163782, 0.75241490889572438,
    0.75126413350351118, 0.75011106963045959, 0.74895572078900208,
    0.74779809049853185, 0.74663818228539136, 0.74547599968286227,
    0.744311546231154, 0.74314482547739424, 0.74197584097561642,
    0.74080459628675011, 0.73963109497860957, 0.7384553406258838,
    0.73727733681012408, 0.73609708711973443, 0.73491459514995983,
    0.73372986450287636, 0.73254289878737877, 0.73135370161917057,
    0.73016227662075228, 0.72896862742141144, 0.7277727576572105,
    0.72657467097097594, 0.72537437101228752, 0.72417186143746748,
    0.72296714590956823, 0.72176022809836227, 0.72055111168033026,
    0.71933980033865108, 0.71812629776318881, 0.71691060765048287,
    0.71569273370373576, 0.71447267963280336, 0.71325044915418156,
    0.7120260459909965, 0.71079947387299236, 0.70957073653652081,
    0.7083398377245288, 0.70710678118654757, 0.70587157067868112,
    0.7046342099635946, 0.70339470281050387, 0.70215305299516251,
    0.700909264299851, 0.69966334051336532, 0.69841528543100584,
    0.69716510285456457, 0.69591279659231442, 0.69465837045899714,
    0.693401828275813, 0.6921431738704068, 0.69088241107685855,
    0.68961954373566969, 0.68835457569375391, 0.687087510804423,
    0.68581835292737636, 0.6845471059286885, 0.68327377368079911,
    0.68199836006249859, 0.68072086895891792, 0.67944130426151639,
    0.67815966986807052, 0.67687596968266073, 0.67559020761566035,
    0.67430238758372329, 0.67301251350977331, 0.67172058932299028,
    0.67042661895879918, 0.669130606358858, 0.66783255547104659,
    0.6665324702494525, 0.665230354654361, 0.66392621265224139,
    0.66262004821573739, 0.66131186532365183, 0.66000166796093684,
    0.65868946011868035, 0.65737524579409568, 0.65605902899050728,
    0.65474081371733983, 0.65342060399010526, 0.65209840383039208,
    0.65077421726585094, 0.64944804833018377, 0.64811990106313067,
    0.64678977951045946, 0.64545768772395051, 0.6441236297613866,
    0.64278760968653947, 0.6414496315691578, 0.64010969948495544,
    0.63876781751559775, 0.63742398974868986, 0.63607822027776384,
    0.63473051320226759, 0.63338087262755027, 0.632029302664851,
    0.63067580743128615, 0.62932039104983739, 0.62796305764933791,
    0.62660381136446064, 0.62524265633570508, 0.62387959670938609,
    0.62251463663761963, 0.62114778027831052, 0.61977903179514,
    0.6184083953575541, 0.61703587514074865, 0.6156614753256584,
    0.614285200098943, 0.61290705365297637, 0.61152704018583126,
    0.61014516390126772, 0.60876142900872043, 0.60737583972328657,
    0.605988400265711, 0.60459911486237494, 0.60320798774528228,
    0.60181502315204816, 0.600420225325884, 0.599023598515586,
    0.59762514697552094, 0.59622487496561571, 0.59482278675134126,
    0.59341888660370146, 0.59201317879921933, 0.59060566761992528,
    0.58919635735334208, 0.58778525229247325, 0.58637235673578914,
    0.58495767498721529, 0.58354121135611747, 0.58212297015728953,
    0.58070295571093988, 0.57928117234267873, 0.5778576243835053,
    0.57643231616979329, 0.57500525204327868, 0.57357643635104594,
    0.57214587344551615, 0.57071356768443171, 0.56927952343084431,
    0.56784374505310109, 0.56640623692483283, 0.564967003424938,
    0.56352604893757152, 0.56208337785213047, 0.56063899456324173,
    0.5591929034707469, 0.55774510897969032, 0.5562956155003046,
    0.55484442744799922, 0.55339154924334411, 0.55193698531205826,
    0.55048074008499537, 0.54902281799813168, 0.54756322349255027,
    0.5461019610144292, 0.54463903501502686, 0.54317444995067055,
    0.54170821028273985, 0.54024032047765513, 0.53877078500686293,
    0.53729960834682378, 0.53582679497899666, 0.53435234938982645,
    0.53287627607072985, 0.53139857951808278, 0.5299192642332049,
    0.52843833472234725, 0.52695579549667737, 0.52547165107226768,
    0.5239859059700791, 0.52249856471594891, 0.52100963184057614,
    0.51951911187950928, 0.51802700937313018, 0.51653332886664194,
    0.51503807491005438, 0.51354125205817, 0.51204286487057149,
    0.51054291791160578, 0.50904141575037143, 0.50753836296070409,
    0.50603376412116374, 0.50452762381501937, 0.50301994663023519,
    0.50151073715945726, 0.49999999999999994, 0.49848773975383037,
    0.49697396102755548, 0.49545866843240738, 0.49394186658423095,
    0.49242356010346716, 0.490903753615141, 0.48938245174884609,
    0.48785965913873264, 0.48633538042349056, 0.48480962024633717,
    0.48328238325500222, 0.48175367410171521, 0.48022349744318893,
    0.47869185794060692, 0.47715876025960824, 0.47562420907027514,
    0.47408820904711629, 0.47255076486905412, 0.47101188121940984,
    0.46947156278589069, 0.4679298142605734, 0.4663866403398913,
    0.46484204572461946, 0.46329603511986162, 0.46174861323503391,
    0.46019978478385176, 0.45864955448431477, 0.45709792705869406,
    0.45554490723351554, 0.45399049973954686, 0.45243470931178253,
    0.45087754068943064, 0.44931899861589658, 0.44775908783876978,
    0.44619781310980861, 0.44463517918492734, 0.44307119082417967,
    0.44150585279174526, 0.4399391698559153, 0.43837114678907729,
    0.43680178836770223, 0.43523109937232757, 0.43365908458754449,
    0.43208574880198214, 0.43051109680829508, 0.42893513340314593,
    0.42735786338719256, 0.42577929156507249, 0.42419942274539013,
    0.4226182617406995, 0.42103581336749119, 0.41945208244617693,
    0.41786707380107668, 0.41628079226040121, 0.41469324265623919,
    0.4131044298245416, 0.41151435860510871, 0.4099230338415728,
    0.40833046038138504, 0.40673664307580004, 0.40514158677986245,
    0.40354529635239006, 0.40194777665596026, 0.40034903255689475,
    0.39874906892524614, 0.39714789063478062, 0.39554550256296506,
    0.39394190959095093, 0.39233711660356141, 0.39073112848927377,
    0.38912395014020634, 0.38751558645210277, 0.38590604232431852,
    0.38429532265980371, 0.38268343236508989, 0.38107037635027391,
    0.37945615952900497, 0.37784078681846711, 0.37622426313936569,
    0.37460659341591179, 0.37298778257580878, 0.37136783555023478,
    0.36974675727382939, 0.36812455268467814, 0.36650122672429714,
    0.36487678433761966, 0.36325123047297841, 0.36162457008209248,
    0.35999680812005108, 0.35836794954530021, 0.35673799931962524,
    0.35510696240813722, 0.353474843779257, 0.35184164840470178,
    0.35020738125946754, 0.34857204732181535, 0.34693565157325573,
    0.34529819899853459, 0.34365969458561613, 0.34202014332566888,
    0.34037955021304994, 0.33873792024529131, 0.33709525842308213,
    0.33545156975025514, 0.33380685923377074, 0.33216113188370322,
    0.33051439271322308, 0.3288666467385834, 0.32721789897910375,
    0.32556815445715659, 0.32391741819814945, 0.32226569523051118,
    0.32061299058567605, 0.31895930929806987, 0.31730465640509214,
    0.31564903694710256, 0.31399245596740472, 0.31233491851223244,
    0.31067642963073178, 0.30901699437494751, 0.30735661779980683,
    0.30569530496310554, 0.30403306092549026, 0.30236989075044463,
    0.3007057995042729, 0.29904079225608654, 0.29737487407778596,
    0.29570805004404677, 0.29404032523230372, 0.2923717047227366,
    0.29070219359825245, 0.28903179694447168, 0.28736051984971217,
    0.28568836740497344, 0.28401534470392259, 0.28234145684287654,
    0.280666708920788, 0.27899110603922911, 0.27731465330237776,
    0.27563735581699922, 0.27395921869243262, 0.27228024704057419,
    0.27060044597586358, 0.26891982061526576, 0.267238376078257,
    0.26555611748680863, 0.26387304996537281, 0.26218917864086477,
    0.26050450864264851, 0.25881904510252057, 0.25713279315469612,
    0.25544575793579055, 0.25375794458480577, 0.25206935824311344,
    0.25038000405444133, 0.24868988716485482, 0.24699901272274305,
    0.24530738587880238, 0.24361501178602243, 0.24192189559966773,
    0.24022804247726384, 0.23853345757858069, 0.23683814606561859,
    0.23514211310259003, 0.23344536385590553, 0.23174790349415711,
    0.23004973718810431, 0.22835087011065575, 0.22665130743685516,
    0.22495105434386478, 0.22325011601095124, 0.22154849761946729,
    0.21984620435283761, 0.21814324139654231, 0.21643961393810274,
    0.21473532716706317, 0.21303038627497667, 0.21132479645538885,
    0.20961856290382166, 0.20791169081775931, 0.20620418539662971,
    0.20449605184179051, 0.20278729535651233, 0.20107792114596462,
    0.19936793441719725, 0.19765734037912633, 0.19594614424251752,
    0.19423435121997193, 0.1925219665259075, 0.19080899537654497,
    0.18909544298989112, 0.18738131458572457, 0.18566661538557724,
    0.1839513506127203, 0.18223552549214728, 0.1805191452505599,
    0.17880221511634964, 0.17708474031958343, 0.17536672609198692,
    0.17364817766693028, 0.17192910027940958, 0.1702094991660327,
    0.1684893795650024, 0.16676874671610217, 0.16504760586067765,
    0.16332596224162238, 0.16160382110336094, 0.15988118769183476,
    0.15815806725448356, 0.15643446504023098, 0.15471038629946787,
    0.15298583628403795, 0.15126082024721921, 0.14953534344370964,
    0.14780941112961038, 0.14608302856241151, 0.14435620100097321,
    0.14262893370551175, 0.14090123193758242, 0.13917310096006533,
    0.13744454603714665, 0.13571557243430449, 0.13398618541829224,
    0.1322563902571223, 0.13052619222005157, 0.12879559657756287,
    0.12706460860135066, 0.12533323356430409, 0.12360147674049267,
    0.12186934340514755, 0.12013683883464728, 0.1184039683065008,
    0.11667073709933312, 0.11493715049286667, 0.11320321376790689,
    0.11146893220632531, 0.10973431109104521, 0.1079993557060229,
    0.10626407133623336, 0.10452846326765329, 0.10279253678724674,
    0.10105629718294638, 0.099319749743639163, 0.097582899759149286,
    0.095845752520223912, 0.094108313318514353, 0.092370587446561722,
    0.090632580197779949, 0.08889429686644143, 0.0871557427476582,
    0.0854169231373676, 0.083677843332315288, 0.081938508630040832,
    0.080198924328858931, 0.078459095727845068, 0.076719028126818425,
    0.0749787268263276, 0.073238197127631688, 0.071497444332686025,
    0.06975647374412508, 0.068015290665248043, 0.066273900400000127,
    0.064532308252958068, 0.062790519529313138, 0.061048539534856748,
    0.059306373575961607, 0.057564026959567374, 0.055821504993163559,
    0.054078812984775154, 0.052335956242943807, 0.050592940076713395,
    0.048849769795613451, 0.047106450709642513, 0.045362988129253747,
    0.043619387365336069, 0.04187565372919981, 0.040131792532559579,
    0.038387809087519889, 0.036643708706556338, 0.034899496702501143,
    0.033155178388526114, 0.031410759078128236, 0.029666244085110809,
    0.02792163872356904, 0.026176948307872979, 0.024432178152653087,
    0.0226873335727814, 0.02094241988335711, 0.019197442399689481,
    0.017452406437283439, 0.01570731731182071, 0.013962180339145413,
    0.012217000835246974, 0.010471784116245709, 0.008726535498373959,
    0.0069812602979616844, 0.0052359638314193767, 0.0034906514152236376,
    0.0017453283658983227, 1.2246467991473532E-16, -0.0017453283658980777,
    -0.0034906514152233926, -0.0052359638314191321, -0.00698126029796144,
    -0.0087265354983737126, -0.010471784116245463, -0.01221700083524673,
    -0.013962180339145168, -0.015707317311820464, -0.017452406437283192,
    -0.019197442399689235, -0.020942419883356867, -0.022687333572781156,
    -0.024432178152652841, -0.026176948307872733, -0.027921638723568797,
    -0.029666244085110566, -0.031410759078127994, -0.033155178388525872,
    -0.0348994967025009, -0.036643708706556095, -0.038387809087519646,
    -0.040131792532559329, -0.041875653729199568, -0.043619387365335827,
    -0.0453629881292535, -0.04710645070964227, -0.048849769795613208,
    -0.050592940076713153, -0.052335956242943564, -0.054078812984774911,
    -0.055821504993163316, -0.057564026959567131, -0.059306373575961364,
    -0.0610485395348565, -0.0627905195293129, -0.064532308252957832,
    -0.066273900399999891, -0.068015290665247807, -0.069756473744124831,
    -0.071497444332685789, -0.073238197127631452, -0.074978726826327349,
    -0.07671902812681819, -0.078459095727844819, -0.0801989243288587,
    -0.081938508630040582, -0.083677843332315038, -0.085416923137367359,
    -0.087155742747657944, -0.0888942968664412, -0.090632580197779714,
    -0.092370587446561472, -0.0941083133185141, -0.095845752520223662,
    -0.097582899759149036, -0.099319749743638913, -0.10105629718294615,
    -0.10279253678724651, -0.10452846326765305, -0.10626407133623313,
    -0.10799935570602266, -0.10973431109104496, -0.11146893220632506,
    -0.11320321376790664, -0.11493715049286643, -0.11667073709933287,
    -0.11840396830650055, -0.12013683883464703, -0.12186934340514731,
    -0.12360147674049242, -0.12533323356430384, -0.12706460860135041,
    -0.12879559657756262, -0.13052619222005132, -0.13225639025712208,
    -0.13398618541829202, -0.13571557243430424, -0.1374445460371464,
    -0.13917310096006508, -0.14090123193758219, -0.14262893370551152,
    -0.14435620100097296, -0.14608302856241126, -0.14780941112961016,
    -0.14953534344370939, -0.15126082024721896, -0.15298583628403772,
    -0.15471038629946765, -0.15643446504023073, -0.15815806725448331,
    -0.15988118769183451, -0.16160382110336069, -0.16332596224162213,
    -0.16504760586067743, -0.16676874671610195, -0.16848937956500215,
    -0.17020949916603245, -0.17192910027940933, -0.17364817766693003,
    -0.1753667260919867, -0.17708474031958318, -0.17880221511634942,
    -0.18051914525055968, -0.18223552549214703, -0.18395135061272008,
    -0.18566661538557702, -0.18738131458572432, -0.18909544298989089,
    -0.19080899537654472, -0.19252196652590725, -0.19423435121997168,
    -0.1959461442425173, -0.19765734037912608, -0.199367934417197,
    -0.20107792114596437, -0.2027872953565121, -0.20449605184179029,
    -0.20620418539662946, -0.20791169081775907, -0.20961856290382141,
    -0.2113247964553886, -0.21303038627497642, -0.21473532716706292,
    -0.21643961393810252, -0.21814324139654206, -0.21984620435283739,
    -0.22154849761946704, -0.22325011601095102, -0.22495105434386453,
    -0.22665130743685491, -0.2283508701106555, -0.23004973718810406,
    -0.23174790349415689, -0.23344536385590528, -0.23514211310258978,
    -0.23683814606561834, -0.23853345757858044, -0.24022804247726359,
    -0.24192189559966751, -0.24361501178602218, -0.24530738587880213,
    -0.2469990127227428, -0.24868988716485457, -0.25038000405444111,
    -0.25206935824311322, -0.25375794458480555, -0.25544575793579033,
    -0.25713279315469589, -0.25881904510252035, -0.26050450864264824,
    -0.26218917864086455, -0.26387304996537259, -0.26555611748680841,
    -0.26723837607825679, -0.26891982061526554, -0.27060044597586336,
    -0.27228024704057396, -0.27395921869243239, -0.275637355816999,
    -0.27731465330237753, -0.27899110603922889, -0.28066670892078771,
    -0.28234145684287631, -0.28401534470392237, -0.28568836740497316,
    -0.28736051984971195, -0.28903179694447145, -0.29070219359825222,
    -0.29237170472273638, -0.2940403252323035, -0.29570805004404654,
    -0.29737487407778573, -0.29904079225608632, -0.30070579950427268,
    -0.30236989075044435, -0.30403306092549004, -0.30569530496310532,
    -0.30735661779980661, -0.30901699437494728, -0.31067642963073155,
    -0.31233491851223222, -0.31399245596740449, -0.31564903694710233,
    -0.31730465640509192, -0.31895930929806965, -0.32061299058567583,
    -0.32226569523051096, -0.32391741819814918, -0.32556815445715637,
    -0.32721789897910353, -0.32886664673858312, -0.33051439271322286,
    -0.332161131883703, -0.33380685923377051, -0.33545156975025492,
    -0.33709525842308191, -0.33873792024529109, -0.34037955021304972,
    -0.34202014332566866, -0.3436596945856159, -0.34529819899853437,
    -0.34693565157325545, -0.34857204732181513, -0.35020738125946727,
    -0.35184164840470156, -0.35347484377925675, -0.355106962408137,
    -0.356737999319625, -0.3583679495453, -0.35999680812005086,
    -0.36162457008209226, -0.36325123047297819, -0.36487678433761939,
    -0.36650122672429691, -0.36812455268467792, -0.36974675727382916,
    -0.37136783555023456, -0.37298778257580856, -0.37460659341591157,
    -0.37622426313936547, -0.37784078681846689, -0.37945615952900474,
    -0.38107037635027369, -0.38268343236508967, -0.38429532265980348,
    -0.3859060423243183, -0.38751558645210255, -0.38912395014020612,
    -0.39073112848927355, -0.39233711660356119, -0.39394190959095071,
    -0.39554550256296483, -0.3971478906347804, -0.39874906892524592,
    -0.40034903255689452, -0.40194777665596004, -0.40354529635238984,
    -0.40514158677986223, -0.40673664307579982, -0.40833046038138482,
    -0.40992303384157258, -0.41151435860510849, -0.41310442982454137,
    -0.41469324265623897, -0.416280792260401, -0.41786707380107646,
    -0.41945208244617671, -0.42103581336749096, -0.42261826174069927,
    -0.42419942274538991, -0.42577929156507227, -0.42735786338719234,
    -0.42893513340314571, -0.43051109680829491, -0.43208574880198192,
    -0.43365908458754426, -0.43523109937232735, -0.436801788367702,
    -0.43837114678907707, -0.43993916985591508, -0.44150585279174503,
    -0.44307119082417945, -0.44463517918492712, -0.44619781310980838,
    -0.44775908783876955, -0.44931899861589636, -0.45087754068943042,
    -0.45243470931178231, -0.45399049973954669, -0.45554490723351532,
    -0.45709792705869384, -0.45864955448431455, -0.46019978478385154,
    -0.46174861323503374, -0.46329603511986145, -0.46484204572461923,
    -0.46638664033989108, -0.46792981426057317, -0.46947156278589047,
    -0.47101188121940962, -0.4725507648690539, -0.47408820904711607,
    -0.47562420907027492, -0.477158760259608, -0.4786918579406067,
    -0.48022349744318871, -0.481753674101715, -0.483282383255002,
    -0.48480962024633695, -0.48633538042349034, -0.48785965913873242,
    -0.48938245174884587, -0.49090375361514077, -0.49242356010346694,
    -0.49394186658423073, -0.49545866843240716, -0.49697396102755526,
    -0.49848773975383015, -0.49999999999999972, -0.501510737159457,
    -0.503019946630235, -0.50452762381501914, -0.50603376412116363,
    -0.50753836296070387, -0.50904141575037121, -0.51054291791160566,
    -0.51204286487057127, -0.51354125205816981, -0.51503807491005416,
    -0.51653332886664172, -0.51802700937313, -0.519519111879509,
    -0.52100963184057592, -0.52249856471594869, -0.52398590597007888,
    -0.52547165107226745, -0.52695579549667715, -0.528438334722347,
    -0.52991926423320479, -0.53139857951808256, -0.53287627607072963,
    -0.53435234938982623, -0.53582679497899643, -0.53729960834682355,
    -0.53877078500686271, -0.54024032047765491, -0.54170821028273963,
    -0.54317444995067032, -0.54463903501502675, -0.546101961014429,
    -0.54756322349255, -0.54902281799813146, -0.55048074008499515,
    -0.55193698531205815, -0.55339154924334388, -0.554844427447999,
    -0.55629561550030449, -0.5577451089796901, -0.55919290347074668,
    -0.56063899456324151, -0.56208337785213025, -0.56352604893757141,
    -0.56496700342493777, -0.56640623692483261, -0.567843745053101,
    -0.56927952343084409, -0.57071356768443149, -0.572145873445516,
    -0.57357643635104583, -0.57500525204327846, -0.57643231616979307,
    -0.57785762438350508, -0.57928117234267851, -0.58070295571093977,
    -0.58212297015728931, -0.58354121135611725, -0.58495767498721518,
    -0.58637235673578891, -0.587785252292473, -0.58919635735334186,
    -0.59060566761992506, -0.59201317879921911, -0.59341888660370135,
    -0.594822786751341, -0.59622487496561549, -0.59762514697552072,
    -0.59902359851558573, -0.60042022532588391, -0.601815023152048,
    -0.60320798774528206, -0.60459911486237472, -0.60598840026571088,
    -0.60737583972328646, -0.60876142900872032, -0.6101451639012675,
    -0.611527040185831, -0.61290705365297626, -0.61428520009894283,
    -0.61566147532565818, -0.61703587514074854, -0.61840839535755388,
    -0.61977903179513982, -0.6211477802783103, -0.62251463663761941,
    -0.623879596709386, -0.62524265633570486, -0.62660381136446042,
    -0.6279630576493378, -0.62932039104983728, -0.63067580743128593,
    -0.6320293026648508, -0.63338087262755, -0.63473051320226737,
    -0.63607822027776362, -0.63742398974868963, -0.63876781751559752,
    -0.64010969948495522, -0.64144963156915757, -0.64278760968653925,
    -0.64412362976138637, -0.6454576877239504, -0.64678977951045924,
    -0.64811990106313055, -0.64944804833018355, -0.65077421726585072,
    -0.65209840383039186, -0.653420603990105, -0.65474081371733961,
    -0.656059028990507, -0.65737524579409545, -0.65868946011868013,
    -0.66000166796093662, -0.66131186532365172, -0.66262004821573717,
    -0.66392621265224128, -0.66523035465436076, -0.66653247024945228,
    -0.66783255547104636, -0.6691306063588579, -0.67042661895879907,
    -0.67172058932299006, -0.67301251350977309, -0.67430238758372307,
    -0.67559020761566013, -0.67687596968266062, -0.67815966986807041,
    -0.67944130426151617, -0.6807208689589177, -0.68199836006249837,
    -0.68327377368079889, -0.68454710592868839, -0.68581835292737614,
    -0.68708751080442287, -0.6883545756937538, -0.68961954373566947,
    -0.69088241107685833, -0.69214317387040669, -0.69340182827581276,
    -0.694658370458997, -0.69591279659231431, -0.69716510285456446,
    -0.69841528543100573, -0.6996633405133651, -0.7009092642998509,
    -0.70215305299516229, -0.70339470281050365, -0.70463420996359438,
    -0.705871570678681, -0.70710678118654746, -0.70833983772452869,
    -0.7095707365365207, -0.71079947387299214, -0.71202604599099639,
    -0.71325044915418134, -0.71447267963280314, -0.71569273370373554,
    -0.71691060765048265, -0.7181262977631887, -0.71933980033865086,
    -0.72055111168033, -0.72176022809836216, -0.722967145909568,
    -0.72417186143746726, -0.7253743710122873, -0.72657467097097583,
    -0.72777275765721028, -0.72896862742141133, -0.73016227662075206,
    -0.73135370161917046, -0.73254289878737855, -0.73372986450287614,
    -0.7349145951499596, -0.73609708711973432, -0.737277336810124,
    -0.73845534062588358, -0.73963109497860946, -0.74080459628675,
    -0.7419758409756162, -0.743144825477394, -0.74431154623115381,
    -0.74547599968286216, -0.74663818228539125, -0.74779809049853174,
    -0.74895572078900186, -0.75011106963045948, -0.75126413350351107,
    -0.75241490889572415, -0.7535633923016376, -0.754709580222772,
    -0.75585346916763951, -0.75699505565175618, -0.75813433619765191,
    -0.75927130733488046, -0.7604059656000306, -0.76153830753673624,
    -0.76266832969568776, -0.76379602863464158, -0.76492140091843175,
    -0.7660444431189779, -0.76716515181529932, -0.768283523593523,
    -0.76939955504689528, -0.77051324277578936, -0.77162458338772,
    -0.77273357349735106, -0.77384020972650613, -0.77494448870417942,
    -0.77604640706654582, -0.77714596145697057, -0.77824314852602061,
    -0.77933796493147367, -0.78043040733832925, -0.78152047241881817,
    -0.78260815685241381, -0.78369345732583962, -0.78477637053308269,
    -0.78585689317540164, -0.78693502196133758, -0.78801075360672213,
    -0.78908408483469072, -0.79015501237569041, -0.79122353296749,
    -0.79228964335519059, -0.79335334029123494, -0.79441462053541789,
    -0.79547348085489555, -0.79652991802419593, -0.79758392882522811,
    -0.79863551004729239, -0.79968465848709047, -0.80073137094873337,
    -0.8017756442437538, -0.80281747519111435, -0.80385686061721762,
    -0.80489379735591426, -0.80592828224851587, -0.806960312143802,
    -0.8079898838980305, -0.80901699437494734, -0.81004164044579585,
    -0.81106381898932645, -0.812083526891806, -0.81310076104702733,
    -0.81411551835631879, -0.81512779572855376, -0.81613759008015974,
    -0.81714489833512849, -0.81814971742502329, -0.81915204428899158,
    -0.82015187587377181, -0.82114920913370426, -0.82214404103073757,
    -0.82313636853444194, -0.8241261886220157, -0.825113498278295,
    -0.82609829449576377, -0.82708057427456161, -0.82806033462249418,
    -0.8290375725550414, -0.83001228509536706, -0.8309844692743279,
    -0.831954122130482, -0.83292124071009943, -0.8338858220671681,
    -0.83484786326340632, -0.83580736136827, -0.83676431345896185,
    -0.837718716620439, -0.838670567945424, -0.83961986453441317,
    -0.84056660349568424, -0.841510781945306, -0.84245239700714736,
    -0.8433914458128855, -0.84432792550201485, -0.84526183322185577,
    -0.84619316612756368, -0.84712192138213671, -0.848048096156426,
    -0.84897168762914144, -0.84989269298686376, -0.850811109424051,
    -0.85172693414304779, -0.8526401643540924, -0.85355079727532746,
    -0.85445883013280743, -0.8553642601605066, -0.85626708460032808,
    -0.85716730070211211, -0.85806490572364436, -0.85895989693066421,
    -0.85985227159687316, -0.86074202700394331, -0.86162916044152538,
    -0.862513669207257, -0.86339555060677164, -0.86427480195370454,
    -0.86515142056970429, -0.86602540378443849, -0.866896748935603,
    -0.86776545336892852, -0.86863151443819131, -0.869494929505219,
    -0.87035569593989959, -0.87121381112018936, -0.8720692724321204,
    -0.87292207726980942, -0.873772223035465, -0.87461970713939552,
    -0.87546452700001753, -0.87630668004386314, -0.87714616370558873,
    -0.87798297542798043, -0.87881711266196527, -0.87964857286661624,
    -0.88047735350916212, -0.88130345206499239, -0.88212686601766788,
    -0.882947592858927, -0.88376563008869335, -0.88458097521508383,
    -0.88539362575441571, -0.88620357923121451, -0.88701083317822149,
    -0.887815385136401, -0.88861723265494852, -0.88941637329129719,
    -0.89021280461112651, -0.89100652418836779, -0.891797529605214,
    -0.89258581845212537, -0.89337138832783769, -0.89415423683936834,
    -0.89493436160202511, -0.8957117602394129, -0.89648643038344056,
    -0.89725836967432837, -0.89802757576061554, -0.89879404629916682,
    -0.89955777895518008, -0.9003187714021933, -0.90107702132209133,
    -0.90183252640511347, -0.90258528434986018, -0.90333529286330072,
    -0.90408254966077828, -0.90482705246601935, -0.9055687990111394,
    -0.90630778703665, -0.90704401429146508, -0.90777747853290869,
    -0.90850817752672186, -0.90923610904706853, -0.9099612708765431,
    -0.910683660806177, -0.91140327663544507, -0.91212011617227273,
    -0.91283417723304261, -0.91354545764260053, -0.91425395523426378,
    -0.91495966784982474, -0.915662593339561, -0.91636272956223952,
    -0.91706007438512382, -0.91775462568398092, -0.91844638134308731,
    -0.9191353392552345, -0.91982149732173768, -0.92050485345244026,
    -0.92118540556572115, -0.92186315158850041, -0.92253808945624616,
    -0.92321021711298068, -0.92387953251128652, -0.92454603361231291,
    -0.92520971838578214, -0.92587058480999473, -0.92652863087183723,
    -0.92718385456678731, -0.92783625389891988, -0.92848582688091341,
    -0.92913257153405593, -0.92977648588825146, -0.93041756798202457,
    -0.93105581586252828, -0.9316912275855489, -0.93232380121551206,
    -0.93295353482548893, -0.93358042649720163, -0.93420447432102927,
    -0.93482567639601422, -0.935444030829867, -0.93605953573897327,
    -0.93667218924839757, -0.93728198949189145, -0.93788893461189748,
    -0.93849302275955582, -0.939094252094709, -0.93969262078590843,
    -0.940288127010419, -0.94088076895422545, -0.94147054481203785,
    -0.94205745278729669, -0.94264149109217832, -0.94322265794760085,
    -0.9438009515832293, -0.94437637023748089, -0.94494891215753063,
    -0.94551857559931685, -0.9460853588275453, -0.94664926011569628,
    -0.94721027774602873, -0.94776841000958556, -0.94832365520619921,
    -0.94887601164449664, -0.94942547764190388, -0.94997205152465258,
    -0.95051573162778369, -0.95105651629515353, -0.951594403879438,
    -0.95212939274213859, -0.95266148125358607, -0.95319066779294681,
    -0.95371695074822671, -0.95424032851627694, -0.95476079950279735,
    -0.95527836212234363, -0.95579301479833, -0.95630475596303532,
    -0.9568135840576073, -0.95731949753206713, -0.9578224948453149,
    -0.95832257446513325, -0.958819734868193, -0.95931397454005751,
    -0.95980529197518683, -0.960293685676943, -0.960779154157594,
    -0.96126169593831867, -0.96174130954921111, -0.96221799352928516,
    -0.96269174642647881, -0.9631625667976581, -0.963630453208623,
    -0.96409540423411, -0.964557418457798, -0.9650164944723113,
    -0.96547263087922508, -0.96592582628906831, -0.9663760793213293,
    -0.96682338860445938, -0.96726775277587673, -0.96770917048197114,
    -0.96814764037810763, -0.968583161128631, -0.96901573140686936,
    -0.96944534989513875, -0.96987201528474676, -0.97029572627599647,
    -0.97071648157819068, -0.971134279909636, -0.971549119997646,
    -0.97196100057854617, -0.97236992039767667, -0.97277587820939659,
    -0.97317887277708826, -0.97357890287316029, -0.97397596727905156,
    -0.97437006478523513, -0.97476119419122165, -0.97514935430556315,
    -0.97553454394585648, -0.97591676193874721, -0.97629600711993336,
    -0.97667227833416792, -0.97704557443526363, -0.97741589428609588,
    -0.97778323675860612, -0.97814760073380558, -0.97850898510177831,
    -0.97886738876168511, -0.97922281062176575, -0.97957524959934406,
    -0.97992470462082959, -0.98027117462172175, -0.980614658546613,
    -0.98095515534919153, -0.981292663992245, -0.98162718344766386,
    -0.98195871269644353, -0.98228725072868872, -0.98261279654361522,
    -0.98293534914955416, -0.98325490756395451, -0.98357147081338581,
    -0.98388503793354154, -0.984195607969242, -0.9845031799744367,
    -0.984807753012208, -0.98510932615477387, -0.98540789848349009,
    -0.98570346908885353, -0.98599603707050487, -0.98628560153723133,
    -0.98657216160696937, -0.98685571640680714, -0.98713626507298791,
    -0.98741380675091139, -0.98768834059513766, -0.9879598657693891,
    -0.98822838144655278, -0.98849388680868344, -0.98875638104700592,
    -0.98901586336191682, -0.98927233296298833, -0.98952578906896949,
    -0.98977623090778888, -0.99002365771655754, -0.99026806874157025,
    -0.9905094632383088, -0.99074784047144349, -0.99098319971483617,
    -0.99121554025154157, -0.99144486137381038, -0.99167116238309039,
    -0.99189444259002957, -0.99211470131447776, -0.99233193788548868,
    -0.992546151641322, -0.99275734192944554, -0.99296550810653694,
    -0.993170649538486, -0.99337276560039645, -0.99357185567658746,
    -0.99376791916059637, -0.9939609554551796, -0.99415096397231539,
    -0.99433794413320453, -0.99452189536827329, -0.99470281711717423,
    -0.99488070882878821, -0.99505556996122624, -0.99522739998183118,
    -0.99539619836717874, -0.99556196460308, -0.99572469818458209,
    -0.99588439861597033, -0.99604106541076953, -0.99619469809174555,
    -0.99634529619090639, -0.99649285924950426, -0.9966373868180366,
    -0.99677887845624713, -0.996917333733128, -0.99705275222692014,
    -0.99718513352511573, -0.9973144772244581, -0.997440782930944,
    -0.9975640502598242, -0.99768427883560529, -0.99780146829205,
    -0.997915618272179, -0.99802672842827156, -0.998134798421867,
    -0.99823982792376531, -0.99834181661402832, -0.998440764181981,
    -0.99853667032621174, -0.99862953475457383, -0.99871935718418614,
    -0.998806137341434, -0.9988898749619699, -0.99897056979071475,
    -0.9990482215818578, -0.99912283009885838, -0.999194395114446,
    -0.99926291641062115, -0.99932839377865623, -0.99939082701909576,
    -0.9994502159417572, -0.9995065603657316, -0.999559860119384,
    -0.99961011504035435, -0.99965732497555726, -0.99970148978118312,
    -0.99974260932269832, -0.9997806834748455, -0.99981571212164422,
    -0.99984769515639127, -0.99987663248166059, -0.99990252400930424,
    -0.999925369660452, -0.99994516936551214, -0.99996192306417131,
    -0.99997563070539475, -0.99998629224742674, -0.99999390765779039,
    -0.99999847691328769, -1.0, -0.99999847691328769, -0.99999390765779039,
    -0.99998629224742674, -0.99997563070539475, -0.99996192306417131,
    -0.99994516936551214, -0.999925369660452, -0.99990252400930424,
    -0.99987663248166059, -0.99984769515639127, -0.99981571212164422,
    -0.9997806834748455, -0.99974260932269832, -0.99970148978118312,
    -0.99965732497555726, -0.99961011504035435, -0.999559860119384,
    -0.9995065603657316, -0.9994502159417572, -0.99939082701909576,
    -0.99932839377865623, -0.99926291641062126, -0.999194395114446,
    -0.99912283009885838, -0.9990482215818578, -0.99897056979071475,
    -0.99888987496197, -0.99880613734143409, -0.99871935718418614,
    -0.99862953475457383, -0.99853667032621174, -0.998440764181981,
    -0.99834181661402832, -0.99823982792376531, -0.998134798421867,
    -0.99802672842827156, -0.997915618272179, -0.99780146829205008,
    -0.99768427883560529, -0.99756405025982431, -0.997440782930944,
    -0.9973144772244581, -0.99718513352511573, -0.99705275222692025,
    -0.996917333733128, -0.99677887845624713, -0.9966373868180366,
    -0.99649285924950437, -0.99634529619090639, -0.99619469809174555,
    -0.99604106541076964, -0.99588439861597045, -0.9957246981845822,
    -0.99556196460308011, -0.99539619836717885, -0.99522739998183118,
    -0.99505556996122635, -0.99488070882878821, -0.99470281711717423,
    -0.9945218953682734, -0.99433794413320453, -0.99415096397231539,
    -0.99396095545517971, -0.99376791916059637, -0.99357185567658757,
    -0.99337276560039645, -0.99317064953848611, -0.992965508106537,
    -0.99275734192944565, -0.99254615164132209, -0.99233193788548879,
    -0.99211470131447788, -0.99189444259002968, -0.9916711623830905,
    -0.99144486137381049, -0.99121554025154179, -0.99098319971483639,
    -0.9907478404714436, -0.9905094632383088, -0.99026806874157036,
    -0.99002365771655754, -0.989776230907789, -0.98952578906896949,
    -0.98927233296298833, -0.98901586336191694, -0.98875638104700592,
    -0.98849388680868366, -0.98822838144655278, -0.9879598657693891,
    -0.98768834059513777, -0.9874138067509115, -0.987136265072988,
    -0.98685571640680736, -0.98657216160696937, -0.98628560153723144,
    -0.98599603707050487, -0.98570346908885353, -0.9854078984834902,
    -0.985109326154774, -0.98480775301220813, -0.9845031799744367,
    -0.984195607969242, -0.98388503793354176, -0.98357147081338592,
    -0.98325490756395462, -0.98293534914955427, -0.98261279654361522,
    -0.98228725072868872, -0.98195871269644375, -0.98162718344766409,
    -0.98129266399224513, -0.98095515534919153, -0.980614658546613,
    -0.98027117462172186, -0.9799247046208297, -0.97957524959934417,
    -0.97922281062176586, -0.97886738876168511, -0.97850898510177853,
    -0.9781476007338058, -0.97778323675860612, -0.97741589428609588,
    -0.97704557443526363, -0.97667227833416792, -0.97629600711993347,
    -0.97591676193874755, -0.97553454394585659, -0.97514935430556315,
    -0.97476119419122176, -0.97437006478523525, -0.97397596727905167,
    -0.97357890287316029, -0.97317887277708837, -0.9727758782093967,
    -0.97236992039767678, -0.9719610005785464, -0.97154911999764615,
    -0.97113427990963608, -0.97071648157819079, -0.97029572627599658,
    -0.96987201528474687, -0.969445349895139, -0.96901573140686947,
    -0.96858316112863108, -0.96814764037810774, -0.96770917048197125,
    -0.96726775277587684, -0.96682338860445949, -0.96637607932132941,
    -0.96592582628906842, -0.96547263087922519, -0.96501649447231164,
    -0.96455741845779808, -0.96409540423411011, -0.96363045320862306,
    -0.96316256679765822, -0.96269174642647892, -0.9622179935292855,
    -0.96174130954921155, -0.96126169593831878, -0.96077915415759407,
    -0.96029368567694307, -0.95980529197518694, -0.95931397454005762,
    -0.95881973486819316, -0.95832257446513336, -0.957822494845315,
    -0.95731949753206746, -0.95681358405760764, -0.95630475596303544,
    -0.95579301479833012, -0.95527836212234374, -0.95476079950279757,
    -0.954240328516277, -0.953716950748227, -0.95319066779294692,
    -0.95266148125358618, -0.9521293927421387, -0.95159440387943817,
    -0.95105651629515364, -0.9505157316277838, -0.94997205152465269,
    -0.949425477641904, -0.94887601164449675, -0.94832365520619955,
    -0.94776841000958567, -0.94721027774602884, -0.94664926011569639,
    -0.94608535882754541, -0.945518575599317, -0.944948912157531,
    -0.944376370237481, -0.94380095158322941, -0.943222657947601,
    -0.94264149109217843, -0.9420574527872968, -0.94147054481203807,
    -0.94088076895422557, -0.94028812701041908, -0.93969262078590854,
    -0.93909425209470931, -0.93849302275955626, -0.93788893461189771,
    -0.93728198949189157, -0.93667218924839768, -0.93605953573897338,
    -0.93544403082986749, -0.93482567639601466, -0.93420447432102949,
    -0.93358042649720174, -0.932953534825489, -0.93232380121551228,
    -0.931691227585549, -0.93105581586252839, -0.93041756798202468,
    -0.92977648588825157, -0.92913257153405637, -0.92848582688091386,
    -0.92783625389892, -0.92718385456678742, -0.92652863087183746,
    -0.92587058480999485, -0.92520971838578225, -0.92454603361231336,
    -0.92387953251128663, -0.9232102171129809, -0.92253808945624638,
    -0.92186315158850052, -0.92118540556572126, -0.92050485345244049,
    -0.91982149732173779, -0.91913533925523461, -0.91844638134308743,
    -0.91775462568398147, -0.917060074385124, -0.91636272956223963,
    -0.91566259333956113, -0.91495966784982485, -0.91425395523426389,
    -0.91354545764260109, -0.91283417723304272, -0.912120116172273,
    -0.91140327663544518, -0.91068366080617713, -0.90996127087654333,
    -0.90923610904706864, -0.908508177526722, -0.90777747853290891,
    -0.90704401429146519, -0.90630778703665027, -0.90556879901114,
    -0.90482705246601958, -0.90408254966077839, -0.90333529286330094,
    -0.90258528434986074, -0.901832526405114, -0.90107702132209178,
    -0.90031877140219341, -0.8995577789551803, -0.898794046299167,
    -0.89802757576061565, -0.89725836967432848, -0.89648643038344067,
    -0.895711760239413, -0.89493436160202533, -0.89415423683936845,
    -0.89337138832783791, -0.89258581845212548, -0.89179752960521408,
    -0.891006524188368, -0.89021280461112662, -0.88941637329129775,
    -0.88861723265494907, -0.88781538513640124, -0.8870108331782216,
    -0.88620357923121473, -0.88539362575441594, -0.884580975215084,
    -0.88376563008869358, -0.8829475928589271, -0.882126866017668,
    -0.8813034520649925, -0.88047735350916234, -0.87964857286661646,
    -0.87881711266196538, -0.87798297542798065, -0.87714616370558884,
    -0.87630668004386381, -0.87546452700001809, -0.87461970713939563,
    -0.87377222303546509, -0.87292207726980964, -0.87206927243212062,
    -0.87121381112018947, -0.87035569593989981, -0.86949492950521923,
    -0.86863151443819153, -0.86776545336892874, -0.86689674893560309,
    -0.866025403784439, -0.86515142056970451, -0.86427480195370476,
    -0.86339555060677176, -0.86251366920725758, -0.86162916044152593,
    -0.86074202700394387, -0.85985227159687327, -0.85895989693066432,
    -0.85806490572364458, -0.85716730070211233, -0.8562670846003283,
    -0.85536426016050682, -0.85445883013280766, -0.85355079727532768,
    -0.85264016435409251, -0.851726934143048, -0.85081110942405125,
    -0.849892692986864, -0.84897168762914155, -0.84804809615642607,
    -0.84712192138213738, -0.84619316612756434, -0.845261833221856,
    -0.844327925502015, -0.84339144581288572, -0.84245239700714758,
    -0.84151078194530626, -0.84056660349568446, -0.8396198645344134,
    -0.83867056794542427, -0.83771871662043906, -0.83676431345896207,
    -0.83580736136827016, -0.83484786326340654, -0.83388582206716821,
    -0.83292124071009965, -0.8319541221304827, -0.83098446927432856,
    -0.83001228509536784, -0.82903757255504162, -0.8280603346224944,
    -0.82708057427456183, -0.826098294495764, -0.82511349827829528,
    -0.82412618862201581, -0.82313636853444216, -0.82214404103073779,
    -0.82114920913370437, -0.820151875873772, -0.8191520442889918,
    -0.81814971742502351, -0.8171448983351286, -0.8161375900801604,
    -0.81512779572855443, -0.81411551835631957, -0.81310076104702744,
    -0.81208352689180618, -0.81106381898932667, -0.81004164044579607,
    -0.80901699437494756, -0.80798988389803073, -0.80696031214380215,
    -0.80592828224851609, -0.80489379735591449, -0.80385686061721773,
    -0.80281747519111446, -0.801775644243754, -0.80073137094873359,
    -0.79968465848709069, -0.798635510047293, -0.79758392882522877,
    -0.7965299180241967, -0.79547348085489578, -0.79441462053541811,
    -0.79335334029123517, -0.79228964335519081, -0.79122353296749026,
    -0.79015501237569064, -0.789084084834691, -0.78801075360672235,
    -0.7869350219613378, -0.78585689317540186, -0.78477637053308291,
    -0.78369345732583984, -0.782608156852414, -0.781520472418819,
    -0.78043040733833, -0.77933796493147445, -0.77824314852602083,
    -0.77714596145697079, -0.776046407066546, -0.77494448870417965,
    -0.77384020972650636, -0.77273357349735128, -0.77162458338772022,
    -0.77051324277578959, -0.7693995550468955, -0.76828352359352337,
    -0.76716515181529954, -0.76604444311897812, -0.764921400918432,
    -0.76379602863464235, -0.76266832969568865, -0.76153830753673712,
    -0.76040596560003082, -0.75927130733488069, -0.75813433619765225,
    -0.75699505565175651, -0.75585346916763974, -0.75470958022277213,
    -0.75356339230163816, -0.75241490889572471, -0.75126413350351151,
    -0.75011106963046, -0.74895572078900208, -0.747798090498532,
    -0.74663818228539147, -0.74547599968286238, -0.74431154623115436,
    -0.74314482547739458, -0.74197584097561675, -0.74080459628675,
    -0.73963109497860968, -0.7384553406258838, -0.7372773368101242,
    -0.73609708711973454, -0.73491459514996016, -0.73372986450287669,
    -0.7325428987873791, -0.731353701619171, -0.73016227662075228,
    -0.72896862742141155, -0.72777275765721061, -0.726574670970976,
    -0.725374371012288, -0.72417186143746781, -0.72296714590956856,
    -0.721760228098362, -0.72055111168033037, -0.71933980033865108,
    -0.71812629776318893, -0.716910607650483, -0.71569273370373609,
    -0.7144726796328037, -0.7132504491541819, -0.712026045990997,
    -0.71079947387299236, -0.70957073653652092, -0.70833983772452891,
    -0.70710678118654768, -0.70587157067868123, -0.70463420996359494,
    -0.70339470281050431, -0.70215305299516229, -0.70090926429985079,
    -0.69966334051336543, -0.698415285431006, -0.69716510285456468,
    -0.69591279659231453, -0.69465837045899759, -0.69340182827581331,
    -0.69214317387040725, -0.69088241107685888, -0.6896195437356698,
    -0.688354575693754, -0.6870875108044231, -0.68581835292737647,
    -0.684547105928689, -0.68327377368079945, -0.68199836006249892,
    -0.6807208689589177, -0.6794413042615165, -0.67815966986807064,
    -0.67687596968266084, -0.67559020761566047, -0.67430238758372363,
    -0.67301251350977376, -0.67172058932299061, -0.67042661895879962,
    -0.66913060635885813, -0.6678325554710467, -0.66653247024945261,
    -0.665230354654361, -0.66392621265224183, -0.66262004821573783,
    -0.66131186532365227, -0.66000166796093662, -0.65868946011868046,
    -0.65737524579409579, -0.65605902899050739, -0.65474081371733994,
    -0.65342060399010571, -0.65209840383039253, -0.65077421726585138,
    -0.6494480483301841, -0.64811990106313078, -0.64678977951045957,
    -0.64545768772395062, -0.64412362976138671, -0.64278760968653958,
    -0.64144963156915813, -0.64010969948495589, -0.63876781751559752,
    -0.63742398974868963, -0.636078220277764, -0.6347305132022677,
    -0.63338087262755027, -0.63202930266485113, -0.63067580743128659,
    -0.62932039104983784, -0.62796305764933835, -0.62660381136446108,
    -0.62524265633570519, -0.6238795967093862, -0.62251463663761963,
    -0.62114778027831064, -0.61977903179514049, -0.61840839535755454,
    -0.61703587514074909, -0.61566147532565818, -0.61428520009894316,
    -0.61290705365297649, -0.61152704018583126, -0.61014516390126783,
    -0.60876142900872088, -0.607375839723287, -0.60598840026571144,
    -0.60459911486237539, -0.60320798774528239, -0.60181502315204827,
    -0.60042022532588413, -0.59902359851558606, -0.59762514697552138,
    -0.59622487496561616, -0.5948227867513417, -0.59341888660370123,
    -0.59201317879921944, -0.59060566761992539, -0.58919635735334219,
    -0.58778525229247336, -0.58637235673578958, -0.58495767498721574,
    -0.58354121135611792, -0.58212297015729, -0.58070295571093966,
    -0.57928117234267884, -0.57785762438350541, -0.5764323161697934,
    -0.57500525204327879, -0.57357643635104649, -0.57214587344551671,
    -0.57071356768443215, -0.56927952343084409, -0.5678437450531012,
    -0.56640623692483294, -0.56496700342493811, -0.56352604893757163,
    -0.56208337785213092, -0.56063899456324218, -0.55919290347074735,
    -0.55774510897969076, -0.55629561550030471, -0.55484442744799933,
    -0.55339154924334422, -0.55193698531205837, -0.55048074008499592,
    -0.54902281799813213, -0.54756322349255071, -0.54610196101442887,
    -0.544639035015027, -0.54317444995067066, -0.54170821028274,
    -0.54024032047765524, -0.53877078500686337, -0.53729960834682422,
    -0.5358267949789971, -0.5343523493898269, -0.53287627607073,
    -0.53139857951808289, -0.529919264233205, -0.52843833472234736,
    -0.52695579549667781, -0.52547165107226812, -0.52398590597007966,
    -0.52249856471594869, -0.52100963184057625, -0.51951911187950939,
    -0.51802700937313029, -0.516533328866642, -0.51503807491005449,
    -0.51354125205817047, -0.512042864870572, -0.51054291791160633,
    -0.50904141575037121, -0.5075383629607042, -0.50603376412116385,
    -0.50452762381501937, -0.5030199466302353, -0.50151073715945771,
    -0.50000000000000044, -0.49848773975383087, -0.4969739610275552,
    -0.49545866843240749, -0.49394186658423106, -0.49242356010346727,
    -0.4909037536151411, -0.48938245174884659, -0.48785965913873308,
    -0.486335380423491, -0.48480962024633767, -0.48328238325500233,
    -0.48175367410171532, -0.48022349744318904, -0.47869185794060704,
    -0.47715876025960874, -0.47562420907027564, -0.47408820904711679,
    -0.47255076486905384, -0.47101188121940996, -0.46947156278589081,
    -0.46792981426057351, -0.46638664033989141, -0.46484204572461996,
    -0.46329603511986217, -0.46174861323503447, -0.46019978478385226,
    -0.45864955448431488, -0.45709792705869418, -0.45554490723351565,
    -0.45399049973954697, -0.45243470931178303, -0.45087754068943114,
    -0.44931899861589708, -0.44775908783877028, -0.44619781310980872,
    -0.44463517918492745, -0.44307119082417978, -0.44150585279174537,
    -0.43993916985591541, -0.43837114678907779, -0.43680178836770273,
    -0.43523109937232807, -0.43365908458754421, -0.43208574880198225,
    -0.43051109680829519, -0.42893513340314604, -0.42735786338719267,
    -0.425779291565073, -0.42419942274539069, -0.4226182617407,
    -0.42103581336749085, -0.41945208244617704, -0.41786707380107679,
    -0.41628079226040132, -0.4146932426562393, -0.4131044298245421,
    -0.41151435860510921, -0.4099230338415733, -0.40833046038138554,
    -0.40673664307580015, -0.40514158677986256, -0.40354529635239017,
    -0.40194777665596038, -0.4003490325568953, -0.39874906892524664,
    -0.39714789063478118, -0.39554550256296478, -0.39394190959095104,
    -0.39233711660356152, -0.39073112848927388, -0.38912395014020645,
    -0.38751558645210327, -0.385906042324319, -0.38429532265980426,
    -0.38268343236509039, -0.381070376350274, -0.37945615952900508,
    -0.37784078681846722, -0.3762242631393658, -0.37460659341591235,
    -0.37298778257580933, -0.37136783555023534, -0.36974675727382994,
    -0.36812455268467786, -0.36650122672429725, -0.36487678433761978,
    -0.36325123047297853, -0.36162457008209259, -0.35999680812005158,
    -0.35836794954530077, -0.3567379993196258, -0.35510696240813694,
    -0.35347484377925709, -0.35184164840470189, -0.35020738125946765,
    -0.34857204732181551, -0.34693565157325623, -0.34529819899853509,
    -0.34365969458561663, -0.3420201433256686, -0.34037955021305005,
    -0.33873792024529142, -0.33709525842308224, -0.33545156975025525,
    -0.33380685923377129, -0.33216113188370378, -0.33051439271322358,
    -0.3288666467385839, -0.32721789897910386, -0.3255681544571567,
    -0.32391741819814956, -0.3222656952305113, -0.3206129905856766,
    -0.31895930929807043, -0.3173046564050927, -0.31564903694710228,
    -0.31399245596740488, -0.31233491851223255, -0.31067642963073189,
    -0.30901699437494762, -0.30735661779980739, -0.3056953049631061,
    -0.30403306092549082, -0.30236989075044512, -0.300705799504273,
    -0.29904079225608665, -0.29737487407778607, -0.29570805004404693,
    -0.29404032523230428, -0.29237170472273716, -0.290702193598253,
    -0.28903179694447223, -0.28736051984971189, -0.28568836740497355,
    -0.2840153447039227, -0.28234145684287665, -0.2806667089207881,
    -0.27899110603922966, -0.27731465330237831, -0.27563735581699977,
    -0.27395921869243234, -0.2722802470405743, -0.27060044597586369,
    -0.26891982061526587, -0.26723837607825712, -0.26555611748680918,
    -0.26387304996537336, -0.26218917864086533, -0.26050450864264818,
    -0.25881904510252068, -0.25713279315469623, -0.25544575793579072,
    -0.25375794458480588, -0.252069358243114, -0.25038000405444188,
    -0.24868988716485535, -0.24699901272274358, -0.24530738587880249,
    -0.24361501178602255, -0.24192189559966787, -0.24022804247726395,
    -0.23853345757858122, -0.23683814606561915, -0.23514211310259059,
    -0.2334453638559052, -0.23174790349415722, -0.23004973718810443,
    -0.22835087011065586, -0.22665130743685527, -0.22495105434386534,
    -0.22325011601095179, -0.22154849761946785, -0.21984620435283816,
    -0.21814324139654243, -0.21643961393810288, -0.21473532716706328,
    -0.21303038627497678, -0.21132479645538896, -0.20961856290382222,
    -0.20791169081775987, -0.20620418539663027, -0.20449605184179021,
    -0.20278729535651246, -0.20107792114596473, -0.19936793441719736,
    -0.19765734037912644, -0.19594614424251808, -0.19423435121997248,
    -0.19252196652590806, -0.19080899537654467, -0.18909544298989125,
    -0.18738131458572468, -0.18566661538557738, -0.18395135061272044,
    -0.18223552549214783, -0.18051914525056048, -0.17880221511635019,
    -0.17708474031958313, -0.17536672609198706, -0.17364817766693039,
    -0.17192910027940969, -0.17020949916603281, -0.16848937956500296,
    -0.16676874671610273, -0.16504760586067824, -0.16332596224162294,
    -0.16160382110336105, -0.15988118769183488, -0.15815806725448367,
    -0.15643446504023112, -0.15471038629946843, -0.15298583628403853,
    -0.15126082024721976, -0.14953534344371019, -0.14780941112961052,
    -0.14608302856241162, -0.14435620100097332, -0.14262893370551188,
    -0.140901231937583, -0.13917310096006588, -0.1374445460371472,
    -0.13571557243430504, -0.13398618541829194, -0.13225639025712244,
    -0.13052619222005168, -0.12879559657756298, -0.1270646086013508,
    -0.12533323356430465, -0.12360147674049322, -0.12186934340514811,
    -0.12013683883464696, -0.11840396830650091, -0.11667073709933325,
    -0.11493715049286679, -0.11320321376790701, -0.11146893220632587,
    -0.10973431109104577, -0.10799935570602347, -0.10626407133623304,
    -0.10452846326765342, -0.10279253678724687, -0.10105629718294651,
    -0.099319749743639288, -0.097582899759149855, -0.095845752520224481,
    -0.094108313318514908, -0.0923705874465614, -0.090632580197780074,
    -0.088894296866441555, -0.087155742747658319, -0.08541692313736772,
    -0.083677843332315843, -0.081938508630041387, -0.0801989243288595,
    -0.078459095727845624, -0.07671902812681855, -0.07497872682632771,
    -0.073238197127631813, -0.07149744433268615, -0.069756473744125636,
    -0.068015290665248612, -0.0662739004000007, -0.064532308252958637,
    -0.062790519529313263, -0.061048539534856866, -0.059306373575961732,
    -0.0575640269595675, -0.055821504993164128, -0.054078812984775723,
    -0.052335956242944369, -0.050592940076713964, -0.048849769795613132,
    -0.047106450709642637, -0.045362988129253864, -0.043619387365336194,
    -0.041875653729199928, -0.040131792532560141, -0.038387809087520458,
    -0.036643708706556907, -0.034899496702500823, -0.033155178388526239,
    -0.031410759078128361, -0.02966624408511093, -0.027921638723569165,
    -0.026176948307873545, -0.024432178152653652, -0.022687333572781968,
    -0.020942419883356791, -0.019197442399689603, -0.01745240643728356,
    -0.015707317311820831, -0.013962180339145536, -0.012217000835247542,
    -0.010471784116246274, -0.0087265354983745245, -0.0069812602979613626,
    -0.0052359638314194989, -0.00349065141522376, -0.0017453283658984452,
    -2.4492935982947064E-16 };

  static const char_T b_cv1[63] = { 'M', 'e', 'd', 'i', 'a', 'n', ' ', 'i', 's',
    ' ', '0', ' ', 't', 'h', 'e', 'r', 'e', 'f', 'o', 'r', 'e', ' ', 'r', 'o',
    'b', 'u', 't', ' ', 'c', 'o', 'r', 'r', 'e', 'l', 'a', 't', 'i', 'o', 'n',
    ' ', 'i', 's', ' ', 'c', 'o', 'm', 'p', 'u', 't', 'e', 'd', ' ', 'u', 's',
    'i', 'n', 'g', ' ', 'r', 'a', 'n', 'k', 's' };

  static const char_T b_cv3[49] = { 'M', 'e', 'a', 'n', ' ', 'a', 'b', 's', 'o',
    'l', 'u', 't', 'e', ' ', 'd', 'e', 'v', 'i', 'a', 't', 'i', 'o', 'n', ' ',
    'i', 's', ' ', 'u', 's', 'e', 'd', ' ', 't', 'o', ' ', 's', 'c', 'a', 'l',
    'e', ' ', 't', 'h', 'e', ' ', 'd', 'a', 't', 'a' };

  static const char_T b_cv5[45] = { 'I', 'n', 't', 'e', 'r', 'q', 'u', 'a', 'r',
    't', 'i', 'l', 'e', ' ', 'r', 'a', 'n', 'g', 'e', ' ', 'i', 's', ' ', 'u',
    's', 'e', 'd', ' ', 't', 'o', ' ', 's', 'c', 'a', 'l', 'e', ' ', 't', 'h',
    'e', ' ', 'd', 'a', 't', 'a' };

  static const char_T b_cv[19] = { 'F', 'S', 'D', 'A', ':', 'u', 'n', 'i', 'b',
    'i', 'v', ':', 'M', 'e', 'd', 'i', 'a', 'n', '0' };

  static const char_T b_cv2[19] = { 'F', 'S', 'D', 'A', ':', 'u', 'n', 'i', 'b',
    'i', 'v', ':', 'M', 'a', 'd', 'U', 's', 'e', 'd' };

  static const char_T b_cv4[19] = { 'F', 'S', 'D', 'A', ':', 'u', 'n', 'i', 'b',
    'i', 'v', ':', 'I', 'q', 'r', 'U', 's', 'e', 'd' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_boolean_T *r;
  emxArray_boolean_T *r1;
  emxArray_creal_T *b_Xs;
  emxArray_creal_T *new2;
  emxArray_int32_T *ii;
  emxArray_int32_T *r2;
  emxArray_real_T *MDbiv;
  emxArray_real_T *Xs;
  emxArray_real_T *Ys;
  emxArray_real_T *b_Y;
  emxArray_real_T *biv;
  emxArray_real_T *bivT;
  emxArray_real_T *datax;
  emxArray_real_T *outy;
  emxArray_real_T *r3;
  emxArray_real_T *seq;
  emxArray_real_T *univT;
  emxArray_real_T *xrank;
  emxArray_real_T *y;
  emxArray_real_T *yrank;
  creal_T xnew[3601];
  creal_T ynew[3601];
  creal_T M[4];
  creal_T aut[2];
  creal_T c_a;
  creal_T sinth;
  real_T The1max[3601];
  real_T The2max[3601];
  real_T b_a[4];
  real_T quan[3];
  real_T Ty;
  real_T a;
  real_T a_im_tmp_tmp;
  real_T b_r;
  real_T brm;
  real_T costh_im;
  real_T costh_re;
  real_T d;
  real_T fuo;
  real_T mady;
  real_T s;
  int32_T b_i;
  int32_T end;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T il;
  int32_T jl;
  int32_T loop_ub;
  int32_T n;
  int32_T robscale;
  uint32_T b_jl;
  boolean_T b;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &bivT, 1, &wj_emlrtRTEI, true);

  /* unibiv has the purpose of detecting univariate and bivariate outliers */
  /*  */
  /* <a href="matlab: docsearchFS('unibiv')">Link to the help function</a> */
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
  /*  */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*  */
  /*        madcoef :  scaled MAD. Scalar. Coefficient which is used to scale MAD */
  /*                    coefficient to have a robust estimate of dispersion.  The */
  /*                    default is 1.4815 so that 1.4815*MAD(N(0,1))=1. */
  /*                  Example - 'madcoef',2 */
  /*                  Data Types - double */
  /*                    Remark: if mad =median(y-median(y))=0 then the interquartile */
  /*                    range is used. If also the interquartile range is 0 */
  /*                    than the MD (mean absolute deviation) is used.  In */
  /*                    other words MD=mean(abs(y-mean(Y)) */
  /*  */
  /*       robscale :   how to compute dispersion. Scalar. It specifies the */
  /*                    statistical indexes to use to compute the dispersion of */
  /*                    each variable and the correlation among each pair of */
  /*                    variables. */
  /*                    robscale=1 (default): the program uses the median correlation */
  /*                    and the MAD as estimate of the dispersion of each variable; */
  /*                    robscale=2: the correlation coefficient among ranks is used */
  /*                    (Spearman's rho) and the MAD as estimate of the dispersion */
  /*                    of each variable; */
  /*                    robscale=3: the correlation coefficient is based on Kendall's tau b */
  /*                    and the MAD as estimate of the dispersion of each */
  /*                    variable; */
  /*                    robscale=4: tetracoric correlation coefficient is used and the MAD */
  /*                    as estimate of the dispersion of each variable; */
  /*                    otherwise the correlation and the dispersion of the variables are */
  /*                    computed using the traditional (non robust) formulae */
  /*                    around the univariate medians. */
  /*                  Example - 'robscale',2 */
  /*                  Data Types - double */
  /*  */
  /*            rf  :  It specifies the confidence */
  /*                   level of the robust bivariate ellipses. Scalar. 0<rf<1. */
  /*                   The default value is 0.95 that is the outer contour in */
  /*                   presence of normality for each ellipse should leave */
  /*                   outside 5% of the values. */
  /*                  Example - 'rf',0.99 */
  /*                  Data Types - double */
  /*  */
  /*  */
  /*          plots :   Plot on the screen. Scalar. It specifies whether it is */
  /*                    necessary to produce a plot */
  /*                    with univariate standardized boxplots on the */
  /*                    main diagonal and bivariate confidence ellipses out of */
  /*                    the main diagonal. If plots is equal to 1 a plot */
  /*                    which contains univariate standardized boxplots on the */
  /*                    main diagonal and bivariate confidence ellipses out of */
  /*                    the main diagonal is produced on the screen. If plots is */
  /*                    <> 1 no plot is produced. As default no plot is */
  /*                    produced. */
  /*                  Example - 'plots',2 */
  /*                  Data Types - double */
  /*  */
  /*        textlab : plot labels. Scalar.  Scalar which controls the labels in */
  /*                    the plots. If textlab=1 and */
  /*                    plots=1 the labels associated */
  /*                    to the units which are univariate outliers or which are */
  /*                    outside the confidence levels of the contours are */
  /*                    displayed on the screen. */
  /*                  Example - 'textlab',0 */
  /*                  Data Types - double */
  /*  */
  /*        tag     :   plot tag.  Character. It identifies the handle of the plot which */
  /*                    is about to be created. The default is to use tag */
  /*                    'pl_unibiv'. Notice that if the program finds a plot which */
  /*                    has a tag equal to the one specified by the user, then */
  /*                    the output of the new plot overwrites the existing one */
  /*                    in the same window else a new window is created. */
  /*                  Example - 'tag','new_tag' */
  /*                  Data Types - char */
  /*  */
  /*  Output: */
  /*  */
  /*    fre  :  n x 4 matrix which contains details about the univariate and */
  /*            bivariate outliers. */
  /*            1st col = index of the units; */
  /*            2nd col = number of times unit has been declared */
  /*            univariate outliers; */
  /*            3rd col = number of times unit has been declared */
  /*            bivariate outlier; */
  /*            4th col = pseudo MD as sum of bivariate MD. */
  /*  */
  /*  */
  /*  See also: FSMmmd */
  /*  */
  /*  References: */
  /*  */
  /*        Riani, M., Zani S. (1997). An iterative method for the detection of */
  /*        multivariate outliers, "Metron", Vol. LV, pp. 101-117. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('unibiv')">Link to the help page for this function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % unibiv with all default options. */
  /*     % Run this code to see the output shown in the help file */
  /*     n=500; */
  /*     p=5; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,p); */
  /*     [out]=unibiv(Y); */
  /* } */
  /* { */
  /*     %% unibiv with optional arguments. */
  /*     % Stack loss data. */
  /*     Y=load('stack_loss.txt'); */
  /*     % Show robust confidence ellipses */
  /*     out=unibiv(Y,'plots',1,'textlab',1); */
  /* } */
  /*  Beginning of code */
  n = Y->size[0];

  /*  Default confidence level for bivariate ellipses */
  /*  Input parameters checking */
  /*  Write in structure 'options' the options chosen by the user */
  robscale = 1;

  /*  bivT contains the frequency distribution of biv. outliers */
  i = bivT->size[0];
  bivT->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(sp, bivT, i, &wj_emlrtRTEI);
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    bivT->data[i] = 0.0;
  }

  emxInit_real_T(sp, &univT, 1, &xj_emlrtRTEI, true);

  /*  univT contains the frequency distribution of univ. outliers */
  i = univT->size[0];
  univT->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(sp, univT, i, &xj_emlrtRTEI);
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    univT->data[i] = 0.0;
  }

  emxInit_real_T(sp, &MDbiv, 1, &yj_emlrtRTEI, true);

  /*  MDbiv= vector which contains the sum of the bivaraite Mahalanobis distances for each unit */
  i = MDbiv->size[0];
  MDbiv->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(sp, MDbiv, i, &yj_emlrtRTEI);
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    MDbiv->data[i] = 0.0;
  }

  /*  madcoef=1; */
  emxInit_real_T(sp, &biv, 2, &cl_emlrtRTEI, true);
  if (Y->size[0] < 1) {
    biv->size[0] = 1;
    biv->size[1] = 0;
  } else {
    i = biv->size[0] * biv->size[1];
    biv->size[0] = 1;
    biv->size[1] = Y->size[0];
    emxEnsureCapacity_real_T(sp, biv, i, &hd_emlrtRTEI);
    loop_ub = Y->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      biv->data[i] = (real_T)i + 1.0;
    }
  }

  emxInit_real_T(sp, &seq, 1, &ak_emlrtRTEI, true);
  i = seq->size[0];
  seq->size[0] = biv->size[1];
  emxEnsureCapacity_real_T(sp, seq, i, &ak_emlrtRTEI);
  loop_ub = biv->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq->data[i] = biv->data[i];
  }

  i = Y->size[1];
  emxInit_real_T(sp, &y, 1, &bk_emlrtRTEI, true);
  emxInit_real_T(sp, &Ys, 1, &ek_emlrtRTEI, true);
  emxInit_real_T(sp, &datax, 2, &hk_emlrtRTEI, true);
  emxInit_real_T(sp, &outy, 2, &nk_emlrtRTEI, true);
  emxInit_real_T(sp, &Xs, 1, &rk_emlrtRTEI, true);
  emxInit_real_T(sp, &xrank, 1, &dl_emlrtRTEI, true);
  emxInit_real_T(sp, &yrank, 1, &el_emlrtRTEI, true);
  emxInit_creal_T(sp, &new2, 2, &bl_emlrtRTEI, true);
  emxInit_boolean_T(sp, &r, 1, &mk_emlrtRTEI, true);
  emxInit_boolean_T(sp, &r1, 1, &mk_emlrtRTEI, true);
  emxInit_int32_T(sp, &r2, 1, &ik_emlrtRTEI, true);
  emxInit_int32_T(sp, &ii, 1, &mk_emlrtRTEI, true);
  emxInit_real_T(sp, &r3, 1, &lk_emlrtRTEI, true);
  emxInit_real_T(sp, &b_Y, 1, &ck_emlrtRTEI, true);
  emxInit_creal_T(sp, &b_Xs, 2, &al_emlrtRTEI, true);
  for (il = 0; il < i; il++) {
    /*  il is linked to the rows */
    /*  Ys = vector which contains standardized data */
    if (il + 1 > Y->size[1]) {
      emlrtDynamicBoundsCheckR2012b(il + 1, 1, Y->size[1], &fl_emlrtBCI,
        (emlrtCTX)sp);
    }

    loop_ub = Y->size[0];
    i1 = y->size[0];
    y->size[0] = Y->size[0];
    emxEnsureCapacity_real_T(sp, y, i1, &bk_emlrtRTEI);
    i1 = b_Y->size[0];
    b_Y->size[0] = Y->size[0];
    emxEnsureCapacity_real_T(sp, b_Y, i1, &ck_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      brm = Y->data[i1 + Y->size[0] * il];
      y->data[i1] = brm;
      b_Y->data[i1] = brm;
    }

    st.site = &pj_emlrtRSI;
    Ty = median(&st, b_Y);
    loop_ub = Y->size[0];
    i1 = b_Y->size[0];
    b_Y->size[0] = Y->size[0];
    emxEnsureCapacity_real_T(sp, b_Y, i1, &ck_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_Y->data[i1] = Y->data[i1 + Y->size[0] * il];
    }

    st.site = &oj_emlrtRSI;
    mady = mad(&st, b_Y);
    if (mady > 0.0) {
      brm = 1.4815 * mady;
      loop_ub = Y->size[0];
      i1 = Ys->size[0];
      Ys->size[0] = Y->size[0];
      emxEnsureCapacity_real_T(sp, Ys, i1, &ek_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        Ys->data[i1] = (Y->data[i1 + Y->size[0] * il] - Ty) / brm;
      }
    } else {
      loop_ub = Y->size[0];
      i1 = b_Y->size[0];
      b_Y->size[0] = Y->size[0];
      emxEnsureCapacity_real_T(sp, b_Y, i1, &ck_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_Y->data[i1] = Y->data[i1 + Y->size[0] * il];
      }

      st.site = &nj_emlrtRSI;
      mady = iqr(&st, b_Y);
      if (mady > 0.0) {
        loop_ub = Y->size[0];
        i1 = b_Y->size[0];
        b_Y->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(sp, b_Y, i1, &ck_emlrtRTEI);
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_Y->data[i1] = Y->data[i1 + Y->size[0] * il];
        }

        st.site = &mj_emlrtRSI;
        mady = 1.349 * iqr(&st, b_Y) / 0.6745;
        brm = 1.4815 * mady;
        loop_ub = Y->size[0];
        i1 = Ys->size[0];
        Ys->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(sp, Ys, i1, &gk_emlrtRTEI);
        for (i1 = 0; i1 < loop_ub; i1++) {
          Ys->data[i1] = (Y->data[i1 + Y->size[0] * il] - Ty) / brm;
        }
      } else {
        loop_ub = Y->size[0];
        i1 = b_Y->size[0];
        b_Y->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(sp, b_Y, i1, &ck_emlrtRTEI);
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_Y->data[i1] = Y->data[i1 + Y->size[0] * il];
        }

        st.site = &lj_emlrtRSI;
        mady = 1.2533 * b_mad(&st, b_Y) / 0.6745;
        brm = 1.4815 * mady;
        loop_ub = Y->size[0];
        i1 = Ys->size[0];
        Ys->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(sp, Ys, i1, &fk_emlrtRTEI);
        for (i1 = 0; i1 < loop_ub; i1++) {
          Ys->data[i1] = (Y->data[i1 + Y->size[0] * il] - Ty) / brm;
        }
      }
    }

    /*  datax x add a sequence to standardized data */
    st.site = &kj_emlrtRSI;
    b_st.site = &fl_emlrtRSI;
    c_st.site = &gl_emlrtRSI;
    loop_ub = seq->size[0];
    if (Ys->size[0] != seq->size[0]) {
      emlrtErrorWithMessageIdR2018a(&c_st, &ob_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    i1 = datax->size[0] * datax->size[1];
    datax->size[0] = seq->size[0];
    datax->size[1] = 2;
    emxEnsureCapacity_real_T(&b_st, datax, i1, &hk_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      datax->data[i1] = seq->data[i1];
    }

    loop_ub = Ys->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      datax->data[i1 + datax->size[0]] = Ys->data[i1];
    }

    /*  quan = 1 x 3 vector which contins 1% quartile median and 3rd */
    /*  quartile */
    st.site = &jj_emlrtRSI;
    quantile(&st, Ys, quan);

    /*  di= interquartile difference */
    mady = quan[2] - quan[0];

    /*  uq=upper truncation point */
    Ty = quan[2] + 1.5 * mady;

    /*  lq=lower truncation point */
    mady = quan[0] - 1.5 * mady;

    /*  outy is a (l+1) x 2 matrix. the first column contains */
    /*  the indexes of the units declared univariate */
    /*  outliers, the second columns gives the standardized */
    /*  values of the outliers */
    loop_ub = datax->size[0];
    i1 = r->size[0];
    r->size[0] = datax->size[0];
    emxEnsureCapacity_boolean_T(sp, r, i1, &ik_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      r->data[i1] = (datax->data[i1 + datax->size[0]] > Ty);
    }

    loop_ub = datax->size[0];
    i1 = r1->size[0];
    r1->size[0] = datax->size[0];
    emxEnsureCapacity_boolean_T(sp, r1, i1, &jk_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      r1->data[i1] = (datax->data[i1 + datax->size[0]] < mady);
    }

    if (r->size[0] != r1->size[0]) {
      emlrtSizeEqCheck1DR2012b(r->size[0], r1->size[0], &q_emlrtECI, (emlrtCTX)
        sp);
    }

    loop_ub = r->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      r->data[i1] = (r->data[i1] || r1->data[i1]);
    }

    loop_ub = datax->size[0];
    i1 = b_Y->size[0];
    b_Y->size[0] = datax->size[0];
    emxEnsureCapacity_real_T(sp, b_Y, i1, &kk_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_Y->data[i1] = datax->data[i1 + datax->size[0]];
    }

    st.site = &ij_emlrtRSI;
    b_abs(&st, b_Y, r3);
    i1 = r1->size[0];
    r1->size[0] = r3->size[0];
    emxEnsureCapacity_boolean_T(sp, r1, i1, &lk_emlrtRTEI);
    loop_ub = r3->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      r1->data[i1] = (r3->data[i1] > 3.0);
    }

    if (r->size[0] != r1->size[0]) {
      emlrtSizeEqCheck1DR2012b(r->size[0], r1->size[0], &q_emlrtECI, (emlrtCTX)
        sp);
    }

    end = r->size[0] - 1;
    loop_ub = 0;
    for (b_i = 0; b_i <= end; b_i++) {
      if (r->data[b_i] || r1->data[b_i]) {
        loop_ub++;
      }
    }

    i1 = r2->size[0];
    r2->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r2, i1, &mk_emlrtRTEI);
    loop_ub = 0;
    for (b_i = 0; b_i <= end; b_i++) {
      if (r->data[b_i] || r1->data[b_i]) {
        r2->data[loop_ub] = b_i + 1;
        loop_ub++;
      }
    }

    loop_ub = r2->size[0];
    i1 = outy->size[0] * outy->size[1];
    outy->size[0] = r2->size[0];
    outy->size[1] = 2;
    emxEnsureCapacity_real_T(sp, outy, i1, &nk_emlrtRTEI);
    for (i1 = 0; i1 < 2; i1++) {
      for (i2 = 0; i2 < loop_ub; i2++) {
        if (r2->data[i2] > datax->size[0]) {
          emlrtDynamicBoundsCheckR2012b(r2->data[i2], 1, datax->size[0],
            &jl_emlrtBCI, (emlrtCTX)sp);
        }

        outy->data[i2 + outy->size[0] * i1] = datax->data[(r2->data[i2] +
          datax->size[0] * i1) - 1];
      }
    }

    loop_ub = r2->size[0];
    if (r2->size[0] != 0) {
      /*  Increase by 1 the frequencey distribution of */
      /*  univariate outliers in vector univT */
      i1 = ii->size[0];
      ii->size[0] = r2->size[0];
      emxEnsureCapacity_int32_T(sp, ii, i1, &ok_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        if (outy->data[i1] != (int32_T)muDoubleScalarFloor(outy->data[i1])) {
          emlrtIntegerCheckR2012b(outy->data[i1], &ib_emlrtDCI, (emlrtCTX)sp);
        }

        i2 = (int32_T)outy->data[i1];
        if ((i2 < 1) || (i2 > univT->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)outy->data[i1], 1, univT->size
            [0], &kl_emlrtBCI, (emlrtCTX)sp);
        }

        ii->data[i1] = i2;
      }

      loop_ub = r2->size[0];
      i1 = r3->size[0];
      r3->size[0] = r2->size[0];
      emxEnsureCapacity_real_T(sp, r3, i1, &pk_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        if (outy->data[i1] != (int32_T)muDoubleScalarFloor(outy->data[i1])) {
          emlrtIntegerCheckR2012b(outy->data[i1], &jb_emlrtDCI, (emlrtCTX)sp);
        }

        i2 = (int32_T)outy->data[i1];
        if ((i2 < 1) || (i2 > univT->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, univT->size[0], &ll_emlrtBCI,
            (emlrtCTX)sp);
        }

        r3->data[i1] = univT->data[i2 - 1];
      }

      if (ii->size[0] != r2->size[0]) {
        emlrtSubAssignSizeCheck1dR2017a(ii->size[0], r2->size[0], &r_emlrtECI,
          (emlrtCTX)sp);
      }

      loop_ub = r3->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        univT->data[ii->data[i1] - 1] = r3->data[i1] + 1.0;
      }
    }

    i1 = Y->size[1] - il;
    for (jl = 0; jl < i1; jl++) {
      b_jl = ((uint32_T)il + jl) + 1U;

      /*  jl is linked to columns */
      if ((uint32_T)(il + 1) != b_jl) {
        /*  beginning of bivariate part */
        /*  Tx is the coordinate of the  Median */
        if (((int32_T)b_jl < 1) || ((int32_T)b_jl > Y->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b_jl, 1, Y->size[1],
            &gl_emlrtBCI, (emlrtCTX)sp);
        }

        loop_ub = Y->size[0];
        i2 = b_Y->size[0];
        b_Y->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(sp, b_Y, i2, &qk_emlrtRTEI);
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_Y->data[i2] = Y->data[i2 + Y->size[0] * ((int32_T)b_jl - 1)];
        }

        st.site = &hj_emlrtRSI;
        Ty = median(&st, b_Y);
        loop_ub = Y->size[0];
        i2 = b_Y->size[0];
        b_Y->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(sp, b_Y, i2, &qk_emlrtRTEI);
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_Y->data[i2] = Y->data[i2 + Y->size[0] * ((int32_T)b_jl - 1)];
        }

        st.site = &gj_emlrtRSI;
        mady = mad(&st, b_Y);
        if (mady > 0.0) {
          brm = 1.4815 * mady;
          loop_ub = Y->size[0];
          i2 = Xs->size[0];
          Xs->size[0] = Y->size[0];
          emxEnsureCapacity_real_T(sp, Xs, i2, &rk_emlrtRTEI);
          for (i2 = 0; i2 < loop_ub; i2++) {
            Xs->data[i2] = (Y->data[i2 + Y->size[0] * ((int32_T)b_jl - 1)] - Ty)
              / brm;
          }
        } else {
          if (robscale == 1) {
            st.site = &dob_emlrtRSI;
            b_disp(&st, k_emlrt_marshallOut(&st, b_cv), o_emlrt_marshallOut(&st,
                    b_cv1), &p_emlrtMCI);
            robscale = 2;
          }

          loop_ub = Y->size[0];
          i2 = b_Y->size[0];
          b_Y->size[0] = Y->size[0];
          emxEnsureCapacity_real_T(sp, b_Y, i2, &qk_emlrtRTEI);
          for (i2 = 0; i2 < loop_ub; i2++) {
            b_Y->data[i2] = Y->data[i2 + Y->size[0] * ((int32_T)b_jl - 1)];
          }

          st.site = &fj_emlrtRSI;
          mady = iqr(&st, b_Y);
          if (mady > 0.0) {
            brm = 1.4815 * (1.349 * mady / 0.6745);
            loop_ub = Y->size[0];
            i2 = Xs->size[0];
            Xs->size[0] = Y->size[0];
            emxEnsureCapacity_real_T(sp, Xs, i2, &tk_emlrtRTEI);
            for (i2 = 0; i2 < loop_ub; i2++) {
              Xs->data[i2] = (Y->data[i2 + Y->size[0] * ((int32_T)b_jl - 1)] -
                              Ty) / brm;
            }

            st.site = &bob_emlrtRSI;
            b_disp(&st, k_emlrt_marshallOut(&st, b_cv4), u_emlrt_marshallOut(&st,
                    b_cv5), &r_emlrtMCI);
          } else {
            st.site = &cob_emlrtRSI;
            b_disp(&st, k_emlrt_marshallOut(&st, b_cv2), v_emlrt_marshallOut(&st,
                    b_cv3), &q_emlrtMCI);
            loop_ub = Y->size[0];
            i2 = b_Y->size[0];
            b_Y->size[0] = Y->size[0];
            emxEnsureCapacity_real_T(sp, b_Y, i2, &qk_emlrtRTEI);
            for (i2 = 0; i2 < loop_ub; i2++) {
              b_Y->data[i2] = Y->data[i2 + Y->size[0] * ((int32_T)b_jl - 1)];
            }

            st.site = &ej_emlrtRSI;
            mady = 1.2533 * b_mad(&st, b_Y) / 0.6745;
            brm = 1.4815 * mady;
            loop_ub = Y->size[0];
            i2 = Xs->size[0];
            Xs->size[0] = Y->size[0];
            emxEnsureCapacity_real_T(sp, Xs, i2, &vk_emlrtRTEI);
            for (i2 = 0; i2 < loop_ub; i2++) {
              Xs->data[i2] = (Y->data[i2 + Y->size[0] * ((int32_T)b_jl - 1)] -
                              Ty) / brm;
            }
          }
        }

        if (robscale == 1) {
          if (Xs->size[0] != Ys->size[0]) {
            emlrtSizeEqCheck1DR2012b(Xs->size[0], Ys->size[0], &s_emlrtECI,
              (emlrtCTX)sp);
          }

          i2 = b_Y->size[0];
          b_Y->size[0] = Xs->size[0];
          emxEnsureCapacity_real_T(sp, b_Y, i2, &sk_emlrtRTEI);
          loop_ub = Xs->size[0];
          for (i2 = 0; i2 < loop_ub; i2++) {
            b_Y->data[i2] = Xs->data[i2] + Ys->data[i2];
          }

          st.site = &dj_emlrtRSI;
          b_abs(&st, b_Y, xrank);
          if (Xs->size[0] != Ys->size[0]) {
            emlrtSizeEqCheck1DR2012b(Xs->size[0], Ys->size[0], &t_emlrtECI,
              (emlrtCTX)sp);
          }

          i2 = b_Y->size[0];
          b_Y->size[0] = Xs->size[0];
          emxEnsureCapacity_real_T(sp, b_Y, i2, &wk_emlrtRTEI);
          loop_ub = Xs->size[0];
          for (i2 = 0; i2 < loop_ub; i2++) {
            b_Y->data[i2] = Xs->data[i2] - Ys->data[i2];
          }

          st.site = &cj_emlrtRSI;
          b_abs(&st, b_Y, yrank);
          st.site = &bj_emlrtRSI;
          b_st.site = &bj_emlrtRSI;
          a = median(&b_st, xrank);
          b_st.site = &il_emlrtRSI;
          Ty = a * a;
          st.site = &aj_emlrtRSI;
          b_st.site = &aj_emlrtRSI;
          a = median(&b_st, yrank);
          b_st.site = &il_emlrtRSI;
          mady = a * a;
          b_r = (Ty - mady) / (Ty + mady);
          if (muDoubleScalarIsNaN(b_r)) {
            b_r = 0.0;
          }
        } else {
          /*  r is computed using ranks */
          loop_ub = Y->size[0];
          i2 = b_Y->size[0];
          b_Y->size[0] = Y->size[0];
          emxEnsureCapacity_real_T(sp, b_Y, i2, &qk_emlrtRTEI);
          for (i2 = 0; i2 < loop_ub; i2++) {
            b_Y->data[i2] = Y->data[i2 + Y->size[0] * ((int32_T)b_jl - 1)];
          }

          st.site = &yi_emlrtRSI;
          tiedrankFS(&st, b_Y, xrank);
          st.site = &xi_emlrtRSI;
          tiedrankFS(&st, y, yrank);
          st.site = &wi_emlrtRSI;
          brm = mean(&st, xrank);
          i2 = r3->size[0];
          r3->size[0] = xrank->size[0];
          emxEnsureCapacity_real_T(sp, r3, i2, &uk_emlrtRTEI);
          loop_ub = xrank->size[0];
          for (i2 = 0; i2 < loop_ub; i2++) {
            r3->data[i2] = xrank->data[i2] - brm;
          }

          st.site = &wi_emlrtRSI;
          b_st.site = &wi_emlrtRSI;
          brm = mean(&b_st, yrank);
          i2 = b_Y->size[0];
          b_Y->size[0] = yrank->size[0];
          emxEnsureCapacity_real_T(&st, b_Y, i2, &xk_emlrtRTEI);
          loop_ub = yrank->size[0];
          for (i2 = 0; i2 < loop_ub; i2++) {
            b_Y->data[i2] = yrank->data[i2] - brm;
          }

          b_st.site = &fb_emlrtRSI;
          c_dynamic_size_checks(&b_st, r3, b_Y, r3->size[0], b_Y->size[0]);
          st.site = &wi_emlrtRSI;
          b_r = b_mtimes(r3, b_Y) / (((real_T)n - 1.0) * b_std(&st, xrank) *
            b_std(&st, yrank));
        }

        /*  Spearman's rho and Kendall's tau and tetracoric correlation */
        /*  are discrete-valued statistics, and */
        /*  their distributions have positive probability at 1 and -1. */
        /*  If their value is equal to 1 or -1 then artificially put the value equal */
        /*  to 0.999 or -0.999 */
        if (b_r == 1.0) {
          b_r = 0.999;
        } else if (b_r == -1.0) {
          b_r = -0.999;
        }

        /*  Now we calculate Mahalanobis distances with centroid defined */
        /*  by medians */
        st.site = &vi_emlrtRSI;
        power(&st, Xs, yrank);
        st.site = &vi_emlrtRSI;
        power(&st, Ys, r3);
        if (yrank->size[0] != r3->size[0]) {
          emlrtSizeEqCheck1DR2012b(yrank->size[0], r3->size[0], &u_emlrtECI,
            (emlrtCTX)sp);
        }

        a = 2.0 * b_r;
        i2 = xrank->size[0];
        xrank->size[0] = Xs->size[0];
        emxEnsureCapacity_real_T(sp, xrank, i2, &yk_emlrtRTEI);
        loop_ub = Xs->size[0];
        for (i2 = 0; i2 < loop_ub; i2++) {
          xrank->data[i2] = a * Xs->data[i2];
        }

        if (xrank->size[0] != Ys->size[0]) {
          emlrtSizeEqCheck1DR2012b(xrank->size[0], Ys->size[0], &v_emlrtECI,
            (emlrtCTX)sp);
        }

        loop_ub = xrank->size[0];
        for (i2 = 0; i2 < loop_ub; i2++) {
          xrank->data[i2] *= Ys->data[i2];
        }

        if (yrank->size[0] != xrank->size[0]) {
          emlrtSizeEqCheck1DR2012b(yrank->size[0], xrank->size[0], &u_emlrtECI,
            (emlrtCTX)sp);
        }

        st.site = &vi_emlrtRSI;
        b_st.site = &il_emlrtRSI;
        mady = b_r * b_r;
        loop_ub = yrank->size[0];
        for (i2 = 0; i2 < loop_ub; i2++) {
          yrank->data[i2] = ((yrank->data[i2] + r3->data[i2]) - xrank->data[i2])
            / (1.0 - mady);
        }

        st.site = &vi_emlrtRSI;
        b_sqrt(&st, yrank);

        /*  Create the vector of pseudoMahalanobis distances (based on the sum */
        /*  of each bivariate projection) */
        loop_ub = MDbiv->size[0];
        if (MDbiv->size[0] != yrank->size[0]) {
          emlrtSizeEqCheck1DR2012b(MDbiv->size[0], yrank->size[0], &w_emlrtECI,
            (emlrtCTX)sp);
        }

        for (i2 = 0; i2 < loop_ub; i2++) {
          MDbiv->data[i2] += yrank->data[i2];
        }

        /*   Em  is the median  of vector E */
        st.site = &ui_emlrtRSI;
        median(&st, yrank);
        st.site = &ti_emlrtRSI;
        Ty = 2.0 * ((real_T)n - 1.0) / ((real_T)n - 2.0) * finv(&st, (real_T)n -
          2.0);
        st.site = &si_emlrtRSI;
        if (Ty < 0.0) {
          emlrtErrorWithMessageIdR2018a(&st, &bc_emlrtRTEI,
            "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError",
            3, 4, 4, "sqrt");
        }

        Ty = muDoubleScalarSqrt(Ty);

        /*  hinge=ellipse containing 50% of the values */
        brm = (b_r + 1.0) / 2.0;
        st.site = &ri_emlrtRSI;
        if (brm < 0.0) {
          emlrtErrorWithMessageIdR2018a(&st, &bc_emlrtRTEI,
            "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError",
            3, 4, 4, "sqrt");
        }

        d = (1.0 - b_r) / 2.0;
        st.site = &qi_emlrtRSI;
        if (d < 0.0) {
          emlrtErrorWithMessageIdR2018a(&st, &bc_emlrtRTEI,
            "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError",
            3, 4, 4, "sqrt");
        }

        /*  fence=ellipe containing (1-\alpha)% of the values */
        st.site = &pi_emlrtRSI;
        if (brm < 0.0) {
          emlrtErrorWithMessageIdR2018a(&st, &bc_emlrtRTEI,
            "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError",
            3, 4, 4, "sqrt");
        }

        a = Ty * muDoubleScalarSqrt(brm);
        st.site = &oi_emlrtRSI;
        if (d < 0.0) {
          emlrtErrorWithMessageIdR2018a(&st, &bc_emlrtRTEI,
            "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError",
            3, 4, 4, "sqrt");
        }

        mady = Ty * muDoubleScalarSqrt(d);
        for (i2 = 0; i2 < 3601; i2++) {
          The1max[i2] = a * b_b[i2];
          The2max[i2] = mady * c_b[i2];
        }

        st.site = &ni_emlrtRSI;
        b_st.site = &fl_emlrtRSI;
        c_st.site = &gl_emlrtRSI;
        if (Ys->size[0] != Xs->size[0]) {
          emlrtErrorWithMessageIdR2018a(&c_st, &ob_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        /*  rotation of the coordinates */
        st.site = &mi_emlrtRSI;
        b_st.site = &il_emlrtRSI;
        st.site = &li_emlrtRSI;
        b_st.site = &il_emlrtRSI;
        a = 1.0 / (Ty * Ty * (1.0 - b_r * b_r));
        mady = -b_r * a;
        b_a[0] = a;
        b_a[2] = mady;
        b_a[1] = mady;
        b_a[3] = a;
        st.site = &ki_emlrtRSI;
        eig(&st, b_a, aut);
        b_sort(aut);
        b_r = a - aut[1].re;
        st.site = &ji_emlrtRSI;
        b_st.site = &il_emlrtRSI;
        a_im_tmp_tmp = b_r * (0.0 - aut[1].im);
        b_r = (b_r * b_r - (0.0 - aut[1].im) * (0.0 - aut[1].im)) + mady * mady;
        c_a.re = b_r;
        c_a.im = a_im_tmp_tmp + a_im_tmp_tmp;
        c_sqrt(&c_a);
        if (c_a.im == 0.0) {
          costh_re = mady / c_a.re;
          costh_im = 0.0;
        } else if (c_a.re == 0.0) {
          if (mady == 0.0) {
            costh_re = 0.0 / c_a.im;
            costh_im = 0.0;
          } else {
            costh_re = 0.0;
            costh_im = -(mady / c_a.im);
          }
        } else {
          brm = muDoubleScalarAbs(c_a.re);
          Ty = muDoubleScalarAbs(c_a.im);
          if (brm > Ty) {
            s = c_a.im / c_a.re;
            d = c_a.re + s * c_a.im;
            costh_re = (mady + s * 0.0) / d;
            costh_im = (0.0 - s * mady) / d;
          } else if (Ty == brm) {
            if (c_a.re > 0.0) {
              s = 0.5;
            } else {
              s = -0.5;
            }

            if (c_a.im > 0.0) {
              d = 0.5;
            } else {
              d = -0.5;
            }

            costh_re = (mady * s + 0.0 * d) / brm;
            costh_im = (0.0 * s - mady * d) / brm;
          } else {
            s = c_a.re / c_a.im;
            d = c_a.im + s * c_a.re;
            costh_re = s * mady / d;
            costh_im = (s * 0.0 - mady) / d;
          }
        }

        st.site = &ii_emlrtRSI;
        b_st.site = &il_emlrtRSI;
        c_a.re = b_r;
        c_a.im = a_im_tmp_tmp + a_im_tmp_tmp;
        c_sqrt(&c_a);
        mady = aut[1].re - a;
        if (c_a.im == 0.0) {
          if (aut[1].im == 0.0) {
            sinth.re = mady / c_a.re;
            sinth.im = 0.0;
          } else if (mady == 0.0) {
            sinth.re = 0.0;
            sinth.im = aut[1].im / c_a.re;
          } else {
            sinth.re = mady / c_a.re;
            sinth.im = aut[1].im / c_a.re;
          }
        } else if (c_a.re == 0.0) {
          if (mady == 0.0) {
            sinth.re = aut[1].im / c_a.im;
            sinth.im = 0.0;
          } else if (aut[1].im == 0.0) {
            sinth.re = 0.0;
            sinth.im = -(mady / c_a.im);
          } else {
            sinth.re = aut[1].im / c_a.im;
            sinth.im = -(mady / c_a.im);
          }
        } else {
          brm = muDoubleScalarAbs(c_a.re);
          Ty = muDoubleScalarAbs(c_a.im);
          if (brm > Ty) {
            s = c_a.im / c_a.re;
            d = c_a.re + s * c_a.im;
            sinth.re = (mady + s * aut[1].im) / d;
            sinth.im = (aut[1].im - s * mady) / d;
          } else if (Ty == brm) {
            if (c_a.re > 0.0) {
              s = 0.5;
            } else {
              s = -0.5;
            }

            if (c_a.im > 0.0) {
              d = 0.5;
            } else {
              d = -0.5;
            }

            sinth.re = (mady * s + aut[1].im * d) / brm;
            sinth.im = (aut[1].im * s - mady * d) / brm;
          } else {
            s = c_a.re / c_a.im;
            d = c_a.im + s * c_a.re;
            sinth.re = (s * mady + aut[1].im) / d;
            sinth.im = (s * aut[1].im - mady) / d;
          }
        }

        /*  M is the orthogonal matrix which enables the rotation of the axes */
        M[0].re = costh_re;
        M[0].im = costh_im;
        M[2] = sinth;
        M[1].re = -sinth.re;
        M[1].im = -sinth.im;
        M[3].re = costh_re;
        M[3].im = costh_im;

        /*  fou = fires of the ellipse */
        if (aut[0].im == 0.0) {
          b_r = 1.0 / aut[0].re;
          a = 0.0;
        } else if (aut[0].re == 0.0) {
          b_r = 0.0;
          a = -(1.0 / aut[0].im);
        } else {
          brm = muDoubleScalarAbs(aut[0].re);
          Ty = muDoubleScalarAbs(aut[0].im);
          if (brm > Ty) {
            s = aut[0].im / aut[0].re;
            d = aut[0].re + s * aut[0].im;
            b_r = (s * 0.0 + 1.0) / d;
            a = (0.0 - s) / d;
          } else if (Ty == brm) {
            if (aut[0].re > 0.0) {
              s = 0.5;
            } else {
              s = -0.5;
            }

            if (aut[0].im > 0.0) {
              d = 0.5;
            } else {
              d = -0.5;
            }

            b_r = (s + 0.0 * d) / brm;
            a = (0.0 * s - d) / brm;
          } else {
            s = aut[0].re / aut[0].im;
            d = aut[0].im + s * aut[0].re;
            b_r = s / d;
            a = (s * 0.0 - 1.0) / d;
          }
        }

        if (aut[1].im == 0.0) {
          Ty = 1.0 / aut[1].re;
          mady = 0.0;
        } else if (aut[1].re == 0.0) {
          Ty = 0.0;
          mady = -(1.0 / aut[1].im);
        } else {
          brm = muDoubleScalarAbs(aut[1].re);
          Ty = muDoubleScalarAbs(aut[1].im);
          if (brm > Ty) {
            s = aut[1].im / aut[1].re;
            d = aut[1].re + s * aut[1].im;
            Ty = (s * 0.0 + 1.0) / d;
            mady = (0.0 - s) / d;
          } else if (Ty == brm) {
            if (aut[1].re > 0.0) {
              s = 0.5;
            } else {
              s = -0.5;
            }

            if (aut[1].im > 0.0) {
              d = 0.5;
            } else {
              d = -0.5;
            }

            Ty = (s + 0.0 * d) / brm;
            mady = (0.0 * s - d) / brm;
          } else {
            s = aut[1].re / aut[1].im;
            d = aut[1].im + s * aut[1].re;
            Ty = s / d;
            mady = (s * 0.0 - 1.0) / d;
          }
        }

        fuo = muDoubleScalarHypot(b_r - Ty, a - mady);
        st.site = &hi_emlrtRSI;
        if (fuo < 0.0) {
          emlrtErrorWithMessageIdR2018a(&st, &bc_emlrtRTEI,
            "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError",
            3, 4, 4, "sqrt");
        }

        fuo = muDoubleScalarSqrt(fuo);

        /*  new1 = 2 x n matrix which contains the coordinates of the rotated ellipse */
        for (i2 = 0; i2 < 3601; i2++) {
          i3 = i2 << 1;
          brm = The1max[i2];
          d = The2max[i2];
          SD->f0.The1max[i3].re = brm + d;
          SD->f0.The1max[i3].im = 0.0;
          SD->f0.The1max[i3 + 1].re = brm - d;
          SD->f0.The1max[i3 + 1].im = 0.0;
        }

        for (i2 = 0; i2 < 2; i2++) {
          brm = M[i2].re;
          d = M[i2].im;
          mady = M[i2 + 2].re;
          Ty = M[i2 + 2].im;
          for (i3 = 0; i3 < 3601; i3++) {
            loop_ub = i3 << 1;
            b_i = i2 + loop_ub;
            b_r = SD->f0.The1max[loop_ub].re;
            a_im_tmp_tmp = SD->f0.The1max[loop_ub].im;
            s = SD->f0.The1max[loop_ub + 1].re;
            a = SD->f0.The1max[loop_ub + 1].im;
            SD->f0.new1[b_i].re = (brm * b_r - d * a_im_tmp_tmp) + (mady * s -
              Ty * a);
            SD->f0.new1[b_i].im = (brm * a_im_tmp_tmp + d * b_r) + (mady * a +
              Ty * s);
          }
        }

        /*  xnew = n x 1 vector which contains x coord. of rotated points */
        /*  ynew = n x 1 vector which contains y coord. of rotated points */
        for (i2 = 0; i2 < 3601; i2++) {
          i3 = i2 << 1;
          xnew[i2].re = SD->f0.new1[i3].re;
          xnew[i2].im = -SD->f0.new1[i3].im;
          ynew[i2].re = SD->f0.new1[i3 + 1].re;
          ynew[i2].im = -SD->f0.new1[i3 + 1].im;
        }

        /*  new2 = 2 x n matrix which contains the coordinates of the rotated points */
        i2 = b_Xs->size[0] * b_Xs->size[1];
        b_Xs->size[0] = 2;
        b_Xs->size[1] = Xs->size[0];
        emxEnsureCapacity_creal_T(sp, b_Xs, i2, &al_emlrtRTEI);
        loop_ub = Xs->size[0];
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_Xs->data[2 * i2].re = Xs->data[i2];
          b_Xs->data[2 * i2].im = 0.0;
        }

        loop_ub = Ys->size[0];
        for (i2 = 0; i2 < loop_ub; i2++) {
          i3 = 2 * i2 + 1;
          b_Xs->data[i3].re = Ys->data[i2];
          b_Xs->data[i3].im = 0.0;
        }

        i2 = new2->size[0] * new2->size[1];
        new2->size[0] = 2;
        new2->size[1] = b_Xs->size[1];
        emxEnsureCapacity_creal_T(sp, new2, i2, &bl_emlrtRTEI);
        loop_ub = b_Xs->size[1];
        for (i2 = 0; i2 < 2; i2++) {
          for (i3 = 0; i3 < loop_ub; i3++) {
            brm = M[i2].re;
            d = M[i2].im;
            mady = M[i2 + 2].re;
            Ty = M[i2 + 2].im;
            b_i = 2 * i3 + 1;
            end = i2 + 2 * i3;
            new2->data[end].re = (brm * b_Xs->data[2 * i3].re - d * b_Xs->data[2
                                  * i3].im) + (mady * b_Xs->data[b_i].re - Ty *
              b_Xs->data[b_i].im);
            new2->data[end].im = (brm * b_Xs->data[2 * i3].im + d * b_Xs->data[2
                                  * i3].re) + (mady * b_Xs->data[b_i].im + Ty *
              b_Xs->data[b_i].re);
          }
        }

        /*  ch is the fixed distance of each point lying on the ellipse */
        sinth.re = ynew[9].re * ynew[9].re - ynew[9].im * ynew[9].im;
        mady = ynew[9].re * ynew[9].im;
        sinth.im = mady + mady;
        c_a.re = xnew[9].re + fuo;
        costh_re = xnew[9].re - fuo;
        mady = xnew[9].im * xnew[9].im;
        Ty = c_a.re * c_a.re - mady;
        b_r = c_a.re * xnew[9].im;
        c_a.re = Ty + sinth.re;
        c_a.im = (b_r + b_r) + sinth.im;
        c_sqrt(&c_a);
        Ty = costh_re * xnew[9].im;
        sinth.re += costh_re * costh_re - mady;
        sinth.im += Ty + Ty;
        c_sqrt(&sinth);
        mady = c_a.re + sinth.re;

        /*  biv is the 1 x n vector which contains potential bivariate outliers */
        i2 = biv->size[0] * biv->size[1];
        biv->size[0] = 1;
        biv->size[1] = n;
        emxEnsureCapacity_real_T(sp, biv, i2, &cl_emlrtRTEI);
        for (i2 = 0; i2 < n; i2++) {
          biv->data[i2] = 0.0;
        }

        for (end = 0; end < n; end++) {
          if (end + 1 > new2->size[1]) {
            emlrtDynamicBoundsCheckR2012b(end + 1, 1, new2->size[1],
              &ml_emlrtBCI, (emlrtCTX)sp);
          }

          c_a.re = new2->data[2 * end].re + fuo;
          if (end + 1 > new2->size[1]) {
            emlrtDynamicBoundsCheckR2012b(end + 1, 1, new2->size[1],
              &ml_emlrtBCI, (emlrtCTX)sp);
          }

          c_a.im = new2->data[2 * end].im;
          if (end + 1 > new2->size[1]) {
            emlrtDynamicBoundsCheckR2012b(end + 1, 1, new2->size[1],
              &hl_emlrtBCI, (emlrtCTX)sp);
          }

          costh_re = new2->data[2 * end].re - fuo;
          if (end + 1 > new2->size[1]) {
            emlrtDynamicBoundsCheckR2012b(end + 1, 1, new2->size[1],
              &nl_emlrtBCI, (emlrtCTX)sp);
          }

          costh_im = new2->data[2 * end].im;
          if (end + 1 > new2->size[1]) {
            emlrtDynamicBoundsCheckR2012b(end + 1, 1, new2->size[1],
              &il_emlrtBCI, (emlrtCTX)sp);
          }

          Ty = c_a.re * c_a.re - c_a.im * c_a.im;
          b_r = c_a.re * c_a.im;
          loop_ub = 2 * end + 1;
          a_im_tmp_tmp = new2->data[loop_ub].re * new2->data[loop_ub].re -
            new2->data[loop_ub].im * new2->data[loop_ub].im;
          s = new2->data[loop_ub].re * new2->data[loop_ub].im;
          s += s;
          c_a.re = Ty + a_im_tmp_tmp;
          c_a.im = (b_r + b_r) + s;
          c_sqrt(&c_a);
          Ty = costh_re * costh_im;
          sinth.re = (costh_re * costh_re - costh_im * costh_im) + a_im_tmp_tmp;
          sinth.im = (Ty + Ty) + s;
          c_sqrt(&sinth);
          if (c_a.re + sinth.re > mady) {
            if (end + 1 > biv->size[1]) {
              emlrtDynamicBoundsCheckR2012b(end + 1, 1, biv->size[1],
                &ol_emlrtBCI, (emlrtCTX)sp);
            }

            biv->data[end]++;
          }

          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtCTX)sp);
          }
        }

        /*  bivT contains cumulative distribution of bivariate outliers */
        loop_ub = bivT->size[0];
        if (bivT->size[0] != biv->size[1]) {
          emlrtSizeEqCheck1DR2012b(bivT->size[0], biv->size[1], &x_emlrtECI,
            (emlrtCTX)sp);
        }

        for (i2 = 0; i2 < loop_ub; i2++) {
          bivT->data[i2] += biv->data[i2];
        }

        /*  the following lines plot the hinge together with the fence */
      } else {
        /*  plotting part */
        /*  produce a vertical boxplot @ */
        /*  end of univariate part */
      }

      /*  endif of il=jl */
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }

    /*  endif of jl=1:v */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }

  emxFree_creal_T(&b_Xs);
  emxFree_real_T(&b_Y);
  emxFree_real_T(&r3);
  emxFree_int32_T(&ii);
  emxFree_int32_T(&r2);
  emxFree_boolean_T(&r1);
  emxFree_boolean_T(&r);
  emxFree_real_T(&biv);
  emxFree_creal_T(&new2);
  emxFree_real_T(&yrank);
  emxFree_real_T(&xrank);
  emxFree_real_T(&Xs);
  emxFree_real_T(&outy);
  emxFree_real_T(&datax);
  emxFree_real_T(&Ys);
  emxFree_real_T(&y);

  /*  endif of il=1:v */
  st.site = &gi_emlrtRSI;
  b_st.site = &fl_emlrtRSI;
  c_st.site = &gl_emlrtRSI;
  b = (univT->size[0] == seq->size[0]);
  if (!b) {
    emlrtErrorWithMessageIdR2018a(&c_st, &ob_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if (bivT->size[0] != seq->size[0]) {
    b = false;
  }

  if (!b) {
    emlrtErrorWithMessageIdR2018a(&c_st, &ob_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if (MDbiv->size[0] != seq->size[0]) {
    b = false;
  }

  if (!b) {
    emlrtErrorWithMessageIdR2018a(&c_st, &ob_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  i = fre->size[0] * fre->size[1];
  fre->size[0] = seq->size[0];
  fre->size[1] = 4;
  emxEnsureCapacity_real_T(&b_st, fre, i, &dk_emlrtRTEI);
  loop_ub = seq->size[0];
  for (i = 0; i < loop_ub; i++) {
    fre->data[i] = seq->data[i];
  }

  emxFree_real_T(&seq);
  loop_ub = univT->size[0];
  for (i = 0; i < loop_ub; i++) {
    fre->data[i + fre->size[0]] = univT->data[i];
  }

  emxFree_real_T(&univT);
  loop_ub = bivT->size[0];
  for (i = 0; i < loop_ub; i++) {
    fre->data[i + fre->size[0] * 2] = bivT->data[i];
  }

  emxFree_real_T(&bivT);
  loop_ub = MDbiv->size[0];
  for (i = 0; i < loop_ub; i++) {
    fre->data[i + fre->size[0] * 3] = MDbiv->data[i];
  }

  emxFree_real_T(&MDbiv);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (unibiv.c) */
