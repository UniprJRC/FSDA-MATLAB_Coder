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
#include "eml_rand_mt19937ar.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void b_rand(double varargin_2, emxArray_real_T *r)
{
  double *r_data;
  int i;
  int k;
  k = r->size[0] * r->size[1];
  r->size[0] = 1;
  i = (int)varargin_2;
  r->size[1] = (int)varargin_2;
  emxEnsureCapacity_real_T(r, k);
  r_data = r->data;
  for (k = 0; k < i; k++) {
    r_data[k] = eml_rand_mt19937ar(state);
  }
}

double c_rand(void)
{
  return eml_rand_mt19937ar(state);
}

void d_rand(double varargin_1, emxArray_real_T *r)
{
  double *r_data;
  int i;
  int k;
  i = (int)varargin_1;
  k = r->size[0];
  r->size[0] = (int)varargin_1;
  emxEnsureCapacity_real_T(r, k);
  r_data = r->data;
  for (k = 0; k < i; k++) {
    r_data[k] = eml_rand_mt19937ar(state);
  }
}

/* End of code generation (rand.c) */
