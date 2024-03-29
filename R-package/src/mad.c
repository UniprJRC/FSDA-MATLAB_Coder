/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mad.c
 *
 * Code generation for function 'mad'
 *
 */

/* Include files */
#include "mad.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "nanmedian.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
double b_mad(const emxArray_real_T *x)
{
  emxArray_real_T *b_x;
  emxArray_real_T *xx;
  const double *x_data;
  double xm;
  double y;
  double *b_x_data;
  double *xx_data;
  int c;
  int k;
  int vlen;
  x_data = x->data;
  if (x->size[0] == 0) {
    y = rtNaN;
  } else {
    vlen = x->size[0];
    xm = 0.0;
    c = 0;
    for (k = 0; k < vlen; k++) {
      if (!rtIsNaN(x_data[k])) {
        xm += x_data[k];
        c++;
      }
    }
    if (c == 0) {
      xm = rtNaN;
    } else {
      xm /= (double)c;
    }
    emxInit_real_T(&b_x, 1);
    c = b_x->size[0];
    b_x->size[0] = x->size[0];
    emxEnsureCapacity_real_T(b_x, c);
    b_x_data = b_x->data;
    vlen = (x->size[0] != 1);
    c = x->size[0] - 1;
    for (k = 0; k <= c; k++) {
      b_x_data[k] = x_data[vlen * k] - xm;
    }
    emxInit_real_T(&xx, 1);
    vlen = b_x->size[0];
    c = xx->size[0];
    xx->size[0] = b_x->size[0];
    emxEnsureCapacity_real_T(xx, c);
    xx_data = xx->data;
    for (k = 0; k < vlen; k++) {
      xx_data[k] = fabs(b_x_data[k]);
    }
    emxFree_real_T(&b_x);
    vlen = xx->size[0];
    y = 0.0;
    c = 0;
    for (k = 0; k < vlen; k++) {
      if (!rtIsNaN(xx_data[k])) {
        y += xx_data[k];
        c++;
      }
    }
    emxFree_real_T(&xx);
    if (c == 0) {
      y = rtNaN;
    } else {
      y /= (double)c;
    }
  }
  return y;
}

double mad(const emxArray_real_T *x)
{
  emxArray_real_T *b_x;
  emxArray_real_T *xx;
  const double *x_data;
  double xm;
  double y;
  double *b_x_data;
  double *xx_data;
  int acoef;
  int i;
  int k;
  x_data = x->data;
  if (x->size[0] == 0) {
    y = rtNaN;
  } else {
    emxInit_real_T(&b_x, 1);
    xm = nanmedian(x);
    i = b_x->size[0];
    b_x->size[0] = x->size[0];
    emxEnsureCapacity_real_T(b_x, i);
    b_x_data = b_x->data;
    acoef = (x->size[0] != 1);
    i = x->size[0] - 1;
    for (k = 0; k <= i; k++) {
      b_x_data[k] = x_data[acoef * k] - xm;
    }
    emxInit_real_T(&xx, 1);
    acoef = b_x->size[0];
    i = xx->size[0];
    xx->size[0] = b_x->size[0];
    emxEnsureCapacity_real_T(xx, i);
    xx_data = xx->data;
    for (k = 0; k < acoef; k++) {
      xx_data[k] = fabs(b_x_data[k]);
    }
    emxFree_real_T(&b_x);
    y = nanmedian(xx);
    emxFree_real_T(&xx);
  }
  return y;
}

/* End of code generation (mad.c) */
