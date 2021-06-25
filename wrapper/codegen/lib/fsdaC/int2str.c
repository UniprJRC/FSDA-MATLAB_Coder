/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: int2str.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "int2str.h"
#include "fsdaC_rtwutil.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <stdio.h>
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : double xin
 *                char s_data[]
 *                int s_size[2]
 * Return Type  : void
 */
void int2str(double xin, char s_data[], int s_size[2])
{
  double x;
  int resCount;
  char st[311];
  x = rt_roundd_snf(xin);
  if (x == 0.0) {
    s_size[0] = 1;
    s_size[1] = 1;
    s_data[0] = '0';
  } else if (rtIsInf(x)) {
    if (x > 0.0) {
      s_size[0] = 1;
      s_size[1] = 3;
      s_data[0] = 'I';
      s_data[1] = 'n';
      s_data[2] = 'f';
    } else {
      s_size[0] = 1;
      s_size[1] = 4;
      s_data[0] = '-';
      s_data[1] = 'I';
      s_data[2] = 'n';
      s_data[3] = 'f';
    }
  } else if (rtIsNaN(x)) {
    s_size[0] = 1;
    s_size[1] = 3;
    s_data[0] = 'N';
    s_data[1] = 'a';
    s_data[2] = 'N';
  } else {
    resCount = sprintf(&st[0], "%.0f", x);
    s_size[0] = 1;
    s_size[1] = resCount;
    if (0 <= resCount - 1) {
      memcpy(&s_data[0], &st[0], resCount * sizeof(char));
    }
  }
}

/*
 * File trailer for int2str.c
 *
 * [EOF]
 */
