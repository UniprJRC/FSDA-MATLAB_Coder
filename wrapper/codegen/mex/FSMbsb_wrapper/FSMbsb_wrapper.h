/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSMbsb_wrapper.h
 *
 * Code generation for function 'FSMbsb_wrapper'
 *
 */

#pragma once

/* Include files */
#include "FSMbsb_wrapper_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void FSMbsb_wrapper(const emlrtStack *sp, const emxArray_real_T *Y,
                    const emxArray_real_T *bsb, const emxArray_real_T *bsbsteps,
                    real_T init, boolean_T msg, boolean_T nocheck,
                    emxArray_real_T *Un, emxArray_real_T *BB);

/* End of code generation (FSMbsb_wrapper.h) */
