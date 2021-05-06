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
#include "LTSts_wrapper_data.h"
#include "LTSts_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo gm_emlrtRSI =
    {
        13,    /* lineNo */
        "any", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\any.m" /* pathName
                                                                        */
};

static emlrtRSInfo jab_emlrtRSI =
    {
        16,    /* lineNo */
        "any", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\any.m" /* pathName
                                                                        */
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
  st.site = &gm_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  y = false;
  b_st.site = &hm_emlrtRSI;
  if ((1 <= x->size[0]) && (x->size[0] > 2147483646)) {
    c_st.site = &qf_emlrtRSI;
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

boolean_T b_any(const emlrtStack *sp, const emxArray_boolean_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  int32_T ix;
  boolean_T exitg1;
  boolean_T y;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &jab_emlrtRSI;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  b_st.site = &fab_emlrtRSI;
  c_st.site = &gab_emlrtRSI;
  d_st.site = &gt_emlrtRSI;
  e_st.site = &hab_emlrtRSI;
  y = false;
  f_st.site = &hm_emlrtRSI;
  if ((1 <= x->size[0]) && (x->size[0] > 2147483646)) {
    g_st.site = &qf_emlrtRSI;
    check_forloop_overflow_error(&g_st);
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

/* End of code generation (any.c) */
