/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * inv.c
 *
 * Code generation for function 'inv'
 *
 */

/* Include files */
#include "inv.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "xzgetrf.h"
#include <string.h>

/* Function Definitions */
void inv(const emxArray_real_T *x, emxArray_real_T *y)
{
  emxArray_int32_T *ipiv;
  emxArray_int32_T *p;
  emxArray_real_T *b_x;
  const double *x_data;
  double *b_x_data;
  double *y_data;
  int b_i;
  int b_n;
  int i;
  int i1;
  int j;
  int k;
  int kAcol;
  int n;
  int yk;
  int *ipiv_data;
  int *p_data;
  x_data = x->data;
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = x->size[0];
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(y, i);
    y_data = y->data;
    yk = x->size[0] * x->size[1];
    for (i = 0; i < yk; i++) {
      y_data[i] = x_data[i];
    }
  } else {
    n = x->size[0];
    i = y->size[0] * y->size[1];
    y->size[0] = x->size[0];
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(y, i);
    y_data = y->data;
    yk = x->size[0] * x->size[1];
    for (i = 0; i < yk; i++) {
      y_data[i] = 0.0;
    }
    emxInit_real_T(&b_x, 2);
    i = b_x->size[0] * b_x->size[1];
    b_x->size[0] = x->size[0];
    b_x->size[1] = x->size[1];
    emxEnsureCapacity_real_T(b_x, i);
    b_x_data = b_x->data;
    yk = x->size[0] * x->size[1];
    for (i = 0; i < yk; i++) {
      b_x_data[i] = x_data[i];
    }
    emxInit_int32_T(&p, 2);
    emxInit_int32_T(&ipiv, 2);
    xzgetrf(x->size[0], x->size[0], b_x, x->size[0], ipiv, &yk);
    ipiv_data = ipiv->data;
    b_x_data = b_x->data;
    b_n = x->size[0];
    i = p->size[0] * p->size[1];
    p->size[0] = 1;
    p->size[1] = x->size[0];
    emxEnsureCapacity_int32_T(p, i);
    p_data = p->data;
    p_data[0] = 1;
    yk = 1;
    for (k = 2; k <= b_n; k++) {
      yk++;
      p_data[k - 1] = yk;
    }
    i = ipiv->size[1];
    for (k = 0; k < i; k++) {
      i1 = ipiv_data[k];
      if (i1 > k + 1) {
        yk = p_data[i1 - 1];
        p_data[i1 - 1] = p_data[k];
        p_data[k] = yk;
      }
    }
    emxFree_int32_T(&ipiv);
    for (k = 0; k < n; k++) {
      i = p_data[k];
      y_data[k + y->size[0] * (i - 1)] = 1.0;
      for (j = k + 1; j <= n; j++) {
        if (y_data[(j + y->size[0] * (i - 1)) - 1] != 0.0) {
          i1 = j + 1;
          for (b_i = i1; b_i <= n; b_i++) {
            y_data[(b_i + y->size[0] * (i - 1)) - 1] -=
                y_data[(j + y->size[0] * (i - 1)) - 1] *
                b_x_data[(b_i + b_x->size[0] * (j - 1)) - 1];
          }
        }
      }
    }
    emxFree_int32_T(&p);
    yk = x->size[0];
    n = x->size[0];
    for (j = 0; j < n; j++) {
      b_n = x->size[0] * j - 1;
      for (k = yk; k >= 1; k--) {
        kAcol = x->size[0] * (k - 1) - 1;
        i = k + b_n;
        if (y_data[i] != 0.0) {
          y_data[i] /= b_x_data[k + kAcol];
          for (b_i = 0; b_i <= k - 2; b_i++) {
            i1 = (b_i + b_n) + 1;
            y_data[i1] -= y_data[i] * b_x_data[(b_i + kAcol) + 1];
          }
        }
      }
    }
    emxFree_real_T(&b_x);
  }
}

/* End of code generation (inv.c) */
