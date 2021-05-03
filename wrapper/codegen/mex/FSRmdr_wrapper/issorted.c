/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * issorted.c
 *
 * Code generation for function 'issorted'
 *
 */

/* Include files */
#include "issorted.h"
#include "FSRmdr_wrapper_data.h"
#include "FSRmdr_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo
    qf_emlrtRSI =
        {
            74,         /* lineNo */
            "issorted", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\issorte"
            "d.m" /* pathName */
};

static emlrtRSInfo
    rf_emlrtRSI =
        {
            95,       /* lineNo */
            "looper", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\issorte"
            "d.m" /* pathName */
};

static emlrtRSInfo
    mh_emlrtRSI =
        {
            112,      /* lineNo */
            "looper", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\issorte"
            "d.m" /* pathName */
};

/* Function Definitions */
boolean_T issorted(const emlrtStack *sp, const emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T d;
  int32_T subs[2];
  int32_T b_n;
  int32_T dim;
  int32_T k;
  int32_T n;
  boolean_T exitg1;
  boolean_T exitg2;
  boolean_T y;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  y = true;
  dim = 2;
  if (x->size[0] != 1) {
    dim = 1;
  }
  if (x->size[0] != 0) {
    if (dim <= 1) {
      n = x->size[0];
    } else {
      n = 1;
    }
    if (n != 1) {
      st.site = &qf_emlrtRSI;
      if (dim == 2) {
        n = -1;
      } else {
        n = 0;
      }
      b_st.site = &rf_emlrtRSI;
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k <= n)) {
        b_st.site = &mh_emlrtRSI;
        if (dim == 1) {
          b_n = x->size[0] - 1;
        } else {
          b_n = x->size[0];
        }
        c_st.site = &rf_emlrtRSI;
        if ((1 <= b_n) && (b_n > 2147483646)) {
          d_st.site = &pc_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        k = 0;
        exitg2 = false;
        while ((!exitg2) && (k <= b_n - 1)) {
          subs[0] = k + 1;
          subs[1] = 1;
          subs[dim - 1]++;
          d = x->data[subs[0] - 1];
          if ((x->data[k] <= d) || muDoubleScalarIsNaN(d)) {
            k++;
          } else {
            y = false;
            exitg2 = true;
          }
        }
        if (!y) {
          exitg1 = true;
        } else {
          k = 1;
        }
      }
    }
  }
  return y;
}

/* End of code generation (issorted.c) */
