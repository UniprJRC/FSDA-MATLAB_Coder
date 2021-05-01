/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * issorted.h
 *
 * Code generation for function 'issorted'
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
boolean_T b_issorted(const emxArray_real_T *x);

boolean_T issorted(const emlrtStack *sp, const emxArray_real_T *x);

/* End of code generation (issorted.h) */
