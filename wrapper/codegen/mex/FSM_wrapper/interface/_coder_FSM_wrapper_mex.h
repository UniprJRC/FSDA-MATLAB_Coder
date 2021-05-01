/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_FSM_wrapper_mex.h
 *
 * Code generation for function '_coder_FSM_wrapper_mex'
 *
 */

#pragma once

/* Include files */
#include "FSM_wrapper_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void FSM_wrapper_mexFunction(FSM_wrapperStackData *SD, int32_T nlhs,
                             mxArray *plhs[1], int32_T nrhs,
                             const mxArray *prhs[8]);

MEXFUNCTION_LINKAGE void mexFunction(int32_T nlhs, mxArray *plhs[],
                                     int32_T nrhs, const mxArray *prhs[]);

emlrtCTX mexFunctionCreateRootTLS(void);

/* End of code generation (_coder_FSM_wrapper_mex.h) */
