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
#include "FSM_wrapper_data.h"
#include "FSM_wrapper_emxutil.h"
#include "FSM_wrapper_mexutil.h"
#include "FSM_wrapper_types.h"
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
static emlrtRSInfo nq_emlrtRSI = { 372,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo oq_emlrtRSI = { 815,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo pq_emlrtRSI = { 813,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo qq_emlrtRSI = { 812,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo rq_emlrtRSI = { 798,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo sq_emlrtRSI = { 788,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo tq_emlrtRSI = { 781,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo uq_emlrtRSI = { 773,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo vq_emlrtRSI = { 770,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo wq_emlrtRSI = { 703,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo xq_emlrtRSI = { 634,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo yq_emlrtRSI = { 617,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo ar_emlrtRSI = { 594,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo br_emlrtRSI = { 592,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo cr_emlrtRSI = { 578,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo dr_emlrtRSI = { 576,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo er_emlrtRSI = { 575,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo fr_emlrtRSI = { 573,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo gr_emlrtRSI = { 572,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo hr_emlrtRSI = { 566,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo ir_emlrtRSI = { 564,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo jr_emlrtRSI = { 556,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo kr_emlrtRSI = { 554,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo lr_emlrtRSI = { 549,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo mr_emlrtRSI = { 547,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo nr_emlrtRSI = { 546,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo or_emlrtRSI = { 544,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo pr_emlrtRSI = { 535,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo qr_emlrtRSI = { 533,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo rr_emlrtRSI = { 529,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo sr_emlrtRSI = { 527,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo tr_emlrtRSI = { 526,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo ur_emlrtRSI = { 523,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo vr_emlrtRSI = { 521,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo wr_emlrtRSI = { 506,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo xr_emlrtRSI = { 479,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo yr_emlrtRSI = { 471,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo as_emlrtRSI = { 458,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo bs_emlrtRSI = { 430,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo cs_emlrtRSI = { 416,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo ds_emlrtRSI = { 410,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo es_emlrtRSI = { 374,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo fs_emlrtRSI = { 358,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo gs_emlrtRSI = { 344,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo hs_emlrtRSI = { 257,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo is_emlrtRSI = { 255,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo js_emlrtRSI = { 251,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtMCInfo ac_emlrtMCI = { 264,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtMCInfo bc_emlrtMCI = { 352,/* lineNo */
  9,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtMCInfo cc_emlrtMCI = { 434,/* lineNo */
  9,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtMCInfo dc_emlrtMCI = { 437,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtMCInfo ec_emlrtMCI = { 582,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtMCInfo fc_emlrtMCI = { 584,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtMCInfo gc_emlrtMCI = { 812,/* lineNo */
  25,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtMCInfo hc_emlrtMCI = { 813,/* lineNo */
  25,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtBCInfo al_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  779,                                 /* lineNo */
  31,                                  /* colNo */
  "seq",                               /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  778,                                 /* lineNo */
  32,                                  /* colNo */
  "seq",                               /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  463,                                 /* lineNo */
  37,                                  /* colNo */
  "seq",                               /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  463,                                 /* lineNo */
  24,                                  /* colNo */
  "BB",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo u_emlrtECI = { 2,   /* nDims */
  430,                                 /* lineNo */
  30,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = { 446,/* lineNo */
  14,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtECInfo v_emlrtECI = { -1,  /* nDims */
  501,                                 /* lineNo */
  32,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtECInfo w_emlrtECI = { -1,  /* nDims */
  520,                                 /* lineNo */
  27,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtECInfo x_emlrtECI = { 2,   /* nDims */
  526,                                 /* lineNo */
  59,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtECInfo y_emlrtECI = { 2,   /* nDims */
  529,                                 /* lineNo */
  19,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtBCInfo el_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  532,                                 /* lineNo */
  30,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ab_emlrtECI = { 2,  /* nDims */
  532,                                 /* lineNo */
  28,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtECInfo bb_emlrtECI = { 2,  /* nDims */
  535,                                 /* lineNo */
  27,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtECInfo cb_emlrtECI = { 2,  /* nDims */
  546,                                 /* lineNo */
  67,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtECInfo db_emlrtECI = { 2,  /* nDims */
  549,                                 /* lineNo */
  15,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtBCInfo fl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  553,                                 /* lineNo */
  26,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo eb_emlrtECI = { 2,  /* nDims */
  553,                                 /* lineNo */
  24,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtECInfo fb_emlrtECI = { 2,  /* nDims */
  556,                                 /* lineNo */
  23,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtECInfo gb_emlrtECI = { 2,  /* nDims */
  564,                                 /* lineNo */
  31,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtECInfo hb_emlrtECI = { -1, /* nDims */
  627,                                 /* lineNo */
  28,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtBCInfo gl_emlrtBCI = { 1,  /* iFirst */
  10,                                  /* iLast */
  723,                                 /* lineNo */
  33,                                  /* colNo */
  "unitadd",                           /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo hl_emlrtBCI = { 1,  /* iFirst */
  10,                                  /* iLast */
  732,                                 /* lineNo */
  32,                                  /* colNo */
  "unitadd",                           /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo il_emlrtBCI = { 1,  /* iFirst */
  10,                                  /* iLast */
  713,                                 /* lineNo */
  37,                                  /* colNo */
  "bsbradd",                           /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo jl_emlrtBCI = { 1,  /* iFirst */
  10,                                  /* iLast */
  738,                                 /* lineNo */
  45,                                  /* colNo */
  "bsbradd",                           /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  781,                                 /* lineNo */
  39,                                  /* colNo */
  "bsbeq",                             /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ll_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  781,                                 /* lineNo */
  41,                                  /* colNo */
  "bsbeq",                             /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo ib_emlrtECI = { -1, /* nDims */
  788,                                 /* lineNo */
  27,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtBCInfo ml_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  461,                                 /* lineNo */
  28,                                  /* colNo */
  "BB",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo jb_emlrtECI = { -1, /* nDims */
  461,                                 /* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtBCInfo nl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  463,                                 /* lineNo */
  29,                                  /* colNo */
  "BB",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo kb_emlrtECI = { -1, /* nDims */
  463,                                 /* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtDCInfo n_emlrtDCI = { 809, /* lineNo */
  24,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ol_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  809,                                 /* lineNo */
  24,                                  /* colNo */
  "Un",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo lb_emlrtECI = { -1, /* nDims */
  809,                                 /* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtDCInfo o_emlrtDCI = { 815, /* lineNo */
  24,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo pl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  815,                                 /* lineNo */
  24,                                  /* colNo */
  "Un",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo mb_emlrtECI = { -1, /* nDims */
  815,                                 /* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtBCInfo ql_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  257,                                 /* lineNo */
  24,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 321, /* lineNo */
  6,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo rl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  321,                                 /* lineNo */
  6,                                   /* colNo */
  "bsbT",                              /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 410, /* lineNo */
  33,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 410, /* lineNo */
  33,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 416, /* lineNo */
  19,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 416, /* lineNo */
  19,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo sl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  430,                                 /* lineNo */
  12,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  430,                                 /* lineNo */
  36,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ul_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  430,                                 /* lineNo */
  52,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  450,                                 /* lineNo */
  18,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 450, /* lineNo */
  18,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo wl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  452,                                 /* lineNo */
  18,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  575,                                 /* lineNo */
  26,                                  /* colNo */
  "Ym",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 575, /* lineNo */
  26,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo yl_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  575,                                 /* lineNo */
  37,                                  /* colNo */
  "Ym",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo am_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  572,                                 /* lineNo */
  26,                                  /* colNo */
  "Ym",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 461, /* lineNo */
  24,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  461,                                 /* lineNo */
  24,                                  /* colNo */
  "BB",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  576,                                 /* lineNo */
  29,                                  /* colNo */
  "Ym",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  544,                                 /* lineNo */
  22,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 506, /* lineNo */
  26,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo em_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  506,                                 /* lineNo */
  26,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  572,                                 /* lineNo */
  38,                                  /* colNo */
  "Ym",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  502,                                 /* lineNo */
  29,                                  /* colNo */
  "seq",                               /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  573,                                 /* lineNo */
  29,                                  /* colNo */
  "Ym",                                /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo im_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  523,                                 /* lineNo */
  34,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 609, /* lineNo */
  23,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  609,                                 /* lineNo */
  23,                                  /* colNo */
  "MDmod",                             /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo km_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  607,                                 /* lineNo */
  17,                                  /* colNo */
  "MDmod",                             /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  521,                                 /* lineNo */
  34,                                  /* colNo */
  "Y",                                 /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  553,                                 /* lineNo */
  26,                                  /* colNo */
  "unit",                              /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  629,                                 /* lineNo */
  37,                                  /* colNo */
  "MDltminT",                          /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 629,/* lineNo */
  37,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo om_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  532,                                 /* lineNo */
  30,                                  /* colNo */
  "unitout",                           /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  653,                                 /* lineNo */
  17,                                  /* colNo */
  "bsbT",                              /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  798,                                 /* lineNo */
  17,                                  /* colNo */
  "mmd",                               /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = { 798,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = { 674,/* lineNo */
  37,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo rm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  674,                                 /* lineNo */
  37,                                  /* colNo */
  "MDltminT",                          /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  690,                                 /* lineNo */
  21,                                  /* colNo */
  "MDmod",                             /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  675,                                 /* lineNo */
  29,                                  /* colNo */
  "bsb",                               /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo um_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  775,                                 /* lineNo */
  29,                                  /* colNo */
  "seq",                               /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  681,                                 /* lineNo */
  27,                                  /* colNo */
  "MDmod",                             /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  680,                                 /* lineNo */
  29,                                  /* colNo */
  "bsb",                               /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xm_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  755,                                 /* lineNo */
  26,                                  /* colNo */
  "bsbT",                              /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ym_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  747,                                 /* lineNo */
  30,                                  /* colNo */
  "bsbriniT",                          /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = { 784,/* lineNo */
  26,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo an_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  784,                                 /* lineNo */
  26,                                  /* colNo */
  "bsbT",                              /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  711,                                 /* lineNo */
  24,                                  /* colNo */
  "bsbT",                              /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  720,                                 /* lineNo */
  29,                                  /* colNo */
  "bsbriniT",                          /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dn_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  727,                                 /* lineNo */
  21,                                  /* colNo */
  "MDmod",                             /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo en_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  718,                                 /* lineNo */
  37,                                  /* colNo */
  "unitout",                           /* aName */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo qg_emlrtRTEI = { 251,/* lineNo */
  4,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo rg_emlrtRTEI = { 257,/* lineNo */
  22,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo sg_emlrtRTEI = { 309,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo tg_emlrtRTEI = { 320,/* lineNo */
  1,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ug_emlrtRTEI = { 321,/* lineNo */
  6,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo vg_emlrtRTEI = { 326,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo wg_emlrtRTEI = { 327,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo xg_emlrtRTEI = { 328,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo yg_emlrtRTEI = { 329,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ah_emlrtRTEI = { 330,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo bh_emlrtRTEI = { 331,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ch_emlrtRTEI = { 332,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo dh_emlrtRTEI = { 84,/* lineNo */
  5,                                   /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo eh_emlrtRTEI = { 88,/* lineNo */
  5,                                   /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo fh_emlrtRTEI = { 105,/* lineNo */
  9,                                   /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo gh_emlrtRTEI = { 374,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo hh_emlrtRTEI = { 372,/* lineNo */
  24,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ih_emlrtRTEI = { 379,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo jh_emlrtRTEI = { 372,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo kh_emlrtRTEI = { 410,/* lineNo */
  14,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo lh_emlrtRTEI = { 410,/* lineNo */
  29,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo mh_emlrtRTEI = { 410,/* lineNo */
  1,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo nh_emlrtRTEI = { 416,/* lineNo */
  6,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo oh_emlrtRTEI = { 416,/* lineNo */
  19,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ph_emlrtRTEI = { 416,/* lineNo */
  1,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo qh_emlrtRTEI = { 423,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo rh_emlrtRTEI = { 430,/* lineNo */
  10,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo sh_emlrtRTEI = { 438,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo th_emlrtRTEI = { 439,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo uh_emlrtRTEI = { 440,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo vh_emlrtRTEI = { 430,/* lineNo */
  30,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo wh_emlrtRTEI = { 450,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo xh_emlrtRTEI = { 1,/* lineNo */
  31,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo yh_emlrtRTEI = { 452,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ai_emlrtRTEI = { 458,/* lineNo */
  24,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo bi_emlrtRTEI = { 458,/* lineNo */
  20,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ci_emlrtRTEI = { 471,/* lineNo */
  9,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo di_emlrtRTEI = { 575,/* lineNo */
  23,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ei_emlrtRTEI = { 540,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo fi_emlrtRTEI = { 575,/* lineNo */
  34,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo gi_emlrtRTEI = { 572,/* lineNo */
  23,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo hi_emlrtRTEI = { 501,/* lineNo */
  42,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ii_emlrtRTEI = { 461,/* lineNo */
  24,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ji_emlrtRTEI = { 544,/* lineNo */
  20,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ki_emlrtRTEI = { 576,/* lineNo */
  26,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo li_emlrtRTEI = { 506,/* lineNo */
  24,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo mi_emlrtRTEI = { 544,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ni_emlrtRTEI = { 572,/* lineNo */
  35,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo oi_emlrtRTEI = { 578,/* lineNo */
  20,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo pi_emlrtRTEI = { 506,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo qi_emlrtRTEI = { 546,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ri_emlrtRTEI = { 586,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo si_emlrtRTEI = { 573,/* lineNo */
  26,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ti_emlrtRTEI = { 587,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ui_emlrtRTEI = { 523,/* lineNo */
  32,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo vi_emlrtRTEI = { 588,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo wi_emlrtRTEI = { 549,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo xi_emlrtRTEI = { 523,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo yi_emlrtRTEI = { 604,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo aj_emlrtRTEI = { 521,/* lineNo */
  32,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo bj_emlrtRTEI = { 609,/* lineNo */
  23,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo cj_emlrtRTEI = { 615,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo dj_emlrtRTEI = { 521,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ej_emlrtRTEI = { 526,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo fj_emlrtRTEI = { 553,/* lineNo */
  24,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo gj_emlrtRTEI = { 564,/* lineNo */
  31,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo hj_emlrtRTEI = { 529,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ij_emlrtRTEI = { 553,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo jj_emlrtRTEI = { 621,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo kj_emlrtRTEI = { 556,/* lineNo */
  25,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo lj_emlrtRTEI = { 629,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo mj_emlrtRTEI = { 627,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo nj_emlrtRTEI = { 532,/* lineNo */
  28,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo oj_emlrtRTEI = { 532,/* lineNo */
  25,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo pj_emlrtRTEI = { 644,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo qj_emlrtRTEI = { 535,/* lineNo */
  29,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo rj_emlrtRTEI = { 660,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo sj_emlrtRTEI = { 770,/* lineNo */
  38,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo tj_emlrtRTEI = { 771,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo uj_emlrtRTEI = { 803,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo vj_emlrtRTEI = { 689,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo wj_emlrtRTEI = { 788,/* lineNo */
  34,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo xj_emlrtRTEI = { 788,/* lineNo */
  27,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo yj_emlrtRTEI = { 681,/* lineNo */
  27,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ak_emlrtRTEI = { 732,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo bk_emlrtRTEI = { 788,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ck_emlrtRTEI = { 738,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo dk_emlrtRTEI = { 739,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ek_emlrtRTEI = { 781,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo fk_emlrtRTEI = { 757,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo gk_emlrtRTEI = { 754,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo hk_emlrtRTEI = { 783,/* lineNo */
  21,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ik_emlrtRTEI = { 755,/* lineNo */
  26,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo jk_emlrtRTEI = { 784,/* lineNo */
  26,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo kk_emlrtRTEI = { 284,/* lineNo */
  9,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo lk_emlrtRTEI = { 421,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo mk_emlrtRTEI = { 479,/* lineNo */
  13,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo nk_emlrtRTEI = { 564,/* lineNo */
  17,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo ok_emlrtRTEI = { 573,/* lineNo */
  20,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo pk_emlrtRTEI = { 364,/* lineNo */
  5,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo qk_emlrtRTEI = { 594,/* lineNo */
  27,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo rk_emlrtRTEI = { 452,/* lineNo */
  18,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo sk_emlrtRTEI = { 463,/* lineNo */
  24,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo tk_emlrtRTEI = { 572,/* lineNo */
  26,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo uk_emlrtRTEI = { 572,/* lineNo */
  38,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo vk_emlrtRTEI = { 573,/* lineNo */
  29,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo wk_emlrtRTEI = { 521,/* lineNo */
  34,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo xk_emlrtRTEI = { 778,/* lineNo */
  32,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo yk_emlrtRTEI = { 779,/* lineNo */
  31,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo al_emlrtRTEI = { 374,/* lineNo */
  31,                                  /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRTEInfo bl_emlrtRTEI = { 410,/* lineNo */
  6,                                   /* colNo */
  "FSMmmd",                            /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pName */
};

static emlrtRSInfo bcb_emlrtRSI = { 437,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo ccb_emlrtRSI = { 584,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo ncb_emlrtRSI = { 582,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo tcb_emlrtRSI = { 434,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo vcb_emlrtRSI = { 264,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo bdb_emlrtRSI = { 352,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo edb_emlrtRSI = { 813,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

static emlrtRSInfo fdb_emlrtRSI = { 812,/* lineNo */
  "FSMmmd",                            /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMmmd.m"/* pathName */
};

/* Function Definitions */
void FSMmmd(const emlrtStack *sp, const emxArray_real_T *Y, emxArray_real_T *bsb,
            real_T varargin_2, boolean_T varargin_6, emxArray_real_T *mmd,
            emxArray_real_T *Un, emxArray_real_T *varargout_1)
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
  emxArray_int32_T *r10;
  emxArray_int32_T *r3;
  emxArray_int32_T *r4;
  emxArray_int32_T *r5;
  emxArray_int32_T *r6;
  emxArray_int32_T *r7;
  emxArray_int32_T *r8;
  emxArray_int32_T *r9;
  emxArray_real_T *MD;
  emxArray_real_T *R;
  emxArray_real_T *S;
  emxArray_real_T *Yb;
  emxArray_real_T *Ym;
  emxArray_real_T *b_Y;
  emxArray_real_T *bsbsteps;
  emxArray_real_T *meoldbsb;
  emxArray_real_T *mi;
  emxArray_real_T *mibsbr;
  emxArray_real_T *mm;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *seq;
  emxArray_real_T *unit;
  emxArray_real_T *unitout;
  emxArray_real_T *y;
  emxArray_real_T *ym;
  emxArray_real_T *zi;
  emxArray_uint32_T *bsbrini;
  real_T a;
  real_T c_mm;
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
  int32_T size_tmp[2];
  int32_T tmp_size[2];
  int32_T b_i;
  int32_T b_mm;
  int32_T i;
  int32_T i1;
  int32_T idx;
  int32_T ij;
  int32_T ini0;
  int32_T irank;
  int32_T k;
  int32_T loop_ub;
  int32_T lunit;
  int32_T n;
  int32_T nwhile;
  int32_T partialTrueCount;
  int32_T trueCount;
  int32_T v;
  int32_T zz;
  char_T tmp_data[310];
  char_T b_tmp_data[54];
  char_T c_tmp_data[40];
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
  emxInit_boolean_T(sp, &bsbT, 1, &tg_emlrtRTEI, true);

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
  emxEnsureCapacity_boolean_T(sp, bsbT, i, &qg_emlrtRTEI);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[i] = (bsb->data[i] == 0.0);
  }

  emxInit_real_T(sp, &Yb, 2, &wh_emlrtRTEI, true);
  emxInit_real_T(sp, &b_Y, 2, &rh_emlrtRTEI, true);
  st.site = &js_emlrtRSI;
  if (ifWhileCond(&st, bsbT)) {
    Ra = true;
    nwhile = 1;
    while (Ra && (nwhile < 100)) {
      /*  Extract a random sample of size v+1 */
      st.site = &is_emlrtRSI;
      randsample(&st, n, (real_T)v + 1.0, bsb);

      /*  Check if the var-cov matrix of the random sample is full (i.e =v) */
      st.site = &hs_emlrtRSI;
      loop_ub = Y->size[1];
      i = b_Y->size[0] * b_Y->size[1];
      b_Y->size[0] = bsb->size[0];
      b_Y->size[1] = Y->size[1];
      emxEnsureCapacity_real_T(&st, b_Y, i, &rg_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        irank = bsb->size[0];
        for (i1 = 0; i1 < irank; i1++) {
          partialTrueCount = (int32_T)bsb->data[i1];
          if ((partialTrueCount < 1) || (partialTrueCount > Y->size[0])) {
            emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1, Y->size[0],
              &ql_emlrtBCI, &st);
          }

          b_Y->data[i1 + b_Y->size[0] * i] = Y->data[(partialTrueCount + Y->
            size[0] * i) - 1];
        }
      }

      b_st.site = &hs_emlrtRSI;
      cov(&b_st, b_Y, Yb);
      b_st.site = &ee_emlrtRSI;
      irank = local_rank(&b_st, Yb);
      Ra = (irank < v);
      nwhile++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }

    if (nwhile == 100) {
      st.site = &vcb_emlrtRSI;
      b_disp(&st, q_emlrt_marshallOut(&st, cv1), u_emlrt_marshallOut(&st, cv2),
             &ac_emlrtMCI);
    }
  }

  emxInit_real_T(sp, &ym, 2, &ci_emlrtRTEI, true);

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
    emxEnsureCapacity_real_T(sp, ym, i, &vb_emlrtRTEI);
    loop_ub = Y->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      ym->data[i] = (real_T)i + 1.0;
    }
  }

  emxInit_real_T(sp, &seq, 1, &kk_emlrtRTEI, true);
  i = seq->size[0];
  seq->size[0] = ym->size[1];
  emxEnsureCapacity_real_T(sp, seq, i, &sg_emlrtRTEI);
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
  emxEnsureCapacity_boolean_T(sp, bsbT, i, &tg_emlrtRTEI);
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[i] = false;
  }

  emxInit_int32_T(sp, &ii, 1, &kg_emlrtRTEI, true);
  i = ii->size[0];
  ii->size[0] = bsb->size[0];
  emxEnsureCapacity_int32_T(sp, ii, i, &ug_emlrtRTEI);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (bsb->data[i] != (int32_T)muDoubleScalarFloor(bsb->data[i])) {
      emlrtIntegerCheckR2012b(bsb->data[i], &p_emlrtDCI, (emlrtCTX)sp);
    }

    i1 = (int32_T)bsb->data[i];
    if ((i1 < 1) || (i1 > Y->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i], 1, Y->size[0],
        &rl_emlrtBCI, (emlrtCTX)sp);
    }

    ii->data[i] = i1;
  }

  loop_ub = ii->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[ii->data[i] - 1] = true;
  }

  emxInit_real_T(sp, &S, 2, &vg_emlrtRTEI, true);

  /*  Initialization for Matlab coder */
  rankgap = 0.0;
  i = S->size[0] * S->size[1];
  S->size[0] = Y->size[1];
  S->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(sp, S, i, &vg_emlrtRTEI);
  loop_ub = Y->size[1] * Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    S->data[i] = 0.0;
  }

  emxInit_real_T(sp, &meoldbsb, 2, &wg_emlrtRTEI, true);
  i = meoldbsb->size[0] * meoldbsb->size[1];
  meoldbsb->size[0] = 1;
  meoldbsb->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(sp, meoldbsb, i, &wg_emlrtRTEI);
  loop_ub = Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    meoldbsb->data[i] = 0.0;
  }

  emxInit_boolean_T(sp, &oldbsbT, 1, &xg_emlrtRTEI, true);
  i = oldbsbT->size[0];
  oldbsbT->size[0] = bsbT->size[0];
  emxEnsureCapacity_boolean_T(sp, oldbsbT, i, &xg_emlrtRTEI);
  loop_ub = bsbT->size[0];
  for (i = 0; i < loop_ub; i++) {
    oldbsbT->data[i] = bsbT->data[i];
  }

  emxInit_int32_T(sp, &bsbr, 1, &yg_emlrtRTEI, true);
  i = bsbr->size[0];
  bsbr->size[0] = Y->size[0];
  emxEnsureCapacity_int32_T(sp, bsbr, i, &yg_emlrtRTEI);
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbr->data[i] = 0;
  }

  emxInit_real_T(sp, &unitout, 1, &ah_emlrtRTEI, true);
  i = unitout->size[0];
  unitout->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(sp, unitout, i, &ah_emlrtRTEI);
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    unitout->data[i] = 0.0;
  }

  emxInit_boolean_T(sp, &bsbriniT, 1, &bh_emlrtRTEI, true);
  i = bsbriniT->size[0];
  bsbriniT->size[0] = bsbT->size[0];
  emxEnsureCapacity_boolean_T(sp, bsbriniT, i, &bh_emlrtRTEI);
  loop_ub = bsbT->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbriniT->data[i] = bsbT->data[i];
  }

  emxInit_uint32_T(sp, &bsbrini, 1, &ch_emlrtRTEI, true);
  i = bsbrini->size[0];
  bsbrini->size[0] = Y->size[0];
  emxEnsureCapacity_uint32_T(sp, bsbrini, i, &ch_emlrtRTEI);
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbrini->data[i] = 0U;
  }

  ini0 = bsb->size[0];

  /*  check init */
  init1 = varargin_2;
  if (varargin_2 < (real_T)Y->size[1] + 1.0) {
    st.site = &gs_emlrtRSI;
    b_st.site = &bt_emlrtRSI;
    c_st.site = &dcb_emlrtRSI;
    d_st.site = &ecb_emlrtRSI;
    e_st.site = &wcb_emlrtRSI;
    g_emlrt_marshallIn(&c_st, d_feval(&c_st, c_emlrt_marshallOut(&c_st, b_cv),
      e_emlrt_marshallOut(1.0), d_emlrt_marshallOut(&d_st, b_cv1),
      r_emlrt_marshallOut(&e_st, cv4), &ic_emlrtMCI), "<output of feval>");
    init1 = (real_T)Y->size[1] + 1.0;
  } else if (varargin_2 < bsb->size[0]) {
    st.site = &bdb_emlrtRSI;
    disp(&st, v_emlrt_marshallOut(&st, cv3), &bc_emlrtMCI);
    init1 = bsb->size[0];
  } else if (varargin_2 >= Y->size[0]) {
    st.site = &fs_emlrtRSI;
    b_st.site = &bt_emlrtRSI;
    c_st.site = &dcb_emlrtRSI;
    d_st.site = &ecb_emlrtRSI;
    e_st.site = &wcb_emlrtRSI;
    g_emlrt_marshallIn(&c_st, d_feval(&c_st, c_emlrt_marshallOut(&c_st, b_cv),
      e_emlrt_marshallOut(1.0), d_emlrt_marshallOut(&d_st, b_cv1),
      s_emlrt_marshallOut(&e_st, cv5), &ic_emlrtMCI), "<output of feval>");
    init1 = (real_T)Y->size[0] - 1.0;
  }

  /*  Matrix BB will contain the units forming subset in each step (or in */
  /*  selected steps) of the forward search. The first column contains */
  /*  information about units forming subset at step init1. */
  /*  Default for vector bsbsteps which indicates for which steps of the fwd */
  /*  search units forming subset have to be saved */
  emxInit_real_T(sp, &MD, 1, &nk_emlrtRTEI, true);
  emxInit_real_T(sp, &bsbsteps, 1, &pk_emlrtRTEI, true);
  if (Y->size[0] <= 5000) {
    st.site = &nq_emlrtRSI;
    if (muDoubleScalarIsNaN(init1)) {
      size_tmp[1] = 1;
    } else if (Y->size[0] < init1) {
      size_tmp[1] = 0;
    } else if (muDoubleScalarIsInf(init1) && (init1 == Y->size[0])) {
      size_tmp[1] = 1;
    } else if (muDoubleScalarFloor(init1) == init1) {
      size_tmp[1] = (int32_T)((real_T)Y->size[0] - init1) + 1;
    } else {
      b_st.site = &ct_emlrtRSI;
      eml_float_colon(&b_st, init1, Y->size[0], ym);
      size_tmp[1] = ym->size[1];
    }

    st.site = &nq_emlrtRSI;
    if (muDoubleScalarIsNaN(init1)) {
      i = ym->size[0] * ym->size[1];
      ym->size[0] = 1;
      ym->size[1] = 1;
      emxEnsureCapacity_real_T(&st, ym, i, &dh_emlrtRTEI);
      ym->data[0] = rtNaN;
    } else if (Y->size[0] < init1) {
      ym->size[0] = 1;
      ym->size[1] = 0;
    } else if (muDoubleScalarIsInf(init1) && (init1 == Y->size[0])) {
      i = ym->size[0] * ym->size[1];
      ym->size[0] = 1;
      ym->size[1] = 1;
      emxEnsureCapacity_real_T(&st, ym, i, &eh_emlrtRTEI);
      ym->data[0] = rtNaN;
    } else if (muDoubleScalarFloor(init1) == init1) {
      i = ym->size[0] * ym->size[1];
      ym->size[0] = 1;
      ym->size[1] = (int32_T)((real_T)Y->size[0] - init1) + 1;
      emxEnsureCapacity_real_T(&st, ym, i, &fh_emlrtRTEI);
      loop_ub = (int32_T)((real_T)Y->size[0] - init1);
      for (i = 0; i <= loop_ub; i++) {
        ym->data[i] = init1 + (real_T)i;
      }
    } else {
      b_st.site = &ct_emlrtRSI;
      eml_float_colon(&b_st, init1, Y->size[0], ym);
    }

    i = MD->size[0];
    MD->size[0] = ym->size[1];
    emxEnsureCapacity_real_T(sp, MD, i, &hh_emlrtRTEI);
    loop_ub = ym->size[1];
    for (i = 0; i < loop_ub; i++) {
      MD->data[i] = ym->data[i];
    }

    i = bsbsteps->size[0];
    bsbsteps->size[0] = size_tmp[1];
    emxEnsureCapacity_real_T(sp, bsbsteps, i, &jh_emlrtRTEI);
    loop_ub = size_tmp[1];
    for (i = 0; i < loop_ub; i++) {
      bsbsteps->data[i] = MD->data[i];
    }
  } else {
    emxInit_real_T(sp, &y, 2, &al_emlrtRTEI, true);
    st.site = &es_emlrtRSI;
    a = (init1 + 100.0) - b_mod(init1);
    irank = 100 * (int32_T)muDoubleScalarFloor((real_T)Y->size[0] / 100.0);
    if (muDoubleScalarIsNaN(a)) {
      i = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = 1;
      emxEnsureCapacity_real_T(&st, y, i, &dh_emlrtRTEI);
      y->data[0] = rtNaN;
    } else if (irank < a) {
      y->size[0] = 1;
      y->size[1] = 0;
    } else if (muDoubleScalarIsInf(a) && (a == irank)) {
      i = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = 1;
      emxEnsureCapacity_real_T(&st, y, i, &eh_emlrtRTEI);
      y->data[0] = rtNaN;
    } else if (muDoubleScalarFloor(a) == a) {
      i = y->size[0] * y->size[1];
      y->size[0] = 1;
      loop_ub = (int32_T)muDoubleScalarFloor(((real_T)irank - a) / 100.0);
      y->size[1] = loop_ub + 1;
      emxEnsureCapacity_real_T(&st, y, i, &fh_emlrtRTEI);
      for (i = 0; i <= loop_ub; i++) {
        y->data[i] = a + 100.0 * (real_T)i;
      }
    } else {
      b_st.site = &ct_emlrtRSI;
      b_eml_float_colon(&b_st, a, irank, y);
    }

    i = bsbsteps->size[0];
    bsbsteps->size[0] = y->size[1] + 1;
    emxEnsureCapacity_real_T(sp, bsbsteps, i, &gh_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, varargout_1, i, &ih_emlrtRTEI);
  loop_ub = Y->size[0] * bsbsteps->size[0];
  for (i = 0; i < loop_ub; i++) {
    varargout_1->data[i] = rtNaN;
  }

  /*   Un is a Matrix whose 2nd column:11th col contain the unit(s) just */
  /*   included. */
  st.site = &ds_emlrtRSI;
  b_st.site = &ft_emlrtRSI;
  if (muDoubleScalarIsNaN(init1 + 1.0)) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, ym, i, &vb_emlrtRTEI);
    ym->data[0] = rtNaN;
  } else if (Y->size[0] < init1 + 1.0) {
    ym->size[0] = 1;
    ym->size[1] = 0;
  } else if (muDoubleScalarIsInf(init1 + 1.0) && (init1 + 1.0 == Y->size[0])) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, ym, i, &vb_emlrtRTEI);
    ym->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(init1 + 1.0) == init1 + 1.0) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = (int32_T)muDoubleScalarFloor((real_T)Y->size[0] - (init1 + 1.0))
      + 1;
    emxEnsureCapacity_real_T(&b_st, ym, i, &vb_emlrtRTEI);
    loop_ub = (int32_T)muDoubleScalarFloor((real_T)Y->size[0] - (init1 + 1.0));
    for (i = 0; i <= loop_ub; i++) {
      ym->data[i] = (init1 + 1.0) + (real_T)i;
    }
  } else {
    c_st.site = &ct_emlrtRSI;
    eml_float_colon(&c_st, init1 + 1.0, Y->size[0], ym);
  }

  d = (real_T)Y->size[0] - init1;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &r_emlrtDCI, (emlrtCTX)sp);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &q_emlrtDCI, (emlrtCTX)sp);
  }

  i = MD->size[0];
  MD->size[0] = ym->size[1];
  emxEnsureCapacity_real_T(sp, MD, i, &kh_emlrtRTEI);
  loop_ub = ym->size[1];
  for (i = 0; i < loop_ub; i++) {
    MD->data[i] = ym->data[i];
  }

  emxInit_real_T(sp, &r, 2, &lh_emlrtRTEI, true);
  i = r->size[0] * r->size[1];
  r->size[0] = (int32_T)d;
  r->size[1] = 10;
  emxEnsureCapacity_real_T(sp, r, i, &lh_emlrtRTEI);
  loop_ub = (int32_T)d * 10;
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = rtNaN;
  }

  emxInit_real_T(sp, &r1, 2, &bl_emlrtRTEI, true);
  st.site = &ds_emlrtRSI;
  cat(&st, MD, r, r1);
  i = Un->size[0] * Un->size[1];
  Un->size[0] = r1->size[0];
  Un->size[1] = 11;
  emxEnsureCapacity_real_T(sp, Un, i, &mh_emlrtRTEI);
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
  st.site = &cs_emlrtRSI;
  b_st.site = &ft_emlrtRSI;
  if (muDoubleScalarIsNaN(init1)) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, ym, i, &vb_emlrtRTEI);
    ym->data[0] = rtNaN;
  } else if ((real_T)Y->size[0] - 1.0 < init1) {
    ym->size[0] = 1;
    ym->size[1] = 0;
  } else if (muDoubleScalarIsInf(init1) && (init1 == (real_T)Y->size[0] - 1.0))
  {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, ym, i, &vb_emlrtRTEI);
    ym->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(init1) == init1) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = (int32_T)(((real_T)Y->size[0] - 1.0) - init1) + 1;
    emxEnsureCapacity_real_T(&b_st, ym, i, &vb_emlrtRTEI);
    loop_ub = (int32_T)(((real_T)Y->size[0] - 1.0) - init1);
    for (i = 0; i <= loop_ub; i++) {
      ym->data[i] = init1 + (real_T)i;
    }
  } else {
    c_st.site = &ct_emlrtRSI;
    eml_float_colon(&c_st, init1, (real_T)Y->size[0] - 1.0, ym);
  }

  st.site = &cs_emlrtRSI;
  i = MD->size[0];
  MD->size[0] = ym->size[1];
  emxEnsureCapacity_real_T(&st, MD, i, &nh_emlrtRTEI);
  loop_ub = ym->size[1];
  for (i = 0; i < loop_ub; i++) {
    MD->data[i] = ym->data[i];
  }

  emxInit_real_T(&st, &unit, 1, &lk_emlrtRTEI, true);
  d = (real_T)Y->size[0] - init1;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &t_emlrtDCI, &st);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &s_emlrtDCI, &st);
  }

  i = unit->size[0];
  unit->size[0] = (int32_T)d;
  emxEnsureCapacity_real_T(&st, unit, i, &oh_emlrtRTEI);
  d = (real_T)Y->size[0] - init1;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &t_emlrtDCI, &st);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &s_emlrtDCI, &st);
  }

  loop_ub = (int32_T)d;
  for (i = 0; i < loop_ub; i++) {
    unit->data[i] = 0.0;
  }

  b_st.site = &th_emlrtRSI;
  c_st.site = &uh_emlrtRSI;
  if ((int32_T)((real_T)Y->size[0] - init1) != MD->size[0]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &c_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  i = mmd->size[0] * mmd->size[1];
  mmd->size[0] = MD->size[0];
  mmd->size[1] = 2;
  emxEnsureCapacity_real_T(sp, mmd, i, &ph_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, unit, i, &qh_emlrtRTEI);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    unit->data[i] = 0.0;
  }

  lunit = bsb->size[0];

  /*  If the subset Y(bsb,:) is not full rank or a column is constant, then we */
  /*  return as output an empty structure. */
  st.site = &bs_emlrtRSI;
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    i1 = (int32_T)bsb->data[i];
    if ((i1 < 1) || (i1 > Y->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, Y->size[0], &sl_emlrtBCI, &st);
    }
  }

  loop_ub = Y->size[1];
  i = b_Y->size[0] * b_Y->size[1];
  b_Y->size[0] = bsb->size[0];
  b_Y->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(&st, b_Y, i, &rh_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    irank = bsb->size[0];
    for (i1 = 0; i1 < irank; i1++) {
      b_Y->data[i1 + b_Y->size[0] * i] = Y->data[((int32_T)bsb->data[i1] +
        Y->size[0] * i) - 1];
    }
  }

  b_st.site = &ee_emlrtRSI;
  irank = local_rank(&b_st, b_Y);
  emxInit_real_T(sp, &Ym, 2, &mk_emlrtRTEI, true);
  emxInit_real_T(sp, &mi, 2, &pi_emlrtRTEI, true);
  emxInit_real_T(sp, &mibsbr, 2, &dj_emlrtRTEI, true);
  emxInit_real_T(sp, &zi, 2, &ej_emlrtRTEI, true);
  emxInit_real_T(sp, &R, 2, &ok_emlrtRTEI, true);
  emxInit_boolean_T(sp, &MDltminT, 1, &jj_emlrtRTEI, true);
  emxInit_boolean_T(sp, &MDltminbsb, 1, &mj_emlrtRTEI, true);
  emxInit_real_T(sp, &r2, 2, &qk_emlrtRTEI, true);
  emxInit_int32_T(sp, &r3, 1, &rk_emlrtRTEI, true);
  emxInit_int32_T(sp, &r4, 1, &sk_emlrtRTEI, true);
  emxInit_int32_T(sp, &r5, 1, &tk_emlrtRTEI, true);
  emxInit_int32_T(sp, &r6, 1, &uk_emlrtRTEI, true);
  emxInit_int32_T(sp, &r7, 1, &vk_emlrtRTEI, true);
  emxInit_int32_T(sp, &r8, 1, &wk_emlrtRTEI, true);
  emxInit_int32_T(sp, &r9, 1, &xk_emlrtRTEI, true);
  emxInit_int32_T(sp, &r10, 1, &yk_emlrtRTEI, true);
  emxInit_real_T(sp, &mm, 1, &ai_emlrtRTEI, true);
  guard1 = false;
  if (irank < v) {
    guard1 = true;
  } else {
    st.site = &bs_emlrtRSI;
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)bsb->data[i];
      if ((i1 < 1) || (i1 > Y->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, Y->size[0], &tl_emlrtBCI, &st);
      }
    }

    b_st.site = &cd_emlrtRSI;
    c_st.site = &dd_emlrtRSI;
    f_st.site = &ed_emlrtRSI;
    if (((bsb->size[0] != 1) || (Y->size[1] != 1)) && (bsb->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&f_st, &b_emlrtRTEI,
        "Coder:toolbox:autoDimIncompatibility",
        "Coder:toolbox:autoDimIncompatibility", 0);
    }

    if (bsb->size[0] < 1) {
      emlrtErrorWithMessageIdR2018a(&f_st, &emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero",
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    g_st.site = &fd_emlrtRSI;
    h_st.site = &gd_emlrtRSI;
    i_st.site = &hd_emlrtRSI;
    irank = bsb->size[0];
    i = Y->size[1] - 1;
    i1 = mibsbr->size[0] * mibsbr->size[1];
    mibsbr->size[0] = 1;
    mibsbr->size[1] = Y->size[1];
    emxEnsureCapacity_real_T(&i_st, mibsbr, i1, &mc_emlrtRTEI);
    if (Y->size[1] >= 1) {
      j_st.site = &jd_emlrtRSI;
      if (Y->size[1] > 2147483646) {
        k_st.site = &ad_emlrtRSI;
        check_forloop_overflow_error(&k_st);
      }

      for (nwhile = 0; nwhile <= i; nwhile++) {
        mibsbr->data[nwhile] = Y->data[((int32_T)bsb->data[0] + Y->size[0] *
          nwhile) - 1];
        j_st.site = &id_emlrtRSI;
        if ((2 <= irank) && (irank > 2147483646)) {
          k_st.site = &ad_emlrtRSI;
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

    st.site = &bs_emlrtRSI;
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)bsb->data[i];
      if ((i1 < 1) || (i1 > Y->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, Y->size[0], &ul_emlrtBCI, &st);
      }
    }

    b_st.site = &kd_emlrtRSI;
    c_st.site = &ld_emlrtRSI;
    f_st.site = &md_emlrtRSI;
    if (((bsb->size[0] != 1) || (Y->size[1] != 1)) && (bsb->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&f_st, &b_emlrtRTEI,
        "Coder:toolbox:autoDimIncompatibility",
        "Coder:toolbox:autoDimIncompatibility", 0);
    }

    g_st.site = &fd_emlrtRSI;
    h_st.site = &gd_emlrtRSI;
    i_st.site = &hd_emlrtRSI;
    irank = bsb->size[0];
    i = Y->size[1] - 1;
    i1 = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = Y->size[1];
    emxEnsureCapacity_real_T(&i_st, ym, i1, &mc_emlrtRTEI);
    if (Y->size[1] >= 1) {
      j_st.site = &jd_emlrtRSI;
      if (Y->size[1] > 2147483646) {
        k_st.site = &ad_emlrtRSI;
        check_forloop_overflow_error(&k_st);
      }

      for (nwhile = 0; nwhile <= i; nwhile++) {
        ym->data[nwhile] = Y->data[((int32_T)bsb->data[0] + Y->size[0] * nwhile)
          - 1];
        j_st.site = &id_emlrtRSI;
        if ((2 <= irank) && (irank > 2147483646)) {
          k_st.site = &ad_emlrtRSI;
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

    size_tmp[0] = (*(int32_T (*)[2])mibsbr->size)[0];
    size_tmp[1] = (*(int32_T (*)[2])mibsbr->size)[1];
    iv[0] = (*(int32_T (*)[2])ym->size)[0];
    iv[1] = (*(int32_T (*)[2])ym->size)[1];
    emlrtSizeEqCheckNDR2012b(&size_tmp[0], &iv[0], &u_emlrtECI, (emlrtCTX)sp);
    st.site = &bs_emlrtRSI;
    i = mibsbr->size[0] * mibsbr->size[1];
    mibsbr->size[0] = 1;
    emxEnsureCapacity_real_T(&st, mibsbr, i, &vh_emlrtRTEI);
    loop_ub = mibsbr->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      mibsbr->data[i] -= ym->data[i];
    }

    b_st.site = &kd_emlrtRSI;
    c_st.site = &ld_emlrtRSI;
    f_st.site = &md_emlrtRSI;
    if (mibsbr->size[1] < 1) {
      emlrtErrorWithMessageIdR2018a(&f_st, &emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero",
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    g_st.site = &hq_emlrtRSI;
    h_st.site = &iq_emlrtRSI;
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
      i_st.site = &kq_emlrtRSI;
      if (!muDoubleScalarIsNaN(mibsbr->data[0])) {
        idx = 1;
      } else {
        idx = 0;
        j_st.site = &lq_emlrtRSI;
        if (mibsbr->size[1] > 2147483646) {
          k_st.site = &ad_emlrtRSI;
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
        i_st.site = &jq_emlrtRSI;
        ex = mibsbr->data[idx - 1];
        nwhile = idx + 1;
        j_st.site = &mq_emlrtRSI;
        if ((idx + 1 <= mibsbr->size[1]) && (mibsbr->size[1] > 2147483646)) {
          k_st.site = &ad_emlrtRSI;
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
      ij = 1;
      i = n - ini0;
      emlrtForLoopVectorCheckR2021a(ini0, 1.0, n, mxDOUBLE_CLASS, i + 1,
        &cb_emlrtRTEI, (emlrtCTX)sp);
      b_mm = 0;
      exitg1 = false;
      while ((!exitg1) && (b_mm <= i)) {
        c_mm = (real_T)ini0 + (real_T)b_mm;

        /*  Extract units forming subset */
        if (c_mm <= percn) {
          loop_ub = Y->size[1];
          i1 = Yb->size[0] * Yb->size[1];
          Yb->size[0] = bsb->size[0];
          Yb->size[1] = Y->size[1];
          emxEnsureCapacity_real_T(sp, Yb, i1, &wh_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub; i1++) {
            irank = bsb->size[0];
            for (partialTrueCount = 0; partialTrueCount < irank;
                 partialTrueCount++) {
              if (bsb->data[partialTrueCount] != (int32_T)muDoubleScalarFloor
                  (bsb->data[partialTrueCount])) {
                emlrtIntegerCheckR2012b(bsb->data[partialTrueCount], &u_emlrtDCI,
                  (emlrtCTX)sp);
              }

              k = (int32_T)bsb->data[partialTrueCount];
              if ((k < 1) || (k > Y->size[0])) {
                emlrtDynamicBoundsCheckR2012b(k, 1, Y->size[0], &vl_emlrtBCI,
                  (emlrtCTX)sp);
              }

              Yb->data[partialTrueCount + Yb->size[0] * i1] = Y->data[(k +
                Y->size[0] * i1) - 1];
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

          i1 = r3->size[0];
          r3->size[0] = trueCount;
          emxEnsureCapacity_int32_T(sp, r3, i1, &xh_emlrtRTEI);
          partialTrueCount = 0;
          for (b_i = 0; b_i <= k; b_i++) {
            if (bsbT->data[b_i]) {
              r3->data[partialTrueCount] = b_i + 1;
              partialTrueCount++;
            }
          }

          loop_ub = Y->size[1];
          i1 = Yb->size[0] * Yb->size[1];
          Yb->size[0] = r3->size[0];
          Yb->size[1] = Y->size[1];
          emxEnsureCapacity_real_T(sp, Yb, i1, &yh_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub; i1++) {
            irank = r3->size[0];
            for (partialTrueCount = 0; partialTrueCount < irank;
                 partialTrueCount++) {
              if (r3->data[partialTrueCount] > Y->size[0]) {
                emlrtDynamicBoundsCheckR2012b(r3->data[partialTrueCount], 1,
                  Y->size[0], &wl_emlrtBCI, (emlrtCTX)sp);
              }

              Yb->data[partialTrueCount + Yb->size[0] * i1] = Y->data[(r3->
                data[partialTrueCount] + Y->size[0] * i1) - 1];
            }
          }
        }

        /*  If required, store units forming subset at each step */
        if (c_mm >= init1) {
          st.site = &as_emlrtRSI;
          i1 = mm->size[0];
          mm->size[0] = bsbsteps->size[0];
          emxEnsureCapacity_real_T(&st, mm, i1, &ai_emlrtRTEI);
          loop_ub = bsbsteps->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            mm->data[i1] = c_mm - bsbsteps->data[i1];
          }

          b_st.site = &as_emlrtRSI;
          b_abs(&b_st, mm, MD);
          i1 = mm->size[0];
          mm->size[0] = MD->size[0];
          emxEnsureCapacity_real_T(&st, mm, i1, &bi_emlrtRTEI);
          loop_ub = MD->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            mm->data[i1] = MD->data[i1];
          }

          b_st.site = &kd_emlrtRSI;
          c_st.site = &ld_emlrtRSI;
          f_st.site = &md_emlrtRSI;
          if (mm->size[0] < 1) {
            emlrtErrorWithMessageIdR2018a(&f_st, &emlrtRTEI,
              "Coder:toolbox:eml_min_or_max_varDimZero",
              "Coder:toolbox:eml_min_or_max_varDimZero", 0);
          }

          g_st.site = &hq_emlrtRSI;
          h_st.site = &iq_emlrtRSI;
          irank = mm->size[0];
          if (mm->size[0] <= 2) {
            if (mm->size[0] == 1) {
              ex = mm->data[0];
            } else if ((mm->data[0] > mm->data[1]) || (muDoubleScalarIsNaN
                        (mm->data[0]) && (!muDoubleScalarIsNaN(mm->data[1])))) {
              ex = mm->data[1];
            } else {
              ex = mm->data[0];
            }
          } else {
            i_st.site = &kq_emlrtRSI;
            if (!muDoubleScalarIsNaN(mm->data[0])) {
              idx = 1;
            } else {
              idx = 0;
              j_st.site = &lq_emlrtRSI;
              k = 2;
              exitg2 = false;
              while ((!exitg2) && (k <= irank)) {
                if (!muDoubleScalarIsNaN(mm->data[k - 1])) {
                  idx = k;
                  exitg2 = true;
                } else {
                  k++;
                }
              }
            }

            if (idx == 0) {
              ex = mm->data[0];
            } else {
              i_st.site = &jq_emlrtRSI;
              ex = mm->data[idx - 1];
              nwhile = idx + 1;
              j_st.site = &mq_emlrtRSI;
              for (k = nwhile; k <= irank; k++) {
                d = mm->data[k - 1];
                if (ex > d) {
                  ex = d;
                }
              }
            }
          }

          if (ex == 0.0) {
            /*  intersect(mm,bsbsteps)==mm */
            if (c_mm <= percn) {
              i1 = ii->size[0];
              ii->size[0] = bsb->size[0];
              emxEnsureCapacity_int32_T(sp, ii, i1, &ii_emlrtRTEI);
              loop_ub = bsb->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                if (bsb->data[i1] != (int32_T)muDoubleScalarFloor(bsb->data[i1]))
                {
                  emlrtIntegerCheckR2012b(bsb->data[i1], &w_emlrtDCI, (emlrtCTX)
                    sp);
                }

                partialTrueCount = (int32_T)bsb->data[i1];
                if ((partialTrueCount < 1) || (partialTrueCount >
                     varargout_1->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i1], 1,
                    varargout_1->size[0], &bm_emlrtBCI, (emlrtCTX)sp);
                }

                ii->data[i1] = partialTrueCount - 1;
              }

              if ((ij < 1) || (ij > varargout_1->size[1])) {
                emlrtDynamicBoundsCheckR2012b(ij, 1, varargout_1->size[1],
                  &ml_emlrtBCI, (emlrtCTX)sp);
              }

              emlrtSubAssignSizeCheckR2012b(&ii->size[0], 1, &bsb->size[0], 1,
                &jb_emlrtECI, (emlrtCTX)sp);
              loop_ub = bsb->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                varargout_1->data[ii->data[i1] + varargout_1->size[0] * (ij - 1)]
                  = bsb->data[i1];
              }
            } else {
              k = bsbT->size[0];
              for (b_i = 0; b_i < k; b_i++) {
                if (bsbT->data[b_i] && (b_i + 1 > varargout_1->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, varargout_1->size[0],
                    &dl_emlrtBCI, (emlrtCTX)sp);
                }
              }

              if ((ij < 1) || (ij > varargout_1->size[1])) {
                emlrtDynamicBoundsCheckR2012b(ij, 1, varargout_1->size[1],
                  &nl_emlrtBCI, (emlrtCTX)sp);
              }

              k = bsbT->size[0];
              for (b_i = 0; b_i < k; b_i++) {
                if (bsbT->data[b_i] && (b_i + 1 > seq->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                    &cl_emlrtBCI, (emlrtCTX)sp);
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
                &kb_emlrtECI, (emlrtCTX)sp);
              k = bsbT->size[0] - 1;
              trueCount = 0;
              for (b_i = 0; b_i <= k; b_i++) {
                if (bsbT->data[b_i]) {
                  trueCount++;
                }
              }

              i1 = r4->size[0];
              r4->size[0] = trueCount;
              emxEnsureCapacity_int32_T(sp, r4, i1, &xh_emlrtRTEI);
              partialTrueCount = 0;
              for (b_i = 0; b_i <= k; b_i++) {
                if (bsbT->data[b_i]) {
                  r4->data[partialTrueCount] = b_i + 1;
                  partialTrueCount++;
                }
              }

              loop_ub = r4->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                varargout_1->data[(r4->data[i1] + varargout_1->size[0] * (ij - 1))
                  - 1] = seq->data[r4->data[i1] - 1];
              }
            }

            ij++;
          }
        }

        /*  Find vector of means inside subset */
        /*  Note that ym is a row vector */
        st.site = &yr_emlrtRSI;
        b_st.site = &mj_emlrtRSI;
        c_st.site = &hj_emlrtRSI;
        b_combineVectorElements(&c_st, Yb, ym);
        i1 = ym->size[0] * ym->size[1];
        ym->size[0] = 1;
        emxEnsureCapacity_real_T(sp, ym, i1, &ci_emlrtRTEI);
        loop_ub = ym->size[1] - 1;
        for (i1 = 0; i1 <= loop_ub; i1++) {
          ym->data[i1] /= c_mm;
        }

        /*  Ym = n-by-v matrix containing deviations from the means computed */
        /*  using units forming subset */
        /*  Ym=Y-one*ym; */
        st.site = &xr_emlrtRSI;
        bsxfun(&st, Y, ym, Ym);
        b_guard1 = false;
        if (c_mm - (real_T)lunit > (real_T)v + 1.0) {
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
            if ((c_mm > percn) || (rankgap > 10.0)) {
              /*  unitoutT=~(~oldbsbT | bsbT); */
              i1 = MDltminT->size[0];
              MDltminT->size[0] = bsbT->size[0];
              emxEnsureCapacity_boolean_T(sp, MDltminT, i1, &hi_emlrtRTEI);
              loop_ub = bsbT->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                MDltminT->data[i1] = !bsbT->data[i1];
              }

              if (oldbsbT->size[0] != MDltminT->size[0]) {
                emlrtSizeEqCheck1DR2012b(oldbsbT->size[0], MDltminT->size[0],
                  &v_emlrtECI, (emlrtCTX)sp);
              }

              k = oldbsbT->size[0] - 1;
              trueCount = 0;
              for (b_i = 0; b_i <= k; b_i++) {
                if (oldbsbT->data[b_i] && MDltminT->data[b_i]) {
                  trueCount++;
                }
              }

              i1 = unitout->size[0];
              unitout->size[0] = trueCount;
              emxEnsureCapacity_real_T(sp, unitout, i1, &xh_emlrtRTEI);
              partialTrueCount = 0;
              for (b_i = 0; b_i <= k; b_i++) {
                if (oldbsbT->data[b_i] && MDltminT->data[b_i]) {
                  if (b_i + 1 > seq->size[0]) {
                    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                      &gm_emlrtBCI, (emlrtCTX)sp);
                  }

                  unitout->data[partialTrueCount] = seq->data[b_i];
                  partialTrueCount++;
                }
              }
            }

            nwhile = unitout->size[0];
            st.site = &wr_emlrtRSI;
            loop_ub = unitout->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              if (unitout->data[i1] != (int32_T)muDoubleScalarFloor
                  (unitout->data[i1])) {
                emlrtIntegerCheckR2012b(unitout->data[i1], &x_emlrtDCI, &st);
              }

              partialTrueCount = (int32_T)unitout->data[i1];
              if ((partialTrueCount < 1) || (partialTrueCount > Y->size[0])) {
                emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1, Y->size[0],
                  &em_emlrtBCI, &st);
              }
            }

            b_st.site = &mj_emlrtRSI;
            loop_ub = Y->size[1];
            i1 = b_Y->size[0] * b_Y->size[1];
            b_Y->size[0] = unitout->size[0];
            b_Y->size[1] = Y->size[1];
            emxEnsureCapacity_real_T(&b_st, b_Y, i1, &li_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              irank = unitout->size[0];
              for (partialTrueCount = 0; partialTrueCount < irank;
                   partialTrueCount++) {
                b_Y->data[partialTrueCount + b_Y->size[0] * i1] = Y->data
                  [((int32_T)unitout->data[partialTrueCount] + Y->size[0] * i1)
                  - 1];
              }
            }

            c_st.site = &hj_emlrtRSI;
            b_combineVectorElements(&c_st, b_Y, mi);
            i1 = mi->size[0] * mi->size[1];
            mi->size[0] = 1;
            emxEnsureCapacity_real_T(sp, mi, i1, &pi_emlrtRTEI);
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
            if ((c_mm > percn) || (rankgap > 10.0)) {
              /*  oldbsbT = units which were in previous subset */
              /*  bsbT = units which are in current subset */
              if (oldbsbT->size[0] != bsbT->size[0]) {
                emlrtSizeEqCheck1DR2012b(oldbsbT->size[0], bsbT->size[0],
                  &w_emlrtECI, (emlrtCTX)sp);
              }

              k = oldbsbT->size[0] - 1;
              trueCount = 0;
              for (b_i = 0; b_i <= k; b_i++) {
                if (oldbsbT->data[b_i] && bsbT->data[b_i]) {
                  trueCount++;
                }
              }

              i1 = r8->size[0];
              r8->size[0] = trueCount;
              emxEnsureCapacity_int32_T(sp, r8, i1, &xh_emlrtRTEI);
              partialTrueCount = 0;
              for (b_i = 0; b_i <= k; b_i++) {
                if (oldbsbT->data[b_i] && bsbT->data[b_i]) {
                  r8->data[partialTrueCount] = b_i + 1;
                  partialTrueCount++;
                }
              }

              st.site = &vr_emlrtRSI;
              loop_ub = r8->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                if (r8->data[i1] > Y->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(r8->data[i1], 1, Y->size[0],
                    &lm_emlrtBCI, &st);
                }
              }

              b_st.site = &mj_emlrtRSI;
              loop_ub = Y->size[1];
              i1 = b_Y->size[0] * b_Y->size[1];
              b_Y->size[0] = r8->size[0];
              b_Y->size[1] = Y->size[1];
              emxEnsureCapacity_real_T(&b_st, b_Y, i1, &aj_emlrtRTEI);
              for (i1 = 0; i1 < loop_ub; i1++) {
                irank = r8->size[0];
                for (partialTrueCount = 0; partialTrueCount < irank;
                     partialTrueCount++) {
                  b_Y->data[partialTrueCount + b_Y->size[0] * i1] = Y->data
                    [(r8->data[partialTrueCount] + Y->size[0] * i1) - 1];
                }
              }

              c_st.site = &hj_emlrtRSI;
              b_combineVectorElements(&c_st, b_Y, mibsbr);
              i1 = mibsbr->size[0] * mibsbr->size[1];
              mibsbr->size[0] = 1;
              emxEnsureCapacity_real_T(sp, mibsbr, i1, &dj_emlrtRTEI);
              ksor = (c_mm - 1.0) - (real_T)unitout->size[0];
              loop_ub = mibsbr->size[1] - 1;
              for (i1 = 0; i1 <= loop_ub; i1++) {
                mibsbr->data[i1] /= ksor;
              }
            } else {
              st.site = &ur_emlrtRSI;
              loop_ub = bsbr->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                partialTrueCount = bsbr->data[i1];
                if ((partialTrueCount < 1) || (partialTrueCount > Y->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1, Y->size[0],
                    &im_emlrtBCI, &st);
                }
              }

              b_st.site = &mj_emlrtRSI;
              loop_ub = Y->size[1];
              i1 = b_Y->size[0] * b_Y->size[1];
              b_Y->size[0] = bsbr->size[0];
              b_Y->size[1] = Y->size[1];
              emxEnsureCapacity_real_T(&b_st, b_Y, i1, &ui_emlrtRTEI);
              for (i1 = 0; i1 < loop_ub; i1++) {
                irank = bsbr->size[0];
                for (partialTrueCount = 0; partialTrueCount < irank;
                     partialTrueCount++) {
                  b_Y->data[partialTrueCount + b_Y->size[0] * i1] = Y->data
                    [(bsbr->data[partialTrueCount] + Y->size[0] * i1) - 1];
                }
              }

              c_st.site = &hj_emlrtRSI;
              b_combineVectorElements(&c_st, b_Y, mibsbr);
              i1 = mibsbr->size[0] * mibsbr->size[1];
              mibsbr->size[0] = 1;
              emxEnsureCapacity_real_T(sp, mibsbr, i1, &xi_emlrtRTEI);
              ksor = (c_mm - 1.0) - (real_T)unitout->size[0];
              loop_ub = mibsbr->size[1] - 1;
              for (i1 = 0; i1 <= loop_ub; i1++) {
                mibsbr->data[i1] /= ksor;
              }
            }

            size_tmp[0] = (*(int32_T (*)[2])mi->size)[0];
            size_tmp[1] = (*(int32_T (*)[2])mi->size)[1];
            iv[0] = (*(int32_T (*)[2])mibsbr->size)[0];
            iv[1] = (*(int32_T (*)[2])mibsbr->size)[1];
            emlrtSizeEqCheckNDR2012b(&size_tmp[0], &iv[0], &x_emlrtECI,
              (emlrtCTX)sp);
            a = (real_T)unitout->size[0] * ((c_mm - 1.0) - (real_T)unitout->
              size[0]) / (c_mm - 1.0);
            st.site = &tr_emlrtRSI;
            if (a < 0.0) {
              emlrtErrorWithMessageIdR2018a(&st, &x_emlrtRTEI,
                "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
            }

            a = muDoubleScalarSqrt(a);
            i1 = zi->size[0] * zi->size[1];
            zi->size[0] = 1;
            zi->size[1] = mi->size[1];
            emxEnsureCapacity_real_T(sp, zi, i1, &ej_emlrtRTEI);
            loop_ub = mi->size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              zi->data[i1] = a * (mi->data[i1] - mibsbr->data[i1]);
            }

            st.site = &sr_emlrtRSI;
            b_st.site = &xc_emlrtRSI;
            c_dynamic_size_checks(&b_st, S, zi, S->size[1], zi->size[1]);
            b_st.site = &wc_emlrtRSI;
            c_mtimes(&b_st, S, zi, MD);

            /*  S=S+(S*(zi')*zi*S)/(1-zi*S*(zi')); */
            st.site = &rr_emlrtRSI;
            b_st.site = &xc_emlrtRSI;
            d_dynamic_size_checks(&b_st, zi, MD, zi->size[1], MD->size[0]);
            ksor = d_mtimes(zi, MD);
            i1 = r2->size[0] * r2->size[1];
            r2->size[0] = MD->size[0];
            r2->size[1] = MD->size[0];
            emxEnsureCapacity_real_T(sp, r2, i1, &hj_emlrtRTEI);
            loop_ub = MD->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              irank = MD->size[0];
              for (partialTrueCount = 0; partialTrueCount < irank;
                   partialTrueCount++) {
                r2->data[partialTrueCount + r2->size[0] * i1] = MD->
                  data[partialTrueCount] * MD->data[i1] / (1.0 - ksor);
              }
            }

            size_tmp[0] = (*(int32_T (*)[2])S->size)[0];
            size_tmp[1] = (*(int32_T (*)[2])S->size)[1];
            iv[0] = (*(int32_T (*)[2])r2->size)[0];
            iv[1] = (*(int32_T (*)[2])r2->size)[1];
            emlrtSizeEqCheckNDR2012b(&size_tmp[0], &iv[0], &y_emlrtECI,
              (emlrtCTX)sp);
            loop_ub = S->size[0] * S->size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              S->data[i1] += r2->data[i1];
            }

            if (unitout->size[0] > 1) {
              i1 = unitout->size[0];
              for (b_i = 0; b_i < i1; b_i++) {
                if (b_i + 1 > unitout->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, unitout->size[0],
                    &om_emlrtBCI, (emlrtCTX)sp);
                }

                partialTrueCount = (int32_T)unitout->data[b_i];
                if ((partialTrueCount < 1) || (partialTrueCount > Y->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1, Y->size[0],
                    &el_emlrtBCI, (emlrtCTX)sp);
                }

                loop_ub = Y->size[1];
                partialTrueCount = zi->size[0] * zi->size[1];
                zi->size[0] = 1;
                zi->size[1] = Y->size[1];
                emxEnsureCapacity_real_T(sp, zi, partialTrueCount, &nj_emlrtRTEI);
                for (partialTrueCount = 0; partialTrueCount < loop_ub;
                     partialTrueCount++) {
                  zi->data[partialTrueCount] = Y->data[((int32_T)unitout->
                    data[b_i] + Y->size[0] * partialTrueCount) - 1];
                }

                size_tmp[0] = (*(int32_T (*)[2])zi->size)[0];
                size_tmp[1] = (*(int32_T (*)[2])zi->size)[1];
                iv[0] = (*(int32_T (*)[2])mi->size)[0];
                iv[1] = (*(int32_T (*)[2])mi->size)[1];
                emlrtSizeEqCheckNDR2012b(&size_tmp[0], &iv[0], &ab_emlrtECI,
                  (emlrtCTX)sp);
                loop_ub = Y->size[1];
                partialTrueCount = zi->size[0] * zi->size[1];
                zi->size[0] = 1;
                zi->size[1] = Y->size[1];
                emxEnsureCapacity_real_T(sp, zi, partialTrueCount, &oj_emlrtRTEI);
                for (partialTrueCount = 0; partialTrueCount < loop_ub;
                     partialTrueCount++) {
                  zi->data[partialTrueCount] = Y->data[((int32_T)unitout->
                    data[b_i] + Y->size[0] * partialTrueCount) - 1] - mi->
                    data[partialTrueCount];
                }

                st.site = &qr_emlrtRSI;
                b_st.site = &xc_emlrtRSI;
                c_dynamic_size_checks(&b_st, S, zi, S->size[1], zi->size[1]);
                b_st.site = &wc_emlrtRSI;
                c_mtimes(&b_st, S, zi, MD);

                /*  S=S+(S*(zi')*zi*S)/(1-zi*S*(zi')); */
                st.site = &pr_emlrtRSI;
                b_st.site = &xc_emlrtRSI;
                d_dynamic_size_checks(&b_st, zi, MD, zi->size[1], MD->size[0]);
                ksor = d_mtimes(zi, MD);
                partialTrueCount = r2->size[0] * r2->size[1];
                r2->size[0] = MD->size[0];
                r2->size[1] = MD->size[0];
                emxEnsureCapacity_real_T(sp, r2, partialTrueCount, &qj_emlrtRTEI);
                loop_ub = MD->size[0];
                for (partialTrueCount = 0; partialTrueCount < loop_ub;
                     partialTrueCount++) {
                  irank = MD->size[0];
                  for (k = 0; k < irank; k++) {
                    r2->data[k + r2->size[0] * partialTrueCount] = MD->data[k] *
                      MD->data[partialTrueCount] / (1.0 - ksor);
                  }
                }

                size_tmp[0] = (*(int32_T (*)[2])S->size)[0];
                size_tmp[1] = (*(int32_T (*)[2])S->size)[1];
                iv[0] = (*(int32_T (*)[2])r2->size)[0];
                iv[1] = (*(int32_T (*)[2])r2->size)[1];
                emlrtSizeEqCheckNDR2012b(&size_tmp[0], &iv[0], &bb_emlrtECI,
                  (emlrtCTX)sp);
                loop_ub = S->size[0] * S->size[1];
                for (partialTrueCount = 0; partialTrueCount < loop_ub;
                     partialTrueCount++) {
                  S->data[partialTrueCount] += r2->data[partialTrueCount];
                }

                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b((emlrtCTX)sp);
                }
              }
            }
          } else {
            nwhile = 0;
            i1 = mibsbr->size[0] * mibsbr->size[1];
            mibsbr->size[0] = 1;
            mibsbr->size[1] = meoldbsb->size[1];
            emxEnsureCapacity_real_T(sp, mibsbr, i1, &ei_emlrtRTEI);
            loop_ub = meoldbsb->size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              mibsbr->data[i1] = meoldbsb->data[i1];
            }
          }

          /*  mi = mean of units entering subset */
          st.site = &or_emlrtRSI;
          loop_ub = unit->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            partialTrueCount = (int32_T)unit->data[i1];
            if ((partialTrueCount < 1) || (partialTrueCount > Y->size[0])) {
              emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1, Y->size[0],
                &dm_emlrtBCI, &st);
            }
          }

          b_st.site = &mj_emlrtRSI;
          loop_ub = Y->size[1];
          i1 = b_Y->size[0] * b_Y->size[1];
          b_Y->size[0] = unit->size[0];
          b_Y->size[1] = Y->size[1];
          emxEnsureCapacity_real_T(&b_st, b_Y, i1, &ji_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub; i1++) {
            irank = unit->size[0];
            for (partialTrueCount = 0; partialTrueCount < irank;
                 partialTrueCount++) {
              b_Y->data[partialTrueCount + b_Y->size[0] * i1] = Y->data
                [((int32_T)unit->data[partialTrueCount] + Y->size[0] * i1) - 1];
            }
          }

          c_st.site = &hj_emlrtRSI;
          b_combineVectorElements(&c_st, b_Y, mi);
          i1 = mi->size[0] * mi->size[1];
          mi->size[0] = 1;
          emxEnsureCapacity_real_T(sp, mi, i1, &mi_emlrtRTEI);
          loop_ub = mi->size[1] - 1;
          for (i1 = 0; i1 <= loop_ub; i1++) {
            mi->data[i1] /= (real_T)lunit;
          }

          /*  zi=sqrt(kin*(mm-1-k)/(mm-1-k+kin))*(mi-mean(Y(bsbr,:),1)); */
          size_tmp[0] = (*(int32_T (*)[2])mi->size)[0];
          size_tmp[1] = (*(int32_T (*)[2])mi->size)[1];
          iv[0] = (*(int32_T (*)[2])mibsbr->size)[0];
          iv[1] = (*(int32_T (*)[2])mibsbr->size)[1];
          emlrtSizeEqCheckNDR2012b(&size_tmp[0], &iv[0], &cb_emlrtECI, (emlrtCTX)
            sp);
          ksor = (c_mm - 1.0) - (real_T)nwhile;
          a = (real_T)lunit * ksor / (ksor + (real_T)lunit);
          st.site = &nr_emlrtRSI;
          if (a < 0.0) {
            emlrtErrorWithMessageIdR2018a(&st, &x_emlrtRTEI,
              "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError",
              3, 4, 4, "sqrt");
          }

          a = muDoubleScalarSqrt(a);
          i1 = zi->size[0] * zi->size[1];
          zi->size[0] = 1;
          zi->size[1] = mi->size[1];
          emxEnsureCapacity_real_T(sp, zi, i1, &qi_emlrtRTEI);
          loop_ub = mi->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            zi->data[i1] = a * (mi->data[i1] - mibsbr->data[i1]);
          }

          st.site = &mr_emlrtRSI;
          b_st.site = &xc_emlrtRSI;
          c_dynamic_size_checks(&b_st, S, zi, S->size[1], zi->size[1]);
          b_st.site = &wc_emlrtRSI;
          c_mtimes(&b_st, S, zi, MD);

          /*  S=S+(S*(zi')*zi*S)/(1-zi*S*(zi')); */
          st.site = &lr_emlrtRSI;
          b_st.site = &xc_emlrtRSI;
          d_dynamic_size_checks(&b_st, zi, MD, zi->size[1], MD->size[0]);
          ksor = d_mtimes(zi, MD);
          i1 = r2->size[0] * r2->size[1];
          r2->size[0] = MD->size[0];
          r2->size[1] = MD->size[0];
          emxEnsureCapacity_real_T(sp, r2, i1, &wi_emlrtRTEI);
          loop_ub = MD->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            irank = MD->size[0];
            for (partialTrueCount = 0; partialTrueCount < irank;
                 partialTrueCount++) {
              r2->data[partialTrueCount + r2->size[0] * i1] = MD->
                data[partialTrueCount] * MD->data[i1] / (ksor + 1.0);
            }
          }

          size_tmp[0] = (*(int32_T (*)[2])S->size)[0];
          size_tmp[1] = (*(int32_T (*)[2])S->size)[1];
          iv[0] = (*(int32_T (*)[2])r2->size)[0];
          iv[1] = (*(int32_T (*)[2])r2->size)[1];
          emlrtSizeEqCheckNDR2012b(&size_tmp[0], &iv[0], &db_emlrtECI, (emlrtCTX)
            sp);
          loop_ub = S->size[0] * S->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            S->data[i1] -= r2->data[i1];
          }

          if (lunit > 1) {
            /* mi=mean(Y(unit,:),1); */
            for (b_i = 0; b_i < lunit; b_i++) {
              if (b_i + 1 > unit->size[0]) {
                emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, unit->size[0],
                  &mm_emlrtBCI, (emlrtCTX)sp);
              }

              i1 = (int32_T)unit->data[b_i];
              if ((i1 < 1) || (i1 > Y->size[0])) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, Y->size[0], &fl_emlrtBCI,
                  (emlrtCTX)sp);
              }

              loop_ub = Y->size[1];
              i1 = zi->size[0] * zi->size[1];
              zi->size[0] = 1;
              zi->size[1] = Y->size[1];
              emxEnsureCapacity_real_T(sp, zi, i1, &fj_emlrtRTEI);
              for (i1 = 0; i1 < loop_ub; i1++) {
                zi->data[i1] = Y->data[((int32_T)unit->data[b_i] + Y->size[0] *
                  i1) - 1];
              }

              size_tmp[0] = (*(int32_T (*)[2])zi->size)[0];
              size_tmp[1] = (*(int32_T (*)[2])zi->size)[1];
              iv[0] = (*(int32_T (*)[2])mi->size)[0];
              iv[1] = (*(int32_T (*)[2])mi->size)[1];
              emlrtSizeEqCheckNDR2012b(&size_tmp[0], &iv[0], &eb_emlrtECI,
                (emlrtCTX)sp);
              loop_ub = Y->size[1];
              i1 = zi->size[0] * zi->size[1];
              zi->size[0] = 1;
              zi->size[1] = Y->size[1];
              emxEnsureCapacity_real_T(sp, zi, i1, &ij_emlrtRTEI);
              for (i1 = 0; i1 < loop_ub; i1++) {
                zi->data[i1] = Y->data[((int32_T)unit->data[b_i] + Y->size[0] *
                  i1) - 1] - mi->data[i1];
              }

              st.site = &kr_emlrtRSI;
              b_st.site = &xc_emlrtRSI;
              c_dynamic_size_checks(&b_st, S, zi, S->size[1], zi->size[1]);
              b_st.site = &wc_emlrtRSI;
              c_mtimes(&b_st, S, zi, MD);

              /*  S=S-(S*(zi')*zi*S)/(1+zi*S*(zi')); */
              st.site = &jr_emlrtRSI;
              b_st.site = &xc_emlrtRSI;
              d_dynamic_size_checks(&b_st, zi, MD, zi->size[1], MD->size[0]);
              ksor = d_mtimes(zi, MD);
              i1 = r2->size[0] * r2->size[1];
              r2->size[0] = MD->size[0];
              r2->size[1] = MD->size[0];
              emxEnsureCapacity_real_T(sp, r2, i1, &kj_emlrtRTEI);
              loop_ub = MD->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                irank = MD->size[0];
                for (partialTrueCount = 0; partialTrueCount < irank;
                     partialTrueCount++) {
                  r2->data[partialTrueCount + r2->size[0] * i1] = MD->
                    data[partialTrueCount] * MD->data[i1] / (ksor + 1.0);
                }
              }

              size_tmp[0] = (*(int32_T (*)[2])S->size)[0];
              size_tmp[1] = (*(int32_T (*)[2])S->size)[1];
              iv[0] = (*(int32_T (*)[2])r2->size)[0];
              iv[1] = (*(int32_T (*)[2])r2->size)[1];
              emlrtSizeEqCheckNDR2012b(&size_tmp[0], &iv[0], &fb_emlrtECI,
                (emlrtCTX)sp);
              loop_ub = S->size[0] * S->size[1];
              for (i1 = 0; i1 < loop_ub; i1++) {
                S->data[i1] -= r2->data[i1];
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
            st.site = &ir_emlrtRSI;
            b_st.site = &xc_emlrtRSI;
            e_dynamic_size_checks(&b_st, Ym, S, Ym->size[1], S->size[0]);
            b_st.site = &wc_emlrtRSI;
            e_mtimes(&b_st, Ym, S, r2);
            size_tmp[0] = (*(int32_T (*)[2])r2->size)[0];
            size_tmp[1] = (*(int32_T (*)[2])r2->size)[1];
            iv[0] = (*(int32_T (*)[2])Ym->size)[0];
            iv[1] = (*(int32_T (*)[2])Ym->size)[1];
            emlrtSizeEqCheckNDR2012b(&size_tmp[0], &iv[0], &gb_emlrtECI,
              (emlrtCTX)sp);
            i1 = b_Y->size[0] * b_Y->size[1];
            b_Y->size[0] = r2->size[0];
            b_Y->size[1] = r2->size[1];
            emxEnsureCapacity_real_T(sp, b_Y, i1, &gj_emlrtRTEI);
            loop_ub = r2->size[0] * r2->size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              b_Y->data[i1] = r2->data[i1] * Ym->data[i1];
            }

            st.site = &ir_emlrtRSI;
            b_sum(&st, b_Y, MD);
            loop_ub = MD->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              MD->data[i1] *= c_mm - 1.0;
            }
          } else {
            st.site = &hr_emlrtRSI;
            b_st.site = &xc_emlrtRSI;
            e_dynamic_size_checks(&b_st, Ym, S, Ym->size[1], S->size[0]);
            b_st.site = &wc_emlrtRSI;
            e_mtimes(&b_st, Ym, S, R);
            st.site = &hr_emlrtRSI;
            b_bsxfun(&st, R, Ym, r2);
            st.site = &hr_emlrtRSI;
            b_sum(&st, r2, MD);
            loop_ub = MD->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              MD->data[i1] *= c_mm - 1.0;
            }
          }

          b_guard1 = true;
        } else {
          /*  In the initial step of the search the inverse is computed directly */
          if (c_mm > percn) {
            k = bsbT->size[0] - 1;
            trueCount = 0;
            for (b_i = 0; b_i <= k; b_i++) {
              if (bsbT->data[b_i]) {
                trueCount++;
              }
            }

            i1 = r5->size[0];
            r5->size[0] = trueCount;
            emxEnsureCapacity_int32_T(sp, r5, i1, &xh_emlrtRTEI);
            partialTrueCount = 0;
            for (b_i = 0; b_i <= k; b_i++) {
              if (bsbT->data[b_i]) {
                r5->data[partialTrueCount] = b_i + 1;
                partialTrueCount++;
              }
            }

            loop_ub = Ym->size[1];
            i1 = r2->size[0] * r2->size[1];
            r2->size[0] = r5->size[0];
            r2->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(sp, r2, i1, &gi_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              irank = r5->size[0];
              for (partialTrueCount = 0; partialTrueCount < irank;
                   partialTrueCount++) {
                if (r5->data[partialTrueCount] > Ym->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(r5->data[partialTrueCount], 1,
                    Ym->size[0], &am_emlrtBCI, (emlrtCTX)sp);
                }

                r2->data[partialTrueCount + r2->size[0] * i1] = Ym->data
                  [(r5->data[partialTrueCount] + Ym->size[0] * i1) - 1];
              }
            }

            k = bsbT->size[0] - 1;
            trueCount = 0;
            for (b_i = 0; b_i <= k; b_i++) {
              if (bsbT->data[b_i]) {
                trueCount++;
              }
            }

            i1 = r6->size[0];
            r6->size[0] = trueCount;
            emxEnsureCapacity_int32_T(sp, r6, i1, &xh_emlrtRTEI);
            partialTrueCount = 0;
            for (b_i = 0; b_i <= k; b_i++) {
              if (bsbT->data[b_i]) {
                r6->data[partialTrueCount] = b_i + 1;
                partialTrueCount++;
              }
            }

            st.site = &gr_emlrtRSI;
            loop_ub = Ym->size[1];
            i1 = Yb->size[0] * Yb->size[1];
            Yb->size[0] = r6->size[0];
            Yb->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(&st, Yb, i1, &ni_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              irank = r6->size[0];
              for (partialTrueCount = 0; partialTrueCount < irank;
                   partialTrueCount++) {
                if (r6->data[partialTrueCount] > Ym->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(r6->data[partialTrueCount], 1,
                    Ym->size[0], &fm_emlrtBCI, &st);
                }

                Yb->data[partialTrueCount + Yb->size[0] * i1] = Ym->data
                  [(r6->data[partialTrueCount] + Ym->size[0] * i1) - 1];
              }
            }

            b_st.site = &xc_emlrtRSI;
            e_dynamic_size_checks(&b_st, r2, Yb, r5->size[0], r6->size[0]);
            b_st.site = &wc_emlrtRSI;
            f_mtimes(&b_st, r2, Yb, R);
            st.site = &gr_emlrtRSI;
            inv(&st, R, S);
            k = bsbT->size[0] - 1;
            trueCount = 0;
            for (b_i = 0; b_i <= k; b_i++) {
              if (bsbT->data[b_i]) {
                trueCount++;
              }
            }

            i1 = r7->size[0];
            r7->size[0] = trueCount;
            emxEnsureCapacity_int32_T(sp, r7, i1, &xh_emlrtRTEI);
            partialTrueCount = 0;
            for (b_i = 0; b_i <= k; b_i++) {
              if (bsbT->data[b_i]) {
                r7->data[partialTrueCount] = b_i + 1;
                partialTrueCount++;
              }
            }

            loop_ub = Ym->size[1];
            i1 = b_Y->size[0] * b_Y->size[1];
            b_Y->size[0] = r7->size[0];
            b_Y->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(sp, b_Y, i1, &si_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              irank = r7->size[0];
              for (partialTrueCount = 0; partialTrueCount < irank;
                   partialTrueCount++) {
                if (r7->data[partialTrueCount] > Ym->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(r7->data[partialTrueCount], 1,
                    Ym->size[0], &hm_emlrtBCI, (emlrtCTX)sp);
                }

                b_Y->data[partialTrueCount + b_Y->size[0] * i1] = Ym->data
                  [(r7->data[partialTrueCount] + Ym->size[0] * i1) - 1];
              }
            }

            st.site = &fr_emlrtRSI;
            qr(&st, b_Y, Yb, R);
          } else {
            loop_ub = Ym->size[1];
            i1 = r2->size[0] * r2->size[1];
            r2->size[0] = bsb->size[0];
            r2->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(sp, r2, i1, &di_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              irank = bsb->size[0];
              for (partialTrueCount = 0; partialTrueCount < irank;
                   partialTrueCount++) {
                if (bsb->data[partialTrueCount] != (int32_T)muDoubleScalarFloor
                    (bsb->data[partialTrueCount])) {
                  emlrtIntegerCheckR2012b(bsb->data[partialTrueCount],
                    &v_emlrtDCI, (emlrtCTX)sp);
                }

                k = (int32_T)bsb->data[partialTrueCount];
                if ((k < 1) || (k > Ym->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(k, 1, Ym->size[0], &xl_emlrtBCI,
                    (emlrtCTX)sp);
                }

                r2->data[partialTrueCount + r2->size[0] * i1] = Ym->data[(k +
                  Ym->size[0] * i1) - 1];
              }
            }

            st.site = &er_emlrtRSI;
            loop_ub = Ym->size[1];
            i1 = Yb->size[0] * Yb->size[1];
            Yb->size[0] = bsb->size[0];
            Yb->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(&st, Yb, i1, &fi_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              irank = bsb->size[0];
              for (partialTrueCount = 0; partialTrueCount < irank;
                   partialTrueCount++) {
                k = (int32_T)bsb->data[partialTrueCount];
                if ((k < 1) || (k > Ym->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)bsb->
                    data[partialTrueCount], 1, Ym->size[0], &yl_emlrtBCI, &st);
                }

                Yb->data[partialTrueCount + Yb->size[0] * i1] = Ym->data[(k +
                  Ym->size[0] * i1) - 1];
              }
            }

            b_st.site = &xc_emlrtRSI;
            e_dynamic_size_checks(&b_st, r2, Yb, bsb->size[0], bsb->size[0]);
            b_st.site = &wc_emlrtRSI;
            f_mtimes(&b_st, r2, Yb, R);
            st.site = &er_emlrtRSI;
            inv(&st, R, S);
            loop_ub = Ym->size[1];
            i1 = b_Y->size[0] * b_Y->size[1];
            b_Y->size[0] = bsb->size[0];
            b_Y->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(sp, b_Y, i1, &ki_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              irank = bsb->size[0];
              for (partialTrueCount = 0; partialTrueCount < irank;
                   partialTrueCount++) {
                k = (int32_T)bsb->data[partialTrueCount];
                if ((k < 1) || (k > Ym->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)bsb->
                    data[partialTrueCount], 1, Ym->size[0], &cm_emlrtBCI,
                    (emlrtCTX)sp);
                }

                b_Y->data[partialTrueCount + b_Y->size[0] * i1] = Ym->data[(k +
                  Ym->size[0] * i1) - 1];
              }
            }

            st.site = &dr_emlrtRSI;
            qr(&st, b_Y, Yb, R);
          }

          st.site = &cr_emlrtRSI;
          i1 = MDltminT->size[0];
          MDltminT->size[0] = S->size[0] * S->size[1];
          emxEnsureCapacity_boolean_T(&st, MDltminT, i1, &oi_emlrtRTEI);
          loop_ub = S->size[0] * S->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            MDltminT->data[i1] = muDoubleScalarIsInf(S->data[i1]);
          }

          b_st.site = &gj_emlrtRSI;
          c_st.site = &hj_emlrtRSI;
          irank = combineVectorElements(&c_st, MDltminT);
          if (irank > 0) {
            st.site = &ncb_emlrtRSI;
            b_disp(&st, q_emlrt_marshallOut(&st, cv1), j_emlrt_marshallOut(&st,
                    cv8), &ec_emlrtMCI);
            st.site = &ccb_emlrtRSI;
            disp(&st, b_emlrt_marshallOut(&st, cv7), &fc_emlrtMCI);
            i = mmd->size[0] * mmd->size[1];
            mmd->size[0] = 1;
            mmd->size[1] = 1;
            emxEnsureCapacity_real_T(sp, mmd, i, &ri_emlrtRTEI);
            mmd->data[0] = rtNaN;
            i = Un->size[0] * Un->size[1];
            Un->size[0] = 1;
            Un->size[1] = 1;
            emxEnsureCapacity_real_T(sp, Un, i, &ti_emlrtRTEI);
            Un->data[0] = rtNaN;
            i = varargout_1->size[0] * varargout_1->size[1];
            varargout_1->size[0] = 1;
            varargout_1->size[1] = 1;
            emxEnsureCapacity_real_T(sp, varargout_1, i, &vi_emlrtRTEI);
            varargout_1->data[0] = rtNaN;
            exitg1 = true;
          } else {
            st.site = &br_emlrtRSI;
            if (R->size[1] != Ym->size[1]) {
              emlrtErrorWithMessageIdR2018a(&st, &bb_emlrtRTEI,
                "MATLAB:dimagree", "MATLAB:dimagree", 0);
            }

            b_st.site = &lv_emlrtRSI;
            mrdiv(&b_st, Ym, R, Yb);

            /*  Compute squared Mahalanobis distances */
            st.site = &ar_emlrtRSI;
            b_power(&st, Yb, r2);
            st.site = &ar_emlrtRSI;
            b_sum(&st, r2, MD);
            loop_ub = MD->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              MD->data[i1] *= c_mm - 1.0;
            }

            b_guard1 = true;
          }
        }

        if (b_guard1) {
          if (c_mm < n) {
            /*  MDmod contains modified Mahalanobis distances. The */
            /*  Mahalanobis distance of the units belonging to subset are set */
            /*  to inf because we need to consider the minimum of the units */
            /*  outside subset */
            i1 = unit->size[0];
            unit->size[0] = MD->size[0];
            emxEnsureCapacity_real_T(sp, unit, i1, &yi_emlrtRTEI);
            loop_ub = MD->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              unit->data[i1] = MD->data[i1];
            }

            if (c_mm > percn) {
              k = bsbT->size[0];
              for (b_i = 0; b_i < k; b_i++) {
                if (bsbT->data[b_i]) {
                  if (b_i + 1 > unit->size[0]) {
                    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, unit->size[0],
                      &km_emlrtBCI, (emlrtCTX)sp);
                  }

                  unit->data[b_i] = rtInf;
                }
              }
            } else {
              i1 = ii->size[0];
              ii->size[0] = bsb->size[0];
              emxEnsureCapacity_int32_T(sp, ii, i1, &bj_emlrtRTEI);
              loop_ub = bsb->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                if (bsb->data[i1] != (int32_T)muDoubleScalarFloor(bsb->data[i1]))
                {
                  emlrtIntegerCheckR2012b(bsb->data[i1], &y_emlrtDCI, (emlrtCTX)
                    sp);
                }

                partialTrueCount = (int32_T)bsb->data[i1];
                if ((partialTrueCount < 1) || (partialTrueCount > MD->size[0]))
                {
                  emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i1], 1,
                    MD->size[0], &jm_emlrtBCI, (emlrtCTX)sp);
                }

                ii->data[i1] = partialTrueCount;
              }

              loop_ub = ii->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                unit->data[ii->data[i1] - 1] = rtInf;
              }
            }

            /*  oldbsbF=bsbF; */
            i1 = oldbsbT->size[0];
            oldbsbT->size[0] = bsbT->size[0];
            emxEnsureCapacity_boolean_T(sp, oldbsbT, i1, &cj_emlrtRTEI);
            loop_ub = bsbT->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              oldbsbT->data[i1] = bsbT->data[i1];
            }

            /*  Take minimum distance of the units not belonging to subset */
            st.site = &yq_emlrtRSI;
            b_st.site = &ww_emlrtRSI;
            c_st.site = &xw_emlrtRSI;
            f_st.site = &yw_emlrtRSI;
            if (unit->size[0] < 1) {
              emlrtErrorWithMessageIdR2018a(&f_st, &emlrtRTEI,
                "Coder:toolbox:eml_min_or_max_varDimZero",
                "Coder:toolbox:eml_min_or_max_varDimZero", 0);
            }

            g_st.site = &ax_emlrtRSI;
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
              h_st.site = &kq_emlrtRSI;
              if (!muDoubleScalarIsNaN(unit->data[0])) {
                idx = 1;
              } else {
                idx = 0;
                i_st.site = &lq_emlrtRSI;
                if (unit->size[0] > 2147483646) {
                  j_st.site = &ad_emlrtRSI;
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
                h_st.site = &jq_emlrtRSI;
                ex = unit->data[idx - 1];
                nwhile = idx + 1;
                i_st.site = &mq_emlrtRSI;
                if ((idx + 1 <= unit->size[0]) && (unit->size[0] > 2147483646))
                {
                  j_st.site = &ad_emlrtRSI;
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
            i1 = MDltminT->size[0];
            MDltminT->size[0] = MD->size[0];
            emxEnsureCapacity_boolean_T(sp, MDltminT, i1, &jj_emlrtRTEI);
            loop_ub = MD->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              MDltminT->data[i1] = (MD->data[i1] <= ex);
            }

            /*  MDltminbsb = n x 1 Boolean vector (if m>percn) or */
            /*  int32 vector containing the units which certainly remain inside subset */
            /*  i.e. those which have a true in MDltminT and belong to previous subset */
            if (c_mm > percn) {
              if (MDltminT->size[0] != bsbT->size[0]) {
                emlrtSizeEqCheck1DR2012b(MDltminT->size[0], bsbT->size[0],
                  &hb_emlrtECI, (emlrtCTX)sp);
              }

              i1 = MDltminbsb->size[0];
              MDltminbsb->size[0] = MDltminT->size[0];
              emxEnsureCapacity_boolean_T(sp, MDltminbsb, i1, &mj_emlrtRTEI);
              loop_ub = MDltminT->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                MDltminbsb->data[i1] = (MDltminT->data[i1] && bsbT->data[i1]);
              }
            } else {
              i1 = MDltminbsb->size[0];
              MDltminbsb->size[0] = bsb->size[0];
              emxEnsureCapacity_boolean_T(sp, MDltminbsb, i1, &lj_emlrtRTEI);
              loop_ub = bsb->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                if (bsb->data[i1] != (int32_T)muDoubleScalarFloor(bsb->data[i1]))
                {
                  emlrtIntegerCheckR2012b(bsb->data[i1], &ab_emlrtDCI, (emlrtCTX)
                    sp);
                }

                partialTrueCount = (int32_T)bsb->data[i1];
                if ((partialTrueCount < 1) || (partialTrueCount > MDltminT->
                     size[0])) {
                  emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1,
                    MDltminT->size[0], &nm_emlrtBCI, (emlrtCTX)sp);
                }

                MDltminbsb->data[i1] = MDltminT->data[partialTrueCount - 1];
              }
            }

            /*  Find number of units of old subset which have a MD <= minMD */
            st.site = &xq_emlrtRSI;
            b_st.site = &gj_emlrtRSI;
            c_st.site = &hj_emlrtRSI;
            irank = combineVectorElements(&c_st, MDltminbsb);

            /*  rankgap is the difference between m+1 (size of new size) and */
            /*  the number of units of old subset which have a distance <= */
            /*  minMD. For example if rankgap is =3, three more units must be */
            /*  added. */
            rankgap = (c_mm + 1.0) - (real_T)irank;
            if (rankgap == 1.0) {
              /*  Just one new unit entered subset */
              i1 = unit->size[0];
              unit->size[0] = 1;
              emxEnsureCapacity_real_T(sp, unit, i1, &pj_emlrtRTEI);
              unit->data[0] = idx;

              /*  Compute new bsbT and new bsb */
              if (c_mm <= percn) {
                /*  new bsb is equal to oldbsb plus unit which just entered */
                i1 = bsb->size[0];
                partialTrueCount = bsb->size[0];
                bsb->size[0]++;
                emxEnsureCapacity_real_T(sp, bsb, partialTrueCount,
                  &xh_emlrtRTEI);
                bsb->data[i1] = idx;
              }

              /*  bsbT is equal to old bsbT after adding a single true in */
              /*  correspondence of the unit which entered subset */
              if ((idx < 1) || (idx > bsbT->size[0])) {
                emlrtDynamicBoundsCheckR2012b(idx, 1, bsbT->size[0],
                  &pm_emlrtBCI, (emlrtCTX)sp);
              }

              bsbT->data[idx - 1] = true;
            } else if ((rankgap > 1.0) && (rankgap <= 10.0)) {
              /*  MDmod is the vector of Mahalanobis distance which will have */
              /*  a Inf in correspondence of the units of old subset which */
              /*  had a MD smaller than minMD */
              i1 = unit->size[0];
              unit->size[0] = MD->size[0];
              emxEnsureCapacity_real_T(sp, unit, i1, &rj_emlrtRTEI);
              loop_ub = MD->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                unit->data[i1] = MD->data[i1];
              }

              /*  Find bsbrini, i.e. the vector which will contain the */
              /*  units which remain in the subset in the next step */
              /*  Note that bsbrini is defined using Boolean vector bsbT */
              /*  when mm is greater than percn otherwise it uses numerical */
              /*  vector bsb */
              if (c_mm <= percn) {
                /*  bsbrini = vector containing the list of the units */
                /*  which certainly remain inside subset (i.e. those */
                /*  which have a MD smaller than minMD). In order to find */
                /*  bsbr we must check whether the k units which will be */
                /*  included were or not in the previous subset */
                loop_ub = bsb->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  if (bsb->data[i1] != (int32_T)muDoubleScalarFloor(bsb->data[i1]))
                  {
                    emlrtIntegerCheckR2012b(bsb->data[i1], &cb_emlrtDCI,
                      (emlrtCTX)sp);
                  }

                  partialTrueCount = (int32_T)bsb->data[i1];
                  if ((partialTrueCount < 1) || (partialTrueCount >
                       MDltminT->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1,
                      MDltminT->size[0], &rm_emlrtBCI, (emlrtCTX)sp);
                  }
                }

                k = bsb->size[0] - 1;
                trueCount = 0;
                for (b_i = 0; b_i <= k; b_i++) {
                  if (MDltminT->data[(int32_T)bsb->data[b_i] - 1]) {
                    trueCount++;
                  }
                }

                i1 = bsbrini->size[0];
                bsbrini->size[0] = trueCount;
                emxEnsureCapacity_uint32_T(sp, bsbrini, i1, &xh_emlrtRTEI);
                partialTrueCount = 0;
                for (b_i = 0; b_i <= k; b_i++) {
                  if (MDltminT->data[(int32_T)bsb->data[b_i] - 1]) {
                    if (b_i + 1 > bsb->size[0]) {
                      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, bsb->size[0],
                        &tm_emlrtBCI, (emlrtCTX)sp);
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

                i1 = unitout->size[0];
                unitout->size[0] = trueCount;
                emxEnsureCapacity_real_T(sp, unitout, i1, &xh_emlrtRTEI);
                partialTrueCount = 0;
                for (b_i = 0; b_i <= k; b_i++) {
                  if (!MDltminT->data[(int32_T)bsb->data[b_i] - 1]) {
                    if (b_i + 1 > bsb->size[0]) {
                      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, bsb->size[0],
                        &wm_emlrtBCI, (emlrtCTX)sp);
                    }

                    unitout->data[partialTrueCount] = bsb->data[b_i];
                    partialTrueCount++;
                  }
                }

                i1 = ii->size[0];
                ii->size[0] = bsbrini->size[0];
                emxEnsureCapacity_int32_T(sp, ii, i1, &yj_emlrtRTEI);
                loop_ub = bsbrini->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  if (((int32_T)bsbrini->data[i1] < 1) || ((int32_T)
                       bsbrini->data[i1] > MD->size[0])) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)bsbrini->data[i1], 1,
                      MD->size[0], &vm_emlrtBCI, (emlrtCTX)sp);
                  }

                  ii->data[i1] = (int32_T)bsbrini->data[i1];
                }

                loop_ub = ii->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  unit->data[ii->data[i1] - 1] = rtInf;
                }
              } else {
                /*  bsbriniT = Boolean vector which is true if the */
                /*  corresponding unit belonged to previous subset and */
                /*  has a MD smaller than minMD. This vector is nothing */
                /*  but the Boolean version of bsbrini. */
                /*  bsbriniT=MDltminT & bsbT; */
                i1 = bsbriniT->size[0];
                bsbriniT->size[0] = MDltminbsb->size[0];
                emxEnsureCapacity_boolean_T(sp, bsbriniT, i1, &vj_emlrtRTEI);
                loop_ub = MDltminbsb->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  bsbriniT->data[i1] = MDltminbsb->data[i1];
                }

                k = MDltminbsb->size[0];
                for (b_i = 0; b_i < k; b_i++) {
                  if (MDltminbsb->data[b_i]) {
                    if (b_i + 1 > unit->size[0]) {
                      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, unit->size[0],
                        &sm_emlrtBCI, (emlrtCTX)sp);
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
              i1 = (int32_T)rankgap;
              for (loop_ub = 0; loop_ub < i1; loop_ub++) {
                st.site = &wq_emlrtRSI;
                b_st.site = &ww_emlrtRSI;
                c_st.site = &xw_emlrtRSI;
                f_st.site = &yw_emlrtRSI;
                if (unit->size[0] < 1) {
                  emlrtErrorWithMessageIdR2018a(&f_st, &emlrtRTEI,
                    "Coder:toolbox:eml_min_or_max_varDimZero",
                    "Coder:toolbox:eml_min_or_max_varDimZero", 0);
                }

                g_st.site = &ax_emlrtRSI;
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
                  h_st.site = &kq_emlrtRSI;
                  if (!muDoubleScalarIsNaN(unit->data[0])) {
                    idx = 1;
                  } else {
                    idx = 0;
                    i_st.site = &lq_emlrtRSI;
                    if (unit->size[0] > 2147483646) {
                      j_st.site = &ad_emlrtRSI;
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
                    h_st.site = &jq_emlrtRSI;
                    a = unit->data[idx - 1];
                    nwhile = idx + 1;
                    i_st.site = &mq_emlrtRSI;
                    if ((idx + 1 <= unit->size[0]) && (unit->size[0] >
                         2147483646)) {
                      j_st.site = &ad_emlrtRSI;
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
                    &bn_emlrtBCI, (emlrtCTX)sp);
                }

                if (bsbT->data[idx - 1]) {
                  if (c_mm <= percn) {
                    if ((zz + 1 < 1) || (zz + 1 > 10)) {
                      emlrtDynamicBoundsCheckR2012b(zz + 1, 1, 10, &il_emlrtBCI,
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
                            unitout->size[0], &en_emlrtBCI, (emlrtCTX)sp);
                        }

                        unitout->data[partialTrueCount] = unitout->data[b_i];
                        partialTrueCount++;
                      }
                    }

                    partialTrueCount = unitout->size[0];
                    unitout->size[0] = trueCount;
                    emxEnsureCapacity_real_T(sp, unitout, partialTrueCount,
                      &xh_emlrtRTEI);
                  } else {
                    if (idx > bsbriniT->size[0]) {
                      emlrtDynamicBoundsCheckR2012b(idx, 1, bsbriniT->size[0],
                        &cn_emlrtBCI, (emlrtCTX)sp);
                    }

                    bsbriniT->data[idx - 1] = true;
                  }
                } else {
                  if ((lunit + 1 < 1) || (lunit + 1 > 10)) {
                    emlrtDynamicBoundsCheckR2012b(lunit + 1, 1, 10, &gl_emlrtBCI,
                      (emlrtCTX)sp);
                  }

                  unitadd[lunit] = idx;
                  lunit++;
                }

                /*  disp(posunit(posncl1)) */
                if (idx > unit->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(idx, 1, unit->size[0],
                    &dn_emlrtBCI, (emlrtCTX)sp);
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
                emlrtDynamicBoundsCheckR2012b(lunit, 1, 10, &hl_emlrtBCI,
                  (emlrtCTX)sp);
              }

              i1 = unit->size[0];
              unit->size[0] = lunit;
              emxEnsureCapacity_real_T(sp, unit, i1, &ak_emlrtRTEI);
              for (i1 = 0; i1 < lunit; i1++) {
                unit->data[i1] = unitadd[i1];
              }

              /*  bsbr = vector containing all units which enter the new */
              /*  subset and were also in the previous subset */
              /*  bsb = units forming new subset. */
              if (c_mm <= percn) {
                if (1 > zz) {
                  zz = 0;
                } else if (zz > 10) {
                  emlrtDynamicBoundsCheckR2012b(zz, 1, 10, &jl_emlrtBCI,
                    (emlrtCTX)sp);
                }

                i1 = bsbr->size[0];
                bsbr->size[0] = bsbrini->size[0] + zz;
                emxEnsureCapacity_int32_T(sp, bsbr, i1, &ck_emlrtRTEI);
                loop_ub = bsbrini->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  bsbr->data[i1] = (int32_T)bsbrini->data[i1];
                }

                for (i1 = 0; i1 < zz; i1++) {
                  bsbr->data[i1 + bsbrini->size[0]] = bsbradd[i1];
                }

                i1 = bsb->size[0];
                bsb->size[0] = bsbr->size[0] + lunit;
                emxEnsureCapacity_real_T(sp, bsb, i1, &dk_emlrtRTEI);
                loop_ub = bsbr->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  bsb->data[i1] = bsbr->data[i1];
                }

                for (i1 = 0; i1 < lunit; i1++) {
                  bsb->data[i1 + bsbr->size[0]] = unitadd[i1];
                }

                i1 = bsbT->size[0];
                bsbT->size[0] = n;
                emxEnsureCapacity_boolean_T(sp, bsbT, i1, &gk_emlrtRTEI);
                for (i1 = 0; i1 < n; i1++) {
                  bsbT->data[i1] = false;
                }

                i1 = ii->size[0];
                ii->size[0] = bsb->size[0];
                emxEnsureCapacity_int32_T(sp, ii, i1, &ik_emlrtRTEI);
                loop_ub = bsb->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  partialTrueCount = (int32_T)bsb->data[i1];
                  if ((partialTrueCount < 1) || (partialTrueCount > n)) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i1], 1, n,
                      &xm_emlrtBCI, (emlrtCTX)sp);
                  }

                  ii->data[i1] = partialTrueCount;
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
                  partialTrueCount = unitadd[i1];
                  if ((partialTrueCount < 1) || (partialTrueCount >
                       bsbriniT->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1,
                      bsbriniT->size[0], &ym_emlrtBCI, (emlrtCTX)sp);
                  }

                  d_tmp_data[i1] = partialTrueCount;
                }

                for (i1 = 0; i1 < lunit; i1++) {
                  bsbriniT->data[d_tmp_data[i1] - 1] = true;
                }

                i1 = bsbT->size[0];
                bsbT->size[0] = bsbriniT->size[0];
                emxEnsureCapacity_boolean_T(sp, bsbT, i1, &fk_emlrtRTEI);
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
              i1 = unit->size[0];
              unit->size[0] = MD->size[0];
              emxEnsureCapacity_real_T(sp, unit, i1, &sj_emlrtRTEI);
              loop_ub = MD->size[0] - 1;
              for (i1 = 0; i1 <= loop_ub; i1++) {
                unit->data[i1] = MD->data[i1];
              }

              st.site = &vq_emlrtRSI;
              ksor = quickselectFS(&st, unit, c_mm + 1.0, idx);
              i1 = bsbT->size[0];
              bsbT->size[0] = MD->size[0];
              emxEnsureCapacity_boolean_T(sp, bsbT, i1, &tj_emlrtRTEI);
              loop_ub = MD->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                bsbT->data[i1] = (MD->data[i1] <= ksor);
              }

              st.site = &uq_emlrtRSI;
              b_st.site = &gj_emlrtRSI;
              c_st.site = &hj_emlrtRSI;
              irank = combineVectorElements(&c_st, bsbT);
              if (irank == (int32_T)c_mm + 1) {
                if (c_mm <= percn) {
                  k = bsbT->size[0] - 1;
                  trueCount = 0;
                  for (b_i = 0; b_i <= k; b_i++) {
                    if (bsbT->data[b_i]) {
                      trueCount++;
                    }
                  }

                  i1 = bsb->size[0];
                  bsb->size[0] = trueCount;
                  emxEnsureCapacity_real_T(sp, bsb, i1, &xh_emlrtRTEI);
                  partialTrueCount = 0;
                  for (b_i = 0; b_i <= k; b_i++) {
                    if (bsbT->data[b_i]) {
                      if (b_i + 1 > seq->size[0]) {
                        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                          &um_emlrtBCI, (emlrtCTX)sp);
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
                      &bl_emlrtBCI, (emlrtCTX)sp);
                  }
                }

                k = MD->size[0];
                for (b_i = 0; b_i < k; b_i++) {
                  if ((MD->data[b_i] == ksor) && (b_i + 1 > seq->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                      &al_emlrtBCI, (emlrtCTX)sp);
                  }
                }

                k = MD->size[0];
                trueCount = 0;
                for (b_i = 0; b_i < k; b_i++) {
                  if (MD->data[b_i] < ksor) {
                    trueCount++;
                  }
                }

                d = (c_mm + 1.0) - (real_T)trueCount;
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
                    emlrtDynamicBoundsCheckR2012b(1, 1, trueCount, &kl_emlrtBCI,
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
                      &ll_emlrtBCI, (emlrtCTX)sp);
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

                size_tmp[0] = 1;
                size_tmp[1] = loop_ub;
                st.site = &tq_emlrtRSI;
                indexShapeCheck(&st, trueCount, size_tmp);
                k = MD->size[0] - 1;
                trueCount = 0;
                for (b_i = 0; b_i <= k; b_i++) {
                  if (MD->data[b_i] < ksor) {
                    trueCount++;
                  }
                }

                i1 = r9->size[0];
                r9->size[0] = trueCount;
                emxEnsureCapacity_int32_T(sp, r9, i1, &xh_emlrtRTEI);
                partialTrueCount = 0;
                irank = MD->size[0] - 1;
                trueCount = 0;
                for (b_i = 0; b_i <= k; b_i++) {
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
                emxEnsureCapacity_int32_T(sp, r10, i1, &xh_emlrtRTEI);
                partialTrueCount = 0;
                for (b_i = 0; b_i <= irank; b_i++) {
                  if (MD->data[b_i] == ksor) {
                    r10->data[partialTrueCount] = b_i + 1;
                    partialTrueCount++;
                  }
                }

                i1 = bsb->size[0];
                bsb->size[0] = r9->size[0] + loop_ub;
                emxEnsureCapacity_real_T(sp, bsb, i1, &ek_emlrtRTEI);
                irank = r9->size[0];
                for (i1 = 0; i1 < irank; i1++) {
                  bsb->data[i1] = seq->data[r9->data[i1] - 1];
                }

                for (i1 = 0; i1 < loop_ub; i1++) {
                  bsb->data[i1 + r9->size[0]] = seq->data[r10->data[i1] - 1];
                }

                i1 = bsbT->size[0];
                bsbT->size[0] = n;
                emxEnsureCapacity_boolean_T(sp, bsbT, i1, &hk_emlrtRTEI);
                for (i1 = 0; i1 < n; i1++) {
                  bsbT->data[i1] = false;
                }

                i1 = ii->size[0];
                ii->size[0] = bsb->size[0];
                emxEnsureCapacity_int32_T(sp, ii, i1, &jk_emlrtRTEI);
                loop_ub = bsb->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  partialTrueCount = (int32_T)bsb->data[i1];
                  if (bsb->data[i1] != partialTrueCount) {
                    emlrtIntegerCheckR2012b(bsb->data[i1], &db_emlrtDCI,
                      (emlrtCTX)sp);
                  }

                  if (partialTrueCount > n) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i1], 1, n,
                      &an_emlrtBCI, (emlrtCTX)sp);
                  }

                  ii->data[i1] = partialTrueCount;
                }

                loop_ub = ii->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  bsbT->data[ii->data[i1] - 1] = true;
                }
              }

              /*  unit = vector containing units which just entered subset; */
              i1 = MDltminT->size[0];
              MDltminT->size[0] = oldbsbT->size[0];
              emxEnsureCapacity_boolean_T(sp, MDltminT, i1, &wj_emlrtRTEI);
              loop_ub = oldbsbT->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                MDltminT->data[i1] = !oldbsbT->data[i1];
              }

              if (bsbT->size[0] != MDltminT->size[0]) {
                emlrtSizeEqCheck1DR2012b(bsbT->size[0], MDltminT->size[0],
                  &ib_emlrtECI, (emlrtCTX)sp);
              }

              st.site = &sq_emlrtRSI;
              i1 = MDltminT->size[0];
              MDltminT->size[0] = bsbT->size[0];
              emxEnsureCapacity_boolean_T(&st, MDltminT, i1, &xj_emlrtRTEI);
              loop_ub = bsbT->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                MDltminT->data[i1] = (bsbT->data[i1] && MDltminT->data[i1]);
              }

              b_st.site = &nd_emlrtRSI;
              eml_find(&b_st, MDltminT, ii);
              i1 = unit->size[0];
              unit->size[0] = ii->size[0];
              emxEnsureCapacity_real_T(&st, unit, i1, &bk_emlrtRTEI);
              loop_ub = ii->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                unit->data[i1] = ii->data[i1];
              }
            }

            if (c_mm >= init1) {
              /*  mmd contains minimum of Mahalanobis distances among */
              /*  the units which are not in the subset at step m */
              d = (c_mm - init1) + 1.0;
              a = (int32_T)muDoubleScalarFloor(d);
              if (d != a) {
                emlrtIntegerCheckR2012b(d, &bb_emlrtDCI, (emlrtCTX)sp);
              }

              if (((int32_T)d < 1) || ((int32_T)d > mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, mmd->size[0],
                  &qm_emlrtBCI, (emlrtCTX)sp);
              }

              mmd->data[((int32_T)d + mmd->size[0]) - 1] = ex;
              if (d != a) {
                emlrtIntegerCheckR2012b(d, &bb_emlrtDCI, (emlrtCTX)sp);
              }

              if (((int32_T)d < 1) || ((int32_T)d > mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, mmd->size[0],
                  &qm_emlrtBCI, (emlrtCTX)sp);
              }

              st.site = &rq_emlrtRSI;
              x = &mmd->data[((int32_T)d + mmd->size[0]) - 1];
              if (*x < 0.0) {
                emlrtErrorWithMessageIdR2018a(&st, &x_emlrtRTEI,
                  "Coder:toolbox:ElFunDomainError",
                  "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
              }

              *x = muDoubleScalarSqrt(*x);
            }

            /*  store mean of units forming old subset */
            i1 = meoldbsb->size[0] * meoldbsb->size[1];
            meoldbsb->size[0] = 1;
            meoldbsb->size[1] = ym->size[1];
            emxEnsureCapacity_real_T(sp, meoldbsb, i1, &uj_emlrtRTEI);
            loop_ub = ym->size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              meoldbsb->data[i1] = ym->data[i1];
            }

            lunit = unit->size[0];
            if (c_mm >= init1) {
              if (unit->size[0] <= 10) {
                if (2 > unit->size[0] + 1) {
                  i1 = -1;
                  partialTrueCount = -1;
                } else {
                  i1 = 0;
                  partialTrueCount = unit->size[0];
                }

                d = (c_mm - init1) + 1.0;
                if (d != (int32_T)muDoubleScalarFloor(d)) {
                  emlrtIntegerCheckR2012b(d, &n_emlrtDCI, (emlrtCTX)sp);
                }

                if (((int32_T)d < 1) || ((int32_T)d > Un->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Un->size[0],
                    &ol_emlrtBCI, (emlrtCTX)sp);
                }

                size_tmp[0] = 1;
                irank = partialTrueCount - i1;
                size_tmp[1] = irank;
                emlrtSubAssignSizeCheckR2012b(&size_tmp[0], 2, &unit->size[0], 1,
                  &lb_emlrtECI, (emlrtCTX)sp);
                for (partialTrueCount = 0; partialTrueCount < irank;
                     partialTrueCount++) {
                  Un->data[((int32_T)d + Un->size[0] * ((i1 + partialTrueCount)
                             + 1)) - 1] = unit->data[partialTrueCount];
                }
              } else {
                if (varargin_6) {
                  st.site = &qq_emlrtRSI;
                  int2str(&st, c_mm, tmp_data, size_tmp);
                  tmp_size[0] = 1;
                  tmp_size[1] = size_tmp[1] + 44;
                  for (i1 = 0; i1 < 44; i1++) {
                    b_tmp_data[i1] = cv9[i1];
                  }

                  loop_ub = size_tmp[1];
                  if (0 <= loop_ub - 1) {
                    memcpy(&b_tmp_data[44], &tmp_data[0], loop_ub * sizeof
                           (char_T));
                  }

                  st.site = &fdb_emlrtRSI;
                  disp(&st, w_emlrt_marshallOut(&st, b_tmp_data, tmp_size),
                       &gc_emlrtMCI);
                  st.site = &pq_emlrtRSI;
                  int2str(&st, unit->size[0], tmp_data, size_tmp);
                  b_tmp_size[0] = 1;
                  b_tmp_size[1] = size_tmp[1] + 30;
                  for (i1 = 0; i1 < 30; i1++) {
                    c_tmp_data[i1] = cv10[i1];
                  }

                  loop_ub = size_tmp[1];
                  if (0 <= loop_ub - 1) {
                    memcpy(&c_tmp_data[30], &tmp_data[0], loop_ub * sizeof
                           (char_T));
                  }

                  st.site = &edb_emlrtRSI;
                  disp(&st, w_emlrt_marshallOut(&st, c_tmp_data, b_tmp_size),
                       &hc_emlrtMCI);
                }

                st.site = &oq_emlrtRSI;
                b_indexShapeCheck(&st, unit->size[0]);
                d = (c_mm - init1) + 1.0;
                if (d != (int32_T)muDoubleScalarFloor(d)) {
                  emlrtIntegerCheckR2012b(d, &o_emlrtDCI, (emlrtCTX)sp);
                }

                if (((int32_T)d < 1) || ((int32_T)d > Un->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Un->size[0],
                    &pl_emlrtBCI, (emlrtCTX)sp);
                }

                size_tmp[0] = 1;
                size_tmp[1] = 10;
                trueCount = 10;
                emlrtSubAssignSizeCheckR2012b(&size_tmp[0], 2, &trueCount, 1,
                  &mb_emlrtECI, (emlrtCTX)sp);
                for (i1 = 0; i1 < 10; i1++) {
                  Un->data[((int32_T)d + Un->size[0] * (i1 + 1)) - 1] =
                    unit->data[i1];
                }
              }
            }
          }

          b_mm++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtCTX)sp);
          }
        }
      }
    }
  }

  if (guard1) {
    st.site = &tcb_emlrtRSI;
    b_disp(&st, q_emlrt_marshallOut(&st, cv1), n_emlrt_marshallOut(&st, cv6),
           &cc_emlrtMCI);
    st.site = &bcb_emlrtRSI;
    disp(&st, b_emlrt_marshallOut(&st, cv7), &dc_emlrtMCI);
    i = mmd->size[0] * mmd->size[1];
    mmd->size[0] = 1;
    mmd->size[1] = 1;
    emxEnsureCapacity_real_T(sp, mmd, i, &sh_emlrtRTEI);
    mmd->data[0] = rtNaN;
    i = Un->size[0] * Un->size[1];
    Un->size[0] = 1;
    Un->size[1] = 1;
    emxEnsureCapacity_real_T(sp, Un, i, &th_emlrtRTEI);
    Un->data[0] = rtNaN;
    i = varargout_1->size[0] * varargout_1->size[1];
    varargout_1->size[0] = 1;
    varargout_1->size[1] = 1;
    emxEnsureCapacity_real_T(sp, varargout_1, i, &uh_emlrtRTEI);
    varargout_1->data[0] = rtNaN;
  }

  emxFree_real_T(&mm);
  emxFree_real_T(&b_Y);
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
  emxFree_real_T(&bsbsteps);
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

void b_FSMmmd(const emlrtStack *sp, const emxArray_real_T *Y, emxArray_real_T
              *bsb, real_T varargin_2, boolean_T varargin_6, emxArray_real_T
              *mmd, emxArray_real_T *Un)
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
  emxArray_int32_T *r3;
  emxArray_int32_T *r4;
  emxArray_int32_T *r5;
  emxArray_int32_T *r6;
  emxArray_int32_T *r7;
  emxArray_int32_T *r8;
  emxArray_int32_T *r9;
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
  emxArray_real_T *r2;
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
  int32_T d_tmp_data[10];
  int32_T unitadd[10];
  int32_T b_tmp_size[2];
  int32_T c_Y[2];
  int32_T iv[2];
  int32_T tmp_size[2];
  int32_T b_i;
  int32_T i;
  int32_T i1;
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
  char_T tmp_data[310];
  char_T b_tmp_data[54];
  char_T c_tmp_data[40];
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
  emxInit_boolean_T(sp, &bsbT, 1, &tg_emlrtRTEI, true);

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
  emxEnsureCapacity_boolean_T(sp, bsbT, i, &qg_emlrtRTEI);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[i] = (bsb->data[i] == 0.0);
  }

  emxInit_real_T(sp, &Yb, 2, &wh_emlrtRTEI, true);
  emxInit_real_T(sp, &b_Y, 2, &rh_emlrtRTEI, true);
  st.site = &js_emlrtRSI;
  if (ifWhileCond(&st, bsbT)) {
    Ra = true;
    nwhile = 1;
    while (Ra && (nwhile < 100)) {
      /*  Extract a random sample of size v+1 */
      st.site = &is_emlrtRSI;
      randsample(&st, n, (real_T)v + 1.0, bsb);

      /*  Check if the var-cov matrix of the random sample is full (i.e =v) */
      st.site = &hs_emlrtRSI;
      loop_ub = Y->size[1];
      i = b_Y->size[0] * b_Y->size[1];
      b_Y->size[0] = bsb->size[0];
      b_Y->size[1] = Y->size[1];
      emxEnsureCapacity_real_T(&st, b_Y, i, &rg_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        irank = bsb->size[0];
        for (i1 = 0; i1 < irank; i1++) {
          partialTrueCount = (int32_T)bsb->data[i1];
          if ((partialTrueCount < 1) || (partialTrueCount > Y->size[0])) {
            emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1, Y->size[0],
              &ql_emlrtBCI, &st);
          }

          b_Y->data[i1 + b_Y->size[0] * i] = Y->data[(partialTrueCount + Y->
            size[0] * i) - 1];
        }
      }

      b_st.site = &hs_emlrtRSI;
      cov(&b_st, b_Y, Yb);
      b_st.site = &ee_emlrtRSI;
      irank = local_rank(&b_st, Yb);
      Ra = (irank < v);
      nwhile++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }

    if (nwhile == 100) {
      st.site = &vcb_emlrtRSI;
      b_disp(&st, q_emlrt_marshallOut(&st, cv1), u_emlrt_marshallOut(&st, cv2),
             &ac_emlrtMCI);
    }
  }

  emxInit_real_T(sp, &ym, 2, &ci_emlrtRTEI, true);

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
    emxEnsureCapacity_real_T(sp, ym, i, &vb_emlrtRTEI);
    loop_ub = Y->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      ym->data[i] = (real_T)i + 1.0;
    }
  }

  emxInit_real_T(sp, &seq, 1, &kk_emlrtRTEI, true);
  i = seq->size[0];
  seq->size[0] = ym->size[1];
  emxEnsureCapacity_real_T(sp, seq, i, &sg_emlrtRTEI);
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
  emxEnsureCapacity_boolean_T(sp, bsbT, i, &tg_emlrtRTEI);
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[i] = false;
  }

  emxInit_int32_T(sp, &ii, 1, &kg_emlrtRTEI, true);
  i = ii->size[0];
  ii->size[0] = bsb->size[0];
  emxEnsureCapacity_int32_T(sp, ii, i, &ug_emlrtRTEI);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (bsb->data[i] != (int32_T)muDoubleScalarFloor(bsb->data[i])) {
      emlrtIntegerCheckR2012b(bsb->data[i], &p_emlrtDCI, (emlrtCTX)sp);
    }

    i1 = (int32_T)bsb->data[i];
    if ((i1 < 1) || (i1 > Y->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i], 1, Y->size[0],
        &rl_emlrtBCI, (emlrtCTX)sp);
    }

    ii->data[i] = i1;
  }

  loop_ub = ii->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[ii->data[i] - 1] = true;
  }

  emxInit_real_T(sp, &S, 2, &vg_emlrtRTEI, true);

  /*  Initialization for Matlab coder */
  rankgap = 0.0;
  i = S->size[0] * S->size[1];
  S->size[0] = Y->size[1];
  S->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(sp, S, i, &vg_emlrtRTEI);
  loop_ub = Y->size[1] * Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    S->data[i] = 0.0;
  }

  emxInit_real_T(sp, &meoldbsb, 2, &wg_emlrtRTEI, true);
  i = meoldbsb->size[0] * meoldbsb->size[1];
  meoldbsb->size[0] = 1;
  meoldbsb->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(sp, meoldbsb, i, &wg_emlrtRTEI);
  loop_ub = Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    meoldbsb->data[i] = 0.0;
  }

  emxInit_boolean_T(sp, &oldbsbT, 1, &xg_emlrtRTEI, true);
  i = oldbsbT->size[0];
  oldbsbT->size[0] = bsbT->size[0];
  emxEnsureCapacity_boolean_T(sp, oldbsbT, i, &xg_emlrtRTEI);
  loop_ub = bsbT->size[0];
  for (i = 0; i < loop_ub; i++) {
    oldbsbT->data[i] = bsbT->data[i];
  }

  emxInit_int32_T(sp, &bsbr, 1, &yg_emlrtRTEI, true);
  i = bsbr->size[0];
  bsbr->size[0] = Y->size[0];
  emxEnsureCapacity_int32_T(sp, bsbr, i, &yg_emlrtRTEI);
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbr->data[i] = 0;
  }

  emxInit_real_T(sp, &unitout, 1, &ah_emlrtRTEI, true);
  i = unitout->size[0];
  unitout->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(sp, unitout, i, &ah_emlrtRTEI);
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    unitout->data[i] = 0.0;
  }

  emxInit_boolean_T(sp, &bsbriniT, 1, &bh_emlrtRTEI, true);
  i = bsbriniT->size[0];
  bsbriniT->size[0] = bsbT->size[0];
  emxEnsureCapacity_boolean_T(sp, bsbriniT, i, &bh_emlrtRTEI);
  loop_ub = bsbT->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbriniT->data[i] = bsbT->data[i];
  }

  emxInit_uint32_T(sp, &bsbrini, 1, &ch_emlrtRTEI, true);
  i = bsbrini->size[0];
  bsbrini->size[0] = Y->size[0];
  emxEnsureCapacity_uint32_T(sp, bsbrini, i, &ch_emlrtRTEI);
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbrini->data[i] = 0U;
  }

  ini0 = bsb->size[0];

  /*  check init */
  init1 = varargin_2;
  if (varargin_2 < (real_T)Y->size[1] + 1.0) {
    st.site = &gs_emlrtRSI;
    b_st.site = &bt_emlrtRSI;
    c_st.site = &dcb_emlrtRSI;
    d_st.site = &ecb_emlrtRSI;
    e_st.site = &wcb_emlrtRSI;
    g_emlrt_marshallIn(&c_st, d_feval(&c_st, c_emlrt_marshallOut(&c_st, b_cv),
      e_emlrt_marshallOut(1.0), d_emlrt_marshallOut(&d_st, b_cv1),
      r_emlrt_marshallOut(&e_st, cv4), &ic_emlrtMCI), "<output of feval>");
    init1 = (real_T)Y->size[1] + 1.0;
  } else if (varargin_2 < bsb->size[0]) {
    st.site = &bdb_emlrtRSI;
    disp(&st, v_emlrt_marshallOut(&st, cv3), &bc_emlrtMCI);
    init1 = bsb->size[0];
  } else if (varargin_2 >= Y->size[0]) {
    st.site = &fs_emlrtRSI;
    b_st.site = &bt_emlrtRSI;
    c_st.site = &dcb_emlrtRSI;
    d_st.site = &ecb_emlrtRSI;
    e_st.site = &wcb_emlrtRSI;
    g_emlrt_marshallIn(&c_st, d_feval(&c_st, c_emlrt_marshallOut(&c_st, b_cv),
      e_emlrt_marshallOut(1.0), d_emlrt_marshallOut(&d_st, b_cv1),
      s_emlrt_marshallOut(&e_st, cv5), &ic_emlrtMCI), "<output of feval>");
    init1 = (real_T)Y->size[0] - 1.0;
  }

  /*   Un is a Matrix whose 2nd column:11th col contain the unit(s) just */
  /*   included. */
  st.site = &ds_emlrtRSI;
  b_st.site = &ft_emlrtRSI;
  if (muDoubleScalarIsNaN(init1 + 1.0)) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, ym, i, &vb_emlrtRTEI);
    ym->data[0] = rtNaN;
  } else if (Y->size[0] < init1 + 1.0) {
    ym->size[0] = 1;
    ym->size[1] = 0;
  } else if (muDoubleScalarIsInf(init1 + 1.0) && (init1 + 1.0 == Y->size[0])) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, ym, i, &vb_emlrtRTEI);
    ym->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(init1 + 1.0) == init1 + 1.0) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = (int32_T)muDoubleScalarFloor((real_T)Y->size[0] - (init1 + 1.0))
      + 1;
    emxEnsureCapacity_real_T(&b_st, ym, i, &vb_emlrtRTEI);
    loop_ub = (int32_T)muDoubleScalarFloor((real_T)Y->size[0] - (init1 + 1.0));
    for (i = 0; i <= loop_ub; i++) {
      ym->data[i] = (init1 + 1.0) + (real_T)i;
    }
  } else {
    c_st.site = &ct_emlrtRSI;
    eml_float_colon(&c_st, init1 + 1.0, Y->size[0], ym);
  }

  d = (real_T)Y->size[0] - init1;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &r_emlrtDCI, (emlrtCTX)sp);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &q_emlrtDCI, (emlrtCTX)sp);
  }

  emxInit_real_T(sp, &MD, 1, &nk_emlrtRTEI, true);
  i = MD->size[0];
  MD->size[0] = ym->size[1];
  emxEnsureCapacity_real_T(sp, MD, i, &kh_emlrtRTEI);
  loop_ub = ym->size[1];
  for (i = 0; i < loop_ub; i++) {
    MD->data[i] = ym->data[i];
  }

  emxInit_real_T(sp, &r, 2, &lh_emlrtRTEI, true);
  i = r->size[0] * r->size[1];
  r->size[0] = (int32_T)d;
  r->size[1] = 10;
  emxEnsureCapacity_real_T(sp, r, i, &lh_emlrtRTEI);
  loop_ub = (int32_T)d * 10;
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = rtNaN;
  }

  emxInit_real_T(sp, &r1, 2, &bl_emlrtRTEI, true);
  st.site = &ds_emlrtRSI;
  cat(&st, MD, r, r1);
  i = Un->size[0] * Un->size[1];
  Un->size[0] = r1->size[0];
  Un->size[1] = 11;
  emxEnsureCapacity_real_T(sp, Un, i, &mh_emlrtRTEI);
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
  st.site = &cs_emlrtRSI;
  b_st.site = &ft_emlrtRSI;
  if (muDoubleScalarIsNaN(init1)) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, ym, i, &vb_emlrtRTEI);
    ym->data[0] = rtNaN;
  } else if ((real_T)Y->size[0] - 1.0 < init1) {
    ym->size[0] = 1;
    ym->size[1] = 0;
  } else if (muDoubleScalarIsInf(init1) && (init1 == (real_T)Y->size[0] - 1.0))
  {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, ym, i, &vb_emlrtRTEI);
    ym->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(init1) == init1) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = (int32_T)(((real_T)Y->size[0] - 1.0) - init1) + 1;
    emxEnsureCapacity_real_T(&b_st, ym, i, &vb_emlrtRTEI);
    loop_ub = (int32_T)(((real_T)Y->size[0] - 1.0) - init1);
    for (i = 0; i <= loop_ub; i++) {
      ym->data[i] = init1 + (real_T)i;
    }
  } else {
    c_st.site = &ct_emlrtRSI;
    eml_float_colon(&c_st, init1, (real_T)Y->size[0] - 1.0, ym);
  }

  st.site = &cs_emlrtRSI;
  i = MD->size[0];
  MD->size[0] = ym->size[1];
  emxEnsureCapacity_real_T(&st, MD, i, &nh_emlrtRTEI);
  loop_ub = ym->size[1];
  for (i = 0; i < loop_ub; i++) {
    MD->data[i] = ym->data[i];
  }

  emxInit_real_T(&st, &unit, 1, &lk_emlrtRTEI, true);
  d = (real_T)Y->size[0] - init1;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &t_emlrtDCI, &st);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &s_emlrtDCI, &st);
  }

  i = unit->size[0];
  unit->size[0] = (int32_T)d;
  emxEnsureCapacity_real_T(&st, unit, i, &oh_emlrtRTEI);
  d = (real_T)Y->size[0] - init1;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &t_emlrtDCI, &st);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &s_emlrtDCI, &st);
  }

  loop_ub = (int32_T)d;
  for (i = 0; i < loop_ub; i++) {
    unit->data[i] = 0.0;
  }

  b_st.site = &th_emlrtRSI;
  c_st.site = &uh_emlrtRSI;
  if ((int32_T)((real_T)Y->size[0] - init1) != MD->size[0]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &c_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  i = mmd->size[0] * mmd->size[1];
  mmd->size[0] = MD->size[0];
  mmd->size[1] = 2;
  emxEnsureCapacity_real_T(sp, mmd, i, &ph_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, unit, i, &qh_emlrtRTEI);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    unit->data[i] = 0.0;
  }

  lunit = bsb->size[0];

  /*  If the subset Y(bsb,:) is not full rank or a column is constant, then we */
  /*  return as output an empty structure. */
  st.site = &bs_emlrtRSI;
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    i1 = (int32_T)bsb->data[i];
    if ((i1 < 1) || (i1 > Y->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, Y->size[0], &sl_emlrtBCI, &st);
    }
  }

  loop_ub = Y->size[1];
  i = b_Y->size[0] * b_Y->size[1];
  b_Y->size[0] = bsb->size[0];
  b_Y->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(&st, b_Y, i, &rh_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    irank = bsb->size[0];
    for (i1 = 0; i1 < irank; i1++) {
      b_Y->data[i1 + b_Y->size[0] * i] = Y->data[((int32_T)bsb->data[i1] +
        Y->size[0] * i) - 1];
    }
  }

  b_st.site = &ee_emlrtRSI;
  irank = local_rank(&b_st, b_Y);
  emxInit_real_T(sp, &Ym, 2, &mk_emlrtRTEI, true);
  emxInit_real_T(sp, &mi, 2, &pi_emlrtRTEI, true);
  emxInit_real_T(sp, &mibsbr, 2, &dj_emlrtRTEI, true);
  emxInit_real_T(sp, &zi, 2, &ej_emlrtRTEI, true);
  emxInit_real_T(sp, &R, 2, &ok_emlrtRTEI, true);
  emxInit_boolean_T(sp, &MDltminT, 1, &jj_emlrtRTEI, true);
  emxInit_boolean_T(sp, &MDltminbsb, 1, &mj_emlrtRTEI, true);
  emxInit_real_T(sp, &r2, 2, &qk_emlrtRTEI, true);
  emxInit_int32_T(sp, &r3, 1, &rk_emlrtRTEI, true);
  emxInit_int32_T(sp, &r4, 1, &tk_emlrtRTEI, true);
  emxInit_int32_T(sp, &r5, 1, &uk_emlrtRTEI, true);
  emxInit_int32_T(sp, &r6, 1, &vk_emlrtRTEI, true);
  emxInit_int32_T(sp, &r7, 1, &wk_emlrtRTEI, true);
  emxInit_int32_T(sp, &r8, 1, &xk_emlrtRTEI, true);
  emxInit_int32_T(sp, &r9, 1, &yk_emlrtRTEI, true);
  guard1 = false;
  if (irank < v) {
    guard1 = true;
  } else {
    st.site = &bs_emlrtRSI;
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)bsb->data[i];
      if ((i1 < 1) || (i1 > Y->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, Y->size[0], &tl_emlrtBCI, &st);
      }
    }

    b_st.site = &cd_emlrtRSI;
    c_st.site = &dd_emlrtRSI;
    f_st.site = &ed_emlrtRSI;
    if (((bsb->size[0] != 1) || (Y->size[1] != 1)) && (bsb->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&f_st, &b_emlrtRTEI,
        "Coder:toolbox:autoDimIncompatibility",
        "Coder:toolbox:autoDimIncompatibility", 0);
    }

    if (bsb->size[0] < 1) {
      emlrtErrorWithMessageIdR2018a(&f_st, &emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero",
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    g_st.site = &fd_emlrtRSI;
    h_st.site = &gd_emlrtRSI;
    i_st.site = &hd_emlrtRSI;
    irank = bsb->size[0];
    i = Y->size[1] - 1;
    i1 = mibsbr->size[0] * mibsbr->size[1];
    mibsbr->size[0] = 1;
    mibsbr->size[1] = Y->size[1];
    emxEnsureCapacity_real_T(&i_st, mibsbr, i1, &mc_emlrtRTEI);
    if (Y->size[1] >= 1) {
      j_st.site = &jd_emlrtRSI;
      if (Y->size[1] > 2147483646) {
        k_st.site = &ad_emlrtRSI;
        check_forloop_overflow_error(&k_st);
      }

      for (nwhile = 0; nwhile <= i; nwhile++) {
        mibsbr->data[nwhile] = Y->data[((int32_T)bsb->data[0] + Y->size[0] *
          nwhile) - 1];
        j_st.site = &id_emlrtRSI;
        if ((2 <= irank) && (irank > 2147483646)) {
          k_st.site = &ad_emlrtRSI;
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

    st.site = &bs_emlrtRSI;
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)bsb->data[i];
      if ((i1 < 1) || (i1 > Y->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, Y->size[0], &ul_emlrtBCI, &st);
      }
    }

    b_st.site = &kd_emlrtRSI;
    c_st.site = &ld_emlrtRSI;
    f_st.site = &md_emlrtRSI;
    if (((bsb->size[0] != 1) || (Y->size[1] != 1)) && (bsb->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&f_st, &b_emlrtRTEI,
        "Coder:toolbox:autoDimIncompatibility",
        "Coder:toolbox:autoDimIncompatibility", 0);
    }

    g_st.site = &fd_emlrtRSI;
    h_st.site = &gd_emlrtRSI;
    i_st.site = &hd_emlrtRSI;
    irank = bsb->size[0];
    i = Y->size[1] - 1;
    i1 = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = Y->size[1];
    emxEnsureCapacity_real_T(&i_st, ym, i1, &mc_emlrtRTEI);
    if (Y->size[1] >= 1) {
      j_st.site = &jd_emlrtRSI;
      if (Y->size[1] > 2147483646) {
        k_st.site = &ad_emlrtRSI;
        check_forloop_overflow_error(&k_st);
      }

      for (nwhile = 0; nwhile <= i; nwhile++) {
        ym->data[nwhile] = Y->data[((int32_T)bsb->data[0] + Y->size[0] * nwhile)
          - 1];
        j_st.site = &id_emlrtRSI;
        if ((2 <= irank) && (irank > 2147483646)) {
          k_st.site = &ad_emlrtRSI;
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
    iv[0] = (*(int32_T (*)[2])ym->size)[0];
    iv[1] = (*(int32_T (*)[2])ym->size)[1];
    emlrtSizeEqCheckNDR2012b(&c_Y[0], &iv[0], &u_emlrtECI, (emlrtCTX)sp);
    st.site = &bs_emlrtRSI;
    i = mibsbr->size[0] * mibsbr->size[1];
    mibsbr->size[0] = 1;
    emxEnsureCapacity_real_T(&st, mibsbr, i, &vh_emlrtRTEI);
    loop_ub = mibsbr->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      mibsbr->data[i] -= ym->data[i];
    }

    b_st.site = &kd_emlrtRSI;
    c_st.site = &ld_emlrtRSI;
    f_st.site = &md_emlrtRSI;
    if (mibsbr->size[1] < 1) {
      emlrtErrorWithMessageIdR2018a(&f_st, &emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero",
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    g_st.site = &hq_emlrtRSI;
    h_st.site = &iq_emlrtRSI;
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
      i_st.site = &kq_emlrtRSI;
      if (!muDoubleScalarIsNaN(mibsbr->data[0])) {
        idx = 1;
      } else {
        idx = 0;
        j_st.site = &lq_emlrtRSI;
        if (mibsbr->size[1] > 2147483646) {
          k_st.site = &ad_emlrtRSI;
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
        i_st.site = &jq_emlrtRSI;
        ex = mibsbr->data[idx - 1];
        nwhile = idx + 1;
        j_st.site = &mq_emlrtRSI;
        if ((idx + 1 <= mibsbr->size[1]) && (mibsbr->size[1] > 2147483646)) {
          k_st.site = &ad_emlrtRSI;
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
      i = n - ini0;
      emlrtForLoopVectorCheckR2021a(ini0, 1.0, n, mxDOUBLE_CLASS, i + 1,
        &cb_emlrtRTEI, (emlrtCTX)sp);
      mm = 0;
      exitg1 = false;
      while ((!exitg1) && (mm <= i)) {
        b_mm = (real_T)ini0 + (real_T)mm;

        /*  Extract units forming subset */
        if (b_mm <= percn) {
          loop_ub = Y->size[1];
          i1 = Yb->size[0] * Yb->size[1];
          Yb->size[0] = bsb->size[0];
          Yb->size[1] = Y->size[1];
          emxEnsureCapacity_real_T(sp, Yb, i1, &wh_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub; i1++) {
            irank = bsb->size[0];
            for (partialTrueCount = 0; partialTrueCount < irank;
                 partialTrueCount++) {
              if (bsb->data[partialTrueCount] != (int32_T)muDoubleScalarFloor
                  (bsb->data[partialTrueCount])) {
                emlrtIntegerCheckR2012b(bsb->data[partialTrueCount], &u_emlrtDCI,
                  (emlrtCTX)sp);
              }

              k = (int32_T)bsb->data[partialTrueCount];
              if ((k < 1) || (k > Y->size[0])) {
                emlrtDynamicBoundsCheckR2012b(k, 1, Y->size[0], &vl_emlrtBCI,
                  (emlrtCTX)sp);
              }

              Yb->data[partialTrueCount + Yb->size[0] * i1] = Y->data[(k +
                Y->size[0] * i1) - 1];
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

          i1 = r3->size[0];
          r3->size[0] = trueCount;
          emxEnsureCapacity_int32_T(sp, r3, i1, &xh_emlrtRTEI);
          partialTrueCount = 0;
          for (b_i = 0; b_i <= k; b_i++) {
            if (bsbT->data[b_i]) {
              r3->data[partialTrueCount] = b_i + 1;
              partialTrueCount++;
            }
          }

          loop_ub = Y->size[1];
          i1 = Yb->size[0] * Yb->size[1];
          Yb->size[0] = r3->size[0];
          Yb->size[1] = Y->size[1];
          emxEnsureCapacity_real_T(sp, Yb, i1, &yh_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub; i1++) {
            irank = r3->size[0];
            for (partialTrueCount = 0; partialTrueCount < irank;
                 partialTrueCount++) {
              if (r3->data[partialTrueCount] > Y->size[0]) {
                emlrtDynamicBoundsCheckR2012b(r3->data[partialTrueCount], 1,
                  Y->size[0], &wl_emlrtBCI, (emlrtCTX)sp);
              }

              Yb->data[partialTrueCount + Yb->size[0] * i1] = Y->data[(r3->
                data[partialTrueCount] + Y->size[0] * i1) - 1];
            }
          }
        }

        /*  If required, store units forming subset at each step */
        /*  Find vector of means inside subset */
        /*  Note that ym is a row vector */
        st.site = &yr_emlrtRSI;
        b_st.site = &mj_emlrtRSI;
        c_st.site = &hj_emlrtRSI;
        b_combineVectorElements(&c_st, Yb, ym);
        i1 = ym->size[0] * ym->size[1];
        ym->size[0] = 1;
        emxEnsureCapacity_real_T(sp, ym, i1, &ci_emlrtRTEI);
        loop_ub = ym->size[1] - 1;
        for (i1 = 0; i1 <= loop_ub; i1++) {
          ym->data[i1] /= b_mm;
        }

        /*  Ym = n-by-v matrix containing deviations from the means computed */
        /*  using units forming subset */
        /*  Ym=Y-one*ym; */
        st.site = &xr_emlrtRSI;
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
              i1 = MDltminT->size[0];
              MDltminT->size[0] = bsbT->size[0];
              emxEnsureCapacity_boolean_T(sp, MDltminT, i1, &hi_emlrtRTEI);
              loop_ub = bsbT->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                MDltminT->data[i1] = !bsbT->data[i1];
              }

              if (oldbsbT->size[0] != MDltminT->size[0]) {
                emlrtSizeEqCheck1DR2012b(oldbsbT->size[0], MDltminT->size[0],
                  &v_emlrtECI, (emlrtCTX)sp);
              }

              k = oldbsbT->size[0] - 1;
              trueCount = 0;
              for (b_i = 0; b_i <= k; b_i++) {
                if (oldbsbT->data[b_i] && MDltminT->data[b_i]) {
                  trueCount++;
                }
              }

              i1 = unitout->size[0];
              unitout->size[0] = trueCount;
              emxEnsureCapacity_real_T(sp, unitout, i1, &xh_emlrtRTEI);
              partialTrueCount = 0;
              for (b_i = 0; b_i <= k; b_i++) {
                if (oldbsbT->data[b_i] && MDltminT->data[b_i]) {
                  if (b_i + 1 > seq->size[0]) {
                    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                      &gm_emlrtBCI, (emlrtCTX)sp);
                  }

                  unitout->data[partialTrueCount] = seq->data[b_i];
                  partialTrueCount++;
                }
              }
            }

            nwhile = unitout->size[0];
            st.site = &wr_emlrtRSI;
            loop_ub = unitout->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              if (unitout->data[i1] != (int32_T)muDoubleScalarFloor
                  (unitout->data[i1])) {
                emlrtIntegerCheckR2012b(unitout->data[i1], &x_emlrtDCI, &st);
              }

              partialTrueCount = (int32_T)unitout->data[i1];
              if ((partialTrueCount < 1) || (partialTrueCount > Y->size[0])) {
                emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1, Y->size[0],
                  &em_emlrtBCI, &st);
              }
            }

            b_st.site = &mj_emlrtRSI;
            loop_ub = Y->size[1];
            i1 = b_Y->size[0] * b_Y->size[1];
            b_Y->size[0] = unitout->size[0];
            b_Y->size[1] = Y->size[1];
            emxEnsureCapacity_real_T(&b_st, b_Y, i1, &li_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              irank = unitout->size[0];
              for (partialTrueCount = 0; partialTrueCount < irank;
                   partialTrueCount++) {
                b_Y->data[partialTrueCount + b_Y->size[0] * i1] = Y->data
                  [((int32_T)unitout->data[partialTrueCount] + Y->size[0] * i1)
                  - 1];
              }
            }

            c_st.site = &hj_emlrtRSI;
            b_combineVectorElements(&c_st, b_Y, mi);
            i1 = mi->size[0] * mi->size[1];
            mi->size[0] = 1;
            emxEnsureCapacity_real_T(sp, mi, i1, &pi_emlrtRTEI);
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
                  &w_emlrtECI, (emlrtCTX)sp);
              }

              k = oldbsbT->size[0] - 1;
              trueCount = 0;
              for (b_i = 0; b_i <= k; b_i++) {
                if (oldbsbT->data[b_i] && bsbT->data[b_i]) {
                  trueCount++;
                }
              }

              i1 = r7->size[0];
              r7->size[0] = trueCount;
              emxEnsureCapacity_int32_T(sp, r7, i1, &xh_emlrtRTEI);
              partialTrueCount = 0;
              for (b_i = 0; b_i <= k; b_i++) {
                if (oldbsbT->data[b_i] && bsbT->data[b_i]) {
                  r7->data[partialTrueCount] = b_i + 1;
                  partialTrueCount++;
                }
              }

              st.site = &vr_emlrtRSI;
              loop_ub = r7->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                if (r7->data[i1] > Y->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(r7->data[i1], 1, Y->size[0],
                    &lm_emlrtBCI, &st);
                }
              }

              b_st.site = &mj_emlrtRSI;
              loop_ub = Y->size[1];
              i1 = b_Y->size[0] * b_Y->size[1];
              b_Y->size[0] = r7->size[0];
              b_Y->size[1] = Y->size[1];
              emxEnsureCapacity_real_T(&b_st, b_Y, i1, &aj_emlrtRTEI);
              for (i1 = 0; i1 < loop_ub; i1++) {
                irank = r7->size[0];
                for (partialTrueCount = 0; partialTrueCount < irank;
                     partialTrueCount++) {
                  b_Y->data[partialTrueCount + b_Y->size[0] * i1] = Y->data
                    [(r7->data[partialTrueCount] + Y->size[0] * i1) - 1];
                }
              }

              c_st.site = &hj_emlrtRSI;
              b_combineVectorElements(&c_st, b_Y, mibsbr);
              i1 = mibsbr->size[0] * mibsbr->size[1];
              mibsbr->size[0] = 1;
              emxEnsureCapacity_real_T(sp, mibsbr, i1, &dj_emlrtRTEI);
              ksor = (b_mm - 1.0) - (real_T)unitout->size[0];
              loop_ub = mibsbr->size[1] - 1;
              for (i1 = 0; i1 <= loop_ub; i1++) {
                mibsbr->data[i1] /= ksor;
              }
            } else {
              st.site = &ur_emlrtRSI;
              loop_ub = bsbr->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                partialTrueCount = bsbr->data[i1];
                if ((partialTrueCount < 1) || (partialTrueCount > Y->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1, Y->size[0],
                    &im_emlrtBCI, &st);
                }
              }

              b_st.site = &mj_emlrtRSI;
              loop_ub = Y->size[1];
              i1 = b_Y->size[0] * b_Y->size[1];
              b_Y->size[0] = bsbr->size[0];
              b_Y->size[1] = Y->size[1];
              emxEnsureCapacity_real_T(&b_st, b_Y, i1, &ui_emlrtRTEI);
              for (i1 = 0; i1 < loop_ub; i1++) {
                irank = bsbr->size[0];
                for (partialTrueCount = 0; partialTrueCount < irank;
                     partialTrueCount++) {
                  b_Y->data[partialTrueCount + b_Y->size[0] * i1] = Y->data
                    [(bsbr->data[partialTrueCount] + Y->size[0] * i1) - 1];
                }
              }

              c_st.site = &hj_emlrtRSI;
              b_combineVectorElements(&c_st, b_Y, mibsbr);
              i1 = mibsbr->size[0] * mibsbr->size[1];
              mibsbr->size[0] = 1;
              emxEnsureCapacity_real_T(sp, mibsbr, i1, &xi_emlrtRTEI);
              ksor = (b_mm - 1.0) - (real_T)unitout->size[0];
              loop_ub = mibsbr->size[1] - 1;
              for (i1 = 0; i1 <= loop_ub; i1++) {
                mibsbr->data[i1] /= ksor;
              }
            }

            c_Y[0] = (*(int32_T (*)[2])mi->size)[0];
            c_Y[1] = (*(int32_T (*)[2])mi->size)[1];
            iv[0] = (*(int32_T (*)[2])mibsbr->size)[0];
            iv[1] = (*(int32_T (*)[2])mibsbr->size)[1];
            emlrtSizeEqCheckNDR2012b(&c_Y[0], &iv[0], &x_emlrtECI, (emlrtCTX)sp);
            a = (real_T)unitout->size[0] * ((b_mm - 1.0) - (real_T)unitout->
              size[0]) / (b_mm - 1.0);
            st.site = &tr_emlrtRSI;
            if (a < 0.0) {
              emlrtErrorWithMessageIdR2018a(&st, &x_emlrtRTEI,
                "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
            }

            a = muDoubleScalarSqrt(a);
            i1 = zi->size[0] * zi->size[1];
            zi->size[0] = 1;
            zi->size[1] = mi->size[1];
            emxEnsureCapacity_real_T(sp, zi, i1, &ej_emlrtRTEI);
            loop_ub = mi->size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              zi->data[i1] = a * (mi->data[i1] - mibsbr->data[i1]);
            }

            st.site = &sr_emlrtRSI;
            b_st.site = &xc_emlrtRSI;
            c_dynamic_size_checks(&b_st, S, zi, S->size[1], zi->size[1]);
            b_st.site = &wc_emlrtRSI;
            c_mtimes(&b_st, S, zi, MD);

            /*  S=S+(S*(zi')*zi*S)/(1-zi*S*(zi')); */
            st.site = &rr_emlrtRSI;
            b_st.site = &xc_emlrtRSI;
            d_dynamic_size_checks(&b_st, zi, MD, zi->size[1], MD->size[0]);
            ksor = d_mtimes(zi, MD);
            i1 = r2->size[0] * r2->size[1];
            r2->size[0] = MD->size[0];
            r2->size[1] = MD->size[0];
            emxEnsureCapacity_real_T(sp, r2, i1, &hj_emlrtRTEI);
            loop_ub = MD->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              irank = MD->size[0];
              for (partialTrueCount = 0; partialTrueCount < irank;
                   partialTrueCount++) {
                r2->data[partialTrueCount + r2->size[0] * i1] = MD->
                  data[partialTrueCount] * MD->data[i1] / (1.0 - ksor);
              }
            }

            c_Y[0] = (*(int32_T (*)[2])S->size)[0];
            c_Y[1] = (*(int32_T (*)[2])S->size)[1];
            iv[0] = (*(int32_T (*)[2])r2->size)[0];
            iv[1] = (*(int32_T (*)[2])r2->size)[1];
            emlrtSizeEqCheckNDR2012b(&c_Y[0], &iv[0], &y_emlrtECI, (emlrtCTX)sp);
            loop_ub = S->size[0] * S->size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              S->data[i1] += r2->data[i1];
            }

            if (unitout->size[0] > 1) {
              i1 = unitout->size[0];
              for (b_i = 0; b_i < i1; b_i++) {
                if (b_i + 1 > unitout->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, unitout->size[0],
                    &om_emlrtBCI, (emlrtCTX)sp);
                }

                partialTrueCount = (int32_T)unitout->data[b_i];
                if ((partialTrueCount < 1) || (partialTrueCount > Y->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1, Y->size[0],
                    &el_emlrtBCI, (emlrtCTX)sp);
                }

                loop_ub = Y->size[1];
                partialTrueCount = zi->size[0] * zi->size[1];
                zi->size[0] = 1;
                zi->size[1] = Y->size[1];
                emxEnsureCapacity_real_T(sp, zi, partialTrueCount, &nj_emlrtRTEI);
                for (partialTrueCount = 0; partialTrueCount < loop_ub;
                     partialTrueCount++) {
                  zi->data[partialTrueCount] = Y->data[((int32_T)unitout->
                    data[b_i] + Y->size[0] * partialTrueCount) - 1];
                }

                c_Y[0] = (*(int32_T (*)[2])zi->size)[0];
                c_Y[1] = (*(int32_T (*)[2])zi->size)[1];
                iv[0] = (*(int32_T (*)[2])mi->size)[0];
                iv[1] = (*(int32_T (*)[2])mi->size)[1];
                emlrtSizeEqCheckNDR2012b(&c_Y[0], &iv[0], &ab_emlrtECI,
                  (emlrtCTX)sp);
                loop_ub = Y->size[1];
                partialTrueCount = zi->size[0] * zi->size[1];
                zi->size[0] = 1;
                zi->size[1] = Y->size[1];
                emxEnsureCapacity_real_T(sp, zi, partialTrueCount, &oj_emlrtRTEI);
                for (partialTrueCount = 0; partialTrueCount < loop_ub;
                     partialTrueCount++) {
                  zi->data[partialTrueCount] = Y->data[((int32_T)unitout->
                    data[b_i] + Y->size[0] * partialTrueCount) - 1] - mi->
                    data[partialTrueCount];
                }

                st.site = &qr_emlrtRSI;
                b_st.site = &xc_emlrtRSI;
                c_dynamic_size_checks(&b_st, S, zi, S->size[1], zi->size[1]);
                b_st.site = &wc_emlrtRSI;
                c_mtimes(&b_st, S, zi, MD);

                /*  S=S+(S*(zi')*zi*S)/(1-zi*S*(zi')); */
                st.site = &pr_emlrtRSI;
                b_st.site = &xc_emlrtRSI;
                d_dynamic_size_checks(&b_st, zi, MD, zi->size[1], MD->size[0]);
                ksor = d_mtimes(zi, MD);
                partialTrueCount = r2->size[0] * r2->size[1];
                r2->size[0] = MD->size[0];
                r2->size[1] = MD->size[0];
                emxEnsureCapacity_real_T(sp, r2, partialTrueCount, &qj_emlrtRTEI);
                loop_ub = MD->size[0];
                for (partialTrueCount = 0; partialTrueCount < loop_ub;
                     partialTrueCount++) {
                  irank = MD->size[0];
                  for (k = 0; k < irank; k++) {
                    r2->data[k + r2->size[0] * partialTrueCount] = MD->data[k] *
                      MD->data[partialTrueCount] / (1.0 - ksor);
                  }
                }

                c_Y[0] = (*(int32_T (*)[2])S->size)[0];
                c_Y[1] = (*(int32_T (*)[2])S->size)[1];
                iv[0] = (*(int32_T (*)[2])r2->size)[0];
                iv[1] = (*(int32_T (*)[2])r2->size)[1];
                emlrtSizeEqCheckNDR2012b(&c_Y[0], &iv[0], &bb_emlrtECI,
                  (emlrtCTX)sp);
                loop_ub = S->size[0] * S->size[1];
                for (partialTrueCount = 0; partialTrueCount < loop_ub;
                     partialTrueCount++) {
                  S->data[partialTrueCount] += r2->data[partialTrueCount];
                }

                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b((emlrtCTX)sp);
                }
              }
            }
          } else {
            nwhile = 0;
            i1 = mibsbr->size[0] * mibsbr->size[1];
            mibsbr->size[0] = 1;
            mibsbr->size[1] = meoldbsb->size[1];
            emxEnsureCapacity_real_T(sp, mibsbr, i1, &ei_emlrtRTEI);
            loop_ub = meoldbsb->size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              mibsbr->data[i1] = meoldbsb->data[i1];
            }
          }

          /*  mi = mean of units entering subset */
          st.site = &or_emlrtRSI;
          loop_ub = unit->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            partialTrueCount = (int32_T)unit->data[i1];
            if ((partialTrueCount < 1) || (partialTrueCount > Y->size[0])) {
              emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1, Y->size[0],
                &dm_emlrtBCI, &st);
            }
          }

          b_st.site = &mj_emlrtRSI;
          loop_ub = Y->size[1];
          i1 = b_Y->size[0] * b_Y->size[1];
          b_Y->size[0] = unit->size[0];
          b_Y->size[1] = Y->size[1];
          emxEnsureCapacity_real_T(&b_st, b_Y, i1, &ji_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub; i1++) {
            irank = unit->size[0];
            for (partialTrueCount = 0; partialTrueCount < irank;
                 partialTrueCount++) {
              b_Y->data[partialTrueCount + b_Y->size[0] * i1] = Y->data
                [((int32_T)unit->data[partialTrueCount] + Y->size[0] * i1) - 1];
            }
          }

          c_st.site = &hj_emlrtRSI;
          b_combineVectorElements(&c_st, b_Y, mi);
          i1 = mi->size[0] * mi->size[1];
          mi->size[0] = 1;
          emxEnsureCapacity_real_T(sp, mi, i1, &mi_emlrtRTEI);
          loop_ub = mi->size[1] - 1;
          for (i1 = 0; i1 <= loop_ub; i1++) {
            mi->data[i1] /= (real_T)lunit;
          }

          /*  zi=sqrt(kin*(mm-1-k)/(mm-1-k+kin))*(mi-mean(Y(bsbr,:),1)); */
          c_Y[0] = (*(int32_T (*)[2])mi->size)[0];
          c_Y[1] = (*(int32_T (*)[2])mi->size)[1];
          iv[0] = (*(int32_T (*)[2])mibsbr->size)[0];
          iv[1] = (*(int32_T (*)[2])mibsbr->size)[1];
          emlrtSizeEqCheckNDR2012b(&c_Y[0], &iv[0], &cb_emlrtECI, (emlrtCTX)sp);
          ksor = (b_mm - 1.0) - (real_T)nwhile;
          a = (real_T)lunit * ksor / (ksor + (real_T)lunit);
          st.site = &nr_emlrtRSI;
          if (a < 0.0) {
            emlrtErrorWithMessageIdR2018a(&st, &x_emlrtRTEI,
              "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError",
              3, 4, 4, "sqrt");
          }

          a = muDoubleScalarSqrt(a);
          i1 = zi->size[0] * zi->size[1];
          zi->size[0] = 1;
          zi->size[1] = mi->size[1];
          emxEnsureCapacity_real_T(sp, zi, i1, &qi_emlrtRTEI);
          loop_ub = mi->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            zi->data[i1] = a * (mi->data[i1] - mibsbr->data[i1]);
          }

          st.site = &mr_emlrtRSI;
          b_st.site = &xc_emlrtRSI;
          c_dynamic_size_checks(&b_st, S, zi, S->size[1], zi->size[1]);
          b_st.site = &wc_emlrtRSI;
          c_mtimes(&b_st, S, zi, MD);

          /*  S=S+(S*(zi')*zi*S)/(1-zi*S*(zi')); */
          st.site = &lr_emlrtRSI;
          b_st.site = &xc_emlrtRSI;
          d_dynamic_size_checks(&b_st, zi, MD, zi->size[1], MD->size[0]);
          ksor = d_mtimes(zi, MD);
          i1 = r2->size[0] * r2->size[1];
          r2->size[0] = MD->size[0];
          r2->size[1] = MD->size[0];
          emxEnsureCapacity_real_T(sp, r2, i1, &wi_emlrtRTEI);
          loop_ub = MD->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            irank = MD->size[0];
            for (partialTrueCount = 0; partialTrueCount < irank;
                 partialTrueCount++) {
              r2->data[partialTrueCount + r2->size[0] * i1] = MD->
                data[partialTrueCount] * MD->data[i1] / (ksor + 1.0);
            }
          }

          c_Y[0] = (*(int32_T (*)[2])S->size)[0];
          c_Y[1] = (*(int32_T (*)[2])S->size)[1];
          iv[0] = (*(int32_T (*)[2])r2->size)[0];
          iv[1] = (*(int32_T (*)[2])r2->size)[1];
          emlrtSizeEqCheckNDR2012b(&c_Y[0], &iv[0], &db_emlrtECI, (emlrtCTX)sp);
          loop_ub = S->size[0] * S->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            S->data[i1] -= r2->data[i1];
          }

          if (lunit > 1) {
            /* mi=mean(Y(unit,:),1); */
            for (b_i = 0; b_i < lunit; b_i++) {
              if (b_i + 1 > unit->size[0]) {
                emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, unit->size[0],
                  &mm_emlrtBCI, (emlrtCTX)sp);
              }

              i1 = (int32_T)unit->data[b_i];
              if ((i1 < 1) || (i1 > Y->size[0])) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, Y->size[0], &fl_emlrtBCI,
                  (emlrtCTX)sp);
              }

              loop_ub = Y->size[1];
              i1 = zi->size[0] * zi->size[1];
              zi->size[0] = 1;
              zi->size[1] = Y->size[1];
              emxEnsureCapacity_real_T(sp, zi, i1, &fj_emlrtRTEI);
              for (i1 = 0; i1 < loop_ub; i1++) {
                zi->data[i1] = Y->data[((int32_T)unit->data[b_i] + Y->size[0] *
                  i1) - 1];
              }

              c_Y[0] = (*(int32_T (*)[2])zi->size)[0];
              c_Y[1] = (*(int32_T (*)[2])zi->size)[1];
              iv[0] = (*(int32_T (*)[2])mi->size)[0];
              iv[1] = (*(int32_T (*)[2])mi->size)[1];
              emlrtSizeEqCheckNDR2012b(&c_Y[0], &iv[0], &eb_emlrtECI, (emlrtCTX)
                sp);
              loop_ub = Y->size[1];
              i1 = zi->size[0] * zi->size[1];
              zi->size[0] = 1;
              zi->size[1] = Y->size[1];
              emxEnsureCapacity_real_T(sp, zi, i1, &ij_emlrtRTEI);
              for (i1 = 0; i1 < loop_ub; i1++) {
                zi->data[i1] = Y->data[((int32_T)unit->data[b_i] + Y->size[0] *
                  i1) - 1] - mi->data[i1];
              }

              st.site = &kr_emlrtRSI;
              b_st.site = &xc_emlrtRSI;
              c_dynamic_size_checks(&b_st, S, zi, S->size[1], zi->size[1]);
              b_st.site = &wc_emlrtRSI;
              c_mtimes(&b_st, S, zi, MD);

              /*  S=S-(S*(zi')*zi*S)/(1+zi*S*(zi')); */
              st.site = &jr_emlrtRSI;
              b_st.site = &xc_emlrtRSI;
              d_dynamic_size_checks(&b_st, zi, MD, zi->size[1], MD->size[0]);
              ksor = d_mtimes(zi, MD);
              i1 = r2->size[0] * r2->size[1];
              r2->size[0] = MD->size[0];
              r2->size[1] = MD->size[0];
              emxEnsureCapacity_real_T(sp, r2, i1, &kj_emlrtRTEI);
              loop_ub = MD->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                irank = MD->size[0];
                for (partialTrueCount = 0; partialTrueCount < irank;
                     partialTrueCount++) {
                  r2->data[partialTrueCount + r2->size[0] * i1] = MD->
                    data[partialTrueCount] * MD->data[i1] / (ksor + 1.0);
                }
              }

              c_Y[0] = (*(int32_T (*)[2])S->size)[0];
              c_Y[1] = (*(int32_T (*)[2])S->size)[1];
              iv[0] = (*(int32_T (*)[2])r2->size)[0];
              iv[1] = (*(int32_T (*)[2])r2->size)[1];
              emlrtSizeEqCheckNDR2012b(&c_Y[0], &iv[0], &fb_emlrtECI, (emlrtCTX)
                sp);
              loop_ub = S->size[0] * S->size[1];
              for (i1 = 0; i1 < loop_ub; i1++) {
                S->data[i1] -= r2->data[i1];
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
            st.site = &ir_emlrtRSI;
            b_st.site = &xc_emlrtRSI;
            e_dynamic_size_checks(&b_st, Ym, S, Ym->size[1], S->size[0]);
            b_st.site = &wc_emlrtRSI;
            e_mtimes(&b_st, Ym, S, r2);
            c_Y[0] = (*(int32_T (*)[2])r2->size)[0];
            c_Y[1] = (*(int32_T (*)[2])r2->size)[1];
            iv[0] = (*(int32_T (*)[2])Ym->size)[0];
            iv[1] = (*(int32_T (*)[2])Ym->size)[1];
            emlrtSizeEqCheckNDR2012b(&c_Y[0], &iv[0], &gb_emlrtECI, (emlrtCTX)sp);
            i1 = b_Y->size[0] * b_Y->size[1];
            b_Y->size[0] = r2->size[0];
            b_Y->size[1] = r2->size[1];
            emxEnsureCapacity_real_T(sp, b_Y, i1, &gj_emlrtRTEI);
            loop_ub = r2->size[0] * r2->size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              b_Y->data[i1] = r2->data[i1] * Ym->data[i1];
            }

            st.site = &ir_emlrtRSI;
            b_sum(&st, b_Y, MD);
            loop_ub = MD->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              MD->data[i1] *= b_mm - 1.0;
            }
          } else {
            st.site = &hr_emlrtRSI;
            b_st.site = &xc_emlrtRSI;
            e_dynamic_size_checks(&b_st, Ym, S, Ym->size[1], S->size[0]);
            b_st.site = &wc_emlrtRSI;
            e_mtimes(&b_st, Ym, S, R);
            st.site = &hr_emlrtRSI;
            b_bsxfun(&st, R, Ym, r2);
            st.site = &hr_emlrtRSI;
            b_sum(&st, r2, MD);
            loop_ub = MD->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              MD->data[i1] *= b_mm - 1.0;
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

            i1 = r4->size[0];
            r4->size[0] = trueCount;
            emxEnsureCapacity_int32_T(sp, r4, i1, &xh_emlrtRTEI);
            partialTrueCount = 0;
            for (b_i = 0; b_i <= k; b_i++) {
              if (bsbT->data[b_i]) {
                r4->data[partialTrueCount] = b_i + 1;
                partialTrueCount++;
              }
            }

            loop_ub = Ym->size[1];
            i1 = r2->size[0] * r2->size[1];
            r2->size[0] = r4->size[0];
            r2->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(sp, r2, i1, &gi_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              irank = r4->size[0];
              for (partialTrueCount = 0; partialTrueCount < irank;
                   partialTrueCount++) {
                if (r4->data[partialTrueCount] > Ym->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(r4->data[partialTrueCount], 1,
                    Ym->size[0], &am_emlrtBCI, (emlrtCTX)sp);
                }

                r2->data[partialTrueCount + r2->size[0] * i1] = Ym->data
                  [(r4->data[partialTrueCount] + Ym->size[0] * i1) - 1];
              }
            }

            k = bsbT->size[0] - 1;
            trueCount = 0;
            for (b_i = 0; b_i <= k; b_i++) {
              if (bsbT->data[b_i]) {
                trueCount++;
              }
            }

            i1 = r5->size[0];
            r5->size[0] = trueCount;
            emxEnsureCapacity_int32_T(sp, r5, i1, &xh_emlrtRTEI);
            partialTrueCount = 0;
            for (b_i = 0; b_i <= k; b_i++) {
              if (bsbT->data[b_i]) {
                r5->data[partialTrueCount] = b_i + 1;
                partialTrueCount++;
              }
            }

            st.site = &gr_emlrtRSI;
            loop_ub = Ym->size[1];
            i1 = Yb->size[0] * Yb->size[1];
            Yb->size[0] = r5->size[0];
            Yb->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(&st, Yb, i1, &ni_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              irank = r5->size[0];
              for (partialTrueCount = 0; partialTrueCount < irank;
                   partialTrueCount++) {
                if (r5->data[partialTrueCount] > Ym->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(r5->data[partialTrueCount], 1,
                    Ym->size[0], &fm_emlrtBCI, &st);
                }

                Yb->data[partialTrueCount + Yb->size[0] * i1] = Ym->data
                  [(r5->data[partialTrueCount] + Ym->size[0] * i1) - 1];
              }
            }

            b_st.site = &xc_emlrtRSI;
            e_dynamic_size_checks(&b_st, r2, Yb, r4->size[0], r5->size[0]);
            b_st.site = &wc_emlrtRSI;
            f_mtimes(&b_st, r2, Yb, R);
            st.site = &gr_emlrtRSI;
            inv(&st, R, S);
            k = bsbT->size[0] - 1;
            trueCount = 0;
            for (b_i = 0; b_i <= k; b_i++) {
              if (bsbT->data[b_i]) {
                trueCount++;
              }
            }

            i1 = r6->size[0];
            r6->size[0] = trueCount;
            emxEnsureCapacity_int32_T(sp, r6, i1, &xh_emlrtRTEI);
            partialTrueCount = 0;
            for (b_i = 0; b_i <= k; b_i++) {
              if (bsbT->data[b_i]) {
                r6->data[partialTrueCount] = b_i + 1;
                partialTrueCount++;
              }
            }

            loop_ub = Ym->size[1];
            i1 = b_Y->size[0] * b_Y->size[1];
            b_Y->size[0] = r6->size[0];
            b_Y->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(sp, b_Y, i1, &si_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              irank = r6->size[0];
              for (partialTrueCount = 0; partialTrueCount < irank;
                   partialTrueCount++) {
                if (r6->data[partialTrueCount] > Ym->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(r6->data[partialTrueCount], 1,
                    Ym->size[0], &hm_emlrtBCI, (emlrtCTX)sp);
                }

                b_Y->data[partialTrueCount + b_Y->size[0] * i1] = Ym->data
                  [(r6->data[partialTrueCount] + Ym->size[0] * i1) - 1];
              }
            }

            st.site = &fr_emlrtRSI;
            qr(&st, b_Y, Yb, R);
          } else {
            loop_ub = Ym->size[1];
            i1 = r2->size[0] * r2->size[1];
            r2->size[0] = bsb->size[0];
            r2->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(sp, r2, i1, &di_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              irank = bsb->size[0];
              for (partialTrueCount = 0; partialTrueCount < irank;
                   partialTrueCount++) {
                if (bsb->data[partialTrueCount] != (int32_T)muDoubleScalarFloor
                    (bsb->data[partialTrueCount])) {
                  emlrtIntegerCheckR2012b(bsb->data[partialTrueCount],
                    &v_emlrtDCI, (emlrtCTX)sp);
                }

                k = (int32_T)bsb->data[partialTrueCount];
                if ((k < 1) || (k > Ym->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(k, 1, Ym->size[0], &xl_emlrtBCI,
                    (emlrtCTX)sp);
                }

                r2->data[partialTrueCount + r2->size[0] * i1] = Ym->data[(k +
                  Ym->size[0] * i1) - 1];
              }
            }

            st.site = &er_emlrtRSI;
            loop_ub = Ym->size[1];
            i1 = Yb->size[0] * Yb->size[1];
            Yb->size[0] = bsb->size[0];
            Yb->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(&st, Yb, i1, &fi_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              irank = bsb->size[0];
              for (partialTrueCount = 0; partialTrueCount < irank;
                   partialTrueCount++) {
                k = (int32_T)bsb->data[partialTrueCount];
                if ((k < 1) || (k > Ym->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)bsb->
                    data[partialTrueCount], 1, Ym->size[0], &yl_emlrtBCI, &st);
                }

                Yb->data[partialTrueCount + Yb->size[0] * i1] = Ym->data[(k +
                  Ym->size[0] * i1) - 1];
              }
            }

            b_st.site = &xc_emlrtRSI;
            e_dynamic_size_checks(&b_st, r2, Yb, bsb->size[0], bsb->size[0]);
            b_st.site = &wc_emlrtRSI;
            f_mtimes(&b_st, r2, Yb, R);
            st.site = &er_emlrtRSI;
            inv(&st, R, S);
            loop_ub = Ym->size[1];
            i1 = b_Y->size[0] * b_Y->size[1];
            b_Y->size[0] = bsb->size[0];
            b_Y->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(sp, b_Y, i1, &ki_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              irank = bsb->size[0];
              for (partialTrueCount = 0; partialTrueCount < irank;
                   partialTrueCount++) {
                k = (int32_T)bsb->data[partialTrueCount];
                if ((k < 1) || (k > Ym->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)bsb->
                    data[partialTrueCount], 1, Ym->size[0], &cm_emlrtBCI,
                    (emlrtCTX)sp);
                }

                b_Y->data[partialTrueCount + b_Y->size[0] * i1] = Ym->data[(k +
                  Ym->size[0] * i1) - 1];
              }
            }

            st.site = &dr_emlrtRSI;
            qr(&st, b_Y, Yb, R);
          }

          st.site = &cr_emlrtRSI;
          i1 = MDltminT->size[0];
          MDltminT->size[0] = S->size[0] * S->size[1];
          emxEnsureCapacity_boolean_T(&st, MDltminT, i1, &oi_emlrtRTEI);
          loop_ub = S->size[0] * S->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            MDltminT->data[i1] = muDoubleScalarIsInf(S->data[i1]);
          }

          b_st.site = &gj_emlrtRSI;
          c_st.site = &hj_emlrtRSI;
          irank = combineVectorElements(&c_st, MDltminT);
          if (irank > 0) {
            st.site = &ncb_emlrtRSI;
            b_disp(&st, q_emlrt_marshallOut(&st, cv1), j_emlrt_marshallOut(&st,
                    cv8), &ec_emlrtMCI);
            st.site = &ccb_emlrtRSI;
            disp(&st, b_emlrt_marshallOut(&st, cv7), &fc_emlrtMCI);
            i = mmd->size[0] * mmd->size[1];
            mmd->size[0] = 1;
            mmd->size[1] = 1;
            emxEnsureCapacity_real_T(sp, mmd, i, &ri_emlrtRTEI);
            mmd->data[0] = rtNaN;
            i = Un->size[0] * Un->size[1];
            Un->size[0] = 1;
            Un->size[1] = 1;
            emxEnsureCapacity_real_T(sp, Un, i, &ti_emlrtRTEI);
            Un->data[0] = rtNaN;
            exitg1 = true;
          } else {
            st.site = &br_emlrtRSI;
            if (R->size[1] != Ym->size[1]) {
              emlrtErrorWithMessageIdR2018a(&st, &bb_emlrtRTEI,
                "MATLAB:dimagree", "MATLAB:dimagree", 0);
            }

            b_st.site = &lv_emlrtRSI;
            mrdiv(&b_st, Ym, R, Yb);

            /*  Compute squared Mahalanobis distances */
            st.site = &ar_emlrtRSI;
            b_power(&st, Yb, r2);
            st.site = &ar_emlrtRSI;
            b_sum(&st, r2, MD);
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
            i1 = unit->size[0];
            unit->size[0] = MD->size[0];
            emxEnsureCapacity_real_T(sp, unit, i1, &yi_emlrtRTEI);
            loop_ub = MD->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              unit->data[i1] = MD->data[i1];
            }

            if (b_mm > percn) {
              k = bsbT->size[0];
              for (b_i = 0; b_i < k; b_i++) {
                if (bsbT->data[b_i]) {
                  if (b_i + 1 > unit->size[0]) {
                    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, unit->size[0],
                      &km_emlrtBCI, (emlrtCTX)sp);
                  }

                  unit->data[b_i] = rtInf;
                }
              }
            } else {
              i1 = ii->size[0];
              ii->size[0] = bsb->size[0];
              emxEnsureCapacity_int32_T(sp, ii, i1, &bj_emlrtRTEI);
              loop_ub = bsb->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                if (bsb->data[i1] != (int32_T)muDoubleScalarFloor(bsb->data[i1]))
                {
                  emlrtIntegerCheckR2012b(bsb->data[i1], &y_emlrtDCI, (emlrtCTX)
                    sp);
                }

                partialTrueCount = (int32_T)bsb->data[i1];
                if ((partialTrueCount < 1) || (partialTrueCount > MD->size[0]))
                {
                  emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i1], 1,
                    MD->size[0], &jm_emlrtBCI, (emlrtCTX)sp);
                }

                ii->data[i1] = partialTrueCount;
              }

              loop_ub = ii->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                unit->data[ii->data[i1] - 1] = rtInf;
              }
            }

            /*  oldbsbF=bsbF; */
            i1 = oldbsbT->size[0];
            oldbsbT->size[0] = bsbT->size[0];
            emxEnsureCapacity_boolean_T(sp, oldbsbT, i1, &cj_emlrtRTEI);
            loop_ub = bsbT->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              oldbsbT->data[i1] = bsbT->data[i1];
            }

            /*  Take minimum distance of the units not belonging to subset */
            st.site = &yq_emlrtRSI;
            b_st.site = &ww_emlrtRSI;
            c_st.site = &xw_emlrtRSI;
            f_st.site = &yw_emlrtRSI;
            if (unit->size[0] < 1) {
              emlrtErrorWithMessageIdR2018a(&f_st, &emlrtRTEI,
                "Coder:toolbox:eml_min_or_max_varDimZero",
                "Coder:toolbox:eml_min_or_max_varDimZero", 0);
            }

            g_st.site = &ax_emlrtRSI;
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
              h_st.site = &kq_emlrtRSI;
              if (!muDoubleScalarIsNaN(unit->data[0])) {
                idx = 1;
              } else {
                idx = 0;
                i_st.site = &lq_emlrtRSI;
                if (unit->size[0] > 2147483646) {
                  j_st.site = &ad_emlrtRSI;
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
                h_st.site = &jq_emlrtRSI;
                ex = unit->data[idx - 1];
                nwhile = idx + 1;
                i_st.site = &mq_emlrtRSI;
                if ((idx + 1 <= unit->size[0]) && (unit->size[0] > 2147483646))
                {
                  j_st.site = &ad_emlrtRSI;
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
            i1 = MDltminT->size[0];
            MDltminT->size[0] = MD->size[0];
            emxEnsureCapacity_boolean_T(sp, MDltminT, i1, &jj_emlrtRTEI);
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
                  &hb_emlrtECI, (emlrtCTX)sp);
              }

              i1 = MDltminbsb->size[0];
              MDltminbsb->size[0] = MDltminT->size[0];
              emxEnsureCapacity_boolean_T(sp, MDltminbsb, i1, &mj_emlrtRTEI);
              loop_ub = MDltminT->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                MDltminbsb->data[i1] = (MDltminT->data[i1] && bsbT->data[i1]);
              }
            } else {
              i1 = MDltminbsb->size[0];
              MDltminbsb->size[0] = bsb->size[0];
              emxEnsureCapacity_boolean_T(sp, MDltminbsb, i1, &lj_emlrtRTEI);
              loop_ub = bsb->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                if (bsb->data[i1] != (int32_T)muDoubleScalarFloor(bsb->data[i1]))
                {
                  emlrtIntegerCheckR2012b(bsb->data[i1], &ab_emlrtDCI, (emlrtCTX)
                    sp);
                }

                partialTrueCount = (int32_T)bsb->data[i1];
                if ((partialTrueCount < 1) || (partialTrueCount > MDltminT->
                     size[0])) {
                  emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1,
                    MDltminT->size[0], &nm_emlrtBCI, (emlrtCTX)sp);
                }

                MDltminbsb->data[i1] = MDltminT->data[partialTrueCount - 1];
              }
            }

            /*  Find number of units of old subset which have a MD <= minMD */
            st.site = &xq_emlrtRSI;
            b_st.site = &gj_emlrtRSI;
            c_st.site = &hj_emlrtRSI;
            irank = combineVectorElements(&c_st, MDltminbsb);

            /*  rankgap is the difference between m+1 (size of new size) and */
            /*  the number of units of old subset which have a distance <= */
            /*  minMD. For example if rankgap is =3, three more units must be */
            /*  added. */
            rankgap = (b_mm + 1.0) - (real_T)irank;
            if (rankgap == 1.0) {
              /*  Just one new unit entered subset */
              i1 = unit->size[0];
              unit->size[0] = 1;
              emxEnsureCapacity_real_T(sp, unit, i1, &pj_emlrtRTEI);
              unit->data[0] = idx;

              /*  Compute new bsbT and new bsb */
              if (b_mm <= percn) {
                /*  new bsb is equal to oldbsb plus unit which just entered */
                i1 = bsb->size[0];
                partialTrueCount = bsb->size[0];
                bsb->size[0]++;
                emxEnsureCapacity_real_T(sp, bsb, partialTrueCount,
                  &xh_emlrtRTEI);
                bsb->data[i1] = idx;
              }

              /*  bsbT is equal to old bsbT after adding a single true in */
              /*  correspondence of the unit which entered subset */
              if ((idx < 1) || (idx > bsbT->size[0])) {
                emlrtDynamicBoundsCheckR2012b(idx, 1, bsbT->size[0],
                  &pm_emlrtBCI, (emlrtCTX)sp);
              }

              bsbT->data[idx - 1] = true;
            } else if ((rankgap > 1.0) && (rankgap <= 10.0)) {
              /*  MDmod is the vector of Mahalanobis distance which will have */
              /*  a Inf in correspondence of the units of old subset which */
              /*  had a MD smaller than minMD */
              i1 = unit->size[0];
              unit->size[0] = MD->size[0];
              emxEnsureCapacity_real_T(sp, unit, i1, &rj_emlrtRTEI);
              loop_ub = MD->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                unit->data[i1] = MD->data[i1];
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
                for (i1 = 0; i1 < loop_ub; i1++) {
                  if (bsb->data[i1] != (int32_T)muDoubleScalarFloor(bsb->data[i1]))
                  {
                    emlrtIntegerCheckR2012b(bsb->data[i1], &cb_emlrtDCI,
                      (emlrtCTX)sp);
                  }

                  partialTrueCount = (int32_T)bsb->data[i1];
                  if ((partialTrueCount < 1) || (partialTrueCount >
                       MDltminT->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1,
                      MDltminT->size[0], &rm_emlrtBCI, (emlrtCTX)sp);
                  }
                }

                k = bsb->size[0] - 1;
                trueCount = 0;
                for (b_i = 0; b_i <= k; b_i++) {
                  if (MDltminT->data[(int32_T)bsb->data[b_i] - 1]) {
                    trueCount++;
                  }
                }

                i1 = bsbrini->size[0];
                bsbrini->size[0] = trueCount;
                emxEnsureCapacity_uint32_T(sp, bsbrini, i1, &xh_emlrtRTEI);
                partialTrueCount = 0;
                for (b_i = 0; b_i <= k; b_i++) {
                  if (MDltminT->data[(int32_T)bsb->data[b_i] - 1]) {
                    if (b_i + 1 > bsb->size[0]) {
                      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, bsb->size[0],
                        &tm_emlrtBCI, (emlrtCTX)sp);
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

                i1 = unitout->size[0];
                unitout->size[0] = trueCount;
                emxEnsureCapacity_real_T(sp, unitout, i1, &xh_emlrtRTEI);
                partialTrueCount = 0;
                for (b_i = 0; b_i <= k; b_i++) {
                  if (!MDltminT->data[(int32_T)bsb->data[b_i] - 1]) {
                    if (b_i + 1 > bsb->size[0]) {
                      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, bsb->size[0],
                        &wm_emlrtBCI, (emlrtCTX)sp);
                    }

                    unitout->data[partialTrueCount] = bsb->data[b_i];
                    partialTrueCount++;
                  }
                }

                i1 = ii->size[0];
                ii->size[0] = bsbrini->size[0];
                emxEnsureCapacity_int32_T(sp, ii, i1, &yj_emlrtRTEI);
                loop_ub = bsbrini->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  if (((int32_T)bsbrini->data[i1] < 1) || ((int32_T)
                       bsbrini->data[i1] > MD->size[0])) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)bsbrini->data[i1], 1,
                      MD->size[0], &vm_emlrtBCI, (emlrtCTX)sp);
                  }

                  ii->data[i1] = (int32_T)bsbrini->data[i1];
                }

                loop_ub = ii->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  unit->data[ii->data[i1] - 1] = rtInf;
                }
              } else {
                /*  bsbriniT = Boolean vector which is true if the */
                /*  corresponding unit belonged to previous subset and */
                /*  has a MD smaller than minMD. This vector is nothing */
                /*  but the Boolean version of bsbrini. */
                /*  bsbriniT=MDltminT & bsbT; */
                i1 = bsbriniT->size[0];
                bsbriniT->size[0] = MDltminbsb->size[0];
                emxEnsureCapacity_boolean_T(sp, bsbriniT, i1, &vj_emlrtRTEI);
                loop_ub = MDltminbsb->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  bsbriniT->data[i1] = MDltminbsb->data[i1];
                }

                k = MDltminbsb->size[0];
                for (b_i = 0; b_i < k; b_i++) {
                  if (MDltminbsb->data[b_i]) {
                    if (b_i + 1 > unit->size[0]) {
                      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, unit->size[0],
                        &sm_emlrtBCI, (emlrtCTX)sp);
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
              i1 = (int32_T)rankgap;
              for (loop_ub = 0; loop_ub < i1; loop_ub++) {
                st.site = &wq_emlrtRSI;
                b_st.site = &ww_emlrtRSI;
                c_st.site = &xw_emlrtRSI;
                f_st.site = &yw_emlrtRSI;
                if (unit->size[0] < 1) {
                  emlrtErrorWithMessageIdR2018a(&f_st, &emlrtRTEI,
                    "Coder:toolbox:eml_min_or_max_varDimZero",
                    "Coder:toolbox:eml_min_or_max_varDimZero", 0);
                }

                g_st.site = &ax_emlrtRSI;
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
                  h_st.site = &kq_emlrtRSI;
                  if (!muDoubleScalarIsNaN(unit->data[0])) {
                    idx = 1;
                  } else {
                    idx = 0;
                    i_st.site = &lq_emlrtRSI;
                    if (unit->size[0] > 2147483646) {
                      j_st.site = &ad_emlrtRSI;
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
                    h_st.site = &jq_emlrtRSI;
                    a = unit->data[idx - 1];
                    nwhile = idx + 1;
                    i_st.site = &mq_emlrtRSI;
                    if ((idx + 1 <= unit->size[0]) && (unit->size[0] >
                         2147483646)) {
                      j_st.site = &ad_emlrtRSI;
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
                    &bn_emlrtBCI, (emlrtCTX)sp);
                }

                if (bsbT->data[idx - 1]) {
                  if (b_mm <= percn) {
                    if ((zz + 1 < 1) || (zz + 1 > 10)) {
                      emlrtDynamicBoundsCheckR2012b(zz + 1, 1, 10, &il_emlrtBCI,
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
                            unitout->size[0], &en_emlrtBCI, (emlrtCTX)sp);
                        }

                        unitout->data[partialTrueCount] = unitout->data[b_i];
                        partialTrueCount++;
                      }
                    }

                    partialTrueCount = unitout->size[0];
                    unitout->size[0] = trueCount;
                    emxEnsureCapacity_real_T(sp, unitout, partialTrueCount,
                      &xh_emlrtRTEI);
                  } else {
                    if (idx > bsbriniT->size[0]) {
                      emlrtDynamicBoundsCheckR2012b(idx, 1, bsbriniT->size[0],
                        &cn_emlrtBCI, (emlrtCTX)sp);
                    }

                    bsbriniT->data[idx - 1] = true;
                  }
                } else {
                  if ((lunit + 1 < 1) || (lunit + 1 > 10)) {
                    emlrtDynamicBoundsCheckR2012b(lunit + 1, 1, 10, &gl_emlrtBCI,
                      (emlrtCTX)sp);
                  }

                  unitadd[lunit] = idx;
                  lunit++;
                }

                /*  disp(posunit(posncl1)) */
                if (idx > unit->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(idx, 1, unit->size[0],
                    &dn_emlrtBCI, (emlrtCTX)sp);
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
                emlrtDynamicBoundsCheckR2012b(lunit, 1, 10, &hl_emlrtBCI,
                  (emlrtCTX)sp);
              }

              i1 = unit->size[0];
              unit->size[0] = lunit;
              emxEnsureCapacity_real_T(sp, unit, i1, &ak_emlrtRTEI);
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
                  emlrtDynamicBoundsCheckR2012b(zz, 1, 10, &jl_emlrtBCI,
                    (emlrtCTX)sp);
                }

                i1 = bsbr->size[0];
                bsbr->size[0] = bsbrini->size[0] + zz;
                emxEnsureCapacity_int32_T(sp, bsbr, i1, &ck_emlrtRTEI);
                loop_ub = bsbrini->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  bsbr->data[i1] = (int32_T)bsbrini->data[i1];
                }

                for (i1 = 0; i1 < zz; i1++) {
                  bsbr->data[i1 + bsbrini->size[0]] = bsbradd[i1];
                }

                i1 = bsb->size[0];
                bsb->size[0] = bsbr->size[0] + lunit;
                emxEnsureCapacity_real_T(sp, bsb, i1, &dk_emlrtRTEI);
                loop_ub = bsbr->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  bsb->data[i1] = bsbr->data[i1];
                }

                for (i1 = 0; i1 < lunit; i1++) {
                  bsb->data[i1 + bsbr->size[0]] = unitadd[i1];
                }

                i1 = bsbT->size[0];
                bsbT->size[0] = n;
                emxEnsureCapacity_boolean_T(sp, bsbT, i1, &gk_emlrtRTEI);
                for (i1 = 0; i1 < n; i1++) {
                  bsbT->data[i1] = false;
                }

                i1 = ii->size[0];
                ii->size[0] = bsb->size[0];
                emxEnsureCapacity_int32_T(sp, ii, i1, &ik_emlrtRTEI);
                loop_ub = bsb->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  partialTrueCount = (int32_T)bsb->data[i1];
                  if ((partialTrueCount < 1) || (partialTrueCount > n)) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i1], 1, n,
                      &xm_emlrtBCI, (emlrtCTX)sp);
                  }

                  ii->data[i1] = partialTrueCount;
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
                  partialTrueCount = unitadd[i1];
                  if ((partialTrueCount < 1) || (partialTrueCount >
                       bsbriniT->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1,
                      bsbriniT->size[0], &ym_emlrtBCI, (emlrtCTX)sp);
                  }

                  d_tmp_data[i1] = partialTrueCount;
                }

                for (i1 = 0; i1 < lunit; i1++) {
                  bsbriniT->data[d_tmp_data[i1] - 1] = true;
                }

                i1 = bsbT->size[0];
                bsbT->size[0] = bsbriniT->size[0];
                emxEnsureCapacity_boolean_T(sp, bsbT, i1, &fk_emlrtRTEI);
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
              i1 = unit->size[0];
              unit->size[0] = MD->size[0];
              emxEnsureCapacity_real_T(sp, unit, i1, &sj_emlrtRTEI);
              loop_ub = MD->size[0] - 1;
              for (i1 = 0; i1 <= loop_ub; i1++) {
                unit->data[i1] = MD->data[i1];
              }

              st.site = &vq_emlrtRSI;
              ksor = quickselectFS(&st, unit, b_mm + 1.0, idx);
              i1 = bsbT->size[0];
              bsbT->size[0] = MD->size[0];
              emxEnsureCapacity_boolean_T(sp, bsbT, i1, &tj_emlrtRTEI);
              loop_ub = MD->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                bsbT->data[i1] = (MD->data[i1] <= ksor);
              }

              st.site = &uq_emlrtRSI;
              b_st.site = &gj_emlrtRSI;
              c_st.site = &hj_emlrtRSI;
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

                  i1 = bsb->size[0];
                  bsb->size[0] = trueCount;
                  emxEnsureCapacity_real_T(sp, bsb, i1, &xh_emlrtRTEI);
                  partialTrueCount = 0;
                  for (b_i = 0; b_i <= k; b_i++) {
                    if (bsbT->data[b_i]) {
                      if (b_i + 1 > seq->size[0]) {
                        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                          &um_emlrtBCI, (emlrtCTX)sp);
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
                      &bl_emlrtBCI, (emlrtCTX)sp);
                  }
                }

                k = MD->size[0];
                for (b_i = 0; b_i < k; b_i++) {
                  if ((MD->data[b_i] == ksor) && (b_i + 1 > seq->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                      &al_emlrtBCI, (emlrtCTX)sp);
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
                    emlrtDynamicBoundsCheckR2012b(1, 1, trueCount, &kl_emlrtBCI,
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
                      &ll_emlrtBCI, (emlrtCTX)sp);
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
                st.site = &tq_emlrtRSI;
                indexShapeCheck(&st, trueCount, c_Y);
                k = MD->size[0] - 1;
                trueCount = 0;
                for (b_i = 0; b_i <= k; b_i++) {
                  if (MD->data[b_i] < ksor) {
                    trueCount++;
                  }
                }

                i1 = r8->size[0];
                r8->size[0] = trueCount;
                emxEnsureCapacity_int32_T(sp, r8, i1, &xh_emlrtRTEI);
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

                i1 = r9->size[0];
                r9->size[0] = trueCount;
                emxEnsureCapacity_int32_T(sp, r9, i1, &xh_emlrtRTEI);
                partialTrueCount = 0;
                for (b_i = 0; b_i <= irank; b_i++) {
                  if (MD->data[b_i] == ksor) {
                    r9->data[partialTrueCount] = b_i + 1;
                    partialTrueCount++;
                  }
                }

                i1 = bsb->size[0];
                bsb->size[0] = r8->size[0] + loop_ub;
                emxEnsureCapacity_real_T(sp, bsb, i1, &ek_emlrtRTEI);
                irank = r8->size[0];
                for (i1 = 0; i1 < irank; i1++) {
                  bsb->data[i1] = seq->data[r8->data[i1] - 1];
                }

                for (i1 = 0; i1 < loop_ub; i1++) {
                  bsb->data[i1 + r8->size[0]] = seq->data[r9->data[i1] - 1];
                }

                i1 = bsbT->size[0];
                bsbT->size[0] = n;
                emxEnsureCapacity_boolean_T(sp, bsbT, i1, &hk_emlrtRTEI);
                for (i1 = 0; i1 < n; i1++) {
                  bsbT->data[i1] = false;
                }

                i1 = ii->size[0];
                ii->size[0] = bsb->size[0];
                emxEnsureCapacity_int32_T(sp, ii, i1, &jk_emlrtRTEI);
                loop_ub = bsb->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  partialTrueCount = (int32_T)bsb->data[i1];
                  if (bsb->data[i1] != partialTrueCount) {
                    emlrtIntegerCheckR2012b(bsb->data[i1], &db_emlrtDCI,
                      (emlrtCTX)sp);
                  }

                  if (partialTrueCount > n) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i1], 1, n,
                      &an_emlrtBCI, (emlrtCTX)sp);
                  }

                  ii->data[i1] = partialTrueCount;
                }

                loop_ub = ii->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  bsbT->data[ii->data[i1] - 1] = true;
                }
              }

              /*  unit = vector containing units which just entered subset; */
              i1 = MDltminT->size[0];
              MDltminT->size[0] = oldbsbT->size[0];
              emxEnsureCapacity_boolean_T(sp, MDltminT, i1, &wj_emlrtRTEI);
              loop_ub = oldbsbT->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                MDltminT->data[i1] = !oldbsbT->data[i1];
              }

              if (bsbT->size[0] != MDltminT->size[0]) {
                emlrtSizeEqCheck1DR2012b(bsbT->size[0], MDltminT->size[0],
                  &ib_emlrtECI, (emlrtCTX)sp);
              }

              st.site = &sq_emlrtRSI;
              i1 = MDltminT->size[0];
              MDltminT->size[0] = bsbT->size[0];
              emxEnsureCapacity_boolean_T(&st, MDltminT, i1, &xj_emlrtRTEI);
              loop_ub = bsbT->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                MDltminT->data[i1] = (bsbT->data[i1] && MDltminT->data[i1]);
              }

              b_st.site = &nd_emlrtRSI;
              eml_find(&b_st, MDltminT, ii);
              i1 = unit->size[0];
              unit->size[0] = ii->size[0];
              emxEnsureCapacity_real_T(&st, unit, i1, &bk_emlrtRTEI);
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
                emlrtIntegerCheckR2012b(d, &bb_emlrtDCI, (emlrtCTX)sp);
              }

              if (((int32_T)d < 1) || ((int32_T)d > mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, mmd->size[0],
                  &qm_emlrtBCI, (emlrtCTX)sp);
              }

              mmd->data[((int32_T)d + mmd->size[0]) - 1] = ex;
              if (d != a) {
                emlrtIntegerCheckR2012b(d, &bb_emlrtDCI, (emlrtCTX)sp);
              }

              if (((int32_T)d < 1) || ((int32_T)d > mmd->size[0])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, mmd->size[0],
                  &qm_emlrtBCI, (emlrtCTX)sp);
              }

              st.site = &rq_emlrtRSI;
              x = &mmd->data[((int32_T)d + mmd->size[0]) - 1];
              if (*x < 0.0) {
                emlrtErrorWithMessageIdR2018a(&st, &x_emlrtRTEI,
                  "Coder:toolbox:ElFunDomainError",
                  "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
              }

              *x = muDoubleScalarSqrt(*x);
            }

            /*  store mean of units forming old subset */
            i1 = meoldbsb->size[0] * meoldbsb->size[1];
            meoldbsb->size[0] = 1;
            meoldbsb->size[1] = ym->size[1];
            emxEnsureCapacity_real_T(sp, meoldbsb, i1, &uj_emlrtRTEI);
            loop_ub = ym->size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              meoldbsb->data[i1] = ym->data[i1];
            }

            lunit = unit->size[0];
            if (b_mm >= init1) {
              if (unit->size[0] <= 10) {
                if (2 > unit->size[0] + 1) {
                  i1 = -1;
                  partialTrueCount = -1;
                } else {
                  i1 = 0;
                  partialTrueCount = unit->size[0];
                }

                d = (b_mm - init1) + 1.0;
                if (d != (int32_T)muDoubleScalarFloor(d)) {
                  emlrtIntegerCheckR2012b(d, &n_emlrtDCI, (emlrtCTX)sp);
                }

                if (((int32_T)d < 1) || ((int32_T)d > Un->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Un->size[0],
                    &ol_emlrtBCI, (emlrtCTX)sp);
                }

                c_Y[0] = 1;
                irank = partialTrueCount - i1;
                c_Y[1] = irank;
                emlrtSubAssignSizeCheckR2012b(&c_Y[0], 2, &unit->size[0], 1,
                  &lb_emlrtECI, (emlrtCTX)sp);
                for (partialTrueCount = 0; partialTrueCount < irank;
                     partialTrueCount++) {
                  Un->data[((int32_T)d + Un->size[0] * ((i1 + partialTrueCount)
                             + 1)) - 1] = unit->data[partialTrueCount];
                }
              } else {
                if (varargin_6) {
                  st.site = &qq_emlrtRSI;
                  int2str(&st, b_mm, tmp_data, c_Y);
                  tmp_size[0] = 1;
                  tmp_size[1] = c_Y[1] + 44;
                  for (i1 = 0; i1 < 44; i1++) {
                    b_tmp_data[i1] = cv9[i1];
                  }

                  loop_ub = c_Y[1];
                  if (0 <= loop_ub - 1) {
                    memcpy(&b_tmp_data[44], &tmp_data[0], loop_ub * sizeof
                           (char_T));
                  }

                  st.site = &fdb_emlrtRSI;
                  disp(&st, w_emlrt_marshallOut(&st, b_tmp_data, tmp_size),
                       &gc_emlrtMCI);
                  st.site = &pq_emlrtRSI;
                  int2str(&st, unit->size[0], tmp_data, c_Y);
                  b_tmp_size[0] = 1;
                  b_tmp_size[1] = c_Y[1] + 30;
                  for (i1 = 0; i1 < 30; i1++) {
                    c_tmp_data[i1] = cv10[i1];
                  }

                  loop_ub = c_Y[1];
                  if (0 <= loop_ub - 1) {
                    memcpy(&c_tmp_data[30], &tmp_data[0], loop_ub * sizeof
                           (char_T));
                  }

                  st.site = &edb_emlrtRSI;
                  disp(&st, w_emlrt_marshallOut(&st, c_tmp_data, b_tmp_size),
                       &hc_emlrtMCI);
                }

                st.site = &oq_emlrtRSI;
                b_indexShapeCheck(&st, unit->size[0]);
                d = (b_mm - init1) + 1.0;
                if (d != (int32_T)muDoubleScalarFloor(d)) {
                  emlrtIntegerCheckR2012b(d, &o_emlrtDCI, (emlrtCTX)sp);
                }

                if (((int32_T)d < 1) || ((int32_T)d > Un->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Un->size[0],
                    &pl_emlrtBCI, (emlrtCTX)sp);
                }

                c_Y[0] = 1;
                c_Y[1] = 10;
                i1 = 10;
                emlrtSubAssignSizeCheckR2012b(&c_Y[0], 2, &i1, 1, &mb_emlrtECI,
                  (emlrtCTX)sp);
                for (i1 = 0; i1 < 10; i1++) {
                  Un->data[((int32_T)d + Un->size[0] * (i1 + 1)) - 1] =
                    unit->data[i1];
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
    st.site = &tcb_emlrtRSI;
    b_disp(&st, q_emlrt_marshallOut(&st, cv1), n_emlrt_marshallOut(&st, cv6),
           &cc_emlrtMCI);
    st.site = &bcb_emlrtRSI;
    disp(&st, b_emlrt_marshallOut(&st, cv7), &dc_emlrtMCI);
    i = mmd->size[0] * mmd->size[1];
    mmd->size[0] = 1;
    mmd->size[1] = 1;
    emxEnsureCapacity_real_T(sp, mmd, i, &sh_emlrtRTEI);
    mmd->data[0] = rtNaN;
    i = Un->size[0] * Un->size[1];
    Un->size[0] = 1;
    Un->size[1] = 1;
    emxEnsureCapacity_real_T(sp, Un, i, &th_emlrtRTEI);
    Un->data[0] = rtNaN;
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
  emxFree_real_T(&r2);
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
