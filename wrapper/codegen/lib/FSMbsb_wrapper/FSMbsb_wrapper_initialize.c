/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSMbsb_wrapper_initialize.c
 *
 * Code generation for function 'FSMbsb_wrapper_initialize'
 *
 */

/* Include files */
#include "FSMbsb_wrapper_initialize.h"
#include "FSMbsb_wrapper_data.h"
#include "eml_rand_mt19937ar_stateful.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void FSMbsb_wrapper_initialize(void)
{
  c_eml_rand_mt19937ar_stateful_i();
  isInitialized_FSMbsb_wrapper = true;
}

/* End of code generation (FSMbsb_wrapper_initialize.c) */
