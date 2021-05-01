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
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void b_combineVectorElements(const emxArray_boolean_T *x, emxArray_int32_T *y)
{
  int i;
  int k;
  int npages;
  int vlen;
  int xpageoffset;
  vlen = x->size[0];
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = x->size[1];
    emxEnsureCapacity_int32_T(y, i);
    xpageoffset = x->size[1];
    for (i = 0; i < xpageoffset; i++) {
      y->data[i] = 0;
    }
  } else {
    npages = x->size[1];
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = x->size[1];
    emxEnsureCapacity_int32_T(y, i);
    for (i = 0; i < npages; i++) {
      xpageoffset = i * x->size[0];
      y->data[i] = x->data[xpageoffset];
      for (k = 2; k <= vlen; k++) {
        y->data[i] += x->data[(xpageoffset + k) - 1];
      }
    }
  }
}

void c_combineVectorElements(const emxArray_boolean_T *x, int y_data[],
                             int y_size[2])
{
  int k;
  int vlen;
  vlen = x->size[0];
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    y_size[0] = 1;
    y_size[1] = x->size[1];
    vlen = x->size[1];
    if (0 <= vlen - 1) {
      y_data[0] = 0;
    }
  } else {
    y_size[0] = 1;
    y_size[1] = 1;
    y_data[0] = x->data[0];
    for (k = 2; k <= vlen; k++) {
      y_data[0] += x->data[k - 1];
    }
  }
}

void combineVectorElements(const emxArray_real_T *x, emxArray_real_T *y)
{
  double bsum;
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
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    nblocks = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(y, nblocks);
    firstBlockLength = x->size[1];
    for (nblocks = 0; nblocks < firstBlockLength; nblocks++) {
      y->data[nblocks] = 0.0;
    }
  } else {
    npages = x->size[1];
    nblocks = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(y, nblocks);
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
      y->data[xi] = x->data[xpageoffset];
      for (k = 2; k <= firstBlockLength; k++) {
        y->data[xi] += x->data[(xpageoffset + k) - 1];
      }
      for (ib = 2; ib <= nblocks; ib++) {
        xblockoffset = xpageoffset + ((ib - 1) << 10);
        bsum = x->data[xblockoffset];
        if (ib == nblocks) {
          hi = lastBlockLength;
        } else {
          hi = 1024;
        }
        for (k = 2; k <= hi; k++) {
          bsum += x->data[(xblockoffset + k) - 1];
        }
        y->data[xi] += bsum;
      }
    }
  }
}

/* End of code generation (combineVectorElements.c) */
