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
#include "FSM_wrapper_emxutil.h"
#include "FSM_wrapper_types.h"
#include "qrsolve.h"
#include "rt_nonfinite.h"
#include "xzgetrf.h"
#include "mkl_cblas.h"

/* Function Definitions */
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
  int loop_ub;
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
    nb = A->size[0] * B->size[0];
    for (i = 0; i < nb; i++) {
      Y->data[i] = 0.0;
    }
  } else if (B->size[0] == B->size[1]) {
    i = Y->size[0] * Y->size[1];
    Y->size[0] = A->size[0];
    Y->size[1] = A->size[1];
    emxEnsureCapacity_real_T(Y, i);
    nb = A->size[0] * A->size[1];
    for (i = 0; i < nb; i++) {
      Y->data[i] = A->data[i];
    }
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = B->size[0];
    b_A->size[1] = B->size[1];
    emxEnsureCapacity_real_T(b_A, i);
    nb = B->size[0] * B->size[1];
    for (i = 0; i < nb; i++) {
      b_A->data[i] = B->data[i];
    }
    xzgetrf(B->size[1], B->size[1], b_A, B->size[1], ipiv, &nb);
    nb = Y->size[0];
    cblas_dtrsm(CblasColMajor, CblasRight, CblasUpper, CblasNoTrans,
                CblasNonUnit, (MKL_INT)Y->size[0], (MKL_INT)B->size[1], 1.0,
                &b_A->data[0], (MKL_INT)B->size[1], &Y->data[0],
                (MKL_INT)Y->size[0]);
    cblas_dtrsm(CblasColMajor, CblasRight, CblasLower, CblasNoTrans, CblasUnit,
                (MKL_INT)nb, (MKL_INT)B->size[1], 1.0, &b_A->data[0],
                (MKL_INT)B->size[1], &Y->data[0], (MKL_INT)nb);
    i = B->size[1] - 1;
    for (loop_ub = i; loop_ub >= 1; loop_ub--) {
      i1 = ipiv->data[loop_ub - 1];
      if (i1 != loop_ub) {
        for (b_i = 0; b_i < nb; b_i++) {
          temp = Y->data[b_i + Y->size[0] * (loop_ub - 1)];
          Y->data[b_i + Y->size[0] * (loop_ub - 1)] =
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
    nb = B->size[0];
    for (i = 0; i < nb; i++) {
      loop_ub = B->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_B->data[i1 + b_B->size[0] * i] = B->data[i + B->size[0] * i1];
      }
    }
    i = c_A->size[0] * c_A->size[1];
    c_A->size[0] = A->size[1];
    c_A->size[1] = A->size[0];
    emxEnsureCapacity_real_T(c_A, i);
    nb = A->size[0];
    for (i = 0; i < nb; i++) {
      loop_ub = A->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        c_A->data[i1 + c_A->size[0] * i] = A->data[i + A->size[0] * i1];
      }
    }
    qrsolve(b_B, c_A, b_A);
    i = Y->size[0] * Y->size[1];
    Y->size[0] = b_A->size[1];
    Y->size[1] = b_A->size[0];
    emxEnsureCapacity_real_T(Y, i);
    nb = b_A->size[0];
    for (i = 0; i < nb; i++) {
      loop_ub = b_A->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
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
