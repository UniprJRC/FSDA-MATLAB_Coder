/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: isequal.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "isequal.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : const emxArray_real_T *varargin_1
 *                const emxArray_real_T *varargin_2
 * Return Type  : bool
 */
bool isequal(const emxArray_real_T *varargin_1,
             const emxArray_real_T *varargin_2)
{
  int k;
  bool b_p;
  bool exitg1;
  bool p;
  p = false;
  b_p = false;
  if (varargin_1->size[1] == varargin_2->size[1]) {
    b_p = true;
  }
  if (b_p && (varargin_1->size[1] != 0) && (varargin_2->size[1] != 0)) {
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= varargin_2->size[1] - 1)) {
      if (!(varargin_1->data[k] == varargin_2->data[k])) {
        b_p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  return b_p || p;
}

/*
 * File trailer for isequal.c
 *
 * [EOF]
 */
