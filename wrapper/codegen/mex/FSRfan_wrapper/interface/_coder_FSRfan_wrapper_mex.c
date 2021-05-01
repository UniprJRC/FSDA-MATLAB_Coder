/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_FSRfan_wrapper_mex.c
 *
 * Code generation for function '_coder_FSRfan_wrapper_mex'
 *
 */

/* Include files */
#include "_coder_FSRfan_wrapper_mex.h"
#include "FSRfan_wrapper_data.h"
#include "FSRfan_wrapper_initialize.h"
#include "FSRfan_wrapper_terminate.h"
#include "_coder_FSRfan_wrapper_api.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void FSRfan_wrapper_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
                                const mxArray *prhs[11])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 11) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 11, 4,
                        14, "FSRfan_wrapper");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 14,
                        "FSRfan_wrapper");
  }
  /* Call the function. */
  FSRfan_wrapper_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&FSRfan_wrapper_atexit);
  /* Module initialization. */
  FSRfan_wrapper_initialize();
  /* Dispatch the entry-point. */
  FSRfan_wrapper_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  FSRfan_wrapper_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_FSRfan_wrapper_mex.c) */
