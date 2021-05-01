/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRenvmdr.h
 *
 * Code generation for function 'FSRenvmdr'
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
void FSRenvmdr(const emlrtStack *sp, real_T n, real_T p, real_T varargin_4,
               emxArray_real_T *MDRenv);

void b_FSRenvmdr(const emlrtStack *sp, real_T n, real_T p, real_T varargin_4,
                 emxArray_real_T *MDRenv);

void c_FSRenvmdr(const emlrtStack *sp, real_T n, real_T p, real_T varargin_4,
                 emxArray_real_T *MDRenv);

void d_FSRenvmdr(const emlrtStack *sp, real_T n, real_T p, real_T varargin_4,
                 emxArray_real_T *MDRenv);

/* End of code generation (FSRenvmdr.h) */
