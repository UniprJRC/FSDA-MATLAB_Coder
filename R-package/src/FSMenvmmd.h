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

#ifndef FSMENVMMD_H
#define FSMENVMMD_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void FSMenvmmd(double n, double v, double varargin_4, emxArray_real_T *MMDenv);

void b_FSMenvmmd(double n, double v, double varargin_4,
                 emxArray_real_T *MMDenv);

void c_FSMenvmmd(double n, double v, double varargin_4,
                 emxArray_real_T *MMDenv);

void cb_binary_expand_op(emxArray_real_T *b_tmp, double v,
                         const emxArray_real_T *b, const emxArray_real_T *r1);

void eb_binary_expand_op(emxArray_real_T *quant, double n,
                         const emxArray_real_T *mm);

void fb_binary_expand_op(emxArray_real_T *b_tmp, const emxArray_real_T *b_b_tmp,
                         const emxArray_real_T *mm,
                         const emxArray_real_T *quant, double v);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (FSMenvmmd.h) */
