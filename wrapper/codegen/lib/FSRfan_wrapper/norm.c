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
#include "FSRfan_wrapper_types.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
double b_norm(const emxArray_real_T *x)
{
  double absxk;
  double scale;
  double t;
  double y;
  int k;
  int kend;
  if (x->size[0] == 0) {
    y = 0.0;
  } else {
    y = 0.0;
    if (x->size[0] == 1) {
      y = fabs(x->data[0]);
    } else {
      scale = 3.3121686421112381E-170;
      kend = x->size[0];
      for (k = 0; k < kend; k++) {
        absxk = fabs(x->data[k]);
        if (absxk > scale) {
          t = scale / absxk;
          y = y * t * t + 1.0;
          scale = absxk;
        } else {
          t = absxk / scale;
          y += t * t;
        }
      }
      y = scale * sqrt(y);
    }
  }
  return y;
}

/* End of code generation (norm.c) */
