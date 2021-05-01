/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSR_wrapper_initialize.c
 *
 * Code generation for function 'FSR_wrapper_initialize'
 *
 */

/* Include files */
#include "FSR_wrapper_initialize.h"
#include "CoderTimeAPI.h"
#include "FSR_wrapper_data.h"
#include "eml_rand_mt19937ar_stateful.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void FSR_wrapper_initialize(void)
{
  freq_not_empty_init();
  c_eml_rand_mt19937ar_stateful_i();
  isInitialized_FSR_wrapper = true;
}

/* End of code generation (FSR_wrapper_initialize.c) */
