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
void any(const emxArray_boolean_T *x, emxArray_boolean_T *y)
{
  int a;
  int i;
  int i2;
  int ix;
  int npages;
  const bool *x_data;
  bool exitg1;
  bool *y_data;
  x_data = x->data;
  i2 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = x->size[1];
  emxEnsureCapacity_boolean_T(y, i2);
  y_data = y->data;
  npages = x->size[1];
  for (i2 = 0; i2 < npages; i2++) {
    y_data[i2] = false;
  }
  npages = x->size[1];
  i2 = 0;
  for (i = 0; i < npages; i++) {
    a = i2 + x->size[0];
    ix = i2;
    i2 += x->size[0];
    exitg1 = false;
    while ((!exitg1) && (ix + 1 <= a)) {
      if (x_data[ix]) {
        y_data[i] = true;
        exitg1 = true;
      } else {
        ix++;
      }
    }
  }
}

bool b_any(const emxArray_boolean_T *x)
{
  int ix;
  const bool *x_data;
  bool exitg1;
  bool y;
  x_data = x->data;
  y = false;
  ix = 1;
  exitg1 = false;
  while ((!exitg1) && (ix <= x->size[0])) {
    if (x_data[ix - 1]) {
      y = true;
      exitg1 = true;
    } else {
      ix++;
    }
  }
  return y;
}

bool c_any(const emxArray_boolean_T *x)
{
  int ix;
  const bool *x_data;
  bool exitg1;
  bool y;
  x_data = x->data;
  y = false;
  ix = 1;
  exitg1 = false;
  while ((!exitg1) && (ix <= x->size[1])) {
    if (x_data[ix - 1]) {
      y = true;
      exitg1 = true;
    } else {
      ix++;
    }
  }
  return y;
}

/* End of code generation (any.c) */
