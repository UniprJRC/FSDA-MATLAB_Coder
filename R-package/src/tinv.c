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
#include "betaincinv.h"
#include "erfcinv.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void b_tinv(const emxArray_real_T *p, const emxArray_real_T *v,
            emxArray_real_T *x)
{
  creal_T dc;
  const double *p_data;
  const double *v_data;
  double xn3;
  double xn5;
  double xn7;
  double *x_data;
  int csz_idx_0;
  int csz_idx_1;
  int u0;
  v_data = v->data;
  p_data = p->data;
  u0 = p->size[0];
  csz_idx_0 = v->size[0];
  if (u0 <= csz_idx_0) {
    csz_idx_0 = u0;
  }
  u0 = p->size[1];
  csz_idx_1 = v->size[1];
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
    if ((v_data[csz_idx_0] > 0.0) && (0.0 <= p_data[csz_idx_0]) &&
        (p_data[csz_idx_0] <= 1.0)) {
      if (p_data[csz_idx_0] == 0.0) {
        x_data[csz_idx_0] = rtMinusInf;
      } else if (p_data[csz_idx_0] == 1.0) {
        x_data[csz_idx_0] = rtInf;
      } else if (v_data[csz_idx_0] == 1.0) {
        x_data[csz_idx_0] = tan(3.1415926535897931 * (p_data[csz_idx_0] - 0.5));
      } else if (v_data[csz_idx_0] < 1000.0) {
        xn3 = fabs(p_data[csz_idx_0] - 0.5);
        if (xn3 < 0.25) {
          dc = b_betaincinv(2.0 * xn3, 0.5, v_data[csz_idx_0] / 2.0);
          xn7 = dc.re;
          dc = b_betaincinv(2.0 * xn3, 0.5, v_data[csz_idx_0] / 2.0);
          xn5 = 1.0 - dc.re;
        } else {
          dc = betaincinv(2.0 * xn3, v_data[csz_idx_0] / 2.0, 0.5);
          xn5 = dc.re;
          dc = betaincinv(2.0 * xn3, v_data[csz_idx_0] / 2.0, 0.5);
          xn7 = 1.0 - dc.re;
        }
        xn3 = p_data[csz_idx_0] - 0.5;
        if (p_data[csz_idx_0] - 0.5 < 0.0) {
          xn3 = -1.0;
        } else if (p_data[csz_idx_0] - 0.5 > 0.0) {
          xn3 = 1.0;
        } else if (p_data[csz_idx_0] - 0.5 == 0.0) {
          xn3 = 0.0;
        }
        x_data[csz_idx_0] = xn3 * sqrt(v_data[csz_idx_0] * (xn7 / xn5));
      } else {
        if ((p_data[csz_idx_0] >= 0.0) && (p_data[csz_idx_0] <= 1.0)) {
          x_data[csz_idx_0] =
              -1.4142135623730951 * erfcinv(2.0 * p_data[csz_idx_0]);
        } else {
          x_data[csz_idx_0] = rtNaN;
        }
        if (v_data[csz_idx_0] < 6.6457388829771584E+75) {
          xn3 = rt_powd_snf(x_data[csz_idx_0], 3.0);
          xn5 = rt_powd_snf(x_data[csz_idx_0], 5.0);
          xn7 = rt_powd_snf(x_data[csz_idx_0], 7.0);
          x_data[csz_idx_0] =
              (((x_data[csz_idx_0] +
                 (xn3 + x_data[csz_idx_0]) / (4.0 * v_data[csz_idx_0])) +
                ((5.0 * xn5 + 16.0 * xn3) + 3.0 * x_data[csz_idx_0]) /
                    (96.0 * (v_data[csz_idx_0] * v_data[csz_idx_0]))) +
               (((3.0 * xn7 + 19.0 * xn5) + 17.0 * xn3) -
                15.0 * x_data[csz_idx_0]) /
                   (384.0 * rt_powd_snf(v_data[csz_idx_0], 3.0))) +
              ((((79.0 * rt_powd_snf(x_data[csz_idx_0], 9.0) + 776.0 * xn7) +
                 1482.0 * xn5) -
                1920.0 * xn3) -
               945.0 * x_data[csz_idx_0]) /
                  (92160.0 * rt_powd_snf(v_data[csz_idx_0], 4.0));
        }
      }
    } else {
      x_data[csz_idx_0] = rtNaN;
    }
  }
}

void c_tinv(const emxArray_real_T *p, const emxArray_real_T *v,
            emxArray_real_T *x)
{
  creal_T dc;
  const double *p_data;
  const double *v_data;
  double xn3;
  double xn5;
  double xn7;
  double *x_data;
  int csz_idx_0;
  int u0;
  v_data = v->data;
  p_data = p->data;
  u0 = p->size[0];
  csz_idx_0 = v->size[0];
  if (u0 <= csz_idx_0) {
    csz_idx_0 = u0;
  }
  u0 = x->size[0] * x->size[1];
  x->size[0] = csz_idx_0;
  x->size[1] = 4;
  emxEnsureCapacity_real_T(x, u0);
  x_data = x->data;
  u0 = csz_idx_0 << 2;
  for (csz_idx_0 = 0; csz_idx_0 < u0; csz_idx_0++) {
    if ((v_data[csz_idx_0] > 0.0) && (0.0 <= p_data[csz_idx_0]) &&
        (p_data[csz_idx_0] <= 1.0)) {
      if (p_data[csz_idx_0] == 0.0) {
        x_data[csz_idx_0] = rtMinusInf;
      } else if (p_data[csz_idx_0] == 1.0) {
        x_data[csz_idx_0] = rtInf;
      } else if (v_data[csz_idx_0] == 1.0) {
        x_data[csz_idx_0] = tan(3.1415926535897931 * (p_data[csz_idx_0] - 0.5));
      } else if (v_data[csz_idx_0] < 1000.0) {
        xn3 = fabs(p_data[csz_idx_0] - 0.5);
        if (xn3 < 0.25) {
          dc = b_betaincinv(2.0 * xn3, 0.5, v_data[csz_idx_0] / 2.0);
          xn7 = dc.re;
          dc = b_betaincinv(2.0 * xn3, 0.5, v_data[csz_idx_0] / 2.0);
          xn5 = 1.0 - dc.re;
        } else {
          dc = betaincinv(2.0 * xn3, v_data[csz_idx_0] / 2.0, 0.5);
          xn5 = dc.re;
          dc = betaincinv(2.0 * xn3, v_data[csz_idx_0] / 2.0, 0.5);
          xn7 = 1.0 - dc.re;
        }
        xn3 = p_data[csz_idx_0] - 0.5;
        if (p_data[csz_idx_0] - 0.5 < 0.0) {
          xn3 = -1.0;
        } else if (p_data[csz_idx_0] - 0.5 > 0.0) {
          xn3 = 1.0;
        } else if (p_data[csz_idx_0] - 0.5 == 0.0) {
          xn3 = 0.0;
        }
        x_data[csz_idx_0] = xn3 * sqrt(v_data[csz_idx_0] * (xn7 / xn5));
      } else {
        if ((p_data[csz_idx_0] >= 0.0) && (p_data[csz_idx_0] <= 1.0)) {
          x_data[csz_idx_0] =
              -1.4142135623730951 * erfcinv(2.0 * p_data[csz_idx_0]);
        } else {
          x_data[csz_idx_0] = rtNaN;
        }
        if (v_data[csz_idx_0] < 6.6457388829771584E+75) {
          xn3 = rt_powd_snf(x_data[csz_idx_0], 3.0);
          xn5 = rt_powd_snf(x_data[csz_idx_0], 5.0);
          xn7 = rt_powd_snf(x_data[csz_idx_0], 7.0);
          x_data[csz_idx_0] =
              (((x_data[csz_idx_0] +
                 (xn3 + x_data[csz_idx_0]) / (4.0 * v_data[csz_idx_0])) +
                ((5.0 * xn5 + 16.0 * xn3) + 3.0 * x_data[csz_idx_0]) /
                    (96.0 * (v_data[csz_idx_0] * v_data[csz_idx_0]))) +
               (((3.0 * xn7 + 19.0 * xn5) + 17.0 * xn3) -
                15.0 * x_data[csz_idx_0]) /
                   (384.0 * rt_powd_snf(v_data[csz_idx_0], 3.0))) +
              ((((79.0 * rt_powd_snf(x_data[csz_idx_0], 9.0) + 776.0 * xn7) +
                 1482.0 * xn5) -
                1920.0 * xn3) -
               945.0 * x_data[csz_idx_0]) /
                  (92160.0 * rt_powd_snf(v_data[csz_idx_0], 4.0));
        }
      }
    } else {
      x_data[csz_idx_0] = rtNaN;
    }
  }
}

double tinv(double p, double v)
{
  creal_T dc;
  double x;
  double xn3;
  double xn5;
  double xn7;
  if ((v > 0.0) && (0.0 <= p) && (p <= 1.0)) {
    if (p == 0.0) {
      x = rtMinusInf;
    } else if (p == 1.0) {
      x = rtInf;
    } else if (v == 1.0) {
      x = tan(3.1415926535897931 * (p - 0.5));
    } else if (v < 1000.0) {
      xn3 = fabs(p - 0.5);
      if (xn3 < 0.25) {
        dc = b_betaincinv(2.0 * xn3, 0.5, v / 2.0);
        xn5 = dc.re;
        xn3 = 1.0 - dc.re;
      } else {
        dc = betaincinv(2.0 * xn3, v / 2.0, 0.5);
        xn3 = dc.re;
        xn5 = 1.0 - dc.re;
      }
      x = p - 0.5;
      if (p - 0.5 < 0.0) {
        x = -1.0;
      } else if (p - 0.5 > 0.0) {
        x = 1.0;
      } else if (p - 0.5 == 0.0) {
        x = 0.0;
      }
      x *= sqrt(v * (xn5 / xn3));
    } else {
      x = -1.4142135623730951 * erfcinv(2.0 * p);
      if (v < 6.6457388829771584E+75) {
        xn3 = rt_powd_snf(x, 3.0);
        xn5 = rt_powd_snf(x, 5.0);
        xn7 = rt_powd_snf(x, 7.0);
        x = (((x + (xn3 + x) / (4.0 * v)) +
              ((5.0 * xn5 + 16.0 * xn3) + 3.0 * x) / (96.0 * (v * v))) +
             (((3.0 * xn7 + 19.0 * xn5) + 17.0 * xn3) - 15.0 * x) /
                 (384.0 * rt_powd_snf(v, 3.0))) +
            ((((79.0 * rt_powd_snf(x, 9.0) + 776.0 * xn7) + 1482.0 * xn5) -
              1920.0 * xn3) -
             945.0 * x) /
                (92160.0 * rt_powd_snf(v, 4.0));
      }
    }
  } else {
    x = rtNaN;
  }
  return x;
}

/* End of code generation (tinv.c) */
