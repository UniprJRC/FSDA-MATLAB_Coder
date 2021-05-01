/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * std.c
 *
 * Code generation for function 'std'
 *
 */

/* Include files */
#include "std.h"
#include "LXS_wrapper1_data.h"
#include "LXS_wrapper1_emxutil.h"
#include "LXS_wrapper1_types.h"
#include "blockedSummation.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo rm_emlrtRSI = {
    9,     /* lineNo */
    "std", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\std.m" /* pathName
                                                                        */
};

static emlrtRSInfo sm_emlrtRSI = {
    102,      /* lineNo */
    "varstd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\varstd"
    ".m" /* pathName */
};

static emlrtRSInfo tm_emlrtRSI = {
    96,        /* lineNo */
    "vvarstd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vvarst"
    "d.m" /* pathName */
};

static emlrtRSInfo um_emlrtRSI = {
    127,       /* lineNo */
    "vvarstd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vvarst"
    "d.m" /* pathName */
};

static emlrtRSInfo vm_emlrtRSI = {
    143,       /* lineNo */
    "vvarstd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vvarst"
    "d.m" /* pathName */
};

static emlrtRTEInfo mk_emlrtRTEI = {
    126,       /* lineNo */
    34,        /* colNo */
    "vvarstd", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vvarst"
    "d.m" /* pName */
};

static emlrtRTEInfo nk_emlrtRTEI = {
    126,       /* lineNo */
    9,         /* colNo */
    "vvarstd", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vvarst"
    "d.m" /* pName */
};

/* Function Definitions */
real_T b_std(const emlrtStack *sp, const emxArray_real_T *x)
{
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *absdiff;
  real_T xbar;
  real_T y;
  int32_T k;
  int32_T n;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  st.site = &rm_emlrtRSI;
  n = x->size[0];
  b_st.site = &sm_emlrtRSI;
  if (x->size[0] == 0) {
    y = rtNaN;
  } else if (x->size[0] == 1) {
    if ((!muDoubleScalarIsInf(x->data[0])) &&
        (!muDoubleScalarIsNaN(x->data[0]))) {
      y = 0.0;
    } else {
      y = rtNaN;
    }
  } else {
    emxInit_real_T(&b_st, &absdiff, 1, &nk_emlrtRTEI, true);
    c_st.site = &tm_emlrtRSI;
    d_st.site = &mm_emlrtRSI;
    xbar = blockedSummation(&d_st, x, x->size[0]);
    xbar /= (real_T)x->size[0];
    k = absdiff->size[0];
    absdiff->size[0] = x->size[0];
    emxEnsureCapacity_real_T(&b_st, absdiff, k, &mk_emlrtRTEI);
    c_st.site = &um_emlrtRSI;
    if (x->size[0] > 2147483646) {
      d_st.site = &gc_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (k = 0; k < n; k++) {
      absdiff->data[k] = muDoubleScalarAbs(x->data[k] - xbar);
    }
    n_t = (ptrdiff_t)x->size[0];
    incx_t = (ptrdiff_t)1;
    y = dnrm2(&n_t, &absdiff->data[0], &incx_t);
    c_st.site = &vm_emlrtRSI;
    y /= muDoubleScalarSqrt((real_T)x->size[0] - 1.0);
    emxFree_real_T(&absdiff);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return y;
}

/* End of code generation (std.c) */
