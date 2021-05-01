/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSMmmd.h
 *
 * Code generation for function 'FSMmmd'
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
void FSMmmd(const emlrtStack *sp, const emxArray_real_T *Y,
            emxArray_real_T *bsb, real_T varargin_2, emxArray_real_T *mmd,
            emxArray_real_T *Un, emxArray_real_T *varargout_1);

void b_FSMmmd(const emlrtStack *sp, const emxArray_real_T *Y,
              emxArray_real_T *bsb, real_T varargin_2, emxArray_real_T *mmd,
              emxArray_real_T *Un);

/* End of code generation (FSMmmd.h) */
