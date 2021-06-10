/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ScoreYJall.c
 *
 * Code generation for function 'ScoreYJall'
 *
 */

/* Include files */
#include "ScoreYJall.h"
#include "FSRfan_wrapper_data.h"
#include "FSRfan_wrapper_emxutil.h"
#include "FSRfan_wrapper_types.h"
#include "abs.h"
#include "eml_mtimes_helper.h"
#include "exp.h"
#include "log.h"
#include "mldivide.h"
#include "mpower.h"
#include "mtimes.h"
#include "norm.h"
#include "rt_nonfinite.h"
#include "sign.h"
#include "sum.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo js_emlrtRSI = {
    268,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo ks_emlrtRSI = {
    271,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo ls_emlrtRSI = {
    272,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo ms_emlrtRSI = {
    273,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo ns_emlrtRSI = {
    274,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo os_emlrtRSI = {
    307,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo ps_emlrtRSI = {
    315,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo qs_emlrtRSI = {
    334,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo rs_emlrtRSI = {
    355,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo ss_emlrtRSI = {
    356,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo ts_emlrtRSI = {
    358,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo us_emlrtRSI = {
    362,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo vs_emlrtRSI = {
    365,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo ws_emlrtRSI = {
    366,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo xs_emlrtRSI = {
    368,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo ys_emlrtRSI = {
    372,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo at_emlrtRSI = {
    380,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo bt_emlrtRSI = {
    395,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo ct_emlrtRSI = {
    396,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo dt_emlrtRSI = {
    398,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo et_emlrtRSI = {
    402,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo ft_emlrtRSI = {
    411,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo gt_emlrtRSI = {
    426,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo ht_emlrtRSI = {
    427,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo it_emlrtRSI = {
    429,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo jt_emlrtRSI = {
    433,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo kt_emlrtRSI = {
    442,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo lt_emlrtRSI = {
    443,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo mt_emlrtRSI = {
    445,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo nt_emlrtRSI = {
    447,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo ot_emlrtRSI = {
    456,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtRSInfo pt_emlrtRSI = {
    458,                                                  /* lineNo */
    "ScoreYJall",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pathName */
};

static emlrtECInfo jb_emlrtECI = {
    -1,                                                   /* nDims */
    268,                                                  /* lineNo */
    12,                                                   /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtBCInfo ie_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    265,                                                   /* lineNo */
    12,                                                    /* colNo */
    "y",                                                   /* aName */
    "ScoreYJall",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo je_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    266,                                                   /* lineNo */
    9,                                                     /* colNo */
    "y",                                                   /* aName */
    "ScoreYJall",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtECInfo kb_emlrtECI = {
    -1,                                                   /* nDims */
    325,                                                  /* lineNo */
    9,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtBCInfo ke_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    325,                                                   /* lineNo */
    9,                                                     /* colNo */
    "z",                                                   /* aName */
    "ScoreYJall",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtECInfo lb_emlrtECI = {
    -1,                                                   /* nDims */
    318,                                                  /* lineNo */
    9,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtECInfo mb_emlrtECI = {
    -1,                                                   /* nDims */
    326,                                                  /* lineNo */
    23,                                                   /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtECInfo nb_emlrtECI = {
    -1,                                                   /* nDims */
    319,                                                  /* lineNo */
    25,                                                   /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtBCInfo le_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    318,                                                   /* lineNo */
    9,                                                     /* colNo */
    "z",                                                   /* aName */
    "ScoreYJall",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtECInfo ob_emlrtECI = {
    -1,                                                   /* nDims */
    326,                                                  /* lineNo */
    9,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtECInfo pb_emlrtECI = {
    -1,                                                   /* nDims */
    319,                                                  /* lineNo */
    9,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtBCInfo me_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    326,                                                   /* lineNo */
    9,                                                     /* colNo */
    "wpos",                                                /* aName */
    "ScoreYJall",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo ne_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    319,                                                   /* lineNo */
    9,                                                     /* colNo */
    "wpos",                                                /* aName */
    "ScoreYJall",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtECInfo qb_emlrtECI = {
    -1,                                                   /* nDims */
    327,                                                  /* lineNo */
    9,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtECInfo rb_emlrtECI = {
    -1,                                                   /* nDims */
    320,                                                  /* lineNo */
    9,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtECInfo sb_emlrtECI = {
    -1,                                                   /* nDims */
    328,                                                  /* lineNo */
    20,                                                   /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtBCInfo oe_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    327,                                                   /* lineNo */
    9,                                                     /* colNo */
    "wneg",                                                /* aName */
    "ScoreYJall",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtECInfo tb_emlrtECI = {
    -1,                                                   /* nDims */
    322,                                                  /* lineNo */
    23,                                                   /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtBCInfo pe_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    320,                                                   /* lineNo */
    9,                                                     /* colNo */
    "wneg",                                                /* aName */
    "ScoreYJall",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtECInfo ub_emlrtECI = {
    -1,                                                   /* nDims */
    328,                                                  /* lineNo */
    9,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtECInfo vb_emlrtECI = {
    -1,                                                   /* nDims */
    322,                                                  /* lineNo */
    9,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtBCInfo qe_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    328,                                                   /* lineNo */
    9,                                                     /* colNo */
    "w",                                                   /* aName */
    "ScoreYJall",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo re_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    322,                                                   /* lineNo */
    9,                                                     /* colNo */
    "w",                                                   /* aName */
    "ScoreYJall",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtECInfo wb_emlrtECI = {
    -1,                                                   /* nDims */
    347,                                                  /* lineNo */
    9,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtBCInfo se_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    347,                                                   /* lineNo */
    9,                                                     /* colNo */
    "z",                                                   /* aName */
    "ScoreYJall",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtECInfo xb_emlrtECI = {
    -1,                                                   /* nDims */
    338,                                                  /* lineNo */
    9,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtECInfo yb_emlrtECI = {
    -1,                                                   /* nDims */
    348,                                                  /* lineNo */
    9,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtBCInfo te_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    338,                                                   /* lineNo */
    9,                                                     /* colNo */
    "z",                                                   /* aName */
    "ScoreYJall",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo ue_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    348,                                                   /* lineNo */
    9,                                                     /* colNo */
    "wpos",                                                /* aName */
    "ScoreYJall",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtECInfo ac_emlrtECI = {
    -1,                                                   /* nDims */
    339,                                                  /* lineNo */
    9,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtECInfo bc_emlrtECI = {
    -1,                                                   /* nDims */
    349,                                                  /* lineNo */
    20,                                                   /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtECInfo cc_emlrtECI = {
    -1,                                                   /* nDims */
    340,                                                  /* lineNo */
    21,                                                   /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtBCInfo ve_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    339,                                                   /* lineNo */
    9,                                                     /* colNo */
    "wpos",                                                /* aName */
    "ScoreYJall",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtECInfo dc_emlrtECI = {
    -1,                                                   /* nDims */
    349,                                                  /* lineNo */
    9,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtECInfo ec_emlrtECI = {
    -1,                                                   /* nDims */
    340,                                                  /* lineNo */
    9,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtECInfo fc_emlrtECI = {
    -1,                                                   /* nDims */
    351,                                                  /* lineNo */
    17,                                                   /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtBCInfo we_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    349,                                                   /* lineNo */
    9,                                                     /* colNo */
    "wneg",                                                /* aName */
    "ScoreYJall",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtECInfo gc_emlrtECI = {
    -1,                                                   /* nDims */
    343,                                                  /* lineNo */
    20,                                                   /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtBCInfo xe_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    340,                                                   /* lineNo */
    9,                                                     /* colNo */
    "wneg",                                                /* aName */
    "ScoreYJall",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtECInfo hc_emlrtECI = {
    -1,                                                   /* nDims */
    351,                                                  /* lineNo */
    9,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtECInfo ic_emlrtECI = {
    -1,                                                   /* nDims */
    343,                                                  /* lineNo */
    9,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtBCInfo ye_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    351,                                                   /* lineNo */
    9,                                                     /* colNo */
    "w",                                                   /* aName */
    "ScoreYJall",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo af_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    343,                                                   /* lineNo */
    9,                                                     /* colNo */
    "w",                                                   /* aName */
    "ScoreYJall",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtECInfo jc_emlrtECI = {
    -1,                                                   /* nDims */
    356,                                                  /* lineNo */
    18,                                                   /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtECInfo kc_emlrtECI = {
    -1,                                                   /* nDims */
    366,                                                  /* lineNo */
    17,                                                   /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtBCInfo bf_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    372,                                                   /* lineNo */
    24,                                                    /* colNo */
    "beta",                                                /* aName */
    "ScoreYJall",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtECInfo lc_emlrtECI = {
    -1,                                                   /* nDims */
    396,                                                  /* lineNo */
    21,                                                   /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtECInfo mc_emlrtECI = {
    -1,                                                   /* nDims */
    427,                                                  /* lineNo */
    21,                                                   /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtBCInfo cf_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    402,                                                   /* lineNo */
    28,                                                    /* colNo */
    "beta",                                                /* aName */
    "ScoreYJall",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtECInfo nc_emlrtECI = {
    -1,                                                   /* nDims */
    445,                                                  /* lineNo */
    22,                                                   /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtBCInfo df_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    433,                                                   /* lineNo */
    28,                                                    /* colNo */
    "beta",                                                /* aName */
    "ScoreYJall",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtRTEInfo qj_emlrtRTEI = {
    268,                                                  /* lineNo */
    12,                                                   /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo rj_emlrtRTEI = {
    1,                                                    /* lineNo */
    18,                                                   /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo sj_emlrtRTEI = {
    271,                                                  /* lineNo */
    1,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo tj_emlrtRTEI = {
    273,                                                  /* lineNo */
    1,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo uj_emlrtRTEI = {
    274,                                                  /* lineNo */
    13,                                                   /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo vj_emlrtRTEI = {
    302,                                                  /* lineNo */
    5,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo wj_emlrtRTEI = {
    303,                                                  /* lineNo */
    5,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo xj_emlrtRTEI = {
    304,                                                  /* lineNo */
    5,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo yj_emlrtRTEI = {
    305,                                                  /* lineNo */
    5,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo ak_emlrtRTEI = {
    324,                                                  /* lineNo */
    9,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo bk_emlrtRTEI = {
    315,                                                  /* lineNo */
    9,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo ck_emlrtRTEI = {
    317,                                                  /* lineNo */
    9,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo dk_emlrtRTEI = {
    326,                                                  /* lineNo */
    34,                                                   /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo ek_emlrtRTEI = {
    326,                                                  /* lineNo */
    23,                                                   /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo fk_emlrtRTEI = {
    319,                                                  /* lineNo */
    23,                                                   /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo gk_emlrtRTEI = {
    327,                                                  /* lineNo */
    23,                                                   /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo hk_emlrtRTEI = {
    346,                                                  /* lineNo */
    9,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo ik_emlrtRTEI = {
    334,                                                  /* lineNo */
    9,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo jk_emlrtRTEI = {
    337,                                                  /* lineNo */
    9,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo kk_emlrtRTEI = {
    349,                                                  /* lineNo */
    30,                                                   /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo lk_emlrtRTEI = {
    349,                                                  /* lineNo */
    20,                                                   /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo mk_emlrtRTEI = {
    340,                                                  /* lineNo */
    20,                                                   /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo nk_emlrtRTEI = {
    351,                                                  /* lineNo */
    17,                                                   /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo ok_emlrtRTEI = {
    356,                                                  /* lineNo */
    18,                                                   /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo pk_emlrtRTEI = {
    362,                                                  /* lineNo */
    5,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo qk_emlrtRTEI = {
    366,                                                  /* lineNo */
    17,                                                   /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo rk_emlrtRTEI = {
    380,                                                  /* lineNo */
    9,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo sk_emlrtRTEI = {
    411,                                                  /* lineNo */
    9,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo tk_emlrtRTEI = {
    442,                                                  /* lineNo */
    9,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo uk_emlrtRTEI = {
    396,                                                  /* lineNo */
    21,                                                   /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo vk_emlrtRTEI = {
    427,                                                  /* lineNo */
    21,                                                   /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo wk_emlrtRTEI = {
    269,                                                  /* lineNo */
    1,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

static emlrtRTEInfo xk_emlrtRTEI = {
    270,                                                  /* lineNo */
    1,                                                    /* colNo */
    "ScoreYJall",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJall.m" /* pName */
};

/* Function Definitions */
void ScoreYJall(const emlrtStack *sp, const emxArray_real_T *y,
                const emxArray_real_T *X, real_T varargin_2,
                real_T outSC_Score_data[], int32_T outSC_Score_size[2])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *Xw;
  emxArray_real_T *logvneg;
  emxArray_real_T *logvpos;
  emxArray_real_T *vneg;
  emxArray_real_T *vpos;
  emxArray_real_T *vposlai;
  emxArray_real_T *w;
  emxArray_real_T *wneg;
  emxArray_real_T *z;
  emxArray_real_T *znonnegs;
  real_T G;
  real_T Glaminus1;
  real_T kpos;
  real_T logG;
  real_T logGneg;
  real_T logGpos;
  real_T q;
  int32_T b_i;
  int32_T end;
  int32_T i;
  int32_T i2;
  int32_T n;
  int32_T trueCount;
  int8_T i1;
  int8_T sizes_idx_1;
  boolean_T empty_non_axis_sizes;
  boolean_T vnegboo;
  boolean_T vposboo;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /* Computes all the 4 score tests for YJ transformation */
  /*  */
  /* <a href="matlab: docsearchFS('ScoreYJall')">Link to the help function</a>
   */
  /*  */
  /*  The transformations for negative and positive responses were determined */
  /*  by Yeo and Johnson (2000) by imposing the smoothness condition that the */
  /*  second derivative of zYJ(λ) with respect to y be smooth at y = 0. However
   */
  /*  some authors, for example Weisberg (2005), query the physical */
  /*  interpretability of this constraint which is oftern violated in data */
  /*  analysis. Accordingly, Atkinson et al (2019) and (2020) extend the */
  /*  Yeo-Johnson transformation to allow two values of the transformations */
  /*  parameter: λN for negative observations and λP for non-negative ones. */
  /*  ScoreYJall computes: */
  /*  1) the global t test associated with the constructed variable for */
  /*  λ=λP=λN. */
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
  /*  */
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
  /*                Missing values (NaN's) and infinite values (Inf's) are
   * allowed, */
  /*                since observations (rows) with missing or infinite values
   * will */
  /*                automatically be excluded from the computations. */
  /*  */
  /*   Optional input arguments: */
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
  /*         la  :  transformation parameter. Vector. It specifies for which */
  /*                values of the transformation parameter it is necessary to */
  /*                compute the score test. Default value of lambda is la=[-1 */
  /*                -0.5 0 0.5 1]; that is the five most common values of */
  /*                lambda */
  /*                Example - 'la',[0 0.5] */
  /*                Data Types - double */
  /*  */
  /*       scoremle: likelihood ratio test for the two different transformation
   */
  /*                 parameters $\lambda_P$ and $\lambda_N$. Boolean. */
  /*                 if scoremle is true it is possible to compute the */
  /*                 likelihood ratio test. In this case the residual sum of */
  /*                 squares of the null model bsaed on a single transformation
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
  /*                if usefmin is true or usefmin is a struct it is */
  /*                possible to use MATLAB solvers fminsearch or fminunc to */
  /*                find the maximum likelihood estimates of $\lambda_P$ and */
  /*                $\lambda_N$. The default value of usefmin is false that is
   */
  /*                solver is not used and the likelihood is evaluated at the */
  /*                grid of points with steps 0.01. */
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
  /*  */
  /*        nocheck : Check input arguments. Boolean. */
  /*                If nocheck is equal to true no check is performed on */
  /*                  matrix y and matrix X. Notice that y and X are left */
  /*                  unchanged. In other words the additional column of ones */
  /*                  for the intercept is not added. As default nocheck=false.
   */
  /*                Example - 'nocheck',true */
  /*                Data Types - boolean */
  /*  */
  /*   Output: */
  /*  */
  /*   The output consists of a structure 'outSC' containing the following
   * fields: */
  /*  */
  /*         outSC.Score =       score tests. Matrix. */
  /*                             Matrix of size length(la)-by-5 which */
  /*                             contains the value of the score test for each
   */
  /*                             value of lambda specified in optional input */
  /*                             parameter la. The first column refers to the */
  /*                             global test, the second to the test for */
  /*                             positive observations, the third refers to the
   */
  /*                             test for negative observations and the fourth
   */
  /*                             column refers to the F test for the joint */
  /*                             presence of the two constructed variables. */
  /*                             If input option scoremle is true the fifth */
  /*                             column will contain the exact likelihod ratio
   */
  /*                             test based on the maximum likelihood estimates
   */
  /*                             of the $\lambda_P$ and $\lambda_N$. */
  /*                             If la is not specified, the number of rows of
   */
  /*                             outSc.Score is equal to 5 and will contain the
   */
  /*                             values of the score tests for the 5 most common
   */
  /*                             values of lambda. */
  /*         outSC.laMLE =       MLE of lambda. Vector. */
  /*                             Vector of dimension 2 which */
  /*                             contains the value of maximum likelihood */
  /*                             estimate of $\lambda_P$ and $\lambda_N$.  This
   */
  /*                             output is present only if input option */
  /*                             scoremle is true. */
  /*  */
  /*  */
  /*  See also: FSRfan, Score, ScoreYJ, ScoreYjpn, fanBIC */
  /*  */
  /*  References: */
  /*  */
  /*  Yeo, I.K. and Johnson, R. (2000), A new family of power */
  /*  transformations to improve normality or symmetry, "Biometrika", Vol. 87,
   */
  /*  pp. 954-959. */
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
  /* <a href="matlab: docsearchFS('ScoreYJall')">Link to the help function</a>
   */
  /*  */
  /* $LastChangedDate:: 2017-11-17 15:01:40 #$: Date of the last commit */
  /*  Examples */
  /* { */
  /*     %% Ex in which positive and negative observations require the same
   * lambda. */
  /*     rng('default') */
  /*     rng(100) */
  /*     n=100; */
  /*     y=randn(n,1); */
  /*     % Transform the value to find out if we can recover the true value of
   */
  /*     % the transformation parameter */
  /*     la=0.5; */
  /*     ytra=normYJ(y,[],la,'inverse',true); */
  /*     % Start the analysis */
  /*     X=ones(n,1); */
  /*     [outSC]=ScoreYJall(ytra,X,'intercept',false); */
  /*     la=[-1 -0.5 0 0.5 1]'; */
  /*     Sco=[la outSC.Score]; */
  /*     Scotable=array2table(Sco,'VariableNames',{'lambda','Tall','Tp','Tn','Ftest'});
   */
  /*     disp(Scotable) */
  /*     % Comment: if we consider the 5 most common values of lambda the value
   */
  /*     % of the score test when lambda=0.5 is the only one which is not */
  /*     % significant. Both values of the score test for positive and negative
   */
  /*     % observations and the Ftest confirm that this value of the */
  /*     % transformation parameter is OK for both sides of the distribution. */
  /* } */
  /* { */
  /*     %% Ex in which positive and negative observation require different
   * lambdas. */
  /*     rng(2000) */
  /*     n=100; */
  /*     y=randn(n,1); */
  /*     % Tranform in a different way positive and negative values */
  /*     lapos=0; */
  /*     ytrapos=normYJ(y(y>=0),[],lapos,'inverse',true); */
  /*     laneg=1; */
  /*     ytraneg=normYJ(y(y<0),[],laneg,'inverse',true); */
  /*     ytra=[ytrapos; ytraneg]; */
  /*  */
  /*     % Start the analysis */
  /*     X=ones(n,1); */
  /*     % also compute lik. ratio test based on MLE of laP and laN */
  /*     scoremle=true; */
  /*     [outSC]=ScoreYJall(ytra,X,'intercept',false,'scoremle',scoremle); */
  /*     la=[-1 -0.5 0 0.5 1]'; */
  /*     Sco=[la outSC.Score]; */
  /*     Scotable=array2table(Sco,'VariableNames',{'lambda','Tall','Tp','Tn','FtestPN'
   * 'FtestLR'}); */
  /*     disp(Scotable) */
  /*     % Comment: if we consider the 5 most common values of lambda */
  /*     % the value of the score test when lambda=0.5 is the only one which is
   * not */
  /*     % significant. However when lambda=0.5 the score test for negative */
  /*     % observations is highly significant. */
  /*     disp('Difference between the test for positive and the test for
   * negative') */
  /*     disp(abs(Scotable{4,3}-Scotable{4,4})), */
  /*     % which is very */
  /*     % large. This indicates that the two tails need a different value of
   * the */
  /*     % transformation parameter. */
  /* } */
  /*  Beginning of code */
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
  n = X->size[0];
  /*  Write in structure 'options' the options chosen by the user */
  /*  SSElaMLE = residual sum of squares of the regression model based on */
  /*  MLE of laPos and laNeg */
  /*  inizialize qunatities which do not depnd on la(i) */
  end = y->size[0];
  for (i = 0; i < end; i++) {
    if ((y->data[i] >= 0.0) && (i + 1 > y->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, y->size[0], &ie_emlrtBCI,
                                    (emlrtCTX)sp);
    }
  }
  end = y->size[0];
  for (i = 0; i < end; i++) {
    if ((!(y->data[i] >= 0.0)) && (i + 1 > y->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, y->size[0], &je_emlrtBCI,
                                    (emlrtCTX)sp);
    }
  }
  emxInit_real_T(sp, &z, 1, &ok_emlrtRTEI, true);
  b_i = z->size[0];
  z->size[0] = y->size[0];
  emxEnsureCapacity_real_T(sp, z, b_i, &qj_emlrtRTEI);
  i = y->size[0];
  for (b_i = 0; b_i < i; b_i++) {
    z->data[b_i] = y->data[b_i];
  }
  emxInit_real_T(sp, &vposlai, 1, &bk_emlrtRTEI, true);
  st.site = &js_emlrtRSI;
  b_sign(&st, z);
  st.site = &js_emlrtRSI;
  b_abs(&st, y, vposlai);
  i = vposlai->size[0];
  for (b_i = 0; b_i < i; b_i++) {
    vposlai->data[b_i]++;
  }
  st.site = &js_emlrtRSI;
  b_log(&st, vposlai);
  if (z->size[0] != vposlai->size[0]) {
    emlrtSizeEqCheck1DR2012b(z->size[0], vposlai->size[0], &jb_emlrtECI,
                             (emlrtCTX)sp);
  }
  i = z->size[0];
  for (b_i = 0; b_i < i; b_i++) {
    z->data[b_i] *= vposlai->data[b_i];
  }
  st.site = &js_emlrtRSI;
  logG = sum(&st, z) / (real_T)X->size[0];
  end = y->size[0] - 1;
  trueCount = 0;
  for (i = 0; i <= end; i++) {
    if (!(y->data[i] >= 0.0)) {
      trueCount++;
    }
  }
  emxInit_real_T(sp, &vneg, 1, &wk_emlrtRTEI, true);
  b_i = vneg->size[0];
  vneg->size[0] = trueCount;
  emxEnsureCapacity_real_T(sp, vneg, b_i, &rj_emlrtRTEI);
  trueCount = 0;
  for (i = 0; i <= end; i++) {
    if (!(y->data[i] >= 0.0)) {
      vneg->data[trueCount] = -y->data[i] + 1.0;
      trueCount++;
    }
  }
  end = y->size[0] - 1;
  trueCount = 0;
  for (i = 0; i <= end; i++) {
    if (y->data[i] >= 0.0) {
      trueCount++;
    }
  }
  emxInit_real_T(sp, &vpos, 1, &xk_emlrtRTEI, true);
  b_i = vpos->size[0];
  vpos->size[0] = trueCount;
  emxEnsureCapacity_real_T(sp, vpos, b_i, &rj_emlrtRTEI);
  trueCount = 0;
  for (i = 0; i <= end; i++) {
    if (y->data[i] >= 0.0) {
      vpos->data[trueCount] = y->data[i] + 1.0;
      trueCount++;
    }
  }
  emxInit_real_T(sp, &logvpos, 1, &sj_emlrtRTEI, true);
  b_i = logvpos->size[0];
  logvpos->size[0] = vpos->size[0];
  emxEnsureCapacity_real_T(sp, logvpos, b_i, &sj_emlrtRTEI);
  i = vpos->size[0];
  for (b_i = 0; b_i < i; b_i++) {
    logvpos->data[b_i] = vpos->data[b_i];
  }
  emxInit_real_T(sp, &logvneg, 1, &tj_emlrtRTEI, true);
  st.site = &ks_emlrtRSI;
  b_log(&st, logvpos);
  st.site = &ls_emlrtRSI;
  logGpos = sum(&st, logvpos) / (real_T)X->size[0];
  b_i = logvneg->size[0];
  logvneg->size[0] = vneg->size[0];
  emxEnsureCapacity_real_T(sp, logvneg, b_i, &tj_emlrtRTEI);
  i = vneg->size[0];
  for (b_i = 0; b_i < i; b_i++) {
    logvneg->data[b_i] = vneg->data[b_i];
  }
  st.site = &ms_emlrtRSI;
  b_log(&st, logvneg);
  b_i = vposlai->size[0];
  vposlai->size[0] = logvneg->size[0];
  emxEnsureCapacity_real_T(sp, vposlai, b_i, &uj_emlrtRTEI);
  i = logvneg->size[0];
  for (b_i = 0; b_i < i; b_i++) {
    vposlai->data[b_i] = -logvneg->data[b_i];
  }
  st.site = &ns_emlrtRSI;
  logGneg = sum(&st, vposlai) / (real_T)X->size[0];
  G = muDoubleScalarExp(logG);
  /* Gpos=exp(logGpos); */
  /* Gneg=exp(logGneg); */
  /*  Note that Gpos*Gneg=G */
  /*   Sc= matrix lla-by-5 which contain: */
  /*  1st col = global t test */
  /*  2nd col = t test for pos */
  /*  3rd col = t test for neg */
  /*  4th col = F test for both */
  /*  5th col = Lik. ratio test for both (if input option scoremle is true) */
  /*   for the values of \lambda specified in vector la */
  outSC_Score_size[0] = 1;
  outSC_Score_size[1] = 4;
  /*  The identity matrix of size p+1 can be */
  /*  computed once and for all */
  /*  eyep1=eye(p+1); */
  /*  loop over the values of \lambda */
  i = y->size[0];
  vposboo = (vpos->size[0] != 0);
  vnegboo = (vneg->size[0] != 0);
  b_i = vneg->size[0];
  vneg->size[0] = y->size[0];
  emxEnsureCapacity_real_T(sp, vneg, b_i, &vj_emlrtRTEI);
  for (b_i = 0; b_i < i; b_i++) {
    vneg->data[b_i] = y->data[b_i];
  }
  emxInit_real_T(sp, &wneg, 1, &xj_emlrtRTEI, true);
  emxInit_real_T(sp, &w, 1, &yj_emlrtRTEI, true);
  /*  Initialized z and w */
  b_i = vpos->size[0];
  vpos->size[0] = X->size[0];
  emxEnsureCapacity_real_T(sp, vpos, b_i, &wj_emlrtRTEI);
  b_i = wneg->size[0];
  wneg->size[0] = X->size[0];
  emxEnsureCapacity_real_T(sp, wneg, b_i, &xj_emlrtRTEI);
  b_i = w->size[0];
  w->size[0] = X->size[0];
  emxEnsureCapacity_real_T(sp, w, b_i, &yj_emlrtRTEI);
  for (b_i = 0; b_i < n; b_i++) {
    vpos->data[b_i] = rtNaN;
    wneg->data[b_i] = rtNaN;
    w->data[b_i] = rtNaN;
  }
  st.site = &os_emlrtRSI;
  Glaminus1 = mpower(&st, G, varargin_2 - 1.0);
  q = varargin_2 * Glaminus1;
  /*  Compute transformed values and constructed variables depending on lambda
   */
  /*  transformation for non negative values */
  emxInit_real_T(sp, &znonnegs, 1, &ck_emlrtRTEI, true);
  if (muDoubleScalarAbs(varargin_2) > 1.0E-8) {
    /*  if la is different from 0 */
    /*  vposlai=vpos.^lai; */
    i = logvpos->size[0];
    b_i = vposlai->size[0];
    vposlai->size[0] = logvpos->size[0];
    emxEnsureCapacity_real_T(sp, vposlai, b_i, &bk_emlrtRTEI);
    for (b_i = 0; b_i < i; b_i++) {
      vposlai->data[b_i] = varargin_2 * logvpos->data[b_i];
    }
    st.site = &ps_emlrtRSI;
    b_exp(&st, vposlai);
    kpos = 1.0 / varargin_2 + logGpos;
    b_i = znonnegs->size[0];
    znonnegs->size[0] = vposlai->size[0];
    emxEnsureCapacity_real_T(sp, znonnegs, b_i, &ck_emlrtRTEI);
    i = vposlai->size[0];
    for (b_i = 0; b_i < i; b_i++) {
      znonnegs->data[b_i] = (vposlai->data[b_i] - 1.0) / q;
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (y->data[i] >= 0.0) {
        trueCount++;
      }
    }
    if (trueCount != znonnegs->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(trueCount, znonnegs->size[0],
                                      &lb_emlrtECI, (emlrtCTX)sp);
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (y->data[i] >= 0.0) {
        if (i + 1 > vneg->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, vneg->size[0], &le_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        vneg->data[i] = znonnegs->data[trueCount];
        trueCount++;
      }
    }
    if (vposlai->size[0] != logvpos->size[0]) {
      emlrtSizeEqCheck1DR2012b(vposlai->size[0], logvpos->size[0], &nb_emlrtECI,
                               (emlrtCTX)sp);
    }
    b_i = z->size[0];
    z->size[0] = vposlai->size[0];
    emxEnsureCapacity_real_T(sp, z, b_i, &fk_emlrtRTEI);
    i = vposlai->size[0];
    for (b_i = 0; b_i < i; b_i++) {
      z->data[b_i] =
          (vposlai->data[b_i] * (logvpos->data[b_i] - kpos) + kpos) / q;
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (y->data[i] >= 0.0) {
        trueCount++;
      }
    }
    if (trueCount != z->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(trueCount, z->size[0], &pb_emlrtECI,
                                      (emlrtCTX)sp);
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (y->data[i] >= 0.0) {
        if (i + 1 > vpos->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, vpos->size[0], &ne_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        vpos->data[i] = z->data[trueCount];
        trueCount++;
      }
    }
    i = znonnegs->size[0];
    for (b_i = 0; b_i < i; b_i++) {
      znonnegs->data[b_i] = -znonnegs->data[b_i] * logGneg;
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (y->data[i] >= 0.0) {
        trueCount++;
      }
    }
    if (trueCount != znonnegs->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(trueCount, znonnegs->size[0],
                                      &rb_emlrtECI, (emlrtCTX)sp);
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (y->data[i] >= 0.0) {
        if (i + 1 > wneg->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, wneg->size[0], &pe_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        wneg->data[i] = znonnegs->data[trueCount];
        trueCount++;
      }
    }
    kpos = 1.0 / varargin_2 + logG;
    if (vposlai->size[0] != logvpos->size[0]) {
      emlrtSizeEqCheck1DR2012b(vposlai->size[0], logvpos->size[0], &tb_emlrtECI,
                               (emlrtCTX)sp);
    }
    i = vposlai->size[0];
    for (b_i = 0; b_i < i; b_i++) {
      vposlai->data[b_i] =
          (vposlai->data[b_i] * (logvpos->data[b_i] - kpos) + kpos) / q;
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (y->data[i] >= 0.0) {
        trueCount++;
      }
    }
    if (trueCount != vposlai->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(trueCount, vposlai->size[0], &vb_emlrtECI,
                                      (emlrtCTX)sp);
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (y->data[i] >= 0.0) {
        if (i + 1 > w->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, w->size[0], &re_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        w->data[i] = vposlai->data[trueCount];
        trueCount++;
      }
    }
  } else {
    /*  if la is equal to 0 */
    i = logvpos->size[0];
    b_i = znonnegs->size[0];
    znonnegs->size[0] = logvpos->size[0];
    emxEnsureCapacity_real_T(sp, znonnegs, b_i, &ak_emlrtRTEI);
    for (b_i = 0; b_i < i; b_i++) {
      znonnegs->data[b_i] = G * logvpos->data[b_i];
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (y->data[i] >= 0.0) {
        trueCount++;
      }
    }
    if (trueCount != znonnegs->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(trueCount, znonnegs->size[0],
                                      &kb_emlrtECI, (emlrtCTX)sp);
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (y->data[i] >= 0.0) {
        if (i + 1 > vneg->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, vneg->size[0], &ke_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        vneg->data[i] = znonnegs->data[trueCount];
        trueCount++;
      }
    }
    i = logvpos->size[0];
    b_i = z->size[0];
    z->size[0] = logvpos->size[0];
    emxEnsureCapacity_real_T(sp, z, b_i, &dk_emlrtRTEI);
    for (b_i = 0; b_i < i; b_i++) {
      z->data[b_i] = logvpos->data[b_i] / 2.0;
    }
    if (znonnegs->size[0] != z->size[0]) {
      emlrtSizeEqCheck1DR2012b(znonnegs->size[0], z->size[0], &mb_emlrtECI,
                               (emlrtCTX)sp);
    }
    b_i = vposlai->size[0];
    vposlai->size[0] = znonnegs->size[0];
    emxEnsureCapacity_real_T(sp, vposlai, b_i, &ek_emlrtRTEI);
    i = znonnegs->size[0];
    for (b_i = 0; b_i < i; b_i++) {
      vposlai->data[b_i] = znonnegs->data[b_i] * (z->data[b_i] - logGpos);
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (y->data[i] >= 0.0) {
        trueCount++;
      }
    }
    if (trueCount != vposlai->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(trueCount, vposlai->size[0], &ob_emlrtECI,
                                      (emlrtCTX)sp);
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (y->data[i] >= 0.0) {
        if (i + 1 > vpos->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, vpos->size[0], &me_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        vpos->data[i] = vposlai->data[trueCount];
        trueCount++;
      }
    }
    b_i = vposlai->size[0];
    vposlai->size[0] = znonnegs->size[0];
    emxEnsureCapacity_real_T(sp, vposlai, b_i, &gk_emlrtRTEI);
    i = znonnegs->size[0];
    for (b_i = 0; b_i < i; b_i++) {
      vposlai->data[b_i] = -znonnegs->data[b_i] * logGneg;
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (y->data[i] >= 0.0) {
        trueCount++;
      }
    }
    if (trueCount != vposlai->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(trueCount, vposlai->size[0], &qb_emlrtECI,
                                      (emlrtCTX)sp);
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (y->data[i] >= 0.0) {
        if (i + 1 > wneg->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, wneg->size[0], &oe_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        wneg->data[i] = vposlai->data[trueCount];
        trueCount++;
      }
    }
    if (znonnegs->size[0] != z->size[0]) {
      emlrtSizeEqCheck1DR2012b(znonnegs->size[0], z->size[0], &sb_emlrtECI,
                               (emlrtCTX)sp);
    }
    i = znonnegs->size[0];
    for (b_i = 0; b_i < i; b_i++) {
      znonnegs->data[b_i] *= z->data[b_i] - logG;
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (y->data[i] >= 0.0) {
        trueCount++;
      }
    }
    if (trueCount != znonnegs->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(trueCount, znonnegs->size[0],
                                      &ub_emlrtECI, (emlrtCTX)sp);
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (y->data[i] >= 0.0) {
        if (i + 1 > w->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, w->size[0], &qe_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        w->data[i] = znonnegs->data[trueCount];
        trueCount++;
      }
    }
  }
  emxFree_real_T(&logvpos);
  /*  Transformation and constructed variables for negative values */
  if (muDoubleScalarAbs(2.0 - varargin_2) > 1.0E-8) {
    /*  la not equal 2 */
    /*  vnegtwomlambdai=vneg.^twomlambdai; */
    i = logvneg->size[0];
    b_i = znonnegs->size[0];
    znonnegs->size[0] = logvneg->size[0];
    emxEnsureCapacity_real_T(sp, znonnegs, b_i, &ik_emlrtRTEI);
    for (b_i = 0; b_i < i; b_i++) {
      znonnegs->data[b_i] = (2.0 - varargin_2) * logvneg->data[b_i];
    }
    st.site = &qs_emlrtRSI;
    b_exp(&st, znonnegs);
    Glaminus1 *= 2.0 - varargin_2;
    kpos = 1.0 / (2.0 - varargin_2);
    G = logGneg - kpos;
    b_i = vposlai->size[0];
    vposlai->size[0] = znonnegs->size[0];
    emxEnsureCapacity_real_T(sp, vposlai, b_i, &jk_emlrtRTEI);
    i = znonnegs->size[0];
    for (b_i = 0; b_i < i; b_i++) {
      vposlai->data[b_i] = (1.0 - znonnegs->data[b_i]) / Glaminus1;
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (!(y->data[i] >= 0.0)) {
        trueCount++;
      }
    }
    if (trueCount != vposlai->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(trueCount, vposlai->size[0], &xb_emlrtECI,
                                      (emlrtCTX)sp);
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (!(y->data[i] >= 0.0)) {
        if (i + 1 > vneg->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, vneg->size[0], &te_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        vneg->data[i] = vposlai->data[trueCount];
        trueCount++;
      }
    }
    i = vposlai->size[0];
    for (b_i = 0; b_i < i; b_i++) {
      vposlai->data[b_i] = -vposlai->data[b_i] * logGpos;
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (!(y->data[i] >= 0.0)) {
        trueCount++;
      }
    }
    if (trueCount != vposlai->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(trueCount, vposlai->size[0], &ac_emlrtECI,
                                      (emlrtCTX)sp);
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (!(y->data[i] >= 0.0)) {
        if (i + 1 > vpos->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, vpos->size[0], &ve_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        vpos->data[i] = vposlai->data[trueCount];
        trueCount++;
      }
    }
    if (znonnegs->size[0] != logvneg->size[0]) {
      emlrtSizeEqCheck1DR2012b(znonnegs->size[0], logvneg->size[0],
                               &cc_emlrtECI, (emlrtCTX)sp);
    }
    b_i = z->size[0];
    z->size[0] = znonnegs->size[0];
    emxEnsureCapacity_real_T(sp, z, b_i, &mk_emlrtRTEI);
    i = znonnegs->size[0];
    for (b_i = 0; b_i < i; b_i++) {
      z->data[b_i] =
          (znonnegs->data[b_i] * (logvneg->data[b_i] + G) - G) / Glaminus1;
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (!(y->data[i] >= 0.0)) {
        trueCount++;
      }
    }
    if (trueCount != z->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(trueCount, z->size[0], &ec_emlrtECI,
                                      (emlrtCTX)sp);
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (!(y->data[i] >= 0.0)) {
        if (i + 1 > wneg->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, wneg->size[0], &xe_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        wneg->data[i] = z->data[trueCount];
        trueCount++;
      }
    }
    kpos = logG - kpos;
    if (znonnegs->size[0] != logvneg->size[0]) {
      emlrtSizeEqCheck1DR2012b(znonnegs->size[0], logvneg->size[0],
                               &gc_emlrtECI, (emlrtCTX)sp);
    }
    i = znonnegs->size[0];
    for (b_i = 0; b_i < i; b_i++) {
      znonnegs->data[b_i] =
          (znonnegs->data[b_i] * (logvneg->data[b_i] + kpos) - kpos) /
          Glaminus1;
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (!(y->data[i] >= 0.0)) {
        trueCount++;
      }
    }
    if (trueCount != znonnegs->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(trueCount, znonnegs->size[0],
                                      &ic_emlrtECI, (emlrtCTX)sp);
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (!(y->data[i] >= 0.0)) {
        if (i + 1 > w->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, w->size[0], &af_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        w->data[i] = znonnegs->data[trueCount];
        trueCount++;
      }
    }
  } else {
    /*  la equals 2 */
    i = logvneg->size[0];
    b_i = vposlai->size[0];
    vposlai->size[0] = logvneg->size[0];
    emxEnsureCapacity_real_T(sp, vposlai, b_i, &hk_emlrtRTEI);
    for (b_i = 0; b_i < i; b_i++) {
      vposlai->data[b_i] = -logvneg->data[b_i] / G;
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (!(y->data[i] >= 0.0)) {
        trueCount++;
      }
    }
    if (trueCount != vposlai->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(trueCount, vposlai->size[0], &wb_emlrtECI,
                                      (emlrtCTX)sp);
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (!(y->data[i] >= 0.0)) {
        if (i + 1 > vneg->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, vneg->size[0], &se_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        vneg->data[i] = vposlai->data[trueCount];
        trueCount++;
      }
    }
    i = vposlai->size[0];
    for (b_i = 0; b_i < i; b_i++) {
      vposlai->data[b_i] = -vposlai->data[b_i] * logGpos;
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (!(y->data[i] >= 0.0)) {
        trueCount++;
      }
    }
    if (trueCount != vposlai->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(trueCount, vposlai->size[0], &yb_emlrtECI,
                                      (emlrtCTX)sp);
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (!(y->data[i] >= 0.0)) {
        if (i + 1 > vpos->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, vpos->size[0], &ue_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        vpos->data[i] = vposlai->data[trueCount];
        trueCount++;
      }
    }
    i = logvneg->size[0];
    b_i = z->size[0];
    z->size[0] = logvneg->size[0];
    emxEnsureCapacity_real_T(sp, z, b_i, &kk_emlrtRTEI);
    for (b_i = 0; b_i < i; b_i++) {
      z->data[b_i] = logvneg->data[b_i] / 2.0;
    }
    i = logvneg->size[0];
    if (logvneg->size[0] != z->size[0]) {
      emlrtSizeEqCheck1DR2012b(logvneg->size[0], z->size[0], &bc_emlrtECI,
                               (emlrtCTX)sp);
    }
    b_i = vposlai->size[0];
    vposlai->size[0] = logvneg->size[0];
    emxEnsureCapacity_real_T(sp, vposlai, b_i, &lk_emlrtRTEI);
    for (b_i = 0; b_i < i; b_i++) {
      vposlai->data[b_i] = logvneg->data[b_i] * (z->data[b_i] + logGneg) / G;
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (!(y->data[i] >= 0.0)) {
        trueCount++;
      }
    }
    if (trueCount != vposlai->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(trueCount, vposlai->size[0], &dc_emlrtECI,
                                      (emlrtCTX)sp);
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (!(y->data[i] >= 0.0)) {
        if (i + 1 > wneg->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, wneg->size[0], &we_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        wneg->data[i] = vposlai->data[trueCount];
        trueCount++;
      }
    }
    i = logvneg->size[0];
    if (logvneg->size[0] != z->size[0]) {
      emlrtSizeEqCheck1DR2012b(logvneg->size[0], z->size[0], &fc_emlrtECI,
                               (emlrtCTX)sp);
    }
    b_i = z->size[0];
    z->size[0] = logvneg->size[0];
    emxEnsureCapacity_real_T(sp, z, b_i, &nk_emlrtRTEI);
    for (b_i = 0; b_i < i; b_i++) {
      z->data[b_i] = logvneg->data[b_i] * (z->data[b_i] + logG) / G;
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (!(y->data[i] >= 0.0)) {
        trueCount++;
      }
    }
    if (trueCount != z->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(trueCount, z->size[0], &hc_emlrtECI,
                                      (emlrtCTX)sp);
    }
    end = y->size[0];
    trueCount = 0;
    for (i = 0; i < end; i++) {
      if (!(y->data[i] >= 0.0)) {
        if (i + 1 > w->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, w->size[0], &ye_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        w->data[i] = z->data[trueCount];
        trueCount++;
      }
    }
  }
  emxFree_real_T(&znonnegs);
  emxFree_real_T(&logvneg);
  /*  Compute residual sum of squares for null (reduced) model */
  st.site = &rs_emlrtRSI;
  mldivide(&st, X, vneg, vposlai);
  st.site = &ss_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  dynamic_size_checks(&b_st, X, vposlai, X->size[1], vposlai->size[0]);
  b_st.site = &mb_emlrtRSI;
  mtimes(&b_st, X, vposlai, z);
  if (vneg->size[0] != z->size[0]) {
    emlrtSizeEqCheck1DR2012b(vneg->size[0], z->size[0], &jc_emlrtECI,
                             (emlrtCTX)sp);
  }
  /*  Sum of squares of residuals */
  st.site = &ts_emlrtRSI;
  b_st.site = &jl_emlrtRSI;
  c_st.site = &rf_emlrtRSI;
  b_i = z->size[0];
  z->size[0] = vneg->size[0];
  emxEnsureCapacity_real_T(&c_st, z, b_i, &ok_emlrtRTEI);
  i = vneg->size[0];
  for (b_i = 0; b_i < i; b_i++) {
    z->data[b_i] = vneg->data[b_i] - z->data[b_i];
  }
  kpos = muDoubleScalarPower(b_norm(z), 2.0);
  /*  Define augmented X matrix for overall constructed variable */
  st.site = &us_emlrtRSI;
  b_st.site = &ee_emlrtRSI;
  if ((X->size[0] != 0) && (X->size[1] != 0)) {
    trueCount = X->size[0];
  } else if (w->size[0] != 0) {
    trueCount = w->size[0];
  } else {
    trueCount = X->size[0];
  }
  c_st.site = &fe_emlrtRSI;
  if ((X->size[0] != trueCount) && ((X->size[0] != 0) && (X->size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((w->size[0] != trueCount) && (w->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (trueCount == 0);
  if (empty_non_axis_sizes || ((X->size[0] != 0) && (X->size[1] != 0))) {
    i = X->size[1];
  } else {
    i = 0;
  }
  if (empty_non_axis_sizes || (w->size[0] != 0)) {
    sizes_idx_1 = 1;
  } else {
    sizes_idx_1 = 0;
  }
  emxInit_real_T(&b_st, &Xw, 2, &pk_emlrtRTEI, true);
  b_i = Xw->size[0] * Xw->size[1];
  Xw->size[0] = trueCount;
  Xw->size[1] = i + sizes_idx_1;
  emxEnsureCapacity_real_T(&b_st, Xw, b_i, &pk_emlrtRTEI);
  for (b_i = 0; b_i < i; b_i++) {
    for (n = 0; n < trueCount; n++) {
      Xw->data[n + Xw->size[0] * b_i] = X->data[n + trueCount * b_i];
    }
  }
  end = sizes_idx_1;
  for (b_i = 0; b_i < end; b_i++) {
    for (n = 0; n < trueCount; n++) {
      Xw->data[n + Xw->size[0] * i] = w->data[n];
    }
  }
  emxFree_real_T(&w);
  /*  New code */
  st.site = &vs_emlrtRSI;
  mldivide(&st, Xw, vneg, vposlai);
  st.site = &ws_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  dynamic_size_checks(&b_st, Xw, vposlai, Xw->size[1], vposlai->size[0]);
  b_st.site = &mb_emlrtRSI;
  mtimes(&b_st, Xw, vposlai, z);
  if (vneg->size[0] != z->size[0]) {
    emlrtSizeEqCheck1DR2012b(vneg->size[0], z->size[0], &kc_emlrtECI,
                             (emlrtCTX)sp);
  }
  /*  Sum of squares of residuals */
  st.site = &xs_emlrtRSI;
  b_st.site = &jl_emlrtRSI;
  c_st.site = &rf_emlrtRSI;
  b_i = z->size[0];
  z->size[0] = vneg->size[0];
  emxEnsureCapacity_real_T(&c_st, z, b_i, &qk_emlrtRTEI);
  i = vneg->size[0];
  for (b_i = 0; b_i < i; b_i++) {
    z->data[b_i] = vneg->data[b_i] - z->data[b_i];
  }
  G = muDoubleScalarPower(b_norm(z), 2.0);
  if (vposlai->size[0] < 1) {
    emlrtDynamicBoundsCheckR2012b(vposlai->size[0], 1, vposlai->size[0],
                                  &bf_emlrtBCI, (emlrtCTX)sp);
  }
  G = (kpos - G) / (G / ((real_T)(X->size[0] - X->size[1]) - 1.0));
  st.site = &ys_emlrtRSI;
  if (G < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &kb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  G = muDoubleScalarSqrt(G);
  outSC_Score_data[0] =
      -muDoubleScalarSign(vposlai->data[vposlai->size[0] - 1]) * G;
  /*  if vpos is empty all the observations are negative */
  if (vposboo) {
    /*  Define augmented X matrix */
    st.site = &at_emlrtRSI;
    b_st.site = &ee_emlrtRSI;
    if ((X->size[0] != 0) && (X->size[1] != 0)) {
      trueCount = X->size[0];
    } else if (vpos->size[0] != 0) {
      trueCount = vpos->size[0];
    } else {
      trueCount = X->size[0];
    }
    c_st.site = &fe_emlrtRSI;
    if ((X->size[0] != trueCount) && ((X->size[0] != 0) && (X->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &b_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    if ((vpos->size[0] != trueCount) && (vpos->size[0] != 0)) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &b_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    empty_non_axis_sizes = (trueCount == 0);
    if (empty_non_axis_sizes || ((X->size[0] != 0) && (X->size[1] != 0))) {
      i = X->size[1];
    } else {
      i = 0;
    }
    if (empty_non_axis_sizes || (vpos->size[0] != 0)) {
      sizes_idx_1 = 1;
    } else {
      sizes_idx_1 = 0;
    }
    b_i = Xw->size[0] * Xw->size[1];
    Xw->size[0] = trueCount;
    Xw->size[1] = i + sizes_idx_1;
    emxEnsureCapacity_real_T(&b_st, Xw, b_i, &rk_emlrtRTEI);
    for (b_i = 0; b_i < i; b_i++) {
      for (n = 0; n < trueCount; n++) {
        Xw->data[n + Xw->size[0] * b_i] = X->data[n + trueCount * b_i];
      }
    }
    end = sizes_idx_1;
    for (b_i = 0; b_i < end; b_i++) {
      for (n = 0; n < trueCount; n++) {
        Xw->data[n + Xw->size[0] * i] = vpos->data[n];
      }
    }
    /*  OLD slow code */
    /*          [Q,R] = qr(Xw,0); */
    /*          beta = R\(Q'*z); */
    /*          residuals = z - Xw*beta; */
    /*          % Sum of squares of residuals */
    /*          sse = norm(residuals)^2; */
    /*          % Compute t stat for constructed added variable */
    /*          ri = R\eyep1; */
    /*          xtxi = ri*ri'; */
    /*          se = sqrt(diag(xtxi*sse/(n-p-1))); */
    /*          Sc(i,1) = -beta(end)/se(end); */
    /*  New code */
    st.site = &bt_emlrtRSI;
    mldivide(&st, Xw, vneg, vposlai);
    st.site = &ct_emlrtRSI;
    b_st.site = &nb_emlrtRSI;
    dynamic_size_checks(&b_st, Xw, vposlai, Xw->size[1], vposlai->size[0]);
    b_st.site = &mb_emlrtRSI;
    mtimes(&b_st, Xw, vposlai, z);
    if (vneg->size[0] != z->size[0]) {
      emlrtSizeEqCheck1DR2012b(vneg->size[0], z->size[0], &lc_emlrtECI,
                               (emlrtCTX)sp);
    }
    /*  Sum of squares of residuals */
    st.site = &dt_emlrtRSI;
    b_st.site = &jl_emlrtRSI;
    c_st.site = &rf_emlrtRSI;
    b_i = z->size[0];
    z->size[0] = vneg->size[0];
    emxEnsureCapacity_real_T(&c_st, z, b_i, &uk_emlrtRTEI);
    i = vneg->size[0];
    for (b_i = 0; b_i < i; b_i++) {
      z->data[b_i] = vneg->data[b_i] - z->data[b_i];
    }
    G = muDoubleScalarPower(b_norm(z), 2.0);
    if (vposlai->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(vposlai->size[0], 1, vposlai->size[0],
                                    &cf_emlrtBCI, (emlrtCTX)sp);
    }
    G = (kpos - G) / (G / ((real_T)(X->size[0] - X->size[1]) - 1.0));
    st.site = &et_emlrtRSI;
    if (G < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &st, &kb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    G = muDoubleScalarSqrt(G);
    outSC_Score_data[1] =
        -muDoubleScalarSign(vposlai->data[vposlai->size[0] - 1]) * G;
  } else {
    outSC_Score_data[1] = rtNaN;
  }
  /*  if vneg is empty all the observations are negative */
  if (vnegboo) {
    /*  Define augmented X matrix */
    st.site = &ft_emlrtRSI;
    b_st.site = &ee_emlrtRSI;
    if ((X->size[0] != 0) && (X->size[1] != 0)) {
      trueCount = X->size[0];
    } else if (wneg->size[0] != 0) {
      trueCount = wneg->size[0];
    } else {
      trueCount = X->size[0];
    }
    c_st.site = &fe_emlrtRSI;
    if ((X->size[0] != trueCount) && ((X->size[0] != 0) && (X->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &b_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    if ((wneg->size[0] != trueCount) && (wneg->size[0] != 0)) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &b_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    empty_non_axis_sizes = (trueCount == 0);
    if (empty_non_axis_sizes || ((X->size[0] != 0) && (X->size[1] != 0))) {
      i = X->size[1];
    } else {
      i = 0;
    }
    if (empty_non_axis_sizes || (wneg->size[0] != 0)) {
      sizes_idx_1 = 1;
    } else {
      sizes_idx_1 = 0;
    }
    b_i = Xw->size[0] * Xw->size[1];
    Xw->size[0] = trueCount;
    Xw->size[1] = i + sizes_idx_1;
    emxEnsureCapacity_real_T(&b_st, Xw, b_i, &sk_emlrtRTEI);
    for (b_i = 0; b_i < i; b_i++) {
      for (n = 0; n < trueCount; n++) {
        Xw->data[n + Xw->size[0] * b_i] = X->data[n + trueCount * b_i];
      }
    }
    end = sizes_idx_1;
    for (b_i = 0; b_i < end; b_i++) {
      for (n = 0; n < trueCount; n++) {
        Xw->data[n + Xw->size[0] * i] = wneg->data[n];
      }
    }
    /*  OLD slow code */
    /*          [Q,R] = qr(Xw,0); */
    /*          beta = R\(Q'*z); */
    /*          residuals = z - Xw*beta; */
    /*          % Sum of squares of residuals */
    /*          sse = norm(residuals)^2; */
    /*          % Compute t stat for constructed added variable */
    /*          ri = R\eyep1; */
    /*          xtxi = ri*ri'; */
    /*          se = sqrt(diag(xtxi*sse/(n-p-1))); */
    /*          Sc(i,2) = -beta(end)/se(end); */
    /*  New code */
    st.site = &gt_emlrtRSI;
    mldivide(&st, Xw, vneg, vposlai);
    st.site = &ht_emlrtRSI;
    b_st.site = &nb_emlrtRSI;
    dynamic_size_checks(&b_st, Xw, vposlai, Xw->size[1], vposlai->size[0]);
    b_st.site = &mb_emlrtRSI;
    mtimes(&b_st, Xw, vposlai, z);
    if (vneg->size[0] != z->size[0]) {
      emlrtSizeEqCheck1DR2012b(vneg->size[0], z->size[0], &mc_emlrtECI,
                               (emlrtCTX)sp);
    }
    /*  Sum of squares of residuals */
    st.site = &it_emlrtRSI;
    b_st.site = &jl_emlrtRSI;
    c_st.site = &rf_emlrtRSI;
    b_i = z->size[0];
    z->size[0] = vneg->size[0];
    emxEnsureCapacity_real_T(&c_st, z, b_i, &vk_emlrtRTEI);
    i = vneg->size[0];
    for (b_i = 0; b_i < i; b_i++) {
      z->data[b_i] = vneg->data[b_i] - z->data[b_i];
    }
    G = muDoubleScalarPower(b_norm(z), 2.0);
    if (vposlai->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(vposlai->size[0], 1, vposlai->size[0],
                                    &df_emlrtBCI, (emlrtCTX)sp);
    }
    G = (kpos - G) / (G / ((real_T)(X->size[0] - X->size[1]) - 1.0));
    st.site = &jt_emlrtRSI;
    if (G < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &st, &kb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    G = muDoubleScalarSqrt(G);
    G *= -muDoubleScalarSign(vposlai->data[vposlai->size[0] - 1]);
    outSC_Score_data[2] = G;
  } else {
    G = rtNaN;
    outSC_Score_data[2] = rtNaN;
  }
  /*  Compute the F test for the joint presence of both constructed */
  /*  variables */
  if (vposboo && vnegboo) {
    /*  Compute residual sum of squares for full model */
    st.site = &kt_emlrtRSI;
    b_st.site = &ee_emlrtRSI;
    if ((X->size[0] != 0) && (X->size[1] != 0)) {
      trueCount = X->size[0];
    } else if (vpos->size[0] != 0) {
      trueCount = vpos->size[0];
    } else if (wneg->size[0] != 0) {
      trueCount = wneg->size[0];
    } else {
      trueCount = X->size[0];
    }
    c_st.site = &fe_emlrtRSI;
    if ((X->size[0] != trueCount) && ((X->size[0] != 0) && (X->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &b_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    if ((vpos->size[0] != trueCount) && (vpos->size[0] != 0)) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &b_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    if ((wneg->size[0] != trueCount) && (wneg->size[0] != 0)) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &b_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    empty_non_axis_sizes = (trueCount == 0);
    if (empty_non_axis_sizes || ((X->size[0] != 0) && (X->size[1] != 0))) {
      i = X->size[1];
    } else {
      i = 0;
    }
    if (empty_non_axis_sizes || (vpos->size[0] != 0)) {
      i1 = 1;
    } else {
      i1 = 0;
    }
    if (empty_non_axis_sizes || (wneg->size[0] != 0)) {
      sizes_idx_1 = 1;
    } else {
      sizes_idx_1 = 0;
    }
    b_i = Xw->size[0] * Xw->size[1];
    Xw->size[0] = trueCount;
    n = i + i1;
    Xw->size[1] = n + sizes_idx_1;
    emxEnsureCapacity_real_T(&b_st, Xw, b_i, &tk_emlrtRTEI);
    for (b_i = 0; b_i < i; b_i++) {
      for (i2 = 0; i2 < trueCount; i2++) {
        Xw->data[i2 + Xw->size[0] * b_i] = X->data[i2 + trueCount * b_i];
      }
    }
    end = i1;
    for (b_i = 0; b_i < end; b_i++) {
      for (i2 = 0; i2 < trueCount; i2++) {
        Xw->data[i2 + Xw->size[0] * i] = vpos->data[i2];
      }
    }
    i = sizes_idx_1;
    for (b_i = 0; b_i < i; b_i++) {
      for (i2 = 0; i2 < trueCount; i2++) {
        Xw->data[i2 + Xw->size[0] * n] = wneg->data[i2];
      }
    }
    st.site = &lt_emlrtRSI;
    mldivide(&st, Xw, vneg, vposlai);
    st.site = &mt_emlrtRSI;
    b_st.site = &nb_emlrtRSI;
    dynamic_size_checks(&b_st, Xw, vposlai, Xw->size[1], vposlai->size[0]);
    b_st.site = &mb_emlrtRSI;
    mtimes(&b_st, Xw, vposlai, z);
    if (vneg->size[0] != z->size[0]) {
      emlrtSizeEqCheck1DR2012b(vneg->size[0], z->size[0], &nc_emlrtECI,
                               (emlrtCTX)sp);
    }
    /*  Sum of squares of residuals */
    st.site = &nt_emlrtRSI;
    b_st.site = &jl_emlrtRSI;
    i = vneg->size[0];
    for (b_i = 0; b_i < i; b_i++) {
      vneg->data[b_i] -= z->data[b_i];
    }
    G = muDoubleScalarPower(b_norm(vneg), 2.0);
    outSC_Score_data[3] =
        (kpos - G) / 2.0 / (G / ((real_T)(X->size[0] - X->size[1]) - 2.0));
  } else if (vposboo) {
    /*  If there are just positive observations F test is the square of */
    /*  the t test for positive */
    st.site = &ot_emlrtRSI;
    b_st.site = &jl_emlrtRSI;
    outSC_Score_data[3] = muDoubleScalarPower(outSC_Score_data[1], 2.0);
  } else {
    /*  in this case there are just negative observations */
    st.site = &pt_emlrtRSI;
    b_st.site = &jl_emlrtRSI;
    outSC_Score_data[3] = muDoubleScalarPower(G, 2.0);
  }
  emxFree_real_T(&z);
  emxFree_real_T(&Xw);
  emxFree_real_T(&vposlai);
  emxFree_real_T(&wneg);
  emxFree_real_T(&vpos);
  emxFree_real_T(&vneg);
  if (*emlrtBreakCheckR2012bFlagVar != 0) {
    emlrtBreakCheckR2012b((emlrtCTX)sp);
  }
  /*  Store values of the score test inside structure outSC */
  /*  Also store MLE of lambda */
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (ScoreYJall.c) */
