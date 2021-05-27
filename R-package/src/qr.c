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
#include "xgerc.h"
#include "xzgeqp3.h"

/* Function Definitions */
void qr(const emxArray_real_T *A, emxArray_real_T *Q, emxArray_real_T *R)
{
  emxArray_real_T *b_A;
  emxArray_real_T *tau;
  emxArray_real_T *work;
  double c;
  int b_i;
  int exitg1;
  int i;
  int ia;
  int iac;
  int iaii;
  int itau;
  int iy;
  int lastv;
  int m;
  int minmana;
  int minmn;
  int minsz;
  int u0;
  bool exitg2;
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
  u0 = A->size[0];
  minmana = A->size[1];
  if (u0 < minmana) {
    minmana = u0;
  }
  u0 = A->size[0];
  minmn = A->size[1];
  if (u0 < minmn) {
    minmn = u0;
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
  u0 = b_A->size[0];
  minsz = b_A->size[1];
  if (u0 < minsz) {
    minsz = u0;
  }
  i = R->size[0] * R->size[1];
  R->size[0] = minsz;
  R->size[1] = b_A->size[1];
  emxEnsureCapacity_real_T(R, i);
  for (minmn = 0; minmn < minsz; minmn++) {
    for (b_i = 0; b_i <= minmn; b_i++) {
      R->data[b_i + R->size[0] * minmn] = b_A->data[b_i + b_A->size[0] * minmn];
    }
    i = minmn + 2;
    for (b_i = i; b_i <= minsz; b_i++) {
      R->data[(b_i + R->size[0] * minmn) - 1] = 0.0;
    }
  }
  i = b_A->size[0] + 1;
  for (minmn = i; minmn <= minmana; minmn++) {
    for (b_i = 0; b_i < minsz; b_i++) {
      R->data[b_i + R->size[0] * (minmn - 1)] =
          b_A->data[b_i + b_A->size[0] * (minmn - 1)];
    }
  }
  if (minsz >= 1) {
    i = minsz - 1;
    for (minmn = minsz; minmn <= i; minmn++) {
      ia = minmn * m;
      minmana = m - 1;
      for (b_i = 0; b_i <= minmana; b_i++) {
        b_A->data[ia + b_i] = 0.0;
      }
      b_A->data[ia + minmn] = 1.0;
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
      iaii = b_i + (b_i - 1) * m;
      if (b_i < minsz) {
        b_A->data[iaii - 1] = 1.0;
        u0 = iaii + m;
        if (tau->data[itau] != 0.0) {
          lastv = (m - b_i) + 1;
          minmana = (iaii + m) - b_i;
          while ((lastv > 0) && (b_A->data[minmana - 1] == 0.0)) {
            lastv--;
            minmana--;
          }
          minmn = minsz - b_i;
          exitg2 = false;
          while ((!exitg2) && (minmn > 0)) {
            minmana = u0 + (minmn - 1) * m;
            ia = minmana;
            do {
              exitg1 = 0;
              if (ia <= (minmana + lastv) - 1) {
                if (b_A->data[ia - 1] != 0.0) {
                  exitg1 = 1;
                } else {
                  ia++;
                }
              } else {
                minmn--;
                exitg1 = 2;
              }
            } while (exitg1 == 0);
            if (exitg1 == 1) {
              exitg2 = true;
            }
          }
        } else {
          lastv = 0;
          minmn = 0;
        }
        if (lastv > 0) {
          if (minmn != 0) {
            for (iy = 0; iy < minmn; iy++) {
              work->data[iy] = 0.0;
            }
            iy = 0;
            i = u0 + m * (minmn - 1);
            for (iac = u0; m < 0 ? iac >= i : iac <= i; iac += m) {
              c = 0.0;
              minmana = (iac + lastv) - 1;
              for (ia = iac; ia <= minmana; ia++) {
                c += b_A->data[ia - 1] * b_A->data[((iaii + ia) - iac) - 1];
              }
              work->data[iy] += c;
              iy++;
            }
          }
          xgerc(lastv, minmn, -tau->data[itau], iaii, work, b_A, u0, m);
        }
      }
      if (b_i < m) {
        minmana = iaii + 1;
        i = (iaii + m) - b_i;
        for (minmn = minmana; minmn <= i; minmn++) {
          b_A->data[minmn - 1] *= -tau->data[itau];
        }
      }
      b_A->data[iaii - 1] = 1.0 - tau->data[itau];
      for (minmn = 0; minmn <= b_i - 2; minmn++) {
        b_A->data[(iaii - minmn) - 2] = 0.0;
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
  for (minmn = 0; minmn < minsz; minmn++) {
    for (b_i = 0; b_i < m; b_i++) {
      Q->data[b_i + Q->size[0] * minmn] = b_A->data[b_i + b_A->size[0] * minmn];
    }
  }
  emxFree_real_T(&b_A);
}

/* End of code generation (qr.c) */
