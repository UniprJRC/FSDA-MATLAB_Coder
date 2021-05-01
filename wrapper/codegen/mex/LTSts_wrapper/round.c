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
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Function Definitions */
void b_round(real_T x_data[], const int32_T x_size[2])
{
  int32_T k;
  int32_T nx;
  nx = x_size[0] * x_size[1];
  for (k = 0; k < nx; k++) {
    x_data[k] = muDoubleScalarRound(x_data[k]);
  }
}

/* End of code generation (round.c) */
