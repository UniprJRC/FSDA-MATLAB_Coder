/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * str2double.h
 *
 * Code generation for function 'str2double'
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
creal_T b_str2double(const emlrtStack *sp, const char_T s[2]);

creal_T str2double(const emlrtStack *sp, char_T s);

/* End of code generation (str2double.h) */
