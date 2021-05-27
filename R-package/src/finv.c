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
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void b_finv(const emxArray_real_T *p, const emxArray_real_T *v1,
            const emxArray_real_T *v2, emxArray_real_T *x)
{
  creal_T dc;
  double t;
  int csz_idx_0;
  int csz_idx_1;
  int i;
  if (p->size[0] <= v1->size[0]) {
    csz_idx_0 = p->size[0];
  } else {
    csz_idx_0 = v1->size[0];
  }
  if (p->size[1] <= v1->size[1]) {
    csz_idx_1 = p->size[1];
  } else {
    csz_idx_1 = v1->size[1];
  }
  if (csz_idx_0 > v2->size[0]) {
    csz_idx_0 = v2->size[0];
  }
  if (csz_idx_1 > v2->size[1]) {
    csz_idx_1 = v2->size[1];
  }
  i = x->size[0] * x->size[1];
  x->size[0] = csz_idx_0;
  x->size[1] = csz_idx_1;
  emxEnsureCapacity_real_T(x, i);
  i = csz_idx_0 * csz_idx_1;
  for (csz_idx_0 = 0; csz_idx_0 < i; csz_idx_0++) {
    if ((v1->data[csz_idx_0] > 0.0) && (v2->data[csz_idx_0] > 0.0)) {
      if (rtIsInf(v1->data[csz_idx_0])) {
        if (rtIsInf(v2->data[csz_idx_0])) {
          x->data[csz_idx_0] = 1.0;
        } else {
          x->data[csz_idx_0] =
              v2->data[csz_idx_0] /
              chi2inv(1.0 - p->data[csz_idx_0], v2->data[csz_idx_0]);
        }
      } else if (rtIsInf(v2->data[csz_idx_0])) {
        x->data[csz_idx_0] = chi2inv(p->data[csz_idx_0], v1->data[csz_idx_0]) /
                             v1->data[csz_idx_0];
      } else {
        dc = betainc(0.5, v1->data[csz_idx_0] / 2.0, v2->data[csz_idx_0] / 2.0);
        if (p->data[csz_idx_0] > dc.re) {
          dc = betaincinv(p->data[csz_idx_0], v2->data[csz_idx_0] / 2.0,
                          v1->data[csz_idx_0] / 2.0);
          t = (1.0 - dc.re) / dc.re;
        } else {
          dc = b_betaincinv(p->data[csz_idx_0], v1->data[csz_idx_0] / 2.0,
                            v2->data[csz_idx_0] / 2.0);
          t = dc.re / (1.0 - dc.re);
        }
        x->data[csz_idx_0] = t * v2->data[csz_idx_0] / v1->data[csz_idx_0];
      }
    } else {
      x->data[csz_idx_0] = rtNaN;
    }
  }
}

void finv(const emxArray_real_T *p, double v1, const emxArray_real_T *v2,
          emxArray_real_T *x)
{
  creal_T dc;
  double t;
  int csz_idx_0;
  int csz_idx_1;
  int i;
  if (p->size[0] <= v2->size[0]) {
    csz_idx_0 = p->size[0];
  } else {
    csz_idx_0 = v2->size[0];
  }
  if (p->size[1] <= v2->size[1]) {
    csz_idx_1 = p->size[1];
  } else {
    csz_idx_1 = v2->size[1];
  }
  i = x->size[0] * x->size[1];
  x->size[0] = csz_idx_0;
  x->size[1] = csz_idx_1;
  emxEnsureCapacity_real_T(x, i);
  i = csz_idx_0 * csz_idx_1;
  for (csz_idx_0 = 0; csz_idx_0 < i; csz_idx_0++) {
    if ((v1 > 0.0) && (v2->data[csz_idx_0] > 0.0) &&
        (p->data[csz_idx_0] >= 0.0) && (p->data[csz_idx_0] <= 1.0)) {
      if (rtIsInf(v1)) {
        if (rtIsInf(v2->data[csz_idx_0])) {
          if (p->data[csz_idx_0] > 0.0) {
            x->data[csz_idx_0] = 1.0;
          } else {
            x->data[csz_idx_0] = 0.0;
          }
        } else {
          x->data[csz_idx_0] =
              v2->data[csz_idx_0] /
              chi2inv(1.0 - p->data[csz_idx_0], v2->data[csz_idx_0]);
        }
      } else if (rtIsInf(v2->data[csz_idx_0])) {
        x->data[csz_idx_0] = chi2inv(p->data[csz_idx_0], v1) / v1;
      } else {
        dc = betainc(0.5, v1 / 2.0, v2->data[csz_idx_0] / 2.0);
        if (p->data[csz_idx_0] > dc.re) {
          dc = betaincinv(p->data[csz_idx_0], v2->data[csz_idx_0] / 2.0,
                          v1 / 2.0);
          t = (1.0 - dc.re) / dc.re;
        } else {
          dc = b_betaincinv(p->data[csz_idx_0], v1 / 2.0,
                            v2->data[csz_idx_0] / 2.0);
          t = dc.re / (1.0 - dc.re);
        }
        x->data[csz_idx_0] = t * v2->data[csz_idx_0] / v1;
      }
    } else {
      x->data[csz_idx_0] = rtNaN;
    }
  }
}

/* End of code generation (finv.c) */
