/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_FSR_wrapper_mex.c
 *
 * Code generation for function '_coder_FSR_wrapper_mex'
 *
 */

/* Include files */
#include "_coder_FSR_wrapper_mex.h"
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_initialize.h"
#include "FSR_wrapper_terminate.h"
#include "FSR_wrapper_types.h"
#include "_coder_FSR_wrapper_api.h"
#include "rt_nonfinite.h"
#include <stddef.h>

/* Function Definitions */
void FSR_wrapper_mexFunction(FSR_wrapperStackData *SD, int32_T nlhs,
                             mxArray *plhs[1], int32_T nrhs,
                             const mxArray *prhs[13])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 13) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 13, 4,
                        11, "FSR_wrapper");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 11,
                        "FSR_wrapper");
  }
  /* Call the function. */
  FSR_wrapper_api(SD, prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  FSR_wrapperStackData *FSR_wrapperStackDataGlobal = NULL;
  FSR_wrapperStackDataGlobal = (FSR_wrapperStackData *)emlrtMxCalloc(
      (size_t)1, (size_t)1U * sizeof(FSR_wrapperStackData));
  mexAtExit(&FSR_wrapper_atexit);
  /* Module initialization. */
  FSR_wrapper_initialize();
  /* Dispatch the entry-point. */
  FSR_wrapper_mexFunction(FSR_wrapperStackDataGlobal, nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  FSR_wrapper_terminate();
  emlrtMxFree(FSR_wrapperStackDataGlobal);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_FSR_wrapper_mex.c) */
