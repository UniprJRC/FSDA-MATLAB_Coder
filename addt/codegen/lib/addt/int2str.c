/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 *
 * int2str.c
 *
 * Code generation for function 'int2str'
 *
 */

/* Include files */
#include "int2str.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <stdio.h>
#include <string.h>

/* Function Definitions */
void int2str(double xin, char s_data[], int s_size[2])
{
  int resCount;
  char st[311];
  if (xin == 0.0) {
    s_size[0] = 1;
    s_size[1] = 1;
    s_data[0] = '0';
  } else if (rtIsInf(xin)) {
    s_size[0] = 1;
    s_size[1] = 3;
    s_data[0] = 'I';
    s_data[1] = 'n';
    s_data[2] = 'f';
  } else if (rtIsNaN(xin)) {
    s_size[0] = 1;
    s_size[1] = 3;
    s_data[0] = 'N';
    s_data[1] = 'a';
    s_data[2] = 'N';
  } else {
    resCount = sprintf(&st[0], "%.0f", xin);
    s_size[0] = 1;
    s_size[1] = resCount;
    if (0 <= resCount - 1) {
      memcpy(&s_data[0], &st[0], resCount * sizeof(char));
    }
  }
}

/* End of code generation (int2str.c) */
