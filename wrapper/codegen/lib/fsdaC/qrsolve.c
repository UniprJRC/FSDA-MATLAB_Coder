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
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "xgeqp3.h"
#include <math.h>

/* Custom Source Code */
#pragma GCC diagnostic ignored "-Wmaybe-uninitialized"
/* Function Definitions */
void qrsolve(const emxArray_real_T *A, const emxArray_real_T *B,
             emxArray_real_T *Y)
{
  emxArray_int32_T *jpvt;
  emxArray_real_T *b_A;
  emxArray_real_T *b_B;
  emxArray_real_T *tau;
  double wj;
  int b_i;
  int b_nb;
  int i;
  int k;
  int loop_ub;
  int m;
  int mn;
  int nb;
  int rankA;
  emxInit_real_T(&b_A, 2);
  i = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T(b_A, i);
  loop_ub = A->size[0] * A->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_A->data[i] = A->data[i];
  }
  emxInit_real_T(&tau, 1);
  emxInit_int32_T(&jpvt, 2);
  emxInit_real_T(&b_B, 2);
  xgeqp3(b_A, tau, jpvt);
  rankA = rankFromQR(b_A);
  i = b_B->size[0] * b_B->size[1];
  b_B->size[0] = B->size[0];
  b_B->size[1] = B->size[1];
  emxEnsureCapacity_real_T(b_B, i);
  loop_ub = B->size[0] * B->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_B->data[i] = B->data[i];
  }
  nb = B->size[1];
  i = Y->size[0] * Y->size[1];
  Y->size[0] = b_A->size[1];
  Y->size[1] = B->size[1];
  emxEnsureCapacity_real_T(Y, i);
  loop_ub = b_A->size[1] * B->size[1];
  for (i = 0; i < loop_ub; i++) {
    Y->data[i] = 0.0;
  }
  m = b_A->size[0];
  b_nb = B->size[1];
  loop_ub = b_A->size[0];
  mn = b_A->size[1];
  if (loop_ub < mn) {
    mn = loop_ub;
  }
  for (loop_ub = 0; loop_ub < mn; loop_ub++) {
    if (tau->data[loop_ub] != 0.0) {
      for (k = 0; k < b_nb; k++) {
        wj = b_B->data[loop_ub + b_B->size[0] * k];
        i = loop_ub + 2;
        for (b_i = i; b_i <= m; b_i++) {
          wj += b_A->data[(b_i + b_A->size[0] * loop_ub) - 1] *
                b_B->data[(b_i + b_B->size[0] * k) - 1];
        }
        wj *= tau->data[loop_ub];
        if (wj != 0.0) {
          b_B->data[loop_ub + b_B->size[0] * k] -= wj;
          for (b_i = i; b_i <= m; b_i++) {
            b_B->data[(b_i + b_B->size[0] * k) - 1] -=
                b_A->data[(b_i + b_A->size[0] * loop_ub) - 1] * wj;
          }
        }
      }
    }
  }
  emxFree_real_T(&tau);
  for (k = 0; k < nb; k++) {
    for (b_i = 0; b_i < rankA; b_i++) {
      Y->data[(jpvt->data[b_i] + Y->size[0] * k) - 1] =
          b_B->data[b_i + b_B->size[0] * k];
    }
    for (loop_ub = rankA; loop_ub >= 1; loop_ub--) {
      i = jpvt->data[loop_ub - 1];
      Y->data[(i + Y->size[0] * k) - 1] /=
          b_A->data[(loop_ub + b_A->size[0] * (loop_ub - 1)) - 1];
      for (b_i = 0; b_i <= loop_ub - 2; b_i++) {
        Y->data[(jpvt->data[b_i] + Y->size[0] * k) - 1] -=
            Y->data[(jpvt->data[loop_ub - 1] + Y->size[0] * k) - 1] *
            b_A->data[b_i + b_A->size[0] * (loop_ub - 1)];
      }
    }
  }
  emxFree_real_T(&b_B);
  emxFree_int32_T(&jpvt);
  emxFree_real_T(&b_A);
}

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
