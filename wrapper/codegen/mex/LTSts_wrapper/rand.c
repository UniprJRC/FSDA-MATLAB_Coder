/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rand.c
 *
 * Code generation for function 'rand'
 *
 */

/* Include files */
#include "rand.h"
#include "rt_nonfinite.h"

/* Function Definitions */
real_T b_rand(void)
{
  real_T r;
  emlrtRandu(&r, 1);
  return r;
}

void c_rand(real_T varargin_2, real_T r_data[], int32_T r_size[2])
{
  r_size[0] = 1;
  r_size[1] = (int32_T)varargin_2;
  emlrtRandu(&r_data[0], (int32_T)varargin_2);
}

/* End of code generation (rand.c) */
