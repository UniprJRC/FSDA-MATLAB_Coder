/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * round.c
 *
 * Code generation for function 'round'
 *
 */

/* Include files */
#include "round.h"
#include "fsdaC_rtwutil.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void b_round(double x_data[], const int x_size[2])
{
  int k;
  int nx;
  nx = x_size[0] * x_size[1];
  for (k = 0; k < nx; k++) {
    x_data[k] = rt_roundd_snf(x_data[k]);
  }
}

/* End of code generation (round.c) */
