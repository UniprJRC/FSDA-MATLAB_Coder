/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRfan_wrapper_initialize.c
 *
 * Code generation for function 'FSRfan_wrapper_initialize'
 *
 */

/* Include files */
#include "FSRfan_wrapper_initialize.h"
#include "CoderTimeAPI.h"
#include "FSRfan_wrapper_data.h"
#include "eml_rand_mt19937ar_stateful.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void FSRfan_wrapper_initialize(void)
{
  freq_not_empty_init();
  c_eml_rand_mt19937ar_stateful_i();
  isInitialized_FSRfan_wrapper = true;
}

/* End of code generation (FSRfan_wrapper_initialize.c) */
