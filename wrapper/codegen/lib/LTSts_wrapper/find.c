/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * find.c
 *
 * Code generation for function 'find'
 *
 */

/* Include files */
#include "find.h"
#include "LTSts_wrapper_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void eml_find(const emxArray_boolean_T *x, int i_data[], int *i_size)
{
  int idx;
  int ii;
  bool exitg1;
  *i_size = (1 <= x->size[0]);
  idx = 0;
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii <= x->size[0] - 1)) {
    if (x->data[ii]) {
      idx = 1;
      i_data[0] = ii + 1;
      exitg1 = true;
    } else {
      ii++;
    }
  }
  if (*i_size == 1) {
    if (idx == 0) {
      *i_size = 0;
    }
  } else {
    *i_size = (1 <= idx);
  }
}

/* End of code generation (find.c) */
