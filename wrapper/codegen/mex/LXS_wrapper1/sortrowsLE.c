/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sortrowsLE.c
 *
 * Code generation for function 'sortrowsLE'
 *
 */

/* Include files */
#include "sortrowsLE.h"
#include "LXS_wrapper1_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Function Definitions */
boolean_T sortrowsLE(const emxArray_real_T *v, const int32_T col[2],
                     int32_T irow1, int32_T irow2)
{
  real_T v1;
  real_T v2;
  int32_T k;
  boolean_T exitg1;
  boolean_T p;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    v1 = v->data[(irow1 + v->size[0] * (col[k] - 1)) - 1];
    v2 = v->data[(irow2 + v->size[0] * (col[k] - 1)) - 1];
    if ((v1 == v2) || (muDoubleScalarIsNaN(v1) && muDoubleScalarIsNaN(v2))) {
      k++;
    } else {
      if ((!(v1 <= v2)) && (!muDoubleScalarIsNaN(v2))) {
        p = false;
      }
      exitg1 = true;
    }
  }
  return p;
}

/* End of code generation (sortrowsLE.c) */
