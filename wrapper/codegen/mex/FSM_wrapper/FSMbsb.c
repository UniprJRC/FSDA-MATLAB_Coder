/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSMbsb.c
 *
 * Code generation for function 'FSMbsb'
 *
 */

/* Include files */
#include "FSMbsb.h"
#include "FSM_wrapper_data.h"
#include "FSM_wrapper_emxutil.h"
#include "FSM_wrapper_mexutil.h"
#include "FSM_wrapper_types.h"
#include "bsxfun.h"
#include "cat.h"
#include "colon.h"
#include "combineVectorElements.h"
#include "cov.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "eml_setop.h"
#include "find.h"
#include "ifWhileCond.h"
#include "indexShapeCheck.h"
#include "int2str.h"
#include "inv.h"
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
static emlrtRSInfo ny_emlrtRSI = {
    767,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo oy_emlrtRSI = {
    765,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo py_emlrtRSI = {
    764,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo qy_emlrtRSI = {
    749,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo ry_emlrtRSI = {
    742,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo sy_emlrtRSI = {
    734,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo ty_emlrtRSI = {
    731,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo uy_emlrtRSI = {
    671,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo vy_emlrtRSI = {
    602,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo wy_emlrtRSI = {
    585,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo xy_emlrtRSI = {
    562,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo yy_emlrtRSI = {
    560,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo aab_emlrtRSI = {
    547,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo bab_emlrtRSI = {
    545,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo cab_emlrtRSI = {
    544,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo dab_emlrtRSI = {
    542,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo eab_emlrtRSI = {
    541,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo fab_emlrtRSI = {
    535,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo gab_emlrtRSI = {
    533,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo hab_emlrtRSI = {
    525,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo iab_emlrtRSI = {
    523,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo jab_emlrtRSI = {
    518,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo kab_emlrtRSI = {
    516,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo lab_emlrtRSI = {
    515,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo mab_emlrtRSI = {
    513,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo nab_emlrtRSI = {
    504,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo oab_emlrtRSI = {
    502,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo pab_emlrtRSI = {
    498,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo qab_emlrtRSI = {
    496,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo rab_emlrtRSI = {
    495,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo sab_emlrtRSI = {
    492,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo tab_emlrtRSI = {
    490,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo uab_emlrtRSI = {
    475,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo vab_emlrtRSI = {
    451,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo wab_emlrtRSI = {
    444,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo xab_emlrtRSI = {
    432,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo yab_emlrtRSI = {
    406,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo abb_emlrtRSI = {
    393,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo bbb_emlrtRSI = {
    368,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo cbb_emlrtRSI = {
    346,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo dbb_emlrtRSI = {
    332,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo ebb_emlrtRSI = {
    247,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo fbb_emlrtRSI = {
    245,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo gbb_emlrtRSI = {
    241,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo hbb_emlrtRSI = {
    23,          /* lineNo */
    "intersect", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\intersect.m" /* pathName
                                                                          */
};

static emlrtMCInfo jc_emlrtMCI = {
    254,                                                /* lineNo */
    13,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtMCInfo kc_emlrtMCI = {
    340,                                                /* lineNo */
    9,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtMCInfo lc_emlrtMCI = {
    379,                                                /* lineNo */
    13,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtMCInfo mc_emlrtMCI = {
    410,                                                /* lineNo */
    9,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtMCInfo nc_emlrtMCI = {
    412,                                                /* lineNo */
    5,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtMCInfo oc_emlrtMCI = {
    551,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtMCInfo pc_emlrtMCI = {
    553,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtMCInfo qc_emlrtMCI = {
    764,                                                /* lineNo */
    25,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtMCInfo rc_emlrtMCI = {
    765,                                                /* lineNo */
    25,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtBCInfo wo_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    740,                                                 /* lineNo */
    31,                                                  /* colNo */
    "seq",                                               /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo xo_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    739,                                                 /* lineNo */
    32,                                                  /* colNo */
    "seq",                                               /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo yo_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    436,                                                 /* lineNo */
    37,                                                  /* colNo */
    "seq",                                               /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo ap_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    436,                                                 /* lineNo */
    24,                                                  /* colNo */
    "BB",                                                /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtECInfo tb_emlrtECI = {
    2,                                                  /* nDims */
    406,                                                /* lineNo */
    30,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = {
    420,                                                /* lineNo */
    14,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtECInfo ub_emlrtECI = {
    -1,                                                 /* nDims */
    470,                                                /* lineNo */
    32,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtECInfo vb_emlrtECI = {
    -1,                                                 /* nDims */
    489,                                                /* lineNo */
    27,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtECInfo wb_emlrtECI = {
    2,                                                  /* nDims */
    495,                                                /* lineNo */
    59,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtECInfo xb_emlrtECI = {
    2,                                                  /* nDims */
    498,                                                /* lineNo */
    19,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtBCInfo bp_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    501,                                                 /* lineNo */
    30,                                                  /* colNo */
    "Y",                                                 /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtECInfo yb_emlrtECI = {
    2,                                                  /* nDims */
    501,                                                /* lineNo */
    28,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtECInfo ac_emlrtECI = {
    2,                                                  /* nDims */
    504,                                                /* lineNo */
    27,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtECInfo bc_emlrtECI = {
    2,                                                  /* nDims */
    515,                                                /* lineNo */
    67,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtECInfo cc_emlrtECI = {
    2,                                                  /* nDims */
    518,                                                /* lineNo */
    15,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtBCInfo cp_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    522,                                                 /* lineNo */
    26,                                                  /* colNo */
    "Y",                                                 /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtECInfo dc_emlrtECI = {
    2,                                                  /* nDims */
    522,                                                /* lineNo */
    24,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtECInfo ec_emlrtECI = {
    2,                                                  /* nDims */
    525,                                                /* lineNo */
    23,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtECInfo fc_emlrtECI = {
    2,                                                  /* nDims */
    533,                                                /* lineNo */
    31,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtECInfo gc_emlrtECI = {
    -1,                                                 /* nDims */
    595,                                                /* lineNo */
    28,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtBCInfo dp_emlrtBCI = {
    1,                                                   /* iFirst */
    10,                                                  /* iLast */
    691,                                                 /* lineNo */
    33,                                                  /* colNo */
    "unitadd",                                           /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    3                                                    /* checkKind */
};

static emlrtBCInfo ep_emlrtBCI = {
    1,                                                   /* iFirst */
    10,                                                  /* iLast */
    700,                                                 /* lineNo */
    32,                                                  /* colNo */
    "unitadd",                                           /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo fp_emlrtBCI = {
    1,                                                   /* iFirst */
    10,                                                  /* iLast */
    681,                                                 /* lineNo */
    37,                                                  /* colNo */
    "bsbradd",                                           /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    3                                                    /* checkKind */
};

static emlrtBCInfo gp_emlrtBCI = {
    1,                                                   /* iFirst */
    10,                                                  /* iLast */
    706,                                                 /* lineNo */
    45,                                                  /* colNo */
    "bsbradd",                                           /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo hp_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    742,                                                 /* lineNo */
    39,                                                  /* colNo */
    "bsbeq",                                             /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo ip_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    742,                                                 /* lineNo */
    41,                                                  /* colNo */
    "bsbeq",                                             /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtECInfo hc_emlrtECI = {
    -1,                                                 /* nDims */
    749,                                                /* lineNo */
    27,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtBCInfo jp_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    434,                                                 /* lineNo */
    28,                                                  /* colNo */
    "BB",                                                /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtECInfo ic_emlrtECI = {
    -1,                                                 /* nDims */
    434,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtBCInfo kp_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    436,                                                 /* lineNo */
    29,                                                  /* colNo */
    "BB",                                                /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtECInfo jc_emlrtECI = {
    -1,                                                 /* nDims */
    436,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtDCInfo fb_emlrtDCI = {
    761,                                                 /* lineNo */
    24,                                                  /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtBCInfo lp_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    761,                                                 /* lineNo */
    24,                                                  /* colNo */
    "Un",                                                /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtECInfo kc_emlrtECI = {
    -1,                                                 /* nDims */
    761,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtDCInfo gb_emlrtDCI = {
    767,                                                 /* lineNo */
    24,                                                  /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtBCInfo mp_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    767,                                                 /* lineNo */
    24,                                                  /* colNo */
    "Un",                                                /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtECInfo lc_emlrtECI = {
    -1,                                                 /* nDims */
    767,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtDCInfo hb_emlrtDCI = {
    372,                                                 /* lineNo */
    20,                                                  /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = {
    372,                                                 /* lineNo */
    20,                                                  /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    4                                                    /* checkKind */
};

static emlrtBCInfo np_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    247,                                                 /* lineNo */
    24,                                                  /* colNo */
    "Y",                                                 /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = {
    308,                                                 /* lineNo */
    6,                                                   /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtBCInfo op_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    308,                                                 /* lineNo */
    6,                                                   /* colNo */
    "bsbT",                                              /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtDCInfo kb_emlrtDCI = {
    372,                                                 /* lineNo */
    9,                                                   /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = {
    372,                                                 /* lineNo */
    9,                                                   /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    4                                                    /* checkKind */
};

static emlrtDCInfo mb_emlrtDCI = {
    393,                                                 /* lineNo */
    33,                                                  /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtDCInfo nb_emlrtDCI = {
    393,                                                 /* lineNo */
    33,                                                  /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    4                                                    /* checkKind */
};

static emlrtBCInfo pp_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    406,                                                 /* lineNo */
    12,                                                  /* colNo */
    "Y",                                                 /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo qp_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    406,                                                 /* lineNo */
    36,                                                  /* colNo */
    "Y",                                                 /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo rp_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    406,                                                 /* lineNo */
    52,                                                  /* colNo */
    "Y",                                                 /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo sp_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    424,                                                 /* lineNo */
    18,                                                  /* colNo */
    "Y",                                                 /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtDCInfo ob_emlrtDCI = {
    424,                                                 /* lineNo */
    18,                                                  /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtBCInfo tp_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    426,                                                 /* lineNo */
    18,                                                  /* colNo */
    "Y",                                                 /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtDCInfo pb_emlrtDCI = {
    434,                                                 /* lineNo */
    24,                                                  /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtBCInfo up_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    434,                                                 /* lineNo */
    24,                                                  /* colNo */
    "BB",                                                /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo vp_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    544,                                                 /* lineNo */
    26,                                                  /* colNo */
    "Ym",                                                /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtDCInfo qb_emlrtDCI = {
    544,                                                 /* lineNo */
    26,                                                  /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtBCInfo wp_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    544,                                                 /* lineNo */
    37,                                                  /* colNo */
    "Ym",                                                /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo xp_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    541,                                                 /* lineNo */
    26,                                                  /* colNo */
    "Ym",                                                /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo yp_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    545,                                                 /* lineNo */
    29,                                                  /* colNo */
    "Ym",                                                /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo aq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    513,                                                 /* lineNo */
    22,                                                  /* colNo */
    "Y",                                                 /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtDCInfo rb_emlrtDCI = {
    475,                                                 /* lineNo */
    26,                                                  /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtBCInfo bq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    475,                                                 /* lineNo */
    26,                                                  /* colNo */
    "Y",                                                 /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo cq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    541,                                                 /* lineNo */
    38,                                                  /* colNo */
    "Ym",                                                /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo dq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    471,                                                 /* lineNo */
    29,                                                  /* colNo */
    "seq",                                               /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo eq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    542,                                                 /* lineNo */
    29,                                                  /* colNo */
    "Ym",                                                /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo fq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    492,                                                 /* lineNo */
    34,                                                  /* colNo */
    "Y",                                                 /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtDCInfo sb_emlrtDCI = {
    577,                                                 /* lineNo */
    23,                                                  /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtBCInfo gq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    577,                                                 /* lineNo */
    23,                                                  /* colNo */
    "MDmod",                                             /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo hq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    575,                                                 /* lineNo */
    17,                                                  /* colNo */
    "MDmod",                                             /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo iq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    490,                                                 /* lineNo */
    34,                                                  /* colNo */
    "Y",                                                 /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo jq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    522,                                                 /* lineNo */
    26,                                                  /* colNo */
    "unit",                                              /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo kq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    597,                                                 /* lineNo */
    37,                                                  /* colNo */
    "MDltminT",                                          /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtDCInfo tb_emlrtDCI = {
    597,                                                 /* lineNo */
    37,                                                  /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtBCInfo lq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    501,                                                 /* lineNo */
    30,                                                  /* colNo */
    "unitout",                                           /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo mq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    621,                                                 /* lineNo */
    17,                                                  /* colNo */
    "bsbT",                                              /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtDCInfo ub_emlrtDCI = {
    642,                                                 /* lineNo */
    37,                                                  /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtBCInfo nq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    642,                                                 /* lineNo */
    37,                                                  /* colNo */
    "MDltminT",                                          /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo oq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    658,                                                 /* lineNo */
    21,                                                  /* colNo */
    "MDmod",                                             /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo pq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    736,                                                 /* lineNo */
    29,                                                  /* colNo */
    "seq",                                               /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo qq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    643,                                                 /* lineNo */
    29,                                                  /* colNo */
    "bsb",                                               /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo rq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    649,                                                 /* lineNo */
    27,                                                  /* colNo */
    "MDmod",                                             /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo sq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    648,                                                 /* lineNo */
    29,                                                  /* colNo */
    "bsb",                                               /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo tq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    723,                                                 /* lineNo */
    26,                                                  /* colNo */
    "bsbT",                                              /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo uq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    715,                                                 /* lineNo */
    30,                                                  /* colNo */
    "bsbriniT",                                          /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtDCInfo vb_emlrtDCI = {
    745,                                                 /* lineNo */
    26,                                                  /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtBCInfo vq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    745,                                                 /* lineNo */
    26,                                                  /* colNo */
    "bsbT",                                              /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo wq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    679,                                                 /* lineNo */
    24,                                                  /* colNo */
    "bsbT",                                              /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo xq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    688,                                                 /* lineNo */
    29,                                                  /* colNo */
    "bsbriniT",                                          /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo yq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    695,                                                 /* lineNo */
    21,                                                  /* colNo */
    "MDmod",                                             /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo ar_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    686,                                                 /* lineNo */
    37,                                                  /* colNo */
    "unitout",                                           /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtRTEInfo ap_emlrtRTEI = {
    241,                                                /* lineNo */
    4,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo bp_emlrtRTEI = {
    247,                                                /* lineNo */
    22,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo cp_emlrtRTEI = {
    298,                                                /* lineNo */
    5,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo dp_emlrtRTEI = {
    307,                                                /* lineNo */
    1,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo ep_emlrtRTEI = {
    308,                                                /* lineNo */
    6,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo fp_emlrtRTEI = {
    314,                                                /* lineNo */
    5,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo gp_emlrtRTEI = {
    315,                                                /* lineNo */
    5,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo hp_emlrtRTEI = {
    316,                                                /* lineNo */
    5,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo ip_emlrtRTEI = {
    317,                                                /* lineNo */
    5,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo jp_emlrtRTEI = {
    318,                                                /* lineNo */
    5,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo kp_emlrtRTEI = {
    319,                                                /* lineNo */
    5,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo lp_emlrtRTEI = {
    320,                                                /* lineNo */
    5,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo mp_emlrtRTEI = {
    368,                                                /* lineNo */
    15,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo np_emlrtRTEI = {
    382,                                                /* lineNo */
    5,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo op_emlrtRTEI = {
    368,                                                /* lineNo */
    14,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo pp_emlrtRTEI = {
    387,                                                /* lineNo */
    9,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo qp_emlrtRTEI = {
    368,                                                /* lineNo */
    5,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo rp_emlrtRTEI = {
    372,                                                /* lineNo */
    9,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo sp_emlrtRTEI = {
    393,                                                /* lineNo */
    14,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo tp_emlrtRTEI = {
    393,                                                /* lineNo */
    29,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo up_emlrtRTEI = {
    393,                                                /* lineNo */
    1,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo vp_emlrtRTEI = {
    400,                                                /* lineNo */
    5,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo wp_emlrtRTEI = {
    406,                                                /* lineNo */
    10,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo xp_emlrtRTEI = {
    413,                                                /* lineNo */
    5,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo yp_emlrtRTEI = {
    414,                                                /* lineNo */
    5,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo aq_emlrtRTEI = {
    406,                                                /* lineNo */
    30,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo bq_emlrtRTEI = {
    424,                                                /* lineNo */
    13,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo cq_emlrtRTEI = {
    1,                                                  /* lineNo */
    20,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo dq_emlrtRTEI = {
    426,                                                /* lineNo */
    13,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo eq_emlrtRTEI = {
    444,                                                /* lineNo */
    9,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo fq_emlrtRTEI = {
    434,                                                /* lineNo */
    24,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo gq_emlrtRTEI = {
    544,                                                /* lineNo */
    23,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo hq_emlrtRTEI = {
    509,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo iq_emlrtRTEI = {
    544,                                                /* lineNo */
    34,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo jq_emlrtRTEI = {
    541,                                                /* lineNo */
    23,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo kq_emlrtRTEI = {
    470,                                                /* lineNo */
    42,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo lq_emlrtRTEI = {
    513,                                                /* lineNo */
    20,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo mq_emlrtRTEI = {
    545,                                                /* lineNo */
    26,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo nq_emlrtRTEI = {
    475,                                                /* lineNo */
    24,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo oq_emlrtRTEI = {
    513,                                                /* lineNo */
    13,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo pq_emlrtRTEI = {
    541,                                                /* lineNo */
    35,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo qq_emlrtRTEI = {
    547,                                                /* lineNo */
    20,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo rq_emlrtRTEI = {
    475,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo sq_emlrtRTEI = {
    515,                                                /* lineNo */
    13,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo tq_emlrtRTEI = {
    555,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo uq_emlrtRTEI = {
    542,                                                /* lineNo */
    26,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo vq_emlrtRTEI = {
    556,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo wq_emlrtRTEI = {
    492,                                                /* lineNo */
    32,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo xq_emlrtRTEI = {
    518,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo yq_emlrtRTEI = {
    492,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo ar_emlrtRTEI = {
    572,                                                /* lineNo */
    13,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo br_emlrtRTEI = {
    490,                                                /* lineNo */
    32,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo cr_emlrtRTEI = {
    577,                                                /* lineNo */
    23,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo dr_emlrtRTEI = {
    583,                                                /* lineNo */
    13,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo er_emlrtRTEI = {
    490,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo fr_emlrtRTEI = {
    495,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo gr_emlrtRTEI = {
    522,                                                /* lineNo */
    24,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo hr_emlrtRTEI = {
    533,                                                /* lineNo */
    31,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo ir_emlrtRTEI = {
    498,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo jr_emlrtRTEI = {
    522,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo kr_emlrtRTEI = {
    589,                                                /* lineNo */
    13,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo lr_emlrtRTEI = {
    525,                                                /* lineNo */
    25,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo mr_emlrtRTEI = {
    597,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo nr_emlrtRTEI = {
    595,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo or_emlrtRTEI = {
    501,                                                /* lineNo */
    28,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo pr_emlrtRTEI = {
    501,                                                /* lineNo */
    25,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo qr_emlrtRTEI = {
    612,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo rr_emlrtRTEI = {
    731,                                                /* lineNo */
    38,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo sr_emlrtRTEI = {
    504,                                                /* lineNo */
    29,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo tr_emlrtRTEI = {
    628,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo ur_emlrtRTEI = {
    732,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo vr_emlrtRTEI = {
    755,                                                /* lineNo */
    13,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo wr_emlrtRTEI = {
    657,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo xr_emlrtRTEI = {
    749,                                                /* lineNo */
    34,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo yr_emlrtRTEI = {
    749,                                                /* lineNo */
    27,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo as_emlrtRTEI = {
    749,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo bs_emlrtRTEI = {
    649,                                                /* lineNo */
    27,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo cs_emlrtRTEI = {
    700,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo ds_emlrtRTEI = {
    706,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo es_emlrtRTEI = {
    742,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo fs_emlrtRTEI = {
    707,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo gs_emlrtRTEI = {
    725,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo hs_emlrtRTEI = {
    744,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo is_emlrtRTEI = {
    722,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo js_emlrtRTEI = {
    745,                                                /* lineNo */
    26,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo ks_emlrtRTEI = {
    723,                                                /* lineNo */
    26,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo ls_emlrtRTEI = {
    273,                                                /* lineNo */
    9,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo ms_emlrtRTEI = {
    398,                                                /* lineNo */
    5,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo ns_emlrtRTEI = {
    451,                                                /* lineNo */
    9,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo os_emlrtRTEI = {
    496,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo ps_emlrtRTEI = {
    533,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo qs_emlrtRTEI = {
    542,                                                /* lineNo */
    20,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo rs_emlrtRTEI = {
    350,                                                /* lineNo */
    1,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo ss_emlrtRTEI = {
    562,                                                /* lineNo */
    27,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo ts_emlrtRTEI = {
    426,                                                /* lineNo */
    18,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo us_emlrtRTEI = {
    436,                                                /* lineNo */
    24,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo vs_emlrtRTEI = {
    541,                                                /* lineNo */
    26,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo ws_emlrtRTEI = {
    541,                                                /* lineNo */
    38,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo xs_emlrtRTEI = {
    542,                                                /* lineNo */
    29,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo ys_emlrtRTEI = {
    490,                                                /* lineNo */
    34,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo at_emlrtRTEI = {
    739,                                                /* lineNo */
    32,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo bt_emlrtRTEI = {
    740,                                                /* lineNo */
    31,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo ct_emlrtRTEI = {
    393,                                                /* lineNo */
    6,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRSInfo ybb_emlrtRSI = {
    412,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo acb_emlrtRSI = {
    553,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo mcb_emlrtRSI = {
    551,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo scb_emlrtRSI = {
    410,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo ucb_emlrtRSI = {
    254,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo xcb_emlrtRSI = {
    379,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo adb_emlrtRSI = {
    340,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo cdb_emlrtRSI = {
    765,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo ddb_emlrtRSI = {
    764,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

/* Function Declarations */
static const mxArray *x_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[67]);

/* Function Definitions */
static const mxArray *x_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[67])
{
  static const int32_T iv[2] = {1, 67};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 67, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

void FSMbsb(const emlrtStack *sp, const emxArray_real_T *Y,
            emxArray_real_T *bsb, real_T varargin_2, real_T varargin_4,
            emxArray_real_T *Un, emxArray_real_T *BB)
{
  static const char_T b_cv4[67] = {
      'I', 't', ' ', 'i', 's', ' ', 'i', 'm', 'p', 'o', 's', 's', 'i', 'b',
      'l', 'e', ' ', 't', 'o', ' ', 'm', 'o', 'n', 'i', 't', 'o', 'r', ' ',
      't', 'h', 'e', ' ', 's', 'u', 'b', 's', 'e', 't', ' ', 'f', 'o', 'r',
      ' ', 'v', 'a', 'l', 'u', 'e', 's', ' ', 's', 'm', 'a', 'l', 'l', 'e',
      'r', ' ', 't', 'h', 'a', 'n', ' ', 'i', 'n', 'i', 't'};
  static const char_T b_cv[22] = {'F', 'S', 'D', 'A', ':', 'F', 'S', 'M',
                                  'b', 's', 'b', ':', 'N', 'o', 'F', 'u',
                                  'l', 'l', 'R', 'a', 'n', 'k'};
  static const char_T b_cv3[21] = {'F', 'S', 'D', 'A', ':', 'F', 'S',
                                   'M', 'b', 's', 'b', ':', 'W', 'r',
                                   'o', 'n', 'g', 'I', 'n', 'i', 't'};
  static const char_T b_cv1[7] = {'f', 'p', 'r', 'i', 'n', 't', 'f'};
  static const char_T b_cv2[4] = {'%', 's', '\\', 'n'};
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
  emxArray_boolean_T c_data;
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
  emxArray_int32_T *unit;
  emxArray_real_T b_bsbsteps;
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
  emxArray_real_T *r2;
  emxArray_real_T *seq;
  emxArray_real_T *unitout;
  emxArray_real_T *ym;
  emxArray_real_T *zi;
  emxArray_uint32_T *bsbrini;
  real_T a;
  real_T b_mm;
  real_T init1;
  real_T ksor;
  real_T percn;
  real_T rankgap;
  int32_T bsbradd[10];
  int32_T d_tmp_data[10];
  int32_T unitadd[10];
  int32_T b_tmp_size[2];
  int32_T b_ym[2];
  int32_T iv[2];
  int32_T tmp_size[2];
  int32_T b_i;
  int32_T c_bsbsteps;
  int32_T c_size;
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
  uint32_T ij;
  char_T tmp_data[310];
  char_T b_tmp_data[54];
  char_T c_tmp_data[40];
  boolean_T Ra;
  boolean_T b_c_data;
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
  emxInit_boolean_T(sp, &bsbT, 1, &dp_emlrtRTEI, true);
  /* FSMbsb gives the units belonging to subset at step(s) msel of the forward
   * search */
  /*  */
  /* <a href="matlab: docsearchFS('FSMbsb')">Link to the help function</a> */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*  Y :           Input data. Matrix. */
  /*                n x v data matrix; n observations and v variables. Rows of
   */
  /*                Y represent observations, and columns represent variables.
   */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite
   */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*                 Data Types - single|double */
  /*  bsb :         Units forming subset. Vector. List of units forming the
   * initial subset. */
  /*                If bsb=0 (default) then the procedure starts with p units
   * randomly */
  /*                chosen else if bsb is not 0 the search will start with */
  /*                m0=length(bsb) */
  /*                 Data Types - single|double */
  /*  */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*    bsbsteps :  Save the units forming subsets in selected steps. Vector. */
  /*                It specifies for which steps of the fwd search it is */
  /*                necessary to save the units forming subset. If bsbsteps is
   */
  /*                0 we store the units forming subset in all steps. The */
  /*                default is store the units forming subset in all steps if */
  /*                n<=5000, else to store the units forming subset at steps */
  /*                init and steps which are multiple of 100. For example, as */
  /*                default, if n=7530 and init=6, units forming subset are */
  /*                stored for */
  /*                m=init, 100, 200, ..., 7500. */
  /*                Example - 'bsbsteps',[100 200] stores the unis forming */
  /*                subset in steps 100 and 200. */
  /*                Data Types - double */
  /*  */
  /*  init :       Point where to start monitoring required diagnostics. Scalar.
   */
  /*               Note that if bsb is supplied, init>=length(bsb). If init is
   * not */
  /*               specified it will be set equal to floor(n*0.6). */
  /*                  Example - 'init',50 */
  /*                  Data Types - double */
  /*  */
  /*   msg  :   It controls whether to display or not messages */
  /*                about great interchange on the screen. Boolean. */
  /*                If msg==true (default) messages are displyed on the screen
   */
  /*                else no message is displayed on the screen */
  /*                  Example - 'msg',false */
  /*                  Data Types - logical */
  /*  */
  /*  nocheck :   It controls whether to perform checks on matrix Y. Scalar. */
  /*              If nocheck is equal to 1 no check is performed on matrix Y. */
  /*              As default nocheck=0. */
  /*                  Example - 'nocheck',1 */
  /*                  Data Types - double */
  /*  */
  /*  plots :     Plot on the screen. Scalar. */
  /*                If plots=1, a plot of the monitoring of minMD among */
  /*                the units not belonging to the subset is produced on the */
  /*                screen with 1 per cent, 50 per cent and 99 per cent
   * confidence bands */
  /*                else (default) no plot is produced. */
  /*                Example - 'plots',0 */
  /*                Data Types - double */
  /*  */
  /*  */
  /*  Remark:       The user should only give the input arguments that have to
   */
  /*                change their default value. */
  /*                The name of the input arguments needs to be followed by */
  /*                their value. The order of the input arguments is of no */
  /*                importance. */
  /*  */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite
   */
  /*                values will automatically be excluded from the */
  /*                computations. y can be both a row of column vector. */
  /*  */
  /*  Output: */
  /*  */
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
  /*  See also FSMeda, FSM.m, FSMmmd, FSRbsb, FSRHbsb, FSRBbsb */
  /*  */
  /*  References: */
  /*  */
  /*  Atkinson, A.C., Riani, M. and Cerioli, A. (2004), "Exploring multivariate
   */
  /*  data with the forward search", Springer Verlag, New York. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('FSMbsb')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % FSMbsb with all default options. */
  /*     n=200; */
  /*     v=3; */
  /*     randn('state',123456); */
  /*     Y=randn(n,v); */
  /*     %Contaminated data */
  /*     Ycont=Y; */
  /*     seqcont=11:10:51; */
  /*     disp('Contaminated units') */
  /*     disp(seqcont) */
  /*     Ycont(seqcont,:)=Ycont(seqcont,:)+2.5; */
  /*     Un=FSMbsb(Ycont,0); */
  /* } */
  /* { */
  /*     % FSMbsb with optional argument. */
  /*     n=200; */
  /*     v=3; */
  /*     randn('state',123456); */
  /*     Y=randn(n,v); */
  /*     %Contaminated data */
  /*     Ycont=Y; */
  /*     seqcont=11:10:51; */
  /*     disp('Contaminated units') */
  /*     disp(seqcont) */
  /*     Ycont(seqcont,:)=Ycont(seqcont,:)+2.5; */
  /*     % Analyse the units forming subset in step msel=195 */
  /*     msel=195; */
  /*     [~,BBsel]=FSMbsb(Ycont,0,'bsbsteps',msel); */
  /*     disp(['Units outside subset at step m=' num2str(msel)]) */
  /*     disp(setdiff(1:n,BBsel)) */
  /* } */
  /* { */
  /*     %% Monitoring the units belonging to subset in each step. */
  /*     n=200; */
  /*     v=3; */
  /*     randn('state',123456); */
  /*     Y=randn(n,v); */
  /*     %Contaminated data */
  /*     Ycont=Y; */
  /*     seqcont=11:10:51; */
  /*     disp('Contaminated units') */
  /*     disp(seqcont) */
  /*     Ycont(seqcont,:)=Ycont(seqcont,:)+2.5; */
  /*     % Analyse the units forming subset in step msel=195 */
  /*     msel=195; */
  /*     [~,BBsel]=FSMbsb(Ycont,0,'bsbsteps',msel); */
  /*     seq=1:n; */
  /*     disp(['Units outside subset at step m=' num2str(msel)]) */
  /*     disp(setdiff(seq,BBsel)) */
  /* } */
  /* { */
  /*     % Specifying the point where to start monitoring. */
  /*     % Specifying the point where to start monitoring units belongng to
   * subset. */
  /*     n=200; */
  /*     v=3; */
  /*     randn('state',123456); */
  /*     Y=randn(n,v); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     seqcont=11:10:51; */
  /*     disp('Contaminated units') */
  /*     disp(seqcont) */
  /*     Ycont(seqcont,:)=Ycont(seqcont,:)+2.5; */
  /*     % Analyse the units forming subset in step msel=195 */
  /*     msel=195; */
  /*     [Un,BBsel]=FSMbsb(Ycont,0,'bsbsteps',msel,'init',100); */
  /*     seq=1:n; */
  /*     disp(['Units outside subset at step m=' num2str(msel)]) */
  /*     disp(setdiff(seq,BBsel)) */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checking */
  /* chkinputM does not do any check if option nocheck=1 */
  /* chkinputM makes some input parameters and user options checking in
   * multivariate analysis */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*  X :          Input data. Matrix. */
  /*                n x v data matrix; n observations and v variables. Rows of
   */
  /*                X represent observations, and columns represent variables.
   */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite
   */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*                 Data Types - single|double */
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
  /*     %To examplify the behaviour of chkinputM, we call function FSM with a
   */
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
  /*  Input parameters checking */
  v = Y->size[1];
  n = Y->size[0];
  /*  Write in structure 'options' the options chosen by the user */
  /*  And check if the optional user parameters are reasonable. */
  i = bsbT->size[0];
  bsbT->size[0] = bsb->size[0];
  emxEnsureCapacity_boolean_T(sp, bsbT, i, &ap_emlrtRTEI);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[i] = (bsb->data[i] == 0.0);
  }
  emxInit_real_T(sp, &Yb, 2, &bq_emlrtRTEI, true);
  emxInit_real_T(sp, &b_Y, 2, &wp_emlrtRTEI, true);
  st.site = &gbb_emlrtRSI;
  if (ifWhileCond(&st, bsbT)) {
    Ra = true;
    nwhile = 1;
    while (Ra && (nwhile < 100)) {
      /*  Extract a random sample of size v+1 */
      st.site = &fbb_emlrtRSI;
      randsample(&st, n, (real_T)v + 1.0, bsb);
      /*  Check if the var-cov matrix of the random sample is full (i.e =v) */
      st.site = &ebb_emlrtRSI;
      loop_ub = Y->size[1];
      i = b_Y->size[0] * b_Y->size[1];
      b_Y->size[0] = bsb->size[0];
      b_Y->size[1] = Y->size[1];
      emxEnsureCapacity_real_T(&st, b_Y, i, &bp_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        irank = bsb->size[0];
        for (i1 = 0; i1 < irank; i1++) {
          partialTrueCount = (int32_T)bsb->data[i1];
          if ((partialTrueCount < 1) || (partialTrueCount > Y->size[0])) {
            emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1, Y->size[0],
                                          &np_emlrtBCI, &st);
          }
          b_Y->data[i1 + b_Y->size[0] * i] =
              Y->data[(partialTrueCount + Y->size[0] * i) - 1];
        }
      }
      b_st.site = &ebb_emlrtRSI;
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
      st.site = &ucb_emlrtRSI;
      b_disp(&st, q_emlrt_marshallOut(&st, b_cv), u_emlrt_marshallOut(&st, cv2),
             &jc_emlrtMCI);
    }
  }
  emxInit_real_T(sp, &ym, 2, &eq_emlrtRTEI, true);
  /*  percn = scalar which controls up to which point of the search it is */
  /*  better to use linear indexing to extract the units forming subset. For */
  /*  example percn=0.85*n means that units belonging to susbet are found using
   */
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
  emxInit_real_T(sp, &seq, 1, &ls_emlrtRTEI, true);
  i = seq->size[0];
  seq->size[0] = ym->size[1];
  emxEnsureCapacity_real_T(sp, seq, i, &cp_emlrtRTEI);
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
  emxEnsureCapacity_boolean_T(sp, bsbT, i, &dp_emlrtRTEI);
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[i] = false;
  }
  emxInit_int32_T(sp, &ii, 1, &kg_emlrtRTEI, true);
  i = ii->size[0];
  ii->size[0] = bsb->size[0];
  emxEnsureCapacity_int32_T(sp, ii, i, &ep_emlrtRTEI);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (bsb->data[i] != (int32_T)muDoubleScalarFloor(bsb->data[i])) {
      emlrtIntegerCheckR2012b(bsb->data[i], &jb_emlrtDCI, (emlrtCTX)sp);
    }
    i1 = (int32_T)bsb->data[i];
    if ((i1 < 1) || (i1 > Y->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i], 1, Y->size[0],
                                    &op_emlrtBCI, (emlrtCTX)sp);
    }
    ii->data[i] = i1;
  }
  loop_ub = ii->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[ii->data[i] - 1] = true;
  }
  emxInit_real_T(sp, &S, 2, &fp_emlrtRTEI, true);
  /*  Initialization for Matlab coder */
  rankgap = 0.0;
  i = S->size[0] * S->size[1];
  S->size[0] = Y->size[1];
  S->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(sp, S, i, &fp_emlrtRTEI);
  loop_ub = Y->size[1] * Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    S->data[i] = 0.0;
  }
  emxInit_real_T(sp, &meoldbsb, 2, &gp_emlrtRTEI, true);
  i = meoldbsb->size[0] * meoldbsb->size[1];
  meoldbsb->size[0] = 1;
  meoldbsb->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(sp, meoldbsb, i, &gp_emlrtRTEI);
  loop_ub = Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    meoldbsb->data[i] = 0.0;
  }
  emxInit_boolean_T(sp, &oldbsbT, 1, &hp_emlrtRTEI, true);
  i = oldbsbT->size[0];
  oldbsbT->size[0] = bsbT->size[0];
  emxEnsureCapacity_boolean_T(sp, oldbsbT, i, &hp_emlrtRTEI);
  loop_ub = bsbT->size[0];
  for (i = 0; i < loop_ub; i++) {
    oldbsbT->data[i] = bsbT->data[i];
  }
  emxInit_int32_T(sp, &bsbr, 1, &ip_emlrtRTEI, true);
  i = bsbr->size[0];
  bsbr->size[0] = Y->size[0];
  emxEnsureCapacity_int32_T(sp, bsbr, i, &ip_emlrtRTEI);
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbr->data[i] = 0;
  }
  emxInit_real_T(sp, &unitout, 1, &jp_emlrtRTEI, true);
  i = unitout->size[0];
  unitout->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(sp, unitout, i, &jp_emlrtRTEI);
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    unitout->data[i] = 0.0;
  }
  emxInit_boolean_T(sp, &bsbriniT, 1, &kp_emlrtRTEI, true);
  i = bsbriniT->size[0];
  bsbriniT->size[0] = bsbT->size[0];
  emxEnsureCapacity_boolean_T(sp, bsbriniT, i, &kp_emlrtRTEI);
  loop_ub = bsbT->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbriniT->data[i] = bsbT->data[i];
  }
  emxInit_uint32_T(sp, &bsbrini, 1, &lp_emlrtRTEI, true);
  i = bsbrini->size[0];
  bsbrini->size[0] = Y->size[0];
  emxEnsureCapacity_uint32_T(sp, bsbrini, i, &lp_emlrtRTEI);
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbrini->data[i] = 0U;
  }
  ini0 = bsb->size[0];
  /*  check init */
  init1 = varargin_4;
  if (varargin_4 < (real_T)Y->size[1] + 1.0) {
    st.site = &dbb_emlrtRSI;
    b_st.site = &bt_emlrtRSI;
    c_st.site = &dcb_emlrtRSI;
    d_st.site = &ecb_emlrtRSI;
    e_st.site = &wcb_emlrtRSI;
    g_emlrt_marshallIn(&c_st,
                       d_feval(&c_st, c_emlrt_marshallOut(&c_st, b_cv1),
                               e_emlrt_marshallOut(1.0),
                               d_emlrt_marshallOut(&d_st, b_cv2),
                               r_emlrt_marshallOut(&e_st, cv4), &ic_emlrtMCI),
                       "<output of feval>");
    init1 = (real_T)Y->size[1] + 1.0;
  } else if (varargin_4 < bsb->size[0]) {
    st.site = &adb_emlrtRSI;
    disp(&st, v_emlrt_marshallOut(&st, cv3), &kc_emlrtMCI);
    init1 = bsb->size[0];
  } else if (varargin_4 >= Y->size[0]) {
    st.site = &cbb_emlrtRSI;
    b_st.site = &bt_emlrtRSI;
    c_st.site = &dcb_emlrtRSI;
    d_st.site = &ecb_emlrtRSI;
    e_st.site = &wcb_emlrtRSI;
    g_emlrt_marshallIn(&c_st,
                       d_feval(&c_st, c_emlrt_marshallOut(&c_st, b_cv1),
                               e_emlrt_marshallOut(1.0),
                               d_emlrt_marshallOut(&d_st, b_cv2),
                               s_emlrt_marshallOut(&e_st, cv5), &ic_emlrtMCI),
                       "<output of feval>");
    init1 = (real_T)Y->size[0] - 1.0;
  }
  /*  Matrix BB will contain the units forming subset in each step (or in */
  /*  selected steps) of the forward search. The first column contains */
  /*  information about units forming subset at step init1. */
  emxInit_real_T(sp, &MD, 1, &ps_emlrtRTEI, true);
  emxInit_real_T(sp, &bsbsteps, 2, &rs_emlrtRTEI, true);
  if (varargin_2 == 0.0) {
    st.site = &bbb_emlrtRSI;
    b_st.site = &ft_emlrtRSI;
    if (muDoubleScalarIsNaN(init1)) {
      i = ym->size[0] * ym->size[1];
      ym->size[0] = 1;
      ym->size[1] = 1;
      emxEnsureCapacity_real_T(&b_st, ym, i, &mp_emlrtRTEI);
      ym->data[0] = rtNaN;
    } else if (Y->size[0] < init1) {
      ym->size[0] = 1;
      ym->size[1] = 0;
    } else if (muDoubleScalarIsInf(init1) && (init1 == Y->size[0])) {
      i = ym->size[0] * ym->size[1];
      ym->size[0] = 1;
      ym->size[1] = 1;
      emxEnsureCapacity_real_T(&b_st, ym, i, &mp_emlrtRTEI);
      ym->data[0] = rtNaN;
    } else if (muDoubleScalarFloor(init1) == init1) {
      i = ym->size[0] * ym->size[1];
      ym->size[0] = 1;
      ym->size[1] = (int32_T)((real_T)Y->size[0] - init1) + 1;
      emxEnsureCapacity_real_T(&b_st, ym, i, &mp_emlrtRTEI);
      loop_ub = (int32_T)((real_T)Y->size[0] - init1);
      for (i = 0; i <= loop_ub; i++) {
        ym->data[i] = init1 + (real_T)i;
      }
    } else {
      c_st.site = &ct_emlrtRSI;
      eml_float_colon(&c_st, init1, Y->size[0], ym);
    }
    i = MD->size[0];
    MD->size[0] = ym->size[1];
    emxEnsureCapacity_real_T(sp, MD, i, &op_emlrtRTEI);
    loop_ub = ym->size[1];
    for (i = 0; i < loop_ub; i++) {
      MD->data[i] = ym->data[i];
    }
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = ym->size[1];
    bsbsteps->size[1] = 1;
    emxEnsureCapacity_real_T(sp, bsbsteps, i, &qp_emlrtRTEI);
    loop_ub = ym->size[1];
    for (i = 0; i < loop_ub; i++) {
      bsbsteps->data[i] = MD->data[i];
    }
    i = BB->size[0] * BB->size[1];
    BB->size[0] = Y->size[0];
    emxEnsureCapacity_real_T(sp, BB, i, &rp_emlrtRTEI);
    a = ((real_T)Y->size[0] - init1) + 1.0;
    if (!(a >= 0.0)) {
      emlrtNonNegativeCheckR2012b(a, &ib_emlrtDCI, (emlrtCTX)sp);
    }
    if (a != (int32_T)muDoubleScalarFloor(a)) {
      emlrtIntegerCheckR2012b(a, &hb_emlrtDCI, (emlrtCTX)sp);
    }
    i = BB->size[0] * BB->size[1];
    BB->size[1] = (int32_T)a;
    emxEnsureCapacity_real_T(sp, BB, i, &rp_emlrtRTEI);
    a = ((real_T)Y->size[0] - init1) + 1.0;
    if (!(a >= 0.0)) {
      emlrtNonNegativeCheckR2012b(a, &lb_emlrtDCI, (emlrtCTX)sp);
    }
    if (a != (int32_T)muDoubleScalarFloor(a)) {
      emlrtIntegerCheckR2012b(a, &kb_emlrtDCI, (emlrtCTX)sp);
    }
    loop_ub = Y->size[0] * (int32_T)a;
    for (i = 0; i < loop_ub; i++) {
      BB->data[i] = rtNaN;
    }
  } else {
    if (varargin_2 < init1) {
      st.site = &xcb_emlrtRSI;
      b_disp(&st, t_emlrt_marshallOut(&st, b_cv3),
             x_emlrt_marshallOut(&st, b_cv4), &lc_emlrtMCI);
    }
    trueCount = 0;
    if (varargin_2 >= init1) {
      trueCount = 1;
    }
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = trueCount;
    emxEnsureCapacity_real_T(sp, bsbsteps, i, &np_emlrtRTEI);
    for (i = 0; i < trueCount; i++) {
      bsbsteps->data[0] = varargin_2;
    }
    irank = (trueCount != 0);
    i = BB->size[0] * BB->size[1];
    BB->size[0] = Y->size[0];
    BB->size[1] = irank;
    emxEnsureCapacity_real_T(sp, BB, i, &pp_emlrtRTEI);
    loop_ub = Y->size[0] * irank;
    for (i = 0; i < loop_ub; i++) {
      BB->data[i] = rtNaN;
    }
  }
  /*   Un is a Matrix whose 2nd column:11th col contain the unit(s) just */
  /*   included. */
  st.site = &abb_emlrtRSI;
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
    ym->size[1] =
        (int32_T)muDoubleScalarFloor((real_T)Y->size[0] - (init1 + 1.0)) + 1;
    emxEnsureCapacity_real_T(&b_st, ym, i, &vb_emlrtRTEI);
    loop_ub = (int32_T)muDoubleScalarFloor((real_T)Y->size[0] - (init1 + 1.0));
    for (i = 0; i <= loop_ub; i++) {
      ym->data[i] = (init1 + 1.0) + (real_T)i;
    }
  } else {
    c_st.site = &ct_emlrtRSI;
    eml_float_colon(&c_st, init1 + 1.0, Y->size[0], ym);
  }
  a = (real_T)Y->size[0] - init1;
  if (!(a >= 0.0)) {
    emlrtNonNegativeCheckR2012b(a, &nb_emlrtDCI, (emlrtCTX)sp);
  }
  if (a != (int32_T)muDoubleScalarFloor(a)) {
    emlrtIntegerCheckR2012b(a, &mb_emlrtDCI, (emlrtCTX)sp);
  }
  i = MD->size[0];
  MD->size[0] = ym->size[1];
  emxEnsureCapacity_real_T(sp, MD, i, &sp_emlrtRTEI);
  loop_ub = ym->size[1];
  for (i = 0; i < loop_ub; i++) {
    MD->data[i] = ym->data[i];
  }
  emxInit_real_T(sp, &r, 2, &tp_emlrtRTEI, true);
  i = r->size[0] * r->size[1];
  r->size[0] = (int32_T)a;
  r->size[1] = 10;
  emxEnsureCapacity_real_T(sp, r, i, &tp_emlrtRTEI);
  loop_ub = (int32_T)a * 10;
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = rtNaN;
  }
  emxInit_real_T(sp, &r1, 2, &ct_emlrtRTEI, true);
  st.site = &abb_emlrtRSI;
  cat(&st, MD, r, r1);
  i = Un->size[0] * Un->size[1];
  Un->size[0] = r1->size[0];
  Un->size[1] = 11;
  emxEnsureCapacity_real_T(sp, Un, i, &up_emlrtRTEI);
  loop_ub = r1->size[0] * 11;
  emxFree_real_T(&r);
  for (i = 0; i < loop_ub; i++) {
    Un->data[i] = r1->data[i];
  }
  emxFree_real_T(&r1);
  emxInit_int32_T(sp, &unit, 1, &ms_emlrtRTEI, true);
  /*  unit is the vector which will contain the units which enter subset at each
   */
  /*  step. It is initialized as a vector of zeros */
  i = unit->size[0];
  unit->size[0] = bsb->size[0];
  emxEnsureCapacity_int32_T(sp, unit, i, &vp_emlrtRTEI);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    unit->data[i] = 0;
  }
  lunit = bsb->size[0];
  /*  If the subset Y(bsb,:) is not full rank or a column is constant, then we
   */
  /*  return as output an empty structure. */
  st.site = &yab_emlrtRSI;
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    i1 = (int32_T)bsb->data[i];
    if ((i1 < 1) || (i1 > Y->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, Y->size[0], &pp_emlrtBCI, &st);
    }
  }
  loop_ub = Y->size[1];
  i = b_Y->size[0] * b_Y->size[1];
  b_Y->size[0] = bsb->size[0];
  b_Y->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(&st, b_Y, i, &wp_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    irank = bsb->size[0];
    for (i1 = 0; i1 < irank; i1++) {
      b_Y->data[i1 + b_Y->size[0] * i] =
          Y->data[((int32_T)bsb->data[i1] + Y->size[0] * i) - 1];
    }
  }
  b_st.site = &ee_emlrtRSI;
  irank = local_rank(&b_st, b_Y);
  emxInit_real_T(sp, &Ym, 2, &ns_emlrtRTEI, true);
  emxInit_real_T(sp, &mi, 2, &rq_emlrtRTEI, true);
  emxInit_real_T(sp, &mibsbr, 2, &er_emlrtRTEI, true);
  emxInit_real_T(sp, &zi, 2, &fr_emlrtRTEI, true);
  emxInit_real_T(sp, &Szi, 1, &os_emlrtRTEI, true);
  emxInit_real_T(sp, &R, 2, &qs_emlrtRTEI, true);
  emxInit_boolean_T(sp, &MDltminT, 1, &kr_emlrtRTEI, true);
  emxInit_boolean_T(sp, &MDltminbsb, 1, &nr_emlrtRTEI, true);
  emxInit_real_T(sp, &r2, 2, &ss_emlrtRTEI, true);
  emxInit_int32_T(sp, &r3, 1, &ts_emlrtRTEI, true);
  emxInit_int32_T(sp, &r4, 1, &us_emlrtRTEI, true);
  emxInit_int32_T(sp, &r5, 1, &vs_emlrtRTEI, true);
  emxInit_int32_T(sp, &r6, 1, &ws_emlrtRTEI, true);
  emxInit_int32_T(sp, &r7, 1, &xs_emlrtRTEI, true);
  emxInit_int32_T(sp, &r8, 1, &ys_emlrtRTEI, true);
  emxInit_int32_T(sp, &r9, 1, &at_emlrtRTEI, true);
  emxInit_int32_T(sp, &r10, 1, &bt_emlrtRTEI, true);
  guard1 = false;
  if (irank < v) {
    guard1 = true;
  } else {
    st.site = &yab_emlrtRSI;
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)bsb->data[i];
      if ((i1 < 1) || (i1 > Y->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, Y->size[0], &qp_emlrtBCI, &st);
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
      emlrtErrorWithMessageIdR2018a(
          &f_st, &emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
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
        mibsbr->data[nwhile] =
            Y->data[((int32_T)bsb->data[0] + Y->size[0] * nwhile) - 1];
        j_st.site = &id_emlrtRSI;
        if ((2 <= irank) && (irank > 2147483646)) {
          k_st.site = &ad_emlrtRSI;
          check_forloop_overflow_error(&k_st);
        }
        for (b_i = 2; b_i <= irank; b_i++) {
          a = mibsbr->data[nwhile];
          ksor =
              Y->data[((int32_T)bsb->data[b_i - 1] + Y->size[0] * nwhile) - 1];
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
    st.site = &yab_emlrtRSI;
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)bsb->data[i];
      if ((i1 < 1) || (i1 > Y->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, Y->size[0], &rp_emlrtBCI, &st);
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
        ym->data[nwhile] =
            Y->data[((int32_T)bsb->data[0] + Y->size[0] * nwhile) - 1];
        j_st.site = &id_emlrtRSI;
        if ((2 <= irank) && (irank > 2147483646)) {
          k_st.site = &ad_emlrtRSI;
          check_forloop_overflow_error(&k_st);
        }
        for (b_i = 2; b_i <= irank; b_i++) {
          a = ym->data[nwhile];
          ksor =
              Y->data[((int32_T)bsb->data[b_i - 1] + Y->size[0] * nwhile) - 1];
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
    b_ym[0] = (*(int32_T(*)[2])mibsbr->size)[0];
    b_ym[1] = (*(int32_T(*)[2])mibsbr->size)[1];
    iv[0] = (*(int32_T(*)[2])ym->size)[0];
    iv[1] = (*(int32_T(*)[2])ym->size)[1];
    emlrtSizeEqCheckNDR2012b(&b_ym[0], &iv[0], &tb_emlrtECI, (emlrtCTX)sp);
    st.site = &yab_emlrtRSI;
    i = mibsbr->size[0] * mibsbr->size[1];
    mibsbr->size[0] = 1;
    emxEnsureCapacity_real_T(&st, mibsbr, i, &aq_emlrtRTEI);
    loop_ub = mibsbr->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      mibsbr->data[i] -= ym->data[i];
    }
    b_st.site = &kd_emlrtRSI;
    c_st.site = &ld_emlrtRSI;
    f_st.site = &md_emlrtRSI;
    if (mibsbr->size[1] < 1) {
      emlrtErrorWithMessageIdR2018a(
          &f_st, &emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }
    g_st.site = &hq_emlrtRSI;
    h_st.site = &iq_emlrtRSI;
    irank = mibsbr->size[1];
    if (mibsbr->size[1] <= 2) {
      if (mibsbr->size[1] == 1) {
        ksor = mibsbr->data[0];
      } else if ((mibsbr->data[0] > mibsbr->data[1]) ||
                 (muDoubleScalarIsNaN(mibsbr->data[0]) &&
                  (!muDoubleScalarIsNaN(mibsbr->data[1])))) {
        ksor = mibsbr->data[1];
      } else {
        ksor = mibsbr->data[0];
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
        ksor = mibsbr->data[0];
      } else {
        i_st.site = &jq_emlrtRSI;
        ksor = mibsbr->data[idx - 1];
        nwhile = idx + 1;
        j_st.site = &mq_emlrtRSI;
        if ((idx + 1 <= mibsbr->size[1]) && (mibsbr->size[1] > 2147483646)) {
          k_st.site = &ad_emlrtRSI;
          check_forloop_overflow_error(&k_st);
        }
        for (k = nwhile; k <= irank; k++) {
          a = mibsbr->data[k - 1];
          if (ksor > a) {
            ksor = a;
          }
        }
      }
    }
    if (ksor == 0.0) {
      guard1 = true;
    } else {
      /*  ij = index which is linked with the columns of matrix BB. During the
       */
      /*  search every time a subset is stored inside matrix BB ij icreases by
       * one */
      ij = 1U;
      i = n - ini0;
      emlrtForLoopVectorCheckR2021a(ini0, 1.0, n, mxDOUBLE_CLASS, i + 1,
                                    &mb_emlrtRTEI, (emlrtCTX)sp);
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
          emxEnsureCapacity_real_T(sp, Yb, i1, &bq_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub; i1++) {
            irank = bsb->size[0];
            for (partialTrueCount = 0; partialTrueCount < irank;
                 partialTrueCount++) {
              if (bsb->data[partialTrueCount] !=
                  (int32_T)muDoubleScalarFloor(bsb->data[partialTrueCount])) {
                emlrtIntegerCheckR2012b(bsb->data[partialTrueCount],
                                        &ob_emlrtDCI, (emlrtCTX)sp);
              }
              k = (int32_T)bsb->data[partialTrueCount];
              if ((k < 1) || (k > Y->size[0])) {
                emlrtDynamicBoundsCheckR2012b(k, 1, Y->size[0], &sp_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              Yb->data[partialTrueCount + Yb->size[0] * i1] =
                  Y->data[(k + Y->size[0] * i1) - 1];
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
          emxEnsureCapacity_int32_T(sp, r3, i1, &cq_emlrtRTEI);
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
          emxEnsureCapacity_real_T(sp, Yb, i1, &dq_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub; i1++) {
            irank = r3->size[0];
            for (partialTrueCount = 0; partialTrueCount < irank;
                 partialTrueCount++) {
              if (r3->data[partialTrueCount] > Y->size[0]) {
                emlrtDynamicBoundsCheckR2012b(r3->data[partialTrueCount], 1,
                                              Y->size[0], &tp_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              Yb->data[partialTrueCount + Yb->size[0] * i1] =
                  Y->data[(r3->data[partialTrueCount] + Y->size[0] * i1) - 1];
            }
          }
        }
        /*  If required, store units forming subset at each step */
        if (b_mm >= init1) {
          st.site = &xab_emlrtRSI;
          b_st.site = &hbb_emlrtRSI;
          irank = bsbsteps->size[0] * bsbsteps->size[1];
          b_bsbsteps = *bsbsteps;
          c_bsbsteps = irank;
          b_bsbsteps.size = &c_bsbsteps;
          b_bsbsteps.numDimensions = 1;
          c_st.site = &ibb_emlrtRSI;
          do_vectors(&c_st, b_mm, &b_bsbsteps, (real_T *)&ksor, &trueCount,
                     (int32_T *)&irank, &nwhile, (int32_T *)&k,
                     &partialTrueCount);
          c_size = trueCount;
          for (i1 = 0; i1 < trueCount; i1++) {
            b_c_data = (ksor == b_mm);
          }
          c_data.data = &b_c_data;
          c_data.size = &c_size;
          c_data.allocatedSize = 1;
          c_data.numDimensions = 1;
          c_data.canFreeData = false;
          st.site = &xab_emlrtRSI;
          if (ifWhileCond(&st, &c_data)) {
            if (b_mm <= percn) {
              i1 = ii->size[0];
              ii->size[0] = bsb->size[0];
              emxEnsureCapacity_int32_T(sp, ii, i1, &fq_emlrtRTEI);
              loop_ub = bsb->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                if (bsb->data[i1] !=
                    (int32_T)muDoubleScalarFloor(bsb->data[i1])) {
                  emlrtIntegerCheckR2012b(bsb->data[i1], &pb_emlrtDCI,
                                          (emlrtCTX)sp);
                }
                partialTrueCount = (int32_T)bsb->data[i1];
                if ((partialTrueCount < 1) ||
                    (partialTrueCount > BB->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i1], 1,
                                                BB->size[0], &up_emlrtBCI,
                                                (emlrtCTX)sp);
                }
                ii->data[i1] = partialTrueCount - 1;
              }
              if (((int32_T)ij < 1) || ((int32_T)ij > BB->size[1])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)ij, 1, BB->size[1],
                                              &jp_emlrtBCI, (emlrtCTX)sp);
              }
              emlrtSubAssignSizeCheckR2012b(&ii->size[0], 1, &bsb->size[0], 1,
                                            &ic_emlrtECI, (emlrtCTX)sp);
              loop_ub = bsb->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                BB->data[ii->data[i1] + BB->size[0] * ((int32_T)ij - 1)] =
                    bsb->data[i1];
              }
            } else {
              k = bsbT->size[0];
              for (b_i = 0; b_i < k; b_i++) {
                if (bsbT->data[b_i] && (b_i + 1 > BB->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, BB->size[0],
                                                &ap_emlrtBCI, (emlrtCTX)sp);
                }
              }
              if (((int32_T)ij < 1) || ((int32_T)ij > BB->size[1])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)ij, 1, BB->size[1],
                                              &kp_emlrtBCI, (emlrtCTX)sp);
              }
              k = bsbT->size[0];
              for (b_i = 0; b_i < k; b_i++) {
                if (bsbT->data[b_i] && (b_i + 1 > seq->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                                                &yo_emlrtBCI, (emlrtCTX)sp);
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
                                            &jc_emlrtECI, (emlrtCTX)sp);
              k = bsbT->size[0] - 1;
              trueCount = 0;
              for (b_i = 0; b_i <= k; b_i++) {
                if (bsbT->data[b_i]) {
                  trueCount++;
                }
              }
              i1 = r4->size[0];
              r4->size[0] = trueCount;
              emxEnsureCapacity_int32_T(sp, r4, i1, &cq_emlrtRTEI);
              partialTrueCount = 0;
              for (b_i = 0; b_i <= k; b_i++) {
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
        st.site = &wab_emlrtRSI;
        b_st.site = &mj_emlrtRSI;
        c_st.site = &hj_emlrtRSI;
        b_combineVectorElements(&c_st, Yb, ym);
        i1 = ym->size[0] * ym->size[1];
        ym->size[0] = 1;
        emxEnsureCapacity_real_T(sp, ym, i1, &eq_emlrtRTEI);
        loop_ub = ym->size[1] - 1;
        for (i1 = 0; i1 <= loop_ub; i1++) {
          ym->data[i1] /= b_mm;
        }
        /*  Ym = n-by-v matrix containing deviations from the means computed */
        /*  using units forming subset */
        /*  Ym=Y-one*ym; */
        st.site = &vab_emlrtRSI;
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
              emxEnsureCapacity_boolean_T(sp, MDltminT, i1, &kq_emlrtRTEI);
              loop_ub = bsbT->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                MDltminT->data[i1] = !bsbT->data[i1];
              }
              if (oldbsbT->size[0] != MDltminT->size[0]) {
                emlrtSizeEqCheck1DR2012b(oldbsbT->size[0], MDltminT->size[0],
                                         &ub_emlrtECI, (emlrtCTX)sp);
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
              emxEnsureCapacity_real_T(sp, unitout, i1, &cq_emlrtRTEI);
              partialTrueCount = 0;
              for (b_i = 0; b_i <= k; b_i++) {
                if (oldbsbT->data[b_i] && MDltminT->data[b_i]) {
                  if (b_i + 1 > seq->size[0]) {
                    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                                                  &dq_emlrtBCI, (emlrtCTX)sp);
                  }
                  unitout->data[partialTrueCount] = seq->data[b_i];
                  partialTrueCount++;
                }
              }
            }
            nwhile = unitout->size[0];
            st.site = &uab_emlrtRSI;
            loop_ub = unitout->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              if (unitout->data[i1] !=
                  (int32_T)muDoubleScalarFloor(unitout->data[i1])) {
                emlrtIntegerCheckR2012b(unitout->data[i1], &rb_emlrtDCI, &st);
              }
              partialTrueCount = (int32_T)unitout->data[i1];
              if ((partialTrueCount < 1) || (partialTrueCount > Y->size[0])) {
                emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1, Y->size[0],
                                              &bq_emlrtBCI, &st);
              }
            }
            b_st.site = &mj_emlrtRSI;
            loop_ub = Y->size[1];
            i1 = b_Y->size[0] * b_Y->size[1];
            b_Y->size[0] = unitout->size[0];
            b_Y->size[1] = Y->size[1];
            emxEnsureCapacity_real_T(&b_st, b_Y, i1, &nq_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              irank = unitout->size[0];
              for (partialTrueCount = 0; partialTrueCount < irank;
                   partialTrueCount++) {
                b_Y->data[partialTrueCount + b_Y->size[0] * i1] =
                    Y->data[((int32_T)unitout->data[partialTrueCount] +
                             Y->size[0] * i1) -
                            1];
              }
            }
            c_st.site = &hj_emlrtRSI;
            b_combineVectorElements(&c_st, b_Y, mi);
            i1 = mi->size[0] * mi->size[1];
            mi->size[0] = 1;
            emxEnsureCapacity_real_T(sp, mi, i1, &rq_emlrtRTEI);
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
                                         &vb_emlrtECI, (emlrtCTX)sp);
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
              emxEnsureCapacity_int32_T(sp, r8, i1, &cq_emlrtRTEI);
              partialTrueCount = 0;
              for (b_i = 0; b_i <= k; b_i++) {
                if (oldbsbT->data[b_i] && bsbT->data[b_i]) {
                  r8->data[partialTrueCount] = b_i + 1;
                  partialTrueCount++;
                }
              }
              st.site = &tab_emlrtRSI;
              loop_ub = r8->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                if (r8->data[i1] > Y->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(r8->data[i1], 1, Y->size[0],
                                                &iq_emlrtBCI, &st);
                }
              }
              b_st.site = &mj_emlrtRSI;
              loop_ub = Y->size[1];
              i1 = b_Y->size[0] * b_Y->size[1];
              b_Y->size[0] = r8->size[0];
              b_Y->size[1] = Y->size[1];
              emxEnsureCapacity_real_T(&b_st, b_Y, i1, &br_emlrtRTEI);
              for (i1 = 0; i1 < loop_ub; i1++) {
                irank = r8->size[0];
                for (partialTrueCount = 0; partialTrueCount < irank;
                     partialTrueCount++) {
                  b_Y->data[partialTrueCount + b_Y->size[0] * i1] =
                      Y->data[(r8->data[partialTrueCount] + Y->size[0] * i1) -
                              1];
                }
              }
              c_st.site = &hj_emlrtRSI;
              b_combineVectorElements(&c_st, b_Y, mibsbr);
              i1 = mibsbr->size[0] * mibsbr->size[1];
              mibsbr->size[0] = 1;
              emxEnsureCapacity_real_T(sp, mibsbr, i1, &er_emlrtRTEI);
              ksor = (b_mm - 1.0) - (real_T)unitout->size[0];
              loop_ub = mibsbr->size[1] - 1;
              for (i1 = 0; i1 <= loop_ub; i1++) {
                mibsbr->data[i1] /= ksor;
              }
            } else {
              st.site = &sab_emlrtRSI;
              loop_ub = bsbr->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                partialTrueCount = bsbr->data[i1];
                if ((partialTrueCount < 1) || (partialTrueCount > Y->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1, Y->size[0],
                                                &fq_emlrtBCI, &st);
                }
              }
              b_st.site = &mj_emlrtRSI;
              loop_ub = Y->size[1];
              i1 = b_Y->size[0] * b_Y->size[1];
              b_Y->size[0] = bsbr->size[0];
              b_Y->size[1] = Y->size[1];
              emxEnsureCapacity_real_T(&b_st, b_Y, i1, &wq_emlrtRTEI);
              for (i1 = 0; i1 < loop_ub; i1++) {
                irank = bsbr->size[0];
                for (partialTrueCount = 0; partialTrueCount < irank;
                     partialTrueCount++) {
                  b_Y->data[partialTrueCount + b_Y->size[0] * i1] =
                      Y->data[(bsbr->data[partialTrueCount] + Y->size[0] * i1) -
                              1];
                }
              }
              c_st.site = &hj_emlrtRSI;
              b_combineVectorElements(&c_st, b_Y, mibsbr);
              i1 = mibsbr->size[0] * mibsbr->size[1];
              mibsbr->size[0] = 1;
              emxEnsureCapacity_real_T(sp, mibsbr, i1, &yq_emlrtRTEI);
              ksor = (b_mm - 1.0) - (real_T)unitout->size[0];
              loop_ub = mibsbr->size[1] - 1;
              for (i1 = 0; i1 <= loop_ub; i1++) {
                mibsbr->data[i1] /= ksor;
              }
            }
            b_ym[0] = (*(int32_T(*)[2])mi->size)[0];
            b_ym[1] = (*(int32_T(*)[2])mi->size)[1];
            iv[0] = (*(int32_T(*)[2])mibsbr->size)[0];
            iv[1] = (*(int32_T(*)[2])mibsbr->size)[1];
            emlrtSizeEqCheckNDR2012b(&b_ym[0], &iv[0], &wb_emlrtECI,
                                     (emlrtCTX)sp);
            a = (real_T)unitout->size[0] *
                ((b_mm - 1.0) - (real_T)unitout->size[0]) / (b_mm - 1.0);
            st.site = &rab_emlrtRSI;
            if (a < 0.0) {
              emlrtErrorWithMessageIdR2018a(
                  &st, &x_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                  "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
            }
            a = muDoubleScalarSqrt(a);
            i1 = zi->size[0] * zi->size[1];
            zi->size[0] = 1;
            zi->size[1] = mi->size[1];
            emxEnsureCapacity_real_T(sp, zi, i1, &fr_emlrtRTEI);
            loop_ub = mi->size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              zi->data[i1] = a * (mi->data[i1] - mibsbr->data[i1]);
            }
            st.site = &qab_emlrtRSI;
            b_st.site = &xc_emlrtRSI;
            c_dynamic_size_checks(&b_st, S, zi, S->size[1], zi->size[1]);
            b_st.site = &wc_emlrtRSI;
            c_mtimes(&b_st, S, zi, Szi);
            /*  S=S+(S*(zi')*zi*S)/(1-zi*S*(zi')); */
            st.site = &pab_emlrtRSI;
            b_st.site = &xc_emlrtRSI;
            d_dynamic_size_checks(&b_st, zi, Szi, zi->size[1], Szi->size[0]);
            ksor = d_mtimes(zi, Szi);
            i1 = r2->size[0] * r2->size[1];
            r2->size[0] = Szi->size[0];
            r2->size[1] = Szi->size[0];
            emxEnsureCapacity_real_T(sp, r2, i1, &ir_emlrtRTEI);
            loop_ub = Szi->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              irank = Szi->size[0];
              for (partialTrueCount = 0; partialTrueCount < irank;
                   partialTrueCount++) {
                r2->data[partialTrueCount + r2->size[0] * i1] =
                    Szi->data[partialTrueCount] * Szi->data[i1] / (1.0 - ksor);
              }
            }
            b_ym[0] = (*(int32_T(*)[2])S->size)[0];
            b_ym[1] = (*(int32_T(*)[2])S->size)[1];
            iv[0] = (*(int32_T(*)[2])r2->size)[0];
            iv[1] = (*(int32_T(*)[2])r2->size)[1];
            emlrtSizeEqCheckNDR2012b(&b_ym[0], &iv[0], &xb_emlrtECI,
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
                                                &lq_emlrtBCI, (emlrtCTX)sp);
                }
                partialTrueCount = (int32_T)unitout->data[b_i];
                if ((partialTrueCount < 1) || (partialTrueCount > Y->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1, Y->size[0],
                                                &bp_emlrtBCI, (emlrtCTX)sp);
                }
                loop_ub = Y->size[1];
                partialTrueCount = zi->size[0] * zi->size[1];
                zi->size[0] = 1;
                zi->size[1] = Y->size[1];
                emxEnsureCapacity_real_T(sp, zi, partialTrueCount,
                                         &or_emlrtRTEI);
                for (partialTrueCount = 0; partialTrueCount < loop_ub;
                     partialTrueCount++) {
                  zi->data[partialTrueCount] =
                      Y->data[((int32_T)unitout->data[b_i] +
                               Y->size[0] * partialTrueCount) -
                              1];
                }
                b_ym[0] = (*(int32_T(*)[2])zi->size)[0];
                b_ym[1] = (*(int32_T(*)[2])zi->size)[1];
                iv[0] = (*(int32_T(*)[2])mi->size)[0];
                iv[1] = (*(int32_T(*)[2])mi->size)[1];
                emlrtSizeEqCheckNDR2012b(&b_ym[0], &iv[0], &yb_emlrtECI,
                                         (emlrtCTX)sp);
                loop_ub = Y->size[1];
                partialTrueCount = zi->size[0] * zi->size[1];
                zi->size[0] = 1;
                zi->size[1] = Y->size[1];
                emxEnsureCapacity_real_T(sp, zi, partialTrueCount,
                                         &pr_emlrtRTEI);
                for (partialTrueCount = 0; partialTrueCount < loop_ub;
                     partialTrueCount++) {
                  zi->data[partialTrueCount] =
                      Y->data[((int32_T)unitout->data[b_i] +
                               Y->size[0] * partialTrueCount) -
                              1] -
                      mi->data[partialTrueCount];
                }
                st.site = &oab_emlrtRSI;
                b_st.site = &xc_emlrtRSI;
                c_dynamic_size_checks(&b_st, S, zi, S->size[1], zi->size[1]);
                b_st.site = &wc_emlrtRSI;
                c_mtimes(&b_st, S, zi, Szi);
                /*  S=S+(S*(zi')*zi*S)/(1-zi*S*(zi')); */
                st.site = &nab_emlrtRSI;
                b_st.site = &xc_emlrtRSI;
                d_dynamic_size_checks(&b_st, zi, Szi, zi->size[1],
                                      Szi->size[0]);
                ksor = d_mtimes(zi, Szi);
                partialTrueCount = r2->size[0] * r2->size[1];
                r2->size[0] = Szi->size[0];
                r2->size[1] = Szi->size[0];
                emxEnsureCapacity_real_T(sp, r2, partialTrueCount,
                                         &sr_emlrtRTEI);
                loop_ub = Szi->size[0];
                for (partialTrueCount = 0; partialTrueCount < loop_ub;
                     partialTrueCount++) {
                  irank = Szi->size[0];
                  for (k = 0; k < irank; k++) {
                    r2->data[k + r2->size[0] * partialTrueCount] =
                        Szi->data[k] * Szi->data[partialTrueCount] /
                        (1.0 - ksor);
                  }
                }
                b_ym[0] = (*(int32_T(*)[2])S->size)[0];
                b_ym[1] = (*(int32_T(*)[2])S->size)[1];
                iv[0] = (*(int32_T(*)[2])r2->size)[0];
                iv[1] = (*(int32_T(*)[2])r2->size)[1];
                emlrtSizeEqCheckNDR2012b(&b_ym[0], &iv[0], &ac_emlrtECI,
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
            emxEnsureCapacity_real_T(sp, mibsbr, i1, &hq_emlrtRTEI);
            loop_ub = meoldbsb->size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              mibsbr->data[i1] = meoldbsb->data[i1];
            }
          }
          /*  mi = mean of units entering subset */
          st.site = &mab_emlrtRSI;
          loop_ub = unit->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            partialTrueCount = unit->data[i1];
            if ((partialTrueCount < 1) || (partialTrueCount > Y->size[0])) {
              emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1, Y->size[0],
                                            &aq_emlrtBCI, &st);
            }
          }
          b_st.site = &mj_emlrtRSI;
          loop_ub = Y->size[1];
          i1 = b_Y->size[0] * b_Y->size[1];
          b_Y->size[0] = unit->size[0];
          b_Y->size[1] = Y->size[1];
          emxEnsureCapacity_real_T(&b_st, b_Y, i1, &lq_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub; i1++) {
            irank = unit->size[0];
            for (partialTrueCount = 0; partialTrueCount < irank;
                 partialTrueCount++) {
              b_Y->data[partialTrueCount + b_Y->size[0] * i1] =
                  Y->data[(unit->data[partialTrueCount] + Y->size[0] * i1) - 1];
            }
          }
          c_st.site = &hj_emlrtRSI;
          b_combineVectorElements(&c_st, b_Y, mi);
          i1 = mi->size[0] * mi->size[1];
          mi->size[0] = 1;
          emxEnsureCapacity_real_T(sp, mi, i1, &oq_emlrtRTEI);
          loop_ub = mi->size[1] - 1;
          for (i1 = 0; i1 <= loop_ub; i1++) {
            mi->data[i1] /= (real_T)lunit;
          }
          /*  zi=sqrt(kin*(mm-1-k)/(mm-1-k+kin))*(mi-mean(Y(bsbr,:),1)); */
          b_ym[0] = (*(int32_T(*)[2])mi->size)[0];
          b_ym[1] = (*(int32_T(*)[2])mi->size)[1];
          iv[0] = (*(int32_T(*)[2])mibsbr->size)[0];
          iv[1] = (*(int32_T(*)[2])mibsbr->size)[1];
          emlrtSizeEqCheckNDR2012b(&b_ym[0], &iv[0], &bc_emlrtECI,
                                   (emlrtCTX)sp);
          ksor = (b_mm - 1.0) - (real_T)nwhile;
          a = (real_T)lunit * ksor / (ksor + (real_T)lunit);
          st.site = &lab_emlrtRSI;
          if (a < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &st, &x_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
          }
          a = muDoubleScalarSqrt(a);
          i1 = zi->size[0] * zi->size[1];
          zi->size[0] = 1;
          zi->size[1] = mi->size[1];
          emxEnsureCapacity_real_T(sp, zi, i1, &sq_emlrtRTEI);
          loop_ub = mi->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            zi->data[i1] = a * (mi->data[i1] - mibsbr->data[i1]);
          }
          st.site = &kab_emlrtRSI;
          b_st.site = &xc_emlrtRSI;
          c_dynamic_size_checks(&b_st, S, zi, S->size[1], zi->size[1]);
          b_st.site = &wc_emlrtRSI;
          c_mtimes(&b_st, S, zi, Szi);
          /*  S=S+(S*(zi')*zi*S)/(1-zi*S*(zi')); */
          st.site = &jab_emlrtRSI;
          b_st.site = &xc_emlrtRSI;
          d_dynamic_size_checks(&b_st, zi, Szi, zi->size[1], Szi->size[0]);
          ksor = d_mtimes(zi, Szi);
          i1 = r2->size[0] * r2->size[1];
          r2->size[0] = Szi->size[0];
          r2->size[1] = Szi->size[0];
          emxEnsureCapacity_real_T(sp, r2, i1, &xq_emlrtRTEI);
          loop_ub = Szi->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            irank = Szi->size[0];
            for (partialTrueCount = 0; partialTrueCount < irank;
                 partialTrueCount++) {
              r2->data[partialTrueCount + r2->size[0] * i1] =
                  Szi->data[partialTrueCount] * Szi->data[i1] / (ksor + 1.0);
            }
          }
          b_ym[0] = (*(int32_T(*)[2])S->size)[0];
          b_ym[1] = (*(int32_T(*)[2])S->size)[1];
          iv[0] = (*(int32_T(*)[2])r2->size)[0];
          iv[1] = (*(int32_T(*)[2])r2->size)[1];
          emlrtSizeEqCheckNDR2012b(&b_ym[0], &iv[0], &cc_emlrtECI,
                                   (emlrtCTX)sp);
          loop_ub = S->size[0] * S->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            S->data[i1] -= r2->data[i1];
          }
          if (lunit > 1) {
            /* mi=mean(Y(unit,:),1); */
            for (b_i = 0; b_i < lunit; b_i++) {
              if (b_i + 1 > unit->size[0]) {
                emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, unit->size[0],
                                              &jq_emlrtBCI, (emlrtCTX)sp);
              }
              i1 = unit->data[b_i];
              if ((i1 < 1) || (i1 > Y->size[0])) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, Y->size[0], &cp_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              loop_ub = Y->size[1];
              i1 = zi->size[0] * zi->size[1];
              zi->size[0] = 1;
              zi->size[1] = Y->size[1];
              emxEnsureCapacity_real_T(sp, zi, i1, &gr_emlrtRTEI);
              for (i1 = 0; i1 < loop_ub; i1++) {
                zi->data[i1] = Y->data[(unit->data[b_i] + Y->size[0] * i1) - 1];
              }
              b_ym[0] = (*(int32_T(*)[2])zi->size)[0];
              b_ym[1] = (*(int32_T(*)[2])zi->size)[1];
              iv[0] = (*(int32_T(*)[2])mi->size)[0];
              iv[1] = (*(int32_T(*)[2])mi->size)[1];
              emlrtSizeEqCheckNDR2012b(&b_ym[0], &iv[0], &dc_emlrtECI,
                                       (emlrtCTX)sp);
              loop_ub = Y->size[1];
              i1 = zi->size[0] * zi->size[1];
              zi->size[0] = 1;
              zi->size[1] = Y->size[1];
              emxEnsureCapacity_real_T(sp, zi, i1, &jr_emlrtRTEI);
              for (i1 = 0; i1 < loop_ub; i1++) {
                zi->data[i1] =
                    Y->data[(unit->data[b_i] + Y->size[0] * i1) - 1] -
                    mi->data[i1];
              }
              st.site = &iab_emlrtRSI;
              b_st.site = &xc_emlrtRSI;
              c_dynamic_size_checks(&b_st, S, zi, S->size[1], zi->size[1]);
              b_st.site = &wc_emlrtRSI;
              c_mtimes(&b_st, S, zi, Szi);
              /*  S=S-(S*(zi')*zi*S)/(1+zi*S*(zi')); */
              st.site = &hab_emlrtRSI;
              b_st.site = &xc_emlrtRSI;
              d_dynamic_size_checks(&b_st, zi, Szi, zi->size[1], Szi->size[0]);
              ksor = d_mtimes(zi, Szi);
              i1 = r2->size[0] * r2->size[1];
              r2->size[0] = Szi->size[0];
              r2->size[1] = Szi->size[0];
              emxEnsureCapacity_real_T(sp, r2, i1, &lr_emlrtRTEI);
              loop_ub = Szi->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                irank = Szi->size[0];
                for (partialTrueCount = 0; partialTrueCount < irank;
                     partialTrueCount++) {
                  r2->data[partialTrueCount + r2->size[0] * i1] =
                      Szi->data[partialTrueCount] * Szi->data[i1] /
                      (ksor + 1.0);
                }
              }
              b_ym[0] = (*(int32_T(*)[2])S->size)[0];
              b_ym[1] = (*(int32_T(*)[2])S->size)[1];
              iv[0] = (*(int32_T(*)[2])r2->size)[0];
              iv[1] = (*(int32_T(*)[2])r2->size)[1];
              emlrtSizeEqCheckNDR2012b(&b_ym[0], &iv[0], &ec_emlrtECI,
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
            st.site = &gab_emlrtRSI;
            b_st.site = &xc_emlrtRSI;
            e_dynamic_size_checks(&b_st, Ym, S, Ym->size[1], S->size[0]);
            b_st.site = &wc_emlrtRSI;
            e_mtimes(&b_st, Ym, S, r2);
            b_ym[0] = (*(int32_T(*)[2])r2->size)[0];
            b_ym[1] = (*(int32_T(*)[2])r2->size)[1];
            iv[0] = (*(int32_T(*)[2])Ym->size)[0];
            iv[1] = (*(int32_T(*)[2])Ym->size)[1];
            emlrtSizeEqCheckNDR2012b(&b_ym[0], &iv[0], &fc_emlrtECI,
                                     (emlrtCTX)sp);
            i1 = b_Y->size[0] * b_Y->size[1];
            b_Y->size[0] = r2->size[0];
            b_Y->size[1] = r2->size[1];
            emxEnsureCapacity_real_T(sp, b_Y, i1, &hr_emlrtRTEI);
            loop_ub = r2->size[0] * r2->size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              b_Y->data[i1] = r2->data[i1] * Ym->data[i1];
            }
            st.site = &gab_emlrtRSI;
            b_sum(&st, b_Y, MD);
            loop_ub = MD->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              MD->data[i1] *= b_mm - 1.0;
            }
          } else {
            st.site = &fab_emlrtRSI;
            b_st.site = &xc_emlrtRSI;
            e_dynamic_size_checks(&b_st, Ym, S, Ym->size[1], S->size[0]);
            b_st.site = &wc_emlrtRSI;
            e_mtimes(&b_st, Ym, S, R);
            st.site = &fab_emlrtRSI;
            b_bsxfun(&st, R, Ym, r2);
            st.site = &fab_emlrtRSI;
            b_sum(&st, r2, MD);
            loop_ub = MD->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              MD->data[i1] *= b_mm - 1.0;
            }
          }
          b_guard1 = true;
        } else {
          /*  In the initial step of the search the inverse is computed directly
           */
          if (b_mm > percn) {
            k = bsbT->size[0] - 1;
            trueCount = 0;
            for (b_i = 0; b_i <= k; b_i++) {
              if (bsbT->data[b_i]) {
                trueCount++;
              }
            }
            i1 = r5->size[0];
            r5->size[0] = trueCount;
            emxEnsureCapacity_int32_T(sp, r5, i1, &cq_emlrtRTEI);
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
            emxEnsureCapacity_real_T(sp, r2, i1, &jq_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              irank = r5->size[0];
              for (partialTrueCount = 0; partialTrueCount < irank;
                   partialTrueCount++) {
                if (r5->data[partialTrueCount] > Ym->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(r5->data[partialTrueCount], 1,
                                                Ym->size[0], &xp_emlrtBCI,
                                                (emlrtCTX)sp);
                }
                r2->data[partialTrueCount + r2->size[0] * i1] =
                    Ym->data[(r5->data[partialTrueCount] + Ym->size[0] * i1) -
                             1];
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
            emxEnsureCapacity_int32_T(sp, r6, i1, &cq_emlrtRTEI);
            partialTrueCount = 0;
            for (b_i = 0; b_i <= k; b_i++) {
              if (bsbT->data[b_i]) {
                r6->data[partialTrueCount] = b_i + 1;
                partialTrueCount++;
              }
            }
            st.site = &eab_emlrtRSI;
            loop_ub = Ym->size[1];
            i1 = Yb->size[0] * Yb->size[1];
            Yb->size[0] = r6->size[0];
            Yb->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(&st, Yb, i1, &pq_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              irank = r6->size[0];
              for (partialTrueCount = 0; partialTrueCount < irank;
                   partialTrueCount++) {
                if (r6->data[partialTrueCount] > Ym->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(r6->data[partialTrueCount], 1,
                                                Ym->size[0], &cq_emlrtBCI, &st);
                }
                Yb->data[partialTrueCount + Yb->size[0] * i1] =
                    Ym->data[(r6->data[partialTrueCount] + Ym->size[0] * i1) -
                             1];
              }
            }
            b_st.site = &xc_emlrtRSI;
            e_dynamic_size_checks(&b_st, r2, Yb, r5->size[0], r6->size[0]);
            b_st.site = &wc_emlrtRSI;
            f_mtimes(&b_st, r2, Yb, R);
            st.site = &eab_emlrtRSI;
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
            emxEnsureCapacity_int32_T(sp, r7, i1, &cq_emlrtRTEI);
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
            emxEnsureCapacity_real_T(sp, b_Y, i1, &uq_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              irank = r7->size[0];
              for (partialTrueCount = 0; partialTrueCount < irank;
                   partialTrueCount++) {
                if (r7->data[partialTrueCount] > Ym->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(r7->data[partialTrueCount], 1,
                                                Ym->size[0], &eq_emlrtBCI,
                                                (emlrtCTX)sp);
                }
                b_Y->data[partialTrueCount + b_Y->size[0] * i1] =
                    Ym->data[(r7->data[partialTrueCount] + Ym->size[0] * i1) -
                             1];
              }
            }
            st.site = &dab_emlrtRSI;
            qr(&st, b_Y, Yb, R);
          } else {
            loop_ub = Ym->size[1];
            i1 = r2->size[0] * r2->size[1];
            r2->size[0] = bsb->size[0];
            r2->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(sp, r2, i1, &gq_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              irank = bsb->size[0];
              for (partialTrueCount = 0; partialTrueCount < irank;
                   partialTrueCount++) {
                if (bsb->data[partialTrueCount] !=
                    (int32_T)muDoubleScalarFloor(bsb->data[partialTrueCount])) {
                  emlrtIntegerCheckR2012b(bsb->data[partialTrueCount],
                                          &qb_emlrtDCI, (emlrtCTX)sp);
                }
                k = (int32_T)bsb->data[partialTrueCount];
                if ((k < 1) || (k > Ym->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(k, 1, Ym->size[0], &vp_emlrtBCI,
                                                (emlrtCTX)sp);
                }
                r2->data[partialTrueCount + r2->size[0] * i1] =
                    Ym->data[(k + Ym->size[0] * i1) - 1];
              }
            }
            st.site = &cab_emlrtRSI;
            loop_ub = Ym->size[1];
            i1 = Yb->size[0] * Yb->size[1];
            Yb->size[0] = bsb->size[0];
            Yb->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(&st, Yb, i1, &iq_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              irank = bsb->size[0];
              for (partialTrueCount = 0; partialTrueCount < irank;
                   partialTrueCount++) {
                k = (int32_T)bsb->data[partialTrueCount];
                if ((k < 1) || (k > Ym->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(
                      (int32_T)bsb->data[partialTrueCount], 1, Ym->size[0],
                      &wp_emlrtBCI, &st);
                }
                Yb->data[partialTrueCount + Yb->size[0] * i1] =
                    Ym->data[(k + Ym->size[0] * i1) - 1];
              }
            }
            b_st.site = &xc_emlrtRSI;
            e_dynamic_size_checks(&b_st, r2, Yb, bsb->size[0], bsb->size[0]);
            b_st.site = &wc_emlrtRSI;
            f_mtimes(&b_st, r2, Yb, R);
            st.site = &cab_emlrtRSI;
            inv(&st, R, S);
            loop_ub = Ym->size[1];
            i1 = b_Y->size[0] * b_Y->size[1];
            b_Y->size[0] = bsb->size[0];
            b_Y->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(sp, b_Y, i1, &mq_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              irank = bsb->size[0];
              for (partialTrueCount = 0; partialTrueCount < irank;
                   partialTrueCount++) {
                k = (int32_T)bsb->data[partialTrueCount];
                if ((k < 1) || (k > Ym->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(
                      (int32_T)bsb->data[partialTrueCount], 1, Ym->size[0],
                      &yp_emlrtBCI, (emlrtCTX)sp);
                }
                b_Y->data[partialTrueCount + b_Y->size[0] * i1] =
                    Ym->data[(k + Ym->size[0] * i1) - 1];
              }
            }
            st.site = &bab_emlrtRSI;
            qr(&st, b_Y, Yb, R);
          }
          st.site = &aab_emlrtRSI;
          i1 = MDltminT->size[0];
          MDltminT->size[0] = S->size[0] * S->size[1];
          emxEnsureCapacity_boolean_T(&st, MDltminT, i1, &qq_emlrtRTEI);
          loop_ub = S->size[0] * S->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            MDltminT->data[i1] = muDoubleScalarIsInf(S->data[i1]);
          }
          b_st.site = &gj_emlrtRSI;
          c_st.site = &hj_emlrtRSI;
          irank = combineVectorElements(&c_st, MDltminT);
          if (irank > 0) {
            st.site = &mcb_emlrtRSI;
            b_disp(&st, q_emlrt_marshallOut(&st, b_cv),
                   j_emlrt_marshallOut(&st, cv8), &oc_emlrtMCI);
            st.site = &acb_emlrtRSI;
            disp(&st, b_emlrt_marshallOut(&st, cv7), &pc_emlrtMCI);
            i = Un->size[0] * Un->size[1];
            Un->size[0] = 1;
            Un->size[1] = 1;
            emxEnsureCapacity_real_T(sp, Un, i, &tq_emlrtRTEI);
            Un->data[0] = rtNaN;
            i = BB->size[0] * BB->size[1];
            BB->size[0] = 1;
            BB->size[1] = 1;
            emxEnsureCapacity_real_T(sp, BB, i, &vq_emlrtRTEI);
            BB->data[0] = rtNaN;
            exitg1 = true;
          } else {
            st.site = &yy_emlrtRSI;
            if (R->size[1] != Ym->size[1]) {
              emlrtErrorWithMessageIdR2018a(
                  &st, &bb_emlrtRTEI, "MATLAB:dimagree", "MATLAB:dimagree", 0);
            }
            b_st.site = &lv_emlrtRSI;
            mrdiv(&b_st, Ym, R, Yb);
            /*  Compute squared Mahalanobis distances */
            st.site = &xy_emlrtRSI;
            b_power(&st, Yb, r2);
            st.site = &xy_emlrtRSI;
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
            i1 = Szi->size[0];
            Szi->size[0] = MD->size[0];
            emxEnsureCapacity_real_T(sp, Szi, i1, &ar_emlrtRTEI);
            loop_ub = MD->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              Szi->data[i1] = MD->data[i1];
            }
            if (b_mm > percn) {
              k = bsbT->size[0];
              for (b_i = 0; b_i < k; b_i++) {
                if (bsbT->data[b_i]) {
                  if (b_i + 1 > Szi->size[0]) {
                    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Szi->size[0],
                                                  &hq_emlrtBCI, (emlrtCTX)sp);
                  }
                  Szi->data[b_i] = rtInf;
                }
              }
            } else {
              i1 = ii->size[0];
              ii->size[0] = bsb->size[0];
              emxEnsureCapacity_int32_T(sp, ii, i1, &cr_emlrtRTEI);
              loop_ub = bsb->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                if (bsb->data[i1] !=
                    (int32_T)muDoubleScalarFloor(bsb->data[i1])) {
                  emlrtIntegerCheckR2012b(bsb->data[i1], &sb_emlrtDCI,
                                          (emlrtCTX)sp);
                }
                partialTrueCount = (int32_T)bsb->data[i1];
                if ((partialTrueCount < 1) ||
                    (partialTrueCount > MD->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i1], 1,
                                                MD->size[0], &gq_emlrtBCI,
                                                (emlrtCTX)sp);
                }
                ii->data[i1] = partialTrueCount;
              }
              loop_ub = ii->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                Szi->data[ii->data[i1] - 1] = rtInf;
              }
            }
            /*  oldbsbF=bsbF; */
            i1 = oldbsbT->size[0];
            oldbsbT->size[0] = bsbT->size[0];
            emxEnsureCapacity_boolean_T(sp, oldbsbT, i1, &dr_emlrtRTEI);
            loop_ub = bsbT->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              oldbsbT->data[i1] = bsbT->data[i1];
            }
            /*  Take minimum distance of the units not belonging to subset */
            st.site = &wy_emlrtRSI;
            b_st.site = &ww_emlrtRSI;
            c_st.site = &xw_emlrtRSI;
            f_st.site = &yw_emlrtRSI;
            if (Szi->size[0] < 1) {
              emlrtErrorWithMessageIdR2018a(
                  &f_st, &emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
            }
            g_st.site = &ax_emlrtRSI;
            irank = Szi->size[0];
            if (Szi->size[0] <= 2) {
              if (Szi->size[0] == 1) {
                ksor = Szi->data[0];
                idx = 1;
              } else if ((Szi->data[0] > Szi->data[1]) ||
                         (muDoubleScalarIsNaN(Szi->data[0]) &&
                          (!muDoubleScalarIsNaN(Szi->data[1])))) {
                ksor = Szi->data[1];
                idx = 2;
              } else {
                ksor = Szi->data[0];
                idx = 1;
              }
            } else {
              h_st.site = &kq_emlrtRSI;
              if (!muDoubleScalarIsNaN(Szi->data[0])) {
                idx = 1;
              } else {
                idx = 0;
                i_st.site = &lq_emlrtRSI;
                if (Szi->size[0] > 2147483646) {
                  j_st.site = &ad_emlrtRSI;
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
                ksor = Szi->data[0];
                idx = 1;
              } else {
                h_st.site = &jq_emlrtRSI;
                ksor = Szi->data[idx - 1];
                nwhile = idx + 1;
                i_st.site = &mq_emlrtRSI;
                if ((idx + 1 <= Szi->size[0]) && (Szi->size[0] > 2147483646)) {
                  j_st.site = &ad_emlrtRSI;
                  check_forloop_overflow_error(&j_st);
                }
                for (k = nwhile; k <= irank; k++) {
                  a = Szi->data[k - 1];
                  if (ksor > a) {
                    ksor = a;
                    idx = k;
                  }
                }
              }
            }
            /*  MDltminT = n x 1 Boolean vector which is true if corresponding
             * MD is */
            /*  smaller or equal minMD */
            i1 = MDltminT->size[0];
            MDltminT->size[0] = MD->size[0];
            emxEnsureCapacity_boolean_T(sp, MDltminT, i1, &kr_emlrtRTEI);
            loop_ub = MD->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              MDltminT->data[i1] = (MD->data[i1] <= ksor);
            }
            /*  MDltminbsb = n x 1 Boolean vector (if m>percn) or */
            /*  int32 vector containing the units which certainly remain inside
             * subset */
            /*  i.e. those which have a true in MDltminT and belong to previous
             * subset */
            if (b_mm > percn) {
              if (MDltminT->size[0] != bsbT->size[0]) {
                emlrtSizeEqCheck1DR2012b(MDltminT->size[0], bsbT->size[0],
                                         &gc_emlrtECI, (emlrtCTX)sp);
              }
              i1 = MDltminbsb->size[0];
              MDltminbsb->size[0] = MDltminT->size[0];
              emxEnsureCapacity_boolean_T(sp, MDltminbsb, i1, &nr_emlrtRTEI);
              loop_ub = MDltminT->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                MDltminbsb->data[i1] = (MDltminT->data[i1] && bsbT->data[i1]);
              }
            } else {
              i1 = MDltminbsb->size[0];
              MDltminbsb->size[0] = bsb->size[0];
              emxEnsureCapacity_boolean_T(sp, MDltminbsb, i1, &mr_emlrtRTEI);
              loop_ub = bsb->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                if (bsb->data[i1] !=
                    (int32_T)muDoubleScalarFloor(bsb->data[i1])) {
                  emlrtIntegerCheckR2012b(bsb->data[i1], &tb_emlrtDCI,
                                          (emlrtCTX)sp);
                }
                partialTrueCount = (int32_T)bsb->data[i1];
                if ((partialTrueCount < 1) ||
                    (partialTrueCount > MDltminT->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1,
                                                MDltminT->size[0], &kq_emlrtBCI,
                                                (emlrtCTX)sp);
                }
                MDltminbsb->data[i1] = MDltminT->data[partialTrueCount - 1];
              }
            }
            /*  Find number of units of old subset which have a MD <= minMD */
            st.site = &vy_emlrtRSI;
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
              emxEnsureCapacity_int32_T(sp, unit, i1, &qr_emlrtRTEI);
              unit->data[0] = idx;
              /*  Compute new bsbT and new bsb */
              if (b_mm <= percn) {
                /*  new bsb is equal to oldbsb plus unit which just entered */
                i1 = bsb->size[0];
                partialTrueCount = bsb->size[0];
                bsb->size[0]++;
                emxEnsureCapacity_real_T(sp, bsb, partialTrueCount,
                                         &cq_emlrtRTEI);
                bsb->data[i1] = idx;
              }
              /*  bsbT is equal to old bsbT after adding a single true in */
              /*  correspondence of the unit which entered subset */
              if ((idx < 1) || (idx > bsbT->size[0])) {
                emlrtDynamicBoundsCheckR2012b(idx, 1, bsbT->size[0],
                                              &mq_emlrtBCI, (emlrtCTX)sp);
              }
              bsbT->data[idx - 1] = true;
            } else if ((rankgap > 1.0) && (rankgap <= 10.0)) {
              /*  MDmod is the vector of Mahalanobis distance which will have */
              /*  a Inf in correspondence of the units of old subset which */
              /*  had a MD smaller than minMD */
              i1 = Szi->size[0];
              Szi->size[0] = MD->size[0];
              emxEnsureCapacity_real_T(sp, Szi, i1, &tr_emlrtRTEI);
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
                loop_ub = bsb->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  if (bsb->data[i1] !=
                      (int32_T)muDoubleScalarFloor(bsb->data[i1])) {
                    emlrtIntegerCheckR2012b(bsb->data[i1], &ub_emlrtDCI,
                                            (emlrtCTX)sp);
                  }
                  partialTrueCount = (int32_T)bsb->data[i1];
                  if ((partialTrueCount < 1) ||
                      (partialTrueCount > MDltminT->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1,
                                                  MDltminT->size[0],
                                                  &nq_emlrtBCI, (emlrtCTX)sp);
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
                emxEnsureCapacity_uint32_T(sp, bsbrini, i1, &cq_emlrtRTEI);
                partialTrueCount = 0;
                for (b_i = 0; b_i <= k; b_i++) {
                  if (MDltminT->data[(int32_T)bsb->data[b_i] - 1]) {
                    if (b_i + 1 > bsb->size[0]) {
                      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, bsb->size[0],
                                                    &qq_emlrtBCI, (emlrtCTX)sp);
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
                emxEnsureCapacity_real_T(sp, unitout, i1, &cq_emlrtRTEI);
                partialTrueCount = 0;
                for (b_i = 0; b_i <= k; b_i++) {
                  if (!MDltminT->data[(int32_T)bsb->data[b_i] - 1]) {
                    if (b_i + 1 > bsb->size[0]) {
                      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, bsb->size[0],
                                                    &sq_emlrtBCI, (emlrtCTX)sp);
                    }
                    unitout->data[partialTrueCount] = bsb->data[b_i];
                    partialTrueCount++;
                  }
                }
                i1 = ii->size[0];
                ii->size[0] = bsbrini->size[0];
                emxEnsureCapacity_int32_T(sp, ii, i1, &bs_emlrtRTEI);
                loop_ub = bsbrini->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  if (((int32_T)bsbrini->data[i1] < 1) ||
                      ((int32_T)bsbrini->data[i1] > MD->size[0])) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)bsbrini->data[i1], 1,
                                                  MD->size[0], &rq_emlrtBCI,
                                                  (emlrtCTX)sp);
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
                emxEnsureCapacity_boolean_T(sp, bsbriniT, i1, &wr_emlrtRTEI);
                loop_ub = MDltminbsb->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  bsbriniT->data[i1] = MDltminbsb->data[i1];
                }
                k = MDltminbsb->size[0];
                for (b_i = 0; b_i < k; b_i++) {
                  if (MDltminbsb->data[b_i]) {
                    if (b_i + 1 > Szi->size[0]) {
                      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Szi->size[0],
                                                    &oq_emlrtBCI, (emlrtCTX)sp);
                    }
                    Szi->data[b_i] = rtInf;
                  }
                }
              }
              lunit = 0;
              zz = 0;
              /*  In the following loop we add k units to form the new */
              /*  subset of m+1 units Note that if the difference between */
              /*  m+1 and the rank of the min outside subset is equal to
               * rankgap, */
              /*  than at most rankgap minima must be calculated to find */
              /*  the the (m+1)-th order statistic */
              i1 = (int32_T)rankgap;
              for (loop_ub = 0; loop_ub < i1; loop_ub++) {
                st.site = &uy_emlrtRSI;
                b_st.site = &ww_emlrtRSI;
                c_st.site = &xw_emlrtRSI;
                f_st.site = &yw_emlrtRSI;
                if (Szi->size[0] < 1) {
                  emlrtErrorWithMessageIdR2018a(
                      &f_st, &emlrtRTEI,
                      "Coder:toolbox:eml_min_or_max_varDimZero",
                      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
                }
                g_st.site = &ax_emlrtRSI;
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
                  h_st.site = &kq_emlrtRSI;
                  if (!muDoubleScalarIsNaN(Szi->data[0])) {
                    idx = 1;
                  } else {
                    idx = 0;
                    i_st.site = &lq_emlrtRSI;
                    if (Szi->size[0] > 2147483646) {
                      j_st.site = &ad_emlrtRSI;
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
                    h_st.site = &jq_emlrtRSI;
                    ksor = Szi->data[idx - 1];
                    nwhile = idx + 1;
                    i_st.site = &mq_emlrtRSI;
                    if ((idx + 1 <= Szi->size[0]) &&
                        (Szi->size[0] > 2147483646)) {
                      j_st.site = &ad_emlrtRSI;
                      check_forloop_overflow_error(&j_st);
                    }
                    for (k = nwhile; k <= irank; k++) {
                      a = Szi->data[k - 1];
                      if (ksor > a) {
                        ksor = a;
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
                                                &wq_emlrtBCI, (emlrtCTX)sp);
                }
                if (bsbT->data[idx - 1]) {
                  if (b_mm <= percn) {
                    if ((zz + 1 < 1) || (zz + 1 > 10)) {
                      emlrtDynamicBoundsCheckR2012b(zz + 1, 1, 10, &fp_emlrtBCI,
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
                          emlrtDynamicBoundsCheckR2012b(
                              b_i + 1, 1, unitout->size[0], &ar_emlrtBCI,
                              (emlrtCTX)sp);
                        }
                        unitout->data[partialTrueCount] = unitout->data[b_i];
                        partialTrueCount++;
                      }
                    }
                    partialTrueCount = unitout->size[0];
                    unitout->size[0] = trueCount;
                    emxEnsureCapacity_real_T(sp, unitout, partialTrueCount,
                                             &cq_emlrtRTEI);
                  } else {
                    if (idx > bsbriniT->size[0]) {
                      emlrtDynamicBoundsCheckR2012b(idx, 1, bsbriniT->size[0],
                                                    &xq_emlrtBCI, (emlrtCTX)sp);
                    }
                    bsbriniT->data[idx - 1] = true;
                  }
                } else {
                  if ((lunit + 1 < 1) || (lunit + 1 > 10)) {
                    emlrtDynamicBoundsCheckR2012b(lunit + 1, 1, 10,
                                                  &dp_emlrtBCI, (emlrtCTX)sp);
                  }
                  unitadd[lunit] = idx;
                  lunit++;
                }
                /*  disp(posunit(posncl1)) */
                if (idx > Szi->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(idx, 1, Szi->size[0],
                                                &yq_emlrtBCI, (emlrtCTX)sp);
                }
                Szi->data[idx - 1] = rtInf;
                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b((emlrtCTX)sp);
                }
              }
              /*  unit = vector containing all units which enter the new subset
               */
              /*  but did not belong to previous subset */
              if (1 > lunit) {
                lunit = 0;
              } else if (lunit > 10) {
                emlrtDynamicBoundsCheckR2012b(lunit, 1, 10, &ep_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              i1 = unit->size[0];
              unit->size[0] = lunit;
              emxEnsureCapacity_int32_T(sp, unit, i1, &cs_emlrtRTEI);
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
                  emlrtDynamicBoundsCheckR2012b(zz, 1, 10, &gp_emlrtBCI,
                                                (emlrtCTX)sp);
                }
                i1 = bsbr->size[0];
                bsbr->size[0] = bsbrini->size[0] + zz;
                emxEnsureCapacity_int32_T(sp, bsbr, i1, &ds_emlrtRTEI);
                loop_ub = bsbrini->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  bsbr->data[i1] = (int32_T)bsbrini->data[i1];
                }
                for (i1 = 0; i1 < zz; i1++) {
                  bsbr->data[i1 + bsbrini->size[0]] = bsbradd[i1];
                }
                i1 = bsb->size[0];
                bsb->size[0] = bsbr->size[0] + lunit;
                emxEnsureCapacity_real_T(sp, bsb, i1, &fs_emlrtRTEI);
                loop_ub = bsbr->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  bsb->data[i1] = bsbr->data[i1];
                }
                for (i1 = 0; i1 < lunit; i1++) {
                  bsb->data[i1 + bsbr->size[0]] = unitadd[i1];
                }
                i1 = bsbT->size[0];
                bsbT->size[0] = n;
                emxEnsureCapacity_boolean_T(sp, bsbT, i1, &is_emlrtRTEI);
                for (i1 = 0; i1 < n; i1++) {
                  bsbT->data[i1] = false;
                }
                i1 = ii->size[0];
                ii->size[0] = bsb->size[0];
                emxEnsureCapacity_int32_T(sp, ii, i1, &ks_emlrtRTEI);
                loop_ub = bsb->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  partialTrueCount = (int32_T)bsb->data[i1];
                  if ((partialTrueCount < 1) || (partialTrueCount > n)) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i1], 1, n,
                                                  &tq_emlrtBCI, (emlrtCTX)sp);
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
                /*  Note that bsbT has been computed through the 3 following
                 * instructions */
                /*  -----------    bsbriniT=MDltminT & bsbT; */
                /*  -----------    bsbriniT(minMDindex)=true; */
                /*  -----------    bsbriniT(unit)=true; */
                for (i1 = 0; i1 < lunit; i1++) {
                  partialTrueCount = unitadd[i1];
                  if ((partialTrueCount < 1) ||
                      (partialTrueCount > bsbriniT->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1,
                                                  bsbriniT->size[0],
                                                  &uq_emlrtBCI, (emlrtCTX)sp);
                  }
                  d_tmp_data[i1] = partialTrueCount;
                }
                for (i1 = 0; i1 < lunit; i1++) {
                  bsbriniT->data[d_tmp_data[i1] - 1] = true;
                }
                i1 = bsbT->size[0];
                bsbT->size[0] = bsbriniT->size[0];
                emxEnsureCapacity_boolean_T(sp, bsbT, i1, &gs_emlrtRTEI);
                loop_ub = bsbriniT->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  bsbT->data[i1] = bsbriniT->data[i1];
                }
              }
              /*  Compute bsbT (Boolean vector which identifies new subset) */
            } else {
              /*   rankgap>nrepmin */
              /*  New sorting based on quickselectFS */
              i1 = Szi->size[0];
              Szi->size[0] = MD->size[0];
              emxEnsureCapacity_real_T(sp, Szi, i1, &rr_emlrtRTEI);
              loop_ub = MD->size[0] - 1;
              for (i1 = 0; i1 <= loop_ub; i1++) {
                Szi->data[i1] = MD->data[i1];
              }
              st.site = &ty_emlrtRSI;
              ksor = quickselectFS(&st, Szi, b_mm + 1.0, idx);
              i1 = bsbT->size[0];
              bsbT->size[0] = MD->size[0];
              emxEnsureCapacity_boolean_T(sp, bsbT, i1, &ur_emlrtRTEI);
              loop_ub = MD->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                bsbT->data[i1] = (MD->data[i1] <= ksor);
              }
              st.site = &sy_emlrtRSI;
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
                  emxEnsureCapacity_real_T(sp, bsb, i1, &cq_emlrtRTEI);
                  partialTrueCount = 0;
                  for (b_i = 0; b_i <= k; b_i++) {
                    if (bsbT->data[b_i]) {
                      if (b_i + 1 > seq->size[0]) {
                        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                                                      &pq_emlrtBCI,
                                                      (emlrtCTX)sp);
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
                                                  &xo_emlrtBCI, (emlrtCTX)sp);
                  }
                }
                k = MD->size[0];
                for (b_i = 0; b_i < k; b_i++) {
                  if ((MD->data[b_i] == ksor) && (b_i + 1 > seq->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                                                  &wo_emlrtBCI, (emlrtCTX)sp);
                  }
                }
                k = MD->size[0];
                trueCount = 0;
                for (b_i = 0; b_i < k; b_i++) {
                  if (MD->data[b_i] < ksor) {
                    trueCount++;
                  }
                }
                a = (b_mm + 1.0) - (real_T)trueCount;
                if (1.0 > a) {
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
                    emlrtDynamicBoundsCheckR2012b(1, 1, trueCount, &hp_emlrtBCI,
                                                  (emlrtCTX)sp);
                  }
                  k = MD->size[0];
                  trueCount = 0;
                  for (b_i = 0; b_i < k; b_i++) {
                    if (MD->data[b_i] == ksor) {
                      trueCount++;
                    }
                  }
                  if (((int32_T)a < 1) || ((int32_T)a > trueCount)) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)a, 1, trueCount,
                                                  &ip_emlrtBCI, (emlrtCTX)sp);
                  }
                  loop_ub = (int32_T)a;
                }
                k = MD->size[0];
                trueCount = 0;
                for (b_i = 0; b_i < k; b_i++) {
                  if (MD->data[b_i] == ksor) {
                    trueCount++;
                  }
                }
                b_ym[0] = 1;
                b_ym[1] = loop_ub;
                st.site = &ry_emlrtRSI;
                indexShapeCheck(&st, trueCount, b_ym);
                k = MD->size[0] - 1;
                trueCount = 0;
                for (b_i = 0; b_i <= k; b_i++) {
                  if (MD->data[b_i] < ksor) {
                    trueCount++;
                  }
                }
                i1 = r9->size[0];
                r9->size[0] = trueCount;
                emxEnsureCapacity_int32_T(sp, r9, i1, &cq_emlrtRTEI);
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
                emxEnsureCapacity_int32_T(sp, r10, i1, &cq_emlrtRTEI);
                partialTrueCount = 0;
                for (b_i = 0; b_i <= irank; b_i++) {
                  if (MD->data[b_i] == ksor) {
                    r10->data[partialTrueCount] = b_i + 1;
                    partialTrueCount++;
                  }
                }
                i1 = bsb->size[0];
                bsb->size[0] = r9->size[0] + loop_ub;
                emxEnsureCapacity_real_T(sp, bsb, i1, &es_emlrtRTEI);
                irank = r9->size[0];
                for (i1 = 0; i1 < irank; i1++) {
                  bsb->data[i1] = seq->data[r9->data[i1] - 1];
                }
                for (i1 = 0; i1 < loop_ub; i1++) {
                  bsb->data[i1 + r9->size[0]] = seq->data[r10->data[i1] - 1];
                }
                i1 = bsbT->size[0];
                bsbT->size[0] = n;
                emxEnsureCapacity_boolean_T(sp, bsbT, i1, &hs_emlrtRTEI);
                for (i1 = 0; i1 < n; i1++) {
                  bsbT->data[i1] = false;
                }
                i1 = ii->size[0];
                ii->size[0] = bsb->size[0];
                emxEnsureCapacity_int32_T(sp, ii, i1, &js_emlrtRTEI);
                loop_ub = bsb->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  partialTrueCount = (int32_T)bsb->data[i1];
                  if (bsb->data[i1] != partialTrueCount) {
                    emlrtIntegerCheckR2012b(bsb->data[i1], &vb_emlrtDCI,
                                            (emlrtCTX)sp);
                  }
                  if (partialTrueCount > n) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i1], 1, n,
                                                  &vq_emlrtBCI, (emlrtCTX)sp);
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
              emxEnsureCapacity_boolean_T(sp, MDltminT, i1, &xr_emlrtRTEI);
              loop_ub = oldbsbT->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                MDltminT->data[i1] = !oldbsbT->data[i1];
              }
              if (bsbT->size[0] != MDltminT->size[0]) {
                emlrtSizeEqCheck1DR2012b(bsbT->size[0], MDltminT->size[0],
                                         &hc_emlrtECI, (emlrtCTX)sp);
              }
              st.site = &qy_emlrtRSI;
              i1 = MDltminT->size[0];
              MDltminT->size[0] = bsbT->size[0];
              emxEnsureCapacity_boolean_T(&st, MDltminT, i1, &yr_emlrtRTEI);
              loop_ub = bsbT->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                MDltminT->data[i1] = (bsbT->data[i1] && MDltminT->data[i1]);
              }
              b_st.site = &nd_emlrtRSI;
              eml_find(&b_st, MDltminT, ii);
              i1 = unit->size[0];
              unit->size[0] = ii->size[0];
              emxEnsureCapacity_int32_T(&st, unit, i1, &as_emlrtRTEI);
              loop_ub = ii->size[0];
              for (i1 = 0; i1 < loop_ub; i1++) {
                unit->data[i1] = ii->data[i1];
              }
            }
            /*  store mean of units forming old subset */
            i1 = meoldbsb->size[0] * meoldbsb->size[1];
            meoldbsb->size[0] = 1;
            meoldbsb->size[1] = ym->size[1];
            emxEnsureCapacity_real_T(sp, meoldbsb, i1, &vr_emlrtRTEI);
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
                a = (b_mm - init1) + 1.0;
                if (a != (int32_T)muDoubleScalarFloor(a)) {
                  emlrtIntegerCheckR2012b(a, &fb_emlrtDCI, (emlrtCTX)sp);
                }
                if (((int32_T)a < 1) || ((int32_T)a > Un->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)a, 1, Un->size[0],
                                                &lp_emlrtBCI, (emlrtCTX)sp);
                }
                b_ym[0] = 1;
                irank = partialTrueCount - i1;
                b_ym[1] = irank;
                emlrtSubAssignSizeCheckR2012b(&b_ym[0], 2, &unit->size[0], 1,
                                              &kc_emlrtECI, (emlrtCTX)sp);
                for (partialTrueCount = 0; partialTrueCount < irank;
                     partialTrueCount++) {
                  Un->data[((int32_T)a +
                            Un->size[0] * ((i1 + partialTrueCount) + 1)) -
                           1] = unit->data[partialTrueCount];
                }
              } else {
                st.site = &py_emlrtRSI;
                int2str(&st, b_mm, tmp_data, b_ym);
                tmp_size[0] = 1;
                tmp_size[1] = b_ym[1] + 44;
                for (i1 = 0; i1 < 44; i1++) {
                  b_tmp_data[i1] = cv9[i1];
                }
                loop_ub = b_ym[1];
                if (0 <= loop_ub - 1) {
                  memcpy(&b_tmp_data[44], &tmp_data[0],
                         loop_ub * sizeof(char_T));
                }
                st.site = &ddb_emlrtRSI;
                disp(&st, w_emlrt_marshallOut(&st, b_tmp_data, tmp_size),
                     &qc_emlrtMCI);
                st.site = &oy_emlrtRSI;
                int2str(&st, unit->size[0], tmp_data, b_ym);
                b_tmp_size[0] = 1;
                b_tmp_size[1] = b_ym[1] + 30;
                for (i1 = 0; i1 < 30; i1++) {
                  c_tmp_data[i1] = cv10[i1];
                }
                loop_ub = b_ym[1];
                if (0 <= loop_ub - 1) {
                  memcpy(&c_tmp_data[30], &tmp_data[0],
                         loop_ub * sizeof(char_T));
                }
                st.site = &cdb_emlrtRSI;
                disp(&st, w_emlrt_marshallOut(&st, c_tmp_data, b_tmp_size),
                     &rc_emlrtMCI);
                st.site = &ny_emlrtRSI;
                b_indexShapeCheck(&st, unit->size[0]);
                a = (b_mm - init1) + 1.0;
                if (a != (int32_T)muDoubleScalarFloor(a)) {
                  emlrtIntegerCheckR2012b(a, &gb_emlrtDCI, (emlrtCTX)sp);
                }
                if (((int32_T)a < 1) || ((int32_T)a > Un->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)a, 1, Un->size[0],
                                                &mp_emlrtBCI, (emlrtCTX)sp);
                }
                b_ym[0] = 1;
                b_ym[1] = 10;
                irank = 10;
                emlrtSubAssignSizeCheckR2012b(&b_ym[0], 2, &irank, 1,
                                              &lc_emlrtECI, (emlrtCTX)sp);
                for (i1 = 0; i1 < 10; i1++) {
                  Un->data[((int32_T)a + Un->size[0] * (i1 + 1)) - 1] =
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
    st.site = &scb_emlrtRSI;
    b_disp(&st, q_emlrt_marshallOut(&st, cv1), n_emlrt_marshallOut(&st, cv6),
           &mc_emlrtMCI);
    st.site = &ybb_emlrtRSI;
    disp(&st, b_emlrt_marshallOut(&st, cv7), &nc_emlrtMCI);
    i = Un->size[0] * Un->size[1];
    Un->size[0] = 1;
    Un->size[1] = 1;
    emxEnsureCapacity_real_T(sp, Un, i, &xp_emlrtRTEI);
    Un->data[0] = rtNaN;
    i = BB->size[0] * BB->size[1];
    BB->size[0] = 1;
    BB->size[1] = 1;
    emxEnsureCapacity_real_T(sp, BB, i, &yp_emlrtRTEI);
    BB->data[0] = rtNaN;
  }
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

/* End of code generation (FSMbsb.c) */
