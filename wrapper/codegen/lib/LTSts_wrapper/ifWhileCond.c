/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ifWhileCond.c
 *
 * Code generation for function 'ifWhileCond'
 *
 */

/* Include files */
#include "ifWhileCond.h"
#include "rt_nonfinite.h"

/* Function Definitions */
bool ifWhileCond(const bool x_data[], const int x_size[2])
{
  int i;
  int k;
  bool exitg1;
  bool y;
  y = ((x_size[0] != 0) && (x_size[1] != 0));
  if (y) {
    i = x_size[0] * x_size[1];
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= i - 1)) {
      if (!x_data[k]) {
        y = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  return y;
}

/* End of code generation (ifWhileCond.c) */
