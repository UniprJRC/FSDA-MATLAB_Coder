/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LTSts_wrapper_mexutil.h
 *
 * Code generation for function 'LTSts_wrapper_mexutil'
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
real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                          const emlrtMsgIdentifier *parentId);

real_T bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                           const emlrtMsgIdentifier *msgId);

const mxArray *c_sprintf(const emlrtStack *sp, const mxArray *b,
                         const mxArray *c, emlrtMCInfo *location);

const mxArray *d_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                       const mxArray *d, const mxArray *e,
                       emlrtMCInfo *location);

void disp(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);

void eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                         const emlrtMsgIdentifier *msgId, char_T ret[14]);

real_T emlrt_marshallIn(const emlrtStack *sp,
                        const mxArray *a__output_of_length_,
                        const char_T *identifier);

const mxArray *feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                     const mxArray *d, emlrtMCInfo *location);

void g_emlrt_marshallIn(const emlrtStack *sp,
                        const mxArray *a__output_of_sprintf_,
                        const char_T *identifier, char_T y[14]);

void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId, char_T y[14]);

void l_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
             emlrtMCInfo *location);

/* End of code generation (LTSts_wrapper_mexutil.h) */
