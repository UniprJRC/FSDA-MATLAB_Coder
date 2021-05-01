/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_LXS_wrapper1_mex.c
 *
 * Code generation for function '_coder_LXS_wrapper1_mex'
 *
 */

/* Include files */
#include "_coder_LXS_wrapper1_mex.h"
#include "LXS_wrapper1_data.h"
#include "LXS_wrapper1_initialize.h"
#include "LXS_wrapper1_terminate.h"
#include "LXS_wrapper1_types.h"
#include "_coder_LXS_wrapper1_api.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void LXS_wrapper1_mexFunction(LXS_wrapper1StackData *SD, int32_T nlhs,
                              mxArray *plhs[2], int32_T nrhs,
                              const mxArray *prhs[13])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[2];
  int32_T b_nlhs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 13) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 13, 4,
                        12, "LXS_wrapper1");
  }
  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 12,
                        "LXS_wrapper1");
  }
  /* Call the function. */
  LXS_wrapper1_api(SD, prhs, nlhs, outputs);
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
  LXS_wrapper1StackData *LXS_wrapper1StackDataGlobal = NULL;
  LXS_wrapper1StackDataGlobal = (LXS_wrapper1StackData *)emlrtMxCalloc(
      (size_t)1, (size_t)1U * sizeof(LXS_wrapper1StackData));
  mexAtExit(&LXS_wrapper1_atexit);
  /* Module initialization. */
  LXS_wrapper1_initialize();
  /* Dispatch the entry-point. */
  LXS_wrapper1_mexFunction(LXS_wrapper1StackDataGlobal, nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  LXS_wrapper1_terminate();
  emlrtMxFree(LXS_wrapper1StackDataGlobal);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_LXS_wrapper1_mex.c) */
