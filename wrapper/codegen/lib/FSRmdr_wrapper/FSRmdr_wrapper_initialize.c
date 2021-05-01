/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRmdr_wrapper_initialize.c
 *
 * Code generation for function 'FSRmdr_wrapper_initialize'
 *
 */

/* Include files */
#include "FSRmdr_wrapper_initialize.h"
#include "FSRmdr_wrapper_data.h"
#include "eml_rand_mt19937ar_stateful.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void FSRmdr_wrapper_initialize(void)
{
  c_eml_rand_mt19937ar_stateful_i();
  isInitialized_FSRmdr_wrapper = true;
}

/* End of code generation (FSRmdr_wrapper_initialize.c) */
