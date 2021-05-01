/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tcdf.c
 *
 * Code generation for function 'tcdf'
 *
 */

/* Include files */
#include "tcdf.h"
#include "FSM_wrapper_emxutil.h"
#include "FSM_wrapper_types.h"
#include "betainc.h"
#include "eml_erfcore.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
void b_tcdf(const double x_data[], const int x_size[2], double v,
            double p_data[], int p_size[2])
{
  double xsq;
  int i;
  int k;
  p_size[0] = (signed char)x_size[0];
  p_size[1] = (signed char)x_size[1];
  i = (signed char)x_size[0] * (signed char)x_size[1];
  for (k = 0; k < i; k++) {
    if ((v > 0.0) && (!rtIsNaN(x_data[0]))) {
      if (x_data[0] == 0.0) {
        p_data[0] = 0.5;
      } else if (v > 1.0E+7) {
        xsq = eml_erfcore(-x_data[0] / 1.4142135623730951);
        p_data[0] = 0.5 * xsq;
      } else if (v == 1.0) {
        xsq = atan(1.0 / -x_data[0]) / 3.1415926535897931;
        p_data[0] = xsq;
        if (x_data[0] > 0.0) {
          xsq++;
          p_data[0] = xsq;
        }
      } else {
        xsq = x_data[0] * x_data[0];
        if (v < xsq) {
          xsq = (betainc(v / (v + xsq), v / 2.0, 0.5)).re / 2.0;
          p_data[0] = xsq;
        } else {
          xsq = (b_betainc(xsq / (v + xsq), 0.5, v / 2.0)).re / 2.0;
          p_data[0] = xsq;
        }
        if (x_data[0] > 0.0) {
          xsq = 1.0 - xsq;
          p_data[0] = xsq;
        }
      }
    } else {
      p_data[0] = rtNaN;
    }
  }
}

void tcdf(const emxArray_real_T *x, double v, emxArray_real_T *p)
{
  double xsq;
  int i;
  int k;
  i = p->size[0];
  p->size[0] = x->size[0];
  emxEnsureCapacity_real_T(p, i);
  i = x->size[0];
  for (k = 0; k < i; k++) {
    if ((v > 0.0) && (!rtIsNaN(x->data[k]))) {
      if (x->data[k] == 0.0) {
        p->data[k] = 0.5;
      } else if (v > 1.0E+7) {
        xsq = eml_erfcore(-x->data[k] / 1.4142135623730951);
        p->data[k] = 0.5 * xsq;
      } else if (v == 1.0) {
        p->data[k] = atan(1.0 / -x->data[k]) / 3.1415926535897931;
      } else {
        xsq = x->data[k] * x->data[k];
        if (v < xsq) {
          p->data[k] = (betainc(v / (v + xsq), v / 2.0, 0.5)).re / 2.0;
        } else {
          p->data[k] = (b_betainc(xsq / (v + xsq), 0.5, v / 2.0)).re / 2.0;
        }
      }
    } else {
      p->data[k] = rtNaN;
    }
  }
}

/* End of code generation (tcdf.c) */
