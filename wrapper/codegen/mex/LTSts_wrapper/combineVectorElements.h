/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * combineVectorElements.h
 *
 * Code generation for function 'combineVectorElements'
 *
 */

#pragma once

/* Include files */
#include "LTSts_wrapper_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
int32_T b_combineVectorElements(const emlrtStack *sp,
                                const emxArray_boolean_T *x);

int32_T combineVectorElements(const emlrtStack *sp,
                              const emxArray_boolean_T *x);

/* End of code generation (combineVectorElements.h) */