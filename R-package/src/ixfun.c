/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ixfun.c
 *
 * Code generation for function 'ixfun'
 *
 */

/* Include files */
#include "ixfun.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void expand_bitand(const emxArray_boolean_T *a, const emxArray_boolean_T *b,
                   emxArray_boolean_T *c)
{
  int acoef;
  int bcoef;
  int csz_idx_0;
  int i;
  const bool *a_data;
  const bool *b_data;
  bool *c_data;
  b_data = b->data;
  a_data = a->data;
  acoef = a->size[0];
  bcoef = b->size[0];
  if (acoef <= bcoef) {
    bcoef = acoef;
  }
  if (b->size[0] == 1) {
    csz_idx_0 = a->size[0];
  } else if (a->size[0] == 1) {
    csz_idx_0 = b->size[0];
  } else {
    csz_idx_0 = bcoef;
  }
  i = c->size[0];
  acoef = a->size[0];
  bcoef = b->size[0];
  if (acoef <= bcoef) {
    bcoef = acoef;
  }
  if (b->size[0] == 1) {
    c->size[0] = a->size[0];
  } else if (a->size[0] == 1) {
    c->size[0] = b->size[0];
  } else {
    c->size[0] = bcoef;
  }
  emxEnsureCapacity_boolean_T(c, i);
  c_data = c->data;
  if (csz_idx_0 != 0) {
    acoef = (a->size[0] != 1);
    bcoef = (b->size[0] != 1);
    i = csz_idx_0 - 1;
    for (csz_idx_0 = 0; csz_idx_0 <= i; csz_idx_0++) {
      c_data[csz_idx_0] =
          (a_data[acoef * csz_idx_0] && b_data[bcoef * csz_idx_0]);
    }
  }
}

void expand_bitxor(const emxArray_boolean_T *a, const emxArray_boolean_T *b,
                   emxArray_boolean_T *c)
{
  int acoef;
  int bcoef;
  int csz_idx_0;
  int i;
  const bool *a_data;
  const bool *b_data;
  bool *c_data;
  b_data = b->data;
  a_data = a->data;
  acoef = a->size[0];
  bcoef = b->size[0];
  if (acoef <= bcoef) {
    bcoef = acoef;
  }
  if (b->size[0] == 1) {
    csz_idx_0 = a->size[0];
  } else if (a->size[0] == 1) {
    csz_idx_0 = b->size[0];
  } else {
    csz_idx_0 = bcoef;
  }
  i = c->size[0];
  acoef = a->size[0];
  bcoef = b->size[0];
  if (acoef <= bcoef) {
    bcoef = acoef;
  }
  if (b->size[0] == 1) {
    c->size[0] = a->size[0];
  } else if (a->size[0] == 1) {
    c->size[0] = b->size[0];
  } else {
    c->size[0] = bcoef;
  }
  emxEnsureCapacity_boolean_T(c, i);
  c_data = c->data;
  if (csz_idx_0 != 0) {
    acoef = (a->size[0] != 1);
    bcoef = (b->size[0] != 1);
    i = csz_idx_0 - 1;
    for (csz_idx_0 = 0; csz_idx_0 <= i; csz_idx_0++) {
      c_data[csz_idx_0] = a_data[acoef * csz_idx_0] ^ b_data[bcoef * csz_idx_0];
    }
  }
}

/* End of code generation (ixfun.c) */
