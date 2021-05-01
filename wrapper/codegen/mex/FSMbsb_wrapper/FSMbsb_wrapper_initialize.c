/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSMbsb_wrapper_initialize.c
 *
 * Code generation for function 'FSMbsb_wrapper_initialize'
 *
 */

/* Include files */
#include "FSMbsb_wrapper_initialize.h"
#include "FSMbsb_wrapper_data.h"
#include "_coder_FSMbsb_wrapper_mex.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void FSMbsb_wrapper_initialize(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mex_InitInfAndNan();
  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, NULL);
  emlrtEnterRtStackR2012b(&st);
  emlrtLicenseCheckR2012b(&st, (const char_T *)"statistics_toolbox", 2);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (FSMbsb_wrapper_initialize.c) */
