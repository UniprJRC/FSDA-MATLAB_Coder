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
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

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

void c_bsxfun(const emxArray_real_T *a, const emxArray_real_T *b,
              emxArray_real_T *c)
{
  int acoef;
  int b_bcoef;
  int b_k;
  int bcoef;
  int i;
  int i1;
  int k;
  int u1;
  i = c->size[0] * c->size[1];
  bcoef = b->size[0];
  u1 = a->size[0];
  if (bcoef < u1) {
    u1 = bcoef;
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
  c->size[1] = b->size[1];
  emxEnsureCapacity_real_T(c, i);
  bcoef = b->size[0];
  u1 = a->size[0];
  if (bcoef < u1) {
    u1 = bcoef;
  }
  if (b->size[0] == 1) {
    u1 = a->size[0];
  } else if (a->size[0] == 1) {
    u1 = b->size[0];
  } else if (a->size[0] == b->size[0]) {
    u1 = a->size[0];
  }
  if ((u1 != 0) && (b->size[1] != 0)) {
    bcoef = (b->size[1] != 1);
    i = b->size[1] - 1;
    for (k = 0; k <= i; k++) {
      u1 = bcoef * k;
      acoef = (a->size[0] != 1);
      b_bcoef = (b->size[0] != 1);
      i1 = c->size[0] - 1;
      for (b_k = 0; b_k <= i1; b_k++) {
        c->data[b_k + c->size[0] * k] =
            a->data[acoef * b_k] * b->data[b_bcoef * b_k + b->size[0] * u1];
      }
    }
  }
}

void d_bsxfun(const emxArray_real_T *a, const emxArray_real_T *b,
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
            a->data[csz_idx_1 * b_k + a->size[0] * u0] / b->data[u1];
      }
    }
  }
}

void e_bsxfun(const emxArray_real_T *a, const emxArray_real_T *b,
              emxArray_boolean_T *c)
{
  int acoef;
  int b_k;
  int bcoef;
  int i;
  int i1;
  int k;
  int varargin_3;
  i = c->size[0] * c->size[1];
  c->size[0] = a->size[0];
  c->size[1] = b->size[1];
  emxEnsureCapacity_boolean_T(c, i);
  if ((a->size[0] != 0) && (b->size[1] != 0)) {
    bcoef = (b->size[1] != 1);
    i = b->size[1] - 1;
    for (k = 0; k <= i; k++) {
      varargin_3 = bcoef * k;
      acoef = (a->size[0] != 1);
      i1 = c->size[0] - 1;
      for (b_k = 0; b_k <= i1; b_k++) {
        c->data[b_k + c->size[0] * k] =
            (a->data[acoef * b_k] < b->data[varargin_3]);
      }
    }
  }
}

void f_bsxfun(const emxArray_real_T *a, const emxArray_real_T *b,
              emxArray_boolean_T *c)
{
  int acoef;
  int b_k;
  int bcoef;
  int i;
  int i1;
  int k;
  int varargin_3;
  i = c->size[0] * c->size[1];
  c->size[0] = a->size[0];
  c->size[1] = b->size[1];
  emxEnsureCapacity_boolean_T(c, i);
  if ((a->size[0] != 0) && (b->size[1] != 0)) {
    bcoef = (b->size[1] != 1);
    i = b->size[1] - 1;
    for (k = 0; k <= i; k++) {
      varargin_3 = bcoef * k;
      acoef = (a->size[0] != 1);
      i1 = c->size[0] - 1;
      for (b_k = 0; b_k <= i1; b_k++) {
        c->data[b_k + c->size[0] * k] =
            (a->data[acoef * b_k] > b->data[varargin_3]);
      }
    }
  }
}

void g_bsxfun(const emxArray_boolean_T *a, const emxArray_real_T *b,
              emxArray_real_T *c)
{
  int acoef;
  int b_acoef;
  int b_k;
  int bcoef;
  int i;
  int i1;
  int k;
  int u1;
  i = c->size[0] * c->size[1];
  acoef = b->size[0];
  u1 = a->size[0];
  if (acoef < u1) {
    u1 = acoef;
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
  c->size[1] = a->size[1];
  emxEnsureCapacity_real_T(c, i);
  acoef = b->size[0];
  u1 = a->size[0];
  if (acoef < u1) {
    u1 = acoef;
  }
  if (b->size[0] == 1) {
    u1 = a->size[0];
  } else if (a->size[0] == 1) {
    u1 = b->size[0];
  } else if (a->size[0] == b->size[0]) {
    u1 = a->size[0];
  }
  if ((u1 != 0) && (a->size[1] != 0)) {
    acoef = (a->size[1] != 1);
    i = a->size[1] - 1;
    for (k = 0; k <= i; k++) {
      u1 = acoef * k;
      b_acoef = (a->size[0] != 1);
      bcoef = (b->size[0] != 1);
      i1 = c->size[0] - 1;
      for (b_k = 0; b_k <= i1; b_k++) {
        c->data[b_k + c->size[0] * k] =
            (double)a->data[b_acoef * b_k + a->size[0] * u1] *
            b->data[bcoef * b_k];
      }
    }
  }
}

void h_bsxfun(const emxArray_boolean_T *a, const emxArray_real_T *b,
              emxArray_real_T *c)
{
  int acoef;
  int b_k;
  int bcoef;
  int csz_idx_1;
  int i;
  int k;
  int u0;
  u0 = b->size[1];
  acoef = a->size[1];
  if (u0 < acoef) {
    acoef = u0;
  }
  if (b->size[1] == 1) {
    csz_idx_1 = a->size[1];
  } else if (a->size[1] == b->size[1]) {
    csz_idx_1 = a->size[1];
  } else {
    csz_idx_1 = acoef;
  }
  i = c->size[0] * c->size[1];
  c->size[0] = a->size[0];
  u0 = b->size[1];
  acoef = a->size[1];
  if (u0 < acoef) {
    acoef = u0;
  }
  if (b->size[1] == 1) {
    c->size[1] = a->size[1];
  } else if (a->size[1] == b->size[1]) {
    c->size[1] = a->size[1];
  } else {
    c->size[1] = acoef;
  }
  emxEnsureCapacity_real_T(c, i);
  if ((a->size[0] != 0) && (csz_idx_1 != 0)) {
    bcoef = (b->size[1] != 1);
    i = csz_idx_1 - 1;
    for (k = 0; k <= i; k++) {
      u0 = bcoef * k;
      acoef = (a->size[0] != 1);
      csz_idx_1 = c->size[0] - 1;
      for (b_k = 0; b_k <= csz_idx_1; b_k++) {
        c->data[b_k + c->size[0] * k] =
            (double)a->data[acoef * b_k + a->size[0] * k] * b->data[u0];
      }
    }
  }
}

void i_bsxfun(const emxArray_real_T *a, const emxArray_real_T *b,
              emxArray_boolean_T *c)
{
  int acoef;
  int b_k;
  int bcoef;
  int i;
  int i1;
  int k;
  int varargin_3;
  i = c->size[0] * c->size[1];
  c->size[0] = a->size[0];
  c->size[1] = b->size[1];
  emxEnsureCapacity_boolean_T(c, i);
  if ((a->size[0] != 0) && (b->size[1] != 0)) {
    bcoef = (b->size[1] != 1);
    i = b->size[1] - 1;
    for (k = 0; k <= i; k++) {
      varargin_3 = bcoef * k;
      acoef = (a->size[0] != 1);
      i1 = c->size[0] - 1;
      for (b_k = 0; b_k <= i1; b_k++) {
        c->data[b_k + c->size[0] * k] =
            (a->data[acoef * b_k] >= b->data[varargin_3]);
      }
    }
  }
}

void j_bsxfun(const emxArray_real_T *a, const emxArray_real_T *b,
              emxArray_boolean_T *c)
{
  int acoef;
  int b_k;
  int bcoef;
  int i;
  int i1;
  int k;
  int varargin_3;
  i = c->size[0] * c->size[1];
  c->size[0] = a->size[0];
  c->size[1] = b->size[1];
  emxEnsureCapacity_boolean_T(c, i);
  if ((a->size[0] != 0) && (b->size[1] != 0)) {
    bcoef = (b->size[1] != 1);
    i = b->size[1] - 1;
    for (k = 0; k <= i; k++) {
      varargin_3 = bcoef * k;
      acoef = (a->size[0] != 1);
      i1 = c->size[0] - 1;
      for (b_k = 0; b_k <= i1; b_k++) {
        c->data[b_k + c->size[0] * k] =
            (a->data[acoef * b_k] <= b->data[varargin_3]);
      }
    }
  }
}

void k_bsxfun(const emxArray_boolean_T *a, const emxArray_real_T *b,
              emxArray_real_T *c)
{
  int acoef;
  int b_k;
  int bcoef;
  int i;
  int i1;
  int k;
  i = c->size[0] * c->size[1] * c->size[2];
  c->size[0] = 1;
  acoef = b->size[1];
  bcoef = a->size[1];
  if (acoef < bcoef) {
    bcoef = acoef;
  }
  if (b->size[1] == 1) {
    c->size[1] = a->size[1];
  } else if (a->size[1] == 1) {
    c->size[1] = b->size[1];
  } else if (a->size[1] == b->size[1]) {
    c->size[1] = a->size[1];
  } else {
    c->size[1] = bcoef;
  }
  c->size[2] = a->size[2];
  emxEnsureCapacity_real_T(c, i);
  acoef = b->size[1];
  bcoef = a->size[1];
  if (acoef < bcoef) {
    bcoef = acoef;
  }
  if (b->size[1] == 1) {
    bcoef = a->size[1];
  } else if (a->size[1] == 1) {
    bcoef = b->size[1];
  } else if (a->size[1] == b->size[1]) {
    bcoef = a->size[1];
  }
  if (bcoef != 0) {
    i = a->size[2] - 1;
    for (k = 0; k <= i; k++) {
      acoef = (a->size[1] != 1);
      bcoef = (b->size[1] != 1);
      i1 = c->size[1] - 1;
      for (b_k = 0; b_k <= i1; b_k++) {
        c->data[b_k + c->size[1] * k] =
            (double)a->data[acoef * b_k + a->size[1] * k] *
            b->data[bcoef * b_k];
      }
    }
  }
}

void l_bsxfun(const emxArray_boolean_T *a, const emxArray_real_T *b,
              emxArray_real_T *c)
{
  int acoef;
  int b_k;
  int bcoef;
  int i;
  int i1;
  int k;
  i = c->size[0] * c->size[1] * c->size[2];
  acoef = b->size[0];
  bcoef = a->size[0];
  if (acoef < bcoef) {
    bcoef = acoef;
  }
  if (b->size[0] == 1) {
    c->size[0] = a->size[0];
  } else if (a->size[0] == 1) {
    c->size[0] = b->size[0];
  } else if (a->size[0] == b->size[0]) {
    c->size[0] = a->size[0];
  } else {
    c->size[0] = bcoef;
  }
  c->size[1] = 1;
  c->size[2] = a->size[2];
  emxEnsureCapacity_real_T(c, i);
  acoef = b->size[0];
  bcoef = a->size[0];
  if (acoef < bcoef) {
    bcoef = acoef;
  }
  if (b->size[0] == 1) {
    bcoef = a->size[0];
  } else if (a->size[0] == 1) {
    bcoef = b->size[0];
  } else if (a->size[0] == b->size[0]) {
    bcoef = a->size[0];
  }
  if (bcoef != 0) {
    i = a->size[2] - 1;
    for (k = 0; k <= i; k++) {
      acoef = (a->size[0] != 1);
      bcoef = (b->size[0] != 1);
      i1 = c->size[0] - 1;
      for (b_k = 0; b_k <= i1; b_k++) {
        c->data[b_k + c->size[0] * k] =
            (double)a->data[acoef * b_k + a->size[0] * k] *
            b->data[bcoef * b_k];
      }
    }
  }
}

void m_bsxfun(const emxArray_real_T *a, const emxArray_real_T *b,
              emxArray_real_T *c)
{
  int acoef;
  int b_k;
  int bcoef;
  int i;
  int i1;
  int k;
  i = c->size[0] * c->size[1] * c->size[2];
  c->size[0] = 1;
  acoef = b->size[1];
  bcoef = a->size[1];
  if (acoef < bcoef) {
    bcoef = acoef;
  }
  if (b->size[1] == 1) {
    c->size[1] = a->size[1];
  } else if (a->size[1] == 1) {
    c->size[1] = b->size[1];
  } else if (a->size[1] == b->size[1]) {
    c->size[1] = a->size[1];
  } else {
    c->size[1] = bcoef;
  }
  c->size[2] = b->size[2];
  emxEnsureCapacity_real_T(c, i);
  acoef = b->size[1];
  bcoef = a->size[1];
  if (acoef < bcoef) {
    bcoef = acoef;
  }
  if (b->size[1] == 1) {
    bcoef = a->size[1];
  } else if (a->size[1] == 1) {
    bcoef = b->size[1];
  } else if (a->size[1] == b->size[1]) {
    bcoef = a->size[1];
  }
  if (bcoef != 0) {
    i = b->size[2] - 1;
    for (k = 0; k <= i; k++) {
      acoef = (a->size[1] != 1);
      bcoef = (b->size[1] != 1);
      i1 = c->size[1] - 1;
      for (b_k = 0; b_k <= i1; b_k++) {
        c->data[b_k + c->size[1] * k] =
            a->data[acoef * b_k] * b->data[bcoef * b_k + b->size[1] * k];
      }
    }
  }
}

void n_bsxfun(const emxArray_real_T *a, const emxArray_real_T *b,
              emxArray_real_T *c)
{
  int acoef;
  int b_k;
  int bcoef;
  int i;
  int i1;
  int k;
  i = c->size[0] * c->size[1];
  acoef = b->size[0];
  bcoef = a->size[0];
  if (acoef < bcoef) {
    bcoef = acoef;
  }
  if (b->size[0] == 1) {
    c->size[0] = a->size[0];
  } else if (a->size[0] == 1) {
    c->size[0] = b->size[0];
  } else if (a->size[0] == b->size[0]) {
    c->size[0] = a->size[0];
  } else {
    c->size[0] = bcoef;
  }
  c->size[1] = a->size[1];
  emxEnsureCapacity_real_T(c, i);
  acoef = b->size[0];
  bcoef = a->size[0];
  if (acoef < bcoef) {
    bcoef = acoef;
  }
  if (b->size[0] == 1) {
    bcoef = a->size[0];
  } else if (a->size[0] == 1) {
    bcoef = b->size[0];
  } else if (a->size[0] == b->size[0]) {
    bcoef = a->size[0];
  }
  if (bcoef != 0) {
    i = a->size[1] - 1;
    for (k = 0; k <= i; k++) {
      acoef = (a->size[0] != 1);
      bcoef = (b->size[0] != 1);
      i1 = c->size[0] - 1;
      for (b_k = 0; b_k <= i1; b_k++) {
        c->data[b_k + c->size[0] * k] =
            a->data[acoef * b_k + a->size[0] * k] * b->data[bcoef * b_k];
      }
    }
  }
}

void o_bsxfun(const emxArray_real_T *a, const emxArray_real_T *b,
              emxArray_real_T *c)
{
  int acoef;
  int b_k;
  int bcoef;
  int i;
  int i1;
  int k;
  i = c->size[0] * c->size[1] * c->size[2];
  acoef = b->size[0];
  bcoef = a->size[0];
  if (acoef < bcoef) {
    bcoef = acoef;
  }
  if (b->size[0] == 1) {
    c->size[0] = a->size[0];
  } else if (a->size[0] == 1) {
    c->size[0] = b->size[0];
  } else if (a->size[0] == b->size[0]) {
    c->size[0] = a->size[0];
  } else {
    c->size[0] = bcoef;
  }
  c->size[1] = 1;
  c->size[2] = b->size[2];
  emxEnsureCapacity_real_T(c, i);
  acoef = b->size[0];
  bcoef = a->size[0];
  if (acoef < bcoef) {
    bcoef = acoef;
  }
  if (b->size[0] == 1) {
    bcoef = a->size[0];
  } else if (a->size[0] == 1) {
    bcoef = b->size[0];
  } else if (a->size[0] == b->size[0]) {
    bcoef = a->size[0];
  }
  if (bcoef != 0) {
    i = b->size[2] - 1;
    for (k = 0; k <= i; k++) {
      acoef = (a->size[0] != 1);
      bcoef = (b->size[0] != 1);
      i1 = c->size[0] - 1;
      for (b_k = 0; b_k <= i1; b_k++) {
        c->data[b_k + c->size[0] * k] =
            a->data[acoef * b_k] * b->data[bcoef * b_k + b->size[0] * k];
      }
    }
  }
}

/* End of code generation (bsxfun.c) */
