/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzggev.c
 *
 * Code generation for function 'xzggev'
 *
 */

/* Include files */
#include "xzggev.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "xzggbal.h"
#include "xzhgeqz.h"
#include "xzlangeM.h"
#include "xzlartg.h"
#include "xzlascl.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void xzggev(emxArray_creal_T *A, int *info, emxArray_creal_T *alpha1,
            emxArray_creal_T *beta1, emxArray_creal_T *V)
{
  emxArray_creal_T *work1;
  emxArray_creal_T *work2;
  emxArray_int32_T *rscale;
  emxArray_real_T *rworka;
  creal_T d;
  creal_T *A_data;
  creal_T *alpha1_data;
  creal_T *work1_data;
  creal_T *work2_data;
  double BIG;
  double BIGNUM;
  double SMALL;
  double acoefa;
  double acoeff;
  double ai;
  double anorm;
  double anrm;
  double anrmto;
  double ascale;
  double brm;
  double dmin;
  double salpha_im;
  double salpha_re;
  double scale;
  double stemp_im;
  double stemp_im_tmp;
  double stemp_re;
  double stemp_re_tmp;
  double *rworka_data;
  int b_i;
  int b_n;
  int i;
  int ihi;
  int ilo;
  int j;
  int jcol;
  int jcolp1;
  int jrow;
  int n;
  int *rscale_data;
  bool ilascl;
  bool lscalea;
  bool lscaleb;
  *info = 0;
  n = A->size[0] - 1;
  i = alpha1->size[0];
  alpha1->size[0] = A->size[0];
  emxEnsureCapacity_creal_T(alpha1, i);
  alpha1_data = alpha1->data;
  jcol = A->size[0];
  for (i = 0; i < jcol; i++) {
    alpha1_data[i].re = 0.0;
    alpha1_data[i].im = 0.0;
  }
  i = beta1->size[0];
  beta1->size[0] = A->size[0];
  emxEnsureCapacity_creal_T(beta1, i);
  alpha1_data = beta1->data;
  jcol = A->size[0];
  for (i = 0; i < jcol; i++) {
    alpha1_data[i].re = 0.0;
    alpha1_data[i].im = 0.0;
  }
  i = V->size[0] * V->size[1];
  V->size[0] = A->size[0];
  V->size[1] = A->size[0];
  emxEnsureCapacity_creal_T(V, i);
  alpha1_data = V->data;
  jcol = A->size[0] * A->size[0];
  for (i = 0; i < jcol; i++) {
    alpha1_data[i].re = 0.0;
    alpha1_data[i].im = 0.0;
  }
  emxInit_int32_T(&rscale, 1);
  emxInit_creal_T(&work1, 1);
  emxInit_creal_T(&work2, 1);
  emxInit_real_T(&rworka, 1);
  if ((A->size[0] != 0) && (A->size[1] != 0)) {
    anrm = xzlangeM(A);
    if (rtIsInf(anrm) || rtIsNaN(anrm)) {
      i = alpha1->size[0];
      alpha1->size[0] = A->size[0];
      emxEnsureCapacity_creal_T(alpha1, i);
      alpha1_data = alpha1->data;
      jcol = A->size[0];
      for (i = 0; i < jcol; i++) {
        alpha1_data[i].re = rtNaN;
        alpha1_data[i].im = 0.0;
      }
      i = beta1->size[0];
      beta1->size[0] = A->size[0];
      emxEnsureCapacity_creal_T(beta1, i);
      alpha1_data = beta1->data;
      jcol = A->size[0];
      for (i = 0; i < jcol; i++) {
        alpha1_data[i].re = rtNaN;
        alpha1_data[i].im = 0.0;
      }
      i = V->size[0] * V->size[1];
      V->size[0] = A->size[0];
      V->size[1] = A->size[0];
      emxEnsureCapacity_creal_T(V, i);
      alpha1_data = V->data;
      jcol = A->size[0] * A->size[0];
      for (i = 0; i < jcol; i++) {
        alpha1_data[i].re = rtNaN;
        alpha1_data[i].im = 0.0;
      }
    } else {
      ilascl = false;
      anrmto = anrm;
      if ((anrm > 0.0) && (anrm < 6.7178761075670888E-139)) {
        anrmto = 6.7178761075670888E-139;
        ilascl = true;
        xzlascl(anrm, anrmto, A);
      } else if (anrm > 1.4885657073574029E+138) {
        anrmto = 1.4885657073574029E+138;
        ilascl = true;
        xzlascl(anrm, anrmto, A);
      }
      xzggbal(A, &ilo, &ihi, rscale);
      rscale_data = rscale->data;
      A_data = A->data;
      b_n = A->size[0];
      i = V->size[0] * V->size[1];
      V->size[0] = A->size[0];
      V->size[1] = A->size[0];
      emxEnsureCapacity_creal_T(V, i);
      alpha1_data = V->data;
      jcol = A->size[0] * A->size[0];
      for (i = 0; i < jcol; i++) {
        alpha1_data[i].re = 0.0;
        alpha1_data[i].im = 0.0;
      }
      if (A->size[0] > 0) {
        for (jcol = 0; jcol < b_n; jcol++) {
          alpha1_data[jcol + V->size[0] * jcol].re = 1.0;
          alpha1_data[jcol + V->size[0] * jcol].im = 0.0;
        }
      }
      if ((A->size[0] > 1) && (ihi >= ilo + 2)) {
        for (jcol = ilo - 1; jcol + 1 < ihi - 1; jcol++) {
          jcolp1 = jcol + 2;
          for (jrow = ihi - 1; jrow + 1 > jcol + 2; jrow--) {
            xzlartg(A_data[(jrow + A->size[0] * jcol) - 1],
                    A_data[jrow + A->size[0] * jcol], &stemp_re, &d,
                    &A_data[(jrow + A->size[0] * jcol) - 1]);
            A_data[jrow + A->size[0] * jcol].re = 0.0;
            A_data[jrow + A->size[0] * jcol].im = 0.0;
            for (j = jcolp1; j <= b_n; j++) {
              scale = A_data[jrow + A->size[0] * (j - 1)].im;
              stemp_im = A_data[jrow + A->size[0] * (j - 1)].re;
              stemp_re_tmp = A_data[(jrow + A->size[0] * (j - 1)) - 1].re;
              stemp_im_tmp = A_data[(jrow + A->size[0] * (j - 1)) - 1].im;
              A_data[jrow + A->size[0] * (j - 1)].re =
                  stemp_re * stemp_im -
                  (d.re * stemp_re_tmp + d.im * stemp_im_tmp);
              A_data[jrow + A->size[0] * (j - 1)].im =
                  stemp_re * A_data[jrow + A->size[0] * (j - 1)].im -
                  (d.re * stemp_im_tmp - d.im * stemp_re_tmp);
              A_data[(jrow + A->size[0] * (j - 1)) - 1].re =
                  stemp_re * stemp_re_tmp + (d.re * stemp_im - d.im * scale);
              A_data[(jrow + A->size[0] * (j - 1)) - 1].im =
                  stemp_re * stemp_im_tmp + (d.re * scale + d.im * stemp_im);
            }
            d.re = -d.re;
            d.im = -d.im;
            for (b_i = 1; b_i <= ihi; b_i++) {
              scale = A_data[(b_i + A->size[0] * (jrow - 1)) - 1].im;
              stemp_im = A_data[(b_i + A->size[0] * (jrow - 1)) - 1].re;
              stemp_re_tmp = A_data[(b_i + A->size[0] * jrow) - 1].re;
              stemp_im_tmp = A_data[(b_i + A->size[0] * jrow) - 1].im;
              A_data[(b_i + A->size[0] * (jrow - 1)) - 1].re =
                  stemp_re * stemp_im -
                  (d.re * stemp_re_tmp + d.im * stemp_im_tmp);
              A_data[(b_i + A->size[0] * (jrow - 1)) - 1].im =
                  stemp_re * A_data[(b_i + A->size[0] * (jrow - 1)) - 1].im -
                  (d.re * stemp_im_tmp - d.im * stemp_re_tmp);
              A_data[(b_i + A->size[0] * jrow) - 1].re =
                  stemp_re * stemp_re_tmp + (d.re * stemp_im - d.im * scale);
              A_data[(b_i + A->size[0] * jrow) - 1].im =
                  stemp_re * stemp_im_tmp + (d.re * scale + d.im * stemp_im);
            }
            for (b_i = 1; b_i <= b_n; b_i++) {
              scale = alpha1_data[(b_i + V->size[0] * (jrow - 1)) - 1].im;
              stemp_im = alpha1_data[(b_i + V->size[0] * (jrow - 1)) - 1].re;
              stemp_re_tmp = alpha1_data[(b_i + V->size[0] * jrow) - 1].re;
              stemp_im_tmp = alpha1_data[(b_i + V->size[0] * jrow) - 1].im;
              alpha1_data[(b_i + V->size[0] * (jrow - 1)) - 1].re =
                  stemp_re * stemp_im -
                  (d.re * stemp_re_tmp + d.im * stemp_im_tmp);
              alpha1_data[(b_i + V->size[0] * (jrow - 1)) - 1].im =
                  stemp_re * scale -
                  (d.re * stemp_im_tmp - d.im * stemp_re_tmp);
              alpha1_data[(b_i + V->size[0] * jrow) - 1].re =
                  stemp_re * stemp_re_tmp + (d.re * stemp_im - d.im * scale);
              alpha1_data[(b_i + V->size[0] * jrow) - 1].im =
                  stemp_re * stemp_im_tmp + (d.re * scale + d.im * stemp_im);
            }
          }
        }
      }
      b_xzhgeqz(A, ilo, ihi, V, info, alpha1, beta1);
      alpha1_data = V->data;
      A_data = A->data;
      if (*info == 0) {
        b_n = A->size[0];
        i = work1->size[0];
        work1->size[0] = A->size[0];
        emxEnsureCapacity_creal_T(work1, i);
        work1_data = work1->data;
        jcol = A->size[0];
        for (i = 0; i < jcol; i++) {
          work1_data[i].re = 0.0;
          work1_data[i].im = 0.0;
        }
        i = work2->size[0];
        work2->size[0] = A->size[0];
        emxEnsureCapacity_creal_T(work2, i);
        work2_data = work2->data;
        jcol = A->size[0];
        for (i = 0; i < jcol; i++) {
          work2_data[i].re = 0.0;
          work2_data[i].im = 0.0;
        }
        stemp_re = 2.2250738585072014E-308 * (double)A->size[0];
        SMALL = stemp_re / 2.2204460492503131E-16;
        BIG = 1.0 / SMALL;
        BIGNUM = 1.0 / stemp_re;
        i = rworka->size[0];
        rworka->size[0] = A->size[0];
        emxEnsureCapacity_real_T(rworka, i);
        rworka_data = rworka->data;
        jcol = A->size[0];
        for (i = 0; i < jcol; i++) {
          rworka_data[i] = 0.0;
        }
        anorm = fabs(A_data[0].re) + fabs(A_data[0].im);
        for (j = 2; j <= b_n; j++) {
          for (b_i = 0; b_i <= j - 2; b_i++) {
            d = A_data[b_i + A->size[0] * (j - 1)];
            rworka_data[j - 1] += fabs(d.re) + fabs(d.im);
          }
          stemp_im_tmp = rworka_data[j - 1] +
                         (fabs(A_data[(j + A->size[0] * (j - 1)) - 1].re) +
                          fabs(A_data[(j + A->size[0] * (j - 1)) - 1].im));
          if (stemp_im_tmp > anorm) {
            anorm = stemp_im_tmp;
          }
        }
        stemp_im_tmp = anorm;
        if (2.2250738585072014E-308 > anorm) {
          stemp_im_tmp = 2.2250738585072014E-308;
        }
        ascale = 1.0 / stemp_im_tmp;
        for (jcolp1 = b_n; jcolp1 >= 1; jcolp1--) {
          stemp_re = A_data[(jcolp1 + A->size[0] * (jcolp1 - 1)) - 1].re;
          scale = A_data[(jcolp1 + A->size[0] * (jcolp1 - 1)) - 1].im;
          stemp_im_tmp = (fabs(stemp_re) + fabs(scale)) * ascale;
          if (1.0 > stemp_im_tmp) {
            stemp_im_tmp = 1.0;
          }
          stemp_im = 1.0 / stemp_im_tmp;
          salpha_re = ascale * (stemp_im * stemp_re);
          salpha_im = ascale * (stemp_im * scale);
          acoeff = stemp_im * ascale;
          if ((stemp_im >= 2.2250738585072014E-308) && (acoeff < SMALL)) {
            lscalea = true;
          } else {
            lscalea = false;
          }
          stemp_re = fabs(salpha_re) + fabs(salpha_im);
          if ((stemp_re >= 2.2250738585072014E-308) && (stemp_re < SMALL)) {
            lscaleb = true;
          } else {
            lscaleb = false;
          }
          scale = 1.0;
          if (lscalea) {
            stemp_im_tmp = anorm;
            if (BIG < anorm) {
              stemp_im_tmp = BIG;
            }
            scale = SMALL / stemp_im * stemp_im_tmp;
          }
          if (lscaleb) {
            stemp_im_tmp = SMALL / stemp_re;
            if (stemp_im_tmp > scale) {
              scale = stemp_im_tmp;
            }
          }
          if (lscalea || lscaleb) {
            stemp_im_tmp = acoeff;
            if (1.0 > acoeff) {
              stemp_im_tmp = 1.0;
            }
            if (stemp_re > stemp_im_tmp) {
              stemp_im_tmp = stemp_re;
            }
            stemp_im_tmp = 1.0 / (2.2250738585072014E-308 * stemp_im_tmp);
            if (stemp_im_tmp < scale) {
              scale = stemp_im_tmp;
            }
            if (lscalea) {
              acoeff = ascale * (scale * stemp_im);
            } else {
              acoeff *= scale;
            }
            salpha_re *= scale;
            salpha_im *= scale;
          }
          acoefa = fabs(acoeff);
          for (jrow = 0; jrow < b_n; jrow++) {
            work1_data[jrow].re = 0.0;
            work1_data[jrow].im = 0.0;
          }
          work1_data[jcolp1 - 1].re = 1.0;
          work1_data[jcolp1 - 1].im = 0.0;
          dmin = 2.2204460492503131E-16 * acoefa * anorm;
          stemp_im_tmp =
              2.2204460492503131E-16 * (fabs(salpha_re) + fabs(salpha_im));
          if (stemp_im_tmp > dmin) {
            dmin = stemp_im_tmp;
          }
          if (2.2250738585072014E-308 > dmin) {
            dmin = 2.2250738585072014E-308;
          }
          for (jrow = 0; jrow <= jcolp1 - 2; jrow++) {
            work1_data[jrow].re =
                acoeff * A_data[jrow + A->size[0] * (jcolp1 - 1)].re;
            work1_data[jrow].im =
                acoeff * A_data[jrow + A->size[0] * (jcolp1 - 1)].im;
          }
          work1_data[jcolp1 - 1].re = 1.0;
          work1_data[jcolp1 - 1].im = 0.0;
          i = jcolp1 - 1;
          for (j = i; j >= 1; j--) {
            d.re =
                acoeff * A_data[(j + A->size[0] * (j - 1)) - 1].re - salpha_re;
            d.im =
                acoeff * A_data[(j + A->size[0] * (j - 1)) - 1].im - salpha_im;
            if (fabs(d.re) + fabs(d.im) <= dmin) {
              d.re = dmin;
              d.im = 0.0;
            }
            brm = fabs(d.re);
            stemp_re = fabs(d.im);
            stemp_im_tmp = brm + stemp_re;
            if (stemp_im_tmp < 1.0) {
              scale = fabs(work1_data[j - 1].re) + fabs(work1_data[j - 1].im);
              if (scale >= BIGNUM * stemp_im_tmp) {
                stemp_im = 1.0 / scale;
                for (jrow = 0; jrow < jcolp1; jrow++) {
                  work1_data[jrow].re *= stemp_im;
                  work1_data[jrow].im *= stemp_im;
                }
              }
            }
            stemp_im_tmp = work1_data[j - 1].re;
            stemp_re_tmp = -work1_data[j - 1].re;
            scale = work1_data[j - 1].im;
            ai = -work1_data[j - 1].im;
            if (d.im == 0.0) {
              if (-scale == 0.0) {
                stemp_im = -stemp_im_tmp / d.re;
                stemp_re = 0.0;
              } else if (-stemp_im_tmp == 0.0) {
                stemp_im = 0.0;
                stemp_re = -scale / d.re;
              } else {
                stemp_im = -stemp_im_tmp / d.re;
                stemp_re = -scale / d.re;
              }
            } else if (d.re == 0.0) {
              if (-stemp_im_tmp == 0.0) {
                stemp_im = -scale / d.im;
                stemp_re = 0.0;
              } else if (-scale == 0.0) {
                stemp_im = 0.0;
                stemp_re = -(-stemp_im_tmp / d.im);
              } else {
                stemp_im = -scale / d.im;
                stemp_re = -(-stemp_im_tmp / d.im);
              }
            } else if (brm > stemp_re) {
              stemp_im_tmp = d.im / d.re;
              scale = d.re + stemp_im_tmp * d.im;
              stemp_im = (stemp_re_tmp + stemp_im_tmp * ai) / scale;
              stemp_re = (ai - stemp_im_tmp * stemp_re_tmp) / scale;
            } else if (stemp_re == brm) {
              if (d.re > 0.0) {
                stemp_im_tmp = 0.5;
              } else {
                stemp_im_tmp = -0.5;
              }
              if (d.im > 0.0) {
                scale = 0.5;
              } else {
                scale = -0.5;
              }
              stemp_im = (stemp_re_tmp * stemp_im_tmp + ai * scale) / brm;
              stemp_re = (ai * stemp_im_tmp - stemp_re_tmp * scale) / brm;
            } else {
              stemp_im_tmp = d.re / d.im;
              scale = d.im + stemp_im_tmp * d.re;
              stemp_im = (stemp_im_tmp * stemp_re_tmp + ai) / scale;
              stemp_re = (stemp_im_tmp * ai - stemp_re_tmp) / scale;
            }
            work1_data[j - 1].re = stemp_im;
            work1_data[j - 1].im = stemp_re;
            if (j > 1) {
              stemp_im_tmp = fabs(stemp_im) + fabs(stemp_re);
              if (stemp_im_tmp > 1.0) {
                stemp_im = 1.0 / stemp_im_tmp;
                if (acoefa * rworka_data[j - 1] >= BIGNUM * stemp_im) {
                  for (jrow = 0; jrow < jcolp1; jrow++) {
                    work1_data[jrow].re *= stemp_im;
                    work1_data[jrow].im *= stemp_im;
                  }
                }
              }
              stemp_re = acoeff * work1_data[j - 1].re;
              stemp_im = acoeff * work1_data[j - 1].im;
              for (jrow = 0; jrow <= j - 2; jrow++) {
                stemp_re_tmp = A_data[jrow + A->size[0] * (j - 1)].im;
                stemp_im_tmp = A_data[jrow + A->size[0] * (j - 1)].re;
                work1_data[jrow].re +=
                    stemp_re * stemp_im_tmp - stemp_im * stemp_re_tmp;
                work1_data[jrow].im +=
                    stemp_re * stemp_re_tmp + stemp_im * stemp_im_tmp;
              }
            }
          }
          for (jrow = 0; jrow < b_n; jrow++) {
            work2_data[jrow].re = 0.0;
            work2_data[jrow].im = 0.0;
          }
          for (jcol = 0; jcol < jcolp1; jcol++) {
            for (jrow = 0; jrow < b_n; jrow++) {
              stemp_re = alpha1_data[jrow + V->size[0] * jcol].re;
              scale = work1_data[jcol].im;
              stemp_im = alpha1_data[jrow + V->size[0] * jcol].im;
              stemp_im_tmp = work1_data[jcol].re;
              work2_data[jrow].re += stemp_re * stemp_im_tmp - stemp_im * scale;
              work2_data[jrow].im += stemp_re * scale + stemp_im * stemp_im_tmp;
            }
          }
          stemp_re = fabs(work2_data[0].re) + fabs(work2_data[0].im);
          if (b_n > 1) {
            for (jrow = 2; jrow <= b_n; jrow++) {
              stemp_im_tmp =
                  fabs(work2_data[jrow - 1].re) + fabs(work2_data[jrow - 1].im);
              if (stemp_im_tmp > stemp_re) {
                stemp_re = stemp_im_tmp;
              }
            }
          }
          if (stemp_re > 2.2250738585072014E-308) {
            stemp_im = 1.0 / stemp_re;
            for (jrow = 0; jrow < b_n; jrow++) {
              alpha1_data[jrow + V->size[0] * (jcolp1 - 1)].re =
                  stemp_im * work2_data[jrow].re;
              alpha1_data[jrow + V->size[0] * (jcolp1 - 1)].im =
                  stemp_im * work2_data[jrow].im;
            }
          } else {
            for (jrow = 0; jrow < b_n; jrow++) {
              alpha1_data[jrow + V->size[0] * (jcolp1 - 1)].re = 0.0;
              alpha1_data[jrow + V->size[0] * (jcolp1 - 1)].im = 0.0;
            }
          }
        }
        b_n = V->size[0];
        jcolp1 = V->size[1] - 1;
        if (ilo > 1) {
          for (b_i = ilo - 2; b_i + 1 >= 1; b_i--) {
            jcol = rscale_data[b_i] - 1;
            if (rscale_data[b_i] != b_i + 1) {
              for (j = 0; j <= jcolp1; j++) {
                d = alpha1_data[b_i + V->size[0] * j];
                alpha1_data[b_i + V->size[0] * j] =
                    alpha1_data[jcol + V->size[0] * j];
                alpha1_data[jcol + V->size[0] * j] = d;
              }
            }
          }
        }
        if (ihi < b_n) {
          i = ihi + 1;
          for (b_i = i; b_i <= b_n; b_i++) {
            jcol = rscale_data[b_i - 1];
            if (jcol != b_i) {
              for (j = 0; j <= jcolp1; j++) {
                d = alpha1_data[(b_i + V->size[0] * j) - 1];
                alpha1_data[(b_i + V->size[0] * j) - 1] =
                    alpha1_data[(jcol + V->size[0] * j) - 1];
                alpha1_data[(jcol + V->size[0] * j) - 1] = d;
              }
            }
          }
        }
        for (jcol = 0; jcol <= n; jcol++) {
          stemp_re = fabs(alpha1_data[V->size[0] * jcol].re) +
                     fabs(alpha1_data[V->size[0] * jcol].im);
          if (n + 1 > 1) {
            for (jrow = 0; jrow < n; jrow++) {
              stemp_im_tmp =
                  fabs(alpha1_data[(jrow + V->size[0] * jcol) + 1].re) +
                  fabs(alpha1_data[(jrow + V->size[0] * jcol) + 1].im);
              if (stemp_im_tmp > stemp_re) {
                stemp_re = stemp_im_tmp;
              }
            }
          }
          if (stemp_re >= 6.7178761075670888E-139) {
            stemp_re = 1.0 / stemp_re;
            for (jrow = 0; jrow <= n; jrow++) {
              alpha1_data[jrow + V->size[0] * jcol].re *= stemp_re;
              alpha1_data[jrow + V->size[0] * jcol].im *= stemp_re;
            }
          }
        }
        if (ilascl) {
          b_xzlascl(anrmto, anrm, alpha1);
        }
      }
    }
  }
  emxFree_real_T(&rworka);
  emxFree_creal_T(&work2);
  emxFree_creal_T(&work1);
  emxFree_int32_T(&rscale);
}

/* End of code generation (xzggev.c) */
