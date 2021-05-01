/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * repelem.h
 *
 * Code generation for function 'repelem'
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
void repelem(const emlrtStack *sp, const real_T x_data[],
             const int32_T x_size[2], real_T varargin_1, emxArray_real_T *y);

/* End of code generation (repelem.h) */
