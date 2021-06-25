/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: eigStandard.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "eigStandard.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "xzggbal.h"
#include "xzhgeqz.h"
#include "xzlangeM.h"
#include "xzlartg.h"
#include "xzlascl.h"
#include "xztgevc.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : const emxArray_real_T *A
 *                emxArray_creal_T *V
 *                emxArray_creal_T *D
 * Return Type  : void
 */
void eigStandard(const emxArray_real_T *A, emxArray_creal_T *V,
                 emxArray_creal_T *D)
{
  emxArray_creal_T *At;
  emxArray_creal_T *alpha1;
  emxArray_creal_T *beta1;
  emxArray_int32_T *rscale;
  emxArray_int8_T *b_I;
  creal_T tmp;
  double ai;
  double anrm;
  double anrmto;
  double ar;
  double colnorm;
  double stemp_im;
  double stemp_re;
  double vtemp;
  int b_i;
  int b_n;
  int i;
  int ihi;
  int ilo;
  int j;
  int jcol;
  int jcolp1;
  int jrow;
  int k;
  int n;
  bool ilascl;
  emxInit_creal_T(&At, 2);
  i = At->size[0] * At->size[1];
  At->size[0] = A->size[0];
  At->size[1] = A->size[1];
  emxEnsureCapacity_creal_T(At, i);
  jcol = A->size[0] * A->size[1];
  for (i = 0; i < jcol; i++) {
    At->data[i].re = A->data[i];
    At->data[i].im = 0.0;
  }
  emxInit_creal_T(&alpha1, 1);
  n = At->size[0] - 1;
  i = alpha1->size[0];
  alpha1->size[0] = At->size[0];
  emxEnsureCapacity_creal_T(alpha1, i);
  jcol = At->size[0];
  for (i = 0; i < jcol; i++) {
    alpha1->data[i].re = 0.0;
    alpha1->data[i].im = 0.0;
  }
  emxInit_creal_T(&beta1, 1);
  i = beta1->size[0];
  beta1->size[0] = At->size[0];
  emxEnsureCapacity_creal_T(beta1, i);
  jcol = At->size[0];
  for (i = 0; i < jcol; i++) {
    beta1->data[i].re = 0.0;
    beta1->data[i].im = 0.0;
  }
  i = V->size[0] * V->size[1];
  V->size[0] = At->size[0];
  V->size[1] = At->size[0];
  emxEnsureCapacity_creal_T(V, i);
  jcol = At->size[0] * At->size[0];
  for (i = 0; i < jcol; i++) {
    V->data[i].re = 0.0;
    V->data[i].im = 0.0;
  }
  emxInit_int32_T(&rscale, 1);
  emxInit_int8_T(&b_I, 2);
  if ((At->size[0] != 0) && (At->size[1] != 0)) {
    anrm = xzlangeM(At);
    if (rtIsInf(anrm) || rtIsNaN(anrm)) {
      i = alpha1->size[0];
      alpha1->size[0] = At->size[0];
      emxEnsureCapacity_creal_T(alpha1, i);
      jcol = At->size[0];
      for (i = 0; i < jcol; i++) {
        alpha1->data[i].re = rtNaN;
        alpha1->data[i].im = 0.0;
      }
      i = beta1->size[0];
      beta1->size[0] = At->size[0];
      emxEnsureCapacity_creal_T(beta1, i);
      jcol = At->size[0];
      for (i = 0; i < jcol; i++) {
        beta1->data[i].re = rtNaN;
        beta1->data[i].im = 0.0;
      }
      i = V->size[0] * V->size[1];
      V->size[0] = At->size[0];
      V->size[1] = At->size[0];
      emxEnsureCapacity_creal_T(V, i);
      jcol = At->size[0] * At->size[0];
      for (i = 0; i < jcol; i++) {
        V->data[i].re = rtNaN;
        V->data[i].im = 0.0;
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
      b_n = At->size[0];
      i = b_I->size[0] * b_I->size[1];
      b_I->size[0] = At->size[0];
      b_I->size[1] = At->size[0];
      emxEnsureCapacity_int8_T(b_I, i);
      jcol = At->size[0] * At->size[0];
      for (i = 0; i < jcol; i++) {
        b_I->data[i] = 0;
      }
      if (At->size[0] > 0) {
        for (k = 0; k < b_n; k++) {
          b_I->data[k + b_I->size[0] * k] = 1;
        }
      }
      i = V->size[0] * V->size[1];
      V->size[0] = b_I->size[0];
      V->size[1] = b_I->size[1];
      emxEnsureCapacity_creal_T(V, i);
      jcol = b_I->size[0] * b_I->size[1];
      for (i = 0; i < jcol; i++) {
        V->data[i].re = b_I->data[i];
        V->data[i].im = 0.0;
      }
      if ((At->size[0] > 1) && (ihi >= ilo + 2)) {
        for (jcol = ilo - 1; jcol + 1 < ihi - 1; jcol++) {
          jcolp1 = jcol + 2;
          for (jrow = ihi - 1; jrow + 1 > jcol + 2; jrow--) {
            xzlartg(At->data[(jrow + At->size[0] * jcol) - 1],
                    At->data[jrow + At->size[0] * jcol], &vtemp, &tmp,
                    &At->data[(jrow + At->size[0] * jcol) - 1]);
            At->data[jrow + At->size[0] * jcol].re = 0.0;
            At->data[jrow + At->size[0] * jcol].im = 0.0;
            for (j = jcolp1; j <= b_n; j++) {
              stemp_re =
                  vtemp * At->data[(jrow + At->size[0] * (j - 1)) - 1].re +
                  (tmp.re * At->data[jrow + At->size[0] * (j - 1)].re -
                   tmp.im * At->data[jrow + At->size[0] * (j - 1)].im);
              stemp_im =
                  vtemp * At->data[(jrow + At->size[0] * (j - 1)) - 1].im +
                  (tmp.re * At->data[jrow + At->size[0] * (j - 1)].im +
                   tmp.im * At->data[jrow + At->size[0] * (j - 1)].re);
              colnorm = At->data[(jrow + At->size[0] * (j - 1)) - 1].re;
              At->data[jrow + At->size[0] * (j - 1)].re =
                  vtemp * At->data[jrow + At->size[0] * (j - 1)].re -
                  (tmp.re * At->data[(jrow + At->size[0] * (j - 1)) - 1].re +
                   tmp.im * At->data[(jrow + At->size[0] * (j - 1)) - 1].im);
              At->data[jrow + At->size[0] * (j - 1)].im =
                  vtemp * At->data[jrow + At->size[0] * (j - 1)].im -
                  (tmp.re * At->data[(jrow + At->size[0] * (j - 1)) - 1].im -
                   tmp.im * colnorm);
              At->data[(jrow + At->size[0] * (j - 1)) - 1].re = stemp_re;
              At->data[(jrow + At->size[0] * (j - 1)) - 1].im = stemp_im;
            }
            tmp.re = -tmp.re;
            tmp.im = -tmp.im;
            for (b_i = 1; b_i <= ihi; b_i++) {
              stemp_re =
                  vtemp * At->data[(b_i + At->size[0] * jrow) - 1].re +
                  (tmp.re * At->data[(b_i + At->size[0] * (jrow - 1)) - 1].re -
                   tmp.im * At->data[(b_i + At->size[0] * (jrow - 1)) - 1].im);
              stemp_im =
                  vtemp * At->data[(b_i + At->size[0] * jrow) - 1].im +
                  (tmp.re * At->data[(b_i + At->size[0] * (jrow - 1)) - 1].im +
                   tmp.im * At->data[(b_i + At->size[0] * (jrow - 1)) - 1].re);
              colnorm = At->data[(b_i + At->size[0] * jrow) - 1].re;
              At->data[(b_i + At->size[0] * (jrow - 1)) - 1].re =
                  vtemp * At->data[(b_i + At->size[0] * (jrow - 1)) - 1].re -
                  (tmp.re * At->data[(b_i + At->size[0] * jrow) - 1].re +
                   tmp.im * At->data[(b_i + At->size[0] * jrow) - 1].im);
              At->data[(b_i + At->size[0] * (jrow - 1)) - 1].im =
                  vtemp * At->data[(b_i + At->size[0] * (jrow - 1)) - 1].im -
                  (tmp.re * At->data[(b_i + At->size[0] * jrow) - 1].im -
                   tmp.im * colnorm);
              At->data[(b_i + At->size[0] * jrow) - 1].re = stemp_re;
              At->data[(b_i + At->size[0] * jrow) - 1].im = stemp_im;
            }
            for (b_i = 1; b_i <= b_n; b_i++) {
              stemp_re =
                  vtemp * V->data[(b_i + V->size[0] * jrow) - 1].re +
                  (tmp.re * V->data[(b_i + V->size[0] * (jrow - 1)) - 1].re -
                   tmp.im * V->data[(b_i + V->size[0] * (jrow - 1)) - 1].im);
              stemp_im =
                  vtemp * V->data[(b_i + V->size[0] * jrow) - 1].im +
                  (tmp.re * V->data[(b_i + V->size[0] * (jrow - 1)) - 1].im +
                   tmp.im * V->data[(b_i + V->size[0] * (jrow - 1)) - 1].re);
              colnorm = V->data[(b_i + V->size[0] * jrow) - 1].re;
              V->data[(b_i + V->size[0] * (jrow - 1)) - 1].re =
                  vtemp * V->data[(b_i + V->size[0] * (jrow - 1)) - 1].re -
                  (tmp.re * V->data[(b_i + V->size[0] * jrow) - 1].re +
                   tmp.im * V->data[(b_i + V->size[0] * jrow) - 1].im);
              V->data[(b_i + V->size[0] * (jrow - 1)) - 1].im =
                  vtemp * V->data[(b_i + V->size[0] * (jrow - 1)) - 1].im -
                  (tmp.re * V->data[(b_i + V->size[0] * jrow) - 1].im -
                   tmp.im * colnorm);
              V->data[(b_i + V->size[0] * jrow) - 1].re = stemp_re;
              V->data[(b_i + V->size[0] * jrow) - 1].im = stemp_im;
            }
          }
        }
      }
      b_xzhgeqz(At, ilo, ihi, V, &jcol, alpha1, beta1);
      if (jcol == 0) {
        xztgevc(At, V);
        b_n = V->size[0];
        jcolp1 = V->size[1] - 1;
        if (ilo > 1) {
          for (b_i = ilo - 2; b_i + 1 >= 1; b_i--) {
            k = rscale->data[b_i] - 1;
            if (rscale->data[b_i] != b_i + 1) {
              for (j = 0; j <= jcolp1; j++) {
                tmp = V->data[b_i + V->size[0] * j];
                V->data[b_i + V->size[0] * j] = V->data[k + V->size[0] * j];
                V->data[k + V->size[0] * j] = tmp;
              }
            }
          }
        }
        if (ihi < b_n) {
          i = ihi + 1;
          for (b_i = i; b_i <= b_n; b_i++) {
            jcol = rscale->data[b_i - 1];
            if (jcol != b_i) {
              for (j = 0; j <= jcolp1; j++) {
                tmp = V->data[(b_i + V->size[0] * j) - 1];
                V->data[(b_i + V->size[0] * j) - 1] =
                    V->data[(jcol + V->size[0] * j) - 1];
                V->data[(jcol + V->size[0] * j) - 1] = tmp;
              }
            }
          }
        }
        for (jcol = 0; jcol <= n; jcol++) {
          vtemp = fabs(V->data[V->size[0] * jcol].re) +
                  fabs(V->data[V->size[0] * jcol].im);
          if (n + 1 > 1) {
            for (jcolp1 = 0; jcolp1 < n; jcolp1++) {
              stemp_re = fabs(V->data[(jcolp1 + V->size[0] * jcol) + 1].re) +
                         fabs(V->data[(jcolp1 + V->size[0] * jcol) + 1].im);
              if (stemp_re > vtemp) {
                vtemp = stemp_re;
              }
            }
          }
          if (vtemp >= 6.7178761075670888E-139) {
            vtemp = 1.0 / vtemp;
            for (jcolp1 = 0; jcolp1 <= n; jcolp1++) {
              V->data[jcolp1 + V->size[0] * jcol].re *= vtemp;
              V->data[jcolp1 + V->size[0] * jcol].im *= vtemp;
            }
          }
        }
        if (ilascl) {
          b_xzlascl(anrmto, anrm, alpha1);
        }
      }
    }
  }
  emxFree_int8_T(&b_I);
  emxFree_int32_T(&rscale);
  emxFree_creal_T(&At);
  n = A->size[0];
  if (A->size[0] > 0) {
    jcolp1 = (A->size[0] - 1) * A->size[0] + 1;
    for (jrow = 1; n < 0 ? jrow >= jcolp1 : jrow <= jcolp1; jrow += n) {
      colnorm = 0.0;
      if (n == 1) {
        colnorm = rt_hypotd_snf(V->data[jrow - 1].re, V->data[jrow - 1].im);
      } else {
        vtemp = 3.3121686421112381E-170;
        jcol = (jrow + n) - 1;
        for (k = jrow; k <= jcol; k++) {
          stemp_re = fabs(V->data[k - 1].re);
          if (stemp_re > vtemp) {
            stemp_im = vtemp / stemp_re;
            colnorm = colnorm * stemp_im * stemp_im + 1.0;
            vtemp = stemp_re;
          } else {
            stemp_im = stemp_re / vtemp;
            colnorm += stemp_im * stemp_im;
          }
          stemp_re = fabs(V->data[k - 1].im);
          if (stemp_re > vtemp) {
            stemp_im = vtemp / stemp_re;
            colnorm = colnorm * stemp_im * stemp_im + 1.0;
            vtemp = stemp_re;
          } else {
            stemp_im = stemp_re / vtemp;
            colnorm += stemp_im * stemp_im;
          }
        }
        colnorm = vtemp * sqrt(colnorm);
      }
      i = (jrow + n) - 1;
      for (j = jrow; j <= i; j++) {
        ar = V->data[j - 1].re;
        ai = V->data[j - 1].im;
        if (ai == 0.0) {
          stemp_re = ar / colnorm;
          vtemp = 0.0;
        } else if (ar == 0.0) {
          stemp_re = 0.0;
          vtemp = ai / colnorm;
        } else {
          stemp_re = ar / colnorm;
          vtemp = ai / colnorm;
        }
        V->data[j - 1].re = stemp_re;
        V->data[j - 1].im = vtemp;
      }
    }
  }
  i = D->size[0] * D->size[1];
  D->size[0] = alpha1->size[0];
  D->size[1] = alpha1->size[0];
  emxEnsureCapacity_creal_T(D, i);
  jcol = alpha1->size[0] * alpha1->size[0];
  for (i = 0; i < jcol; i++) {
    D->data[i].re = 0.0;
    D->data[i].im = 0.0;
  }
  i = alpha1->size[0];
  for (k = 0; k < i; k++) {
    ar = alpha1->data[k].re;
    ai = alpha1->data[k].im;
    stemp_im = beta1->data[k].re;
    anrm = beta1->data[k].im;
    if (anrm == 0.0) {
      if (ai == 0.0) {
        D->data[k + D->size[0] * k].re = ar / stemp_im;
        D->data[k + D->size[0] * k].im = 0.0;
      } else if (ar == 0.0) {
        D->data[k + D->size[0] * k].re = 0.0;
        D->data[k + D->size[0] * k].im = ai / stemp_im;
      } else {
        D->data[k + D->size[0] * k].re = ar / stemp_im;
        D->data[k + D->size[0] * k].im = ai / stemp_im;
      }
    } else if (stemp_im == 0.0) {
      if (ar == 0.0) {
        D->data[k + D->size[0] * k].re = ai / anrm;
        D->data[k + D->size[0] * k].im = 0.0;
      } else if (ai == 0.0) {
        D->data[k + D->size[0] * k].re = 0.0;
        D->data[k + D->size[0] * k].im = -(ar / anrm);
      } else {
        D->data[k + D->size[0] * k].re = ai / anrm;
        D->data[k + D->size[0] * k].im = -(ar / anrm);
      }
    } else {
      anrmto = fabs(stemp_im);
      vtemp = fabs(anrm);
      if (anrmto > vtemp) {
        stemp_re = anrm / stemp_im;
        vtemp = stemp_im + stemp_re * anrm;
        D->data[k + D->size[0] * k].re = (ar + stemp_re * ai) / vtemp;
        D->data[k + D->size[0] * k].im = (ai - stemp_re * ar) / vtemp;
      } else if (vtemp == anrmto) {
        if (stemp_im > 0.0) {
          stemp_re = 0.5;
        } else {
          stemp_re = -0.5;
        }
        if (anrm > 0.0) {
          vtemp = 0.5;
        } else {
          vtemp = -0.5;
        }
        D->data[k + D->size[0] * k].re = (ar * stemp_re + ai * vtemp) / anrmto;
        D->data[k + D->size[0] * k].im = (ai * stemp_re - ar * vtemp) / anrmto;
      } else {
        stemp_re = stemp_im / anrm;
        vtemp = anrm + stemp_re * stemp_im;
        D->data[k + D->size[0] * k].re = (stemp_re * ar + ai) / vtemp;
        D->data[k + D->size[0] * k].im = (stemp_re * ai - ar) / vtemp;
      }
    }
  }
  emxFree_creal_T(&beta1);
  emxFree_creal_T(&alpha1);
}

/*
 * File trailer for eigStandard.c
 *
 * [EOF]
 */
