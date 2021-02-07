/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 *
 * mrdivide_helper.c
 *
 * Code generation for function 'mrdivide_helper'
 *
 */

/* Include files */
#include "mrdivide_helper.h"
#include "addt_data.h"
#include "addt_emxutil.h"
#include "addt_types.h"
#include "qrsolve.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
void b_mrdiv(const emxArray_real_T *A, const creal_T B_data[],
             const int B_size[2], emxArray_creal_T *Y)
{
  emxArray_creal_T *b_Y;
  double ar;
  double bim;
  double brm;
  double d;
  int i;
  int loop_ub;
  emxInit_creal_T(&b_Y, 1);
  if ((A->size[0] == 0) || (B_size[0] == 0)) {
    i = Y->size[0] * Y->size[1];
    Y->size[0] = A->size[0];
    Y->size[1] = B_size[0];
    emxEnsureCapacity_creal_T(Y, i);
    loop_ub = A->size[0] * B_size[0];
    for (i = 0; i < loop_ub; i++) {
      Y->data[i].re = 0.0;
      Y->data[i].im = 0.0;
    }
  } else {
    loop_ub = A->size[0];
    i = b_Y->size[0];
    b_Y->size[0] = A->size[0];
    emxEnsureCapacity_creal_T(b_Y, i);
    for (i = 0; i < loop_ub; i++) {
      ar = A->data[i];
      if (B_data[0].im == 0.0) {
        b_Y->data[i].re = ar / B_data[0].re;
        b_Y->data[i].im = 0.0;
      } else if (B_data[0].re == 0.0) {
        if (ar == 0.0) {
          b_Y->data[i].re = 0.0 / B_data[0].im;
          b_Y->data[i].im = 0.0;
        } else {
          b_Y->data[i].re = 0.0;
          b_Y->data[i].im = -(ar / B_data[0].im);
        }
      } else {
        brm = fabs(B_data[0].re);
        bim = fabs(B_data[0].im);
        if (brm > bim) {
          bim = B_data[0].im / B_data[0].re;
          d = B_data[0].re + bim * B_data[0].im;
          b_Y->data[i].re = (ar + bim * 0.0) / d;
          b_Y->data[i].im = (0.0 - bim * ar) / d;
        } else if (bim == brm) {
          if (B_data[0].re > 0.0) {
            bim = 0.5;
          } else {
            bim = -0.5;
          }
          if (B_data[0].im > 0.0) {
            d = 0.5;
          } else {
            d = -0.5;
          }
          b_Y->data[i].re = (ar * bim + 0.0 * d) / brm;
          b_Y->data[i].im = (0.0 * bim - ar * d) / brm;
        } else {
          bim = B_data[0].re / B_data[0].im;
          d = B_data[0].im + bim * B_data[0].re;
          b_Y->data[i].re = bim * ar / d;
          b_Y->data[i].im = (bim * 0.0 - ar) / d;
        }
      }
    }
    i = Y->size[0] * Y->size[1];
    Y->size[0] = b_Y->size[0];
    Y->size[1] = 1;
    emxEnsureCapacity_creal_T(Y, i);
    loop_ub = b_Y->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y->data[i] = b_Y->data[i];
    }
  }
  emxFree_creal_T(&b_Y);
}

void mrdiv(const emxArray_real_T *A, const emxArray_real_T *B,
           emxArray_real_T *Y)
{
  emxArray_int32_T *ipiv;
  emxArray_real_T *b_A;
  emxArray_real_T *b_B;
  emxArray_real_T *c_A;
  double s;
  double smax;
  int b_i;
  int b_n;
  int i;
  int i1;
  int j;
  int jA;
  int jj;
  int jp1j;
  int k;
  int kBcol;
  int ldap1;
  int mmj_tmp;
  int n;
  int u1;
  int yk;
  emxInit_real_T(&b_A, 2);
  emxInit_int32_T(&ipiv, 2);
  emxInit_real_T(&b_B, 2);
  emxInit_real_T(&c_A, 2);
  if ((A->size[0] == 0) || (A->size[1] == 0) ||
      ((B->size[0] == 0) || (B->size[1] == 0))) {
    i = Y->size[0] * Y->size[1];
    Y->size[0] = A->size[0];
    Y->size[1] = B->size[0];
    emxEnsureCapacity_real_T(Y, i);
    n = A->size[0] * B->size[0];
    for (i = 0; i < n; i++) {
      Y->data[i] = 0.0;
    }
  } else if (B->size[0] == B->size[1]) {
    i = Y->size[0] * Y->size[1];
    Y->size[0] = A->size[0];
    Y->size[1] = A->size[1];
    emxEnsureCapacity_real_T(Y, i);
    n = A->size[0] * A->size[1];
    for (i = 0; i < n; i++) {
      Y->data[i] = A->data[i];
    }
    b_n = B->size[1];
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = B->size[0];
    b_A->size[1] = B->size[1];
    emxEnsureCapacity_real_T(b_A, i);
    n = B->size[0] * B->size[1];
    for (i = 0; i < n; i++) {
      b_A->data[i] = B->data[i];
    }
    n = B->size[1];
    i = ipiv->size[0] * ipiv->size[1];
    ipiv->size[0] = 1;
    ipiv->size[1] = B->size[1];
    emxEnsureCapacity_int32_T(ipiv, i);
    ipiv->data[0] = 1;
    yk = 1;
    for (k = 2; k <= n; k++) {
      yk++;
      ipiv->data[k - 1] = yk;
    }
    ldap1 = B->size[1];
    yk = B->size[1] - 1;
    u1 = B->size[1];
    if (yk < u1) {
      u1 = yk;
    }
    for (j = 0; j < u1; j++) {
      mmj_tmp = b_n - j;
      kBcol = j * (b_n + 1);
      jj = j * (ldap1 + 1);
      jp1j = kBcol + 2;
      if (mmj_tmp < 1) {
        yk = -1;
      } else {
        yk = 0;
        if (mmj_tmp > 1) {
          smax = fabs(b_A->data[jj]);
          for (k = 2; k <= mmj_tmp; k++) {
            s = fabs(b_A->data[(kBcol + k) - 1]);
            if (s > smax) {
              yk = k - 1;
              smax = s;
            }
          }
        }
      }
      if (b_A->data[jj + yk] != 0.0) {
        if (yk != 0) {
          n = j + yk;
          ipiv->data[j] = n + 1;
          for (k = 0; k < b_n; k++) {
            yk = k * b_n;
            jA = j + yk;
            smax = b_A->data[jA];
            i = n + yk;
            b_A->data[jA] = b_A->data[i];
            b_A->data[i] = smax;
          }
        }
        i = jj + mmj_tmp;
        for (b_i = jp1j; b_i <= i; b_i++) {
          b_A->data[b_i - 1] /= b_A->data[jj];
        }
      }
      n = kBcol + b_n;
      jA = jj + ldap1;
      for (kBcol = 0; kBcol <= mmj_tmp - 2; kBcol++) {
        yk = n + kBcol * b_n;
        smax = b_A->data[yk];
        if (b_A->data[yk] != 0.0) {
          i = jA + 2;
          i1 = mmj_tmp + jA;
          for (yk = i; yk <= i1; yk++) {
            b_A->data[yk - 1] += b_A->data[((jj + yk) - jA) - 1] * -smax;
          }
        }
        jA += b_n;
      }
    }
    yk = A->size[0];
    for (j = 0; j < b_n; j++) {
      n = yk * j - 1;
      jA = b_n * j;
      for (k = 0; k < j; k++) {
        kBcol = yk * k;
        i = k + jA;
        if (b_A->data[i] != 0.0) {
          for (b_i = 0; b_i < yk; b_i++) {
            i1 = (b_i + n) + 1;
            Y->data[i1] -= b_A->data[i] * Y->data[b_i + kBcol];
          }
        }
      }
      smax = 1.0 / b_A->data[j + jA];
      for (b_i = 0; b_i < yk; b_i++) {
        i = (b_i + n) + 1;
        Y->data[i] *= smax;
      }
    }
    for (j = b_n; j >= 1; j--) {
      n = yk * (j - 1) - 1;
      jA = b_n * (j - 1) - 1;
      i = j + 1;
      for (k = i; k <= b_n; k++) {
        kBcol = yk * (k - 1);
        i1 = k + jA;
        if (b_A->data[i1] != 0.0) {
          for (b_i = 0; b_i < yk; b_i++) {
            jp1j = (b_i + n) + 1;
            Y->data[jp1j] -= b_A->data[i1] * Y->data[b_i + kBcol];
          }
        }
      }
    }
    i = B->size[1] - 1;
    for (j = i; j >= 1; j--) {
      i1 = ipiv->data[j - 1];
      if (i1 != j) {
        for (b_i = 0; b_i < yk; b_i++) {
          smax = Y->data[b_i + Y->size[0] * (j - 1)];
          Y->data[b_i + Y->size[0] * (j - 1)] =
              Y->data[b_i + Y->size[0] * (i1 - 1)];
          Y->data[b_i + Y->size[0] * (i1 - 1)] = smax;
        }
      }
    }
  } else {
    i = b_B->size[0] * b_B->size[1];
    b_B->size[0] = B->size[1];
    b_B->size[1] = B->size[0];
    emxEnsureCapacity_real_T(b_B, i);
    n = B->size[0];
    for (i = 0; i < n; i++) {
      yk = B->size[1];
      for (i1 = 0; i1 < yk; i1++) {
        b_B->data[i1 + b_B->size[0] * i] = B->data[i + B->size[0] * i1];
      }
    }
    i = c_A->size[0] * c_A->size[1];
    c_A->size[0] = A->size[1];
    c_A->size[1] = A->size[0];
    emxEnsureCapacity_real_T(c_A, i);
    n = A->size[0];
    for (i = 0; i < n; i++) {
      yk = A->size[1];
      for (i1 = 0; i1 < yk; i1++) {
        c_A->data[i1 + c_A->size[0] * i] = A->data[i + A->size[0] * i1];
      }
    }
    qrsolve(b_B, c_A, b_A);
    i = Y->size[0] * Y->size[1];
    Y->size[0] = b_A->size[1];
    Y->size[1] = b_A->size[0];
    emxEnsureCapacity_real_T(Y, i);
    n = b_A->size[0];
    for (i = 0; i < n; i++) {
      yk = b_A->size[1];
      for (i1 = 0; i1 < yk; i1++) {
        Y->data[i1 + Y->size[0] * i] = b_A->data[i + b_A->size[0] * i1];
      }
    }
  }
  emxFree_real_T(&c_A);
  emxFree_real_T(&b_B);
  emxFree_int32_T(&ipiv);
  emxFree_real_T(&b_A);
}

/* End of code generation (mrdivide_helper.c) */
