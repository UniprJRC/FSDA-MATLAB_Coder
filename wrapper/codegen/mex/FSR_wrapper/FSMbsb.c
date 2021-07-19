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
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_mexutil.h"
#include "FSR_wrapper_types.h"
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
static emlrtRSInfo ccb_emlrtRSI = {
    767,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo dcb_emlrtRSI = {
    765,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo ecb_emlrtRSI = {
    764,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo fcb_emlrtRSI = {
    749,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo gcb_emlrtRSI = {
    742,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo hcb_emlrtRSI = {
    734,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo icb_emlrtRSI = {
    731,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo jcb_emlrtRSI = {
    671,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo kcb_emlrtRSI = {
    602,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo lcb_emlrtRSI = {
    585,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo mcb_emlrtRSI = {
    562,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo ncb_emlrtRSI = {
    560,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo ocb_emlrtRSI = {
    547,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo pcb_emlrtRSI = {
    545,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo qcb_emlrtRSI = {
    544,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo rcb_emlrtRSI = {
    542,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo scb_emlrtRSI = {
    541,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo tcb_emlrtRSI = {
    535,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo ucb_emlrtRSI = {
    533,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo vcb_emlrtRSI = {
    525,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo wcb_emlrtRSI = {
    523,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo xcb_emlrtRSI = {
    518,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo ycb_emlrtRSI = {
    516,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo adb_emlrtRSI = {
    515,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo bdb_emlrtRSI = {
    513,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo cdb_emlrtRSI = {
    504,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo ddb_emlrtRSI = {
    502,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo edb_emlrtRSI = {
    498,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo fdb_emlrtRSI = {
    496,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo gdb_emlrtRSI = {
    495,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo hdb_emlrtRSI = {
    492,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo idb_emlrtRSI = {
    490,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo jdb_emlrtRSI = {
    475,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo kdb_emlrtRSI = {
    451,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo ldb_emlrtRSI = {
    444,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo mdb_emlrtRSI = {
    432,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo ndb_emlrtRSI = {
    406,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo odb_emlrtRSI = {
    393,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo pdb_emlrtRSI = {
    368,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo qdb_emlrtRSI = {
    346,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo rdb_emlrtRSI = {
    332,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo sdb_emlrtRSI = {
    247,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo tdb_emlrtRSI = {
    245,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo udb_emlrtRSI = {
    241,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtMCInfo db_emlrtMCI = {
    254,                                                /* lineNo */
    13,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtMCInfo eb_emlrtMCI = {
    340,                                                /* lineNo */
    9,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtMCInfo fb_emlrtMCI = {
    379,                                                /* lineNo */
    13,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtMCInfo gb_emlrtMCI = {
    410,                                                /* lineNo */
    9,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtMCInfo hb_emlrtMCI = {
    412,                                                /* lineNo */
    5,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtMCInfo ib_emlrtMCI = {
    551,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtMCInfo jb_emlrtMCI = {
    553,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtMCInfo kb_emlrtMCI = {
    764,                                                /* lineNo */
    25,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtMCInfo lb_emlrtMCI = {
    765,                                                /* lineNo */
    25,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtBCInfo lq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    740,                                                 /* lineNo */
    31,                                                  /* colNo */
    "seq",                                               /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo mq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    739,                                                 /* lineNo */
    32,                                                  /* colNo */
    "seq",                                               /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo nq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    436,                                                 /* lineNo */
    37,                                                  /* colNo */
    "seq",                                               /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo oq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    436,                                                 /* lineNo */
    24,                                                  /* colNo */
    "BB",                                                /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtECInfo bc_emlrtECI = {
    2,                                                  /* nDims */
    406,                                                /* lineNo */
    30,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtECInfo cc_emlrtECI = {
    -1,                                                 /* nDims */
    470,                                                /* lineNo */
    32,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtECInfo dc_emlrtECI = {
    -1,                                                 /* nDims */
    489,                                                /* lineNo */
    27,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtECInfo ec_emlrtECI = {
    2,                                                  /* nDims */
    495,                                                /* lineNo */
    59,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtECInfo fc_emlrtECI = {
    2,                                                  /* nDims */
    498,                                                /* lineNo */
    19,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtBCInfo pq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    501,                                                 /* lineNo */
    30,                                                  /* colNo */
    "Y",                                                 /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtECInfo gc_emlrtECI = {
    2,                                                  /* nDims */
    501,                                                /* lineNo */
    28,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtECInfo hc_emlrtECI = {
    2,                                                  /* nDims */
    504,                                                /* lineNo */
    27,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtECInfo ic_emlrtECI = {
    2,                                                  /* nDims */
    515,                                                /* lineNo */
    67,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtECInfo jc_emlrtECI = {
    2,                                                  /* nDims */
    518,                                                /* lineNo */
    15,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtBCInfo qq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    522,                                                 /* lineNo */
    26,                                                  /* colNo */
    "Y",                                                 /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtECInfo kc_emlrtECI = {
    2,                                                  /* nDims */
    522,                                                /* lineNo */
    24,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtECInfo lc_emlrtECI = {
    2,                                                  /* nDims */
    525,                                                /* lineNo */
    23,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtECInfo mc_emlrtECI = {
    2,                                                  /* nDims */
    533,                                                /* lineNo */
    31,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtECInfo nc_emlrtECI = {
    -1,                                                 /* nDims */
    595,                                                /* lineNo */
    28,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtBCInfo rq_emlrtBCI = {
    1,                                                   /* iFirst */
    10,                                                  /* iLast */
    691,                                                 /* lineNo */
    33,                                                  /* colNo */
    "unitadd",                                           /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    3                                                    /* checkKind */
};

static emlrtBCInfo sq_emlrtBCI = {
    1,                                                   /* iFirst */
    10,                                                  /* iLast */
    700,                                                 /* lineNo */
    32,                                                  /* colNo */
    "unitadd",                                           /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo tq_emlrtBCI = {
    1,                                                   /* iFirst */
    10,                                                  /* iLast */
    681,                                                 /* lineNo */
    37,                                                  /* colNo */
    "bsbradd",                                           /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    3                                                    /* checkKind */
};

static emlrtBCInfo uq_emlrtBCI = {
    1,                                                   /* iFirst */
    10,                                                  /* iLast */
    706,                                                 /* lineNo */
    45,                                                  /* colNo */
    "bsbradd",                                           /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo vq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    742,                                                 /* lineNo */
    39,                                                  /* colNo */
    "bsbeq",                                             /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo wq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    742,                                                 /* lineNo */
    41,                                                  /* colNo */
    "bsbeq",                                             /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtECInfo oc_emlrtECI = {
    -1,                                                 /* nDims */
    749,                                                /* lineNo */
    27,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtBCInfo xq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    434,                                                 /* lineNo */
    28,                                                  /* colNo */
    "BB",                                                /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtECInfo pc_emlrtECI = {
    -1,                                                 /* nDims */
    434,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtBCInfo yq_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    436,                                                 /* lineNo */
    29,                                                  /* colNo */
    "BB",                                                /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtECInfo qc_emlrtECI = {
    -1,                                                 /* nDims */
    436,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtDCInfo cc_emlrtDCI = {
    761,                                                 /* lineNo */
    24,                                                  /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtBCInfo ar_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    761,                                                 /* lineNo */
    24,                                                  /* colNo */
    "Un",                                                /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtECInfo rc_emlrtECI = {
    -1,                                                 /* nDims */
    761,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtDCInfo dc_emlrtDCI = {
    767,                                                 /* lineNo */
    24,                                                  /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtBCInfo br_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    767,                                                 /* lineNo */
    24,                                                  /* colNo */
    "Un",                                                /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtECInfo sc_emlrtECI = {
    -1,                                                 /* nDims */
    767,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtDCInfo ec_emlrtDCI = {
    372,                                                 /* lineNo */
    20,                                                  /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtDCInfo fc_emlrtDCI = {
    372,                                                 /* lineNo */
    20,                                                  /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    4                                                    /* checkKind */
};

static emlrtBCInfo cr_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    247,                                                 /* lineNo */
    24,                                                  /* colNo */
    "Y",                                                 /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo dr_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    308,                                                 /* lineNo */
    6,                                                   /* colNo */
    "bsbT",                                              /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtDCInfo gc_emlrtDCI = {
    372,                                                 /* lineNo */
    9,                                                   /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtDCInfo hc_emlrtDCI = {
    372,                                                 /* lineNo */
    9,                                                   /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    4                                                    /* checkKind */
};

static emlrtDCInfo ic_emlrtDCI = {
    393,                                                 /* lineNo */
    33,                                                  /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtDCInfo jc_emlrtDCI = {
    393,                                                 /* lineNo */
    33,                                                  /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    4                                                    /* checkKind */
};

static emlrtBCInfo er_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    406,                                                 /* lineNo */
    12,                                                  /* colNo */
    "Y",                                                 /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo fr_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    406,                                                 /* lineNo */
    36,                                                  /* colNo */
    "Y",                                                 /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo gr_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    406,                                                 /* lineNo */
    52,                                                  /* colNo */
    "Y",                                                 /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo hr_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    424,                                                 /* lineNo */
    18,                                                  /* colNo */
    "Y",                                                 /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtDCInfo kc_emlrtDCI = {
    424,                                                 /* lineNo */
    18,                                                  /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtBCInfo ir_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    426,                                                 /* lineNo */
    18,                                                  /* colNo */
    "Y",                                                 /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtDCInfo lc_emlrtDCI = {
    434,                                                 /* lineNo */
    24,                                                  /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtBCInfo jr_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    434,                                                 /* lineNo */
    24,                                                  /* colNo */
    "BB",                                                /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo kr_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    544,                                                 /* lineNo */
    26,                                                  /* colNo */
    "Ym",                                                /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtDCInfo mc_emlrtDCI = {
    544,                                                 /* lineNo */
    26,                                                  /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtBCInfo lr_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    544,                                                 /* lineNo */
    37,                                                  /* colNo */
    "Ym",                                                /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo mr_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    541,                                                 /* lineNo */
    26,                                                  /* colNo */
    "Ym",                                                /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo nr_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    545,                                                 /* lineNo */
    29,                                                  /* colNo */
    "Ym",                                                /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo or_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    513,                                                 /* lineNo */
    22,                                                  /* colNo */
    "Y",                                                 /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtDCInfo nc_emlrtDCI = {
    475,                                                 /* lineNo */
    26,                                                  /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtBCInfo pr_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    475,                                                 /* lineNo */
    26,                                                  /* colNo */
    "Y",                                                 /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo qr_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    541,                                                 /* lineNo */
    38,                                                  /* colNo */
    "Ym",                                                /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo rr_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    471,                                                 /* lineNo */
    29,                                                  /* colNo */
    "seq",                                               /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo sr_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    542,                                                 /* lineNo */
    29,                                                  /* colNo */
    "Ym",                                                /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo tr_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    492,                                                 /* lineNo */
    34,                                                  /* colNo */
    "Y",                                                 /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtDCInfo oc_emlrtDCI = {
    577,                                                 /* lineNo */
    23,                                                  /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtBCInfo ur_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    577,                                                 /* lineNo */
    23,                                                  /* colNo */
    "MDmod",                                             /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo vr_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    575,                                                 /* lineNo */
    17,                                                  /* colNo */
    "MDmod",                                             /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo wr_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    490,                                                 /* lineNo */
    34,                                                  /* colNo */
    "Y",                                                 /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo xr_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    522,                                                 /* lineNo */
    26,                                                  /* colNo */
    "unit",                                              /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo yr_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    597,                                                 /* lineNo */
    37,                                                  /* colNo */
    "MDltminT",                                          /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtDCInfo pc_emlrtDCI = {
    597,                                                 /* lineNo */
    37,                                                  /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtBCInfo as_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    501,                                                 /* lineNo */
    30,                                                  /* colNo */
    "unitout",                                           /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo bs_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    621,                                                 /* lineNo */
    17,                                                  /* colNo */
    "bsbT",                                              /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtDCInfo qc_emlrtDCI = {
    642,                                                 /* lineNo */
    37,                                                  /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtBCInfo cs_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    642,                                                 /* lineNo */
    37,                                                  /* colNo */
    "MDltminT",                                          /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo ds_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    658,                                                 /* lineNo */
    21,                                                  /* colNo */
    "MDmod",                                             /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo es_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    736,                                                 /* lineNo */
    29,                                                  /* colNo */
    "seq",                                               /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo fs_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    643,                                                 /* lineNo */
    29,                                                  /* colNo */
    "bsb",                                               /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo gs_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    649,                                                 /* lineNo */
    27,                                                  /* colNo */
    "MDmod",                                             /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo hs_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    648,                                                 /* lineNo */
    29,                                                  /* colNo */
    "bsb",                                               /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo is_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    723,                                                 /* lineNo */
    26,                                                  /* colNo */
    "bsbT",                                              /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo js_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    715,                                                 /* lineNo */
    30,                                                  /* colNo */
    "bsbriniT",                                          /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtDCInfo rc_emlrtDCI = {
    745,                                                 /* lineNo */
    26,                                                  /* colNo */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    1                                                    /* checkKind */
};

static emlrtBCInfo ks_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    745,                                                 /* lineNo */
    26,                                                  /* colNo */
    "bsbT",                                              /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo ls_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    679,                                                 /* lineNo */
    24,                                                  /* colNo */
    "bsbT",                                              /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo ms_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    688,                                                 /* lineNo */
    29,                                                  /* colNo */
    "bsbriniT",                                          /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo ns_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    695,                                                 /* lineNo */
    21,                                                  /* colNo */
    "MDmod",                                             /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo os_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    686,                                                 /* lineNo */
    37,                                                  /* colNo */
    "unitout",                                           /* aName */
    "FSMbsb",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtRTEInfo ut_emlrtRTEI = {
    241,                                                /* lineNo */
    4,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo vt_emlrtRTEI = {
    247,                                                /* lineNo */
    22,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo wt_emlrtRTEI = {
    298,                                                /* lineNo */
    5,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo xt_emlrtRTEI = {
    307,                                                /* lineNo */
    1,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo yt_emlrtRTEI = {
    308,                                                /* lineNo */
    6,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo au_emlrtRTEI = {
    314,                                                /* lineNo */
    5,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo bu_emlrtRTEI = {
    315,                                                /* lineNo */
    5,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo cu_emlrtRTEI = {
    316,                                                /* lineNo */
    5,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo du_emlrtRTEI = {
    317,                                                /* lineNo */
    5,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo eu_emlrtRTEI = {
    318,                                                /* lineNo */
    5,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo fu_emlrtRTEI = {
    319,                                                /* lineNo */
    5,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo gu_emlrtRTEI = {
    320,                                                /* lineNo */
    5,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo hu_emlrtRTEI = {
    368,                                                /* lineNo */
    15,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo iu_emlrtRTEI = {
    382,                                                /* lineNo */
    5,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo ju_emlrtRTEI = {
    368,                                                /* lineNo */
    14,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo ku_emlrtRTEI = {
    387,                                                /* lineNo */
    9,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo lu_emlrtRTEI = {
    368,                                                /* lineNo */
    5,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo mu_emlrtRTEI = {
    372,                                                /* lineNo */
    9,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo nu_emlrtRTEI = {
    393,                                                /* lineNo */
    14,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo ou_emlrtRTEI = {
    393,                                                /* lineNo */
    29,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo pu_emlrtRTEI = {
    393,                                                /* lineNo */
    1,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo qu_emlrtRTEI = {
    400,                                                /* lineNo */
    5,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo ru_emlrtRTEI = {
    406,                                                /* lineNo */
    10,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo su_emlrtRTEI = {
    413,                                                /* lineNo */
    5,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo tu_emlrtRTEI = {
    414,                                                /* lineNo */
    5,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo uu_emlrtRTEI = {
    406,                                                /* lineNo */
    30,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo vu_emlrtRTEI = {
    424,                                                /* lineNo */
    13,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo wu_emlrtRTEI = {
    1,                                                  /* lineNo */
    20,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo xu_emlrtRTEI = {
    426,                                                /* lineNo */
    13,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo yu_emlrtRTEI = {
    444,                                                /* lineNo */
    9,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo av_emlrtRTEI = {
    434,                                                /* lineNo */
    24,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo bv_emlrtRTEI = {
    544,                                                /* lineNo */
    23,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo cv_emlrtRTEI = {
    509,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo dv_emlrtRTEI = {
    544,                                                /* lineNo */
    34,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo ev_emlrtRTEI = {
    541,                                                /* lineNo */
    23,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo fv_emlrtRTEI = {
    470,                                                /* lineNo */
    42,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo gv_emlrtRTEI = {
    513,                                                /* lineNo */
    20,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo hv_emlrtRTEI = {
    545,                                                /* lineNo */
    26,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo iv_emlrtRTEI = {
    475,                                                /* lineNo */
    24,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo jv_emlrtRTEI = {
    513,                                                /* lineNo */
    13,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo kv_emlrtRTEI = {
    541,                                                /* lineNo */
    35,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo lv_emlrtRTEI = {
    547,                                                /* lineNo */
    20,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo mv_emlrtRTEI = {
    475,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo nv_emlrtRTEI = {
    515,                                                /* lineNo */
    13,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo ov_emlrtRTEI = {
    555,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo pv_emlrtRTEI = {
    542,                                                /* lineNo */
    26,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo qv_emlrtRTEI = {
    556,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo rv_emlrtRTEI = {
    492,                                                /* lineNo */
    32,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo sv_emlrtRTEI = {
    518,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo tv_emlrtRTEI = {
    492,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo uv_emlrtRTEI = {
    572,                                                /* lineNo */
    13,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo vv_emlrtRTEI = {
    490,                                                /* lineNo */
    32,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo wv_emlrtRTEI = {
    577,                                                /* lineNo */
    23,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo xv_emlrtRTEI = {
    583,                                                /* lineNo */
    13,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo yv_emlrtRTEI = {
    490,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo aw_emlrtRTEI = {
    495,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo bw_emlrtRTEI = {
    522,                                                /* lineNo */
    24,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo cw_emlrtRTEI = {
    533,                                                /* lineNo */
    31,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo dw_emlrtRTEI = {
    498,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo ew_emlrtRTEI = {
    522,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo fw_emlrtRTEI = {
    589,                                                /* lineNo */
    13,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo gw_emlrtRTEI = {
    525,                                                /* lineNo */
    25,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo hw_emlrtRTEI = {
    597,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo iw_emlrtRTEI = {
    595,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo jw_emlrtRTEI = {
    501,                                                /* lineNo */
    28,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo kw_emlrtRTEI = {
    501,                                                /* lineNo */
    25,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo lw_emlrtRTEI = {
    612,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo mw_emlrtRTEI = {
    731,                                                /* lineNo */
    38,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo nw_emlrtRTEI = {
    504,                                                /* lineNo */
    29,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo ow_emlrtRTEI = {
    628,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo pw_emlrtRTEI = {
    732,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo qw_emlrtRTEI = {
    755,                                                /* lineNo */
    13,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo rw_emlrtRTEI = {
    657,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo sw_emlrtRTEI = {
    749,                                                /* lineNo */
    34,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo tw_emlrtRTEI = {
    749,                                                /* lineNo */
    27,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo uw_emlrtRTEI = {
    749,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo vw_emlrtRTEI = {
    649,                                                /* lineNo */
    27,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo ww_emlrtRTEI = {
    700,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo xw_emlrtRTEI = {
    706,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo yw_emlrtRTEI = {
    742,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo ax_emlrtRTEI = {
    707,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo bx_emlrtRTEI = {
    725,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo cx_emlrtRTEI = {
    744,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo dx_emlrtRTEI = {
    722,                                                /* lineNo */
    21,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo ex_emlrtRTEI = {
    745,                                                /* lineNo */
    26,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo fx_emlrtRTEI = {
    723,                                                /* lineNo */
    26,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo gx_emlrtRTEI = {
    273,                                                /* lineNo */
    9,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo hx_emlrtRTEI = {
    398,                                                /* lineNo */
    5,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo ix_emlrtRTEI = {
    451,                                                /* lineNo */
    9,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo jx_emlrtRTEI = {
    496,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo kx_emlrtRTEI = {
    533,                                                /* lineNo */
    17,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo lx_emlrtRTEI = {
    542,                                                /* lineNo */
    20,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo mx_emlrtRTEI = {
    350,                                                /* lineNo */
    1,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo nx_emlrtRTEI = {
    426,                                                /* lineNo */
    18,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo ox_emlrtRTEI = {
    436,                                                /* lineNo */
    24,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo px_emlrtRTEI = {
    541,                                                /* lineNo */
    26,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo qx_emlrtRTEI = {
    541,                                                /* lineNo */
    38,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo rx_emlrtRTEI = {
    542,                                                /* lineNo */
    29,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo sx_emlrtRTEI = {
    490,                                                /* lineNo */
    34,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo tx_emlrtRTEI = {
    739,                                                /* lineNo */
    32,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo ux_emlrtRTEI = {
    740,                                                /* lineNo */
    31,                                                 /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRTEInfo vx_emlrtRTEI = {
    393,                                                /* lineNo */
    6,                                                  /* colNo */
    "FSMbsb",                                           /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pName */
};

static emlrtRSInfo inb_emlrtRSI = {
    412,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo jnb_emlrtRSI = {
    553,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo nnb_emlrtRSI = {
    379,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo rnb_emlrtRSI = {
    410,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo snb_emlrtRSI = {
    551,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo tnb_emlrtRSI = {
    254,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo pob_emlrtRSI = {
    340,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo ppb_emlrtRSI = {
    765,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

static emlrtRSInfo qpb_emlrtRSI = {
    764,                                                /* lineNo */
    "FSMbsb",                                           /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\multivariate\\FSMbsb.m" /* pathName */
};

/* Function Declarations */
static const mxArray *bb_emlrt_marshallOut(const emlrtStack *sp,
                                           const char_T u[67]);

/* Function Definitions */
static const mxArray *bb_emlrt_marshallOut(const emlrtStack *sp,
                                           const char_T u[67])
{
  static const int32_T b_iv[2] = {1, 67};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &b_iv[0]);
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
  emxArray_int32_T *r2;
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
  int32_T b_iv[2];
  int32_T b_tmp_size[2];
  int32_T b_ym[2];
  int32_T tmp_size[2];
  int32_T b_i;
  int32_T c_bsbsteps;
  int32_T c_size;
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
  emxInit_boolean_T(sp, &bsbT, 1, &xt_emlrtRTEI, true);
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
  emxEnsureCapacity_boolean_T(sp, bsbT, i, &ut_emlrtRTEI);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[i] = (bsb->data[i] == 0.0);
  }
  emxInit_real_T(sp, &Yb, 2, &vu_emlrtRTEI, true);
  emxInit_real_T(sp, &b_Y, 2, &ru_emlrtRTEI, true);
  st.site = &udb_emlrtRSI;
  if (b_ifWhileCond(&st, bsbT)) {
    Ra = true;
    nwhile = 1;
    while (Ra && (nwhile < 100)) {
      /*  Extract a random sample of size v+1 */
      st.site = &tdb_emlrtRSI;
      randsample(&st, n, (real_T)v + 1.0, bsb);
      /*  Check if the var-cov matrix of the random sample is full (i.e =v) */
      st.site = &sdb_emlrtRSI;
      loop_ub = Y->size[1];
      i = b_Y->size[0] * b_Y->size[1];
      b_Y->size[0] = bsb->size[0];
      b_Y->size[1] = Y->size[1];
      emxEnsureCapacity_real_T(&st, b_Y, i, &vt_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        irank = bsb->size[0];
        for (k = 0; k < irank; k++) {
          partialTrueCount = (int32_T)bsb->data[k];
          if ((partialTrueCount < 1) || (partialTrueCount > Y->size[0])) {
            emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1, Y->size[0],
                                          &cr_emlrtBCI, &st);
          }
          b_Y->data[k + b_Y->size[0] * i] =
              Y->data[(partialTrueCount + Y->size[0] * i) - 1];
        }
      }
      b_st.site = &sdb_emlrtRSI;
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
      st.site = &tnb_emlrtRSI;
      b_disp(&st, e_emlrt_marshallOut(&st, b_cv),
             y_emlrt_marshallOut(&st, cv10), &db_emlrtMCI);
    }
  }
  emxInit_real_T(sp, &ym, 2, &yu_emlrtRTEI, true);
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
    emxEnsureCapacity_real_T(sp, ym, i, &hd_emlrtRTEI);
    loop_ub = Y->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      ym->data[i] = (real_T)i + 1.0;
    }
  }
  emxInit_real_T(sp, &seq, 1, &gx_emlrtRTEI, true);
  i = seq->size[0];
  seq->size[0] = ym->size[1];
  emxEnsureCapacity_real_T(sp, seq, i, &wt_emlrtRTEI);
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
  emxEnsureCapacity_boolean_T(sp, bsbT, i, &xt_emlrtRTEI);
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[i] = false;
  }
  emxInit_int32_T(sp, &ii, 1, &dm_emlrtRTEI, true);
  i = ii->size[0];
  ii->size[0] = bsb->size[0];
  emxEnsureCapacity_int32_T(sp, ii, i, &yt_emlrtRTEI);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    k = (int32_T)bsb->data[i];
    if ((k < 1) || (k > Y->size[0])) {
      emlrtDynamicBoundsCheckR2012b(k, 1, Y->size[0], &dr_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    ii->data[i] = k;
  }
  loop_ub = ii->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[ii->data[i] - 1] = true;
  }
  emxInit_real_T(sp, &S, 2, &au_emlrtRTEI, true);
  /*  Initialization for Matlab coder */
  rankgap = 0.0;
  i = S->size[0] * S->size[1];
  S->size[0] = Y->size[1];
  S->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(sp, S, i, &au_emlrtRTEI);
  loop_ub = Y->size[1] * Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    S->data[i] = 0.0;
  }
  emxInit_real_T(sp, &meoldbsb, 2, &bu_emlrtRTEI, true);
  i = meoldbsb->size[0] * meoldbsb->size[1];
  meoldbsb->size[0] = 1;
  meoldbsb->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(sp, meoldbsb, i, &bu_emlrtRTEI);
  loop_ub = Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    meoldbsb->data[i] = 0.0;
  }
  emxInit_boolean_T(sp, &oldbsbT, 1, &cu_emlrtRTEI, true);
  i = oldbsbT->size[0];
  oldbsbT->size[0] = bsbT->size[0];
  emxEnsureCapacity_boolean_T(sp, oldbsbT, i, &cu_emlrtRTEI);
  loop_ub = bsbT->size[0];
  for (i = 0; i < loop_ub; i++) {
    oldbsbT->data[i] = bsbT->data[i];
  }
  emxInit_int32_T(sp, &bsbr, 1, &du_emlrtRTEI, true);
  i = bsbr->size[0];
  bsbr->size[0] = Y->size[0];
  emxEnsureCapacity_int32_T(sp, bsbr, i, &du_emlrtRTEI);
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbr->data[i] = 0;
  }
  emxInit_real_T(sp, &unitout, 1, &eu_emlrtRTEI, true);
  i = unitout->size[0];
  unitout->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(sp, unitout, i, &eu_emlrtRTEI);
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    unitout->data[i] = 0.0;
  }
  emxInit_boolean_T(sp, &bsbriniT, 1, &fu_emlrtRTEI, true);
  i = bsbriniT->size[0];
  bsbriniT->size[0] = bsbT->size[0];
  emxEnsureCapacity_boolean_T(sp, bsbriniT, i, &fu_emlrtRTEI);
  loop_ub = bsbT->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbriniT->data[i] = bsbT->data[i];
  }
  emxInit_uint32_T(sp, &bsbrini, 1, &gu_emlrtRTEI, true);
  i = bsbrini->size[0];
  bsbrini->size[0] = Y->size[0];
  emxEnsureCapacity_uint32_T(sp, bsbrini, i, &gu_emlrtRTEI);
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbrini->data[i] = 0U;
  }
  ini0 = bsb->size[0];
  /*  check init */
  init1 = varargin_4;
  if (varargin_4 < (real_T)Y->size[1] + 1.0) {
    st.site = &rdb_emlrtRSI;
    b_st.site = &aw_emlrtRSI;
    c_st.site = &ynb_emlrtRSI;
    d_st.site = &xnb_emlrtRSI;
    e_st.site = &oob_emlrtRSI;
    g_emlrt_marshallIn(&c_st,
                       d_feval(&c_st, g_emlrt_marshallOut(&c_st, b_cv1),
                               i_emlrt_marshallOut(1.0),
                               h_emlrt_marshallOut(&d_st, b_cv2),
                               w_emlrt_marshallOut(&e_st, cv12), &cb_emlrtMCI),
                       "<output of feval>");
    init1 = (real_T)Y->size[1] + 1.0;
  } else if (varargin_4 < bsb->size[0]) {
    st.site = &pob_emlrtRSI;
    disp(&st, ab_emlrt_marshallOut(&st, cv11), &eb_emlrtMCI);
    init1 = bsb->size[0];
  } else if (varargin_4 >= Y->size[0]) {
    st.site = &qdb_emlrtRSI;
    b_st.site = &aw_emlrtRSI;
    c_st.site = &ynb_emlrtRSI;
    d_st.site = &xnb_emlrtRSI;
    e_st.site = &oob_emlrtRSI;
    g_emlrt_marshallIn(&c_st,
                       d_feval(&c_st, g_emlrt_marshallOut(&c_st, b_cv1),
                               i_emlrt_marshallOut(1.0),
                               h_emlrt_marshallOut(&d_st, b_cv2),
                               x_emlrt_marshallOut(&e_st, cv13), &cb_emlrtMCI),
                       "<output of feval>");
    init1 = (real_T)Y->size[0] - 1.0;
  }
  /*  Matrix BB will contain the units forming subset in each step (or in */
  /*  selected steps) of the forward search. The first column contains */
  /*  information about units forming subset at step init1. */
  emxInit_real_T(sp, &MD, 1, &kx_emlrtRTEI, true);
  emxInit_real_T(sp, &bsbsteps, 2, &mx_emlrtRTEI, true);
  if (varargin_2 == 0.0) {
    st.site = &pdb_emlrtRSI;
    b_st.site = &fd_emlrtRSI;
    if (muDoubleScalarIsNaN(init1)) {
      i = ym->size[0] * ym->size[1];
      ym->size[0] = 1;
      ym->size[1] = 1;
      emxEnsureCapacity_real_T(&b_st, ym, i, &hu_emlrtRTEI);
      ym->data[0] = rtNaN;
    } else if (Y->size[0] < init1) {
      ym->size[0] = 1;
      ym->size[1] = 0;
    } else if (muDoubleScalarIsInf(init1) && (init1 == Y->size[0])) {
      i = ym->size[0] * ym->size[1];
      ym->size[0] = 1;
      ym->size[1] = 1;
      emxEnsureCapacity_real_T(&b_st, ym, i, &hu_emlrtRTEI);
      ym->data[0] = rtNaN;
    } else if (muDoubleScalarFloor(init1) == init1) {
      i = ym->size[0] * ym->size[1];
      ym->size[0] = 1;
      ym->size[1] = (int32_T)((real_T)Y->size[0] - init1) + 1;
      emxEnsureCapacity_real_T(&b_st, ym, i, &hu_emlrtRTEI);
      loop_ub = (int32_T)((real_T)Y->size[0] - init1);
      for (i = 0; i <= loop_ub; i++) {
        ym->data[i] = init1 + (real_T)i;
      }
    } else {
      c_st.site = &gd_emlrtRSI;
      eml_float_colon(&c_st, init1, Y->size[0], ym);
    }
    i = MD->size[0];
    MD->size[0] = ym->size[1];
    emxEnsureCapacity_real_T(sp, MD, i, &ju_emlrtRTEI);
    loop_ub = ym->size[1];
    for (i = 0; i < loop_ub; i++) {
      MD->data[i] = ym->data[i];
    }
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = ym->size[1];
    bsbsteps->size[1] = 1;
    emxEnsureCapacity_real_T(sp, bsbsteps, i, &lu_emlrtRTEI);
    loop_ub = ym->size[1];
    for (i = 0; i < loop_ub; i++) {
      bsbsteps->data[i] = MD->data[i];
    }
    i = BB->size[0] * BB->size[1];
    BB->size[0] = Y->size[0];
    emxEnsureCapacity_real_T(sp, BB, i, &mu_emlrtRTEI);
    a = ((real_T)Y->size[0] - init1) + 1.0;
    if (!(a >= 0.0)) {
      emlrtNonNegativeCheckR2012b(a, &fc_emlrtDCI, (emlrtCTX)sp);
    }
    if (a != (int32_T)muDoubleScalarFloor(a)) {
      emlrtIntegerCheckR2012b(a, &ec_emlrtDCI, (emlrtCTX)sp);
    }
    i = BB->size[0] * BB->size[1];
    BB->size[1] = (int32_T)a;
    emxEnsureCapacity_real_T(sp, BB, i, &mu_emlrtRTEI);
    a = ((real_T)Y->size[0] - init1) + 1.0;
    if (!(a >= 0.0)) {
      emlrtNonNegativeCheckR2012b(a, &hc_emlrtDCI, (emlrtCTX)sp);
    }
    if (a != (int32_T)muDoubleScalarFloor(a)) {
      emlrtIntegerCheckR2012b(a, &gc_emlrtDCI, (emlrtCTX)sp);
    }
    loop_ub = Y->size[0] * (int32_T)a;
    for (i = 0; i < loop_ub; i++) {
      BB->data[i] = rtNaN;
    }
  } else {
    if (varargin_2 < init1) {
      st.site = &nnb_emlrtRSI;
      b_disp(&st, c_emlrt_marshallOut(&st, b_cv3),
             bb_emlrt_marshallOut(&st, b_cv4), &fb_emlrtMCI);
    }
    trueCount = 0;
    if (varargin_2 >= init1) {
      trueCount = 1;
    }
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = trueCount;
    emxEnsureCapacity_real_T(sp, bsbsteps, i, &iu_emlrtRTEI);
    for (i = 0; i < trueCount; i++) {
      bsbsteps->data[0] = varargin_2;
    }
    irank = (trueCount != 0);
    i = BB->size[0] * BB->size[1];
    BB->size[0] = Y->size[0];
    BB->size[1] = irank;
    emxEnsureCapacity_real_T(sp, BB, i, &ku_emlrtRTEI);
    loop_ub = Y->size[0] * irank;
    for (i = 0; i < loop_ub; i++) {
      BB->data[i] = rtNaN;
    }
  }
  /*   Un is a Matrix whose 2nd column:11th col contain the unit(s) just */
  /*   included. */
  st.site = &odb_emlrtRSI;
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
    ym->size[1] =
        (int32_T)muDoubleScalarFloor((real_T)Y->size[0] - (init1 + 1.0)) + 1;
    emxEnsureCapacity_real_T(&b_st, ym, i, &hd_emlrtRTEI);
    loop_ub = (int32_T)muDoubleScalarFloor((real_T)Y->size[0] - (init1 + 1.0));
    for (i = 0; i <= loop_ub; i++) {
      ym->data[i] = (init1 + 1.0) + (real_T)i;
    }
  } else {
    c_st.site = &gd_emlrtRSI;
    eml_float_colon(&c_st, init1 + 1.0, Y->size[0], ym);
  }
  a = (real_T)Y->size[0] - init1;
  if (!(a >= 0.0)) {
    emlrtNonNegativeCheckR2012b(a, &jc_emlrtDCI, (emlrtCTX)sp);
  }
  if (a != (int32_T)muDoubleScalarFloor(a)) {
    emlrtIntegerCheckR2012b(a, &ic_emlrtDCI, (emlrtCTX)sp);
  }
  i = MD->size[0];
  MD->size[0] = ym->size[1];
  emxEnsureCapacity_real_T(sp, MD, i, &nu_emlrtRTEI);
  loop_ub = ym->size[1];
  for (i = 0; i < loop_ub; i++) {
    MD->data[i] = ym->data[i];
  }
  emxInit_real_T(sp, &r, 2, &ou_emlrtRTEI, true);
  i = r->size[0] * r->size[1];
  r->size[0] = (int32_T)a;
  r->size[1] = 10;
  emxEnsureCapacity_real_T(sp, r, i, &ou_emlrtRTEI);
  loop_ub = (int32_T)a * 10;
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = rtNaN;
  }
  emxInit_real_T(sp, &r1, 2, &vx_emlrtRTEI, true);
  st.site = &odb_emlrtRSI;
  b_cat(&st, MD, r, r1);
  i = Un->size[0] * Un->size[1];
  Un->size[0] = r1->size[0];
  Un->size[1] = 11;
  emxEnsureCapacity_real_T(sp, Un, i, &pu_emlrtRTEI);
  loop_ub = r1->size[0] * 11;
  emxFree_real_T(&r);
  for (i = 0; i < loop_ub; i++) {
    Un->data[i] = r1->data[i];
  }
  emxFree_real_T(&r1);
  emxInit_int32_T(sp, &unit, 1, &hx_emlrtRTEI, true);
  /*  unit is the vector which will contain the units which enter subset at each
   */
  /*  step. It is initialized as a vector of zeros */
  i = unit->size[0];
  unit->size[0] = bsb->size[0];
  emxEnsureCapacity_int32_T(sp, unit, i, &qu_emlrtRTEI);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    unit->data[i] = 0;
  }
  lunit = bsb->size[0];
  /*  If the subset Y(bsb,:) is not full rank or a column is constant, then we
   */
  /*  return as output an empty structure. */
  st.site = &ndb_emlrtRSI;
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    k = (int32_T)bsb->data[i];
    if ((k < 1) || (k > Y->size[0])) {
      emlrtDynamicBoundsCheckR2012b(k, 1, Y->size[0], &er_emlrtBCI, &st);
    }
  }
  loop_ub = Y->size[1];
  i = b_Y->size[0] * b_Y->size[1];
  b_Y->size[0] = bsb->size[0];
  b_Y->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(&st, b_Y, i, &ru_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    irank = bsb->size[0];
    for (k = 0; k < irank; k++) {
      b_Y->data[k + b_Y->size[0] * i] =
          Y->data[((int32_T)bsb->data[k] + Y->size[0] * i) - 1];
    }
  }
  b_st.site = &mc_emlrtRSI;
  irank = local_rank(&b_st, b_Y);
  emxInit_real_T(sp, &Ym, 2, &ix_emlrtRTEI, true);
  emxInit_real_T(sp, &mi, 2, &mv_emlrtRTEI, true);
  emxInit_real_T(sp, &mibsbr, 2, &yv_emlrtRTEI, true);
  emxInit_real_T(sp, &zi, 2, &aw_emlrtRTEI, true);
  emxInit_real_T(sp, &Szi, 1, &jx_emlrtRTEI, true);
  emxInit_real_T(sp, &R, 2, &lx_emlrtRTEI, true);
  emxInit_boolean_T(sp, &MDltminT, 1, &fw_emlrtRTEI, true);
  emxInit_boolean_T(sp, &MDltminbsb, 1, &iw_emlrtRTEI, true);
  emxInit_int32_T(sp, &r2, 1, &nx_emlrtRTEI, true);
  emxInit_int32_T(sp, &r3, 1, &ox_emlrtRTEI, true);
  emxInit_int32_T(sp, &r4, 1, &px_emlrtRTEI, true);
  emxInit_int32_T(sp, &r5, 1, &qx_emlrtRTEI, true);
  emxInit_int32_T(sp, &r6, 1, &rx_emlrtRTEI, true);
  emxInit_int32_T(sp, &r7, 1, &sx_emlrtRTEI, true);
  emxInit_int32_T(sp, &r8, 1, &tx_emlrtRTEI, true);
  emxInit_int32_T(sp, &r9, 1, &ux_emlrtRTEI, true);
  guard1 = false;
  if (irank < v) {
    guard1 = true;
  } else {
    st.site = &ndb_emlrtRSI;
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      k = (int32_T)bsb->data[i];
      if ((k < 1) || (k > Y->size[0])) {
        emlrtDynamicBoundsCheckR2012b(k, 1, Y->size[0], &fr_emlrtBCI, &st);
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
        mibsbr->data[nwhile] =
            Y->data[((int32_T)bsb->data[0] + Y->size[0] * nwhile) - 1];
        j_st.site = &qb_emlrtRSI;
        if ((2 <= irank) && (irank > 2147483646)) {
          k_st.site = &hb_emlrtRSI;
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
    st.site = &ndb_emlrtRSI;
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      k = (int32_T)bsb->data[i];
      if ((k < 1) || (k > Y->size[0])) {
        emlrtDynamicBoundsCheckR2012b(k, 1, Y->size[0], &gr_emlrtBCI, &st);
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
        ym->data[nwhile] =
            Y->data[((int32_T)bsb->data[0] + Y->size[0] * nwhile) - 1];
        j_st.site = &qb_emlrtRSI;
        if ((2 <= irank) && (irank > 2147483646)) {
          k_st.site = &hb_emlrtRSI;
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
    b_iv[0] = (*(int32_T(*)[2])ym->size)[0];
    b_iv[1] = (*(int32_T(*)[2])ym->size)[1];
    emlrtSizeEqCheckNDR2012b(&b_ym[0], &b_iv[0], &bc_emlrtECI, (emlrtCTX)sp);
    st.site = &ndb_emlrtRSI;
    i = mibsbr->size[0] * mibsbr->size[1];
    mibsbr->size[0] = 1;
    emxEnsureCapacity_real_T(&st, mibsbr, i, &uu_emlrtRTEI);
    loop_ub = mibsbr->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      mibsbr->data[i] -= ym->data[i];
    }
    b_st.site = &sb_emlrtRSI;
    c_st.site = &tb_emlrtRSI;
    f_st.site = &ub_emlrtRSI;
    if (mibsbr->size[1] < 1) {
      emlrtErrorWithMessageIdR2018a(
          &f_st, &mb_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }
    g_st.site = &kt_emlrtRSI;
    h_st.site = &lt_emlrtRSI;
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
        ksor = mibsbr->data[0];
      } else {
        i_st.site = &mt_emlrtRSI;
        ksor = mibsbr->data[idx - 1];
        nwhile = idx + 1;
        j_st.site = &pt_emlrtRSI;
        if ((idx + 1 <= mibsbr->size[1]) && (mibsbr->size[1] > 2147483646)) {
          k_st.site = &hb_emlrtRSI;
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
          emxEnsureCapacity_real_T(sp, Yb, i, &vu_emlrtRTEI);
          for (i = 0; i < loop_ub; i++) {
            irank = bsb->size[0];
            for (k = 0; k < irank; k++) {
              if (bsb->data[k] != (int32_T)muDoubleScalarFloor(bsb->data[k])) {
                emlrtIntegerCheckR2012b(bsb->data[k], &kc_emlrtDCI,
                                        (emlrtCTX)sp);
              }
              partialTrueCount = (int32_T)bsb->data[k];
              if ((partialTrueCount < 1) || (partialTrueCount > Y->size[0])) {
                emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1, Y->size[0],
                                              &hr_emlrtBCI, (emlrtCTX)sp);
              }
              Yb->data[k + Yb->size[0] * i] =
                  Y->data[(partialTrueCount + Y->size[0] * i) - 1];
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
          emxEnsureCapacity_int32_T(sp, r2, i, &wu_emlrtRTEI);
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
          emxEnsureCapacity_real_T(sp, Yb, i, &xu_emlrtRTEI);
          for (i = 0; i < loop_ub; i++) {
            irank = r2->size[0];
            for (k = 0; k < irank; k++) {
              if (r2->data[k] > Y->size[0]) {
                emlrtDynamicBoundsCheckR2012b(r2->data[k], 1, Y->size[0],
                                              &ir_emlrtBCI, (emlrtCTX)sp);
              }
              Yb->data[k + Yb->size[0] * i] =
                  Y->data[(r2->data[k] + Y->size[0] * i) - 1];
            }
          }
        }
        /*  If required, store units forming subset at each step */
        if (b_mm >= init1) {
          st.site = &mdb_emlrtRSI;
          b_st.site = &vdb_emlrtRSI;
          irank = bsbsteps->size[0] * bsbsteps->size[1];
          b_bsbsteps = *bsbsteps;
          c_bsbsteps = irank;
          b_bsbsteps.size = &c_bsbsteps;
          b_bsbsteps.numDimensions = 1;
          c_st.site = &wdb_emlrtRSI;
          do_vectors(&c_st, b_mm, &b_bsbsteps, (real_T *)&ksor, &trueCount,
                     (int32_T *)&irank, &nwhile, (int32_T *)&k,
                     &partialTrueCount);
          c_size = trueCount;
          for (i = 0; i < trueCount; i++) {
            b_c_data = (ksor == b_mm);
          }
          c_data.data = &b_c_data;
          c_data.size = &c_size;
          c_data.allocatedSize = 1;
          c_data.numDimensions = 1;
          c_data.canFreeData = false;
          st.site = &mdb_emlrtRSI;
          if (b_ifWhileCond(&st, &c_data)) {
            if (b_mm <= percn) {
              i = ii->size[0];
              ii->size[0] = bsb->size[0];
              emxEnsureCapacity_int32_T(sp, ii, i, &av_emlrtRTEI);
              loop_ub = bsb->size[0];
              for (i = 0; i < loop_ub; i++) {
                if (bsb->data[i] !=
                    (int32_T)muDoubleScalarFloor(bsb->data[i])) {
                  emlrtIntegerCheckR2012b(bsb->data[i], &lc_emlrtDCI,
                                          (emlrtCTX)sp);
                }
                k = (int32_T)bsb->data[i];
                if ((k < 1) || (k > BB->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i], 1,
                                                BB->size[0], &jr_emlrtBCI,
                                                (emlrtCTX)sp);
                }
                ii->data[i] = k - 1;
              }
              if (((int32_T)ij < 1) || ((int32_T)ij > BB->size[1])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)ij, 1, BB->size[1],
                                              &xq_emlrtBCI, (emlrtCTX)sp);
              }
              emlrtSubAssignSizeCheckR2012b(&ii->size[0], 1, &bsb->size[0], 1,
                                            &pc_emlrtECI, (emlrtCTX)sp);
              loop_ub = bsb->size[0];
              for (i = 0; i < loop_ub; i++) {
                BB->data[ii->data[i] + BB->size[0] * ((int32_T)ij - 1)] =
                    bsb->data[i];
              }
            } else {
              k = bsbT->size[0];
              for (b_i = 0; b_i < k; b_i++) {
                if (bsbT->data[b_i] && (b_i + 1 > BB->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, BB->size[0],
                                                &oq_emlrtBCI, (emlrtCTX)sp);
                }
              }
              if (((int32_T)ij < 1) || ((int32_T)ij > BB->size[1])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)ij, 1, BB->size[1],
                                              &yq_emlrtBCI, (emlrtCTX)sp);
              }
              k = bsbT->size[0];
              for (b_i = 0; b_i < k; b_i++) {
                if (bsbT->data[b_i] && (b_i + 1 > seq->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                                                &nq_emlrtBCI, (emlrtCTX)sp);
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
                                            &qc_emlrtECI, (emlrtCTX)sp);
              k = bsbT->size[0] - 1;
              trueCount = 0;
              for (b_i = 0; b_i <= k; b_i++) {
                if (bsbT->data[b_i]) {
                  trueCount++;
                }
              }
              i = r3->size[0];
              r3->size[0] = trueCount;
              emxEnsureCapacity_int32_T(sp, r3, i, &wu_emlrtRTEI);
              partialTrueCount = 0;
              for (b_i = 0; b_i <= k; b_i++) {
                if (bsbT->data[b_i]) {
                  r3->data[partialTrueCount] = b_i + 1;
                  partialTrueCount++;
                }
              }
              loop_ub = r3->size[0];
              for (i = 0; i < loop_ub; i++) {
                BB->data[(r3->data[i] + BB->size[0] * ((int32_T)ij - 1)) - 1] =
                    seq->data[r3->data[i] - 1];
              }
            }
            ij++;
          }
        }
        /*  Find vector of means inside subset */
        /*  Note that ym is a row vector */
        st.site = &ldb_emlrtRSI;
        b_st.site = &sm_emlrtRSI;
        c_st.site = &sd_emlrtRSI;
        b_combineVectorElements(&c_st, Yb, ym);
        i = ym->size[0] * ym->size[1];
        ym->size[0] = 1;
        emxEnsureCapacity_real_T(sp, ym, i, &yu_emlrtRTEI);
        loop_ub = ym->size[1] - 1;
        for (i = 0; i <= loop_ub; i++) {
          ym->data[i] /= b_mm;
        }
        /*  Ym = n-by-v matrix containing deviations from the means computed */
        /*  using units forming subset */
        /*  Ym=Y-one*ym; */
        st.site = &kdb_emlrtRSI;
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
              emxEnsureCapacity_boolean_T(sp, MDltminT, i, &fv_emlrtRTEI);
              loop_ub = bsbT->size[0];
              for (i = 0; i < loop_ub; i++) {
                MDltminT->data[i] = !bsbT->data[i];
              }
              if (oldbsbT->size[0] != MDltminT->size[0]) {
                emlrtSizeEqCheck1DR2012b(oldbsbT->size[0], MDltminT->size[0],
                                         &cc_emlrtECI, (emlrtCTX)sp);
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
              emxEnsureCapacity_real_T(sp, unitout, i, &wu_emlrtRTEI);
              partialTrueCount = 0;
              for (b_i = 0; b_i <= k; b_i++) {
                if (oldbsbT->data[b_i] && MDltminT->data[b_i]) {
                  if (b_i + 1 > seq->size[0]) {
                    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                                                  &rr_emlrtBCI, (emlrtCTX)sp);
                  }
                  unitout->data[partialTrueCount] = seq->data[b_i];
                  partialTrueCount++;
                }
              }
            }
            nwhile = unitout->size[0];
            st.site = &jdb_emlrtRSI;
            loop_ub = unitout->size[0];
            for (i = 0; i < loop_ub; i++) {
              if (unitout->data[i] !=
                  (int32_T)muDoubleScalarFloor(unitout->data[i])) {
                emlrtIntegerCheckR2012b(unitout->data[i], &nc_emlrtDCI, &st);
              }
              k = (int32_T)unitout->data[i];
              if ((k < 1) || (k > Y->size[0])) {
                emlrtDynamicBoundsCheckR2012b(k, 1, Y->size[0], &pr_emlrtBCI,
                                              &st);
              }
            }
            b_st.site = &sm_emlrtRSI;
            loop_ub = Y->size[1];
            i = b_Y->size[0] * b_Y->size[1];
            b_Y->size[0] = unitout->size[0];
            b_Y->size[1] = Y->size[1];
            emxEnsureCapacity_real_T(&b_st, b_Y, i, &iv_emlrtRTEI);
            for (i = 0; i < loop_ub; i++) {
              irank = unitout->size[0];
              for (k = 0; k < irank; k++) {
                b_Y->data[k + b_Y->size[0] * i] =
                    Y->data[((int32_T)unitout->data[k] + Y->size[0] * i) - 1];
              }
            }
            c_st.site = &sd_emlrtRSI;
            b_combineVectorElements(&c_st, b_Y, mi);
            i = mi->size[0] * mi->size[1];
            mi->size[0] = 1;
            emxEnsureCapacity_real_T(sp, mi, i, &mv_emlrtRTEI);
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
                                         &dc_emlrtECI, (emlrtCTX)sp);
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
              emxEnsureCapacity_int32_T(sp, r7, i, &wu_emlrtRTEI);
              partialTrueCount = 0;
              for (b_i = 0; b_i <= k; b_i++) {
                if (oldbsbT->data[b_i] && bsbT->data[b_i]) {
                  r7->data[partialTrueCount] = b_i + 1;
                  partialTrueCount++;
                }
              }
              st.site = &idb_emlrtRSI;
              loop_ub = r7->size[0];
              for (i = 0; i < loop_ub; i++) {
                if (r7->data[i] > Y->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(r7->data[i], 1, Y->size[0],
                                                &wr_emlrtBCI, &st);
                }
              }
              b_st.site = &sm_emlrtRSI;
              loop_ub = Y->size[1];
              i = b_Y->size[0] * b_Y->size[1];
              b_Y->size[0] = r7->size[0];
              b_Y->size[1] = Y->size[1];
              emxEnsureCapacity_real_T(&b_st, b_Y, i, &vv_emlrtRTEI);
              for (i = 0; i < loop_ub; i++) {
                irank = r7->size[0];
                for (k = 0; k < irank; k++) {
                  b_Y->data[k + b_Y->size[0] * i] =
                      Y->data[(r7->data[k] + Y->size[0] * i) - 1];
                }
              }
              c_st.site = &sd_emlrtRSI;
              b_combineVectorElements(&c_st, b_Y, mibsbr);
              i = mibsbr->size[0] * mibsbr->size[1];
              mibsbr->size[0] = 1;
              emxEnsureCapacity_real_T(sp, mibsbr, i, &yv_emlrtRTEI);
              ksor = (b_mm - 1.0) - (real_T)unitout->size[0];
              loop_ub = mibsbr->size[1] - 1;
              for (i = 0; i <= loop_ub; i++) {
                mibsbr->data[i] /= ksor;
              }
            } else {
              st.site = &hdb_emlrtRSI;
              loop_ub = bsbr->size[0];
              for (i = 0; i < loop_ub; i++) {
                k = bsbr->data[i];
                if ((k < 1) || (k > Y->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(k, 1, Y->size[0], &tr_emlrtBCI,
                                                &st);
                }
              }
              b_st.site = &sm_emlrtRSI;
              loop_ub = Y->size[1];
              i = b_Y->size[0] * b_Y->size[1];
              b_Y->size[0] = bsbr->size[0];
              b_Y->size[1] = Y->size[1];
              emxEnsureCapacity_real_T(&b_st, b_Y, i, &rv_emlrtRTEI);
              for (i = 0; i < loop_ub; i++) {
                irank = bsbr->size[0];
                for (k = 0; k < irank; k++) {
                  b_Y->data[k + b_Y->size[0] * i] =
                      Y->data[(bsbr->data[k] + Y->size[0] * i) - 1];
                }
              }
              c_st.site = &sd_emlrtRSI;
              b_combineVectorElements(&c_st, b_Y, mibsbr);
              i = mibsbr->size[0] * mibsbr->size[1];
              mibsbr->size[0] = 1;
              emxEnsureCapacity_real_T(sp, mibsbr, i, &tv_emlrtRTEI);
              ksor = (b_mm - 1.0) - (real_T)unitout->size[0];
              loop_ub = mibsbr->size[1] - 1;
              for (i = 0; i <= loop_ub; i++) {
                mibsbr->data[i] /= ksor;
              }
            }
            b_ym[0] = (*(int32_T(*)[2])mi->size)[0];
            b_ym[1] = (*(int32_T(*)[2])mi->size)[1];
            b_iv[0] = (*(int32_T(*)[2])mibsbr->size)[0];
            b_iv[1] = (*(int32_T(*)[2])mibsbr->size)[1];
            emlrtSizeEqCheckNDR2012b(&b_ym[0], &b_iv[0], &ec_emlrtECI,
                                     (emlrtCTX)sp);
            a = (real_T)unitout->size[0] *
                ((b_mm - 1.0) - (real_T)unitout->size[0]) / (b_mm - 1.0);
            st.site = &gdb_emlrtRSI;
            if (a < 0.0) {
              emlrtErrorWithMessageIdR2018a(
                  &st, &bc_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                  "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
            }
            a = muDoubleScalarSqrt(a);
            i = zi->size[0] * zi->size[1];
            zi->size[0] = 1;
            zi->size[1] = mi->size[1];
            emxEnsureCapacity_real_T(sp, zi, i, &aw_emlrtRTEI);
            loop_ub = mi->size[1];
            for (i = 0; i < loop_ub; i++) {
              zi->data[i] = a * (mi->data[i] - mibsbr->data[i]);
            }
            st.site = &fdb_emlrtRSI;
            b_st.site = &fb_emlrtRSI;
            d_dynamic_size_checks(&b_st, S, zi, S->size[1], zi->size[1]);
            b_st.site = &eb_emlrtRSI;
            c_mtimes(&b_st, S, zi, Szi);
            /*  S=S+(S*(zi')*zi*S)/(1-zi*S*(zi')); */
            st.site = &edb_emlrtRSI;
            b_st.site = &fb_emlrtRSI;
            e_dynamic_size_checks(&b_st, zi, Szi, zi->size[1], Szi->size[0]);
            ksor = d_mtimes(zi, Szi);
            i = R->size[0] * R->size[1];
            R->size[0] = Szi->size[0];
            R->size[1] = Szi->size[0];
            emxEnsureCapacity_real_T(sp, R, i, &dw_emlrtRTEI);
            loop_ub = Szi->size[0];
            for (i = 0; i < loop_ub; i++) {
              irank = Szi->size[0];
              for (k = 0; k < irank; k++) {
                R->data[k + R->size[0] * i] =
                    Szi->data[k] * Szi->data[i] / (1.0 - ksor);
              }
            }
            b_ym[0] = (*(int32_T(*)[2])S->size)[0];
            b_ym[1] = (*(int32_T(*)[2])S->size)[1];
            b_iv[0] = (*(int32_T(*)[2])R->size)[0];
            b_iv[1] = (*(int32_T(*)[2])R->size)[1];
            emlrtSizeEqCheckNDR2012b(&b_ym[0], &b_iv[0], &fc_emlrtECI,
                                     (emlrtCTX)sp);
            loop_ub = S->size[0] * S->size[1];
            for (i = 0; i < loop_ub; i++) {
              S->data[i] += R->data[i];
            }
            if (unitout->size[0] > 1) {
              i = unitout->size[0];
              for (b_i = 0; b_i < i; b_i++) {
                if (b_i + 1 > unitout->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, unitout->size[0],
                                                &as_emlrtBCI, (emlrtCTX)sp);
                }
                k = (int32_T)unitout->data[b_i];
                if ((k < 1) || (k > Y->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(k, 1, Y->size[0], &pq_emlrtBCI,
                                                (emlrtCTX)sp);
                }
                loop_ub = Y->size[1];
                k = zi->size[0] * zi->size[1];
                zi->size[0] = 1;
                zi->size[1] = Y->size[1];
                emxEnsureCapacity_real_T(sp, zi, k, &jw_emlrtRTEI);
                for (k = 0; k < loop_ub; k++) {
                  zi->data[k] =
                      Y->data[((int32_T)unitout->data[b_i] + Y->size[0] * k) -
                              1];
                }
                b_ym[0] = (*(int32_T(*)[2])zi->size)[0];
                b_ym[1] = (*(int32_T(*)[2])zi->size)[1];
                b_iv[0] = (*(int32_T(*)[2])mi->size)[0];
                b_iv[1] = (*(int32_T(*)[2])mi->size)[1];
                emlrtSizeEqCheckNDR2012b(&b_ym[0], &b_iv[0], &gc_emlrtECI,
                                         (emlrtCTX)sp);
                loop_ub = Y->size[1];
                k = zi->size[0] * zi->size[1];
                zi->size[0] = 1;
                zi->size[1] = Y->size[1];
                emxEnsureCapacity_real_T(sp, zi, k, &kw_emlrtRTEI);
                for (k = 0; k < loop_ub; k++) {
                  zi->data[k] =
                      Y->data[((int32_T)unitout->data[b_i] + Y->size[0] * k) -
                              1] -
                      mi->data[k];
                }
                st.site = &ddb_emlrtRSI;
                b_st.site = &fb_emlrtRSI;
                d_dynamic_size_checks(&b_st, S, zi, S->size[1], zi->size[1]);
                b_st.site = &eb_emlrtRSI;
                c_mtimes(&b_st, S, zi, Szi);
                /*  S=S+(S*(zi')*zi*S)/(1-zi*S*(zi')); */
                st.site = &cdb_emlrtRSI;
                b_st.site = &fb_emlrtRSI;
                e_dynamic_size_checks(&b_st, zi, Szi, zi->size[1],
                                      Szi->size[0]);
                ksor = d_mtimes(zi, Szi);
                k = R->size[0] * R->size[1];
                R->size[0] = Szi->size[0];
                R->size[1] = Szi->size[0];
                emxEnsureCapacity_real_T(sp, R, k, &nw_emlrtRTEI);
                loop_ub = Szi->size[0];
                for (k = 0; k < loop_ub; k++) {
                  irank = Szi->size[0];
                  for (partialTrueCount = 0; partialTrueCount < irank;
                       partialTrueCount++) {
                    R->data[partialTrueCount + R->size[0] * k] =
                        Szi->data[partialTrueCount] * Szi->data[k] /
                        (1.0 - ksor);
                  }
                }
                b_ym[0] = (*(int32_T(*)[2])S->size)[0];
                b_ym[1] = (*(int32_T(*)[2])S->size)[1];
                b_iv[0] = (*(int32_T(*)[2])R->size)[0];
                b_iv[1] = (*(int32_T(*)[2])R->size)[1];
                emlrtSizeEqCheckNDR2012b(&b_ym[0], &b_iv[0], &hc_emlrtECI,
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
            emxEnsureCapacity_real_T(sp, mibsbr, i, &cv_emlrtRTEI);
            loop_ub = meoldbsb->size[1];
            for (i = 0; i < loop_ub; i++) {
              mibsbr->data[i] = meoldbsb->data[i];
            }
          }
          /*  mi = mean of units entering subset */
          st.site = &bdb_emlrtRSI;
          loop_ub = unit->size[0];
          for (i = 0; i < loop_ub; i++) {
            k = unit->data[i];
            if ((k < 1) || (k > Y->size[0])) {
              emlrtDynamicBoundsCheckR2012b(k, 1, Y->size[0], &or_emlrtBCI,
                                            &st);
            }
          }
          b_st.site = &sm_emlrtRSI;
          loop_ub = Y->size[1];
          i = b_Y->size[0] * b_Y->size[1];
          b_Y->size[0] = unit->size[0];
          b_Y->size[1] = Y->size[1];
          emxEnsureCapacity_real_T(&b_st, b_Y, i, &gv_emlrtRTEI);
          for (i = 0; i < loop_ub; i++) {
            irank = unit->size[0];
            for (k = 0; k < irank; k++) {
              b_Y->data[k + b_Y->size[0] * i] =
                  Y->data[(unit->data[k] + Y->size[0] * i) - 1];
            }
          }
          c_st.site = &sd_emlrtRSI;
          b_combineVectorElements(&c_st, b_Y, mi);
          i = mi->size[0] * mi->size[1];
          mi->size[0] = 1;
          emxEnsureCapacity_real_T(sp, mi, i, &jv_emlrtRTEI);
          loop_ub = mi->size[1] - 1;
          for (i = 0; i <= loop_ub; i++) {
            mi->data[i] /= (real_T)lunit;
          }
          /*  zi=sqrt(kin*(mm-1-k)/(mm-1-k+kin))*(mi-mean(Y(bsbr,:),1)); */
          b_ym[0] = (*(int32_T(*)[2])mi->size)[0];
          b_ym[1] = (*(int32_T(*)[2])mi->size)[1];
          b_iv[0] = (*(int32_T(*)[2])mibsbr->size)[0];
          b_iv[1] = (*(int32_T(*)[2])mibsbr->size)[1];
          emlrtSizeEqCheckNDR2012b(&b_ym[0], &b_iv[0], &ic_emlrtECI,
                                   (emlrtCTX)sp);
          ksor = (b_mm - 1.0) - (real_T)nwhile;
          a = (real_T)lunit * ksor / (ksor + (real_T)lunit);
          st.site = &adb_emlrtRSI;
          if (a < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &st, &bc_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
          }
          a = muDoubleScalarSqrt(a);
          i = zi->size[0] * zi->size[1];
          zi->size[0] = 1;
          zi->size[1] = mi->size[1];
          emxEnsureCapacity_real_T(sp, zi, i, &nv_emlrtRTEI);
          loop_ub = mi->size[1];
          for (i = 0; i < loop_ub; i++) {
            zi->data[i] = a * (mi->data[i] - mibsbr->data[i]);
          }
          st.site = &ycb_emlrtRSI;
          b_st.site = &fb_emlrtRSI;
          d_dynamic_size_checks(&b_st, S, zi, S->size[1], zi->size[1]);
          b_st.site = &eb_emlrtRSI;
          c_mtimes(&b_st, S, zi, Szi);
          /*  S=S+(S*(zi')*zi*S)/(1-zi*S*(zi')); */
          st.site = &xcb_emlrtRSI;
          b_st.site = &fb_emlrtRSI;
          e_dynamic_size_checks(&b_st, zi, Szi, zi->size[1], Szi->size[0]);
          ksor = d_mtimes(zi, Szi);
          i = R->size[0] * R->size[1];
          R->size[0] = Szi->size[0];
          R->size[1] = Szi->size[0];
          emxEnsureCapacity_real_T(sp, R, i, &sv_emlrtRTEI);
          loop_ub = Szi->size[0];
          for (i = 0; i < loop_ub; i++) {
            irank = Szi->size[0];
            for (k = 0; k < irank; k++) {
              R->data[k + R->size[0] * i] =
                  Szi->data[k] * Szi->data[i] / (ksor + 1.0);
            }
          }
          b_ym[0] = (*(int32_T(*)[2])S->size)[0];
          b_ym[1] = (*(int32_T(*)[2])S->size)[1];
          b_iv[0] = (*(int32_T(*)[2])R->size)[0];
          b_iv[1] = (*(int32_T(*)[2])R->size)[1];
          emlrtSizeEqCheckNDR2012b(&b_ym[0], &b_iv[0], &jc_emlrtECI,
                                   (emlrtCTX)sp);
          loop_ub = S->size[0] * S->size[1];
          for (i = 0; i < loop_ub; i++) {
            S->data[i] -= R->data[i];
          }
          if (lunit > 1) {
            /* mi=mean(Y(unit,:),1); */
            for (b_i = 0; b_i < lunit; b_i++) {
              if (b_i + 1 > unit->size[0]) {
                emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, unit->size[0],
                                              &xr_emlrtBCI, (emlrtCTX)sp);
              }
              i = unit->data[b_i];
              if ((i < 1) || (i > Y->size[0])) {
                emlrtDynamicBoundsCheckR2012b(i, 1, Y->size[0], &qq_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              loop_ub = Y->size[1];
              i = zi->size[0] * zi->size[1];
              zi->size[0] = 1;
              zi->size[1] = Y->size[1];
              emxEnsureCapacity_real_T(sp, zi, i, &bw_emlrtRTEI);
              for (i = 0; i < loop_ub; i++) {
                zi->data[i] = Y->data[(unit->data[b_i] + Y->size[0] * i) - 1];
              }
              b_ym[0] = (*(int32_T(*)[2])zi->size)[0];
              b_ym[1] = (*(int32_T(*)[2])zi->size)[1];
              b_iv[0] = (*(int32_T(*)[2])mi->size)[0];
              b_iv[1] = (*(int32_T(*)[2])mi->size)[1];
              emlrtSizeEqCheckNDR2012b(&b_ym[0], &b_iv[0], &kc_emlrtECI,
                                       (emlrtCTX)sp);
              loop_ub = Y->size[1];
              i = zi->size[0] * zi->size[1];
              zi->size[0] = 1;
              zi->size[1] = Y->size[1];
              emxEnsureCapacity_real_T(sp, zi, i, &ew_emlrtRTEI);
              for (i = 0; i < loop_ub; i++) {
                zi->data[i] = Y->data[(unit->data[b_i] + Y->size[0] * i) - 1] -
                              mi->data[i];
              }
              st.site = &wcb_emlrtRSI;
              b_st.site = &fb_emlrtRSI;
              d_dynamic_size_checks(&b_st, S, zi, S->size[1], zi->size[1]);
              b_st.site = &eb_emlrtRSI;
              c_mtimes(&b_st, S, zi, Szi);
              /*  S=S-(S*(zi')*zi*S)/(1+zi*S*(zi')); */
              st.site = &vcb_emlrtRSI;
              b_st.site = &fb_emlrtRSI;
              e_dynamic_size_checks(&b_st, zi, Szi, zi->size[1], Szi->size[0]);
              ksor = d_mtimes(zi, Szi);
              i = R->size[0] * R->size[1];
              R->size[0] = Szi->size[0];
              R->size[1] = Szi->size[0];
              emxEnsureCapacity_real_T(sp, R, i, &gw_emlrtRTEI);
              loop_ub = Szi->size[0];
              for (i = 0; i < loop_ub; i++) {
                irank = Szi->size[0];
                for (k = 0; k < irank; k++) {
                  R->data[k + R->size[0] * i] =
                      Szi->data[k] * Szi->data[i] / (ksor + 1.0);
                }
              }
              b_ym[0] = (*(int32_T(*)[2])S->size)[0];
              b_ym[1] = (*(int32_T(*)[2])S->size)[1];
              b_iv[0] = (*(int32_T(*)[2])R->size)[0];
              b_iv[1] = (*(int32_T(*)[2])R->size)[1];
              emlrtSizeEqCheckNDR2012b(&b_ym[0], &b_iv[0], &lc_emlrtECI,
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
            st.site = &ucb_emlrtRSI;
            b_st.site = &fb_emlrtRSI;
            b_dynamic_size_checks(&b_st, Ym, S, Ym->size[1], S->size[0]);
            b_st.site = &eb_emlrtRSI;
            e_mtimes(&b_st, Ym, S, R);
            b_ym[0] = (*(int32_T(*)[2])R->size)[0];
            b_ym[1] = (*(int32_T(*)[2])R->size)[1];
            b_iv[0] = (*(int32_T(*)[2])Ym->size)[0];
            b_iv[1] = (*(int32_T(*)[2])Ym->size)[1];
            emlrtSizeEqCheckNDR2012b(&b_ym[0], &b_iv[0], &mc_emlrtECI,
                                     (emlrtCTX)sp);
            i = b_Y->size[0] * b_Y->size[1];
            b_Y->size[0] = R->size[0];
            b_Y->size[1] = R->size[1];
            emxEnsureCapacity_real_T(sp, b_Y, i, &cw_emlrtRTEI);
            loop_ub = R->size[0] * R->size[1];
            for (i = 0; i < loop_ub; i++) {
              b_Y->data[i] = R->data[i] * Ym->data[i];
            }
            st.site = &ucb_emlrtRSI;
            b_sum(&st, b_Y, MD);
            loop_ub = MD->size[0];
            for (i = 0; i < loop_ub; i++) {
              MD->data[i] *= b_mm - 1.0;
            }
          } else {
            st.site = &tcb_emlrtRSI;
            b_st.site = &fb_emlrtRSI;
            b_dynamic_size_checks(&b_st, Ym, S, Ym->size[1], S->size[0]);
            b_st.site = &eb_emlrtRSI;
            e_mtimes(&b_st, Ym, S, b_Y);
            st.site = &tcb_emlrtRSI;
            b_bsxfun(&st, b_Y, Ym, R);
            st.site = &tcb_emlrtRSI;
            b_sum(&st, R, MD);
            loop_ub = MD->size[0];
            for (i = 0; i < loop_ub; i++) {
              MD->data[i] *= b_mm - 1.0;
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
            i = r4->size[0];
            r4->size[0] = trueCount;
            emxEnsureCapacity_int32_T(sp, r4, i, &wu_emlrtRTEI);
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
            emxEnsureCapacity_real_T(sp, R, i, &ev_emlrtRTEI);
            for (i = 0; i < loop_ub; i++) {
              irank = r4->size[0];
              for (k = 0; k < irank; k++) {
                if (r4->data[k] > Ym->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(r4->data[k], 1, Ym->size[0],
                                                &mr_emlrtBCI, (emlrtCTX)sp);
                }
                R->data[k + R->size[0] * i] =
                    Ym->data[(r4->data[k] + Ym->size[0] * i) - 1];
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
            emxEnsureCapacity_int32_T(sp, r5, i, &wu_emlrtRTEI);
            partialTrueCount = 0;
            for (b_i = 0; b_i <= k; b_i++) {
              if (bsbT->data[b_i]) {
                r5->data[partialTrueCount] = b_i + 1;
                partialTrueCount++;
              }
            }
            st.site = &scb_emlrtRSI;
            loop_ub = Ym->size[1];
            i = Yb->size[0] * Yb->size[1];
            Yb->size[0] = r5->size[0];
            Yb->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(&st, Yb, i, &kv_emlrtRTEI);
            for (i = 0; i < loop_ub; i++) {
              irank = r5->size[0];
              for (k = 0; k < irank; k++) {
                if (r5->data[k] > Ym->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(r5->data[k], 1, Ym->size[0],
                                                &qr_emlrtBCI, &st);
                }
                Yb->data[k + Yb->size[0] * i] =
                    Ym->data[(r5->data[k] + Ym->size[0] * i) - 1];
              }
            }
            b_st.site = &fb_emlrtRSI;
            b_dynamic_size_checks(&b_st, R, Yb, r4->size[0], r5->size[0]);
            b_st.site = &eb_emlrtRSI;
            f_mtimes(&b_st, R, Yb, b_Y);
            st.site = &scb_emlrtRSI;
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
            emxEnsureCapacity_int32_T(sp, r6, i, &wu_emlrtRTEI);
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
            emxEnsureCapacity_real_T(sp, b_Y, i, &pv_emlrtRTEI);
            for (i = 0; i < loop_ub; i++) {
              irank = r6->size[0];
              for (k = 0; k < irank; k++) {
                if (r6->data[k] > Ym->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(r6->data[k], 1, Ym->size[0],
                                                &sr_emlrtBCI, (emlrtCTX)sp);
                }
                b_Y->data[k + b_Y->size[0] * i] =
                    Ym->data[(r6->data[k] + Ym->size[0] * i) - 1];
              }
            }
            st.site = &rcb_emlrtRSI;
            qr(&st, b_Y, Yb, R);
          } else {
            loop_ub = Ym->size[1];
            i = R->size[0] * R->size[1];
            R->size[0] = bsb->size[0];
            R->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(sp, R, i, &bv_emlrtRTEI);
            for (i = 0; i < loop_ub; i++) {
              irank = bsb->size[0];
              for (k = 0; k < irank; k++) {
                if (bsb->data[k] !=
                    (int32_T)muDoubleScalarFloor(bsb->data[k])) {
                  emlrtIntegerCheckR2012b(bsb->data[k], &mc_emlrtDCI,
                                          (emlrtCTX)sp);
                }
                partialTrueCount = (int32_T)bsb->data[k];
                if ((partialTrueCount < 1) ||
                    (partialTrueCount > Ym->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(partialTrueCount, 1,
                                                Ym->size[0], &kr_emlrtBCI,
                                                (emlrtCTX)sp);
                }
                R->data[k + R->size[0] * i] =
                    Ym->data[(partialTrueCount + Ym->size[0] * i) - 1];
              }
            }
            st.site = &qcb_emlrtRSI;
            loop_ub = Ym->size[1];
            i = Yb->size[0] * Yb->size[1];
            Yb->size[0] = bsb->size[0];
            Yb->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(&st, Yb, i, &dv_emlrtRTEI);
            for (i = 0; i < loop_ub; i++) {
              irank = bsb->size[0];
              for (k = 0; k < irank; k++) {
                partialTrueCount = (int32_T)bsb->data[k];
                if ((partialTrueCount < 1) ||
                    (partialTrueCount > Ym->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[k], 1,
                                                Ym->size[0], &lr_emlrtBCI, &st);
                }
                Yb->data[k + Yb->size[0] * i] =
                    Ym->data[(partialTrueCount + Ym->size[0] * i) - 1];
              }
            }
            b_st.site = &fb_emlrtRSI;
            b_dynamic_size_checks(&b_st, R, Yb, bsb->size[0], bsb->size[0]);
            b_st.site = &eb_emlrtRSI;
            f_mtimes(&b_st, R, Yb, b_Y);
            st.site = &qcb_emlrtRSI;
            inv(&st, b_Y, S);
            loop_ub = Ym->size[1];
            i = b_Y->size[0] * b_Y->size[1];
            b_Y->size[0] = bsb->size[0];
            b_Y->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(sp, b_Y, i, &hv_emlrtRTEI);
            for (i = 0; i < loop_ub; i++) {
              irank = bsb->size[0];
              for (k = 0; k < irank; k++) {
                partialTrueCount = (int32_T)bsb->data[k];
                if ((partialTrueCount < 1) ||
                    (partialTrueCount > Ym->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[k], 1,
                                                Ym->size[0], &nr_emlrtBCI,
                                                (emlrtCTX)sp);
                }
                b_Y->data[k + b_Y->size[0] * i] =
                    Ym->data[(partialTrueCount + Ym->size[0] * i) - 1];
              }
            }
            st.site = &pcb_emlrtRSI;
            qr(&st, b_Y, Yb, R);
          }
          st.site = &ocb_emlrtRSI;
          i = MDltminT->size[0];
          MDltminT->size[0] = S->size[0] * S->size[1];
          emxEnsureCapacity_boolean_T(&st, MDltminT, i, &lv_emlrtRTEI);
          loop_ub = S->size[0] * S->size[1];
          for (i = 0; i < loop_ub; i++) {
            MDltminT->data[i] = muDoubleScalarIsInf(S->data[i]);
          }
          b_st.site = &rm_emlrtRSI;
          c_st.site = &sd_emlrtRSI;
          irank = combineVectorElements(&c_st, MDltminT);
          if (irank > 0) {
            st.site = &snb_emlrtRSI;
            b_disp(&st, e_emlrt_marshallOut(&st, b_cv),
                   r_emlrt_marshallOut(&st, cv16), &ib_emlrtMCI);
            st.site = &jnb_emlrtRSI;
            disp(&st, b_emlrt_marshallOut(&st, cv15), &jb_emlrtMCI);
            i = Un->size[0] * Un->size[1];
            Un->size[0] = 1;
            Un->size[1] = 1;
            emxEnsureCapacity_real_T(sp, Un, i, &ov_emlrtRTEI);
            Un->data[0] = rtNaN;
            i = BB->size[0] * BB->size[1];
            BB->size[0] = 1;
            BB->size[1] = 1;
            emxEnsureCapacity_real_T(sp, BB, i, &qv_emlrtRTEI);
            BB->data[0] = rtNaN;
            exitg1 = true;
          } else {
            st.site = &ncb_emlrtRSI;
            if (R->size[1] != Ym->size[1]) {
              emlrtErrorWithMessageIdR2018a(
                  &st, &ec_emlrtRTEI, "MATLAB:dimagree", "MATLAB:dimagree", 0);
            }
            b_st.site = &fy_emlrtRSI;
            mrdiv(&b_st, Ym, R);
            /*  Compute squared Mahalanobis distances */
            st.site = &mcb_emlrtRSI;
            b_power(&st, Ym, R);
            st.site = &mcb_emlrtRSI;
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
            emxEnsureCapacity_real_T(sp, Szi, i, &uv_emlrtRTEI);
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
                                                  &vr_emlrtBCI, (emlrtCTX)sp);
                  }
                  Szi->data[b_i] = rtInf;
                }
              }
            } else {
              i = ii->size[0];
              ii->size[0] = bsb->size[0];
              emxEnsureCapacity_int32_T(sp, ii, i, &wv_emlrtRTEI);
              loop_ub = bsb->size[0];
              for (i = 0; i < loop_ub; i++) {
                if (bsb->data[i] !=
                    (int32_T)muDoubleScalarFloor(bsb->data[i])) {
                  emlrtIntegerCheckR2012b(bsb->data[i], &oc_emlrtDCI,
                                          (emlrtCTX)sp);
                }
                k = (int32_T)bsb->data[i];
                if ((k < 1) || (k > MD->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i], 1,
                                                MD->size[0], &ur_emlrtBCI,
                                                (emlrtCTX)sp);
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
            emxEnsureCapacity_boolean_T(sp, oldbsbT, i, &xv_emlrtRTEI);
            loop_ub = bsbT->size[0];
            for (i = 0; i < loop_ub; i++) {
              oldbsbT->data[i] = bsbT->data[i];
            }
            /*  Take minimum distance of the units not belonging to subset */
            st.site = &lcb_emlrtRSI;
            b_st.site = &qab_emlrtRSI;
            c_st.site = &rab_emlrtRSI;
            f_st.site = &sab_emlrtRSI;
            if (Szi->size[0] < 1) {
              emlrtErrorWithMessageIdR2018a(
                  &f_st, &mb_emlrtRTEI,
                  "Coder:toolbox:eml_min_or_max_varDimZero",
                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
            }
            g_st.site = &tab_emlrtRSI;
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
                ksor = Szi->data[0];
                idx = 1;
              } else {
                h_st.site = &mt_emlrtRSI;
                ksor = Szi->data[idx - 1];
                nwhile = idx + 1;
                i_st.site = &pt_emlrtRSI;
                if ((idx + 1 <= Szi->size[0]) && (Szi->size[0] > 2147483646)) {
                  j_st.site = &hb_emlrtRSI;
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
            i = MDltminT->size[0];
            MDltminT->size[0] = MD->size[0];
            emxEnsureCapacity_boolean_T(sp, MDltminT, i, &fw_emlrtRTEI);
            loop_ub = MD->size[0];
            for (i = 0; i < loop_ub; i++) {
              MDltminT->data[i] = (MD->data[i] <= ksor);
            }
            /*  MDltminbsb = n x 1 Boolean vector (if m>percn) or */
            /*  int32 vector containing the units which certainly remain inside
             * subset */
            /*  i.e. those which have a true in MDltminT and belong to previous
             * subset */
            if (b_mm > percn) {
              if (MDltminT->size[0] != bsbT->size[0]) {
                emlrtSizeEqCheck1DR2012b(MDltminT->size[0], bsbT->size[0],
                                         &nc_emlrtECI, (emlrtCTX)sp);
              }
              i = MDltminbsb->size[0];
              MDltminbsb->size[0] = MDltminT->size[0];
              emxEnsureCapacity_boolean_T(sp, MDltminbsb, i, &iw_emlrtRTEI);
              loop_ub = MDltminT->size[0];
              for (i = 0; i < loop_ub; i++) {
                MDltminbsb->data[i] = (MDltminT->data[i] && bsbT->data[i]);
              }
            } else {
              i = MDltminbsb->size[0];
              MDltminbsb->size[0] = bsb->size[0];
              emxEnsureCapacity_boolean_T(sp, MDltminbsb, i, &hw_emlrtRTEI);
              loop_ub = bsb->size[0];
              for (i = 0; i < loop_ub; i++) {
                if (bsb->data[i] !=
                    (int32_T)muDoubleScalarFloor(bsb->data[i])) {
                  emlrtIntegerCheckR2012b(bsb->data[i], &pc_emlrtDCI,
                                          (emlrtCTX)sp);
                }
                k = (int32_T)bsb->data[i];
                if ((k < 1) || (k > MDltminT->size[0])) {
                  emlrtDynamicBoundsCheckR2012b(k, 1, MDltminT->size[0],
                                                &yr_emlrtBCI, (emlrtCTX)sp);
                }
                MDltminbsb->data[i] = MDltminT->data[k - 1];
              }
            }
            /*  Find number of units of old subset which have a MD <= minMD */
            st.site = &kcb_emlrtRSI;
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
              emxEnsureCapacity_int32_T(sp, unit, i, &lw_emlrtRTEI);
              unit->data[0] = idx;
              /*  Compute new bsbT and new bsb */
              if (b_mm <= percn) {
                /*  new bsb is equal to oldbsb plus unit which just entered */
                i = bsb->size[0];
                k = bsb->size[0];
                bsb->size[0]++;
                emxEnsureCapacity_real_T(sp, bsb, k, &wu_emlrtRTEI);
                bsb->data[i] = idx;
              }
              /*  bsbT is equal to old bsbT after adding a single true in */
              /*  correspondence of the unit which entered subset */
              if ((idx < 1) || (idx > bsbT->size[0])) {
                emlrtDynamicBoundsCheckR2012b(idx, 1, bsbT->size[0],
                                              &bs_emlrtBCI, (emlrtCTX)sp);
              }
              bsbT->data[idx - 1] = true;
            } else if ((rankgap > 1.0) && (rankgap <= 10.0)) {
              /*  MDmod is the vector of Mahalanobis distance which will have */
              /*  a Inf in correspondence of the units of old subset which */
              /*  had a MD smaller than minMD */
              i = Szi->size[0];
              Szi->size[0] = MD->size[0];
              emxEnsureCapacity_real_T(sp, Szi, i, &ow_emlrtRTEI);
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
                  if (bsb->data[i] !=
                      (int32_T)muDoubleScalarFloor(bsb->data[i])) {
                    emlrtIntegerCheckR2012b(bsb->data[i], &qc_emlrtDCI,
                                            (emlrtCTX)sp);
                  }
                  k = (int32_T)bsb->data[i];
                  if ((k < 1) || (k > MDltminT->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(k, 1, MDltminT->size[0],
                                                  &cs_emlrtBCI, (emlrtCTX)sp);
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
                emxEnsureCapacity_uint32_T(sp, bsbrini, i, &wu_emlrtRTEI);
                partialTrueCount = 0;
                for (b_i = 0; b_i <= k; b_i++) {
                  if (MDltminT->data[(int32_T)bsb->data[b_i] - 1]) {
                    if (b_i + 1 > bsb->size[0]) {
                      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, bsb->size[0],
                                                    &fs_emlrtBCI, (emlrtCTX)sp);
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
                emxEnsureCapacity_real_T(sp, unitout, i, &wu_emlrtRTEI);
                partialTrueCount = 0;
                for (b_i = 0; b_i <= k; b_i++) {
                  if (!MDltminT->data[(int32_T)bsb->data[b_i] - 1]) {
                    if (b_i + 1 > bsb->size[0]) {
                      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, bsb->size[0],
                                                    &hs_emlrtBCI, (emlrtCTX)sp);
                    }
                    unitout->data[partialTrueCount] = bsb->data[b_i];
                    partialTrueCount++;
                  }
                }
                i = ii->size[0];
                ii->size[0] = bsbrini->size[0];
                emxEnsureCapacity_int32_T(sp, ii, i, &vw_emlrtRTEI);
                loop_ub = bsbrini->size[0];
                for (i = 0; i < loop_ub; i++) {
                  if (((int32_T)bsbrini->data[i] < 1) ||
                      ((int32_T)bsbrini->data[i] > MD->size[0])) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)bsbrini->data[i], 1,
                                                  MD->size[0], &gs_emlrtBCI,
                                                  (emlrtCTX)sp);
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
                emxEnsureCapacity_boolean_T(sp, bsbriniT, i, &rw_emlrtRTEI);
                loop_ub = MDltminbsb->size[0];
                for (i = 0; i < loop_ub; i++) {
                  bsbriniT->data[i] = MDltminbsb->data[i];
                }
                k = MDltminbsb->size[0];
                for (b_i = 0; b_i < k; b_i++) {
                  if (MDltminbsb->data[b_i]) {
                    if (b_i + 1 > Szi->size[0]) {
                      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, Szi->size[0],
                                                    &ds_emlrtBCI, (emlrtCTX)sp);
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
              i = (int32_T)rankgap;
              for (loop_ub = 0; loop_ub < i; loop_ub++) {
                st.site = &jcb_emlrtRSI;
                b_st.site = &qab_emlrtRSI;
                c_st.site = &rab_emlrtRSI;
                f_st.site = &sab_emlrtRSI;
                if (Szi->size[0] < 1) {
                  emlrtErrorWithMessageIdR2018a(
                      &f_st, &mb_emlrtRTEI,
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
                    ksor = Szi->data[idx - 1];
                    nwhile = idx + 1;
                    i_st.site = &pt_emlrtRSI;
                    if ((idx + 1 <= Szi->size[0]) &&
                        (Szi->size[0] > 2147483646)) {
                      j_st.site = &hb_emlrtRSI;
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
                                                &ls_emlrtBCI, (emlrtCTX)sp);
                }
                if (bsbT->data[idx - 1]) {
                  if (b_mm <= percn) {
                    if ((zz + 1 < 1) || (zz + 1 > 10)) {
                      emlrtDynamicBoundsCheckR2012b(zz + 1, 1, 10, &tq_emlrtBCI,
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
                              b_i + 1, 1, unitout->size[0], &os_emlrtBCI,
                              (emlrtCTX)sp);
                        }
                        unitout->data[partialTrueCount] = unitout->data[b_i];
                        partialTrueCount++;
                      }
                    }
                    k = unitout->size[0];
                    unitout->size[0] = trueCount;
                    emxEnsureCapacity_real_T(sp, unitout, k, &wu_emlrtRTEI);
                  } else {
                    if (idx > bsbriniT->size[0]) {
                      emlrtDynamicBoundsCheckR2012b(idx, 1, bsbriniT->size[0],
                                                    &ms_emlrtBCI, (emlrtCTX)sp);
                    }
                    bsbriniT->data[idx - 1] = true;
                  }
                } else {
                  if ((lunit + 1 < 1) || (lunit + 1 > 10)) {
                    emlrtDynamicBoundsCheckR2012b(lunit + 1, 1, 10,
                                                  &rq_emlrtBCI, (emlrtCTX)sp);
                  }
                  unitadd[lunit] = idx;
                  lunit++;
                }
                /*  disp(posunit(posncl1)) */
                if (idx > Szi->size[0]) {
                  emlrtDynamicBoundsCheckR2012b(idx, 1, Szi->size[0],
                                                &ns_emlrtBCI, (emlrtCTX)sp);
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
                emlrtDynamicBoundsCheckR2012b(lunit, 1, 10, &sq_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              i = unit->size[0];
              unit->size[0] = lunit;
              emxEnsureCapacity_int32_T(sp, unit, i, &ww_emlrtRTEI);
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
                  emlrtDynamicBoundsCheckR2012b(zz, 1, 10, &uq_emlrtBCI,
                                                (emlrtCTX)sp);
                }
                i = bsbr->size[0];
                bsbr->size[0] = bsbrini->size[0] + zz;
                emxEnsureCapacity_int32_T(sp, bsbr, i, &xw_emlrtRTEI);
                loop_ub = bsbrini->size[0];
                for (i = 0; i < loop_ub; i++) {
                  bsbr->data[i] = (int32_T)bsbrini->data[i];
                }
                for (i = 0; i < zz; i++) {
                  bsbr->data[i + bsbrini->size[0]] = bsbradd[i];
                }
                i = bsb->size[0];
                bsb->size[0] = bsbr->size[0] + lunit;
                emxEnsureCapacity_real_T(sp, bsb, i, &ax_emlrtRTEI);
                loop_ub = bsbr->size[0];
                for (i = 0; i < loop_ub; i++) {
                  bsb->data[i] = bsbr->data[i];
                }
                for (i = 0; i < lunit; i++) {
                  bsb->data[i + bsbr->size[0]] = unitadd[i];
                }
                i = bsbT->size[0];
                bsbT->size[0] = n;
                emxEnsureCapacity_boolean_T(sp, bsbT, i, &dx_emlrtRTEI);
                for (i = 0; i < n; i++) {
                  bsbT->data[i] = false;
                }
                i = ii->size[0];
                ii->size[0] = bsb->size[0];
                emxEnsureCapacity_int32_T(sp, ii, i, &fx_emlrtRTEI);
                loop_ub = bsb->size[0];
                for (i = 0; i < loop_ub; i++) {
                  k = (int32_T)bsb->data[i];
                  if ((k < 1) || (k > n)) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i], 1, n,
                                                  &is_emlrtBCI, (emlrtCTX)sp);
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
                /*  Note that bsbT has been computed through the 3 following
                 * instructions */
                /*  -----------    bsbriniT=MDltminT & bsbT; */
                /*  -----------    bsbriniT(minMDindex)=true; */
                /*  -----------    bsbriniT(unit)=true; */
                for (i = 0; i < lunit; i++) {
                  k = unitadd[i];
                  if ((k < 1) || (k > bsbriniT->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(k, 1, bsbriniT->size[0],
                                                  &js_emlrtBCI, (emlrtCTX)sp);
                  }
                  d_tmp_data[i] = k;
                }
                for (i = 0; i < lunit; i++) {
                  bsbriniT->data[d_tmp_data[i] - 1] = true;
                }
                i = bsbT->size[0];
                bsbT->size[0] = bsbriniT->size[0];
                emxEnsureCapacity_boolean_T(sp, bsbT, i, &bx_emlrtRTEI);
                loop_ub = bsbriniT->size[0];
                for (i = 0; i < loop_ub; i++) {
                  bsbT->data[i] = bsbriniT->data[i];
                }
              }
              /*  Compute bsbT (Boolean vector which identifies new subset) */
            } else {
              /*   rankgap>nrepmin */
              /*  New sorting based on quickselectFS */
              i = Szi->size[0];
              Szi->size[0] = MD->size[0];
              emxEnsureCapacity_real_T(sp, Szi, i, &mw_emlrtRTEI);
              loop_ub = MD->size[0] - 1;
              for (i = 0; i <= loop_ub; i++) {
                Szi->data[i] = MD->data[i];
              }
              st.site = &icb_emlrtRSI;
              ksor = quickselectFS(&st, Szi, b_mm + 1.0, idx);
              i = bsbT->size[0];
              bsbT->size[0] = MD->size[0];
              emxEnsureCapacity_boolean_T(sp, bsbT, i, &pw_emlrtRTEI);
              loop_ub = MD->size[0];
              for (i = 0; i < loop_ub; i++) {
                bsbT->data[i] = (MD->data[i] <= ksor);
              }
              st.site = &hcb_emlrtRSI;
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
                  emxEnsureCapacity_real_T(sp, bsb, i, &wu_emlrtRTEI);
                  partialTrueCount = 0;
                  for (b_i = 0; b_i <= k; b_i++) {
                    if (bsbT->data[b_i]) {
                      if (b_i + 1 > seq->size[0]) {
                        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                                                      &es_emlrtBCI,
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
                                                  &mq_emlrtBCI, (emlrtCTX)sp);
                  }
                }
                k = MD->size[0];
                for (b_i = 0; b_i < k; b_i++) {
                  if ((MD->data[b_i] == ksor) && (b_i + 1 > seq->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, seq->size[0],
                                                  &lq_emlrtBCI, (emlrtCTX)sp);
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
                    emlrtDynamicBoundsCheckR2012b(1, 1, trueCount, &vq_emlrtBCI,
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
                                                  &wq_emlrtBCI, (emlrtCTX)sp);
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
                st.site = &gcb_emlrtRSI;
                b_indexShapeCheck(&st, trueCount, b_ym);
                k = MD->size[0] - 1;
                trueCount = 0;
                for (b_i = 0; b_i <= k; b_i++) {
                  if (MD->data[b_i] < ksor) {
                    trueCount++;
                  }
                }
                i = r8->size[0];
                r8->size[0] = trueCount;
                emxEnsureCapacity_int32_T(sp, r8, i, &wu_emlrtRTEI);
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
                emxEnsureCapacity_int32_T(sp, r9, i, &wu_emlrtRTEI);
                partialTrueCount = 0;
                for (b_i = 0; b_i <= irank; b_i++) {
                  if (MD->data[b_i] == ksor) {
                    r9->data[partialTrueCount] = b_i + 1;
                    partialTrueCount++;
                  }
                }
                i = bsb->size[0];
                bsb->size[0] = r8->size[0] + loop_ub;
                emxEnsureCapacity_real_T(sp, bsb, i, &yw_emlrtRTEI);
                irank = r8->size[0];
                for (i = 0; i < irank; i++) {
                  bsb->data[i] = seq->data[r8->data[i] - 1];
                }
                for (i = 0; i < loop_ub; i++) {
                  bsb->data[i + r8->size[0]] = seq->data[r9->data[i] - 1];
                }
                i = bsbT->size[0];
                bsbT->size[0] = n;
                emxEnsureCapacity_boolean_T(sp, bsbT, i, &cx_emlrtRTEI);
                for (i = 0; i < n; i++) {
                  bsbT->data[i] = false;
                }
                i = ii->size[0];
                ii->size[0] = bsb->size[0];
                emxEnsureCapacity_int32_T(sp, ii, i, &ex_emlrtRTEI);
                loop_ub = bsb->size[0];
                for (i = 0; i < loop_ub; i++) {
                  k = (int32_T)bsb->data[i];
                  if (bsb->data[i] != k) {
                    emlrtIntegerCheckR2012b(bsb->data[i], &rc_emlrtDCI,
                                            (emlrtCTX)sp);
                  }
                  if (k > n) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)bsb->data[i], 1, n,
                                                  &ks_emlrtBCI, (emlrtCTX)sp);
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
              emxEnsureCapacity_boolean_T(sp, MDltminT, i, &sw_emlrtRTEI);
              loop_ub = oldbsbT->size[0];
              for (i = 0; i < loop_ub; i++) {
                MDltminT->data[i] = !oldbsbT->data[i];
              }
              if (bsbT->size[0] != MDltminT->size[0]) {
                emlrtSizeEqCheck1DR2012b(bsbT->size[0], MDltminT->size[0],
                                         &oc_emlrtECI, (emlrtCTX)sp);
              }
              st.site = &fcb_emlrtRSI;
              i = MDltminT->size[0];
              MDltminT->size[0] = bsbT->size[0];
              emxEnsureCapacity_boolean_T(&st, MDltminT, i, &tw_emlrtRTEI);
              loop_ub = bsbT->size[0];
              for (i = 0; i < loop_ub; i++) {
                MDltminT->data[i] = (bsbT->data[i] && MDltminT->data[i]);
              }
              b_st.site = &vb_emlrtRSI;
              c_eml_find(&b_st, MDltminT, ii);
              i = unit->size[0];
              unit->size[0] = ii->size[0];
              emxEnsureCapacity_int32_T(&st, unit, i, &uw_emlrtRTEI);
              loop_ub = ii->size[0];
              for (i = 0; i < loop_ub; i++) {
                unit->data[i] = ii->data[i];
              }
            }
            /*  store mean of units forming old subset */
            i = meoldbsb->size[0] * meoldbsb->size[1];
            meoldbsb->size[0] = 1;
            meoldbsb->size[1] = ym->size[1];
            emxEnsureCapacity_real_T(sp, meoldbsb, i, &qw_emlrtRTEI);
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
                a = (b_mm - init1) + 1.0;
                if (a != (int32_T)muDoubleScalarFloor(a)) {
                  emlrtIntegerCheckR2012b(a, &cc_emlrtDCI, (emlrtCTX)sp);
                }
                if (((int32_T)a < 1) || ((int32_T)a > Un->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)a, 1, Un->size[0],
                                                &ar_emlrtBCI, (emlrtCTX)sp);
                }
                b_ym[0] = 1;
                irank = k - i;
                b_ym[1] = irank;
                emlrtSubAssignSizeCheckR2012b(&b_ym[0], 2, &unit->size[0], 1,
                                              &rc_emlrtECI, (emlrtCTX)sp);
                for (k = 0; k < irank; k++) {
                  Un->data[((int32_T)a + Un->size[0] * ((i + k) + 1)) - 1] =
                      unit->data[k];
                }
              } else {
                st.site = &ecb_emlrtRSI;
                int2str(&st, b_mm, tmp_data, b_ym);
                tmp_size[0] = 1;
                tmp_size[1] = b_ym[1] + 44;
                for (i = 0; i < 44; i++) {
                  b_tmp_data[i] = cv21[i];
                }
                loop_ub = b_ym[1];
                if (0 <= loop_ub - 1) {
                  memcpy(&b_tmp_data[44], &tmp_data[0],
                         loop_ub * sizeof(char_T));
                }
                st.site = &qpb_emlrtRSI;
                disp(&st, cb_emlrt_marshallOut(&st, b_tmp_data, tmp_size),
                     &kb_emlrtMCI);
                st.site = &dcb_emlrtRSI;
                int2str(&st, unit->size[0], tmp_data, b_ym);
                b_tmp_size[0] = 1;
                b_tmp_size[1] = b_ym[1] + 30;
                for (i = 0; i < 30; i++) {
                  c_tmp_data[i] = cv22[i];
                }
                loop_ub = b_ym[1];
                if (0 <= loop_ub - 1) {
                  memcpy(&c_tmp_data[30], &tmp_data[0],
                         loop_ub * sizeof(char_T));
                }
                st.site = &ppb_emlrtRSI;
                disp(&st, cb_emlrt_marshallOut(&st, c_tmp_data, b_tmp_size),
                     &lb_emlrtMCI);
                st.site = &ccb_emlrtRSI;
                c_indexShapeCheck(&st, unit->size[0]);
                a = (b_mm - init1) + 1.0;
                if (a != (int32_T)muDoubleScalarFloor(a)) {
                  emlrtIntegerCheckR2012b(a, &dc_emlrtDCI, (emlrtCTX)sp);
                }
                if (((int32_T)a < 1) || ((int32_T)a > Un->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)a, 1, Un->size[0],
                                                &br_emlrtBCI, (emlrtCTX)sp);
                }
                b_ym[0] = 1;
                b_ym[1] = 10;
                irank = 10;
                emlrtSubAssignSizeCheckR2012b(&b_ym[0], 2, &irank, 1,
                                              &sc_emlrtECI, (emlrtCTX)sp);
                for (i = 0; i < 10; i++) {
                  Un->data[((int32_T)a + Un->size[0] * (i + 1)) - 1] =
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
    st.site = &rnb_emlrtRSI;
    b_disp(&st, e_emlrt_marshallOut(&st, cv9), o_emlrt_marshallOut(&st, cv14),
           &gb_emlrtMCI);
    st.site = &inb_emlrtRSI;
    disp(&st, b_emlrt_marshallOut(&st, cv15), &hb_emlrtMCI);
    i = Un->size[0] * Un->size[1];
    Un->size[0] = 1;
    Un->size[1] = 1;
    emxEnsureCapacity_real_T(sp, Un, i, &su_emlrtRTEI);
    Un->data[0] = rtNaN;
    i = BB->size[0] * BB->size[1];
    BB->size[0] = 1;
    BB->size[1] = 1;
    emxEnsureCapacity_real_T(sp, BB, i, &tu_emlrtRTEI);
    BB->data[0] = rtNaN;
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

/* End of code generation (FSMbsb.c) */
