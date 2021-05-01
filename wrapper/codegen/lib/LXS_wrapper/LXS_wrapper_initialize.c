/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LXS_wrapper_initialize.c
 *
 * Code generation for function 'LXS_wrapper_initialize'
 *
 */

/* Include files */
#include "LXS_wrapper_initialize.h"
#include "CoderTimeAPI.h"
#include "LXS_wrapper_data.h"
#include "eml_rand_mt19937ar_stateful.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void LXS_wrapper_initialize(void)
{
  freq_not_empty_init();
  c_eml_rand_mt19937ar_stateful_i();
  isInitialized_LXS_wrapper = true;
}

/* End of code generation (LXS_wrapper_initialize.c) */
