/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 *
 * sqrt.c
 *
 * Code generation for function 'sqrt'
 *
 */

/* Include files */
#include "sqrt.h"
#include "addt_rtwutil.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
void b_sqrt(creal_T x_data[], const int *x_size)
{
  double absxi;
  double absxr;
  double xi;
  double xr;
  int k;
  for (k = 0; k < *x_size; k++) {
    xr = x_data[0].re;
    xi = x_data[0].im;
    if (xi == 0.0) {
      if (xr < 0.0) {
        absxi = 0.0;
        xr = sqrt(-xr);
      } else {
        absxi = sqrt(xr);
        xr = 0.0;
      }
    } else if (xr == 0.0) {
      if (xi < 0.0) {
        absxi = sqrt(-xi / 2.0);
        xr = -absxi;
      } else {
        absxi = sqrt(xi / 2.0);
        xr = absxi;
      }
    } else if (rtIsNaN(xr)) {
      absxi = xr;
    } else if (rtIsNaN(xi)) {
      absxi = xi;
      xr = xi;
    } else if (rtIsInf(xi)) {
      absxi = fabs(xi);
      xr = xi;
    } else if (rtIsInf(xr)) {
      if (xr < 0.0) {
        absxi = 0.0;
        xr = xi * -xr;
      } else {
        absxi = xr;
        xr = 0.0;
      }
    } else {
      absxr = fabs(xr);
      absxi = fabs(xi);
      if ((absxr > 4.4942328371557893E+307) ||
          (absxi > 4.4942328371557893E+307)) {
        absxr *= 0.5;
        absxi = rt_hypotd_snf(absxr, absxi * 0.5);
        if (absxi > absxr) {
          absxi = sqrt(absxi) * sqrt(absxr / absxi + 1.0);
        } else {
          absxi = sqrt(absxi) * 1.4142135623730951;
        }
      } else {
        absxi = sqrt((rt_hypotd_snf(absxr, absxi) + absxr) * 0.5);
      }
      if (xr > 0.0) {
        xr = 0.5 * (xi / absxi);
      } else {
        if (xi < 0.0) {
          xr = -absxi;
        } else {
          xr = absxi;
        }
        absxi = 0.5 * (xi / xr);
      }
    }
    x_data[0].re = absxi;
    x_data[0].im = xr;
  }
}

/* End of code generation (sqrt.c) */
