/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRmdr.h
 *
 * Code generation for function 'FSRmdr'
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
void FSRmdr(const emlrtStack *sp, const emxArray_real_T *y,
            const emxArray_real_T *X, emxArray_real_T *bsb, real_T varargin_2,
            boolean_T varargin_8, const emxArray_real_T *varargin_10,
            const real_T varargin_14_data[], const int32_T varargin_14_size[2],
            const emxArray_real_T *varargin_18, emxArray_real_T *mdr,
            emxArray_real_T *Un, emxArray_real_T *BB, emxArray_real_T *Bols,
            emxArray_real_T *S2);

/* End of code generation (FSRmdr.h) */
