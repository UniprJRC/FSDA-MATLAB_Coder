/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * finv.c
 *
 * Code generation for function 'finv'
 *
 */

/* Include files */
#include "finv.h"
#include "betainc.h"
#include "betaincinv.h"
#include "chi2inv.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "gammaincinv.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void b_finv(const emxArray_real_T *p, double v1, const emxArray_real_T *v2,
            emxArray_real_T *x)
{
  creal_T dc;
  const double *p_data;
  const double *v2_data;
  double t;
  double *x_data;
  int csz_idx_0;
  int csz_idx_1;
  int u0;
  v2_data = v2->data;
  p_data = p->data;
  u0 = p->size[0];
  csz_idx_0 = v2->size[0];
  if (u0 <= csz_idx_0) {
    csz_idx_0 = u0;
  }
  u0 = p->size[1];
  csz_idx_1 = v2->size[1];
  if (u0 <= csz_idx_1) {
    csz_idx_1 = u0;
  }
  u0 = x->size[0] * x->size[1];
  x->size[0] = csz_idx_0;
  x->size[1] = csz_idx_1;
  emxEnsureCapacity_real_T(x, u0);
  x_data = x->data;
  u0 = csz_idx_0 * csz_idx_1;
  for (csz_idx_0 = 0; csz_idx_0 < u0; csz_idx_0++) {
    if ((v1 > 0.0) && (v2_data[csz_idx_0] > 0.0) &&
        (p_data[csz_idx_0] >= 0.0) && (p_data[csz_idx_0] <= 1.0)) {
      if (rtIsInf(v1)) {
        if (rtIsInf(v2_data[csz_idx_0])) {
          x_data[csz_idx_0] = (p_data[csz_idx_0] > 0.0);
        } else {
          x_data[csz_idx_0] =
              v2_data[csz_idx_0] /
              chi2inv(1.0 - p_data[csz_idx_0], v2_data[csz_idx_0]);
        }
      } else if (rtIsInf(v2_data[csz_idx_0])) {
        x_data[csz_idx_0] = chi2inv(p_data[csz_idx_0], v1) / v1;
      } else {
        dc = betainc(0.5, v1 / 2.0, v2_data[csz_idx_0] / 2.0);
        if (p_data[csz_idx_0] > dc.re) {
          dc =
              betaincinv(p_data[csz_idx_0], v2_data[csz_idx_0] / 2.0, v1 / 2.0);
          t = (1.0 - dc.re) / dc.re;
        } else {
          dc = b_betaincinv(p_data[csz_idx_0], v1 / 2.0,
                            v2_data[csz_idx_0] / 2.0);
          t = dc.re / (1.0 - dc.re);
        }
        x_data[csz_idx_0] = t * v2_data[csz_idx_0] / v1;
      }
    } else {
      x_data[csz_idx_0] = rtNaN;
    }
  }
}

void c_finv(const emxArray_real_T *p, const emxArray_real_T *v1,
            const emxArray_real_T *v2, emxArray_real_T *x)
{
  creal_T dc;
  const double *p_data;
  const double *v1_data;
  const double *v2_data;
  double t;
  double *x_data;
  int csz_idx_0;
  int csz_idx_1;
  int u1;
  v2_data = v2->data;
  v1_data = v1->data;
  p_data = p->data;
  csz_idx_1 = p->size[0];
  u1 = v1->size[0];
  if (csz_idx_1 <= u1) {
    u1 = csz_idx_1;
  }
  csz_idx_0 = v2->size[0];
  if (u1 <= csz_idx_0) {
    csz_idx_0 = u1;
  }
  csz_idx_1 = p->size[1];
  u1 = v1->size[1];
  if (csz_idx_1 <= u1) {
    u1 = csz_idx_1;
  }
  csz_idx_1 = v2->size[1];
  if (u1 <= csz_idx_1) {
    csz_idx_1 = u1;
  }
  u1 = x->size[0] * x->size[1];
  x->size[0] = csz_idx_0;
  x->size[1] = csz_idx_1;
  emxEnsureCapacity_real_T(x, u1);
  x_data = x->data;
  u1 = csz_idx_0 * csz_idx_1;
  for (csz_idx_1 = 0; csz_idx_1 < u1; csz_idx_1++) {
    if ((v1_data[csz_idx_1] > 0.0) && (v2_data[csz_idx_1] > 0.0) &&
        (p_data[csz_idx_1] >= 0.0) && (p_data[csz_idx_1] <= 1.0)) {
      if (rtIsInf(v1_data[csz_idx_1])) {
        if (rtIsInf(v2_data[csz_idx_1])) {
          x_data[csz_idx_1] = (p_data[csz_idx_1] > 0.0);
        } else {
          x_data[csz_idx_1] =
              v2_data[csz_idx_1] /
              chi2inv(1.0 - p_data[csz_idx_1], v2_data[csz_idx_1]);
        }
      } else if (rtIsInf(v2_data[csz_idx_1])) {
        x_data[csz_idx_1] =
            chi2inv(p_data[csz_idx_1], v1_data[csz_idx_1]) / v1_data[csz_idx_1];
      } else {
        dc = betainc(0.5, v1_data[csz_idx_1] / 2.0, v2_data[csz_idx_1] / 2.0);
        if (p_data[csz_idx_1] > dc.re) {
          dc = betaincinv(p_data[csz_idx_1], v2_data[csz_idx_1] / 2.0,
                          v1_data[csz_idx_1] / 2.0);
          t = (1.0 - dc.re) / dc.re;
        } else {
          dc = b_betaincinv(p_data[csz_idx_1], v1_data[csz_idx_1] / 2.0,
                            v2_data[csz_idx_1] / 2.0);
          t = dc.re / (1.0 - dc.re);
        }
        x_data[csz_idx_1] = t * v2_data[csz_idx_1] / v1_data[csz_idx_1];
      }
    } else {
      x_data[csz_idx_1] = rtNaN;
    }
  }
}

void d_finv(const emxArray_real_T *p, const emxArray_real_T *v1,
            const emxArray_real_T *v2, emxArray_real_T *x)
{
  creal_T dc;
  const double *p_data;
  const double *v1_data;
  const double *v2_data;
  double t;
  double *x_data;
  int csz_idx_0;
  int u1;
  v2_data = v2->data;
  v1_data = v1->data;
  p_data = p->data;
  csz_idx_0 = p->size[0];
  u1 = v1->size[0];
  if (csz_idx_0 <= u1) {
    u1 = csz_idx_0;
  }
  csz_idx_0 = v2->size[0];
  if (u1 <= csz_idx_0) {
    csz_idx_0 = u1;
  }
  u1 = x->size[0] * x->size[1];
  x->size[0] = csz_idx_0;
  x->size[1] = 4;
  emxEnsureCapacity_real_T(x, u1);
  x_data = x->data;
  u1 = csz_idx_0 << 2;
  for (csz_idx_0 = 0; csz_idx_0 < u1; csz_idx_0++) {
    if ((v1_data[csz_idx_0] > 0.0) && (v2_data[csz_idx_0] > 0.0)) {
      if (rtIsInf(v1_data[csz_idx_0])) {
        if (rtIsInf(v2_data[csz_idx_0])) {
          x_data[csz_idx_0] = 1.0;
        } else {
          x_data[csz_idx_0] =
              v2_data[csz_idx_0] /
              chi2inv(1.0 - p_data[csz_idx_0], v2_data[csz_idx_0]);
        }
      } else if (rtIsInf(v2_data[csz_idx_0])) {
        x_data[csz_idx_0] =
            chi2inv(p_data[csz_idx_0], v1_data[csz_idx_0]) / v1_data[csz_idx_0];
      } else {
        dc = betainc(0.5, v1_data[csz_idx_0] / 2.0, v2_data[csz_idx_0] / 2.0);
        if (p_data[csz_idx_0] > dc.re) {
          dc = betaincinv(p_data[csz_idx_0], v2_data[csz_idx_0] / 2.0,
                          v1_data[csz_idx_0] / 2.0);
          t = (1.0 - dc.re) / dc.re;
        } else {
          dc = b_betaincinv(p_data[csz_idx_0], v1_data[csz_idx_0] / 2.0,
                            v2_data[csz_idx_0] / 2.0);
          t = dc.re / (1.0 - dc.re);
        }
        x_data[csz_idx_0] = t * v2_data[csz_idx_0] / v1_data[csz_idx_0];
      }
    } else {
      x_data[csz_idx_0] = rtNaN;
    }
  }
}

double finv(double p, double v2)
{
  creal_T dc;
  double t;
  double x;
  if ((v2 > 0.0) && (p >= 0.0)) {
    if (rtIsInf(v2)) {
      x = eml_gammaincinv(p, 1.0, 0.0, 0.0, 0.0) * 2.0 / 2.0;
    } else {
      if (p > (betainc(0.5, 1.0, v2 / 2.0)).re) {
        dc = betaincinv(p, v2 / 2.0, 1.0);
        t = (1.0 - dc.re) / dc.re;
      } else {
        dc = b_betaincinv(p, 1.0, v2 / 2.0);
        t = dc.re / (1.0 - dc.re);
      }
      x = t * v2 / 2.0;
    }
  } else {
    x = rtNaN;
  }
  return x;
}

/* End of code generation (finv.c) */
