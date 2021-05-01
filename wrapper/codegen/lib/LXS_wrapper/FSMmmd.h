/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSMmmd.h
 *
 * Code generation for function 'FSMmmd'
 *
 */

#ifndef FSMMMD_H
#define FSMMMD_H

/* Include files */
#include "LXS_wrapper_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void FSMmmd(const emxArray_real_T *Y, emxArray_real_T *bsb, double varargin_2,
            emxArray_real_T *mmd, emxArray_real_T *Un,
            emxArray_real_T *varargout_1);

void b_FSMmmd(const emxArray_real_T *Y, emxArray_real_T *bsb, double varargin_2,
              emxArray_real_T *mmd, emxArray_real_T *Un);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (FSMmmd.h) */
