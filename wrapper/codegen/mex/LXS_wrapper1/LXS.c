/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LXS.c
 *
 * Code generation for function 'LXS'
 *
 */

/* Include files */
#include "LXS.h"
#include "LXS_wrapper1_data.h"
#include "LXS_wrapper1_emxutil.h"
#include "LXS_wrapper1_mexutil.h"
#include "LXS_wrapper1_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "gammainc.h"
#include "gammaincinv.h"
#include "indexShapeCheck.h"
#include "mldivide.h"
#include "mtimes.h"
#include "power.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "sum.h"
#include "warning.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo ueb_emlrtRSI = {
    1233,                                          /* lineNo */
    "IRWLSreg",                                    /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo veb_emlrtRSI = {
    1231,                                          /* lineNo */
    "IRWLSreg",                                    /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo web_emlrtRSI = {
    1229,                                          /* lineNo */
    "IRWLSreg",                                    /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo xeb_emlrtRSI = {
    1219,                                          /* lineNo */
    "IRWLSreg",                                    /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo yeb_emlrtRSI = {
    1214,                                          /* lineNo */
    "IRWLSreg",                                    /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo afb_emlrtRSI = {
    1211,                                          /* lineNo */
    "IRWLSreg",                                    /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo bfb_emlrtRSI = {
    1193,                                          /* lineNo */
    "IRWLSreg",                                    /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo cfb_emlrtRSI = {
    1192,                                          /* lineNo */
    "IRWLSreg",                                    /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo dfb_emlrtRSI = {
    1189,                                          /* lineNo */
    "IRWLSreg",                                    /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo efb_emlrtRSI = {
    1186,                                          /* lineNo */
    "IRWLSreg",                                    /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo ffb_emlrtRSI =
    {
        13,    /* lineNo */
        "any", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\any.m" /* pathName
                                                                        */
};

static emlrtRSInfo gfb_emlrtRSI =
    {
        143,        /* lineNo */
        "allOrAny", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny."
        "m" /* pathName */
};

static emlrtRSInfo ngb_emlrtRSI = {
    1285,                                          /* lineNo */
    "corfactorRAW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo ogb_emlrtRSI = {
    1284,                                          /* lineNo */
    "corfactorRAW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo pgb_emlrtRSI = {
    1134,                                          /* lineNo */
    "LXS/asvar",                                   /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo qgb_emlrtRSI = {
    1135,                                          /* lineNo */
    "LXS/asvar",                                   /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo rgb_emlrtRSI = {
    1137,                                          /* lineNo */
    "LXS/asvar",                                   /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo sgb_emlrtRSI = {
    1138,                                          /* lineNo */
    "LXS/asvar",                                   /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo tgb_emlrtRSI = {
    1139,                                          /* lineNo */
    "LXS/asvar",                                   /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo ugb_emlrtRSI = {
    1140,                                          /* lineNo */
    "LXS/asvar",                                   /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo hhb_emlrtRSI = {
    1339,                                          /* lineNo */
    "corfactorREW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo ihb_emlrtRSI = {
    1338,                                          /* lineNo */
    "corfactorREW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtMCInfo jb_emlrtMCI = {
    1303,                                          /* lineNo */
    5,                                             /* colNo */
    "corfactorRAW",                                /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtMCInfo kb_emlrtMCI = {
    1304,                                          /* lineNo */
    5,                                             /* colNo */
    "corfactorRAW",                                /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtMCInfo lb_emlrtMCI = {
    1305,                                          /* lineNo */
    5,                                             /* colNo */
    "corfactorRAW",                                /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtMCInfo mb_emlrtMCI = {
    1306,                                          /* lineNo */
    5,                                             /* colNo */
    "corfactorRAW",                                /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtMCInfo nb_emlrtMCI = {
    1353,                                          /* lineNo */
    5,                                             /* colNo */
    "corfactorREW",                                /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtMCInfo ob_emlrtMCI = {
    1354,                                          /* lineNo */
    5,                                             /* colNo */
    "corfactorREW",                                /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtMCInfo pb_emlrtMCI = {
    1355,                                          /* lineNo */
    5,                                             /* colNo */
    "corfactorREW",                                /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtMCInfo qb_emlrtMCI = {
    1356,                                          /* lineNo */
    5,                                             /* colNo */
    "corfactorREW",                                /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtBCInfo ts_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    1251,                                           /* lineNo */
    17,                                             /* colNo */
    "i_r2s",                                        /* aName */
    "IRWLSreg",                                     /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo us_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    1251,                                           /* lineNo */
    15,                                             /* colNo */
    "i_r2s",                                        /* aName */
    "IRWLSreg",                                     /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo vs_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    1233,                                           /* lineNo */
    23,                                             /* colNo */
    "r2s",                                          /* aName */
    "IRWLSreg",                                     /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo ws_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    1233,                                           /* lineNo */
    21,                                             /* colNo */
    "r2s",                                          /* aName */
    "IRWLSreg",                                     /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtECInfo yc_emlrtECI = {
    -1,                                            /* nDims */
    1229,                                          /* lineNo */
    11,                                            /* colNo */
    "IRWLSreg",                                    /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtECInfo ad_emlrtECI = {
    -1,                                            /* nDims */
    1226,                                          /* lineNo */
    21,                                            /* colNo */
    "IRWLSreg",                                    /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtBCInfo xs_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    1211,                                           /* lineNo */
    21,                                             /* colNo */
    "i_r2s",                                        /* aName */
    "IRWLSreg",                                     /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo ys_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    1211,                                           /* lineNo */
    19,                                             /* colNo */
    "i_r2s",                                        /* aName */
    "IRWLSreg",                                     /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo at_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    1193,                                           /* lineNo */
    27,                                             /* colNo */
    "r2s",                                          /* aName */
    "IRWLSreg",                                     /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtDCInfo oc_emlrtDCI = {
    1193,                                           /* lineNo */
    27,                                             /* colNo */
    "IRWLSreg",                                     /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    1                                               /* checkKind */
};

static emlrtBCInfo bt_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    1193,                                           /* lineNo */
    25,                                             /* colNo */
    "r2s",                                          /* aName */
    "IRWLSreg",                                     /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtECInfo bd_emlrtECI = {
    -1,                                            /* nDims */
    1186,                                          /* lineNo */
    7,                                             /* colNo */
    "IRWLSreg",                                    /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtBCInfo ct_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    1214,                                           /* lineNo */
    17,                                             /* colNo */
    "X",                                            /* aName */
    "IRWLSreg",                                     /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo dt_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    1251,                                           /* lineNo */
    9,                                              /* colNo */
    "weights",                                      /* aName */
    "IRWLSreg",                                     /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo et_emlrtBCI = {
    -1,                                             /* iFirst */
    -1,                                             /* iLast */
    1214,                                           /* lineNo */
    30,                                             /* colNo */
    "y",                                            /* aName */
    "IRWLSreg",                                     /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m", /* pName */
    0                                               /* checkKind */
};

static emlrtRTEInfo ex_emlrtRTEI = {
    1186,                                          /* lineNo */
    7,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo fx_emlrtRTEI = {
    1193,                                          /* lineNo */
    21,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo gx_emlrtRTEI = {
    1198,                                          /* lineNo */
    1,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo hx_emlrtRTEI = {
    1201,                                          /* lineNo */
    1,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo ix_emlrtRTEI = {
    1252,                                          /* lineNo */
    1,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo jx_emlrtRTEI = {
    1211,                                          /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo kx_emlrtRTEI = {
    1214,                                          /* lineNo */
    15,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo lx_emlrtRTEI = {
    1251,                                          /* lineNo */
    9,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo mx_emlrtRTEI = {
    1214,                                          /* lineNo */
    28,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo nx_emlrtRTEI = {
    15,      /* lineNo */
    9,       /* colNo */
    "isnan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\isnan.m" /* pName
                                                                        */
};

static emlrtRTEInfo ox_emlrtRTEI = {
    1220,                                          /* lineNo */
    9,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo px_emlrtRTEI = {
    1226,                                          /* lineNo */
    21,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo qx_emlrtRTEI = {
    1229,                                          /* lineNo */
    11,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo rx_emlrtRTEI = {
    1233,                                          /* lineNo */
    17,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo sx_emlrtRTEI = {
    1235,                                          /* lineNo */
    5,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo tx_emlrtRTEI = {
    1189,                                          /* lineNo */
    1,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo ux_emlrtRTEI = {
    1192,                                          /* lineNo */
    8,                                             /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo vx_emlrtRTEI = {
    1153,                                          /* lineNo */
    21,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static emlrtRTEInfo wx_emlrtRTEI = {
    1219,                                          /* lineNo */
    13,                                            /* colNo */
    "LXS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pName */
};

static const char_T cv15[69] = {
    'C', 'o', 'r', 'r', 'e', 'c', 't', 'i', 'o', 'n', ' ', 'f', 'a', 'c',
    't', 'o', 'r', ' ', 'f', 'o', 'r', ' ', 'c', 'o', 'v', 'a', 'r', 'i',
    'a', 'n', 'c', 'e', ' ', 'm', 'a', 't', 'r', 'i', 'x', ' ', 'b', 'a',
    's', 'e', 'd', ' ', 'o', 'n', ' ', 's', 'i', 'm', 'u', 'l', 'a', 't',
    'i', 'o', 'n', 's', ' ', 'f', 'o', 'u', 'n', 'd', ' ', '=', '1'};

static const char_T cv16[75] = {
    'G', 'i', 'v', 'e', 'n', ' ', 't', 'h', 'a', 't', ' ', 't', 'h', 'i', 's',
    ' ', 'v', 'a', 'l', 'u', 'e', ' ', 'i', 's', ' ', 'c', 'l', 'e', 'a', 'r',
    'l', 'y', ' ', 'w', 'r', 'o', 'n', 'g', ' ', 'w', 'e', ' ', 'p', 'u', 't',
    ' ', 'i', 't', ' ', 'e', 'q', 'u', 'a', 'l', ' ', 't', 'o', ' ', '1', ' ',
    '(', 'n', 'o', ' ', 'c', 'o', 'r', 'r', 'e', 'c', 't', 'i', 'o', 'n', ')'};

static const char_T cv17[51] = {
    'T', 'h', 'i', 's', ' ', 'm', 'a', 'y', ' ', 'h', 'a', 'p', 'p',
    'e', 'n', ' ', 'w', 'h', 'e', 'n', ' ', 'n', ' ', 'i', 's', ' ',
    'v', 'e', 'r', 'y', ' ', 's', 'm', 'a', 'l', 'l', ' ', 'a', 'n',
    'd', ' ', 'p', ' ', 'i', 's', ' ', 'l', 'a', 'r', 'g', 'e'};

static emlrtRSInfo mib_emlrtRSI = {
    1356,                                          /* lineNo */
    "corfactorREW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo nib_emlrtRSI = {
    1355,                                          /* lineNo */
    "corfactorREW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo oib_emlrtRSI = {
    1354,                                          /* lineNo */
    "corfactorREW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo pib_emlrtRSI = {
    1353,                                          /* lineNo */
    "corfactorREW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo qib_emlrtRSI = {
    1306,                                          /* lineNo */
    "corfactorRAW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo rib_emlrtRSI = {
    1305,                                          /* lineNo */
    "corfactorRAW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo sib_emlrtRSI = {
    1304,                                          /* lineNo */
    "corfactorRAW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

static emlrtRSInfo tib_emlrtRSI = {
    1303,                                          /* lineNo */
    "corfactorRAW",                                /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LXS.m" /* pathName */
};

/* Function Definitions */
void IRWLSreg(const emlrtStack *sp, const emxArray_real_T *y,
              const emxArray_real_T *X, const emxArray_real_T *initialbeta,
              real_T refsteps, real_T reftol, real_T h,
              emxArray_real_T *outIRWLS_betarw, real_T *outIRWLS_numscale2rw,
              emxArray_real_T *outIRWLS_weights)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_boolean_T *b;
  emxArray_int32_T *i_r2s;
  emxArray_int32_T *r;
  emxArray_real_T *b_X;
  emxArray_real_T *b_y;
  emxArray_real_T *beta;
  emxArray_real_T *r2;
  real_T betadiff;
  real_T d_y;
  real_T initialscale;
  real_T iter;
  int32_T iv[2];
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  boolean_T c_y;
  boolean_T exitg1;
  boolean_T exitg2;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /*  ------------------------------------------------------------------- */
  /*  subfunction IRWLSreg */
  /*  ------------------------------------------------------------------- */
  /* IRWLSreg (iterative reweighted least squares) does refsteps refining steps
   * from initialbeta */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     y:         A vector with n elements that contains the response
   * variable. */
  /*                It can be both a row or column vector. */
  /*     X :        Data matrix of explanatory variables (also called
   * 'regressors') */
  /*                of dimension (n x p). Rows of X represent observations, and
   */
  /*                columns represent variables. */
  /*  initialbeta : p x 1 vector containing initial estimate of beta */
  /*    refsteps  : scalar, number of refining (IRLS) steps */
  /*    reftol    : relative convergence tolerance */
  /*                Default value is 1e-7 */
  /*       h      : scalar. number of observations with smallest residuals to
   * consider */
  /*  */
  /*   Output: */
  /*  */
  /*   The output consists of a structure 'outIRWLS' containing the following
   * fields: */
  /*       betarw  : p x 1 vector. Estimate of beta after refsteps refining
   * steps */
  /*   numscale2rw : scalar. Sum of the smallest h squared residuals from */
  /*                 final iteration (after refsteps refining step).It is the */
  /*                 numerator of the estimate of the squared scale. */
  /*      weights  : n x 1 vector. Weights assigned to each observation */
  /*                In this case weights are 0,1. */
  /*                1 for the units associated with the smallest h squared
   * residuals from */
  /*                final iteration */
  /*                0 for the other units. */
  /*  */
  /*  Residuals for the initialbeta */
  st.site = &efb_emlrtRSI;
  b_st.site = &fc_emlrtRSI;
  if (initialbeta->size[0] != X->size[1]) {
    if (((X->size[0] == 1) && (X->size[1] == 1)) ||
        (initialbeta->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &b_st, &i_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &h_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  emxInit_real_T(&b_st, &r2, 1, &tx_emlrtRTEI, true);
  b_st.site = &ec_emlrtRSI;
  mtimes(&b_st, X, initialbeta, r2);
  if (y->size[0] != r2->size[0]) {
    emlrtSizeEqCheck1DR2012b(y->size[0], r2->size[0], &bd_emlrtECI,
                             (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &b_y, 1, &ex_emlrtRTEI, true);
  /*  Squared residuals for all the observations */
  i = b_y->size[0];
  b_y->size[0] = y->size[0];
  emxEnsureCapacity_real_T(sp, b_y, i, &ex_emlrtRTEI);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] = y->data[i] - r2->data[i];
  }
  emxInit_int32_T(sp, &i_r2s, 1, &ux_emlrtRTEI, true);
  st.site = &dfb_emlrtRSI;
  power(&st, b_y, r2);
  /*  Ordering of squared residuals */
  st.site = &cfb_emlrtRSI;
  b_st.site = &kl_emlrtRSI;
  sort(&b_st, r2, i_r2s);
  if (1 > r2->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, r2->size[0], &bt_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  if (h != (int32_T)muDoubleScalarFloor(h)) {
    emlrtIntegerCheckR2012b(h, &oc_emlrtDCI, (emlrtCTX)sp);
  }
  loop_ub_tmp = (int32_T)h;
  if (((int32_T)h < 1) || ((int32_T)h > r2->size[0])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)h, 1, r2->size[0], &at_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &beta, 1, &gx_emlrtRTEI, true);
  iv[0] = 1;
  iv[1] = (int32_T)h;
  st.site = &bfb_emlrtRSI;
  b_indexShapeCheck(&st, r2->size[0], iv);
  i = r2->size[0];
  r2->size[0] = (int32_T)h;
  emxEnsureCapacity_real_T(sp, r2, i, &fx_emlrtRTEI);
  st.site = &bfb_emlrtRSI;
  initialscale = sum(&st, r2);
  /*  Initialize parameters for the refining steps loop */
  iter = 0.0;
  betadiff = 9999.0;
  i = beta->size[0];
  beta->size[0] = initialbeta->size[0];
  emxEnsureCapacity_real_T(sp, beta, i, &gx_emlrtRTEI);
  loop_ub = initialbeta->size[0];
  for (i = 0; i < loop_ub; i++) {
    beta->data[i] = initialbeta->data[i];
  }
  *outIRWLS_numscale2rw = rtInf;
  i = outIRWLS_betarw->size[0];
  outIRWLS_betarw->size[0] = initialbeta->size[0];
  emxEnsureCapacity_real_T(sp, outIRWLS_betarw, i, &hx_emlrtRTEI);
  loop_ub = initialbeta->size[0];
  for (i = 0; i < loop_ub; i++) {
    outIRWLS_betarw->data[i] = initialbeta->data[i];
  }
  /*  Initialization for MATLAB Ccoder */
  /*  update of weights moved at the end of the function */
  /*  weights=zeros(n,1); */
  /*  weights(i_r2s(1:h))=1; */
  emxInit_boolean_T(sp, &b, 1, &wx_emlrtRTEI, true);
  emxInit_real_T(sp, &b_X, 2, &kx_emlrtRTEI, true);
  exitg1 = false;
  while ((!exitg1) && ((betadiff > reftol) && (iter < refsteps))) {
    iter++;
    /*  i_r2s= units with smallest h squared residuals */
    if (1 > i_r2s->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i_r2s->size[0], &ys_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (((int32_T)h < 1) || ((int32_T)h > i_r2s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)h, 1, i_r2s->size[0], &xs_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    iv[0] = 1;
    iv[1] = (int32_T)h;
    st.site = &afb_emlrtRSI;
    b_indexShapeCheck(&st, i_r2s->size[0], iv);
    i = i_r2s->size[0];
    i_r2s->size[0] = (int32_T)h;
    emxEnsureCapacity_int32_T(sp, i_r2s, i, &jx_emlrtRTEI);
    /*  new coefficients based on units with smallest h squared */
    /*  residuals */
    loop_ub = X->size[1];
    i = b_X->size[0] * b_X->size[1];
    b_X->size[0] = (int32_T)h;
    b_X->size[1] = X->size[1];
    emxEnsureCapacity_real_T(sp, b_X, i, &kx_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < loop_ub_tmp; i1++) {
        if ((i_r2s->data[i1] < 1) || (i_r2s->data[i1] > X->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i_r2s->data[i1], 1, X->size[0],
                                        &ct_emlrtBCI, (emlrtCTX)sp);
        }
        b_X->data[i1 + b_X->size[0] * i] =
            X->data[(i_r2s->data[i1] + X->size[0] * i) - 1];
      }
    }
    i = b_y->size[0];
    b_y->size[0] = (int32_T)h;
    emxEnsureCapacity_real_T(sp, b_y, i, &mx_emlrtRTEI);
    for (i = 0; i < loop_ub_tmp; i++) {
      if ((i_r2s->data[i] < 1) || (i_r2s->data[i] > y->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i_r2s->data[i], 1, y->size[0],
                                      &et_emlrtBCI, (emlrtCTX)sp);
      }
      b_y->data[i] = y->data[i_r2s->data[i] - 1];
    }
    st.site = &yeb_emlrtRSI;
    mldivide(&st, b_X, b_y, outIRWLS_betarw);
    /*  exit from the loop if the new beta has singular values. In such a */
    /*  case, any intermediate estimate is not reliable and we can just */
    /*  keep the initialbeta and initial scale. */
    i = b->size[0];
    b->size[0] = outIRWLS_betarw->size[0];
    emxEnsureCapacity_boolean_T(sp, b, i, &nx_emlrtRTEI);
    loop_ub = outIRWLS_betarw->size[0];
    for (i = 0; i < loop_ub; i++) {
      b->data[i] = muDoubleScalarIsNaN(outIRWLS_betarw->data[i]);
    }
    st.site = &xeb_emlrtRSI;
    b_st.site = &ffb_emlrtRSI;
    c_y = false;
    c_st.site = &gfb_emlrtRSI;
    if ((1 <= b->size[0]) && (b->size[0] > 2147483646)) {
      d_st.site = &hc_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    loop_ub = 1;
    exitg2 = false;
    while ((!exitg2) && (loop_ub <= b->size[0])) {
      if (!b->data[loop_ub - 1]) {
        loop_ub++;
      } else {
        c_y = true;
        exitg2 = true;
      }
    }
    if (c_y) {
      i = outIRWLS_betarw->size[0];
      outIRWLS_betarw->size[0] = initialbeta->size[0];
      emxEnsureCapacity_real_T(sp, outIRWLS_betarw, i, &ox_emlrtRTEI);
      loop_ub = initialbeta->size[0];
      for (i = 0; i < loop_ub; i++) {
        outIRWLS_betarw->data[i] = initialbeta->data[i];
      }
      *outIRWLS_numscale2rw = initialscale;
      exitg1 = true;
    } else {
      /*  betadiff is linked to the tolerance (specified in scalar reftol) */
      if (beta->size[0] != outIRWLS_betarw->size[0]) {
        emlrtSizeEqCheck1DR2012b(beta->size[0], outIRWLS_betarw->size[0],
                                 &ad_emlrtECI, (emlrtCTX)sp);
      }
      i = r2->size[0];
      r2->size[0] = beta->size[0];
      emxEnsureCapacity_real_T(sp, r2, i, &px_emlrtRTEI);
      loop_ub = beta->size[0];
      for (i = 0; i < loop_ub; i++) {
        r2->data[i] = beta->data[i] - outIRWLS_betarw->data[i];
      }
      if (r2->size[0] == 0) {
        betadiff = 0.0;
      } else {
        betadiff = 0.0;
        i = r2->size[0];
        for (loop_ub = 0; loop_ub < i; loop_ub++) {
          betadiff += muDoubleScalarAbs(r2->data[loop_ub]);
        }
      }
      if (beta->size[0] == 0) {
        d_y = 0.0;
      } else {
        d_y = 0.0;
        i = beta->size[0];
        for (loop_ub = 0; loop_ub < i; loop_ub++) {
          d_y += muDoubleScalarAbs(beta->data[loop_ub]);
        }
      }
      betadiff /= d_y;
      /*  update residuals */
      st.site = &web_emlrtRSI;
      b_st.site = &fc_emlrtRSI;
      if (outIRWLS_betarw->size[0] != X->size[1]) {
        if (((X->size[0] == 1) && (X->size[1] == 1)) ||
            (outIRWLS_betarw->size[0] == 1)) {
          emlrtErrorWithMessageIdR2018a(
              &b_st, &i_emlrtRTEI,
              "Coder:toolbox:mtimes_noDynamicScalarExpansion",
              "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &h_emlrtRTEI, "MATLAB:innerdim",
                                        "MATLAB:innerdim", 0);
        }
      }
      b_st.site = &ec_emlrtRSI;
      mtimes(&b_st, X, outIRWLS_betarw, r2);
      if (y->size[0] != r2->size[0]) {
        emlrtSizeEqCheck1DR2012b(y->size[0], r2->size[0], &yc_emlrtECI,
                                 (emlrtCTX)sp);
      }
      /*  Ordering of all new squared residuals */
      st.site = &veb_emlrtRSI;
      i = b_y->size[0];
      b_y->size[0] = y->size[0];
      emxEnsureCapacity_real_T(&st, b_y, i, &qx_emlrtRTEI);
      loop_ub = y->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_y->data[i] = y->data[i] - r2->data[i];
      }
      b_st.site = &veb_emlrtRSI;
      power(&b_st, b_y, r2);
      b_st.site = &kl_emlrtRSI;
      sort(&b_st, r2, i_r2s);
      /*  sum of the smallest new squared residuals */
      if (1 > r2->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, r2->size[0], &ws_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (((int32_T)h < 1) || ((int32_T)h > r2->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)h, 1, r2->size[0], &vs_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      iv[0] = 1;
      iv[1] = (int32_T)h;
      st.site = &ueb_emlrtRSI;
      b_indexShapeCheck(&st, r2->size[0], iv);
      i = r2->size[0];
      r2->size[0] = (int32_T)h;
      emxEnsureCapacity_real_T(sp, r2, i, &rx_emlrtRTEI);
      st.site = &ueb_emlrtRSI;
      *outIRWLS_numscale2rw = sum(&st, r2);
      /*  update beta */
      i = beta->size[0];
      beta->size[0] = outIRWLS_betarw->size[0];
      emxEnsureCapacity_real_T(sp, beta, i, &sx_emlrtRTEI);
      loop_ub = outIRWLS_betarw->size[0];
      for (i = 0; i < loop_ub; i++) {
        beta->data[i] = outIRWLS_betarw->data[i];
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }
  }
  emxFree_real_T(&b_X);
  emxFree_real_T(&b_y);
  emxFree_boolean_T(&b);
  emxFree_real_T(&beta);
  emxFree_real_T(&r2);
  /*  store final estimate of beta */
  /*  store final estimate of scale */
  /*  store final estimate of the weights for each observation */
  /*  In this case weights are 0,1. */
  /*  1 for the units associated with the smallest h squared residuals from */
  /*  final iteration */
  /*  0 for the other units. */
  i = outIRWLS_weights->size[0];
  outIRWLS_weights->size[0] = y->size[0];
  emxEnsureCapacity_real_T(sp, outIRWLS_weights, i, &ix_emlrtRTEI);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    outIRWLS_weights->data[i] = 0.0;
  }
  if (1 > i_r2s->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i_r2s->size[0], &us_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  if (((int32_T)h < 1) || ((int32_T)h > i_r2s->size[0])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)h, 1, i_r2s->size[0], &ts_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  emxInit_int32_T(sp, &r, 2, &vx_emlrtRTEI, true);
  i = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = (int32_T)h;
  emxEnsureCapacity_int32_T(sp, r, i, &lx_emlrtRTEI);
  for (i = 0; i < loop_ub_tmp; i++) {
    if ((i_r2s->data[i] < 1) || (i_r2s->data[i] > y->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i_r2s->data[i], 1, y->size[0], &dt_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    r->data[i] = i_r2s->data[i];
  }
  emxFree_int32_T(&i_r2s);
  loop_ub = r->size[1];
  for (i = 0; i < loop_ub; i++) {
    outIRWLS_weights->data[r->data[i] - 1] = 1.0;
  }
  emxFree_int32_T(&r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

real_T asvar(const emlrtStack *sp, real_T h, real_T n)
{
  static const int32_T iv[2] = {1, 6};
  static const int32_T iv1[2] = {1, 6};
  static const char_T b_cv[12] = {' ', ' ', '5', '.', '0', '0',
                                  '0', '0', 'e', '-', '0', '1'};
  static const char_T rfmt[6] = {'%', '1', '2', '.', '4', 'e'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  creal_T dc;
  creal_T dc1;
  real_T a;
  real_T b_xk;
  real_T c2;
  real_T hn;
  real_T qalfa;
  real_T xk;
  char_T b_str[12];
  char_T str[12];
  boolean_T b;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  /*  The part below contains subfunctions which are used only inside this file
   */
  /* asvar computes the new degrees of freedom for the Student T */
  hn = h / n;
  st.site = &pgb_emlrtRSI;
  b_st.site = &gn_emlrtRSI;
  if ((hn >= 0.0) && (hn <= 1.0)) {
    if (hn < 1.0) {
      c_st.site = &kn_emlrtRSI;
      dc = gammaincinv(&c_st, hn, 0.5);
      c_st.site = &jn_emlrtRSI;
      dc1 = gammainc(&c_st, dc.re, 0.5);
      c_st.site = &jn_emlrtRSI;
      if (muDoubleScalarHypot(dc1.re - hn, dc1.im) >
          hn * 1.4901161193847656E-8) {
        c_st.site = &in_emlrtRSI;
        y = NULL;
        m = emlrtCreateCharArray(2, &iv[0]);
        emlrtInitCharArrayR2013a(&c_st, 6, m, &rfmt[0]);
        emlrtAssign(&y, m);
        b_y = NULL;
        m = emlrtCreateDoubleScalar(2.0);
        emlrtAssign(&b_y, m);
        d_st.site = &bjb_emlrtRSI;
        e_emlrt_marshallIn(&d_st, b_sprintf(&d_st, y, b_y, &r_emlrtMCI),
                           "<output of sprintf>", str);
        c_st.site = &gbb_emlrtRSI;
        c_y = NULL;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a(&c_st, 6, m, &rfmt[0]);
        emlrtAssign(&c_y, m);
        d_y = NULL;
        m = emlrtCreateDoubleScalar(hn);
        emlrtAssign(&d_y, m);
        d_st.site = &bjb_emlrtRSI;
        e_emlrt_marshallIn(&d_st, b_sprintf(&d_st, c_y, d_y, &r_emlrtMCI),
                           "<output of sprintf>", b_str);
        c_st.site = &hn_emlrtRSI;
        i_warning(&c_st, b_cv, str, b_str);
      }
      qalfa = dc.re * 2.0;
    } else {
      qalfa = rtInf;
    }
  } else {
    qalfa = rtNaN;
  }
  st.site = &qgb_emlrtRSI;
  xk = qalfa / 2.0;
  b_xk = xk;
  b = muDoubleScalarIsNaN(xk);
  if (!b) {
    if (xk < 0.0) {
      b_xk = 0.0;
    }
    b_st.site = &wbb_emlrtRSI;
    dc = gammainc(&b_st, b_xk, 1.5);
    c2 = dc.re;
  } else {
    c2 = rtNaN;
  }
  a = 1.0 / c2;
  st.site = &rgb_emlrtRSI;
  if (!b) {
    if (xk < 0.0) {
      xk = 0.0;
    }
    b_st.site = &wbb_emlrtRSI;
    dc = gammainc(&b_st, xk, 2.5);
    b_xk = dc.re;
  } else {
    b_xk = rtNaN;
  }
  st.site = &sgb_emlrtRSI;
  xk = qalfa * hn - c2;
  b_st.site = &cl_emlrtRSI;
  c_st.site = &dl_emlrtRSI;
  st.site = &tgb_emlrtRSI;
  b_st.site = &cl_emlrtRSI;
  c_st.site = &dl_emlrtRSI;
  st.site = &ugb_emlrtRSI;
  b_st.site = &cl_emlrtRSI;
  c_st.site = &dl_emlrtRSI;
  return a * a *
         (((3.0 * b_xk - 2.0 * qalfa * c2) + hn * (qalfa * qalfa)) - xk * xk);
}

real_T corfactorRAW(const emlrtStack *sp, real_T n, real_T alpha)
{
  static const int32_T iv[2] = {1, 44};
  static const int32_T iv1[2] = {1, 69};
  static const int32_T iv2[2] = {1, 75};
  static const int32_T iv3[2] = {1, 51};
  static const char_T u[44] = {
      'W', 'a', 'r', 'n', 'i', 'n', 'g', ':', ' ', 'p', 'r', 'o', 'b', 'l', 'e',
      'm', ' ', 'i', 'n', ' ', 's', 'u', 'b', 'f', 'u', 'n', 'c', 't', 'i', 'o',
      'n', ' ', 'c', 'o', 'r', 'f', 'a', 'c', 't', 'o', 'r', 'R', 'A', 'W'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  real_T fp_500_n;
  real_T fp_875_n;
  real_T rawcorfac;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  /*  corfactorRAW function */
  st.site = &ogb_emlrtRSI;
  b_st.site = &cl_emlrtRSI;
  c_st.site = &dl_emlrtRSI;
  if (n < 0.0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &sb_emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  fp_500_n =
      1.0 - 1.2995580068132053 / muDoubleScalarPower(n, 0.604756680630497);
  st.site = &ngb_emlrtRSI;
  b_st.site = &cl_emlrtRSI;
  fp_875_n =
      1.0 - 0.70357229237653807 / muDoubleScalarPower(n, 1.01646567502486);
  if ((0.5 <= alpha) && (alpha <= 0.875)) {
    fp_500_n += (fp_875_n - fp_500_n) / 0.375 * (alpha - 0.5);
  } else if ((0.875 < alpha) && (alpha < 1.0)) {
    fp_500_n = fp_875_n + (1.0 - fp_875_n) / 0.125 * (alpha - 0.875);
  } else {
    fp_500_n = 1.0;
    /*  Initialization necessary for MATLAB C-coder */
  }
  rawcorfac = 1.0 / fp_500_n;
  if ((rawcorfac <= 0.0) || (rawcorfac > 50.0)) {
    rawcorfac = 1.0;
    /*  if msg==1 */
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 44, m, &u[0]);
    emlrtAssign(&y, m);
    st.site = &tib_emlrtRSI;
    disp(&st, y, &jb_emlrtMCI);
    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 69, m, &cv15[0]);
    emlrtAssign(&b_y, m);
    st.site = &sib_emlrtRSI;
    disp(&st, b_y, &kb_emlrtMCI);
    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 75, m, &cv16[0]);
    emlrtAssign(&c_y, m);
    st.site = &rib_emlrtRSI;
    disp(&st, c_y, &lb_emlrtMCI);
    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 51, m, &cv17[0]);
    emlrtAssign(&d_y, m);
    st.site = &qib_emlrtRSI;
    disp(&st, d_y, &mb_emlrtMCI);
    /*  end */
  }
  return rawcorfac;
}

real_T corfactorREW(const emlrtStack *sp, real_T n, real_T alpha)
{
  static const int32_T iv[2] = {1, 44};
  static const int32_T iv1[2] = {1, 69};
  static const int32_T iv2[2] = {1, 75};
  static const int32_T iv3[2] = {1, 51};
  static const char_T u[44] = {
      'W', 'a', 'r', 'n', 'i', 'n', 'g', ':', ' ', 'p', 'r', 'o', 'b', 'l', 'e',
      'm', ' ', 'i', 'n', ' ', 's', 'u', 'b', 'f', 'u', 'n', 'c', 't', 'i', 'o',
      'n', ' ', 'c', 'o', 'r', 'f', 'a', 'c', 't', 'o', 'r', 'R', 'E', 'W'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  real_T fp_500_n;
  real_T fp_875_n;
  real_T rewcorfac;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  /*  corfactorREW function */
  st.site = &ihb_emlrtRSI;
  b_st.site = &cl_emlrtRSI;
  c_st.site = &dl_emlrtRSI;
  if (n < 0.0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &sb_emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  fp_500_n = 1.0 - 3.0373378792330419 / muDoubleScalarPower(n, 1.5182890270453);
  st.site = &hhb_emlrtRSI;
  b_st.site = &cl_emlrtRSI;
  fp_875_n =
      1.0 - 0.51660962465337334 / muDoubleScalarPower(n, 0.88939595831888);
  if ((0.5 <= alpha) && (alpha <= 0.875)) {
    fp_500_n += (fp_875_n - fp_500_n) / 0.375 * (alpha - 0.5);
  } else if ((0.875 < alpha) && (alpha < 1.0)) {
    fp_500_n = fp_875_n + (1.0 - fp_875_n) / 0.125 * (alpha - 0.875);
  } else {
    fp_500_n = 1.0;
  }
  rewcorfac = 1.0 / fp_500_n;
  if ((rewcorfac <= 0.0) || (rewcorfac > 50.0)) {
    rewcorfac = 1.0;
    /*  if msg==1 */
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 44, m, &u[0]);
    emlrtAssign(&y, m);
    st.site = &pib_emlrtRSI;
    disp(&st, y, &nb_emlrtMCI);
    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 69, m, &cv15[0]);
    emlrtAssign(&b_y, m);
    st.site = &oib_emlrtRSI;
    disp(&st, b_y, &ob_emlrtMCI);
    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 75, m, &cv16[0]);
    emlrtAssign(&c_y, m);
    st.site = &nib_emlrtRSI;
    disp(&st, c_y, &pb_emlrtMCI);
    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 51, m, &cv17[0]);
    emlrtAssign(&d_y, m);
    st.site = &mib_emlrtRSI;
    disp(&st, d_y, &qb_emlrtMCI);
    /*  end */
  }
  return rewcorfac;
}

/* End of code generation (LXS.c) */
