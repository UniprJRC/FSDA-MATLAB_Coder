/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cpcV.c
 *
 * Code generation for function 'cpcV'
 *
 */

/* Include files */
#include "cpcV.h"
#include "combineVectorElements.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "sum.h"
#include "svd.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Declarations */
static void hf_binary_expand_op(emxArray_real_T *F, const emxArray_real_T *U,
                                const emxArray_real_T *V1);

/* Function Definitions */
static void hf_binary_expand_op(emxArray_real_T *F, const emxArray_real_T *U,
                                const emxArray_real_T *V1)
{
  emxArray_real_T *b_F;
  const double *U_data;
  const double *V1_data;
  double *F_data;
  double *b_F_data;
  int aux_0_1;
  int aux_1_1;
  int aux_2_1;
  int b_loop_ub;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_0_1;
  int stride_1_0;
  int stride_1_1;
  int stride_2_0;
  int stride_2_1;
  V1_data = V1->data;
  U_data = U->data;
  F_data = F->data;
  emxInit_real_T(&b_F, 2);
  i = b_F->size[0] * b_F->size[1];
  if (V1->size[0] == 1) {
    if (U->size[0] == 1) {
      b_F->size[0] = F->size[0];
    } else {
      b_F->size[0] = U->size[0];
    }
  } else {
    b_F->size[0] = V1->size[0];
  }
  if (V1->size[1] == 1) {
    if (U->size[1] == 1) {
      b_F->size[1] = F->size[1];
    } else {
      b_F->size[1] = U->size[1];
    }
  } else {
    b_F->size[1] = V1->size[1];
  }
  emxEnsureCapacity_real_T(b_F, i);
  b_F_data = b_F->data;
  stride_0_0 = (F->size[0] != 1);
  stride_0_1 = (F->size[1] != 1);
  stride_1_0 = (U->size[0] != 1);
  stride_1_1 = (U->size[1] != 1);
  stride_2_0 = (V1->size[0] != 1);
  stride_2_1 = (V1->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  aux_2_1 = 0;
  if (V1->size[1] == 1) {
    if (U->size[1] == 1) {
      loop_ub = F->size[1];
    } else {
      loop_ub = U->size[1];
    }
  } else {
    loop_ub = V1->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (V1->size[0] == 1) {
      if (U->size[0] == 1) {
        b_loop_ub = F->size[0];
      } else {
        b_loop_ub = U->size[0];
      }
    } else {
      b_loop_ub = V1->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_F_data[i1 + b_F->size[0] * i] =
          (F_data[i1 * stride_0_0 + F->size[0] * aux_0_1] +
           U_data[i1 * stride_1_0 + U->size[0] * aux_1_1]) -
          V1_data[i1 * stride_2_0 + V1->size[0] * aux_2_1];
    }
    aux_2_1 += stride_2_1;
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = F->size[0] * F->size[1];
  F->size[0] = b_F->size[0];
  F->size[1] = b_F->size[1];
  emxEnsureCapacity_real_T(F, i);
  F_data = F->data;
  loop_ub = b_F->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_F->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      F_data[i1 + F->size[0] * i] = b_F_data[i1 + b_F->size[0] * i];
    }
  }
  emxFree_real_T(&b_F);
}

void cpcV(const emxArray_real_T *lmdc, const emxArray_real_T *GAMc,
          const emxArray_real_T *Omega2D, const emxArray_real_T *Wk,
          const emxArray_real_T *wk, double pa_k, double pa_maxiterR,
          double pa_tolR, double pa_v, emxArray_real_T *Omega)
{
  emxArray_real_T *GAMjinv;
  emxArray_real_T *Omega2Dold;
  emxArray_real_T *U;
  emxArray_real_T *V1;
  emxArray_real_T *a;
  emxArray_real_T *b_F;
  emxArray_real_T *b_Omega2D;
  emxArray_real_T *r;
  emxArray_real_T *z;
  const double *GAMc_data;
  const double *Omega2D_data;
  const double *Wk_data;
  const double *lmdc_data;
  const double *wk_data;
  double b_a;
  double c_a;
  double diffOMG;
  double iter;
  double *F_data;
  double *Omega2Dold_data;
  double *Omega_data;
  double *U_data;
  double *b_Omega2D_data;
  int F;
  int i;
  int i1;
  int j;
  int loop_ub;
  int nv;
  bool p;
  wk_data = wk->data;
  Wk_data = Wk->data;
  Omega2D_data = Omega2D->data;
  GAMc_data = GAMc->data;
  lmdc_data = lmdc->data;
  emxInit_real_T(&b_Omega2D, 2);
  F = b_Omega2D->size[0] * b_Omega2D->size[1];
  b_Omega2D->size[0] = Omega2D->size[0];
  b_Omega2D->size[1] = Omega2D->size[1];
  emxEnsureCapacity_real_T(b_Omega2D, F);
  b_Omega2D_data = b_Omega2D->data;
  loop_ub = Omega2D->size[0] * Omega2D->size[1];
  for (F = 0; F < loop_ub; F++) {
    b_Omega2D_data[F] = Omega2D_data[F];
  }
  /* cpcV computes updated common rotation matrix when shapes are different */
  /*  */
  /*   This routine is called when the parametrization is *VE that is when */
  /*   variable shape is assumed but equal rotation is imposed. This routine is
   */
  /*   based on the algorithm described in McNicholas and Browne (2014) */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*      lmdc  : row vector of length $k$ containing restricted determinants.
   * More */
  /*              precisely, the $j$-th element of lmdc contains
   * $\lambda_j^{1/v}$. */
  /*              The elements of lmdc satisfy the constraint pa.cdet in the
   * sense that */
  /*              $\max(lmdc)/\min(lmdc) \leq pa.cdet^{(1/v)}. In other words,
   * the */
  /*              ratio between the largest and the smallest determinant is not
   */
  /*              greater than pa.cdet. All the elements of vector lmdc are
   * equal */
  /*              if modeltype is E** or if pa.cdet=1; */
  /*      GAMc : constrained shape matrix. Matrix of size v-by-k containing in
   */
  /*            column j the elements on the main diagonal of shape matrix */
  /*            $\Gamma_j$. The elements of GAMc satisfy the following */
  /*            constraints: */
  /*            The product of the elements of each column is equal to 1. */
  /*            The ratio of the elements of each row is not greater than
   * pa.shb. */
  /*            The ratio of the elements of each column is not greater than */
  /*            pa.shw. All the columns of matrix GAMc are equal if the second
   */
  /*            letter of modeltype is E. All the columns of matrix GAMc are */
  /*            equal to 1 if the second letter of modeltype is I. */
  /*    Omega2D : v-by-v matrix containing the common rotation matrix. */
  /*    SigmaB : v-by-v-by-k array containing the k covariance matrices for the
   */
  /*            k groups. */
  /*    niini  : vector of length k containing the size of the groups. */
  /*      pa : structure containing: 3 letter character specifying modeltype, */
  /*             number of dimensions, number of groups... */
  /*             The fields of pars which are used in this routine are pa.v, */
  /*             pa.k,  pa.maxiterR and pa.tolR */
  /*  */
  /*  Output: */
  /*  */
  /*     Omega : v-by-v-k 3D array containing the updated common rotation */
  /*                matrix replicated k times. Omega(:,:,j)=Omega2D with j=1, */
  /*                ..., k */
  /*    Omega2D : v-by-v matrix containing the updated common rotation matrix.
   */
  /*  */
  /*  References */
  /*  */
  /*  McNicholas, P.D., Browne, R.P. (2014), Estimating common principal */
  /*  components in high dimensions, Advances in Data Analysis and */
  /*  Classification, Vol. 8, pp. 217-226 */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Beginning of code */
  /*  Get the tolerance */
  /*  GEt maximum number of iterations */
  F = Omega->size[0] * Omega->size[1] * Omega->size[2];
  Omega->size[0] = (int)pa_v;
  Omega->size[1] = (int)pa_v;
  i = (int)pa_k;
  Omega->size[2] = (int)pa_k;
  emxEnsureCapacity_real_T(Omega, F);
  Omega_data = Omega->data;
  nv = (int)pa_v * (int)pa_v;
  loop_ub = nv * (int)pa_k;
  for (F = 0; F < loop_ub; F++) {
    Omega_data[F] = rtNaN;
  }
  emxInit_real_T(&b_F, 2);
  /*  sumnini=sum(niini); */
  /*  Apply the iterative procedure to find Omega2D  matrix */
  iter = 0.0;
  /*  diffOMG value of the relative sum of squares of the difference between */
  /*  the element of matrix Omega2D in two consecutive iterations */
  diffOMG = rtInf;
  F = b_F->size[0] * b_F->size[1];
  b_F->size[0] = (int)pa_v;
  b_F->size[1] = (int)pa_v;
  emxEnsureCapacity_real_T(b_F, F);
  F_data = b_F->data;
  for (F = 0; F < nv; F++) {
    F_data[F] = 0.0;
  }
  emxInit_real_T(&Omega2Dold, 2);
  F = Omega2Dold->size[0] * Omega2Dold->size[1];
  Omega2Dold->size[0] = (int)pa_v;
  Omega2Dold->size[1] = (int)pa_v;
  emxEnsureCapacity_real_T(Omega2Dold, F);
  Omega2Dold_data = Omega2Dold->data;
  for (F = 0; F < nv; F++) {
    Omega2Dold_data[F] = 0.0;
  }
  emxInit_real_T(&GAMjinv, 2);
  emxInit_real_T(&z, 1);
  emxInit_real_T(&U, 2);
  emxInit_real_T(&V1, 2);
  emxInit_real_T(&a, 2);
  emxInit_real_T(&r, 2);
  while ((diffOMG > pa_tolR) && (iter < pa_maxiterR)) {
    iter++;
    for (j = 0; j < i; j++) {
      loop_ub = GAMc->size[0];
      F = z->size[0];
      z->size[0] = GAMc->size[0];
      emxEnsureCapacity_real_T(z, F);
      Omega2Dold_data = z->data;
      for (F = 0; F < loop_ub; F++) {
        Omega2Dold_data[F] = 1.0 / GAMc_data[F + GAMc->size[0] * j];
      }
      nv = z->size[0];
      F = GAMjinv->size[0] * GAMjinv->size[1];
      GAMjinv->size[0] = z->size[0];
      GAMjinv->size[1] = z->size[0];
      emxEnsureCapacity_real_T(GAMjinv, F);
      b_Omega2D_data = GAMjinv->data;
      loop_ub = z->size[0] * z->size[0];
      for (F = 0; F < loop_ub; F++) {
        b_Omega2D_data[F] = 0.0;
      }
      for (loop_ub = 0; loop_ub < nv; loop_ub++) {
        b_Omega2D_data[loop_ub + GAMjinv->size[0] * loop_ub] =
            Omega2Dold_data[loop_ub];
      }
      b_a = lmdc_data[j];
      c_a = 1.0 / rt_powd_snf(b_a, 1.0 / pa_v);
      b_a = wk_data[j] * rt_powd_snf(b_a, -1.0 / pa_v);
      F = a->size[0] * a->size[1];
      a->size[0] = GAMjinv->size[0];
      a->size[1] = GAMjinv->size[1];
      emxEnsureCapacity_real_T(a, F);
      Omega2Dold_data = a->data;
      loop_ub = GAMjinv->size[0] * GAMjinv->size[1];
      for (F = 0; F < loop_ub; F++) {
        Omega2Dold_data[F] = c_a * b_Omega2D_data[F];
      }
      d_mtimes(a, b_Omega2D, V1);
      loop_ub = Wk->size[0];
      nv = Wk->size[1];
      F = a->size[0] * a->size[1];
      a->size[0] = Wk->size[0];
      a->size[1] = Wk->size[1];
      emxEnsureCapacity_real_T(a, F);
      Omega2Dold_data = a->data;
      for (F = 0; F < nv; F++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Omega2Dold_data[i1 + a->size[0] * F] =
              Wk_data[(i1 + Wk->size[0] * F) + Wk->size[0] * Wk->size[1] * j];
        }
      }
      b_mtimes(V1, a, U);
      U_data = U->data;
      F = a->size[0] * a->size[1];
      a->size[0] = GAMjinv->size[0];
      a->size[1] = GAMjinv->size[1];
      emxEnsureCapacity_real_T(a, F);
      Omega2Dold_data = a->data;
      loop_ub = GAMjinv->size[0] * GAMjinv->size[1];
      for (F = 0; F < loop_ub; F++) {
        Omega2Dold_data[F] = b_a * b_Omega2D_data[F];
      }
      d_mtimes(a, b_Omega2D, V1);
      Omega2Dold_data = V1->data;
      if (b_F->size[0] == 1) {
        nv = U->size[0];
      } else {
        nv = b_F->size[0];
      }
      if (b_F->size[1] == 1) {
        F = U->size[1];
      } else {
        F = b_F->size[1];
      }
      if ((b_F->size[0] == U->size[0]) && (b_F->size[1] == U->size[1]) &&
          (nv == V1->size[0]) && (F == V1->size[1])) {
        loop_ub = b_F->size[0] * b_F->size[1];
        for (F = 0; F < loop_ub; F++) {
          F_data[F] = (F_data[F] + U_data[F]) - Omega2Dold_data[F];
        }
      } else {
        hf_binary_expand_op(b_F, U, V1);
        F_data = b_F->data;
      }
    }
    nv = b_F->size[0] * b_F->size[1];
    p = true;
    for (loop_ub = 0; loop_ub < nv; loop_ub++) {
      if ((!p) || (rtIsInf(F_data[loop_ub]) || rtIsNaN(F_data[loop_ub]))) {
        p = false;
      }
    }
    if (p) {
      b_svd(b_F, U, z, GAMjinv);
    } else {
      F = a->size[0] * a->size[1];
      a->size[0] = b_F->size[0];
      a->size[1] = b_F->size[1];
      emxEnsureCapacity_real_T(a, F);
      Omega2Dold_data = a->data;
      loop_ub = b_F->size[0] * b_F->size[1];
      for (F = 0; F < loop_ub; F++) {
        Omega2Dold_data[F] = 0.0;
      }
      b_svd(a, GAMjinv, z, V1);
      F = U->size[0] * U->size[1];
      U->size[0] = GAMjinv->size[0];
      U->size[1] = GAMjinv->size[1];
      emxEnsureCapacity_real_T(U, F);
      U_data = U->data;
      loop_ub = GAMjinv->size[0] * GAMjinv->size[1];
      for (F = 0; F < loop_ub; F++) {
        U_data[F] = rtNaN;
      }
      F = GAMjinv->size[0] * GAMjinv->size[1];
      GAMjinv->size[0] = V1->size[0];
      GAMjinv->size[1] = V1->size[1];
      emxEnsureCapacity_real_T(GAMjinv, F);
      b_Omega2D_data = GAMjinv->data;
      loop_ub = V1->size[0] * V1->size[1];
      for (F = 0; F < loop_ub; F++) {
        b_Omega2D_data[F] = rtNaN;
      }
    }
    b_mtimes(GAMjinv, U, b_Omega2D);
    b_Omega2D_data = b_Omega2D->data;
    /*  Omega2new = new values of matrix Omega2D in vectorized form */
    /*  diffOMG = (new values of Omega) - (old values of Omega) */
    /*  relative sum of squares of the differences */
    /*  Note that (Omega2Dold'*Omega2Dold)=p */
    if (iter > 1.0) {
      c_mtimes(b_Omega2D, Omega2Dold, V1);
      Omega2Dold_data = V1->data;
      loop_ub = V1->size[0] * V1->size[1];
      for (F = 0; F < loop_ub; F++) {
        b_a = Omega2Dold_data[F];
        Omega2Dold_data[F] = b_a * b_a;
      }
      combineVectorElements(V1, r);
      diffOMG = (pa_v - e_sum(r)) / pa_v;
    }
    F = Omega2Dold->size[0] * Omega2Dold->size[1];
    Omega2Dold->size[0] = b_Omega2D->size[0];
    Omega2Dold->size[1] = b_Omega2D->size[1];
    emxEnsureCapacity_real_T(Omega2Dold, F);
    Omega2Dold_data = Omega2Dold->data;
    loop_ub = b_Omega2D->size[0] * b_Omega2D->size[1];
    for (F = 0; F < loop_ub; F++) {
      Omega2Dold_data[F] = b_Omega2D_data[F];
    }
  }
  emxFree_real_T(&r);
  emxFree_real_T(&a);
  emxFree_real_T(&V1);
  emxFree_real_T(&U);
  emxFree_real_T(&z);
  emxFree_real_T(&GAMjinv);
  emxFree_real_T(&Omega2Dold);
  emxFree_real_T(&b_F);
  /*  Replicate Omega2D  k times */
  for (j = 0; j < i; j++) {
    loop_ub = b_Omega2D->size[1];
    for (F = 0; F < loop_ub; F++) {
      nv = b_Omega2D->size[0];
      for (i1 = 0; i1 < nv; i1++) {
        Omega_data[(i1 + Omega->size[0] * F) +
                   Omega->size[0] * Omega->size[1] * j] =
            b_Omega2D_data[i1 + b_Omega2D->size[0] * F];
      }
    }
  }
  emxFree_real_T(&b_Omega2D);
}

/* End of code generation (cpcV.c) */
