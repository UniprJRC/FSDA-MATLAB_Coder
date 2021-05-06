/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * warning.h
 *
 * Code generation for function 'warning'
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
void b_warning(const emlrtStack *sp, int32_T varargin_1,
               const char_T varargin_2[14]);

void c_warning(const emlrtStack *sp, const char_T varargin_1[23],
               const char_T varargin_2[23]);

void d_warning(const emlrtStack *sp, const char_T varargin_2[12]);

void e_warning(const emlrtStack *sp, const char_T varargin_1[14]);

void f_warning(const emlrtStack *sp);

void warning(const emlrtStack *sp);

/* End of code generation (warning.h) */
