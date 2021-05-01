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
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void pascal(double n, emxArray_real_T *P)
{
  emxArray_real_T *A;
  double plusminus1;
  int aoffset;
  int b_i;
  int coffset;
  int i;
  int inner;
  int j;
  int k;
  int mc;
  int nc;
  coffset = (int)n;
  if ((int)n < 2) {
    i = P->size[0] * P->size[1];
    P->size[0] = (int)n;
    P->size[1] = (int)n;
    emxEnsureCapacity_real_T(P, i);
    aoffset = (int)n * (int)n;
    for (i = 0; i < aoffset; i++) {
      P->data[i] = 1.0;
    }
  } else {
    i = P->size[0] * P->size[1];
    P->size[0] = (int)n;
    P->size[1] = (int)n;
    emxEnsureCapacity_real_T(P, i);
    aoffset = (int)n * (int)n;
    for (i = 0; i < aoffset; i++) {
      P->data[i] = 0.0;
    }
    for (i = 0; i < coffset; i++) {
      P->data[i] = 1.0;
    }
    plusminus1 = -1.0;
    for (j = 2; j <= coffset; j++) {
      P->data[(j + P->size[0] * (j - 1)) - 1] = plusminus1;
      plusminus1 = -plusminus1;
    }
    if ((int)n > 2) {
      i = (int)n - 1;
      for (j = 2; j <= i; j++) {
        aoffset = j + 1;
        for (b_i = aoffset; b_i <= coffset; b_i++) {
          P->data[(b_i + P->size[0] * (j - 1)) - 1] =
              P->data[(b_i + P->size[0] * (j - 1)) - 2] -
              P->data[(b_i + P->size[0] * (j - 2)) - 2];
        }
      }
    }
    emxInit_real_T(&A, 2);
    mc = P->size[0];
    inner = P->size[1];
    nc = P->size[0];
    i = A->size[0] * A->size[1];
    A->size[0] = P->size[0];
    A->size[1] = P->size[1];
    emxEnsureCapacity_real_T(A, i);
    aoffset = P->size[0] * P->size[1];
    for (i = 0; i < aoffset; i++) {
      A->data[i] = P->data[i];
    }
    i = P->size[0] * P->size[1];
    P->size[0] = mc;
    P->size[1] = nc;
    emxEnsureCapacity_real_T(P, i);
    for (j = 0; j < nc; j++) {
      coffset = j * mc;
      for (b_i = 0; b_i < mc; b_i++) {
        P->data[coffset + b_i] = 0.0;
      }
      for (k = 0; k < inner; k++) {
        aoffset = k * A->size[0];
        plusminus1 = A->data[k * A->size[0] + j];
        for (b_i = 0; b_i < mc; b_i++) {
          i = coffset + b_i;
          P->data[i] += A->data[aoffset + b_i] * plusminus1;
        }
      }
    }
    emxFree_real_T(&A);
  }
}

/* End of code generation (pascal.c) */
