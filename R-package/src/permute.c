/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * permute.c
 *
 * Code generation for function 'permute'
 *
 */

/* Include files */
#include "permute.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void b_permute(const emxArray_real_T *a, emxArray_real_T *b)
{
  static const signed char b_iv[3] = {1, 3, 2};
  const double *a_data;
  double *b_data;
  int b_k;
  int i;
  int k;
  int plast;
  int subsa_idx_2;
  bool b_b;
  bool exitg1;
  a_data = a->data;
  b_b = true;
  if (a->size[1] != 0) {
    plast = 0;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 3)) {
      if (a->size[b_iv[k] - 1] != 1) {
        if (plast > b_iv[k]) {
          b_b = false;
          exitg1 = true;
        } else {
          plast = b_iv[k];
          k++;
        }
      } else {
        k++;
      }
    }
  }
  if (b_b) {
    i = b->size[0] * b->size[1] * b->size[2];
    b->size[0] = 1;
    b->size[1] = a->size[2];
    b->size[2] = a->size[1];
    emxEnsureCapacity_real_T(b, i);
    b_data = b->data;
    plast = a->size[1] * a->size[2];
    for (i = 0; i < plast; i++) {
      b_data[i] = a_data[i];
    }
  } else {
    i = b->size[0] * b->size[1] * b->size[2];
    b->size[0] = 1;
    b->size[1] = a->size[2];
    b->size[2] = a->size[1];
    emxEnsureCapacity_real_T(b, i);
    b_data = b->data;
    i = a->size[2];
    for (k = 0; k < i; k++) {
      plast = a->size[1];
      if (0 <= a->size[1] - 1) {
        subsa_idx_2 = k + 1;
      }
      for (b_k = 0; b_k < plast; b_k++) {
        b_data[(subsa_idx_2 + b->size[1] * b_k) - 1] =
            a_data[b_k + a->size[1] * (subsa_idx_2 - 1)];
      }
    }
  }
}

void c_permute(const emxArray_real_T *a, emxArray_real_T *b)
{
  static const signed char b_iv[3] = {1, 3, 2};
  const double *a_data;
  double *b_data;
  int b_k;
  int i;
  int k;
  int plast;
  int subsa_idx_2;
  bool b_b;
  bool exitg1;
  a_data = a->data;
  b_b = true;
  if (a->size[0] != 0) {
    plast = 0;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 3)) {
      if (a->size[b_iv[k] - 1] != 1) {
        if (plast > b_iv[k]) {
          b_b = false;
          exitg1 = true;
        } else {
          plast = b_iv[k];
          k++;
        }
      } else {
        k++;
      }
    }
  }
  if (b_b) {
    i = b->size[0] * b->size[1];
    b->size[0] = a->size[0];
    b->size[1] = a->size[2];
    emxEnsureCapacity_real_T(b, i);
    b_data = b->data;
    plast = a->size[0] * a->size[2];
    for (i = 0; i < plast; i++) {
      b_data[i] = a_data[i];
    }
  } else {
    i = b->size[0] * b->size[1];
    b->size[0] = a->size[0];
    b->size[1] = a->size[2];
    emxEnsureCapacity_real_T(b, i);
    b_data = b->data;
    i = a->size[2];
    for (k = 0; k < i; k++) {
      plast = a->size[0];
      if (0 <= a->size[0] - 1) {
        subsa_idx_2 = k + 1;
      }
      for (b_k = 0; b_k < plast; b_k++) {
        b_data[b_k + b->size[0] * (subsa_idx_2 - 1)] =
            a_data[b_k + a->size[0] * (subsa_idx_2 - 1)];
      }
    }
  }
}

void permute(const emxArray_real_T *a, emxArray_real_T *b)
{
  static const signed char b_iv[3] = {1, 3, 2};
  const double *a_data;
  double *b_data;
  int b_k;
  int c_k;
  int i;
  int i1;
  int k;
  int plast;
  int subsa_idx_1;
  int subsa_idx_2;
  bool b_b;
  bool exitg1;
  a_data = a->data;
  b_b = true;
  if ((a->size[0] != 0) && (a->size[1] != 0)) {
    plast = 0;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 3)) {
      if (a->size[b_iv[k] - 1] != 1) {
        if (plast > b_iv[k]) {
          b_b = false;
          exitg1 = true;
        } else {
          plast = b_iv[k];
          k++;
        }
      } else {
        k++;
      }
    }
  }
  if (b_b) {
    i = b->size[0] * b->size[1] * b->size[2];
    b->size[0] = a->size[0];
    b->size[1] = a->size[2];
    b->size[2] = a->size[1];
    emxEnsureCapacity_real_T(b, i);
    b_data = b->data;
    plast = a->size[0] * a->size[2] * a->size[1];
    for (i = 0; i < plast; i++) {
      b_data[i] = a_data[i];
    }
  } else {
    i = b->size[0] * b->size[1] * b->size[2];
    b->size[0] = a->size[0];
    b->size[1] = a->size[2];
    b->size[2] = a->size[1];
    emxEnsureCapacity_real_T(b, i);
    b_data = b->data;
    i = a->size[2];
    for (k = 0; k < i; k++) {
      plast = a->size[1];
      for (b_k = 0; b_k < plast; b_k++) {
        i1 = a->size[0];
        if (0 <= a->size[0] - 1) {
          subsa_idx_1 = b_k + 1;
          subsa_idx_2 = k + 1;
        }
        for (c_k = 0; c_k < i1; c_k++) {
          b_data[(c_k + b->size[0] * (subsa_idx_2 - 1)) +
                 b->size[0] * b->size[1] * (subsa_idx_1 - 1)] =
              a_data[(c_k + a->size[0] * (subsa_idx_1 - 1)) +
                     a->size[0] * a->size[1] * (subsa_idx_2 - 1)];
        }
      }
    }
  }
}

/* End of code generation (permute.c) */
