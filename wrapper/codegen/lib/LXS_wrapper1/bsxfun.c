/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * bsxfun.c
 *
 * Code generation for function 'bsxfun'
 *
 */

/* Include files */
#include "bsxfun.h"
#include "LXS_wrapper1_emxutil.h"
#include "LXS_wrapper1_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void b_bsxfun(const emxArray_real_T *a, const emxArray_real_T *b,
              emxArray_real_T *c)
{
  int acoef;
  int b_bcoef;
  int b_k;
  int bcoef;
  int csz_idx_1;
  int i;
  int i1;
  int k;
  int u0;
  int u1;
  u0 = b->size[1];
  u1 = a->size[1];
  if (u0 < u1) {
    u1 = u0;
  }
  if (b->size[1] == 1) {
    csz_idx_1 = a->size[1];
  } else if (a->size[1] == 1) {
    csz_idx_1 = b->size[1];
  } else if (a->size[1] == b->size[1]) {
    csz_idx_1 = a->size[1];
  } else {
    csz_idx_1 = u1;
  }
  i = c->size[0] * c->size[1];
  u0 = b->size[0];
  u1 = a->size[0];
  if (u0 < u1) {
    u1 = u0;
  }
  if (b->size[0] == 1) {
    c->size[0] = a->size[0];
  } else if (a->size[0] == 1) {
    c->size[0] = b->size[0];
  } else if (a->size[0] == b->size[0]) {
    c->size[0] = a->size[0];
  } else {
    c->size[0] = u1;
  }
  u0 = b->size[1];
  u1 = a->size[1];
  if (u0 < u1) {
    u1 = u0;
  }
  if (b->size[1] == 1) {
    c->size[1] = a->size[1];
  } else if (a->size[1] == 1) {
    c->size[1] = b->size[1];
  } else if (a->size[1] == b->size[1]) {
    c->size[1] = a->size[1];
  } else {
    c->size[1] = u1;
  }
  emxEnsureCapacity_real_T(c, i);
  u0 = b->size[0];
  u1 = a->size[0];
  if (u0 < u1) {
    u1 = u0;
  }
  if (b->size[0] == 1) {
    u1 = a->size[0];
  } else if (a->size[0] == 1) {
    u1 = b->size[0];
  } else if (a->size[0] == b->size[0]) {
    u1 = a->size[0];
  }
  if ((u1 != 0) && (csz_idx_1 != 0)) {
    acoef = (a->size[1] != 1);
    bcoef = (b->size[1] != 1);
    i = csz_idx_1 - 1;
    for (k = 0; k <= i; k++) {
      u0 = acoef * k;
      u1 = bcoef * k;
      csz_idx_1 = (a->size[0] != 1);
      b_bcoef = (b->size[0] != 1);
      i1 = c->size[0] - 1;
      for (b_k = 0; b_k <= i1; b_k++) {
        c->data[b_k + c->size[0] * k] =
            a->data[csz_idx_1 * b_k + a->size[0] * u0] *
            b->data[b_bcoef * b_k + b->size[0] * u1];
      }
    }
  }
}

void bsxfun(const emxArray_real_T *a, const emxArray_real_T *b,
            emxArray_real_T *c)
{
  int acoef;
  int b_k;
  int bcoef;
  int csz_idx_1;
  int i;
  int i1;
  int k;
  int u0;
  int u1;
  u0 = b->size[1];
  u1 = a->size[1];
  if (u0 < u1) {
    u1 = u0;
  }
  if (b->size[1] == 1) {
    csz_idx_1 = a->size[1];
  } else if (a->size[1] == 1) {
    csz_idx_1 = b->size[1];
  } else if (a->size[1] == b->size[1]) {
    csz_idx_1 = a->size[1];
  } else {
    csz_idx_1 = u1;
  }
  i = c->size[0] * c->size[1];
  c->size[0] = a->size[0];
  u0 = b->size[1];
  u1 = a->size[1];
  if (u0 < u1) {
    u1 = u0;
  }
  if (b->size[1] == 1) {
    c->size[1] = a->size[1];
  } else if (a->size[1] == 1) {
    c->size[1] = b->size[1];
  } else if (a->size[1] == b->size[1]) {
    c->size[1] = a->size[1];
  } else {
    c->size[1] = u1;
  }
  emxEnsureCapacity_real_T(c, i);
  if ((a->size[0] != 0) && (csz_idx_1 != 0)) {
    acoef = (a->size[1] != 1);
    bcoef = (b->size[1] != 1);
    i = csz_idx_1 - 1;
    for (k = 0; k <= i; k++) {
      u0 = acoef * k;
      u1 = bcoef * k;
      csz_idx_1 = (a->size[0] != 1);
      i1 = c->size[0] - 1;
      for (b_k = 0; b_k <= i1; b_k++) {
        c->data[b_k + c->size[0] * k] =
            a->data[csz_idx_1 * b_k + a->size[0] * u0] - b->data[u1];
      }
    }
  }
}

/* End of code generation (bsxfun.c) */
