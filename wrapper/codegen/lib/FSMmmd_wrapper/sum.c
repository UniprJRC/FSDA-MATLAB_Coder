/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sum.c
 *
 * Code generation for function 'sum'
 *
 */

/* Include files */
#include "sum.h"
#include "FSMmmd_wrapper_emxutil.h"
#include "FSMmmd_wrapper_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void b_sum(const emxArray_real_T *x, emxArray_real_T *y)
{
  emxArray_real_T *bsum;
  int bvstride;
  int firstBlockLength;
  int ib;
  int k;
  int lastBlockLength;
  int nblocks;
  int vstride;
  int xblockoffset;
  int xj;
  int xoffset;
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    xblockoffset = y->size[0];
    y->size[0] = x->size[0];
    emxEnsureCapacity_real_T(y, xblockoffset);
    firstBlockLength = x->size[0];
    for (xblockoffset = 0; xblockoffset < firstBlockLength; xblockoffset++) {
      y->data[xblockoffset] = 0.0;
    }
  } else {
    emxInit_real_T(&bsum, 1);
    vstride = x->size[0] - 1;
    bvstride = x->size[0] << 10;
    xblockoffset = y->size[0];
    y->size[0] = x->size[0];
    emxEnsureCapacity_real_T(y, xblockoffset);
    xblockoffset = bsum->size[0];
    bsum->size[0] = x->size[0];
    emxEnsureCapacity_real_T(bsum, xblockoffset);
    if (x->size[1] <= 1024) {
      firstBlockLength = x->size[1];
      lastBlockLength = 0;
      nblocks = 1;
    } else {
      firstBlockLength = 1024;
      nblocks = x->size[1] / 1024;
      lastBlockLength = x->size[1] - (nblocks << 10);
      if (lastBlockLength > 0) {
        nblocks++;
      } else {
        lastBlockLength = 1024;
      }
    }
    for (xj = 0; xj <= vstride; xj++) {
      y->data[xj] = x->data[xj];
      bsum->data[xj] = 0.0;
    }
    for (k = 2; k <= firstBlockLength; k++) {
      xoffset = (k - 1) * (vstride + 1);
      for (xj = 0; xj <= vstride; xj++) {
        y->data[xj] += x->data[xoffset + xj];
      }
    }
    for (ib = 2; ib <= nblocks; ib++) {
      xblockoffset = (ib - 1) * bvstride;
      for (xj = 0; xj <= vstride; xj++) {
        bsum->data[xj] = x->data[xblockoffset + xj];
      }
      if (ib == nblocks) {
        firstBlockLength = lastBlockLength;
      } else {
        firstBlockLength = 1024;
      }
      for (k = 2; k <= firstBlockLength; k++) {
        xoffset = xblockoffset + (k - 1) * (vstride + 1);
        for (xj = 0; xj <= vstride; xj++) {
          bsum->data[xj] += x->data[xoffset + xj];
        }
      }
      for (xj = 0; xj <= vstride; xj++) {
        y->data[xj] += bsum->data[xj];
      }
    }
    emxFree_real_T(&bsum);
  }
}

void sum(const emxArray_real_T *x, emxArray_real_T *y)
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

/* End of code generation (sum.c) */
