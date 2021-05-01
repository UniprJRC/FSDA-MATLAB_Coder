/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRenvmdr.h
 *
 * Code generation for function 'FSRenvmdr'
 *
 */

#ifndef FSRENVMDR_H
#define FSRENVMDR_H

/* Include files */
#include "FSR_wrapper_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void FSRenvmdr(double n, double p, double varargin_4, emxArray_real_T *MDRenv);

void b_FSRenvmdr(double n, double p, double varargin_4,
                 emxArray_real_T *MDRenv);

void c_FSRenvmdr(double n, double p, double varargin_4,
                 emxArray_real_T *MDRenv);

void d_FSRenvmdr(double n, double p, double varargin_4,
                 emxArray_real_T *MDRenv);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (FSRenvmdr.h) */
