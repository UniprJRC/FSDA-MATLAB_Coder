/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * combineVectorElements.c
 *
 * Code generation for function 'combineVectorElements'
 *
 */

/* Include files */
#include "combineVectorElements.h"
#include "LXS_wrapper1_data.h"
#include "LXS_wrapper1_emxutil.h"
#include "LXS_wrapper1_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"

/* Variable Definitions */
static emlrtRSInfo yj_emlrtRSI = {
    53,                 /* lineNo */
    "sumMatrixColumns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" /* pathName */
};

static emlrtRSInfo wv_emlrtRSI = {
    41,                 /* lineNo */
    "sumMatrixColumns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" /* pathName */
};

static emlrtRSInfo xv_emlrtRSI = {
    50,                 /* lineNo */
    "sumMatrixColumns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" /* pathName */
};

static emlrtRTEInfo jp_emlrtRTEI = {
    74,                      /* lineNo */
    9,                       /* colNo */
    "combineVectorElements", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combin"
    "eVectorElements.m" /* pName */
};

static emlrtRTEInfo kp_emlrtRTEI = {
    35,                    /* lineNo */
    20,                    /* colNo */
    "sumMatrixIncludeNaN", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" /* pName */
};

/* Function Definitions */
void b_combineVectorElements(const emlrtStack *sp, const emxArray_real_T *x,
                             emxArray_real_T *y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T s;
  int32_T col;
  int32_T ib;
  int32_T inb;
  int32_T ncols;
  int32_T nfb;
  int32_T nleft;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &nm_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    nfb = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(&st, y, nfb, &jp_emlrtRTEI);
    ncols = x->size[1];
    for (nfb = 0; nfb < ncols; nfb++) {
      y->data[nfb] = 0.0;
    }
  } else {
    b_st.site = &om_emlrtRSI;
    c_st.site = &wj_emlrtRSI;
    nfb = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(&c_st, y, nfb, &kp_emlrtRTEI);
    ncols = x->size[1] - 1;
    if (x->size[0] < 4096) {
      d_st.site = &wv_emlrtRSI;
      if (x->size[1] > 2147483646) {
        e_st.site = &hc_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }
      for (col = 0; col <= ncols; col++) {
        d_st.site = &xj_emlrtRSI;
        y->data[col] = c_sumColumnB(&d_st, x, col + 1, x->size[0]);
      }
    } else {
      nfb = x->size[0] / 4096;
      inb = nfb << 12;
      nleft = x->size[0] - inb;
      d_st.site = &xv_emlrtRSI;
      if (x->size[1] > 2147483646) {
        e_st.site = &hc_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }
      for (col = 0; col <= ncols; col++) {
        s = b_sumColumnB4(x, col + 1, 1);
        d_st.site = &yj_emlrtRSI;
        for (ib = 2; ib <= nfb; ib++) {
          s += b_sumColumnB4(x, col + 1, ((ib - 1) << 12) + 1);
        }
        if (nleft > 0) {
          d_st.site = &ak_emlrtRSI;
          s += d_sumColumnB(&d_st, x, col + 1, nleft, inb + 1);
        }
        y->data[col] = s;
      }
    }
  }
}

int32_T combineVectorElements(const emlrtStack *sp, const emxArray_boolean_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T k;
  int32_T vlen;
  int32_T y;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  vlen = x->size[0];
  if (x->size[0] == 0) {
    y = 0;
  } else {
    st.site = &te_emlrtRSI;
    y = x->data[0];
    b_st.site = &ue_emlrtRSI;
    if ((2 <= x->size[0]) && (x->size[0] > 2147483646)) {
      c_st.site = &hc_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (k = 2; k <= vlen; k++) {
      y += x->data[k - 1];
    }
  }
  return y;
}

/* End of code generation (combineVectorElements.c) */
