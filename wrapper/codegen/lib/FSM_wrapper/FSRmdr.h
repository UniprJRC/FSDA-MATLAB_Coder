/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRmdr.h
 *
 * Code generation for function 'FSRmdr'
 *
 */

#ifndef FSRMDR_H
#define FSRMDR_H

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
void FSRmdr(const emxArray_real_T *y, const emxArray_real_T *X,
            emxArray_real_T *bsb, double varargin_2, bool varargin_8,
            const emxArray_real_T *varargin_10, const double varargin_14_data[],
            const int varargin_14_size[2], const emxArray_real_T *varargin_18,
            emxArray_real_T *mdr, emxArray_real_T *Un, emxArray_real_T *BB,
            emxArray_real_T *Bols, emxArray_real_T *S2);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (FSRmdr.h) */
