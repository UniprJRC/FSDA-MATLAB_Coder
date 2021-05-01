/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRmdr.c
 *
 * Code generation for function 'FSRmdr'
 *
 */

/* Include files */
#include "FSRmdr.h"
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_mexutil.h"
#include "FSR_wrapper_types.h"
#include "any.h"
#include "cat.h"
#include "colon.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "eml_setop.h"
#include "ifWhileCond.h"
#include "indexShapeCheck.h"
#include "int2str.h"
#include "mldivide.h"
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
static emlrtRTEInfo c_emlrtRTEI = {
    542,                                              /* lineNo */
    5,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRSInfo mgb_emlrtRSI = {
    860,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo ngb_emlrtRSI = {
    851,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo ogb_emlrtRSI = {
    850,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo pgb_emlrtRSI = {
    849,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo qgb_emlrtRSI = {
    821,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo rgb_emlrtRSI = {
    795,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo sgb_emlrtRSI = {
    792,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo tgb_emlrtRSI = {
    786,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo ugb_emlrtRSI = {
    776,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo vgb_emlrtRSI = {
    769,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo wgb_emlrtRSI = {
    768,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo xgb_emlrtRSI = {
    763,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo ygb_emlrtRSI = {
    751,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo ahb_emlrtRSI = {
    747,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo bhb_emlrtRSI = {
    746,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo chb_emlrtRSI = {
    742,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo dhb_emlrtRSI = {
    727,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo ehb_emlrtRSI = {
    726,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo fhb_emlrtRSI = {
    672,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo ghb_emlrtRSI = {
    671,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo hhb_emlrtRSI = {
    660,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo ihb_emlrtRSI = {
    659,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo jhb_emlrtRSI = {
    640,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo khb_emlrtRSI = {
    621,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo lhb_emlrtRSI = {
    620,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo mhb_emlrtRSI = {
    615,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo nhb_emlrtRSI = {
    611,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo ohb_emlrtRSI = {
    605,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo phb_emlrtRSI = {
    597,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo qhb_emlrtRSI = {
    545,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo rhb_emlrtRSI = {
    542,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo shb_emlrtRSI = {
    537,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo thb_emlrtRSI = {
    516,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo uhb_emlrtRSI = {
    514,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo vhb_emlrtRSI = {
    510,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtMCInfo ob_emlrtMCI = {
    523,                                              /* lineNo */
    13,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtMCInfo pb_emlrtMCI = {
    660,                                              /* lineNo */
    17,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtMCInfo qb_emlrtMCI = {
    849,                                              /* lineNo */
    25,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtMCInfo rb_emlrtMCI = {
    850,                                              /* lineNo */
    25,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtBCInfo is_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    473,                                               /* lineNo */
    19,                                                /* colNo */
    "iniseq",                                          /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo mc_emlrtDCI = {
    605,                                               /* lineNo */
    22,                                                /* colNo */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    4                                                  /* checkKind */
};

static emlrtDCInfo nc_emlrtDCI = {
    605,                                               /* lineNo */
    22,                                                /* colNo */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtDCInfo oc_emlrtDCI = {
    615,                                               /* lineNo */
    24,                                                /* colNo */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    4                                                  /* checkKind */
};

static emlrtDCInfo pc_emlrtDCI = {
    615,                                               /* lineNo */
    24,                                                /* colNo */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtRTEInfo rc_emlrtRTEI = {
    656,                                              /* lineNo */
    12,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtECInfo uc_emlrtECI = {
    -1,                                               /* nDims */
    672,                                              /* lineNo */
    20,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtECInfo vc_emlrtECI = {
    -1,                                               /* nDims */
    726,                                              /* lineNo */
    11,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtECInfo wc_emlrtECI = {
    2,                                                /* nDims */
    763,                                              /* lineNo */
    28,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtECInfo xc_emlrtECI = {
    2,                                                /* nDims */
    768,                                              /* lineNo */
    41,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtECInfo yc_emlrtECI = {
    -1,                                               /* nDims */
    768,                                              /* lineNo */
    41,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtECInfo ad_emlrtECI = {
    -1,                                               /* nDims */
    770,                                              /* lineNo */
    29,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtECInfo bd_emlrtECI = {
    -1,                                               /* nDims */
    727,                                              /* lineNo */
    9,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtECInfo cd_emlrtECI = {
    -1,                                               /* nDims */
    781,                                              /* lineNo */
    25,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtBCInfo js_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    743,                                               /* lineNo */
    31,                                                /* colNo */
    "S2",                                              /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo ks_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    747,                                               /* lineNo */
    31,                                                /* colNo */
    "S2",                                              /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo ls_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    788,                                               /* lineNo */
    38,                                                /* colNo */
    "S2",                                              /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo ms_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    795,                                               /* lineNo */
    74,                                                /* colNo */
    "S2",                                              /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo ns_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    827,                                               /* lineNo */
    21,                                                /* colNo */
    "ord",                                             /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo os_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    827,                                               /* lineNo */
    24,                                                /* colNo */
    "ord",                                             /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtECInfo dd_emlrtECI = {
    -1,                                               /* nDims */
    841,                                              /* lineNo */
    26,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtBCInfo ps_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    859,                                               /* lineNo */
    29,                                                /* colNo */
    "ord",                                             /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo qs_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    859,                                               /* lineNo */
    34,                                                /* colNo */
    "ord",                                             /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo rs_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    862,                                               /* lineNo */
    29,                                                /* colNo */
    "ord",                                             /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo ss_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    862,                                               /* lineNo */
    34,                                                /* colNo */
    "ord",                                             /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo qc_emlrtDCI = {
    740,                                               /* lineNo */
    22,                                                /* colNo */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo ts_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    740,                                               /* lineNo */
    22,                                                /* colNo */
    "Bols",                                            /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo us_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    740,                                               /* lineNo */
    33,                                                /* colNo */
    "Bols",                                            /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo vs_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    740,                                               /* lineNo */
    35,                                                /* colNo */
    "Bols",                                            /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtECInfo ed_emlrtECI = {
    -1,                                               /* nDims */
    740,                                              /* lineNo */
    17,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtBCInfo ws_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    734,                                               /* lineNo */
    24,                                                /* colNo */
    "BB",                                              /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtECInfo fd_emlrtECI = {
    -1,                                               /* nDims */
    734,                                              /* lineNo */
    17,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtDCInfo rc_emlrtDCI = {
    846,                                               /* lineNo */
    24,                                                /* colNo */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo xs_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    846,                                               /* lineNo */
    24,                                                /* colNo */
    "Un",                                              /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtECInfo gd_emlrtECI = {
    -1,                                               /* nDims */
    846,                                              /* lineNo */
    21,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtDCInfo sc_emlrtDCI = {
    851,                                               /* lineNo */
    28,                                                /* colNo */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo ys_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    851,                                               /* lineNo */
    28,                                                /* colNo */
    "Un",                                              /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo tc_emlrtDCI = {
    611,                                               /* lineNo */
    20,                                                /* colNo */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtDCInfo uc_emlrtDCI = {
    611,                                               /* lineNo */
    20,                                                /* colNo */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    4                                                  /* checkKind */
};

static emlrtDCInfo vc_emlrtDCI = {
    622,                                               /* lineNo */
    16,                                                /* colNo */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtDCInfo wc_emlrtDCI = {
    622,                                               /* lineNo */
    16,                                                /* colNo */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    4                                                  /* checkKind */
};

static emlrtBCInfo at_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    528,                                               /* lineNo */
    10,                                                /* colNo */
    "X",                                               /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo xc_emlrtDCI = {
    528,                                               /* lineNo */
    10,                                                /* colNo */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo bt_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    529,                                               /* lineNo */
    10,                                                /* colNo */
    "y",                                               /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo ct_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    515,                                               /* lineNo */
    14,                                                /* colNo */
    "X",                                               /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo dt_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    526,                                               /* lineNo */
    10,                                                /* colNo */
    "y",                                               /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo yc_emlrtDCI = {
    526,                                               /* lineNo */
    10,                                                /* colNo */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo et_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    586,                                               /* lineNo */
    6,                                                 /* colNo */
    "bsbT",                                            /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo ft_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    593,                                               /* lineNo */
    5,                                                 /* colNo */
    "seq",                                             /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo ad_emlrtDCI = {
    611,                                               /* lineNo */
    16,                                                /* colNo */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtDCInfo bd_emlrtDCI = {
    611,                                               /* lineNo */
    16,                                                /* colNo */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    4                                                  /* checkKind */
};

static emlrtBCInfo gt_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    626,                                               /* lineNo */
    23,                                                /* colNo */
    "bsbsteps",                                        /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo cd_emlrtDCI = {
    622,                                               /* lineNo */
    5,                                                 /* colNo */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtDCInfo dd_emlrtDCI = {
    622,                                               /* lineNo */
    5,                                                 /* colNo */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    4                                                  /* checkKind */
};

static emlrtDCInfo ed_emlrtDCI = {
    631,                                               /* lineNo */
    13,                                                /* colNo */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo ht_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    631,                                               /* lineNo */
    13,                                                /* colNo */
    "boobsbsteps",                                     /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo fd_emlrtDCI = {
    640,                                               /* lineNo */
    33,                                                /* colNo */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtDCInfo gd_emlrtDCI = {
    640,                                               /* lineNo */
    33,                                                /* colNo */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    4                                                  /* checkKind */
};

static emlrtBCInfo it_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    731,                                               /* lineNo */
    16,                                                /* colNo */
    "boobsbsteps",                                     /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo jt_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    734,                                               /* lineNo */
    20,                                                /* colNo */
    "BB",                                              /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo hd_emlrtDCI = {
    811,                                               /* lineNo */
    19,                                                /* colNo */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo kt_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    811,                                               /* lineNo */
    19,                                                /* colNo */
    "r",                                               /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo lt_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    743,                                               /* lineNo */
    17,                                                /* colNo */
    "S2",                                              /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo id_emlrtDCI = {
    743,                                               /* lineNo */
    17,                                                /* colNo */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo mt_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    830,                                               /* lineNo */
    18,                                                /* colNo */
    "bsbT",                                            /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo nt_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    833,                                               /* lineNo */
    18,                                                /* colNo */
    "X",                                               /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo ot_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    747,                                               /* lineNo */
    17,                                                /* colNo */
    "S2",                                              /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo jd_emlrtDCI = {
    747,                                               /* lineNo */
    17,                                                /* colNo */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo pt_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    834,                                               /* lineNo */
    18,                                                /* colNo */
    "y",                                               /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo qt_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    759,                                               /* lineNo */
    30,                                                /* colNo */
    "X",                                               /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo kd_emlrtDCI = {
    759,                                               /* lineNo */
    30,                                                /* colNo */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo rt_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    841,                                               /* lineNo */
    22,                                                /* colNo */
    "seq",                                             /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo st_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    776,                                               /* lineNo */
    31,                                                /* colNo */
    "r",                                               /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo tt_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    770,                                               /* lineNo */
    29,                                                /* colNo */
    "hi",                                              /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo ut_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    776,                                               /* lineNo */
    49,                                                /* colNo */
    "e",                                               /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo vt_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    779,                                               /* lineNo */
    48,                                                /* colNo */
    "ncl",                                             /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo wt_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    781,                                               /* lineNo */
    27,                                                /* colNo */
    "r",                                               /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo xt_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    781,                                               /* lineNo */
    55,                                                /* colNo */
    "r",                                               /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo yt_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    788,                                               /* lineNo */
    24,                                                /* colNo */
    "S2",                                              /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo ld_emlrtDCI = {
    788,                                               /* lineNo */
    24,                                                /* colNo */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo au_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    795,                                               /* lineNo */
    60,                                                /* colNo */
    "S2",                                              /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo md_emlrtDCI = {
    795,                                               /* lineNo */
    60,                                                /* colNo */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo bu_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    795,                                               /* lineNo */
    25,                                                /* colNo */
    "mdr",                                             /* aName */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo nd_emlrtDCI = {
    795,                                               /* lineNo */
    25,                                                /* colNo */
    "FSRmdr",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtRTEInfo wx_emlrtRTEI = {
    472,                                              /* lineNo */
    5,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo xx_emlrtRTEI = {
    510,                                              /* lineNo */
    4,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo yx_emlrtRTEI = {
    511,                                              /* lineNo */
    5,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo ay_emlrtRTEI = {
    528,                                              /* lineNo */
    5,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo by_emlrtRTEI = {
    529,                                              /* lineNo */
    5,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo cy_emlrtRTEI = {
    526,                                              /* lineNo */
    5,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo dy_emlrtRTEI = {
    515,                                              /* lineNo */
    9,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo ey_emlrtRTEI = {
    585,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo fy_emlrtRTEI = {
    586,                                              /* lineNo */
    6,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo gy_emlrtRTEI = {
    589,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo hy_emlrtRTEI = {
    1,                                                /* lineNo */
    32,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo iy_emlrtRTEI = {
    597,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo jy_emlrtRTEI = {
    605,                                              /* lineNo */
    7,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo ky_emlrtRTEI = {
    605,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo ly_emlrtRTEI = {
    611,                                              /* lineNo */
    5,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo my_emlrtRTEI = {
    611,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo ny_emlrtRTEI = {
    615,                                              /* lineNo */
    6,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo oy_emlrtRTEI = {
    615,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo py_emlrtRTEI = {
    620,                                              /* lineNo */
    4,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo qy_emlrtRTEI = {
    621,                                              /* lineNo */
    5,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo ry_emlrtRTEI = {
    622,                                              /* lineNo */
    5,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo sy_emlrtRTEI = {
    626,                                              /* lineNo */
    5,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo ty_emlrtRTEI = {
    627,                                              /* lineNo */
    5,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo uy_emlrtRTEI = {
    630,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo vy_emlrtRTEI = {
    631,                                              /* lineNo */
    13,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo wy_emlrtRTEI = {
    640,                                              /* lineNo */
    14,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo xy_emlrtRTEI = {
    640,                                              /* lineNo */
    29,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo yy_emlrtRTEI = {
    672,                                              /* lineNo */
    13,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo aab_emlrtRTEI = {
    726,                                              /* lineNo */
    9,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo bab_emlrtRTEI = {
    804,                                              /* lineNo */
    13,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo cab_emlrtRTEI = {
    734,                                              /* lineNo */
    20,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo dab_emlrtRTEI = {
    811,                                              /* lineNo */
    19,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo eab_emlrtRTEI = {
    827,                                              /* lineNo */
    13,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo fab_emlrtRTEI = {
    746,                                              /* lineNo */
    17,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo gab_emlrtRTEI = {
    829,                                              /* lineNo */
    13,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo hab_emlrtRTEI = {
    830,                                              /* lineNo */
    18,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo iab_emlrtRTEI = {
    833,                                              /* lineNo */
    13,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo jab_emlrtRTEI = {
    834,                                              /* lineNo */
    13,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo kab_emlrtRTEI = {
    759,                                              /* lineNo */
    21,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo lab_emlrtRTEI = {
    862,                                              /* lineNo */
    21,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo mab_emlrtRTEI = {
    763,                                              /* lineNo */
    29,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo nab_emlrtRTEI = {
    763,                                              /* lineNo */
    28,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo oab_emlrtRTEI = {
    773,                                              /* lineNo */
    25,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo pab_emlrtRTEI = {
    768,                                              /* lineNo */
    25,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo qab_emlrtRTEI = {
    34,               /* lineNo */
    1,                /* colNo */
    "rdivide_helper", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_"
    "helper.m" /* pName */
};

static emlrtRTEInfo rab_emlrtRTEI = {
    776,                                              /* lineNo */
    21,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo sab_emlrtRTEI = {
    781,                                              /* lineNo */
    27,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo tab_emlrtRTEI = {
    781,                                              /* lineNo */
    53,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo uab_emlrtRTEI = {
    558,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo vab_emlrtRTEI = {
    593,                                              /* lineNo */
    1,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo wab_emlrtRTEI = {
    643,                                              /* lineNo */
    8,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo xab_emlrtRTEI = {
    671,                                              /* lineNo */
    13,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo yab_emlrtRTEI = {
    751,                                              /* lineNo */
    21,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo abb_emlrtRTEI = {
    779,                                              /* lineNo */
    25,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo bbb_emlrtRTEI = {
    841,                                              /* lineNo */
    17,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo cbb_emlrtRTEI = {
    626,                                              /* lineNo */
    23,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo dbb_emlrtRTEI = {
    589,                                              /* lineNo */
    6,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo ebb_emlrtRTEI = {
    776,                                              /* lineNo */
    29,                                               /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRTEInfo fbb_emlrtRTEI = {
    542,                                              /* lineNo */
    5,                                                /* colNo */
    "FSRmdr",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pName */
};

static emlrtRSInfo bnb_emlrtRSI = {
    523,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo vob_emlrtRSI = {
    850,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo wob_emlrtRSI = {
    849,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo xob_emlrtRSI = {
    660,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

static emlrtRSInfo cpb_emlrtRSI = {
    542,                                              /* lineNo */
    "FSRmdr",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\FSRmdr.m" /* pathName */
};

/* Function Declarations */
static int32_T div_nde_s32_floor(int32_T numerator, int32_T denominator);

static const mxArray *fb_emlrt_marshallOut(const emlrtStack *sp,
                                           const emxArray_char_T *u);

/* Function Definitions */
static int32_T div_nde_s32_floor(int32_T numerator, int32_T denominator)
{
  int32_T b_numerator;
  if (((numerator < 0) != (denominator < 0)) &&
      (numerator % denominator != 0)) {
    b_numerator = -1;
  } else {
    b_numerator = 0;
  }
  return numerator / denominator + b_numerator;
}

static const mxArray *fb_emlrt_marshallOut(const emlrtStack *sp,
                                           const emxArray_char_T *u)
{
  const mxArray *m;
  const mxArray *y;
  int32_T b_iv[2];
  y = NULL;
  b_iv[0] = 1;
  b_iv[1] = u->size[1];
  m = emlrtCreateCharArray(2, &b_iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, u->size[1], m, &u->data[0]);
  emlrtAssign(&y, m);
  return y;
}

void FSRmdr(const emlrtStack *sp, const emxArray_real_T *y,
            const emxArray_real_T *X, emxArray_real_T *bsb, real_T varargin_2,
            boolean_T varargin_8, const emxArray_real_T *varargin_10,
            const real_T varargin_14_data[], const int32_T varargin_14_size[2],
            const emxArray_real_T *varargin_18, emxArray_real_T *mdr,
            emxArray_real_T *Un, emxArray_real_T *BB, emxArray_real_T *Bols,
            emxArray_real_T *S2)
{
  static const char_T b_cv3[63] = {
      'A', 't', 't', 'e', 'n', 't',  'i', 'o', 'n', ' ', ':', ' ', 'i',
      'n', 'i', 't', '1', ' ', 's',  'h', 'o', 'u', 'l', 'd', ' ', 'b',
      'e', ' ', 's', 'm', 'a', 'l',  'l', 'e', 'r', ' ', 't', 'h', 'a',
      'n', ' ', 'n', '.', ' ', '\\', 'n', 'I', 't', ' ', 'i', 's', ' ',
      's', 'e', 't', ' ', 't', 'o',  ' ', 'n', '-', '1', '.'};
  static const char_T b_cv2[62] = {
      'A', 't', 't', 'e', 'n',  't', 'i', 'o', 'n', ' ', ':', ' ', 'i',
      'n', 'i', 't', '1', ' ',  's', 'h', 'o', 'u', 'l', 'd', ' ', 'b',
      'e', ' ', 'l', 'a', 'r',  'g', 'e', 'r', ' ', 't', 'h', 'a', 'n',
      ' ', 'p', '.', ' ', '\\', 'n', 'I', 't', ' ', 'i', 's', ' ', 's',
      'e', 't', ' ', 't', 'o',  ' ', 'p', '+', '1', '.'};
  static const char_T b_cv[22] = {'F', 'S', 'D', 'A', ':', 'F', 'S', 'R',
                                  'm', 'd', 'r', ':', 'N', 'o', 'F', 'u',
                                  'l', 'l', 'R', 'a', 'n', 'k'};
  static const char_T b_cv1[7] = {'f', 'p', 'r', 'i', 'n', 't', 'f'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack st;
  emxArray_boolean_T *b_varargin_18;
  emxArray_boolean_T *boobsbsteps;
  emxArray_boolean_T *bsbT;
  emxArray_boolean_T *unitstopenalize;
  emxArray_char_T *r;
  emxArray_int32_T *iidx;
  emxArray_int32_T *iniseq;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_real_T *Xb;
  emxArray_real_T *Xncl;
  emxArray_real_T *b;
  emxArray_real_T *b_r;
  emxArray_real_T *b_y;
  emxArray_real_T *bsbsteps;
  emxArray_real_T *e;
  emxArray_real_T *mAm;
  emxArray_real_T *ncl;
  emxArray_real_T *ord;
  emxArray_real_T *r3;
  emxArray_real_T *r4;
  emxArray_real_T *resBSB;
  emxArray_real_T *seq;
  emxArray_real_T *unit;
  emxArray_real_T *yb;
  emxArray_real_T *z;
  emxArray_uint32_T *truerownamestopenalize;
  real_T d;
  real_T d1;
  real_T d2;
  real_T init1;
  real_T thpmm_data;
  real_T *x;
  int32_T b_tmp_size[2];
  int32_T c_tmp_size[2];
  int32_T result[2];
  int32_T sizes[2];
  int32_T thpmm_size[2];
  int32_T tmp_size[2];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T ini0;
  int32_T irank;
  int32_T loop_ub;
  int32_T mm;
  int32_T n;
  int32_T nwhile;
  int32_T p;
  uint32_T b_mm;
  uint32_T initdef;
  char_T tmp_data[310];
  char_T c_tmp_data[54];
  char_T d_tmp_data[40];
  char_T b_tmp_data[12];
  int8_T input_sizes_idx_1;
  boolean_T Ra;
  boolean_T b_p;
  boolean_T bonflevout;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /* FSRmdr computes minimum deletion residual and other basic linear regression
   * quantities in each step of the search */
  /*  */
  /* <a href="matlab: docsearchFS('FSRmdr')">Link to the help function</a> */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*     y:         Response variable. Vector. Response variable, specified as
   */
  /*                a vector of length n, where n is the number of */
  /*                observations. Each entry in y is the response for the */
  /*                corresponding row of X. */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite
   */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*   X :          Predictor variables. Matrix. Matrix of explanatory */
  /*                variables (also called 'regressors') of dimension n x (p-1)
   */
  /*                where p denotes the number of explanatory variables */
  /*                including the intercept. */
  /*                Rows of X represent observations, and columns represent */
  /*                variables. By default, there is a constant term in the */
  /*                model, unless you explicitly remove it using input option */
  /*                intercept, so do not include a column of 1s in X. Missing */
  /*                values (NaN's) and infinite values (Inf's) are allowed, */
  /*                since observations (rows) with missing or infinite values */
  /*                will automatically be excluded from the computations. */
  /*   bsb     :    list of units forming the initial subset. Vector. If bsb=0
   */
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
  /*                If bsbmfullrank = 1 (default is 1) these units (whose number
   */
  /*                is say mnofullrank) are constrained to enter the search in
   */
  /*                the final n-mnofullrank steps else the search continues */
  /*                using as estimate of beta at step m the estimate of beta */
  /*                found in the previous step. */
  /*                Example - 'bsbmfullrank',1 */
  /*                Data Types - double */
  /*  */
  /*    bsbsteps :  Save the units forming subsets. Vector. It specifies for */
  /*                which steps of the fwd search it */
  /*                is necessary to save the units forming subsets. If bsbsteps
   */
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
  /*   constr :     Constrained search. Vector. r x 1 vector which contains the
   */
  /*                list of units which are forced to join the search in the */
  /*                last r steps. The default is constr=[]. */
  /*                 No constraint is imposed */
  /*                Example - 'constr',[1:10] forces the first 10 units to join
   */
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
  /*                  'Intercept' and either true to include or false to remove
   */
  /*                  the constant term from the model. */
  /*                  Example - 'intercept',false */
  /*                  Data Types - boolean */
  /*  */
  /*  internationaltrade : criterion for updating subset. Boolean. */
  /*                If internationaltrade is true (default is false) residuals
   */
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
  /*   msg  :       Level of output to display. Scalar. It controls whether to
   */
  /*                display or not messages about great interchange on the */
  /*                screen If msg==1 (default) */
  /*                messages are displayed on the screen */
  /*                else no message is displayed on the screen */
  /*                Example - 'msg',1 */
  /*                Data Types - double */
  /*  */
  /*   nocheck:     Check input arguments. Boolean. If nocheck is equal to true
   * no */
  /*                check is performed on matrix y and matrix X. Notice that y
   */
  /*                and X are left unchanged. In other words the additioanl */
  /*                column of ones for the intercept is not added. As default */
  /*                nocheck=false. The controls on h, alpha and nsamp still
   * remain */
  /*                Example - 'nocheck',true */
  /*                Data Types - boolean */
  /*  */
  /* threshlevoutX: threshold for high leverage units. Scalar or empty value. */
  /*                Threshold to bound the effect of high leverage units in the
   */
  /*                computation of deletion residuals. In the computation of */
  /*                the quantity $h_i(m^*) = x_i^T\{X(m^*)^TX(m^*)\}^{-1}x_i$,
   */
  /*                $i \notin S^{(m)}_*$, units which very far from the bulk of
   */
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
  /*                Remark: the plot which is produced is very simple. In order
   */
  /*                to control a series of options in this plot and in order to
   */
  /*                connect it dynamically to the other forward plots it is */
  /*                necessary to use function mdrplot. */
  /*  */
  /*  */
  /*  Output: */
  /*  */
  /*   mdr:          n -init x 2 matrix which contains the monitoring of minimum
   */
  /*                deletion residual at each step of the forward search. */
  /*                1st col = fwd search index (from init to n-1). */
  /*                2nd col = minimum deletion residual. */
  /*                REMARK: if in a certain step of the search matrix is */
  /*                singular, this procedure checks how many observations */
  /*                produce a singular matrix. In this case mdr is a column */
  /*                vector which contains the list of units for which matrix X
   */
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
  /*                n x (n-init+1) or n-by-length(bsbsteps) matrix (depending on
   * input */
  /*                option bsbsteps) which contains information about the units
   */
  /*                belonging to the subset at each step of the forward search.
   */
  /*                BB has the following structure */
  /*                1-st row has number 1 in correspondence of the steps in */
  /*                    which unit 1 is included inside subset and a missing */
  /*                    value for the other steps */
  /*                ...... */
  /*                (n-1)-th row has number n-1 in correspondence of the steps
   * in */
  /*                    which unit n-1 is included inside subset and a missing
   */
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
  /*                (n-init+1) x 3 matrix containing the monitoring of S2 (2nd
   */
  /*                column)and R2 (third column) in each step of the forward */
  /*                search. */
  /*  */
  /*  */
  /*  More About: */
  /*  */
  /*                Let $S^{(m)}_* \in \cal{M}$ be the  optimum subset of size
   * $m$, */
  /*                for which the matrix of regressors is $X(m^*)$. Least
   * squares */
  /*                applied to this subset yields parameter estimates */
  /*                $\hat{\beta}(m^*)$ and $s^2(m^*)$, the mean square estimate
   * of */
  /*                $\sigma^2$ on $m-p$ degrees of freedom. Residuals can be */
  /*                calculated for all observations including those not in */
  /*                $S^{(m)}_*$. The $n$ resulting least squares residuals are
   */
  /*                \begin{equation} */
  /*                  e_i(m^*) =  y_i -x_i^T\hat{\beta}(m^*). \label{eq2.14a} */
  /*                \end{equation} */
  /*                The search moves forward */
  /*                with the subset $S^{(m+1)}_*$ consisting of the observations
   * with */
  /*                the $m+1$ smallest absolute values of $e_i(m^*)$. When $m <
   * n$ the */
  /*                estimates of the parameters are based on only those
   * observations */
  /*                giving the central $m$ residuals. */
  /*                To test for outliers the deletion residual is calculated for
   * the */
  /*                $n-m$ observations not in $S^{(m)}_*$. These residuals are
   */
  /*                \begin{equation} */
  /*                r_i^*(m^*)  = \frac{y_{i} - x_{i}^T\hat{\beta}(m^*)} { */
  /*                \sqrt{s^2(m^*)\{1 + h_i(m^*)\}}}  = \frac{e_{i}(m^*)} { */
  /*                \sqrt{s^2(m^*)\{1 + h_i(m^*)\}}}, */
  /*                \end{equation} */
  /*                where $h_i(m^*) = x_i^T\{X(m^*)^TX(m^*)\}^{-1}x_i$;  the
   * leverage */
  /*                of each observation depends on $S^{(m)}_*$. Let the
   * observation */
  /*                nearest to those constituting $S^{(m)}_*$ be */
  /*                $i_{\mbox{min}}$ where */
  /*                \[ */
  /*                i_{\mbox{min}} = \arg \min | r^*_i(m^*)| \; \mbox{for} \; i
   * \notin S^{(m)}_*, */
  /*                \] */
  /*                the observation with the minimum absolute deletion  residual
   * among */
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
  /*     % Monitor minimum deletion residual in each step of the forward search.
   */
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
  /*     % Compute minimum deletion residual and start monitoring it from step
   */
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
  /*     % subset in each step of the fwd search (matrix Un).  As is well known,
   */
  /*     % the FS provides an ordering of the data from those most in agreement
   */
  /*     % with a suggested model (which enter the first steps) to those least
   * in */
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
  /*     % Monitor how the estimates of beta coefficients changes as the subset
   */
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
  /*     %% Monitoring of s2, and the evolution of beta coefficients for the
   * Hawkins dataset */
  /*     load('hawkins.txt'); */
  /*     y=hawkins(:,9); */
  /*     X=hawkins(:,1:8); */
  /*     [out]=LXS(y,X,'nsamp',10000); */
  /*     [~,~,~,Bols,S2] = FSRmdr(y,X,out.bs); */
  /*     if isnan(S2) */
  /*         disp('NoFullRank in initial subset, please rerun FSRmdr') */
  /*     else */
  /*         %The forward plot of s2 shows that initially the estimate is
   * virtually */
  /*         %zero. The four line segments comprising the plot correspond to the
   * four */
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
  /*         %The forward plots of the estimates of the beta coefficients show
   * that they are virtually constant until m = 86, after which they start
   * fluctuating in different directions. */
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
  /*         % First column contains information about units forming subset at
   * step m=30 */
  /*         % sum(~isnan(BB(:,1))) is 30 */
  /*         % Second column contains information about units forming subset at
   * step m=60 */
  /*         % sum(~isnan(BB(:,2))) is 60 */
  /*         disp(sum(~isnan(BB(:,1)))) */
  /*         disp(sum(~isnan(BB(:,2)))) */
  /*     end */
  /* } */
  /* { */
  /*     %% Example of the use of option threshlevoutX. */
  /*     % In this example a set of remote units is added to a cloud of points.
   */
  /*     % The purpose of this example is to show that in presence of units very
   * far */
  /*     % from the bulk of th data (bad or good elverage points) it is
   * necessary to */
  /*     % bound their effect putting a constraint on their leverage
   * hi=xi'(X'X)xi */
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
  p = X->size[1];
  n = X->size[0];
  /*  User options */
  if (X->size[0] < 40) {
    initdef = X->size[1] + 1U;
  } else {
    initdef = (uint32_T)muDoubleScalarMin(
        3.0 * (real_T)X->size[1] + 1.0,
        muDoubleScalarFloor(
            0.5 * ((real_T)((uint32_T)X->size[0] + X->size[1]) + 1.0)));
  }
  /*  Default for vector bsbsteps which indicates for which steps of the fwd */
  /*  search units forming subset have to be saved */
  if (X->size[0] > 5000) {
    emxInit_int32_T(sp, &iniseq, 2, &wx_emlrtRTEI, true);
    i = iniseq->size[0] * iniseq->size[1];
    iniseq->size[0] = 1;
    loop_ub = div_nde_s32_floor(
        100 * (int32_T)muDoubleScalarFloor((real_T)X->size[0] / 100.0) - 100,
        100);
    iniseq->size[1] = loop_ub + 1;
    emxEnsureCapacity_int32_T(sp, iniseq, i, &wx_emlrtRTEI);
    for (i = 0; i <= loop_ub; i++) {
      iniseq->data[i] = 100 * i + 100;
    }
    nwhile = iniseq->size[1];
    for (b_i = 0; b_i < nwhile; b_i++) {
      if (((uint32_T)iniseq->data[b_i] > initdef) &&
          (b_i + 1 > iniseq->size[1])) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, iniseq->size[1], &is_emlrtBCI,
                                      (emlrtCTX)sp);
      }
    }
    emxFree_int32_T(&iniseq);
    /*  OLD WRONG statement */
    /*  bsbstepdef = [initdef 100:100:100*floor(n/100)]; */
  }
  emxInit_boolean_T(sp, &bsbT, 1, &ey_emlrtRTEI, true);
  /* init1=options.init; */
  /*  Write in structure 'options' the options chosen by the user */
  /*  And check if the optional user parameters are reasonable. */
  i = bsbT->size[0];
  bsbT->size[0] = bsb->size[0];
  emxEnsureCapacity_boolean_T(sp, bsbT, i, &xx_emlrtRTEI);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[i] = (bsb->data[i] == 0.0);
  }
  emxInit_real_T(sp, &Xb, 2, &yx_emlrtRTEI, true);
  emxInit_real_T(sp, &yb, 1, &cy_emlrtRTEI, true);
  st.site = &vhb_emlrtRSI;
  if (b_ifWhileCond(&st, bsbT)) {
    i = Xb->size[0] * Xb->size[1];
    Xb->size[0] = 1;
    Xb->size[1] = 1;
    emxEnsureCapacity_real_T(sp, Xb, i, &yx_emlrtRTEI);
    Xb->data[0] = 0.0;
    Ra = true;
    nwhile = 1;
    while (Ra && (nwhile < 100)) {
      st.site = &uhb_emlrtRSI;
      randsample(&st, n, p, bsb);
      loop_ub = X->size[1];
      i = Xb->size[0] * Xb->size[1];
      Xb->size[0] = bsb->size[0];
      Xb->size[1] = X->size[1];
      emxEnsureCapacity_real_T(sp, Xb, i, &dy_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        irank = bsb->size[0];
        for (i1 = 0; i1 < irank; i1++) {
          i2 = (int32_T)bsb->data[i1];
          if ((i2 < 1) || (i2 > X->size[0])) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, X->size[0], &ct_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          Xb->data[i1 + Xb->size[0] * i] = X->data[(i2 + X->size[0] * i) - 1];
        }
      }
      st.site = &thb_emlrtRSI;
      b_st.site = &fc_emlrtRSI;
      irank = local_rank(&b_st, Xb);
      Ra = (irank < p);
      nwhile++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }
    if (nwhile == 100) {
      st.site = &bnb_emlrtRSI;
      b_disp(&st, e_emlrt_marshallOut(&st, b_cv), y_emlrt_marshallOut(&st, cv4),
             &ob_emlrtMCI);
    }
    i = yb->size[0];
    yb->size[0] = bsb->size[0];
    emxEnsureCapacity_real_T(sp, yb, i, &cy_emlrtRTEI);
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      if (bsb->data[i] != (int32_T)muDoubleScalarFloor(bsb->data[i])) {
        emlrtIntegerCheckR2012b(bsb->data[i], &yc_emlrtDCI, (emlrtCTX)sp);
      }
      i1 = (int32_T)bsb->data[i];
      if ((i1 < 1) || (i1 > y->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, y->size[0], &dt_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      yb->data[i] = y->data[i1 - 1];
    }
  } else {
    loop_ub = X->size[1];
    i = Xb->size[0] * Xb->size[1];
    Xb->size[0] = bsb->size[0];
    Xb->size[1] = X->size[1];
    emxEnsureCapacity_real_T(sp, Xb, i, &ay_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      irank = bsb->size[0];
      for (i1 = 0; i1 < irank; i1++) {
        if (bsb->data[i1] != (int32_T)muDoubleScalarFloor(bsb->data[i1])) {
          emlrtIntegerCheckR2012b(bsb->data[i1], &xc_emlrtDCI, (emlrtCTX)sp);
        }
        i2 = (int32_T)bsb->data[i1];
        if ((i2 < 1) || (i2 > X->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, X->size[0], &at_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        Xb->data[i1 + Xb->size[0] * i] = X->data[(i2 + X->size[0] * i) - 1];
      }
    }
    i = yb->size[0];
    yb->size[0] = bsb->size[0];
    emxEnsureCapacity_real_T(sp, yb, i, &by_emlrtRTEI);
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)bsb->data[i];
      if ((i1 < 1) || (i1 > y->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i], 1, y->size[0],
                                      &bt_emlrtBCI, (emlrtCTX)sp);
      }
      yb->data[i] = y->data[i1 - 1];
    }
  }
  ini0 = bsb->size[0];
  /*  check init */
  init1 = varargin_2;
  if (varargin_2 < (real_T)X->size[1] + 1.0) {
    st.site = &shb_emlrtRSI;
    b_st.site = &whb_emlrtRSI;
    c_st.site = &jnb_emlrtRSI;
    d_st.site = &inb_emlrtRSI;
    g_emlrt_marshallIn(&c_st,
                       feval(&c_st, g_emlrt_marshallOut(&c_st, b_cv1),
                             i_emlrt_marshallOut(1.0),
                             x_emlrt_marshallOut(&d_st, b_cv2), &ab_emlrtMCI),
                       "<output of feval>");
    init1 = (real_T)X->size[1] + 1.0;
  } else if (varargin_2 < bsb->size[0]) {
    emxInit_char_T(sp, &r, 2, &fbb_emlrtRTEI, true);
    st.site = &rhb_emlrtRSI;
    b_sprintf(&st, bsb->size[0], r);
    st.site = &cpb_emlrtRSI;
    emlrtDisplayR2012b(fb_emlrt_marshallOut(&st, r), (char_T *)"ans",
                       &c_emlrtRTEI, (emlrtCTX)sp);
    init1 = bsb->size[0];
    emxFree_char_T(&r);
  } else if (varargin_2 >= X->size[0]) {
    st.site = &qhb_emlrtRSI;
    b_st.site = &whb_emlrtRSI;
    c_st.site = &jnb_emlrtRSI;
    d_st.site = &inb_emlrtRSI;
    g_emlrt_marshallIn(&c_st,
                       feval(&c_st, g_emlrt_marshallOut(&c_st, b_cv1),
                             i_emlrt_marshallOut(1.0),
                             o_emlrt_marshallOut(&d_st, b_cv3), &ab_emlrtMCI),
                       "<output of feval>");
    init1 = (real_T)X->size[0] - 1.0;
  }
  /*  if ~isempty(constr) */
  /*      constr=constr(:); */
  /*      constr(constr>n)=[]; */
  /*  end */
  bonflevout = ((varargin_14_size[0] != 0) && (varargin_14_size[1] != 0));
  /*  Initialise key matrices */
  /*  Initialization of the n x 1 Boolean vector which contains a true in */
  /*  correspondence of the units belonging to subset in each step */
  i = bsbT->size[0];
  bsbT->size[0] = X->size[0];
  emxEnsureCapacity_boolean_T(sp, bsbT, i, &ey_emlrtRTEI);
  loop_ub = X->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[i] = false;
  }
  emxInit_int32_T(sp, &iidx, 1, &hy_emlrtRTEI, true);
  i = iidx->size[0];
  iidx->size[0] = bsb->size[0];
  emxEnsureCapacity_int32_T(sp, iidx, i, &fy_emlrtRTEI);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    i1 = (int32_T)bsb->data[i];
    if ((i1 < 1) || (i1 > X->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i], 1, X->size[0],
                                    &et_emlrtBCI, (emlrtCTX)sp);
    }
    iidx->data[i] = i1;
  }
  loop_ub = iidx->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[iidx->data[i] - 1] = true;
  }
  /*  sequence from 1 to n. */
  emxInit_real_T(sp, &b_y, 2, &dbb_emlrtRTEI, true);
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
  emxInit_real_T(sp, &seq, 1, &gy_emlrtRTEI, true);
  i = seq->size[0];
  seq->size[0] = b_y->size[1];
  emxEnsureCapacity_real_T(sp, seq, i, &gy_emlrtRTEI);
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq->data[i] = b_y->data[i];
  }
  /*  the set complementary to bsb. */
  /*  ncl=setdiff(seq,bsb); */
  nwhile = bsbT->size[0] - 1;
  irank = 0;
  for (b_i = 0; b_i <= nwhile; b_i++) {
    if (!bsbT->data[b_i]) {
      irank++;
    }
  }
  emxInit_real_T(sp, &ncl, 1, &vab_emlrtRTEI, true);
  i = ncl->size[0];
  ncl->size[0] = irank;
  emxEnsureCapacity_real_T(sp, ncl, i, &hy_emlrtRTEI);
  irank = 0;
  for (b_i = 0; b_i <= nwhile; b_i++) {
    if (!bsbT->data[b_i]) {
      if (b_i + 1 > seq->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0], &ft_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      ncl->data[irank] = seq->data[b_i];
      irank++;
    }
  }
  /*  The second column of matrix R will contain the OLS residuals at each step
   */
  /*  of the search */
  st.site = &phb_emlrtRSI;
  b_st.site = &xk_emlrtRSI;
  c_st.site = &yk_emlrtRSI;
  if (X->size[0] != seq->size[0]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &nb_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  emxInit_real_T(&c_st, &b_r, 2, &iy_emlrtRTEI, true);
  i = b_r->size[0] * b_r->size[1];
  b_r->size[0] = seq->size[0];
  b_r->size[1] = 2;
  emxEnsureCapacity_real_T(&b_st, b_r, i, &iy_emlrtRTEI);
  loop_ub = seq->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_r->data[i] = seq->data[i];
  }
  loop_ub = X->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_r->data[i + b_r->size[0]] = 0.0;
  }
  /*  If n is very large (>500), the step of the search is printed every 500
   * step */
  /*  seq500 is linked to printing */
  irank = (int32_T)muDoubleScalarCeil((real_T)X->size[0] / 500.0);
  if (irank < 1) {
    b_y->size[1] = 0;
  } else {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = irank;
    emxEnsureCapacity_real_T(sp, b_y, i, &xl_emlrtRTEI);
    loop_ub = irank - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_y->data[i] = (real_T)i + 1.0;
    }
  }
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  emxEnsureCapacity_real_T(sp, b_y, i, &bs_emlrtRTEI);
  loop_ub = b_y->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    b_y->data[i] *= 500.0;
  }
  emxInit_real_T(sp, &bsbsteps, 2, &uab_emlrtRTEI, true);
  /*  Matrix Bols will contain the beta coefficients in each step of the fwd */
  /*  search. The first column of Bols contains the fwd search index */
  st.site = &ohb_emlrtRSI;
  b_st.site = &xc_emlrtRSI;
  if (muDoubleScalarIsNaN(init1)) {
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, bsbsteps, i, &fd_emlrtRTEI);
    bsbsteps->data[0] = rtNaN;
  } else if (X->size[0] < init1) {
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = 0;
  } else if (muDoubleScalarIsInf(init1) && (init1 == X->size[0])) {
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, bsbsteps, i, &fd_emlrtRTEI);
    bsbsteps->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(init1) == init1) {
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = (int32_T)((real_T)X->size[0] - init1) + 1;
    emxEnsureCapacity_real_T(&b_st, bsbsteps, i, &fd_emlrtRTEI);
    loop_ub = (int32_T)((real_T)X->size[0] - init1);
    for (i = 0; i <= loop_ub; i++) {
      bsbsteps->data[i] = init1 + (real_T)i;
    }
  } else {
    c_st.site = &yc_emlrtRSI;
    eml_float_colon(&c_st, init1, X->size[0], bsbsteps);
  }
  emxInit_real_T(&b_st, &b, 1, &xab_emlrtRTEI, true);
  st.site = &ohb_emlrtRSI;
  i = b->size[0];
  b->size[0] = bsbsteps->size[1];
  emxEnsureCapacity_real_T(&st, b, i, &jy_emlrtRTEI);
  loop_ub = bsbsteps->size[1];
  for (i = 0; i < loop_ub; i++) {
    b->data[i] = bsbsteps->data[i];
  }
  d = ((real_T)X->size[0] - init1) + 1.0;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &mc_emlrtDCI, &st);
  }
  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &nc_emlrtDCI, &st);
  }
  b_st.site = &fbb_emlrtRSI;
  if (b->size[0] != 0) {
    irank = b->size[0];
  } else if (((int32_T)(((real_T)X->size[0] - init1) + 1.0) != 0) &&
             (X->size[1] != 0)) {
    irank = (int32_T)(((real_T)X->size[0] - init1) + 1.0);
  } else {
    irank = 0;
    if ((int32_T)(((real_T)X->size[0] - init1) + 1.0) > 0) {
      irank = (int32_T)(((real_T)X->size[0] - init1) + 1.0);
    }
  }
  c_st.site = &yk_emlrtRSI;
  if ((b->size[0] != irank) && (b->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &nb_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if (((int32_T)(((real_T)X->size[0] - init1) + 1.0) != irank) &&
      (((int32_T)(((real_T)X->size[0] - init1) + 1.0) != 0) &&
       (X->size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &nb_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  Ra = (irank == 0);
  if (Ra || (b->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (Ra || (((int32_T)(((real_T)X->size[0] - init1) + 1.0) != 0) &&
             (X->size[1] != 0))) {
    sizes[1] = X->size[1];
  } else {
    sizes[1] = 0;
  }
  i = Bols->size[0] * Bols->size[1];
  Bols->size[0] = irank;
  Bols->size[1] = input_sizes_idx_1 + sizes[1];
  emxEnsureCapacity_real_T(&b_st, Bols, i, &ky_emlrtRTEI);
  loop_ub = input_sizes_idx_1;
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < irank; i1++) {
      Bols->data[i1] = b->data[i1];
    }
  }
  loop_ub = sizes[1];
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < irank; i1++) {
      Bols->data[i1 + Bols->size[0] * (i + input_sizes_idx_1)] = rtNaN;
    }
  }
  /* initial value of beta coefficients is set to NaN */
  /*  S2 = (n-init1+1) x 3 matrix which will contain: */
  /*  1st col = fwd search index */
  /*  2nd col = S2= \sum e_i^2 / (m-p) */
  /*  3rd col = R^2 */
  st.site = &nhb_emlrtRSI;
  b_st.site = &xc_emlrtRSI;
  if (muDoubleScalarIsNaN(init1)) {
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, bsbsteps, i, &fd_emlrtRTEI);
    bsbsteps->data[0] = rtNaN;
  } else if (X->size[0] < init1) {
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = 0;
  } else if (muDoubleScalarIsInf(init1) && (init1 == X->size[0])) {
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, bsbsteps, i, &fd_emlrtRTEI);
    bsbsteps->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(init1) == init1) {
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = (int32_T)((real_T)X->size[0] - init1) + 1;
    emxEnsureCapacity_real_T(&b_st, bsbsteps, i, &fd_emlrtRTEI);
    loop_ub = (int32_T)((real_T)X->size[0] - init1);
    for (i = 0; i <= loop_ub; i++) {
      bsbsteps->data[i] = init1 + (real_T)i;
    }
  } else {
    c_st.site = &yc_emlrtRSI;
    eml_float_colon(&c_st, init1, X->size[0], bsbsteps);
  }
  st.site = &nhb_emlrtRSI;
  i = b->size[0];
  b->size[0] = bsbsteps->size[1];
  emxEnsureCapacity_real_T(&st, b, i, &ly_emlrtRTEI);
  loop_ub = bsbsteps->size[1];
  for (i = 0; i < loop_ub; i++) {
    b->data[i] = bsbsteps->data[i];
  }
  emxInit_real_T(&st, &ord, 2, &rab_emlrtRTEI, true);
  d = ((real_T)X->size[0] - init1) + 1.0;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &uc_emlrtDCI, &st);
  }
  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &tc_emlrtDCI, &st);
  }
  d = ((real_T)X->size[0] - init1) + 1.0;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &bd_emlrtDCI, &st);
  }
  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &ad_emlrtDCI, &st);
  }
  b_st.site = &fbb_emlrtRSI;
  if (b->size[0] != 0) {
    irank = b->size[0];
  } else if ((int32_T)(((real_T)X->size[0] - init1) + 1.0) != 0) {
    irank = (int32_T)(((real_T)X->size[0] - init1) + 1.0);
  } else {
    irank = 0;
    if ((int32_T)(((real_T)X->size[0] - init1) + 1.0) > 0) {
      irank = (int32_T)(((real_T)X->size[0] - init1) + 1.0);
    }
  }
  c_st.site = &yk_emlrtRSI;
  if ((b->size[0] != irank) && (b->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &nb_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if (((int32_T)(((real_T)X->size[0] - init1) + 1.0) != irank) &&
      ((int32_T)(((real_T)X->size[0] - init1) + 1.0) != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &nb_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  Ra = (irank == 0);
  if (Ra || (b->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (Ra || ((int32_T)(((real_T)X->size[0] - init1) + 1.0) != 0)) {
    sizes[1] = 2;
  } else {
    sizes[1] = 0;
  }
  i = S2->size[0] * S2->size[1];
  S2->size[0] = irank;
  S2->size[1] = input_sizes_idx_1 + sizes[1];
  emxEnsureCapacity_real_T(&b_st, S2, i, &my_emlrtRTEI);
  loop_ub = input_sizes_idx_1;
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < irank; i1++) {
      S2->data[i1] = b->data[i1];
    }
  }
  loop_ub = sizes[1];
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < irank; i1++) {
      S2->data[i1 + S2->size[0] * (i + input_sizes_idx_1)] = rtNaN;
    }
  }
  /* initial value of S2 (R2) is set to NaN */
  /*  mdr = (n-init1-1) x 2 matrix which will contain min deletion residual */
  /*  among nobsb r_i^* */
  st.site = &mhb_emlrtRSI;
  b_st.site = &xc_emlrtRSI;
  if (muDoubleScalarIsNaN(init1)) {
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, bsbsteps, i, &fd_emlrtRTEI);
    bsbsteps->data[0] = rtNaN;
  } else if ((real_T)X->size[0] - 1.0 < init1) {
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = 0;
  } else if (muDoubleScalarIsInf(init1) &&
             (init1 == (real_T)X->size[0] - 1.0)) {
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, bsbsteps, i, &fd_emlrtRTEI);
    bsbsteps->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(init1) == init1) {
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = (int32_T)(((real_T)X->size[0] - 1.0) - init1) + 1;
    emxEnsureCapacity_real_T(&b_st, bsbsteps, i, &fd_emlrtRTEI);
    loop_ub = (int32_T)(((real_T)X->size[0] - 1.0) - init1);
    for (i = 0; i <= loop_ub; i++) {
      bsbsteps->data[i] = init1 + (real_T)i;
    }
  } else {
    c_st.site = &yc_emlrtRSI;
    eml_float_colon(&c_st, init1, (real_T)X->size[0] - 1.0, bsbsteps);
  }
  st.site = &mhb_emlrtRSI;
  i = b->size[0];
  b->size[0] = bsbsteps->size[1];
  emxEnsureCapacity_real_T(&st, b, i, &ny_emlrtRTEI);
  loop_ub = bsbsteps->size[1];
  for (i = 0; i < loop_ub; i++) {
    b->data[i] = bsbsteps->data[i];
  }
  d = (real_T)X->size[0] - init1;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &oc_emlrtDCI, &st);
  }
  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &pc_emlrtDCI, &st);
  }
  b_st.site = &xk_emlrtRSI;
  c_st.site = &yk_emlrtRSI;
  if ((int32_T)((real_T)X->size[0] - init1) != b->size[0]) {
    emlrtErrorWithMessageIdR2018a(&c_st, &nb_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  i = mdr->size[0] * mdr->size[1];
  mdr->size[0] = b->size[0];
  mdr->size[1] = 2;
  emxEnsureCapacity_real_T(&b_st, mdr, i, &oy_emlrtRTEI);
  loop_ub = b->size[0];
  for (i = 0; i < loop_ub; i++) {
    mdr->data[i] = b->data[i];
  }
  loop_ub = (int32_T)((real_T)X->size[0] - init1);
  for (i = 0; i < loop_ub; i++) {
    mdr->data[i + mdr->size[0]] = rtNaN;
  }
  emxInit_boolean_T(&b_st, &b_varargin_18, 2, &py_emlrtRTEI, true);
  /* initial value of mdr is set to NaN */
  /*  Matrix BB will contain the units forming subset in each step (or in */
  /*  selected steps) of the forward search. The first column contains */
  /*  information about units forming subset at step init1. */
  i = b_varargin_18->size[0] * b_varargin_18->size[1];
  b_varargin_18->size[0] = 1;
  b_varargin_18->size[1] = varargin_18->size[1];
  emxEnsureCapacity_boolean_T(sp, b_varargin_18, i, &py_emlrtRTEI);
  loop_ub = varargin_18->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_varargin_18->data[i] = (varargin_18->data[i] == 0.0);
  }
  st.site = &lhb_emlrtRSI;
  if (c_ifWhileCond(b_varargin_18)) {
    st.site = &khb_emlrtRSI;
    b_st.site = &xc_emlrtRSI;
    if (muDoubleScalarIsNaN(init1)) {
      i = bsbsteps->size[0] * bsbsteps->size[1];
      bsbsteps->size[0] = 1;
      bsbsteps->size[1] = 1;
      emxEnsureCapacity_real_T(&b_st, bsbsteps, i, &qy_emlrtRTEI);
      bsbsteps->data[0] = rtNaN;
    } else if (X->size[0] < init1) {
      bsbsteps->size[0] = 1;
      bsbsteps->size[1] = 0;
    } else if (muDoubleScalarIsInf(init1) && (init1 == X->size[0])) {
      i = bsbsteps->size[0] * bsbsteps->size[1];
      bsbsteps->size[0] = 1;
      bsbsteps->size[1] = 1;
      emxEnsureCapacity_real_T(&b_st, bsbsteps, i, &qy_emlrtRTEI);
      bsbsteps->data[0] = rtNaN;
    } else if (muDoubleScalarFloor(init1) == init1) {
      i = bsbsteps->size[0] * bsbsteps->size[1];
      bsbsteps->size[0] = 1;
      bsbsteps->size[1] = (int32_T)((real_T)X->size[0] - init1) + 1;
      emxEnsureCapacity_real_T(&b_st, bsbsteps, i, &qy_emlrtRTEI);
      loop_ub = (int32_T)((real_T)X->size[0] - init1);
      for (i = 0; i <= loop_ub; i++) {
        bsbsteps->data[i] = init1 + (real_T)i;
      }
    } else {
      c_st.site = &yc_emlrtRSI;
      eml_float_colon(&c_st, init1, X->size[0], bsbsteps);
    }
    i = BB->size[0] * BB->size[1];
    BB->size[0] = X->size[0];
    emxEnsureCapacity_real_T(sp, BB, i, &ry_emlrtRTEI);
    d = ((real_T)X->size[0] - init1) + 1.0;
    if (!(d >= 0.0)) {
      emlrtNonNegativeCheckR2012b(d, &wc_emlrtDCI, (emlrtCTX)sp);
    }
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &vc_emlrtDCI, (emlrtCTX)sp);
    }
    i = BB->size[0] * BB->size[1];
    BB->size[1] = (int32_T)d;
    emxEnsureCapacity_real_T(sp, BB, i, &ry_emlrtRTEI);
    d = ((real_T)X->size[0] - init1) + 1.0;
    if (!(d >= 0.0)) {
      emlrtNonNegativeCheckR2012b(d, &dd_emlrtDCI, (emlrtCTX)sp);
    }
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &cd_emlrtDCI, (emlrtCTX)sp);
    }
    loop_ub = X->size[0] * (int32_T)d;
    for (i = 0; i < loop_ub; i++) {
      BB->data[i] = rtNaN;
    }
  } else {
    /*  The number of columns of matrix BB is equal to the number of steps */
    /*  for which bsbsteps is greater or equal than init1 */
    nwhile = varargin_18->size[1] - 1;
    irank = 0;
    for (b_i = 0; b_i <= nwhile; b_i++) {
      if (varargin_18->data[b_i] >= init1) {
        irank++;
      }
    }
    emxInit_int32_T(sp, &r1, 2, &cbb_emlrtRTEI, true);
    i = r1->size[0] * r1->size[1];
    r1->size[0] = 1;
    r1->size[1] = irank;
    emxEnsureCapacity_int32_T(sp, r1, i, &hy_emlrtRTEI);
    irank = 0;
    for (b_i = 0; b_i <= nwhile; b_i++) {
      if (varargin_18->data[b_i] >= init1) {
        r1->data[irank] = b_i + 1;
        irank++;
      }
    }
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = r1->size[1];
    emxEnsureCapacity_real_T(sp, bsbsteps, i, &sy_emlrtRTEI);
    loop_ub = r1->size[1];
    for (i = 0; i < loop_ub; i++) {
      if (r1->data[i] > varargin_18->size[1]) {
        emlrtDynamicBoundsCheckR2012b(r1->data[i], 1, varargin_18->size[1],
                                      &gt_emlrtBCI, (emlrtCTX)sp);
      }
      bsbsteps->data[i] = varargin_18->data[r1->data[i] - 1];
    }
    i = BB->size[0] * BB->size[1];
    BB->size[0] = X->size[0];
    BB->size[1] = r1->size[1];
    emxEnsureCapacity_real_T(sp, BB, i, &ty_emlrtRTEI);
    loop_ub = X->size[0] * r1->size[1];
    emxFree_int32_T(&r1);
    for (i = 0; i < loop_ub; i++) {
      BB->data[i] = rtNaN;
    }
    /*    BB = NaN(n, sum(bsbsteps>=init1)); */
  }
  emxFree_boolean_T(&b_varargin_18);
  emxInit_boolean_T(sp, &boobsbsteps, 1, &uy_emlrtRTEI, true);
  i = boobsbsteps->size[0];
  boobsbsteps->size[0] = X->size[0];
  emxEnsureCapacity_boolean_T(sp, boobsbsteps, i, &uy_emlrtRTEI);
  loop_ub = X->size[0];
  for (i = 0; i < loop_ub; i++) {
    boobsbsteps->data[i] = false;
  }
  emxInit_int32_T(sp, &r2, 2, &hy_emlrtRTEI, true);
  i = r2->size[0] * r2->size[1];
  r2->size[0] = 1;
  r2->size[1] = bsbsteps->size[1];
  emxEnsureCapacity_int32_T(sp, r2, i, &vy_emlrtRTEI);
  loop_ub = bsbsteps->size[1];
  for (i = 0; i < loop_ub; i++) {
    if (bsbsteps->data[i] != (int32_T)muDoubleScalarFloor(bsbsteps->data[i])) {
      emlrtIntegerCheckR2012b(bsbsteps->data[i], &ed_emlrtDCI, (emlrtCTX)sp);
    }
    i1 = (int32_T)bsbsteps->data[i];
    if ((i1 < 1) || (i1 > X->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)bsbsteps->data[i], 1, X->size[0],
                                    &ht_emlrtBCI, (emlrtCTX)sp);
    }
    r2->data[i] = i1;
  }
  loop_ub = r2->size[1];
  for (i = 0; i < loop_ub; i++) {
    boobsbsteps->data[r2->data[i] - 1] = true;
  }
  emxFree_int32_T(&r2);
  /*  ij = index which is linked with the columns of matrix BB. During the */
  /*  search every time a subset is stored inside matrix BB ij increases by one
   */
  initdef = 1U;
  /*   Un is a Matrix whose 2nd column:11th col contains the unit(s) just */
  /*   included. */
  st.site = &jhb_emlrtRSI;
  b_st.site = &xc_emlrtRSI;
  if (muDoubleScalarIsNaN(init1 + 1.0)) {
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, bsbsteps, i, &fd_emlrtRTEI);
    bsbsteps->data[0] = rtNaN;
  } else if (X->size[0] < init1 + 1.0) {
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = 0;
  } else if (muDoubleScalarIsInf(init1 + 1.0) && (init1 + 1.0 == X->size[0])) {
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, bsbsteps, i, &fd_emlrtRTEI);
    bsbsteps->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(init1 + 1.0) == init1 + 1.0) {
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] =
        (int32_T)muDoubleScalarFloor((real_T)X->size[0] - (init1 + 1.0)) + 1;
    emxEnsureCapacity_real_T(&b_st, bsbsteps, i, &fd_emlrtRTEI);
    loop_ub = (int32_T)muDoubleScalarFloor((real_T)X->size[0] - (init1 + 1.0));
    for (i = 0; i <= loop_ub; i++) {
      bsbsteps->data[i] = (init1 + 1.0) + (real_T)i;
    }
  } else {
    c_st.site = &yc_emlrtRSI;
    eml_float_colon(&c_st, init1 + 1.0, X->size[0], bsbsteps);
  }
  d = (real_T)X->size[0] - init1;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &gd_emlrtDCI, (emlrtCTX)sp);
  }
  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &fd_emlrtDCI, (emlrtCTX)sp);
  }
  i = b->size[0];
  b->size[0] = bsbsteps->size[1];
  emxEnsureCapacity_real_T(sp, b, i, &wy_emlrtRTEI);
  loop_ub = bsbsteps->size[1];
  for (i = 0; i < loop_ub; i++) {
    b->data[i] = bsbsteps->data[i];
  }
  emxFree_real_T(&bsbsteps);
  emxInit_real_T(sp, &r3, 2, &xy_emlrtRTEI, true);
  i = r3->size[0] * r3->size[1];
  r3->size[0] = (int32_T)d;
  r3->size[1] = 10;
  emxEnsureCapacity_real_T(sp, r3, i, &xy_emlrtRTEI);
  loop_ub = (int32_T)d * 10;
  for (i = 0; i < loop_ub; i++) {
    r3->data[i] = rtNaN;
  }
  st.site = &jhb_emlrtRSI;
  b_cat(&st, b, r3, Un);
  /*  Start of the forward search */
  i = X->size[0] - bsb->size[0];
  emlrtForLoopVectorCheckR2021a(bsb->size[0], 1.0, X->size[0], mxDOUBLE_CLASS,
                                i + 1, &rc_emlrtRTEI, (emlrtCTX)sp);
  emxFree_real_T(&r3);
  emxInit_real_T(sp, &resBSB, 1, &wab_emlrtRTEI, true);
  emxInit_real_T(sp, &e, 1, &aab_emlrtRTEI, true);
  emxInit_real_T(sp, &mAm, 2, &yab_emlrtRTEI, true);
  emxInit_real_T(sp, &Xncl, 2, &kab_emlrtRTEI, true);
  emxInit_boolean_T(sp, &unitstopenalize, 1, &pab_emlrtRTEI, true);
  emxInit_uint32_T(sp, &truerownamestopenalize, 1, &abb_emlrtRTEI, true);
  emxInit_real_T(sp, &unit, 1, &bbb_emlrtRTEI, true);
  emxInit_real_T(sp, &r4, 2, &hy_emlrtRTEI, true);
  emxInit_real_T(sp, &z, 1, &ebb_emlrtRTEI, true);
  for (mm = 0; mm <= i; mm++) {
    b_mm = (uint32_T)ini0 + mm;
    /*  if n>5000 show every 500 steps the fwd search index */
    if (varargin_8 && (n > 5000)) {
      st.site = &ihb_emlrtRSI;
      b_st.site = &odb_emlrtRSI;
      c_st.site = &pdb_emlrtRSI;
      d_do_vectors(&c_st, b_mm, b_y, (real_T *)&thpmm_data, result,
                   (int32_T *)&irank, &nwhile, (int32_T *)&loop_ub, &b_i);
      if (result[1] == 1) {
        st.site = &hhb_emlrtRSI;
        int2str(&st, b_mm, tmp_data, result);
        tmp_size[0] = 1;
        loop_ub = result[1];
        tmp_size[1] = result[1] + 2;
        b_tmp_data[0] = 'm';
        b_tmp_data[1] = '=';
        if (0 <= loop_ub - 1) {
          memcpy(&b_tmp_data[2], &tmp_data[0], loop_ub * sizeof(char_T));
        }
        st.site = &xob_emlrtRSI;
        disp(&st, cb_emlrt_marshallOut(&st, b_tmp_data, tmp_size),
             &pb_emlrtMCI);
      }
    }
    /*  rank is ok */
    st.site = &ghb_emlrtRSI;
    mldivide(&st, Xb, yb, b);
    st.site = &fhb_emlrtRSI;
    b_st.site = &x_emlrtRSI;
    dynamic_size_checks(&b_st, Xb, b, Xb->size[1], b->size[0]);
    b_st.site = &w_emlrtRSI;
    mtimes(&b_st, Xb, b, resBSB);
    if (yb->size[0] != resBSB->size[0]) {
      emlrtSizeEqCheck1DR2012b(yb->size[0], resBSB->size[0], &uc_emlrtECI,
                               (emlrtCTX)sp);
    }
    i1 = resBSB->size[0];
    resBSB->size[0] = yb->size[0];
    emxEnsureCapacity_real_T(sp, resBSB, i1, &yy_emlrtRTEI);
    loop_ub = yb->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      resBSB->data[i1] = yb->data[i1] - resBSB->data[i1];
    }
    /*  Store correctly computed b for the case of rank problem */
    st.site = &ehb_emlrtRSI;
    b_st.site = &x_emlrtRSI;
    dynamic_size_checks(&b_st, X, b, X->size[1], b->size[0]);
    b_st.site = &w_emlrtRSI;
    mtimes(&b_st, X, b, e);
    loop_ub = y->size[0];
    if (y->size[0] != e->size[0]) {
      emlrtSizeEqCheck1DR2012b(y->size[0], e->size[0], &vc_emlrtECI,
                               (emlrtCTX)sp);
    }
    i1 = e->size[0];
    e->size[0] = y->size[0];
    emxEnsureCapacity_real_T(sp, e, i1, &aab_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      e->data[i1] = y->data[i1] - e->data[i1];
    }
    /*  e = vector of residual for all units using b estimated using subset */
    st.site = &dhb_emlrtRSI;
    power(&st, e, z);
    emlrtSubAssignSizeCheckR2012b(&b_r->size[0], 1, &z->size[0], 1,
                                  &bd_emlrtECI, (emlrtCTX)sp);
    loop_ub = z->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_r->data[i1 + b_r->size[0]] = z->data[i1];
    }
    if (b_mm >= init1) {
      /*  Store units belonging to the subset */
      if (((int32_T)b_mm < 1) || ((int32_T)b_mm > boobsbsteps->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_mm, 1, boobsbsteps->size[0],
                                      &it_emlrtBCI, (emlrtCTX)sp);
      }
      if (boobsbsteps->data[(int32_T)b_mm - 1]) {
        /*  OLD CODE */
        /*  intersect(mm,bsbsteps)==mm */
        loop_ub = bsb->size[0];
        i1 = iidx->size[0];
        iidx->size[0] = bsb->size[0];
        emxEnsureCapacity_int32_T(sp, iidx, i1, &cab_emlrtRTEI);
        for (i1 = 0; i1 < loop_ub; i1++) {
          i2 = (int32_T)bsb->data[i1];
          if ((i2 < 1) || (i2 > BB->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i1], 1,
                                          BB->size[0], &jt_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          iidx->data[i1] = i2 - 1;
        }
        if (((int32_T)initdef < 1) || ((int32_T)initdef > BB->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)initdef, 1, BB->size[1],
                                        &ws_emlrtBCI, (emlrtCTX)sp);
        }
        emlrtSubAssignSizeCheckR2012b(&iidx->size[0], 1, &bsb->size[0], 1,
                                      &fd_emlrtECI, (emlrtCTX)sp);
        loop_ub = bsb->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          BB->data[iidx->data[i1] + BB->size[0] * ((int32_T)initdef - 1)] =
              bsb->data[i1];
        }
        initdef++;
      }
      /*  Store beta coefficients if there is no rank problem */
      if (2U > p + 1U) {
        i1 = 0;
        i2 = 0;
      } else {
        if (2 > Bols->size[1]) {
          emlrtDynamicBoundsCheckR2012b(2, 1, Bols->size[1], &us_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        i1 = 1;
        if (((int32_T)(p + 1U) < 1) || ((int32_T)(p + 1U) > Bols->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(p + 1U), 1, Bols->size[1],
                                        &vs_emlrtBCI, (emlrtCTX)sp);
        }
        i2 = (int32_T)(p + 1U);
      }
      d = ((real_T)b_mm - init1) + 1.0;
      d1 = (int32_T)muDoubleScalarFloor(d);
      if (d != d1) {
        emlrtIntegerCheckR2012b(d, &qc_emlrtDCI, (emlrtCTX)sp);
      }
      if (((int32_T)d < 1) || ((int32_T)d > Bols->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Bols->size[0],
                                      &ts_emlrtBCI, (emlrtCTX)sp);
      }
      sizes[0] = 1;
      sizes[1] = i2 - i1;
      result[0] = 1;
      result[1] = b->size[0];
      emlrtSubAssignSizeCheckR2012b(&sizes[0], 2, &result[0], 2, &ed_emlrtECI,
                                    (emlrtCTX)sp);
      loop_ub = b->size[0];
      for (i2 = 0; i2 < loop_ub; i2++) {
        Bols->data[((int32_T)d + Bols->size[0] * (i1 + i2)) - 1] = b->data[i2];
      }
      /*  Compute and store estimate of sigma^2 */
      st.site = &chb_emlrtRSI;
      b_st.site = &x_emlrtRSI;
      c_dynamic_size_checks(&b_st, resBSB, resBSB, resBSB->size[0],
                            resBSB->size[0]);
      thpmm_data = b_mtimes(resBSB, resBSB);
      if (2 > S2->size[1]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, S2->size[1], &js_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (d != d1) {
        emlrtIntegerCheckR2012b(d, &id_emlrtDCI, (emlrtCTX)sp);
      }
      if (((int32_T)d < 1) || ((int32_T)d > S2->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, S2->size[0], &lt_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      S2->data[((int32_T)d + S2->size[0]) - 1] =
          thpmm_data / (real_T)((int32_T)b_mm - p);
      /*  Store R2 */
      /*  S2(mm-init1+1,3)=1-var(resBSB)/var(yb); */
      st.site = &bhb_emlrtRSI;
      d2 = sum(&st, yb) / (real_T)b_mm;
      i1 = b->size[0];
      b->size[0] = yb->size[0];
      emxEnsureCapacity_real_T(sp, b, i1, &fab_emlrtRTEI);
      loop_ub = yb->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b->data[i1] = yb->data[i1] - d2;
      }
      if (3 > S2->size[1]) {
        emlrtDynamicBoundsCheckR2012b(3, 1, S2->size[1], &ks_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      st.site = &ahb_emlrtRSI;
      b_st.site = &x_emlrtRSI;
      c_dynamic_size_checks(&b_st, resBSB, resBSB, resBSB->size[0],
                            resBSB->size[0]);
      st.site = &ahb_emlrtRSI;
      b_st.site = &x_emlrtRSI;
      c_dynamic_size_checks(&b_st, b, b, b->size[0], b->size[0]);
      if (d != d1) {
        emlrtIntegerCheckR2012b(d, &jd_emlrtDCI, (emlrtCTX)sp);
      }
      if (((int32_T)d < 1) || ((int32_T)d > S2->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, S2->size[0], &ot_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      S2->data[((int32_T)d + S2->size[0] * 2) - 1] =
          1.0 - thpmm_data / b_mtimes(b, b);
      if ((int32_T)b_mm < n) {
        st.site = &ygb_emlrtRSI;
        b_st.site = &x_emlrtRSI;
        b_dynamic_size_checks(&b_st, Xb, Xb, Xb->size[0], Xb->size[0]);
        b_st.site = &w_emlrtRSI;
        f_mtimes(&b_st, Xb, Xb, mAm);
        /*  Take minimum deletion residual among noBSB */
        /*  hi (the leverage for the units not belonging to the */
        /*  subset) is defined as follows */
        /*  hi=diag(X(ncl,:)*inv(Xb'*Xb)*(X(ncl,:))'); */
        /*  Take units not belonging to bsb */
        loop_ub = X->size[1];
        i1 = Xncl->size[0] * Xncl->size[1];
        Xncl->size[0] = ncl->size[0];
        Xncl->size[1] = X->size[1];
        emxEnsureCapacity_real_T(sp, Xncl, i1, &kab_emlrtRTEI);
        for (i1 = 0; i1 < loop_ub; i1++) {
          irank = ncl->size[0];
          for (i2 = 0; i2 < irank; i2++) {
            if (ncl->data[i2] != (int32_T)muDoubleScalarFloor(ncl->data[i2])) {
              emlrtIntegerCheckR2012b(ncl->data[i2], &kd_emlrtDCI,
                                      (emlrtCTX)sp);
            }
            nwhile = (int32_T)ncl->data[i2];
            if ((nwhile < 1) || (nwhile > X->size[0])) {
              emlrtDynamicBoundsCheckR2012b(nwhile, 1, X->size[0], &qt_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            Xncl->data[i2 + Xncl->size[0] * i1] =
                X->data[(nwhile + X->size[0] * i1) - 1];
          }
        }
        /*  mmX=inv(mAm); */
        /*  hi = sum((Xncl*mmX).*Xncl,2); */
        st.site = &xgb_emlrtRSI;
        if (mAm->size[1] != X->size[1]) {
          emlrtErrorWithMessageIdR2018a(&st, &dc_emlrtRTEI, "MATLAB:dimagree",
                                        "MATLAB:dimagree", 0);
        }
        i1 = r4->size[0] * r4->size[1];
        r4->size[0] = Xncl->size[0];
        r4->size[1] = Xncl->size[1];
        emxEnsureCapacity_real_T(&st, r4, i1, &mab_emlrtRTEI);
        loop_ub = Xncl->size[0] * Xncl->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          r4->data[i1] = Xncl->data[i1];
        }
        b_st.site = &xx_emlrtRSI;
        mrdiv(&b_st, r4, mAm);
        sizes[0] = ncl->size[0];
        sizes[1] = X->size[1];
        result[0] = (*(int32_T(*)[2])r4->size)[0];
        result[1] = (*(int32_T(*)[2])r4->size)[1];
        emlrtSizeEqCheckNDR2012b(&result[0], &sizes[0], &wc_emlrtECI,
                                 (emlrtCTX)sp);
        i1 = mAm->size[0] * mAm->size[1];
        mAm->size[0] = r4->size[0];
        mAm->size[1] = r4->size[1];
        emxEnsureCapacity_real_T(sp, mAm, i1, &nab_emlrtRTEI);
        loop_ub = r4->size[0] * r4->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          mAm->data[i1] = r4->data[i1] * Xncl->data[i1];
        }
        st.site = &xgb_emlrtRSI;
        b_sum(&st, mAm, b);
        /* hiall=sum((X/mAm).*X,2); */
        if (bonflevout) {
          thpmm_size[0] = varargin_14_size[0];
          thpmm_size[1] = varargin_14_size[1];
          loop_ub = varargin_14_size[0] * varargin_14_size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            thpmm_data = varargin_14_data[0] * (real_T)p / (real_T)b_mm;
          }
          st.site = &wgb_emlrtRSI;
          repelem(&st, (real_T *)&thpmm_data, thpmm_size, n - (int32_T)b_mm,
                  r4);
          if (1 != r4->size[1]) {
            emlrtDimSizeEqCheckR2012b(1, r4->size[1], &xc_emlrtECI,
                                      (emlrtCTX)sp);
          }
          if (b->size[0] != r4->size[0]) {
            emlrtSizeEqCheck1DR2012b(b->size[0], r4->size[0], &yc_emlrtECI,
                                     (emlrtCTX)sp);
          }
          i1 = unitstopenalize->size[0];
          unitstopenalize->size[0] = b->size[0];
          emxEnsureCapacity_boolean_T(sp, unitstopenalize, i1, &pab_emlrtRTEI);
          loop_ub = b->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            unitstopenalize->data[i1] = (b->data[i1] > r4->data[i1]);
          }
          st.site = &vgb_emlrtRSI;
          if (any(&st, unitstopenalize)) {
            nwhile = unitstopenalize->size[0];
            irank = 0;
            for (b_i = 0; b_i < nwhile; b_i++) {
              if (unitstopenalize->data[b_i]) {
                irank++;
              }
            }
            i1 = varargin_14_size[0] * varargin_14_size[1];
            if (irank != i1) {
              emlrtSubAssignSizeCheck1dR2017a(irank, i1, &ad_emlrtECI,
                                              (emlrtCTX)sp);
            }
            nwhile = unitstopenalize->size[0];
            for (b_i = 0; b_i < nwhile; b_i++) {
              if (unitstopenalize->data[b_i]) {
                if (b_i + 1 > b->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, b->size[0],
                                                &tt_emlrtBCI, (emlrtCTX)sp);
                }
                b->data[b_i] = thpmm_data;
              }
            }
          }
        } else {
          i1 = unitstopenalize->size[0];
          unitstopenalize->size[0] = 1;
          emxEnsureCapacity_boolean_T(sp, unitstopenalize, i1, &oab_emlrtRTEI);
          unitstopenalize->data[0] = false;
        }
        st.site = &ugb_emlrtRSI;
        loop_ub = ncl->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          i2 = (int32_T)ncl->data[i1];
          if ((i2 < 1) || (i2 > b_r->size[0])) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, b_r->size[0], &st_emlrtBCI,
                                          &st);
          }
        }
        loop_ub = b->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          b->data[i1]++;
        }
        b_st.site = &cd_emlrtRSI;
        c_st.site = &dd_emlrtRSI;
        e_st.site = &ed_emlrtRSI;
        f_st.site = &fd_emlrtRSI;
        g_st.site = &gd_emlrtRSI;
        if (ncl->size[0] <= b->size[0]) {
          i1 = ncl->size[0];
        } else {
          i1 = b->size[0];
        }
        Ra = true;
        b_p = true;
        b_i = 0;
        exitg1 = false;
        while ((!exitg1) && (b_i < 2)) {
          if (b_i + 1 <= 1) {
            i2 = i1;
            nwhile = ncl->size[0];
          } else {
            i2 = 1;
            nwhile = 1;
          }
          if (i2 != nwhile) {
            b_p = false;
            exitg1 = true;
          } else {
            b_i++;
          }
        }
        if (b_p) {
          b_p = true;
          b_i = 0;
          exitg1 = false;
          while ((!exitg1) && (b_i < 2)) {
            if (b_i + 1 <= 1) {
              i2 = i1;
              nwhile = b->size[0];
            } else {
              i2 = 1;
              nwhile = 1;
            }
            if (i2 != nwhile) {
              b_p = false;
              exitg1 = true;
            } else {
              b_i++;
            }
          }
          if (!b_p) {
            Ra = false;
          }
        } else {
          Ra = false;
        }
        if (!Ra) {
          emlrtErrorWithMessageIdR2018a(&g_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                        "MATLAB:dimagree", 0);
        }
        g_st.site = &hd_emlrtRSI;
        h_st.site = &id_emlrtRSI;
        if (ncl->size[0] <= b->size[0]) {
          i1 = ncl->size[0];
        } else {
          i1 = b->size[0];
        }
        if (ncl->size[0] <= b->size[0]) {
          irank = ncl->size[0];
        } else {
          irank = b->size[0];
        }
        Ra = true;
        b_p = true;
        b_i = 0;
        exitg1 = false;
        while ((!exitg1) && (b_i < 2)) {
          if (b_i + 1 <= 1) {
            i2 = i1;
            nwhile = ncl->size[0];
          } else {
            i2 = 1;
            nwhile = 1;
          }
          if (i2 != nwhile) {
            b_p = false;
            exitg1 = true;
          } else {
            b_i++;
          }
        }
        if (b_p) {
          b_p = true;
          b_i = 0;
          exitg1 = false;
          while ((!exitg1) && (b_i < 2)) {
            if (b_i + 1 <= 1) {
              i2 = i1;
              nwhile = b->size[0];
            } else {
              i2 = 1;
              nwhile = 1;
            }
            if (i2 != nwhile) {
              b_p = false;
              exitg1 = true;
            } else {
              b_i++;
            }
          }
          if (!b_p) {
            Ra = false;
          }
        } else {
          Ra = false;
        }
        if (!Ra) {
          emlrtErrorWithMessageIdR2018a(&h_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                        "MATLAB:dimagree", 0);
        }
        h_st.site = &jd_emlrtRSI;
        if ((1 <= irank) && (irank > 2147483646)) {
          i_st.site = &ab_emlrtRSI;
          check_forloop_overflow_error(&i_st);
        }
        loop_ub = ncl->size[0];
        i1 = z->size[0];
        z->size[0] = ncl->size[0];
        emxEnsureCapacity_real_T(&b_st, z, i1, &qab_emlrtRTEI);
        for (i1 = 0; i1 < loop_ub; i1++) {
          z->data[i1] = b_r->data[((int32_T)ncl->data[i1] + b_r->size[0]) - 1] /
                        b->data[i1];
        }
        st.site = &ugb_emlrtRSI;
        loop_ub = ncl->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          i2 = (int32_T)ncl->data[i1];
          if ((i2 < 1) || (i2 > e->size[0])) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, e->size[0], &ut_emlrtBCI, &st);
          }
        }
        b_st.site = &xk_emlrtRSI;
        c_st.site = &yk_emlrtRSI;
        if (ncl->size[0] != z->size[0]) {
          emlrtErrorWithMessageIdR2018a(
              &c_st, &nb_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
              "MATLAB:catenate:matrixDimensionMismatch", 0);
        }
        i1 = ord->size[0] * ord->size[1];
        ord->size[0] = z->size[0];
        ord->size[1] = 2;
        emxEnsureCapacity_real_T(&b_st, ord, i1, &rab_emlrtRTEI);
        loop_ub = z->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          ord->data[i1] = z->data[i1];
        }
        loop_ub = ncl->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          ord->data[i1 + ord->size[0]] = e->data[(int32_T)ncl->data[i1] - 1];
        }
        if (bonflevout) {
          nwhile = unitstopenalize->size[0] - 1;
          irank = 0;
          for (b_i = 0; b_i <= nwhile; b_i++) {
            if (unitstopenalize->data[b_i]) {
              irank++;
            }
          }
          i1 = truerownamestopenalize->size[0];
          truerownamestopenalize->size[0] = irank;
          emxEnsureCapacity_uint32_T(sp, truerownamestopenalize, i1,
                                     &hy_emlrtRTEI);
          irank = 0;
          for (b_i = 0; b_i <= nwhile; b_i++) {
            if (unitstopenalize->data[b_i]) {
              if (b_i + 1 > ncl->size[0]) {
                emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, ncl->size[0],
                                              &vt_emlrtBCI, (emlrtCTX)sp);
              }
              truerownamestopenalize->data[irank] = (uint32_T)ncl->data[b_i];
              irank++;
            }
          }
          /*  disp(ncl(unittopenalize)) */
          loop_ub = truerownamestopenalize->size[0];
          i1 = iidx->size[0];
          iidx->size[0] = truerownamestopenalize->size[0];
          emxEnsureCapacity_int32_T(sp, iidx, i1, &sab_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub; i1++) {
            if (((int32_T)truerownamestopenalize->data[i1] < 1) ||
                ((int32_T)truerownamestopenalize->data[i1] > b_r->size[0])) {
              emlrtDynamicBoundsCheckR2012b(
                  (int32_T)truerownamestopenalize->data[i1], 1, b_r->size[0],
                  &wt_emlrtBCI, (emlrtCTX)sp);
            }
            iidx->data[i1] = (int32_T)truerownamestopenalize->data[i1] - 1;
          }
          loop_ub = truerownamestopenalize->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            i2 = (int32_T)truerownamestopenalize->data[i1];
            if ((i2 < 1) || (i2 > b_r->size[0])) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, b_r->size[0], &xt_emlrtBCI,
                                            (emlrtCTX)sp);
            }
          }
          loop_ub = truerownamestopenalize->size[0];
          i1 = z->size[0];
          z->size[0] = truerownamestopenalize->size[0];
          emxEnsureCapacity_real_T(sp, z, i1, &tab_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub; i1++) {
            z->data[i1] = b_r->data[((int32_T)truerownamestopenalize->data[i1] +
                                     b_r->size[0]) -
                                    1] *
                          1.0E+7;
          }
          emlrtSubAssignSizeCheckR2012b(&iidx->size[0], 1, &z->size[0], 1,
                                        &cd_emlrtECI, (emlrtCTX)sp);
          loop_ub = z->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            b_r->data[iidx->data[i1] + b_r->size[0]] = z->data[i1];
          }
        }
        /*  Store minimum deletion residual in matrix mdr */
        /*  selmdr=sortrows(ord,1); */
        st.site = &tgb_emlrtRSI;
        b_st.site = &lb_emlrtRSI;
        c_st.site = &mb_emlrtRSI;
        e_st.site = &nb_emlrtRSI;
        if (ord->size[0] < 1) {
          emlrtErrorWithMessageIdR2018a(
              &e_st, &lb_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
              "Coder:toolbox:eml_min_or_max_varDimZero", 0);
        }
        f_st.site = &dt_emlrtRSI;
        g_st.site = &et_emlrtRSI;
        irank = ord->size[0];
        if (ord->size[0] <= 2) {
          if (ord->size[0] == 1) {
            thpmm_data = ord->data[0];
          } else if ((ord->data[0] > ord->data[1]) ||
                     (muDoubleScalarIsNaN(ord->data[0]) &&
                      (!muDoubleScalarIsNaN(ord->data[1])))) {
            thpmm_data = ord->data[1];
          } else {
            thpmm_data = ord->data[0];
          }
        } else {
          h_st.site = &gt_emlrtRSI;
          if (!muDoubleScalarIsNaN(ord->data[0])) {
            nwhile = 1;
          } else {
            nwhile = 0;
            i_st.site = &ht_emlrtRSI;
            if (ord->size[0] > 2147483646) {
              j_st.site = &ab_emlrtRSI;
              check_forloop_overflow_error(&j_st);
            }
            b_i = 2;
            exitg1 = false;
            while ((!exitg1) && (b_i <= irank)) {
              if (!muDoubleScalarIsNaN(ord->data[b_i - 1])) {
                nwhile = b_i;
                exitg1 = true;
              } else {
                b_i++;
              }
            }
          }
          if (nwhile == 0) {
            thpmm_data = ord->data[0];
          } else {
            h_st.site = &ft_emlrtRSI;
            thpmm_data = ord->data[nwhile - 1];
            loop_ub = nwhile + 1;
            i_st.site = &it_emlrtRSI;
            if (nwhile + 1 > ord->size[0]) {
              Ra = false;
            } else {
              Ra = (ord->size[0] > 2147483646);
            }
            if (Ra) {
              j_st.site = &ab_emlrtRSI;
              check_forloop_overflow_error(&j_st);
            }
            for (b_i = loop_ub; b_i <= irank; b_i++) {
              d2 = ord->data[b_i - 1];
              if (thpmm_data > d2) {
                thpmm_data = d2;
              }
            }
          }
        }
        if (2 > S2->size[1]) {
          emlrtDynamicBoundsCheckR2012b(2, 1, S2->size[1], &ls_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        if (d != d1) {
          emlrtIntegerCheckR2012b(d, &ld_emlrtDCI, (emlrtCTX)sp);
        }
        if (((int32_T)d < 1) || ((int32_T)d > S2->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, S2->size[0],
                                        &yt_emlrtBCI, (emlrtCTX)sp);
        }
        if (S2->data[((int32_T)d + S2->size[0]) - 1] == 0.0) {
          st.site = &sgb_emlrtRSI;
          c_sprintf(&st, ((real_T)b_mm - init1) + 1.0);
        } else {
          if (2 > S2->size[1]) {
            emlrtDynamicBoundsCheckR2012b(2, 1, S2->size[1], &ms_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          if (d != d1) {
            emlrtIntegerCheckR2012b(d, &md_emlrtDCI, (emlrtCTX)sp);
          }
          if (((int32_T)d < 1) || ((int32_T)d > S2->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, S2->size[0],
                                          &au_emlrtBCI, (emlrtCTX)sp);
          }
          if (d != d1) {
            emlrtIntegerCheckR2012b(d, &nd_emlrtDCI, (emlrtCTX)sp);
          }
          if (((int32_T)d < 1) || ((int32_T)d > mdr->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, mdr->size[0],
                                          &bu_emlrtBCI, (emlrtCTX)sp);
          }
          mdr->data[((int32_T)d + mdr->size[0]) - 1] =
              thpmm_data / S2->data[((int32_T)d + S2->size[0]) - 1];
          if (d != d1) {
            emlrtIntegerCheckR2012b(d, &nd_emlrtDCI, (emlrtCTX)sp);
          }
          if (((int32_T)d < 1) || ((int32_T)d > mdr->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, mdr->size[0],
                                          &bu_emlrtBCI, (emlrtCTX)sp);
          }
          st.site = &rgb_emlrtRSI;
          x = &mdr->data[((int32_T)d + mdr->size[0]) - 1];
          if (*x < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &st, &ac_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
          }
          *x = muDoubleScalarSqrt(*x);
        }
      }
      /* if mm<n */
      /* ~RankProblem */
    }
    /* mm>=init1 */
    if (b_mm < (uint32_T)n) {
      /*  store units forming old subset in vector oldbsb */
      loop_ub = bsbT->size[0];
      i1 = unitstopenalize->size[0];
      unitstopenalize->size[0] = bsbT->size[0];
      emxEnsureCapacity_boolean_T(sp, unitstopenalize, i1, &bab_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        unitstopenalize->data[i1] = bsbT->data[i1];
      }
      /*  order the r_i */
      /*  units inside vector constr are forced to join the search in */
      /*  the final k steps */
      loop_ub = varargin_10->size[0];
      if ((varargin_10->size[0] != 0) &&
          ((int32_T)b_mm < n - varargin_10->size[0])) {
        i1 = iidx->size[0];
        iidx->size[0] = varargin_10->size[0];
        emxEnsureCapacity_int32_T(sp, iidx, i1, &dab_emlrtRTEI);
        for (i1 = 0; i1 < loop_ub; i1++) {
          if (varargin_10->data[i1] !=
              (int32_T)muDoubleScalarFloor(varargin_10->data[i1])) {
            emlrtIntegerCheckR2012b(varargin_10->data[i1], &hd_emlrtDCI,
                                    (emlrtCTX)sp);
          }
          i2 = (int32_T)varargin_10->data[i1];
          if ((i2 < 1) || (i2 > b_r->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)varargin_10->data[i1], 1,
                                          b_r->size[0], &kt_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          iidx->data[i1] = i2;
        }
        loop_ub = iidx->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_r->data[(iidx->data[i1] + b_r->size[0]) - 1] = rtInf;
        }
      }
      /*  If internationaltrade is true residuals which have large of */
      /*  the final column of X (generally quantity) are reduced. Note */
      /*  that this guarantees that leverge units which have a large */
      /*  value of  X will tend to stay in the subset. */
      /*  In other words, we use the residuals as if we were regressing */
      /*  y/X (that is price) on the vector of ones. */
      st.site = &qgb_emlrtRSI;
      loop_ub = b_r->size[0];
      i1 = b->size[0];
      b->size[0] = b_r->size[0];
      emxEnsureCapacity_real_T(&st, b, i1, &tk_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b->data[i1] = b_r->data[i1 + b_r->size[0]];
      }
      b_st.site = &jl_emlrtRSI;
      sort(&b_st, b, iidx);
      i1 = b->size[0];
      b->size[0] = iidx->size[0];
      emxEnsureCapacity_real_T(&st, b, i1, &df_emlrtRTEI);
      loop_ub = iidx->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b->data[i1] = iidx->data[i1];
      }
      /*  bsb= units forming the new  subset */
      if (1 > b->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, b->size[0], &ns_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if ((int32_T)b_mm + 1 > b->size[0]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_mm + 1, 1, b->size[0],
                                      &os_emlrtBCI, (emlrtCTX)sp);
      }
      i1 = bsb->size[0];
      bsb->size[0] = (int32_T)b_mm + 1;
      emxEnsureCapacity_real_T(sp, bsb, i1, &eab_emlrtRTEI);
      loop_ub = (int32_T)b_mm;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        bsb->data[i1] = b->data[i1];
      }
      i1 = bsbT->size[0];
      bsbT->size[0] = n;
      emxEnsureCapacity_boolean_T(sp, bsbT, i1, &gab_emlrtRTEI);
      for (i1 = 0; i1 < n; i1++) {
        bsbT->data[i1] = false;
      }
      i1 = iidx->size[0];
      iidx->size[0] = (int32_T)b_mm + 1;
      emxEnsureCapacity_int32_T(sp, iidx, i1, &hab_emlrtRTEI);
      loop_ub = (int32_T)b_mm;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        i2 = (int32_T)b->data[i1];
        if ((i2 < 1) || (i2 > n)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b->data[i1], 1, n,
                                        &mt_emlrtBCI, (emlrtCTX)sp);
        }
        iidx->data[i1] = i2;
      }
      loop_ub = iidx->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        bsbT->data[iidx->data[i1] - 1] = true;
      }
      loop_ub = X->size[1];
      i1 = Xb->size[0] * Xb->size[1];
      Xb->size[0] = (int32_T)b_mm + 1;
      Xb->size[1] = X->size[1];
      emxEnsureCapacity_real_T(sp, Xb, i1, &iab_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        irank = (int32_T)b_mm;
        for (i2 = 0; i2 <= irank; i2++) {
          nwhile = (int32_T)b->data[i2];
          if ((nwhile < 1) || (nwhile > X->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b->data[i2], 1, X->size[0],
                                          &nt_emlrtBCI, (emlrtCTX)sp);
          }
          Xb->data[i2 + Xb->size[0] * i1] =
              X->data[(nwhile + X->size[0] * i1) - 1];
        }
      }
      /*  subset of X */
      i1 = yb->size[0];
      yb->size[0] = (int32_T)b_mm + 1;
      emxEnsureCapacity_real_T(sp, yb, i1, &jab_emlrtRTEI);
      loop_ub = (int32_T)b_mm;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        i2 = (int32_T)b->data[i1];
        if ((i2 < 1) || (i2 > y->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b->data[i1], 1, y->size[0],
                                        &pt_emlrtBCI, (emlrtCTX)sp);
        }
        yb->data[i1] = y->data[i2 - 1];
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
                                   &dd_emlrtECI, (emlrtCTX)sp);
        }
        nwhile = bsbT->size[0] - 1;
        irank = 0;
        for (b_i = 0; b_i <= nwhile; b_i++) {
          if (bsbT->data[b_i] && unitstopenalize->data[b_i]) {
            irank++;
          }
        }
        i1 = unit->size[0];
        unit->size[0] = irank;
        emxEnsureCapacity_real_T(sp, unit, i1, &hy_emlrtRTEI);
        irank = 0;
        for (b_i = 0; b_i <= nwhile; b_i++) {
          if (bsbT->data[b_i] && unitstopenalize->data[b_i]) {
            if (b_i + 1 > seq->size[0]) {
              emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                                            &rt_emlrtBCI, (emlrtCTX)sp);
            }
            unit->data[irank] = seq->data[b_i];
            irank++;
          }
        }
        /*  If the interchange involves more than 10 units, store only the */
        /*  first 10. */
        if (unit->size[0] <= 10) {
          if (2 > unit->size[0] + 1) {
            i1 = -1;
            i2 = -1;
          } else {
            i1 = 0;
            i2 = unit->size[0];
          }
          d = ((real_T)b_mm - init1) + 1.0;
          if (d != (int32_T)muDoubleScalarFloor(d)) {
            emlrtIntegerCheckR2012b(d, &rc_emlrtDCI, (emlrtCTX)sp);
          }
          if (((int32_T)d < 1) || ((int32_T)d > Un->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Un->size[0],
                                          &xs_emlrtBCI, (emlrtCTX)sp);
          }
          sizes[0] = 1;
          irank = i2 - i1;
          sizes[1] = irank;
          emlrtSubAssignSizeCheckR2012b(&sizes[0], 2, &unit->size[0], 1,
                                        &gd_emlrtECI, (emlrtCTX)sp);
          for (i2 = 0; i2 < irank; i2++) {
            Un->data[((int32_T)d + Un->size[0] * ((i1 + i2) + 1)) - 1] =
                unit->data[i2];
          }
        } else if (varargin_8) {
          st.site = &pgb_emlrtRSI;
          int2str(&st, b_mm, tmp_data, result);
          b_tmp_size[0] = 1;
          loop_ub = result[1];
          b_tmp_size[1] = result[1] + 44;
          for (i1 = 0; i1 < 44; i1++) {
            c_tmp_data[i1] = cv15[i1];
          }
          if (0 <= loop_ub - 1) {
            memcpy(&c_tmp_data[44], &tmp_data[0], loop_ub * sizeof(char_T));
          }
          st.site = &wob_emlrtRSI;
          disp(&st, cb_emlrt_marshallOut(&st, c_tmp_data, b_tmp_size),
               &qb_emlrtMCI);
          st.site = &ogb_emlrtRSI;
          int2str(&st, unit->size[0], tmp_data, result);
          c_tmp_size[0] = 1;
          loop_ub = result[1];
          c_tmp_size[1] = result[1] + 30;
          for (i1 = 0; i1 < 30; i1++) {
            d_tmp_data[i1] = cv16[i1];
          }
          if (0 <= loop_ub - 1) {
            memcpy(&d_tmp_data[30], &tmp_data[0], loop_ub * sizeof(char_T));
          }
          st.site = &vob_emlrtRSI;
          disp(&st, cb_emlrt_marshallOut(&st, d_tmp_data, c_tmp_size),
               &rb_emlrtMCI);
          st.site = &ngb_emlrtRSI;
          c_indexShapeCheck(&st, unit->size[0]);
          d = ((real_T)b_mm - init1) + 1.0;
          if (d != (int32_T)muDoubleScalarFloor(d)) {
            emlrtIntegerCheckR2012b(d, &sc_emlrtDCI, (emlrtCTX)sp);
          }
          if (((int32_T)d < 1) || ((int32_T)d > Un->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Un->size[0],
                                          &ys_emlrtBCI, (emlrtCTX)sp);
          }
          for (i1 = 0; i1 < 10; i1++) {
            Un->data[((int32_T)d + Un->size[0] * (i1 + 1)) - 1] =
                unit->data[i1];
          }
        }
      }
      if ((int32_T)b_mm < n - 1) {
        if ((varargin_10->size[0] != 0) &&
            ((int32_T)b_mm < (n - varargin_10->size[0]) - 1)) {
          /*  disp(mm) */
          if ((int32_T)b_mm + 2 > n) {
            i1 = 0;
            i2 = 0;
          } else {
            if (((int32_T)b_mm + 2 < 1) || ((int32_T)b_mm + 2 > b->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_mm + 2, 1, b->size[0],
                                            &ps_emlrtBCI, (emlrtCTX)sp);
            }
            i1 = (int32_T)b_mm + 1;
            if ((n < 1) || (n > b->size[0])) {
              emlrtDynamicBoundsCheckR2012b(n, 1, b->size[0], &qs_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            i2 = n;
          }
          /*  ncl= units forming the new noclean */
          st.site = &mgb_emlrtRSI;
          b_st.site = &aeb_emlrtRSI;
          irank = i2 - i1;
          for (i2 = 0; i2 < irank; i2++) {
            b->data[i2] = b->data[i1 + i2];
          }
          i1 = b->size[0];
          b->size[0] = irank;
          emxEnsureCapacity_real_T(&b_st, b, i1, &hy_emlrtRTEI);
          c_st.site = &pdb_emlrtRSI;
          e_do_vectors(&c_st, b, varargin_10, ncl, iidx, &b_i);
        } else {
          if ((int32_T)b_mm + 2 > n) {
            i1 = 0;
            i2 = 0;
          } else {
            if (((int32_T)b_mm + 2 < 1) || ((int32_T)b_mm + 2 > b->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_mm + 2, 1, b->size[0],
                                            &rs_emlrtBCI, (emlrtCTX)sp);
            }
            i1 = (int32_T)b_mm + 1;
            if ((n < 1) || (n > b->size[0])) {
              emlrtDynamicBoundsCheckR2012b(n, 1, b->size[0], &ss_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            i2 = n;
          }
          loop_ub = i2 - i1;
          i2 = ncl->size[0];
          ncl->size[0] = loop_ub;
          emxEnsureCapacity_real_T(sp, ncl, i2, &lab_emlrtRTEI);
          for (i2 = 0; i2 < loop_ub; i2++) {
            ncl->data[i2] = b->data[i1 + i2];
          }
          /*  ncl= units forming the new noclean */
        }
      }
    }
    /*  if mm<n */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_real_T(&z);
  emxFree_int32_T(&iidx);
  emxFree_real_T(&b_y);
  emxFree_real_T(&r4);
  emxFree_real_T(&unit);
  emxFree_uint32_T(&truerownamestopenalize);
  emxFree_real_T(&ord);
  emxFree_boolean_T(&unitstopenalize);
  emxFree_real_T(&Xncl);
  emxFree_real_T(&mAm);
  emxFree_real_T(&e);
  emxFree_real_T(&b);
  emxFree_real_T(&resBSB);
  emxFree_boolean_T(&boobsbsteps);
  emxFree_real_T(&b_r);
  emxFree_real_T(&ncl);
  emxFree_real_T(&seq);
  emxFree_boolean_T(&bsbT);
  emxFree_real_T(&yb);
  emxFree_real_T(&Xb);
  /*  for mm=ini0:n loop */
  /*  Plot minimum deletion residual with 1%, 50% and 99% envelopes */
  /*  rank check */
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (FSRmdr.c) */
