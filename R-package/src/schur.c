/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * schur.c
 *
 * Code generation for function 'schur'
 *
 */

/* Include files */
#include "schur.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "xdlanv2.h"
#include "xhseqr.h"
#include "xzgehrd.h"
#include "xzlarf.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void b_schur(emxArray_real_T *A, emxArray_real_T *V)
{
  emxArray_real_T *b_A;
  double *A_data;
  double *V_data;
  int i;
  int istart;
  int j;
  int jend;
  int nx;
  bool p;
  A_data = A->data;
  nx = A->size[0] * A->size[1];
  p = true;
  for (istart = 0; istart < nx; istart++) {
    if ((!p) || (rtIsInf(A_data[istart]) || rtIsNaN(A_data[istart]))) {
      p = false;
    }
  }
  if (!p) {
    istart = V->size[0] * V->size[1];
    V->size[0] = A->size[0];
    V->size[1] = A->size[1];
    emxEnsureCapacity_real_T(V, istart);
    V_data = V->data;
    nx = A->size[0] * A->size[1];
    for (istart = 0; istart < nx; istart++) {
      V_data[istart] = rtNaN;
    }
    nx = A->size[0];
    if ((A->size[0] != 0) && (A->size[1] != 0) && (1 < A->size[0])) {
      istart = 2;
      if (A->size[0] - 2 < A->size[1] - 1) {
        jend = A->size[0] - 1;
      } else {
        jend = A->size[1];
      }
      for (j = 0; j < jend; j++) {
        for (i = istart; i <= nx; i++) {
          V_data[(i + V->size[0] * j) - 1] = 0.0;
        }
        istart++;
      }
    }
  } else {
    emxInit_real_T(&b_A, 1);
    xzgehrd(A, b_A);
    A_data = A->data;
    istart = V->size[0] * V->size[1];
    V->size[0] = A->size[0];
    V->size[1] = A->size[1];
    emxEnsureCapacity_real_T(V, istart);
    V_data = V->data;
    nx = A->size[0] * A->size[1];
    emxFree_real_T(&b_A);
    for (istart = 0; istart < nx; istart++) {
      V_data[istart] = A_data[istart];
    }
    b_xhseqr(V);
  }
}

void c_schur(double A[4])
{
  double a__4;
  double aa;
  double ab;
  double ba;
  double bb;
  double cs;
  double htmp2;
  double s;
  double sn;
  int b_i;
  int i;
  int i1;
  int k;
  bool exitg1;
  bool p;
  p = true;
  htmp2 = A[0];
  if (rtIsInf(htmp2) || rtIsNaN(htmp2)) {
    p = false;
  } else {
    htmp2 = A[1];
    if (rtIsInf(htmp2) || rtIsNaN(htmp2)) {
      p = false;
    }
  }
  if (p) {
    htmp2 = A[2];
    if (rtIsInf(htmp2) || rtIsNaN(htmp2)) {
      p = false;
    }
  } else {
    p = false;
  }
  if (p) {
    htmp2 = A[3];
    if (rtIsInf(htmp2) || rtIsNaN(htmp2)) {
      p = false;
    }
  } else {
    p = false;
  }
  if (!p) {
    A[0] = rtNaN;
    A[1] = rtNaN;
    A[2] = rtNaN;
    A[3] = rtNaN;
    A[1] = 0.0;
  } else {
    for (i = 1; i + 1 >= 1; i = k - 2) {
      k = i + 1;
      exitg1 = false;
      while ((!exitg1) && (k > 1)) {
        ba = fabs(A[1]);
        if (ba <= 2.0041683600089728E-292) {
          exitg1 = true;
        } else {
          bb = fabs(A[3]);
          if (ba <= 2.2204460492503131E-16 * (fabs(A[0]) + bb)) {
            htmp2 = fabs(A[2]);
            if (ba > htmp2) {
              ab = ba;
              ba = htmp2;
            } else {
              ab = htmp2;
            }
            htmp2 = fabs(A[0] - A[3]);
            if (bb > htmp2) {
              aa = bb;
              bb = htmp2;
            } else {
              aa = htmp2;
            }
            s = aa + ab;
            if (ba * (ab / s) <=
                fmax(2.0041683600089728E-292,
                     2.2204460492503131E-16 * (bb * (aa / s)))) {
              exitg1 = true;
            } else {
              k = 1;
            }
          } else {
            k = 1;
          }
        }
      }
      if (k > 1) {
        A[1] = 0.0;
      }
      if ((k != i + 1) && (k == i)) {
        b_i = i << 1;
        htmp2 = A[b_i];
        s = A[i];
        i1 = i + b_i;
        ab = A[i1];
        xdlanv2(&A[0], &htmp2, &s, &ab, &ba, &aa, &bb, &a__4, &cs, &sn);
        A[b_i] = htmp2;
        A[i] = s;
        A[i1] = ab;
        if (2 > i + 1) {
          s = cs * A[2];
          htmp2 = sn * A[2];
          A[2] = s - htmp2;
          A[2] = s + htmp2;
        }
      }
    }
  }
}

void schur(const emxArray_real_T *A, emxArray_real_T *V, emxArray_real_T *T)
{
  emxArray_real_T *tau;
  emxArray_real_T *work;
  const double *A_data;
  double *T_data;
  double *V_data;
  double *tau_data;
  int b_i;
  int i;
  int ia;
  int iaii;
  int k;
  int n;
  int nh;
  int nx;
  bool p;
  A_data = A->data;
  nx = A->size[0] * A->size[1];
  p = true;
  for (k = 0; k < nx; k++) {
    if ((!p) || (rtIsInf(A_data[k]) || rtIsNaN(A_data[k]))) {
      p = false;
    }
  }
  if (!p) {
    iaii = A->size[0];
    i = V->size[0] * V->size[1];
    V->size[0] = A->size[0];
    V->size[1] = A->size[1];
    emxEnsureCapacity_real_T(V, i);
    V_data = V->data;
    nx = A->size[0] * A->size[1];
    for (i = 0; i < nx; i++) {
      V_data[i] = rtNaN;
    }
    if ((A->size[0] != 0) && (A->size[1] != 0) && (1 < A->size[0])) {
      nx = 2;
      if (A->size[0] - 2 < A->size[1] - 1) {
        ia = A->size[0] - 1;
      } else {
        ia = A->size[1];
      }
      for (k = 0; k < ia; k++) {
        for (b_i = nx; b_i <= iaii; b_i++) {
          V_data[(b_i + V->size[0] * k) - 1] = 0.0;
        }
        nx++;
      }
    }
    i = T->size[0] * T->size[1];
    T->size[0] = A->size[0];
    T->size[1] = A->size[1];
    emxEnsureCapacity_real_T(T, i);
    T_data = T->data;
    nx = A->size[0] * A->size[1];
    for (i = 0; i < nx; i++) {
      T_data[i] = rtNaN;
    }
  } else {
    n = A->size[0];
    i = T->size[0] * T->size[1];
    T->size[0] = A->size[0];
    T->size[1] = A->size[1];
    emxEnsureCapacity_real_T(T, i);
    T_data = T->data;
    nx = A->size[0] * A->size[1];
    for (i = 0; i < nx; i++) {
      T_data[i] = A_data[i];
    }
    emxInit_real_T(&tau, 1);
    xzgehrd(T, tau);
    tau_data = tau->data;
    T_data = T->data;
    i = V->size[0] * V->size[1];
    V->size[0] = T->size[0];
    V->size[1] = T->size[1];
    emxEnsureCapacity_real_T(V, i);
    V_data = V->data;
    nx = T->size[0] * T->size[1];
    for (i = 0; i < nx; i++) {
      V_data[i] = T_data[i];
    }
    if (A->size[0] != 0) {
      nh = A->size[0] - 1;
      for (k = n; k >= 2; k--) {
        ia = (k - 1) * n - 1;
        for (b_i = 0; b_i <= k - 2; b_i++) {
          V_data[(ia + b_i) + 1] = 0.0;
        }
        nx = ia - n;
        i = k + 1;
        for (b_i = i; b_i <= n; b_i++) {
          V_data[ia + b_i] = V_data[nx + b_i];
        }
        i = n + 1;
        for (b_i = i; b_i <= n; b_i++) {
          V_data[ia + b_i] = 0.0;
        }
      }
      for (b_i = 0; b_i < n; b_i++) {
        V_data[b_i] = 0.0;
      }
      V_data[0] = 1.0;
      i = A->size[0] + 1;
      for (k = i; k <= n; k++) {
        ia = (k - 1) * n;
        for (b_i = 0; b_i < n; b_i++) {
          V_data[ia + b_i] = 0.0;
        }
        V_data[(ia + k) - 1] = 1.0;
      }
      if (A->size[0] - 1 >= 1) {
        i = A->size[0] - 2;
        for (k = nh; k <= i; k++) {
          ia = (n + k * n) + 1;
          nx = n - 2;
          for (b_i = 0; b_i <= nx; b_i++) {
            V_data[ia + b_i] = 0.0;
          }
          V_data[ia + k] = 1.0;
        }
        emxInit_real_T(&work, 1);
        ia = A->size[0] - 2;
        i = work->size[0];
        work->size[0] = V->size[1];
        emxEnsureCapacity_real_T(work, i);
        T_data = work->data;
        nx = V->size[1];
        for (i = 0; i < nx; i++) {
          T_data[i] = 0.0;
        }
        for (b_i = A->size[0] - 1; b_i >= 1; b_i--) {
          iaii = (n + b_i) + (b_i - 1) * n;
          if (b_i < n - 1) {
            V_data[iaii] = 1.0;
            xzlarf(n - b_i, nh - b_i, iaii + 1, tau_data[ia], V, (iaii + n) + 1,
                   n, work);
            V_data = V->data;
            nx = iaii + 2;
            i = (iaii + n) - b_i;
            for (k = nx; k <= i; k++) {
              V_data[k - 1] *= -tau_data[ia];
            }
          }
          V_data[iaii] = 1.0 - tau_data[ia];
          for (k = 0; k <= b_i - 2; k++) {
            V_data[(iaii - k) - 1] = 0.0;
          }
          ia--;
        }
        emxFree_real_T(&work);
      }
    }
    emxFree_real_T(&tau);
    xhseqr(T, V);
  }
}

/* End of code generation (schur.c) */
