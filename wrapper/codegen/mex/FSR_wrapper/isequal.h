/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * isequal.h
 *
 * Code generation for function 'isequal'
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
boolean_T b_isequal(const emxArray_real_T *varargin_1,
                    const emxArray_real_T *varargin_2);

boolean_T c_isequal(const emxArray_boolean_T *varargin_1);

boolean_T isequal(const emxArray_real_T *varargin_1,
                  const emxArray_real_T *varargin_2);

/* End of code generation (isequal.h) */
