/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * chi2inv.h
 *
 * Code generation for function 'chi2inv'
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
void b_chi2inv(const emlrtStack *sp, const emxArray_real_T *p, real_T v,
               emxArray_real_T *x);

real_T chi2inv(const emlrtStack *sp, real_T p, real_T v);

/* End of code generation (chi2inv.h) */
