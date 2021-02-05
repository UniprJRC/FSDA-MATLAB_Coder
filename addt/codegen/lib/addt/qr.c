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
#include "addt_emxutil.h"
#include "addt_types.h"
#include "rt_nonfinite.h"
#include "xgerc.h"
#include "xzlarf.h"
#include "xzlarfg.h"

/* Function Definitions */
void qr(const emxArray_real_T *A, emxArray_real_T *Q, emxArray_real_T *R)
{
  emxArray_real_T *b_A;
  emxArray_real_T *tau;
  emxArray_real_T *work;
  double atmp;
  double c;
  int b_i;
  int exitg1;
  int i;
  int ia;
  int iac;
  int iaii;
  int ii;
  int itau;
  int iy;
  int lastv;
  int lda;
  int m;
  int minmana;
  int minmn;
  int minsz;
  boolean_T exitg2;
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
  m = A->size[0];
  lastv = A->size[1];
  ii = A->size[0];
  minmana = A->size[1];
  if (ii < minmana) {
    minmana = ii;
  }

  ii = A->size[0];
  minmn = A->size[1];
  if (ii < minmn) {
    minmn = ii;
  }

  i = tau->size[0];
  tau->size[0] = minmana;
  emxEnsureCapacity_real_T(tau, i);
  for (i = 0; i < minmana; i++) {
    tau->data[i] = 0.0;
  }

  emxInit_real_T(&work, 1);
  if ((A->size[0] != 0) && (A->size[1] != 0) && (minmn >= 1)) {
    lda = A->size[0];
    i = work->size[0];
    work->size[0] = A->size[1];
    emxEnsureCapacity_real_T(work, i);
    minmana = A->size[1];
    for (i = 0; i < minmana; i++) {
      work->data[i] = 0.0;
    }

    for (b_i = 0; b_i < minmn; b_i++) {
      ii = b_i * lda + b_i;
      minmana = m - b_i;
      if (b_i + 1 < m) {
        atmp = b_A->data[ii];
        c = xzlarfg(minmana, &atmp, b_A, ii + 2);
        tau->data[b_i] = c;
        b_A->data[ii] = atmp;
      } else {
        c = 0.0;
        tau->data[b_i] = 0.0;
      }

      if (b_i + 1 < lastv) {
        atmp = b_A->data[ii];
        b_A->data[ii] = 1.0;
        xzlarf(minmana, (lastv - b_i) - 1, ii + 1, c, b_A, (ii + lda) + 1, lda,
               work);
        b_A->data[ii] = atmp;
      }
    }
  }

  m = b_A->size[0];
  lastv = b_A->size[1];
  ii = b_A->size[0];
  minsz = b_A->size[1];
  if (ii < minsz) {
    minsz = ii;
  }

  i = R->size[0] * R->size[1];
  R->size[0] = minsz;
  R->size[1] = b_A->size[1];
  emxEnsureCapacity_real_T(R, i);
  for (minmana = 0; minmana < minsz; minmana++) {
    for (b_i = 0; b_i <= minmana; b_i++) {
      R->data[b_i + R->size[0] * minmana] = b_A->data[b_i + b_A->size[0] *
        minmana];
    }

    i = minmana + 2;
    for (b_i = i; b_i <= minsz; b_i++) {
      R->data[(b_i + R->size[0] * minmana) - 1] = 0.0;
    }
  }

  i = b_A->size[0] + 1;
  for (minmana = i; minmana <= lastv; minmana++) {
    for (b_i = 0; b_i < minsz; b_i++) {
      R->data[b_i + R->size[0] * (minmana - 1)] = b_A->data[b_i + b_A->size[0] *
        (minmana - 1)];
    }
  }

  if (minsz >= 1) {
    i = minsz - 1;
    for (minmana = minsz; minmana <= i; minmana++) {
      ia = minmana * m;
      ii = m - 1;
      for (b_i = 0; b_i <= ii; b_i++) {
        b_A->data[ia + b_i] = 0.0;
      }

      b_A->data[ia + minmana] = 1.0;
    }

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
        minmn = iaii + m;
        if (tau->data[itau] != 0.0) {
          lastv = (m - b_i) + 1;
          minmana = (iaii + m) - b_i;
          while ((lastv > 0) && (b_A->data[minmana - 1] == 0.0)) {
            lastv--;
            minmana--;
          }

          lda = minsz - b_i;
          exitg2 = false;
          while ((!exitg2) && (lda > 0)) {
            minmana = minmn + (lda - 1) * m;
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
                lda--;
                exitg1 = 2;
              }
            } while (exitg1 == 0);

            if (exitg1 == 1) {
              exitg2 = true;
            }
          }
        } else {
          lastv = 0;
          lda = 0;
        }

        if (lastv > 0) {
          if (lda != 0) {
            for (iy = 0; iy < lda; iy++) {
              work->data[iy] = 0.0;
            }

            iy = 0;
            i = minmn + m * (lda - 1);
            for (iac = minmn; m < 0 ? iac >= i : iac <= i; iac += m) {
              minmana = iaii;
              c = 0.0;
              ii = (iac + lastv) - 1;
              for (ia = iac; ia <= ii; ia++) {
                c += b_A->data[ia - 1] * b_A->data[minmana - 1];
                minmana++;
              }

              work->data[iy] += c;
              iy++;
            }
          }

          xgerc(lastv, lda, -tau->data[itau], iaii, work, b_A, minmn, m);
        }
      }

      if (b_i < m) {
        minmana = iaii + 1;
        i = (iaii + m) - b_i;
        for (ii = minmana; ii <= i; ii++) {
          b_A->data[ii - 1] *= -tau->data[itau];
        }
      }

      b_A->data[iaii - 1] = 1.0 - tau->data[itau];
      for (minmana = 0; minmana <= b_i - 2; minmana++) {
        b_A->data[(iaii - minmana) - 2] = 0.0;
      }

      itau--;
    }
  }

  emxFree_real_T(&work);
  emxFree_real_T(&tau);
  i = Q->size[0] * Q->size[1];
  Q->size[0] = m;
  Q->size[1] = minsz;
  emxEnsureCapacity_real_T(Q, i);
  for (minmana = 0; minmana < minsz; minmana++) {
    for (b_i = 0; b_i < m; b_i++) {
      Q->data[b_i + Q->size[0] * minmana] = b_A->data[b_i + b_A->size[0] *
        minmana];
    }
  }

  emxFree_real_T(&b_A);
}

/* End of code generation (qr.c) */
