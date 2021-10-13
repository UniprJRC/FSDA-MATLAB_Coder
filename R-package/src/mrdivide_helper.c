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
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "qrsolve.h"
#include "rt_nonfinite.h"
#include "xgeqp3.h"
#include "xzgetrf.h"
#include <string.h>

/* Function Definitions */
void b_mrdiv(const emxArray_real_T *A, const emxArray_real_T *B,
             emxArray_real_T *Y)
{
  emxArray_int32_T *jpvt;
  emxArray_real_T *b_A;
  emxArray_real_T *b_B;
  emxArray_real_T *b_Y;
  emxArray_real_T *tau;
  const double *A_data;
  const double *B_data;
  double wj;
  double *Y_data;
  double *b_B_data;
  double *b_Y_data;
  double *tau_data;
  int i;
  int j;
  int m;
  int mn;
  int nb;
  int rankA;
  int u0;
  int *jpvt_data;
  B_data = B->data;
  A_data = A->data;
  emxInit_real_T(&b_Y, 2);
  emxInit_real_T(&b_B, 2);
  emxInit_real_T(&b_A, 2);
  emxInit_real_T(&tau, 1);
  emxInit_int32_T(&jpvt, 2);
  if ((A->size[0] == 0) || (B->size[0] == 0)) {
    i = Y->size[0] * Y->size[1];
    Y->size[0] = A->size[0];
    Y->size[1] = B->size[0];
    emxEnsureCapacity_real_T(Y, i);
    Y_data = Y->data;
    m = A->size[0] * B->size[0];
    for (i = 0; i < m; i++) {
      Y_data[i] = 0.0;
    }
  } else if (B->size[0] == 1) {
    wj = B_data[0];
    m = A->size[0];
    i = tau->size[0];
    tau->size[0] = A->size[0];
    emxEnsureCapacity_real_T(tau, i);
    tau_data = tau->data;
    for (i = 0; i < m; i++) {
      tau_data[i] = A_data[i] / wj;
    }
    i = Y->size[0] * Y->size[1];
    Y->size[0] = tau->size[0];
    Y->size[1] = 1;
    emxEnsureCapacity_real_T(Y, i);
    Y_data = Y->data;
    m = tau->size[0];
    for (i = 0; i < m; i++) {
      Y_data[i] = tau_data[i];
    }
  } else {
    i = b_B->size[0] * b_B->size[1];
    b_B->size[0] = 1;
    b_B->size[1] = A->size[0];
    emxEnsureCapacity_real_T(b_B, i);
    b_B_data = b_B->data;
    m = A->size[0];
    for (i = 0; i < m; i++) {
      b_B_data[i] = A_data[i];
    }
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = 1;
    b_A->size[1] = B->size[0];
    emxEnsureCapacity_real_T(b_A, i);
    Y_data = b_A->data;
    m = B->size[0];
    for (i = 0; i < m; i++) {
      Y_data[b_A->size[0] * i] = B_data[i];
    }
    xgeqp3(b_A, tau, jpvt);
    jpvt_data = jpvt->data;
    tau_data = tau->data;
    Y_data = b_A->data;
    rankA = rankFromQR(b_A);
    nb = A->size[0];
    i = b_Y->size[0] * b_Y->size[1];
    b_Y->size[0] = b_A->size[1];
    b_Y->size[1] = A->size[0];
    emxEnsureCapacity_real_T(b_Y, i);
    b_Y_data = b_Y->data;
    m = A->size[0] * b_A->size[1];
    for (i = 0; i < m; i++) {
      b_Y_data[i] = 0.0;
    }
    m = b_A->size[0];
    u0 = b_A->size[0];
    mn = b_A->size[1];
    if (u0 <= mn) {
      mn = u0;
    }
    for (j = 0; j < mn; j++) {
      if (tau_data[j] != 0.0) {
        wj = b_B_data[0];
        for (i = 2; i <= m; i++) {
          wj += Y_data[i - 1] * b_B_data[i - 1];
        }
        wj *= tau_data[j];
        if (wj != 0.0) {
          b_B_data[0] -= wj;
          for (i = 2; i <= m; i++) {
            b_B_data[i - 1] -= Y_data[i - 1] * wj;
          }
        }
      }
    }
    for (u0 = 0; u0 < nb; u0++) {
      if (0 <= rankA - 1) {
        b_Y_data[(jpvt_data[0] + b_Y->size[0] * u0) - 1] = b_B_data[u0];
      }
      for (j = rankA; j >= 1; j--) {
        i = jpvt_data[j - 1];
        b_Y_data[(i + b_Y->size[0] * u0) - 1] /=
            Y_data[(j + b_A->size[0] * (j - 1)) - 1];
        for (i = 0; i <= j - 2; i++) {
          b_Y_data[(jpvt_data[i] + b_Y->size[0] * u0) - 1] -=
              b_Y_data[(jpvt_data[j - 1] + b_Y->size[0] * u0) - 1] *
              Y_data[i + b_A->size[0] * (j - 1)];
        }
      }
    }
    i = Y->size[0] * Y->size[1];
    Y->size[0] = b_Y->size[1];
    Y->size[1] = b_Y->size[0];
    emxEnsureCapacity_real_T(Y, i);
    Y_data = Y->data;
    m = b_Y->size[0];
    for (i = 0; i < m; i++) {
      u0 = b_Y->size[1];
      for (mn = 0; mn < u0; mn++) {
        Y_data[mn + Y->size[0] * i] = b_Y_data[i + b_Y->size[0] * mn];
      }
    }
  }
  emxFree_int32_T(&jpvt);
  emxFree_real_T(&tau);
  emxFree_real_T(&b_A);
  emxFree_real_T(&b_B);
  emxFree_real_T(&b_Y);
}

void mrdiv(const emxArray_real_T *A, const emxArray_real_T *B,
           emxArray_real_T *Y)
{
  emxArray_int32_T *ipiv;
  emxArray_real_T *b_A;
  emxArray_real_T *b_B;
  emxArray_real_T *c_A;
  const double *A_data;
  const double *B_data;
  double temp;
  double *Y_data;
  double *b_B_data;
  int b_i;
  int i;
  int i1;
  int i2;
  int j;
  int jAcol;
  int jBcol;
  int k;
  int kBcol;
  int n;
  int nb;
  int *ipiv_data;
  B_data = B->data;
  A_data = A->data;
  emxInit_real_T(&b_A, 2);
  emxInit_int32_T(&ipiv, 2);
  emxInit_real_T(&b_B, 2);
  emxInit_real_T(&c_A, 2);
  if ((A->size[0] == 0) || (A->size[1] == 0) ||
      ((B->size[0] == 0) || (B->size[1] == 0))) {
    i = Y->size[0] * Y->size[1];
    Y->size[0] = A->size[0];
    Y->size[1] = B->size[0];
    emxEnsureCapacity_real_T(Y, i);
    Y_data = Y->data;
    jBcol = A->size[0] * B->size[0];
    for (i = 0; i < jBcol; i++) {
      Y_data[i] = 0.0;
    }
  } else if (B->size[0] == B->size[1]) {
    i = Y->size[0] * Y->size[1];
    Y->size[0] = A->size[0];
    Y->size[1] = A->size[1];
    emxEnsureCapacity_real_T(Y, i);
    Y_data = Y->data;
    jBcol = A->size[0] * A->size[1];
    for (i = 0; i < jBcol; i++) {
      Y_data[i] = A_data[i];
    }
    n = B->size[1];
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = B->size[0];
    b_A->size[1] = B->size[1];
    emxEnsureCapacity_real_T(b_A, i);
    b_B_data = b_A->data;
    jBcol = B->size[0] * B->size[1];
    for (i = 0; i < jBcol; i++) {
      b_B_data[i] = B_data[i];
    }
    xzgetrf(B->size[1], B->size[1], b_A, B->size[1], ipiv, &nb);
    ipiv_data = ipiv->data;
    b_B_data = b_A->data;
    nb = A->size[0];
    for (j = 0; j < n; j++) {
      jBcol = nb * j - 1;
      jAcol = n * j;
      for (k = 0; k < j; k++) {
        kBcol = nb * k;
        i = k + jAcol;
        if (b_B_data[i] != 0.0) {
          for (b_i = 0; b_i < nb; b_i++) {
            i1 = (b_i + jBcol) + 1;
            Y_data[i1] -= b_B_data[i] * Y_data[b_i + kBcol];
          }
        }
      }
      temp = 1.0 / b_B_data[j + jAcol];
      for (b_i = 0; b_i < nb; b_i++) {
        i = (b_i + jBcol) + 1;
        Y_data[i] *= temp;
      }
    }
    for (j = n; j >= 1; j--) {
      jBcol = nb * (j - 1) - 1;
      jAcol = n * (j - 1) - 1;
      i = j + 1;
      for (k = i; k <= n; k++) {
        kBcol = nb * (k - 1);
        i1 = k + jAcol;
        if (b_B_data[i1] != 0.0) {
          for (b_i = 0; b_i < nb; b_i++) {
            i2 = (b_i + jBcol) + 1;
            Y_data[i2] -= b_B_data[i1] * Y_data[b_i + kBcol];
          }
        }
      }
    }
    i = B->size[1] - 1;
    for (j = i; j >= 1; j--) {
      i1 = ipiv_data[j - 1];
      if (i1 != j) {
        for (b_i = 0; b_i < nb; b_i++) {
          temp = Y_data[b_i + Y->size[0] * (j - 1)];
          Y_data[b_i + Y->size[0] * (j - 1)] =
              Y_data[b_i + Y->size[0] * (i1 - 1)];
          Y_data[b_i + Y->size[0] * (i1 - 1)] = temp;
        }
      }
    }
  } else {
    i = b_B->size[0] * b_B->size[1];
    b_B->size[0] = B->size[1];
    b_B->size[1] = B->size[0];
    emxEnsureCapacity_real_T(b_B, i);
    b_B_data = b_B->data;
    jBcol = B->size[0];
    for (i = 0; i < jBcol; i++) {
      nb = B->size[1];
      for (i1 = 0; i1 < nb; i1++) {
        b_B_data[i1 + b_B->size[0] * i] = B_data[i + B->size[0] * i1];
      }
    }
    i = c_A->size[0] * c_A->size[1];
    c_A->size[0] = A->size[1];
    c_A->size[1] = A->size[0];
    emxEnsureCapacity_real_T(c_A, i);
    b_B_data = c_A->data;
    jBcol = A->size[0];
    for (i = 0; i < jBcol; i++) {
      nb = A->size[1];
      for (i1 = 0; i1 < nb; i1++) {
        b_B_data[i1 + c_A->size[0] * i] = A_data[i + A->size[0] * i1];
      }
    }
    qrsolve(b_B, c_A, b_A);
    b_B_data = b_A->data;
    i = Y->size[0] * Y->size[1];
    Y->size[0] = b_A->size[1];
    Y->size[1] = b_A->size[0];
    emxEnsureCapacity_real_T(Y, i);
    Y_data = Y->data;
    jBcol = b_A->size[0];
    for (i = 0; i < jBcol; i++) {
      nb = b_A->size[1];
      for (i1 = 0; i1 < nb; i1++) {
        Y_data[i1 + Y->size[0] * i] = b_B_data[i + b_A->size[0] * i1];
      }
    }
  }
  emxFree_real_T(&c_A);
  emxFree_real_T(&b_B);
  emxFree_int32_T(&ipiv);
  emxFree_real_T(&b_A);
}

/* End of code generation (mrdivide_helper.c) */
