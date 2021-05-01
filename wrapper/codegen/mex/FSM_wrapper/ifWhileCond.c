/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ifWhileCond.c
 *
 * Code generation for function 'ifWhileCond'
 *
 */

/* Include files */
#include "ifWhileCond.h"
#include "FSM_wrapper_data.h"
#include "FSM_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo ks_emlrtRSI =
    {
        18,            /* lineNo */
        "ifWhileCond", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\ifWhileCond.m" /* pathName */
};

static emlrtRSInfo ls_emlrtRSI =
    {
        31,            /* lineNo */
        "checkNoNaNs", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\ifWhileCond.m" /* pathName */
};

/* Function Definitions */
boolean_T b_ifWhileCond(const emlrtStack *sp, const emxArray_boolean_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T b;
  int32_T k;
  boolean_T exitg1;
  boolean_T y;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  y = ((x->size[0] != 0) && (x->size[1] != 0));
  if (y) {
    st.site = &ks_emlrtRSI;
    b = x->size[0] * x->size[1];
    b_st.site = &ls_emlrtRSI;
    if ((1 <= b) && (b > 2147483646)) {
      c_st.site = &ad_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= b - 1)) {
      if (!x->data[k]) {
        y = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  return y;
}

boolean_T c_ifWhileCond(const boolean_T x_data[], const int32_T x_size[2])
{
  int32_T k;
  boolean_T exitg1;
  boolean_T y;
  y = (x_size[1] != 0);
  if (y) {
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= x_size[1] - 1)) {
      if (!x_data[k]) {
        y = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  return y;
}

boolean_T ifWhileCond(const emlrtStack *sp, const emxArray_boolean_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T k;
  boolean_T exitg1;
  boolean_T y;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  y = (x->size[0] != 0);
  if (y) {
    st.site = &ks_emlrtRSI;
    b_st.site = &ls_emlrtRSI;
    if ((1 <= x->size[0]) && (x->size[0] > 2147483646)) {
      c_st.site = &ad_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= x->size[0] - 1)) {
      if (!x->data[k]) {
        y = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  return y;
}

/* End of code generation (ifWhileCond.c) */
