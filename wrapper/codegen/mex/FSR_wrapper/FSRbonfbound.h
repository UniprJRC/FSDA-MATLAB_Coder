/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRbonfbound.h
 *
 * Code generation for function 'FSRbonfbound'
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
void FSRbonfbound(const emlrtStack *sp, real_T n, real_T p,
                  const real_T varargin_2_data[],
                  const int32_T varargin_2_size[2], real_T varargin_4,
                  emxArray_real_T *Bbound);

/* End of code generation (FSRbonfbound.h) */
