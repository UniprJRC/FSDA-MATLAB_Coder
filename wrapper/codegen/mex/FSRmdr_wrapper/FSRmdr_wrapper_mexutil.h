/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRmdr_wrapper_mexutil.h
 *
 * Code generation for function 'FSRmdr_wrapper_mexutil'
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
void b_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
             emlrtMCInfo *location);

const mxArray *b_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                       const mxArray *d, const mxArray *e,
                       emlrtMCInfo *location);

real_T c_emlrt_marshallIn(const emlrtStack *sp,
                          const mxArray *a__output_of_feval_,
                          const char_T *identifier);

real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                          const emlrtMsgIdentifier *parentId);

const mxArray *feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                     const mxArray *d, emlrtMCInfo *location);

real_T t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                          const emlrtMsgIdentifier *msgId);

/* End of code generation (FSRmdr_wrapper_mexutil.h) */
