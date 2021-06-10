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
#include "LXS_wrapper1_emxutil.h"
#include "LXS_wrapper1_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo ep_emlrtRTEI = {
    100,    /* lineNo */
    28,     /* colNo */
    "rand", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\randfun\\rand.m" /* pName
                                                                         */
};

/* Function Definitions */
real_T b_rand(void)
{
  real_T r;
  emlrtRandu(&r, 1);
  return r;
}

void c_rand(const emlrtStack *sp, real_T varargin_2, emxArray_real_T *r)
{
  int32_T i;
  i = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = (int32_T)varargin_2;
  emxEnsureCapacity_real_T(sp, r, i, &ep_emlrtRTEI);
  emlrtRandu(&r->data[0], (int32_T)varargin_2);
}

/* End of code generation (rand.c) */
