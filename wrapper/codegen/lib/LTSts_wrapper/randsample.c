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
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_types.h"
#include "rand.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
double randsample(double varargin_1)
{
  emxArray_boolean_T *selected;
  double rp_data[3];
  double n;
  double r;
  double y;
  int idx_data[3];
  int iwork_data[3];
  int rp_size[2];
  int i;
  int k;
  int kEnd;
  int p;
  int pEnd;
  int q;
  int qEnd;
  n = floor(varargin_1);
  if (4.0 > n) {
    c_rand(n, rp_data, rp_size);
    i = rp_size[1];
    if (0 <= i - 1) {
      memset(&idx_data[0], 0, i * sizeof(int));
    }
    if (1 <= rp_size[1] - 1) {
      if ((rp_data[0] <= rp_data[1]) || rtIsNaN(rp_data[1])) {
        idx_data[0] = 1;
        idx_data[1] = 2;
      } else {
        idx_data[0] = 2;
        idx_data[1] = 1;
      }
    }
    if ((rp_size[1] & 1) != 0) {
      idx_data[rp_size[1] - 1] = rp_size[1];
    }
    i = 2;
    while (i < rp_size[1]) {
      i = 0;
      for (pEnd = 3; pEnd < 4; pEnd = qEnd + 2) {
        p = i;
        q = pEnd - 1;
        qEnd = i + 5;
        if (i + 5 > 4) {
          qEnd = 4;
        }
        k = 0;
        kEnd = (qEnd - i) - 1;
        while (k + 1 <= kEnd) {
          r = rp_data[idx_data[q] - 1];
          if ((rp_data[idx_data[p] - 1] <= r) || rtIsNaN(r)) {
            iwork_data[k] = idx_data[p];
            p++;
            if (p + 1 == pEnd) {
              while (q + 1 < qEnd) {
                k++;
                iwork_data[k] = idx_data[q];
                q++;
              }
            }
          } else {
            iwork_data[k] = idx_data[q];
            q++;
            if (q + 1 == qEnd) {
              while (p + 1 < pEnd) {
                k++;
                iwork_data[k] = idx_data[p];
                p++;
              }
            }
          }
          k++;
        }
        for (k = 0; k < kEnd; k++) {
          idx_data[i + k] = iwork_data[k];
        }
        i = qEnd - 1;
      }
      i = 4;
    }
    i = rp_size[1];
    for (pEnd = 0; pEnd < i; pEnd++) {
      rp_data[pEnd] = idx_data[pEnd];
    }
    y = rp_data[0];
  } else {
    emxInit_boolean_T(&selected, 2);
    pEnd = selected->size[0] * selected->size[1];
    selected->size[0] = 1;
    i = (int)n;
    selected->size[1] = (int)n;
    emxEnsureCapacity_boolean_T(selected, pEnd);
    for (pEnd = 0; pEnd < i; pEnd++) {
      selected->data[pEnd] = false;
    }
    do {
      r = b_rand();
      r = floor(r * n);
    } while (!!selected->data[(int)(r + 1.0) - 1]);
    emxFree_boolean_T(&selected);
    y = r + 1.0;
  }
  return y;
}

/* End of code generation (randsample.c) */
