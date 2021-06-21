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
void b_mrdiv(const emxArray_real_T *A, const double B_data[],
             const int B_size[2], emxArray_real_T *Y)
{
  emxArray_int32_T *jpvt;
  emxArray_real_T *b_A;
  emxArray_real_T *b_Y;
  emxArray_real_T *tau;
  double B;
  int j;
  int loop_ub;
  int nb;
  int rankA;
  emxInit_real_T(&b_Y, 2);
  emxInit_real_T(&b_A, 2);
  emxInit_real_T(&tau, 1);
  emxInit_int32_T(&jpvt, 2);
  if ((A->size[0] == 0) || (B_size[0] == 0)) {
    j = Y->size[0] * Y->size[1];
    Y->size[0] = A->size[0];
    Y->size[1] = B_size[0];
    emxEnsureCapacity_real_T(Y, j);
    loop_ub = A->size[0] * B_size[0];
    for (j = 0; j < loop_ub; j++) {
      Y->data[j] = 0.0;
    }
  } else if (B_size[0] == 1) {
    B = B_data[0];
    loop_ub = A->size[0];
    j = tau->size[0];
    tau->size[0] = A->size[0];
    emxEnsureCapacity_real_T(tau, j);
    for (j = 0; j < loop_ub; j++) {
      tau->data[j] = A->data[j] / B;
    }
    j = Y->size[0] * Y->size[1];
    Y->size[0] = tau->size[0];
    Y->size[1] = 1;
    emxEnsureCapacity_real_T(Y, j);
    loop_ub = tau->size[0];
    for (j = 0; j < loop_ub; j++) {
      Y->data[j] = tau->data[j];
    }
  } else {
    j = b_A->size[0] * b_A->size[1];
    b_A->size[0] = 1;
    b_A->size[1] = 2;
    emxEnsureCapacity_real_T(b_A, j);
    for (j = 0; j < 2; j++) {
      b_A->data[b_A->size[0] * j] = B_data[j];
    }
    xgeqp3(b_A, tau, jpvt);
    rankA = rankFromQR(b_A);
    nb = A->size[0];
    j = b_Y->size[0] * b_Y->size[1];
    b_Y->size[0] = b_A->size[1];
    b_Y->size[1] = A->size[0];
    emxEnsureCapacity_real_T(b_Y, j);
    loop_ub = A->size[0] * b_A->size[1];
    for (j = 0; j < loop_ub; j++) {
      b_Y->data[j] = 0.0;
    }
    for (loop_ub = 0; loop_ub < nb; loop_ub++) {
      if (0 <= rankA - 1) {
        b_Y->data[(jpvt->data[0] + b_Y->size[0] * loop_ub) - 1] =
            A->data[loop_ub];
      }
      for (j = rankA; j >= 1; j--) {
        b_Y->data[(jpvt->data[0] + b_Y->size[0] * loop_ub) - 1] /= b_A->data[0];
      }
    }
    j = Y->size[0] * Y->size[1];
    Y->size[0] = b_Y->size[1];
    Y->size[1] = b_Y->size[0];
    emxEnsureCapacity_real_T(Y, j);
    loop_ub = b_Y->size[0];
    for (j = 0; j < loop_ub; j++) {
      rankA = b_Y->size[1];
      for (nb = 0; nb < rankA; nb++) {
        Y->data[nb + Y->size[0] * j] = b_Y->data[j + b_Y->size[0] * nb];
      }
    }
  }
  emxFree_int32_T(&jpvt);
  emxFree_real_T(&tau);
  emxFree_real_T(&b_A);
  emxFree_real_T(&b_Y);
}

void mrdiv(const emxArray_real_T *A, const emxArray_real_T *B,
           emxArray_real_T *Y)
{
  emxArray_int32_T *ipiv;
  emxArray_real_T *b_A;
  emxArray_real_T *b_B;
  emxArray_real_T *c_A;
  double temp;
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
    jBcol = A->size[0] * B->size[0];
    for (i = 0; i < jBcol; i++) {
      Y->data[i] = 0.0;
    }
  } else if (B->size[0] == B->size[1]) {
    i = Y->size[0] * Y->size[1];
    Y->size[0] = A->size[0];
    Y->size[1] = A->size[1];
    emxEnsureCapacity_real_T(Y, i);
    jBcol = A->size[0] * A->size[1];
    for (i = 0; i < jBcol; i++) {
      Y->data[i] = A->data[i];
    }
    n = B->size[1];
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = B->size[0];
    b_A->size[1] = B->size[1];
    emxEnsureCapacity_real_T(b_A, i);
    jBcol = B->size[0] * B->size[1];
    for (i = 0; i < jBcol; i++) {
      b_A->data[i] = B->data[i];
    }
    xzgetrf(B->size[1], B->size[1], b_A, B->size[1], ipiv, &nb);
    nb = A->size[0];
    for (j = 0; j < n; j++) {
      jBcol = nb * j - 1;
      jAcol = n * j;
      for (k = 0; k < j; k++) {
        kBcol = nb * k;
        i = k + jAcol;
        if (b_A->data[i] != 0.0) {
          for (b_i = 0; b_i < nb; b_i++) {
            i1 = (b_i + jBcol) + 1;
            Y->data[i1] -= b_A->data[i] * Y->data[b_i + kBcol];
          }
        }
      }
      temp = 1.0 / b_A->data[j + jAcol];
      for (b_i = 0; b_i < nb; b_i++) {
        i = (b_i + jBcol) + 1;
        Y->data[i] *= temp;
      }
    }
    for (j = n; j >= 1; j--) {
      jBcol = nb * (j - 1) - 1;
      jAcol = n * (j - 1) - 1;
      i = j + 1;
      for (k = i; k <= n; k++) {
        kBcol = nb * (k - 1);
        i1 = k + jAcol;
        if (b_A->data[i1] != 0.0) {
          for (b_i = 0; b_i < nb; b_i++) {
            i2 = (b_i + jBcol) + 1;
            Y->data[i2] -= b_A->data[i1] * Y->data[b_i + kBcol];
          }
        }
      }
    }
    i = B->size[1] - 1;
    for (j = i; j >= 1; j--) {
      i1 = ipiv->data[j - 1];
      if (i1 != j) {
        for (b_i = 0; b_i < nb; b_i++) {
          temp = Y->data[b_i + Y->size[0] * (j - 1)];
          Y->data[b_i + Y->size[0] * (j - 1)] =
              Y->data[b_i + Y->size[0] * (i1 - 1)];
          Y->data[b_i + Y->size[0] * (i1 - 1)] = temp;
        }
      }
    }
  } else {
    i = b_B->size[0] * b_B->size[1];
    b_B->size[0] = B->size[1];
    b_B->size[1] = B->size[0];
    emxEnsureCapacity_real_T(b_B, i);
    jBcol = B->size[0];
    for (i = 0; i < jBcol; i++) {
      nb = B->size[1];
      for (i1 = 0; i1 < nb; i1++) {
        b_B->data[i1 + b_B->size[0] * i] = B->data[i + B->size[0] * i1];
      }
    }
    i = c_A->size[0] * c_A->size[1];
    c_A->size[0] = A->size[1];
    c_A->size[1] = A->size[0];
    emxEnsureCapacity_real_T(c_A, i);
    jBcol = A->size[0];
    for (i = 0; i < jBcol; i++) {
      nb = A->size[1];
      for (i1 = 0; i1 < nb; i1++) {
        c_A->data[i1 + c_A->size[0] * i] = A->data[i + A->size[0] * i1];
      }
    }
    qrsolve(b_B, c_A, b_A);
    i = Y->size[0] * Y->size[1];
    Y->size[0] = b_A->size[1];
    Y->size[1] = b_A->size[0];
    emxEnsureCapacity_real_T(Y, i);
    jBcol = b_A->size[0];
    for (i = 0; i < jBcol; i++) {
      nb = b_A->size[1];
      for (i1 = 0; i1 < nb; i1++) {
        Y->data[i1 + Y->size[0] * i] = b_A->data[i + b_A->size[0] * i1];
      }
    }
  }
  emxFree_real_T(&c_A);
  emxFree_real_T(&b_B);
  emxFree_int32_T(&ipiv);
  emxFree_real_T(&b_A);
}

/* End of code generation (mrdivide_helper.c) */
