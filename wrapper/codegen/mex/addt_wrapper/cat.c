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
#include "addt_wrapper_data.h"
#include "addt_wrapper_emxutil.h"
#include "addt_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo mb_emlrtRSI = { 87, /* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m"/* pathName */
};

static emlrtRTEInfo f_emlrtRTEI = { 71,/* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m"/* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = { 56,/* lineNo */
  20,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\cat.m"/* pName */
};

/* Function Definitions */
void cat(const emlrtStack *sp, const emxArray_real_T *varargin_1, const
         emxArray_real_T *varargin_2, emxArray_real_T *y)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T b;
  int32_T iy;
  int32_T j;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  iy = y->size[0] * y->size[1];
  y->size[0] = varargin_1->size[0];
  y->size[1] = varargin_2->size[1] + 1;
  emxEnsureCapacity_real_T(sp, y, iy, &pb_emlrtRTEI);
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 2)) {
    if ((j + 1 != 2) && (y->size[0] != varargin_1->size[0])) {
      emlrtErrorWithMessageIdR2018a(sp, &f_emlrtRTEI,
        "Coder:MATLAB:catenate_dimensionMismatch",
        "Coder:MATLAB:catenate_dimensionMismatch", 0);
    } else {
      j++;
    }
  }

  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 2)) {
    if ((j + 1 != 2) && (y->size[0] != varargin_2->size[0])) {
      emlrtErrorWithMessageIdR2018a(sp, &f_emlrtRTEI,
        "Coder:MATLAB:catenate_dimensionMismatch",
        "Coder:MATLAB:catenate_dimensionMismatch", 0);
    } else {
      j++;
    }
  }

  iy = -1;
  b = varargin_1->size[0];
  st.site = &mb_emlrtRSI;
  if ((1 <= varargin_1->size[0]) && (varargin_1->size[0] > 2147483646)) {
    b_st.site = &kb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (j = 0; j < b; j++) {
    iy++;
    y->data[iy] = 1.0;
  }

  b = varargin_2->size[0] * varargin_2->size[1];
  st.site = &mb_emlrtRSI;
  if ((1 <= b) && (b > 2147483646)) {
    b_st.site = &kb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (j = 0; j < b; j++) {
    iy++;
    y->data[iy] = varargin_2->data[j];
  }
}

/* End of code generation (cat.c) */
