/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mrdivide_helper.c
 *
 * Code generation for function 'mrdivide_helper'
 *
 */

/* Include files */
#include "mrdivide_helper.h"
#include "LXS_wrapper1_emxutil.h"
#include "LXS_wrapper1_types.h"
#include "qrsolve.h"
#include "rt_nonfinite.h"
#include "xgeqp3.h"
#include "xzgetrf.h"

/* Function Definitions */
void mrdiv(emxArray_real_T *A, const emxArray_real_T *B)
{
  emxArray_int32_T *jpvt;
  emxArray_real_T *Y;
  emxArray_real_T *b_A;
  emxArray_real_T *b_B;
  emxArray_real_T *tau;
  double wj;
  int b_i;
  int b_nb;
  int i;
  int i1;
  int j;
  int jBcol;
  int k;
  int m;
  int mn;
  int n;
  int nb;
  emxInit_real_T(&Y, 2);
  emxInit_real_T(&b_B, 2);
  emxInit_real_T(&b_A, 2);
  emxInit_real_T(&tau, 1);
  emxInit_int32_T(&jpvt, 2);
  if ((A->size[0] == 0) || (A->size[1] == 0) ||
      ((B->size[0] == 0) || (B->size[1] == 0))) {
    jBcol = A->size[0];
    i = A->size[0] * A->size[1];
    A->size[1] = B->size[0];
    emxEnsureCapacity_real_T(A, i);
    m = B->size[0];
    for (i = 0; i < m; i++) {
      for (i1 = 0; i1 < jBcol; i1++) {
        A->data[i1 + A->size[0] * i] = 0.0;
      }
    }
  } else if (B->size[0] == B->size[1]) {
    n = B->size[1];
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = B->size[0];
    b_A->size[1] = B->size[1];
    emxEnsureCapacity_real_T(b_A, i);
    m = B->size[0] * B->size[1];
    for (i = 0; i < m; i++) {
      b_A->data[i] = B->data[i];
    }
    xzgetrf(B->size[1], B->size[1], b_A, B->size[1], jpvt, &jBcol);
    nb = A->size[0];
    if ((A->size[0] != 0) && (A->size[1] != 0)) {
      for (j = 0; j < n; j++) {
        jBcol = nb * j - 1;
        m = n * j;
        for (k = 0; k < j; k++) {
          b_nb = nb * k;
          i = k + m;
          if (b_A->data[i] != 0.0) {
            for (b_i = 0; b_i < nb; b_i++) {
              i1 = (b_i + jBcol) + 1;
              A->data[i1] -= b_A->data[i] * A->data[b_i + b_nb];
            }
          }
        }
        wj = 1.0 / b_A->data[j + m];
        for (b_i = 0; b_i < nb; b_i++) {
          i = (b_i + jBcol) + 1;
          A->data[i] *= wj;
        }
      }
    }
    if ((A->size[0] != 0) && (A->size[1] != 0)) {
      for (j = n; j >= 1; j--) {
        jBcol = nb * (j - 1) - 1;
        m = n * (j - 1) - 1;
        i = j + 1;
        for (k = i; k <= n; k++) {
          b_nb = nb * (k - 1);
          i1 = k + m;
          if (b_A->data[i1] != 0.0) {
            for (b_i = 0; b_i < nb; b_i++) {
              mn = (b_i + jBcol) + 1;
              A->data[mn] -= b_A->data[i1] * A->data[b_i + b_nb];
            }
          }
        }
      }
    }
    i = B->size[1] - 1;
    for (j = i; j >= 1; j--) {
      i1 = jpvt->data[j - 1];
      if (i1 != j) {
        for (b_i = 0; b_i < nb; b_i++) {
          wj = A->data[b_i + A->size[0] * (j - 1)];
          A->data[b_i + A->size[0] * (j - 1)] =
              A->data[b_i + A->size[0] * (i1 - 1)];
          A->data[b_i + A->size[0] * (i1 - 1)] = wj;
        }
      }
    }
  } else {
    i = b_B->size[0] * b_B->size[1];
    b_B->size[0] = A->size[1];
    b_B->size[1] = A->size[0];
    emxEnsureCapacity_real_T(b_B, i);
    m = A->size[0];
    for (i = 0; i < m; i++) {
      jBcol = A->size[1];
      for (i1 = 0; i1 < jBcol; i1++) {
        b_B->data[i1 + b_B->size[0] * i] = A->data[i + A->size[0] * i1];
      }
    }
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = B->size[1];
    b_A->size[1] = B->size[0];
    emxEnsureCapacity_real_T(b_A, i);
    m = B->size[0];
    for (i = 0; i < m; i++) {
      jBcol = B->size[1];
      for (i1 = 0; i1 < jBcol; i1++) {
        b_A->data[i1 + b_A->size[0] * i] = B->data[i + B->size[0] * i1];
      }
    }
    xgeqp3(b_A, tau, jpvt);
    n = rankFromQR(b_A);
    nb = b_B->size[1];
    i = Y->size[0] * Y->size[1];
    Y->size[0] = b_A->size[1];
    Y->size[1] = b_B->size[1];
    emxEnsureCapacity_real_T(Y, i);
    m = b_A->size[1] * b_B->size[1];
    for (i = 0; i < m; i++) {
      Y->data[i] = 0.0;
    }
    m = b_A->size[0];
    b_nb = b_B->size[1];
    jBcol = b_A->size[0];
    mn = b_A->size[1];
    if (jBcol < mn) {
      mn = jBcol;
    }
    for (j = 0; j < mn; j++) {
      if (tau->data[j] != 0.0) {
        for (k = 0; k < b_nb; k++) {
          wj = b_B->data[j + b_B->size[0] * k];
          i = j + 2;
          for (b_i = i; b_i <= m; b_i++) {
            wj += b_A->data[(b_i + b_A->size[0] * j) - 1] *
                  b_B->data[(b_i + b_B->size[0] * k) - 1];
          }
          wj *= tau->data[j];
          if (wj != 0.0) {
            b_B->data[j + b_B->size[0] * k] -= wj;
            for (b_i = i; b_i <= m; b_i++) {
              b_B->data[(b_i + b_B->size[0] * k) - 1] -=
                  b_A->data[(b_i + b_A->size[0] * j) - 1] * wj;
            }
          }
        }
      }
    }
    for (k = 0; k < nb; k++) {
      for (b_i = 0; b_i < n; b_i++) {
        Y->data[(jpvt->data[b_i] + Y->size[0] * k) - 1] =
            b_B->data[b_i + b_B->size[0] * k];
      }
      for (j = n; j >= 1; j--) {
        i = jpvt->data[j - 1];
        Y->data[(i + Y->size[0] * k) - 1] /=
            b_A->data[(j + b_A->size[0] * (j - 1)) - 1];
        for (b_i = 0; b_i <= j - 2; b_i++) {
          Y->data[(jpvt->data[b_i] + Y->size[0] * k) - 1] -=
              Y->data[(jpvt->data[j - 1] + Y->size[0] * k) - 1] *
              b_A->data[b_i + b_A->size[0] * (j - 1)];
        }
      }
    }
    i = A->size[0] * A->size[1];
    A->size[0] = Y->size[1];
    A->size[1] = Y->size[0];
    emxEnsureCapacity_real_T(A, i);
    m = Y->size[0];
    for (i = 0; i < m; i++) {
      jBcol = Y->size[1];
      for (i1 = 0; i1 < jBcol; i1++) {
        A->data[i1 + A->size[0] * i] = Y->data[i + Y->size[0] * i1];
      }
    }
  }
  emxFree_int32_T(&jpvt);
  emxFree_real_T(&tau);
  emxFree_real_T(&b_A);
  emxFree_real_T(&b_B);
  emxFree_real_T(&Y);
}

/* End of code generation (mrdivide_helper.c) */
