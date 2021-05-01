/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cat.h
 *
 * Code generation for function 'cat'
 *
 */

#pragma once

/* Include files */
#include "FSRfan_wrapper_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void b_cat(const emlrtStack *sp, const emxArray_real_T *varargin_1,
           const emxArray_real_T *varargin_2, emxArray_real_T *y);

void cat(const emlrtStack *sp, const emxArray_real_T *varargin_1,
         const emxArray_real_T *varargin_2, emxArray_real_T *y);

/* End of code generation (cat.h) */
