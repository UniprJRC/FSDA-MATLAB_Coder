/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * vAllOrAny.c
 *
 * Code generation for function 'vAllOrAny'
 *
 */

/* Include files */
#include "vAllOrAny.h"
#include "LXS_wrapper_data.h"
#include "LXS_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo wd_emlrtRSI =
    {
        103,                  /* lineNo */
        "flatVectorAllOrAny", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\vAllOrAny.m" /* pathName */
};

/* Function Definitions */
boolean_T flatVectorAllOrAny(const emlrtStack *sp, const emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T k;
  int32_T nx;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  nx = x->size[0] * x->size[1];
  p = true;
  st.site = &wd_emlrtRSI;
  if ((1 <= nx) && (nx > 2147483646)) {
    b_st.site = &ic_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (k = 0; k < nx; k++) {
    if ((!p) ||
        (muDoubleScalarIsInf(x->data[k]) || muDoubleScalarIsNaN(x->data[k]))) {
      p = false;
    }
  }
  return p;
}

/* End of code generation (vAllOrAny.c) */
