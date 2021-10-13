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
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void b_cat(const emxArray_real_T *varargin_1, const emxArray_real_T *varargin_2,
           emxArray_real_T *y)
{
  const double *varargin_2_data;
  double *y_data;
  int i;
  int i1;
  int j;
  varargin_2_data = varargin_2->data;
  i = y->size[0] * y->size[1];
  y->size[0] = varargin_1->size[0];
  y->size[1] = varargin_2->size[1] + 1;
  emxEnsureCapacity_real_T(y, i);
  y_data = y->data;
  i = varargin_1->size[0];
  for (j = 0; j < i; j++) {
    y_data[j] = 1.0;
  }
  i1 = varargin_2->size[0] * varargin_2->size[1];
  for (j = 0; j < i1; j++) {
    y_data[i + j] = varargin_2_data[j];
  }
}

void c_cat(const emxArray_real_T *varargin_1, const emxArray_real_T *varargin_2,
           emxArray_real_T *y)
{
  const double *varargin_1_data;
  const double *varargin_2_data;
  double *y_data;
  int i;
  int iy;
  int j;
  varargin_2_data = varargin_2->data;
  varargin_1_data = varargin_1->data;
  i = y->size[0] * y->size[1] * y->size[2];
  y->size[0] = varargin_1->size[0];
  y->size[1] = varargin_1->size[1];
  y->size[2] = varargin_1->size[2];
  emxEnsureCapacity_real_T(y, i);
  y_data = y->data;
  iy = varargin_1->size[0] * varargin_1->size[1] * varargin_1->size[2];
  for (i = 0; i < iy; i++) {
    y_data[i] = varargin_1_data[i];
  }
  i = y->size[0] * y->size[1] * y->size[2];
  y->size[0] = varargin_1->size[0];
  y->size[1] = varargin_1->size[1];
  y->size[2] = varargin_1->size[2] + varargin_2->size[2];
  emxEnsureCapacity_real_T(y, i);
  y_data = y->data;
  iy = varargin_1->size[0] * varargin_1->size[1] * varargin_1->size[2];
  i = varargin_2->size[0] * varargin_2->size[1] * varargin_2->size[2];
  for (j = 0; j < i; j++) {
    y_data[iy + j] = varargin_2_data[j];
  }
}

void cat(const emxArray_real_T *varargin_1, const emxArray_real_T *varargin_2,
         emxArray_real_T *y)
{
  const double *varargin_1_data;
  double *y_data;
  int i;
  int i1;
  int j;
  varargin_1_data = varargin_1->data;
  i = y->size[0] * y->size[1];
  y->size[0] = varargin_1->size[0];
  y->size[1] = 11;
  emxEnsureCapacity_real_T(y, i);
  y_data = y->data;
  i = varargin_1->size[0];
  for (j = 0; j < i; j++) {
    y_data[j] = varargin_1_data[j];
  }
  i1 = varargin_2->size[0] * 10;
  for (j = 0; j < i1; j++) {
    y_data[i + j] = rtNaN;
  }
}

/* End of code generation (cat.c) */
