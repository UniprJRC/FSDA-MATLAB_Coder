/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fsdaC_terminate.c
 *
 * Code generation for function 'fsdaC_terminate'
 *
 */

/* Include files */
#include "fsdaC_terminate.h"
#include "fsdaC_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void fsdaC_terminate(void)
{
  omp_destroy_nest_lock(&emlrtNestLockGlobal);
  isInitialized_fsdaC = false;
}

/* End of code generation (fsdaC_terminate.c) */
