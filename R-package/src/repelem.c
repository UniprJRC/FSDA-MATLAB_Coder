/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * repelem.c
 *
 * Code generation for function 'repelem'
 *
 */

/* Include files */
#include "repelem.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void repelem(const double x_data[], const int x_size[2], double varargin_1,
             emxArray_real_T *y)
{
  double *y_data;
  int i;
  int k;
  int mrows;
  int rowIdx;
  int rowreps;
  mrows = y->size[0] * y->size[1];
  rowIdx = x_size[0] * (int)varargin_1;
  y->size[0] = rowIdx;
  y->size[1] = x_size[1];
  emxEnsureCapacity_real_T(y, mrows);
  y_data = y->data;
  if ((rowIdx != 0) && (x_size[1] != 0)) {
    mrows = x_size[0];
    rowIdx = -1;
    for (i = 0; i < mrows; i++) {
      rowreps = (int)varargin_1;
      for (k = 0; k < rowreps; k++) {
        y_data[(rowIdx + k) + 1] = x_data[0];
      }
      rowIdx += (int)varargin_1;
    }
  }
}

/* End of code generation (repelem.c) */
