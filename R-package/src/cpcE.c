/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cpcE.c
 *
 * Code generation for function 'cpcE'
 *
 */

/* Include files */
#include "cpcE.h"
#include "blockedSummation.h"
#include "eig.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void cpcE(const emxArray_real_T *lmdc, const emxArray_real_T *SigmaB,
          const emxArray_real_T *niini, double pa_k, double pa_v,
          emxArray_real_T *Omega)
{
  emxArray_creal_T *V;
  emxArray_creal_T *eigunsorted;
  emxArray_int32_T *iidx;
  emxArray_real_T *Sigma;
  emxArray_real_T *d;
  emxArray_real_T *y;
  creal_T *V_data;
  creal_T *eigunsorted_data;
  const double *SigmaB_data;
  const double *lmdc_data;
  const double *niini_data;
  double a;
  double sumnini;
  double *Omega_data;
  double *Sigma_data;
  double *y_data;
  int i;
  int i1;
  int i2;
  int j;
  int loop_ub;
  int nx;
  int *iidx_data;
  niini_data = niini->data;
  SigmaB_data = SigmaB->data;
  lmdc_data = lmdc->data;
  emxInit_real_T(&Sigma, 2);
  /* cpcE computes updated common rotation matrix when shapes are equal */
  /*  */
  /*   This routine is called when the parametrization is VEE that is when */
  /*   equal shape and equal rotation are imposed and we have varying */
  /*   determinants. */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*      lmdc  : row vector of length $k$ containing restricted determinants.
   * More */
  /*              precisely, the $j$-th element of lmdc contains
   * $\lambda_j^{1/p}$. */
  /*              The elements of lmdc satisfy the constraint pa.cdet in the
   * sense that */
  /*              $\max(lmdc)/\min(lmdc) \leq pa.cdet^{(1/p)}. In other words,
   * the */
  /*              ratio between the largest and the smallest determinant is not
   */
  /*              greater than pa.cdet. All the elements of vector lmdc are
   * equal */
  /*              if modeltype is E** or if pa.cdet=1; */
  /*    SigmaB : p-by-p-by-k array containing the k covariance matrices for the
   */
  /*            k groups. */
  /*    niini  : vector of length k containing the size of the groups. */
  /*      pa : structure containing: 3 letter character specifying modeltype, */
  /*             number of dimensions, number of groups... */
  /*             The fields of pars which are used in this routine are pa.p, */
  /*             and pa.k a */
  /*  */
  /*  Output: */
  /*  */
  /*     Omega : p-by-p-k 3D array containing the updated common rotation */
  /*                matrix replicated k times. Omega(:,:,j)=Omega2D with j=1, */
  /*                ..., k */
  /*    Omega2D : p-by-p matrix containing the updated common rotation matrix.
   */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Beginning of code */
  sumnini = blockedSummation(niini, niini->size[0]);
  /*  Inefficient way of obtaining Sigma */
  /*  Sigma_ = NaN(p,p,k); */
  /*  Omega=Sigma_; */
  /*  for j=1:k */
  /*      Sigma_(:,:,j) = (1/lmdc(j)) * (niini(j) /sumnini)  * SigmaB(:,:,j); */
  /*  end */
  /*  Sigma = sum(Sigma_,3); */
  i = Omega->size[0] * Omega->size[1] * Omega->size[2];
  Omega->size[0] = (int)pa_v;
  Omega->size[1] = (int)pa_v;
  i1 = (int)pa_k;
  Omega->size[2] = (int)pa_k;
  emxEnsureCapacity_real_T(Omega, i);
  Omega_data = Omega->data;
  /*  Sigma is OMG*GAM*OMG' pooled */
  i = Sigma->size[0] * Sigma->size[1];
  Sigma->size[0] = (int)pa_v;
  Sigma->size[1] = (int)pa_v;
  emxEnsureCapacity_real_T(Sigma, i);
  Sigma_data = Sigma->data;
  loop_ub = (int)pa_v * (int)pa_v;
  for (i = 0; i < loop_ub; i++) {
    Sigma_data[i] = 0.0;
  }
  for (j = 0; j < i1; j++) {
    a = 1.0 / lmdc_data[j] * (niini_data[j] / sumnini);
    loop_ub = Sigma->size[1];
    if ((Sigma->size[0] == SigmaB->size[0]) &&
        (Sigma->size[1] == SigmaB->size[1])) {
      for (i = 0; i < loop_ub; i++) {
        nx = Sigma->size[0];
        for (i2 = 0; i2 < nx; i2++) {
          Sigma_data[i2 + Sigma->size[0] * i] +=
              a * SigmaB_data[(i2 + SigmaB->size[0] * i) +
                              SigmaB->size[0] * SigmaB->size[1] * j];
        }
      }
    } else {
      if_binary_expand_op(Sigma, a, SigmaB, j);
      Sigma_data = Sigma->data;
    }
  }
  emxInit_creal_T(&V, 2);
  emxInit_creal_T(&eigunsorted, 2);
  b_eig(Sigma, V, eigunsorted);
  eigunsorted_data = eigunsorted->data;
  V_data = V->data;
  i = Sigma->size[0] * Sigma->size[1];
  Sigma->size[0] = eigunsorted->size[0];
  Sigma->size[1] = eigunsorted->size[1];
  emxEnsureCapacity_real_T(Sigma, i);
  Sigma_data = Sigma->data;
  loop_ub = eigunsorted->size[0] * eigunsorted->size[1];
  for (i = 0; i < loop_ub; i++) {
    Sigma_data[i] = eigunsorted_data[i].re;
  }
  emxFree_creal_T(&eigunsorted);
  emxInit_real_T(&y, 2);
  nx = Sigma->size[0] * Sigma->size[1];
  i = y->size[0] * y->size[1];
  y->size[0] = Sigma->size[0];
  y->size[1] = Sigma->size[1];
  emxEnsureCapacity_real_T(y, i);
  y_data = y->data;
  for (loop_ub = 0; loop_ub < nx; loop_ub++) {
    y_data[loop_ub] = fabs(Sigma_data[loop_ub]);
  }
  emxInit_real_T(&d, 1);
  if ((y->size[0] == 1) && (y->size[1] == 1)) {
    i = d->size[0];
    d->size[0] = 1;
    emxEnsureCapacity_real_T(d, i);
    Sigma_data = d->data;
    Sigma_data[0] = y_data[0];
  } else {
    nx = y->size[0];
    loop_ub = y->size[1];
    if (nx <= loop_ub) {
      loop_ub = nx;
    }
    if (0 < y->size[1]) {
      nx = loop_ub;
    } else {
      nx = 0;
    }
    i = d->size[0];
    d->size[0] = nx;
    emxEnsureCapacity_real_T(d, i);
    Sigma_data = d->data;
    i = nx - 1;
    for (loop_ub = 0; loop_ub <= i; loop_ub++) {
      Sigma_data[loop_ub] = y_data[loop_ub + y->size[0] * loop_ub];
    }
  }
  emxFree_real_T(&y);
  emxInit_int32_T(&iidx, 1);
  g_sort(d, iidx);
  iidx_data = iidx->data;
  /*  First column of V is first eigenvector associated to largest */
  /*  eigenvalue .... */
  loop_ub = V->size[0];
  i = Sigma->size[0] * Sigma->size[1];
  Sigma->size[0] = V->size[0];
  Sigma->size[1] = iidx->size[0];
  emxEnsureCapacity_real_T(Sigma, i);
  Sigma_data = Sigma->data;
  nx = iidx->size[0];
  emxFree_real_T(&d);
  for (i = 0; i < nx; i++) {
    for (i2 = 0; i2 < loop_ub; i2++) {
      Sigma_data[i2 + Sigma->size[0] * i] =
          V_data[i2 + V->size[0] * (iidx_data[i] - 1)].re;
    }
  }
  emxFree_int32_T(&iidx);
  emxFree_creal_T(&V);
  /*  old instruction to remove */
  /*  V=fliplr(V); */
  /*  diagSigma=diag(Sigma); */
  /*  Create updated Omega */
  for (j = 0; j < i1; j++) {
    loop_ub = Sigma->size[1];
    for (i = 0; i < loop_ub; i++) {
      nx = Sigma->size[0];
      for (i2 = 0; i2 < nx; i2++) {
        Omega_data[(i2 + Omega->size[0] * i) +
                   Omega->size[0] * Omega->size[1] * j] =
            Sigma_data[i2 + Sigma->size[0] * i];
      }
    }
  }
  emxFree_real_T(&Sigma);
}

void if_binary_expand_op(emxArray_real_T *Sigma, double a,
                         const emxArray_real_T *SigmaB, int j)
{
  emxArray_real_T *b_Sigma;
  const double *SigmaB_data;
  double *Sigma_data;
  double *b_Sigma_data;
  int aux_0_1;
  int aux_1_1;
  int b_loop_ub;
  int i;
  int i1;
  int i2;
  int loop_ub;
  int stride_0_0;
  int stride_0_1;
  int stride_1_0;
  int stride_1_1;
  SigmaB_data = SigmaB->data;
  Sigma_data = Sigma->data;
  emxInit_real_T(&b_Sigma, 2);
  i = SigmaB->size[0];
  i1 = SigmaB->size[1];
  i2 = b_Sigma->size[0] * b_Sigma->size[1];
  if (i == 1) {
    b_Sigma->size[0] = Sigma->size[0];
  } else {
    b_Sigma->size[0] = i;
  }
  if (i1 == 1) {
    b_Sigma->size[1] = Sigma->size[1];
  } else {
    b_Sigma->size[1] = i1;
  }
  emxEnsureCapacity_real_T(b_Sigma, i2);
  b_Sigma_data = b_Sigma->data;
  stride_0_0 = (Sigma->size[0] != 1);
  stride_0_1 = (Sigma->size[1] != 1);
  stride_1_0 = (i != 1);
  stride_1_1 = (i1 != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (i1 == 1) {
    loop_ub = Sigma->size[1];
  } else {
    loop_ub = i1;
  }
  for (i1 = 0; i1 < loop_ub; i1++) {
    if (i == 1) {
      b_loop_ub = Sigma->size[0];
    } else {
      b_loop_ub = i;
    }
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      b_Sigma_data[i2 + b_Sigma->size[0] * i1] =
          Sigma_data[i2 * stride_0_0 + Sigma->size[0] * aux_0_1] +
          a * SigmaB_data[(i2 * stride_1_0 + SigmaB->size[0] * aux_1_1) +
                          SigmaB->size[0] * SigmaB->size[1] * j];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = Sigma->size[0] * Sigma->size[1];
  Sigma->size[0] = b_Sigma->size[0];
  Sigma->size[1] = b_Sigma->size[1];
  emxEnsureCapacity_real_T(Sigma, i);
  Sigma_data = Sigma->data;
  loop_ub = b_Sigma->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_Sigma->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      Sigma_data[i1 + Sigma->size[0] * i] =
          b_Sigma_data[i1 + b_Sigma->size[0] * i];
    }
  }
  emxFree_real_T(&b_Sigma);
}

/* End of code generation (cpcE.c) */
