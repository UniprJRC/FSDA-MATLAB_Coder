/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * norminv.h
 *
 * Code generation for function 'norminv'
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
void b_norminv(const emlrtStack *sp, const emxArray_real_T *p,
               emxArray_real_T *x);

real_T norminv(const emlrtStack *sp, real_T p);

/* End of code generation (norminv.h) */
