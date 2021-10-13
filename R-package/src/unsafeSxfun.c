/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * unsafeSxfun.c
 *
 * Code generation for function 'unsafeSxfun'
 *
 */

/* Include files */
#include "unsafeSxfun.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void ce_binary_expand_op(emxArray_real_T *r2, const emxArray_real_T *y,
                         const c_captured_var *yhat)
{
  emxArray_real_T *b_y;
  const double *y_data;
  double varargin_1;
  double *b_y_data;
  double *r2_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  y_data = y->data;
  emxInit_real_T(&b_y, 1);
  i = b_y->size[0];
  if (yhat->contents->size[0] == 1) {
    b_y->size[0] = y->size[0];
  } else {
    b_y->size[0] = yhat->contents->size[0];
  }
  emxEnsureCapacity_real_T(b_y, i);
  b_y_data = b_y->data;
  stride_0_0 = (y->size[0] != 1);
  stride_1_0 = (yhat->contents->size[0] != 1);
  if (yhat->contents->size[0] == 1) {
    loop_ub = y->size[0];
  } else {
    loop_ub = yhat->contents->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_y_data[i] = y_data[i * stride_0_0] - yhat->contents->data[i * stride_1_0];
  }
  i = r2->size[0];
  r2->size[0] = b_y->size[0];
  emxEnsureCapacity_real_T(r2, i);
  r2_data = r2->data;
  loop_ub = b_y->size[0];
  for (i = 0; i < loop_ub; i++) {
    varargin_1 = b_y_data[i];
    r2_data[i] = varargin_1 * varargin_1;
  }
  emxFree_real_T(&b_y);
}

void jb_binary_expand_op(emxArray_real_T *r2, const emxArray_real_T *y)
{
  emxArray_real_T *b_y;
  const double *y_data;
  double varargin_1;
  double *b_y_data;
  double *r2_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  y_data = y->data;
  r2_data = r2->data;
  emxInit_real_T(&b_y, 1);
  i = b_y->size[0];
  if (r2->size[0] == 1) {
    b_y->size[0] = y->size[0];
  } else {
    b_y->size[0] = r2->size[0];
  }
  emxEnsureCapacity_real_T(b_y, i);
  b_y_data = b_y->data;
  stride_0_0 = (y->size[0] != 1);
  stride_1_0 = (r2->size[0] != 1);
  if (r2->size[0] == 1) {
    loop_ub = y->size[0];
  } else {
    loop_ub = r2->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_y_data[i] = y_data[i * stride_0_0] - r2_data[i * stride_1_0];
  }
  i = r2->size[0];
  r2->size[0] = b_y->size[0];
  emxEnsureCapacity_real_T(r2, i);
  r2_data = r2->data;
  loop_ub = b_y->size[0];
  for (i = 0; i < loop_ub; i++) {
    varargin_1 = b_y_data[i];
    r2_data[i] = varargin_1 * varargin_1;
  }
  emxFree_real_T(&b_y);
}

void md_binary_expand_op(emxArray_real_T *y, const c_captured_var *yin,
                         const c_captured_var *bsb, const c_captured_var *yhat)
{
  emxArray_real_T *b_yin;
  double varargin_1;
  double *y_data;
  double *yin_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  emxInit_real_T(&b_yin, 1);
  i = b_yin->size[0];
  if (yhat->contents->size[0] == 1) {
    b_yin->size[0] = bsb->contents->size[0];
  } else {
    b_yin->size[0] = yhat->contents->size[0];
  }
  emxEnsureCapacity_real_T(b_yin, i);
  yin_data = b_yin->data;
  stride_0_0 = (bsb->contents->size[0] != 1);
  stride_1_0 = (yhat->contents->size[0] != 1);
  if (yhat->contents->size[0] == 1) {
    loop_ub = bsb->contents->size[0];
  } else {
    loop_ub = yhat->contents->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    yin_data[i] =
        yin->contents->data[(int)bsb->contents->data[i * stride_0_0] - 1] -
        yhat->contents->data[i * stride_1_0];
  }
  i = y->size[0];
  y->size[0] = b_yin->size[0];
  emxEnsureCapacity_real_T(y, i);
  y_data = y->data;
  loop_ub = b_yin->size[0];
  for (i = 0; i < loop_ub; i++) {
    varargin_1 = yin_data[i];
    y_data[i] = varargin_1 * varargin_1;
  }
  emxFree_real_T(&b_yin);
}

/* End of code generation (unsafeSxfun.c) */
