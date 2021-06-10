/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eye.c
 *
 * Code generation for function 'eye'
 *
 */

/* Include files */
#include "eye.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void eye(double varargin_1, double varargin_2, emxArray_real_T *b_I)
{
  int d;
  int i;
  int loop_ub;
  if ((int)varargin_1 <= (int)varargin_2) {
    d = (int)varargin_1;
  } else {
    d = (int)varargin_2;
  }
  i = b_I->size[0] * b_I->size[1];
  b_I->size[0] = (int)varargin_1;
  b_I->size[1] = (int)varargin_2;
  emxEnsureCapacity_real_T(b_I, i);
  loop_ub = (int)varargin_1 * (int)varargin_2;
  for (i = 0; i < loop_ub; i++) {
    b_I->data[i] = 0.0;
  }
  if (d > 0) {
    for (loop_ub = 0; loop_ub < d; loop_ub++) {
      b_I->data[loop_ub + b_I->size[0] * loop_ub] = 1.0;
    }
  }
}

/* End of code generation (eye.c) */
