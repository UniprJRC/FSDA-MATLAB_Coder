/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 *
 * xzlarfg.c
 *
 * Code generation for function 'xzlarfg'
 *
 */

/* Include files */
#include "xzlarfg.h"
#include "addt_rtwutil.h"
#include "addt_types.h"
#include "rt_nonfinite.h"
#include "xnrm2.h"
#include <math.h>

/* Function Definitions */
double xzlarfg(int n, double *alpha1, emxArray_real_T *x, int ix0)
{
  double beta1;
  double tau;
  double xnorm;
  int i;
  int k;
  int knt;
  tau = 0.0;
  if (n > 0) {
    xnorm = xnrm2(n - 1, x, ix0);
    if (xnorm != 0.0) {
      beta1 = rt_hypotd_snf(*alpha1, xnorm);
      if (*alpha1 >= 0.0) {
        beta1 = -beta1;
      }
      if (fabs(beta1) < 1.0020841800044864E-292) {
        knt = -1;
        i = (ix0 + n) - 2;
        do {
          knt++;
          for (k = ix0; k <= i; k++) {
            x->data[k - 1] *= 9.9792015476736E+291;
          }
          beta1 *= 9.9792015476736E+291;
          *alpha1 *= 9.9792015476736E+291;
        } while (!(fabs(beta1) >= 1.0020841800044864E-292));
        beta1 = rt_hypotd_snf(*alpha1, xnrm2(n - 1, x, ix0));
        if (*alpha1 >= 0.0) {
          beta1 = -beta1;
        }
        tau = (beta1 - *alpha1) / beta1;
        xnorm = 1.0 / (*alpha1 - beta1);
        for (k = ix0; k <= i; k++) {
          x->data[k - 1] *= xnorm;
        }
        for (k = 0; k <= knt; k++) {
          beta1 *= 1.0020841800044864E-292;
        }
        *alpha1 = beta1;
      } else {
        tau = (beta1 - *alpha1) / beta1;
        xnorm = 1.0 / (*alpha1 - beta1);
        i = (ix0 + n) - 2;
        for (k = ix0; k <= i; k++) {
          x->data[k - 1] *= xnorm;
        }
        *alpha1 = beta1;
      }
    }
  }
  return tau;
}

/* End of code generation (xzlarfg.c) */
