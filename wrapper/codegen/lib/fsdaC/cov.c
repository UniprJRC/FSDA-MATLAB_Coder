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

/* Custom Source Code */
#pragma GCC diagnostic ignored "-Wmaybe-uninitialized"
/* Function Definitions */
void cov(const emxArray_real_T *x, emxArray_real_T *xy)
{
  emxArray_real_T *b_x;
  emxArray_real_T *c_x;
  double d;
  double muj;
  double temp;
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
  if (x->size[0] == 1) {
    emxInit_real_T(&c_x, 1);
    lastColC = x->size[1];
    i = c_x->size[0];
    c_x->size[0] = x->size[1];
    emxEnsureCapacity_real_T(c_x, i);
    for (i = 0; i < lastColC; i++) {
      c_x->data[i] = x->data[x->size[0] * i];
    }
    m = c_x->size[0] - 1;
    muj = 0.0;
    if (c_x->size[0] == 0) {
      muj = rtNaN;
    } else if (c_x->size[0] >= 2) {
      lastColC = c_x->size[0];
      muj = 0.0;
      for (b_i = 0; b_i <= m; b_i++) {
        muj += c_x->data[b_i];
      }
      muj /= (double)c_x->size[0];
      temp = 0.0;
      for (b_i = 0; b_i <= m; b_i++) {
        d = c_x->data[b_i] - muj;
        c_x->data[b_i] = d;
        temp += d * d;
      }
      muj = 1.0 / ((double)lastColC - 1.0) * temp;
    }
    emxFree_real_T(&c_x);
    i = xy->size[0] * xy->size[1];
    xy->size[0] = 1;
    xy->size[1] = 1;
    emxEnsureCapacity_real_T(xy, i);
    xy->data[0] = muj;
  } else {
    emxInit_real_T(&b_x, 2);
    i = b_x->size[0] * b_x->size[1];
    b_x->size[0] = x->size[0];
    b_x->size[1] = x->size[1];
    emxEnsureCapacity_real_T(b_x, i);
    lastColC = x->size[0] * x->size[1];
    for (i = 0; i < lastColC; i++) {
      b_x->data[i] = x->data[i];
    }
    m = x->size[0] - 1;
    n = x->size[1];
    i = xy->size[0] * xy->size[1];
    xy->size[0] = x->size[1];
    xy->size[1] = x->size[1];
    emxEnsureCapacity_real_T(xy, i);
    lastColC = x->size[1] * x->size[1];
    for (i = 0; i < lastColC; i++) {
      xy->data[i] = 0.0;
    }
    if ((x->size[0] == 0) || (x->size[1] == 0)) {
      i = xy->size[0] * xy->size[1];
      xy->size[0] = x->size[1];
      xy->size[1] = x->size[1];
      emxEnsureCapacity_real_T(xy, i);
      lastColC = x->size[1] * x->size[1];
      for (i = 0; i < lastColC; i++) {
        xy->data[i] = rtNaN;
      }
    } else {
      LDA = x->size[0];
      if (x->size[0] >= 2) {
        for (lastColC = 0; lastColC < n; lastColC++) {
          muj = 0.0;
          for (b_i = 0; b_i <= m; b_i++) {
            muj += b_x->data[b_i + b_x->size[0] * lastColC];
          }
          muj /= (double)(m + 1);
          for (b_i = 0; b_i <= m; b_i++) {
            b_x->data[b_i + b_x->size[0] * lastColC] -= muj;
          }
        }
        muj = 1.0 / ((double)x->size[0] - 1.0);
        i = xy->size[0] * xy->size[1];
        xy->size[0] = x->size[1];
        xy->size[1] = x->size[1];
        emxEnsureCapacity_real_T(xy, i);
        lastColC = x->size[1] * x->size[1];
        for (i = 0; i < lastColC; i++) {
          xy->data[i] = 0.0;
        }
        lastColC = x->size[1] * (x->size[1] - 1);
        for (cr = 0; n < 0 ? cr >= lastColC : cr <= lastColC; cr += n) {
          i = cr + 1;
          b_i = cr + n;
          for (ic = i; ic <= b_i; ic++) {
            xy->data[ic - 1] = 0.0;
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
              temp += b_x->data[(w + ar) + 1] * b_x->data[(w + br) + 1];
            }
            xy->data[ic - 1] += muj * temp;
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
