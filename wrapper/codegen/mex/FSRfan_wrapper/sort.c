/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sort.c
 *
 * Code generation for function 'sort'
 *
 */

/* Include files */
#include "sort.h"
#include "FSRfan_wrapper_data.h"
#include "FSRfan_wrapper_emxutil.h"
#include "FSRfan_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "sortIdx.h"

/* Variable Definitions */
static emlrtRSInfo bj_emlrtRSI = {
    76,     /* lineNo */
    "sort", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pathName
                                                                           */
};

static emlrtRSInfo cj_emlrtRSI = {
    79,     /* lineNo */
    "sort", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pathName
                                                                           */
};

static emlrtRSInfo dj_emlrtRSI = {
    81,     /* lineNo */
    "sort", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pathName
                                                                           */
};

static emlrtRSInfo ej_emlrtRSI = {
    84,     /* lineNo */
    "sort", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pathName
                                                                           */
};

static emlrtRSInfo fj_emlrtRSI = {
    87,     /* lineNo */
    "sort", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pathName
                                                                           */
};

static emlrtRSInfo gj_emlrtRSI = {
    90,     /* lineNo */
    "sort", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pathName
                                                                           */
};

static emlrtRTEInfo jm_emlrtRTEI = {
    56,     /* lineNo */
    24,     /* colNo */
    "sort", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pName
                                                                           */
};

static emlrtRTEInfo km_emlrtRTEI = {
    56,     /* lineNo */
    1,      /* colNo */
    "sort", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pName
                                                                           */
};

static emlrtRTEInfo lm_emlrtRTEI = {
    1,      /* lineNo */
    20,     /* colNo */
    "sort", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pName
                                                                           */
};

static emlrtRTEInfo rm_emlrtRTEI = {
    75,     /* lineNo */
    26,     /* colNo */
    "sort", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pName
                                                                           */
};

/* Function Definitions */
void b_sort(const emlrtStack *sp, emxArray_real_T *x, emxArray_int32_T *idx)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_int32_T *iidx;
  emxArray_real_T *vwork;
  int32_T dim;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T vlen;
  int32_T vstride;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  dim = 0;
  if (x->size[0] != 1) {
    dim = -1;
  }
  emxInit_real_T(sp, &vwork, 1, &km_emlrtRTEI, true);
  if (dim + 2 <= 1) {
    i = x->size[0];
  } else {
    i = 1;
  }
  vlen = i - 1;
  i1 = vwork->size[0];
  vwork->size[0] = i;
  emxEnsureCapacity_real_T(sp, vwork, i1, &jm_emlrtRTEI);
  i1 = idx->size[0];
  idx->size[0] = x->size[0];
  emxEnsureCapacity_int32_T(sp, idx, i1, &rm_emlrtRTEI);
  st.site = &bj_emlrtRSI;
  vstride = 1;
  for (k = 0; k <= dim; k++) {
    vstride *= x->size[0];
  }
  st.site = &cj_emlrtRSI;
  st.site = &dj_emlrtRSI;
  if ((1 <= vstride) && (vstride > 2147483646)) {
    b_st.site = &ob_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  emxInit_int32_T(sp, &iidx, 1, &lm_emlrtRTEI, true);
  for (dim = 0; dim < vstride; dim++) {
    st.site = &ej_emlrtRSI;
    if ((1 <= i) && (i > 2147483646)) {
      b_st.site = &ob_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (k = 0; k <= vlen; k++) {
      vwork->data[k] = x->data[dim + k * vstride];
    }
    st.site = &fj_emlrtRSI;
    sortIdx(&st, vwork, iidx);
    st.site = &gj_emlrtRSI;
    for (k = 0; k <= vlen; k++) {
      i1 = dim + k * vstride;
      x->data[i1] = vwork->data[k];
      idx->data[i1] = iidx->data[k];
    }
  }
  emxFree_int32_T(&iidx);
  emxFree_real_T(&vwork);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void sort(const emlrtStack *sp, emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_int32_T *nu_emlrtRSI;
  emxArray_real_T *vwork;
  int32_T dim;
  int32_T i;
  int32_T k;
  int32_T vlen;
  int32_T vstride;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  dim = 0;
  if (x->size[0] != 1) {
    dim = -1;
  }
  emxInit_real_T(sp, &vwork, 1, &km_emlrtRTEI, true);
  if (dim + 2 <= 1) {
    i = x->size[0];
  } else {
    i = 1;
  }
  vlen = i - 1;
  vstride = vwork->size[0];
  vwork->size[0] = i;
  emxEnsureCapacity_real_T(sp, vwork, vstride, &jm_emlrtRTEI);
  st.site = &bj_emlrtRSI;
  vstride = 1;
  for (k = 0; k <= dim; k++) {
    vstride *= x->size[0];
  }
  st.site = &cj_emlrtRSI;
  st.site = &dj_emlrtRSI;
  if ((1 <= vstride) && (vstride > 2147483646)) {
    b_st.site = &ob_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  emxInit_int32_T(sp, &nu_emlrtRSI, 1, &lm_emlrtRTEI, true);
  for (dim = 0; dim < vstride; dim++) {
    st.site = &ej_emlrtRSI;
    if ((1 <= i) && (i > 2147483646)) {
      b_st.site = &ob_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (k = 0; k <= vlen; k++) {
      vwork->data[k] = x->data[dim + k * vstride];
    }
    st.site = &fj_emlrtRSI;
    sortIdx(&st, vwork, nu_emlrtRSI);
    st.site = &gj_emlrtRSI;
    for (k = 0; k <= vlen; k++) {
      x->data[dim + k * vstride] = vwork->data[k];
    }
  }
  emxFree_int32_T(&nu_emlrtRSI);
  emxFree_real_T(&vwork);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (sort.c) */
