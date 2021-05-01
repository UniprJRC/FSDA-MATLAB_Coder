/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Score.h
 *
 * Code generation for function 'Score'
 *
 */

#pragma once

/* Include files */
#include "FSRfan_wrapper_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void Score(const emlrtStack *sp, const emxArray_real_T *y,
           const emxArray_real_T *X, real_T varargin_2,
           real_T outSC_Score_data[], int32_T *outSC_Score_size,
           real_T *outSC_Lik);

/* End of code generation (Score.h) */
