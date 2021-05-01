/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRinvmdr.h
 *
 * Code generation for function 'FSRinvmdr'
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
void FSRinvmdr(const emlrtStack *sp, const real_T mdr[2], real_T p,
               real_T MDRinv[3]);

/* End of code generation (FSRinvmdr.h) */
