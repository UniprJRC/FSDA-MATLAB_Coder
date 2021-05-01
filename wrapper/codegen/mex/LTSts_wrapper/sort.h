/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sort.h
 *
 * Code generation for function 'sort'
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
void b_sort(const emlrtStack *sp, emxArray_real_T *x);

void c_sort(const emlrtStack *sp, emxArray_real_T *x);

void d_sort(const emlrtStack *sp, emxArray_real_T *x);

void sort(const emlrtStack *sp, emxArray_real_T *x, emxArray_int32_T *idx);

/* End of code generation (sort.h) */
