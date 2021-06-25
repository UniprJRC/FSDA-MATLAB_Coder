/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: ifWhileCond.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "ifWhileCond.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : const emxArray_boolean_T *x
 * Return Type  : bool
 */
bool b_ifWhileCond(const emxArray_boolean_T *x)
{
  int i;
  int k;
  bool exitg1;
  bool y;
  y = ((x->size[0] != 0) && (x->size[1] != 0));
  if (y) {
    i = x->size[0] * x->size[1];
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= i - 1)) {
      if (!x->data[k]) {
        y = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  return y;
}

/*
 * Arguments    : const emxArray_boolean_T *x
 * Return Type  : bool
 */
bool c_ifWhileCond(const emxArray_boolean_T *x)
{
  int k;
  bool exitg1;
  bool y;
  y = (x->size[1] != 0);
  if (y) {
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= x->size[1] - 1)) {
      if (!x->data[k]) {
        y = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  return y;
}

/*
 * Arguments    : const emxArray_boolean_T *x
 * Return Type  : bool
 */
bool ifWhileCond(const emxArray_boolean_T *x)
{
  int k;
  bool exitg1;
  bool y;
  y = (x->size[0] != 0);
  if (y) {
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= x->size[0] - 1)) {
      if (!x->data[k]) {
        y = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  return y;
}

/*
 * File trailer for ifWhileCond.c
 *
 * [EOF]
 */
