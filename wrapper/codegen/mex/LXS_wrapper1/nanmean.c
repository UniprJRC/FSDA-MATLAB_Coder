/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * nanmean.c
 *
 * Code generation for function 'nanmean'
 *
 */

/* Include files */
#include "nanmean.h"
#include "LXS_wrapper1_data.h"
#include "LXS_wrapper1_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo wk_emlrtRSI = {
    7,         /* lineNo */
    "nanmean", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\nanmean.m" /* pathName
                                                                         */
};

static emlrtRSInfo
    xk_emlrtRSI =
        {
            74,                /* lineNo */
            "nan_sum_or_mean", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\private\\nan_sum_or_"
            "mean.m" /* pathName */
};

static emlrtBCInfo am_emlrtBCI =
    {
        -1,                /* iFirst */
        -1,                /* iLast */
        75,                /* lineNo */
        21,                /* colNo */
        "",                /* aName */
        "nan_sum_or_mean", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\private\\nan_sum_or_mean."
        "m", /* pName */
        0    /* checkKind */
};

static emlrtBCInfo bm_emlrtBCI =
    {
        -1,                /* iFirst */
        -1,                /* iLast */
        76,                /* lineNo */
        21,                /* colNo */
        "",                /* aName */
        "nan_sum_or_mean", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\private\\nan_sum_or_mean."
        "m", /* pName */
        0    /* checkKind */
};

/* Function Definitions */
real_T nanmean(const emlrtStack *sp, const emxArray_real_T *varargin_1)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T y;
  int32_T c;
  int32_T k;
  int32_T vlen;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &wk_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  vlen = varargin_1->size[0];
  y = 0.0;
  c = 0;
  b_st.site = &xk_emlrtRSI;
  if ((1 <= varargin_1->size[0]) && (varargin_1->size[0] > 2147483646)) {
    c_st.site = &hc_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (k = 0; k < vlen; k++) {
    if (k + 1 > varargin_1->size[0]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, varargin_1->size[0], &am_emlrtBCI,
                                    &st);
    }
    if (!muDoubleScalarIsNaN(varargin_1->data[k])) {
      if (k + 1 > varargin_1->size[0]) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, varargin_1->size[0],
                                      &bm_emlrtBCI, &st);
      }
      y += varargin_1->data[k];
      c++;
    }
  }
  if (c == 0) {
    y = rtNaN;
  } else {
    y /= (real_T)c;
  }
  return y;
}

/* End of code generation (nanmean.c) */
