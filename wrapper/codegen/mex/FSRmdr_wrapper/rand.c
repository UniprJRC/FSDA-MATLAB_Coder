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
#include "FSRmdr_wrapper_emxutil.h"
#include "FSRmdr_wrapper_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo kf_emlrtRTEI = {
    100,    /* lineNo */
    28,     /* colNo */
    "rand", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\randfun\\rand.m" /* pName
                                                                         */
};

/* Function Definitions */
void b_rand(const emlrtStack *sp, real_T varargin_2, emxArray_real_T *r)
{
  int32_T i;
  i = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = (int32_T)varargin_2;
  emxEnsureCapacity_real_T(sp, r, i, &kf_emlrtRTEI);
  if ((int32_T)varargin_2 != 0) {
    emlrtRandu(&r->data[0], (int32_T)varargin_2);
  }
}

real_T c_rand(void)
{
  real_T r;
  emlrtRandu(&r, 1);
  return r;
}

/* End of code generation (rand.c) */
