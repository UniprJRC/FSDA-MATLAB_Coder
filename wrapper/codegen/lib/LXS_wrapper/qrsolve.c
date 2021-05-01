/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * qrsolve.c
 *
 * Code generation for function 'qrsolve'
 *
 */

/* Include files */
#include "qrsolve.h"
#include "LXS_wrapper_types.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
int rankFromQR(const emxArray_real_T *A)
{
  double tol;
  int maxmn;
  int minmn;
  int r;
  r = 0;
  if (A->size[0] < A->size[1]) {
    minmn = A->size[0];
    maxmn = A->size[1];
  } else {
    minmn = A->size[1];
    maxmn = A->size[0];
  }
  if (minmn > 0) {
    tol = fmin(1.4901161193847656E-8, 2.2204460492503131E-15 * (double)maxmn) *
          fabs(A->data[0]);
    while ((r < minmn) && (!(fabs(A->data[r + A->size[0] * r]) <= tol))) {
      r++;
    }
  }
  return r;
}

/* End of code generation (qrsolve.c) */
