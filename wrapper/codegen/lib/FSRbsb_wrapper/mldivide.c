/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mldivide.c
 *
 * Code generation for function 'mldivide'
 *
 */

/* Include files */
#include "mldivide.h"
#include "FSRbsb_wrapper_emxutil.h"
#include "FSRbsb_wrapper_types.h"
#include "rt_nonfinite.h"
#include "xgeqp3.h"
#include <math.h>

/* Function Definitions */
void mldivide(const emxArray_real_T *A, emxArray_real_T *B)
{
  emxArray_int32_T *jpvt;
  emxArray_real_T *b_A;
  emxArray_real_T *b_B;
  emxArray_real_T *tau;
  double s;
  double tol;
  int LDA;
  int b;
  int b_i;
  int i;
  int j;
  int jj;
  int jp1j;
  int k;
  int ldap1;
  int maxmn;
  int minmn;
  int mmj_tmp;
  int n;
  int rankA;
  int u0;
  emxInit_real_T(&b_A, 2);
  emxInit_real_T(&tau, 1);
  emxInit_int32_T(&jpvt, 2);
  emxInit_real_T(&b_B, 1);
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0)) {
    i = B->size[0];
    B->size[0] = A->size[1];
    emxEnsureCapacity_real_T(B, i);
    minmn = A->size[1];
    for (i = 0; i < minmn; i++) {
      B->data[i] = 0.0;
    }
  } else if (A->size[0] == A->size[1]) {
    u0 = A->size[0];
    n = A->size[1];
    if (u0 < n) {
      n = u0;
    }
    u0 = B->size[0];
    if (u0 < n) {
      n = u0;
    }
    LDA = A->size[0];
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[0];
    b_A->size[1] = A->size[1];
    emxEnsureCapacity_real_T(b_A, i);
    minmn = A->size[0] * A->size[1];
    for (i = 0; i < minmn; i++) {
      b_A->data[i] = A->data[i];
    }
    if (n < 1) {
      maxmn = 0;
    } else {
      maxmn = n;
    }
    i = jpvt->size[0] * jpvt->size[1];
    jpvt->size[0] = 1;
    jpvt->size[1] = maxmn;
    emxEnsureCapacity_int32_T(jpvt, i);
    if (maxmn > 0) {
      jpvt->data[0] = 1;
      minmn = 1;
      for (k = 2; k <= maxmn; k++) {
        minmn++;
        jpvt->data[k - 1] = minmn;
      }
    }
    if (n >= 1) {
      ldap1 = A->size[0];
      u0 = n - 1;
      if (u0 >= n) {
        u0 = n;
      }
      for (j = 0; j < u0; j++) {
        mmj_tmp = n - j;
        b = j * (LDA + 1);
        jj = j * (ldap1 + 1);
        jp1j = b + 2;
        if (mmj_tmp < 1) {
          minmn = -1;
        } else {
          minmn = 0;
          if (mmj_tmp > 1) {
            tol = fabs(b_A->data[jj]);
            for (k = 2; k <= mmj_tmp; k++) {
              s = fabs(b_A->data[(b + k) - 1]);
              if (s > tol) {
                minmn = k - 1;
                tol = s;
              }
            }
          }
        }
        if (b_A->data[jj + minmn] != 0.0) {
          if (minmn != 0) {
            maxmn = j + minmn;
            jpvt->data[j] = maxmn + 1;
            for (k = 0; k < n; k++) {
              minmn = k * LDA;
              rankA = j + minmn;
              tol = b_A->data[rankA];
              i = maxmn + minmn;
              b_A->data[rankA] = b_A->data[i];
              b_A->data[i] = tol;
            }
          }
          i = jj + mmj_tmp;
          for (b_i = jp1j; b_i <= i; b_i++) {
            b_A->data[b_i - 1] /= b_A->data[jj];
          }
        }
        maxmn = b + LDA;
        rankA = jj + ldap1;
        for (jp1j = 0; jp1j <= mmj_tmp - 2; jp1j++) {
          minmn = maxmn + jp1j * LDA;
          tol = b_A->data[minmn];
          if (b_A->data[minmn] != 0.0) {
            i = rankA + 2;
            minmn = mmj_tmp + rankA;
            for (b = i; b <= minmn; b++) {
              b_A->data[b - 1] += b_A->data[((jj + b) - rankA) - 1] * -tol;
            }
          }
          rankA += LDA;
        }
      }
    }
    LDA = b_A->size[0];
    for (b_i = 0; b_i <= n - 2; b_i++) {
      i = jpvt->data[b_i];
      if (i != b_i + 1) {
        tol = B->data[b_i];
        B->data[b_i] = B->data[i - 1];
        B->data[i - 1] = tol;
      }
    }
    for (k = 0; k < n; k++) {
      minmn = LDA * k;
      if (B->data[k] != 0.0) {
        i = k + 2;
        for (b_i = i; b_i <= n; b_i++) {
          B->data[b_i - 1] -= B->data[k] * b_A->data[(b_i + minmn) - 1];
        }
      }
    }
    for (k = n; k >= 1; k--) {
      minmn = LDA * (k - 1);
      tol = B->data[k - 1];
      if (tol != 0.0) {
        B->data[k - 1] = tol / b_A->data[(k + minmn) - 1];
        for (b_i = 0; b_i <= k - 2; b_i++) {
          B->data[b_i] -= B->data[k - 1] * b_A->data[b_i + minmn];
        }
      }
    }
  } else {
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[0];
    b_A->size[1] = A->size[1];
    emxEnsureCapacity_real_T(b_A, i);
    minmn = A->size[0] * A->size[1];
    for (i = 0; i < minmn; i++) {
      b_A->data[i] = A->data[i];
    }
    xgeqp3(b_A, tau, jpvt);
    rankA = 0;
    if (b_A->size[0] < b_A->size[1]) {
      minmn = b_A->size[0];
      maxmn = b_A->size[1];
    } else {
      minmn = b_A->size[1];
      maxmn = b_A->size[0];
    }
    if (minmn > 0) {
      tol =
          fmin(1.4901161193847656E-8, 2.2204460492503131E-15 * (double)maxmn) *
          fabs(b_A->data[0]);
      while ((rankA < minmn) &&
             (!(fabs(b_A->data[rankA + b_A->size[0] * rankA]) <= tol))) {
        rankA++;
      }
    }
    i = b_B->size[0];
    b_B->size[0] = B->size[0];
    emxEnsureCapacity_real_T(b_B, i);
    minmn = B->size[0];
    for (i = 0; i < minmn; i++) {
      b_B->data[i] = B->data[i];
    }
    i = B->size[0];
    B->size[0] = b_A->size[1];
    emxEnsureCapacity_real_T(B, i);
    minmn = b_A->size[1];
    for (i = 0; i < minmn; i++) {
      B->data[i] = 0.0;
    }
    minmn = b_A->size[0];
    u0 = b_A->size[0];
    maxmn = b_A->size[1];
    if (u0 < maxmn) {
      maxmn = u0;
    }
    for (j = 0; j < maxmn; j++) {
      if (tau->data[j] != 0.0) {
        tol = b_B->data[j];
        i = j + 2;
        for (b_i = i; b_i <= minmn; b_i++) {
          tol += b_A->data[(b_i + b_A->size[0] * j) - 1] * b_B->data[b_i - 1];
        }
        tol *= tau->data[j];
        if (tol != 0.0) {
          b_B->data[j] -= tol;
          for (b_i = i; b_i <= minmn; b_i++) {
            b_B->data[b_i - 1] -= b_A->data[(b_i + b_A->size[0] * j) - 1] * tol;
          }
        }
      }
    }
    for (b_i = 0; b_i < rankA; b_i++) {
      B->data[jpvt->data[b_i] - 1] = b_B->data[b_i];
    }
    for (j = rankA; j >= 1; j--) {
      i = jpvt->data[j - 1];
      B->data[i - 1] /= b_A->data[(j + b_A->size[0] * (j - 1)) - 1];
      for (b_i = 0; b_i <= j - 2; b_i++) {
        B->data[jpvt->data[b_i] - 1] -= B->data[jpvt->data[j - 1] - 1] *
                                        b_A->data[b_i + b_A->size[0] * (j - 1)];
      }
    }
  }
  emxFree_real_T(&b_B);
  emxFree_int32_T(&jpvt);
  emxFree_real_T(&tau);
  emxFree_real_T(&b_A);
}

/* End of code generation (mldivide.c) */
