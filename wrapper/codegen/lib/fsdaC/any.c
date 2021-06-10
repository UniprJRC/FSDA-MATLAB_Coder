/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * any.c
 *
 * Code generation for function 'any'
 *
 */

/* Include files */
#include "any.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
bool any(const emxArray_boolean_T *x)
{
  int ix;
  bool exitg1;
  bool y;
  y = false;
  ix = 1;
  exitg1 = false;
  while ((!exitg1) && (ix <= x->size[0])) {
    if (!x->data[ix - 1]) {
      ix++;
    } else {
      y = true;
      exitg1 = true;
    }
  }
  return y;
}

void b_any(const emxArray_boolean_T *x, emxArray_boolean_T *y)
{
  int a;
  int i;
  int i2;
  int ix;
  int npages;
  bool exitg1;
  i2 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = x->size[1];
  emxEnsureCapacity_boolean_T(y, i2);
  npages = x->size[1];
  for (i2 = 0; i2 < npages; i2++) {
    y->data[i2] = false;
  }
  npages = x->size[1];
  i2 = 0;
  for (i = 0; i < npages; i++) {
    a = i2 + x->size[0];
    ix = i2;
    i2 += x->size[0];
    exitg1 = false;
    while ((!exitg1) && (ix + 1 <= a)) {
      if (!x->data[ix]) {
        ix++;
      } else {
        y->data[i] = true;
        exitg1 = true;
      }
    }
  }
}

bool c_any(const emxArray_boolean_T *x)
{
  int ix;
  bool exitg1;
  bool y;
  y = false;
  ix = 1;
  exitg1 = false;
  while ((!exitg1) && (ix <= x->size[1])) {
    if (!x->data[ix - 1]) {
      ix++;
    } else {
      y = true;
      exitg1 = true;
    }
  }
  return y;
}

/* End of code generation (any.c) */
