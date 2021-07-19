/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * any.c
 *
 * Code generation for function 'any'
 *
 */

/* Include files */
#include "any.h"
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo sib_emlrtRSI =
    {
        13,    /* lineNo */
        "any", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\any.m" /* pathName
                                                                        */
};

static emlrtRSInfo tib_emlrtRSI =
    {
        143,        /* lineNo */
        "allOrAny", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny."
        "m" /* pathName */
};

/* Function Definitions */
boolean_T any(const emlrtStack *sp, const emxArray_boolean_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T ix;
  boolean_T exitg1;
  boolean_T y;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &sib_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  y = false;
  b_st.site = &tib_emlrtRSI;
  if ((1 <= x->size[0]) && (x->size[0] > 2147483646)) {
    c_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  ix = 1;
  exitg1 = false;
  while ((!exitg1) && (ix <= x->size[0])) {
    if (!x->data[ix - 1]) {
      ix++;
    } else {
      y = true;
      exitg1 = true;
    }
  }
  return y;
}

boolean_T b_any(const real_T x_data[], const int32_T x_size[2])
{
  int32_T ix;
  boolean_T exitg1;
  boolean_T y;
  y = false;
  ix = 1;
  exitg1 = false;
  while ((!exitg1) && (ix <= x_size[1])) {
    if (muDoubleScalarIsNaN(x_data[0])) {
      ix = 2;
    } else {
      y = true;
      exitg1 = true;
    }
  }
  return y;
}

/* End of code generation (any.c) */
