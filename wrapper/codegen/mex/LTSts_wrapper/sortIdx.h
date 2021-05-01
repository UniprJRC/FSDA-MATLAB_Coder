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
void b_sortIdx(const emlrtStack *sp, emxArray_real_T *x, emxArray_int32_T *idx);

void merge_block(const emlrtStack *sp, emxArray_int32_T *idx,
                 emxArray_real_T *x, int32_T offset, int32_T n,
                 int32_T preSortLevel, emxArray_int32_T *iwork,
                 emxArray_real_T *xwork);

void merge_pow2_block(emxArray_int32_T *idx, emxArray_real_T *x,
                      int32_T offset);

void sortIdx(const emlrtStack *sp, const emxArray_real_T *x,
             emxArray_int32_T *idx);

/* End of code generation (sortIdx.h) */
