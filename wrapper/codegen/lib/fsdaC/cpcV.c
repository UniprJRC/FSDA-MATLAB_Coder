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
#include "svd.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void cpcV(const emxArray_real_T *lmdc, const emxArray_real_T *GAMc,
          const emxArray_real_T *Omega2D, const emxArray_real_T *Wk,
          const emxArray_real_T *wk, double pa_k, double pa_maxiterR,
          double pa_tolR, double pa_v, emxArray_real_T *Omega)
{
  emxArray_real_T *F;
  emxArray_real_T *GAMjinv;
  emxArray_real_T *Omega2Dold;
  emxArray_real_T *U;
  emxArray_real_T *V1;
  emxArray_real_T *a;
  emxArray_real_T *b_Omega2D;
  emxArray_real_T *r;
  emxArray_real_T *z;
  double b_a;
  double c_a;
  double diffOMG;
  double iter;
  int i;
  int i1;
  int i2;
  int j;
  int loop_ub;
  int nv;
  bool p;
  emxInit_real_T(&b_Omega2D, 2);
  i = b_Omega2D->size[0] * b_Omega2D->size[1];
  b_Omega2D->size[0] = Omega2D->size[0];
  b_Omega2D->size[1] = Omega2D->size[1];
  emxEnsureCapacity_real_T(b_Omega2D, i);
  loop_ub = Omega2D->size[0] * Omega2D->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_Omega2D->data[i] = Omega2D->data[i];
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
  i = Omega->size[0] * Omega->size[1] * Omega->size[2];
  Omega->size[0] = (int)pa_v;
  Omega->size[1] = (int)pa_v;
  i1 = (int)pa_k;
  Omega->size[2] = (int)pa_k;
  emxEnsureCapacity_real_T(Omega, i);
  nv = (int)pa_v * (int)pa_v;
  loop_ub = nv * (int)pa_k;
  for (i = 0; i < loop_ub; i++) {
    Omega->data[i] = rtNaN;
  }
  emxInit_real_T(&F, 2);
  /*  sumnini=sum(niini); */
  /*  Apply the iterative procedure to find Omega2D  matrix */
  iter = 0.0;
  /*  diffOMG value of the relative sum of squares of the difference between */
  /*  the element of matrix Omega2D in two consecutive iterations */
  diffOMG = rtInf;
  i = F->size[0] * F->size[1];
  F->size[0] = (int)pa_v;
  F->size[1] = (int)pa_v;
  emxEnsureCapacity_real_T(F, i);
  for (i = 0; i < nv; i++) {
    F->data[i] = 0.0;
  }
  emxInit_real_T(&Omega2Dold, 2);
  i = Omega2Dold->size[0] * Omega2Dold->size[1];
  Omega2Dold->size[0] = (int)pa_v;
  Omega2Dold->size[1] = (int)pa_v;
  emxEnsureCapacity_real_T(Omega2Dold, i);
  for (i = 0; i < nv; i++) {
    Omega2Dold->data[i] = 0.0;
  }
  emxInit_real_T(&GAMjinv, 2);
  emxInit_real_T(&z, 1);
  emxInit_real_T(&U, 2);
  emxInit_real_T(&V1, 2);
  emxInit_real_T(&a, 2);
  emxInit_real_T(&r, 2);
  while ((diffOMG > pa_tolR) && (iter < pa_maxiterR)) {
    iter++;
    for (j = 0; j < i1; j++) {
      loop_ub = GAMc->size[0];
      i = z->size[0];
      z->size[0] = GAMc->size[0];
      emxEnsureCapacity_real_T(z, i);
      for (i = 0; i < loop_ub; i++) {
        z->data[i] = 1.0 / GAMc->data[i + GAMc->size[0] * j];
      }
      nv = z->size[0];
      i = GAMjinv->size[0] * GAMjinv->size[1];
      GAMjinv->size[0] = z->size[0];
      GAMjinv->size[1] = z->size[0];
      emxEnsureCapacity_real_T(GAMjinv, i);
      loop_ub = z->size[0] * z->size[0];
      for (i = 0; i < loop_ub; i++) {
        GAMjinv->data[i] = 0.0;
      }
      for (loop_ub = 0; loop_ub < nv; loop_ub++) {
        GAMjinv->data[loop_ub + GAMjinv->size[0] * loop_ub] = z->data[loop_ub];
      }
      b_a = lmdc->data[j];
      c_a = 1.0 / rt_powd_snf(b_a, 1.0 / pa_v);
      b_a = wk->data[j] * rt_powd_snf(b_a, -1.0 / pa_v);
      i = a->size[0] * a->size[1];
      a->size[0] = GAMjinv->size[0];
      a->size[1] = GAMjinv->size[1];
      emxEnsureCapacity_real_T(a, i);
      loop_ub = GAMjinv->size[0] * GAMjinv->size[1];
      for (i = 0; i < loop_ub; i++) {
        a->data[i] = c_a * GAMjinv->data[i];
      }
      d_mtimes(a, b_Omega2D, V1);
      loop_ub = Wk->size[0];
      nv = Wk->size[1];
      i = a->size[0] * a->size[1];
      a->size[0] = Wk->size[0];
      a->size[1] = Wk->size[1];
      emxEnsureCapacity_real_T(a, i);
      for (i = 0; i < nv; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          a->data[i2 + a->size[0] * i] =
              Wk->data[(i2 + Wk->size[0] * i) + Wk->size[0] * Wk->size[1] * j];
        }
      }
      b_mtimes(V1, a, U);
      i = a->size[0] * a->size[1];
      a->size[0] = GAMjinv->size[0];
      a->size[1] = GAMjinv->size[1];
      emxEnsureCapacity_real_T(a, i);
      loop_ub = GAMjinv->size[0] * GAMjinv->size[1];
      for (i = 0; i < loop_ub; i++) {
        a->data[i] = b_a * GAMjinv->data[i];
      }
      d_mtimes(a, b_Omega2D, V1);
      loop_ub = F->size[0] * F->size[1];
      for (i = 0; i < loop_ub; i++) {
        F->data[i] = (F->data[i] + U->data[i]) - V1->data[i];
      }
    }
    nv = F->size[0] * F->size[1];
    p = true;
    for (loop_ub = 0; loop_ub < nv; loop_ub++) {
      if ((!p) || (rtIsInf(F->data[loop_ub]) || rtIsNaN(F->data[loop_ub]))) {
        p = false;
      }
    }
    if (p) {
      b_svd(F, U, z, GAMjinv);
    } else {
      i = a->size[0] * a->size[1];
      a->size[0] = F->size[0];
      a->size[1] = F->size[1];
      emxEnsureCapacity_real_T(a, i);
      loop_ub = F->size[0] * F->size[1];
      for (i = 0; i < loop_ub; i++) {
        a->data[i] = 0.0;
      }
      b_svd(a, GAMjinv, z, V1);
      i = U->size[0] * U->size[1];
      U->size[0] = GAMjinv->size[0];
      U->size[1] = GAMjinv->size[1];
      emxEnsureCapacity_real_T(U, i);
      loop_ub = GAMjinv->size[0] * GAMjinv->size[1];
      for (i = 0; i < loop_ub; i++) {
        U->data[i] = rtNaN;
      }
      i = GAMjinv->size[0] * GAMjinv->size[1];
      GAMjinv->size[0] = V1->size[0];
      GAMjinv->size[1] = V1->size[1];
      emxEnsureCapacity_real_T(GAMjinv, i);
      loop_ub = V1->size[0] * V1->size[1];
      for (i = 0; i < loop_ub; i++) {
        GAMjinv->data[i] = rtNaN;
      }
    }
    b_mtimes(GAMjinv, U, b_Omega2D);
    /*  Omega2new = new values of matrix Omega2D in vectorized form */
    /*  diffOMG = (new values of Omega) - (old values of Omega) */
    /*  relative sum of squares of the differences */
    /*  Note that (Omega2Dold'*Omega2Dold)=p */
    if (iter > 1.0) {
      c_mtimes(b_Omega2D, Omega2Dold, V1);
      i = GAMjinv->size[0] * GAMjinv->size[1];
      GAMjinv->size[0] = V1->size[0];
      GAMjinv->size[1] = V1->size[1];
      emxEnsureCapacity_real_T(GAMjinv, i);
      nv = V1->size[0] * V1->size[1];
      for (loop_ub = 0; loop_ub < nv; loop_ub++) {
        GAMjinv->data[loop_ub] = V1->data[loop_ub] * V1->data[loop_ub];
      }
      combineVectorElements(GAMjinv, r);
      diffOMG = (pa_v - d_combineVectorElements(r)) / pa_v;
    }
    i = Omega2Dold->size[0] * Omega2Dold->size[1];
    Omega2Dold->size[0] = b_Omega2D->size[0];
    Omega2Dold->size[1] = b_Omega2D->size[1];
    emxEnsureCapacity_real_T(Omega2Dold, i);
    loop_ub = b_Omega2D->size[0] * b_Omega2D->size[1];
    for (i = 0; i < loop_ub; i++) {
      Omega2Dold->data[i] = b_Omega2D->data[i];
    }
  }
  emxFree_real_T(&r);
  emxFree_real_T(&a);
  emxFree_real_T(&V1);
  emxFree_real_T(&U);
  emxFree_real_T(&z);
  emxFree_real_T(&GAMjinv);
  emxFree_real_T(&Omega2Dold);
  emxFree_real_T(&F);
  /*  Replicate Omega2D  k times */
  for (j = 0; j < i1; j++) {
    loop_ub = b_Omega2D->size[1];
    for (i = 0; i < loop_ub; i++) {
      nv = b_Omega2D->size[0];
      for (i2 = 0; i2 < nv; i2++) {
        Omega->data[(i2 + Omega->size[0] * i) +
                    Omega->size[0] * Omega->size[1] * j] =
            b_Omega2D->data[i2 + b_Omega2D->size[0] * i];
      }
    }
  }
  emxFree_real_T(&b_Omega2D);
}

/* End of code generation (cpcV.c) */
