/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSM_wrapper_data.h
 *
 * Code generation for function 'FSM_wrapper_data'
 *
 */

#ifndef FSM_WRAPPER_DATA_H
#define FSM_WRAPPER_DATA_H

/* Include files */
#include "rtwtypes.h"
#include "omp.h"
#include <stddef.h>
#include <stdlib.h>

/* Variable Declarations */
extern unsigned int state[625];
extern double freq;
extern bool freq_not_empty;
extern omp_nest_lock_t emlrtNestLockGlobal;
extern const int iv[5];
extern const double dv2[31];
extern const bool bv[128];
extern bool isInitialized_FSM_wrapper;

#endif
/* End of code generation (FSM_wrapper_data.h) */
