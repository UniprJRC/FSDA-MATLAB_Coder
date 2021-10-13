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
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void b_nullAssignment(emxArray_real_T *x, const emxArray_boolean_T *idx)
{
  double *x_data;
  int i;
  int k;
  int k0;
  int nxin;
  int nxout;
  const bool *idx_data;
  idx_data = idx->data;
  x_data = x->data;
  nxin = x->size[0];
  k0 = 0;
  i = idx->size[0];
  for (k = 0; k < i; k++) {
    k0 += idx_data[k];
  }
  nxout = x->size[0] - k0;
  k0 = -1;
  for (k = 0; k < nxin; k++) {
    if ((k + 1 > idx->size[0]) || (!idx_data[k])) {
      k0++;
      x_data[k0] = x_data[k];
    }
  }
  i = x->size[0];
  if (1 > nxout) {
    x->size[0] = 0;
  } else {
    x->size[0] = nxout;
  }
  emxEnsureCapacity_real_T(x, i);
}

void c_nullAssignment(emxArray_real_T *x, const emxArray_boolean_T *idx)
{
  double *x_data;
  int i;
  int k;
  int k0;
  int nxin;
  int nxout;
  const bool *idx_data;
  idx_data = idx->data;
  x_data = x->data;
  nxin = x->size[1];
  k0 = 0;
  i = idx->size[1];
  for (k = 0; k < i; k++) {
    k0 += idx_data[k];
  }
  nxout = x->size[1] - k0;
  k0 = -1;
  for (k = 0; k < nxin; k++) {
    if ((k + 1 > idx->size[1]) || (!idx_data[k])) {
      k0++;
      x_data[k0] = x_data[k];
    }
  }
  i = x->size[0] * x->size[1];
  if (1 > nxout) {
    x->size[1] = 0;
  } else {
    x->size[1] = nxout;
  }
  emxEnsureCapacity_real_T(x, i);
}

void nullAssignment(emxArray_real_T *x, const emxArray_int32_T *idx)
{
  emxArray_boolean_T *b;
  double *x_data;
  const int *idx_data;
  int b_i;
  int i;
  int j;
  int k;
  int ncols;
  int ncolx;
  int nrowx;
  bool *b_data;
  idx_data = idx->data;
  x_data = x->data;
  nrowx = x->size[0] - 1;
  ncolx = x->size[1];
  if (idx->size[1] == 1) {
    ncols = x->size[1] - 1;
    i = idx_data[0];
    for (j = i; j <= ncols; j++) {
      for (b_i = 0; b_i <= nrowx; b_i++) {
        x_data[b_i + x->size[0] * (j - 1)] = x_data[b_i + x->size[0] * j];
      }
    }
  } else {
    emxInit_boolean_T(&b, 2);
    i = b->size[0] * b->size[1];
    b->size[0] = 1;
    b->size[1] = x->size[1];
    emxEnsureCapacity_boolean_T(b, i);
    b_data = b->data;
    j = x->size[1];
    for (i = 0; i < j; i++) {
      b_data[i] = false;
    }
    i = idx->size[1];
    for (k = 0; k < i; k++) {
      b_data[idx_data[k] - 1] = true;
    }
    ncols = 0;
    i = b->size[1];
    for (k = 0; k < i; k++) {
      ncols += b_data[k];
    }
    ncols = x->size[1] - ncols;
    j = 0;
    for (k = 0; k < ncolx; k++) {
      if ((k + 1 > b->size[1]) || (!b_data[k])) {
        for (b_i = 0; b_i <= nrowx; b_i++) {
          x_data[b_i + x->size[0] * j] = x_data[b_i + x->size[0] * k];
        }
        j++;
      }
    }
    emxFree_boolean_T(&b);
  }
  if (1 > ncols) {
    j = 0;
  } else {
    j = ncols;
  }
  ncols = x->size[0] - 1;
  nrowx = x->size[0];
  for (i = 0; i < j; i++) {
    for (ncolx = 0; ncolx < nrowx; ncolx++) {
      x_data[ncolx + (ncols + 1) * i] = x_data[ncolx + x->size[0] * i];
    }
  }
  i = x->size[0] * x->size[1];
  x->size[0] = ncols + 1;
  x->size[1] = j;
  emxEnsureCapacity_real_T(x, i);
}

/* End of code generation (nullAssignment.c) */
