/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSMenvmmd.h
 *
 * Code generation for function 'FSMenvmmd'
 *
 */

#pragma once

/* Include files */
#include "LXS_wrapper1_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void FSMenvmmd(const emlrtStack *sp, real_T n, real_T v, real_T varargin_4,
               emxArray_real_T *MMDenv);

void b_FSMenvmmd(const emlrtStack *sp, real_T n, real_T v, real_T varargin_4,
                 emxArray_real_T *MMDenv);

void c_FSMenvmmd(const emlrtStack *sp, real_T n, real_T v, real_T varargin_4,
                 emxArray_real_T *MMDenv);

/* End of code generation (FSMenvmmd.h) */
