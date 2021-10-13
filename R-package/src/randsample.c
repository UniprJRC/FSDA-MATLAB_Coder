/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * randsample.c
 *
 * Code generation for function 'randsample'
 *
 */

/* Include files */
#include "randsample.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rand.h"
#include "randperm.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
double b_randsample(double varargin_1)
{
  emxArray_boolean_T *selected;
  emxArray_real_T *r;
  double rp_data[3];
  double b_r;
  double n;
  double y;
  double *r1;
  int i;
  int loop_ub_tmp;
  bool *selected_data;
  n = floor(varargin_1);
  if (4.0 > n) {
    emxInit_real_T(&r, 2);
    randperm(n, r);
    r1 = r->data;
    loop_ub_tmp = r->size[1];
    for (i = 0; i < loop_ub_tmp; i++) {
      rp_data[i] = r1[i];
    }
    emxFree_real_T(&r);
    y = rp_data[0];
  } else {
    emxInit_boolean_T(&selected, 2);
    i = selected->size[0] * selected->size[1];
    selected->size[0] = 1;
    loop_ub_tmp = (int)n;
    selected->size[1] = (int)n;
    emxEnsureCapacity_boolean_T(selected, i);
    selected_data = selected->data;
    for (i = 0; i < loop_ub_tmp; i++) {
      selected_data[i] = false;
    }
    do {
      b_r = c_rand();
      b_r = floor(b_r * n);
    } while (!!selected_data[(int)(b_r + 1.0) - 1]);
    emxFree_boolean_T(&selected);
    y = b_r + 1.0;
  }
  return y;
}

void randsample(double varargin_1, double varargin_2, emxArray_real_T *y)
{
  emxArray_boolean_T *selected;
  emxArray_real_T *rp;
  double n;
  double r;
  double x_tmp;
  double *rp_data;
  double *y_data;
  int j;
  int nsel;
  bool *selected_data;
  n = floor(varargin_1);
  x_tmp = floor(varargin_2);
  nsel = (int)floor(varargin_2);
  j = y->size[0];
  y->size[0] = (int)x_tmp;
  emxEnsureCapacity_real_T(y, j);
  y_data = y->data;
  if (((int)x_tmp << 2) > n) {
    emxInit_real_T(&rp, 2);
    randperm(n, rp);
    rp_data = rp->data;
    for (j = 0; j < nsel; j++) {
      y_data[j] = rp_data[j];
    }
    emxFree_real_T(&rp);
  } else {
    emxInit_boolean_T(&selected, 2);
    j = selected->size[0] * selected->size[1];
    selected->size[0] = 1;
    nsel = (int)n;
    selected->size[1] = (int)n;
    emxEnsureCapacity_boolean_T(selected, j);
    selected_data = selected->data;
    for (j = 0; j < nsel; j++) {
      selected_data[j] = false;
    }
    nsel = 0;
    while (nsel < (int)x_tmp) {
      r = c_rand();
      r = floor(r * n);
      if (!selected_data[(int)(r + 1.0) - 1]) {
        selected_data[(int)(r + 1.0) - 1] = true;
        nsel++;
        y_data[nsel - 1] = r + 1.0;
      }
    }
    emxFree_boolean_T(&selected);
  }
}

/* End of code generation (randsample.c) */
