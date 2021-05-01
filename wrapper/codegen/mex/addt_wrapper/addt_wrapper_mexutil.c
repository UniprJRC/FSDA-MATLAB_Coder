/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * addt_wrapper_mexutil.c
 *
 * Code generation for function 'addt_wrapper_mexutil'
 *
 */

/* Include files */
#include "addt_wrapper_mexutil.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void b_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
             emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "error", true, location);
}

/* End of code generation (addt_wrapper_mexutil.c) */
