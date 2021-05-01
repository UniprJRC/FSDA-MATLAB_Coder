/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSM_wrapper_terminate.c
 *
 * Code generation for function 'FSM_wrapper_terminate'
 *
 */

/* Include files */
#include "FSM_wrapper_terminate.h"
#include "FSM_wrapper_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void FSM_wrapper_terminate(void)
{
  omp_destroy_nest_lock(&emlrtNestLockGlobal);
  isInitialized_FSM_wrapper = false;
}

/* End of code generation (FSM_wrapper_terminate.c) */
