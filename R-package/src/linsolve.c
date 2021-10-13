/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * linsolve.c
 *
 * Code generation for function 'linsolve'
 *
 */

/* Include files */
#include "linsolve.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "xgeqp3.h"
#include "xunormqr.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void linsolve(const emxArray_real_T *A, const emxArray_real_T *B,
              emxArray_real_T *C, double *r)
{
  emxArray_int32_T *jpvt;
  emxArray_real_T *b_A;
  emxArray_real_T *b_B;
  emxArray_real_T *tau;
  const double *A_data;
  const double *B_data;
  double tol;
  double *C_data;
  double *b_A_data;
  double *b_B_data;
  int j;
  int maxmn;
  int minmn;
  int rankA;
  int *jpvt_data;
  B_data = B->data;
  A_data = A->data;
  emxInit_real_T(&b_A, 2);
  maxmn = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T(b_A, maxmn);
  b_A_data = b_A->data;
  minmn = A->size[0] * A->size[1];
  for (maxmn = 0; maxmn < minmn; maxmn++) {
    b_A_data[maxmn] = A_data[maxmn];
  }
  emxInit_real_T(&tau, 1);
  emxInit_int32_T(&jpvt, 2);
  xgeqp3(b_A, tau, jpvt);
  jpvt_data = jpvt->data;
  b_A_data = b_A->data;
  rankA = 0;
  if (b_A->size[0] < b_A->size[1]) {
    minmn = b_A->size[0];
    maxmn = b_A->size[1];
  } else {
    minmn = b_A->size[1];
    maxmn = b_A->size[0];
  }
  if (minmn > 0) {
    tol = fmin(1.4901161193847656E-8, 2.2204460492503131E-15 * (double)maxmn) *
          fabs(b_A_data[0]);
    while ((rankA < minmn) &&
           (!(fabs(b_A_data[rankA + b_A->size[0] * rankA]) <= tol))) {
      rankA++;
    }
  }
  maxmn = C->size[0];
  C->size[0] = b_A->size[1];
  emxEnsureCapacity_real_T(C, maxmn);
  C_data = C->data;
  minmn = b_A->size[1];
  for (maxmn = 0; maxmn < minmn; maxmn++) {
    C_data[maxmn] = 0.0;
  }
  emxInit_real_T(&b_B, 1);
  maxmn = b_B->size[0];
  b_B->size[0] = B->size[0];
  emxEnsureCapacity_real_T(b_B, maxmn);
  b_B_data = b_B->data;
  minmn = B->size[0];
  for (maxmn = 0; maxmn < minmn; maxmn++) {
    b_B_data[maxmn] = B_data[maxmn];
  }
  xunormqr(b_A, b_B, tau);
  b_B_data = b_B->data;
  emxFree_real_T(&tau);
  for (minmn = 0; minmn < rankA; minmn++) {
    C_data[jpvt_data[minmn] - 1] = b_B_data[minmn];
  }
  emxFree_real_T(&b_B);
  for (j = rankA; j >= 1; j--) {
    maxmn = jpvt_data[j - 1];
    C_data[maxmn - 1] /= b_A_data[(j + b_A->size[0] * (j - 1)) - 1];
    for (minmn = 0; minmn <= j - 2; minmn++) {
      C_data[jpvt_data[minmn] - 1] -= C_data[jpvt_data[j - 1] - 1] *
                                      b_A_data[minmn + b_A->size[0] * (j - 1)];
    }
  }
  emxFree_int32_T(&jpvt);
  emxFree_real_T(&b_A);
  *r = rankA;
}

/* End of code generation (linsolve.c) */
