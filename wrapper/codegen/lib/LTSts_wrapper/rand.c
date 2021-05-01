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
#include "LTSts_wrapper_data.h"
#include "eml_rand_mt19937ar.h"
#include "rt_nonfinite.h"

/* Function Definitions */
double b_rand(void)
{
  return eml_rand_mt19937ar(state);
}

void c_rand(double varargin_2, double r_data[], int r_size[2])
{
  int i;
  int k;
  r_size[0] = 1;
  i = (int)varargin_2;
  r_size[1] = (int)varargin_2;
  for (k = 0; k < i; k++) {
    r_data[k] = eml_rand_mt19937ar(state);
  }
}

/* End of code generation (rand.c) */
