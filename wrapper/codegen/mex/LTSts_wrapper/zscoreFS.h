/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * zscoreFS.h
 *
 * Code generation for function 'zscoreFS'
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
void b_zscoreFS(const emlrtStack *sp, const emxArray_real_T *X,
                emxArray_real_T *Z, real_T *mu, real_T *sigma);

void c_zscoreFS(const emlrtStack *sp, const emxArray_real_T *X,
                emxArray_real_T *Z, real_T *mu, real_T *sigma);

void zscoreFS(const emlrtStack *sp, const emxArray_real_T *X,
              emxArray_real_T *Z, real_T *mu, real_T *sigma);

/* End of code generation (zscoreFS.h) */
