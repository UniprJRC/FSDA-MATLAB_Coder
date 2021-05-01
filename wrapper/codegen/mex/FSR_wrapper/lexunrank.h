/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lexunrank.h
 *
 * Code generation for function 'lexunrank'
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
void lexunrank(const emlrtStack *sp, real_T n, real_T k, real_T N,
               emxArray_real_T *kcomb);

/* End of code generation (lexunrank.h) */
