/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * hasFiniteBounds.c
 *
 * Code generation for function 'hasFiniteBounds'
 *
 */

/* Include files */
#include "hasFiniteBounds.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
bool hasFiniteBounds(int nvar, emxArray_boolean_T *hasLB,
                     emxArray_boolean_T *hasUB, const emxArray_real_T *lb,
                     const emxArray_real_T *ub)
{
  int idx;
  bool hasBounds;
  bool *hasLB_data;
  bool *hasUB_data;
  hasUB_data = hasUB->data;
  hasLB_data = hasLB->data;
  hasBounds = false;
  idx = 0;
  switch ((unsigned int)(ub->size[0] == 0) << 1 | (lb->size[0] == 0)) {
  case 0U:
    while (idx + 1 <= nvar) {
      hasLB_data[idx] = false;
      hasUB_data[idx] = false;
      idx++;
    }
    while (idx + 1 <= nvar) {
      hasLB_data[idx] = false;
      hasUB_data[idx] = false;
      idx++;
    }
    break;
  case 1U:
    while (idx + 1 <= nvar) {
      hasLB_data[idx] = false;
      hasUB_data[idx] = false;
      idx++;
    }
    while (idx + 1 <= nvar) {
      hasLB_data[idx] = false;
      hasUB_data[idx] = false;
      idx++;
    }
    break;
  case 2U:
    while (idx + 1 <= nvar) {
      hasLB_data[idx] = false;
      hasUB_data[idx] = false;
      idx++;
    }
    while (idx + 1 <= nvar) {
      hasLB_data[idx] = false;
      hasUB_data[idx] = false;
      idx++;
    }
    break;
  default:
    while (idx + 1 <= nvar) {
      hasLB_data[idx] = false;
      hasUB_data[idx] = false;
      idx++;
    }
    break;
  }
  return hasBounds;
}

/* End of code generation (hasFiniteBounds.c) */
