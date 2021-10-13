/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * qr.c
 *
 * Code generation for function 'qr'
 *
 */

/* Include files */
#include "qr.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "xzgeqp3.h"
#include "xzlarf.h"
#include <string.h>

/* Function Definitions */
void qr(const emxArray_real_T *A, emxArray_real_T *Q, emxArray_real_T *R)
{
  emxArray_real_T *b_A;
  emxArray_real_T *tau;
  emxArray_real_T *work;
  const double *A_data;
  double *R_data;
  double *b_A_data;
  double *tau_data;
  int b_i;
  int i;
  int itau;
  int j;
  int m;
  int minmana;
  int minmn;
  int minsz;
  A_data = A->data;
  emxInit_real_T(&b_A, 2);
  i = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T(b_A, i);
  b_A_data = b_A->data;
  minmana = A->size[0] * A->size[1];
  for (i = 0; i < minmana; i++) {
    b_A_data[i] = A_data[i];
  }
  emxInit_real_T(&tau, 1);
  itau = A->size[0];
  minmana = A->size[1];
  if (itau <= minmana) {
    minmana = itau;
  }
  itau = A->size[0];
  minmn = A->size[1];
  if (itau <= minmn) {
    minmn = itau;
  }
  i = tau->size[0];
  tau->size[0] = minmana;
  emxEnsureCapacity_real_T(tau, i);
  tau_data = tau->data;
  for (i = 0; i < minmana; i++) {
    tau_data[i] = 0.0;
  }
  if ((A->size[0] != 0) && (A->size[1] != 0) && (minmn >= 1)) {
    qrf(b_A, A->size[0], A->size[1], minmn, tau);
    tau_data = tau->data;
    b_A_data = b_A->data;
  }
  m = b_A->size[0];
  minmana = b_A->size[1];
  itau = b_A->size[0];
  minsz = b_A->size[1];
  if (itau <= minsz) {
    minsz = itau;
  }
  i = R->size[0] * R->size[1];
  R->size[0] = minsz;
  R->size[1] = b_A->size[1];
  emxEnsureCapacity_real_T(R, i);
  R_data = R->data;
  for (j = 0; j < minsz; j++) {
    for (b_i = 0; b_i <= j; b_i++) {
      R_data[b_i + R->size[0] * j] = b_A_data[b_i + b_A->size[0] * j];
    }
    i = j + 2;
    for (b_i = i; b_i <= minsz; b_i++) {
      R_data[(b_i + R->size[0] * j) - 1] = 0.0;
    }
  }
  i = b_A->size[0] + 1;
  for (j = i; j <= minmana; j++) {
    for (b_i = 0; b_i < minsz; b_i++) {
      R_data[b_i + R->size[0] * (j - 1)] =
          b_A_data[b_i + b_A->size[0] * (j - 1)];
    }
  }
  if (minsz >= 1) {
    i = minsz - 1;
    for (j = minsz; j <= i; j++) {
      minmana = j * m;
      minmn = m - 1;
      for (b_i = 0; b_i <= minmn; b_i++) {
        b_A_data[minmana + b_i] = 0.0;
      }
      b_A_data[minmana + j] = 1.0;
    }
    emxInit_real_T(&work, 1);
    itau = minsz - 1;
    i = work->size[0];
    work->size[0] = b_A->size[1];
    emxEnsureCapacity_real_T(work, i);
    R_data = work->data;
    minmana = b_A->size[1];
    for (i = 0; i < minmana; i++) {
      R_data[i] = 0.0;
    }
    for (b_i = minsz; b_i >= 1; b_i--) {
      minmn = b_i + (b_i - 1) * m;
      if (b_i < minsz) {
        b_A_data[minmn - 1] = 1.0;
        xzlarf((m - b_i) + 1, minsz - b_i, minmn, tau_data[itau], b_A,
               minmn + m, m, work);
        b_A_data = b_A->data;
      }
      if (b_i < m) {
        minmana = minmn + 1;
        i = (minmn + m) - b_i;
        for (j = minmana; j <= i; j++) {
          b_A_data[j - 1] *= -tau_data[itau];
        }
      }
      b_A_data[minmn - 1] = 1.0 - tau_data[itau];
      for (j = 0; j <= b_i - 2; j++) {
        b_A_data[(minmn - j) - 2] = 0.0;
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
  R_data = Q->data;
  for (j = 0; j < minsz; j++) {
    for (b_i = 0; b_i < m; b_i++) {
      R_data[b_i + Q->size[0] * j] = b_A_data[b_i + b_A->size[0] * j];
    }
  }
  emxFree_real_T(&b_A);
}

/* End of code generation (qr.c) */
