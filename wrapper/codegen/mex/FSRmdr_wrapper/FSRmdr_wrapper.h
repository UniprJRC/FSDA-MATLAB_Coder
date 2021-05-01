/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRmdr_wrapper.h
 *
 * Code generation for function 'FSRmdr_wrapper'
 *
 */

#pragma once

/* Include files */
#include "FSRmdr_wrapper_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void FSRmdr_wrapper(const emlrtStack *sp, const emxArray_real_T *y,
                    const emxArray_real_T *X, const emxArray_real_T *bsb,
                    boolean_T bsbmfullrank, const emxArray_real_T *bsbsteps,
                    const emxArray_real_T *constr, real_T init,
                    boolean_T intercept, boolean_T internationaltrade,
                    boolean_T msg, boolean_T nocheck,
                    const real_T threshlevoutX_data[],
                    const int32_T threshlevoutX_size[2], emxArray_real_T *mdr,
                    emxArray_real_T *Un, emxArray_real_T *BB,
                    emxArray_real_T *Bols, emxArray_real_T *S2);

/* End of code generation (FSRmdr_wrapper.h) */
