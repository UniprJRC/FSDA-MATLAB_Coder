/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Sreg.h
 *
 * Code generation for function 'Sreg'
 *
 */

#ifndef SREG_H
#define SREG_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void IRWLSregS(const emxArray_real_T *y, const emxArray_real_T *X,
               const emxArray_real_T *initialbeta,
               const emxArray_real_T *psifunc_c1, double psifunc_kc1,
               const char psifunc_class_data[], const int psifunc_class_size[2],
               double refsteps, double reftol, emxArray_real_T *outIRWLS_betarw,
               double *outIRWLS_scalerw, emxArray_real_T *outIRWLS_weights);

void Sreg(const emxArray_real_T *y, const emxArray_real_T *X, double varargin_2,
          double varargin_4, double varargin_6, double varargin_8,
          double varargin_10, double varargin_12, double varargin_14,
          double varargin_16, const emxArray_char_T *varargin_18,
          const emxArray_real_T *varargin_20, bool varargin_24, j_struct_T *out,
          emxArray_real_T *varargout_1);

void b_Sreg(const emxArray_real_T *y, const emxArray_real_T *X,
            double varargin_2, double varargin_4, double varargin_6,
            double varargin_8, double varargin_10, double varargin_12,
            double varargin_14, double varargin_16,
            const emxArray_char_T *varargin_18,
            const emxArray_real_T *varargin_20, j_struct_T *out,
            emxArray_real_T *varargout_1);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (Sreg.h) */
