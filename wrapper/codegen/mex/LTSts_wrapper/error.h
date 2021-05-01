/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * error.h
 *
 * Code generation for function 'error'
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
void b_error(const emlrtStack *sp);

void c_error(const emlrtStack *sp, real_T varargin_3);

void d_error(const emlrtStack *sp, const char_T varargin_2_data[],
             const int32_T varargin_2_size[2]);

void e_error(const emlrtStack *sp);

void error(const emlrtStack *sp, real_T varargin_3);

void f_error(const emlrtStack *sp);

void g_error(const emlrtStack *sp);

void h_error(const emlrtStack *sp);

void i_error(const emlrtStack *sp);

void j_error(const emlrtStack *sp);

/* End of code generation (error.h) */
