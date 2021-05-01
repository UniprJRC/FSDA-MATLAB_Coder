/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_FSM_wrapper_mex.c
 *
 * Code generation for function '_coder_FSM_wrapper_mex'
 *
 */

/* Include files */
#include "_coder_FSM_wrapper_mex.h"
#include "FSM_wrapper_data.h"
#include "FSM_wrapper_initialize.h"
#include "FSM_wrapper_terminate.h"
#include "FSM_wrapper_types.h"
#include "_coder_FSM_wrapper_api.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void FSM_wrapper_mexFunction(FSM_wrapperStackData *SD, int32_T nlhs,
                             mxArray *plhs[1], int32_T nrhs,
                             const mxArray *prhs[8])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 8) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 8, 4,
                        11, "FSM_wrapper");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 11,
                        "FSM_wrapper");
  }
  /* Call the function. */
  FSM_wrapper_api(SD, prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  FSM_wrapperStackData *FSM_wrapperStackDataGlobal = NULL;
  FSM_wrapperStackDataGlobal = (FSM_wrapperStackData *)emlrtMxCalloc(
      (size_t)1, (size_t)1U * sizeof(FSM_wrapperStackData));
  mexAtExit(&FSM_wrapper_atexit);
  /* Module initialization. */
  FSM_wrapper_initialize();
  /* Dispatch the entry-point. */
  FSM_wrapper_mexFunction(FSM_wrapperStackDataGlobal, nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  FSM_wrapper_terminate();
  emlrtMxFree(FSM_wrapperStackDataGlobal);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_FSM_wrapper_mex.c) */
