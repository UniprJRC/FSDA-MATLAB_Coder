/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_LTSts_wrapper_mex.c
 *
 * Code generation for function '_coder_LTSts_wrapper_mex'
 *
 */

/* Include files */
#include "_coder_LTSts_wrapper_mex.h"
#include "LTSts_wrapper.h"
#include "LTSts_wrapper_data.h"
#include "LTSts_wrapper_initialize.h"
#include "LTSts_wrapper_terminate.h"
#include "_coder_LTSts_wrapper_api.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void LTSts_wrapper_mexFunction(int32_T nlhs, mxArray *plhs[2], int32_T nrhs,
                               const mxArray *prhs[16])
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
  if (nrhs != 16) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 16, 4,
                        13, "LTSts_wrapper");
  }
  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 13,
                        "LTSts_wrapper");
  }
  /* Call the function. */
  LTSts_wrapper_api(prhs, nlhs, outputs);
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
  static jmp_buf emlrtJBEnviron;
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexAtExit(&LTSts_wrapper_atexit);
  emlrtLoadLibrary(
      (const char_T *)"C:\\ProgramData\\MATLAB\\SupportPackages\\R2017b\\3P."
                      "instrset\\mingw_w64.instrset\\bin\\libgomp-1.dll");
  /* Initialize the memory manager. */
  omp_init_lock(&emlrtLockGlobal);
  omp_init_nest_lock(&emlrtNestLockGlobal);
  /* Module initialization. */
  LTSts_wrapper_initialize();
  st.tls = emlrtRootTLSGlobal;
  emlrtSetJmpBuf(&st, &emlrtJBEnviron);
  if (setjmp(emlrtJBEnviron) == 0) {
    /* Dispatch the entry-point. */
    LTSts_wrapper_mexFunction(nlhs, plhs, nrhs, prhs);
    /* Module termination. */
    LTSts_wrapper_terminate();
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&emlrtNestLockGlobal);
  } else {
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&emlrtNestLockGlobal);
    emlrtReportParallelRunTimeError(&st);
  }
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal,
                           &emlrtLockerFunction, omp_get_num_procs(), NULL);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_LTSts_wrapper_mex.c) */
