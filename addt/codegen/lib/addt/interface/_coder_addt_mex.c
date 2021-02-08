/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_addt_mex.c
 *
 * Code generation for function 'addt'
 *
 */

/* Include files */
#include "_coder_addt_mex.h"
#include "_coder_addt_api.h"

/* Function Definitions */
void addt_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs, const
                      mxArray *prhs[19])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *outputs[1];
  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs < 19) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooFewInputsConstants", 9, 4, 4,
                        "addt", 4, 4, "addt", 4, 4, "addt");
  }

  if (nrhs != 19) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 19, 4,
                        4, "addt");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 4,
                        "addt");
  }

  /* Call the function. */
  addt_api(prhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(&addt_atexit);

  /* Module initialization. */
  addt_initialize();

  /* Dispatch the entry-point. */
  addt_mexFunction(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  addt_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_addt_mex.c) */
