/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: mtimes.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "mtimes.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : const emxArray_real_T *A
 *                const emxArray_real_T *B
 *                emxArray_real_T *C
 * Return Type  : void
 */
void b_mtimes(const emxArray_real_T *A, const emxArray_real_T *B,
              emxArray_real_T *C)
{
  double bkj;
  int aoffset;
  int b_i;
  int boffset;
  int coffset;
  int i;
  int inner;
  int j;
  int k;
  int mc;
  int nc;
  mc = A->size[0];
  inner = A->size[1];
  nc = B->size[1];
  i = C->size[0] * C->size[1];
  C->size[0] = A->size[0];
  C->size[1] = B->size[1];
  emxEnsureCapacity_real_T(C, i);
  for (j = 0; j < nc; j++) {
    coffset = j * mc;
    boffset = j * B->size[0];
    for (b_i = 0; b_i < mc; b_i++) {
      C->data[coffset + b_i] = 0.0;
    }
    for (k = 0; k < inner; k++) {
      aoffset = k * A->size[0];
      bkj = B->data[boffset + k];
      for (b_i = 0; b_i < mc; b_i++) {
        i = coffset + b_i;
        C->data[i] += A->data[aoffset + b_i] * bkj;
      }
    }
  }
}

/*
 * Arguments    : const emxArray_real_T *A
 *                const emxArray_real_T *B
 *                emxArray_real_T *C
 * Return Type  : void
 */
void c_mtimes(const emxArray_real_T *A, const emxArray_real_T *B,
              emxArray_real_T *C)
{
  double bkj;
  int b_i;
  int boffset;
  int coffset;
  int i;
  int inner;
  int j;
  int k;
  int mc;
  int nc;
  mc = A->size[1];
  inner = A->size[0];
  nc = B->size[1];
  i = C->size[0] * C->size[1];
  C->size[0] = A->size[1];
  C->size[1] = B->size[1];
  emxEnsureCapacity_real_T(C, i);
  for (j = 0; j < nc; j++) {
    coffset = j * mc;
    boffset = j * B->size[0];
    for (b_i = 0; b_i < mc; b_i++) {
      C->data[coffset + b_i] = 0.0;
    }
    for (k = 0; k < inner; k++) {
      bkj = B->data[boffset + k];
      for (b_i = 0; b_i < mc; b_i++) {
        i = coffset + b_i;
        C->data[i] += A->data[b_i * A->size[0] + k] * bkj;
      }
    }
  }
}

/*
 * Arguments    : const emxArray_real_T *A
 *                const emxArray_real_T *B
 *                emxArray_real_T *C
 * Return Type  : void
 */
void d_mtimes(const emxArray_real_T *A, const emxArray_real_T *B,
              emxArray_real_T *C)
{
  double bkj;
  int aoffset;
  int b_i;
  int coffset;
  int i;
  int inner;
  int j;
  int k;
  int mc;
  int nc;
  mc = A->size[0];
  inner = A->size[1];
  nc = B->size[0];
  i = C->size[0] * C->size[1];
  C->size[0] = A->size[0];
  C->size[1] = B->size[0];
  emxEnsureCapacity_real_T(C, i);
  for (j = 0; j < nc; j++) {
    coffset = j * mc;
    for (b_i = 0; b_i < mc; b_i++) {
      C->data[coffset + b_i] = 0.0;
    }
    for (k = 0; k < inner; k++) {
      aoffset = k * A->size[0];
      bkj = B->data[k * B->size[0] + j];
      for (b_i = 0; b_i < mc; b_i++) {
        i = coffset + b_i;
        C->data[i] += A->data[aoffset + b_i] * bkj;
      }
    }
  }
}

/*
 * Arguments    : const emxArray_real_T *A
 *                const emxArray_real_T *B
 *                emxArray_real_T *C
 * Return Type  : void
 */
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

/*
 * File trailer for mtimes.c
 *
 * [EOF]
 */
