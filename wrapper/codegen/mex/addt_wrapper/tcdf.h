/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tcdf.h
 *
 * Code generation for function 'tcdf'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void tcdf(const emlrtStack *sp, const real_T x_data[], const int32_T x_size[2],
          real_T v, real_T p_data[], int32_T p_size[2]);

/* End of code generation (tcdf.h) */
