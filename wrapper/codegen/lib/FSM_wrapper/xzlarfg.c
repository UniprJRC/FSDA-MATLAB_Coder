/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzlarfg.c
 *
 * Code generation for function 'xzlarfg'
 *
 */

/* Include files */
#include "xzlarfg.h"
#include "FSM_wrapper_rtwutil.h"
#include "FSM_wrapper_types.h"
#include "rt_nonfinite.h"
#include "mkl_cblas.h"
#include <math.h>

/* Function Definitions */
double xzlarfg(int n, double *alpha1, emxArray_real_T *x, int ix0)
{
  double tau;
  double xnorm;
  int k;
  int knt;
  tau = 0.0;
  if (n > 0) {
    if (n - 1 < 1) {
      xnorm = 0.0;
    } else {
      xnorm = cblas_dnrm2((MKL_INT)(n - 1), &x->data[ix0 - 1], (MKL_INT)1);
    }
    if (xnorm != 0.0) {
      xnorm = rt_hypotd_snf(*alpha1, xnorm);
      if (*alpha1 >= 0.0) {
        xnorm = -xnorm;
      }
      if (fabs(xnorm) < 1.0020841800044864E-292) {
        knt = -1;
        do {
          knt++;
          if (n - 1 >= 1) {
            cblas_dscal((MKL_INT)(n - 1), 9.9792015476736E+291,
                        &x->data[ix0 - 1], (MKL_INT)1);
          }
          xnorm *= 9.9792015476736E+291;
          *alpha1 *= 9.9792015476736E+291;
        } while (!(fabs(xnorm) >= 1.0020841800044864E-292));
        if (n - 1 < 1) {
          xnorm = 0.0;
        } else {
          xnorm = cblas_dnrm2((MKL_INT)(n - 1), &x->data[ix0 - 1], (MKL_INT)1);
        }
        xnorm = rt_hypotd_snf(*alpha1, xnorm);
        if (*alpha1 >= 0.0) {
          xnorm = -xnorm;
        }
        tau = (xnorm - *alpha1) / xnorm;
        if (n - 1 >= 1) {
          cblas_dscal((MKL_INT)(n - 1), 1.0 / (*alpha1 - xnorm),
                      &x->data[ix0 - 1], (MKL_INT)1);
        }
        for (k = 0; k <= knt; k++) {
          xnorm *= 1.0020841800044864E-292;
        }
        *alpha1 = xnorm;
      } else {
        tau = (xnorm - *alpha1) / xnorm;
        if (n - 1 >= 1) {
          cblas_dscal((MKL_INT)(n - 1), 1.0 / (*alpha1 - xnorm),
                      &x->data[ix0 - 1], (MKL_INT)1);
        }
        *alpha1 = xnorm;
      }
    }
  }
  return tau;
}

/* End of code generation (xzlarfg.c) */
