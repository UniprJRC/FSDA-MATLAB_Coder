/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eig.c
 *
 * Code generation for function 'eig'
 *
 */

/* Include files */
#include "eig.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "ishermitian.h"
#include "rt_nonfinite.h"
#include "schur.h"
#include "xzgeev.h"
#include "xzggev.h"
#include "xzhgeqz.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void b_eig(const emxArray_real_T *A, emxArray_creal_T *V, emxArray_creal_T *D)
{
  emxArray_creal_T *At;
  emxArray_creal_T *alpha1;
  emxArray_creal_T *beta1;
  emxArray_real_T *T;
  emxArray_real_T *U;
  creal_T *V_data;
  creal_T *alpha1_data;
  creal_T *beta1_data;
  const double *A_data;
  double absxk;
  double ai;
  double ar;
  double brm;
  double colnorm;
  double scale;
  double t;
  double *T_data;
  double *U_data;
  int coltop;
  int exitg1;
  int i;
  int k;
  int lastcol;
  int n;
  int nx;
  bool p;
  A_data = A->data;
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
      if ((!p) || (rtIsInf(A_data[k]) || rtIsNaN(A_data[k]))) {
        p = false;
      }
    }
    if (!p) {
      i = V->size[0] * V->size[1];
      V->size[0] = A->size[0];
      V->size[1] = A->size[0];
      emxEnsureCapacity_creal_T(V, i);
      V_data = V->data;
      nx = A->size[0] * A->size[0];
      for (i = 0; i < nx; i++) {
        V_data[i].re = rtNaN;
        V_data[i].im = 0.0;
      }
      i = D->size[0] * D->size[1];
      D->size[0] = A->size[0];
      D->size[1] = A->size[0];
      emxEnsureCapacity_creal_T(D, i);
      V_data = D->data;
      nx = A->size[0] * A->size[0];
      for (i = 0; i < nx; i++) {
        V_data[i].re = 0.0;
        V_data[i].im = 0.0;
      }
      for (k = 0; k < n; k++) {
        V_data[k + D->size[0] * k].re = rtNaN;
        V_data[k + D->size[0] * k].im = 0.0;
      }
    } else {
      emxInit_real_T(&U, 2);
      emxInit_real_T(&T, 2);
      if (ishermitian(A)) {
        schur(A, U, T);
        T_data = T->data;
        U_data = U->data;
        n = T->size[0];
        for (k = 2; k <= n; k++) {
          T_data[(k + T->size[0] * (k - 2)) - 1] = 0.0;
          for (lastcol = 0; lastcol <= k - 2; lastcol++) {
            T_data[lastcol + T->size[0] * (k - 1)] = 0.0;
          }
        }
        i = V->size[0] * V->size[1];
        V->size[0] = U->size[0];
        V->size[1] = U->size[1];
        emxEnsureCapacity_creal_T(V, i);
        V_data = V->data;
        nx = U->size[0] * U->size[1];
        for (i = 0; i < nx; i++) {
          V_data[i].re = U_data[i];
          V_data[i].im = 0.0;
        }
        i = D->size[0] * D->size[1];
        D->size[0] = T->size[0];
        D->size[1] = T->size[1];
        emxEnsureCapacity_creal_T(D, i);
        V_data = D->data;
        nx = T->size[0] * T->size[1];
        for (i = 0; i < nx; i++) {
          V_data[i].re = T_data[i];
          V_data[i].im = 0.0;
        }
      } else if (b_ishermitian(A)) {
        schur(A, U, T);
        T_data = T->data;
        U_data = U->data;
        n = T->size[0];
        i = D->size[0] * D->size[1];
        D->size[0] = T->size[0];
        D->size[1] = T->size[0];
        emxEnsureCapacity_creal_T(D, i);
        V_data = D->data;
        nx = T->size[0] * T->size[0];
        for (i = 0; i < nx; i++) {
          V_data[i].re = 0.0;
          V_data[i].im = 0.0;
        }
        lastcol = 1;
        do {
          exitg1 = 0;
          if (lastcol <= n) {
            if (lastcol != n) {
              scale = T_data[lastcol + T->size[0] * (lastcol - 1)];
              if (scale != 0.0) {
                scale = fabs(scale);
                V_data[(lastcol + D->size[0] * (lastcol - 1)) - 1].re = 0.0;
                V_data[(lastcol + D->size[0] * (lastcol - 1)) - 1].im = scale;
                V_data[lastcol + D->size[0] * lastcol].re = 0.0;
                V_data[lastcol + D->size[0] * lastcol].im = -scale;
                lastcol += 2;
              } else {
                lastcol++;
              }
            } else {
              lastcol++;
            }
          } else {
            exitg1 = 1;
          }
        } while (exitg1 == 0);
        i = V->size[0] * V->size[1];
        V->size[0] = U->size[0];
        V->size[1] = U->size[1];
        emxEnsureCapacity_creal_T(V, i);
        V_data = V->data;
        nx = U->size[0] * U->size[1];
        for (i = 0; i < nx; i++) {
          V_data[i].re = U_data[i];
          V_data[i].im = 0.0;
        }
        k = 1;
        n = T->size[0];
        while (k <= n) {
          if ((k != n) && (T_data[k + T->size[0] * (k - 1)] != 0.0)) {
            if (T_data[k + T->size[0] * (k - 1)] < 0.0) {
              nx = 1;
            } else {
              nx = -1;
            }
            for (lastcol = 0; lastcol < n; lastcol++) {
              ar = V_data[lastcol + V->size[0] * (k - 1)].re;
              ai = (double)nx * V_data[lastcol + V->size[0] * k].re;
              if (ai == 0.0) {
                V_data[lastcol + V->size[0] * (k - 1)].re =
                    ar / 1.4142135623730951;
                V_data[lastcol + V->size[0] * (k - 1)].im = 0.0;
              } else if (ar == 0.0) {
                V_data[lastcol + V->size[0] * (k - 1)].re = 0.0;
                V_data[lastcol + V->size[0] * (k - 1)].im =
                    ai / 1.4142135623730951;
              } else {
                V_data[lastcol + V->size[0] * (k - 1)].re =
                    ar / 1.4142135623730951;
                V_data[lastcol + V->size[0] * (k - 1)].im =
                    ai / 1.4142135623730951;
              }
              V_data[lastcol + V->size[0] * k].re =
                  V_data[lastcol + V->size[0] * (k - 1)].re;
              V_data[lastcol + V->size[0] * k].im =
                  -V_data[lastcol + V->size[0] * (k - 1)].im;
            }
            k += 2;
          } else {
            k++;
          }
        }
      } else {
        emxInit_creal_T(&At, 2);
        i = At->size[0] * At->size[1];
        At->size[0] = A->size[0];
        At->size[1] = A->size[1];
        emxEnsureCapacity_creal_T(At, i);
        V_data = At->data;
        nx = A->size[0] * A->size[1];
        for (i = 0; i < nx; i++) {
          V_data[i].re = A_data[i];
          V_data[i].im = 0.0;
        }
        emxInit_creal_T(&alpha1, 1);
        emxInit_creal_T(&beta1, 1);
        xzggev(At, &nx, alpha1, beta1, V);
        V_data = V->data;
        beta1_data = beta1->data;
        alpha1_data = alpha1->data;
        n = A->size[0];
        lastcol = (A->size[0] - 1) * A->size[0] + 1;
        emxFree_creal_T(&At);
        for (coltop = 1; n < 0 ? coltop >= lastcol : coltop <= lastcol;
             coltop += n) {
          colnorm = 0.0;
          if (n == 1) {
            colnorm =
                rt_hypotd_snf(V_data[coltop - 1].re, V_data[coltop - 1].im);
          } else {
            scale = 3.3121686421112381E-170;
            nx = (coltop + n) - 1;
            for (k = coltop; k <= nx; k++) {
              absxk = fabs(V_data[k - 1].re);
              if (absxk > scale) {
                t = scale / absxk;
                colnorm = colnorm * t * t + 1.0;
                scale = absxk;
              } else {
                t = absxk / scale;
                colnorm += t * t;
              }
              absxk = fabs(V_data[k - 1].im);
              if (absxk > scale) {
                t = scale / absxk;
                colnorm = colnorm * t * t + 1.0;
                scale = absxk;
              } else {
                t = absxk / scale;
                colnorm += t * t;
              }
            }
            colnorm = scale * sqrt(colnorm);
          }
          i = (coltop + n) - 1;
          for (k = coltop; k <= i; k++) {
            ar = V_data[k - 1].re;
            ai = V_data[k - 1].im;
            if (ai == 0.0) {
              absxk = ar / colnorm;
              scale = 0.0;
            } else if (ar == 0.0) {
              absxk = 0.0;
              scale = ai / colnorm;
            } else {
              absxk = ar / colnorm;
              scale = ai / colnorm;
            }
            V_data[k - 1].re = absxk;
            V_data[k - 1].im = scale;
          }
        }
        i = D->size[0] * D->size[1];
        D->size[0] = alpha1->size[0];
        D->size[1] = alpha1->size[0];
        emxEnsureCapacity_creal_T(D, i);
        V_data = D->data;
        nx = alpha1->size[0] * alpha1->size[0];
        for (i = 0; i < nx; i++) {
          V_data[i].re = 0.0;
          V_data[i].im = 0.0;
        }
        i = alpha1->size[0];
        for (k = 0; k < i; k++) {
          ar = alpha1_data[k].re;
          ai = alpha1_data[k].im;
          t = beta1_data[k].re;
          colnorm = beta1_data[k].im;
          if (colnorm == 0.0) {
            if (ai == 0.0) {
              V_data[k + D->size[0] * k].re = ar / t;
              V_data[k + D->size[0] * k].im = 0.0;
            } else if (ar == 0.0) {
              V_data[k + D->size[0] * k].re = 0.0;
              V_data[k + D->size[0] * k].im = ai / t;
            } else {
              V_data[k + D->size[0] * k].re = ar / t;
              V_data[k + D->size[0] * k].im = ai / t;
            }
          } else if (t == 0.0) {
            if (ar == 0.0) {
              V_data[k + D->size[0] * k].re = ai / colnorm;
              V_data[k + D->size[0] * k].im = 0.0;
            } else if (ai == 0.0) {
              V_data[k + D->size[0] * k].re = 0.0;
              V_data[k + D->size[0] * k].im = -(ar / colnorm);
            } else {
              V_data[k + D->size[0] * k].re = ai / colnorm;
              V_data[k + D->size[0] * k].im = -(ar / colnorm);
            }
          } else {
            brm = fabs(t);
            scale = fabs(colnorm);
            if (brm > scale) {
              absxk = colnorm / t;
              scale = t + absxk * colnorm;
              V_data[k + D->size[0] * k].re = (ar + absxk * ai) / scale;
              V_data[k + D->size[0] * k].im = (ai - absxk * ar) / scale;
            } else if (scale == brm) {
              if (t > 0.0) {
                absxk = 0.5;
              } else {
                absxk = -0.5;
              }
              if (colnorm > 0.0) {
                scale = 0.5;
              } else {
                scale = -0.5;
              }
              V_data[k + D->size[0] * k].re = (ar * absxk + ai * scale) / brm;
              V_data[k + D->size[0] * k].im = (ai * absxk - ar * scale) / brm;
            } else {
              absxk = t / colnorm;
              scale = colnorm + absxk * t;
              V_data[k + D->size[0] * k].re = (absxk * ar + ai) / scale;
              V_data[k + D->size[0] * k].im = (absxk * ai - ar) / scale;
            }
          }
        }
        emxFree_creal_T(&beta1);
        emxFree_creal_T(&alpha1);
      }
      emxFree_real_T(&T);
      emxFree_real_T(&U);
    }
  }
}

void c_eig(const emxArray_real_T *A, emxArray_creal_T *V)
{
  emxArray_creal_T *beta1;
  emxArray_real_T *T;
  emxArray_real_T *b_A;
  emxArray_real_T *b_V;
  creal_T *V_data;
  creal_T *beta1_data;
  const double *A_data;
  double ai;
  double ar;
  double bi;
  double br;
  double brm;
  double lambda;
  double re;
  double s;
  double *T_data;
  double *b_V_data;
  int exitg1;
  int k;
  int n;
  int nx;
  bool guard1 = false;
  bool p;
  A_data = A->data;
  k = V->size[0];
  V->size[0] = A->size[0];
  emxEnsureCapacity_creal_T(V, k);
  if ((A->size[0] != 0) && (A->size[1] != 0)) {
    nx = A->size[0] * A->size[1];
    p = true;
    for (k = 0; k < nx; k++) {
      if ((!p) || (rtIsInf(A_data[k]) || rtIsNaN(A_data[k]))) {
        p = false;
      }
    }
    if (!p) {
      k = V->size[0];
      V->size[0] = A->size[0];
      emxEnsureCapacity_creal_T(V, k);
      V_data = V->data;
      nx = A->size[0];
      for (k = 0; k < nx; k++) {
        V_data[k].re = rtNaN;
        V_data[k].im = 0.0;
      }
    } else {
      emxInit_real_T(&T, 2);
      emxInit_real_T(&b_A, 2);
      if (ishermitian(A)) {
        k = b_A->size[0] * b_A->size[1];
        b_A->size[0] = A->size[0];
        b_A->size[1] = A->size[1];
        emxEnsureCapacity_real_T(b_A, k);
        T_data = b_A->data;
        nx = A->size[0] * A->size[1] - 1;
        for (k = 0; k <= nx; k++) {
          T_data[k] = A_data[k];
        }
        emxInit_real_T(&b_V, 1);
        b_schur(b_A, T);
        T_data = T->data;
        n = T->size[0];
        k = b_V->size[0];
        b_V->size[0] = T->size[0];
        emxEnsureCapacity_real_T(b_V, k);
        b_V_data = b_V->data;
        for (k = 0; k < n; k++) {
          b_V_data[k] = T_data[k + T->size[0] * k];
        }
        k = V->size[0];
        V->size[0] = b_V->size[0];
        emxEnsureCapacity_creal_T(V, k);
        V_data = V->data;
        nx = b_V->size[0];
        for (k = 0; k < nx; k++) {
          V_data[k].re = b_V_data[k];
          V_data[k].im = 0.0;
        }
        emxFree_real_T(&b_V);
      } else if (b_ishermitian(A)) {
        k = b_A->size[0] * b_A->size[1];
        b_A->size[0] = A->size[0];
        b_A->size[1] = A->size[1];
        emxEnsureCapacity_real_T(b_A, k);
        T_data = b_A->data;
        nx = A->size[0] * A->size[1] - 1;
        for (k = 0; k <= nx; k++) {
          T_data[k] = A_data[k];
        }
        b_schur(b_A, T);
        T_data = T->data;
        n = T->size[0];
        k = V->size[0];
        V->size[0] = T->size[0];
        emxEnsureCapacity_creal_T(V, k);
        V_data = V->data;
        nx = 1;
        do {
          exitg1 = 0;
          if (nx <= n) {
            guard1 = false;
            if (nx != n) {
              lambda = T_data[nx + T->size[0] * (nx - 1)];
              if (lambda != 0.0) {
                lambda = fabs(lambda);
                V_data[nx - 1].re = 0.0;
                V_data[nx - 1].im = lambda;
                V_data[nx].re = 0.0;
                V_data[nx].im = -lambda;
                nx += 2;
              } else {
                guard1 = true;
              }
            } else {
              guard1 = true;
            }
            if (guard1) {
              V_data[nx - 1].re = 0.0;
              V_data[nx - 1].im = 0.0;
              nx++;
            }
          } else {
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      } else {
        emxInit_creal_T(&beta1, 1);
        xzgeev(A, &nx, V, beta1);
        beta1_data = beta1->data;
        V_data = V->data;
        nx = V->size[0];
        for (k = 0; k < nx; k++) {
          ar = V_data[k].re;
          ai = V_data[k].im;
          br = beta1_data[k].re;
          bi = beta1_data[k].im;
          if (bi == 0.0) {
            if (ai == 0.0) {
              re = ar / br;
              lambda = 0.0;
            } else if (ar == 0.0) {
              re = 0.0;
              lambda = ai / br;
            } else {
              re = ar / br;
              lambda = ai / br;
            }
          } else if (br == 0.0) {
            if (ar == 0.0) {
              re = ai / bi;
              lambda = 0.0;
            } else if (ai == 0.0) {
              re = 0.0;
              lambda = -(ar / bi);
            } else {
              re = ai / bi;
              lambda = -(ar / bi);
            }
          } else {
            brm = fabs(br);
            lambda = fabs(bi);
            if (brm > lambda) {
              s = bi / br;
              lambda = br + s * bi;
              re = (ar + s * ai) / lambda;
              lambda = (ai - s * ar) / lambda;
            } else if (lambda == brm) {
              if (br > 0.0) {
                s = 0.5;
              } else {
                s = -0.5;
              }
              if (bi > 0.0) {
                lambda = 0.5;
              } else {
                lambda = -0.5;
              }
              re = (ar * s + ai * lambda) / brm;
              lambda = (ai * s - ar * lambda) / brm;
            } else {
              s = br / bi;
              lambda = bi + s * br;
              re = (s * ar + ai) / lambda;
              lambda = (s * ai - ar) / lambda;
            }
          }
          V_data[k].re = re;
          V_data[k].im = lambda;
        }
        emxFree_creal_T(&beta1);
      }
      emxFree_real_T(&b_A);
      emxFree_real_T(&T);
    }
  }
}

void eig(const double A[4], creal_T V[2])
{
  creal_T At[4];
  creal_T beta1[2];
  double T[4];
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
  notdone = true;
  if (rtIsInf(A[0]) || rtIsNaN(A[0]) || (rtIsInf(A[1]) || rtIsNaN(A[1]))) {
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
      T[0] = A[0];
      T[1] = A[1];
      T[2] = A[2];
      T[3] = A[3];
      c_schur(T);
      V[0].re = T[0];
      V[0].im = 0.0;
      V[1].re = T[3];
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
            if (!(A[i + (j << 1)] == -A[j + (i << 1)])) {
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
        T[0] = A[0];
        T[1] = A[1];
        T[2] = A[2];
        T[3] = A[3];
        c_schur(T);
        i = 1;
        while (i <= 2) {
          if ((i != 2) && (T[1] != 0.0)) {
            absxk = fabs(T[1]);
            V[0].re = 0.0;
            V[0].im = absxk;
            V[1].re = 0.0;
            V[1].im = -absxk;
            i = 3;
          } else {
            V[i - 1].re = 0.0;
            V[i - 1].im = 0.0;
            i++;
          }
        }
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
}

/* End of code generation (eig.c) */
