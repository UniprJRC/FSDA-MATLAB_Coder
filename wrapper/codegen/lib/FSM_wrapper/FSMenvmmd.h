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
#include "FSM_wrapper_types.h"
#include "rtwtypes.h"
#include "omp.h"
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

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (FSMenvmmd.h) */
