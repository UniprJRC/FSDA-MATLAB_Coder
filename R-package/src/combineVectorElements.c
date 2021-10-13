/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * combineVectorElements.c
 *
 * Code generation for function 'combineVectorElements'
 *
 */

/* Include files */
#include "combineVectorElements.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void b_combineVectorElements(const emxArray_boolean_T *x, emxArray_int32_T *y)
{
  int i;
  int k;
  int npages;
  int vlen;
  int xpageoffset;
  int *y_data;
  const bool *x_data;
  x_data = x->data;
  vlen = x->size[0];
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = x->size[1];
    emxEnsureCapacity_int32_T(y, i);
    y_data = y->data;
    xpageoffset = x->size[1];
    for (i = 0; i < xpageoffset; i++) {
      y_data[i] = 0;
    }
  } else {
    npages = x->size[1];
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = x->size[1];
    emxEnsureCapacity_int32_T(y, i);
    y_data = y->data;
    for (i = 0; i < npages; i++) {
      xpageoffset = i * x->size[0];
      y_data[i] = x_data[xpageoffset];
      for (k = 2; k <= vlen; k++) {
        y_data[i] += x_data[(xpageoffset + k) - 1];
      }
    }
  }
}

void c_combineVectorElements(const emxArray_boolean_T *x, emxArray_int32_T *y)
{
  int j;
  int k;
  int vlen;
  int vstride;
  int xoffset;
  int *y_data;
  const bool *x_data;
  x_data = x->data;
  vlen = x->size[1];
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    j = y->size[0];
    y->size[0] = x->size[0];
    emxEnsureCapacity_int32_T(y, j);
    y_data = y->data;
    xoffset = x->size[0];
    for (j = 0; j < xoffset; j++) {
      y_data[j] = 0;
    }
  } else {
    vstride = x->size[0];
    j = y->size[0];
    y->size[0] = x->size[0];
    emxEnsureCapacity_int32_T(y, j);
    y_data = y->data;
    for (j = 0; j < vstride; j++) {
      y_data[j] = x_data[j];
    }
    for (k = 2; k <= vlen; k++) {
      xoffset = (k - 1) * vstride;
      for (j = 0; j < vstride; j++) {
        y_data[j] += x_data[xoffset + j];
      }
    }
  }
}

void combineVectorElements(const emxArray_real_T *x, emxArray_real_T *y)
{
  const double *x_data;
  double bsum;
  double *y_data;
  int firstBlockLength;
  int hi;
  int ib;
  int k;
  int lastBlockLength;
  int nblocks;
  int npages;
  int xblockoffset;
  int xi;
  int xpageoffset;
  x_data = x->data;
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    nblocks = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(y, nblocks);
    y_data = y->data;
    firstBlockLength = x->size[1];
    for (nblocks = 0; nblocks < firstBlockLength; nblocks++) {
      y_data[nblocks] = 0.0;
    }
  } else {
    npages = x->size[1];
    nblocks = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(y, nblocks);
    y_data = y->data;
    if (x->size[0] <= 1024) {
      firstBlockLength = x->size[0];
      lastBlockLength = 0;
      nblocks = 1;
    } else {
      firstBlockLength = 1024;
      nblocks = x->size[0] / 1024;
      lastBlockLength = x->size[0] - (nblocks << 10);
      if (lastBlockLength > 0) {
        nblocks++;
      } else {
        lastBlockLength = 1024;
      }
    }
    for (xi = 0; xi < npages; xi++) {
      xpageoffset = xi * x->size[0];
      y_data[xi] = x_data[xpageoffset];
      for (k = 2; k <= firstBlockLength; k++) {
        y_data[xi] += x_data[(xpageoffset + k) - 1];
      }
      for (ib = 2; ib <= nblocks; ib++) {
        xblockoffset = xpageoffset + ((ib - 1) << 10);
        bsum = x_data[xblockoffset];
        if (ib == nblocks) {
          hi = lastBlockLength;
        } else {
          hi = 1024;
        }
        for (k = 2; k <= hi; k++) {
          bsum += x_data[(xblockoffset + k) - 1];
        }
        y_data[xi] += bsum;
      }
    }
  }
}

/* End of code generation (combineVectorElements.c) */
