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
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "xzlanhs.h"
#include "xzlartg.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void b_xzhgeqz(emxArray_creal_T *A, int ilo, int ihi, emxArray_creal_T *Z,
               int *info, emxArray_creal_T *alpha1, emxArray_creal_T *beta1)
{
  creal_T b_ascale;
  creal_T ctemp;
  creal_T shift;
  double ad22_im;
  double ad22_re;
  double anorm;
  double ascale;
  double ascale_im;
  double ascale_re;
  double b_ascale_re;
  double b_atol;
  double bscale;
  double eshift_im;
  double eshift_re;
  double t1_im;
  double t1_im_tmp;
  double t1_re;
  double temp;
  double tempr;
  int exitg1;
  int ifirst;
  int ifrstm;
  int iiter;
  int ilast;
  int ilastm;
  int ilastm1;
  int istart;
  int j;
  int jiter;
  int jm1;
  int jp1;
  int n;
  int x;
  bool b_guard1 = false;
  bool compz;
  bool exitg2;
  bool failed;
  bool goto60;
  bool goto70;
  bool goto90;
  bool guard1 = false;
  bool guard2 = false;
  bool guard3 = false;
  *info = 0;
  compz = ((Z->size[0] != 0) && (Z->size[1] != 0));
  if ((A->size[0] == 1) && (A->size[1] == 1)) {
    ihi = 1;
  }
  n = A->size[0];
  ifirst = alpha1->size[0];
  alpha1->size[0] = A->size[0];
  emxEnsureCapacity_creal_T(alpha1, ifirst);
  jp1 = A->size[0];
  for (ifirst = 0; ifirst < jp1; ifirst++) {
    alpha1->data[ifirst].re = 0.0;
    alpha1->data[ifirst].im = 0.0;
  }
  ifirst = beta1->size[0];
  beta1->size[0] = A->size[0];
  emxEnsureCapacity_creal_T(beta1, ifirst);
  jp1 = A->size[0];
  for (ifirst = 0; ifirst < jp1; ifirst++) {
    beta1->data[ifirst].re = 1.0;
    beta1->data[ifirst].im = 0.0;
  }
  eshift_re = 0.0;
  eshift_im = 0.0;
  ctemp.re = 0.0;
  ctemp.im = 0.0;
  anorm = xzlanhs(A, ilo, ihi);
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
  bscale = 1.0 / sqrt(A->size[0]);
  failed = true;
  ifirst = ihi + 1;
  for (j = ifirst; j <= n; j++) {
    alpha1->data[j - 1] = A->data[(j + A->size[0] * (j - 1)) - 1];
  }
  guard1 = false;
  guard2 = false;
  if (ihi >= ilo) {
    ifirst = ilo;
    istart = ilo;
    ilast = ihi - 1;
    ilastm1 = ihi - 2;
    if (compz) {
      ifrstm = 1;
      ilastm = n;
    } else {
      ifrstm = ilo;
      ilastm = ihi;
    }
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
        } else if (fabs(A->data[ilast + A->size[0] * ilastm1].re) +
                       fabs(A->data[ilast + A->size[0] * ilastm1].im) <=
                   b_atol) {
          A->data[ilast + A->size[0] * ilastm1].re = 0.0;
          A->data[ilast + A->size[0] * ilastm1].im = 0.0;
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
            } else if (fabs(A->data[j + A->size[0] * (j - 1)].re) +
                           fabs(A->data[j + A->size[0] * (j - 1)].im) <=
                       b_atol) {
              A->data[j + A->size[0] * (j - 1)].re = 0.0;
              A->data[j + A->size[0] * (j - 1)].im = 0.0;
              guard3 = true;
              exitg2 = true;
            } else {
              j--;
              guard3 = false;
            }
          }
          if (guard3) {
            ifirst = j + 1;
            goto70 = true;
          }
          if (goto70) {
            b_guard1 = true;
          } else {
            jp1 = alpha1->size[0];
            ifirst = alpha1->size[0];
            alpha1->size[0] = jp1;
            emxEnsureCapacity_creal_T(alpha1, ifirst);
            for (ifirst = 0; ifirst < jp1; ifirst++) {
              alpha1->data[ifirst].re = rtNaN;
              alpha1->data[ifirst].im = 0.0;
            }
            jp1 = beta1->size[0];
            ifirst = beta1->size[0];
            beta1->size[0] = jp1;
            emxEnsureCapacity_creal_T(beta1, ifirst);
            for (ifirst = 0; ifirst < jp1; ifirst++) {
              beta1->data[ifirst].re = rtNaN;
              beta1->data[ifirst].im = 0.0;
            }
            if (compz) {
              jp1 = Z->size[0];
              jm1 = Z->size[1];
              ifirst = Z->size[0] * Z->size[1];
              Z->size[0] = jp1;
              Z->size[1] = jm1;
              emxEnsureCapacity_creal_T(Z, ifirst);
              for (ifirst = 0; ifirst < jm1; ifirst++) {
                for (x = 0; x < jp1; x++) {
                  Z->data[x + Z->size[0] * ifirst].re = rtNaN;
                  Z->data[x + Z->size[0] * ifirst].im = 0.0;
                }
              }
            }
            *info = 1;
            exitg1 = 1;
          }
        }
        if (b_guard1) {
          if (goto60) {
            goto60 = false;
            alpha1->data[ilast] = A->data[ilast + A->size[0] * ilast];
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
              if (!compz) {
                ilastm = ilast + 1;
                if (ifrstm > ilast + 1) {
                  ifrstm = ilo;
                }
              }
              jiter++;
            }
          } else {
            if (goto70) {
              goto70 = false;
              iiter++;
              if (!compz) {
                ifrstm = ifirst;
              }
              if (iiter - iiter / 10 * 10 != 0) {
                anorm = ascale * A->data[ilastm1 + A->size[0] * ilastm1].re;
                temp = ascale * A->data[ilastm1 + A->size[0] * ilastm1].im;
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
                anorm = ascale * A->data[ilast + A->size[0] * ilast].re;
                temp = ascale * A->data[ilast + A->size[0] * ilast].im;
                if (temp == 0.0) {
                  ad22_re = anorm / bscale;
                  ad22_im = 0.0;
                } else if (anorm == 0.0) {
                  ad22_re = 0.0;
                  ad22_im = temp / bscale;
                } else {
                  ad22_re = anorm / bscale;
                  ad22_im = temp / bscale;
                }
                t1_re = 0.5 * (shift.re + ad22_re);
                t1_im = 0.5 * (shift.im + ad22_im);
                t1_im_tmp = t1_re * t1_im;
                anorm = ascale * A->data[ilastm1 + A->size[0] * ilast].re;
                temp = ascale * A->data[ilastm1 + A->size[0] * ilast].im;
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
                anorm = ascale * A->data[ilast + A->size[0] * ilastm1].re;
                temp = ascale * A->data[ilast + A->size[0] * ilastm1].im;
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
                temp = shift.re * ad22_re - shift.im * ad22_im;
                tempr = shift.re * ad22_im + shift.im * ad22_re;
                shift.re = ((t1_re * t1_re - t1_im * t1_im) +
                            (ascale_re * b_ascale_re - ascale_im * anorm)) -
                           temp;
                shift.im = ((t1_im_tmp + t1_im_tmp) +
                            (ascale_re * anorm + ascale_im * b_ascale_re)) -
                           tempr;
                b_sqrt(&shift);
                if ((t1_re - ad22_re) * shift.re +
                        (t1_im - ad22_im) * shift.im <=
                    0.0) {
                  shift.re += t1_re;
                  shift.im += t1_im;
                } else {
                  shift.re = t1_re - shift.re;
                  shift.im = t1_im - shift.im;
                }
              } else {
                anorm = ascale * A->data[ilast + A->size[0] * ilastm1].re;
                temp = ascale * A->data[ilast + A->size[0] * ilastm1].im;
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
              j = ilastm1;
              jp1 = ilastm1 + 1;
              exitg2 = false;
              while ((!exitg2) && (j + 1 > ifirst)) {
                istart = j + 1;
                ctemp.re =
                    ascale * A->data[j + A->size[0] * j].re - shift.re * bscale;
                ctemp.im =
                    ascale * A->data[j + A->size[0] * j].im - shift.im * bscale;
                temp = fabs(ctemp.re) + fabs(ctemp.im);
                anorm = ascale * (fabs(A->data[jp1 + A->size[0] * j].re) +
                                  fabs(A->data[jp1 + A->size[0] * j].im));
                tempr = temp;
                if (anorm > temp) {
                  tempr = anorm;
                }
                if ((tempr < 1.0) && (tempr != 0.0)) {
                  temp /= tempr;
                  anorm /= tempr;
                }
                if ((fabs(A->data[j + A->size[0] * (j - 1)].re) +
                     fabs(A->data[j + A->size[0] * (j - 1)].im)) *
                        anorm <=
                    temp * b_atol) {
                  goto90 = true;
                  exitg2 = true;
                } else {
                  jp1 = j;
                  j--;
                }
              }
              if (!goto90) {
                istart = ifirst;
                ctemp.re =
                    ascale *
                        A->data[(ifirst + A->size[0] * (ifirst - 1)) - 1].re -
                    shift.re * bscale;
                ctemp.im =
                    ascale *
                        A->data[(ifirst + A->size[0] * (ifirst - 1)) - 1].im -
                    shift.im * bscale;
              }
              goto90 = false;
              b_ascale.re =
                  ascale * A->data[istart + A->size[0] * (istart - 1)].re;
              b_ascale.im =
                  ascale * A->data[istart + A->size[0] * (istart - 1)].im;
              b_xzlartg(ctemp, b_ascale, &anorm, &shift);
              j = istart;
              jm1 = istart - 2;
              while (j < ilast + 1) {
                if (j > istart) {
                  xzlartg(A->data[(j + A->size[0] * jm1) - 1],
                          A->data[j + A->size[0] * jm1], &anorm, &shift,
                          &A->data[(j + A->size[0] * jm1) - 1]);
                  A->data[j + A->size[0] * jm1].re = 0.0;
                  A->data[j + A->size[0] * jm1].im = 0.0;
                }
                for (jp1 = j; jp1 <= ilastm; jp1++) {
                  ad22_re =
                      anorm * A->data[(j + A->size[0] * (jp1 - 1)) - 1].re +
                      (shift.re * A->data[j + A->size[0] * (jp1 - 1)].re -
                       shift.im * A->data[j + A->size[0] * (jp1 - 1)].im);
                  ad22_im =
                      anorm * A->data[(j + A->size[0] * (jp1 - 1)) - 1].im +
                      (shift.re * A->data[j + A->size[0] * (jp1 - 1)].im +
                       shift.im * A->data[j + A->size[0] * (jp1 - 1)].re);
                  temp = A->data[(j + A->size[0] * (jp1 - 1)) - 1].im;
                  tempr = A->data[(j + A->size[0] * (jp1 - 1)) - 1].re;
                  A->data[j + A->size[0] * (jp1 - 1)].re =
                      anorm * A->data[j + A->size[0] * (jp1 - 1)].re -
                      (shift.re * A->data[(j + A->size[0] * (jp1 - 1)) - 1].re +
                       shift.im * A->data[(j + A->size[0] * (jp1 - 1)) - 1].im);
                  A->data[j + A->size[0] * (jp1 - 1)].im =
                      anorm * A->data[j + A->size[0] * (jp1 - 1)].im -
                      (shift.re * temp - shift.im * tempr);
                  A->data[(j + A->size[0] * (jp1 - 1)) - 1].re = ad22_re;
                  A->data[(j + A->size[0] * (jp1 - 1)) - 1].im = ad22_im;
                }
                shift.re = -shift.re;
                shift.im = -shift.im;
                x = j;
                if (ilast + 1 < j + 2) {
                  x = ilast - 1;
                }
                for (jp1 = ifrstm; jp1 <= x + 2; jp1++) {
                  ad22_re =
                      anorm * A->data[(jp1 + A->size[0] * j) - 1].re +
                      (shift.re * A->data[(jp1 + A->size[0] * (j - 1)) - 1].re -
                       shift.im * A->data[(jp1 + A->size[0] * (j - 1)) - 1].im);
                  ad22_im =
                      anorm * A->data[(jp1 + A->size[0] * j) - 1].im +
                      (shift.re * A->data[(jp1 + A->size[0] * (j - 1)) - 1].im +
                       shift.im * A->data[(jp1 + A->size[0] * (j - 1)) - 1].re);
                  temp = A->data[(jp1 + A->size[0] * j) - 1].im;
                  tempr = A->data[(jp1 + A->size[0] * j) - 1].re;
                  A->data[(jp1 + A->size[0] * (j - 1)) - 1].re =
                      anorm * A->data[(jp1 + A->size[0] * (j - 1)) - 1].re -
                      (shift.re * A->data[(jp1 + A->size[0] * j) - 1].re +
                       shift.im * A->data[(jp1 + A->size[0] * j) - 1].im);
                  A->data[(jp1 + A->size[0] * (j - 1)) - 1].im =
                      anorm * A->data[(jp1 + A->size[0] * (j - 1)) - 1].im -
                      (shift.re * temp - shift.im * tempr);
                  A->data[(jp1 + A->size[0] * j) - 1].re = ad22_re;
                  A->data[(jp1 + A->size[0] * j) - 1].im = ad22_im;
                }
                if (compz) {
                  for (jp1 = 1; jp1 <= n; jp1++) {
                    ad22_re =
                        anorm * Z->data[(jp1 + Z->size[0] * j) - 1].re +
                        (shift.re *
                             Z->data[(jp1 + Z->size[0] * (j - 1)) - 1].re -
                         shift.im *
                             Z->data[(jp1 + Z->size[0] * (j - 1)) - 1].im);
                    ad22_im =
                        anorm * Z->data[(jp1 + Z->size[0] * j) - 1].im +
                        (shift.re *
                             Z->data[(jp1 + Z->size[0] * (j - 1)) - 1].im +
                         shift.im *
                             Z->data[(jp1 + Z->size[0] * (j - 1)) - 1].re);
                    temp = Z->data[(jp1 + Z->size[0] * j) - 1].im;
                    tempr = Z->data[(jp1 + Z->size[0] * j) - 1].re;
                    Z->data[(jp1 + Z->size[0] * (j - 1)) - 1].re =
                        anorm * Z->data[(jp1 + Z->size[0] * (j - 1)) - 1].re -
                        (shift.re * Z->data[(jp1 + Z->size[0] * j) - 1].re +
                         shift.im * Z->data[(jp1 + Z->size[0] * j) - 1].im);
                    Z->data[(jp1 + Z->size[0] * (j - 1)) - 1].im =
                        anorm * Z->data[(jp1 + Z->size[0] * (j - 1)) - 1].im -
                        (shift.re * temp - shift.im * tempr);
                    Z->data[(jp1 + Z->size[0] * j) - 1].re = ad22_re;
                    Z->data[(jp1 + Z->size[0] * j) - 1].im = ad22_im;
                  }
                }
                jm1 = j - 1;
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
      for (jp1 = 0; jp1 <= ilast; jp1++) {
        alpha1->data[jp1].re = rtNaN;
        alpha1->data[jp1].im = 0.0;
        beta1->data[jp1].re = rtNaN;
        beta1->data[jp1].im = 0.0;
      }
      if (compz) {
        jp1 = Z->size[0];
        jm1 = Z->size[1];
        ifirst = Z->size[0] * Z->size[1];
        Z->size[0] = jp1;
        Z->size[1] = jm1;
        emxEnsureCapacity_creal_T(Z, ifirst);
        for (ifirst = 0; ifirst < jm1; ifirst++) {
          for (x = 0; x < jp1; x++) {
            Z->data[x + Z->size[0] * ifirst].re = rtNaN;
            Z->data[x + Z->size[0] * ifirst].im = 0.0;
          }
        }
      }
    } else {
      guard1 = true;
    }
  }
  if (guard1) {
    for (j = 0; j <= ilo - 2; j++) {
      alpha1->data[j] = A->data[j + A->size[0] * j];
    }
  }
}

void xzhgeqz(const creal_T A[4], int ilo, int ihi, int *info, creal_T alpha1[2],
             creal_T beta1[2])
{
  creal_T b_A[4];
  creal_T b_ascale;
  creal_T ctemp;
  creal_T shift;
  double ad22_im;
  double anorm;
  double ascale;
  double b_atol;
  double colscale;
  double colssq;
  double eshift_im;
  double eshift_re;
  double scale;
  double shift_im;
  double shift_re;
  double ssq;
  double t;
  double t1_im;
  double t1_im_tmp;
  double t1_re;
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
  ctemp.re = 0.0;
  ctemp.im = 0.0;
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
        t = colscale / scale;
        ssq += t * t * colssq;
      } else {
        t = scale / colscale;
        ssq = colssq + t * t * ssq;
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
                  colssq = anorm / 0.70710678118654746;
                  ad22_im = 0.0;
                } else if (anorm == 0.0) {
                  colssq = 0.0;
                  ad22_im = t / 0.70710678118654746;
                } else {
                  colssq = anorm / 0.70710678118654746;
                  ad22_im = t / 0.70710678118654746;
                }
                t1_re = 0.5 * (shift.re + colssq);
                t1_im = 0.5 * (shift.im + ad22_im);
                t1_im_tmp = t1_re * t1_im;
                nm1 = ilastm1 + (ilast << 1);
                anorm = ascale * b_A[nm1].re;
                t = ascale * b_A[nm1].im;
                if (t == 0.0) {
                  ssq = anorm / 0.70710678118654746;
                  colscale = 0.0;
                } else if (anorm == 0.0) {
                  ssq = 0.0;
                  colscale = t / 0.70710678118654746;
                } else {
                  ssq = anorm / 0.70710678118654746;
                  colscale = t / 0.70710678118654746;
                }
                nm1 = ilast + (ilastm1 << 1);
                anorm = ascale * b_A[nm1].re;
                t = ascale * b_A[nm1].im;
                if (t == 0.0) {
                  scale = anorm / 0.70710678118654746;
                  anorm = 0.0;
                } else if (anorm == 0.0) {
                  scale = 0.0;
                  anorm = t / 0.70710678118654746;
                } else {
                  scale = anorm / 0.70710678118654746;
                  anorm = t / 0.70710678118654746;
                }
                shift_re = shift.re * colssq - shift.im * ad22_im;
                shift_im = shift.re * ad22_im + shift.im * colssq;
                shift.re = ((t1_re * t1_re - t1_im * t1_im) +
                            (ssq * scale - colscale * anorm)) -
                           shift_re;
                shift.im = ((t1_im_tmp + t1_im_tmp) +
                            (ssq * anorm + colscale * scale)) -
                           shift_im;
                b_sqrt(&shift);
                if ((t1_re - colssq) * shift.re +
                        (t1_im - ad22_im) * shift.im <=
                    0.0) {
                  shift.re += t1_re;
                  shift.im += t1_im;
                } else {
                  shift.re = t1_re - shift.re;
                  shift.im = t1_im - shift.im;
                }
              } else {
                nm1 = ilast + (ilastm1 << 1);
                anorm = ascale * b_A[nm1].re;
                t = ascale * b_A[nm1].im;
                if (t == 0.0) {
                  ssq = anorm / 0.70710678118654746;
                  colscale = 0.0;
                } else if (anorm == 0.0) {
                  ssq = 0.0;
                  colscale = t / 0.70710678118654746;
                } else {
                  ssq = anorm / 0.70710678118654746;
                  colscale = t / 0.70710678118654746;
                }
                eshift_re += ssq;
                eshift_im += colscale;
                shift.re = eshift_re;
                shift.im = eshift_im;
              }
              j = ilastm1;
              nm1 = ilastm1 + 1;
              exitg2 = false;
              while ((!exitg2) && (j + 1 > col)) {
                istart = 2;
                ctemp.re = ascale * b_A[3].re - shift.re * 0.70710678118654746;
                ctemp.im = ascale * b_A[3].im - shift.im * 0.70710678118654746;
                anorm = fabs(ctemp.re) + fabs(ctemp.im);
                t = ascale * (fabs(b_A[nm1 + 2].re) + fabs(b_A[nm1 + 2].im));
                scale = anorm;
                if (t > anorm) {
                  scale = t;
                }
                if ((scale < 1.0) && (scale != 0.0)) {
                  anorm /= scale;
                  t /= scale;
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
                ctemp.re =
                    ascale * b_A[nm1].re - shift.re * 0.70710678118654746;
                ctemp.im =
                    ascale * b_A[nm1].im - shift.im * 0.70710678118654746;
              }
              goto90 = false;
              nm1 = ((istart - 1) << 1) + 1;
              b_ascale.re = ascale * b_A[nm1].re;
              b_ascale.im = ascale * b_A[nm1].im;
              b_xzlartg(ctemp, b_ascale, &colscale, &shift);
              j = istart;
              while (j < ilast + 1) {
                for (j = 1; j <= ilastm; j++) {
                  nm1 = (j - 1) << 1;
                  anorm = b_A[nm1].re;
                  t = b_A[nm1].im;
                  scale = b_A[nm1 + 1].re;
                  ssq = b_A[nm1 + 1].im;
                  shift_re = shift.re * scale - shift.im * ssq;
                  shift_im = shift.re * ssq + shift.im * scale;
                  scale = colscale * scale - (shift.re * anorm + shift.im * t);
                  ssq = colscale * ssq - (shift.re * t - shift.im * anorm);
                  b_A[nm1 + 1].re = scale;
                  b_A[nm1 + 1].im = ssq;
                  b_A[nm1].re = colscale * anorm + shift_re;
                  b_A[nm1].im = colscale * t + shift_im;
                }
                shift.re = -shift.re;
                shift.im = -shift.im;
                for (nm1 = col; nm1 < 3; nm1++) {
                  anorm = b_A[nm1 + 1].re;
                  t = b_A[nm1 - 1].re;
                  scale = b_A[nm1 - 1].im;
                  ad22_im = colscale * b_A[nm1 + 1].im +
                            (shift.re * scale + shift.im * t);
                  b_A[nm1 - 1].re =
                      colscale * b_A[nm1 - 1].re -
                      (shift.re * b_A[nm1 + 1].re + shift.im * b_A[nm1 + 1].im);
                  b_A[nm1 - 1].im =
                      colscale * b_A[nm1 - 1].im -
                      (shift.re * b_A[nm1 + 1].im - shift.im * anorm);
                  b_A[nm1 + 1].re =
                      colscale * anorm + (shift.re * t - shift.im * scale);
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
