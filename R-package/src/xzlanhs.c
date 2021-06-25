/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzlanhs.c
 *
 * Code generation for function 'xzlanhs'
 *
 */

/* Include files */
#include "xzlanhs.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
double xzlanhs(const emxArray_creal_T *A, int ilo, int ihi)
{
  double absxk;
  double colscale;
  double colssq;
  double f;
  double scale;
  double ssq;
  double t;
  int col;
  int j;
  int nm1;
  int row;
  int u0;
  f = 0.0;
  if (ilo <= ihi) {
    scale = 3.3121686421112381E-170;
    ssq = 0.0;
    nm1 = ihi - ilo;
    for (j = 0; j <= nm1; j++) {
      colscale = 3.3121686421112381E-170;
      colssq = 0.0;
      col = (ilo + j) - 1;
      u0 = j + 1;
      if (u0 >= nm1) {
        u0 = nm1;
      }
      u0 += ilo;
      for (row = ilo; row <= u0; row++) {
        absxk = fabs(A->data[(row + A->size[0] * col) - 1].re);
        if (absxk > colscale) {
          t = colscale / absxk;
          colssq = colssq * t * t + 1.0;
          colscale = absxk;
        } else {
          t = absxk / colscale;
          colssq += t * t;
        }
        absxk = fabs(A->data[(row + A->size[0] * col) - 1].im);
        if (absxk > colscale) {
          t = colscale / absxk;
          colssq = colssq * t * t + 1.0;
          colscale = absxk;
        } else {
          t = absxk / colscale;
          colssq += t * t;
        }
      }
      if (scale >= colscale) {
        absxk = colscale / scale;
        ssq += absxk * absxk * colssq;
      } else {
        absxk = scale / colscale;
        ssq = colssq + absxk * absxk * ssq;
        scale = colscale;
      }
    }
    f = scale * sqrt(ssq);
  }
  return f;
}

/* End of code generation (xzlanhs.c) */
