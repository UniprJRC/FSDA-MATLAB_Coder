/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fsdaC_initialize.c
 *
 * Code generation for function 'fsdaC_initialize'
 *
 */

/* Include files */
#include "fsdaC_initialize.h"
#include "CoderTimeAPI.h"
#include "eml_rand_mt19937ar_stateful.h"
#include "fsdaC_data.h"
#include "rt_nonfinite.h"
#include "timeKeeper.h"
#include <string.h>

/* Function Definitions */
void fsdaC_initialize(void)
{
  savedTime_not_empty_init();
  freq_not_empty_init();
  c_eml_rand_mt19937ar_stateful_i();
  isInitialized_fsdaC = true;
}

/* End of code generation (fsdaC_initialize.c) */
