/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * zscore.c
 *
 * Code generation for function 'zscore'
 *
 */

/* Include files */
#include "zscore.h"
#include "bsxfun.h"
#include "combineVectorElements.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "vvarstd.h"
#include <string.h>

/* Function Definitions */
void zscore(const emxArray_real_T *x, emxArray_real_T *z)
{
  emxArray_real_T *a;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *sigma;
  emxArray_real_T *xv;
  const double *x_data;
  double *sigma_data;
  double *xv_data;
  double *z_data;
  int acoef;
  int b_k;
  int bcoef;
  int csz_idx_1;
  int i;
  int k;
  int npages;
  int nx;
  int outsize_idx_0;
  x_data = x->data;
  emxInit_real_T(&sigma, 2);
  i = sigma->size[0] * sigma->size[1];
  sigma->size[0] = 1;
  sigma->size[1] = x->size[1];
  emxEnsureCapacity_real_T(sigma, i);
  sigma_data = sigma->data;
  nx = x->size[1];
  for (i = 0; i < nx; i++) {
    sigma_data[i] = 0.0;
  }
  nx = x->size[0];
  npages = x->size[1];
  if (0 <= x->size[1] - 1) {
    outsize_idx_0 = x->size[0];
    acoef = x->size[0];
  }
  emxInit_real_T(&xv, 1);
  for (bcoef = 0; bcoef < npages; bcoef++) {
    csz_idx_1 = bcoef * nx;
    i = xv->size[0];
    xv->size[0] = outsize_idx_0;
    emxEnsureCapacity_real_T(xv, i);
    xv_data = xv->data;
    for (i = 0; i < acoef; i++) {
      xv_data[i] = 0.0;
    }
    for (k = 0; k < nx; k++) {
      xv_data[k] = x_data[csz_idx_1 + k];
    }
    sigma_data[bcoef] = vvarstd(xv, x->size[0]);
  }
  emxFree_real_T(&xv);
  i = sigma->size[1];
  for (k = 0; k < i; k++) {
    if (sigma_data[k] == 0.0) {
      sigma_data[k] = 1.0;
    }
  }
  emxInit_real_T(&r, 2);
  emxInit_real_T(&r1, 2);
  combineVectorElements(x, r);
  xv_data = r->data;
  i = r1->size[0] * r1->size[1];
  r1->size[0] = 1;
  r1->size[1] = r->size[1];
  emxEnsureCapacity_real_T(r1, i);
  z_data = r1->data;
  nx = r->size[1];
  for (i = 0; i < nx; i++) {
    z_data[i] = xv_data[i] / (double)x->size[0];
  }
  emxFree_real_T(&r);
  emxInit_real_T(&a, 2);
  bsxfun(x, r1, a);
  xv_data = a->data;
  nx = sigma->size[1];
  npages = a->size[1];
  if (nx <= npages) {
    npages = nx;
  }
  if (sigma->size[1] == 1) {
    csz_idx_1 = a->size[1];
  } else if (a->size[1] == 1) {
    csz_idx_1 = sigma->size[1];
  } else if (a->size[1] == sigma->size[1]) {
    csz_idx_1 = a->size[1];
  } else {
    csz_idx_1 = npages;
  }
  i = z->size[0] * z->size[1];
  z->size[0] = a->size[0];
  nx = sigma->size[1];
  npages = a->size[1];
  if (nx <= npages) {
    npages = nx;
  }
  if (sigma->size[1] == 1) {
    z->size[1] = a->size[1];
  } else if (a->size[1] == 1) {
    z->size[1] = sigma->size[1];
  } else if (a->size[1] == sigma->size[1]) {
    z->size[1] = a->size[1];
  } else {
    z->size[1] = npages;
  }
  emxEnsureCapacity_real_T(z, i);
  z_data = z->data;
  emxFree_real_T(&r1);
  if ((a->size[0] != 0) && (csz_idx_1 != 0)) {
    acoef = (a->size[1] != 1);
    bcoef = (sigma->size[1] != 1);
    i = csz_idx_1 - 1;
    for (k = 0; k <= i; k++) {
      csz_idx_1 = acoef * k;
      nx = bcoef * k;
      npages = (a->size[0] != 1);
      outsize_idx_0 = z->size[0] - 1;
      for (b_k = 0; b_k <= outsize_idx_0; b_k++) {
        z_data[b_k + z->size[0] * k] =
            xv_data[npages * b_k + a->size[0] * csz_idx_1] / sigma_data[nx];
      }
    }
  }
  emxFree_real_T(&a);
  emxFree_real_T(&sigma);
}

/* End of code generation (zscore.c) */
