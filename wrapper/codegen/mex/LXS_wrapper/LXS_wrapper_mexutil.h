/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LXS_wrapper_mexutil.h
 *
 * Code generation for function 'LXS_wrapper_mexutil'
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
void b_disp(const emlrtStack *sp, const mxArray *b, const mxArray *c,
            emlrtMCInfo *location);

const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b,
                         const mxArray *c, emlrtMCInfo *location);

void c_emlrt_marshallIn(const emlrtStack *sp,
                        const mxArray *a__output_of_sprintf_,
                        const char_T *identifier, char_T y[23]);

const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const char_T u[22]);

void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId, char_T y[23]);

const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const char_T u[7]);

const mxArray *d_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                       const mxArray *d, const mxArray *e,
                       emlrtMCInfo *location);

void disp(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);

void e_emlrt_marshallIn(const emlrtStack *sp,
                        const mxArray *a__output_of_sprintf_,
                        const char_T *identifier, char_T y[12]);

const mxArray *e_emlrt_marshallOut(const emlrtStack *sp, const char_T u[4]);

const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[29]);

void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId, char_T y[12]);

const mxArray *f_emlrt_marshallOut(const real_T u);

const mxArray *feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                     const mxArray *d, emlrtMCInfo *location);

real_T g_emlrt_marshallIn(const emlrtStack *sp,
                          const mxArray *a__output_of_feval_,
                          const char_T *identifier);

real_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                          const emlrtMsgIdentifier *parentId);

void i_emlrt_marshallIn(const emlrtStack *sp,
                        const mxArray *a__output_of_sprintf_,
                        const char_T *identifier, char_T y[14]);

void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId, char_T y[14]);

const mxArray *j_emlrt_marshallOut(const emlrtStack *sp, const char_T u[63]);

const mxArray *l_emlrt_marshallOut(const emlrtStack *sp, const char_T u[41]);

const mxArray *o_emlrt_marshallOut(const emlrtStack *sp, const char_T u[61]);

void o_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
             emlrtMCInfo *location);

const mxArray *p_emlrt_marshallOut(const emlrtStack *sp, const char_T u[62]);

const mxArray *q_emlrt_marshallOut(const emlrtStack *sp, const char_T u[42]);

const mxArray *r_emlrt_marshallOut(const emlrtStack *sp, const char_T u[100]);

const mxArray *s_emlrt_marshallOut(const emlrtStack *sp, const char_T u[67]);

void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                        const emlrtMsgIdentifier *msgId, char_T ret[23]);

void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                        const emlrtMsgIdentifier *msgId, char_T ret[12]);

real_T v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                          const emlrtMsgIdentifier *msgId);

void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                        const emlrtMsgIdentifier *msgId, char_T ret[14]);

/* End of code generation (LXS_wrapper_mexutil.h) */
