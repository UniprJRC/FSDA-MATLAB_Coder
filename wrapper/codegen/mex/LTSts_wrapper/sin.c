/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sin.c
 *
 * Code generation for function 'sin'
 *
 */

/* Include files */
#include "sin.h"
#include "LTSts_wrapper_data.h"
#include "LTSts_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo og_emlrtRSI =
    {
        11,    /* lineNo */
        "sin", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elfun\\sin.m" /* pathName
                                                                          */
};

/* Function Definitions */
void b_sin(const emlrtStack *sp, emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T k;
  int32_T nx;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &og_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx = x->size[0];
  b_st.site = &ng_emlrtRSI;
  if ((1 <= x->size[0]) && (x->size[0] > 2147483646)) {
    c_st.site = &qf_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (k = 0; k < nx; k++) {
    x->data[k] = muDoubleScalarSin(x->data[k]);
  }
}

/* End of code generation (sin.c) */
