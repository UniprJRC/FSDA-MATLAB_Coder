/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sort.c
 *
 * Code generation for function 'sort'
 *
 */

/* Include files */
#include "sort.h"
#include "LXS_wrapper_emxutil.h"
#include "LXS_wrapper_rtwutil.h"
#include "LXS_wrapper_types.h"
#include "rt_nonfinite.h"
#include "sortIdx.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Declarations */
static double rt_atan2d_snf(double u0, double u1);

/* Function Definitions */
static double rt_atan2d_snf(double u0, double u1)
{
  double y;
  int b_u0;
  int b_u1;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = rtNaN;
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      b_u0 = 1;
    } else {
      b_u0 = -1;
    }
    if (u1 > 0.0) {
      b_u1 = 1;
    } else {
      b_u1 = -1;
    }
    y = atan2(b_u0, b_u1);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }
  return y;
}

void b_sort(creal_T x[2])
{
  double ai;
  double ar;
  double b_x;
  double bi;
  double br;
  bool SCALEA;
  bool SCALEB;
  if (rtIsNaN(x[1].re) || rtIsNaN(x[1].im)) {
    SCALEA = (rtIsNaN(x[0].re) || rtIsNaN(x[0].im));
  } else if (rtIsNaN(x[0].re) || rtIsNaN(x[0].im)) {
    SCALEA = true;
  } else {
    if ((fabs(x[0].re) > 8.9884656743115785E+307) ||
        (fabs(x[0].im) > 8.9884656743115785E+307)) {
      SCALEA = true;
    } else {
      SCALEA = false;
    }
    if ((fabs(x[1].re) > 8.9884656743115785E+307) ||
        (fabs(x[1].im) > 8.9884656743115785E+307)) {
      SCALEB = true;
    } else {
      SCALEB = false;
    }
    if (SCALEA || SCALEB) {
      b_x = rt_hypotd_snf(x[0].re / 2.0, x[0].im / 2.0);
      bi = rt_hypotd_snf(x[1].re / 2.0, x[1].im / 2.0);
    } else {
      b_x = rt_hypotd_snf(x[0].re, x[0].im);
      bi = rt_hypotd_snf(x[1].re, x[1].im);
    }
    if (b_x == bi) {
      b_x = rt_atan2d_snf(x[0].im, x[0].re);
      bi = rt_atan2d_snf(x[1].im, x[1].re);
      if (b_x == bi) {
        ar = x[0].re;
        ai = x[0].im;
        br = x[1].re;
        bi = x[1].im;
        if (ar != br) {
          if (b_x >= 0.0) {
            b_x = br;
            bi = ar;
          } else {
            b_x = ar;
            bi = br;
          }
        } else if (ar < 0.0) {
          b_x = bi;
          bi = ai;
        } else {
          b_x = ai;
        }
        if (b_x == bi) {
          b_x = 0.0;
          bi = 0.0;
        }
      }
    }
    SCALEA = (b_x >= bi);
  }
  if (!SCALEA) {
    ar = x[0].re;
    ai = x[0].im;
    x[0] = x[1];
    x[1].re = ar;
    x[1].im = ai;
  }
}

void c_sort(emxArray_real_T *x)
{
  emxArray_int32_T *b_vwork;
  emxArray_real_T *vwork;
  int dim;
  int j;
  int k;
  int vlen;
  int vstride;
  dim = 0;
  if (x->size[0] != 1) {
    dim = -1;
  }
  emxInit_real_T(&vwork, 1);
  if (dim + 2 <= 1) {
    vstride = x->size[0];
  } else {
    vstride = 1;
  }
  vlen = vstride - 1;
  j = vwork->size[0];
  vwork->size[0] = vstride;
  emxEnsureCapacity_real_T(vwork, j);
  vstride = 1;
  for (k = 0; k <= dim; k++) {
    vstride *= x->size[0];
  }
  emxInit_int32_T(&b_vwork, 1);
  for (j = 0; j < vstride; j++) {
    for (k = 0; k <= vlen; k++) {
      vwork->data[k] = x->data[j + k * vstride];
    }
    b_sortIdx(vwork, b_vwork);
    for (k = 0; k <= vlen; k++) {
      x->data[j + k * vstride] = vwork->data[k];
    }
  }
  emxFree_int32_T(&b_vwork);
  emxFree_real_T(&vwork);
}

void sort(emxArray_real_T *x, emxArray_int32_T *idx)
{
  emxArray_int32_T *iidx;
  emxArray_real_T *vwork;
  int dim;
  int i;
  int k;
  int vlen;
  int vstride;
  dim = 0;
  if (x->size[0] != 1) {
    dim = -1;
  }
  emxInit_real_T(&vwork, 1);
  if (dim + 2 <= 1) {
    i = x->size[0];
  } else {
    i = 1;
  }
  vlen = i - 1;
  vstride = vwork->size[0];
  vwork->size[0] = i;
  emxEnsureCapacity_real_T(vwork, vstride);
  i = idx->size[0];
  idx->size[0] = x->size[0];
  emxEnsureCapacity_int32_T(idx, i);
  vstride = 1;
  for (k = 0; k <= dim; k++) {
    vstride *= x->size[0];
  }
  emxInit_int32_T(&iidx, 1);
  for (dim = 0; dim < vstride; dim++) {
    for (k = 0; k <= vlen; k++) {
      vwork->data[k] = x->data[dim + k * vstride];
    }
    b_sortIdx(vwork, iidx);
    for (k = 0; k <= vlen; k++) {
      i = dim + k * vstride;
      x->data[i] = vwork->data[k];
      idx->data[i] = iidx->data[k];
    }
  }
  emxFree_int32_T(&iidx);
  emxFree_real_T(&vwork);
}

/* End of code generation (sort.c) */
