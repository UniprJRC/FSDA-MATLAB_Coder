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
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
bool b_ifWhileCond(const emxArray_boolean_T *x)
{
  int i;
  int k;
  const bool *x_data;
  bool exitg1;
  bool y;
  x_data = x->data;
  y = ((x->size[0] != 0) && (x->size[1] != 0));
  if (y) {
    i = x->size[0] * x->size[1];
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

bool c_ifWhileCond(const emxArray_boolean_T *x)
{
  int k;
  const bool *x_data;
  bool exitg1;
  bool y;
  x_data = x->data;
  y = (x->size[1] != 0);
  if (y) {
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= x->size[1] - 1)) {
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

bool ifWhileCond(const emxArray_boolean_T *x)
{
  int k;
  const bool *x_data;
  bool exitg1;
  bool y;
  x_data = x->data;
  y = (x->size[0] != 0);
  if (y) {
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= x->size[0] - 1)) {
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
