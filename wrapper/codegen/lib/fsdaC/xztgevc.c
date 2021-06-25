/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: xztgevc.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "xztgevc.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : const emxArray_creal_T *A
 *                emxArray_creal_T *V
 * Return Type  : void
 */
void xztgevc(const emxArray_creal_T *A, emxArray_creal_T *V)
{
  emxArray_creal_T *work1;
  emxArray_creal_T *work2;
  emxArray_real_T *rworka;
  double BIG;
  double BIGNUM;
  double SMALL;
  double acoeff;
  double ai;
  double anorm;
  double ascale;
  double b_j;
  double brm;
  double d_im;
  double d_re;
  double dmin;
  double salpha_im;
  double salpha_re;
  double scale;
  double temp;
  double xmx;
  double z;
  int b_je;
  int i;
  int i1;
  int j;
  int je;
  int jr;
  int loop_ub;
  int n;
  bool lscalea;
  bool lscaleb;
  emxInit_creal_T(&work1, 1);
  n = A->size[0] - 1;
  i = work1->size[0];
  work1->size[0] = A->size[0];
  emxEnsureCapacity_creal_T(work1, i);
  loop_ub = A->size[0];
  for (i = 0; i < loop_ub; i++) {
    work1->data[i].re = 0.0;
    work1->data[i].im = 0.0;
  }
  emxInit_creal_T(&work2, 1);
  i = work2->size[0];
  work2->size[0] = A->size[0];
  emxEnsureCapacity_creal_T(work2, i);
  loop_ub = A->size[0];
  for (i = 0; i < loop_ub; i++) {
    work2->data[i].re = 0.0;
    work2->data[i].im = 0.0;
  }
  emxInit_real_T(&rworka, 1);
  SMALL = 2.2250738585072014E-308 * (double)A->size[0] / 2.2204460492503131E-16;
  BIG = 1.0 / SMALL;
  BIGNUM = 1.0 / (2.2250738585072014E-308 * (double)A->size[0]);
  i = rworka->size[0];
  rworka->size[0] = A->size[0];
  emxEnsureCapacity_real_T(rworka, i);
  loop_ub = A->size[0];
  for (i = 0; i < loop_ub; i++) {
    rworka->data[i] = 0.0;
  }
  anorm = fabs(A->data[0].re) + fabs(A->data[0].im);
  i = A->size[0];
  for (j = 0; j <= i - 2; j++) {
    for (loop_ub = 0; loop_ub <= j; loop_ub++) {
      rworka->data[j + 1] += fabs(A->data[loop_ub + A->size[0] * (j + 1)].re) +
                             fabs(A->data[loop_ub + A->size[0] * (j + 1)].im);
    }
    d_re = rworka->data[j + 1] +
           (fabs(A->data[(j + A->size[0] * (j + 1)) + 1].re) +
            fabs(A->data[(j + A->size[0] * (j + 1)) + 1].im));
    if (d_re > anorm) {
      anorm = d_re;
    }
  }
  xmx = anorm;
  if (2.2250738585072014E-308 > anorm) {
    xmx = 2.2250738585072014E-308;
  }
  ascale = 1.0 / xmx;
  i = (int)(((-1.0 - (double)A->size[0]) + 1.0) / -1.0);
  for (je = 0; je < i; je++) {
    b_je = n - je;
    xmx = (fabs(A->data[b_je + A->size[0] * b_je].re) +
           fabs(A->data[b_je + A->size[0] * b_je].im)) *
          ascale;
    if (1.0 > xmx) {
      xmx = 1.0;
    }
    temp = 1.0 / xmx;
    salpha_re = ascale * (temp * A->data[b_je + A->size[0] * b_je].re);
    salpha_im = ascale * (temp * A->data[b_je + A->size[0] * b_je].im);
    acoeff = temp * ascale;
    if ((temp >= 2.2250738585072014E-308) && (acoeff < SMALL)) {
      lscalea = true;
    } else {
      lscalea = false;
    }
    z = fabs(salpha_re) + fabs(salpha_im);
    if ((z >= 2.2250738585072014E-308) && (z < SMALL)) {
      lscaleb = true;
    } else {
      lscaleb = false;
    }
    scale = 1.0;
    if (lscalea) {
      xmx = anorm;
      if (BIG < anorm) {
        xmx = BIG;
      }
      scale = SMALL / temp * xmx;
    }
    if (lscaleb) {
      d_re = SMALL / z;
      if (d_re > scale) {
        scale = d_re;
      }
    }
    if (lscalea || lscaleb) {
      xmx = acoeff;
      if (1.0 > acoeff) {
        xmx = 1.0;
      }
      if (z > xmx) {
        xmx = z;
      }
      d_re = 1.0 / (2.2250738585072014E-308 * xmx);
      if (d_re < scale) {
        scale = d_re;
      }
      if (lscalea) {
        acoeff = ascale * (scale * temp);
      } else {
        acoeff *= scale;
      }
      salpha_re *= scale;
      salpha_im *= scale;
    }
    for (jr = 0; jr <= n; jr++) {
      work1->data[jr].re = 0.0;
      work1->data[jr].im = 0.0;
    }
    work1->data[b_je].re = 1.0;
    work1->data[b_je].im = 0.0;
    dmin = 2.2204460492503131E-16 * acoeff * anorm;
    d_re = 2.2204460492503131E-16 * (fabs(salpha_re) + fabs(salpha_im));
    if (d_re > dmin) {
      dmin = d_re;
    }
    if (2.2250738585072014E-308 > dmin) {
      dmin = 2.2250738585072014E-308;
    }
    for (jr = 0; jr < b_je; jr++) {
      work1->data[jr].re = acoeff * A->data[jr + A->size[0] * b_je].re;
      work1->data[jr].im = acoeff * A->data[jr + A->size[0] * b_je].im;
    }
    work1->data[b_je].re = 1.0;
    work1->data[b_je].im = 0.0;
    loop_ub = (int)(((-1.0 - ((double)(b_je + 1) - 1.0)) + 1.0) / -1.0);
    for (j = 0; j < loop_ub; j++) {
      b_j = ((double)(b_je + 1) - 1.0) + -(double)j;
      d_re = acoeff * A->data[((int)b_j + A->size[0] * ((int)b_j - 1)) - 1].re -
             salpha_re;
      d_im = acoeff * A->data[((int)b_j + A->size[0] * ((int)b_j - 1)) - 1].im -
             salpha_im;
      if (fabs(d_re) + fabs(d_im) <= dmin) {
        d_re = dmin;
        d_im = 0.0;
      }
      brm = fabs(d_re);
      scale = fabs(d_im);
      xmx = brm + scale;
      if (xmx < 1.0) {
        z = fabs(work1->data[(int)b_j - 1].re) +
            fabs(work1->data[(int)b_j - 1].im);
        if (z >= BIGNUM * xmx) {
          temp = 1.0 / z;
          for (jr = 0; jr <= b_je; jr++) {
            work1->data[jr].re *= temp;
            work1->data[jr].im *= temp;
          }
        }
      }
      temp = -work1->data[(int)b_j - 1].re;
      ai = -work1->data[(int)b_j - 1].im;
      if (d_im == 0.0) {
        if (ai == 0.0) {
          scale = temp / d_re;
          xmx = 0.0;
        } else if (temp == 0.0) {
          scale = 0.0;
          xmx = ai / d_re;
        } else {
          scale = temp / d_re;
          xmx = ai / d_re;
        }
      } else if (d_re == 0.0) {
        if (temp == 0.0) {
          scale = ai / d_im;
          xmx = 0.0;
        } else if (ai == 0.0) {
          scale = 0.0;
          xmx = -(temp / d_im);
        } else {
          scale = ai / d_im;
          xmx = -(temp / d_im);
        }
      } else if (brm > scale) {
        z = d_im / d_re;
        xmx = d_re + z * d_im;
        scale = (temp + z * ai) / xmx;
        xmx = (ai - z * temp) / xmx;
      } else if (scale == brm) {
        if (d_re > 0.0) {
          z = 0.5;
        } else {
          z = -0.5;
        }
        if (d_im > 0.0) {
          xmx = 0.5;
        } else {
          xmx = -0.5;
        }
        scale = (temp * z + ai * xmx) / brm;
        xmx = (ai * z - temp * xmx) / brm;
      } else {
        z = d_re / d_im;
        xmx = d_im + z * d_re;
        scale = (z * temp + ai) / xmx;
        xmx = (z * ai - temp) / xmx;
      }
      work1->data[(int)b_j - 1].re = scale;
      work1->data[(int)b_j - 1].im = xmx;
      if (b_j > 1.0) {
        i1 = (int)b_j - 1;
        if (fabs(work1->data[i1].re) + fabs(work1->data[i1].im) > 1.0) {
          temp = 1.0 / (fabs(work1->data[i1].re) + fabs(work1->data[i1].im));
          if (acoeff * rworka->data[i1] >= BIGNUM * temp) {
            for (jr = 0; jr <= b_je; jr++) {
              work1->data[jr].re *= temp;
              work1->data[jr].im *= temp;
            }
          }
        }
        d_re = acoeff * work1->data[i1].re;
        d_im = acoeff * work1->data[i1].im;
        i1 = (int)b_j;
        for (jr = 0; jr <= i1 - 2; jr++) {
          work1->data[jr].re +=
              d_re * A->data[jr + A->size[0] * ((int)b_j - 1)].re -
              d_im * A->data[jr + A->size[0] * ((int)b_j - 1)].im;
          work1->data[jr].im +=
              d_re * A->data[jr + A->size[0] * ((int)b_j - 1)].im +
              d_im * A->data[jr + A->size[0] * ((int)b_j - 1)].re;
        }
      }
    }
    for (jr = 0; jr <= n; jr++) {
      work2->data[jr].re = 0.0;
      work2->data[jr].im = 0.0;
    }
    for (loop_ub = 0; loop_ub <= b_je; loop_ub++) {
      for (jr = 0; jr <= n; jr++) {
        work2->data[jr].re +=
            V->data[jr + V->size[0] * loop_ub].re * work1->data[loop_ub].re -
            V->data[jr + V->size[0] * loop_ub].im * work1->data[loop_ub].im;
        work2->data[jr].im +=
            V->data[jr + V->size[0] * loop_ub].re * work1->data[loop_ub].im +
            V->data[jr + V->size[0] * loop_ub].im * work1->data[loop_ub].re;
      }
    }
    xmx = fabs(work2->data[0].re) + fabs(work2->data[0].im);
    if (n + 1 > 1) {
      for (jr = 0; jr < n; jr++) {
        d_re = fabs(work2->data[jr + 1].re) + fabs(work2->data[jr + 1].im);
        if (d_re > xmx) {
          xmx = d_re;
        }
      }
    }
    if (xmx > 2.2250738585072014E-308) {
      temp = 1.0 / xmx;
      for (jr = 0; jr <= n; jr++) {
        V->data[jr + V->size[0] * b_je].re = temp * work2->data[jr].re;
        V->data[jr + V->size[0] * b_je].im = temp * work2->data[jr].im;
      }
    } else {
      for (jr = 0; jr <= n; jr++) {
        V->data[jr + V->size[0] * b_je].re = 0.0;
        V->data[jr + V->size[0] * b_je].im = 0.0;
      }
    }
  }
  emxFree_real_T(&rworka);
  emxFree_creal_T(&work2);
  emxFree_creal_T(&work1);
}

/*
 * File trailer for xztgevc.c
 *
 * [EOF]
 */
