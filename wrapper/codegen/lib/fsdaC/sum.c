/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: sum.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "sum.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : const emxArray_real_T *x
 *                emxArray_real_T *y
 * Return Type  : void
 */
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
  if ((x->size[0] == 0) || (x->size[2] == 0)) {
    xblockoffset = y->size[0] * y->size[1];
    y->size[0] = x->size[0];
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(y, xblockoffset);
    firstBlockLength = x->size[0] * x->size[1];
    for (xblockoffset = 0; xblockoffset < firstBlockLength; xblockoffset++) {
      y->data[xblockoffset] = 0.0;
    }
  } else {
    if (x->size[2] == 1) {
      vstride = x->size[0] * x->size[1] * x->size[2];
    } else {
      vstride = x->size[0] * x->size[1];
    }
    emxInit_real_T(&bsum, 1);
    bvstride = vstride << 10;
    xblockoffset = y->size[0] * y->size[1];
    y->size[0] = x->size[0];
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(y, xblockoffset);
    xblockoffset = bsum->size[0];
    bsum->size[0] = vstride;
    emxEnsureCapacity_real_T(bsum, xblockoffset);
    if (x->size[2] <= 1024) {
      firstBlockLength = x->size[2];
      lastBlockLength = 0;
      nblocks = 1;
    } else {
      firstBlockLength = 1024;
      nblocks = x->size[2] / 1024;
      lastBlockLength = x->size[2] - (nblocks << 10);
      if (lastBlockLength > 0) {
        nblocks++;
      } else {
        lastBlockLength = 1024;
      }
    }
    for (xj = 0; xj < vstride; xj++) {
      y->data[xj] = x->data[xj];
      bsum->data[xj] = 0.0;
    }
    for (k = 2; k <= firstBlockLength; k++) {
      xoffset = (k - 1) * vstride;
      for (xj = 0; xj < vstride; xj++) {
        y->data[xj] += x->data[xoffset + xj];
      }
    }
    for (ib = 2; ib <= nblocks; ib++) {
      xblockoffset = (ib - 1) * bvstride;
      for (xj = 0; xj < vstride; xj++) {
        bsum->data[xj] = x->data[xblockoffset + xj];
      }
      if (ib == nblocks) {
        firstBlockLength = lastBlockLength;
      } else {
        firstBlockLength = 1024;
      }
      for (k = 2; k <= firstBlockLength; k++) {
        xoffset = xblockoffset + (k - 1) * vstride;
        for (xj = 0; xj < vstride; xj++) {
          bsum->data[xj] += x->data[xoffset + xj];
        }
      }
      for (xj = 0; xj < vstride; xj++) {
        y->data[xj] += bsum->data[xj];
      }
    }
    emxFree_real_T(&bsum);
  }
}

/*
 * Arguments    : const emxArray_real_T *x
 *                emxArray_real_T *y
 * Return Type  : void
 */
void c_sum(const emxArray_real_T *x, emxArray_real_T *y)
{
  double bsum_data;
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
    nblocks = y->size[0] * y->size[1] * y->size[2];
    y->size[0] = 1;
    y->size[1] = x->size[1];
    y->size[2] = x->size[2];
    emxEnsureCapacity_real_T(y, nblocks);
    firstBlockLength = x->size[1] * x->size[2];
    for (nblocks = 0; nblocks < firstBlockLength; nblocks++) {
      y->data[nblocks] = 0.0;
    }
  } else {
    npages = 1;
    k = 3;
    if (x->size[2] == 1) {
      k = 2;
    }
    for (firstBlockLength = 2; firstBlockLength <= k; firstBlockLength++) {
      npages *= x->size[firstBlockLength - 1];
    }
    nblocks = y->size[0] * y->size[1] * y->size[2];
    y->size[0] = 1;
    y->size[1] = x->size[1];
    y->size[2] = x->size[2];
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
        bsum_data = x->data[xblockoffset];
        if (ib == nblocks) {
          hi = lastBlockLength;
        } else {
          hi = 1024;
        }
        for (k = 2; k <= hi; k++) {
          bsum_data += x->data[(xblockoffset + k) - 1];
        }
        y->data[xi] += bsum_data;
      }
    }
  }
}

/*
 * Arguments    : const emxArray_real_T *x
 *                emxArray_real_T *y
 * Return Type  : void
 */
void d_sum(const emxArray_real_T *x, emxArray_real_T *y)
{
  double bsum_data;
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
  if (x->size[1] == 0) {
    nblocks = y->size[0] * y->size[1] * y->size[2];
    y->size[0] = 1;
    y->size[1] = 1;
    y->size[2] = x->size[2];
    emxEnsureCapacity_real_T(y, nblocks);
    firstBlockLength = x->size[2];
    for (nblocks = 0; nblocks < firstBlockLength; nblocks++) {
      y->data[nblocks] = 0.0;
    }
  } else {
    npages = 1;
    k = 3;
    if (x->size[2] == 1) {
      k = 2;
    }
    for (firstBlockLength = 3; firstBlockLength <= k; firstBlockLength++) {
      npages *= x->size[2];
    }
    nblocks = y->size[0] * y->size[1] * y->size[2];
    y->size[0] = 1;
    y->size[1] = 1;
    y->size[2] = x->size[2];
    emxEnsureCapacity_real_T(y, nblocks);
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
    for (xi = 0; xi < npages; xi++) {
      xpageoffset = xi * x->size[1];
      y->data[xi] = x->data[xpageoffset];
      for (k = 2; k <= firstBlockLength; k++) {
        y->data[xi] += x->data[(xpageoffset + k) - 1];
      }
      for (ib = 2; ib <= nblocks; ib++) {
        xblockoffset = xpageoffset + ((ib - 1) << 10);
        bsum_data = x->data[xblockoffset];
        if (ib == nblocks) {
          hi = lastBlockLength;
        } else {
          hi = 1024;
        }
        for (k = 2; k <= hi; k++) {
          bsum_data += x->data[(xblockoffset + k) - 1];
        }
        y->data[xi] += bsum_data;
      }
    }
  }
}

/*
 * Arguments    : const emxArray_real_T *x
 *                emxArray_real_T *y
 * Return Type  : void
 */
void e_sum(const emxArray_real_T *x, emxArray_real_T *y)
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
  if (x->size[2] == 0) {
    xblockoffset = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(y, xblockoffset);
    firstBlockLength = x->size[1];
    for (xblockoffset = 0; xblockoffset < firstBlockLength; xblockoffset++) {
      y->data[xblockoffset] = 0.0;
    }
  } else {
    if (x->size[2] == 1) {
      vstride = x->size[1] * x->size[2];
    } else {
      vstride = x->size[1];
    }
    emxInit_real_T(&bsum, 1);
    bvstride = vstride << 10;
    xblockoffset = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(y, xblockoffset);
    xblockoffset = bsum->size[0];
    bsum->size[0] = vstride;
    emxEnsureCapacity_real_T(bsum, xblockoffset);
    if (x->size[2] <= 1024) {
      firstBlockLength = x->size[2];
      lastBlockLength = 0;
      nblocks = 1;
    } else {
      firstBlockLength = 1024;
      nblocks = x->size[2] / 1024;
      lastBlockLength = x->size[2] - (nblocks << 10);
      if (lastBlockLength > 0) {
        nblocks++;
      } else {
        lastBlockLength = 1024;
      }
    }
    for (xj = 0; xj < vstride; xj++) {
      y->data[xj] = x->data[xj];
      bsum->data[xj] = 0.0;
    }
    for (k = 2; k <= firstBlockLength; k++) {
      xoffset = (k - 1) * vstride;
      for (xj = 0; xj < vstride; xj++) {
        y->data[xj] += x->data[xoffset + xj];
      }
    }
    for (ib = 2; ib <= nblocks; ib++) {
      xblockoffset = (ib - 1) * bvstride;
      for (xj = 0; xj < vstride; xj++) {
        bsum->data[xj] = x->data[xblockoffset + xj];
      }
      if (ib == nblocks) {
        firstBlockLength = lastBlockLength;
      } else {
        firstBlockLength = 1024;
      }
      for (k = 2; k <= firstBlockLength; k++) {
        xoffset = xblockoffset + (k - 1) * vstride;
        for (xj = 0; xj < vstride; xj++) {
          bsum->data[xj] += x->data[xoffset + xj];
        }
      }
      for (xj = 0; xj < vstride; xj++) {
        y->data[xj] += bsum->data[xj];
      }
    }
    emxFree_real_T(&bsum);
  }
}

/*
 * Arguments    : const emxArray_real_T *x
 *                emxArray_real_T *y
 * Return Type  : void
 */
void f_sum(const emxArray_real_T *x, emxArray_real_T *y)
{
  double bsum_data;
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
  if (x->size[0] == 0) {
    nblocks = y->size[0] * y->size[1] * y->size[2];
    y->size[0] = 1;
    y->size[1] = 1;
    y->size[2] = x->size[2];
    emxEnsureCapacity_real_T(y, nblocks);
    firstBlockLength = x->size[2];
    for (nblocks = 0; nblocks < firstBlockLength; nblocks++) {
      y->data[nblocks] = 0.0;
    }
  } else {
    npages = 1;
    k = 3;
    if (x->size[2] == 1) {
      k = 2;
    }
    for (firstBlockLength = 2; firstBlockLength <= k; firstBlockLength++) {
      npages *= x->size[firstBlockLength - 1];
    }
    nblocks = y->size[0] * y->size[1] * y->size[2];
    y->size[0] = 1;
    y->size[1] = 1;
    y->size[2] = x->size[2];
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
        bsum_data = x->data[xblockoffset];
        if (ib == nblocks) {
          hi = lastBlockLength;
        } else {
          hi = 1024;
        }
        for (k = 2; k <= hi; k++) {
          bsum_data += x->data[(xblockoffset + k) - 1];
        }
        y->data[xi] += bsum_data;
      }
    }
  }
}

/*
 * Arguments    : const emxArray_real_T *x
 *                emxArray_real_T *y
 * Return Type  : void
 */
void sum(const emxArray_real_T *x, emxArray_real_T *y)
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

/*
 * File trailer for sum.c
 *
 * [EOF]
 */
