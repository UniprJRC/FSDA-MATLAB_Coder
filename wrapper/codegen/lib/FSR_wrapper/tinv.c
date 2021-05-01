/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tinv.c
 *
 * Code generation for function 'tinv'
 *
 */

/* Include files */
#include "tinv.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_rtwutil.h"
#include "FSR_wrapper_types.h"
#include "betaincinv.h"
#include "erfcinv.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
void tinv(const emxArray_real_T *p, const emxArray_real_T *v,
          emxArray_real_T *x)
{
  creal_T dc;
  double xn3;
  double xn5;
  double xn7;
  int csz_idx_0;
  int csz_idx_1;
  int i;
  if (p->size[0] <= v->size[0]) {
    csz_idx_0 = p->size[0];
  } else {
    csz_idx_0 = v->size[0];
  }
  if (p->size[1] <= v->size[1]) {
    csz_idx_1 = p->size[1];
  } else {
    csz_idx_1 = v->size[1];
  }
  i = x->size[0] * x->size[1];
  x->size[0] = csz_idx_0;
  x->size[1] = csz_idx_1;
  emxEnsureCapacity_real_T(x, i);
  i = csz_idx_0 * csz_idx_1;
  for (csz_idx_0 = 0; csz_idx_0 < i; csz_idx_0++) {
    if ((v->data[csz_idx_0] > 0.0) && (0.0 <= p->data[csz_idx_0]) &&
        (p->data[csz_idx_0] <= 1.0)) {
      if (p->data[csz_idx_0] == 0.0) {
        x->data[csz_idx_0] = rtMinusInf;
      } else if (p->data[csz_idx_0] == 1.0) {
        x->data[csz_idx_0] = rtInf;
      } else if (v->data[csz_idx_0] == 1.0) {
        x->data[csz_idx_0] =
            tan(3.1415926535897931 * (p->data[csz_idx_0] - 0.5));
      } else if (v->data[csz_idx_0] < 1000.0) {
        xn3 = fabs(p->data[csz_idx_0] - 0.5);
        if (xn3 < 0.25) {
          dc = b_betaincinv(2.0 * xn3, 0.5, v->data[csz_idx_0] / 2.0);
          xn7 = dc.re;
          dc = b_betaincinv(2.0 * xn3, 0.5, v->data[csz_idx_0] / 2.0);
          xn5 = 1.0 - dc.re;
        } else {
          dc = betaincinv(2.0 * xn3, v->data[csz_idx_0] / 2.0, 0.5);
          xn5 = dc.re;
          dc = betaincinv(2.0 * xn3, v->data[csz_idx_0] / 2.0, 0.5);
          xn7 = 1.0 - dc.re;
        }
        xn3 = p->data[csz_idx_0] - 0.5;
        if (p->data[csz_idx_0] - 0.5 < 0.0) {
          xn3 = -1.0;
        } else if (p->data[csz_idx_0] - 0.5 > 0.0) {
          xn3 = 1.0;
        } else if (p->data[csz_idx_0] - 0.5 == 0.0) {
          xn3 = 0.0;
        }
        x->data[csz_idx_0] = xn3 * sqrt(v->data[csz_idx_0] * (xn7 / xn5));
      } else {
        if ((p->data[csz_idx_0] >= 0.0) && (p->data[csz_idx_0] <= 1.0)) {
          x->data[csz_idx_0] =
              -1.4142135623730951 * erfcinv(2.0 * p->data[csz_idx_0]);
        } else {
          x->data[csz_idx_0] = rtNaN;
        }
        if (v->data[csz_idx_0] < 6.6457388829771584E+75) {
          xn3 = rt_powd_snf(x->data[csz_idx_0], 3.0);
          xn5 = rt_powd_snf(x->data[csz_idx_0], 5.0);
          xn7 = rt_powd_snf(x->data[csz_idx_0], 7.0);
          x->data[csz_idx_0] =
              (((x->data[csz_idx_0] +
                 (xn3 + x->data[csz_idx_0]) / (4.0 * v->data[csz_idx_0])) +
                ((5.0 * xn5 + 16.0 * xn3) + 3.0 * x->data[csz_idx_0]) /
                    (96.0 * (v->data[csz_idx_0] * v->data[csz_idx_0]))) +
               (((3.0 * xn7 + 19.0 * xn5) + 17.0 * xn3) -
                15.0 * x->data[csz_idx_0]) /
                   (384.0 * rt_powd_snf(v->data[csz_idx_0], 3.0))) +
              ((((79.0 * rt_powd_snf(x->data[csz_idx_0], 9.0) + 776.0 * xn7) +
                 1482.0 * xn5) -
                1920.0 * xn3) -
               945.0 * x->data[csz_idx_0]) /
                  (92160.0 * rt_powd_snf(v->data[csz_idx_0], 4.0));
        }
      }
    } else {
      x->data[csz_idx_0] = rtNaN;
    }
  }
}

/* End of code generation (tinv.c) */
