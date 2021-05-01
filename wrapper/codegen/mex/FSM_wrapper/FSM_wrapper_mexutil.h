/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSM_wrapper_mexutil.h
 *
 * Code generation for function 'FSM_wrapper_mexutil'
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

const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const char_T u[29]);

const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b,
                         const mxArray *c, emlrtMCInfo *location);

void c_emlrt_marshallIn(const emlrtStack *sp,
                        const mxArray *a__output_of_sprintf_,
                        const char_T *identifier, char_T y[23]);

const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const char_T u[7]);

void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId, char_T y[23]);

const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const char_T u[4]);

const mxArray *d_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                       const mxArray *d, const mxArray *e,
                       emlrtMCInfo *location);

void disp(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);

void e_emlrt_marshallIn(const emlrtStack *sp,
                        const mxArray *a__output_of_sprintf_,
                        const char_T *identifier, char_T y[12]);

const mxArray *e_emlrt_marshallOut(const real_T u);

void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId, char_T y[12]);

const mxArray *fb_emlrt_marshallOut(const real_T u_data[],
                                    const int32_T u_size[2]);

const mxArray *feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                     const mxArray *d, emlrtMCInfo *location);

real_T g_emlrt_marshallIn(const emlrtStack *sp,
                          const mxArray *a__output_of_feval_,
                          const char_T *identifier);

real_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                          const emlrtMsgIdentifier *parentId);

const mxArray *h_emlrt_marshallOut(const emlrtStack *sp, const char_T u[19]);

void i_emlrt_marshallIn(const emlrtStack *sp,
                        const mxArray *a__output_of_sprintf_,
                        const char_T *identifier, char_T y[14]);

void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId, char_T y[14]);

const mxArray *j_emlrt_marshallOut(const emlrtStack *sp, const char_T u[41]);

void j_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
             emlrtMCInfo *location);

const mxArray *n_emlrt_marshallOut(const emlrtStack *sp, const char_T u[63]);

const mxArray *q_emlrt_marshallOut(const emlrtStack *sp, const char_T u[22]);

const mxArray *r_emlrt_marshallOut(const emlrtStack *sp, const char_T u[61]);

const mxArray *s_emlrt_marshallOut(const emlrtStack *sp, const char_T u[62]);

const mxArray *t_emlrt_marshallOut(const emlrtStack *sp, const char_T u[21]);

const mxArray *u_emlrt_marshallOut(const emlrtStack *sp, const char_T u[42]);

void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                        const emlrtMsgIdentifier *msgId, char_T ret[23]);

const mxArray *v_emlrt_marshallOut(const emlrtStack *sp, const char_T u[100]);

void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                        const emlrtMsgIdentifier *msgId, char_T ret[12]);

const mxArray *w_emlrt_marshallOut(const emlrtStack *sp, const char_T u_data[],
                                   const int32_T u_size[2]);

real_T x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                          const emlrtMsgIdentifier *msgId);

void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                        const emlrtMsgIdentifier *msgId, char_T ret[14]);

/* End of code generation (FSM_wrapper_mexutil.h) */
