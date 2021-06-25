/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: mad.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "mad.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "nanmedian.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : const emxArray_real_T *x
 * Return Type  : double
 */
double b_mad(const emxArray_real_T *x)
{
  emxArray_real_T *b_x;
  emxArray_real_T *xx;
  double xm;
  double y;
  int c;
  int k;
  int vlen;
  if (x->size[0] == 0) {
    y = rtNaN;
  } else {
    vlen = x->size[0];
    xm = 0.0;
    c = 0;
    for (k = 0; k < vlen; k++) {
      if (!rtIsNaN(x->data[k])) {
        xm += x->data[k];
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
    vlen = (x->size[0] != 1);
    c = x->size[0] - 1;
    for (k = 0; k <= c; k++) {
      b_x->data[k] = x->data[vlen * k] - xm;
    }
    emxInit_real_T(&xx, 1);
    vlen = b_x->size[0];
    c = xx->size[0];
    xx->size[0] = b_x->size[0];
    emxEnsureCapacity_real_T(xx, c);
    for (k = 0; k < vlen; k++) {
      xx->data[k] = fabs(b_x->data[k]);
    }
    emxFree_real_T(&b_x);
    vlen = xx->size[0];
    y = 0.0;
    c = 0;
    for (k = 0; k < vlen; k++) {
      if (!rtIsNaN(xx->data[k])) {
        y += xx->data[k];
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

/*
 * Arguments    : const emxArray_real_T *x
 * Return Type  : double
 */
double mad(const emxArray_real_T *x)
{
  emxArray_real_T *b_x;
  emxArray_real_T *xx;
  double xm;
  double y;
  int acoef;
  int i;
  int k;
  if (x->size[0] == 0) {
    y = rtNaN;
  } else {
    emxInit_real_T(&b_x, 1);
    xm = nanmedian(x);
    i = b_x->size[0];
    b_x->size[0] = x->size[0];
    emxEnsureCapacity_real_T(b_x, i);
    acoef = (x->size[0] != 1);
    i = x->size[0] - 1;
    for (k = 0; k <= i; k++) {
      b_x->data[k] = x->data[acoef * k] - xm;
    }
    emxInit_real_T(&xx, 1);
    acoef = b_x->size[0];
    i = xx->size[0];
    xx->size[0] = b_x->size[0];
    emxEnsureCapacity_real_T(xx, i);
    for (k = 0; k < acoef; k++) {
      xx->data[k] = fabs(b_x->data[k]);
    }
    emxFree_real_T(&b_x);
    y = nanmedian(xx);
    emxFree_real_T(&xx);
  }
  return y;
}

/*
 * File trailer for mad.c
 *
 * [EOF]
 */
