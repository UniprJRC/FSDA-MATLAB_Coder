/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzhgeqz.c
 *
 * Code generation for function 'xzhgeqz'
 *
 */

/* Include files */
#include "xzhgeqz.h"
#include "fsdaC_data.h"
#include "fsdaC_rtwutil.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include <math.h>
#include <string.h>

/* Custom Source Code */
#pragma GCC diagnostic ignored "-Wmaybe-uninitialized"
/* Function Definitions */
void xzhgeqz(const creal_T A[4], int ilo, int ihi, int *info, creal_T alpha1[2],
             creal_T beta1[2])
{
  creal_T b_A[4];
  creal_T shift;
  double ad22_im;
  double ad22_re;
  double anorm;
  double ascale;
  double b_atol;
  double colscale;
  double colssq;
  double ctemp_im;
  double ctemp_re;
  double eshift_im;
  double eshift_re;
  double scale;
  double shift_im;
  double shift_re;
  double ssq;
  double t;
  double t1_im;
  double t1_im_tmp;
  int col;
  int exitg1;
  int i;
  int iiter;
  int ilast;
  int ilastm;
  int ilastm1;
  int istart;
  int j;
  int jiter;
  int nm1;
  bool b_guard1 = false;
  bool exitg2;
  bool failed;
  bool goto60;
  bool goto70;
  bool goto90;
  bool guard1 = false;
  bool guard2 = false;
  bool guard3 = false;
  memcpy(&b_A[0], &A[0], 4U * sizeof(creal_T));
  *info = 0;
  alpha1[0].re = 0.0;
  alpha1[0].im = 0.0;
  beta1[0].re = 1.0;
  beta1[0].im = 0.0;
  alpha1[1].re = 0.0;
  alpha1[1].im = 0.0;
  beta1[1].re = 1.0;
  beta1[1].im = 0.0;
  eshift_re = 0.0;
  eshift_im = 0.0;
  ctemp_re = 0.0;
  ctemp_im = 0.0;
  anorm = 0.0;
  if (ilo <= ihi) {
    scale = 3.3121686421112381E-170;
    ssq = 0.0;
    nm1 = ihi - ilo;
    for (j = 0; j <= nm1; j++) {
      colscale = 3.3121686421112381E-170;
      colssq = 0.0;
      col = (ilo + j) - 1;
      i = ilo + nm1;
      for (istart = ilo; istart <= i; istart++) {
        ilastm1 = (istart + (col << 1)) - 1;
        anorm = fabs(A[ilastm1].re);
        if (anorm > colscale) {
          t = colscale / anorm;
          colssq = colssq * t * t + 1.0;
          colscale = anorm;
        } else {
          t = anorm / colscale;
          colssq += t * t;
        }
        anorm = fabs(A[ilastm1].im);
        if (anorm > colscale) {
          t = colscale / anorm;
          colssq = colssq * t * t + 1.0;
          colscale = anorm;
        } else {
          t = anorm / colscale;
          colssq += t * t;
        }
      }
      if (scale >= colscale) {
        anorm = colscale / scale;
        ssq += anorm * anorm * colssq;
      } else {
        anorm = scale / colscale;
        ssq = colssq + anorm * anorm * ssq;
        scale = colscale;
      }
    }
    anorm = scale * sqrt(ssq);
  }
  t = 2.2204460492503131E-16 * anorm;
  b_atol = 2.2250738585072014E-308;
  if (t > 2.2250738585072014E-308) {
    b_atol = t;
  }
  t = 2.2250738585072014E-308;
  if (anorm > 2.2250738585072014E-308) {
    t = anorm;
  }
  ascale = 1.0 / t;
  failed = true;
  if (ihi + 1 <= 2) {
    alpha1[1] = A[3];
  }
  guard1 = false;
  guard2 = false;
  if (ihi >= ilo) {
    col = ilo;
    istart = ilo;
    ilast = ihi - 1;
    ilastm1 = ihi - 2;
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
        } else {
          i = ilast + (ilastm1 << 1);
          if (fabs(b_A[i].re) + fabs(b_A[i].im) <= b_atol) {
            b_A[i].re = 0.0;
            b_A[i].im = 0.0;
            goto60 = true;
            b_guard1 = true;
          } else {
            j = ilastm1;
            guard3 = false;
            exitg2 = false;
            while ((!exitg2) && (j + 1 >= ilo)) {
              if (j + 1 == ilo) {
                guard3 = true;
                exitg2 = true;
              } else if (fabs(b_A[j].re) + fabs(b_A[j].im) <= b_atol) {
                b_A[j].re = 0.0;
                b_A[j].im = 0.0;
                guard3 = true;
                exitg2 = true;
              } else {
                j--;
                guard3 = false;
              }
            }
            if (guard3) {
              col = j + 1;
              goto70 = true;
            }
            if (goto70) {
              b_guard1 = true;
            } else {
              alpha1[0].re = rtNaN;
              alpha1[0].im = 0.0;
              beta1[0].re = rtNaN;
              beta1[0].im = 0.0;
              alpha1[1].re = rtNaN;
              alpha1[1].im = 0.0;
              beta1[1].re = rtNaN;
              beta1[1].im = 0.0;
              *info = 1;
              exitg1 = 1;
            }
          }
        }
        if (b_guard1) {
          if (goto60) {
            goto60 = false;
            alpha1[ilast] = b_A[ilast + (ilast << 1)];
            ilast = ilastm1;
            ilastm1--;
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
                nm1 = ilastm1 + (ilastm1 << 1);
                anorm = ascale * b_A[nm1].re;
                t = ascale * b_A[nm1].im;
                if (t == 0.0) {
                  shift.re = anorm / 0.70710678118654746;
                  shift.im = 0.0;
                } else if (anorm == 0.0) {
                  shift.re = 0.0;
                  shift.im = t / 0.70710678118654746;
                } else {
                  shift.re = anorm / 0.70710678118654746;
                  shift.im = t / 0.70710678118654746;
                }
                nm1 = ilast + (ilast << 1);
                anorm = ascale * b_A[nm1].re;
                t = ascale * b_A[nm1].im;
                if (t == 0.0) {
                  ad22_re = anorm / 0.70710678118654746;
                  ad22_im = 0.0;
                } else if (anorm == 0.0) {
                  ad22_re = 0.0;
                  ad22_im = t / 0.70710678118654746;
                } else {
                  ad22_re = anorm / 0.70710678118654746;
                  ad22_im = t / 0.70710678118654746;
                }
                scale = 0.5 * (shift.re + ad22_re);
                t1_im = 0.5 * (shift.im + ad22_im);
                t1_im_tmp = scale * t1_im;
                nm1 = ilastm1 + (ilast << 1);
                anorm = ascale * b_A[nm1].re;
                t = ascale * b_A[nm1].im;
                if (t == 0.0) {
                  colscale = anorm / 0.70710678118654746;
                  colssq = 0.0;
                } else if (anorm == 0.0) {
                  colscale = 0.0;
                  colssq = t / 0.70710678118654746;
                } else {
                  colscale = anorm / 0.70710678118654746;
                  colssq = t / 0.70710678118654746;
                }
                nm1 = ilast + (ilastm1 << 1);
                anorm = ascale * b_A[nm1].re;
                t = ascale * b_A[nm1].im;
                if (t == 0.0) {
                  ssq = anorm / 0.70710678118654746;
                  anorm = 0.0;
                } else if (anorm == 0.0) {
                  ssq = 0.0;
                  anorm = t / 0.70710678118654746;
                } else {
                  ssq = anorm / 0.70710678118654746;
                  anorm = t / 0.70710678118654746;
                }
                shift_re = shift.re * ad22_re - shift.im * ad22_im;
                shift_im = shift.re * ad22_im + shift.im * ad22_re;
                shift.re = ((scale * scale - t1_im * t1_im) +
                            (colscale * ssq - colssq * anorm)) -
                           shift_re;
                shift.im = ((t1_im_tmp + t1_im_tmp) +
                            (colscale * anorm + colssq * ssq)) -
                           shift_im;
                b_sqrt(&shift);
                if ((scale - ad22_re) * shift.re +
                        (t1_im - ad22_im) * shift.im <=
                    0.0) {
                  shift.re += scale;
                  shift.im += t1_im;
                } else {
                  shift.re = scale - shift.re;
                  shift.im = t1_im - shift.im;
                }
              } else {
                nm1 = ilast + (ilastm1 << 1);
                anorm = ascale * b_A[nm1].re;
                t = ascale * b_A[nm1].im;
                if (t == 0.0) {
                  colscale = anorm / 0.70710678118654746;
                  colssq = 0.0;
                } else if (anorm == 0.0) {
                  colscale = 0.0;
                  colssq = t / 0.70710678118654746;
                } else {
                  colscale = anorm / 0.70710678118654746;
                  colssq = t / 0.70710678118654746;
                }
                eshift_re += colscale;
                eshift_im += colssq;
                shift.re = eshift_re;
                shift.im = eshift_im;
              }
              j = ilastm1;
              nm1 = ilastm1 + 1;
              exitg2 = false;
              while ((!exitg2) && (j + 1 > col)) {
                istart = 2;
                ctemp_re = ascale * b_A[3].re - shift.re * 0.70710678118654746;
                ctemp_im = ascale * b_A[3].im - shift.im * 0.70710678118654746;
                anorm = fabs(ctemp_re) + fabs(ctemp_im);
                t = ascale * (fabs(b_A[nm1 + 2].re) + fabs(b_A[nm1 + 2].im));
                ssq = anorm;
                if (t > anorm) {
                  ssq = t;
                }
                if ((ssq < 1.0) && (ssq != 0.0)) {
                  anorm /= ssq;
                  t /= ssq;
                }
                if ((fabs(b_A[1].re) + fabs(b_A[1].im)) * t <= anorm * b_atol) {
                  goto90 = true;
                  exitg2 = true;
                } else {
                  nm1 = 1;
                  j = 0;
                }
              }
              if (!goto90) {
                istart = col;
                nm1 = (col + ((col - 1) << 1)) - 1;
                ctemp_re =
                    ascale * b_A[nm1].re - shift.re * 0.70710678118654746;
                ctemp_im =
                    ascale * b_A[nm1].im - shift.im * 0.70710678118654746;
              }
              goto90 = false;
              nm1 = ((istart - 1) << 1) + 1;
              ad22_re = ascale * b_A[nm1].re;
              ad22_im = ascale * b_A[nm1].im;
              colscale = fabs(ctemp_re);
              t = fabs(ctemp_im);
              if (t > colscale) {
                colscale = t;
              }
              t = fabs(ad22_re);
              anorm = fabs(ad22_im);
              if (anorm > t) {
                t = anorm;
              }
              scale = colscale;
              if (t > colscale) {
                scale = t;
              }
              shift.re = ctemp_re;
              shift.im = ctemp_im;
              guard3 = false;
              if (scale >= 7.4428285367870146E+137) {
                do {
                  shift.re *= 1.3435752215134178E-138;
                  shift.im *= 1.3435752215134178E-138;
                  ad22_re *= 1.3435752215134178E-138;
                  ad22_im *= 1.3435752215134178E-138;
                  scale *= 1.3435752215134178E-138;
                } while (!(scale < 7.4428285367870146E+137));
                guard3 = true;
              } else if (scale <= 1.3435752215134178E-138) {
                if ((ad22_re == 0.0) && (ad22_im == 0.0)) {
                  t1_im = 1.0;
                  shift.re = 0.0;
                  shift.im = 0.0;
                } else {
                  do {
                    shift.re *= 7.4428285367870146E+137;
                    shift.im *= 7.4428285367870146E+137;
                    ad22_re *= 7.4428285367870146E+137;
                    ad22_im *= 7.4428285367870146E+137;
                    scale *= 7.4428285367870146E+137;
                  } while (!(scale > 1.3435752215134178E-138));
                  guard3 = true;
                }
              } else {
                guard3 = true;
              }
              if (guard3) {
                anorm = shift.re * shift.re + shift.im * shift.im;
                ssq = ad22_re * ad22_re + ad22_im * ad22_im;
                t = ssq;
                if (1.0 > ssq) {
                  t = 1.0;
                }
                if (anorm <= t * 2.0041683600089728E-292) {
                  if ((ctemp_re == 0.0) && (ctemp_im == 0.0)) {
                    t1_im = 0.0;
                    scale = rt_hypotd_snf(ad22_re, ad22_im);
                    shift.re = ad22_re / scale;
                    shift.im = -ad22_im / scale;
                  } else {
                    ssq = sqrt(ssq);
                    t1_im = rt_hypotd_snf(shift.re, shift.im) / ssq;
                    if (colscale > 1.0) {
                      scale = rt_hypotd_snf(ctemp_re, ctemp_im);
                      shift.re = ctemp_re / scale;
                      shift.im = ctemp_im / scale;
                    } else {
                      anorm = 7.4428285367870146E+137 * ctemp_re;
                      t = 7.4428285367870146E+137 * ctemp_im;
                      scale = rt_hypotd_snf(anorm, t);
                      shift.re = anorm / scale;
                      shift.im = t / scale;
                    }
                    ad22_re /= ssq;
                    ad22_im = -ad22_im / ssq;
                    colscale = shift.re * ad22_re - shift.im * ad22_im;
                    anorm = shift.re * ad22_im + shift.im * ad22_re;
                    shift.re = colscale;
                    shift.im = anorm;
                  }
                } else {
                  t = sqrt(ssq / anorm + 1.0);
                  colscale = shift.re;
                  colssq = shift.im;
                  t1_im = 1.0 / t;
                  scale = anorm + ssq;
                  shift_re = t * colscale / scale;
                  shift_im = t * colssq / scale;
                  shift.re = shift_re * ad22_re - shift_im * -ad22_im;
                  shift.im = shift_re * -ad22_im + shift_im * ad22_re;
                }
              }
              j = istart;
              while (j < ilast + 1) {
                for (j = 1; j <= ilastm; j++) {
                  nm1 = (j - 1) << 1;
                  colscale = b_A[nm1].re;
                  anorm = b_A[nm1].im;
                  t = b_A[nm1 + 1].re;
                  ssq = b_A[nm1 + 1].im;
                  shift_re = shift.re * t - shift.im * ssq;
                  shift_im = shift.re * ssq + shift.im * t;
                  t = t1_im * t - (shift.re * colscale + shift.im * anorm);
                  ssq = t1_im * ssq - (shift.re * anorm - shift.im * colscale);
                  b_A[nm1 + 1].re = t;
                  b_A[nm1 + 1].im = ssq;
                  b_A[nm1].re = t1_im * colscale + shift_re;
                  b_A[nm1].im = t1_im * anorm + shift_im;
                }
                shift.re = -shift.re;
                shift.im = -shift.im;
                for (nm1 = col; nm1 < 3; nm1++) {
                  colscale = b_A[nm1 + 1].re;
                  colssq = b_A[nm1 - 1].re;
                  anorm = b_A[nm1 - 1].im;
                  ad22_im = t1_im * b_A[nm1 + 1].im +
                            (shift.re * anorm + shift.im * colssq);
                  b_A[nm1 - 1].re =
                      t1_im * b_A[nm1 - 1].re -
                      (shift.re * b_A[nm1 + 1].re + shift.im * b_A[nm1 + 1].im);
                  b_A[nm1 - 1].im =
                      t1_im * b_A[nm1 - 1].im -
                      (shift.re * b_A[nm1 + 1].im - shift.im * colscale);
                  b_A[nm1 + 1].re =
                      t1_im * colscale + (shift.re * colssq - shift.im * anorm);
                  b_A[nm1 + 1].im = ad22_im;
                }
                j = 2;
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
      for (nm1 = 0; nm1 <= ilast; nm1++) {
        alpha1[nm1].re = rtNaN;
        alpha1[nm1].im = 0.0;
        beta1[nm1].re = rtNaN;
        beta1[nm1].im = 0.0;
      }
    } else {
      guard1 = true;
    }
  }
  if (guard1) {
    for (j = 0; j <= ilo - 2; j++) {
      alpha1[j] = b_A[j + (j << 1)];
    }
  }
}

/* End of code generation (xzhgeqz.c) */
