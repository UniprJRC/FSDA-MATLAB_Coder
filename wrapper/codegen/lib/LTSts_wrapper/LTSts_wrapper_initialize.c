/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LTSts_wrapper_initialize.c
 *
 * Code generation for function 'LTSts_wrapper_initialize'
 *
 */

/* Include files */
#include "LTSts_wrapper_initialize.h"
#include "LTSts_wrapper_data.h"
#include "eml_rand_mt19937ar_stateful.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void LTSts_wrapper_initialize(void)
{
  omp_init_nest_lock(&emlrtNestLockGlobal);
  c_eml_rand_mt19937ar_stateful_i();
  isInitialized_LTSts_wrapper = true;
}

/* End of code generation (LTSts_wrapper_initialize.c) */
