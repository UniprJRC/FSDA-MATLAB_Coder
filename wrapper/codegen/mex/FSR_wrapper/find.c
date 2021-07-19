/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * find.c
 *
 * Code generation for function 'find'
 *
 */

/* Include files */
#include "find.h"
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo wb_emlrtRSI = {
    144,        /* lineNo */
    "eml_find", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                       */
};

static emlrtRSInfo xb_emlrtRSI = {
    382,                  /* lineNo */
    "find_first_indices", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                       */
};

static emlrtRSInfo ag_emlrtRSI = {
    402,                  /* lineNo */
    "find_first_indices", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                       */
};

static emlrtRSInfo hmb_emlrtRSI = {
    146,        /* lineNo */
    "eml_find", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                       */
};

static emlrtRTEInfo o_emlrtRTEI = {
    392,                  /* lineNo */
    1,                    /* colNo */
    "find_first_indices", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                       */
};

static emlrtRTEInfo kb_emlrtRTEI = {
    81,         /* lineNo */
    1,          /* colNo */
    "eml_find", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                       */
};

static emlrtRTEInfo ad_emlrtRTEI = {
    447,                 /* lineNo */
    1,                   /* colNo */
    "find_last_indices", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                       */
};

static emlrtRTEInfo df_emlrtRTEI = {
    364,    /* lineNo */
    24,     /* colNo */
    "find", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                       */
};

static emlrtRTEInfo ef_emlrtRTEI = {
    144,    /* lineNo */
    9,      /* colNo */
    "find", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                       */
};

static emlrtRTEInfo rh_emlrtRTEI = {
    369,    /* lineNo */
    24,     /* colNo */
    "find", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                       */
};

static emlrtRTEInfo sh_emlrtRTEI = {
    402,    /* lineNo */
    5,      /* colNo */
    "find", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                       */
};

static emlrtRTEInfo th_emlrtRTEI = {
    144,    /* lineNo */
    13,     /* colNo */
    "find", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                       */
};

/* Function Definitions */
void b_eml_find(const emlrtStack *sp, const emxArray_boolean_T *x,
                int32_T i_data[], int32_T *i_size)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_int32_T *i;
  int32_T b_iv[2];
  int32_T b_i;
  int32_T idx;
  int32_T ii;
  int32_T k;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  k = (1 <= x->size[0]);
  if (k > x->size[0]) {
    emlrtErrorWithMessageIdR2018a(sp, &kb_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  emxInit_int32_T(sp, &i, 1, &th_emlrtRTEI, true);
  st.site = &wb_emlrtRSI;
  idx = 0;
  b_i = i->size[0];
  i->size[0] = k;
  emxEnsureCapacity_int32_T(&st, i, b_i, &rh_emlrtRTEI);
  b_st.site = &xb_emlrtRSI;
  if ((1 <= x->size[0]) && (x->size[0] > 2147483646)) {
    c_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii <= x->size[0] - 1)) {
    if (x->data[ii]) {
      idx++;
      i->data[idx - 1] = ii + 1;
      if (idx >= k) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }
  if (idx > k) {
    emlrtErrorWithMessageIdR2018a(&st, &o_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (k == 1) {
    if (idx == 0) {
      i->size[0] = 0;
    }
  } else {
    b_i = (1 <= idx);
    b_iv[0] = 1;
    b_iv[1] = b_i;
    b_st.site = &ag_emlrtRSI;
    b_indexShapeCheck(&b_st, i->size[0], b_iv);
    ii = i->size[0];
    i->size[0] = b_i;
    emxEnsureCapacity_int32_T(&st, i, ii, &sh_emlrtRTEI);
  }
  *i_size = i->size[0];
  ii = i->size[0];
  for (b_i = 0; b_i < ii; b_i++) {
    i_data[0] = i->data[0];
  }
  emxFree_int32_T(&i);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void c_eml_find(const emlrtStack *sp, const emxArray_boolean_T *x,
                emxArray_int32_T *i)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b_iv[2];
  int32_T b_i;
  int32_T idx;
  int32_T ii;
  int32_T nx;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx = x->size[0];
  st.site = &wb_emlrtRSI;
  idx = 0;
  b_i = i->size[0];
  i->size[0] = x->size[0];
  emxEnsureCapacity_int32_T(&st, i, b_i, &rh_emlrtRTEI);
  b_st.site = &xb_emlrtRSI;
  if ((1 <= x->size[0]) && (x->size[0] > 2147483646)) {
    c_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii <= nx - 1)) {
    if (x->data[ii]) {
      idx++;
      i->data[idx - 1] = ii + 1;
      if (idx >= nx) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }
  if (idx > x->size[0]) {
    emlrtErrorWithMessageIdR2018a(&st, &o_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (x->size[0] == 1) {
    if (idx == 0) {
      i->size[0] = 0;
    }
  } else {
    if (1 > idx) {
      b_i = 0;
    } else {
      b_i = idx;
    }
    b_iv[0] = 1;
    b_iv[1] = b_i;
    b_st.site = &ag_emlrtRSI;
    b_indexShapeCheck(&b_st, i->size[0], b_iv);
    ii = i->size[0];
    i->size[0] = b_i;
    emxEnsureCapacity_int32_T(&st, i, ii, &ef_emlrtRTEI);
  }
}

void d_eml_find(const emlrtStack *sp, const emxArray_boolean_T *x,
                int32_T i_data[], int32_T i_size[2])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_int32_T *i;
  int32_T b_i;
  int32_T idx;
  int32_T ii;
  int32_T k;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  k = (1 <= x->size[1]);
  if (k > x->size[1]) {
    emlrtErrorWithMessageIdR2018a(sp, &kb_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  emxInit_int32_T(sp, &i, 2, &th_emlrtRTEI, true);
  st.site = &wb_emlrtRSI;
  idx = 0;
  b_i = i->size[0] * i->size[1];
  i->size[0] = 1;
  i->size[1] = k;
  emxEnsureCapacity_int32_T(&st, i, b_i, &df_emlrtRTEI);
  b_st.site = &xb_emlrtRSI;
  if ((1 <= x->size[1]) && (x->size[1] > 2147483646)) {
    c_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii <= x->size[1] - 1)) {
    if (x->data[ii]) {
      idx++;
      i->data[idx - 1] = ii + 1;
      if (idx >= k) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }
  if (idx > k) {
    emlrtErrorWithMessageIdR2018a(&st, &o_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (k == 1) {
    if (idx == 0) {
      i->size[0] = 1;
      i->size[1] = 0;
    }
  } else {
    b_i = i->size[0] * i->size[1];
    i->size[1] = (1 <= idx);
    emxEnsureCapacity_int32_T(&st, i, b_i, &sh_emlrtRTEI);
  }
  i_size[0] = 1;
  i_size[1] = i->size[1];
  ii = i->size[1];
  for (b_i = 0; b_i < ii; b_i++) {
    i_data[0] = i->data[0];
  }
  emxFree_int32_T(&i);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void e_eml_find(const emlrtStack *sp, const emxArray_boolean_T *x,
                int32_T i_data[], int32_T i_size[2])
{
  emlrtStack st;
  int32_T idx;
  int32_T ii;
  int32_T k;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  k = (1 <= x->size[1]);
  if (k > x->size[1]) {
    emlrtErrorWithMessageIdR2018a(sp, &kb_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  st.site = &hmb_emlrtRSI;
  ii = x->size[1];
  idx = 0;
  i_size[0] = 1;
  i_size[1] = k;
  exitg1 = false;
  while ((!exitg1) && (ii > 0)) {
    if (x->data[ii - 1]) {
      idx = 1;
      i_data[0] = ii;
      exitg1 = true;
    } else {
      ii--;
    }
  }
  if (idx > k) {
    emlrtErrorWithMessageIdR2018a(&st, &ad_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (k == 1) {
    if (idx == 0) {
      i_size[0] = 1;
      i_size[1] = 0;
    }
  } else {
    i_size[1] = (1 <= idx);
  }
}

void eml_find(const emlrtStack *sp, const emxArray_boolean_T *x,
              emxArray_int32_T *i)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T idx;
  int32_T ii;
  int32_T nx;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx = x->size[1];
  st.site = &wb_emlrtRSI;
  idx = 0;
  ii = i->size[0] * i->size[1];
  i->size[0] = 1;
  i->size[1] = x->size[1];
  emxEnsureCapacity_int32_T(&st, i, ii, &df_emlrtRTEI);
  b_st.site = &xb_emlrtRSI;
  if ((1 <= x->size[1]) && (x->size[1] > 2147483646)) {
    c_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii <= nx - 1)) {
    if (x->data[ii]) {
      idx++;
      i->data[idx - 1] = ii + 1;
      if (idx >= nx) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }
  if (idx > x->size[1]) {
    emlrtErrorWithMessageIdR2018a(&st, &o_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (x->size[1] == 1) {
    if (idx == 0) {
      i->size[0] = 1;
      i->size[1] = 0;
    }
  } else {
    ii = i->size[0] * i->size[1];
    if (1 > idx) {
      i->size[1] = 0;
    } else {
      i->size[1] = idx;
    }
    emxEnsureCapacity_int32_T(&st, i, ii, &ef_emlrtRTEI);
  }
}

/* End of code generation (find.c) */
