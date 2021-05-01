/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mtimes.c
 *
 * Code generation for function 'mtimes'
 *
 */

/* Include files */
#include "mtimes.h"
#include "FSRbsb_wrapper_emxutil.h"
#include "FSRbsb_wrapper_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void mtimes(const emxArray_real_T *A, const emxArray_real_T *B,
            emxArray_real_T *C)
{
  int aoffset;
  int i;
  int inner;
  int k;
  int mc;
  mc = A->size[0] - 1;
  inner = A->size[1];
  aoffset = C->size[0];
  C->size[0] = A->size[0];
  emxEnsureCapacity_real_T(C, aoffset);
  for (i = 0; i <= mc; i++) {
    C->data[i] = 0.0;
  }
  for (k = 0; k < inner; k++) {
    aoffset = k * A->size[0];
    for (i = 0; i <= mc; i++) {
      C->data[i] += A->data[aoffset + i] * B->data[k];
    }
  }
}

/* End of code generation (mtimes.c) */
