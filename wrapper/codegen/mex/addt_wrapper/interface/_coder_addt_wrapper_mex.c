/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_addt_wrapper_mex.c
 *
 * Code generation for function '_coder_addt_wrapper_mex'
 *
 */

/* Include files */
#include "_coder_addt_wrapper_mex.h"
#include "_coder_addt_wrapper_api.h"
#include "addt_wrapper_data.h"
#include "addt_wrapper_initialize.h"
#include "addt_wrapper_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void addt_wrapper_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
                              const mxArray *prhs[6])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 6) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 6, 4,
                        12, "addt_wrapper");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 12,
                        "addt_wrapper");
  }
  /* Call the function. */
  addt_wrapper_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&addt_wrapper_atexit);
  /* Module initialization. */
  addt_wrapper_initialize();
  /* Dispatch the entry-point. */
  addt_wrapper_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  addt_wrapper_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_addt_wrapper_mex.c) */
