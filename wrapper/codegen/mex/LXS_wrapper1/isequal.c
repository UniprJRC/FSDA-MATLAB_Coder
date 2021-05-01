/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * isequal.c
 *
 * Code generation for function 'isequal'
 *
 */

/* Include files */
#include "isequal.h"
#include "LXS_wrapper1_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
boolean_T b_isequal(const emxArray_real_T *varargin_1,
                    const emxArray_real_T *varargin_2)
{
  int32_T k;
  boolean_T b_p;
  boolean_T exitg1;
  boolean_T p;
  p = false;
  b_p = false;
  if (varargin_1->size[1] == varargin_2->size[1]) {
    b_p = true;
  }
  if (b_p && (varargin_1->size[1] != 0) && (varargin_2->size[1] != 0)) {
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= varargin_2->size[1] - 1)) {
      if (!(varargin_1->data[k] == varargin_2->data[k])) {
        b_p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  return b_p || p;
}

boolean_T isequal(const emxArray_real_T *varargin_1,
                  const emxArray_real_T *varargin_2)
{
  int32_T k;
  boolean_T b_p;
  boolean_T exitg1;
  boolean_T p;
  p = false;
  b_p = false;
  if ((varargin_1->size[0] == varargin_2->size[0]) &&
      (1 == varargin_2->size[1])) {
    b_p = true;
  }
  if (b_p && (varargin_1->size[0] != 0) &&
      ((varargin_2->size[0] != 0) && (varargin_2->size[1] != 0))) {
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= varargin_2->size[0] * varargin_2->size[1] - 1)) {
      if (!(varargin_1->data[k] == varargin_2->data[k])) {
        b_p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  return b_p || p;
}

/* End of code generation (isequal.c) */
