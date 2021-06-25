/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: mldivide.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "mldivide.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "qrsolve.h"
#include "rt_nonfinite.h"
#include "xgeqp3.h"
#include "xnrm2.h"
#include "xunormqr.h"
#include "xzgetrf.h"
#include <math.h>
#include <string.h>

/* Function Declarations */
static int div_nde_s32_floor(int numerator, int denominator);

/* Function Definitions */
/*
 * Arguments    : int numerator
 *                int denominator
 * Return Type  : int
 */
static int div_nde_s32_floor(int numerator, int denominator)
{
  int b_numerator;
  if (((numerator < 0) != (denominator < 0)) &&
      (numerator % denominator != 0)) {
    b_numerator = -1;
  } else {
    b_numerator = 0;
  }
  return numerator / denominator + b_numerator;
}

/*
 * Arguments    : const emxArray_real_T *A
 *                const emxArray_real_T *B
 *                emxArray_real_T *Y
 * Return Type  : void
 */
void b_mldivide(const emxArray_real_T *A, const emxArray_real_T *B,
                emxArray_real_T *Y)
{
  emxArray_int32_T *ipiv;
  emxArray_real_T *b_A;
  double temp;
  int b_i;
  int i;
  int i1;
  int j;
  int jBcol;
  int k;
  int kAcol;
  int loop_ub;
  int n;
  int nrhs;
  emxInit_real_T(&b_A, 2);
  emxInit_int32_T(&ipiv, 2);
  if ((A->size[0] == 0) || (A->size[1] == 0) ||
      ((B->size[0] == 0) || (B->size[1] == 0))) {
    i = Y->size[0] * Y->size[1];
    Y->size[0] = A->size[1];
    Y->size[1] = B->size[1];
    emxEnsureCapacity_real_T(Y, i);
    loop_ub = A->size[1] * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      Y->data[i] = 0.0;
    }
  } else if (A->size[0] == A->size[1]) {
    i = Y->size[0] * Y->size[1];
    Y->size[0] = B->size[0];
    Y->size[1] = B->size[1];
    emxEnsureCapacity_real_T(Y, i);
    loop_ub = B->size[0] * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      Y->data[i] = B->data[i];
    }
    loop_ub = A->size[0];
    n = A->size[1];
    if (loop_ub < n) {
      n = loop_ub;
    }
    loop_ub = B->size[0];
    if (loop_ub < n) {
      n = loop_ub;
    }
    nrhs = B->size[1] - 1;
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[0];
    b_A->size[1] = A->size[1];
    emxEnsureCapacity_real_T(b_A, i);
    loop_ub = A->size[0] * A->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_A->data[i] = A->data[i];
    }
    xzgetrf(n, n, b_A, A->size[0], ipiv, &loop_ub);
    for (b_i = 0; b_i <= n - 2; b_i++) {
      i = ipiv->data[b_i];
      if (i != b_i + 1) {
        for (j = 0; j <= nrhs; j++) {
          temp = Y->data[b_i + Y->size[0] * j];
          Y->data[b_i + Y->size[0] * j] = Y->data[(i + Y->size[0] * j) - 1];
          Y->data[(i + Y->size[0] * j) - 1] = temp;
        }
      }
    }
    for (j = 0; j <= nrhs; j++) {
      jBcol = B->size[0] * j;
      for (k = 0; k < n; k++) {
        kAcol = b_A->size[0] * k;
        i = k + jBcol;
        if (Y->data[i] != 0.0) {
          i1 = k + 2;
          for (b_i = i1; b_i <= n; b_i++) {
            loop_ub = (b_i + jBcol) - 1;
            Y->data[loop_ub] -= Y->data[i] * b_A->data[(b_i + kAcol) - 1];
          }
        }
      }
    }
    loop_ub = B->size[1];
    for (j = 0; j < loop_ub; j++) {
      jBcol = B->size[0] * j - 1;
      for (k = n; k >= 1; k--) {
        kAcol = b_A->size[0] * (k - 1) - 1;
        i = k + jBcol;
        if (Y->data[i] != 0.0) {
          Y->data[i] /= b_A->data[k + kAcol];
          for (b_i = 0; b_i <= k - 2; b_i++) {
            i1 = (b_i + jBcol) + 1;
            Y->data[i1] -= Y->data[i] * b_A->data[(b_i + kAcol) + 1];
          }
        }
      }
    }
  } else {
    qrsolve(A, B, Y);
  }
  emxFree_int32_T(&ipiv);
  emxFree_real_T(&b_A);
}

/*
 * Arguments    : const emxArray_real_T *A
 *                const emxArray_real_T *B
 * Return Type  : double
 */
double c_mldivide(const emxArray_real_T *A, const emxArray_real_T *B)
{
  emxArray_real_T *b_A;
  emxArray_real_T *b_B;
  double Y;
  double atmp;
  double beta1;
  double tau_data;
  double wj;
  int i;
  int knt;
  int rankA;
  emxInit_real_T(&b_A, 1);
  emxInit_real_T(&b_B, 1);
  if ((A->size[0] == 0) || (B->size[0] == 0)) {
    Y = 0.0;
  } else if (A->size[0] == 1) {
    Y = B->data[0] / A->data[0];
  } else {
    i = b_A->size[0];
    b_A->size[0] = A->size[0];
    emxEnsureCapacity_real_T(b_A, i);
    knt = A->size[0];
    for (i = 0; i < knt; i++) {
      b_A->data[i] = A->data[i];
    }
    atmp = b_A->data[0];
    tau_data = 0.0;
    i = A->size[0];
    wj = d_xnrm2(A->size[0] - 1, b_A);
    if (wj != 0.0) {
      beta1 = rt_hypotd_snf(b_A->data[0], wj);
      if (b_A->data[0] >= 0.0) {
        beta1 = -beta1;
      }
      if (fabs(beta1) < 1.0020841800044864E-292) {
        knt = -1;
        do {
          knt++;
          for (rankA = 2; rankA <= i; rankA++) {
            b_A->data[rankA - 1] *= 9.9792015476736E+291;
          }
          beta1 *= 9.9792015476736E+291;
          atmp *= 9.9792015476736E+291;
        } while (!(fabs(beta1) >= 1.0020841800044864E-292));
        i = A->size[0];
        beta1 = rt_hypotd_snf(atmp, d_xnrm2(A->size[0] - 1, b_A));
        if (atmp >= 0.0) {
          beta1 = -beta1;
        }
        tau_data = (beta1 - atmp) / beta1;
        wj = 1.0 / (atmp - beta1);
        for (rankA = 2; rankA <= i; rankA++) {
          b_A->data[rankA - 1] *= wj;
        }
        for (rankA = 0; rankA <= knt; rankA++) {
          beta1 *= 1.0020841800044864E-292;
        }
        atmp = beta1;
      } else {
        tau_data = (beta1 - b_A->data[0]) / beta1;
        wj = 1.0 / (b_A->data[0] - beta1);
        for (rankA = 2; rankA <= i; rankA++) {
          b_A->data[rankA - 1] *= wj;
        }
        atmp = beta1;
      }
    }
    b_A->data[0] = atmp;
    rankA = 0;
    wj = fabs(b_A->data[0]);
    if (!(wj <= fmin(1.4901161193847656E-8,
                     2.2204460492503131E-15 * (double)b_A->size[0]) *
                    wj)) {
      rankA = 1;
    }
    i = b_B->size[0];
    b_B->size[0] = B->size[0];
    emxEnsureCapacity_real_T(b_B, i);
    knt = B->size[0];
    for (i = 0; i < knt; i++) {
      b_B->data[i] = B->data[i];
    }
    Y = 0.0;
    knt = b_A->size[0];
    if (tau_data != 0.0) {
      wj = b_B->data[0];
      for (i = 2; i <= knt; i++) {
        wj += b_A->data[i - 1] * b_B->data[i - 1];
      }
      wj *= tau_data;
      if (wj != 0.0) {
        b_B->data[0] -= wj;
        for (i = 2; i <= knt; i++) {
          b_B->data[i - 1] -= b_A->data[i - 1] * wj;
        }
      }
    }
    for (i = 0; i < rankA; i++) {
      Y = b_B->data[0];
    }
    for (knt = rankA; knt >= 1; knt--) {
      Y /= b_A->data[0];
    }
  }
  emxFree_real_T(&b_B);
  emxFree_real_T(&b_A);
  return Y;
}

/*
 * Arguments    : const double A[27]
 *                const double B[9]
 *                double Y[3]
 * Return Type  : void
 */
void d_mldivide(const double A[27], const double B[9], double Y[3])
{
  double b_A[27];
  double b_B[9];
  double tau[3];
  double vn1[3];
  double vn2[3];
  double work[3];
  double absxk;
  double scale;
  double smax;
  double t;
  int b_i;
  int exitg1;
  int i;
  int ii;
  int ip1;
  int ix0;
  int iy;
  int j;
  int kend;
  int lastc;
  int lastv;
  int pvt;
  int rankA;
  signed char jpvt[3];
  bool exitg2;
  memcpy(&b_A[0], &A[0], 27U * sizeof(double));
  for (lastc = 0; lastc < 3; lastc++) {
    jpvt[lastc] = (signed char)(lastc + 1);
    tau[lastc] = 0.0;
    work[lastc] = 0.0;
    ix0 = lastc * 9;
    smax = 0.0;
    scale = 3.3121686421112381E-170;
    kend = ix0 + 9;
    for (iy = ix0 + 1; iy <= kend; iy++) {
      absxk = fabs(A[iy - 1]);
      if (absxk > scale) {
        t = scale / absxk;
        smax = smax * t * t + 1.0;
        scale = absxk;
      } else {
        t = absxk / scale;
        smax += t * t;
      }
    }
    absxk = scale * sqrt(smax);
    vn1[lastc] = absxk;
    vn2[lastc] = absxk;
  }
  for (i = 0; i < 3; i++) {
    ip1 = i + 2;
    ii = i * 9 + i;
    kend = 3 - i;
    iy = 0;
    if (3 - i > 1) {
      smax = fabs(vn1[i]);
      for (lastc = 2; lastc <= kend; lastc++) {
        scale = fabs(vn1[(i + lastc) - 1]);
        if (scale > smax) {
          iy = lastc - 1;
          smax = scale;
        }
      }
    }
    pvt = i + iy;
    if (pvt != i) {
      kend = pvt * 9;
      iy = i * 9;
      for (lastc = 0; lastc < 9; lastc++) {
        rankA = kend + lastc;
        smax = b_A[rankA];
        ix0 = iy + lastc;
        b_A[rankA] = b_A[ix0];
        b_A[ix0] = smax;
      }
      kend = jpvt[pvt];
      jpvt[pvt] = jpvt[i];
      jpvt[i] = (signed char)kend;
      vn1[pvt] = vn1[i];
      vn2[pvt] = vn2[i];
    }
    t = b_A[ii];
    ix0 = ii + 2;
    tau[i] = 0.0;
    smax = e_xnrm2(8 - i, b_A, ii + 2);
    if (smax != 0.0) {
      absxk = b_A[ii];
      scale = rt_hypotd_snf(absxk, smax);
      if (absxk >= 0.0) {
        scale = -scale;
      }
      if (fabs(scale) < 1.0020841800044864E-292) {
        kend = -1;
        b_i = (ii - i) + 9;
        do {
          kend++;
          for (lastc = ix0; lastc <= b_i; lastc++) {
            b_A[lastc - 1] *= 9.9792015476736E+291;
          }
          scale *= 9.9792015476736E+291;
          t *= 9.9792015476736E+291;
        } while (!(fabs(scale) >= 1.0020841800044864E-292));
        scale = rt_hypotd_snf(t, e_xnrm2(8 - i, b_A, ii + 2));
        if (t >= 0.0) {
          scale = -scale;
        }
        tau[i] = (scale - t) / scale;
        smax = 1.0 / (t - scale);
        for (lastc = ix0; lastc <= b_i; lastc++) {
          b_A[lastc - 1] *= smax;
        }
        for (lastc = 0; lastc <= kend; lastc++) {
          scale *= 1.0020841800044864E-292;
        }
        t = scale;
      } else {
        tau[i] = (scale - absxk) / scale;
        smax = 1.0 / (absxk - scale);
        b_i = (ii - i) + 9;
        for (lastc = ix0; lastc <= b_i; lastc++) {
          b_A[lastc - 1] *= smax;
        }
        t = scale;
      }
    }
    b_A[ii] = t;
    if (i + 1 < 3) {
      b_A[ii] = 1.0;
      iy = ii + 10;
      if (tau[i] != 0.0) {
        lastv = 9 - i;
        kend = (ii - i) + 8;
        while ((lastv > 0) && (b_A[kend] == 0.0)) {
          lastv--;
          kend--;
        }
        lastc = 1 - i;
        exitg2 = false;
        while ((!exitg2) && (lastc + 1 > 0)) {
          kend = (ii + lastc * 9) + 9;
          rankA = kend;
          do {
            exitg1 = 0;
            if (rankA + 1 <= kend + lastv) {
              if (b_A[rankA] != 0.0) {
                exitg1 = 1;
              } else {
                rankA++;
              }
            } else {
              lastc--;
              exitg1 = 2;
            }
          } while (exitg1 == 0);
          if (exitg1 == 1) {
            exitg2 = true;
          }
        }
      } else {
        lastv = 0;
        lastc = -1;
      }
      if (lastv > 0) {
        if (lastc + 1 != 0) {
          if (0 <= lastc) {
            memset(&work[0], 0, (lastc + 1) * sizeof(double));
          }
          b_i = (ii + 9 * lastc) + 10;
          for (ix0 = iy; ix0 <= b_i; ix0 += 9) {
            smax = 0.0;
            pvt = (ix0 + lastv) - 1;
            for (rankA = ix0; rankA <= pvt; rankA++) {
              smax += b_A[rankA - 1] * b_A[(ii + rankA) - ix0];
            }
            kend = div_nde_s32_floor((ix0 - ii) - 10, 9);
            work[kend] += smax;
          }
        }
        if (!(-tau[i] == 0.0)) {
          kend = ii;
          for (j = 0; j <= lastc; j++) {
            absxk = work[j];
            if (absxk != 0.0) {
              smax = absxk * -tau[i];
              b_i = kend + 10;
              pvt = lastv + kend;
              for (rankA = b_i; rankA <= pvt + 9; rankA++) {
                b_A[rankA - 1] += b_A[((ii + rankA) - kend) - 10] * smax;
              }
            }
            kend += 9;
          }
        }
      }
      b_A[ii] = t;
    }
    for (j = ip1; j < 4; j++) {
      kend = i + (j - 1) * 9;
      absxk = vn1[j - 1];
      if (absxk != 0.0) {
        smax = fabs(b_A[kend]) / absxk;
        smax = 1.0 - smax * smax;
        if (smax < 0.0) {
          smax = 0.0;
        }
        scale = absxk / vn2[j - 1];
        scale = smax * (scale * scale);
        if (scale <= 1.4901161193847656E-8) {
          absxk = e_xnrm2(8 - i, b_A, kend + 2);
          vn1[j - 1] = absxk;
          vn2[j - 1] = absxk;
        } else {
          vn1[j - 1] = absxk * sqrt(smax);
        }
      }
    }
  }
  rankA = 0;
  smax = 1.9984014443252818E-14 * fabs(b_A[0]);
  while ((rankA < 3) && (!(fabs(b_A[rankA + 9 * rankA]) <= smax))) {
    rankA++;
  }
  memcpy(&b_B[0], &B[0], 9U * sizeof(double));
  for (j = 0; j < 3; j++) {
    Y[j] = 0.0;
    if (tau[j] != 0.0) {
      smax = b_B[j];
      b_i = j + 2;
      for (i = b_i; i < 10; i++) {
        smax += b_A[(i + 9 * j) - 1] * b_B[i - 1];
      }
      smax *= tau[j];
      if (smax != 0.0) {
        b_B[j] -= smax;
        for (i = b_i; i < 10; i++) {
          b_B[i - 1] -= b_A[(i + 9 * j) - 1] * smax;
        }
      }
    }
  }
  for (i = 0; i < rankA; i++) {
    Y[jpvt[i] - 1] = b_B[i];
  }
  for (j = rankA; j >= 1; j--) {
    kend = jpvt[j - 1] - 1;
    iy = 9 * (j - 1);
    Y[kend] /= b_A[(j + iy) - 1];
    for (i = 0; i <= j - 2; i++) {
      ix0 = jpvt[i] - 1;
      Y[ix0] -= Y[kend] * b_A[i + iy];
    }
  }
}

/*
 * Arguments    : const emxArray_real_T *A
 *                const emxArray_real_T *B
 *                emxArray_real_T *Y
 * Return Type  : void
 */
void mldivide(const emxArray_real_T *A, const emxArray_real_T *B,
              emxArray_real_T *Y)
{
  emxArray_int32_T *jpvt;
  emxArray_real_T *b_A;
  emxArray_real_T *b_B;
  emxArray_real_T *tau;
  double temp;
  int LDA;
  int b_i;
  int i;
  int k;
  int kAcol;
  int n;
  emxInit_real_T(&b_A, 2);
  emxInit_real_T(&tau, 1);
  emxInit_int32_T(&jpvt, 2);
  emxInit_real_T(&b_B, 1);
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0)) {
    i = Y->size[0];
    Y->size[0] = A->size[1];
    emxEnsureCapacity_real_T(Y, i);
    LDA = A->size[1];
    for (i = 0; i < LDA; i++) {
      Y->data[i] = 0.0;
    }
  } else if (A->size[0] == A->size[1]) {
    i = Y->size[0];
    Y->size[0] = B->size[0];
    emxEnsureCapacity_real_T(Y, i);
    LDA = B->size[0];
    for (i = 0; i < LDA; i++) {
      Y->data[i] = B->data[i];
    }
    LDA = A->size[0];
    n = A->size[1];
    if (LDA < n) {
      n = LDA;
    }
    LDA = B->size[0];
    if (LDA < n) {
      n = LDA;
    }
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[0];
    b_A->size[1] = A->size[1];
    emxEnsureCapacity_real_T(b_A, i);
    LDA = A->size[0] * A->size[1];
    for (i = 0; i < LDA; i++) {
      b_A->data[i] = A->data[i];
    }
    xzgetrf(n, n, b_A, A->size[0], jpvt, &LDA);
    LDA = b_A->size[0];
    for (b_i = 0; b_i <= n - 2; b_i++) {
      i = jpvt->data[b_i];
      if (i != b_i + 1) {
        temp = Y->data[b_i];
        Y->data[b_i] = Y->data[i - 1];
        Y->data[i - 1] = temp;
      }
    }
    for (k = 0; k < n; k++) {
      kAcol = LDA * k;
      if (Y->data[k] != 0.0) {
        i = k + 2;
        for (b_i = i; b_i <= n; b_i++) {
          Y->data[b_i - 1] -= Y->data[k] * b_A->data[(b_i + kAcol) - 1];
        }
      }
    }
    for (k = n; k >= 1; k--) {
      kAcol = LDA * (k - 1);
      temp = Y->data[k - 1];
      if (temp != 0.0) {
        Y->data[k - 1] = temp / b_A->data[(k + kAcol) - 1];
        for (b_i = 0; b_i <= k - 2; b_i++) {
          Y->data[b_i] -= Y->data[k - 1] * b_A->data[b_i + kAcol];
        }
      }
    }
  } else {
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[0];
    b_A->size[1] = A->size[1];
    emxEnsureCapacity_real_T(b_A, i);
    LDA = A->size[0] * A->size[1];
    for (i = 0; i < LDA; i++) {
      b_A->data[i] = A->data[i];
    }
    xgeqp3(b_A, tau, jpvt);
    kAcol = rankFromQR(b_A);
    i = Y->size[0];
    Y->size[0] = b_A->size[1];
    emxEnsureCapacity_real_T(Y, i);
    LDA = b_A->size[1];
    for (i = 0; i < LDA; i++) {
      Y->data[i] = 0.0;
    }
    i = b_B->size[0];
    b_B->size[0] = B->size[0];
    emxEnsureCapacity_real_T(b_B, i);
    LDA = B->size[0];
    for (i = 0; i < LDA; i++) {
      b_B->data[i] = B->data[i];
    }
    xunormqr(b_A, b_B, tau);
    for (b_i = 0; b_i < kAcol; b_i++) {
      Y->data[jpvt->data[b_i] - 1] = b_B->data[b_i];
    }
    for (LDA = kAcol; LDA >= 1; LDA--) {
      i = jpvt->data[LDA - 1];
      Y->data[i - 1] /= b_A->data[(LDA + b_A->size[0] * (LDA - 1)) - 1];
      for (b_i = 0; b_i <= LDA - 2; b_i++) {
        Y->data[jpvt->data[b_i] - 1] -=
            Y->data[jpvt->data[LDA - 1] - 1] *
            b_A->data[b_i + b_A->size[0] * (LDA - 1)];
      }
    }
  }
  emxFree_real_T(&b_B);
  emxFree_int32_T(&jpvt);
  emxFree_real_T(&tau);
  emxFree_real_T(&b_A);
}

/*
 * File trailer for mldivide.c
 *
 * [EOF]
 */
