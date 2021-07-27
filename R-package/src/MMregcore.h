/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * MMregcore.h
 *
 * Code generation for function 'MMregcore'
 *
 */

#ifndef MMREGCORE_H
#define MMREGCORE_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void MMregcore(const emxArray_real_T *y, const emxArray_real_T *X,
               const emxArray_real_T *b0, double auxscale, double varargin_2,
               const emxArray_char_T *varargin_6,
               const emxArray_real_T *varargin_8, double varargin_10,
               double varargin_12, double varargin_14, e_struct_T *out);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (MMregcore.h) */
