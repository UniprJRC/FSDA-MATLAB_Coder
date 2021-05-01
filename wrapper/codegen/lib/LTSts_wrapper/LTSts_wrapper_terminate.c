/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LTSts_wrapper_terminate.c
 *
 * Code generation for function 'LTSts_wrapper_terminate'
 *
 */

/* Include files */
#include "LTSts_wrapper_terminate.h"
#include "LTSts_wrapper_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void LTSts_wrapper_terminate(void)
{
  omp_destroy_nest_lock(&emlrtNestLockGlobal);
  isInitialized_LTSts_wrapper = false;
}

/* End of code generation (LTSts_wrapper_terminate.c) */
