/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * unique.c
 *
 * Code generation for function 'unique'
 *
 */

/* Include files */
#include "unique.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "sortIdx.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void unique_vector(const emxArray_real_T *a, emxArray_real_T *b)
{
  emxArray_int32_T *idx;
  const double *a_data;
  double absx;
  double x;
  double *b_data;
  int b_k;
  int exitg2;
  int exponent;
  int k;
  int nNaN;
  int na;
  int nb;
  int *idx_data;
  bool exitg1;
  a_data = a->data;
  emxInit_int32_T(&idx, 1);
  na = a->size[0];
  sortIdx(a, idx);
  idx_data = idx->data;
  nNaN = b->size[0];
  b->size[0] = a->size[0];
  emxEnsureCapacity_real_T(b, nNaN);
  b_data = b->data;
  for (k = 0; k < na; k++) {
    b_data[k] = a_data[idx_data[k] - 1];
  }
  emxFree_int32_T(&idx);
  k = a->size[0];
  while ((k >= 1) && rtIsNaN(b_data[k - 1])) {
    k--;
  }
  nNaN = a->size[0] - k;
  exitg1 = false;
  while ((!exitg1) && (k >= 1)) {
    absx = b_data[k - 1];
    if (rtIsInf(absx) && (absx > 0.0)) {
      k--;
    } else {
      exitg1 = true;
    }
  }
  na = (a->size[0] - k) - nNaN;
  nb = -1;
  b_k = 0;
  while (b_k + 1 <= k) {
    x = b_data[b_k];
    do {
      exitg2 = 0;
      b_k++;
      if (b_k + 1 > k) {
        exitg2 = 1;
      } else {
        absx = fabs(x / 2.0);
        if ((!rtIsInf(absx)) && (!rtIsNaN(absx))) {
          if (absx <= 2.2250738585072014E-308) {
            absx = 4.94065645841247E-324;
          } else {
            frexp(absx, &exponent);
            absx = ldexp(1.0, exponent - 53);
          }
        } else {
          absx = rtNaN;
        }
        if ((!(fabs(x - b_data[b_k]) < absx)) &&
            ((!rtIsInf(b_data[b_k])) || (!rtIsInf(x)) ||
             ((b_data[b_k] > 0.0) != (x > 0.0)))) {
          exitg2 = 1;
        }
      }
    } while (exitg2 == 0);
    nb++;
    b_data[nb] = x;
  }
  if (na > 0) {
    nb++;
    b_data[nb] = b_data[k];
  }
  b_k = k + na;
  for (na = 0; na < nNaN; na++) {
    b_data[(nb + na) + 1] = b_data[b_k + na];
  }
  nb += nNaN;
  nNaN = b->size[0];
  if (1 > nb + 1) {
    b->size[0] = 0;
  } else {
    b->size[0] = nb + 1;
  }
  emxEnsureCapacity_real_T(b, nNaN);
}

/* End of code generation (unique.c) */
