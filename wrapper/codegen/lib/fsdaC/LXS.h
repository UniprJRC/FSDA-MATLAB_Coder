/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: LXS.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef LXS_H
#define LXS_H

/* Include Files */
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
           const emxArray_real_T *varargin_2, double varargin_4,
           const emxArray_real_T *varargin_6, bool varargin_10,
           struct_LXS_T *out);

double corfactorRAW(double n, double alpha);

double corfactorREW(double n, double alpha);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for LXS.h
 *
 * [EOF]
 */
