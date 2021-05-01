/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_FSRmdr_wrapper_mex.c
 *
 * Code generation for function '_coder_FSRmdr_wrapper_mex'
 *
 */

/* Include files */
#include "_coder_FSRmdr_wrapper_mex.h"
#include "FSRmdr_wrapper_data.h"
#include "FSRmdr_wrapper_initialize.h"
#include "FSRmdr_wrapper_terminate.h"
#include "_coder_FSRmdr_wrapper_api.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void FSRmdr_wrapper_mexFunction(int32_T nlhs, mxArray *plhs[5], int32_T nrhs,
                                const mxArray *prhs[12])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[5];
  int32_T b_nlhs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 12) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 12, 4,
                        14, "FSRmdr_wrapper");
  }
  if (nlhs > 5) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 14,
                        "FSRmdr_wrapper");
  }
  /* Call the function. */
  FSRmdr_wrapper_api(prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }
  emlrtReturnArrays(b_nlhs, &plhs[0], &outputs[0]);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&FSRmdr_wrapper_atexit);
  /* Module initialization. */
  FSRmdr_wrapper_initialize();
  /* Dispatch the entry-point. */
  FSRmdr_wrapper_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  FSRmdr_wrapper_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_FSRmdr_wrapper_mex.c) */
