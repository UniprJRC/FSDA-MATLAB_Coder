/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sprintf.h
 *
 * Code generation for function 'sprintf'
 *
 */

#ifndef SPRINTF_H
#define SPRINTF_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_sprintf(double varargin_1);

void c_sprintf(double varargin_1);

void d_sprintf(double varargin_1, emxArray_char_T *str);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (sprintf.h) */
