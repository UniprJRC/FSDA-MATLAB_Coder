/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ifWhileCond.h
 *
 * Code generation for function 'ifWhileCond'
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
boolean_T b_ifWhileCond(const emlrtStack *sp, const emxArray_boolean_T *x);

boolean_T c_ifWhileCond(const boolean_T x_data[], const int32_T x_size[2]);

boolean_T ifWhileCond(const emlrtStack *sp, const emxArray_boolean_T *x);

/* End of code generation (ifWhileCond.h) */
