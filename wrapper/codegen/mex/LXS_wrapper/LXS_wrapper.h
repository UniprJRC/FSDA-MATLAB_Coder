/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LXS_wrapper.h
 *
 * Code generation for function 'LXS_wrapper'
 *
 */

#pragma once

/* Include files */
#include "LXS_wrapper_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void LXS_wrapper(LXS_wrapperStackData *SD, const emlrtStack *sp,
                 const emxArray_real_T *y, const emxArray_real_T *X,
                 const real_T bonflevoutX_data[],
                 const int32_T bonflevoutX_size[2], real_T conflev, real_T h,
                 boolean_T intercept, real_T lms, boolean_T msg,
                 boolean_T nocheck, boolean_T nomes, real_T nsamp,
                 boolean_T rew, boolean_T yxsave, struct_LXSlmsscalar_T *out,
                 emxArray_real_T *C);

/* End of code generation (LXS_wrapper.h) */
