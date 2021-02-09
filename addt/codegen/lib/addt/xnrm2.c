/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 *
 * xnrm2.c
 *
 * Code generation for function 'xnrm2'
 *
 */

/* Include files */
#include "xnrm2.h"
#include "addt_types.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
double xnrm2(int n, const emxArray_real_T *x, int ix0)
{
  double absxk;
  double scale;
  double t;
  double y;
  int k;
  int kend;
  y = 0.0;
  if (n >= 1) {
    if (n == 1) {
      y = fabs(x->data[ix0 - 1]);
    } else {
      scale = 3.3121686421112381E-170;
      kend = (ix0 + n) - 1;
      for (k = ix0; k <= kend; k++) {
        absxk = fabs(x->data[k - 1]);
        if (absxk > scale) {
          t = scale / absxk;
          y = y * t * t + 1.0;
          scale = absxk;
        } else {
          t = absxk / scale;
          y += t * t;
        }
      }
      y = scale * sqrt(y);
    }
  }
  return y;
}

/* End of code generation (xnrm2.c) */
