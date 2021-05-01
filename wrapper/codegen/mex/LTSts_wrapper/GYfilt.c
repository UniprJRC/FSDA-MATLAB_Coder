/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * GYfilt.c
 *
 * Code generation for function 'GYfilt'
 *
 */

/* Include files */
#include "GYfilt.h"
#include "LTSts_wrapper_data.h"
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_mexutil.h"
#include "LTSts_wrapper_types.h"
#include "any.h"
#include "chi2inv.h"
#include "colon.h"
#include "eml_int_forloop_overflow_check.h"
#include "gammainc.h"
#include "gammaln.h"
#include "indexShapeCheck.h"
#include "mad.h"
#include "median.h"
#include "power.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "mwmathutil.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRTEInfo c_emlrtRTEI = {
    180,                                              /* lineNo */
    1,                                                /* colNo */
    "gyiterate",                                      /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pName */
};

static emlrtRSInfo ox_emlrtRSI = {
    110,                                              /* lineNo */
    "GYfilt",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pathName */
};

static emlrtRSInfo px_emlrtRSI = {
    114,                                              /* lineNo */
    "GYfilt",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pathName */
};

static emlrtRSInfo qx_emlrtRSI = {
    117,                                              /* lineNo */
    "GYfilt",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pathName */
};

static emlrtRSInfo rx_emlrtRSI = {
    123,                                              /* lineNo */
    "GYfilt",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pathName */
};

static emlrtRSInfo yx_emlrtRSI = {
    135,                                              /* lineNo */
    "gyfiltaux",                                      /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pathName */
};

static emlrtRSInfo ay_emlrtRSI = {
    138,                                              /* lineNo */
    "gyfiltaux",                                      /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pathName */
};

static emlrtRSInfo by_emlrtRSI = {
    142,                                              /* lineNo */
    "gyfiltaux",                                      /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pathName */
};

static emlrtRSInfo cy_emlrtRSI = {
    147,                                              /* lineNo */
    "gyfiltaux",                                      /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pathName */
};

static emlrtRSInfo dy_emlrtRSI = {
    150,                                              /* lineNo */
    "gyfiltaux",                                      /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pathName */
};

static emlrtRSInfo ey_emlrtRSI = {
    20,        /* lineNo */
    "chi2cdf", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\chi2cdf.m" /* pathName
                                                                         */
};

static emlrtRSInfo fy_emlrtRSI = {
    51,       /* lineNo */
    "gamcdf", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gamcdf.m" /* pathName
                                                                        */
};

static emlrtRSInfo gy_emlrtRSI = {
    121,                                              /* lineNo */
    "GYfilt",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pathName */
};

static emlrtRSInfo hy_emlrtRSI = {
    170,                                              /* lineNo */
    "gyiterate",                                      /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pathName */
};

static emlrtRSInfo iy_emlrtRSI = {
    172,                                              /* lineNo */
    "gyiterate",                                      /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pathName */
};

static emlrtRSInfo jy_emlrtRSI = {
    180,                                              /* lineNo */
    "gyiterate",                                      /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pathName */
};

static emlrtBCInfo jo_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    127,                                               /* lineNo */
    1,                                                 /* colNo */
    "weights",                                         /* aName */
    "GYfilt",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtECInfo lc_emlrtECI = {
    -1,                                               /* nDims */
    178,                                              /* lineNo */
    1,                                                /* colNo */
    "gyiterate",                                      /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pName */
};

static emlrtDCInfo mi_emlrtDCI = {
    178,                                               /* lineNo */
    6,                                                 /* colNo */
    "gyiterate",                                       /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo ko_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    178,                                               /* lineNo */
    6,                                                 /* colNo */
    "vout",                                            /* aName */
    "gyiterate",                                       /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo lo_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    171,                                               /* lineNo */
    13,                                                /* colNo */
    "id",                                              /* aName */
    "gyiterate",                                       /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo mo_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    175,                                               /* lineNo */
    8,                                                 /* colNo */
    "v",                                               /* aName */
    "gyiterate",                                       /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo xo_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    154,                                               /* lineNo */
    29,                                                /* colNo */
    "vorder",                                          /* aName */
    "gyfiltaux",                                       /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo yo_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    154,                                               /* lineNo */
    17,                                                /* colNo */
    "vorder",                                          /* aName */
    "gyfiltaux",                                       /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtECInfo mc_emlrtECI = {
    -1,                                               /* nDims */
    142,                                              /* lineNo */
    8,                                                /* colNo */
    "gyfiltaux",                                      /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pName */
};

static emlrtBCInfo ap_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    142,                                               /* lineNo */
    18,                                                /* colNo */
    "v",                                               /* aName */
    "gyfiltaux",                                       /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtDCInfo ni_emlrtDCI = {
    142,                                               /* lineNo */
    18,                                                /* colNo */
    "gyfiltaux",                                       /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m", /* pName */
    1                                                  /* checkKind */
};

static emlrtBCInfo bp_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    138,                                               /* lineNo */
    10,                                                /* colNo */
    "seq",                                             /* aName */
    "gyfiltaux",                                       /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo cp_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    151,                                               /* lineNo */
    6,                                                 /* colNo */
    "v",                                               /* aName */
    "gyfiltaux",                                       /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo dp_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    154,                                               /* lineNo */
    9,                                                 /* colNo */
    "vna",                                             /* aName */
    "gyfiltaux",                                       /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo ep_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    76,       /* lineNo */
    9,        /* colNo */
    "",       /* aName */
    "gamcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gamcdf.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo fp_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    77,       /* lineNo */
    9,        /* colNo */
    "",       /* aName */
    "gamcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gamcdf.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo gp_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    78,       /* lineNo */
    9,        /* colNo */
    "",       /* aName */
    "gamcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gamcdf.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo hp_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    51,       /* lineNo */
    13,       /* colNo */
    "",       /* aName */
    "gamcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gamcdf.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo ip_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    145,                                               /* lineNo */
    17,                                                /* colNo */
    "t1",                                              /* aName */
    "gyfiltaux",                                       /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo jp_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    145,                                               /* lineNo */
    5,                                                 /* colNo */
    "dnt",                                             /* aName */
    "gyfiltaux",                                       /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtBCInfo kp_emlrtBCI = {
    -1,                                                /* iFirst */
    -1,                                                /* iLast */
    142,                                               /* lineNo */
    16,                                                /* colNo */
    "",                                                /* aName */
    "gyfiltaux",                                       /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m", /* pName */
    0                                                  /* checkKind */
};

static emlrtRTEInfo fu_emlrtRTEI = {
    116,                                              /* lineNo */
    5,                                                /* colNo */
    "GYfilt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pName */
};

static emlrtRTEInfo gu_emlrtRTEI = {
    126,                                              /* lineNo */
    1,                                                /* colNo */
    "GYfilt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pName */
};

static emlrtRTEInfo hu_emlrtRTEI = {
    127,                                              /* lineNo */
    10,                                               /* colNo */
    "GYfilt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pName */
};

static emlrtRTEInfo iu_emlrtRTEI = {
    1,                                                /* lineNo */
    20,                                               /* colNo */
    "GYfilt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pName */
};

static emlrtRTEInfo ju_emlrtRTEI = {
    117,                                              /* lineNo */
    1,                                                /* colNo */
    "GYfilt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pName */
};

static emlrtRTEInfo mu_emlrtRTEI = {
    166,                                              /* lineNo */
    1,                                                /* colNo */
    "GYfilt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pName */
};

static emlrtRTEInfo nu_emlrtRTEI = {
    121,                                              /* lineNo */
    5,                                                /* colNo */
    "GYfilt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pName */
};

static emlrtRTEInfo ou_emlrtRTEI = {
    178,                                              /* lineNo */
    6,                                                /* colNo */
    "GYfilt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pName */
};

static emlrtRTEInfo pu_emlrtRTEI = {
    121,                                              /* lineNo */
    13,                                               /* colNo */
    "GYfilt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pName */
};

static emlrtRTEInfo qu_emlrtRTEI = {
    171,                                              /* lineNo */
    10,                                               /* colNo */
    "GYfilt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pName */
};

static emlrtRTEInfo ru_emlrtRTEI = {
    171,                                              /* lineNo */
    5,                                                /* colNo */
    "GYfilt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pName */
};

static emlrtRTEInfo su_emlrtRTEI = {
    171,                                              /* lineNo */
    13,                                               /* colNo */
    "GYfilt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pName */
};

static emlrtRTEInfo uv_emlrtRTEI = {
    137,                                              /* lineNo */
    1,                                                /* colNo */
    "GYfilt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pName */
};

static emlrtRTEInfo vv_emlrtRTEI = {
    138,                                              /* lineNo */
    10,                                               /* colNo */
    "GYfilt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pName */
};

static emlrtRTEInfo wv_emlrtRTEI = {
    133,                                              /* lineNo */
    14,                                               /* colNo */
    "GYfilt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pName */
};

static emlrtRTEInfo xv_emlrtRTEI = {
    36,       /* lineNo */
    5,        /* colNo */
    "gamcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gamcdf.m" /* pName
                                                                        */
};

static emlrtRTEInfo yv_emlrtRTEI = {
    37,       /* lineNo */
    22,       /* colNo */
    "gamcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gamcdf.m" /* pName
                                                                        */
};

static emlrtRTEInfo aw_emlrtRTEI = {
    151,                                              /* lineNo */
    1,                                                /* colNo */
    "GYfilt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pName */
};

static emlrtRTEInfo bw_emlrtRTEI = {
    38,       /* lineNo */
    22,       /* colNo */
    "gamcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gamcdf.m" /* pName
                                                                        */
};

static emlrtRTEInfo cw_emlrtRTEI = {
    154,                                              /* lineNo */
    9,                                                /* colNo */
    "GYfilt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pName */
};

static emlrtRTEInfo dw_emlrtRTEI = {
    142,                                              /* lineNo */
    27,                                               /* colNo */
    "GYfilt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pName */
};

static emlrtRTEInfo ew_emlrtRTEI = {
    144,                                              /* lineNo */
    5,                                                /* colNo */
    "GYfilt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pName */
};

static emlrtRTEInfo fw_emlrtRTEI = {
    145,                                              /* lineNo */
    17,                                               /* colNo */
    "GYfilt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pName */
};

static emlrtRTEInfo gw_emlrtRTEI = {
    145,                                              /* lineNo */
    9,                                                /* colNo */
    "GYfilt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pName */
};

static emlrtRTEInfo hw_emlrtRTEI = {
    142,                                              /* lineNo */
    30,                                               /* colNo */
    "GYfilt",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\GYfilt.m" /* pName */
};

static emlrtRTEInfo iw_emlrtRTEI = {
    1,        /* lineNo */
    13,       /* colNo */
    "gamcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gamcdf.m" /* pName
                                                                        */
};

static emlrtRTEInfo jw_emlrtRTEI = {
    1,        /* lineNo */
    17,       /* colNo */
    "gamcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gamcdf.m" /* pName
                                                                        */
};

/* Function Declarations */
static void gyfiltaux(const emlrtStack *sp, emxArray_real_T *v);

/* Function Definitions */
static void gyfiltaux(const emlrtStack *sp, emxArray_real_T *v)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emxArray_boolean_T *r;
  emxArray_int32_T *iidx;
  emxArray_int32_T *r1;
  emxArray_int32_T *r3;
  emxArray_int32_T *r4;
  emxArray_int32_T *r5;
  emxArray_int32_T *vorder;
  emxArray_real_T *b_v;
  emxArray_real_T *plo;
  emxArray_real_T *pup;
  emxArray_real_T *r2;
  emxArray_real_T *seq;
  emxArray_real_T *y;
  creal_T b;
  real_T lgap11;
  real_T n0;
  int32_T iv[2];
  int32_T b_i;
  int32_T i;
  int32_T idx;
  int32_T k;
  int32_T last;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_v, 1, &wv_emlrtRTEI, true);
  /*  Inner fucntion gyfiltaux */
  st.site = &yx_emlrtRSI;
  i = b_v->size[0];
  b_v->size[0] = v->size[0];
  emxEnsureCapacity_real_T(&st, b_v, i, &le_emlrtRTEI);
  last = v->size[0];
  for (i = 0; i < last; i++) {
    b_v->data[i] = v->data[i];
  }
  emxInit_int32_T(&st, &vorder, 1, &wv_emlrtRTEI, true);
  emxInit_int32_T(&st, &iidx, 1, &wv_emlrtRTEI, true);
  b_st.site = &xp_emlrtRSI;
  sort(&b_st, b_v, iidx);
  i = vorder->size[0];
  vorder->size[0] = iidx->size[0];
  emxEnsureCapacity_int32_T(&st, vorder, i, &ne_emlrtRTEI);
  last = iidx->size[0];
  for (i = 0; i < last; i++) {
    vorder->data[i] = iidx->data[i];
  }
  emxInit_real_T(sp, &seq, 2, &uv_emlrtRTEI, true);
  if (b_v->size[0] < 1) {
    seq->size[0] = 1;
    seq->size[1] = 0;
  } else {
    i = seq->size[0] * seq->size[1];
    seq->size[0] = 1;
    seq->size[1] = b_v->size[0];
    emxEnsureCapacity_real_T(sp, seq, i, &uv_emlrtRTEI);
    last = b_v->size[0] - 1;
    for (i = 0; i <= last; i++) {
      seq->data[i] = (real_T)i + 1.0;
    }
  }
  emxInit_boolean_T(sp, &r, 1, &vv_emlrtRTEI, true);
  st.site = &ay_emlrtRSI;
  n0 = chi2inv(&st);
  i = r->size[0];
  r->size[0] = b_v->size[0];
  emxEnsureCapacity_boolean_T(sp, r, i, &vv_emlrtRTEI);
  last = b_v->size[0];
  for (i = 0; i < last; i++) {
    r->data[i] = (b_v->data[i] < n0);
  }
  idx = r->size[0] - 1;
  last = 0;
  for (b_i = 0; b_i <= idx; b_i++) {
    if (r->data[b_i]) {
      last++;
    }
  }
  emxInit_int32_T(sp, &r1, 1, &vv_emlrtRTEI, true);
  i = r1->size[0];
  r1->size[0] = last;
  emxEnsureCapacity_int32_T(sp, r1, i, &wv_emlrtRTEI);
  last = 0;
  for (b_i = 0; b_i <= idx; b_i++) {
    if (r->data[b_i]) {
      r1->data[last] = b_i + 1;
      last++;
    }
  }
  emxFree_boolean_T(&r);
  last = r1->size[0];
  for (i = 0; i < last; i++) {
    if (r1->data[i] > seq->size[1]) {
      emlrtDynamicBoundsCheckR2012b(r1->data[i], 1, seq->size[1], &bp_emlrtBCI,
                                    (emlrtCTX)sp);
    }
  }
  n0 = 0.0;
  emxInit_real_T(sp, &plo, 1, &iw_emlrtRTEI, true);
  if (r1->size[0] != 0) {
    if (seq->data[r1->data[r1->size[0] - 1] - 1] > b_v->size[0]) {
      i = 0;
      b_i = 0;
    } else {
      n0 = seq->data[r1->data[r1->size[0] - 1] - 1];
      if (n0 != (int32_T)n0) {
        emlrtIntegerCheckR2012b(n0, &ni_emlrtDCI, (emlrtCTX)sp);
      }
      if ((int32_T)n0 > b_v->size[0]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)n0, 1, b_v->size[0],
                                      &ap_emlrtBCI, (emlrtCTX)sp);
      }
      i = (int32_T)n0 - 1;
      b_i = b_v->size[0];
    }
    emxInit_real_T(sp, &r2, 1, &wv_emlrtRTEI, true);
    emxInit_real_T(sp, &pup, 1, &jw_emlrtRTEI, true);
    iv[0] = 1;
    b_i -= i;
    iv[1] = b_i;
    st.site = &by_emlrtRSI;
    indexShapeCheck(&st, b_v->size[0], iv);
    st.site = &by_emlrtRSI;
    b_st.site = &ey_emlrtRSI;
    idx = r2->size[0];
    r2->size[0] = b_i;
    emxEnsureCapacity_real_T(&b_st, r2, idx, &xv_emlrtRTEI);
    idx = plo->size[0];
    plo->size[0] = b_i;
    emxEnsureCapacity_real_T(&b_st, plo, idx, &yv_emlrtRTEI);
    idx = pup->size[0];
    pup->size[0] = b_i;
    emxEnsureCapacity_real_T(&b_st, pup, idx, &bw_emlrtRTEI);
    for (k = 0; k < b_i; k++) {
      if (k + 1 > b_i) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, b_i, &kp_emlrtBCI, &b_st);
      }
      n0 = b_v->data[i + k];
      if (!muDoubleScalarIsNaN(n0)) {
        if (n0 < 0.0) {
          n0 = 0.0;
        }
        c_st.site = &fy_emlrtRSI;
        d_st.site = &ix_emlrtRSI;
        lgap11 = 1.5;
        d_st.site = &jx_emlrtRSI;
        gammaln(&d_st, &lgap11);
        d_st.site = &kx_emlrtRSI;
        b = scalar_gammainc(&d_st, n0 / 2.0, 0.5, -0.69314718055994529, lgap11);
        if (k + 1 > r2->size[0]) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, r2->size[0], &hp_emlrtBCI,
                                        &b_st);
        }
        r2->data[k] = b.re;
      } else {
        if (k + 1 > r2->size[0]) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, r2->size[0], &ep_emlrtBCI,
                                        &b_st);
        }
        r2->data[k] = rtNaN;
        if (k + 1 > plo->size[0]) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, plo->size[0], &fp_emlrtBCI,
                                        &b_st);
        }
        plo->data[k] = rtNaN;
        if (k + 1 > pup->size[0]) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, pup->size[0], &gp_emlrtBCI,
                                        &b_st);
        }
        pup->data[k] = rtNaN;
      }
    }
    emxInit_real_T(&b_st, &y, 2, &hw_emlrtRTEI, true);
    st.site = &by_emlrtRSI;
    b_st.site = &qg_emlrtRSI;
    if (b_v->size[0] < seq->data[r1->data[r1->size[0] - 1] - 1]) {
      y->size[0] = 1;
      y->size[1] = 0;
    } else if (seq->data[r1->data[r1->size[0] - 1] - 1] ==
               seq->data[r1->data[r1->size[0] - 1] - 1]) {
      n0 = seq->data[r1->data[r1->size[0] - 1] - 1];
      i = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = (int32_T)((real_T)b_v->size[0] - n0) + 1;
      emxEnsureCapacity_real_T(&b_st, y, i, &oc_emlrtRTEI);
      last = (int32_T)((real_T)b_v->size[0] - n0);
      for (i = 0; i <= last; i++) {
        y->data[i] = n0 + (real_T)i;
      }
    } else {
      c_st.site = &rg_emlrtRSI;
      eml_float_colon(&c_st, seq->data[r1->data[r1->size[0] - 1] - 1],
                      b_v->size[0], y);
    }
    i = plo->size[0];
    plo->size[0] = y->size[1];
    emxEnsureCapacity_real_T(sp, plo, i, &dw_emlrtRTEI);
    last = y->size[1];
    for (i = 0; i < last; i++) {
      plo->data[i] = (y->data[i] - 1.0) / (real_T)b_v->size[0];
    }
    emxFree_real_T(&y);
    if (r2->size[0] != plo->size[0]) {
      emlrtSizeEqCheck1DR2012b(r2->size[0], plo->size[0], &mc_emlrtECI,
                               (emlrtCTX)sp);
    }
    i = pup->size[0];
    pup->size[0] = r2->size[0];
    emxEnsureCapacity_real_T(sp, pup, i, &ew_emlrtRTEI);
    last = r2->size[0];
    for (i = 0; i < last; i++) {
      pup->data[i] = 0.0;
    }
    idx = r2->size[0] - 1;
    last = 0;
    for (b_i = 0; b_i <= idx; b_i++) {
      if (r2->data[b_i] - plo->data[b_i] > 0.0) {
        last++;
      }
    }
    emxInit_int32_T(sp, &r4, 1, &fw_emlrtRTEI, true);
    i = r4->size[0];
    r4->size[0] = last;
    emxEnsureCapacity_int32_T(sp, r4, i, &wv_emlrtRTEI);
    last = 0;
    for (b_i = 0; b_i <= idx; b_i++) {
      if (r2->data[b_i] - plo->data[b_i] > 0.0) {
        r4->data[last] = b_i + 1;
        last++;
      }
    }
    last = r4->size[0];
    for (i = 0; i < last; i++) {
      if (r4->data[i] > r2->size[0]) {
        emlrtDynamicBoundsCheckR2012b(r4->data[i], 1, r2->size[0], &ip_emlrtBCI,
                                      (emlrtCTX)sp);
      }
    }
    emxFree_int32_T(&r4);
    idx = r2->size[0] - 1;
    last = 0;
    for (b_i = 0; b_i <= idx; b_i++) {
      if (r2->data[b_i] - plo->data[b_i] > 0.0) {
        last++;
      }
    }
    emxInit_int32_T(sp, &r5, 1, &gw_emlrtRTEI, true);
    i = r5->size[0];
    r5->size[0] = last;
    emxEnsureCapacity_int32_T(sp, r5, i, &wv_emlrtRTEI);
    last = 0;
    for (b_i = 0; b_i <= idx; b_i++) {
      if (r2->data[b_i] - plo->data[b_i] > 0.0) {
        r5->data[last] = b_i + 1;
        last++;
      }
    }
    last = r5->size[0];
    for (i = 0; i < last; i++) {
      if (r5->data[i] > r2->size[0]) {
        emlrtDynamicBoundsCheckR2012b(r5->data[i], 1, r2->size[0], &jp_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      pup->data[r5->data[i] - 1] =
          r2->data[r5->data[i] - 1] - plo->data[r5->data[i] - 1];
    }
    emxFree_int32_T(&r5);
    emxFree_real_T(&r2);
    st.site = &cy_emlrtRSI;
    b_st.site = &hr_emlrtRSI;
    c_st.site = &ir_emlrtRSI;
    d_st.site = &jr_emlrtRSI;
    if (pup->size[0] < 1) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &f_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }
    e_st.site = &kr_emlrtRSI;
    f_st.site = &lr_emlrtRSI;
    last = pup->size[0];
    if (pup->size[0] <= 2) {
      if (pup->size[0] == 1) {
        lgap11 = pup->data[0];
      } else if ((pup->data[0] < pup->data[1]) ||
                 (muDoubleScalarIsNaN(pup->data[0]) &&
                  (!muDoubleScalarIsNaN(pup->data[1])))) {
        lgap11 = pup->data[1];
      } else {
        lgap11 = pup->data[0];
      }
    } else {
      g_st.site = &er_emlrtRSI;
      if (!muDoubleScalarIsNaN(pup->data[0])) {
        idx = 1;
      } else {
        idx = 0;
        h_st.site = &fr_emlrtRSI;
        if (pup->size[0] > 2147483646) {
          i_st.site = &pf_emlrtRSI;
          check_forloop_overflow_error(&i_st);
        }
        k = 2;
        exitg1 = false;
        while ((!exitg1) && (k <= last)) {
          if (!muDoubleScalarIsNaN(pup->data[k - 1])) {
            idx = k;
            exitg1 = true;
          } else {
            k++;
          }
        }
      }
      if (idx == 0) {
        lgap11 = pup->data[0];
      } else {
        g_st.site = &dr_emlrtRSI;
        lgap11 = pup->data[idx - 1];
        b_i = idx + 1;
        h_st.site = &gr_emlrtRSI;
        if ((idx + 1 <= pup->size[0]) && (pup->size[0] > 2147483646)) {
          i_st.site = &pf_emlrtRSI;
          check_forloop_overflow_error(&i_st);
        }
        for (k = b_i; k <= last; k++) {
          n0 = pup->data[k - 1];
          if (lgap11 < n0) {
            lgap11 = n0;
          }
        }
      }
    }
    emxFree_real_T(&pup);
    n0 = muDoubleScalarRound(lgap11 * (real_T)b_v->size[0]);
  }
  emxFree_int32_T(&r1);
  emxFree_real_T(&seq);
  st.site = &dy_emlrtRSI;
  i = plo->size[0];
  plo->size[0] = vorder->size[0];
  emxEnsureCapacity_real_T(&st, plo, i, &le_emlrtRTEI);
  last = vorder->size[0];
  for (i = 0; i < last; i++) {
    plo->data[i] = vorder->data[i];
  }
  b_st.site = &xp_emlrtRSI;
  sort(&b_st, plo, iidx);
  i = plo->size[0];
  plo->size[0] = iidx->size[0];
  emxEnsureCapacity_real_T(&st, plo, i, &ne_emlrtRTEI);
  last = iidx->size[0];
  for (i = 0; i < last; i++) {
    plo->data[i] = iidx->data[i];
  }
  i = v->size[0];
  v->size[0] = iidx->size[0];
  emxEnsureCapacity_real_T(sp, v, i, &aw_emlrtRTEI);
  last = iidx->size[0];
  for (i = 0; i < last; i++) {
    if ((iidx->data[i] < 1) || (iidx->data[i] > b_v->size[0])) {
      emlrtDynamicBoundsCheckR2012b(iidx->data[i], 1, b_v->size[0],
                                    &cp_emlrtBCI, (emlrtCTX)sp);
    }
    v->data[i] = b_v->data[iidx->data[i] - 1];
  }
  emxFree_int32_T(&iidx);
  if (n0 > 0.0) {
    n0 = ((real_T)b_v->size[0] - n0) + 1.0;
    if (n0 > b_v->size[0]) {
      i = 0;
      b_i = 0;
    } else {
      if (((int32_T)n0 < 1) || ((int32_T)n0 > vorder->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)n0, 1, vorder->size[0],
                                      &yo_emlrtBCI, (emlrtCTX)sp);
      }
      i = (int32_T)n0 - 1;
      if ((b_v->size[0] < 1) || (b_v->size[0] > vorder->size[0])) {
        emlrtDynamicBoundsCheckR2012b(b_v->size[0], 1, vorder->size[0],
                                      &xo_emlrtBCI, (emlrtCTX)sp);
      }
      b_i = b_v->size[0];
    }
    emxInit_int32_T(sp, &r3, 2, &wv_emlrtRTEI, true);
    idx = r3->size[0] * r3->size[1];
    r3->size[0] = 1;
    last = b_i - i;
    r3->size[1] = last;
    emxEnsureCapacity_int32_T(sp, r3, idx, &cw_emlrtRTEI);
    for (b_i = 0; b_i < last; b_i++) {
      idx = vorder->data[i + b_i];
      if ((idx < 1) || (idx > plo->size[0])) {
        emlrtDynamicBoundsCheckR2012b(idx, 1, plo->size[0], &dp_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      r3->data[b_i] = idx;
    }
    last = r3->size[1];
    for (i = 0; i < last; i++) {
      v->data[r3->data[i] - 1] = rtNaN;
    }
    emxFree_int32_T(&r3);
  }
  emxFree_real_T(&plo);
  emxFree_int32_T(&vorder);
  emxFree_real_T(&b_v);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void GYfilt(const emlrtStack *sp, const emxArray_real_T *x,
            emxArray_boolean_T *weights)
{
  emlrtStack st;
  emxArray_boolean_T *r;
  emxArray_int32_T *r1;
  emxArray_real_T *b_x;
  emxArray_real_T *xs2;
  real_T madx;
  real_T mu;
  int32_T end;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_x, 1, &fu_emlrtRTEI, true);
  /* GYfilt computes the Gervini-Yohai univariate outlier identifier */
  /*  */
  /* <a href="matlab: docsearchFS('GYfilt')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     x:         Input vector. Vector. A vector with n elements that */
  /*                contains the univariate data. */
  /*  */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*       alpha :  coverage probability. Scalar. */
  /*                Scalar in the interval [0.5 1). The default coverage */
  /*                probability is 0.95. */
  /*                  Example - 'alpha',0.99 */
  /*                  Data Types - double */
  /*  */
  /*    centering:  centering the data. Boolean. */
  /*                If centering is true input data are preliminarly centered.
   */
  /*                The defalt value of centering is true. */
  /*                  Example - 'centering',false */
  /*                  Data Types - logical */
  /*  */
  /*    iterating:  iterative procedure. Boolean. */
  /*                If Boolean is true then an iterative adaptive procedure is
   */
  /*                applied.  The defalt value of iterating is true. */
  /*                  Example - 'iterating',false */
  /*                  Data Types - logical */
  /*  */
  /*       niter :  maximum number of iterations in the iterative adaptive */
  /*                procedure. Positive integer. This option is used just if
   * previous iterating */
  /*                is true. The default value of niter is 10. */
  /*                  Example - 'niter',20 */
  /*                  Data Types - double */
  /*  */
  /*   Output: */
  /*  */
  /*     weights:   Boolean vector of weights. Logical. */
  /*                A boolean vector with n elements that contains false in */
  /*                correspondence of the units declared as outliers. */
  /*  */
  /*  */
  /*  See also: LTSts */
  /*  */
  /*  References: */
  /*  */
  /*  Gervini, D. and Yohai, V.J. (2002), A class of robust and fully efficient
   */
  /*  regression estimators, "Annals of Statistics", Vol. 30, pp. 583-616. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* <a href="matlab: docsearchFS('GYfilt')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % GYfilt with all the default options. */
  /*     weights=GYfilt(randn(100,1)); */
  /* } */
  /* { */
  /*     % GYfilt with option alpha. */
  /*     alpha=0.999; */
  /*     weights=GYfilt(randn(100,1),'alpha',alpha); */
  /* } */
  /*  Beginning of code */
  /*  default coverage probability */
  /*  Write in structure 'options' the options chosen by the user */
  st.site = &ox_emlrtRSI;
  mu = median(&st, x);
  st.site = &px_emlrtRSI;
  madx = 1.4826 * mad(&st, x);
  i = b_x->size[0];
  b_x->size[0] = x->size[0];
  emxEnsureCapacity_real_T(sp, b_x, i, &fu_emlrtRTEI);
  loop_ub = x->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_x->data[i] = (x->data[i] - mu) / madx;
  }
  emxInit_real_T(sp, &xs2, 1, &ju_emlrtRTEI, true);
  st.site = &qx_emlrtRSI;
  power(&st, b_x, xs2);
  st.site = &rx_emlrtRSI;
  gyfiltaux(&st, xs2);
  i = weights->size[0];
  weights->size[0] = x->size[0];
  emxEnsureCapacity_boolean_T(sp, weights, i, &gu_emlrtRTEI);
  loop_ub = x->size[0];
  emxFree_real_T(&b_x);
  for (i = 0; i < loop_ub; i++) {
    weights->data[i] = true;
  }
  emxInit_boolean_T(sp, &r, 1, &hu_emlrtRTEI, true);
  i = r->size[0];
  r->size[0] = xs2->size[0];
  emxEnsureCapacity_boolean_T(sp, r, i, &hu_emlrtRTEI);
  loop_ub = xs2->size[0];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = muDoubleScalarIsNaN(xs2->data[i]);
  }
  emxFree_real_T(&xs2);
  end = r->size[0] - 1;
  loop_ub = 0;
  for (i = 0; i <= end; i++) {
    if (r->data[i]) {
      loop_ub++;
    }
  }
  emxInit_int32_T(sp, &r1, 1, &iu_emlrtRTEI, true);
  i = r1->size[0];
  r1->size[0] = loop_ub;
  emxEnsureCapacity_int32_T(sp, r1, i, &iu_emlrtRTEI);
  loop_ub = 0;
  for (i = 0; i <= end; i++) {
    if (r->data[i]) {
      r1->data[loop_ub] = i + 1;
      loop_ub++;
    }
  }
  emxFree_boolean_T(&r);
  loop_ub = r1->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (r1->data[i] > x->size[0]) {
      emlrtDynamicBoundsCheckR2012b(r1->data[i], 1, x->size[0], &jo_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    weights->data[r1->data[i] - 1] = false;
  }
  emxFree_int32_T(&r1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void b_GYfilt(const emlrtStack *sp, const emxArray_real_T *x,
              emxArray_boolean_T *weights)
{
  static const int32_T iv[2] = {1, 7};
  static const int32_T iv1[2] = {1, 15};
  static const char_T b_u[15] = {' ', 'i', 't', 'e', 'r',  ' ', '=', ' ',
                                 '%', '.', '0', 'f', '\\', 'n', ' '};
  static const char_T u[7] = {'f', 'p', 'r', 'i', 'n', 't', 'f'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_boolean_T *r;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_int32_T *r3;
  emxArray_real_T *b_id;
  emxArray_real_T *id;
  emxArray_real_T *xs2;
  emxArray_real_T *xs2na;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  const mxArray *y;
  real_T madx;
  real_T mu;
  int32_T converge;
  int32_T i;
  int32_T iter;
  int32_T loop_ub;
  int32_T n;
  int32_T partialTrueCount;
  int32_T trueCount;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &xs2na, 1, &nu_emlrtRTEI, true);
  /* GYfilt computes the Gervini-Yohai univariate outlier identifier */
  /*  */
  /* <a href="matlab: docsearchFS('GYfilt')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     x:         Input vector. Vector. A vector with n elements that */
  /*                contains the univariate data. */
  /*  */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*       alpha :  coverage probability. Scalar. */
  /*                Scalar in the interval [0.5 1). The default coverage */
  /*                probability is 0.95. */
  /*                  Example - 'alpha',0.99 */
  /*                  Data Types - double */
  /*  */
  /*    centering:  centering the data. Boolean. */
  /*                If centering is true input data are preliminarly centered.
   */
  /*                The defalt value of centering is true. */
  /*                  Example - 'centering',false */
  /*                  Data Types - logical */
  /*  */
  /*    iterating:  iterative procedure. Boolean. */
  /*                If Boolean is true then an iterative adaptive procedure is
   */
  /*                applied.  The defalt value of iterating is true. */
  /*                  Example - 'iterating',false */
  /*                  Data Types - logical */
  /*  */
  /*       niter :  maximum number of iterations in the iterative adaptive */
  /*                procedure. Positive integer. This option is used just if
   * previous iterating */
  /*                is true. The default value of niter is 10. */
  /*                  Example - 'niter',20 */
  /*                  Data Types - double */
  /*  */
  /*   Output: */
  /*  */
  /*     weights:   Boolean vector of weights. Logical. */
  /*                A boolean vector with n elements that contains false in */
  /*                correspondence of the units declared as outliers. */
  /*  */
  /*  */
  /*  See also: LTSts */
  /*  */
  /*  References: */
  /*  */
  /*  Gervini, D. and Yohai, V.J. (2002), A class of robust and fully efficient
   */
  /*  regression estimators, "Annals of Statistics", Vol. 30, pp. 583-616. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* <a href="matlab: docsearchFS('GYfilt')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % GYfilt with all the default options. */
  /*     weights=GYfilt(randn(100,1)); */
  /* } */
  /* { */
  /*     % GYfilt with option alpha. */
  /*     alpha=0.999; */
  /*     weights=GYfilt(randn(100,1),'alpha',alpha); */
  /* } */
  /*  Beginning of code */
  /*  default coverage probability */
  /*  Write in structure 'options' the options chosen by the user */
  st.site = &ox_emlrtRSI;
  mu = median(&st, x);
  st.site = &px_emlrtRSI;
  madx = 1.4826 * mad(&st, x);
  i = xs2na->size[0];
  xs2na->size[0] = x->size[0];
  emxEnsureCapacity_real_T(sp, xs2na, i, &fu_emlrtRTEI);
  loop_ub = x->size[0];
  for (i = 0; i < loop_ub; i++) {
    xs2na->data[i] = (x->data[i] - mu) / madx;
  }
  emxInit_real_T(sp, &xs2, 1, &ju_emlrtRTEI, true);
  st.site = &qx_emlrtRSI;
  power(&st, xs2na, xs2);
  st.site = &gy_emlrtRSI;
  /*  Inner function gyiterate */
  converge = 0;
  iter = 0;
  n = xs2->size[0];
  emxInit_real_T(&st, &id, 2, &mu_emlrtRTEI, true);
  if (xs2->size[0] < 1) {
    id->size[0] = 1;
    id->size[1] = 0;
  } else {
    i = id->size[0] * id->size[1];
    id->size[0] = 1;
    id->size[1] = xs2->size[0];
    emxEnsureCapacity_real_T(&st, id, i, &mu_emlrtRTEI);
    loop_ub = xs2->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      id->data[i] = (real_T)i + 1.0;
    }
  }
  /*  vold = v; */
  emxInit_boolean_T(&st, &r, 1, &hu_emlrtRTEI, true);
  emxInit_int32_T(&st, &r1, 1, &su_emlrtRTEI, true);
  emxInit_real_T(&st, &b_id, 2, &qu_emlrtRTEI, true);
  while ((converge == 0) && (iter < 10)) {
    iter++;
    b_st.site = &hy_emlrtRSI;
    gyfiltaux(&b_st, xs2);
    i = r->size[0];
    r->size[0] = xs2->size[0];
    emxEnsureCapacity_boolean_T(&st, r, i, &we_emlrtRTEI);
    loop_ub = xs2->size[0];
    for (i = 0; i < loop_ub; i++) {
      r->data[i] = muDoubleScalarIsNaN(xs2->data[i]);
    }
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      r->data[i] = !r->data[i];
    }
    loop_ub = r->size[0] - 1;
    trueCount = 0;
    for (i = 0; i <= loop_ub; i++) {
      if (r->data[i]) {
        trueCount++;
      }
    }
    i = r1->size[0];
    r1->size[0] = trueCount;
    emxEnsureCapacity_int32_T(&st, r1, i, &pu_emlrtRTEI);
    partialTrueCount = 0;
    for (i = 0; i <= loop_ub; i++) {
      if (r->data[i]) {
        r1->data[partialTrueCount] = i + 1;
        partialTrueCount++;
      }
    }
    i = b_id->size[0] * b_id->size[1];
    b_id->size[0] = 1;
    b_id->size[1] = r1->size[0];
    emxEnsureCapacity_real_T(&st, b_id, i, &qu_emlrtRTEI);
    loop_ub = r1->size[0];
    for (i = 0; i < loop_ub; i++) {
      if (r1->data[i] > id->size[1]) {
        emlrtDynamicBoundsCheckR2012b(r1->data[i], 1, id->size[1], &lo_emlrtBCI,
                                      &st);
      }
      b_id->data[i] = id->data[r1->data[i] - 1];
    }
    i = id->size[0] * id->size[1];
    id->size[0] = 1;
    id->size[1] = b_id->size[1];
    emxEnsureCapacity_real_T(&st, id, i, &ru_emlrtRTEI);
    loop_ub = b_id->size[1];
    for (i = 0; i < loop_ub; i++) {
      id->data[i] = b_id->data[i];
    }
    i = r->size[0];
    r->size[0] = xs2->size[0];
    emxEnsureCapacity_boolean_T(&st, r, i, &we_emlrtRTEI);
    loop_ub = xs2->size[0];
    for (i = 0; i < loop_ub; i++) {
      r->data[i] = muDoubleScalarIsNaN(xs2->data[i]);
    }
    b_st.site = &iy_emlrtRSI;
    if (!any(&b_st, r)) {
      converge = 1;
    }
    i = r->size[0];
    r->size[0] = xs2->size[0];
    emxEnsureCapacity_boolean_T(&st, r, i, &we_emlrtRTEI);
    loop_ub = xs2->size[0];
    for (i = 0; i < loop_ub; i++) {
      r->data[i] = muDoubleScalarIsNaN(xs2->data[i]);
    }
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      r->data[i] = !r->data[i];
    }
    loop_ub = r->size[0] - 1;
    trueCount = 0;
    for (i = 0; i <= loop_ub; i++) {
      if (r->data[i]) {
        trueCount++;
      }
    }
    partialTrueCount = 0;
    for (i = 0; i <= loop_ub; i++) {
      if (r->data[i]) {
        if (i + 1 > xs2->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, xs2->size[0], &mo_emlrtBCI,
                                        &st);
        }
        xs2->data[partialTrueCount] = xs2->data[i];
        partialTrueCount++;
      }
    }
    i = xs2->size[0];
    xs2->size[0] = trueCount;
    emxEnsureCapacity_real_T(&st, xs2, i, &pu_emlrtRTEI);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  emxFree_real_T(&b_id);
  emxFree_int32_T(&r1);
  i = xs2na->size[0];
  xs2na->size[0] = n;
  emxEnsureCapacity_real_T(&st, xs2na, i, &nu_emlrtRTEI);
  for (i = 0; i < n; i++) {
    xs2na->data[i] = rtNaN;
  }
  emxInit_int32_T(&st, &r2, 2, &iu_emlrtRTEI, true);
  i = r2->size[0] * r2->size[1];
  r2->size[0] = 1;
  r2->size[1] = id->size[1];
  emxEnsureCapacity_int32_T(&st, r2, i, &ou_emlrtRTEI);
  loop_ub = id->size[1];
  for (i = 0; i < loop_ub; i++) {
    partialTrueCount = (int32_T)id->data[i];
    if (id->data[i] != partialTrueCount) {
      emlrtIntegerCheckR2012b(id->data[i], &mi_emlrtDCI, &st);
    }
    if (partialTrueCount > n) {
      emlrtDynamicBoundsCheckR2012b((int32_T)id->data[i], 1, n, &ko_emlrtBCI,
                                    &st);
    }
    r2->data[i] = partialTrueCount;
  }
  emxFree_real_T(&id);
  if (xs2->size[0] != r2->size[1]) {
    emlrtSubAssignSizeCheck1dR2017a(r2->size[1], xs2->size[0], &lc_emlrtECI,
                                    &st);
  }
  loop_ub = r2->size[1];
  for (i = 0; i < loop_ub; i++) {
    xs2na->data[r2->data[i] - 1] = xs2->data[i];
  }
  emxFree_int32_T(&r2);
  emxFree_real_T(&xs2);
  /*  disp([' iter = ' num2str(iter)]) */
  emlrtAssertMATLABThread(&st, &c_emlrtRTEI);
  b_st.site = &jy_emlrtRSI;
  c_st.site = &xr_emlrtRSI;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(&c_st, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(&c_st, 15, m, &b_u[0]);
  emlrtAssign(&c_y, m);
  d_y = NULL;
  m = emlrtCreateDoubleScalar(iter);
  emlrtAssign(&d_y, m);
  d_st.site = &ybb_emlrtRSI;
  mu = emlrt_marshallIn(&d_st, d_feval(&d_st, y, b_y, c_y, d_y, &q_emlrtMCI),
                        "<output of feval>");
  e_y = NULL;
  m = emlrtCreateDoubleScalar(mu);
  emlrtAssign(&e_y, m);
  emlrtDisplayR2012b(e_y, (char_T *)"ans", &c_emlrtRTEI, &st);
  i = weights->size[0];
  weights->size[0] = x->size[0];
  emxEnsureCapacity_boolean_T(sp, weights, i, &gu_emlrtRTEI);
  loop_ub = x->size[0];
  for (i = 0; i < loop_ub; i++) {
    weights->data[i] = true;
  }
  i = r->size[0];
  r->size[0] = xs2na->size[0];
  emxEnsureCapacity_boolean_T(sp, r, i, &hu_emlrtRTEI);
  loop_ub = xs2na->size[0];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = muDoubleScalarIsNaN(xs2na->data[i]);
  }
  emxFree_real_T(&xs2na);
  loop_ub = r->size[0] - 1;
  trueCount = 0;
  for (i = 0; i <= loop_ub; i++) {
    if (r->data[i]) {
      trueCount++;
    }
  }
  emxInit_int32_T(sp, &r3, 1, &iu_emlrtRTEI, true);
  i = r3->size[0];
  r3->size[0] = trueCount;
  emxEnsureCapacity_int32_T(sp, r3, i, &iu_emlrtRTEI);
  partialTrueCount = 0;
  for (i = 0; i <= loop_ub; i++) {
    if (r->data[i]) {
      r3->data[partialTrueCount] = i + 1;
      partialTrueCount++;
    }
  }
  emxFree_boolean_T(&r);
  loop_ub = r3->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (r3->data[i] > x->size[0]) {
      emlrtDynamicBoundsCheckR2012b(r3->data[i], 1, x->size[0], &jo_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    weights->data[r3->data[i] - 1] = false;
  }
  emxFree_int32_T(&r3);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (GYfilt.c) */
