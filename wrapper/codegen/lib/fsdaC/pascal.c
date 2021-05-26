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
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "mtimes.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void pascal(double n, emxArray_real_T *P)
{
  emxArray_real_T *b_P;
  emxArray_real_T *c_P;
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
    emxInit_real_T(&b_P, 2);
    i = b_P->size[0] * b_P->size[1];
    b_P->size[0] = P->size[0];
    b_P->size[1] = P->size[1];
    emxEnsureCapacity_real_T(b_P, i);
    loop_ub = P->size[0] * P->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_P->data[i] = P->data[i];
    }
    emxInit_real_T(&c_P, 2);
    i = c_P->size[0] * c_P->size[1];
    c_P->size[0] = P->size[0];
    c_P->size[1] = P->size[1];
    emxEnsureCapacity_real_T(c_P, i);
    loop_ub = P->size[0] * P->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      c_P->data[i] = P->data[i];
    }
    d_mtimes(b_P, c_P, P);
    emxFree_real_T(&c_P);
    emxFree_real_T(&b_P);
  }
}

/* End of code generation (pascal.c) */
