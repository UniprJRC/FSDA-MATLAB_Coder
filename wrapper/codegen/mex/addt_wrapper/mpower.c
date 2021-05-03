/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mpower.c
 *
 * Code generation for function 'mpower'
 *
 */

/* Include files */
#include "mpower.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo n_emlrtRTEI = {
    36,       /* lineNo */
    23,       /* colNo */
    "mpower", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m" /* pName
                                                                       */
};

/* Function Definitions */
void mpower(const emlrtStack *sp, const real_T a_data[], int32_T a_size,
            real_T c_data[], int32_T *c_size)
{
  if (a_size != 1) {
    emlrtErrorWithMessageIdR2018a(sp, &n_emlrtRTEI, "MATLAB:square",
                                  "MATLAB:square", 0);
  }
  *c_size = 1;
  c_data[0] = a_data[0] * a_data[0];
}

/* End of code generation (mpower.c) */
