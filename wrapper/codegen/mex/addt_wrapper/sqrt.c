/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sqrt.c
 *
 * Code generation for function 'sqrt'
 *
 */

/* Include files */
#include "sqrt.h"
#include "addt_wrapper_data.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Function Definitions */
void b_sqrt(const emlrtStack *sp, real_T x_data[], const int32_T *x_size)
{
  int32_T k;
  boolean_T p;
  p = false;
  for (k = 0; k < *x_size; k++) {
    if (p || (x_data[0] < 0.0)) {
      p = true;
    }
  }
  if (p) {
    emlrtErrorWithMessageIdR2018a(
        sp, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  for (k = 0; k < *x_size; k++) {
    x_data[0] = muDoubleScalarSqrt(x_data[0]);
  }
}

/* End of code generation (sqrt.c) */
