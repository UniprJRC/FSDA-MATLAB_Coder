/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSM_wrapper_initialize.c
 *
 * Code generation for function 'FSM_wrapper_initialize'
 *
 */

/* Include files */
#include "FSM_wrapper_initialize.h"
#include "CoderTimeAPI.h"
#include "FSM_wrapper_data.h"
#include "eml_rand_mt19937ar_stateful.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void FSM_wrapper_initialize(void)
{
  omp_init_nest_lock(&emlrtNestLockGlobal);
  freq_not_empty_init();
  c_eml_rand_mt19937ar_stateful_i();
  isInitialized_FSM_wrapper = true;
}

/* End of code generation (FSM_wrapper_initialize.c) */
