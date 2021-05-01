/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * indexShapeCheck.h
 *
 * Code generation for function 'indexShapeCheck'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void b_indexShapeCheck(const emlrtStack *sp, const int32_T matrixSize[2],
                       const int32_T indexSize[2]);

void c_indexShapeCheck(const emlrtStack *sp, const int32_T matrixSize[2],
                       int32_T indexSize);

void indexShapeCheck(const emlrtStack *sp, int32_T matrixSize,
                     const int32_T indexSize[2]);

/* End of code generation (indexShapeCheck.h) */
