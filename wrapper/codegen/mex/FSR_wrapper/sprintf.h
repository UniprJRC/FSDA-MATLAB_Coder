/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sprintf.h
 *
 * Code generation for function 'sprintf'
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
void b_sprintf(const emlrtStack *sp, real_T varargin_1, emxArray_char_T *str);

void c_sprintf(const emlrtStack *sp, real_T varargin_1);

/* End of code generation (sprintf.h) */
