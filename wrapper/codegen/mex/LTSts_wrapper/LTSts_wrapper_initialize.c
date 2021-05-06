/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LTSts_wrapper_initialize.c
 *
 * Code generation for function 'LTSts_wrapper_initialize'
 *
 */

/* Include files */
#include "LTSts_wrapper_initialize.h"
#include "LTSts_wrapper_data.h"
#include "_coder_LTSts_wrapper_mex.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void LTSts_wrapper_initialize(void)
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
  emlrtLicenseCheckR2012b(&st, (const char_T *)"optimization_toolbox", 2);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (LTSts_wrapper_initialize.c) */
