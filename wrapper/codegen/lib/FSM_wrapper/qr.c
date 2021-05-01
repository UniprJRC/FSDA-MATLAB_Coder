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
#include "FSM_wrapper_emxutil.h"
#include "FSM_wrapper_types.h"
#include "rt_nonfinite.h"
#include "xzlarf.h"
#include "xzlarfg.h"
#include "mkl_cblas.h"

/* Function Definitions */
void qr(const emxArray_real_T *A, emxArray_real_T *Q, emxArray_real_T *R)
{
  emxArray_real_T *b_A;
  emxArray_real_T *tau;
  emxArray_real_T *work;
  double atmp;
  double d;
  int exitg1;
  int i;
  int ia;
  int iaii;
  int ii;
  int itau;
  int lda;
  int m;
  int minmana;
  int minmn;
  int minsz;
  bool exitg2;
  emxInit_real_T(&b_A, 2);
  iaii = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T(b_A, iaii);
  minmana = A->size[0] * A->size[1];
  for (iaii = 0; iaii < minmana; iaii++) {
    b_A->data[iaii] = A->data[iaii];
  }
  emxInit_real_T(&tau, 1);
  m = b_A->size[0];
  ia = b_A->size[1];
  ii = b_A->size[0];
  minmana = b_A->size[1];
  if (ii < minmana) {
    minmana = ii;
  }
  ii = b_A->size[0];
  minmn = b_A->size[1];
  if (ii < minmn) {
    minmn = ii;
  }
  iaii = tau->size[0];
  tau->size[0] = minmana;
  emxEnsureCapacity_real_T(tau, iaii);
  for (iaii = 0; iaii < minmana; iaii++) {
    tau->data[iaii] = 0.0;
  }
  emxInit_real_T(&work, 1);
  if ((b_A->size[0] != 0) && (b_A->size[1] != 0) && (minmn >= 1)) {
    lda = b_A->size[0];
    iaii = work->size[0];
    work->size[0] = b_A->size[1];
    emxEnsureCapacity_real_T(work, iaii);
    minmana = b_A->size[1];
    for (iaii = 0; iaii < minmana; iaii++) {
      work->data[iaii] = 0.0;
    }
    for (i = 0; i < minmn; i++) {
      ii = i * lda + i;
      minmana = m - i;
      if (i + 1 < m) {
        atmp = b_A->data[ii];
        d = xzlarfg(minmana, &atmp, b_A, ii + 2);
        tau->data[i] = d;
        b_A->data[ii] = atmp;
      } else {
        d = 0.0;
        tau->data[i] = 0.0;
      }
      if (i + 1 < ia) {
        atmp = b_A->data[ii];
        b_A->data[ii] = 1.0;
        xzlarf(minmana, (ia - i) - 1, ii + 1, d, b_A, (ii + lda) + 1, lda,
               work);
        b_A->data[ii] = atmp;
      }
    }
  }
  m = b_A->size[0];
  ia = b_A->size[1];
  ii = b_A->size[0];
  minsz = b_A->size[1];
  if (ii < minsz) {
    minsz = ii;
  }
  iaii = R->size[0] * R->size[1];
  R->size[0] = minsz;
  R->size[1] = b_A->size[1];
  emxEnsureCapacity_real_T(R, iaii);
  for (ii = 0; ii < minsz; ii++) {
    for (i = 0; i <= ii; i++) {
      R->data[i + R->size[0] * ii] = b_A->data[i + b_A->size[0] * ii];
    }
    iaii = ii + 2;
    for (i = iaii; i <= minsz; i++) {
      R->data[(i + R->size[0] * ii) - 1] = 0.0;
    }
  }
  iaii = b_A->size[0] + 1;
  for (ii = iaii; ii <= ia; ii++) {
    for (i = 0; i < minsz; i++) {
      R->data[i + R->size[0] * (ii - 1)] =
          b_A->data[i + b_A->size[0] * (ii - 1)];
    }
  }
  if (minsz >= 1) {
    iaii = minsz - 1;
    for (ii = minsz; ii <= iaii; ii++) {
      ia = ii * m;
      minmana = m - 1;
      for (i = 0; i <= minmana; i++) {
        b_A->data[ia + i] = 0.0;
      }
      b_A->data[ia + ii] = 1.0;
    }
    itau = minsz - 1;
    iaii = work->size[0];
    work->size[0] = b_A->size[1];
    emxEnsureCapacity_real_T(work, iaii);
    minmana = b_A->size[1];
    for (iaii = 0; iaii < minmana; iaii++) {
      work->data[iaii] = 0.0;
    }
    for (i = minsz; i >= 1; i--) {
      iaii = (i + (i - 1) * m) - 1;
      if (i < minsz) {
        b_A->data[iaii] = 1.0;
        lda = iaii + m;
        if (tau->data[itau] != 0.0) {
          minmn = (m - i) + 1;
          minmana = lda - i;
          while ((minmn > 0) && (b_A->data[minmana] == 0.0)) {
            minmn--;
            minmana--;
          }
          minmana = minsz - i;
          exitg2 = false;
          while ((!exitg2) && (minmana > 0)) {
            ii = lda + (minmana - 1) * m;
            ia = ii + 1;
            do {
              exitg1 = 0;
              if (ia <= ii + minmn) {
                if (b_A->data[ia - 1] != 0.0) {
                  exitg1 = 1;
                } else {
                  ia++;
                }
              } else {
                minmana--;
                exitg1 = 2;
              }
            } while (exitg1 == 0);
            if (exitg1 == 1) {
              exitg2 = true;
            }
          }
        } else {
          minmn = 0;
          minmana = 0;
        }
        if ((minmn > 0) && (minmana >= 1)) {
          cblas_dgemv(CblasColMajor, CblasConjTrans, (MKL_INT)minmn,
                      (MKL_INT)minmana, 1.0, &b_A->data[lda], (MKL_INT)m,
                      &b_A->data[iaii], (MKL_INT)1, 0.0, &work->data[0],
                      (MKL_INT)1);
          cblas_dger(CblasColMajor, (MKL_INT)minmn, (MKL_INT)minmana,
                     -tau->data[itau], &b_A->data[iaii], (MKL_INT)1,
                     &work->data[0], (MKL_INT)1, &b_A->data[lda], (MKL_INT)m);
        }
      }
      if (i < m) {
        ia = m - i;
        if (ia >= 1) {
          cblas_dscal((MKL_INT)ia, -tau->data[itau], &b_A->data[iaii + 1],
                      (MKL_INT)1);
        }
      }
      b_A->data[iaii] = 1.0 - tau->data[itau];
      for (ii = 0; ii <= i - 2; ii++) {
        b_A->data[(iaii - ii) - 1] = 0.0;
      }
      itau--;
    }
  }
  emxFree_real_T(&work);
  emxFree_real_T(&tau);
  iaii = Q->size[0] * Q->size[1];
  Q->size[0] = m;
  Q->size[1] = minsz;
  emxEnsureCapacity_real_T(Q, iaii);
  for (ii = 0; ii < minsz; ii++) {
    for (i = 0; i < m; i++) {
      Q->data[i + Q->size[0] * ii] = b_A->data[i + b_A->size[0] * ii];
    }
  }
  emxFree_real_T(&b_A);
}

/* End of code generation (qr.c) */
