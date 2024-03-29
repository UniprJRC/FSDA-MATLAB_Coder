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

#ifndef LXS_H
#define LXS_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void LXS(const emxArray_real_T *y, const emxArray_real_T *X, double varargin_2,
         double varargin_4, double varargin_6, bool varargin_10,
         const double varargin_12_data[], const int varargin_12_size[2],
         struct_LXS_T *out);

double asvar(double h, double n);

void b_IRWLSreg(const emxArray_real_T *y, const emxArray_real_T *X,
                const emxArray_real_T *initialbeta, double refsteps,
                double reftol, double h, emxArray_real_T *outIRWLS_betarw,
                double *outIRWLS_numscale2rw,
                emxArray_real_T *outIRWLS_weights);

void b_LXS(const emxArray_real_T *y, const emxArray_real_T *X,
           double varargin_2, double varargin_4, double varargin_6,
           bool varargin_10, const double varargin_14_data[],
           const int varargin_14_size[2], struct_LXS_T *out);

double b_corfactorRAW(double n, double alpha);

void c_LXS(const emxArray_real_T *y, const emxArray_real_T *X,
           const emxArray_real_T *varargin_2, double varargin_4,
           const emxArray_real_T *varargin_6, bool varargin_10,
           struct_LXS_T *out);

void he_binary_expand_op(emxArray_real_T *r2,
                         const emxArray_boolean_T *weights);

void kb_binary_expand_op(struct_LXS_T *out, const emxArray_real_T *y);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (LXS.h) */
