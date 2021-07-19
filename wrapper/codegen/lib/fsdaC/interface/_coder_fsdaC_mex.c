/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_fsdaC_mex.c
 *
 * Code generation for function 'FSM_wrapper'
 *
 */

/* Include files */
#include "_coder_fsdaC_mex.h"
#include "_coder_fsdaC_api.h"

/* Function Definitions */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  static const char_T *emlrtEntryPoints[17] = {
      "FSM_wrapper",     "FSMbsb_wrapper",    "FSMenvmmd_wrapper",
      "FSMmmd_wrapper",  "FSR_wrapper",       "FSR_wrapper1",
      "FSRbsb_wrapper",  "FSRenvmdr_wrapper", "FSRfan_wrapper",
      "FSRmdr_wrapper",  "LTSts_wrapper",     "LXS_wrapper",
      "LXS_wrapper1",    "addt_wrapper",      "tclust_wrapper",
      "tclust_wrapper1", "unibiv_wrapper"};
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexAtExit(&fsdaC_atexit);
  /* Module initialization. */
  fsdaC_initialize();
  st.tls = emlrtRootTLSGlobal;
  /* Dispatch the entry-point. */
  switch (emlrtGetEntryPointIndexR2016a(
      &st, nrhs, &prhs[0], (const char_T **)&emlrtEntryPoints[0], 17)) {
  case 0:
    unsafe_FSM_wrapper_mexFunction(nlhs, plhs, nrhs - 1, &prhs[1]);
    break;
  case 1:
    unsafe_FSMbsb_wrapper_mexFunction(nlhs, plhs, nrhs - 1, &prhs[1]);
    break;
  case 2:
    unsafe_FSMenvmmd_wrapper_mexFunction(nlhs, plhs, nrhs - 1, &prhs[1]);
    break;
  case 3:
    unsafe_FSMmmd_wrapper_mexFunction(nlhs, plhs, nrhs - 1, &prhs[1]);
    break;
  case 4:
    unsafe_FSR_wrapper_mexFunction(nlhs, plhs, nrhs - 1, &prhs[1]);
    break;
  case 5:
    unsafe_FSR_wrapper1_mexFunction(nlhs, plhs, nrhs - 1, &prhs[1]);
    break;
  case 6:
    unsafe_FSRbsb_wrapper_mexFunction(nlhs, plhs, nrhs - 1, &prhs[1]);
    break;
  case 7:
    unsafe_FSRenvmdr_wrapper_mexFunction(nlhs, plhs, nrhs - 1, &prhs[1]);
    break;
  case 8:
    unsafe_FSRfan_wrapper_mexFunction(nlhs, plhs, nrhs - 1, &prhs[1]);
    break;
  case 9:
    unsafe_FSRmdr_wrapper_mexFunction(nlhs, plhs, nrhs - 1, &prhs[1]);
    break;
  case 10:
    unsafe_LTSts_wrapper_mexFunction(nlhs, plhs, nrhs - 1, &prhs[1]);
    break;
  case 11:
    unsafe_LXS_wrapper_mexFunction(nlhs, plhs, nrhs - 1, &prhs[1]);
    break;
  case 12:
    unsafe_LXS_wrapper1_mexFunction(nlhs, plhs, nrhs - 1, &prhs[1]);
    break;
  case 13:
    unsafe_addt_wrapper_mexFunction(nlhs, plhs, nrhs - 1, &prhs[1]);
    break;
  case 14:
    unsafe_tclust_wrapper_mexFunction(nlhs, plhs, nrhs - 1, &prhs[1]);
    break;
  case 15:
    unsafe_tclust_wrapper1_mexFunction(nlhs, plhs, nrhs - 1, &prhs[1]);
    break;
  case 16:
    unsafe_unibiv_wrapper_mexFunction(nlhs, plhs, nrhs - 1, &prhs[1]);
    break;
  }
  /* Module termination. */
  fsdaC_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2021a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL);
  return emlrtRootTLSGlobal;
}

void unsafe_FSM_wrapper_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                    int32_T nrhs, const mxArray *prhs[8])
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
  FSM_wrapper_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void unsafe_FSMbsb_wrapper_mexFunction(int32_T nlhs, mxArray *plhs[2],
                                       int32_T nrhs, const mxArray *prhs[6])
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
  if (nrhs != 6) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 6, 4,
                        14, "FSMbsb_wrapper");
  }
  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 14,
                        "FSMbsb_wrapper");
  }
  /* Call the function. */
  FSMbsb_wrapper_api(prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }
  emlrtReturnArrays(b_nlhs, &plhs[0], &outputs[0]);
}

void unsafe_FSMenvmmd_wrapper_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                          int32_T nrhs, const mxArray *prhs[5])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 5) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 5, 4,
                        17, "FSMenvmmd_wrapper");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 17,
                        "FSMenvmmd_wrapper");
  }
  /* Call the function. */
  FSMenvmmd_wrapper_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void unsafe_FSMmmd_wrapper_mexFunction(int32_T nlhs, mxArray *plhs[3],
                                       int32_T nrhs, const mxArray *prhs[6])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[3];
  int32_T b_nlhs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 6) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 6, 4,
                        14, "FSMmmd_wrapper");
  }
  if (nlhs > 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 14,
                        "FSMmmd_wrapper");
  }
  /* Call the function. */
  FSMmmd_wrapper_api(prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }
  emlrtReturnArrays(b_nlhs, &plhs[0], &outputs[0]);
}

void unsafe_FSR_wrapper1_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                     int32_T nrhs, const mxArray *prhs[13])
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
                        12, "FSR_wrapper1");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 12,
                        "FSR_wrapper1");
  }
  /* Call the function. */
  FSR_wrapper1_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void unsafe_FSR_wrapper_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                    int32_T nrhs, const mxArray *prhs[13])
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
  FSR_wrapper_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void unsafe_FSRbsb_wrapper_mexFunction(int32_T nlhs, mxArray *plhs[2],
                                       int32_T nrhs, const mxArray *prhs[8])
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
  if (nrhs != 8) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 8, 4,
                        14, "FSRbsb_wrapper");
  }
  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 14,
                        "FSRbsb_wrapper");
  }
  /* Call the function. */
  FSRbsb_wrapper_api(prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }
  emlrtReturnArrays(b_nlhs, &plhs[0], &outputs[0]);
}

void unsafe_FSRenvmdr_wrapper_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                          int32_T nrhs, const mxArray *prhs[4])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 4, 4,
                        17, "FSRenvmdr_wrapper");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 17,
                        "FSRenvmdr_wrapper");
  }
  /* Call the function. */
  FSRenvmdr_wrapper_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

void unsafe_FSRfan_wrapper_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                       int32_T nrhs, const mxArray *prhs[11])
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

void unsafe_FSRmdr_wrapper_mexFunction(int32_T nlhs, mxArray *plhs[5],
                                       int32_T nrhs, const mxArray *prhs[12])
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

void unsafe_LTSts_wrapper_mexFunction(int32_T nlhs, mxArray *plhs[2],
                                      int32_T nrhs, const mxArray *prhs[16])
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

void unsafe_LXS_wrapper1_mexFunction(int32_T nlhs, mxArray *plhs[2],
                                     int32_T nrhs, const mxArray *prhs[13])
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
  LXS_wrapper1_api(prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }
  emlrtReturnArrays(b_nlhs, &plhs[0], &outputs[0]);
}

void unsafe_LXS_wrapper_mexFunction(int32_T nlhs, mxArray *plhs[2],
                                    int32_T nrhs, const mxArray *prhs[13])
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
                        11, "LXS_wrapper");
  }
  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 11,
                        "LXS_wrapper");
  }
  /* Call the function. */
  LXS_wrapper_api(prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }
  emlrtReturnArrays(b_nlhs, &plhs[0], &outputs[0]);
}

void unsafe_addt_wrapper_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                     int32_T nrhs, const mxArray *prhs[6])
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

void unsafe_tclust_wrapper1_mexFunction(int32_T nlhs, mxArray *plhs[2],
                                        int32_T nrhs, const mxArray *prhs[14])
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
  if (nrhs != 14) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 14, 4,
                        15, "tclust_wrapper1");
  }
  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 15,
                        "tclust_wrapper1");
  }
  /* Call the function. */
  tclust_wrapper1_api(prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }
  emlrtReturnArrays(b_nlhs, &plhs[0], &outputs[0]);
}

void unsafe_tclust_wrapper_mexFunction(int32_T nlhs, mxArray *plhs[2],
                                       int32_T nrhs, const mxArray *prhs[14])
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
  if (nrhs != 14) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 14, 4,
                        14, "tclust_wrapper");
  }
  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 14,
                        "tclust_wrapper");
  }
  /* Call the function. */
  tclust_wrapper_api(prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }
  emlrtReturnArrays(b_nlhs, &plhs[0], &outputs[0]);
}

void unsafe_unibiv_wrapper_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                       int32_T nrhs, const mxArray *prhs[4])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 4, 4,
                        14, "unibiv_wrapper");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 14,
                        "unibiv_wrapper");
  }
  /* Call the function. */
  unibiv_wrapper_api(prhs, &outputs);
  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

/* End of code generation (_coder_fsdaC_mex.c) */
