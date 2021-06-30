/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * det.c
 *
 * Code generation for function 'det'
 *
 */

/* Include files */
#include "det.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "xzgetrf.h"
#include <string.h>

/* Function Definitions */
double det(const emxArray_real_T *x)
{
  emxArray_int32_T *ipiv;
  emxArray_real_T *b_x;
  double y;
  int i;
  int loop_ub;
  bool isodd;
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    y = 1.0;
  } else {
    emxInit_real_T(&b_x, 2);
    i = b_x->size[0] * b_x->size[1];
    b_x->size[0] = x->size[0];
    b_x->size[1] = x->size[1];
    emxEnsureCapacity_real_T(b_x, i);
    loop_ub = x->size[0] * x->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_x->data[i] = x->data[i];
    }
    emxInit_int32_T(&ipiv, 2);
    xzgetrf(x->size[0], x->size[1], b_x, x->size[0], ipiv, &loop_ub);
    y = b_x->data[0];
    i = b_x->size[0];
    for (loop_ub = 0; loop_ub <= i - 2; loop_ub++) {
      y *= b_x->data[(loop_ub + b_x->size[0] * (loop_ub + 1)) + 1];
    }
    emxFree_real_T(&b_x);
    isodd = false;
    i = ipiv->size[1];
    for (loop_ub = 0; loop_ub <= i - 2; loop_ub++) {
      if (ipiv->data[loop_ub] > loop_ub + 1) {
        isodd = !isodd;
      }
    }
    emxFree_int32_T(&ipiv);
    if (isodd) {
      y = -y;
    }
  }
  return y;
}

/* End of code generation (det.c) */
