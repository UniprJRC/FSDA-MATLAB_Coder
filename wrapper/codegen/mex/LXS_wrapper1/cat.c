/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cat.c
 *
 * Code generation for function 'cat'
 *
 */

/* Include files */
#include "cat.h"
#include "LXS_wrapper1_data.h"
#include "LXS_wrapper1_emxutil.h"
#include "LXS_wrapper1_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo ic_emlrtRSI =
    {
        87,    /* lineNo */
        "cat", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m" /* pathName
                                                                          */
};

static emlrtRTEInfo k_emlrtRTEI =
    {
        71,    /* lineNo */
        27,    /* colNo */
        "cat", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m" /* pName
                                                                          */
};

static emlrtRTEInfo me_emlrtRTEI =
    {
        56,    /* lineNo */
        20,    /* colNo */
        "cat", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m" /* pName
                                                                          */
};

/* Function Definitions */
void b_cat(const emlrtStack *sp, const emxArray_real_T *varargin_1,
           const emxArray_real_T *varargin_2, emxArray_real_T *y)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T b;
  int32_T b_b;
  int32_T j;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b = y->size[0] * y->size[1];
  y->size[0] = varargin_1->size[0];
  y->size[1] = 11;
  emxEnsureCapacity_real_T(sp, y, b, &me_emlrtRTEI);
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 2)) {
    if ((j + 1 != 2) && (y->size[0] != varargin_1->size[0])) {
      emlrtErrorWithMessageIdR2018a(
          sp, &k_emlrtRTEI, "Coder:MATLAB:catenate_dimensionMismatch",
          "Coder:MATLAB:catenate_dimensionMismatch", 0);
    } else {
      j++;
    }
  }
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 2)) {
    if ((j + 1 != 2) && (y->size[0] != varargin_2->size[0])) {
      emlrtErrorWithMessageIdR2018a(
          sp, &k_emlrtRTEI, "Coder:MATLAB:catenate_dimensionMismatch",
          "Coder:MATLAB:catenate_dimensionMismatch", 0);
    } else {
      j++;
    }
  }
  b = varargin_1->size[0];
  st.site = &ic_emlrtRSI;
  if ((1 <= varargin_1->size[0]) && (varargin_1->size[0] > 2147483646)) {
    b_st.site = &gc_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (j = 0; j < b; j++) {
    y->data[j] = varargin_1->data[j];
  }
  b_b = varargin_2->size[0] * 10;
  st.site = &ic_emlrtRSI;
  if ((1 <= b_b) && (b_b > 2147483646)) {
    b_st.site = &gc_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (j = 0; j < b_b; j++) {
    y->data[b + j] = rtNaN;
  }
}

void cat(const emlrtStack *sp, const emxArray_real_T *varargin_1,
         const emxArray_real_T *varargin_2, emxArray_real_T *y)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T b;
  int32_T b_b;
  int32_T j;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b = y->size[0] * y->size[1];
  y->size[0] = varargin_1->size[0];
  y->size[1] = varargin_2->size[1] + 1;
  emxEnsureCapacity_real_T(sp, y, b, &me_emlrtRTEI);
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 2)) {
    if ((j + 1 != 2) && (y->size[0] != varargin_1->size[0])) {
      emlrtErrorWithMessageIdR2018a(
          sp, &k_emlrtRTEI, "Coder:MATLAB:catenate_dimensionMismatch",
          "Coder:MATLAB:catenate_dimensionMismatch", 0);
    } else {
      j++;
    }
  }
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 2)) {
    if ((j + 1 != 2) && (y->size[0] != varargin_2->size[0])) {
      emlrtErrorWithMessageIdR2018a(
          sp, &k_emlrtRTEI, "Coder:MATLAB:catenate_dimensionMismatch",
          "Coder:MATLAB:catenate_dimensionMismatch", 0);
    } else {
      j++;
    }
  }
  b = varargin_1->size[0];
  st.site = &ic_emlrtRSI;
  if ((1 <= varargin_1->size[0]) && (varargin_1->size[0] > 2147483646)) {
    b_st.site = &gc_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (j = 0; j < b; j++) {
    y->data[j] = 1.0;
  }
  b_b = varargin_2->size[0] * varargin_2->size[1];
  st.site = &ic_emlrtRSI;
  if ((1 <= b_b) && (b_b > 2147483646)) {
    b_st.site = &gc_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (j = 0; j < b_b; j++) {
    y->data[b + j] = varargin_2->data[j];
  }
}

/* End of code generation (cat.c) */
