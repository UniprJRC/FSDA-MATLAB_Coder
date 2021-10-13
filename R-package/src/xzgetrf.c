/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzgetrf.c
 *
 * Code generation for function 'xzgetrf'
 *
 */

/* Include files */
#include "xzgetrf.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void xzgetrf(int m, int n, emxArray_real_T *A, int lda, emxArray_int32_T *ipiv,
             int *info)
{
  double s;
  double smax;
  double *A_data;
  int b_j;
  int b_n;
  int b_tmp;
  int i;
  int ipiv_tmp;
  int j;
  int jA;
  int k;
  int mmj;
  int u0;
  int yk;
  int *ipiv_data;
  A_data = A->data;
  if (m <= n) {
    yk = m;
  } else {
    yk = n;
  }
  if (yk < 1) {
    b_n = 0;
  } else {
    b_n = yk;
  }
  i = ipiv->size[0] * ipiv->size[1];
  ipiv->size[0] = 1;
  ipiv->size[1] = b_n;
  emxEnsureCapacity_int32_T(ipiv, i);
  ipiv_data = ipiv->data;
  if (b_n > 0) {
    ipiv_data[0] = 1;
    yk = 1;
    for (k = 2; k <= b_n; k++) {
      yk++;
      ipiv_data[k - 1] = yk;
    }
  }
  *info = 0;
  if ((m >= 1) && (n >= 1)) {
    u0 = m - 1;
    if (u0 > n) {
      u0 = n;
    }
    for (j = 0; j < u0; j++) {
      mmj = m - j;
      b_tmp = j * (lda + 1);
      b_n = b_tmp + 2;
      if (mmj < 1) {
        yk = -1;
      } else {
        yk = 0;
        if (mmj > 1) {
          smax = fabs(A_data[b_tmp]);
          for (k = 2; k <= mmj; k++) {
            s = fabs(A_data[(b_tmp + k) - 1]);
            if (s > smax) {
              yk = k - 1;
              smax = s;
            }
          }
        }
      }
      if (A_data[b_tmp + yk] != 0.0) {
        if (yk != 0) {
          ipiv_tmp = j + yk;
          ipiv_data[j] = ipiv_tmp + 1;
          for (k = 0; k < n; k++) {
            yk = k * lda;
            jA = j + yk;
            smax = A_data[jA];
            i = ipiv_tmp + yk;
            A_data[jA] = A_data[i];
            A_data[i] = smax;
          }
        }
        i = b_tmp + mmj;
        for (yk = b_n; yk <= i; yk++) {
          A_data[yk - 1] /= A_data[b_tmp];
        }
      } else {
        *info = j + 1;
      }
      b_n = n - j;
      ipiv_tmp = b_tmp + lda;
      jA = ipiv_tmp;
      for (b_j = 0; b_j <= b_n - 2; b_j++) {
        yk = ipiv_tmp + b_j * lda;
        smax = A_data[yk];
        if (A_data[yk] != 0.0) {
          i = jA + 2;
          yk = mmj + jA;
          for (k = i; k <= yk; k++) {
            A_data[k - 1] += A_data[((b_tmp + k) - jA) - 1] * -smax;
          }
        }
        jA += lda;
      }
    }
    if ((*info == 0) && (m <= n) &&
        (!(A_data[(m + A->size[0] * (m - 1)) - 1] != 0.0))) {
      *info = m;
    }
  }
}

/* End of code generation (xzgetrf.c) */
