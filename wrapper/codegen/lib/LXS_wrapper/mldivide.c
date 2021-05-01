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
#include "LXS_wrapper_emxutil.h"
#include "LXS_wrapper_types.h"
#include "qrsolve.h"
#include "rt_nonfinite.h"
#include "xgeqp3.h"
#include "xzgetrf.h"

/* Function Definitions */
void mldivide(const emxArray_real_T *A, emxArray_real_T *B)
{
  emxArray_int32_T *jpvt;
  emxArray_real_T *b_A;
  emxArray_real_T *b_B;
  emxArray_real_T *tau;
  double wj;
  int LDA;
  int b_i;
  int i;
  int m;
  int mn;
  int rankA;
  emxInit_real_T(&b_A, 2);
  emxInit_real_T(&tau, 1);
  emxInit_int32_T(&jpvt, 2);
  emxInit_real_T(&b_B, 1);
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0)) {
    i = B->size[0];
    B->size[0] = A->size[1];
    emxEnsureCapacity_real_T(B, i);
    LDA = A->size[1];
    for (i = 0; i < LDA; i++) {
      B->data[i] = 0.0;
    }
  } else if (A->size[0] == A->size[1]) {
    LDA = A->size[0];
    mn = A->size[1];
    if (LDA < mn) {
      mn = LDA;
    }
    LDA = B->size[0];
    if (LDA < mn) {
      mn = LDA;
    }
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[0];
    b_A->size[1] = A->size[1];
    emxEnsureCapacity_real_T(b_A, i);
    LDA = A->size[0] * A->size[1];
    for (i = 0; i < LDA; i++) {
      b_A->data[i] = A->data[i];
    }
    xzgetrf(mn, mn, b_A, A->size[0], jpvt, &LDA);
    LDA = b_A->size[0];
    for (b_i = 0; b_i <= mn - 2; b_i++) {
      i = jpvt->data[b_i];
      if (i != b_i + 1) {
        wj = B->data[b_i];
        B->data[b_i] = B->data[i - 1];
        B->data[i - 1] = wj;
      }
    }
    for (rankA = 0; rankA < mn; rankA++) {
      m = LDA * rankA;
      if (B->data[rankA] != 0.0) {
        i = rankA + 2;
        for (b_i = i; b_i <= mn; b_i++) {
          B->data[b_i - 1] -= B->data[rankA] * b_A->data[(b_i + m) - 1];
        }
      }
    }
    for (rankA = mn; rankA >= 1; rankA--) {
      m = LDA * (rankA - 1);
      wj = B->data[rankA - 1];
      if (wj != 0.0) {
        B->data[rankA - 1] = wj / b_A->data[(rankA + m) - 1];
        for (b_i = 0; b_i <= rankA - 2; b_i++) {
          B->data[b_i] -= B->data[rankA - 1] * b_A->data[b_i + m];
        }
      }
    }
  } else {
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[0];
    b_A->size[1] = A->size[1];
    emxEnsureCapacity_real_T(b_A, i);
    LDA = A->size[0] * A->size[1];
    for (i = 0; i < LDA; i++) {
      b_A->data[i] = A->data[i];
    }
    xgeqp3(b_A, tau, jpvt);
    rankA = rankFromQR(b_A);
    i = b_B->size[0];
    b_B->size[0] = B->size[0];
    emxEnsureCapacity_real_T(b_B, i);
    LDA = B->size[0];
    for (i = 0; i < LDA; i++) {
      b_B->data[i] = B->data[i];
    }
    i = B->size[0];
    B->size[0] = b_A->size[1];
    emxEnsureCapacity_real_T(B, i);
    LDA = b_A->size[1];
    for (i = 0; i < LDA; i++) {
      B->data[i] = 0.0;
    }
    m = b_A->size[0];
    LDA = b_A->size[0];
    mn = b_A->size[1];
    if (LDA < mn) {
      mn = LDA;
    }
    for (LDA = 0; LDA < mn; LDA++) {
      if (tau->data[LDA] != 0.0) {
        wj = b_B->data[LDA];
        i = LDA + 2;
        for (b_i = i; b_i <= m; b_i++) {
          wj += b_A->data[(b_i + b_A->size[0] * LDA) - 1] * b_B->data[b_i - 1];
        }
        wj *= tau->data[LDA];
        if (wj != 0.0) {
          b_B->data[LDA] -= wj;
          for (b_i = i; b_i <= m; b_i++) {
            b_B->data[b_i - 1] -=
                b_A->data[(b_i + b_A->size[0] * LDA) - 1] * wj;
          }
        }
      }
    }
    for (b_i = 0; b_i < rankA; b_i++) {
      B->data[jpvt->data[b_i] - 1] = b_B->data[b_i];
    }
    for (LDA = rankA; LDA >= 1; LDA--) {
      i = jpvt->data[LDA - 1];
      B->data[i - 1] /= b_A->data[(LDA + b_A->size[0] * (LDA - 1)) - 1];
      for (b_i = 0; b_i <= LDA - 2; b_i++) {
        B->data[jpvt->data[b_i] - 1] -=
            B->data[jpvt->data[LDA - 1] - 1] *
            b_A->data[b_i + b_A->size[0] * (LDA - 1)];
      }
    }
  }
  emxFree_real_T(&b_B);
  emxFree_int32_T(&jpvt);
  emxFree_real_T(&tau);
  emxFree_real_T(&b_A);
}

/* End of code generation (mldivide.c) */
