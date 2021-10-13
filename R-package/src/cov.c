/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cov.c
 *
 * Code generation for function 'cov'
 *
 */

/* Include files */
#include "cov.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void cov(const emxArray_real_T *x, emxArray_real_T *xy)
{
  emxArray_real_T *b_x;
  const double *x_data;
  double d;
  double muj;
  double temp;
  double *b_x_data;
  double *xy_data;
  int LDA;
  int ar;
  int b_i;
  int br;
  int cr;
  int i;
  int ic;
  int lastColC;
  int m;
  int n;
  int w;
  x_data = x->data;
  if (x->size[0] == 1) {
    emxInit_real_T(&b_x, 1);
    lastColC = x->size[1];
    i = b_x->size[0];
    b_x->size[0] = x->size[1];
    emxEnsureCapacity_real_T(b_x, i);
    b_x_data = b_x->data;
    for (i = 0; i < lastColC; i++) {
      b_x_data[i] = x_data[x->size[0] * i];
    }
    m = b_x->size[0] - 1;
    muj = 0.0;
    if (b_x->size[0] == 0) {
      muj = rtNaN;
    } else if (b_x->size[0] >= 2) {
      lastColC = b_x->size[0];
      muj = 0.0;
      for (b_i = 0; b_i <= m; b_i++) {
        muj += b_x_data[b_i];
      }
      muj /= (double)b_x->size[0];
      temp = 0.0;
      for (b_i = 0; b_i <= m; b_i++) {
        d = b_x_data[b_i] - muj;
        b_x_data[b_i] = d;
        temp += d * d;
      }
      muj = 1.0 / ((double)lastColC - 1.0) * temp;
    }
    emxFree_real_T(&b_x);
    i = xy->size[0] * xy->size[1];
    xy->size[0] = 1;
    xy->size[1] = 1;
    emxEnsureCapacity_real_T(xy, i);
    xy_data = xy->data;
    xy_data[0] = muj;
  } else {
    emxInit_real_T(&b_x, 2);
    i = b_x->size[0] * b_x->size[1];
    b_x->size[0] = x->size[0];
    b_x->size[1] = x->size[1];
    emxEnsureCapacity_real_T(b_x, i);
    b_x_data = b_x->data;
    lastColC = x->size[0] * x->size[1];
    for (i = 0; i < lastColC; i++) {
      b_x_data[i] = x_data[i];
    }
    m = x->size[0] - 1;
    n = x->size[1];
    i = xy->size[0] * xy->size[1];
    xy->size[0] = x->size[1];
    xy->size[1] = x->size[1];
    emxEnsureCapacity_real_T(xy, i);
    xy_data = xy->data;
    lastColC = x->size[1] * x->size[1];
    for (i = 0; i < lastColC; i++) {
      xy_data[i] = 0.0;
    }
    if ((x->size[0] == 0) || (x->size[1] == 0)) {
      i = xy->size[0] * xy->size[1];
      xy->size[0] = x->size[1];
      xy->size[1] = x->size[1];
      emxEnsureCapacity_real_T(xy, i);
      xy_data = xy->data;
      lastColC = x->size[1] * x->size[1];
      for (i = 0; i < lastColC; i++) {
        xy_data[i] = rtNaN;
      }
    } else {
      LDA = x->size[0];
      if (x->size[0] >= 2) {
        for (lastColC = 0; lastColC < n; lastColC++) {
          muj = 0.0;
          for (b_i = 0; b_i <= m; b_i++) {
            muj += b_x_data[b_i + b_x->size[0] * lastColC];
          }
          muj /= (double)(m + 1);
          for (b_i = 0; b_i <= m; b_i++) {
            b_x_data[b_i + b_x->size[0] * lastColC] -= muj;
          }
        }
        muj = 1.0 / ((double)x->size[0] - 1.0);
        i = xy->size[0] * xy->size[1];
        xy->size[0] = x->size[1];
        xy->size[1] = x->size[1];
        emxEnsureCapacity_real_T(xy, i);
        xy_data = xy->data;
        lastColC = x->size[1] * x->size[1];
        for (i = 0; i < lastColC; i++) {
          xy_data[i] = 0.0;
        }
        lastColC = x->size[1] * (x->size[1] - 1);
        for (cr = 0; n < 0 ? cr >= lastColC : cr <= lastColC; cr += n) {
          i = cr + 1;
          b_i = cr + n;
          for (ic = i; ic <= b_i; ic++) {
            xy_data[ic - 1] = 0.0;
          }
        }
        br = -1;
        for (cr = 0; n < 0 ? cr >= lastColC : cr <= lastColC; cr += n) {
          ar = -1;
          i = cr + 1;
          b_i = cr + n;
          for (ic = i; ic <= b_i; ic++) {
            temp = 0.0;
            for (w = 0; w <= m; w++) {
              temp += b_x_data[(w + ar) + 1] * b_x_data[(w + br) + 1];
            }
            xy_data[ic - 1] += muj * temp;
            ar += LDA;
          }
          br += LDA;
        }
      }
    }
    emxFree_real_T(&b_x);
  }
}

/* End of code generation (cov.c) */
