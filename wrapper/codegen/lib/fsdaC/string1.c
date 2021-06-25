/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: string1.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "string1.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : const char val_data[]
 *                const int val_size[2]
 *                char obj_Value_data[]
 *                int obj_Value_size[2]
 * Return Type  : void
 */
void string_string(const char val_data[], const int val_size[2],
                   char obj_Value_data[], int obj_Value_size[2])
{
  int k;
  signed char varargin_1[2];
  bool b_p;
  bool exitg1;
  bool p;
  varargin_1[0] = (signed char)val_size[0];
  varargin_1[1] = 8;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (varargin_1[k] != 0) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  b_p = (int)p;
  if (b_p) {
    obj_Value_size[0] = 1;
    obj_Value_size[1] = 0;
  } else {
    obj_Value_size[0] = 1;
    obj_Value_size[1] = 8;
    for (k = 0; k < 8; k++) {
      obj_Value_data[k] = val_data[val_size[0] * k];
    }
  }
}

/*
 * File trailer for string1.c
 *
 * [EOF]
 */
