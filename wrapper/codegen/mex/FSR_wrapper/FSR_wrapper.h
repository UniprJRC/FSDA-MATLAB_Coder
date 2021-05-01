/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSR_wrapper.h
 *
 * Code generation for function 'FSR_wrapper'
 *
 */

#pragma once

/* Include files */
#include "FSR_wrapper_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void FSR_wrapper(FSR_wrapperStackData *SD, const emlrtStack *sp,
                 const emxArray_real_T *y, const emxArray_real_T *X,
                 boolean_T bsbmfullrank, const real_T bonflev_data[],
                 const int32_T bonflev_size[2], real_T h, real_T init,
                 boolean_T intercept, real_T lms, boolean_T msg,
                 boolean_T nocheck, real_T nsamp,
                 const real_T threshoutX_data[],
                 const int32_T threshoutX_size[2], boolean_T weak,
                 struct0_T *out);

/* End of code generation (FSR_wrapper.h) */
