/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * randsample.c
 *
 * Code generation for function 'randsample'
 *
 */

/* Include files */
#include "randsample.h"
#include "LXS_wrapper_emxutil.h"
#include "LXS_wrapper_types.h"
#include "rand.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
void randsample(double varargin_1, double varargin_2, emxArray_real_T *y)
{
  emxArray_boolean_T *selected;
  emxArray_int32_T *idx;
  emxArray_int32_T *iwork;
  emxArray_real_T *rp;
  double n;
  double r;
  double x_tmp;
  int b_n;
  int i;
  int i2;
  int j;
  int k;
  int kEnd;
  int k_tmp_tmp;
  int nsel;
  int p;
  int pEnd;
  int q;
  int qEnd;
  n = floor(varargin_1);
  x_tmp = floor(varargin_2);
  k_tmp_tmp = (int)floor(varargin_2);
  i = y->size[0];
  y->size[0] = (int)x_tmp;
  emxEnsureCapacity_real_T(y, i);
  if (((int)x_tmp << 2) > n) {
    emxInit_real_T(&rp, 2);
    emxInit_int32_T(&idx, 2);
    c_rand(n, rp);
    b_n = rp->size[1] + 1;
    i = idx->size[0] * idx->size[1];
    idx->size[0] = 1;
    idx->size[1] = rp->size[1];
    emxEnsureCapacity_int32_T(idx, i);
    nsel = rp->size[1];
    for (i = 0; i < nsel; i++) {
      idx->data[i] = 0;
    }
    emxInit_int32_T(&iwork, 1);
    i = iwork->size[0];
    iwork->size[0] = rp->size[1];
    emxEnsureCapacity_int32_T(iwork, i);
    i = rp->size[1] - 1;
    for (k = 1; k <= i; k += 2) {
      r = rp->data[k];
      if ((rp->data[k - 1] <= r) || rtIsNaN(r)) {
        idx->data[k - 1] = k;
        idx->data[k] = k + 1;
      } else {
        idx->data[k - 1] = k + 1;
        idx->data[k] = k;
      }
    }
    if ((rp->size[1] & 1) != 0) {
      idx->data[rp->size[1] - 1] = rp->size[1];
    }
    nsel = 2;
    while (nsel < b_n - 1) {
      i2 = nsel << 1;
      j = 1;
      for (pEnd = nsel + 1; pEnd < b_n; pEnd = qEnd + nsel) {
        p = j;
        q = pEnd - 1;
        qEnd = j + i2;
        if (qEnd > b_n) {
          qEnd = b_n;
        }
        k = 0;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          r = rp->data[idx->data[q] - 1];
          i = idx->data[p - 1];
          if ((rp->data[i - 1] <= r) || rtIsNaN(r)) {
            iwork->data[k] = i;
            p++;
            if (p == pEnd) {
              while (q + 1 < qEnd) {
                k++;
                iwork->data[k] = idx->data[q];
                q++;
              }
            }
          } else {
            iwork->data[k] = idx->data[q];
            q++;
            if (q + 1 == qEnd) {
              while (p < pEnd) {
                k++;
                iwork->data[k] = idx->data[p - 1];
                p++;
              }
            }
          }
          k++;
        }
        for (k = 0; k < kEnd; k++) {
          idx->data[(j + k) - 1] = iwork->data[k];
        }
        j = qEnd;
      }
      nsel = i2;
    }
    emxFree_int32_T(&iwork);
    nsel = rp->size[1];
    i = rp->size[0] * rp->size[1];
    rp->size[0] = 1;
    rp->size[1] = nsel;
    emxEnsureCapacity_real_T(rp, i);
    for (i = 0; i < nsel; i++) {
      rp->data[i] = idx->data[i];
    }
    emxFree_int32_T(&idx);
    for (j = 0; j < k_tmp_tmp; j++) {
      y->data[j] = (int)rp->data[j];
    }
    emxFree_real_T(&rp);
  } else {
    emxInit_boolean_T(&selected, 2);
    i = selected->size[0] * selected->size[1];
    selected->size[0] = 1;
    nsel = (int)n;
    selected->size[1] = (int)n;
    emxEnsureCapacity_boolean_T(selected, i);
    for (i = 0; i < nsel; i++) {
      selected->data[i] = false;
    }
    nsel = 0;
    while (nsel < (int)x_tmp) {
      r = b_rand();
      r = floor(r * n);
      if (!selected->data[(int)(r + 1.0) - 1]) {
        selected->data[(int)(r + 1.0) - 1] = true;
        nsel++;
        y->data[nsel - 1] = r + 1.0;
      }
    }
    emxFree_boolean_T(&selected);
  }
}

/* End of code generation (randsample.c) */
