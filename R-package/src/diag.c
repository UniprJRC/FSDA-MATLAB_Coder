/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * diag.c
 *
 * Code generation for function 'diag'
 *
 */

/* Include files */
#include "diag.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void b_diag(const emxArray_creal_T *v, emxArray_creal_T *d)
{
  const creal_T *v_data;
  creal_T *d_data;
  int u0;
  int u1;
  v_data = v->data;
  if ((v->size[0] == 1) && (v->size[1] == 1)) {
    u1 = d->size[0];
    d->size[0] = 1;
    emxEnsureCapacity_creal_T(d, u1);
    d_data = d->data;
    d_data[0] = v_data[0];
  } else {
    u0 = v->size[0];
    u1 = v->size[1];
    if (u0 <= u1) {
      u1 = u0;
    }
    if (0 < v->size[1]) {
      u0 = u1;
    } else {
      u0 = 0;
    }
    u1 = d->size[0];
    d->size[0] = u0;
    emxEnsureCapacity_creal_T(d, u1);
    d_data = d->data;
    u1 = u0 - 1;
    for (u0 = 0; u0 <= u1; u0++) {
      d_data[u0] = v_data[u0 + v->size[0] * u0];
    }
  }
}

void c_diag(const emxArray_real_T *v, emxArray_real_T *d)
{
  const double *v_data;
  double *d_data;
  int i;
  int loop_ub;
  int nv;
  v_data = v->data;
  nv = v->size[0];
  i = d->size[0] * d->size[1];
  d->size[0] = v->size[0];
  d->size[1] = v->size[0];
  emxEnsureCapacity_real_T(d, i);
  d_data = d->data;
  loop_ub = v->size[0] * v->size[0];
  for (i = 0; i < loop_ub; i++) {
    d_data[i] = 0.0;
  }
  for (loop_ub = 0; loop_ub < nv; loop_ub++) {
    d_data[loop_ub + d->size[0] * loop_ub] = v_data[loop_ub];
  }
}

void diag(const emxArray_real_T *v, emxArray_real_T *d)
{
  const double *v_data;
  double *d_data;
  int u0;
  int u1;
  v_data = v->data;
  if ((v->size[0] == 1) && (v->size[1] == 1)) {
    u1 = d->size[0];
    d->size[0] = 1;
    emxEnsureCapacity_real_T(d, u1);
    d_data = d->data;
    d_data[0] = v_data[0];
  } else {
    u0 = v->size[0];
    u1 = v->size[1];
    if (u0 <= u1) {
      u1 = u0;
    }
    if (0 < v->size[1]) {
      u0 = u1;
    } else {
      u0 = 0;
    }
    u1 = d->size[0];
    d->size[0] = u0;
    emxEnsureCapacity_real_T(d, u1);
    d_data = d->data;
    u1 = u0 - 1;
    for (u0 = 0; u0 <= u1; u0++) {
      d_data[u0] = v_data[u0 + v->size[0] * u0];
    }
  }
}

/* End of code generation (diag.c) */
