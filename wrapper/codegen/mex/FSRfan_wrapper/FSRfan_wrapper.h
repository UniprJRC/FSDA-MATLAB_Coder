/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRfan_wrapper.h
 *
 * Code generation for function 'FSRfan_wrapper'
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
void FSRfan_wrapper(const emlrtStack *sp, const emxArray_real_T *y,
                    const emxArray_real_T *X, boolean_T intercept,
                    boolean_T nocheck, const emxArray_real_T *la, real_T h,
                    real_T nsamp, const emxArray_real_T *lms, real_T init,
                    const emxArray_char_T *family, boolean_T msg,
                    struct0_T *out);

/* End of code generation (FSRfan_wrapper.h) */
