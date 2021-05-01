/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mod.c
 *
 * Code generation for function 'mod'
 *
 */

/* Include files */
#include "mod.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Function Definitions */
real_T b_mod(real_T x)
{
  real_T r;
  if (muDoubleScalarIsNaN(x)) {
    r = rtNaN;
  } else if (x == 0.0) {
    r = 0.0;
  } else {
    r = muDoubleScalarRem(x, 100.0);
    if (r == 0.0) {
      r = 0.0;
    } else if (x < 0.0) {
      r += 100.0;
    }
  }
  return r;
}

/* End of code generation (mod.c) */
