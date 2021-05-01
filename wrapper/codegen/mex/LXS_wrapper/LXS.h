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
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
real_T asvar(const emlrtStack *sp, real_T h, real_T n);

real_T corfactorRAW(const emlrtStack *sp, real_T n, real_T alpha);

real_T corfactorREW(const emlrtStack *sp, real_T n, real_T alpha);

/* End of code generation (LXS.h) */
