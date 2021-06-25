/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: qr.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "qr.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "xzgeqp3.h"
#include "xzlarf.h"
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : const emxArray_real_T *A
 *                emxArray_real_T *Q
 *                emxArray_real_T *R
 * Return Type  : void
 */
void qr(const emxArray_real_T *A, emxArray_real_T *Q, emxArray_real_T *R)
{
  emxArray_real_T *b_A;
  emxArray_real_T *tau;
  emxArray_real_T *work;
  int b_i;
  int i;
  int itau;
  int j;
  int m;
  int minmana;
  int minmn;
  int minsz;
  emxInit_real_T(&b_A, 2);
  i = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T(b_A, i);
  minmana = A->size[0] * A->size[1];
  for (i = 0; i < minmana; i++) {
    b_A->data[i] = A->data[i];
  }
  emxInit_real_T(&tau, 1);
  itau = A->size[0];
  minmana = A->size[1];
  if (itau < minmana) {
    minmana = itau;
  }
  itau = A->size[0];
  minmn = A->size[1];
  if (itau < minmn) {
    minmn = itau;
  }
  i = tau->size[0];
  tau->size[0] = minmana;
  emxEnsureCapacity_real_T(tau, i);
  for (i = 0; i < minmana; i++) {
    tau->data[i] = 0.0;
  }
  if ((A->size[0] != 0) && (A->size[1] != 0) && (minmn >= 1)) {
    qrf(b_A, A->size[0], A->size[1], minmn, tau);
  }
  m = b_A->size[0];
  minmana = b_A->size[1];
  itau = b_A->size[0];
  minsz = b_A->size[1];
  if (itau < minsz) {
    minsz = itau;
  }
  i = R->size[0] * R->size[1];
  R->size[0] = minsz;
  R->size[1] = b_A->size[1];
  emxEnsureCapacity_real_T(R, i);
  for (j = 0; j < minsz; j++) {
    for (b_i = 0; b_i <= j; b_i++) {
      R->data[b_i + R->size[0] * j] = b_A->data[b_i + b_A->size[0] * j];
    }
    i = j + 2;
    for (b_i = i; b_i <= minsz; b_i++) {
      R->data[(b_i + R->size[0] * j) - 1] = 0.0;
    }
  }
  i = b_A->size[0] + 1;
  for (j = i; j <= minmana; j++) {
    for (b_i = 0; b_i < minsz; b_i++) {
      R->data[b_i + R->size[0] * (j - 1)] =
          b_A->data[b_i + b_A->size[0] * (j - 1)];
    }
  }
  if (minsz >= 1) {
    i = minsz - 1;
    for (j = minsz; j <= i; j++) {
      minmana = j * m;
      minmn = m - 1;
      for (b_i = 0; b_i <= minmn; b_i++) {
        b_A->data[minmana + b_i] = 0.0;
      }
      b_A->data[minmana + j] = 1.0;
    }
    emxInit_real_T(&work, 1);
    itau = minsz - 1;
    i = work->size[0];
    work->size[0] = b_A->size[1];
    emxEnsureCapacity_real_T(work, i);
    minmana = b_A->size[1];
    for (i = 0; i < minmana; i++) {
      work->data[i] = 0.0;
    }
    for (b_i = minsz; b_i >= 1; b_i--) {
      minmn = b_i + (b_i - 1) * m;
      if (b_i < minsz) {
        b_A->data[minmn - 1] = 1.0;
        xzlarf((m - b_i) + 1, minsz - b_i, minmn, tau->data[itau], b_A,
               minmn + m, m, work);
      }
      if (b_i < m) {
        minmana = minmn + 1;
        i = (minmn + m) - b_i;
        for (j = minmana; j <= i; j++) {
          b_A->data[j - 1] *= -tau->data[itau];
        }
      }
      b_A->data[minmn - 1] = 1.0 - tau->data[itau];
      for (j = 0; j <= b_i - 2; j++) {
        b_A->data[(minmn - j) - 2] = 0.0;
      }
      itau--;
    }
    emxFree_real_T(&work);
  }
  emxFree_real_T(&tau);
  i = Q->size[0] * Q->size[1];
  Q->size[0] = m;
  Q->size[1] = minsz;
  emxEnsureCapacity_real_T(Q, i);
  for (j = 0; j < minsz; j++) {
    for (b_i = 0; b_i < m; b_i++) {
      Q->data[b_i + Q->size[0] * j] = b_A->data[b_i + b_A->size[0] * j];
    }
  }
  emxFree_real_T(&b_A);
}

/*
 * File trailer for qr.c
 *
 * [EOF]
 */
