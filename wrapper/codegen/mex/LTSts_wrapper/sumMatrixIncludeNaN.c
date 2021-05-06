/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sumMatrixIncludeNaN.c
 *
 * Code generation for function 'sumMatrixIncludeNaN'
 *
 */

/* Include files */
#include "sumMatrixIncludeNaN.h"
#include "LTSts_wrapper_data.h"
#include "LTSts_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo ho_emlrtRSI = {
    178,          /* lineNo */
    "sumColumnB", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" /* pathName */
};

static emlrtRSInfo io_emlrtRSI = {
    182,          /* lineNo */
    "sumColumnB", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" /* pathName */
};

static emlrtRSInfo jo_emlrtRSI = {
    183,          /* lineNo */
    "sumColumnB", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" /* pathName */
};

static emlrtRSInfo ko_emlrtRSI = {
    184,          /* lineNo */
    "sumColumnB", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" /* pathName */
};

static emlrtRSInfo lo_emlrtRSI = {
    189,          /* lineNo */
    "sumColumnB", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" /* pathName */
};

static emlrtRSInfo mo_emlrtRSI = {
    210,         /* lineNo */
    "sumColumn", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMat"
    "rixIncludeNaN.m" /* pathName */
};

/* Function Definitions */
real_T b_sumColumnB(const emlrtStack *sp, const emxArray_real_T *x,
                    int32_T vlen, int32_T vstart)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T b_y;
  real_T y;
  int32_T b_k;
  int32_T b_vstart;
  int32_T inb;
  int32_T k;
  int32_T nfb;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (vlen <= 1024) {
    st.site = &ho_emlrtRSI;
    y = x->data[vstart - 1];
    b_st.site = &mo_emlrtRSI;
    if ((1 <= vlen - 1) && (vlen - 1 > 2147483646)) {
      c_st.site = &qf_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (k = 0; k <= vlen - 2; k++) {
      y += x->data[vstart + k];
    }
  } else {
    nfb = vlen / 1024;
    inb = nfb << 10;
    st.site = &io_emlrtRSI;
    y = x->data[vstart - 1];
    b_st.site = &mo_emlrtRSI;
    for (k = 0; k < 1023; k++) {
      y += x->data[vstart + k];
    }
    st.site = &jo_emlrtRSI;
    for (k = 2; k <= nfb; k++) {
      st.site = &ko_emlrtRSI;
      b_vstart = vstart + ((k - 1) << 10);
      b_y = x->data[b_vstart - 1];
      b_st.site = &mo_emlrtRSI;
      for (b_k = 0; b_k < 1023; b_k++) {
        b_y += x->data[b_vstart + b_k];
      }
      y += b_y;
    }
    if (vlen > inb) {
      nfb = vlen - inb;
      b_vstart = vstart + inb;
      st.site = &lo_emlrtRSI;
      b_y = x->data[b_vstart - 1];
      b_st.site = &mo_emlrtRSI;
      if ((1 <= nfb - 1) && (nfb - 1 > 2147483646)) {
        c_st.site = &qf_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }
      for (k = 0; k <= nfb - 2; k++) {
        b_y += x->data[b_vstart + k];
      }
      y += b_y;
    }
  }
  return y;
}

real_T b_sumColumnB4(const emxArray_real_T *x, int32_T col, int32_T vstart)
{
  real_T psum1;
  real_T psum2;
  real_T psum3;
  real_T psum4;
  int32_T i1;
  int32_T k;
  int32_T psum1_tmp;
  i1 = vstart + (col - 1) * x->size[0];
  psum1 = x->data[i1 - 1];
  psum2 = x->data[i1 + 1023];
  psum3 = x->data[i1 + 2047];
  psum4 = x->data[i1 + 3071];
  for (k = 0; k < 1023; k++) {
    psum1_tmp = i1 + k;
    psum1 += x->data[psum1_tmp];
    psum2 += x->data[psum1_tmp + 1024];
    psum3 += x->data[psum1_tmp + 2048];
    psum4 += x->data[psum1_tmp + 3072];
  }
  return (psum1 + psum2) + (psum3 + psum4);
}

real_T c_sumColumnB(const emlrtStack *sp, const emxArray_real_T *x, int32_T col,
                    int32_T vlen)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T b_y;
  real_T y;
  int32_T b_k;
  int32_T i0;
  int32_T inb;
  int32_T k;
  int32_T nfb;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (vlen <= 1024) {
    st.site = &ho_emlrtRSI;
    i0 = (col - 1) * x->size[0];
    y = x->data[i0];
    b_st.site = &mo_emlrtRSI;
    if ((1 <= vlen - 1) && (vlen - 1 > 2147483646)) {
      c_st.site = &qf_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (k = 0; k <= vlen - 2; k++) {
      y += x->data[(i0 + k) + 1];
    }
  } else {
    nfb = vlen / 1024;
    inb = nfb << 10;
    st.site = &io_emlrtRSI;
    i0 = (col - 1) * x->size[0];
    y = x->data[i0];
    b_st.site = &mo_emlrtRSI;
    for (k = 0; k < 1023; k++) {
      y += x->data[(i0 + k) + 1];
    }
    st.site = &jo_emlrtRSI;
    for (k = 2; k <= nfb; k++) {
      st.site = &ko_emlrtRSI;
      i0 = ((k - 1) << 10) + (col - 1) * x->size[0];
      b_y = x->data[i0];
      b_st.site = &mo_emlrtRSI;
      for (b_k = 0; b_k < 1023; b_k++) {
        b_y += x->data[(i0 + b_k) + 1];
      }
      y += b_y;
    }
    if (vlen > inb) {
      nfb = vlen - inb;
      st.site = &lo_emlrtRSI;
      i0 = inb + (col - 1) * x->size[0];
      b_y = x->data[i0];
      b_st.site = &mo_emlrtRSI;
      if ((1 <= nfb - 1) && (nfb - 1 > 2147483646)) {
        c_st.site = &qf_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }
      for (k = 0; k <= nfb - 2; k++) {
        b_y += x->data[(i0 + k) + 1];
      }
      y += b_y;
    }
  }
  return y;
}

real_T d_sumColumnB(const emlrtStack *sp, const emxArray_real_T *x, int32_T col,
                    int32_T vlen, int32_T vstart)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T b_y;
  real_T y;
  int32_T b_k;
  int32_T i0;
  int32_T inb;
  int32_T k;
  int32_T nfb;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (vlen <= 1024) {
    st.site = &ho_emlrtRSI;
    i0 = vstart + (col - 1) * x->size[0];
    y = x->data[i0 - 1];
    b_st.site = &mo_emlrtRSI;
    if ((1 <= vlen - 1) && (vlen - 1 > 2147483646)) {
      c_st.site = &qf_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (k = 0; k <= vlen - 2; k++) {
      y += x->data[i0 + k];
    }
  } else {
    nfb = vlen / 1024;
    inb = nfb << 10;
    st.site = &io_emlrtRSI;
    i0 = vstart + (col - 1) * x->size[0];
    y = x->data[i0 - 1];
    b_st.site = &mo_emlrtRSI;
    for (k = 0; k < 1023; k++) {
      y += x->data[i0 + k];
    }
    st.site = &jo_emlrtRSI;
    for (k = 2; k <= nfb; k++) {
      st.site = &ko_emlrtRSI;
      i0 = (vstart + ((k - 1) << 10)) + (col - 1) * x->size[0];
      b_y = x->data[i0 - 1];
      b_st.site = &mo_emlrtRSI;
      for (b_k = 0; b_k < 1023; b_k++) {
        b_y += x->data[i0 + b_k];
      }
      y += b_y;
    }
    if (vlen > inb) {
      nfb = vlen - inb;
      st.site = &lo_emlrtRSI;
      i0 = (vstart + inb) + (col - 1) * x->size[0];
      b_y = x->data[i0 - 1];
      b_st.site = &mo_emlrtRSI;
      if ((1 <= nfb - 1) && (nfb - 1 > 2147483646)) {
        c_st.site = &qf_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }
      for (k = 0; k <= nfb - 2; k++) {
        b_y += x->data[i0 + k];
      }
      y += b_y;
    }
  }
  return y;
}

real_T sumColumnB(const emlrtStack *sp, const emxArray_real_T *x, int32_T vlen)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T b_y;
  real_T y;
  int32_T b_k;
  int32_T inb;
  int32_T k;
  int32_T nfb;
  int32_T vstart;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (vlen <= 1024) {
    st.site = &ho_emlrtRSI;
    y = x->data[0];
    b_st.site = &mo_emlrtRSI;
    if ((1 <= vlen - 1) && (vlen - 1 > 2147483646)) {
      c_st.site = &qf_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (k = 0; k <= vlen - 2; k++) {
      y += x->data[k + 1];
    }
  } else {
    nfb = vlen / 1024;
    inb = nfb << 10;
    st.site = &io_emlrtRSI;
    y = x->data[0];
    b_st.site = &mo_emlrtRSI;
    for (k = 0; k < 1023; k++) {
      y += x->data[k + 1];
    }
    st.site = &jo_emlrtRSI;
    for (k = 2; k <= nfb; k++) {
      st.site = &ko_emlrtRSI;
      vstart = (k - 1) << 10;
      b_y = x->data[vstart];
      b_st.site = &mo_emlrtRSI;
      for (b_k = 0; b_k < 1023; b_k++) {
        b_y += x->data[(vstart + b_k) + 1];
      }
      y += b_y;
    }
    if (vlen > inb) {
      nfb = vlen - inb;
      st.site = &lo_emlrtRSI;
      b_y = x->data[inb];
      b_st.site = &mo_emlrtRSI;
      if ((1 <= nfb - 1) && (nfb - 1 > 2147483646)) {
        c_st.site = &qf_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }
      for (k = 0; k <= nfb - 2; k++) {
        b_y += x->data[(inb + k) + 1];
      }
      y += b_y;
    }
  }
  return y;
}

real_T sumColumnB4(const emxArray_real_T *x, int32_T vstart)
{
  real_T psum1;
  real_T psum2;
  real_T psum3;
  real_T psum4;
  int32_T k;
  int32_T psum1_tmp;
  psum1 = x->data[vstart - 1];
  psum2 = x->data[vstart + 1023];
  psum3 = x->data[vstart + 2047];
  psum4 = x->data[vstart + 3071];
  for (k = 0; k < 1023; k++) {
    psum1_tmp = vstart + k;
    psum1 += x->data[psum1_tmp];
    psum2 += x->data[psum1_tmp + 1024];
    psum3 += x->data[psum1_tmp + 2048];
    psum4 += x->data[psum1_tmp + 3072];
  }
  return (psum1 + psum2) + (psum3 + psum4);
}

/* End of code generation (sumMatrixIncludeNaN.c) */
