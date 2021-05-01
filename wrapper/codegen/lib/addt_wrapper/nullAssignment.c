/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * nullAssignment.c
 *
 * Code generation for function 'nullAssignment'
 *
 */

/* Include files */
#include "nullAssignment.h"
#include "addt_wrapper_emxutil.h"
#include "addt_wrapper_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void nullAssignment(emxArray_real_T *x, const emxArray_int32_T *idx)
{
  emxArray_boolean_T *b;
  emxArray_real_T *b_x;
  int b_i;
  int i;
  int j;
  int k;
  int ncols;
  int ncolx;
  int nrowx;
  nrowx = x->size[0] - 1;
  ncolx = x->size[1];
  if (idx->size[1] == 1) {
    ncols = x->size[1] - 1;
    i = idx->data[0];
    for (j = i; j <= ncols; j++) {
      for (b_i = 0; b_i <= nrowx; b_i++) {
        x->data[b_i + x->size[0] * (j - 1)] = x->data[b_i + x->size[0] * j];
      }
    }
  } else {
    emxInit_boolean_T(&b, 2);
    i = b->size[0] * b->size[1];
    b->size[0] = 1;
    b->size[1] = x->size[1];
    emxEnsureCapacity_boolean_T(b, i);
    j = x->size[1];
    for (i = 0; i < j; i++) {
      b->data[i] = false;
    }

    i = idx->size[1];
    for (k = 0; k < i; k++) {
      b->data[idx->data[k] - 1] = true;
    }

    ncols = 0;
    i = b->size[1];
    for (k = 0; k < i; k++) {
      ncols += b->data[k];
    }

    ncols = x->size[1] - ncols;
    j = 0;
    for (k = 0; k < ncolx; k++) {
      if ((k + 1 > b->size[1]) || (!b->data[k])) {
        for (b_i = 0; b_i <= nrowx; b_i++) {
          x->data[b_i + x->size[0] * j] = x->data[b_i + x->size[0] * k];
        }

        j++;
      }
    }

    emxFree_boolean_T(&b);
  }

  emxInit_real_T(&b_x, 2);
  if (1 > ncols) {
    j = 0;
  } else {
    j = ncols;
  }

  ncols = x->size[0] - 1;
  i = b_x->size[0] * b_x->size[1];
  b_x->size[0] = ncols + 1;
  b_x->size[1] = j;
  emxEnsureCapacity_real_T(b_x, i);
  for (i = 0; i < j; i++) {
    for (nrowx = 0; nrowx <= ncols; nrowx++) {
      b_x->data[nrowx + b_x->size[0] * i] = x->data[nrowx + x->size[0] * i];
    }
  }

  i = x->size[0] * x->size[1];
  x->size[0] = b_x->size[0];
  x->size[1] = b_x->size[1];
  emxEnsureCapacity_real_T(x, i);
  j = b_x->size[1];
  for (i = 0; i < j; i++) {
    ncols = b_x->size[0];
    for (nrowx = 0; nrowx < ncols; nrowx++) {
      x->data[nrowx + x->size[0] * i] = b_x->data[nrowx + b_x->size[0] * i];
    }
  }

  emxFree_real_T(&b_x);
}

/* End of code generation (nullAssignment.c) */
