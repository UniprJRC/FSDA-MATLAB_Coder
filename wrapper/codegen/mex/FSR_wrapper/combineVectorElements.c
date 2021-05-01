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
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"

/* Variable Definitions */
static emlrtRSInfo xj_emlrtRSI = {
    53,                 /* lineNo */
    "sumMatrixColumns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" /* pathName */
};

static emlrtRSInfo tv_emlrtRSI = {
    41,                 /* lineNo */
    "sumMatrixColumns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" /* pathName */
};

static emlrtRSInfo uv_emlrtRSI = {
    50,                 /* lineNo */
    "sumMatrixColumns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" /* pathName */
};

static emlrtRSInfo qlb_emlrtRSI = {
    177,                /* lineNo */
    "colMajorFlatIter", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combin"
    "eVectorElements.m" /* pathName */
};

static emlrtRTEInfo cq_emlrtRTEI = {
    74,                      /* lineNo */
    9,                       /* colNo */
    "combineVectorElements", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combin"
    "eVectorElements.m" /* pName */
};

static emlrtRTEInfo dq_emlrtRTEI = {
    35,                    /* lineNo */
    20,                    /* colNo */
    "sumMatrixIncludeNaN", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" /* pName */
};

static emlrtRTEInfo bfb_emlrtRTEI = {
    97,                      /* lineNo */
    13,                      /* colNo */
    "combineVectorElements", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combin"
    "eVectorElements.m" /* pName */
};

static emlrtRTEInfo cfb_emlrtRTEI = {
    170,                     /* lineNo */
    24,                      /* colNo */
    "combineVectorElements", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combin"
    "eVectorElements.m" /* pName */
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
  st.site = &mm_emlrtRSI;
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
    emxEnsureCapacity_real_T(&st, y, nfb, &cq_emlrtRTEI);
    ncols = x->size[1];
    for (nfb = 0; nfb < ncols; nfb++) {
      y->data[nfb] = 0.0;
    }
  } else {
    b_st.site = &nm_emlrtRSI;
    c_st.site = &vj_emlrtRSI;
    nfb = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(&c_st, y, nfb, &dq_emlrtRTEI);
    ncols = x->size[1] - 1;
    if (x->size[0] < 4096) {
      d_st.site = &tv_emlrtRSI;
      if (x->size[1] > 2147483646) {
        e_st.site = &ab_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }
      for (col = 0; col <= ncols; col++) {
        d_st.site = &wj_emlrtRSI;
        y->data[col] = c_sumColumnB(&d_st, x, col + 1, x->size[0]);
      }
    } else {
      nfb = x->size[0] / 4096;
      inb = nfb << 12;
      nleft = x->size[0] - inb;
      d_st.site = &uv_emlrtRSI;
      if (x->size[1] > 2147483646) {
        e_st.site = &ab_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }
      for (col = 0; col <= ncols; col++) {
        s = b_sumColumnB4(x, col + 1, 1);
        d_st.site = &xj_emlrtRSI;
        for (ib = 2; ib <= nfb; ib++) {
          s += b_sumColumnB4(x, col + 1, ((ib - 1) << 12) + 1);
        }
        if (nleft > 0) {
          d_st.site = &yj_emlrtRSI;
          s += d_sumColumnB(&d_st, x, col + 1, nleft, inb + 1);
        }
        y->data[col] = s;
      }
    }
  }
}

void c_combineVectorElements(const emlrtStack *sp, const emxArray_boolean_T *x,
                             emxArray_int32_T *y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T i;
  int32_T k;
  int32_T npages;
  int32_T vlen;
  int32_T xpageoffset;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  vlen = x->size[0];
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = x->size[1];
    emxEnsureCapacity_int32_T(sp, y, i, &bfb_emlrtRTEI);
    xpageoffset = x->size[1];
    for (i = 0; i < xpageoffset; i++) {
      y->data[i] = 0;
    }
  } else {
    st.site = &md_emlrtRSI;
    npages = x->size[1];
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = x->size[1];
    emxEnsureCapacity_int32_T(&st, y, i, &cfb_emlrtRTEI);
    b_st.site = &qlb_emlrtRSI;
    if (x->size[1] > 2147483646) {
      c_st.site = &ab_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (i = 0; i < npages; i++) {
      xpageoffset = i * x->size[0];
      y->data[i] = x->data[xpageoffset];
      b_st.site = &nd_emlrtRSI;
      if ((2 <= vlen) && (vlen > 2147483646)) {
        c_st.site = &ab_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }
      for (k = 2; k <= vlen; k++) {
        y->data[i] += x->data[(xpageoffset + k) - 1];
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
    st.site = &md_emlrtRSI;
    y = x->data[0];
    b_st.site = &nd_emlrtRSI;
    if ((2 <= x->size[0]) && (x->size[0] > 2147483646)) {
      c_st.site = &ab_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (k = 2; k <= vlen; k++) {
      y += x->data[k - 1];
    }
  }
  return y;
}

void d_combineVectorElements(const emlrtStack *sp, const emxArray_boolean_T *x,
                             int32_T y_data[], int32_T y_size[2])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T k;
  int32_T vlen;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  vlen = x->size[0];
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    y_size[0] = 1;
    y_size[1] = x->size[1];
    vlen = x->size[1];
    if (0 <= vlen - 1) {
      y_data[0] = 0;
    }
  } else {
    st.site = &md_emlrtRSI;
    y_size[0] = 1;
    y_size[1] = 1;
    b_st.site = &qlb_emlrtRSI;
    y_data[0] = x->data[0];
    b_st.site = &nd_emlrtRSI;
    if ((2 <= x->size[0]) && (x->size[0] > 2147483646)) {
      c_st.site = &ab_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (k = 2; k <= vlen; k++) {
      y_data[0] += x->data[k - 1];
    }
  }
}

/* End of code generation (combineVectorElements.c) */
