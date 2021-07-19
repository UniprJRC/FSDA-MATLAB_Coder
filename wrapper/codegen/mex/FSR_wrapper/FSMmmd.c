/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSMmmd.c
 *
 * Code generation for function 'FSMmmd'
 *
 */

/* Include files */
#include "FSMmmd.h"
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_mexutil.h"
#include "FSR_wrapper_types.h"
#include "abs.h"
#include "bsxfun.h"
#include "cat.h"
#include "colon.h"
#include "combineVectorElements.h"
#include "cov.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "find.h"
#include "ifWhileCond.h"
#include "indexShapeCheck.h"
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

/* Variable Definitions */
static emlrtRSInfo qt_emlrtRSI = { 815,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo rt_emlrtRSI = { 798,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo st_emlrtRSI = { 788,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo tt_emlrtRSI = { 781,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo ut_emlrtRSI = { 773,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo vt_emlrtRSI = { 770,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo wt_emlrtRSI = { 703,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo xt_emlrtRSI = { 634,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo yt_emlrtRSI = { 617,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo au_emlrtRSI = { 594,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo bu_emlrtRSI = { 592,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo cu_emlrtRSI = { 578,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo du_emlrtRSI = { 576,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo eu_emlrtRSI = { 575,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo fu_emlrtRSI = { 573,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo gu_emlrtRSI = { 572,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo hu_emlrtRSI = { 566,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo iu_emlrtRSI = { 564,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo ju_emlrtRSI = { 556,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo ku_emlrtRSI = { 554,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo lu_emlrtRSI = { 549,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo mu_emlrtRSI = { 547,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo nu_emlrtRSI = { 546,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo ou_emlrtRSI = { 544,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo pu_emlrtRSI = { 535,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo qu_emlrtRSI = { 533,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo ru_emlrtRSI = { 529,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo su_emlrtRSI = { 527,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo tu_emlrtRSI = { 526,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo uu_emlrtRSI = { 523,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo vu_emlrtRSI = { 521,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo wu_emlrtRSI = { 506,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo xu_emlrtRSI = { 479,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo yu_emlrtRSI = { 471,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo av_emlrtRSI = { 458,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo bv_emlrtRSI = { 430,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo cv_emlrtRSI = { 416,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo dv_emlrtRSI = { 410,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo ev_emlrtRSI = { 374,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo fv_emlrtRSI = { 372,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo gv_emlrtRSI = { 358,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo hv_emlrtRSI = { 344,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo iv_emlrtRSI = { 257,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo jv_emlrtRSI = { 255,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo kv_emlrtRSI = { 251,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtMCInfo v_emlrtMCI = { 264, /* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtMCInfo w_emlrtMCI = { 352, /* lineNo */
  9,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtMCInfo x_emlrtMCI = { 434, /* lineNo */
  9,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtMCInfo y_emlrtMCI = { 437, /* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtMCInfo ab_emlrtMCI = { 582,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtMCInfo bb_emlrtMCI = { 584,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtBCInfo om_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  779,                                 /* lineNo */
  31,                                  /* colNo */
  "seq",                               /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  778,                                 /* lineNo */
  32,                                  /* colNo */
  "seq",                               /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  463,                                 /* lineNo */
  37,                                  /* colNo */
  "seq",                               /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  463,                                 /* lineNo */
  24,                                  /* colNo */
  "BB",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo cb_emlrtECI = { 2,  /* nDims */
  430,                                 /* lineNo */
  30,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtECInfo db_emlrtECI = { -1, /* nDims */
  501,                                 /* lineNo */
  32,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtECInfo eb_emlrtECI = { -1, /* nDims */
  520,                                 /* lineNo */
  27,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtECInfo fb_emlrtECI = { 2,  /* nDims */
  526,                                 /* lineNo */
  59,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtECInfo gb_emlrtECI = { 2,  /* nDims */
  529,                                 /* lineNo */
  19,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtBCInfo sm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  532,                                 /* lineNo */
  30,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo hb_emlrtECI = { 2,  /* nDims */
  532,                                 /* lineNo */
  28,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtECInfo ib_emlrtECI = { 2,  /* nDims */
  535,                                 /* lineNo */
  27,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtECInfo jb_emlrtECI = { 2,  /* nDims */
  546,                                 /* lineNo */
  67,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtECInfo kb_emlrtECI = { 2,  /* nDims */
  549,                                 /* lineNo */
  15,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtBCInfo tm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  553,                                 /* lineNo */
  26,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo lb_emlrtECI = { 2,  /* nDims */
  553,                                 /* lineNo */
  24,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtECInfo mb_emlrtECI = { 2,  /* nDims */
  556,                                 /* lineNo */
  23,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtECInfo nb_emlrtECI = { 2,  /* nDims */
  564,                                 /* lineNo */
  31,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtECInfo ob_emlrtECI = { -1, /* nDims */
  627,                                 /* lineNo */
  28,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtBCInfo um_emlrtBCI = { 1,  /* iFirst */
  10,                                  /* iLast */
  723,                                 /* lineNo */
  33,                                  /* colNo */
  "unitadd",                           /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo vm_emlrtBCI = { 1,  /* iFirst */
  10,                                  /* iLast */
  732,                                 /* lineNo */
  32,                                  /* colNo */
  "unitadd",                           /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wm_emlrtBCI = { 1,  /* iFirst */
  10,                                  /* iLast */
  713,                                 /* lineNo */
  37,                                  /* colNo */
  "bsbradd",                           /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo xm_emlrtBCI = { 1,  /* iFirst */
  10,                                  /* iLast */
  738,                                 /* lineNo */
  45,                                  /* colNo */
  "bsbradd",                           /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ym_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  781,                                 /* lineNo */
  39,                                  /* colNo */
  "bsbeq",                             /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo an_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  781,                                 /* lineNo */
  41,                                  /* colNo */
  "bsbeq",                             /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo pb_emlrtECI = { -1, /* nDims */
  788,                                 /* lineNo */
  27,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtBCInfo bn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  461,                                 /* lineNo */
  28,                                  /* colNo */
  "BB",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo qb_emlrtECI = { -1, /* nDims */
  461,                                 /* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtBCInfo cn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  463,                                 /* lineNo */
  29,                                  /* colNo */
  "BB",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo rb_emlrtECI = { -1, /* nDims */
  463,                                 /* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtDCInfo lb_emlrtDCI = { 809,/* lineNo */
  24,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo dn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  809,                                 /* lineNo */
  24,                                  /* colNo */
  "Un",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo sb_emlrtECI = { -1, /* nDims */
  809,                                 /* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtDCInfo mb_emlrtDCI = { 815,/* lineNo */
  24,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo en_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  815,                                 /* lineNo */
  24,                                  /* colNo */
  "Un",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo tb_emlrtECI = { -1, /* nDims */
  815,                                 /* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtBCInfo fn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  257,                                 /* lineNo */
  24,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  321,                                 /* lineNo */
  6,                                   /* colNo */
  "bsbT",                              /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo nb_emlrtDCI = { 410,/* lineNo */
  33,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ob_emlrtDCI = { 410,/* lineNo */
  33,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo pb_emlrtDCI = { 416,/* lineNo */
  19,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo qb_emlrtDCI = { 416,/* lineNo */
  19,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo hn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  430,                                 /* lineNo */
  12,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo in_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  430,                                 /* lineNo */
  36,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  430,                                 /* lineNo */
  52,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  450,                                 /* lineNo */
  18,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo rb_emlrtDCI = { 450,/* lineNo */
  18,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ln_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  452,                                 /* lineNo */
  18,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  575,                                 /* lineNo */
  26,                                  /* colNo */
  "Ym",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo sb_emlrtDCI = { 575,/* lineNo */
  26,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  575,                                 /* lineNo */
  37,                                  /* colNo */
  "Ym",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo on_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  572,                                 /* lineNo */
  26,                                  /* colNo */
  "Ym",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo tb_emlrtDCI = { 461,/* lineNo */
  24,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo pn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  461,                                 /* lineNo */
  24,                                  /* colNo */
  "BB",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  576,                                 /* lineNo */
  29,                                  /* colNo */
  "Ym",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  544,                                 /* lineNo */
  22,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ub_emlrtDCI = { 506,/* lineNo */
  26,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  26,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  572,                                 /* lineNo */
  38,                                  /* colNo */
  "Ym",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo un_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  502,                                 /* lineNo */
  29,                                  /* colNo */
  "seq",                               /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  573,                                 /* lineNo */
  29,                                  /* colNo */
  "Ym",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  523,                                 /* lineNo */
  34,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo vb_emlrtDCI = { 609,/* lineNo */
  23,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  609,                                 /* lineNo */
  23,                                  /* colNo */
  "MDmod",                             /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  607,                                 /* lineNo */
  17,                                  /* colNo */
  "MDmod",                             /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ao_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  521,                                 /* lineNo */
  34,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bo_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  553,                                 /* lineNo */
  26,                                  /* colNo */
  "unit",                              /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo co_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  629,                                 /* lineNo */
  37,                                  /* colNo */
  "MDltminT",                          /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo wb_emlrtDCI = { 629,/* lineNo */
  37,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo do_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  532,                                 /* lineNo */
  30,                                  /* colNo */
  "unitout",                           /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eo_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  653,                                 /* lineNo */
  17,                                  /* colNo */
  "bsbT",                              /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fo_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  798,                                 /* lineNo */
  17,                                  /* colNo */
  "mmd",                               /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo xb_emlrtDCI = { 798,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo yb_emlrtDCI = { 674,/* lineNo */
  37,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo go_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  674,                                 /* lineNo */
  37,                                  /* colNo */
  "MDltminT",                          /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ho_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  690,                                 /* lineNo */
  21,                                  /* colNo */
  "MDmod",                             /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo io_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  675,                                 /* lineNo */
  29,                                  /* colNo */
  "bsb",                               /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jo_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  775,                                 /* lineNo */
  29,                                  /* colNo */
  "seq",                               /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ko_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  681,                                 /* lineNo */
  27,                                  /* colNo */
  "MDmod",                             /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lo_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  680,                                 /* lineNo */
  29,                                  /* colNo */
  "bsb",                               /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mo_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  755,                                 /* lineNo */
  26,                                  /* colNo */
  "bsbT",                              /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo no_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  747,                                 /* lineNo */
  30,                                  /* colNo */
  "bsbriniT",                          /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ac_emlrtDCI = { 784,/* lineNo */
  26,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo oo_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  784,                                 /* lineNo */
  26,                                  /* colNo */
  "bsbT",                              /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo po_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  711,                                 /* lineNo */
  24,                                  /* colNo */
  "bsbT",                              /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qo_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  720,                                 /* lineNo */
  29,                                  /* colNo */
  "bsbriniT",                          /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ro_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  727,                                 /* lineNo */
  21,                                  /* colNo */
  "MDmod",                             /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo so_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  718,                                 /* lineNo */
  37,                                  /* colNo */
  "unitout",                           /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo hm_emlrtRTEI = { 251,/* lineNo */
  4,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo im_emlrtRTEI = { 257,/* lineNo */
  22,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo jm_emlrtRTEI = { 309,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo km_emlrtRTEI = { 320,/* lineNo */
  1,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo lm_emlrtRTEI = { 321,/* lineNo */
  6,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo mm_emlrtRTEI = { 326,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo nm_emlrtRTEI = { 327,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo om_emlrtRTEI = { 328,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo pm_emlrtRTEI = { 329,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo qm_emlrtRTEI = { 330,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo rm_emlrtRTEI = { 331,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo sm_emlrtRTEI = { 332,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo tm_emlrtRTEI = { 84,/* lineNo */
  5,                                   /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo um_emlrtRTEI = { 88,/* lineNo */
  5,                                   /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo wm_emlrtRTEI = { 372,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo xm_emlrtRTEI = { 374,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ym_emlrtRTEI = { 379,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo an_emlrtRTEI = { 410,/* lineNo */
  14,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo bn_emlrtRTEI = { 410,/* lineNo */
  29,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo cn_emlrtRTEI = { 410,/* lineNo */
  1,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo dn_emlrtRTEI = { 416,/* lineNo */
  6,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo en_emlrtRTEI = { 416,/* lineNo */
  19,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo fn_emlrtRTEI = { 416,/* lineNo */
  1,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo gn_emlrtRTEI = { 423,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo hn_emlrtRTEI = { 430,/* lineNo */
  10,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo in_emlrtRTEI = { 438,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo jn_emlrtRTEI = { 439,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo kn_emlrtRTEI = { 440,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ln_emlrtRTEI = { 430,/* lineNo */
  30,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo mn_emlrtRTEI = { 450,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo nn_emlrtRTEI = { 1,/* lineNo */
  31,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo on_emlrtRTEI = { 452,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo pn_emlrtRTEI = { 458,/* lineNo */
  24,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo qn_emlrtRTEI = { 471,/* lineNo */
  9,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo rn_emlrtRTEI = { 575,/* lineNo */
  23,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo sn_emlrtRTEI = { 540,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo tn_emlrtRTEI = { 575,/* lineNo */
  34,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo un_emlrtRTEI = { 572,/* lineNo */
  23,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo vn_emlrtRTEI = { 461,/* lineNo */
  24,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo wn_emlrtRTEI = { 501,/* lineNo */
  42,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo xn_emlrtRTEI = { 544,/* lineNo */
  20,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo yn_emlrtRTEI = { 576,/* lineNo */
  26,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ao_emlrtRTEI = { 506,/* lineNo */
  24,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo bo_emlrtRTEI = { 544,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo co_emlrtRTEI = { 572,/* lineNo */
  35,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo do_emlrtRTEI = { 578,/* lineNo */
  20,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo eo_emlrtRTEI = { 506,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo fo_emlrtRTEI = { 546,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo go_emlrtRTEI = { 586,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ho_emlrtRTEI = { 573,/* lineNo */
  26,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo io_emlrtRTEI = { 587,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo jo_emlrtRTEI = { 523,/* lineNo */
  32,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ko_emlrtRTEI = { 588,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo lo_emlrtRTEI = { 549,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo mo_emlrtRTEI = { 523,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo no_emlrtRTEI = { 604,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo oo_emlrtRTEI = { 521,/* lineNo */
  32,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo po_emlrtRTEI = { 609,/* lineNo */
  23,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo qo_emlrtRTEI = { 615,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ro_emlrtRTEI = { 521,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo so_emlrtRTEI = { 526,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo to_emlrtRTEI = { 553,/* lineNo */
  24,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo uo_emlrtRTEI = { 564,/* lineNo */
  31,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo vo_emlrtRTEI = { 529,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo wo_emlrtRTEI = { 553,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo xo_emlrtRTEI = { 621,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo yo_emlrtRTEI = { 556,/* lineNo */
  25,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ap_emlrtRTEI = { 629,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo bp_emlrtRTEI = { 627,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo cp_emlrtRTEI = { 532,/* lineNo */
  28,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo dp_emlrtRTEI = { 532,/* lineNo */
  25,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ep_emlrtRTEI = { 644,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo fp_emlrtRTEI = { 535,/* lineNo */
  29,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo gp_emlrtRTEI = { 660,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo hp_emlrtRTEI = { 770,/* lineNo */
  38,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ip_emlrtRTEI = { 771,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo jp_emlrtRTEI = { 803,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo kp_emlrtRTEI = { 689,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo lp_emlrtRTEI = { 788,/* lineNo */
  34,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo mp_emlrtRTEI = { 788,/* lineNo */
  27,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo np_emlrtRTEI = { 681,/* lineNo */
  27,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo op_emlrtRTEI = { 732,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo pp_emlrtRTEI = { 788,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo qp_emlrtRTEI = { 738,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo rp_emlrtRTEI = { 739,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo sp_emlrtRTEI = { 781,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo tp_emlrtRTEI = { 757,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo up_emlrtRTEI = { 754,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo vp_emlrtRTEI = { 783,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo wp_emlrtRTEI = { 755,/* lineNo */
  26,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo xp_emlrtRTEI = { 784,/* lineNo */
  26,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo yp_emlrtRTEI = { 284,/* lineNo */
  9,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo aq_emlrtRTEI = { 421,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo bq_emlrtRTEI = { 479,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo cq_emlrtRTEI = { 527,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo dq_emlrtRTEI = { 564,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo eq_emlrtRTEI = { 573,/* lineNo */
  20,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo fq_emlrtRTEI = { 364,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo gq_emlrtRTEI = { 452,/* lineNo */
  18,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo hq_emlrtRTEI = { 463,/* lineNo */
  24,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo iq_emlrtRTEI = { 572,/* lineNo */
  26,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo jq_emlrtRTEI = { 572,/* lineNo */
  38,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo kq_emlrtRTEI = { 573,/* lineNo */
  29,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo lq_emlrtRTEI = { 521,/* lineNo */
  34,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo mq_emlrtRTEI = { 778,/* lineNo */
  32,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo nq_emlrtRTEI = { 779,/* lineNo */
  31,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo oq_emlrtRTEI = { 374,/* lineNo */
  31,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo pq_emlrtRTEI = { 410,/* lineNo */
  6,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRSInfo knb_emlrtRSI = { 437,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo lnb_emlrtRSI = { 584,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo unb_emlrtRSI = { 434,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo vnb_emlrtRSI = { 582,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo wnb_emlrtRSI = { 264,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo qob_emlrtRSI = { 352,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

/* Function Definitions */
void FSMmmd(const emlrtStack *sp, const emxArray_real_T *Y, emxArray_real_T *bsb,
            real_T varargin_2, emxArray_real_T *mmd, emxArray_real_T *Un,
            emxArray_real_T *varargout_1)
{
  static const char_T b_cv[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  static const char_T b_cv1[4] = { '%', 's', '\\', 'n' };

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
  emxArray_boolean_T *MDltminT;
  emxArray_boolean_T *MDltminbsb;
  emxArray_boolean_T *bsbT;
  emxArray_boolean_T *bsbriniT;
  emxArray_boolean_T *oldbsbT;
  emxArray_int32_T *bsbr;
  emxArray_int32_T *ii;
  emxArray_int32_T *r2;
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
  emxArray_real_T *bsbsteps;
  emxArray_real_T *meoldbsb;
  emxArray_real_T *mi;
  emxArray_real_T *mibsbr;
  emxArray_real_T *r;
  emxArray_real_T *r1;
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
  int32_T tmp_data[10];
  int32_T unitadd[10];
  int32_T b_iv[2];
  int32_T c_Y[2];
  int32_T b_i;
  int32_T i;
  int32_T idx;
  int32_T ini0;
  int32_T irank;
  int32_T k;
  int32_T loop_ub;
  int32_T lunit;
  int32_T mm;
  int32_T n;
  int32_T nwhile;
  int32_T partialTrueCount;
  int32_T trueCount;
  int32_T v;
  int32_T zz;
  uint32_T ij;
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
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  e_st.prev = &b_st;
  e_st.tls = b_st.tls;
  f_st.prev = &c_st;
  f_st.tls = c_st.tls;
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
  emxInit_boolean_T(sp, &bsbT, 1, &km_emlrtRTEI, true);

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
  /* chkinputM makes some input parameters and user options checking in multivariate analysis */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*  X :          Input data. Matrix. */
  /*                n x v data matrix; n observations and v variables. Rows of */
  /*                X represent observations, and columns represent variables. */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*                 Data Types - single|double */
  /*  nnargin:      nargin. Scalar. The number of input arguments specified for the caller */
  /*                function. */
  /*  vvarargin:    nvarargin. Scalar. The variable length input argument list */
  /*                specified for the */
  /*                caller function. */
  /*  */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*  Output: */
  /*  */
  /*  X:            Data matrix without missing and infs. Matrix. */
  /*                The new matrix of variables, with missing or */
  /*                infinite values excluded. */
  /*  n:            Number of rows of X (observations). Scalar.  Number of */
  /*                rows after listwise exclusion. */
  /*  p:            Number of columns of X (variables). Scalar. */
  /*                Number of variable in the input data matrix. */
  /*  */
  /*  See also */
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
  /*     %% example_producing_error */
  /*     %To examplify the behaviour of chkinputM, we call function FSM with a */
  /*     %X with more columns then rows. */
  /*     n=3; */
  /*     p=200; */
  /*     state1=123498; */
  /*     randn('state', state1); */
  /*     X=randn(n,p); */
  /*     [out]=FSM(X); */
  /* } */
  /*  Beginning of code */
  /*  chkchk is the position of the option nocheck in vector chklist */
  /*  chkchk = strmatch('nocheck',chklist,'exact'); */
  /*  If nocheck=1, then skip checks on y and X */
  /*  rows(Y) */
  v = Y->size[1];
  n = Y->size[0];

  /*  Do not use implicit expansion */
  /*  Input parameters checking */
  /* init1=options.init; */
  /*  Write in structure 'options' the options chosen by the user */
  /*  And check if the optional user parameters are reasonable. */
  i = bsbT->size[0];
  bsbT->size[0] = bsb->size[0];
  emxEnsureCapacity_boolean_T(sp, bsbT, i, &hm_emlrtRTEI);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[i] = (bsb->data[i] == 0.0);
  }

  emxInit_real_T(sp, &Yb, 2, &mn_emlrtRTEI, true);
  emxInit_real_T(sp, &b_Y, 2, &hn_emlrtRTEI, true);
  st.site = &kv_emlrtRSI;
  if (b_ifWhileCond(&st, bsbT)) {
    Ra = true;
    nwhile = 1;
    while (Ra && (nwhile < 100)) {
      /*  Extract a random sample of size v+1 */
      st.site = &jv_emlrtRSI;
      randsample(&st, n, (real_T)v + 1.0, bsb);

      /*  Check if the var-cov matrix of the random sample is full (i.e =v) */
      st.site = &iv_emlrtRSI;
      loop_ub = Y->size[1];
      i = b_Y->size[0] * b_Y->size[1];
      b_Y->size[0] = bsb->size[0];
      b_Y->size[1] = Y->size[1];
      emxEnsureCapacity_real_T(&st, b_Y, i, &im_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        irank = bsb->size[0];
        for (k = 0; k < irank; k++) {
          partialTrueCount = (int32_T)bsb->data[k];
          if ((partialTrueCount < 1) || (partialTrueCount > Y->size[0])) {
            emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1, Y->size[0],
              &fn_emlrtBCI, &st);
          }

          b_Y->data[k + b_Y->size[0] * i] = Y->data[(partialTrueCount + Y->size
            [0] * i) - 1];
        }
      }

      b_st.site = &iv_emlrtRSI;
      cov(&b_st, b_Y, Yb);
      b_st.site = &mc_emlrtRSI;
      irank = local_rank(&b_st, Yb);
      Ra = (irank < v);
      nwhile++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }

    if (nwhile == 100) {
      st.site = &wnb_emlrtRSI;
      b_disp(&st, e_emlrt_marshallOut(&st, cv9), y_emlrt_marshallOut(&st, cv10),
             &v_emlrtMCI);
    }
  }

  emxInit_real_T(sp, &ym, 2, &qn_emlrtRTEI, true);

  /*  percn = scalar which controls up to which point of the search it is */
  /*  better to use linear indexing to extract the units forming subset. For */
  /*  example percn=0.85*n means that units belonging to susbet are found using */
  /*  linear indexing up to step m=0.85*n. After m=0.85*n units belonging to */
  /*  subset are found using a n-by-1 logical vector */
  percn = 0.85 * (real_T)Y->size[0];

  /*  nrepmin = scalar which controls the maximum number of repeated minima */
  /*  which must be taken in order to find new subset */
  if (Y->size[0] < 1) {
    ym->size[0] = 1;
    ym->size[1] = 0;
  } else {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = Y->size[0];
    emxEnsureCapacity_real_T(sp, ym, i, &hd_emlrtRTEI);
    loop_ub = Y->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      ym->data[i] = (real_T)i + 1.0;
    }
  }

  emxInit_real_T(sp, &seq, 1, &yp_emlrtRTEI, true);
  i = seq->size[0];
  seq->size[0] = ym->size[1];
  emxEnsureCapacity_real_T(sp, seq, i, &jm_emlrtRTEI);
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
  bsbT->size[0] = Y->size[0];
  emxEnsureCapacity_boolean_T(sp, bsbT, i, &km_emlrtRTEI);
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[i] = false;
  }

  emxInit_int32_T(sp, &ii, 1, &dm_emlrtRTEI, true);
  i = ii->size[0];
  ii->size[0] = bsb->size[0];
  emxEnsureCapacity_int32_T(sp, ii, i, &lm_emlrtRTEI);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    k = (int32_T)bsb->data[i];
    if ((k < 1) || (k > Y->size[0])) {
      emlrtDynamicBoundsCheckR2012b(k, 1, Y->size[0], &gn_emlrtBCI, (emlrtCTX)sp);
    }

    ii->data[i] = k;
  }

  loop_ub = ii->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[ii->data[i] - 1] = true;
  }

  emxInit_real_T(sp, &S, 2, &mm_emlrtRTEI, true);

  /*  Initialization for Matlab coder */
  rankgap = 0.0;
  i = S->size[0] * S->size[1];
  S->size[0] = Y->size[1];
  S->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(sp, S, i, &mm_emlrtRTEI);
  loop_ub = Y->size[1] * Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    S->data[i] = 0.0;
  }

  emxInit_real_T(sp, &meoldbsb, 2, &nm_emlrtRTEI, true);
  i = meoldbsb->size[0] * meoldbsb->size[1];
  meoldbsb->size[0] = 1;
  meoldbsb->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(sp, meoldbsb, i, &nm_emlrtRTEI);
  loop_ub = Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    meoldbsb->data[i] = 0.0;
  }

  emxInit_boolean_T(sp, &oldbsbT, 1, &om_emlrtRTEI, true);
  i = oldbsbT->size[0];
  oldbsbT->size[0] = bsbT->size[0];
  emxEnsureCapacity_boolean_T(sp, oldbsbT, i, &om_emlrtRTEI);
  loop_ub = bsbT->size[0];
  for (i = 0; i < loop_ub; i++) {
    oldbsbT->data[i] = bsbT->data[i];
  }

  emxInit_int32_T(sp, &bsbr, 1, &pm_emlrtRTEI, true);
  i = bsbr->size[0];
  bsbr->size[0] = Y->size[0];
  emxEnsureCapacity_int32_T(sp, bsbr, i, &pm_emlrtRTEI);
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbr->data[i] = 0;
  }

  emxInit_real_T(sp, &unitout, 1, &qm_emlrtRTEI, true);
  i = unitout->size[0];
  unitout->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(sp, unitout, i, &qm_emlrtRTEI);
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    unitout->data[i] = 0.0;
  }

  emxInit_boolean_T(sp, &bsbriniT, 1, &rm_emlrtRTEI, true);
  i = bsbriniT->size[0];
  bsbriniT->size[0] = bsbT->size[0];
  emxEnsureCapacity_boolean_T(sp, bsbriniT, i, &rm_emlrtRTEI);
  loop_ub = bsbT->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbriniT->data[i] = bsbT->data[i];
  }

  emxInit_uint32_T(sp, &bsbrini, 1, &sm_emlrtRTEI, true);
  i = bsbrini->size[0];
  bsbrini->size[0] = Y->size[0];
  emxEnsureCapacity_uint32_T(sp, bsbrini, i, &sm_emlrtRTEI);
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbrini->data[i] = 0U;
  }

  ini0 = bsb->size[0];

  /*  check init */
  init1 = varargin_2;
  if (varargin_2 < (real_T)Y->size[1] + 1.0) {
    st.site = &hv_emlrtRSI;
    b_st.site = &aw_emlrtRSI;
    c_st.site = &ynb_emlrtRSI;
    d_st.site = &xnb_emlrtRSI;
    e_st.site = &oob_emlrtRSI;
    g_emlrt_marshallIn(&c_st, d_feval(&c_st, g_emlrt_marshallOut(&c_st, b_cv),
      i_emlrt_marshallOut(1.0), h_emlrt_marshallOut(&d_st, b_cv1),
      w_emlrt_marshallOut(&e_st, cv12), &cb_emlrtMCI), "<output of feval>");
    init1 = (real_T)Y->size[1] + 1.0;
  } else if (varargin_2 < bsb->size[0]) {
    st.site = &qob_emlrtRSI;
    disp(&st, ab_emlrt_marshallOut(&st, cv11), &w_emlrtMCI);
    init1 = bsb->size[0];
  } else if (varargin_2 >= Y->size[0]) {
    st.site = &gv_emlrtRSI;
    b_st.site = &aw_emlrtRSI;
    c_st.site = &ynb_emlrtRSI;
    d_st.site = &xnb_emlrtRSI;
    e_st.site = &oob_emlrtRSI;
    g_emlrt_marshallIn(&c_st, d_feval(&c_st, g_emlrt_marshallOut(&c_st, b_cv),
      i_emlrt_marshallOut(1.0), h_emlrt_marshallOut(&d_st, b_cv1),
      x_emlrt_marshallOut(&e_st, cv13), &cb_emlrtMCI), "<output of feval>");
    init1 = (real_T)Y->size[0] - 1.0;
  }

  /*  Matrix BB will contain the units forming subset in each step (or in */
  /*  selected steps) of the forward search. The first column contains */
  /*  information about units forming subset at step init1. */
  /*  Default for vector bsbsteps which indicates for which steps of the fwd */
  /*  search units forming subset have to be saved */
  emxInit_real_T(sp, &bsbsteps, 1, &fq_emlrtRTEI, true);
  if (Y->size[0] <= 5000) {
    st.site = &fv_emlrtRSI;
    if (muDoubleScalarIsNaN(init1)) {
      i = ym->size[0] * ym->size[1];
      ym->size[0] = 1;
      ym->size[1] = 1;
      emxEnsureCapacity_real_T(&st, ym, i, &tm_emlrtRTEI);
      ym->data[0] = rtNaN;
    } else if (Y->size[0] < init1) {
      ym->size[0] = 1;
      ym->size[1] = 0;
    } else if (muDoubleScalarIsInf(init1) && (init1 == Y->size[0])) {
      i = ym->size[0] * ym->size[1];
      ym->size[0] = 1;
      ym->size[1] = 1;
      emxEnsureCapacity_real_T(&st, ym, i, &um_emlrtRTEI);
      ym->data[0] = rtNaN;
    } else if (muDoubleScalarFloor(init1) == init1) {
      i = ym->size[0] * ym->size[1];
      ym->size[0] = 1;
      ym->size[1] = (int32_T)((real_T)Y->size[0] - init1) + 1;
      emxEnsureCapacity_real_T(&st, ym, i, &vm_emlrtRTEI);
      loop_ub = (int32_T)((real_T)Y->size[0] - init1);
      for (i = 0; i <= loop_ub; i++) {
        ym->data[i] = init1 + (real_T)i;
      }
    } else {
      b_st.site = &gd_emlrtRSI;
      eml_float_colon(&b_st, init1, Y->size[0], ym);
    }

    i = bsbsteps->size[0];
    bsbsteps->size[0] = ym->size[1];
    emxEnsureCapacity_real_T(sp, bsbsteps, i, &wm_emlrtRTEI);
    loop_ub = ym->size[1];
    for (i = 0; i < loop_ub; i++) {
      bsbsteps->data[i] = ym->data[i];
    }
  } else {
    emxInit_real_T(sp, &y, 2, &oq_emlrtRTEI, true);
    st.site = &ev_emlrtRSI;
    a = (init1 + 100.0) - c_mod(init1);
    irank = 100 * (int32_T)muDoubleScalarFloor((real_T)Y->size[0] / 100.0);
    if (muDoubleScalarIsNaN(a)) {
      i = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = 1;
      emxEnsureCapacity_real_T(&st, y, i, &tm_emlrtRTEI);
      y->data[0] = rtNaN;
    } else if (irank < a) {
      y->size[0] = 1;
      y->size[1] = 0;
    } else if (muDoubleScalarIsInf(a) && (a == irank)) {
      i = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = 1;
      emxEnsureCapacity_real_T(&st, y, i, &um_emlrtRTEI);
      y->data[0] = rtNaN;
    } else if (muDoubleScalarFloor(a) == a) {
      i = y->size[0] * y->size[1];
      y->size[0] = 1;
      loop_ub = (int32_T)muDoubleScalarFloor(((real_T)irank - a) / 100.0);
      y->size[1] = loop_ub + 1;
      emxEnsureCapacity_real_T(&st, y, i, &vm_emlrtRTEI);
      for (i = 0; i <= loop_ub; i++) {
        y->data[i] = a + 100.0 * (real_T)i;
      }
    } else {
      b_st.site = &gd_emlrtRSI;
      b_eml_float_colon(&b_st, a, irank, y);
    }

    i = bsbsteps->size[0];
    bsbsteps->size[0] = y->size[1] + 1;
    emxEnsureCapacity_real_T(sp, bsbsteps, i, &xm_emlrtRTEI);
    bsbsteps->data[0] = init1;
    loop_ub = y->size[1];
    for (i = 0; i < loop_ub; i++) {
      bsbsteps->data[i + 1] = y->data[i];
    }

    emxFree_real_T(&y);
  }

  i = varargout_1->size[0] * varargout_1->size[1];
  varargout_1->size[0] = Y->size[0];
  varargout_1->size[1] = bsbsteps->size[0];
  emxEnsureCapacity_real_T(sp, varargout_1, i, &ym_emlrtRTEI);
  loop_ub = Y->size[0] * bsbsteps->size[0];
  for (i = 0; i < loop_ub; i++) {
    varargout_1->data[i] = rtNaN;
  }

  /*   Un is a Matrix whose 2nd column:11th col contain the unit(s) just */
  /*   included. */
  st.site = &dv_emlrtRSI;
  b_st.site = &fd_emlrtRSI;
  if (muDoubleScalarIsNaN(init1 + 1.0)) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, ym, i, &hd_emlrtRTEI);
    ym->data[0] = rtNaN;
  } else if (Y->size[0] < init1 + 1.0) {
    ym->size[0] = 1;
    ym->size[1] = 0;
  } else if (muDoubleScalarIsInf(init1 + 1.0) && (init1 + 1.0 == Y->size[0])) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, ym, i, &hd_emlrtRTEI);
    ym->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(init1 + 1.0) == init1 + 1.0) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = (int32_T)muDoubleScalarFloor((real_T)Y->size[0] - (init1 + 1.0))
      + 1;
    emxEnsureCapacity_real_T(&b_st, ym, i, &hd_emlrtRTEI);
    loop_ub = (int32_T)muDoubleScalarFloor((real_T)Y->size[0] - (init1 + 1.0));
    for (i = 0; i <= loop_ub; i++) {
      ym->data[i] = (init1 + 1.0) + (real_T)i;
    }
  } else {
    c_st.site = &gd_emlrtRSI;
    eml_float_colon(&c_st, init1 + 1.0, Y->size[0], ym);
  }

  d = (real_T)Y->size[0] - init1;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &ob_emlrtDCI, (emlrtCTX)sp);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &nb_emlrtDCI, (emlrtCTX)sp);
  }

  emxInit_real_T(sp, &Szi, 1, &cq_emlrtRTEI, true);
  i = Szi->size[0];
  Szi->size[0] = ym->size[1];
  emxEnsureCapacity_real_T(sp, Szi, i, &an_emlrtRTEI);
  loop_ub = ym->size[1];
  for (i = 0; i < loop_ub; i++) {
    Szi->data[i] = ym->data[i];
  }

  emxInit_real_T(sp, &r, 2, &bn_emlrtRTEI, true);
  i = r->size[0] * r->size[1];
  r->size[0] = (int32_T)d;
  r->size[1] = 10;
  emxEnsureCapacity_real_T(sp, r, i, &bn_emlrtRTEI);
  loop_ub = (int32_T)d * 10;
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = rtNaN;
  }

  emxInit_real_T(sp, &r1, 2, &pq_emlrtRTEI, true);
  st.site = &dv_emlrtRSI;
  b_cat(&st, Szi, r, r1);
  i = Un->size[0] * Un->size[1];
  Un->size[0] = r1->size[0];
  Un->size[1] = 11;
  emxEnsureCapacity_real_T(sp, Un, i, &cn_emlrtRTEI);
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
  st.site = &cv_emlrtRSI;
  b_st.site = &fd_emlrtRSI;
  if (muDoubleScalarIsNaN(init1)) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, ym, i, &hd_emlrtRTEI);
    ym->data[0] = rtNaN;
  } else if ((real_T)Y->size[0] - 1.0 < init1) {
    ym->size[0] = 1;
    ym->size[1] = 0;
  } else if (muDoubleScalarIsInf(init1) && (init1 == (real_T)Y->size[0] - 1.0))
  {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, ym, i, &hd_emlrtRTEI);
    ym->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(init1) == init1) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = (int32_T)(((real_T)Y->size[0] - 1.0) - init1) + 1;
    emxEnsureCapacity_real_T(&b_st, ym, i, &hd_emlrtRTEI);
    loop_ub = (int32_T)(((real_T)Y->size[0] - 1.0) - init1);
    for (i = 0; i <= loop_ub; i++) {
      ym->data[i] = init1 + (real_T)i;
    }
  } else {
    c_st.site = &gd_emlrtRSI;
    eml_float_colon(&c_st, init1, (real_T)Y->size[0] - 1.0, ym);
  }

  emxInit_real_T(&b_st, &MD, 1, &dq_emlrtRTEI, true);
  st.site = &cv_emlrtRSI;
  i = MD->size[0];
  MD->size[0] = ym->size[1];
  emxEnsureCapacity_real_T(&st, MD, i, &dn_emlrtRTEI);
  loop_ub = ym->size[1];
  for (i = 0; i < loop_ub; i++) {
    MD->data[i] = ym->data[i];
  }

  d = (real_T)Y->size[0] - init1;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &qb_emlrtDCI, &st);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &pb_emlrtDCI, &st);
  }

  i = Szi->size[0];
  Szi->size[0] = (int32_T)d;
  emxEnsureCapacity_real_T(&st, Szi, i, &en_emlrtRTEI);
  d = (real_T)Y->size[0] - init1;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &qb_emlrtDCI, &st);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &pb_emlrtDCI, &st);
  }

  loop_ub = (int32_T)d;
  for (i = 0; i < loop_ub; i++) {
    Szi->data[i] = 0.0;
  }

  b_st.site = &fl_emlrtRSI;
  c_st.site = &gl_emlrtRSI;
  if ((int32_T)((real_T)Y->size[0] - init1) != MD->size[0]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &ob_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  i = mmd->size[0] * mmd->size[1];
  mmd->size[0] = MD->size[0];
  mmd->size[1] = 2;
  emxEnsureCapacity_real_T(sp, mmd, i, &fn_emlrtRTEI);
  loop_ub = MD->size[0];
  for (i = 0; i < loop_ub; i++) {
    mmd->data[i] = MD->data[i];
  }

  loop_ub = Szi->size[0];
  for (i = 0; i < loop_ub; i++) {
    mmd->data[i + mmd->size[0]] = 0.0;
  }

  emxInit_int32_T(sp, &unit, 1, &aq_emlrtRTEI, true);

  /*  unit is the vector which will contain the units which enter subset at each */
  /*  step. It is initialized as a vector of zeros */
  i = unit->size[0];
  unit->size[0] = bsb->size[0];
  emxEnsureCapacity_int32_T(sp, unit, i, &gn_emlrtRTEI);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    unit->data[i] = 0;
  }

  lunit = bsb->size[0];

  /*  If the subset Y(bsb,:) is not full rank or a column is constant, then we */
  /*  return as output an empty structure. */
  st.site = &bv_emlrtRSI;
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    k = (int32_T)bsb->data[i];
    if ((k < 1) || (k > Y->size[0])) {
      emlrtDynamicBoundsCheckR2012b(k, 1, Y->size[0], &hn_emlrtBCI, &st);
    }
  }

  loop_ub = Y->size[1];
  i = b_Y->size[0] * b_Y->size[1];
  b_Y->size[0] = bsb->size[0];
  b_Y->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(&st, b_Y, i, &hn_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    irank = bsb->size[0];
    for (k = 0; k < irank; k++) {
      b_Y->data[k + b_Y->size[0] * i] = Y->data[((int32_T)bsb->data[k] + Y->
        size[0] * i) - 1];
    }
  }

  b_st.site = &mc_emlrtRSI;
  irank = local_rank(&b_st, b_Y);
  emxInit_real_T(sp, &Ym, 2, &bq_emlrtRTEI, true);
  emxInit_real_T(sp, &mi, 2, &eo_emlrtRTEI, true);
  emxInit_real_T(sp, &mibsbr, 2, &ro_emlrtRTEI, true);
  emxInit_real_T(sp, &zi, 2, &so_emlrtRTEI, true);
  emxInit_real_T(sp, &R, 2, &eq_emlrtRTEI, true);
  emxInit_boolean_T(sp, &MDltminT, 1, &xo_emlrtRTEI, true);
  emxInit_boolean_T(sp, &MDltminbsb, 1, &bp_emlrtRTEI, true);
  emxInit_int32_T(sp, &r2, 1, &gq_emlrtRTEI, true);
  emxInit_int32_T(sp, &r3, 1, &hq_emlrtRTEI, true);
  emxInit_int32_T(sp, &r4, 1, &iq_emlrtRTEI, true);
  emxInit_int32_T(sp, &r5, 1, &jq_emlrtRTEI, true);
  emxInit_int32_T(sp, &r6, 1, &kq_emlrtRTEI, true);
  emxInit_int32_T(sp, &r7, 1, &lq_emlrtRTEI, true);
  emxInit_int32_T(sp, &r8, 1, &mq_emlrtRTEI, true);
  emxInit_int32_T(sp, &r9, 1, &nq_emlrtRTEI, true);
  guard1 = false;
  if (irank < v) {
    guard1 = true;
  } else {
    st.site = &bv_emlrtRSI;
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      k = (int32_T)bsb->data[i];
      if ((k < 1) || (k > Y->size[0])) {
        emlrtDynamicBoundsCheckR2012b(k, 1, Y->size[0], &in_emlrtBCI, &st);
      }
    }

    b_st.site = &kb_emlrtRSI;
    c_st.site = &lb_emlrtRSI;
    f_st.site = &mb_emlrtRSI;
    if (((bsb->size[0] != 1) || (Y->size[1] != 1)) && (bsb->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&f_st, &nb_emlrtRTEI,
        "Coder:toolbox:autoDimIncompatibility",
        "Coder:toolbox:autoDimIncompatibility", 0);
    }

    g_st.site = &nb_emlrtRSI;
    h_st.site = &ob_emlrtRSI;
    i_st.site = &pb_emlrtRSI;
    irank = bsb->size[0];
    i = Y->size[1] - 1;
    k = mibsbr->size[0] * mibsbr->size[1];
    mibsbr->size[0] = 1;
    mibsbr->size[1] = Y->size[1];
    emxEnsureCapacity_real_T(&i_st, mibsbr, k, &hi_emlrtRTEI);
    if (Y->size[1] >= 1) {
      j_st.site = &rb_emlrtRSI;
      if (Y->size[1] > 2147483646) {
        k_st.site = &hb_emlrtRSI;
        check_forloop_overflow_error(&k_st);
      }

      for (nwhile = 0; nwhile <= i; nwhile++) {
        mibsbr->data[nwhile] = Y->data[((int32_T)bsb->data[0] + Y->size[0] *
          nwhile) - 1];
        j_st.site = &qb_emlrtRSI;
        if ((2 <= irank) && (irank > 2147483646)) {
          k_st.site = &hb_emlrtRSI;
          check_forloop_overflow_error(&k_st);
        }

        for (b_i = 2; b_i <= irank; b_i++) {
          a = mibsbr->data[nwhile];
          ksor = Y->data[((int32_T)bsb->data[b_i - 1] + Y->size[0] * nwhile) - 1];
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

    st.site = &bv_emlrtRSI;
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      k = (int32_T)bsb->data[i];
      if ((k < 1) || (k > Y->size[0])) {
        emlrtDynamicBoundsCheckR2012b(k, 1, Y->size[0], &jn_emlrtBCI, &st);
      }
    }

    b_st.site = &sb_emlrtRSI;
    c_st.site = &tb_emlrtRSI;
    f_st.site = &ub_emlrtRSI;
    if (((bsb->size[0] != 1) || (Y->size[1] != 1)) && (bsb->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&f_st, &nb_emlrtRTEI,
        "Coder:toolbox:autoDimIncompatibility",
        "Coder:toolbox:autoDimIncompatibility", 0);
    }

    g_st.site = &nb_emlrtRSI;
    h_st.site = &ob_emlrtRSI;
    i_st.site = &pb_emlrtRSI;
    irank = bsb->size[0];
    i = Y->size[1] - 1;
    k = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = Y->size[1];
    emxEnsureCapacity_real_T(&i_st, ym, k, &hi_emlrtRTEI);
    if (Y->size[1] >= 1) {
      j_st.site = &rb_emlrtRSI;
      if (Y->size[1] > 2147483646) {
        k_st.site = &hb_emlrtRSI;
        check_forloop_overflow_error(&k_st);
      }

      for (nwhile = 0; nwhile <= i; nwhile++) {
        ym->data[nwhile] = Y->data[((int32_T)bsb->data[0] + Y->size[0] * nwhile)
          - 1];
        j_st.site = &qb_emlrtRSI;
        if ((2 <= irank) && (irank > 2147483646)) {
          k_st.site = &hb_emlrtRSI;
          check_forloop_overflow_error(&k_st);
        }

        for (b_i = 2; b_i <= irank; b_i++) {
          a = ym->data[nwhile];
          ksor = Y->data[((int32_T)bsb->data[b_i - 1] + Y->size[0] * nwhile) - 1];
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

    c_Y[0] = (*(int32_T (*)[2])mibsbr->size)[0];
    c_Y[1] = (*(int32_T (*)[2])mibsbr->size)[1];
    b_iv[0] = (*(int32_T (*)[2])ym->size)[0];
    b_iv[1] = (*(int32_T (*)[2])ym->size)[1];
    emlrtSizeEqCheckNDR2012b(&c_Y[0], &b_iv[0], &cb_emlrtECI, (emlrtCTX)sp);
    st.site = &bv_emlrtRSI;
    i = mibsbr->size[0] * mibsbr->size[1];
    mibsbr->size[0] = 1;
    emxEnsureCapacity_real_T(&st, mibsbr, i, &ln_emlrtRTEI);
    loop_ub = mibsbr->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      mibsbr->data[i] -= ym->data[i];
    }

    b_st.site = &sb_emlrtRSI;
    c_st.site = &tb_emlrtRSI;
    f_st.site = &ub_emlrtRSI;
    if (mibsbr->size[1] < 1) {
      emlrtErrorWithMessageIdR2018a(&f_st, &mb_emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero",
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    g_st.site = &kt_emlrtRSI;
    h_st.site = &lt_emlrtRSI;
    irank = mibsbr->size[1];
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
      i_st.site = &nt_emlrtRSI;
      if (!muDoubleScalarIsNaN(mibsbr->data[0])) {
        idx = 1;
      } else {
        idx = 0;
        j_st.site = &ot_emlrtRSI;
        if (mibsbr->size[1] > 2147483646) {
          k_st.site = &hb_emlrtRSI;
          check_forloop_overflow_error(&k_st);
        }

        k = 2;
        exitg1 = false;
        while ((!exitg1) && (k <= irank)) {
          if (!muDoubleScalarIsNaN(mibsbr->data[k - 1])) {
            idx = k;
            exitg1 = true;
          } else {
            k++;
          }
        }
      }

      if (idx == 0) {
        ex = mibsbr->data[0];
      } else {
        i_st.site = &mt_emlrtRSI;
        ex = mibsbr->data[idx - 1];
        nwhile = idx + 1;
        j_st.site = &pt_emlrtRSI;
        if ((idx + 1 <= mibsbr->size[1]) && (mibsbr->size[1] > 2147483646)) {
          k_st.site = &hb_emlrtRSI;
          check_forloop_overflow_error(&k_st);
        }

        for (k = nwhile; k <= irank; k++) {
          d = mibsbr->data[k - 1];
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
      mm = 0;
      exitg1 = false;
      while ((!exitg1) && (mm <= n - ini0)) {
        b_mm = (real_T)ini0 + (real_T)mm;

        /*  Extract units forming subset */
        if (b_mm <= percn) {
          loop_ub = Y->size[1];
          i = Yb->size[0] * Yb->size[1];
          Yb->size[0] = bsb->size[0];
          Yb->size[1] = Y->size[1];
          emxEnsureCapacity_real_T(sp, Yb, i, &mn_emlrtRTEI);
          for (i = 0; i < loop_ub; i++) {
            irank = bsb->size[0];
            for (k = 0; k < irank; k++) {
              if (bsb->data[k] != (int32_T)muDoubleScalarFloor(bsb->data[k])) {
                emlrtIntegerCheckR2012b(bsb->data[k], &rb_emlrtDCI, (emlrtCTX)sp);
              }

              partialTrueCount = (int32_T)bsb->data[k];
              if ((partialTrueCount < 1) || (partialTrueCount > Y->size[0])) {
                emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1, Y->size[0],
                  &kn_emlrtBCI, (emlrtCTX)sp);
              }

              Yb->data[k + Yb->size[0] * i] = Y->data[(partialTrueCount +
                Y->size[0] * i) - 1];
            }
          }
        } else {
          k = bsbT->size[0] - 1;
          trueCount = 0;
          for (b_i = 0; b_i <= k; b_i++) {
            if (bsbT->data[b_i]) {
              trueCount++;
            }
          }

          i = r2->size[0];
          r2->size[0] = trueCount;
          emxEnsureCapacity_int32_T(sp, r2, i, &nn_emlrtRTEI);
          partialTrueCount = 0;
          for (b_i = 0; b_i <= k; b_i++) {
            if (bsbT->data[b_i]) {
              r2->data[partialTrueCount] = b_i + 1;
              partialTrueCount++;
            }
          }

          loop_ub = Y->size[1];
          i = Yb->size[0] * Yb->size[1];
          Yb->size[0] = r2->size[0];
          Yb->size[1] = Y->size[1];
          emxEnsureCapacity_real_T(sp, Yb, i, &on_emlrtRTEI);
          for (i = 0; i < loop_ub; i++) {
            irank = r2->size[0];
            for (k = 0; k < irank; k++) {
              if (r2->data[k] > Y->size[0]) {
                emlrtDynamicBoundsCheckR2012b(r2->data[k], 1, Y->size[0],
                  &ln_emlrtBCI, (emlrtCTX)sp);
              }

              Yb->data[k + Yb->size[0] * i] = Y->data[(r2->data[k] + Y->size[0] *
                i) - 1];
            }
          }
        }

        /*  If required, store units forming subset at each step */
        if (b_mm >= init1) {
          st.site = &av_emlrtRSI;
          i = Szi->size[0];
          Szi->size[0] = bsbsteps->size[0];
          emxEnsureCapacity_real_T(&st, Szi, i, &pn_emlrtRTEI);
          loop_ub = bsbsteps->size[0];
          for (i = 0; i < loop_ub; i++) {
            Szi->data[i] = b_mm - bsbsteps->data[i];
          }

          b_st.site = &av_emlrtRSI;
          b_abs(&b_st, Szi, MD);
          b_st.site = &sb_emlrtRSI;
          c_st.site = &tb_emlrtRSI;
          f_st.site = &ub_emlrtRSI;
          if (MD->size[0] < 1) {
            emlrtErrorWithMessageIdR2018a(&f_st, &mb_emlrtRTEI,
              "Coder:toolbox:eml_min_or_max_varDimZero",
              "Coder:toolbox:eml_min_or_max_varDimZero", 0);
          }

          g_st.site = &kt_emlrtRSI;
          h_st.site = &lt_emlrtRSI;
          irank = MD->size[0];
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
            i_st.site = &nt_emlrtRSI;
            if (!muDoubleScalarIsNaN(MD->data[0])) {
              idx = 1;
            } else {
              idx = 0;
              j_st.site = &ot_emlrtRSI;
              if (MD->size[0] > 2147483646) {
                k_st.site = &hb_emlrtRSI;
                check_forloop_overflow_error(&k_st);
              }

              k = 2;
              exitg2 = false;
              while ((!exitg2) && (k <= irank)) {
                if (!muDoubleScalarIsNaN(MD->data[k - 1])) {
                  idx = k;
                  exitg2 = true;
                } else {
                  k++;
                }
              }
            }

            if (idx == 0) {
              ex = MD->data[0];
            } else {
              i_st.site = &mt_emlrtRSI;
              ex = MD->data[idx - 1];
              nwhile = idx + 1;
              j_st.site = &pt_emlrtRSI;
              if ((idx + 1 <= MD->size[0]) && (MD->size[0] > 2147483646)) {
                k_st.site = &hb_emlrtRSI;
                check_forloop_overflow_error(&k_st);
              }

              for (k = nwhile; k <= irank; k++) {
                d = MD->data[k - 1];
                if (ex > d) {
                  ex = d;
                }
              }
            }
          }

          if (ex == 0.0) {
            /*  intersect(mm,bsbsteps)==mm */
            if (b_mm <= percn) {
              i = ii->size[0];
              ii->size[0] = bsb->size[0];
              emxEnsureCapacity_int32_T(sp, ii, i, &vn_emlrtRTEI);
              loop_ub = bsb->size[0];
              for (i = 0; i < loop_ub; i++) {
                if (bsb->data[i] != (int32_T)muDoubleScalarFloor(bsb->data[i]))
                {
                  emlrtIntegerCheckR2012b(bsb->data[i], &tb_emlrtDCI, (emlrtCTX)
                    sp);
                }

                k = (int32_T)bsb->data[i];
                if ((k < 1) || (k > varargout_1->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i], 1,
                    varargout_1->size[0], &pn_emlrtBCI, (emlrtCTX)sp);
                }

                ii->data[i] = k - 1;
              }

              if (((int32_T)ij < 1) || ((int32_T)ij > varargout_1->size[1])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)ij, 1, varargout_1->size
                  [1], &bn_emlrtBCI, (emlrtCTX)sp);
              }

              emlrtSubAssignSizeCheckR2012b(&ii->size[0], 1, &bsb->size[0], 1,
                &qb_emlrtECI, (emlrtCTX)sp);
              loop_ub = bsb->size[0];
              for (i = 0; i < loop_ub; i++) {
                varargout_1->data[ii->data[i] + varargout_1->size[0] * ((int32_T)
                  ij - 1)] = bsb->data[i];
              }
            } else {
              k = bsbT->size[0];
              for (b_i = 0; b_i < k; b_i++) {
                if (bsbT->data[b_i] && (b_i + 1 > varargout_1->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, varargout_1->size[0],
                    &rm_emlrtBCI, (emlrtCTX)sp);
                }
              }

              if (((int32_T)ij < 1) || ((int32_T)ij > varargout_1->size[1])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)ij, 1, varargout_1->size
                  [1], &cn_emlrtBCI, (emlrtCTX)sp);
              }

              k = bsbT->size[0];
              for (b_i = 0; b_i < k; b_i++) {
                if (bsbT->data[b_i] && (b_i + 1 > seq->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                    &qm_emlrtBCI, (emlrtCTX)sp);
                }
              }

              k = bsbT->size[0];
              trueCount = 0;
              for (b_i = 0; b_i < k; b_i++) {
                if (bsbT->data[b_i]) {
                  trueCount++;
                }
              }

              emlrtSubAssignSizeCheckR2012b(&trueCount, 1, &trueCount, 1,
                &rb_emlrtECI, (emlrtCTX)sp);
              k = bsbT->size[0] - 1;
              trueCount = 0;
              for (b_i = 0; b_i <= k; b_i++) {
                if (bsbT->data[b_i]) {
                  trueCount++;
                }
              }

              i = r3->size[0];
              r3->size[0] = trueCount;
              emxEnsureCapacity_int32_T(sp, r3, i, &nn_emlrtRTEI);
              partialTrueCount = 0;
              for (b_i = 0; b_i <= k; b_i++) {
                if (bsbT->data[b_i]) {
                  r3->data[partialTrueCount] = b_i + 1;
                  partialTrueCount++;
                }
              }

              loop_ub = r3->size[0];
              for (i = 0; i < loop_ub; i++) {
                varargout_1->data[(r3->data[i] + varargout_1->size[0] *
                                   ((int32_T)ij - 1)) - 1] = seq->data[r3->
                  data[i] - 1];
              }
            }

            ij++;
          }
        }

        /*  Find vector of means inside subset */
        /*  Note that ym is a row vector */
        st.site = &yu_emlrtRSI;
        b_st.site = &sm_emlrtRSI;
        c_st.site = &sd_emlrtRSI;
        b_combineVectorElements(&c_st, Yb, ym);
        i = ym->size[0] * ym->size[1];
        ym->size[0] = 1;
        emxEnsureCapacity_real_T(sp, ym, i, &qn_emlrtRTEI);
        loop_ub = ym->size[1] - 1;
        for (i = 0; i <= loop_ub; i++) {
          ym->data[i] /= b_mm;
        }

        /*  Ym = n-by-v matrix containing deviations from the means computed */
        /*  using units forming subset */
        /*  Ym=Y-one*ym; */
        st.site = &xu_emlrtRSI;
        bsxfun(&st, Y, ym, Ym);
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
              i = MDltminT->size[0];
              MDltminT->size[0] = bsbT->size[0];
              emxEnsureCapacity_boolean_T(sp, MDltminT, i, &wn_emlrtRTEI);
              loop_ub = bsbT->size[0];
              for (i = 0; i < loop_ub; i++) {
                MDltminT->data[i] = !bsbT->data[i];
              }

              if (oldbsbT->size[0] != MDltminT->size[0]) {
                emlrtSizeEqCheck1DR2012b(oldbsbT->size[0], MDltminT->size[0],
                  &db_emlrtECI, (emlrtCTX)sp);
              }

              k = oldbsbT->size[0] - 1;
              trueCount = 0;
              for (b_i = 0; b_i <= k; b_i++) {
                if (oldbsbT->data[b_i] && MDltminT->data[b_i]) {
                  trueCount++;
                }
              }

              i = unitout->size[0];
              unitout->size[0] = trueCount;
              emxEnsureCapacity_real_T(sp, unitout, i, &nn_emlrtRTEI);
              partialTrueCount = 0;
              for (b_i = 0; b_i <= k; b_i++) {
                if (oldbsbT->data[b_i] && MDltminT->data[b_i]) {
                  if (b_i + 1 > seq->size[0]) {
                    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                      &un_emlrtBCI, (emlrtCTX)sp);
                  }

                  unitout->data[partialTrueCount] = seq->data[b_i];
                  partialTrueCount++;
                }
              }
            }

            nwhile = unitout->size[0];
            st.site = &wu_emlrtRSI;
            loop_ub = unitout->size[0];
            for (i = 0; i < loop_ub; i++) {
              if (unitout->data[i] != (int32_T)muDoubleScalarFloor(unitout->
                   data[i])) {
                emlrtIntegerCheckR2012b(unitout->data[i], &ub_emlrtDCI, &st);
              }

              k = (int32_T)unitout->data[i];
              if ((k < 1) || (k > Y->size[0])) {
                emlrtDynamicBoundsCheckR2012b(k, 1, Y->size[0], &sn_emlrtBCI,
                  &st);
              }
            }

            b_st.site = &sm_emlrtRSI;
            loop_ub = Y->size[1];
            i = b_Y->size[0] * b_Y->size[1];
            b_Y->size[0] = unitout->size[0];
            b_Y->size[1] = Y->size[1];
            emxEnsureCapacity_real_T(&b_st, b_Y, i, &ao_emlrtRTEI);
            for (i = 0; i < loop_ub; i++) {
              irank = unitout->size[0];
              for (k = 0; k < irank; k++) {
                b_Y->data[k + b_Y->size[0] * i] = Y->data[((int32_T)
                  unitout->data[k] + Y->size[0] * i) - 1];
              }
            }

            c_st.site = &sd_emlrtRSI;
            b_combineVectorElements(&c_st, b_Y, mi);
            i = mi->size[0] * mi->size[1];
            mi->size[0] = 1;
            emxEnsureCapacity_real_T(sp, mi, i, &eo_emlrtRTEI);
            loop_ub = mi->size[1] - 1;
            for (i = 0; i <= loop_ub; i++) {
              mi->data[i] /= (real_T)unitout->size[0];
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
                  &eb_emlrtECI, (emlrtCTX)sp);
              }

              k = oldbsbT->size[0] - 1;
              trueCount = 0;
              for (b_i = 0; b_i <= k; b_i++) {
                if (oldbsbT->data[b_i] && bsbT->data[b_i]) {
                  trueCount++;
                }
              }

              i = r7->size[0];
              r7->size[0] = trueCount;
              emxEnsureCapacity_int32_T(sp, r7, i, &nn_emlrtRTEI);
              partialTrueCount = 0;
              for (b_i = 0; b_i <= k; b_i++) {
                if (oldbsbT->data[b_i] && bsbT->data[b_i]) {
                  r7->data[partialTrueCount] = b_i + 1;
                  partialTrueCount++;
                }
              }

              st.site = &vu_emlrtRSI;
              loop_ub = r7->size[0];
              for (i = 0; i < loop_ub; i++) {
                if (r7->data[i] > Y->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(r7->data[i], 1, Y->size[0],
                    &ao_emlrtBCI, &st);
                }
              }

              b_st.site = &sm_emlrtRSI;
              loop_ub = Y->size[1];
              i = b_Y->size[0] * b_Y->size[1];
              b_Y->size[0] = r7->size[0];
              b_Y->size[1] = Y->size[1];
              emxEnsureCapacity_real_T(&b_st, b_Y, i, &oo_emlrtRTEI);
              for (i = 0; i < loop_ub; i++) {
                irank = r7->size[0];
                for (k = 0; k < irank; k++) {
                  b_Y->data[k + b_Y->size[0] * i] = Y->data[(r7->data[k] +
                    Y->size[0] * i) - 1];
                }
              }

              c_st.site = &sd_emlrtRSI;
              b_combineVectorElements(&c_st, b_Y, mibsbr);
              i = mibsbr->size[0] * mibsbr->size[1];
              mibsbr->size[0] = 1;
              emxEnsureCapacity_real_T(sp, mibsbr, i, &ro_emlrtRTEI);
              ksor = (b_mm - 1.0) - (real_T)unitout->size[0];
              loop_ub = mibsbr->size[1] - 1;
              for (i = 0; i <= loop_ub; i++) {
                mibsbr->data[i] /= ksor;
              }
            } else {
              st.site = &uu_emlrtRSI;
              loop_ub = bsbr->size[0];
              for (i = 0; i < loop_ub; i++) {
                k = bsbr->data[i];
                if ((k < 1) || (k > Y->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(k, 1, Y->size[0], &wn_emlrtBCI,
                    &st);
                }
              }

              b_st.site = &sm_emlrtRSI;
              loop_ub = Y->size[1];
              i = b_Y->size[0] * b_Y->size[1];
              b_Y->size[0] = bsbr->size[0];
              b_Y->size[1] = Y->size[1];
              emxEnsureCapacity_real_T(&b_st, b_Y, i, &jo_emlrtRTEI);
              for (i = 0; i < loop_ub; i++) {
                irank = bsbr->size[0];
                for (k = 0; k < irank; k++) {
                  b_Y->data[k + b_Y->size[0] * i] = Y->data[(bsbr->data[k] +
                    Y->size[0] * i) - 1];
                }
              }

              c_st.site = &sd_emlrtRSI;
              b_combineVectorElements(&c_st, b_Y, mibsbr);
              i = mibsbr->size[0] * mibsbr->size[1];
              mibsbr->size[0] = 1;
              emxEnsureCapacity_real_T(sp, mibsbr, i, &mo_emlrtRTEI);
              ksor = (b_mm - 1.0) - (real_T)unitout->size[0];
              loop_ub = mibsbr->size[1] - 1;
              for (i = 0; i <= loop_ub; i++) {
                mibsbr->data[i] /= ksor;
              }
            }

            c_Y[0] = (*(int32_T (*)[2])mi->size)[0];
            c_Y[1] = (*(int32_T (*)[2])mi->size)[1];
            b_iv[0] = (*(int32_T (*)[2])mibsbr->size)[0];
            b_iv[1] = (*(int32_T (*)[2])mibsbr->size)[1];
            emlrtSizeEqCheckNDR2012b(&c_Y[0], &b_iv[0], &fb_emlrtECI, (emlrtCTX)
              sp);
            a = (real_T)unitout->size[0] * ((b_mm - 1.0) - (real_T)unitout->
              size[0]) / (b_mm - 1.0);
            st.site = &tu_emlrtRSI;
            if (a < 0.0) {
              emlrtErrorWithMessageIdR2018a(&st, &bc_emlrtRTEI,
                "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
            }

            a = muDoubleScalarSqrt(a);
            i = zi->size[0] * zi->size[1];
            zi->size[0] = 1;
            zi->size[1] = mi->size[1];
            emxEnsureCapacity_real_T(sp, zi, i, &so_emlrtRTEI);
            loop_ub = mi->size[1];
            for (i = 0; i < loop_ub; i++) {
              zi->data[i] = a * (mi->data[i] - mibsbr->data[i]);
            }

            st.site = &su_emlrtRSI;
            b_st.site = &fb_emlrtRSI;
            d_dynamic_size_checks(&b_st, S, zi, S->size[1], zi->size[1]);
            b_st.site = &eb_emlrtRSI;
            c_mtimes(&b_st, S, zi, Szi);

            /*  S=S+(S*(zi')*zi*S)/(1-zi*S*(zi')); */
            st.site = &ru_emlrtRSI;
            b_st.site = &fb_emlrtRSI;
            e_dynamic_size_checks(&b_st, zi, Szi, zi->size[1], Szi->size[0]);
            ksor = d_mtimes(zi, Szi);
            i = R->size[0] * R->size[1];
            R->size[0] = Szi->size[0];
            R->size[1] = Szi->size[0];
            emxEnsureCapacity_real_T(sp, R, i, &vo_emlrtRTEI);
            loop_ub = Szi->size[0];
            for (i = 0; i < loop_ub; i++) {
              irank = Szi->size[0];
              for (k = 0; k < irank; k++) {
                R->data[k + R->size[0] * i] = Szi->data[k] * Szi->data[i] / (1.0
                  - ksor);
              }
            }

            c_Y[0] = (*(int32_T (*)[2])S->size)[0];
            c_Y[1] = (*(int32_T (*)[2])S->size)[1];
            b_iv[0] = (*(int32_T (*)[2])R->size)[0];
            b_iv[1] = (*(int32_T (*)[2])R->size)[1];
            emlrtSizeEqCheckNDR2012b(&c_Y[0], &b_iv[0], &gb_emlrtECI, (emlrtCTX)
              sp);
            loop_ub = S->size[0] * S->size[1];
            for (i = 0; i < loop_ub; i++) {
              S->data[i] += R->data[i];
            }

            if (unitout->size[0] > 1) {
              i = unitout->size[0];
              for (b_i = 0; b_i < i; b_i++) {
                if (b_i + 1 > unitout->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, unitout->size[0],
                    &do_emlrtBCI, (emlrtCTX)sp);
                }

                k = (int32_T)unitout->data[b_i];
                if ((k < 1) || (k > Y->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(k, 1, Y->size[0], &sm_emlrtBCI,
                    (emlrtCTX)sp);
                }

                loop_ub = Y->size[1];
                k = zi->size[0] * zi->size[1];
                zi->size[0] = 1;
                zi->size[1] = Y->size[1];
                emxEnsureCapacity_real_T(sp, zi, k, &cp_emlrtRTEI);
                for (k = 0; k < loop_ub; k++) {
                  zi->data[k] = Y->data[((int32_T)unitout->data[b_i] + Y->size[0]
                    * k) - 1];
                }

                c_Y[0] = (*(int32_T (*)[2])zi->size)[0];
                c_Y[1] = (*(int32_T (*)[2])zi->size)[1];
                b_iv[0] = (*(int32_T (*)[2])mi->size)[0];
                b_iv[1] = (*(int32_T (*)[2])mi->size)[1];
                emlrtSizeEqCheckNDR2012b(&c_Y[0], &b_iv[0], &hb_emlrtECI,
                  (emlrtCTX)sp);
                loop_ub = Y->size[1];
                k = zi->size[0] * zi->size[1];
                zi->size[0] = 1;
                zi->size[1] = Y->size[1];
                emxEnsureCapacity_real_T(sp, zi, k, &dp_emlrtRTEI);
                for (k = 0; k < loop_ub; k++) {
                  zi->data[k] = Y->data[((int32_T)unitout->data[b_i] + Y->size[0]
                    * k) - 1] - mi->data[k];
                }

                st.site = &qu_emlrtRSI;
                b_st.site = &fb_emlrtRSI;
                d_dynamic_size_checks(&b_st, S, zi, S->size[1], zi->size[1]);
                b_st.site = &eb_emlrtRSI;
                c_mtimes(&b_st, S, zi, Szi);

                /*  S=S+(S*(zi')*zi*S)/(1-zi*S*(zi')); */
                st.site = &pu_emlrtRSI;
                b_st.site = &fb_emlrtRSI;
                e_dynamic_size_checks(&b_st, zi, Szi, zi->size[1], Szi->size[0]);
                ksor = d_mtimes(zi, Szi);
                k = R->size[0] * R->size[1];
                R->size[0] = Szi->size[0];
                R->size[1] = Szi->size[0];
                emxEnsureCapacity_real_T(sp, R, k, &fp_emlrtRTEI);
                loop_ub = Szi->size[0];
                for (k = 0; k < loop_ub; k++) {
                  irank = Szi->size[0];
                  for (partialTrueCount = 0; partialTrueCount < irank;
                       partialTrueCount++) {
                    R->data[partialTrueCount + R->size[0] * k] = Szi->
                      data[partialTrueCount] * Szi->data[k] / (1.0 - ksor);
                  }
                }

                c_Y[0] = (*(int32_T (*)[2])S->size)[0];
                c_Y[1] = (*(int32_T (*)[2])S->size)[1];
                b_iv[0] = (*(int32_T (*)[2])R->size)[0];
                b_iv[1] = (*(int32_T (*)[2])R->size)[1];
                emlrtSizeEqCheckNDR2012b(&c_Y[0], &b_iv[0], &ib_emlrtECI,
                  (emlrtCTX)sp);
                loop_ub = S->size[0] * S->size[1];
                for (k = 0; k < loop_ub; k++) {
                  S->data[k] += R->data[k];
                }

                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b((emlrtCTX)sp);
                }
              }
            }
          } else {
            nwhile = 0;
            i = mibsbr->size[0] * mibsbr->size[1];
            mibsbr->size[0] = 1;
            mibsbr->size[1] = meoldbsb->size[1];
            emxEnsureCapacity_real_T(sp, mibsbr, i, &sn_emlrtRTEI);
            loop_ub = meoldbsb->size[1];
            for (i = 0; i < loop_ub; i++) {
              mibsbr->data[i] = meoldbsb->data[i];
            }
          }

          /*  mi = mean of units entering subset */
          st.site = &ou_emlrtRSI;
          loop_ub = unit->size[0];
          for (i = 0; i < loop_ub; i++) {
            k = unit->data[i];
            if ((k < 1) || (k > Y->size[0])) {
              emlrtDynamicBoundsCheckR2012b(k, 1, Y->size[0], &rn_emlrtBCI, &st);
            }
          }

          b_st.site = &sm_emlrtRSI;
          loop_ub = Y->size[1];
          i = b_Y->size[0] * b_Y->size[1];
          b_Y->size[0] = unit->size[0];
          b_Y->size[1] = Y->size[1];
          emxEnsureCapacity_real_T(&b_st, b_Y, i, &xn_emlrtRTEI);
          for (i = 0; i < loop_ub; i++) {
            irank = unit->size[0];
            for (k = 0; k < irank; k++) {
              b_Y->data[k + b_Y->size[0] * i] = Y->data[(unit->data[k] + Y->
                size[0] * i) - 1];
            }
          }

          c_st.site = &sd_emlrtRSI;
          b_combineVectorElements(&c_st, b_Y, mi);
          i = mi->size[0] * mi->size[1];
          mi->size[0] = 1;
          emxEnsureCapacity_real_T(sp, mi, i, &bo_emlrtRTEI);
          loop_ub = mi->size[1] - 1;
          for (i = 0; i <= loop_ub; i++) {
            mi->data[i] /= (real_T)lunit;
          }

          /*  zi=sqrt(kin*(mm-1-k)/(mm-1-k+kin))*(mi-mean(Y(bsbr,:),1)); */
          c_Y[0] = (*(int32_T (*)[2])mi->size)[0];
          c_Y[1] = (*(int32_T (*)[2])mi->size)[1];
          b_iv[0] = (*(int32_T (*)[2])mibsbr->size)[0];
          b_iv[1] = (*(int32_T (*)[2])mibsbr->size)[1];
          emlrtSizeEqCheckNDR2012b(&c_Y[0], &b_iv[0], &jb_emlrtECI, (emlrtCTX)sp);
          ksor = (b_mm - 1.0) - (real_T)nwhile;
          a = (real_T)lunit * ksor / (ksor + (real_T)lunit);
          st.site = &nu_emlrtRSI;
          if (a < 0.0) {
            emlrtErrorWithMessageIdR2018a(&st, &bc_emlrtRTEI,
              "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError",
              3, 4, 4, "sqrt");
          }

          a = muDoubleScalarSqrt(a);
          i = zi->size[0] * zi->size[1];
          zi->size[0] = 1;
          zi->size[1] = mi->size[1];
          emxEnsureCapacity_real_T(sp, zi, i, &fo_emlrtRTEI);
          loop_ub = mi->size[1];
          for (i = 0; i < loop_ub; i++) {
            zi->data[i] = a * (mi->data[i] - mibsbr->data[i]);
          }

          st.site = &mu_emlrtRSI;
          b_st.site = &fb_emlrtRSI;
          d_dynamic_size_checks(&b_st, S, zi, S->size[1], zi->size[1]);
          b_st.site = &eb_emlrtRSI;
          c_mtimes(&b_st, S, zi, Szi);

          /*  S=S+(S*(zi')*zi*S)/(1-zi*S*(zi')); */
          st.site = &lu_emlrtRSI;
          b_st.site = &fb_emlrtRSI;
          e_dynamic_size_checks(&b_st, zi, Szi, zi->size[1], Szi->size[0]);
          ksor = d_mtimes(zi, Szi);
          i = R->size[0] * R->size[1];
          R->size[0] = Szi->size[0];
          R->size[1] = Szi->size[0];
          emxEnsureCapacity_real_T(sp, R, i, &lo_emlrtRTEI);
          loop_ub = Szi->size[0];
          for (i = 0; i < loop_ub; i++) {
            irank = Szi->size[0];
            for (k = 0; k < irank; k++) {
              R->data[k + R->size[0] * i] = Szi->data[k] * Szi->data[i] / (ksor
                + 1.0);
            }
          }

          c_Y[0] = (*(int32_T (*)[2])S->size)[0];
          c_Y[1] = (*(int32_T (*)[2])S->size)[1];
          b_iv[0] = (*(int32_T (*)[2])R->size)[0];
          b_iv[1] = (*(int32_T (*)[2])R->size)[1];
          emlrtSizeEqCheckNDR2012b(&c_Y[0], &b_iv[0], &kb_emlrtECI, (emlrtCTX)sp);
          loop_ub = S->size[0] * S->size[1];
          for (i = 0; i < loop_ub; i++) {
            S->data[i] -= R->data[i];
          }

          if (lunit > 1) {
            /* mi=mean(Y(unit,:),1); */
            for (b_i = 0; b_i < lunit; b_i++) {
              if (b_i + 1 > unit->size[0]) {
                emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, unit->size[0],
                  &bo_emlrtBCI, (emlrtCTX)sp);
              }

              i = unit->data[b_i];
              if ((i < 1) || (i > Y->size[0])) {
                emlrtDynamicBoundsCheckR2012b(i, 1, Y->size[0], &tm_emlrtBCI,
                  (emlrtCTX)sp);
              }

              loop_ub = Y->size[1];
              i = zi->size[0] * zi->size[1];
              zi->size[0] = 1;
              zi->size[1] = Y->size[1];
              emxEnsureCapacity_real_T(sp, zi, i, &to_emlrtRTEI);
              for (i = 0; i < loop_ub; i++) {
                zi->data[i] = Y->data[(unit->data[b_i] + Y->size[0] * i) - 1];
              }

              c_Y[0] = (*(int32_T (*)[2])zi->size)[0];
              c_Y[1] = (*(int32_T (*)[2])zi->size)[1];
              b_iv[0] = (*(int32_T (*)[2])mi->size)[0];
              b_iv[1] = (*(int32_T (*)[2])mi->size)[1];
              emlrtSizeEqCheckNDR2012b(&c_Y[0], &b_iv[0], &lb_emlrtECI,
                (emlrtCTX)sp);
              loop_ub = Y->size[1];
              i = zi->size[0] * zi->size[1];
              zi->size[0] = 1;
              zi->size[1] = Y->size[1];
              emxEnsureCapacity_real_T(sp, zi, i, &wo_emlrtRTEI);
              for (i = 0; i < loop_ub; i++) {
                zi->data[i] = Y->data[(unit->data[b_i] + Y->size[0] * i) - 1] -
                  mi->data[i];
              }

              st.site = &ku_emlrtRSI;
              b_st.site = &fb_emlrtRSI;
              d_dynamic_size_checks(&b_st, S, zi, S->size[1], zi->size[1]);
              b_st.site = &eb_emlrtRSI;
              c_mtimes(&b_st, S, zi, Szi);

              /*  S=S-(S*(zi')*zi*S)/(1+zi*S*(zi')); */
              st.site = &ju_emlrtRSI;
              b_st.site = &fb_emlrtRSI;
              e_dynamic_size_checks(&b_st, zi, Szi, zi->size[1], Szi->size[0]);
              ksor = d_mtimes(zi, Szi);
              i = R->size[0] * R->size[1];
              R->size[0] = Szi->size[0];
              R->size[1] = Szi->size[0];
              emxEnsureCapacity_real_T(sp, R, i, &yo_emlrtRTEI);
              loop_ub = Szi->size[0];
              for (i = 0; i < loop_ub; i++) {
                irank = Szi->size[0];
                for (k = 0; k < irank; k++) {
                  R->data[k + R->size[0] * i] = Szi->data[k] * Szi->data[i] /
                    (ksor + 1.0);
                }
              }

              c_Y[0] = (*(int32_T (*)[2])S->size)[0];
              c_Y[1] = (*(int32_T (*)[2])S->size)[1];
              b_iv[0] = (*(int32_T (*)[2])R->size)[0];
              b_iv[1] = (*(int32_T (*)[2])R->size)[1];
              emlrtSizeEqCheckNDR2012b(&c_Y[0], &b_iv[0], &mb_emlrtECI,
                (emlrtCTX)sp);
              loop_ub = S->size[0] * S->size[1];
              for (i = 0; i < loop_ub; i++) {
                S->data[i] -= R->data[i];
              }

              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b((emlrtCTX)sp);
              }
            }
          }

          /*  Compute Mahalanobis distance using updating formulae */
          /*  Note that up for n>30000 it seems faster to use bsxfun rather */
          /*  than .* */
          if (n < 30000) {
            st.site = &iu_emlrtRSI;
            b_st.site = &fb_emlrtRSI;
            b_dynamic_size_checks(&b_st, Ym, S, Ym->size[1], S->size[0]);
            b_st.site = &eb_emlrtRSI;
            e_mtimes(&b_st, Ym, S, R);
            c_Y[0] = (*(int32_T (*)[2])R->size)[0];
            c_Y[1] = (*(int32_T (*)[2])R->size)[1];
            b_iv[0] = (*(int32_T (*)[2])Ym->size)[0];
            b_iv[1] = (*(int32_T (*)[2])Ym->size)[1];
            emlrtSizeEqCheckNDR2012b(&c_Y[0], &b_iv[0], &nb_emlrtECI, (emlrtCTX)
              sp);
            i = b_Y->size[0] * b_Y->size[1];
            b_Y->size[0] = R->size[0];
            b_Y->size[1] = R->size[1];
            emxEnsureCapacity_real_T(sp, b_Y, i, &uo_emlrtRTEI);
            loop_ub = R->size[0] * R->size[1];
            for (i = 0; i < loop_ub; i++) {
              b_Y->data[i] = R->data[i] * Ym->data[i];
            }

            st.site = &iu_emlrtRSI;
            b_sum(&st, b_Y, MD);
            loop_ub = MD->size[0];
            for (i = 0; i < loop_ub; i++) {
              MD->data[i] *= b_mm - 1.0;
            }
          } else {
            st.site = &hu_emlrtRSI;
            b_st.site = &fb_emlrtRSI;
            b_dynamic_size_checks(&b_st, Ym, S, Ym->size[1], S->size[0]);
            b_st.site = &eb_emlrtRSI;
            e_mtimes(&b_st, Ym, S, b_Y);
            st.site = &hu_emlrtRSI;
            b_bsxfun(&st, b_Y, Ym, R);
            st.site = &hu_emlrtRSI;
            b_sum(&st, R, MD);
            loop_ub = MD->size[0];
            for (i = 0; i < loop_ub; i++) {
              MD->data[i] *= b_mm - 1.0;
            }
          }

          b_guard1 = true;
        } else {
          /*  In the initial step of the search the inverse is computed directly */
          if (b_mm > percn) {
            k = bsbT->size[0] - 1;
            trueCount = 0;
            for (b_i = 0; b_i <= k; b_i++) {
              if (bsbT->data[b_i]) {
                trueCount++;
              }
            }

            i = r4->size[0];
            r4->size[0] = trueCount;
            emxEnsureCapacity_int32_T(sp, r4, i, &nn_emlrtRTEI);
            partialTrueCount = 0;
            for (b_i = 0; b_i <= k; b_i++) {
              if (bsbT->data[b_i]) {
                r4->data[partialTrueCount] = b_i + 1;
                partialTrueCount++;
              }
            }

            loop_ub = Ym->size[1];
            i = R->size[0] * R->size[1];
            R->size[0] = r4->size[0];
            R->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(sp, R, i, &un_emlrtRTEI);
            for (i = 0; i < loop_ub; i++) {
              irank = r4->size[0];
              for (k = 0; k < irank; k++) {
                if (r4->data[k] > Ym->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(r4->data[k], 1, Ym->size[0],
                    &on_emlrtBCI, (emlrtCTX)sp);
                }

                R->data[k + R->size[0] * i] = Ym->data[(r4->data[k] + Ym->size[0]
                  * i) - 1];
              }
            }

            k = bsbT->size[0] - 1;
            trueCount = 0;
            for (b_i = 0; b_i <= k; b_i++) {
              if (bsbT->data[b_i]) {
                trueCount++;
              }
            }

            i = r5->size[0];
            r5->size[0] = trueCount;
            emxEnsureCapacity_int32_T(sp, r5, i, &nn_emlrtRTEI);
            partialTrueCount = 0;
            for (b_i = 0; b_i <= k; b_i++) {
              if (bsbT->data[b_i]) {
                r5->data[partialTrueCount] = b_i + 1;
                partialTrueCount++;
              }
            }

            st.site = &gu_emlrtRSI;
            loop_ub = Ym->size[1];
            i = Yb->size[0] * Yb->size[1];
            Yb->size[0] = r5->size[0];
            Yb->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(&st, Yb, i, &co_emlrtRTEI);
            for (i = 0; i < loop_ub; i++) {
              irank = r5->size[0];
              for (k = 0; k < irank; k++) {
                if (r5->data[k] > Ym->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(r5->data[k], 1, Ym->size[0],
                    &tn_emlrtBCI, &st);
                }

                Yb->data[k + Yb->size[0] * i] = Ym->data[(r5->data[k] + Ym->
                  size[0] * i) - 1];
              }
            }

            b_st.site = &fb_emlrtRSI;
            b_dynamic_size_checks(&b_st, R, Yb, r4->size[0], r5->size[0]);
            b_st.site = &eb_emlrtRSI;
            f_mtimes(&b_st, R, Yb, b_Y);
            st.site = &gu_emlrtRSI;
            inv(&st, b_Y, S);
            k = bsbT->size[0] - 1;
            trueCount = 0;
            for (b_i = 0; b_i <= k; b_i++) {
              if (bsbT->data[b_i]) {
                trueCount++;
              }
            }

            i = r6->size[0];
            r6->size[0] = trueCount;
            emxEnsureCapacity_int32_T(sp, r6, i, &nn_emlrtRTEI);
            partialTrueCount = 0;
            for (b_i = 0; b_i <= k; b_i++) {
              if (bsbT->data[b_i]) {
                r6->data[partialTrueCount] = b_i + 1;
                partialTrueCount++;
              }
            }

            loop_ub = Ym->size[1];
            i = b_Y->size[0] * b_Y->size[1];
            b_Y->size[0] = r6->size[0];
            b_Y->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(sp, b_Y, i, &ho_emlrtRTEI);
            for (i = 0; i < loop_ub; i++) {
              irank = r6->size[0];
              for (k = 0; k < irank; k++) {
                if (r6->data[k] > Ym->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(r6->data[k], 1, Ym->size[0],
                    &vn_emlrtBCI, (emlrtCTX)sp);
                }

                b_Y->data[k + b_Y->size[0] * i] = Ym->data[(r6->data[k] +
                  Ym->size[0] * i) - 1];
              }
            }

            st.site = &fu_emlrtRSI;
            qr(&st, b_Y, Yb, R);
          } else {
            loop_ub = Ym->size[1];
            i = R->size[0] * R->size[1];
            R->size[0] = bsb->size[0];
            R->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(sp, R, i, &rn_emlrtRTEI);
            for (i = 0; i < loop_ub; i++) {
              irank = bsb->size[0];
              for (k = 0; k < irank; k++) {
                if (bsb->data[k] != (int32_T)muDoubleScalarFloor(bsb->data[k]))
                {
                  emlrtIntegerCheckR2012b(bsb->data[k], &sb_emlrtDCI, (emlrtCTX)
                    sp);
                }

                partialTrueCount = (int32_T)bsb->data[k];
                if ((partialTrueCount < 1) || (partialTrueCount > Ym->size[0]))
                {
                  emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1, Ym->size[0],
                    &mn_emlrtBCI, (emlrtCTX)sp);
                }

                R->data[k + R->size[0] * i] = Ym->data[(partialTrueCount +
                  Ym->size[0] * i) - 1];
              }
            }

            st.site = &eu_emlrtRSI;
            loop_ub = Ym->size[1];
            i = Yb->size[0] * Yb->size[1];
            Yb->size[0] = bsb->size[0];
            Yb->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(&st, Yb, i, &tn_emlrtRTEI);
            for (i = 0; i < loop_ub; i++) {
              irank = bsb->size[0];
              for (k = 0; k < irank; k++) {
                partialTrueCount = (int32_T)bsb->data[k];
                if ((partialTrueCount < 1) || (partialTrueCount > Ym->size[0]))
                {
                  emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[k], 1,
                    Ym->size[0], &nn_emlrtBCI, &st);
                }

                Yb->data[k + Yb->size[0] * i] = Ym->data[(partialTrueCount +
                  Ym->size[0] * i) - 1];
              }
            }

            b_st.site = &fb_emlrtRSI;
            b_dynamic_size_checks(&b_st, R, Yb, bsb->size[0], bsb->size[0]);
            b_st.site = &eb_emlrtRSI;
            f_mtimes(&b_st, R, Yb, b_Y);
            st.site = &eu_emlrtRSI;
            inv(&st, b_Y, S);
            loop_ub = Ym->size[1];
            i = b_Y->size[0] * b_Y->size[1];
            b_Y->size[0] = bsb->size[0];
            b_Y->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(sp, b_Y, i, &yn_emlrtRTEI);
            for (i = 0; i < loop_ub; i++) {
              irank = bsb->size[0];
              for (k = 0; k < irank; k++) {
                partialTrueCount = (int32_T)bsb->data[k];
                if ((partialTrueCount < 1) || (partialTrueCount > Ym->size[0]))
                {
                  emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[k], 1,
                    Ym->size[0], &qn_emlrtBCI, (emlrtCTX)sp);
                }

                b_Y->data[k + b_Y->size[0] * i] = Ym->data[(partialTrueCount +
                  Ym->size[0] * i) - 1];
              }
            }

            st.site = &du_emlrtRSI;
            qr(&st, b_Y, Yb, R);
          }

          st.site = &cu_emlrtRSI;
          i = MDltminT->size[0];
          MDltminT->size[0] = S->size[0] * S->size[1];
          emxEnsureCapacity_boolean_T(&st, MDltminT, i, &do_emlrtRTEI);
          loop_ub = S->size[0] * S->size[1];
          for (i = 0; i < loop_ub; i++) {
            MDltminT->data[i] = muDoubleScalarIsInf(S->data[i]);
          }

          b_st.site = &rm_emlrtRSI;
          c_st.site = &sd_emlrtRSI;
          irank = combineVectorElements(&c_st, MDltminT);
          if (irank > 0) {
            st.site = &vnb_emlrtRSI;
            b_disp(&st, e_emlrt_marshallOut(&st, cv9), r_emlrt_marshallOut(&st,
                    cv16), &ab_emlrtMCI);
            st.site = &lnb_emlrtRSI;
            disp(&st, b_emlrt_marshallOut(&st, cv15), &bb_emlrtMCI);
            i = mmd->size[0] * mmd->size[1];
            mmd->size[0] = 1;
            mmd->size[1] = 1;
            emxEnsureCapacity_real_T(sp, mmd, i, &go_emlrtRTEI);
            mmd->data[0] = rtNaN;
            i = Un->size[0] * Un->size[1];
            Un->size[0] = 1;
            Un->size[1] = 1;
            emxEnsureCapacity_real_T(sp, Un, i, &io_emlrtRTEI);
            Un->data[0] = rtNaN;
            i = varargout_1->size[0] * varargout_1->size[1];
            varargout_1->size[0] = 1;
            varargout_1->size[1] = 1;
            emxEnsureCapacity_real_T(sp, varargout_1, i, &ko_emlrtRTEI);
            varargout_1->data[0] = rtNaN;
            exitg1 = true;
          } else {
            st.site = &bu_emlrtRSI;
            if (R->size[1] != Ym->size[1]) {
              emlrtErrorWithMessageIdR2018a(&st, &ec_emlrtRTEI,
                "MATLAB:dimagree", "MATLAB:dimagree", 0);
            }

            b_st.site = &fy_emlrtRSI;
            mrdiv(&b_st, Ym, R);

            /*  Compute squared Mahalanobis distances */
            st.site = &au_emlrtRSI;
            b_power(&st, Ym, R);
            st.site = &au_emlrtRSI;
            b_sum(&st, R, MD);
            loop_ub = MD->size[0];
            for (i = 0; i < loop_ub; i++) {
              MD->data[i] *= b_mm - 1.0;
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
            i = Szi->size[0];
            Szi->size[0] = MD->size[0];
            emxEnsureCapacity_real_T(sp, Szi, i, &no_emlrtRTEI);
            loop_ub = MD->size[0];
            for (i = 0; i < loop_ub; i++) {
              Szi->data[i] = MD->data[i];
            }

            if (b_mm > percn) {
              k = bsbT->size[0];
              for (b_i = 0; b_i < k; b_i++) {
                if (bsbT->data[b_i]) {
                  if (b_i + 1 > Szi->size[0]) {
                    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Szi->size[0],
                      &yn_emlrtBCI, (emlrtCTX)sp);
                  }

                  Szi->data[b_i] = rtInf;
                }
              }
            } else {
              i = ii->size[0];
              ii->size[0] = bsb->size[0];
              emxEnsureCapacity_int32_T(sp, ii, i, &po_emlrtRTEI);
              loop_ub = bsb->size[0];
              for (i = 0; i < loop_ub; i++) {
                if (bsb->data[i] != (int32_T)muDoubleScalarFloor(bsb->data[i]))
                {
                  emlrtIntegerCheckR2012b(bsb->data[i], &vb_emlrtDCI, (emlrtCTX)
                    sp);
                }

                k = (int32_T)bsb->data[i];
                if ((k < 1) || (k > MD->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i], 1,
                    MD->size[0], &xn_emlrtBCI, (emlrtCTX)sp);
                }

                ii->data[i] = k;
              }

              loop_ub = ii->size[0];
              for (i = 0; i < loop_ub; i++) {
                Szi->data[ii->data[i] - 1] = rtInf;
              }
            }

            /*  oldbsbF=bsbF; */
            i = oldbsbT->size[0];
            oldbsbT->size[0] = bsbT->size[0];
            emxEnsureCapacity_boolean_T(sp, oldbsbT, i, &qo_emlrtRTEI);
            loop_ub = bsbT->size[0];
            for (i = 0; i < loop_ub; i++) {
              oldbsbT->data[i] = bsbT->data[i];
            }

            /*  Take minimum distance of the units not belonging to subset */
            st.site = &yt_emlrtRSI;
            b_st.site = &qab_emlrtRSI;
            c_st.site = &rab_emlrtRSI;
            f_st.site = &sab_emlrtRSI;
            if (Szi->size[0] < 1) {
              emlrtErrorWithMessageIdR2018a(&f_st, &mb_emlrtRTEI,
                "Coder:toolbox:eml_min_or_max_varDimZero",
                "Coder:toolbox:eml_min_or_max_varDimZero", 0);
            }

            g_st.site = &tab_emlrtRSI;
            irank = Szi->size[0];
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
              h_st.site = &nt_emlrtRSI;
              if (!muDoubleScalarIsNaN(Szi->data[0])) {
                idx = 1;
              } else {
                idx = 0;
                i_st.site = &ot_emlrtRSI;
                if (Szi->size[0] > 2147483646) {
                  j_st.site = &hb_emlrtRSI;
                  check_forloop_overflow_error(&j_st);
                }

                k = 2;
                exitg2 = false;
                while ((!exitg2) && (k <= irank)) {
                  if (!muDoubleScalarIsNaN(Szi->data[k - 1])) {
                    idx = k;
                    exitg2 = true;
                  } else {
                    k++;
                  }
                }
              }

              if (idx == 0) {
                ex = Szi->data[0];
                idx = 1;
              } else {
                h_st.site = &mt_emlrtRSI;
                ex = Szi->data[idx - 1];
                nwhile = idx + 1;
                i_st.site = &pt_emlrtRSI;
                if ((idx + 1 <= Szi->size[0]) && (Szi->size[0] > 2147483646)) {
                  j_st.site = &hb_emlrtRSI;
                  check_forloop_overflow_error(&j_st);
                }

                for (k = nwhile; k <= irank; k++) {
                  d = Szi->data[k - 1];
                  if (ex > d) {
                    ex = d;
                    idx = k;
                  }
                }
              }
            }

            /*  MDltminT = n x 1 Boolean vector which is true if corresponding MD is */
            /*  smaller or equal minMD */
            i = MDltminT->size[0];
            MDltminT->size[0] = MD->size[0];
            emxEnsureCapacity_boolean_T(sp, MDltminT, i, &xo_emlrtRTEI);
            loop_ub = MD->size[0];
            for (i = 0; i < loop_ub; i++) {
              MDltminT->data[i] = (MD->data[i] <= ex);
            }

            /*  MDltminbsb = n x 1 Boolean vector (if m>percn) or */
            /*  int32 vector containing the units which certainly remain inside subset */
            /*  i.e. those which have a true in MDltminT and belong to previous subset */
            if (b_mm > percn) {
              if (MDltminT->size[0] != bsbT->size[0]) {
                emlrtSizeEqCheck1DR2012b(MDltminT->size[0], bsbT->size[0],
                  &ob_emlrtECI, (emlrtCTX)sp);
              }

              i = MDltminbsb->size[0];
              MDltminbsb->size[0] = MDltminT->size[0];
              emxEnsureCapacity_boolean_T(sp, MDltminbsb, i, &bp_emlrtRTEI);
              loop_ub = MDltminT->size[0];
              for (i = 0; i < loop_ub; i++) {
                MDltminbsb->data[i] = (MDltminT->data[i] && bsbT->data[i]);
              }
            } else {
              i = MDltminbsb->size[0];
              MDltminbsb->size[0] = bsb->size[0];
              emxEnsureCapacity_boolean_T(sp, MDltminbsb, i, &ap_emlrtRTEI);
              loop_ub = bsb->size[0];
              for (i = 0; i < loop_ub; i++) {
                if (bsb->data[i] != (int32_T)muDoubleScalarFloor(bsb->data[i]))
                {
                  emlrtIntegerCheckR2012b(bsb->data[i], &wb_emlrtDCI, (emlrtCTX)
                    sp);
                }

                k = (int32_T)bsb->data[i];
                if ((k < 1) || (k > MDltminT->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(k, 1, MDltminT->size[0],
                    &co_emlrtBCI, (emlrtCTX)sp);
                }

                MDltminbsb->data[i] = MDltminT->data[k - 1];
              }
            }

            /*  Find number of units of old subset which have a MD <= minMD */
            st.site = &xt_emlrtRSI;
            b_st.site = &rm_emlrtRSI;
            c_st.site = &sd_emlrtRSI;
            irank = combineVectorElements(&c_st, MDltminbsb);

            /*  rankgap is the difference between m+1 (size of new size) and */
            /*  the number of units of old subset which have a distance <= */
            /*  minMD. For example if rankgap is =3, three more units must be */
            /*  added. */
            rankgap = (b_mm + 1.0) - (real_T)irank;
            if (rankgap == 1.0) {
              /*  Just one new unit entered subset */
              i = unit->size[0];
              unit->size[0] = 1;
              emxEnsureCapacity_int32_T(sp, unit, i, &ep_emlrtRTEI);
              unit->data[0] = idx;

              /*  Compute new bsbT and new bsb */
              if (b_mm <= percn) {
                /*  new bsb is equal to oldbsb plus unit which just entered */
                i = bsb->size[0];
                k = bsb->size[0];
                bsb->size[0]++;
                emxEnsureCapacity_real_T(sp, bsb, k, &nn_emlrtRTEI);
                bsb->data[i] = idx;
              }

              /*  bsbT is equal to old bsbT after adding a single true in */
              /*  correspondence of the unit which entered subset */
              if ((idx < 1) || (idx > bsbT->size[0])) {
                emlrtDynamicBoundsCheckR2012b(idx, 1, bsbT->size[0],
                  &eo_emlrtBCI, (emlrtCTX)sp);
              }

              bsbT->data[idx - 1] = true;
            } else if ((rankgap > 1.0) && (rankgap <= 10.0)) {
              /*  MDmod is the vector of Mahalanobis distance which will have */
              /*  a Inf in correspondence of the units of old subset which */
              /*  had a MD smaller than minMD */
              i = Szi->size[0];
              Szi->size[0] = MD->size[0];
              emxEnsureCapacity_real_T(sp, Szi, i, &gp_emlrtRTEI);
              loop_ub = MD->size[0];
              for (i = 0; i < loop_ub; i++) {
                Szi->data[i] = MD->data[i];
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
                loop_ub = bsb->size[0];
                for (i = 0; i < loop_ub; i++) {
                  if (bsb->data[i] != (int32_T)muDoubleScalarFloor(bsb->data[i]))
                  {
                    emlrtIntegerCheckR2012b(bsb->data[i], &yb_emlrtDCI,
                      (emlrtCTX)sp);
                  }

                  k = (int32_T)bsb->data[i];
                  if ((k < 1) || (k > MDltminT->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(k, 1, MDltminT->size[0],
                      &go_emlrtBCI, (emlrtCTX)sp);
                  }
                }

                k = bsb->size[0] - 1;
                trueCount = 0;
                for (b_i = 0; b_i <= k; b_i++) {
                  if (MDltminT->data[(int32_T)bsb->data[b_i] - 1]) {
                    trueCount++;
                  }
                }

                i = bsbrini->size[0];
                bsbrini->size[0] = trueCount;
                emxEnsureCapacity_uint32_T(sp, bsbrini, i, &nn_emlrtRTEI);
                partialTrueCount = 0;
                for (b_i = 0; b_i <= k; b_i++) {
                  if (MDltminT->data[(int32_T)bsb->data[b_i] - 1]) {
                    if (b_i + 1 > bsb->size[0]) {
                      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, bsb->size[0],
                        &io_emlrtBCI, (emlrtCTX)sp);
                    }

                    bsbrini->data[partialTrueCount] = (uint32_T)bsb->data[b_i];
                    partialTrueCount++;
                  }
                }

                /*  unitout = list of the units which potentially left */
                /*  subset. We say potentially because there are still k */
                /*  units to be included */
                /*  unitout=bsb(~bsbini); */
                k = bsb->size[0] - 1;
                trueCount = 0;
                for (b_i = 0; b_i <= k; b_i++) {
                  if (!MDltminT->data[(int32_T)bsb->data[b_i] - 1]) {
                    trueCount++;
                  }
                }

                i = unitout->size[0];
                unitout->size[0] = trueCount;
                emxEnsureCapacity_real_T(sp, unitout, i, &nn_emlrtRTEI);
                partialTrueCount = 0;
                for (b_i = 0; b_i <= k; b_i++) {
                  if (!MDltminT->data[(int32_T)bsb->data[b_i] - 1]) {
                    if (b_i + 1 > bsb->size[0]) {
                      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, bsb->size[0],
                        &lo_emlrtBCI, (emlrtCTX)sp);
                    }

                    unitout->data[partialTrueCount] = bsb->data[b_i];
                    partialTrueCount++;
                  }
                }

                i = ii->size[0];
                ii->size[0] = bsbrini->size[0];
                emxEnsureCapacity_int32_T(sp, ii, i, &np_emlrtRTEI);
                loop_ub = bsbrini->size[0];
                for (i = 0; i < loop_ub; i++) {
                  if (((int32_T)bsbrini->data[i] < 1) || ((int32_T)bsbrini->
                       data[i] > MD->size[0])) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)bsbrini->data[i], 1,
                      MD->size[0], &ko_emlrtBCI, (emlrtCTX)sp);
                  }

                  ii->data[i] = (int32_T)bsbrini->data[i];
                }

                loop_ub = ii->size[0];
                for (i = 0; i < loop_ub; i++) {
                  Szi->data[ii->data[i] - 1] = rtInf;
                }
              } else {
                /*  bsbriniT = Boolean vector which is true if the */
                /*  corresponding unit belonged to previous subset and */
                /*  has a MD smaller than minMD. This vector is nothing */
                /*  but the Boolean version of bsbrini. */
                /*  bsbriniT=MDltminT & bsbT; */
                i = bsbriniT->size[0];
                bsbriniT->size[0] = MDltminbsb->size[0];
                emxEnsureCapacity_boolean_T(sp, bsbriniT, i, &kp_emlrtRTEI);
                loop_ub = MDltminbsb->size[0];
                for (i = 0; i < loop_ub; i++) {
                  bsbriniT->data[i] = MDltminbsb->data[i];
                }

                k = MDltminbsb->size[0];
                for (b_i = 0; b_i < k; b_i++) {
                  if (MDltminbsb->data[b_i]) {
                    if (b_i + 1 > Szi->size[0]) {
                      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Szi->size[0],
                        &ho_emlrtBCI, (emlrtCTX)sp);
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
              i = (int32_T)rankgap;
              for (loop_ub = 0; loop_ub < i; loop_ub++) {
                st.site = &wt_emlrtRSI;
                b_st.site = &qab_emlrtRSI;
                c_st.site = &rab_emlrtRSI;
                f_st.site = &sab_emlrtRSI;
                if (Szi->size[0] < 1) {
                  emlrtErrorWithMessageIdR2018a(&f_st, &mb_emlrtRTEI,
                    "Coder:toolbox:eml_min_or_max_varDimZero",
                    "Coder:toolbox:eml_min_or_max_varDimZero", 0);
                }

                g_st.site = &tab_emlrtRSI;
                irank = Szi->size[0];
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
                  h_st.site = &nt_emlrtRSI;
                  if (!muDoubleScalarIsNaN(Szi->data[0])) {
                    idx = 1;
                  } else {
                    idx = 0;
                    i_st.site = &ot_emlrtRSI;
                    if (Szi->size[0] > 2147483646) {
                      j_st.site = &hb_emlrtRSI;
                      check_forloop_overflow_error(&j_st);
                    }

                    k = 2;
                    exitg2 = false;
                    while ((!exitg2) && (k <= irank)) {
                      if (!muDoubleScalarIsNaN(Szi->data[k - 1])) {
                        idx = k;
                        exitg2 = true;
                      } else {
                        k++;
                      }
                    }
                  }

                  if (idx == 0) {
                    idx = 1;
                  } else {
                    h_st.site = &mt_emlrtRSI;
                    a = Szi->data[idx - 1];
                    nwhile = idx + 1;
                    i_st.site = &pt_emlrtRSI;
                    if ((idx + 1 <= Szi->size[0]) && (Szi->size[0] > 2147483646))
                    {
                      j_st.site = &hb_emlrtRSI;
                      check_forloop_overflow_error(&j_st);
                    }

                    for (k = nwhile; k <= irank; k++) {
                      d = Szi->data[k - 1];
                      if (a > d) {
                        a = d;
                        idx = k;
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
                    &po_emlrtBCI, (emlrtCTX)sp);
                }

                if (bsbT->data[idx - 1]) {
                  if (b_mm <= percn) {
                    if ((zz + 1 < 1) || (zz + 1 > 10)) {
                      emlrtDynamicBoundsCheckR2012b(zz + 1, 1, 10, &wm_emlrtBCI,
                        (emlrtCTX)sp);
                    }

                    bsbradd[zz] = idx;
                    zz++;

                    /*  Delete from vector unitout (containing the */
                    /*  list of the units which went out of the */
                    /*  subset) element minMDindex */
                    k = unitout->size[0] - 1;
                    trueCount = 0;
                    for (b_i = 0; b_i <= k; b_i++) {
                      if ((int32_T)unitout->data[b_i] != idx) {
                        trueCount++;
                      }
                    }

                    partialTrueCount = 0;
                    for (b_i = 0; b_i <= k; b_i++) {
                      if ((int32_T)unitout->data[b_i] != idx) {
                        if (b_i + 1 > unitout->size[0]) {
                          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1,
                            unitout->size[0], &so_emlrtBCI, (emlrtCTX)sp);
                        }

                        unitout->data[partialTrueCount] = unitout->data[b_i];
                        partialTrueCount++;
                      }
                    }

                    k = unitout->size[0];
                    unitout->size[0] = trueCount;
                    emxEnsureCapacity_real_T(sp, unitout, k, &nn_emlrtRTEI);
                  } else {
                    if (idx > bsbriniT->size[0]) {
                      emlrtDynamicBoundsCheckR2012b(idx, 1, bsbriniT->size[0],
                        &qo_emlrtBCI, (emlrtCTX)sp);
                    }

                    bsbriniT->data[idx - 1] = true;
                  }
                } else {
                  if ((lunit + 1 < 1) || (lunit + 1 > 10)) {
                    emlrtDynamicBoundsCheckR2012b(lunit + 1, 1, 10, &um_emlrtBCI,
                      (emlrtCTX)sp);
                  }

                  unitadd[lunit] = idx;
                  lunit++;
                }

                /*  disp(posunit(posncl1)) */
                if (idx > Szi->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(idx, 1, Szi->size[0],
                    &ro_emlrtBCI, (emlrtCTX)sp);
                }

                Szi->data[idx - 1] = rtInf;
                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b((emlrtCTX)sp);
                }
              }

              /*  unit = vector containing all units which enter the new subset */
              /*  but did not belong to previous subset */
              if (1 > lunit) {
                lunit = 0;
              } else if (lunit > 10) {
                emlrtDynamicBoundsCheckR2012b(lunit, 1, 10, &vm_emlrtBCI,
                  (emlrtCTX)sp);
              }

              i = unit->size[0];
              unit->size[0] = lunit;
              emxEnsureCapacity_int32_T(sp, unit, i, &op_emlrtRTEI);
              for (i = 0; i < lunit; i++) {
                unit->data[i] = unitadd[i];
              }

              /*  bsbr = vector containing all units which enter the new */
              /*  subset and were also in the previous subset */
              /*  bsb = units forming new subset. */
              if (b_mm <= percn) {
                if (1 > zz) {
                  zz = 0;
                } else if (zz > 10) {
                  emlrtDynamicBoundsCheckR2012b(zz, 1, 10, &xm_emlrtBCI,
                    (emlrtCTX)sp);
                }

                i = bsbr->size[0];
                bsbr->size[0] = bsbrini->size[0] + zz;
                emxEnsureCapacity_int32_T(sp, bsbr, i, &qp_emlrtRTEI);
                loop_ub = bsbrini->size[0];
                for (i = 0; i < loop_ub; i++) {
                  bsbr->data[i] = (int32_T)bsbrini->data[i];
                }

                for (i = 0; i < zz; i++) {
                  bsbr->data[i + bsbrini->size[0]] = bsbradd[i];
                }

                i = bsb->size[0];
                bsb->size[0] = bsbr->size[0] + lunit;
                emxEnsureCapacity_real_T(sp, bsb, i, &rp_emlrtRTEI);
                loop_ub = bsbr->size[0];
                for (i = 0; i < loop_ub; i++) {
                  bsb->data[i] = bsbr->data[i];
                }

                for (i = 0; i < lunit; i++) {
                  bsb->data[i + bsbr->size[0]] = unitadd[i];
                }

                i = bsbT->size[0];
                bsbT->size[0] = n;
                emxEnsureCapacity_boolean_T(sp, bsbT, i, &up_emlrtRTEI);
                for (i = 0; i < n; i++) {
                  bsbT->data[i] = false;
                }

                i = ii->size[0];
                ii->size[0] = bsb->size[0];
                emxEnsureCapacity_int32_T(sp, ii, i, &wp_emlrtRTEI);
                loop_ub = bsb->size[0];
                for (i = 0; i < loop_ub; i++) {
                  k = (int32_T)bsb->data[i];
                  if ((k < 1) || (k > n)) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i], 1, n,
                      &mo_emlrtBCI, (emlrtCTX)sp);
                  }

                  ii->data[i] = k;
                }

                loop_ub = ii->size[0];
                for (i = 0; i < loop_ub; i++) {
                  bsbT->data[ii->data[i] - 1] = true;
                }
              } else {
                /*  After the instruction which follows bsbriniT */
                /*  will be exactly equal to bsbT */
                /*  Note that bsbT has been computed through the 3 following instructions */
                /*  -----------    bsbriniT=MDltminT & bsbT; */
                /*  -----------    bsbriniT(minMDindex)=true; */
                /*  -----------    bsbriniT(unit)=true; */
                for (i = 0; i < lunit; i++) {
                  k = unitadd[i];
                  if ((k < 1) || (k > bsbriniT->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(k, 1, bsbriniT->size[0],
                      &no_emlrtBCI, (emlrtCTX)sp);
                  }

                  tmp_data[i] = k;
                }

                for (i = 0; i < lunit; i++) {
                  bsbriniT->data[tmp_data[i] - 1] = true;
                }

                i = bsbT->size[0];
                bsbT->size[0] = bsbriniT->size[0];
                emxEnsureCapacity_boolean_T(sp, bsbT, i, &tp_emlrtRTEI);
                loop_ub = bsbriniT->size[0];
                for (i = 0; i < loop_ub; i++) {
                  bsbT->data[i] = bsbriniT->data[i];
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
              i = Szi->size[0];
              Szi->size[0] = MD->size[0];
              emxEnsureCapacity_real_T(sp, Szi, i, &hp_emlrtRTEI);
              loop_ub = MD->size[0] - 1;
              for (i = 0; i <= loop_ub; i++) {
                Szi->data[i] = MD->data[i];
              }

              st.site = &vt_emlrtRSI;
              ksor = quickselectFS(&st, Szi, b_mm + 1.0, idx);
              i = bsbT->size[0];
              bsbT->size[0] = MD->size[0];
              emxEnsureCapacity_boolean_T(sp, bsbT, i, &ip_emlrtRTEI);
              loop_ub = MD->size[0];
              for (i = 0; i < loop_ub; i++) {
                bsbT->data[i] = (MD->data[i] <= ksor);
              }

              st.site = &ut_emlrtRSI;
              b_st.site = &rm_emlrtRSI;
              c_st.site = &sd_emlrtRSI;
              irank = combineVectorElements(&c_st, bsbT);
              if (irank == (int32_T)b_mm + 1) {
                if (b_mm <= percn) {
                  k = bsbT->size[0] - 1;
                  trueCount = 0;
                  for (b_i = 0; b_i <= k; b_i++) {
                    if (bsbT->data[b_i]) {
                      trueCount++;
                    }
                  }

                  i = bsb->size[0];
                  bsb->size[0] = trueCount;
                  emxEnsureCapacity_real_T(sp, bsb, i, &nn_emlrtRTEI);
                  partialTrueCount = 0;
                  for (b_i = 0; b_i <= k; b_i++) {
                    if (bsbT->data[b_i]) {
                      if (b_i + 1 > seq->size[0]) {
                        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                          &jo_emlrtBCI, (emlrtCTX)sp);
                      }

                      bsb->data[partialTrueCount] = seq->data[b_i];
                      partialTrueCount++;
                    }
                  }
                }
              } else {
                k = MD->size[0];
                for (b_i = 0; b_i < k; b_i++) {
                  if ((MD->data[b_i] < ksor) && (b_i + 1 > seq->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                      &pm_emlrtBCI, (emlrtCTX)sp);
                  }
                }

                k = MD->size[0];
                for (b_i = 0; b_i < k; b_i++) {
                  if ((MD->data[b_i] == ksor) && (b_i + 1 > seq->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                      &om_emlrtBCI, (emlrtCTX)sp);
                  }
                }

                k = MD->size[0];
                trueCount = 0;
                for (b_i = 0; b_i < k; b_i++) {
                  if (MD->data[b_i] < ksor) {
                    trueCount++;
                  }
                }

                d = (b_mm + 1.0) - (real_T)trueCount;
                if (1.0 > d) {
                  loop_ub = 0;
                } else {
                  k = MD->size[0];
                  trueCount = 0;
                  for (b_i = 0; b_i < k; b_i++) {
                    if (MD->data[b_i] == ksor) {
                      trueCount++;
                    }
                  }

                  if (1 > trueCount) {
                    emlrtDynamicBoundsCheckR2012b(1, 1, trueCount, &ym_emlrtBCI,
                      (emlrtCTX)sp);
                  }

                  k = MD->size[0];
                  trueCount = 0;
                  for (b_i = 0; b_i < k; b_i++) {
                    if (MD->data[b_i] == ksor) {
                      trueCount++;
                    }
                  }

                  if (((int32_T)d < 1) || ((int32_T)d > trueCount)) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, trueCount,
                      &an_emlrtBCI, (emlrtCTX)sp);
                  }

                  loop_ub = (int32_T)d;
                }

                k = MD->size[0];
                trueCount = 0;
                for (b_i = 0; b_i < k; b_i++) {
                  if (MD->data[b_i] == ksor) {
                    trueCount++;
                  }
                }

                c_Y[0] = 1;
                c_Y[1] = loop_ub;
                st.site = &tt_emlrtRSI;
                b_indexShapeCheck(&st, trueCount, c_Y);
                k = MD->size[0] - 1;
                trueCount = 0;
                for (b_i = 0; b_i <= k; b_i++) {
                  if (MD->data[b_i] < ksor) {
                    trueCount++;
                  }
                }

                i = r8->size[0];
                r8->size[0] = trueCount;
                emxEnsureCapacity_int32_T(sp, r8, i, &nn_emlrtRTEI);
                partialTrueCount = 0;
                irank = MD->size[0] - 1;
                trueCount = 0;
                for (b_i = 0; b_i <= k; b_i++) {
                  if (MD->data[b_i] < ksor) {
                    r8->data[partialTrueCount] = b_i + 1;
                    partialTrueCount++;
                  }

                  if (MD->data[b_i] == ksor) {
                    trueCount++;
                  }
                }

                i = r9->size[0];
                r9->size[0] = trueCount;
                emxEnsureCapacity_int32_T(sp, r9, i, &nn_emlrtRTEI);
                partialTrueCount = 0;
                for (b_i = 0; b_i <= irank; b_i++) {
                  if (MD->data[b_i] == ksor) {
                    r9->data[partialTrueCount] = b_i + 1;
                    partialTrueCount++;
                  }
                }

                i = bsb->size[0];
                bsb->size[0] = r8->size[0] + loop_ub;
                emxEnsureCapacity_real_T(sp, bsb, i, &sp_emlrtRTEI);
                irank = r8->size[0];
                for (i = 0; i < irank; i++) {
                  bsb->data[i] = seq->data[r8->data[i] - 1];
                }

                for (i = 0; i < loop_ub; i++) {
                  bsb->data[i + r8->size[0]] = seq->data[r9->data[i] - 1];
                }

                i = bsbT->size[0];
                bsbT->size[0] = n;
                emxEnsureCapacity_boolean_T(sp, bsbT, i, &vp_emlrtRTEI);
                for (i = 0; i < n; i++) {
                  bsbT->data[i] = false;
                }

                i = ii->size[0];
                ii->size[0] = bsb->size[0];
                emxEnsureCapacity_int32_T(sp, ii, i, &xp_emlrtRTEI);
                loop_ub = bsb->size[0];
                for (i = 0; i < loop_ub; i++) {
                  k = (int32_T)bsb->data[i];
                  if (bsb->data[i] != k) {
                    emlrtIntegerCheckR2012b(bsb->data[i], &ac_emlrtDCI,
                      (emlrtCTX)sp);
                  }

                  if (k > n) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i], 1, n,
                      &oo_emlrtBCI, (emlrtCTX)sp);
                  }

                  ii->data[i] = k;
                }

                loop_ub = ii->size[0];
                for (i = 0; i < loop_ub; i++) {
                  bsbT->data[ii->data[i] - 1] = true;
                }
              }

              /*  unit = vector containing units which just entered subset; */
              i = MDltminT->size[0];
              MDltminT->size[0] = oldbsbT->size[0];
              emxEnsureCapacity_boolean_T(sp, MDltminT, i, &lp_emlrtRTEI);
              loop_ub = oldbsbT->size[0];
              for (i = 0; i < loop_ub; i++) {
                MDltminT->data[i] = !oldbsbT->data[i];
              }

              if (bsbT->size[0] != MDltminT->size[0]) {
                emlrtSizeEqCheck1DR2012b(bsbT->size[0], MDltminT->size[0],
                  &pb_emlrtECI, (emlrtCTX)sp);
              }

              st.site = &st_emlrtRSI;
              i = MDltminT->size[0];
              MDltminT->size[0] = bsbT->size[0];
              emxEnsureCapacity_boolean_T(&st, MDltminT, i, &mp_emlrtRTEI);
              loop_ub = bsbT->size[0];
              for (i = 0; i < loop_ub; i++) {
                MDltminT->data[i] = (bsbT->data[i] && MDltminT->data[i]);
              }

              b_st.site = &vb_emlrtRSI;
              c_eml_find(&b_st, MDltminT, ii);
              i = unit->size[0];
              unit->size[0] = ii->size[0];
              emxEnsureCapacity_int32_T(&st, unit, i, &pp_emlrtRTEI);
              loop_ub = ii->size[0];
              for (i = 0; i < loop_ub; i++) {
                unit->data[i] = ii->data[i];
              }
            }

            if (b_mm >= init1) {
              /*  mmd contains minimum of Mahalanobis distances among */
              /*  the units which are not in the subset at step m */
              d = (b_mm - init1) + 1.0;
              a = (int32_T)muDoubleScalarFloor(d);
              if (d != a) {
                emlrtIntegerCheckR2012b(d, &xb_emlrtDCI, (emlrtCTX)sp);
              }

              if (((int32_T)d < 1) || ((int32_T)d > mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, mmd->size[0],
                  &fo_emlrtBCI, (emlrtCTX)sp);
              }

              mmd->data[((int32_T)d + mmd->size[0]) - 1] = ex;
              if (d != a) {
                emlrtIntegerCheckR2012b(d, &xb_emlrtDCI, (emlrtCTX)sp);
              }

              if (((int32_T)d < 1) || ((int32_T)d > mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, mmd->size[0],
                  &fo_emlrtBCI, (emlrtCTX)sp);
              }

              st.site = &rt_emlrtRSI;
              x = &mmd->data[((int32_T)d + mmd->size[0]) - 1];
              if (*x < 0.0) {
                emlrtErrorWithMessageIdR2018a(&st, &bc_emlrtRTEI,
                  "Coder:toolbox:ElFunDomainError",
                  "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
              }

              *x = muDoubleScalarSqrt(*x);
            }

            /*  store mean of units forming old subset */
            i = meoldbsb->size[0] * meoldbsb->size[1];
            meoldbsb->size[0] = 1;
            meoldbsb->size[1] = ym->size[1];
            emxEnsureCapacity_real_T(sp, meoldbsb, i, &jp_emlrtRTEI);
            loop_ub = ym->size[1];
            for (i = 0; i < loop_ub; i++) {
              meoldbsb->data[i] = ym->data[i];
            }

            lunit = unit->size[0];
            if (b_mm >= init1) {
              if (unit->size[0] <= 10) {
                if (2 > unit->size[0] + 1) {
                  i = -1;
                  k = -1;
                } else {
                  i = 0;
                  k = unit->size[0];
                }

                d = (b_mm - init1) + 1.0;
                if (d != (int32_T)muDoubleScalarFloor(d)) {
                  emlrtIntegerCheckR2012b(d, &lb_emlrtDCI, (emlrtCTX)sp);
                }

                if (((int32_T)d < 1) || ((int32_T)d > Un->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Un->size[0],
                    &dn_emlrtBCI, (emlrtCTX)sp);
                }

                c_Y[0] = 1;
                irank = k - i;
                c_Y[1] = irank;
                emlrtSubAssignSizeCheckR2012b(&c_Y[0], 2, &unit->size[0], 1,
                  &sb_emlrtECI, (emlrtCTX)sp);
                for (k = 0; k < irank; k++) {
                  Un->data[((int32_T)d + Un->size[0] * ((i + k) + 1)) - 1] =
                    unit->data[k];
                }
              } else {
                st.site = &qt_emlrtRSI;
                c_indexShapeCheck(&st, unit->size[0]);
                d = (b_mm - init1) + 1.0;
                if (d != (int32_T)muDoubleScalarFloor(d)) {
                  emlrtIntegerCheckR2012b(d, &mb_emlrtDCI, (emlrtCTX)sp);
                }

                if (((int32_T)d < 1) || ((int32_T)d > Un->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Un->size[0],
                    &en_emlrtBCI, (emlrtCTX)sp);
                }

                c_Y[0] = 1;
                c_Y[1] = 10;
                trueCount = 10;
                emlrtSubAssignSizeCheckR2012b(&c_Y[0], 2, &trueCount, 1,
                  &tb_emlrtECI, (emlrtCTX)sp);
                for (i = 0; i < 10; i++) {
                  Un->data[((int32_T)d + Un->size[0] * (i + 1)) - 1] =
                    unit->data[i];
                }
              }
            }
          }

          mm++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtCTX)sp);
          }
        }
      }
    }
  }

  if (guard1) {
    st.site = &unb_emlrtRSI;
    b_disp(&st, e_emlrt_marshallOut(&st, cv9), o_emlrt_marshallOut(&st, cv14),
           &x_emlrtMCI);
    st.site = &knb_emlrtRSI;
    disp(&st, b_emlrt_marshallOut(&st, cv15), &y_emlrtMCI);
    i = mmd->size[0] * mmd->size[1];
    mmd->size[0] = 1;
    mmd->size[1] = 1;
    emxEnsureCapacity_real_T(sp, mmd, i, &in_emlrtRTEI);
    mmd->data[0] = rtNaN;
    i = Un->size[0] * Un->size[1];
    Un->size[0] = 1;
    Un->size[1] = 1;
    emxEnsureCapacity_real_T(sp, Un, i, &jn_emlrtRTEI);
    Un->data[0] = rtNaN;
    i = varargout_1->size[0] * varargout_1->size[1];
    varargout_1->size[0] = 1;
    varargout_1->size[1] = 1;
    emxEnsureCapacity_real_T(sp, varargout_1, i, &kn_emlrtRTEI);
    varargout_1->data[0] = rtNaN;
  }

  emxFree_real_T(&b_Y);
  emxFree_int32_T(&ii);
  emxFree_int32_T(&r9);
  emxFree_int32_T(&r8);
  emxFree_int32_T(&r7);
  emxFree_int32_T(&r6);
  emxFree_int32_T(&r5);
  emxFree_int32_T(&r4);
  emxFree_int32_T(&r3);
  emxFree_int32_T(&r2);
  emxFree_real_T(&bsbsteps);
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
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void b_FSMmmd(const emlrtStack *sp, const emxArray_real_T *Y, emxArray_real_T
              *bsb, real_T varargin_2, emxArray_real_T *mmd, emxArray_real_T *Un)
{
  static const char_T b_cv[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  static const char_T b_cv1[4] = { '%', 's', '\\', 'n' };

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
  emxArray_boolean_T *MDltminT;
  emxArray_boolean_T *MDltminbsb;
  emxArray_boolean_T *bsbT;
  emxArray_boolean_T *bsbriniT;
  emxArray_boolean_T *oldbsbT;
  emxArray_int32_T *bsbr;
  emxArray_int32_T *ii;
  emxArray_int32_T *r2;
  emxArray_int32_T *r3;
  emxArray_int32_T *r4;
  emxArray_int32_T *r5;
  emxArray_int32_T *r6;
  emxArray_int32_T *r7;
  emxArray_int32_T *r8;
  emxArray_real_T *MD;
  emxArray_real_T *R;
  emxArray_real_T *S;
  emxArray_real_T *Yb;
  emxArray_real_T *Ym;
  emxArray_real_T *b_Y;
  emxArray_real_T *meoldbsb;
  emxArray_real_T *mi;
  emxArray_real_T *mibsbr;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *seq;
  emxArray_real_T *unit;
  emxArray_real_T *unitout;
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
  int32_T tmp_data[10];
  int32_T unitadd[10];
  int32_T b_iv[2];
  int32_T c_Y[2];
  int32_T b_i;
  int32_T i;
  int32_T idx;
  int32_T ini0;
  int32_T irank;
  int32_T k;
  int32_T loop_ub;
  int32_T lunit;
  int32_T mm;
  int32_T n;
  int32_T nwhile;
  int32_T partialTrueCount;
  int32_T trueCount;
  int32_T v;
  int32_T zz;
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
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  e_st.prev = &b_st;
  e_st.tls = b_st.tls;
  f_st.prev = &c_st;
  f_st.tls = c_st.tls;
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
  emxInit_boolean_T(sp, &bsbT, 1, &km_emlrtRTEI, true);

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
  /* chkinputM makes some input parameters and user options checking in multivariate analysis */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*  X :          Input data. Matrix. */
  /*                n x v data matrix; n observations and v variables. Rows of */
  /*                X represent observations, and columns represent variables. */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*                 Data Types - single|double */
  /*  nnargin:      nargin. Scalar. The number of input arguments specified for the caller */
  /*                function. */
  /*  vvarargin:    nvarargin. Scalar. The variable length input argument list */
  /*                specified for the */
  /*                caller function. */
  /*  */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*  Output: */
  /*  */
  /*  X:            Data matrix without missing and infs. Matrix. */
  /*                The new matrix of variables, with missing or */
  /*                infinite values excluded. */
  /*  n:            Number of rows of X (observations). Scalar.  Number of */
  /*                rows after listwise exclusion. */
  /*  p:            Number of columns of X (variables). Scalar. */
  /*                Number of variable in the input data matrix. */
  /*  */
  /*  See also */
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
  /*     %% example_producing_error */
  /*     %To examplify the behaviour of chkinputM, we call function FSM with a */
  /*     %X with more columns then rows. */
  /*     n=3; */
  /*     p=200; */
  /*     state1=123498; */
  /*     randn('state', state1); */
  /*     X=randn(n,p); */
  /*     [out]=FSM(X); */
  /* } */
  /*  Beginning of code */
  /*  chkchk is the position of the option nocheck in vector chklist */
  /*  chkchk = strmatch('nocheck',chklist,'exact'); */
  /*  If nocheck=1, then skip checks on y and X */
  /*  rows(Y) */
  v = Y->size[1];
  n = Y->size[0];

  /*  Do not use implicit expansion */
  /*  Input parameters checking */
  /* init1=options.init; */
  /*  Write in structure 'options' the options chosen by the user */
  /*  And check if the optional user parameters are reasonable. */
  i = bsbT->size[0];
  bsbT->size[0] = bsb->size[0];
  emxEnsureCapacity_boolean_T(sp, bsbT, i, &hm_emlrtRTEI);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[i] = (bsb->data[i] == 0.0);
  }

  emxInit_real_T(sp, &Yb, 2, &mn_emlrtRTEI, true);
  emxInit_real_T(sp, &b_Y, 2, &hn_emlrtRTEI, true);
  st.site = &kv_emlrtRSI;
  if (b_ifWhileCond(&st, bsbT)) {
    Ra = true;
    nwhile = 1;
    while (Ra && (nwhile < 100)) {
      /*  Extract a random sample of size v+1 */
      st.site = &jv_emlrtRSI;
      randsample(&st, n, (real_T)v + 1.0, bsb);

      /*  Check if the var-cov matrix of the random sample is full (i.e =v) */
      st.site = &iv_emlrtRSI;
      loop_ub = Y->size[1];
      i = b_Y->size[0] * b_Y->size[1];
      b_Y->size[0] = bsb->size[0];
      b_Y->size[1] = Y->size[1];
      emxEnsureCapacity_real_T(&st, b_Y, i, &im_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        irank = bsb->size[0];
        for (k = 0; k < irank; k++) {
          partialTrueCount = (int32_T)bsb->data[k];
          if ((partialTrueCount < 1) || (partialTrueCount > Y->size[0])) {
            emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1, Y->size[0],
              &fn_emlrtBCI, &st);
          }

          b_Y->data[k + b_Y->size[0] * i] = Y->data[(partialTrueCount + Y->size
            [0] * i) - 1];
        }
      }

      b_st.site = &iv_emlrtRSI;
      cov(&b_st, b_Y, Yb);
      b_st.site = &mc_emlrtRSI;
      irank = local_rank(&b_st, Yb);
      Ra = (irank < v);
      nwhile++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }

    if (nwhile == 100) {
      st.site = &wnb_emlrtRSI;
      b_disp(&st, e_emlrt_marshallOut(&st, cv9), y_emlrt_marshallOut(&st, cv10),
             &v_emlrtMCI);
    }
  }

  emxInit_real_T(sp, &ym, 2, &qn_emlrtRTEI, true);

  /*  percn = scalar which controls up to which point of the search it is */
  /*  better to use linear indexing to extract the units forming subset. For */
  /*  example percn=0.85*n means that units belonging to susbet are found using */
  /*  linear indexing up to step m=0.85*n. After m=0.85*n units belonging to */
  /*  subset are found using a n-by-1 logical vector */
  percn = 0.85 * (real_T)Y->size[0];

  /*  nrepmin = scalar which controls the maximum number of repeated minima */
  /*  which must be taken in order to find new subset */
  if (Y->size[0] < 1) {
    ym->size[0] = 1;
    ym->size[1] = 0;
  } else {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = Y->size[0];
    emxEnsureCapacity_real_T(sp, ym, i, &hd_emlrtRTEI);
    loop_ub = Y->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      ym->data[i] = (real_T)i + 1.0;
    }
  }

  emxInit_real_T(sp, &seq, 1, &yp_emlrtRTEI, true);
  i = seq->size[0];
  seq->size[0] = ym->size[1];
  emxEnsureCapacity_real_T(sp, seq, i, &jm_emlrtRTEI);
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
  bsbT->size[0] = Y->size[0];
  emxEnsureCapacity_boolean_T(sp, bsbT, i, &km_emlrtRTEI);
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[i] = false;
  }

  emxInit_int32_T(sp, &ii, 1, &dm_emlrtRTEI, true);
  i = ii->size[0];
  ii->size[0] = bsb->size[0];
  emxEnsureCapacity_int32_T(sp, ii, i, &lm_emlrtRTEI);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    k = (int32_T)bsb->data[i];
    if ((k < 1) || (k > Y->size[0])) {
      emlrtDynamicBoundsCheckR2012b(k, 1, Y->size[0], &gn_emlrtBCI, (emlrtCTX)sp);
    }

    ii->data[i] = k;
  }

  loop_ub = ii->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[ii->data[i] - 1] = true;
  }

  emxInit_real_T(sp, &S, 2, &mm_emlrtRTEI, true);

  /*  Initialization for Matlab coder */
  rankgap = 0.0;
  i = S->size[0] * S->size[1];
  S->size[0] = Y->size[1];
  S->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(sp, S, i, &mm_emlrtRTEI);
  loop_ub = Y->size[1] * Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    S->data[i] = 0.0;
  }

  emxInit_real_T(sp, &meoldbsb, 2, &nm_emlrtRTEI, true);
  i = meoldbsb->size[0] * meoldbsb->size[1];
  meoldbsb->size[0] = 1;
  meoldbsb->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(sp, meoldbsb, i, &nm_emlrtRTEI);
  loop_ub = Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    meoldbsb->data[i] = 0.0;
  }

  emxInit_boolean_T(sp, &oldbsbT, 1, &om_emlrtRTEI, true);
  i = oldbsbT->size[0];
  oldbsbT->size[0] = bsbT->size[0];
  emxEnsureCapacity_boolean_T(sp, oldbsbT, i, &om_emlrtRTEI);
  loop_ub = bsbT->size[0];
  for (i = 0; i < loop_ub; i++) {
    oldbsbT->data[i] = bsbT->data[i];
  }

  emxInit_int32_T(sp, &bsbr, 1, &pm_emlrtRTEI, true);
  i = bsbr->size[0];
  bsbr->size[0] = Y->size[0];
  emxEnsureCapacity_int32_T(sp, bsbr, i, &pm_emlrtRTEI);
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbr->data[i] = 0;
  }

  emxInit_real_T(sp, &unitout, 1, &qm_emlrtRTEI, true);
  i = unitout->size[0];
  unitout->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(sp, unitout, i, &qm_emlrtRTEI);
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    unitout->data[i] = 0.0;
  }

  emxInit_boolean_T(sp, &bsbriniT, 1, &rm_emlrtRTEI, true);
  i = bsbriniT->size[0];
  bsbriniT->size[0] = bsbT->size[0];
  emxEnsureCapacity_boolean_T(sp, bsbriniT, i, &rm_emlrtRTEI);
  loop_ub = bsbT->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbriniT->data[i] = bsbT->data[i];
  }

  emxInit_uint32_T(sp, &bsbrini, 1, &sm_emlrtRTEI, true);
  i = bsbrini->size[0];
  bsbrini->size[0] = Y->size[0];
  emxEnsureCapacity_uint32_T(sp, bsbrini, i, &sm_emlrtRTEI);
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbrini->data[i] = 0U;
  }

  ini0 = bsb->size[0];

  /*  check init */
  init1 = varargin_2;
  if (varargin_2 < (real_T)Y->size[1] + 1.0) {
    st.site = &hv_emlrtRSI;
    b_st.site = &aw_emlrtRSI;
    c_st.site = &ynb_emlrtRSI;
    d_st.site = &xnb_emlrtRSI;
    e_st.site = &oob_emlrtRSI;
    g_emlrt_marshallIn(&c_st, d_feval(&c_st, g_emlrt_marshallOut(&c_st, b_cv),
      i_emlrt_marshallOut(1.0), h_emlrt_marshallOut(&d_st, b_cv1),
      w_emlrt_marshallOut(&e_st, cv12), &cb_emlrtMCI), "<output of feval>");
    init1 = (real_T)Y->size[1] + 1.0;
  } else if (varargin_2 < bsb->size[0]) {
    st.site = &qob_emlrtRSI;
    disp(&st, ab_emlrt_marshallOut(&st, cv11), &w_emlrtMCI);
    init1 = bsb->size[0];
  } else if (varargin_2 >= Y->size[0]) {
    st.site = &gv_emlrtRSI;
    b_st.site = &aw_emlrtRSI;
    c_st.site = &ynb_emlrtRSI;
    d_st.site = &xnb_emlrtRSI;
    e_st.site = &oob_emlrtRSI;
    g_emlrt_marshallIn(&c_st, d_feval(&c_st, g_emlrt_marshallOut(&c_st, b_cv),
      i_emlrt_marshallOut(1.0), h_emlrt_marshallOut(&d_st, b_cv1),
      x_emlrt_marshallOut(&e_st, cv13), &cb_emlrtMCI), "<output of feval>");
    init1 = (real_T)Y->size[0] - 1.0;
  }

  /*   Un is a Matrix whose 2nd column:11th col contain the unit(s) just */
  /*   included. */
  st.site = &dv_emlrtRSI;
  b_st.site = &fd_emlrtRSI;
  if (muDoubleScalarIsNaN(init1 + 1.0)) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, ym, i, &hd_emlrtRTEI);
    ym->data[0] = rtNaN;
  } else if (Y->size[0] < init1 + 1.0) {
    ym->size[0] = 1;
    ym->size[1] = 0;
  } else if (muDoubleScalarIsInf(init1 + 1.0) && (init1 + 1.0 == Y->size[0])) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, ym, i, &hd_emlrtRTEI);
    ym->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(init1 + 1.0) == init1 + 1.0) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = (int32_T)muDoubleScalarFloor((real_T)Y->size[0] - (init1 + 1.0))
      + 1;
    emxEnsureCapacity_real_T(&b_st, ym, i, &hd_emlrtRTEI);
    loop_ub = (int32_T)muDoubleScalarFloor((real_T)Y->size[0] - (init1 + 1.0));
    for (i = 0; i <= loop_ub; i++) {
      ym->data[i] = (init1 + 1.0) + (real_T)i;
    }
  } else {
    c_st.site = &gd_emlrtRSI;
    eml_float_colon(&c_st, init1 + 1.0, Y->size[0], ym);
  }

  d = (real_T)Y->size[0] - init1;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &ob_emlrtDCI, (emlrtCTX)sp);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &nb_emlrtDCI, (emlrtCTX)sp);
  }

  emxInit_real_T(sp, &MD, 1, &dq_emlrtRTEI, true);
  i = MD->size[0];
  MD->size[0] = ym->size[1];
  emxEnsureCapacity_real_T(sp, MD, i, &an_emlrtRTEI);
  loop_ub = ym->size[1];
  for (i = 0; i < loop_ub; i++) {
    MD->data[i] = ym->data[i];
  }

  emxInit_real_T(sp, &r, 2, &bn_emlrtRTEI, true);
  i = r->size[0] * r->size[1];
  r->size[0] = (int32_T)d;
  r->size[1] = 10;
  emxEnsureCapacity_real_T(sp, r, i, &bn_emlrtRTEI);
  loop_ub = (int32_T)d * 10;
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = rtNaN;
  }

  emxInit_real_T(sp, &r1, 2, &pq_emlrtRTEI, true);
  st.site = &dv_emlrtRSI;
  b_cat(&st, MD, r, r1);
  i = Un->size[0] * Un->size[1];
  Un->size[0] = r1->size[0];
  Un->size[1] = 11;
  emxEnsureCapacity_real_T(sp, Un, i, &cn_emlrtRTEI);
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
  st.site = &cv_emlrtRSI;
  b_st.site = &fd_emlrtRSI;
  if (muDoubleScalarIsNaN(init1)) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, ym, i, &hd_emlrtRTEI);
    ym->data[0] = rtNaN;
  } else if ((real_T)Y->size[0] - 1.0 < init1) {
    ym->size[0] = 1;
    ym->size[1] = 0;
  } else if (muDoubleScalarIsInf(init1) && (init1 == (real_T)Y->size[0] - 1.0))
  {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, ym, i, &hd_emlrtRTEI);
    ym->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(init1) == init1) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = (int32_T)(((real_T)Y->size[0] - 1.0) - init1) + 1;
    emxEnsureCapacity_real_T(&b_st, ym, i, &hd_emlrtRTEI);
    loop_ub = (int32_T)(((real_T)Y->size[0] - 1.0) - init1);
    for (i = 0; i <= loop_ub; i++) {
      ym->data[i] = init1 + (real_T)i;
    }
  } else {
    c_st.site = &gd_emlrtRSI;
    eml_float_colon(&c_st, init1, (real_T)Y->size[0] - 1.0, ym);
  }

  st.site = &cv_emlrtRSI;
  i = MD->size[0];
  MD->size[0] = ym->size[1];
  emxEnsureCapacity_real_T(&st, MD, i, &dn_emlrtRTEI);
  loop_ub = ym->size[1];
  for (i = 0; i < loop_ub; i++) {
    MD->data[i] = ym->data[i];
  }

  emxInit_real_T(&st, &unit, 1, &aq_emlrtRTEI, true);
  d = (real_T)Y->size[0] - init1;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &qb_emlrtDCI, &st);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &pb_emlrtDCI, &st);
  }

  i = unit->size[0];
  unit->size[0] = (int32_T)d;
  emxEnsureCapacity_real_T(&st, unit, i, &en_emlrtRTEI);
  d = (real_T)Y->size[0] - init1;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &qb_emlrtDCI, &st);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &pb_emlrtDCI, &st);
  }

  loop_ub = (int32_T)d;
  for (i = 0; i < loop_ub; i++) {
    unit->data[i] = 0.0;
  }

  b_st.site = &fl_emlrtRSI;
  c_st.site = &gl_emlrtRSI;
  if ((int32_T)((real_T)Y->size[0] - init1) != MD->size[0]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &ob_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  i = mmd->size[0] * mmd->size[1];
  mmd->size[0] = MD->size[0];
  mmd->size[1] = 2;
  emxEnsureCapacity_real_T(sp, mmd, i, &fn_emlrtRTEI);
  loop_ub = MD->size[0];
  for (i = 0; i < loop_ub; i++) {
    mmd->data[i] = MD->data[i];
  }

  loop_ub = unit->size[0];
  for (i = 0; i < loop_ub; i++) {
    mmd->data[i + mmd->size[0]] = 0.0;
  }

  /*  unit is the vector which will contain the units which enter subset at each */
  /*  step. It is initialized as a vector of zeros */
  i = unit->size[0];
  unit->size[0] = bsb->size[0];
  emxEnsureCapacity_real_T(sp, unit, i, &gn_emlrtRTEI);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    unit->data[i] = 0.0;
  }

  lunit = bsb->size[0];

  /*  If the subset Y(bsb,:) is not full rank or a column is constant, then we */
  /*  return as output an empty structure. */
  st.site = &bv_emlrtRSI;
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    k = (int32_T)bsb->data[i];
    if ((k < 1) || (k > Y->size[0])) {
      emlrtDynamicBoundsCheckR2012b(k, 1, Y->size[0], &hn_emlrtBCI, &st);
    }
  }

  loop_ub = Y->size[1];
  i = b_Y->size[0] * b_Y->size[1];
  b_Y->size[0] = bsb->size[0];
  b_Y->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(&st, b_Y, i, &hn_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    irank = bsb->size[0];
    for (k = 0; k < irank; k++) {
      b_Y->data[k + b_Y->size[0] * i] = Y->data[((int32_T)bsb->data[k] + Y->
        size[0] * i) - 1];
    }
  }

  b_st.site = &mc_emlrtRSI;
  irank = local_rank(&b_st, b_Y);
  emxInit_real_T(sp, &Ym, 2, &bq_emlrtRTEI, true);
  emxInit_real_T(sp, &mi, 2, &eo_emlrtRTEI, true);
  emxInit_real_T(sp, &mibsbr, 2, &ro_emlrtRTEI, true);
  emxInit_real_T(sp, &zi, 2, &so_emlrtRTEI, true);
  emxInit_real_T(sp, &R, 2, &eq_emlrtRTEI, true);
  emxInit_boolean_T(sp, &MDltminT, 1, &xo_emlrtRTEI, true);
  emxInit_boolean_T(sp, &MDltminbsb, 1, &bp_emlrtRTEI, true);
  emxInit_int32_T(sp, &r2, 1, &gq_emlrtRTEI, true);
  emxInit_int32_T(sp, &r3, 1, &iq_emlrtRTEI, true);
  emxInit_int32_T(sp, &r4, 1, &jq_emlrtRTEI, true);
  emxInit_int32_T(sp, &r5, 1, &kq_emlrtRTEI, true);
  emxInit_int32_T(sp, &r6, 1, &lq_emlrtRTEI, true);
  emxInit_int32_T(sp, &r7, 1, &mq_emlrtRTEI, true);
  emxInit_int32_T(sp, &r8, 1, &nq_emlrtRTEI, true);
  guard1 = false;
  if (irank < v) {
    guard1 = true;
  } else {
    st.site = &bv_emlrtRSI;
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      k = (int32_T)bsb->data[i];
      if ((k < 1) || (k > Y->size[0])) {
        emlrtDynamicBoundsCheckR2012b(k, 1, Y->size[0], &in_emlrtBCI, &st);
      }
    }

    b_st.site = &kb_emlrtRSI;
    c_st.site = &lb_emlrtRSI;
    f_st.site = &mb_emlrtRSI;
    if (((bsb->size[0] != 1) || (Y->size[1] != 1)) && (bsb->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&f_st, &nb_emlrtRTEI,
        "Coder:toolbox:autoDimIncompatibility",
        "Coder:toolbox:autoDimIncompatibility", 0);
    }

    g_st.site = &nb_emlrtRSI;
    h_st.site = &ob_emlrtRSI;
    i_st.site = &pb_emlrtRSI;
    irank = bsb->size[0];
    i = Y->size[1] - 1;
    k = mibsbr->size[0] * mibsbr->size[1];
    mibsbr->size[0] = 1;
    mibsbr->size[1] = Y->size[1];
    emxEnsureCapacity_real_T(&i_st, mibsbr, k, &hi_emlrtRTEI);
    if (Y->size[1] >= 1) {
      j_st.site = &rb_emlrtRSI;
      if (Y->size[1] > 2147483646) {
        k_st.site = &hb_emlrtRSI;
        check_forloop_overflow_error(&k_st);
      }

      for (nwhile = 0; nwhile <= i; nwhile++) {
        mibsbr->data[nwhile] = Y->data[((int32_T)bsb->data[0] + Y->size[0] *
          nwhile) - 1];
        j_st.site = &qb_emlrtRSI;
        if ((2 <= irank) && (irank > 2147483646)) {
          k_st.site = &hb_emlrtRSI;
          check_forloop_overflow_error(&k_st);
        }

        for (b_i = 2; b_i <= irank; b_i++) {
          a = mibsbr->data[nwhile];
          ksor = Y->data[((int32_T)bsb->data[b_i - 1] + Y->size[0] * nwhile) - 1];
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

    st.site = &bv_emlrtRSI;
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      k = (int32_T)bsb->data[i];
      if ((k < 1) || (k > Y->size[0])) {
        emlrtDynamicBoundsCheckR2012b(k, 1, Y->size[0], &jn_emlrtBCI, &st);
      }
    }

    b_st.site = &sb_emlrtRSI;
    c_st.site = &tb_emlrtRSI;
    f_st.site = &ub_emlrtRSI;
    if (((bsb->size[0] != 1) || (Y->size[1] != 1)) && (bsb->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&f_st, &nb_emlrtRTEI,
        "Coder:toolbox:autoDimIncompatibility",
        "Coder:toolbox:autoDimIncompatibility", 0);
    }

    g_st.site = &nb_emlrtRSI;
    h_st.site = &ob_emlrtRSI;
    i_st.site = &pb_emlrtRSI;
    irank = bsb->size[0];
    i = Y->size[1] - 1;
    k = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = Y->size[1];
    emxEnsureCapacity_real_T(&i_st, ym, k, &hi_emlrtRTEI);
    if (Y->size[1] >= 1) {
      j_st.site = &rb_emlrtRSI;
      if (Y->size[1] > 2147483646) {
        k_st.site = &hb_emlrtRSI;
        check_forloop_overflow_error(&k_st);
      }

      for (nwhile = 0; nwhile <= i; nwhile++) {
        ym->data[nwhile] = Y->data[((int32_T)bsb->data[0] + Y->size[0] * nwhile)
          - 1];
        j_st.site = &qb_emlrtRSI;
        if ((2 <= irank) && (irank > 2147483646)) {
          k_st.site = &hb_emlrtRSI;
          check_forloop_overflow_error(&k_st);
        }

        for (b_i = 2; b_i <= irank; b_i++) {
          a = ym->data[nwhile];
          ksor = Y->data[((int32_T)bsb->data[b_i - 1] + Y->size[0] * nwhile) - 1];
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

    c_Y[0] = (*(int32_T (*)[2])mibsbr->size)[0];
    c_Y[1] = (*(int32_T (*)[2])mibsbr->size)[1];
    b_iv[0] = (*(int32_T (*)[2])ym->size)[0];
    b_iv[1] = (*(int32_T (*)[2])ym->size)[1];
    emlrtSizeEqCheckNDR2012b(&c_Y[0], &b_iv[0], &cb_emlrtECI, (emlrtCTX)sp);
    st.site = &bv_emlrtRSI;
    i = mibsbr->size[0] * mibsbr->size[1];
    mibsbr->size[0] = 1;
    emxEnsureCapacity_real_T(&st, mibsbr, i, &ln_emlrtRTEI);
    loop_ub = mibsbr->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      mibsbr->data[i] -= ym->data[i];
    }

    b_st.site = &sb_emlrtRSI;
    c_st.site = &tb_emlrtRSI;
    f_st.site = &ub_emlrtRSI;
    if (mibsbr->size[1] < 1) {
      emlrtErrorWithMessageIdR2018a(&f_st, &mb_emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero",
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    g_st.site = &kt_emlrtRSI;
    h_st.site = &lt_emlrtRSI;
    irank = mibsbr->size[1];
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
      i_st.site = &nt_emlrtRSI;
      if (!muDoubleScalarIsNaN(mibsbr->data[0])) {
        idx = 1;
      } else {
        idx = 0;
        j_st.site = &ot_emlrtRSI;
        if (mibsbr->size[1] > 2147483646) {
          k_st.site = &hb_emlrtRSI;
          check_forloop_overflow_error(&k_st);
        }

        k = 2;
        exitg1 = false;
        while ((!exitg1) && (k <= irank)) {
          if (!muDoubleScalarIsNaN(mibsbr->data[k - 1])) {
            idx = k;
            exitg1 = true;
          } else {
            k++;
          }
        }
      }

      if (idx == 0) {
        ex = mibsbr->data[0];
      } else {
        i_st.site = &mt_emlrtRSI;
        ex = mibsbr->data[idx - 1];
        nwhile = idx + 1;
        j_st.site = &pt_emlrtRSI;
        if ((idx + 1 <= mibsbr->size[1]) && (mibsbr->size[1] > 2147483646)) {
          k_st.site = &hb_emlrtRSI;
          check_forloop_overflow_error(&k_st);
        }

        for (k = nwhile; k <= irank; k++) {
          d = mibsbr->data[k - 1];
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
      mm = 0;
      exitg1 = false;
      while ((!exitg1) && (mm <= n - ini0)) {
        b_mm = (real_T)ini0 + (real_T)mm;

        /*  Extract units forming subset */
        if (b_mm <= percn) {
          loop_ub = Y->size[1];
          i = Yb->size[0] * Yb->size[1];
          Yb->size[0] = bsb->size[0];
          Yb->size[1] = Y->size[1];
          emxEnsureCapacity_real_T(sp, Yb, i, &mn_emlrtRTEI);
          for (i = 0; i < loop_ub; i++) {
            irank = bsb->size[0];
            for (k = 0; k < irank; k++) {
              if (bsb->data[k] != (int32_T)muDoubleScalarFloor(bsb->data[k])) {
                emlrtIntegerCheckR2012b(bsb->data[k], &rb_emlrtDCI, (emlrtCTX)sp);
              }

              partialTrueCount = (int32_T)bsb->data[k];
              if ((partialTrueCount < 1) || (partialTrueCount > Y->size[0])) {
                emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1, Y->size[0],
                  &kn_emlrtBCI, (emlrtCTX)sp);
              }

              Yb->data[k + Yb->size[0] * i] = Y->data[(partialTrueCount +
                Y->size[0] * i) - 1];
            }
          }
        } else {
          k = bsbT->size[0] - 1;
          trueCount = 0;
          for (b_i = 0; b_i <= k; b_i++) {
            if (bsbT->data[b_i]) {
              trueCount++;
            }
          }

          i = r2->size[0];
          r2->size[0] = trueCount;
          emxEnsureCapacity_int32_T(sp, r2, i, &nn_emlrtRTEI);
          partialTrueCount = 0;
          for (b_i = 0; b_i <= k; b_i++) {
            if (bsbT->data[b_i]) {
              r2->data[partialTrueCount] = b_i + 1;
              partialTrueCount++;
            }
          }

          loop_ub = Y->size[1];
          i = Yb->size[0] * Yb->size[1];
          Yb->size[0] = r2->size[0];
          Yb->size[1] = Y->size[1];
          emxEnsureCapacity_real_T(sp, Yb, i, &on_emlrtRTEI);
          for (i = 0; i < loop_ub; i++) {
            irank = r2->size[0];
            for (k = 0; k < irank; k++) {
              if (r2->data[k] > Y->size[0]) {
                emlrtDynamicBoundsCheckR2012b(r2->data[k], 1, Y->size[0],
                  &ln_emlrtBCI, (emlrtCTX)sp);
              }

              Yb->data[k + Yb->size[0] * i] = Y->data[(r2->data[k] + Y->size[0] *
                i) - 1];
            }
          }
        }

        /*  If required, store units forming subset at each step */
        /*  Find vector of means inside subset */
        /*  Note that ym is a row vector */
        st.site = &yu_emlrtRSI;
        b_st.site = &sm_emlrtRSI;
        c_st.site = &sd_emlrtRSI;
        b_combineVectorElements(&c_st, Yb, ym);
        i = ym->size[0] * ym->size[1];
        ym->size[0] = 1;
        emxEnsureCapacity_real_T(sp, ym, i, &qn_emlrtRTEI);
        loop_ub = ym->size[1] - 1;
        for (i = 0; i <= loop_ub; i++) {
          ym->data[i] /= b_mm;
        }

        /*  Ym = n-by-v matrix containing deviations from the means computed */
        /*  using units forming subset */
        /*  Ym=Y-one*ym; */
        st.site = &xu_emlrtRSI;
        bsxfun(&st, Y, ym, Ym);
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
              i = MDltminT->size[0];
              MDltminT->size[0] = bsbT->size[0];
              emxEnsureCapacity_boolean_T(sp, MDltminT, i, &wn_emlrtRTEI);
              loop_ub = bsbT->size[0];
              for (i = 0; i < loop_ub; i++) {
                MDltminT->data[i] = !bsbT->data[i];
              }

              if (oldbsbT->size[0] != MDltminT->size[0]) {
                emlrtSizeEqCheck1DR2012b(oldbsbT->size[0], MDltminT->size[0],
                  &db_emlrtECI, (emlrtCTX)sp);
              }

              k = oldbsbT->size[0] - 1;
              trueCount = 0;
              for (b_i = 0; b_i <= k; b_i++) {
                if (oldbsbT->data[b_i] && MDltminT->data[b_i]) {
                  trueCount++;
                }
              }

              i = unitout->size[0];
              unitout->size[0] = trueCount;
              emxEnsureCapacity_real_T(sp, unitout, i, &nn_emlrtRTEI);
              partialTrueCount = 0;
              for (b_i = 0; b_i <= k; b_i++) {
                if (oldbsbT->data[b_i] && MDltminT->data[b_i]) {
                  if (b_i + 1 > seq->size[0]) {
                    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                      &un_emlrtBCI, (emlrtCTX)sp);
                  }

                  unitout->data[partialTrueCount] = seq->data[b_i];
                  partialTrueCount++;
                }
              }
            }

            nwhile = unitout->size[0];
            st.site = &wu_emlrtRSI;
            loop_ub = unitout->size[0];
            for (i = 0; i < loop_ub; i++) {
              if (unitout->data[i] != (int32_T)muDoubleScalarFloor(unitout->
                   data[i])) {
                emlrtIntegerCheckR2012b(unitout->data[i], &ub_emlrtDCI, &st);
              }

              k = (int32_T)unitout->data[i];
              if ((k < 1) || (k > Y->size[0])) {
                emlrtDynamicBoundsCheckR2012b(k, 1, Y->size[0], &sn_emlrtBCI,
                  &st);
              }
            }

            b_st.site = &sm_emlrtRSI;
            loop_ub = Y->size[1];
            i = b_Y->size[0] * b_Y->size[1];
            b_Y->size[0] = unitout->size[0];
            b_Y->size[1] = Y->size[1];
            emxEnsureCapacity_real_T(&b_st, b_Y, i, &ao_emlrtRTEI);
            for (i = 0; i < loop_ub; i++) {
              irank = unitout->size[0];
              for (k = 0; k < irank; k++) {
                b_Y->data[k + b_Y->size[0] * i] = Y->data[((int32_T)
                  unitout->data[k] + Y->size[0] * i) - 1];
              }
            }

            c_st.site = &sd_emlrtRSI;
            b_combineVectorElements(&c_st, b_Y, mi);
            i = mi->size[0] * mi->size[1];
            mi->size[0] = 1;
            emxEnsureCapacity_real_T(sp, mi, i, &eo_emlrtRTEI);
            loop_ub = mi->size[1] - 1;
            for (i = 0; i <= loop_ub; i++) {
              mi->data[i] /= (real_T)unitout->size[0];
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
                  &eb_emlrtECI, (emlrtCTX)sp);
              }

              k = oldbsbT->size[0] - 1;
              trueCount = 0;
              for (b_i = 0; b_i <= k; b_i++) {
                if (oldbsbT->data[b_i] && bsbT->data[b_i]) {
                  trueCount++;
                }
              }

              i = r6->size[0];
              r6->size[0] = trueCount;
              emxEnsureCapacity_int32_T(sp, r6, i, &nn_emlrtRTEI);
              partialTrueCount = 0;
              for (b_i = 0; b_i <= k; b_i++) {
                if (oldbsbT->data[b_i] && bsbT->data[b_i]) {
                  r6->data[partialTrueCount] = b_i + 1;
                  partialTrueCount++;
                }
              }

              st.site = &vu_emlrtRSI;
              loop_ub = r6->size[0];
              for (i = 0; i < loop_ub; i++) {
                if (r6->data[i] > Y->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(r6->data[i], 1, Y->size[0],
                    &ao_emlrtBCI, &st);
                }
              }

              b_st.site = &sm_emlrtRSI;
              loop_ub = Y->size[1];
              i = b_Y->size[0] * b_Y->size[1];
              b_Y->size[0] = r6->size[0];
              b_Y->size[1] = Y->size[1];
              emxEnsureCapacity_real_T(&b_st, b_Y, i, &oo_emlrtRTEI);
              for (i = 0; i < loop_ub; i++) {
                irank = r6->size[0];
                for (k = 0; k < irank; k++) {
                  b_Y->data[k + b_Y->size[0] * i] = Y->data[(r6->data[k] +
                    Y->size[0] * i) - 1];
                }
              }

              c_st.site = &sd_emlrtRSI;
              b_combineVectorElements(&c_st, b_Y, mibsbr);
              i = mibsbr->size[0] * mibsbr->size[1];
              mibsbr->size[0] = 1;
              emxEnsureCapacity_real_T(sp, mibsbr, i, &ro_emlrtRTEI);
              ksor = (b_mm - 1.0) - (real_T)unitout->size[0];
              loop_ub = mibsbr->size[1] - 1;
              for (i = 0; i <= loop_ub; i++) {
                mibsbr->data[i] /= ksor;
              }
            } else {
              st.site = &uu_emlrtRSI;
              loop_ub = bsbr->size[0];
              for (i = 0; i < loop_ub; i++) {
                k = bsbr->data[i];
                if ((k < 1) || (k > Y->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(k, 1, Y->size[0], &wn_emlrtBCI,
                    &st);
                }
              }

              b_st.site = &sm_emlrtRSI;
              loop_ub = Y->size[1];
              i = b_Y->size[0] * b_Y->size[1];
              b_Y->size[0] = bsbr->size[0];
              b_Y->size[1] = Y->size[1];
              emxEnsureCapacity_real_T(&b_st, b_Y, i, &jo_emlrtRTEI);
              for (i = 0; i < loop_ub; i++) {
                irank = bsbr->size[0];
                for (k = 0; k < irank; k++) {
                  b_Y->data[k + b_Y->size[0] * i] = Y->data[(bsbr->data[k] +
                    Y->size[0] * i) - 1];
                }
              }

              c_st.site = &sd_emlrtRSI;
              b_combineVectorElements(&c_st, b_Y, mibsbr);
              i = mibsbr->size[0] * mibsbr->size[1];
              mibsbr->size[0] = 1;
              emxEnsureCapacity_real_T(sp, mibsbr, i, &mo_emlrtRTEI);
              ksor = (b_mm - 1.0) - (real_T)unitout->size[0];
              loop_ub = mibsbr->size[1] - 1;
              for (i = 0; i <= loop_ub; i++) {
                mibsbr->data[i] /= ksor;
              }
            }

            c_Y[0] = (*(int32_T (*)[2])mi->size)[0];
            c_Y[1] = (*(int32_T (*)[2])mi->size)[1];
            b_iv[0] = (*(int32_T (*)[2])mibsbr->size)[0];
            b_iv[1] = (*(int32_T (*)[2])mibsbr->size)[1];
            emlrtSizeEqCheckNDR2012b(&c_Y[0], &b_iv[0], &fb_emlrtECI, (emlrtCTX)
              sp);
            a = (real_T)unitout->size[0] * ((b_mm - 1.0) - (real_T)unitout->
              size[0]) / (b_mm - 1.0);
            st.site = &tu_emlrtRSI;
            if (a < 0.0) {
              emlrtErrorWithMessageIdR2018a(&st, &bc_emlrtRTEI,
                "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
            }

            a = muDoubleScalarSqrt(a);
            i = zi->size[0] * zi->size[1];
            zi->size[0] = 1;
            zi->size[1] = mi->size[1];
            emxEnsureCapacity_real_T(sp, zi, i, &so_emlrtRTEI);
            loop_ub = mi->size[1];
            for (i = 0; i < loop_ub; i++) {
              zi->data[i] = a * (mi->data[i] - mibsbr->data[i]);
            }

            st.site = &su_emlrtRSI;
            b_st.site = &fb_emlrtRSI;
            d_dynamic_size_checks(&b_st, S, zi, S->size[1], zi->size[1]);
            b_st.site = &eb_emlrtRSI;
            c_mtimes(&b_st, S, zi, MD);

            /*  S=S+(S*(zi')*zi*S)/(1-zi*S*(zi')); */
            st.site = &ru_emlrtRSI;
            b_st.site = &fb_emlrtRSI;
            e_dynamic_size_checks(&b_st, zi, MD, zi->size[1], MD->size[0]);
            ksor = d_mtimes(zi, MD);
            i = R->size[0] * R->size[1];
            R->size[0] = MD->size[0];
            R->size[1] = MD->size[0];
            emxEnsureCapacity_real_T(sp, R, i, &vo_emlrtRTEI);
            loop_ub = MD->size[0];
            for (i = 0; i < loop_ub; i++) {
              irank = MD->size[0];
              for (k = 0; k < irank; k++) {
                R->data[k + R->size[0] * i] = MD->data[k] * MD->data[i] / (1.0 -
                  ksor);
              }
            }

            c_Y[0] = (*(int32_T (*)[2])S->size)[0];
            c_Y[1] = (*(int32_T (*)[2])S->size)[1];
            b_iv[0] = (*(int32_T (*)[2])R->size)[0];
            b_iv[1] = (*(int32_T (*)[2])R->size)[1];
            emlrtSizeEqCheckNDR2012b(&c_Y[0], &b_iv[0], &gb_emlrtECI, (emlrtCTX)
              sp);
            loop_ub = S->size[0] * S->size[1];
            for (i = 0; i < loop_ub; i++) {
              S->data[i] += R->data[i];
            }

            if (unitout->size[0] > 1) {
              i = unitout->size[0];
              for (b_i = 0; b_i < i; b_i++) {
                if (b_i + 1 > unitout->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, unitout->size[0],
                    &do_emlrtBCI, (emlrtCTX)sp);
                }

                k = (int32_T)unitout->data[b_i];
                if ((k < 1) || (k > Y->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(k, 1, Y->size[0], &sm_emlrtBCI,
                    (emlrtCTX)sp);
                }

                loop_ub = Y->size[1];
                k = zi->size[0] * zi->size[1];
                zi->size[0] = 1;
                zi->size[1] = Y->size[1];
                emxEnsureCapacity_real_T(sp, zi, k, &cp_emlrtRTEI);
                for (k = 0; k < loop_ub; k++) {
                  zi->data[k] = Y->data[((int32_T)unitout->data[b_i] + Y->size[0]
                    * k) - 1];
                }

                c_Y[0] = (*(int32_T (*)[2])zi->size)[0];
                c_Y[1] = (*(int32_T (*)[2])zi->size)[1];
                b_iv[0] = (*(int32_T (*)[2])mi->size)[0];
                b_iv[1] = (*(int32_T (*)[2])mi->size)[1];
                emlrtSizeEqCheckNDR2012b(&c_Y[0], &b_iv[0], &hb_emlrtECI,
                  (emlrtCTX)sp);
                loop_ub = Y->size[1];
                k = zi->size[0] * zi->size[1];
                zi->size[0] = 1;
                zi->size[1] = Y->size[1];
                emxEnsureCapacity_real_T(sp, zi, k, &dp_emlrtRTEI);
                for (k = 0; k < loop_ub; k++) {
                  zi->data[k] = Y->data[((int32_T)unitout->data[b_i] + Y->size[0]
                    * k) - 1] - mi->data[k];
                }

                st.site = &qu_emlrtRSI;
                b_st.site = &fb_emlrtRSI;
                d_dynamic_size_checks(&b_st, S, zi, S->size[1], zi->size[1]);
                b_st.site = &eb_emlrtRSI;
                c_mtimes(&b_st, S, zi, MD);

                /*  S=S+(S*(zi')*zi*S)/(1-zi*S*(zi')); */
                st.site = &pu_emlrtRSI;
                b_st.site = &fb_emlrtRSI;
                e_dynamic_size_checks(&b_st, zi, MD, zi->size[1], MD->size[0]);
                ksor = d_mtimes(zi, MD);
                k = R->size[0] * R->size[1];
                R->size[0] = MD->size[0];
                R->size[1] = MD->size[0];
                emxEnsureCapacity_real_T(sp, R, k, &fp_emlrtRTEI);
                loop_ub = MD->size[0];
                for (k = 0; k < loop_ub; k++) {
                  irank = MD->size[0];
                  for (partialTrueCount = 0; partialTrueCount < irank;
                       partialTrueCount++) {
                    R->data[partialTrueCount + R->size[0] * k] = MD->
                      data[partialTrueCount] * MD->data[k] / (1.0 - ksor);
                  }
                }

                c_Y[0] = (*(int32_T (*)[2])S->size)[0];
                c_Y[1] = (*(int32_T (*)[2])S->size)[1];
                b_iv[0] = (*(int32_T (*)[2])R->size)[0];
                b_iv[1] = (*(int32_T (*)[2])R->size)[1];
                emlrtSizeEqCheckNDR2012b(&c_Y[0], &b_iv[0], &ib_emlrtECI,
                  (emlrtCTX)sp);
                loop_ub = S->size[0] * S->size[1];
                for (k = 0; k < loop_ub; k++) {
                  S->data[k] += R->data[k];
                }

                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b((emlrtCTX)sp);
                }
              }
            }
          } else {
            nwhile = 0;
            i = mibsbr->size[0] * mibsbr->size[1];
            mibsbr->size[0] = 1;
            mibsbr->size[1] = meoldbsb->size[1];
            emxEnsureCapacity_real_T(sp, mibsbr, i, &sn_emlrtRTEI);
            loop_ub = meoldbsb->size[1];
            for (i = 0; i < loop_ub; i++) {
              mibsbr->data[i] = meoldbsb->data[i];
            }
          }

          /*  mi = mean of units entering subset */
          st.site = &ou_emlrtRSI;
          loop_ub = unit->size[0];
          for (i = 0; i < loop_ub; i++) {
            k = (int32_T)unit->data[i];
            if ((k < 1) || (k > Y->size[0])) {
              emlrtDynamicBoundsCheckR2012b(k, 1, Y->size[0], &rn_emlrtBCI, &st);
            }
          }

          b_st.site = &sm_emlrtRSI;
          loop_ub = Y->size[1];
          i = b_Y->size[0] * b_Y->size[1];
          b_Y->size[0] = unit->size[0];
          b_Y->size[1] = Y->size[1];
          emxEnsureCapacity_real_T(&b_st, b_Y, i, &xn_emlrtRTEI);
          for (i = 0; i < loop_ub; i++) {
            irank = unit->size[0];
            for (k = 0; k < irank; k++) {
              b_Y->data[k + b_Y->size[0] * i] = Y->data[((int32_T)unit->data[k]
                + Y->size[0] * i) - 1];
            }
          }

          c_st.site = &sd_emlrtRSI;
          b_combineVectorElements(&c_st, b_Y, mi);
          i = mi->size[0] * mi->size[1];
          mi->size[0] = 1;
          emxEnsureCapacity_real_T(sp, mi, i, &bo_emlrtRTEI);
          loop_ub = mi->size[1] - 1;
          for (i = 0; i <= loop_ub; i++) {
            mi->data[i] /= (real_T)lunit;
          }

          /*  zi=sqrt(kin*(mm-1-k)/(mm-1-k+kin))*(mi-mean(Y(bsbr,:),1)); */
          c_Y[0] = (*(int32_T (*)[2])mi->size)[0];
          c_Y[1] = (*(int32_T (*)[2])mi->size)[1];
          b_iv[0] = (*(int32_T (*)[2])mibsbr->size)[0];
          b_iv[1] = (*(int32_T (*)[2])mibsbr->size)[1];
          emlrtSizeEqCheckNDR2012b(&c_Y[0], &b_iv[0], &jb_emlrtECI, (emlrtCTX)sp);
          ksor = (b_mm - 1.0) - (real_T)nwhile;
          a = (real_T)lunit * ksor / (ksor + (real_T)lunit);
          st.site = &nu_emlrtRSI;
          if (a < 0.0) {
            emlrtErrorWithMessageIdR2018a(&st, &bc_emlrtRTEI,
              "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError",
              3, 4, 4, "sqrt");
          }

          a = muDoubleScalarSqrt(a);
          i = zi->size[0] * zi->size[1];
          zi->size[0] = 1;
          zi->size[1] = mi->size[1];
          emxEnsureCapacity_real_T(sp, zi, i, &fo_emlrtRTEI);
          loop_ub = mi->size[1];
          for (i = 0; i < loop_ub; i++) {
            zi->data[i] = a * (mi->data[i] - mibsbr->data[i]);
          }

          st.site = &mu_emlrtRSI;
          b_st.site = &fb_emlrtRSI;
          d_dynamic_size_checks(&b_st, S, zi, S->size[1], zi->size[1]);
          b_st.site = &eb_emlrtRSI;
          c_mtimes(&b_st, S, zi, MD);

          /*  S=S+(S*(zi')*zi*S)/(1-zi*S*(zi')); */
          st.site = &lu_emlrtRSI;
          b_st.site = &fb_emlrtRSI;
          e_dynamic_size_checks(&b_st, zi, MD, zi->size[1], MD->size[0]);
          ksor = d_mtimes(zi, MD);
          i = R->size[0] * R->size[1];
          R->size[0] = MD->size[0];
          R->size[1] = MD->size[0];
          emxEnsureCapacity_real_T(sp, R, i, &lo_emlrtRTEI);
          loop_ub = MD->size[0];
          for (i = 0; i < loop_ub; i++) {
            irank = MD->size[0];
            for (k = 0; k < irank; k++) {
              R->data[k + R->size[0] * i] = MD->data[k] * MD->data[i] / (ksor +
                1.0);
            }
          }

          c_Y[0] = (*(int32_T (*)[2])S->size)[0];
          c_Y[1] = (*(int32_T (*)[2])S->size)[1];
          b_iv[0] = (*(int32_T (*)[2])R->size)[0];
          b_iv[1] = (*(int32_T (*)[2])R->size)[1];
          emlrtSizeEqCheckNDR2012b(&c_Y[0], &b_iv[0], &kb_emlrtECI, (emlrtCTX)sp);
          loop_ub = S->size[0] * S->size[1];
          for (i = 0; i < loop_ub; i++) {
            S->data[i] -= R->data[i];
          }

          if (lunit > 1) {
            /* mi=mean(Y(unit,:),1); */
            for (b_i = 0; b_i < lunit; b_i++) {
              if (b_i + 1 > unit->size[0]) {
                emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, unit->size[0],
                  &bo_emlrtBCI, (emlrtCTX)sp);
              }

              i = (int32_T)unit->data[b_i];
              if ((i < 1) || (i > Y->size[0])) {
                emlrtDynamicBoundsCheckR2012b(i, 1, Y->size[0], &tm_emlrtBCI,
                  (emlrtCTX)sp);
              }

              loop_ub = Y->size[1];
              i = zi->size[0] * zi->size[1];
              zi->size[0] = 1;
              zi->size[1] = Y->size[1];
              emxEnsureCapacity_real_T(sp, zi, i, &to_emlrtRTEI);
              for (i = 0; i < loop_ub; i++) {
                zi->data[i] = Y->data[((int32_T)unit->data[b_i] + Y->size[0] * i)
                  - 1];
              }

              c_Y[0] = (*(int32_T (*)[2])zi->size)[0];
              c_Y[1] = (*(int32_T (*)[2])zi->size)[1];
              b_iv[0] = (*(int32_T (*)[2])mi->size)[0];
              b_iv[1] = (*(int32_T (*)[2])mi->size)[1];
              emlrtSizeEqCheckNDR2012b(&c_Y[0], &b_iv[0], &lb_emlrtECI,
                (emlrtCTX)sp);
              loop_ub = Y->size[1];
              i = zi->size[0] * zi->size[1];
              zi->size[0] = 1;
              zi->size[1] = Y->size[1];
              emxEnsureCapacity_real_T(sp, zi, i, &wo_emlrtRTEI);
              for (i = 0; i < loop_ub; i++) {
                zi->data[i] = Y->data[((int32_T)unit->data[b_i] + Y->size[0] * i)
                  - 1] - mi->data[i];
              }

              st.site = &ku_emlrtRSI;
              b_st.site = &fb_emlrtRSI;
              d_dynamic_size_checks(&b_st, S, zi, S->size[1], zi->size[1]);
              b_st.site = &eb_emlrtRSI;
              c_mtimes(&b_st, S, zi, MD);

              /*  S=S-(S*(zi')*zi*S)/(1+zi*S*(zi')); */
              st.site = &ju_emlrtRSI;
              b_st.site = &fb_emlrtRSI;
              e_dynamic_size_checks(&b_st, zi, MD, zi->size[1], MD->size[0]);
              ksor = d_mtimes(zi, MD);
              i = R->size[0] * R->size[1];
              R->size[0] = MD->size[0];
              R->size[1] = MD->size[0];
              emxEnsureCapacity_real_T(sp, R, i, &yo_emlrtRTEI);
              loop_ub = MD->size[0];
              for (i = 0; i < loop_ub; i++) {
                irank = MD->size[0];
                for (k = 0; k < irank; k++) {
                  R->data[k + R->size[0] * i] = MD->data[k] * MD->data[i] /
                    (ksor + 1.0);
                }
              }

              c_Y[0] = (*(int32_T (*)[2])S->size)[0];
              c_Y[1] = (*(int32_T (*)[2])S->size)[1];
              b_iv[0] = (*(int32_T (*)[2])R->size)[0];
              b_iv[1] = (*(int32_T (*)[2])R->size)[1];
              emlrtSizeEqCheckNDR2012b(&c_Y[0], &b_iv[0], &mb_emlrtECI,
                (emlrtCTX)sp);
              loop_ub = S->size[0] * S->size[1];
              for (i = 0; i < loop_ub; i++) {
                S->data[i] -= R->data[i];
              }

              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b((emlrtCTX)sp);
              }
            }
          }

          /*  Compute Mahalanobis distance using updating formulae */
          /*  Note that up for n>30000 it seems faster to use bsxfun rather */
          /*  than .* */
          if (n < 30000) {
            st.site = &iu_emlrtRSI;
            b_st.site = &fb_emlrtRSI;
            b_dynamic_size_checks(&b_st, Ym, S, Ym->size[1], S->size[0]);
            b_st.site = &eb_emlrtRSI;
            e_mtimes(&b_st, Ym, S, R);
            c_Y[0] = (*(int32_T (*)[2])R->size)[0];
            c_Y[1] = (*(int32_T (*)[2])R->size)[1];
            b_iv[0] = (*(int32_T (*)[2])Ym->size)[0];
            b_iv[1] = (*(int32_T (*)[2])Ym->size)[1];
            emlrtSizeEqCheckNDR2012b(&c_Y[0], &b_iv[0], &nb_emlrtECI, (emlrtCTX)
              sp);
            i = b_Y->size[0] * b_Y->size[1];
            b_Y->size[0] = R->size[0];
            b_Y->size[1] = R->size[1];
            emxEnsureCapacity_real_T(sp, b_Y, i, &uo_emlrtRTEI);
            loop_ub = R->size[0] * R->size[1];
            for (i = 0; i < loop_ub; i++) {
              b_Y->data[i] = R->data[i] * Ym->data[i];
            }

            st.site = &iu_emlrtRSI;
            b_sum(&st, b_Y, MD);
            loop_ub = MD->size[0];
            for (i = 0; i < loop_ub; i++) {
              MD->data[i] *= b_mm - 1.0;
            }
          } else {
            st.site = &hu_emlrtRSI;
            b_st.site = &fb_emlrtRSI;
            b_dynamic_size_checks(&b_st, Ym, S, Ym->size[1], S->size[0]);
            b_st.site = &eb_emlrtRSI;
            e_mtimes(&b_st, Ym, S, b_Y);
            st.site = &hu_emlrtRSI;
            b_bsxfun(&st, b_Y, Ym, R);
            st.site = &hu_emlrtRSI;
            b_sum(&st, R, MD);
            loop_ub = MD->size[0];
            for (i = 0; i < loop_ub; i++) {
              MD->data[i] *= b_mm - 1.0;
            }
          }

          b_guard1 = true;
        } else {
          /*  In the initial step of the search the inverse is computed directly */
          if (b_mm > percn) {
            k = bsbT->size[0] - 1;
            trueCount = 0;
            for (b_i = 0; b_i <= k; b_i++) {
              if (bsbT->data[b_i]) {
                trueCount++;
              }
            }

            i = r3->size[0];
            r3->size[0] = trueCount;
            emxEnsureCapacity_int32_T(sp, r3, i, &nn_emlrtRTEI);
            partialTrueCount = 0;
            for (b_i = 0; b_i <= k; b_i++) {
              if (bsbT->data[b_i]) {
                r3->data[partialTrueCount] = b_i + 1;
                partialTrueCount++;
              }
            }

            loop_ub = Ym->size[1];
            i = R->size[0] * R->size[1];
            R->size[0] = r3->size[0];
            R->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(sp, R, i, &un_emlrtRTEI);
            for (i = 0; i < loop_ub; i++) {
              irank = r3->size[0];
              for (k = 0; k < irank; k++) {
                if (r3->data[k] > Ym->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(r3->data[k], 1, Ym->size[0],
                    &on_emlrtBCI, (emlrtCTX)sp);
                }

                R->data[k + R->size[0] * i] = Ym->data[(r3->data[k] + Ym->size[0]
                  * i) - 1];
              }
            }

            k = bsbT->size[0] - 1;
            trueCount = 0;
            for (b_i = 0; b_i <= k; b_i++) {
              if (bsbT->data[b_i]) {
                trueCount++;
              }
            }

            i = r4->size[0];
            r4->size[0] = trueCount;
            emxEnsureCapacity_int32_T(sp, r4, i, &nn_emlrtRTEI);
            partialTrueCount = 0;
            for (b_i = 0; b_i <= k; b_i++) {
              if (bsbT->data[b_i]) {
                r4->data[partialTrueCount] = b_i + 1;
                partialTrueCount++;
              }
            }

            st.site = &gu_emlrtRSI;
            loop_ub = Ym->size[1];
            i = Yb->size[0] * Yb->size[1];
            Yb->size[0] = r4->size[0];
            Yb->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(&st, Yb, i, &co_emlrtRTEI);
            for (i = 0; i < loop_ub; i++) {
              irank = r4->size[0];
              for (k = 0; k < irank; k++) {
                if (r4->data[k] > Ym->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(r4->data[k], 1, Ym->size[0],
                    &tn_emlrtBCI, &st);
                }

                Yb->data[k + Yb->size[0] * i] = Ym->data[(r4->data[k] + Ym->
                  size[0] * i) - 1];
              }
            }

            b_st.site = &fb_emlrtRSI;
            b_dynamic_size_checks(&b_st, R, Yb, r3->size[0], r4->size[0]);
            b_st.site = &eb_emlrtRSI;
            f_mtimes(&b_st, R, Yb, b_Y);
            st.site = &gu_emlrtRSI;
            inv(&st, b_Y, S);
            k = bsbT->size[0] - 1;
            trueCount = 0;
            for (b_i = 0; b_i <= k; b_i++) {
              if (bsbT->data[b_i]) {
                trueCount++;
              }
            }

            i = r5->size[0];
            r5->size[0] = trueCount;
            emxEnsureCapacity_int32_T(sp, r5, i, &nn_emlrtRTEI);
            partialTrueCount = 0;
            for (b_i = 0; b_i <= k; b_i++) {
              if (bsbT->data[b_i]) {
                r5->data[partialTrueCount] = b_i + 1;
                partialTrueCount++;
              }
            }

            loop_ub = Ym->size[1];
            i = b_Y->size[0] * b_Y->size[1];
            b_Y->size[0] = r5->size[0];
            b_Y->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(sp, b_Y, i, &ho_emlrtRTEI);
            for (i = 0; i < loop_ub; i++) {
              irank = r5->size[0];
              for (k = 0; k < irank; k++) {
                if (r5->data[k] > Ym->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(r5->data[k], 1, Ym->size[0],
                    &vn_emlrtBCI, (emlrtCTX)sp);
                }

                b_Y->data[k + b_Y->size[0] * i] = Ym->data[(r5->data[k] +
                  Ym->size[0] * i) - 1];
              }
            }

            st.site = &fu_emlrtRSI;
            qr(&st, b_Y, Yb, R);
          } else {
            loop_ub = Ym->size[1];
            i = R->size[0] * R->size[1];
            R->size[0] = bsb->size[0];
            R->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(sp, R, i, &rn_emlrtRTEI);
            for (i = 0; i < loop_ub; i++) {
              irank = bsb->size[0];
              for (k = 0; k < irank; k++) {
                if (bsb->data[k] != (int32_T)muDoubleScalarFloor(bsb->data[k]))
                {
                  emlrtIntegerCheckR2012b(bsb->data[k], &sb_emlrtDCI, (emlrtCTX)
                    sp);
                }

                partialTrueCount = (int32_T)bsb->data[k];
                if ((partialTrueCount < 1) || (partialTrueCount > Ym->size[0]))
                {
                  emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1, Ym->size[0],
                    &mn_emlrtBCI, (emlrtCTX)sp);
                }

                R->data[k + R->size[0] * i] = Ym->data[(partialTrueCount +
                  Ym->size[0] * i) - 1];
              }
            }

            st.site = &eu_emlrtRSI;
            loop_ub = Ym->size[1];
            i = Yb->size[0] * Yb->size[1];
            Yb->size[0] = bsb->size[0];
            Yb->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(&st, Yb, i, &tn_emlrtRTEI);
            for (i = 0; i < loop_ub; i++) {
              irank = bsb->size[0];
              for (k = 0; k < irank; k++) {
                partialTrueCount = (int32_T)bsb->data[k];
                if ((partialTrueCount < 1) || (partialTrueCount > Ym->size[0]))
                {
                  emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[k], 1,
                    Ym->size[0], &nn_emlrtBCI, &st);
                }

                Yb->data[k + Yb->size[0] * i] = Ym->data[(partialTrueCount +
                  Ym->size[0] * i) - 1];
              }
            }

            b_st.site = &fb_emlrtRSI;
            b_dynamic_size_checks(&b_st, R, Yb, bsb->size[0], bsb->size[0]);
            b_st.site = &eb_emlrtRSI;
            f_mtimes(&b_st, R, Yb, b_Y);
            st.site = &eu_emlrtRSI;
            inv(&st, b_Y, S);
            loop_ub = Ym->size[1];
            i = b_Y->size[0] * b_Y->size[1];
            b_Y->size[0] = bsb->size[0];
            b_Y->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(sp, b_Y, i, &yn_emlrtRTEI);
            for (i = 0; i < loop_ub; i++) {
              irank = bsb->size[0];
              for (k = 0; k < irank; k++) {
                partialTrueCount = (int32_T)bsb->data[k];
                if ((partialTrueCount < 1) || (partialTrueCount > Ym->size[0]))
                {
                  emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[k], 1,
                    Ym->size[0], &qn_emlrtBCI, (emlrtCTX)sp);
                }

                b_Y->data[k + b_Y->size[0] * i] = Ym->data[(partialTrueCount +
                  Ym->size[0] * i) - 1];
              }
            }

            st.site = &du_emlrtRSI;
            qr(&st, b_Y, Yb, R);
          }

          st.site = &cu_emlrtRSI;
          i = MDltminT->size[0];
          MDltminT->size[0] = S->size[0] * S->size[1];
          emxEnsureCapacity_boolean_T(&st, MDltminT, i, &do_emlrtRTEI);
          loop_ub = S->size[0] * S->size[1];
          for (i = 0; i < loop_ub; i++) {
            MDltminT->data[i] = muDoubleScalarIsInf(S->data[i]);
          }

          b_st.site = &rm_emlrtRSI;
          c_st.site = &sd_emlrtRSI;
          irank = combineVectorElements(&c_st, MDltminT);
          if (irank > 0) {
            st.site = &vnb_emlrtRSI;
            b_disp(&st, e_emlrt_marshallOut(&st, cv9), r_emlrt_marshallOut(&st,
                    cv16), &ab_emlrtMCI);
            st.site = &lnb_emlrtRSI;
            disp(&st, b_emlrt_marshallOut(&st, cv15), &bb_emlrtMCI);
            i = mmd->size[0] * mmd->size[1];
            mmd->size[0] = 1;
            mmd->size[1] = 1;
            emxEnsureCapacity_real_T(sp, mmd, i, &go_emlrtRTEI);
            mmd->data[0] = rtNaN;
            i = Un->size[0] * Un->size[1];
            Un->size[0] = 1;
            Un->size[1] = 1;
            emxEnsureCapacity_real_T(sp, Un, i, &io_emlrtRTEI);
            Un->data[0] = rtNaN;
            exitg1 = true;
          } else {
            st.site = &bu_emlrtRSI;
            if (R->size[1] != Ym->size[1]) {
              emlrtErrorWithMessageIdR2018a(&st, &ec_emlrtRTEI,
                "MATLAB:dimagree", "MATLAB:dimagree", 0);
            }

            b_st.site = &fy_emlrtRSI;
            mrdiv(&b_st, Ym, R);

            /*  Compute squared Mahalanobis distances */
            st.site = &au_emlrtRSI;
            b_power(&st, Ym, R);
            st.site = &au_emlrtRSI;
            b_sum(&st, R, MD);
            loop_ub = MD->size[0];
            for (i = 0; i < loop_ub; i++) {
              MD->data[i] *= b_mm - 1.0;
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
            i = unit->size[0];
            unit->size[0] = MD->size[0];
            emxEnsureCapacity_real_T(sp, unit, i, &no_emlrtRTEI);
            loop_ub = MD->size[0];
            for (i = 0; i < loop_ub; i++) {
              unit->data[i] = MD->data[i];
            }

            if (b_mm > percn) {
              k = bsbT->size[0];
              for (b_i = 0; b_i < k; b_i++) {
                if (bsbT->data[b_i]) {
                  if (b_i + 1 > unit->size[0]) {
                    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, unit->size[0],
                      &yn_emlrtBCI, (emlrtCTX)sp);
                  }

                  unit->data[b_i] = rtInf;
                }
              }
            } else {
              i = ii->size[0];
              ii->size[0] = bsb->size[0];
              emxEnsureCapacity_int32_T(sp, ii, i, &po_emlrtRTEI);
              loop_ub = bsb->size[0];
              for (i = 0; i < loop_ub; i++) {
                if (bsb->data[i] != (int32_T)muDoubleScalarFloor(bsb->data[i]))
                {
                  emlrtIntegerCheckR2012b(bsb->data[i], &vb_emlrtDCI, (emlrtCTX)
                    sp);
                }

                k = (int32_T)bsb->data[i];
                if ((k < 1) || (k > MD->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i], 1,
                    MD->size[0], &xn_emlrtBCI, (emlrtCTX)sp);
                }

                ii->data[i] = k;
              }

              loop_ub = ii->size[0];
              for (i = 0; i < loop_ub; i++) {
                unit->data[ii->data[i] - 1] = rtInf;
              }
            }

            /*  oldbsbF=bsbF; */
            i = oldbsbT->size[0];
            oldbsbT->size[0] = bsbT->size[0];
            emxEnsureCapacity_boolean_T(sp, oldbsbT, i, &qo_emlrtRTEI);
            loop_ub = bsbT->size[0];
            for (i = 0; i < loop_ub; i++) {
              oldbsbT->data[i] = bsbT->data[i];
            }

            /*  Take minimum distance of the units not belonging to subset */
            st.site = &yt_emlrtRSI;
            b_st.site = &qab_emlrtRSI;
            c_st.site = &rab_emlrtRSI;
            f_st.site = &sab_emlrtRSI;
            if (unit->size[0] < 1) {
              emlrtErrorWithMessageIdR2018a(&f_st, &mb_emlrtRTEI,
                "Coder:toolbox:eml_min_or_max_varDimZero",
                "Coder:toolbox:eml_min_or_max_varDimZero", 0);
            }

            g_st.site = &tab_emlrtRSI;
            irank = unit->size[0];
            if (unit->size[0] <= 2) {
              if (unit->size[0] == 1) {
                ex = unit->data[0];
                idx = 1;
              } else if ((unit->data[0] > unit->data[1]) || (muDoubleScalarIsNaN
                          (unit->data[0]) && (!muDoubleScalarIsNaN(unit->data[1]))))
              {
                ex = unit->data[1];
                idx = 2;
              } else {
                ex = unit->data[0];
                idx = 1;
              }
            } else {
              h_st.site = &nt_emlrtRSI;
              if (!muDoubleScalarIsNaN(unit->data[0])) {
                idx = 1;
              } else {
                idx = 0;
                i_st.site = &ot_emlrtRSI;
                if (unit->size[0] > 2147483646) {
                  j_st.site = &hb_emlrtRSI;
                  check_forloop_overflow_error(&j_st);
                }

                k = 2;
                exitg2 = false;
                while ((!exitg2) && (k <= irank)) {
                  if (!muDoubleScalarIsNaN(unit->data[k - 1])) {
                    idx = k;
                    exitg2 = true;
                  } else {
                    k++;
                  }
                }
              }

              if (idx == 0) {
                ex = unit->data[0];
                idx = 1;
              } else {
                h_st.site = &mt_emlrtRSI;
                ex = unit->data[idx - 1];
                nwhile = idx + 1;
                i_st.site = &pt_emlrtRSI;
                if ((idx + 1 <= unit->size[0]) && (unit->size[0] > 2147483646))
                {
                  j_st.site = &hb_emlrtRSI;
                  check_forloop_overflow_error(&j_st);
                }

                for (k = nwhile; k <= irank; k++) {
                  d = unit->data[k - 1];
                  if (ex > d) {
                    ex = d;
                    idx = k;
                  }
                }
              }
            }

            /*  MDltminT = n x 1 Boolean vector which is true if corresponding MD is */
            /*  smaller or equal minMD */
            i = MDltminT->size[0];
            MDltminT->size[0] = MD->size[0];
            emxEnsureCapacity_boolean_T(sp, MDltminT, i, &xo_emlrtRTEI);
            loop_ub = MD->size[0];
            for (i = 0; i < loop_ub; i++) {
              MDltminT->data[i] = (MD->data[i] <= ex);
            }

            /*  MDltminbsb = n x 1 Boolean vector (if m>percn) or */
            /*  int32 vector containing the units which certainly remain inside subset */
            /*  i.e. those which have a true in MDltminT and belong to previous subset */
            if (b_mm > percn) {
              if (MDltminT->size[0] != bsbT->size[0]) {
                emlrtSizeEqCheck1DR2012b(MDltminT->size[0], bsbT->size[0],
                  &ob_emlrtECI, (emlrtCTX)sp);
              }

              i = MDltminbsb->size[0];
              MDltminbsb->size[0] = MDltminT->size[0];
              emxEnsureCapacity_boolean_T(sp, MDltminbsb, i, &bp_emlrtRTEI);
              loop_ub = MDltminT->size[0];
              for (i = 0; i < loop_ub; i++) {
                MDltminbsb->data[i] = (MDltminT->data[i] && bsbT->data[i]);
              }
            } else {
              i = MDltminbsb->size[0];
              MDltminbsb->size[0] = bsb->size[0];
              emxEnsureCapacity_boolean_T(sp, MDltminbsb, i, &ap_emlrtRTEI);
              loop_ub = bsb->size[0];
              for (i = 0; i < loop_ub; i++) {
                if (bsb->data[i] != (int32_T)muDoubleScalarFloor(bsb->data[i]))
                {
                  emlrtIntegerCheckR2012b(bsb->data[i], &wb_emlrtDCI, (emlrtCTX)
                    sp);
                }

                k = (int32_T)bsb->data[i];
                if ((k < 1) || (k > MDltminT->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(k, 1, MDltminT->size[0],
                    &co_emlrtBCI, (emlrtCTX)sp);
                }

                MDltminbsb->data[i] = MDltminT->data[k - 1];
              }
            }

            /*  Find number of units of old subset which have a MD <= minMD */
            st.site = &xt_emlrtRSI;
            b_st.site = &rm_emlrtRSI;
            c_st.site = &sd_emlrtRSI;
            irank = combineVectorElements(&c_st, MDltminbsb);

            /*  rankgap is the difference between m+1 (size of new size) and */
            /*  the number of units of old subset which have a distance <= */
            /*  minMD. For example if rankgap is =3, three more units must be */
            /*  added. */
            rankgap = (b_mm + 1.0) - (real_T)irank;
            if (rankgap == 1.0) {
              /*  Just one new unit entered subset */
              i = unit->size[0];
              unit->size[0] = 1;
              emxEnsureCapacity_real_T(sp, unit, i, &ep_emlrtRTEI);
              unit->data[0] = idx;

              /*  Compute new bsbT and new bsb */
              if (b_mm <= percn) {
                /*  new bsb is equal to oldbsb plus unit which just entered */
                i = bsb->size[0];
                k = bsb->size[0];
                bsb->size[0]++;
                emxEnsureCapacity_real_T(sp, bsb, k, &nn_emlrtRTEI);
                bsb->data[i] = idx;
              }

              /*  bsbT is equal to old bsbT after adding a single true in */
              /*  correspondence of the unit which entered subset */
              if ((idx < 1) || (idx > bsbT->size[0])) {
                emlrtDynamicBoundsCheckR2012b(idx, 1, bsbT->size[0],
                  &eo_emlrtBCI, (emlrtCTX)sp);
              }

              bsbT->data[idx - 1] = true;
            } else if ((rankgap > 1.0) && (rankgap <= 10.0)) {
              /*  MDmod is the vector of Mahalanobis distance which will have */
              /*  a Inf in correspondence of the units of old subset which */
              /*  had a MD smaller than minMD */
              i = unit->size[0];
              unit->size[0] = MD->size[0];
              emxEnsureCapacity_real_T(sp, unit, i, &gp_emlrtRTEI);
              loop_ub = MD->size[0];
              for (i = 0; i < loop_ub; i++) {
                unit->data[i] = MD->data[i];
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
                loop_ub = bsb->size[0];
                for (i = 0; i < loop_ub; i++) {
                  if (bsb->data[i] != (int32_T)muDoubleScalarFloor(bsb->data[i]))
                  {
                    emlrtIntegerCheckR2012b(bsb->data[i], &yb_emlrtDCI,
                      (emlrtCTX)sp);
                  }

                  k = (int32_T)bsb->data[i];
                  if ((k < 1) || (k > MDltminT->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(k, 1, MDltminT->size[0],
                      &go_emlrtBCI, (emlrtCTX)sp);
                  }
                }

                k = bsb->size[0] - 1;
                trueCount = 0;
                for (b_i = 0; b_i <= k; b_i++) {
                  if (MDltminT->data[(int32_T)bsb->data[b_i] - 1]) {
                    trueCount++;
                  }
                }

                i = bsbrini->size[0];
                bsbrini->size[0] = trueCount;
                emxEnsureCapacity_uint32_T(sp, bsbrini, i, &nn_emlrtRTEI);
                partialTrueCount = 0;
                for (b_i = 0; b_i <= k; b_i++) {
                  if (MDltminT->data[(int32_T)bsb->data[b_i] - 1]) {
                    if (b_i + 1 > bsb->size[0]) {
                      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, bsb->size[0],
                        &io_emlrtBCI, (emlrtCTX)sp);
                    }

                    bsbrini->data[partialTrueCount] = (uint32_T)bsb->data[b_i];
                    partialTrueCount++;
                  }
                }

                /*  unitout = list of the units which potentially left */
                /*  subset. We say potentially because there are still k */
                /*  units to be included */
                /*  unitout=bsb(~bsbini); */
                k = bsb->size[0] - 1;
                trueCount = 0;
                for (b_i = 0; b_i <= k; b_i++) {
                  if (!MDltminT->data[(int32_T)bsb->data[b_i] - 1]) {
                    trueCount++;
                  }
                }

                i = unitout->size[0];
                unitout->size[0] = trueCount;
                emxEnsureCapacity_real_T(sp, unitout, i, &nn_emlrtRTEI);
                partialTrueCount = 0;
                for (b_i = 0; b_i <= k; b_i++) {
                  if (!MDltminT->data[(int32_T)bsb->data[b_i] - 1]) {
                    if (b_i + 1 > bsb->size[0]) {
                      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, bsb->size[0],
                        &lo_emlrtBCI, (emlrtCTX)sp);
                    }

                    unitout->data[partialTrueCount] = bsb->data[b_i];
                    partialTrueCount++;
                  }
                }

                i = ii->size[0];
                ii->size[0] = bsbrini->size[0];
                emxEnsureCapacity_int32_T(sp, ii, i, &np_emlrtRTEI);
                loop_ub = bsbrini->size[0];
                for (i = 0; i < loop_ub; i++) {
                  if (((int32_T)bsbrini->data[i] < 1) || ((int32_T)bsbrini->
                       data[i] > MD->size[0])) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)bsbrini->data[i], 1,
                      MD->size[0], &ko_emlrtBCI, (emlrtCTX)sp);
                  }

                  ii->data[i] = (int32_T)bsbrini->data[i];
                }

                loop_ub = ii->size[0];
                for (i = 0; i < loop_ub; i++) {
                  unit->data[ii->data[i] - 1] = rtInf;
                }
              } else {
                /*  bsbriniT = Boolean vector which is true if the */
                /*  corresponding unit belonged to previous subset and */
                /*  has a MD smaller than minMD. This vector is nothing */
                /*  but the Boolean version of bsbrini. */
                /*  bsbriniT=MDltminT & bsbT; */
                i = bsbriniT->size[0];
                bsbriniT->size[0] = MDltminbsb->size[0];
                emxEnsureCapacity_boolean_T(sp, bsbriniT, i, &kp_emlrtRTEI);
                loop_ub = MDltminbsb->size[0];
                for (i = 0; i < loop_ub; i++) {
                  bsbriniT->data[i] = MDltminbsb->data[i];
                }

                k = MDltminbsb->size[0];
                for (b_i = 0; b_i < k; b_i++) {
                  if (MDltminbsb->data[b_i]) {
                    if (b_i + 1 > unit->size[0]) {
                      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, unit->size[0],
                        &ho_emlrtBCI, (emlrtCTX)sp);
                    }

                    unit->data[b_i] = rtInf;
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
              i = (int32_T)rankgap;
              for (loop_ub = 0; loop_ub < i; loop_ub++) {
                st.site = &wt_emlrtRSI;
                b_st.site = &qab_emlrtRSI;
                c_st.site = &rab_emlrtRSI;
                f_st.site = &sab_emlrtRSI;
                if (unit->size[0] < 1) {
                  emlrtErrorWithMessageIdR2018a(&f_st, &mb_emlrtRTEI,
                    "Coder:toolbox:eml_min_or_max_varDimZero",
                    "Coder:toolbox:eml_min_or_max_varDimZero", 0);
                }

                g_st.site = &tab_emlrtRSI;
                irank = unit->size[0];
                if (unit->size[0] <= 2) {
                  if (unit->size[0] == 1) {
                    idx = 1;
                  } else if ((unit->data[0] > unit->data[1]) ||
                             (muDoubleScalarIsNaN(unit->data[0]) &&
                              (!muDoubleScalarIsNaN(unit->data[1])))) {
                    idx = 2;
                  } else {
                    idx = 1;
                  }
                } else {
                  h_st.site = &nt_emlrtRSI;
                  if (!muDoubleScalarIsNaN(unit->data[0])) {
                    idx = 1;
                  } else {
                    idx = 0;
                    i_st.site = &ot_emlrtRSI;
                    if (unit->size[0] > 2147483646) {
                      j_st.site = &hb_emlrtRSI;
                      check_forloop_overflow_error(&j_st);
                    }

                    k = 2;
                    exitg2 = false;
                    while ((!exitg2) && (k <= irank)) {
                      if (!muDoubleScalarIsNaN(unit->data[k - 1])) {
                        idx = k;
                        exitg2 = true;
                      } else {
                        k++;
                      }
                    }
                  }

                  if (idx == 0) {
                    idx = 1;
                  } else {
                    h_st.site = &mt_emlrtRSI;
                    a = unit->data[idx - 1];
                    nwhile = idx + 1;
                    i_st.site = &pt_emlrtRSI;
                    if ((idx + 1 <= unit->size[0]) && (unit->size[0] >
                         2147483646)) {
                      j_st.site = &hb_emlrtRSI;
                      check_forloop_overflow_error(&j_st);
                    }

                    for (k = nwhile; k <= irank; k++) {
                      d = unit->data[k - 1];
                      if (a > d) {
                        a = d;
                        idx = k;
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
                    &po_emlrtBCI, (emlrtCTX)sp);
                }

                if (bsbT->data[idx - 1]) {
                  if (b_mm <= percn) {
                    if ((zz + 1 < 1) || (zz + 1 > 10)) {
                      emlrtDynamicBoundsCheckR2012b(zz + 1, 1, 10, &wm_emlrtBCI,
                        (emlrtCTX)sp);
                    }

                    bsbradd[zz] = idx;
                    zz++;

                    /*  Delete from vector unitout (containing the */
                    /*  list of the units which went out of the */
                    /*  subset) element minMDindex */
                    k = unitout->size[0] - 1;
                    trueCount = 0;
                    for (b_i = 0; b_i <= k; b_i++) {
                      if ((int32_T)unitout->data[b_i] != idx) {
                        trueCount++;
                      }
                    }

                    partialTrueCount = 0;
                    for (b_i = 0; b_i <= k; b_i++) {
                      if ((int32_T)unitout->data[b_i] != idx) {
                        if (b_i + 1 > unitout->size[0]) {
                          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1,
                            unitout->size[0], &so_emlrtBCI, (emlrtCTX)sp);
                        }

                        unitout->data[partialTrueCount] = unitout->data[b_i];
                        partialTrueCount++;
                      }
                    }

                    k = unitout->size[0];
                    unitout->size[0] = trueCount;
                    emxEnsureCapacity_real_T(sp, unitout, k, &nn_emlrtRTEI);
                  } else {
                    if (idx > bsbriniT->size[0]) {
                      emlrtDynamicBoundsCheckR2012b(idx, 1, bsbriniT->size[0],
                        &qo_emlrtBCI, (emlrtCTX)sp);
                    }

                    bsbriniT->data[idx - 1] = true;
                  }
                } else {
                  if ((lunit + 1 < 1) || (lunit + 1 > 10)) {
                    emlrtDynamicBoundsCheckR2012b(lunit + 1, 1, 10, &um_emlrtBCI,
                      (emlrtCTX)sp);
                  }

                  unitadd[lunit] = idx;
                  lunit++;
                }

                /*  disp(posunit(posncl1)) */
                if (idx > unit->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(idx, 1, unit->size[0],
                    &ro_emlrtBCI, (emlrtCTX)sp);
                }

                unit->data[idx - 1] = rtInf;
                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b((emlrtCTX)sp);
                }
              }

              /*  unit = vector containing all units which enter the new subset */
              /*  but did not belong to previous subset */
              if (1 > lunit) {
                lunit = 0;
              } else if (lunit > 10) {
                emlrtDynamicBoundsCheckR2012b(lunit, 1, 10, &vm_emlrtBCI,
                  (emlrtCTX)sp);
              }

              i = unit->size[0];
              unit->size[0] = lunit;
              emxEnsureCapacity_real_T(sp, unit, i, &op_emlrtRTEI);
              for (i = 0; i < lunit; i++) {
                unit->data[i] = unitadd[i];
              }

              /*  bsbr = vector containing all units which enter the new */
              /*  subset and were also in the previous subset */
              /*  bsb = units forming new subset. */
              if (b_mm <= percn) {
                if (1 > zz) {
                  zz = 0;
                } else if (zz > 10) {
                  emlrtDynamicBoundsCheckR2012b(zz, 1, 10, &xm_emlrtBCI,
                    (emlrtCTX)sp);
                }

                i = bsbr->size[0];
                bsbr->size[0] = bsbrini->size[0] + zz;
                emxEnsureCapacity_int32_T(sp, bsbr, i, &qp_emlrtRTEI);
                loop_ub = bsbrini->size[0];
                for (i = 0; i < loop_ub; i++) {
                  bsbr->data[i] = (int32_T)bsbrini->data[i];
                }

                for (i = 0; i < zz; i++) {
                  bsbr->data[i + bsbrini->size[0]] = bsbradd[i];
                }

                i = bsb->size[0];
                bsb->size[0] = bsbr->size[0] + lunit;
                emxEnsureCapacity_real_T(sp, bsb, i, &rp_emlrtRTEI);
                loop_ub = bsbr->size[0];
                for (i = 0; i < loop_ub; i++) {
                  bsb->data[i] = bsbr->data[i];
                }

                for (i = 0; i < lunit; i++) {
                  bsb->data[i + bsbr->size[0]] = unitadd[i];
                }

                i = bsbT->size[0];
                bsbT->size[0] = n;
                emxEnsureCapacity_boolean_T(sp, bsbT, i, &up_emlrtRTEI);
                for (i = 0; i < n; i++) {
                  bsbT->data[i] = false;
                }

                i = ii->size[0];
                ii->size[0] = bsb->size[0];
                emxEnsureCapacity_int32_T(sp, ii, i, &wp_emlrtRTEI);
                loop_ub = bsb->size[0];
                for (i = 0; i < loop_ub; i++) {
                  k = (int32_T)bsb->data[i];
                  if ((k < 1) || (k > n)) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i], 1, n,
                      &mo_emlrtBCI, (emlrtCTX)sp);
                  }

                  ii->data[i] = k;
                }

                loop_ub = ii->size[0];
                for (i = 0; i < loop_ub; i++) {
                  bsbT->data[ii->data[i] - 1] = true;
                }
              } else {
                /*  After the instruction which follows bsbriniT */
                /*  will be exactly equal to bsbT */
                /*  Note that bsbT has been computed through the 3 following instructions */
                /*  -----------    bsbriniT=MDltminT & bsbT; */
                /*  -----------    bsbriniT(minMDindex)=true; */
                /*  -----------    bsbriniT(unit)=true; */
                for (i = 0; i < lunit; i++) {
                  k = unitadd[i];
                  if ((k < 1) || (k > bsbriniT->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(k, 1, bsbriniT->size[0],
                      &no_emlrtBCI, (emlrtCTX)sp);
                  }

                  tmp_data[i] = k;
                }

                for (i = 0; i < lunit; i++) {
                  bsbriniT->data[tmp_data[i] - 1] = true;
                }

                i = bsbT->size[0];
                bsbT->size[0] = bsbriniT->size[0];
                emxEnsureCapacity_boolean_T(sp, bsbT, i, &tp_emlrtRTEI);
                loop_ub = bsbriniT->size[0];
                for (i = 0; i < loop_ub; i++) {
                  bsbT->data[i] = bsbriniT->data[i];
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
              i = unit->size[0];
              unit->size[0] = MD->size[0];
              emxEnsureCapacity_real_T(sp, unit, i, &hp_emlrtRTEI);
              loop_ub = MD->size[0] - 1;
              for (i = 0; i <= loop_ub; i++) {
                unit->data[i] = MD->data[i];
              }

              st.site = &vt_emlrtRSI;
              ksor = quickselectFS(&st, unit, b_mm + 1.0, idx);
              i = bsbT->size[0];
              bsbT->size[0] = MD->size[0];
              emxEnsureCapacity_boolean_T(sp, bsbT, i, &ip_emlrtRTEI);
              loop_ub = MD->size[0];
              for (i = 0; i < loop_ub; i++) {
                bsbT->data[i] = (MD->data[i] <= ksor);
              }

              st.site = &ut_emlrtRSI;
              b_st.site = &rm_emlrtRSI;
              c_st.site = &sd_emlrtRSI;
              irank = combineVectorElements(&c_st, bsbT);
              if (irank == (int32_T)b_mm + 1) {
                if (b_mm <= percn) {
                  k = bsbT->size[0] - 1;
                  trueCount = 0;
                  for (b_i = 0; b_i <= k; b_i++) {
                    if (bsbT->data[b_i]) {
                      trueCount++;
                    }
                  }

                  i = bsb->size[0];
                  bsb->size[0] = trueCount;
                  emxEnsureCapacity_real_T(sp, bsb, i, &nn_emlrtRTEI);
                  partialTrueCount = 0;
                  for (b_i = 0; b_i <= k; b_i++) {
                    if (bsbT->data[b_i]) {
                      if (b_i + 1 > seq->size[0]) {
                        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                          &jo_emlrtBCI, (emlrtCTX)sp);
                      }

                      bsb->data[partialTrueCount] = seq->data[b_i];
                      partialTrueCount++;
                    }
                  }
                }
              } else {
                k = MD->size[0];
                for (b_i = 0; b_i < k; b_i++) {
                  if ((MD->data[b_i] < ksor) && (b_i + 1 > seq->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                      &pm_emlrtBCI, (emlrtCTX)sp);
                  }
                }

                k = MD->size[0];
                for (b_i = 0; b_i < k; b_i++) {
                  if ((MD->data[b_i] == ksor) && (b_i + 1 > seq->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                      &om_emlrtBCI, (emlrtCTX)sp);
                  }
                }

                k = MD->size[0];
                trueCount = 0;
                for (b_i = 0; b_i < k; b_i++) {
                  if (MD->data[b_i] < ksor) {
                    trueCount++;
                  }
                }

                d = (b_mm + 1.0) - (real_T)trueCount;
                if (1.0 > d) {
                  loop_ub = 0;
                } else {
                  k = MD->size[0];
                  trueCount = 0;
                  for (b_i = 0; b_i < k; b_i++) {
                    if (MD->data[b_i] == ksor) {
                      trueCount++;
                    }
                  }

                  if (1 > trueCount) {
                    emlrtDynamicBoundsCheckR2012b(1, 1, trueCount, &ym_emlrtBCI,
                      (emlrtCTX)sp);
                  }

                  k = MD->size[0];
                  trueCount = 0;
                  for (b_i = 0; b_i < k; b_i++) {
                    if (MD->data[b_i] == ksor) {
                      trueCount++;
                    }
                  }

                  if (((int32_T)d < 1) || ((int32_T)d > trueCount)) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, trueCount,
                      &an_emlrtBCI, (emlrtCTX)sp);
                  }

                  loop_ub = (int32_T)d;
                }

                k = MD->size[0];
                trueCount = 0;
                for (b_i = 0; b_i < k; b_i++) {
                  if (MD->data[b_i] == ksor) {
                    trueCount++;
                  }
                }

                c_Y[0] = 1;
                c_Y[1] = loop_ub;
                st.site = &tt_emlrtRSI;
                b_indexShapeCheck(&st, trueCount, c_Y);
                k = MD->size[0] - 1;
                trueCount = 0;
                for (b_i = 0; b_i <= k; b_i++) {
                  if (MD->data[b_i] < ksor) {
                    trueCount++;
                  }
                }

                i = r7->size[0];
                r7->size[0] = trueCount;
                emxEnsureCapacity_int32_T(sp, r7, i, &nn_emlrtRTEI);
                partialTrueCount = 0;
                irank = MD->size[0] - 1;
                trueCount = 0;
                for (b_i = 0; b_i <= k; b_i++) {
                  if (MD->data[b_i] < ksor) {
                    r7->data[partialTrueCount] = b_i + 1;
                    partialTrueCount++;
                  }

                  if (MD->data[b_i] == ksor) {
                    trueCount++;
                  }
                }

                i = r8->size[0];
                r8->size[0] = trueCount;
                emxEnsureCapacity_int32_T(sp, r8, i, &nn_emlrtRTEI);
                partialTrueCount = 0;
                for (b_i = 0; b_i <= irank; b_i++) {
                  if (MD->data[b_i] == ksor) {
                    r8->data[partialTrueCount] = b_i + 1;
                    partialTrueCount++;
                  }
                }

                i = bsb->size[0];
                bsb->size[0] = r7->size[0] + loop_ub;
                emxEnsureCapacity_real_T(sp, bsb, i, &sp_emlrtRTEI);
                irank = r7->size[0];
                for (i = 0; i < irank; i++) {
                  bsb->data[i] = seq->data[r7->data[i] - 1];
                }

                for (i = 0; i < loop_ub; i++) {
                  bsb->data[i + r7->size[0]] = seq->data[r8->data[i] - 1];
                }

                i = bsbT->size[0];
                bsbT->size[0] = n;
                emxEnsureCapacity_boolean_T(sp, bsbT, i, &vp_emlrtRTEI);
                for (i = 0; i < n; i++) {
                  bsbT->data[i] = false;
                }

                i = ii->size[0];
                ii->size[0] = bsb->size[0];
                emxEnsureCapacity_int32_T(sp, ii, i, &xp_emlrtRTEI);
                loop_ub = bsb->size[0];
                for (i = 0; i < loop_ub; i++) {
                  k = (int32_T)bsb->data[i];
                  if (bsb->data[i] != k) {
                    emlrtIntegerCheckR2012b(bsb->data[i], &ac_emlrtDCI,
                      (emlrtCTX)sp);
                  }

                  if (k > n) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i], 1, n,
                      &oo_emlrtBCI, (emlrtCTX)sp);
                  }

                  ii->data[i] = k;
                }

                loop_ub = ii->size[0];
                for (i = 0; i < loop_ub; i++) {
                  bsbT->data[ii->data[i] - 1] = true;
                }
              }

              /*  unit = vector containing units which just entered subset; */
              i = MDltminT->size[0];
              MDltminT->size[0] = oldbsbT->size[0];
              emxEnsureCapacity_boolean_T(sp, MDltminT, i, &lp_emlrtRTEI);
              loop_ub = oldbsbT->size[0];
              for (i = 0; i < loop_ub; i++) {
                MDltminT->data[i] = !oldbsbT->data[i];
              }

              if (bsbT->size[0] != MDltminT->size[0]) {
                emlrtSizeEqCheck1DR2012b(bsbT->size[0], MDltminT->size[0],
                  &pb_emlrtECI, (emlrtCTX)sp);
              }

              st.site = &st_emlrtRSI;
              i = MDltminT->size[0];
              MDltminT->size[0] = bsbT->size[0];
              emxEnsureCapacity_boolean_T(&st, MDltminT, i, &mp_emlrtRTEI);
              loop_ub = bsbT->size[0];
              for (i = 0; i < loop_ub; i++) {
                MDltminT->data[i] = (bsbT->data[i] && MDltminT->data[i]);
              }

              b_st.site = &vb_emlrtRSI;
              c_eml_find(&b_st, MDltminT, ii);
              i = unit->size[0];
              unit->size[0] = ii->size[0];
              emxEnsureCapacity_real_T(&st, unit, i, &pp_emlrtRTEI);
              loop_ub = ii->size[0];
              for (i = 0; i < loop_ub; i++) {
                unit->data[i] = ii->data[i];
              }
            }

            if (b_mm >= init1) {
              /*  mmd contains minimum of Mahalanobis distances among */
              /*  the units which are not in the subset at step m */
              d = (b_mm - init1) + 1.0;
              a = (int32_T)muDoubleScalarFloor(d);
              if (d != a) {
                emlrtIntegerCheckR2012b(d, &xb_emlrtDCI, (emlrtCTX)sp);
              }

              if (((int32_T)d < 1) || ((int32_T)d > mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, mmd->size[0],
                  &fo_emlrtBCI, (emlrtCTX)sp);
              }

              mmd->data[((int32_T)d + mmd->size[0]) - 1] = ex;
              if (d != a) {
                emlrtIntegerCheckR2012b(d, &xb_emlrtDCI, (emlrtCTX)sp);
              }

              if (((int32_T)d < 1) || ((int32_T)d > mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, mmd->size[0],
                  &fo_emlrtBCI, (emlrtCTX)sp);
              }

              st.site = &rt_emlrtRSI;
              x = &mmd->data[((int32_T)d + mmd->size[0]) - 1];
              if (*x < 0.0) {
                emlrtErrorWithMessageIdR2018a(&st, &bc_emlrtRTEI,
                  "Coder:toolbox:ElFunDomainError",
                  "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
              }

              *x = muDoubleScalarSqrt(*x);
            }

            /*  store mean of units forming old subset */
            i = meoldbsb->size[0] * meoldbsb->size[1];
            meoldbsb->size[0] = 1;
            meoldbsb->size[1] = ym->size[1];
            emxEnsureCapacity_real_T(sp, meoldbsb, i, &jp_emlrtRTEI);
            loop_ub = ym->size[1];
            for (i = 0; i < loop_ub; i++) {
              meoldbsb->data[i] = ym->data[i];
            }

            lunit = unit->size[0];
            if (b_mm >= init1) {
              if (unit->size[0] <= 10) {
                if (2 > unit->size[0] + 1) {
                  i = -1;
                  k = -1;
                } else {
                  i = 0;
                  k = unit->size[0];
                }

                d = (b_mm - init1) + 1.0;
                if (d != (int32_T)muDoubleScalarFloor(d)) {
                  emlrtIntegerCheckR2012b(d, &lb_emlrtDCI, (emlrtCTX)sp);
                }

                if (((int32_T)d < 1) || ((int32_T)d > Un->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Un->size[0],
                    &dn_emlrtBCI, (emlrtCTX)sp);
                }

                c_Y[0] = 1;
                irank = k - i;
                c_Y[1] = irank;
                emlrtSubAssignSizeCheckR2012b(&c_Y[0], 2, &unit->size[0], 1,
                  &sb_emlrtECI, (emlrtCTX)sp);
                for (k = 0; k < irank; k++) {
                  Un->data[((int32_T)d + Un->size[0] * ((i + k) + 1)) - 1] =
                    unit->data[k];
                }
              } else {
                st.site = &qt_emlrtRSI;
                c_indexShapeCheck(&st, unit->size[0]);
                d = (b_mm - init1) + 1.0;
                if (d != (int32_T)muDoubleScalarFloor(d)) {
                  emlrtIntegerCheckR2012b(d, &mb_emlrtDCI, (emlrtCTX)sp);
                }

                if (((int32_T)d < 1) || ((int32_T)d > Un->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Un->size[0],
                    &en_emlrtBCI, (emlrtCTX)sp);
                }

                c_Y[0] = 1;
                c_Y[1] = 10;
                i = 10;
                emlrtSubAssignSizeCheckR2012b(&c_Y[0], 2, &i, 1, &tb_emlrtECI,
                  (emlrtCTX)sp);
                for (i = 0; i < 10; i++) {
                  Un->data[((int32_T)d + Un->size[0] * (i + 1)) - 1] =
                    unit->data[i];
                }
              }
            }
          }

          mm++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtCTX)sp);
          }
        }
      }
    }
  }

  if (guard1) {
    st.site = &unb_emlrtRSI;
    b_disp(&st, e_emlrt_marshallOut(&st, cv9), o_emlrt_marshallOut(&st, cv14),
           &x_emlrtMCI);
    st.site = &knb_emlrtRSI;
    disp(&st, b_emlrt_marshallOut(&st, cv15), &y_emlrtMCI);
    i = mmd->size[0] * mmd->size[1];
    mmd->size[0] = 1;
    mmd->size[1] = 1;
    emxEnsureCapacity_real_T(sp, mmd, i, &in_emlrtRTEI);
    mmd->data[0] = rtNaN;
    i = Un->size[0] * Un->size[1];
    Un->size[0] = 1;
    Un->size[1] = 1;
    emxEnsureCapacity_real_T(sp, Un, i, &jn_emlrtRTEI);
    Un->data[0] = rtNaN;
  }

  emxFree_real_T(&b_Y);
  emxFree_int32_T(&ii);
  emxFree_int32_T(&r8);
  emxFree_int32_T(&r7);
  emxFree_int32_T(&r6);
  emxFree_int32_T(&r5);
  emxFree_int32_T(&r4);
  emxFree_int32_T(&r3);
  emxFree_int32_T(&r2);
  emxFree_boolean_T(&MDltminbsb);
  emxFree_boolean_T(&MDltminT);
  emxFree_real_T(&R);
  emxFree_real_T(&MD);
  emxFree_real_T(&zi);
  emxFree_real_T(&mibsbr);
  emxFree_real_T(&mi);
  emxFree_real_T(&Ym);
  emxFree_real_T(&ym);
  emxFree_real_T(&Yb);
  emxFree_real_T(&unit);
  emxFree_uint32_T(&bsbrini);
  emxFree_boolean_T(&bsbriniT);
  emxFree_real_T(&unitout);
  emxFree_int32_T(&bsbr);
  emxFree_boolean_T(&oldbsbT);
  emxFree_real_T(&meoldbsb);
  emxFree_real_T(&S);
  emxFree_boolean_T(&bsbT);
  emxFree_real_T(&seq);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (FSMmmd.c) */
