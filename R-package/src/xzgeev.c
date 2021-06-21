/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzgeev.c
 *
 * Code generation for function 'xzgeev'
 *
 */

/* Include files */
#include "xzgeev.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "xzggbal.h"
#include "xzlangeM.h"
#include "xzlanhs.h"
#include "xzlartg.h"
#include "xzlascl.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void xzgeev(const emxArray_real_T *A, int *info, emxArray_creal_T *alpha1,
            emxArray_creal_T *beta1)
{
  emxArray_creal_T *At;
  emxArray_int32_T *rscale;
  creal_T b_ascale;
  creal_T ctemp;
  creal_T shift;
  double anorm;
  double anrm;
  double anrmto;
  double ascale;
  double ascale_im;
  double ascale_re;
  double b_ascale_re;
  double b_atol;
  double bscale;
  double eshift_im;
  double eshift_re;
  double stemp_im;
  double stemp_re;
  double t1_im;
  double t1_im_tmp;
  double t1_re;
  double temp;
  double tempr;
  int exitg1;
  int i;
  int ihi;
  int iiter;
  int ilast;
  int ilastm;
  int ilo;
  int j;
  int jcol;
  int jcolp1;
  int jiter;
  int jrow;
  int n;
  bool b_guard1 = false;
  bool exitg2;
  bool failed;
  bool goto60;
  bool goto70;
  bool goto90;
  bool guard1 = false;
  bool guard2 = false;
  bool guard3 = false;
  bool ilascl;
  emxInit_creal_T(&At, 2);
  jcolp1 = At->size[0] * At->size[1];
  At->size[0] = A->size[0];
  At->size[1] = A->size[1];
  emxEnsureCapacity_creal_T(At, jcolp1);
  jcol = A->size[0] * A->size[1];
  for (jcolp1 = 0; jcolp1 < jcol; jcolp1++) {
    At->data[jcolp1].re = A->data[jcolp1];
    At->data[jcolp1].im = 0.0;
  }
  *info = 0;
  jcolp1 = alpha1->size[0];
  alpha1->size[0] = At->size[0];
  emxEnsureCapacity_creal_T(alpha1, jcolp1);
  jcol = At->size[0];
  for (jcolp1 = 0; jcolp1 < jcol; jcolp1++) {
    alpha1->data[jcolp1].re = 0.0;
    alpha1->data[jcolp1].im = 0.0;
  }
  jcolp1 = beta1->size[0];
  beta1->size[0] = At->size[0];
  emxEnsureCapacity_creal_T(beta1, jcolp1);
  jcol = At->size[0];
  for (jcolp1 = 0; jcolp1 < jcol; jcolp1++) {
    beta1->data[jcolp1].re = 0.0;
    beta1->data[jcolp1].im = 0.0;
  }
  emxInit_int32_T(&rscale, 1);
  if ((At->size[0] != 0) && (At->size[1] != 0)) {
    anrm = xzlangeM(At);
    if (rtIsInf(anrm) || rtIsNaN(anrm)) {
      jcolp1 = alpha1->size[0];
      alpha1->size[0] = At->size[0];
      emxEnsureCapacity_creal_T(alpha1, jcolp1);
      jcol = At->size[0];
      for (jcolp1 = 0; jcolp1 < jcol; jcolp1++) {
        alpha1->data[jcolp1].re = rtNaN;
        alpha1->data[jcolp1].im = 0.0;
      }
      jcolp1 = beta1->size[0];
      beta1->size[0] = At->size[0];
      emxEnsureCapacity_creal_T(beta1, jcolp1);
      jcol = At->size[0];
      for (jcolp1 = 0; jcolp1 < jcol; jcolp1++) {
        beta1->data[jcolp1].re = rtNaN;
        beta1->data[jcolp1].im = 0.0;
      }
    } else {
      ilascl = false;
      anrmto = anrm;
      if ((anrm > 0.0) && (anrm < 6.7178761075670888E-139)) {
        anrmto = 6.7178761075670888E-139;
        ilascl = true;
        xzlascl(anrm, anrmto, At);
      } else if (anrm > 1.4885657073574029E+138) {
        anrmto = 1.4885657073574029E+138;
        ilascl = true;
        xzlascl(anrm, anrmto, At);
      }
      xzggbal(At, &ilo, &ihi, rscale);
      n = At->size[0];
      if ((At->size[0] > 1) && (ihi >= ilo + 2)) {
        for (jcol = ilo - 1; jcol + 1 < ihi - 1; jcol++) {
          jcolp1 = jcol + 2;
          for (jrow = ihi - 1; jrow + 1 > jcol + 2; jrow--) {
            xzlartg(At->data[(jrow + At->size[0] * jcol) - 1],
                    At->data[jrow + At->size[0] * jcol], &anorm, &shift,
                    &At->data[(jrow + At->size[0] * jcol) - 1]);
            At->data[jrow + At->size[0] * jcol].re = 0.0;
            At->data[jrow + At->size[0] * jcol].im = 0.0;
            for (j = jcolp1; j <= n; j++) {
              stemp_re =
                  anorm * At->data[(jrow + At->size[0] * (j - 1)) - 1].re +
                  (shift.re * At->data[jrow + At->size[0] * (j - 1)].re -
                   shift.im * At->data[jrow + At->size[0] * (j - 1)].im);
              stemp_im =
                  anorm * At->data[(jrow + At->size[0] * (j - 1)) - 1].im +
                  (shift.re * At->data[jrow + At->size[0] * (j - 1)].im +
                   shift.im * At->data[jrow + At->size[0] * (j - 1)].re);
              temp = At->data[(jrow + At->size[0] * (j - 1)) - 1].re;
              At->data[jrow + At->size[0] * (j - 1)].re =
                  anorm * At->data[jrow + At->size[0] * (j - 1)].re -
                  (shift.re * At->data[(jrow + At->size[0] * (j - 1)) - 1].re +
                   shift.im * At->data[(jrow + At->size[0] * (j - 1)) - 1].im);
              At->data[jrow + At->size[0] * (j - 1)].im =
                  anorm * At->data[jrow + At->size[0] * (j - 1)].im -
                  (shift.re * At->data[(jrow + At->size[0] * (j - 1)) - 1].im -
                   shift.im * temp);
              At->data[(jrow + At->size[0] * (j - 1)) - 1].re = stemp_re;
              At->data[(jrow + At->size[0] * (j - 1)) - 1].im = stemp_im;
            }
            shift.re = -shift.re;
            shift.im = -shift.im;
            for (i = 1; i <= ihi; i++) {
              stemp_re =
                  anorm * At->data[(i + At->size[0] * jrow) - 1].re +
                  (shift.re * At->data[(i + At->size[0] * (jrow - 1)) - 1].re -
                   shift.im * At->data[(i + At->size[0] * (jrow - 1)) - 1].im);
              stemp_im =
                  anorm * At->data[(i + At->size[0] * jrow) - 1].im +
                  (shift.re * At->data[(i + At->size[0] * (jrow - 1)) - 1].im +
                   shift.im * At->data[(i + At->size[0] * (jrow - 1)) - 1].re);
              temp = At->data[(i + At->size[0] * jrow) - 1].re;
              At->data[(i + At->size[0] * (jrow - 1)) - 1].re =
                  anorm * At->data[(i + At->size[0] * (jrow - 1)) - 1].re -
                  (shift.re * At->data[(i + At->size[0] * jrow) - 1].re +
                   shift.im * At->data[(i + At->size[0] * jrow) - 1].im);
              At->data[(i + At->size[0] * (jrow - 1)) - 1].im =
                  anorm * At->data[(i + At->size[0] * (jrow - 1)) - 1].im -
                  (shift.re * At->data[(i + At->size[0] * jrow) - 1].im -
                   shift.im * temp);
              At->data[(i + At->size[0] * jrow) - 1].re = stemp_re;
              At->data[(i + At->size[0] * jrow) - 1].im = stemp_im;
            }
          }
        }
      }
      *info = 0;
      if ((At->size[0] == 1) && (At->size[1] == 1)) {
        ihi = 1;
      }
      n = At->size[0];
      jcolp1 = alpha1->size[0];
      alpha1->size[0] = At->size[0];
      emxEnsureCapacity_creal_T(alpha1, jcolp1);
      jcol = At->size[0];
      for (jcolp1 = 0; jcolp1 < jcol; jcolp1++) {
        alpha1->data[jcolp1].re = 0.0;
        alpha1->data[jcolp1].im = 0.0;
      }
      jcolp1 = beta1->size[0];
      beta1->size[0] = At->size[0];
      emxEnsureCapacity_creal_T(beta1, jcolp1);
      jcol = At->size[0];
      for (jcolp1 = 0; jcolp1 < jcol; jcolp1++) {
        beta1->data[jcolp1].re = 1.0;
        beta1->data[jcolp1].im = 0.0;
      }
      eshift_re = 0.0;
      eshift_im = 0.0;
      ctemp.re = 0.0;
      ctemp.im = 0.0;
      anorm = xzlanhs(At, ilo, ihi);
      temp = 2.2204460492503131E-16 * anorm;
      b_atol = 2.2250738585072014E-308;
      if (temp > 2.2250738585072014E-308) {
        b_atol = temp;
      }
      temp = 2.2250738585072014E-308;
      if (anorm > 2.2250738585072014E-308) {
        temp = anorm;
      }
      ascale = 1.0 / temp;
      bscale = 1.0 / sqrt(At->size[0]);
      failed = true;
      jcolp1 = ihi + 1;
      for (j = jcolp1; j <= n; j++) {
        alpha1->data[j - 1] = At->data[(j + At->size[0] * (j - 1)) - 1];
      }
      guard1 = false;
      guard2 = false;
      if (ihi >= ilo) {
        jcolp1 = ilo;
        jrow = ilo;
        ilast = ihi - 1;
        n = ihi - 2;
        ilastm = ihi;
        iiter = 0;
        goto60 = false;
        goto70 = false;
        goto90 = false;
        jiter = 0;
        do {
          exitg1 = 0;
          if (jiter <= 30 * ((ihi - ilo) + 1) - 1) {
            b_guard1 = false;
            if (ilast + 1 == ilo) {
              goto60 = true;
              b_guard1 = true;
            } else if (fabs(At->data[ilast + At->size[0] * n].re) +
                           fabs(At->data[ilast + At->size[0] * n].im) <=
                       b_atol) {
              At->data[ilast + At->size[0] * n].re = 0.0;
              At->data[ilast + At->size[0] * n].im = 0.0;
              goto60 = true;
              b_guard1 = true;
            } else {
              j = n;
              guard3 = false;
              exitg2 = false;
              while ((!exitg2) && (j + 1 >= ilo)) {
                if (j + 1 == ilo) {
                  guard3 = true;
                  exitg2 = true;
                } else if (fabs(At->data[j + At->size[0] * (j - 1)].re) +
                               fabs(At->data[j + At->size[0] * (j - 1)].im) <=
                           b_atol) {
                  At->data[j + At->size[0] * (j - 1)].re = 0.0;
                  At->data[j + At->size[0] * (j - 1)].im = 0.0;
                  guard3 = true;
                  exitg2 = true;
                } else {
                  j--;
                  guard3 = false;
                }
              }
              if (guard3) {
                jcolp1 = j + 1;
                goto70 = true;
              }
              if (goto70) {
                b_guard1 = true;
              } else {
                jcol = alpha1->size[0];
                jcolp1 = alpha1->size[0];
                alpha1->size[0] = jcol;
                emxEnsureCapacity_creal_T(alpha1, jcolp1);
                for (jcolp1 = 0; jcolp1 < jcol; jcolp1++) {
                  alpha1->data[jcolp1].re = rtNaN;
                  alpha1->data[jcolp1].im = 0.0;
                }
                jcol = beta1->size[0];
                jcolp1 = beta1->size[0];
                beta1->size[0] = jcol;
                emxEnsureCapacity_creal_T(beta1, jcolp1);
                for (jcolp1 = 0; jcolp1 < jcol; jcolp1++) {
                  beta1->data[jcolp1].re = rtNaN;
                  beta1->data[jcolp1].im = 0.0;
                }
                *info = 1;
                exitg1 = 1;
              }
            }
            if (b_guard1) {
              if (goto60) {
                goto60 = false;
                alpha1->data[ilast] = At->data[ilast + At->size[0] * ilast];
                ilast = n;
                n--;
                if (ilast + 1 < ilo) {
                  failed = false;
                  guard2 = true;
                  exitg1 = 1;
                } else {
                  iiter = 0;
                  eshift_re = 0.0;
                  eshift_im = 0.0;
                  ilastm = ilast + 1;
                  jiter++;
                }
              } else {
                if (goto70) {
                  goto70 = false;
                  iiter++;
                  if (iiter - iiter / 10 * 10 != 0) {
                    anorm = ascale * At->data[n + At->size[0] * n].re;
                    temp = ascale * At->data[n + At->size[0] * n].im;
                    if (temp == 0.0) {
                      shift.re = anorm / bscale;
                      shift.im = 0.0;
                    } else if (anorm == 0.0) {
                      shift.re = 0.0;
                      shift.im = temp / bscale;
                    } else {
                      shift.re = anorm / bscale;
                      shift.im = temp / bscale;
                    }
                    anorm = ascale * At->data[ilast + At->size[0] * ilast].re;
                    temp = ascale * At->data[ilast + At->size[0] * ilast].im;
                    if (temp == 0.0) {
                      stemp_re = anorm / bscale;
                      stemp_im = 0.0;
                    } else if (anorm == 0.0) {
                      stemp_re = 0.0;
                      stemp_im = temp / bscale;
                    } else {
                      stemp_re = anorm / bscale;
                      stemp_im = temp / bscale;
                    }
                    t1_re = 0.5 * (shift.re + stemp_re);
                    t1_im = 0.5 * (shift.im + stemp_im);
                    t1_im_tmp = t1_re * t1_im;
                    anorm = ascale * At->data[n + At->size[0] * ilast].re;
                    temp = ascale * At->data[n + At->size[0] * ilast].im;
                    if (temp == 0.0) {
                      ascale_re = anorm / bscale;
                      ascale_im = 0.0;
                    } else if (anorm == 0.0) {
                      ascale_re = 0.0;
                      ascale_im = temp / bscale;
                    } else {
                      ascale_re = anorm / bscale;
                      ascale_im = temp / bscale;
                    }
                    anorm = ascale * At->data[ilast + At->size[0] * n].re;
                    temp = ascale * At->data[ilast + At->size[0] * n].im;
                    if (temp == 0.0) {
                      b_ascale_re = anorm / bscale;
                      anorm = 0.0;
                    } else if (anorm == 0.0) {
                      b_ascale_re = 0.0;
                      anorm = temp / bscale;
                    } else {
                      b_ascale_re = anorm / bscale;
                      anorm = temp / bscale;
                    }
                    temp = shift.re * stemp_re - shift.im * stemp_im;
                    tempr = shift.re * stemp_im + shift.im * stemp_re;
                    shift.re = ((t1_re * t1_re - t1_im * t1_im) +
                                (ascale_re * b_ascale_re - ascale_im * anorm)) -
                               temp;
                    shift.im = ((t1_im_tmp + t1_im_tmp) +
                                (ascale_re * anorm + ascale_im * b_ascale_re)) -
                               tempr;
                    b_sqrt(&shift);
                    if ((t1_re - stemp_re) * shift.re +
                            (t1_im - stemp_im) * shift.im <=
                        0.0) {
                      shift.re += t1_re;
                      shift.im += t1_im;
                    } else {
                      shift.re = t1_re - shift.re;
                      shift.im = t1_im - shift.im;
                    }
                  } else {
                    anorm = ascale * At->data[ilast + At->size[0] * n].re;
                    temp = ascale * At->data[ilast + At->size[0] * n].im;
                    if (temp == 0.0) {
                      ascale_re = anorm / bscale;
                      ascale_im = 0.0;
                    } else if (anorm == 0.0) {
                      ascale_re = 0.0;
                      ascale_im = temp / bscale;
                    } else {
                      ascale_re = anorm / bscale;
                      ascale_im = temp / bscale;
                    }
                    eshift_re += ascale_re;
                    eshift_im += ascale_im;
                    shift.re = eshift_re;
                    shift.im = eshift_im;
                  }
                  j = n;
                  jcol = n + 1;
                  exitg2 = false;
                  while ((!exitg2) && (j + 1 > jcolp1)) {
                    jrow = j + 1;
                    ctemp.re = ascale * At->data[j + At->size[0] * j].re -
                               shift.re * bscale;
                    ctemp.im = ascale * At->data[j + At->size[0] * j].im -
                               shift.im * bscale;
                    temp = fabs(ctemp.re) + fabs(ctemp.im);
                    anorm =
                        ascale * (fabs(At->data[jcol + At->size[0] * j].re) +
                                  fabs(At->data[jcol + At->size[0] * j].im));
                    tempr = temp;
                    if (anorm > temp) {
                      tempr = anorm;
                    }
                    if ((tempr < 1.0) && (tempr != 0.0)) {
                      temp /= tempr;
                      anorm /= tempr;
                    }
                    if ((fabs(At->data[j + At->size[0] * (j - 1)].re) +
                         fabs(At->data[j + At->size[0] * (j - 1)].im)) *
                            anorm <=
                        temp * b_atol) {
                      goto90 = true;
                      exitg2 = true;
                    } else {
                      jcol = j;
                      j--;
                    }
                  }
                  if (!goto90) {
                    jrow = jcolp1;
                    ctemp.re =
                        ascale *
                            At->data[(jcolp1 + At->size[0] * (jcolp1 - 1)) - 1]
                                .re -
                        shift.re * bscale;
                    ctemp.im =
                        ascale *
                            At->data[(jcolp1 + At->size[0] * (jcolp1 - 1)) - 1]
                                .im -
                        shift.im * bscale;
                  }
                  goto90 = false;
                  b_ascale.re =
                      ascale * At->data[jrow + At->size[0] * (jrow - 1)].re;
                  b_ascale.im =
                      ascale * At->data[jrow + At->size[0] * (jrow - 1)].im;
                  b_xzlartg(ctemp, b_ascale, &anorm, &shift);
                  j = jrow;
                  jcol = jrow - 2;
                  while (j < ilast + 1) {
                    if (j > jrow) {
                      xzlartg(At->data[(j + At->size[0] * jcol) - 1],
                              At->data[j + At->size[0] * jcol], &anorm, &shift,
                              &At->data[(j + At->size[0] * jcol) - 1]);
                      At->data[j + At->size[0] * jcol].re = 0.0;
                      At->data[j + At->size[0] * jcol].im = 0.0;
                    }
                    for (jcol = j; jcol <= ilastm; jcol++) {
                      stemp_re =
                          anorm *
                              At->data[(j + At->size[0] * (jcol - 1)) - 1].re +
                          (shift.re *
                               At->data[j + At->size[0] * (jcol - 1)].re -
                           shift.im *
                               At->data[j + At->size[0] * (jcol - 1)].im);
                      stemp_im =
                          anorm *
                              At->data[(j + At->size[0] * (jcol - 1)) - 1].im +
                          (shift.re *
                               At->data[j + At->size[0] * (jcol - 1)].im +
                           shift.im *
                               At->data[j + At->size[0] * (jcol - 1)].re);
                      temp = At->data[(j + At->size[0] * (jcol - 1)) - 1].re;
                      At->data[j + At->size[0] * (jcol - 1)].re =
                          anorm * At->data[j + At->size[0] * (jcol - 1)].re -
                          (shift.re *
                               At->data[(j + At->size[0] * (jcol - 1)) - 1].re +
                           shift.im *
                               At->data[(j + At->size[0] * (jcol - 1)) - 1].im);
                      At->data[j + At->size[0] * (jcol - 1)].im =
                          anorm * At->data[j + At->size[0] * (jcol - 1)].im -
                          (shift.re *
                               At->data[(j + At->size[0] * (jcol - 1)) - 1].im -
                           shift.im * temp);
                      At->data[(j + At->size[0] * (jcol - 1)) - 1].re =
                          stemp_re;
                      At->data[(j + At->size[0] * (jcol - 1)) - 1].im =
                          stemp_im;
                    }
                    shift.re = -shift.re;
                    shift.im = -shift.im;
                    jcol = j;
                    if (ilast + 1 < j + 2) {
                      jcol = ilast - 1;
                    }
                    for (i = jcolp1; i <= jcol + 2; i++) {
                      stemp_re =
                          anorm * At->data[(i + At->size[0] * j) - 1].re +
                          (shift.re *
                               At->data[(i + At->size[0] * (j - 1)) - 1].re -
                           shift.im *
                               At->data[(i + At->size[0] * (j - 1)) - 1].im);
                      stemp_im =
                          anorm * At->data[(i + At->size[0] * j) - 1].im +
                          (shift.re *
                               At->data[(i + At->size[0] * (j - 1)) - 1].im +
                           shift.im *
                               At->data[(i + At->size[0] * (j - 1)) - 1].re);
                      temp = At->data[(i + At->size[0] * j) - 1].re;
                      At->data[(i + At->size[0] * (j - 1)) - 1].re =
                          anorm * At->data[(i + At->size[0] * (j - 1)) - 1].re -
                          (shift.re * At->data[(i + At->size[0] * j) - 1].re +
                           shift.im * At->data[(i + At->size[0] * j) - 1].im);
                      At->data[(i + At->size[0] * (j - 1)) - 1].im =
                          anorm * At->data[(i + At->size[0] * (j - 1)) - 1].im -
                          (shift.re * At->data[(i + At->size[0] * j) - 1].im -
                           shift.im * temp);
                      At->data[(i + At->size[0] * j) - 1].re = stemp_re;
                      At->data[(i + At->size[0] * j) - 1].im = stemp_im;
                    }
                    jcol = j - 1;
                    j++;
                  }
                }
                jiter++;
              }
            }
          } else {
            guard2 = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      } else {
        guard1 = true;
      }
      if (guard2) {
        if (failed) {
          *info = ilast + 1;
          for (jcol = 0; jcol <= ilast; jcol++) {
            alpha1->data[jcol].re = rtNaN;
            alpha1->data[jcol].im = 0.0;
            beta1->data[jcol].re = rtNaN;
            beta1->data[jcol].im = 0.0;
          }
        } else {
          guard1 = true;
        }
      }
      if (guard1) {
        for (j = 0; j <= ilo - 2; j++) {
          alpha1->data[j] = At->data[j + At->size[0] * j];
        }
      }
      if ((*info == 0) && ilascl) {
        b_xzlascl(anrmto, anrm, alpha1);
      }
    }
  }
  emxFree_int32_T(&rscale);
  emxFree_creal_T(&At);
}

/* End of code generation (xzgeev.c) */
