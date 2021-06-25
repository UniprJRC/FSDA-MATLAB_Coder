/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: eig.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "eig.h"
#include "eigHermitianStandard.h"
#include "eigStandard.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "ishermitian.h"
#include "rt_nonfinite.h"
#include "xhseqr.h"
#include "xzgeev.h"
#include "xzgehrd.h"
#include "xzhgeqz.h"
#include "xzlarf.h"
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
void b_eig(const emxArray_real_T *A, emxArray_creal_T *V, emxArray_creal_T *D)
{
  emxArray_real_T *b_A;
  emxArray_real_T *b_V;
  emxArray_real_T *tau;
  emxArray_real_T *work;
  int b_i;
  int i;
  int ia;
  int iaii;
  int k;
  int n;
  int nh;
  int nx;
  bool p;
  n = A->size[0];
  i = V->size[0] * V->size[1];
  V->size[0] = A->size[0];
  V->size[1] = A->size[0];
  emxEnsureCapacity_creal_T(V, i);
  i = D->size[0] * D->size[1];
  D->size[0] = A->size[0];
  D->size[1] = A->size[0];
  emxEnsureCapacity_creal_T(D, i);
  if ((A->size[0] != 0) && (A->size[1] != 0)) {
    nx = A->size[0] * A->size[1];
    p = true;
    for (k = 0; k < nx; k++) {
      if ((!p) || (rtIsInf(A->data[k]) || rtIsNaN(A->data[k]))) {
        p = false;
      }
    }
    if (!p) {
      i = V->size[0] * V->size[1];
      V->size[0] = A->size[0];
      V->size[1] = A->size[0];
      emxEnsureCapacity_creal_T(V, i);
      nx = A->size[0] * A->size[0];
      for (i = 0; i < nx; i++) {
        V->data[i].re = rtNaN;
        V->data[i].im = 0.0;
      }
      i = D->size[0] * D->size[1];
      D->size[0] = A->size[0];
      D->size[1] = A->size[0];
      emxEnsureCapacity_creal_T(D, i);
      nx = A->size[0] * A->size[0];
      for (i = 0; i < nx; i++) {
        D->data[i].re = 0.0;
        D->data[i].im = 0.0;
      }
      for (k = 0; k < n; k++) {
        D->data[k + D->size[0] * k].re = rtNaN;
        D->data[k + D->size[0] * k].im = 0.0;
      }
    } else if (ishermitian(A)) {
      nx = A->size[0] * A->size[1];
      p = true;
      for (k = 0; k < nx; k++) {
        if ((!p) || (rtIsInf(A->data[k]) || rtIsNaN(A->data[k]))) {
          p = false;
        }
      }
      emxInit_real_T(&b_V, 2);
      emxInit_real_T(&b_A, 2);
      if (!p) {
        iaii = A->size[0];
        i = b_V->size[0] * b_V->size[1];
        b_V->size[0] = A->size[0];
        b_V->size[1] = A->size[1];
        emxEnsureCapacity_real_T(b_V, i);
        nx = A->size[0] * A->size[1];
        for (i = 0; i < nx; i++) {
          b_V->data[i] = rtNaN;
        }
        if (1 < A->size[0]) {
          nx = 2;
          if (A->size[0] - 2 < A->size[1] - 1) {
            ia = A->size[0] - 1;
          } else {
            ia = A->size[1];
          }
          for (k = 0; k < ia; k++) {
            for (b_i = nx; b_i <= iaii; b_i++) {
              b_V->data[(b_i + b_V->size[0] * k) - 1] = 0.0;
            }
            nx++;
          }
        }
        i = b_A->size[0] * b_A->size[1];
        b_A->size[0] = A->size[0];
        b_A->size[1] = A->size[1];
        emxEnsureCapacity_real_T(b_A, i);
        nx = A->size[0] * A->size[1];
        for (i = 0; i < nx; i++) {
          b_A->data[i] = rtNaN;
        }
      } else {
        n = A->size[0];
        i = b_A->size[0] * b_A->size[1];
        b_A->size[0] = A->size[0];
        b_A->size[1] = A->size[1];
        emxEnsureCapacity_real_T(b_A, i);
        nx = A->size[0] * A->size[1];
        for (i = 0; i < nx; i++) {
          b_A->data[i] = A->data[i];
        }
        emxInit_real_T(&tau, 1);
        xzgehrd(b_A, tau);
        i = b_V->size[0] * b_V->size[1];
        b_V->size[0] = b_A->size[0];
        b_V->size[1] = b_A->size[1];
        emxEnsureCapacity_real_T(b_V, i);
        nx = b_A->size[0] * b_A->size[1];
        for (i = 0; i < nx; i++) {
          b_V->data[i] = b_A->data[i];
        }
        nh = A->size[0] - 1;
        for (k = n; k >= 2; k--) {
          ia = (k - 1) * n - 1;
          for (b_i = 0; b_i <= k - 2; b_i++) {
            b_V->data[(ia + b_i) + 1] = 0.0;
          }
          nx = ia - n;
          i = k + 1;
          for (b_i = i; b_i <= n; b_i++) {
            b_V->data[ia + b_i] = b_V->data[nx + b_i];
          }
          i = n + 1;
          for (b_i = i; b_i <= n; b_i++) {
            b_V->data[ia + b_i] = 0.0;
          }
        }
        for (b_i = 0; b_i < n; b_i++) {
          b_V->data[b_i] = 0.0;
        }
        b_V->data[0] = 1.0;
        i = A->size[0] + 1;
        for (k = i; k <= n; k++) {
          ia = (k - 1) * n;
          for (b_i = 0; b_i < n; b_i++) {
            b_V->data[ia + b_i] = 0.0;
          }
          b_V->data[(ia + k) - 1] = 1.0;
        }
        if (A->size[0] - 1 >= 1) {
          i = A->size[0] - 2;
          for (k = nh; k <= i; k++) {
            ia = (n + k * n) + 1;
            nx = n - 2;
            for (b_i = 0; b_i <= nx; b_i++) {
              b_V->data[ia + b_i] = 0.0;
            }
            b_V->data[ia + k] = 1.0;
          }
          emxInit_real_T(&work, 1);
          ia = A->size[0] - 2;
          i = work->size[0];
          work->size[0] = b_V->size[1];
          emxEnsureCapacity_real_T(work, i);
          nx = b_V->size[1];
          for (i = 0; i < nx; i++) {
            work->data[i] = 0.0;
          }
          for (b_i = A->size[0] - 1; b_i >= 1; b_i--) {
            iaii = (n + b_i) + (b_i - 1) * n;
            if (b_i < n - 1) {
              b_V->data[iaii] = 1.0;
              xzlarf(n - b_i, nh - b_i, iaii + 1, tau->data[ia], b_V,
                     (iaii + n) + 1, n, work);
              nx = iaii + 2;
              i = (iaii + n) - b_i;
              for (k = nx; k <= i; k++) {
                b_V->data[k - 1] *= -tau->data[ia];
              }
            }
            b_V->data[iaii] = 1.0 - tau->data[ia];
            for (k = 0; k <= b_i - 2; k++) {
              b_V->data[(iaii - k) - 1] = 0.0;
            }
            ia--;
          }
          emxFree_real_T(&work);
        }
        emxFree_real_T(&tau);
        xhseqr(b_A, b_V);
      }
      n = b_A->size[0];
      for (k = 2; k <= n; k++) {
        b_A->data[(k + b_A->size[0] * (k - 2)) - 1] = 0.0;
        for (b_i = 0; b_i <= k - 2; b_i++) {
          b_A->data[b_i + b_A->size[0] * (k - 1)] = 0.0;
        }
      }
      i = V->size[0] * V->size[1];
      V->size[0] = b_V->size[0];
      V->size[1] = b_V->size[1];
      emxEnsureCapacity_creal_T(V, i);
      nx = b_V->size[0] * b_V->size[1];
      for (i = 0; i < nx; i++) {
        V->data[i].re = b_V->data[i];
        V->data[i].im = 0.0;
      }
      emxFree_real_T(&b_V);
      i = D->size[0] * D->size[1];
      D->size[0] = b_A->size[0];
      D->size[1] = b_A->size[1];
      emxEnsureCapacity_creal_T(D, i);
      nx = b_A->size[0] * b_A->size[1];
      for (i = 0; i < nx; i++) {
        D->data[i].re = b_A->data[i];
        D->data[i].im = 0.0;
      }
      emxFree_real_T(&b_A);
    } else {
      eigStandard(A, V, D);
    }
  }
}

/*
 * Arguments    : const emxArray_real_T *A
 *                emxArray_creal_T *V
 * Return Type  : void
 */
void c_eig(const emxArray_real_T *A, emxArray_creal_T *V)
{
  emxArray_creal_T *beta1;
  emxArray_real_T *T;
  emxArray_real_T *b_T;
  emxArray_real_T *b_V;
  double ai;
  double ar;
  double bi;
  double br;
  double brm;
  double im;
  double re;
  double s;
  int i;
  int istart;
  int j;
  int jend;
  int nx;
  bool p;
  istart = V->size[0];
  V->size[0] = A->size[0];
  emxEnsureCapacity_creal_T(V, istart);
  if ((A->size[0] != 0) && (A->size[1] != 0)) {
    nx = A->size[0] * A->size[1];
    p = true;
    for (istart = 0; istart < nx; istart++) {
      if ((!p) || (rtIsInf(A->data[istart]) || rtIsNaN(A->data[istart]))) {
        p = false;
      }
    }
    if (!p) {
      istart = V->size[0];
      V->size[0] = A->size[0];
      emxEnsureCapacity_creal_T(V, istart);
      nx = A->size[0];
      for (istart = 0; istart < nx; istart++) {
        V->data[istart].re = rtNaN;
        V->data[istart].im = 0.0;
      }
    } else if (ishermitian(A)) {
      emxInit_real_T(&b_V, 1);
      nx = A->size[0] * A->size[1];
      p = true;
      for (istart = 0; istart < nx; istart++) {
        if ((!p) || (rtIsInf(A->data[istart]) || rtIsNaN(A->data[istart]))) {
          p = false;
        }
      }
      emxInit_real_T(&T, 2);
      if (!p) {
        istart = T->size[0] * T->size[1];
        T->size[0] = A->size[0];
        T->size[1] = A->size[1];
        emxEnsureCapacity_real_T(T, istart);
        nx = A->size[0] * A->size[1];
        for (istart = 0; istart < nx; istart++) {
          T->data[istart] = rtNaN;
        }
        nx = A->size[0];
        if (1 < A->size[0]) {
          istart = 2;
          if (A->size[0] - 2 < A->size[1] - 1) {
            jend = A->size[0] - 1;
          } else {
            jend = A->size[1];
          }
          for (j = 0; j < jend; j++) {
            for (i = istart; i <= nx; i++) {
              T->data[(i + T->size[0] * j) - 1] = 0.0;
            }
            istart++;
          }
        }
      } else {
        istart = T->size[0] * T->size[1];
        T->size[0] = A->size[0];
        T->size[1] = A->size[1];
        emxEnsureCapacity_real_T(T, istart);
        nx = A->size[0] * A->size[1];
        for (istart = 0; istart < nx; istart++) {
          T->data[istart] = A->data[istart];
        }
        emxInit_real_T(&b_T, 1);
        xzgehrd(T, b_T);
        b_xhseqr(T);
        emxFree_real_T(&b_T);
      }
      nx = T->size[0];
      istart = b_V->size[0];
      b_V->size[0] = T->size[0];
      emxEnsureCapacity_real_T(b_V, istart);
      for (istart = 0; istart < nx; istart++) {
        b_V->data[istart] = T->data[istart + T->size[0] * istart];
      }
      emxFree_real_T(&T);
      istart = V->size[0];
      V->size[0] = b_V->size[0];
      emxEnsureCapacity_creal_T(V, istart);
      nx = b_V->size[0];
      for (istart = 0; istart < nx; istart++) {
        V->data[istart].re = b_V->data[istart];
        V->data[istart].im = 0.0;
      }
      emxFree_real_T(&b_V);
    } else {
      emxInit_creal_T(&beta1, 1);
      xzgeev(A, &nx, V, beta1);
      nx = V->size[0];
      for (istart = 0; istart < nx; istart++) {
        ar = V->data[istart].re;
        ai = V->data[istart].im;
        br = beta1->data[istart].re;
        bi = beta1->data[istart].im;
        if (bi == 0.0) {
          if (ai == 0.0) {
            re = ar / br;
            im = 0.0;
          } else if (ar == 0.0) {
            re = 0.0;
            im = ai / br;
          } else {
            re = ar / br;
            im = ai / br;
          }
        } else if (br == 0.0) {
          if (ar == 0.0) {
            re = ai / bi;
            im = 0.0;
          } else if (ai == 0.0) {
            re = 0.0;
            im = -(ar / bi);
          } else {
            re = ai / bi;
            im = -(ar / bi);
          }
        } else {
          brm = fabs(br);
          im = fabs(bi);
          if (brm > im) {
            s = bi / br;
            im = br + s * bi;
            re = (ar + s * ai) / im;
            im = (ai - s * ar) / im;
          } else if (im == brm) {
            if (br > 0.0) {
              s = 0.5;
            } else {
              s = -0.5;
            }
            if (bi > 0.0) {
              im = 0.5;
            } else {
              im = -0.5;
            }
            re = (ar * s + ai * im) / brm;
            im = (ai * s - ar * im) / brm;
          } else {
            s = br / bi;
            im = bi + s * br;
            re = (s * ar + ai) / im;
            im = (s * ai - ar) / im;
          }
        }
        V->data[istart].re = re;
        V->data[istart].im = im;
      }
      emxFree_creal_T(&beta1);
    }
  }
}

/*
 * Arguments    : const double A[4]
 *                creal_T V[2]
 * Return Type  : void
 */
void eig(const double A[4], creal_T V[2])
{
  creal_T At[4];
  creal_T beta1[2];
  double b_dv[2];
  double a;
  double absxk;
  double anrm;
  double anrmto;
  double cfrom1;
  double cto1;
  double ctoc;
  int At_tmp;
  int exitg1;
  int i;
  int ihi;
  int ii;
  int ilo;
  int j;
  int jj;
  int nzcount;
  bool exitg2;
  bool exitg3;
  bool guard1 = false;
  bool ilascl;
  bool notdone;
  notdone = ((!rtIsInf(A[0])) && (!rtIsNaN(A[0])));
  if ((!notdone) || (rtIsInf(A[1]) || rtIsNaN(A[1]))) {
    notdone = false;
  }
  if ((!notdone) || (rtIsInf(A[2]) || rtIsNaN(A[2]))) {
    notdone = false;
  }
  if ((!notdone) || (rtIsInf(A[3]) || rtIsNaN(A[3]))) {
    notdone = false;
  }
  if (!notdone) {
    V[0].re = rtNaN;
    V[0].im = 0.0;
    V[1].re = rtNaN;
    V[1].im = 0.0;
  } else {
    notdone = true;
    j = 0;
    exitg2 = false;
    while ((!exitg2) && (j < 2)) {
      i = 0;
      do {
        exitg1 = 0;
        if (i <= j) {
          if (!(A[i + (j << 1)] == A[j + (i << 1)])) {
            notdone = false;
            exitg1 = 1;
          } else {
            i++;
          }
        } else {
          j++;
          exitg1 = 2;
        }
      } while (exitg1 == 0);
      if (exitg1 == 1) {
        exitg2 = true;
      }
    }
    if (notdone) {
      eigHermitianStandard(A, b_dv);
      V[0].re = b_dv[0];
      V[0].im = 0.0;
      V[1].re = b_dv[1];
      V[1].im = 0.0;
    } else {
      At[0].re = A[0];
      At[0].im = 0.0;
      At[1].re = A[1];
      At[1].im = 0.0;
      At[2].re = A[2];
      At[2].im = 0.0;
      At[3].re = A[3];
      At[3].im = 0.0;
      anrm = 0.0;
      j = 0;
      exitg2 = false;
      while ((!exitg2) && (j < 4)) {
        absxk = rt_hypotd_snf(At[j].re, 0.0);
        if (rtIsNaN(absxk)) {
          anrm = rtNaN;
          exitg2 = true;
        } else {
          if (absxk > anrm) {
            anrm = absxk;
          }
          j++;
        }
      }
      if (rtIsInf(anrm) || rtIsNaN(anrm)) {
        V[0].re = rtNaN;
        V[0].im = 0.0;
        beta1[0].re = rtNaN;
        beta1[0].im = 0.0;
        V[1].re = rtNaN;
        V[1].im = 0.0;
        beta1[1].re = rtNaN;
        beta1[1].im = 0.0;
      } else {
        ilascl = false;
        anrmto = anrm;
        guard1 = false;
        if ((anrm > 0.0) && (anrm < 6.7178761075670888E-139)) {
          anrmto = 6.7178761075670888E-139;
          ilascl = true;
          guard1 = true;
        } else if (anrm > 1.4885657073574029E+138) {
          anrmto = 1.4885657073574029E+138;
          ilascl = true;
          guard1 = true;
        }
        if (guard1) {
          absxk = anrm;
          ctoc = anrmto;
          notdone = true;
          while (notdone) {
            cfrom1 = absxk * 2.0041683600089728E-292;
            cto1 = ctoc / 4.9896007738368E+291;
            if ((cfrom1 > ctoc) && (ctoc != 0.0)) {
              a = 2.0041683600089728E-292;
              absxk = cfrom1;
            } else if (cto1 > absxk) {
              a = 4.9896007738368E+291;
              ctoc = cto1;
            } else {
              a = ctoc / absxk;
              notdone = false;
            }
            At[0].re *= a;
            At[0].im *= a;
            At[1].re *= a;
            At[1].im *= a;
            At[2].re *= a;
            At[2].im *= a;
            At[3].re *= a;
            At[3].im *= a;
          }
        }
        ilo = 1;
        ihi = 2;
        i = 0;
        j = 0;
        notdone = false;
        ii = 2;
        exitg2 = false;
        while ((!exitg2) && (ii > 0)) {
          nzcount = 0;
          i = ii;
          j = 2;
          jj = 0;
          exitg3 = false;
          while ((!exitg3) && (jj < 2)) {
            At_tmp = (ii + (jj << 1)) - 1;
            if ((At[At_tmp].re != 0.0) || (At[At_tmp].im != 0.0) ||
                (ii == jj + 1)) {
              if (nzcount == 0) {
                j = jj + 1;
                nzcount = 1;
                jj++;
              } else {
                nzcount = 2;
                exitg3 = true;
              }
            } else {
              jj++;
            }
          }
          if (nzcount < 2) {
            notdone = true;
            exitg2 = true;
          } else {
            ii--;
          }
        }
        if (!notdone) {
          i = 0;
          j = 0;
          notdone = false;
          jj = 1;
          exitg2 = false;
          while ((!exitg2) && (jj < 3)) {
            nzcount = 0;
            i = 2;
            j = jj;
            ii = 1;
            exitg3 = false;
            while ((!exitg3) && (ii < 3)) {
              At_tmp = (ii + ((jj - 1) << 1)) - 1;
              if ((At[At_tmp].re != 0.0) || (At[At_tmp].im != 0.0) ||
                  (ii == jj)) {
                if (nzcount == 0) {
                  i = ii;
                  nzcount = 1;
                  ii++;
                } else {
                  nzcount = 2;
                  exitg3 = true;
                }
              } else {
                ii++;
              }
            }
            if (nzcount < 2) {
              notdone = true;
              exitg2 = true;
            } else {
              jj++;
            }
          }
          if (notdone) {
            if (i != 1) {
              absxk = At[i - 1].re;
              ctoc = At[i - 1].im;
              At[i - 1] = At[0];
              At[0].re = absxk;
              At[0].im = ctoc;
              absxk = At[i + 1].re;
              ctoc = At[i + 1].im;
              At[i + 1] = At[2];
              At[2].re = absxk;
              At[2].im = ctoc;
            }
            if (j != 1) {
              j = (j - 1) << 1;
              absxk = At[j].re;
              ctoc = At[j].im;
              At[j] = At[0];
              At[0].re = absxk;
              At[0].im = ctoc;
              absxk = At[j + 1].re;
              ctoc = At[j + 1].im;
              At[j + 1] = At[1];
              At[1].re = absxk;
              At[1].im = ctoc;
            }
            ilo = 2;
          }
        } else {
          if (i != 2) {
            absxk = At[i - 1].re;
            ctoc = At[i - 1].im;
            At[i - 1] = At[1];
            At[1].re = absxk;
            At[1].im = ctoc;
            absxk = At[i + 1].re;
            ctoc = At[i + 1].im;
            At[i + 1] = At[3];
            At[3].re = absxk;
            At[3].im = ctoc;
          }
          if (j != 2) {
            j = (j - 1) << 1;
            absxk = At[j].re;
            ctoc = At[j].im;
            At[j] = At[2];
            At[2].re = absxk;
            At[2].im = ctoc;
            absxk = At[j + 1].re;
            ctoc = At[j + 1].im;
            At[j + 1] = At[3];
            At[3].re = absxk;
            At[3].im = ctoc;
          }
          ihi = 1;
        }
        xzhgeqz(At, ilo, ihi, &j, V, beta1);
        if ((j == 0) && ilascl) {
          notdone = true;
          while (notdone) {
            cfrom1 = anrmto * 2.0041683600089728E-292;
            cto1 = anrm / 4.9896007738368E+291;
            if ((cfrom1 > anrm) && (anrm != 0.0)) {
              a = 2.0041683600089728E-292;
              anrmto = cfrom1;
            } else if (cto1 > anrmto) {
              a = 4.9896007738368E+291;
              anrm = cto1;
            } else {
              a = anrm / anrmto;
              notdone = false;
            }
            V[0].re *= a;
            V[0].im *= a;
            V[1].re *= a;
            V[1].im *= a;
          }
        }
      }
      if (beta1[0].im == 0.0) {
        if (V[0].im == 0.0) {
          cto1 = V[0].re / beta1[0].re;
          absxk = 0.0;
        } else if (V[0].re == 0.0) {
          cto1 = 0.0;
          absxk = V[0].im / beta1[0].re;
        } else {
          cto1 = V[0].re / beta1[0].re;
          absxk = V[0].im / beta1[0].re;
        }
      } else if (beta1[0].re == 0.0) {
        if (V[0].re == 0.0) {
          cto1 = V[0].im / beta1[0].im;
          absxk = 0.0;
        } else if (V[0].im == 0.0) {
          cto1 = 0.0;
          absxk = -(V[0].re / beta1[0].im);
        } else {
          cto1 = V[0].im / beta1[0].im;
          absxk = -(V[0].re / beta1[0].im);
        }
      } else {
        cfrom1 = fabs(beta1[0].re);
        absxk = fabs(beta1[0].im);
        if (cfrom1 > absxk) {
          absxk = beta1[0].im / beta1[0].re;
          ctoc = beta1[0].re + absxk * beta1[0].im;
          cto1 = (V[0].re + absxk * V[0].im) / ctoc;
          absxk = (V[0].im - absxk * V[0].re) / ctoc;
        } else if (absxk == cfrom1) {
          if (beta1[0].re > 0.0) {
            absxk = 0.5;
          } else {
            absxk = -0.5;
          }
          if (beta1[0].im > 0.0) {
            ctoc = 0.5;
          } else {
            ctoc = -0.5;
          }
          cto1 = (V[0].re * absxk + V[0].im * ctoc) / cfrom1;
          absxk = (V[0].im * absxk - V[0].re * ctoc) / cfrom1;
        } else {
          absxk = beta1[0].re / beta1[0].im;
          ctoc = beta1[0].im + absxk * beta1[0].re;
          cto1 = (absxk * V[0].re + V[0].im) / ctoc;
          absxk = (absxk * V[0].im - V[0].re) / ctoc;
        }
      }
      V[0].re = cto1;
      V[0].im = absxk;
      if (beta1[1].im == 0.0) {
        if (V[1].im == 0.0) {
          cto1 = V[1].re / beta1[1].re;
          absxk = 0.0;
        } else if (V[1].re == 0.0) {
          cto1 = 0.0;
          absxk = V[1].im / beta1[1].re;
        } else {
          cto1 = V[1].re / beta1[1].re;
          absxk = V[1].im / beta1[1].re;
        }
      } else if (beta1[1].re == 0.0) {
        if (V[1].re == 0.0) {
          cto1 = V[1].im / beta1[1].im;
          absxk = 0.0;
        } else if (V[1].im == 0.0) {
          cto1 = 0.0;
          absxk = -(V[1].re / beta1[1].im);
        } else {
          cto1 = V[1].im / beta1[1].im;
          absxk = -(V[1].re / beta1[1].im);
        }
      } else {
        cfrom1 = fabs(beta1[1].re);
        absxk = fabs(beta1[1].im);
        if (cfrom1 > absxk) {
          absxk = beta1[1].im / beta1[1].re;
          ctoc = beta1[1].re + absxk * beta1[1].im;
          cto1 = (V[1].re + absxk * V[1].im) / ctoc;
          absxk = (V[1].im - absxk * V[1].re) / ctoc;
        } else if (absxk == cfrom1) {
          if (beta1[1].re > 0.0) {
            absxk = 0.5;
          } else {
            absxk = -0.5;
          }
          if (beta1[1].im > 0.0) {
            ctoc = 0.5;
          } else {
            ctoc = -0.5;
          }
          cto1 = (V[1].re * absxk + V[1].im * ctoc) / cfrom1;
          absxk = (V[1].im * absxk - V[1].re * ctoc) / cfrom1;
        } else {
          absxk = beta1[1].re / beta1[1].im;
          ctoc = beta1[1].im + absxk * beta1[1].re;
          cto1 = (absxk * V[1].re + V[1].im) / ctoc;
          absxk = (absxk * V[1].im - V[1].re) / ctoc;
        }
      }
      V[1].re = cto1;
      V[1].im = absxk;
    }
  }
}

/*
 * File trailer for eig.c
 *
 * [EOF]
 */
