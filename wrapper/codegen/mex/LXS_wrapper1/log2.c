/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * log2.c
 *
 * Code generation for function 'log2'
 *
 */

/* Include files */
#include "log2.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <math.h>

/* Function Definitions */
void b_log2(real_T x, real_T *f, real_T *e)
{
  int32_T eint;
  if ((!muDoubleScalarIsInf(x)) && (!muDoubleScalarIsNaN(x))) {
    *f = frexp(x, &eint);
    *e = eint;
  } else {
    *f = x;
    *e = 0.0;
  }
}

/* End of code generation (log2.c) */
