/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * norm.c
 *
 * Code generation for function 'norm'
 *
 */

/* Include files */
#include "norm.h"
#include "LTSts_wrapper_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Function Definitions */
real_T b_norm(const emxArray_real_T *x)
{
  real_T s;
  real_T y;
  int32_T b_i;
  int32_T i;
  int32_T j;
  boolean_T exitg1;
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    y = 0.0;
  } else if ((x->size[0] == 1) || (x->size[1] == 1)) {
    y = 0.0;
    i = x->size[0] * x->size[1];
    for (j = 0; j < i; j++) {
      y += muDoubleScalarAbs(x->data[j]);
    }
  } else {
    y = 0.0;
    j = 0;
    exitg1 = false;
    while ((!exitg1) && (j <= x->size[1] - 1)) {
      s = 0.0;
      i = x->size[0];
      for (b_i = 0; b_i < i; b_i++) {
        s += muDoubleScalarAbs(x->data[b_i + x->size[0] * j]);
      }
      if (muDoubleScalarIsNaN(s)) {
        y = rtNaN;
        exitg1 = true;
      } else {
        if (s > y) {
          y = s;
        }
        j++;
      }
    }
  }
  return y;
}

/* End of code generation (norm.c) */
