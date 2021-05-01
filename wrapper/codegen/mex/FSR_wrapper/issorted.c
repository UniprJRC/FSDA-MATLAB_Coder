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
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Function Definitions */
boolean_T b_issorted(const emxArray_real_T *x)
{
  real_T v_idx_1;
  int32_T k;
  boolean_T exitg1;
  boolean_T y;
  y = true;
  if ((x->size[1] != 0) && (x->size[1] != 1)) {
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= x->size[1] - 2)) {
      v_idx_1 = x->data[k + 1];
      if ((x->data[k] <= v_idx_1) || muDoubleScalarIsNaN(v_idx_1)) {
        k++;
      } else {
        y = false;
        exitg1 = true;
      }
    }
  }
  return y;
}

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
      st.site = &udb_emlrtRSI;
      if (dim == 2) {
        n = -1;
      } else {
        n = 0;
      }
      b_st.site = &wdb_emlrtRSI;
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k <= n)) {
        b_st.site = &vdb_emlrtRSI;
        if (dim == 1) {
          b_n = x->size[0] - 1;
        } else {
          b_n = x->size[0];
        }
        c_st.site = &wdb_emlrtRSI;
        if ((1 <= b_n) && (b_n > 2147483646)) {
          d_st.site = &ab_emlrtRSI;
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
