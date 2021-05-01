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
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_types.h"
#include "nanmedian.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
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

/* End of code generation (mad.c) */
