/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LXS.h
 *
 * Code generation for function 'LXS'
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
void IRWLSreg(const emlrtStack *sp, const emxArray_real_T *y,
              const emxArray_real_T *X, const emxArray_real_T *initialbeta,
              real_T refsteps, real_T reftol, real_T h,
              emxArray_real_T *outIRWLS_betarw, real_T *outIRWLS_numscale2rw,
              emxArray_real_T *outIRWLS_weights);

real_T asvar(const emlrtStack *sp, real_T h, real_T n);

real_T corfactorRAW(const emlrtStack *sp, real_T n, real_T alpha);

real_T corfactorREW(const emlrtStack *sp, real_T n, real_T alpha);

/* End of code generation (LXS.h) */
