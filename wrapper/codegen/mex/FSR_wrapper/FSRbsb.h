/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRbsb.h
 *
 * Code generation for function 'FSRbsb'
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
void FSRbsb(const emlrtStack *sp, const emxArray_real_T *y,
            const emxArray_real_T *X, emxArray_real_T *bsb, real_T varargin_4,
            emxArray_real_T *Un, emxArray_real32_T *BB);

/* End of code generation (FSRbsb.h) */
