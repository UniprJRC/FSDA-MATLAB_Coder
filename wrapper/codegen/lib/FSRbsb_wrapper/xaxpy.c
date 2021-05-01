/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xaxpy.c
 *
 * Code generation for function 'xaxpy'
 *
 */

/* Include files */
#include "xaxpy.h"
#include "FSRbsb_wrapper_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void b_xaxpy(int n, double a, const emxArray_real_T *x, int ix0,
             emxArray_real_T *y, int iy0)
{
  int i;
  int i1;
  int k;
  if ((n >= 1) && (!(a == 0.0))) {
    i = n - 1;
    for (k = 0; k <= i; k++) {
      i1 = (iy0 + k) - 1;
      y->data[i1] += a * x->data[(ix0 + k) - 1];
    }
  }
}

void xaxpy(int n, double a, int ix0, emxArray_real_T *y, int iy0)
{
  int i;
  int i1;
  int k;
  if ((n >= 1) && (!(a == 0.0))) {
    i = n - 1;
    for (k = 0; k <= i; k++) {
      i1 = (iy0 + k) - 1;
      y->data[i1] += a * y->data[(ix0 + k) - 1];
    }
  }
}

/* End of code generation (xaxpy.c) */
