/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sign.c
 *
 * Code generation for function 'sign'
 *
 */

/* Include files */
#include "sign.h"
#include "FSRfan_wrapper_data.h"
#include "FSRfan_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo gs_emlrtRSI = {
    18,     /* lineNo */
    "sign", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elfun\\sign.m" /* pathName
                                                                       */
};

/* Function Definitions */
void b_sign(const emlrtStack *sp, emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T k;
  int32_T nx;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &gs_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx = x->size[0];
  b_st.site = &pf_emlrtRSI;
  if ((1 <= x->size[0]) && (x->size[0] > 2147483646)) {
    c_st.site = &ob_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (k = 0; k < nx; k++) {
    x->data[k] = muDoubleScalarSign(x->data[k]);
  }
}

/* End of code generation (sign.c) */
