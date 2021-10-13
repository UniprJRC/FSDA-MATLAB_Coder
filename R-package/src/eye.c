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
  double *I_data;
  int d;
  int i;
  int u0;
  u0 = (int)varargin_1;
  d = (int)varargin_2;
  if (u0 <= d) {
    d = u0;
  }
  i = b_I->size[0] * b_I->size[1];
  b_I->size[0] = (int)varargin_1;
  b_I->size[1] = (int)varargin_2;
  emxEnsureCapacity_real_T(b_I, i);
  I_data = b_I->data;
  u0 = (int)varargin_1 * (int)varargin_2;
  for (i = 0; i < u0; i++) {
    I_data[i] = 0.0;
  }
  if (d > 0) {
    for (u0 = 0; u0 < d; u0++) {
      I_data[u0 + b_I->size[0] * u0] = 1.0;
    }
  }
}

/* End of code generation (eye.c) */
