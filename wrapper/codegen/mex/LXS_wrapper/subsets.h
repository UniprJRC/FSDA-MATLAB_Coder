/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * subsets.h
 *
 * Code generation for function 'subsets'
 *
 */

#pragma once

/* Include files */
#include "LXS_wrapper_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void subsets(const emlrtStack *sp, real_T nsamp, real_T n, real_T p,
             real_T ncomb, boolean_T msg, emxArray_real_T *C,
             real_T *nselected);

/* End of code generation (subsets.h) */
