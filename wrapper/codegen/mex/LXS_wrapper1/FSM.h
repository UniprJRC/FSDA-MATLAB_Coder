/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSM.h
 *
 * Code generation for function 'FSM'
 *
 */

#pragma once

/* Include files */
#include "LXS_wrapper1_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void FSM(LXS_wrapper1StackData *SD, const emlrtStack *sp, emxArray_real_T *Y,
         const real_T varargin_4_data[], const int32_T varargin_4_size[2],
         real_T varargin_8, const char_T varargin_10_data[],
         const int32_T varargin_10_size[2], real_T varargin_12,
         emxArray_real_T *out_outliers, emxArray_real_T *out_loc,
         emxArray_real_T *out_cov, emxArray_real_T *out_md,
         emxArray_real_T *out_mmd, emxArray_real_T *out_Un,
         real_T out_nout_data[], int32_T out_nout_size[2],
         char_T out_class_data[], int32_T out_class_size[2]);

/* End of code generation (FSM.h) */
