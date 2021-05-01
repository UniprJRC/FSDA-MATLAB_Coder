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
#include "rt_nonfinite.h"

/* Function Definitions */
bool sortrowsLE(const emxArray_real_T *v, const int col[2], int irow1,
                int irow2)
{
  double v1;
  double v2;
  int k;
  bool exitg1;
  bool p;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    v1 = v->data[(irow1 + v->size[0] * (col[k] - 1)) - 1];
    v2 = v->data[(irow2 + v->size[0] * (col[k] - 1)) - 1];
    if ((v1 == v2) || (rtIsNaN(v1) && rtIsNaN(v2))) {
      k++;
    } else {
      if ((!(v1 <= v2)) && (!rtIsNaN(v2))) {
        p = false;
      }
      exitg1 = true;
    }
  }
  return p;
}

/* End of code generation (sortrowsLE.c) */
