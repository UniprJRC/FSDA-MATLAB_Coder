/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: hasFiniteBounds.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "hasFiniteBounds.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : int nvar
 *                emxArray_boolean_T *hasLB
 *                emxArray_boolean_T *hasUB
 *                const emxArray_real_T *lb
 *                const emxArray_real_T *ub
 * Return Type  : bool
 */
bool hasFiniteBounds(int nvar, emxArray_boolean_T *hasLB,
                     emxArray_boolean_T *hasUB, const emxArray_real_T *lb,
                     const emxArray_real_T *ub)
{
  int idx;
  bool hasBounds;
  hasBounds = false;
  idx = 0;
  switch ((unsigned int)(ub->size[0] == 0) << 1 | (lb->size[0] == 0)) {
  case 0U:
    while (idx + 1 <= nvar) {
      hasLB->data[idx] = false;
      hasUB->data[idx] = false;
      idx++;
    }
    while (idx + 1 <= nvar) {
      hasLB->data[idx] = false;
      hasUB->data[idx] = false;
      idx++;
    }
    break;
  case 1U:
    while (idx + 1 <= nvar) {
      hasLB->data[idx] = false;
      hasUB->data[idx] = false;
      idx++;
    }
    while (idx + 1 <= nvar) {
      hasLB->data[idx] = false;
      hasUB->data[idx] = false;
      idx++;
    }
    break;
  case 2U:
    while (idx + 1 <= nvar) {
      hasLB->data[idx] = false;
      hasUB->data[idx] = false;
      idx++;
    }
    while (idx + 1 <= nvar) {
      hasLB->data[idx] = false;
      hasUB->data[idx] = false;
      idx++;
    }
    break;
  default:
    while (idx + 1 <= nvar) {
      hasLB->data[idx] = false;
      hasUB->data[idx] = false;
      idx++;
    }
    break;
  }
  return hasBounds;
}

/*
 * File trailer for hasFiniteBounds.c
 *
 * [EOF]
 */
