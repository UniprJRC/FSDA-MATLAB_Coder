/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSMbsb.h
 *
 * Code generation for function 'FSMbsb'
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
void FSMbsb(const emlrtStack *sp, const emxArray_real_T *Y,
            emxArray_real_T *bsb, real_T varargin_2, real_T varargin_4,
            emxArray_real_T *Un, emxArray_real_T *BB);

/* End of code generation (FSMbsb.h) */
