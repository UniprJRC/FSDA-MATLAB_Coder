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
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *sigma;
  emxArray_real_T *xv;
  int i;
  int k;
  int loop_ub;
  int npages;
  int nx;
  int outsize_idx_0;
  int p;
  int workspace_ixfirst;
  emxInit_real_T(&sigma, 2);
  i = sigma->size[0] * sigma->size[1];
  sigma->size[0] = 1;
  sigma->size[1] = x->size[1];
  emxEnsureCapacity_real_T(sigma, i);
  nx = x->size[1];
  for (i = 0; i < nx; i++) {
    sigma->data[i] = 0.0;
  }
  nx = x->size[0];
  npages = x->size[1];
  if (0 <= x->size[1] - 1) {
    outsize_idx_0 = x->size[0];
    loop_ub = x->size[0];
  }
  emxInit_real_T(&xv, 1);
  for (p = 0; p < npages; p++) {
    workspace_ixfirst = p * nx;
    i = xv->size[0];
    xv->size[0] = outsize_idx_0;
    emxEnsureCapacity_real_T(xv, i);
    for (i = 0; i < loop_ub; i++) {
      xv->data[i] = 0.0;
    }
    for (k = 0; k < nx; k++) {
      xv->data[k] = x->data[workspace_ixfirst + k];
    }
    sigma->data[p] = vvarstd(xv, x->size[0]);
  }
  emxFree_real_T(&xv);
  i = sigma->size[1];
  for (k = 0; k < i; k++) {
    if (sigma->data[k] == 0.0) {
      sigma->data[k] = 1.0;
    }
  }
  emxInit_real_T(&r, 2);
  emxInit_real_T(&r1, 2);
  combineVectorElements(x, r);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = 1;
  r1->size[1] = r->size[1];
  emxEnsureCapacity_real_T(r1, i);
  nx = r->size[1];
  for (i = 0; i < nx; i++) {
    r1->data[i] = r->data[i] / (double)x->size[0];
  }
  emxFree_real_T(&r);
  emxInit_real_T(&r2, 2);
  bsxfun(x, r1, r2);
  d_bsxfun(r2, sigma, z);
  emxFree_real_T(&r2);
  emxFree_real_T(&r1);
  emxFree_real_T(&sigma);
}

/* End of code generation (zscore.c) */
