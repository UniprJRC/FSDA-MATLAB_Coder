/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSM.h
 *
 * Code generation for function 'FSM'
 *
 */

#ifndef FSM_H
#define FSM_H

/* Include files */
#include "FSM_wrapper_types.h"
#include "rtwtypes.h"
#include "omp.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void FSM(emxArray_real_T *Y, const double varargin_4_data[],
         const int varargin_4_size[2], double varargin_8,
         const char varargin_10_data[], const int varargin_10_size[2],
         double varargin_12, emxArray_real_T *out_outliers,
         emxArray_real_T *out_loc, emxArray_real_T *out_cov,
         emxArray_real_T *out_md, emxArray_real_T *out_mmd,
         emxArray_real_T *out_Un, double out_nout_data[], int out_nout_size[2],
         char out_class_data[], int out_class_size[2]);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (FSM.h) */
