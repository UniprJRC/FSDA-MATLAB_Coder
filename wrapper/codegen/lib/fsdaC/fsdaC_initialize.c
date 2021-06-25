/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: fsdaC_initialize.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "fsdaC_initialize.h"
#include "CoderTimeAPI.h"
#include "eml_rand_mt19937ar_stateful.h"
#include "fsdaC_data.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : void
 * Return Type  : void
 */
void fsdaC_initialize(void)
{
  freq_not_empty_init();
  c_eml_rand_mt19937ar_stateful_i();
  isInitialized_fsdaC = true;
}

/*
 * File trailer for fsdaC_initialize.c
 *
 * [EOF]
 */
