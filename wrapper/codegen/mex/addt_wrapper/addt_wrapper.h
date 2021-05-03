/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * addt_wrapper.h
 *
 * Code generation for function 'addt_wrapper'
 *
 */

#pragma once

/* Include files */
#include "addt_wrapper_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void addt_wrapper(const emlrtStack *sp, const emxArray_real_T *y,
                  const emxArray_real_T *X, const emxArray_real_T *w,
                  boolean_T intercept, const real_T la_data[],
                  const int32_T la_size[2], boolean_T nocheck, struct0_T *out);

/* End of code generation (addt_wrapper.h) */
