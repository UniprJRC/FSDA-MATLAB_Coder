/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * scanfornan.h
 *
 * Code generation for function 'scanfornan'
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
void scanfornan(const emlrtStack *sp, const emxArray_real_T *X, real_T nx,
                emxArray_boolean_T *nanobs);

/* End of code generation (scanfornan.h) */
