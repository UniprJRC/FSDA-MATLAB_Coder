/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * power.c
 *
 * Code generation for function 'power'
 *
 */

/* Include files */
#include "power.h"
#include "LXS_wrapper1_data.h"
#include "LXS_wrapper1_emxutil.h"
#include "LXS_wrapper1_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo ym_emlrtRSI =
    {
        80,         /* lineNo */
        "fltpower", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" /* pathName
                                                                          */
};

static emlrtRSInfo an_emlrtRSI = {
    200,        /* lineNo */
    "flatIter", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyBinaryScalarFunction.m" /* pathName */
};

static emlrtRTEInfo pk_emlrtRTEI = {
    127,                         /* lineNo */
    6,                           /* colNo */
    "applyBinaryScalarFunction", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyBinaryScalarFunction.m" /* pName */
};

/* Function Definitions */
void b_power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  int32_T k;
  int32_T nx;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &dl_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  b_st.site = &ym_emlrtRSI;
  c_st.site = &me_emlrtRSI;
  d_st.site = &oe_emlrtRSI;
  nx = y->size[0] * y->size[1];
  y->size[0] = a->size[0];
  y->size[1] = a->size[1];
  emxEnsureCapacity_real_T(&d_st, y, nx, &pk_emlrtRTEI);
  nx = a->size[0] * a->size[1];
  e_st.site = &an_emlrtRSI;
  if ((1 <= nx) && (nx > 2147483646)) {
    f_st.site = &hc_emlrtRSI;
    check_forloop_overflow_error(&f_st);
  }
  for (k = 0; k < nx; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }
}

void power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  int32_T k;
  int32_T nx;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &dl_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  b_st.site = &ym_emlrtRSI;
  c_st.site = &me_emlrtRSI;
  d_st.site = &oe_emlrtRSI;
  nx = y->size[0];
  y->size[0] = a->size[0];
  emxEnsureCapacity_real_T(&d_st, y, nx, &pk_emlrtRTEI);
  nx = a->size[0];
  e_st.site = &an_emlrtRSI;
  if ((1 <= a->size[0]) && (a->size[0] > 2147483646)) {
    f_st.site = &hc_emlrtRSI;
    check_forloop_overflow_error(&f_st);
  }
  for (k = 0; k < nx; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }
}

/* End of code generation (power.c) */
