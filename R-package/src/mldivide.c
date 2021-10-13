/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mldivide.c
 *
 * Code generation for function 'mldivide'
 *
 */

/* Include files */
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

/* Function Definitions */
void b_mldivide(const emxArray_real_T *A, const emxArray_real_T *B,
                emxArray_real_T *Y)
{
  emxArray_int32_T *ipiv;
  emxArray_real_T *b_A;
  const double *A_data;
  const double *B_data;
  double temp;
  double *Y_data;
  double *b_A_data;
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
  int *ipiv_data;
  B_data = B->data;
  A_data = A->data;
  emxInit_real_T(&b_A, 2);
  emxInit_int32_T(&ipiv, 2);
  if ((A->size[0] == 0) || (A->size[1] == 0) ||
      ((B->size[0] == 0) || (B->size[1] == 0))) {
    i = Y->size[0] * Y->size[1];
    Y->size[0] = A->size[1];
    Y->size[1] = B->size[1];
    emxEnsureCapacity_real_T(Y, i);
    Y_data = Y->data;
    loop_ub = A->size[1] * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      Y_data[i] = 0.0;
    }
  } else if (A->size[0] == A->size[1]) {
    i = Y->size[0] * Y->size[1];
    Y->size[0] = B->size[0];
    Y->size[1] = B->size[1];
    emxEnsureCapacity_real_T(Y, i);
    Y_data = Y->data;
    loop_ub = B->size[0] * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      Y_data[i] = B_data[i];
    }
    loop_ub = A->size[0];
    n = A->size[1];
    if (loop_ub <= n) {
      n = loop_ub;
    }
    loop_ub = B->size[0];
    if (loop_ub <= n) {
      n = loop_ub;
    }
    nrhs = B->size[1] - 1;
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[0];
    b_A->size[1] = A->size[1];
    emxEnsureCapacity_real_T(b_A, i);
    b_A_data = b_A->data;
    loop_ub = A->size[0] * A->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_A_data[i] = A_data[i];
    }
    xzgetrf(n, n, b_A, A->size[0], ipiv, &loop_ub);
    ipiv_data = ipiv->data;
    b_A_data = b_A->data;
    for (b_i = 0; b_i <= n - 2; b_i++) {
      i = ipiv_data[b_i];
      if (i != b_i + 1) {
        for (j = 0; j <= nrhs; j++) {
          temp = Y_data[b_i + Y->size[0] * j];
          Y_data[b_i + Y->size[0] * j] = Y_data[(i + Y->size[0] * j) - 1];
          Y_data[(i + Y->size[0] * j) - 1] = temp;
        }
      }
    }
    for (j = 0; j <= nrhs; j++) {
      jBcol = B->size[0] * j;
      for (k = 0; k < n; k++) {
        kAcol = b_A->size[0] * k;
        i = k + jBcol;
        if (Y_data[i] != 0.0) {
          i1 = k + 2;
          for (b_i = i1; b_i <= n; b_i++) {
            loop_ub = (b_i + jBcol) - 1;
            Y_data[loop_ub] -= Y_data[i] * b_A_data[(b_i + kAcol) - 1];
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
        if (Y_data[i] != 0.0) {
          Y_data[i] /= b_A_data[k + kAcol];
          for (b_i = 0; b_i <= k - 2; b_i++) {
            i1 = (b_i + jBcol) + 1;
            Y_data[i1] -= Y_data[i] * b_A_data[(b_i + kAcol) + 1];
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

void c_mldivide(const double B[9], double Y[3])
{
  static const signed char b_A[27] = {1, 1, 1,  1,  1,  1,  1,  1,  1,
                                      2, 3, 4,  5,  6,  7,  8,  9,  10,
                                      4, 9, 16, 25, 36, 49, 64, 81, 100};
  static const signed char b_iv[27] = {1, 1, 1,  1,  1,  1,  1,  1,  1,
                                       2, 3, 4,  5,  6,  7,  8,  9,  10,
                                       4, 9, 16, 25, 36, 49, 64, 81, 100};
  double A[27];
  double b_B[9];
  double tau[3];
  double vn1[3];
  double vn2[3];
  double work[3];
  double atmp;
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
  jpvt[0] = 1;
  tau[0] = 0.0;
  jpvt[1] = 2;
  tau[1] = 0.0;
  jpvt[2] = 3;
  tau[2] = 0.0;
  for (i = 0; i < 27; i++) {
    A[i] = b_A[i];
  }
  for (j = 0; j < 3; j++) {
    work[j] = 0.0;
    ix0 = j * 9;
    smax = 0.0;
    scale = 3.3121686421112381E-170;
    kend = ix0 + 9;
    for (lastc = ix0 + 1; lastc <= kend; lastc++) {
      i = b_iv[lastc - 1];
      if (i > scale) {
        t = scale / (double)i;
        smax = smax * t * t + 1.0;
        scale = i;
      } else {
        t = (double)i / scale;
        smax += t * t;
      }
    }
    t = scale * sqrt(smax);
    vn1[j] = t;
    vn2[j] = t;
  }
  for (b_i = 0; b_i < 3; b_i++) {
    ip1 = b_i + 2;
    ii = b_i * 9 + b_i;
    kend = 3 - b_i;
    ix0 = 0;
    if (3 - b_i > 1) {
      smax = fabs(vn1[b_i]);
      for (lastc = 2; lastc <= kend; lastc++) {
        scale = fabs(vn1[(b_i + lastc) - 1]);
        if (scale > smax) {
          ix0 = lastc - 1;
          smax = scale;
        }
      }
    }
    pvt = b_i + ix0;
    if (pvt != b_i) {
      kend = pvt * 9;
      iy = b_i * 9;
      for (lastc = 0; lastc < 9; lastc++) {
        rankA = kend + lastc;
        smax = A[rankA];
        ix0 = iy + lastc;
        A[rankA] = A[ix0];
        A[ix0] = smax;
      }
      kend = jpvt[pvt];
      jpvt[pvt] = jpvt[b_i];
      jpvt[b_i] = (signed char)kend;
      vn1[pvt] = vn1[b_i];
      vn2[pvt] = vn2[b_i];
    }
    atmp = A[ii];
    ix0 = ii + 2;
    tau[b_i] = 0.0;
    smax = d_xnrm2(8 - b_i, A, ii + 2);
    if (smax != 0.0) {
      t = A[ii];
      scale = rt_hypotd_snf(t, smax);
      if (t >= 0.0) {
        scale = -scale;
      }
      if (fabs(scale) < 1.0020841800044864E-292) {
        kend = -1;
        i = (ii - b_i) + 9;
        do {
          kend++;
          for (lastc = ix0; lastc <= i; lastc++) {
            A[lastc - 1] *= 9.9792015476736E+291;
          }
          scale *= 9.9792015476736E+291;
          atmp *= 9.9792015476736E+291;
        } while (!(fabs(scale) >= 1.0020841800044864E-292));
        scale = rt_hypotd_snf(atmp, d_xnrm2(8 - b_i, A, ii + 2));
        if (atmp >= 0.0) {
          scale = -scale;
        }
        tau[b_i] = (scale - atmp) / scale;
        smax = 1.0 / (atmp - scale);
        for (lastc = ix0; lastc <= i; lastc++) {
          A[lastc - 1] *= smax;
        }
        for (lastc = 0; lastc <= kend; lastc++) {
          scale *= 1.0020841800044864E-292;
        }
        atmp = scale;
      } else {
        tau[b_i] = (scale - t) / scale;
        smax = 1.0 / (t - scale);
        i = (ii - b_i) + 9;
        for (lastc = ix0; lastc <= i; lastc++) {
          A[lastc - 1] *= smax;
        }
        atmp = scale;
      }
    }
    A[ii] = atmp;
    if (b_i + 1 < 3) {
      A[ii] = 1.0;
      iy = ii + 10;
      if (tau[b_i] != 0.0) {
        lastv = 9 - b_i;
        kend = (ii - b_i) + 8;
        while ((lastv > 0) && (A[kend] == 0.0)) {
          lastv--;
          kend--;
        }
        lastc = 1 - b_i;
        exitg2 = false;
        while ((!exitg2) && (lastc + 1 > 0)) {
          kend = (ii + lastc * 9) + 9;
          rankA = kend;
          do {
            exitg1 = 0;
            if (rankA + 1 <= kend + lastv) {
              if (A[rankA] != 0.0) {
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
          i = (ii + 9 * lastc) + 10;
          for (ix0 = iy; ix0 <= i; ix0 += 9) {
            smax = 0.0;
            pvt = (ix0 + lastv) - 1;
            for (rankA = ix0; rankA <= pvt; rankA++) {
              smax += A[rankA - 1] * A[(ii + rankA) - ix0];
            }
            kend = div_nde_s32_floor((ix0 - ii) - 10, 9);
            work[kend] += smax;
          }
        }
        if (!(-tau[b_i] == 0.0)) {
          kend = ii;
          for (j = 0; j <= lastc; j++) {
            t = work[j];
            if (t != 0.0) {
              smax = t * -tau[b_i];
              i = kend + 10;
              pvt = lastv + kend;
              for (rankA = i; rankA <= pvt + 9; rankA++) {
                A[rankA - 1] += A[((ii + rankA) - kend) - 10] * smax;
              }
            }
            kend += 9;
          }
        }
      }
      A[ii] = atmp;
    }
    for (j = ip1; j < 4; j++) {
      kend = b_i + (j - 1) * 9;
      t = vn1[j - 1];
      if (t != 0.0) {
        smax = fabs(A[kend]) / t;
        smax = 1.0 - smax * smax;
        if (smax < 0.0) {
          smax = 0.0;
        }
        scale = t / vn2[j - 1];
        scale = smax * (scale * scale);
        if (scale <= 1.4901161193847656E-8) {
          t = d_xnrm2(8 - b_i, A, kend + 2);
          vn1[j - 1] = t;
          vn2[j - 1] = t;
        } else {
          vn1[j - 1] = t * sqrt(smax);
        }
      }
    }
  }
  rankA = 0;
  smax = 1.9984014443252818E-14 * fabs(A[0]);
  while ((rankA < 3) && (!(fabs(A[rankA + 9 * rankA]) <= smax))) {
    rankA++;
  }
  memcpy(&b_B[0], &B[0], 9U * sizeof(double));
  for (j = 0; j < 3; j++) {
    Y[j] = 0.0;
    if (tau[j] != 0.0) {
      smax = b_B[j];
      i = j + 2;
      for (b_i = i; b_i < 10; b_i++) {
        smax += A[(b_i + 9 * j) - 1] * b_B[b_i - 1];
      }
      smax *= tau[j];
      if (smax != 0.0) {
        b_B[j] -= smax;
        for (b_i = i; b_i < 10; b_i++) {
          b_B[b_i - 1] -= A[(b_i + 9 * j) - 1] * smax;
        }
      }
    }
  }
  for (b_i = 0; b_i < rankA; b_i++) {
    Y[jpvt[b_i] - 1] = b_B[b_i];
  }
  for (j = rankA; j >= 1; j--) {
    kend = jpvt[j - 1] - 1;
    ix0 = 9 * (j - 1);
    Y[kend] /= A[(j + ix0) - 1];
    for (b_i = 0; b_i <= j - 2; b_i++) {
      iy = jpvt[b_i] - 1;
      Y[iy] -= Y[kend] * A[b_i + ix0];
    }
  }
}

void mldivide(const emxArray_real_T *A, const emxArray_real_T *B,
              emxArray_real_T *Y)
{
  emxArray_int32_T *jpvt;
  emxArray_real_T *b_A;
  emxArray_real_T *b_B;
  emxArray_real_T *tau;
  const double *A_data;
  const double *B_data;
  double temp;
  double *Y_data;
  double *b_A_data;
  double *b_B_data;
  int LDA;
  int b_i;
  int i;
  int k;
  int kAcol;
  int n;
  int *jpvt_data;
  B_data = B->data;
  A_data = A->data;
  emxInit_real_T(&b_A, 2);
  emxInit_real_T(&tau, 1);
  emxInit_int32_T(&jpvt, 2);
  emxInit_real_T(&b_B, 1);
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0)) {
    i = Y->size[0];
    Y->size[0] = A->size[1];
    emxEnsureCapacity_real_T(Y, i);
    Y_data = Y->data;
    LDA = A->size[1];
    for (i = 0; i < LDA; i++) {
      Y_data[i] = 0.0;
    }
  } else if (A->size[0] == A->size[1]) {
    i = Y->size[0];
    Y->size[0] = B->size[0];
    emxEnsureCapacity_real_T(Y, i);
    Y_data = Y->data;
    LDA = B->size[0];
    for (i = 0; i < LDA; i++) {
      Y_data[i] = B_data[i];
    }
    LDA = A->size[0];
    n = A->size[1];
    if (LDA <= n) {
      n = LDA;
    }
    LDA = B->size[0];
    if (LDA <= n) {
      n = LDA;
    }
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[0];
    b_A->size[1] = A->size[1];
    emxEnsureCapacity_real_T(b_A, i);
    b_A_data = b_A->data;
    LDA = A->size[0] * A->size[1];
    for (i = 0; i < LDA; i++) {
      b_A_data[i] = A_data[i];
    }
    xzgetrf(n, n, b_A, A->size[0], jpvt, &LDA);
    jpvt_data = jpvt->data;
    b_A_data = b_A->data;
    LDA = b_A->size[0];
    for (b_i = 0; b_i <= n - 2; b_i++) {
      i = jpvt_data[b_i];
      if (i != b_i + 1) {
        temp = Y_data[b_i];
        Y_data[b_i] = Y_data[i - 1];
        Y_data[i - 1] = temp;
      }
    }
    for (k = 0; k < n; k++) {
      kAcol = LDA * k;
      if (Y_data[k] != 0.0) {
        i = k + 2;
        for (b_i = i; b_i <= n; b_i++) {
          Y_data[b_i - 1] -= Y_data[k] * b_A_data[(b_i + kAcol) - 1];
        }
      }
    }
    for (k = n; k >= 1; k--) {
      kAcol = LDA * (k - 1);
      temp = Y_data[k - 1];
      if (temp != 0.0) {
        Y_data[k - 1] = temp / b_A_data[(k + kAcol) - 1];
        for (b_i = 0; b_i <= k - 2; b_i++) {
          Y_data[b_i] -= Y_data[k - 1] * b_A_data[b_i + kAcol];
        }
      }
    }
  } else {
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = A->size[0];
    b_A->size[1] = A->size[1];
    emxEnsureCapacity_real_T(b_A, i);
    b_A_data = b_A->data;
    LDA = A->size[0] * A->size[1];
    for (i = 0; i < LDA; i++) {
      b_A_data[i] = A_data[i];
    }
    xgeqp3(b_A, tau, jpvt);
    jpvt_data = jpvt->data;
    b_A_data = b_A->data;
    kAcol = rankFromQR(b_A);
    i = Y->size[0];
    Y->size[0] = b_A->size[1];
    emxEnsureCapacity_real_T(Y, i);
    Y_data = Y->data;
    LDA = b_A->size[1];
    for (i = 0; i < LDA; i++) {
      Y_data[i] = 0.0;
    }
    i = b_B->size[0];
    b_B->size[0] = B->size[0];
    emxEnsureCapacity_real_T(b_B, i);
    b_B_data = b_B->data;
    LDA = B->size[0];
    for (i = 0; i < LDA; i++) {
      b_B_data[i] = B_data[i];
    }
    xunormqr(b_A, b_B, tau);
    b_B_data = b_B->data;
    for (b_i = 0; b_i < kAcol; b_i++) {
      Y_data[jpvt_data[b_i] - 1] = b_B_data[b_i];
    }
    for (LDA = kAcol; LDA >= 1; LDA--) {
      i = jpvt_data[LDA - 1];
      Y_data[i - 1] /= b_A_data[(LDA + b_A->size[0] * (LDA - 1)) - 1];
      for (b_i = 0; b_i <= LDA - 2; b_i++) {
        Y_data[jpvt_data[b_i] - 1] -= Y_data[jpvt_data[LDA - 1] - 1] *
                                      b_A_data[b_i + b_A->size[0] * (LDA - 1)];
      }
    }
  }
  emxFree_real_T(&b_B);
  emxFree_int32_T(&jpvt);
  emxFree_real_T(&tau);
  emxFree_real_T(&b_A);
}

/* End of code generation (mldivide.c) */
