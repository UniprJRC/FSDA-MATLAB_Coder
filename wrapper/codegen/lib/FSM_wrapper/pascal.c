/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pascal.c
 *
 * Code generation for function 'pascal'
 *
 */

/* Include files */
#include "pascal.h"
#include "FSM_wrapper_emxutil.h"
#include "FSM_wrapper_types.h"
#include "rt_nonfinite.h"
#include "mkl_cblas.h"

/* Function Definitions */
void pascal(double n, emxArray_real_T *P)
{
  emxArray_real_T *A;
  double plusminus1;
  int b_i;
  int i;
  int j;
  int loop_ub;
  int nn_tmp_tmp;
  nn_tmp_tmp = (int)n;
  if ((int)n < 2) {
    i = P->size[0] * P->size[1];
    P->size[0] = (int)n;
    P->size[1] = (int)n;
    emxEnsureCapacity_real_T(P, i);
    loop_ub = (int)n * (int)n;
    for (i = 0; i < loop_ub; i++) {
      P->data[i] = 1.0;
    }
  } else {
    i = P->size[0] * P->size[1];
    P->size[0] = (int)n;
    P->size[1] = (int)n;
    emxEnsureCapacity_real_T(P, i);
    loop_ub = (int)n * (int)n;
    for (i = 0; i < loop_ub; i++) {
      P->data[i] = 0.0;
    }
    for (i = 0; i < nn_tmp_tmp; i++) {
      P->data[i] = 1.0;
    }
    plusminus1 = -1.0;
    for (j = 2; j <= nn_tmp_tmp; j++) {
      P->data[(j + P->size[0] * (j - 1)) - 1] = plusminus1;
      plusminus1 = -plusminus1;
    }
    if ((int)n > 2) {
      i = (int)n - 1;
      for (j = 2; j <= i; j++) {
        loop_ub = j + 1;
        for (b_i = loop_ub; b_i <= nn_tmp_tmp; b_i++) {
          P->data[(b_i + P->size[0] * (j - 1)) - 1] =
              P->data[(b_i + P->size[0] * (j - 1)) - 2] -
              P->data[(b_i + P->size[0] * (j - 2)) - 2];
        }
      }
    }
    emxInit_real_T(&A, 2);
    i = A->size[0] * A->size[1];
    A->size[0] = P->size[0];
    A->size[1] = P->size[1];
    emxEnsureCapacity_real_T(A, i);
    loop_ub = P->size[0] * P->size[1];
    for (i = 0; i < loop_ub; i++) {
      A->data[i] = P->data[i];
    }
    if ((P->size[0] == 0) || (P->size[1] == 0)) {
      loop_ub = P->size[0];
      nn_tmp_tmp = P->size[0];
      i = P->size[0] * P->size[1];
      P->size[0] = loop_ub;
      P->size[1] = nn_tmp_tmp;
      emxEnsureCapacity_real_T(P, i);
      loop_ub *= nn_tmp_tmp;
      for (i = 0; i < loop_ub; i++) {
        P->data[i] = 0.0;
      }
    } else {
      i = P->size[0] * P->size[1];
      P->size[1] = P->size[0];
      emxEnsureCapacity_real_T(P, i);
      cblas_dgemm(CblasColMajor, CblasNoTrans, CblasTrans, (MKL_INT)A->size[0],
                  (MKL_INT)A->size[0], (MKL_INT)A->size[1], 1.0, &A->data[0],
                  (MKL_INT)A->size[0], &A->data[0], (MKL_INT)A->size[0], 0.0,
                  &P->data[0], (MKL_INT)A->size[0]);
    }
    emxFree_real_T(&A);
  }
}

/* End of code generation (pascal.c) */
