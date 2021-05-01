/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cat.c
 *
 * Code generation for function 'cat'
 *
 */

/* Include files */
#include "cat.h"
#include "LXS_wrapper_emxutil.h"
#include "LXS_wrapper_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void cat(const emxArray_real_T *varargin_1, const emxArray_real_T *varargin_2,
         emxArray_real_T *y)
{
  int i;
  int i1;
  int j;
  i = y->size[0] * y->size[1];
  y->size[0] = varargin_1->size[0];
  y->size[1] = 11;
  emxEnsureCapacity_real_T(y, i);
  i = varargin_1->size[0];
  for (j = 0; j < i; j++) {
    y->data[j] = varargin_1->data[j];
  }
  i1 = varargin_2->size[0] * 10;
  for (j = 0; j < i1; j++) {
    y->data[i + j] = rtNaN;
  }
}

/* End of code generation (cat.c) */
