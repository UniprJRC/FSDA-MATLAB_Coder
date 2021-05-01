/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * gammainc.h
 *
 * Code generation for function 'gammainc'
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
creal_T scalar_gammainc(const emlrtStack *sp, real_T x, real_T a, real_T la,
                        real_T lgap1);

/* End of code generation (gammainc.h) */
