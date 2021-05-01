/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_fsdaC_mex.h
 *
 * Code generation for function 'FSM_wrapper'
 *
 */

#ifndef _CODER_FSDAC_MEX_H
#define _CODER_FSDAC_MEX_H

/* Include files */
#include "emlrt.h"
#include "mex.h"
#include "tmwtypes.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
MEXFUNCTION_LINKAGE void mexFunction(int32_T nlhs, mxArray *plhs[],
                                     int32_T nrhs, const mxArray *prhs[]);

emlrtCTX mexFunctionCreateRootTLS(void);

void unsafe_FSM_wrapper_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                    int32_T nrhs, const mxArray *prhs[8]);

void unsafe_FSMbsb_wrapper_mexFunction(int32_T nlhs, mxArray *plhs[2],
                                       int32_T nrhs, const mxArray *prhs[6]);

void unsafe_FSMmmd_wrapper_mexFunction(int32_T nlhs, mxArray *plhs[3],
                                       int32_T nrhs, const mxArray *prhs[6]);

void unsafe_FSR_wrapper_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                    int32_T nrhs, const mxArray *prhs[13]);

void unsafe_FSRbsb_wrapper_mexFunction(int32_T nlhs, mxArray *plhs[2],
                                       int32_T nrhs, const mxArray *prhs[8]);

void unsafe_FSRfan_wrapper_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                       int32_T nrhs, const mxArray *prhs[11]);

void unsafe_FSRmdr_wrapper_mexFunction(int32_T nlhs, mxArray *plhs[5],
                                       int32_T nrhs, const mxArray *prhs[12]);

void unsafe_LTSts_wrapper_mexFunction(int32_T nlhs, mxArray *plhs[2],
                                      int32_T nrhs, const mxArray *prhs[16]);

void unsafe_LXS_wrapper1_mexFunction(int32_T nlhs, mxArray *plhs[2],
                                     int32_T nrhs, const mxArray *prhs[13]);

void unsafe_LXS_wrapper_mexFunction(int32_T nlhs, mxArray *plhs[2],
                                    int32_T nrhs, const mxArray *prhs[13]);

void unsafe_addt_wrapper_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                     int32_T nrhs, const mxArray *prhs[6]);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (_coder_fsdaC_mex.h) */
