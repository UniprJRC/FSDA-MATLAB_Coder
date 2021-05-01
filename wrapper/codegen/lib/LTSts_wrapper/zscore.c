/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * zscore.c
 *
 * Code generation for function 'zscore'
 *
 */

/* Include files */
#include "zscore.h"
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_types.h"
#include "rt_nonfinite.h"
#include "vvarstd.h"

/* Function Definitions */
void zscore(const emxArray_real_T *x, emxArray_real_T *z)
{
  emxArray_real_T *a;
  emxArray_real_T *mu;
  emxArray_real_T *sigma;
  emxArray_real_T *xv;
  double bsum;
  int firstBlockLength;
  int hi;
  int ib;
  int k;
  int lastBlockLength;
  int loop_ub;
  int nblocks;
  int npages;
  int outsize_idx_0;
  int xblockoffset;
  int xi;
  int xpageoffset;
  emxInit_real_T(&mu, 2);
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    xi = mu->size[0] * mu->size[1];
    mu->size[0] = 1;
    mu->size[1] = x->size[1];
    emxEnsureCapacity_real_T(mu, xi);
    lastBlockLength = x->size[1];
    for (xi = 0; xi < lastBlockLength; xi++) {
      mu->data[xi] = 0.0;
    }
  } else {
    npages = x->size[1];
    xi = mu->size[0] * mu->size[1];
    mu->size[0] = 1;
    mu->size[1] = x->size[1];
    emxEnsureCapacity_real_T(mu, xi);
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
      mu->data[xi] = x->data[xpageoffset];
      for (k = 2; k <= firstBlockLength; k++) {
        mu->data[xi] += x->data[(xpageoffset + k) - 1];
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
        mu->data[xi] += bsum;
      }
    }
  }
  xi = mu->size[0] * mu->size[1];
  mu->size[0] = 1;
  emxEnsureCapacity_real_T(mu, xi);
  lastBlockLength = mu->size[1] - 1;
  for (xi = 0; xi <= lastBlockLength; xi++) {
    mu->data[xi] /= (double)x->size[0];
  }
  emxInit_real_T(&sigma, 2);
  xi = sigma->size[0] * sigma->size[1];
  sigma->size[0] = 1;
  sigma->size[1] = x->size[1];
  emxEnsureCapacity_real_T(sigma, xi);
  lastBlockLength = x->size[1];
  for (xi = 0; xi < lastBlockLength; xi++) {
    sigma->data[xi] = 0.0;
  }
  lastBlockLength = x->size[0];
  npages = x->size[1];
  if (0 <= x->size[1] - 1) {
    outsize_idx_0 = x->size[0];
    loop_ub = x->size[0];
  }
  emxInit_real_T(&xv, 1);
  for (firstBlockLength = 0; firstBlockLength < npages; firstBlockLength++) {
    xpageoffset = firstBlockLength * lastBlockLength;
    xi = xv->size[0];
    xv->size[0] = outsize_idx_0;
    emxEnsureCapacity_real_T(xv, xi);
    for (xi = 0; xi < loop_ub; xi++) {
      xv->data[xi] = 0.0;
    }
    for (k = 0; k < lastBlockLength; k++) {
      xv->data[k] = x->data[xpageoffset + k];
    }
    sigma->data[firstBlockLength] = vvarstd(xv, x->size[0]);
  }
  emxFree_real_T(&xv);
  xi = sigma->size[1];
  for (k = 0; k < xi; k++) {
    if (sigma->data[k] == 0.0) {
      sigma->data[k] = 1.0;
    }
  }
  lastBlockLength = mu->size[1];
  xpageoffset = x->size[1];
  if (lastBlockLength < xpageoffset) {
    xpageoffset = lastBlockLength;
  }
  if (mu->size[1] == 1) {
    nblocks = x->size[1];
  } else if (x->size[1] == 1) {
    nblocks = mu->size[1];
  } else if (x->size[1] == mu->size[1]) {
    nblocks = x->size[1];
  } else {
    nblocks = xpageoffset;
  }
  xi = z->size[0] * z->size[1];
  z->size[0] = x->size[0];
  lastBlockLength = mu->size[1];
  xpageoffset = x->size[1];
  if (lastBlockLength < xpageoffset) {
    xpageoffset = lastBlockLength;
  }
  if (mu->size[1] == 1) {
    z->size[1] = x->size[1];
  } else if (x->size[1] == 1) {
    z->size[1] = mu->size[1];
  } else if (x->size[1] == mu->size[1]) {
    z->size[1] = x->size[1];
  } else {
    z->size[1] = xpageoffset;
  }
  emxEnsureCapacity_real_T(z, xi);
  if ((x->size[0] != 0) && (nblocks != 0)) {
    xblockoffset = (x->size[1] != 1);
    hi = (mu->size[1] != 1);
    xi = nblocks - 1;
    for (k = 0; k <= xi; k++) {
      firstBlockLength = xblockoffset * k;
      nblocks = hi * k;
      lastBlockLength = (x->size[0] != 1);
      xpageoffset = z->size[0] - 1;
      for (npages = 0; npages <= xpageoffset; npages++) {
        z->data[npages + z->size[0] * k] =
            x->data[lastBlockLength * npages + x->size[0] * firstBlockLength] -
            mu->data[nblocks];
      }
    }
  }
  emxFree_real_T(&mu);
  emxInit_real_T(&a, 2);
  xi = a->size[0] * a->size[1];
  a->size[0] = z->size[0];
  a->size[1] = z->size[1];
  emxEnsureCapacity_real_T(a, xi);
  lastBlockLength = z->size[0] * z->size[1];
  for (xi = 0; xi < lastBlockLength; xi++) {
    a->data[xi] = z->data[xi];
  }
  firstBlockLength = z->size[0];
  lastBlockLength = sigma->size[1];
  xpageoffset = z->size[1];
  if (lastBlockLength < xpageoffset) {
    xpageoffset = lastBlockLength;
  }
  if (sigma->size[1] == 1) {
    nblocks = z->size[1];
  } else if (z->size[1] == 1) {
    nblocks = sigma->size[1];
  } else if (z->size[1] == sigma->size[1]) {
    nblocks = z->size[1];
  } else {
    nblocks = xpageoffset;
  }
  xi = z->size[0] * z->size[1];
  z->size[0] = firstBlockLength;
  z->size[1] = nblocks;
  emxEnsureCapacity_real_T(z, xi);
  if ((firstBlockLength != 0) && (nblocks != 0)) {
    xblockoffset = (a->size[1] != 1);
    hi = (sigma->size[1] != 1);
    xi = nblocks - 1;
    for (k = 0; k <= xi; k++) {
      firstBlockLength = xblockoffset * k;
      nblocks = hi * k;
      lastBlockLength = (a->size[0] != 1);
      xpageoffset = z->size[0] - 1;
      for (npages = 0; npages <= xpageoffset; npages++) {
        z->data[npages + z->size[0] * k] =
            a->data[lastBlockLength * npages + a->size[0] * firstBlockLength] /
            sigma->data[nblocks];
      }
    }
  }
  emxFree_real_T(&a);
  emxFree_real_T(&sigma);
}

/* End of code generation (zscore.c) */
