/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sortIdx.h
 *
 * Code generation for function 'sortIdx'
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
void b_sortIdx(const emlrtStack *sp, emxArray_real_T *x, emxArray_int32_T *idx);

void sortIdx(const emlrtStack *sp, const emxArray_real_T *x,
             emxArray_int32_T *idx);

/* End of code generation (sortIdx.h) */
