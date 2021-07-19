/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSR_wrapper_mexutil.h
 *
 * Code generation for function 'FSR_wrapper_mexutil'
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
const mxArray *ab_emlrt_marshallOut(const emlrtStack *sp, const char_T u[100]);

void b_disp(const emlrtStack *sp, const mxArray *b, const mxArray *c,
            emlrtMCInfo *location);

const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const char_T u[29]);

void c_emlrt_marshallIn(const emlrtStack *sp,
                        const mxArray *a__output_of_sprintf_,
                        const char_T *identifier, char_T y[23]);

const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const char_T u[21]);

const mxArray *cb_emlrt_marshallOut(const emlrtStack *sp, const char_T u_data[],
                                    const int32_T u_size[2]);

void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId, char_T y[23]);

const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const char_T u[25]);

const mxArray *d_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                       const mxArray *d, const mxArray *e,
                       emlrtMCInfo *location);

const mxArray *d_sprintf(const emlrtStack *sp, const mxArray *b,
                         const mxArray *c, emlrtMCInfo *location);

void disp(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);

void e_emlrt_marshallIn(const emlrtStack *sp,
                        const mxArray *a__output_of_sprintf_,
                        const char_T *identifier, char_T y[12]);

const mxArray *e_emlrt_marshallOut(const emlrtStack *sp, const char_T u[22]);

const mxArray *e_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                       const mxArray *d, const mxArray *e, const mxArray *f,
                       emlrtMCInfo *location);

void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId, char_T y[12]);

const mxArray *feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                     const mxArray *d, emlrtMCInfo *location);

real_T g_emlrt_marshallIn(const emlrtStack *sp,
                          const mxArray *a__output_of_feval_,
                          const char_T *identifier);

const mxArray *g_emlrt_marshallOut(const emlrtStack *sp, const char_T u[7]);

const mxArray *gb_emlrt_marshallOut(const emxArray_real_T *u);

real_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                          const emlrtMsgIdentifier *parentId);

const mxArray *h_emlrt_marshallOut(const emlrtStack *sp, const char_T u[4]);

void i_emlrt_marshallIn(const emlrtStack *sp,
                        const mxArray *a__output_of_sprintf_,
                        const char_T *identifier, char_T y[14]);

const mxArray *i_emlrt_marshallOut(const real_T u);

void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                        const emlrtMsgIdentifier *parentId, char_T y[14]);

const mxArray *m_emlrt_marshallOut(const emlrtStack *sp, const char_T u[50]);

const mxArray *o_emlrt_marshallOut(const emlrtStack *sp, const char_T u[63]);

const mxArray *p_emlrt_marshallOut(const emlrtStack *sp, const char_T u[39]);

const mxArray *r_emlrt_marshallOut(const emlrtStack *sp, const char_T u[41]);

const mxArray *s_emlrt_marshallOut(const emlrtStack *sp, const char_T u[12]);

void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                        const emlrtMsgIdentifier *msgId, char_T ret[23]);

void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                        const emlrtMsgIdentifier *msgId, char_T ret[12]);

const mxArray *w_emlrt_marshallOut(const emlrtStack *sp, const char_T u[61]);

void w_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
             emlrtMCInfo *location);

real_T x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                          const emlrtMsgIdentifier *msgId);

const mxArray *x_emlrt_marshallOut(const emlrtStack *sp, const char_T u[62]);

void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                        const emlrtMsgIdentifier *msgId, char_T ret[14]);

const mxArray *y_emlrt_marshallOut(const emlrtStack *sp, const char_T u[42]);

/* End of code generation (FSR_wrapper_mexutil.h) */
