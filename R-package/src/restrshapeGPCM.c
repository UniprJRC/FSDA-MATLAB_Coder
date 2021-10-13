/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * restrshapeGPCM.c
 *
 * Code generation for function 'restrshapeGPCM'
 *
 */

/* Include files */
#include "restrshapeGPCM.h"
#include "blockedSummation.h"
#include "combineVectorElements.h"
#include "div.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "minOrMax.h"
#include "mtimes.h"
#include "restreigen.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "sum.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Declarations */
static void d_plus(emxArray_real_T *Ord, const emxArray_real_T *GAM);

static void kf_binary_expand_op(emxArray_boolean_T *booeig,
                                const emxArray_real_T *diff,
                                const emxArray_real_T *ex, double pa_shb);

static void lf_binary_expand_op(emxArray_boolean_T *booeig,
                                const emxArray_real_T *lmd,
                                const emxArray_real_T *es, double pa_shw);

/* Function Definitions */
static void d_plus(emxArray_real_T *Ord, const emxArray_real_T *GAM)
{
  emxArray_real_T *b_Ord;
  const double *GAM_data;
  double *Ord_data;
  double *b_Ord_data;
  int aux_0_1;
  int aux_1_1;
  int b_loop_ub;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_0_1;
  int stride_1_0;
  int stride_1_1;
  GAM_data = GAM->data;
  Ord_data = Ord->data;
  emxInit_real_T(&b_Ord, 2);
  i = b_Ord->size[0] * b_Ord->size[1];
  if (GAM->size[0] == 1) {
    b_Ord->size[0] = Ord->size[0];
  } else {
    b_Ord->size[0] = GAM->size[0];
  }
  if (GAM->size[1] == 1) {
    b_Ord->size[1] = Ord->size[1];
  } else {
    b_Ord->size[1] = GAM->size[1];
  }
  emxEnsureCapacity_real_T(b_Ord, i);
  b_Ord_data = b_Ord->data;
  stride_0_0 = (Ord->size[0] != 1);
  stride_0_1 = (Ord->size[1] != 1);
  stride_1_0 = (GAM->size[0] != 1);
  stride_1_1 = (GAM->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (GAM->size[1] == 1) {
    loop_ub = Ord->size[1];
  } else {
    loop_ub = GAM->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (GAM->size[0] == 1) {
      b_loop_ub = Ord->size[0];
    } else {
      b_loop_ub = GAM->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_Ord_data[i1 + b_Ord->size[0] * i] =
          Ord_data[i1 * stride_0_0 + Ord->size[0] * aux_0_1] +
          GAM_data[i1 * stride_1_0 + GAM->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = Ord->size[0] * Ord->size[1];
  Ord->size[0] = b_Ord->size[0];
  Ord->size[1] = b_Ord->size[1];
  emxEnsureCapacity_real_T(Ord, i);
  Ord_data = Ord->data;
  loop_ub = b_Ord->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_Ord->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      Ord_data[i1 + Ord->size[0] * i] = b_Ord_data[i1 + b_Ord->size[0] * i];
    }
  }
  emxFree_real_T(&b_Ord);
}

static void kf_binary_expand_op(emxArray_boolean_T *booeig,
                                const emxArray_real_T *diff,
                                const emxArray_real_T *ex, double pa_shb)
{
  const double *diff_data;
  const double *ex_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  bool *booeig_data;
  ex_data = ex->data;
  diff_data = diff->data;
  i = booeig->size[0];
  if (ex->size[0] == 1) {
    booeig->size[0] = diff->size[0];
  } else {
    booeig->size[0] = ex->size[0];
  }
  emxEnsureCapacity_boolean_T(booeig, i);
  booeig_data = booeig->data;
  stride_0_0 = (diff->size[0] != 1);
  stride_1_0 = (ex->size[0] != 1);
  if (ex->size[0] == 1) {
    loop_ub = diff->size[0];
  } else {
    loop_ub = ex->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    booeig_data[i] =
        (diff_data[i * stride_0_0] / ex_data[i * stride_1_0] > pa_shb);
  }
}

static void lf_binary_expand_op(emxArray_boolean_T *booeig,
                                const emxArray_real_T *lmd,
                                const emxArray_real_T *es, double pa_shw)
{
  const double *es_data;
  const double *lmd_data;
  int i;
  int loop_ub;
  int stride_0_1;
  int stride_1_1;
  bool *booeig_data;
  es_data = es->data;
  lmd_data = lmd->data;
  i = booeig->size[0] * booeig->size[1];
  booeig->size[0] = 1;
  if (es->size[1] == 1) {
    booeig->size[1] = lmd->size[1];
  } else {
    booeig->size[1] = es->size[1];
  }
  emxEnsureCapacity_boolean_T(booeig, i);
  booeig_data = booeig->data;
  stride_0_1 = (lmd->size[1] != 1);
  stride_1_1 = (es->size[1] != 1);
  if (es->size[1] == 1) {
    loop_ub = lmd->size[1];
  } else {
    loop_ub = es->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    booeig_data[i] =
        (lmd_data[i * stride_0_1] / es_data[i * stride_1_1] > pa_shw);
  }
}

void jf_binary_expand_op(emxArray_real_T *diff, const emxArray_real_T *GAMc,
                         const emxArray_real_T *GAMold)
{
  const double *GAMc_data;
  const double *GAMold_data;
  double *diff_data;
  int b_GAMc;
  int i;
  int stride_0_0;
  int stride_1_0;
  GAMold_data = GAMold->data;
  GAMc_data = GAMc->data;
  b_GAMc = GAMc->size[0] * GAMc->size[1];
  i = diff->size[0];
  if (GAMold->size[0] == 1) {
    diff->size[0] = b_GAMc;
  } else {
    diff->size[0] = GAMold->size[0];
  }
  emxEnsureCapacity_real_T(diff, i);
  diff_data = diff->data;
  stride_0_0 = (b_GAMc != 1);
  stride_1_0 = (GAMold->size[0] != 1);
  if (GAMold->size[0] != 1) {
    b_GAMc = GAMold->size[0];
  }
  for (i = 0; i < b_GAMc; i++) {
    diff_data[i] = GAMc_data[i * stride_0_0] - GAMold_data[i * stride_1_0];
  }
}

void restrshapeGPCM(const emxArray_real_T *lmd, const emxArray_real_T *Omega,
                    const emxArray_real_T *SigmaB, const emxArray_real_T *niini,
                    const char pa_pars[3], double pa_shw, double pa_shb,
                    double pa_k, double pa_maxiterS, double pa_tolS,
                    double pa_userepmat, double pa_v, double pa_zerotol,
                    emxArray_real_T *GAMc)
{
  emxArray_boolean_T *b_booeig;
  emxArray_boolean_T *booeig;
  emxArray_boolean_T *r1;
  emxArray_int32_T *iidx;
  emxArray_int32_T *r;
  emxArray_int32_T *r2;
  emxArray_real_T *GAM;
  emxArray_real_T *GAMctr;
  emxArray_real_T *GAMold;
  emxArray_real_T *Ord;
  emxArray_real_T *b_SigmaB;
  emxArray_real_T *b_lmd;
  emxArray_real_T *diff;
  emxArray_real_T *es;
  emxArray_real_T *ex;
  emxArray_real_T *lamGAMc;
  const double *Omega_data;
  const double *SigmaB_data;
  const double *lmd_data;
  const double *niini_data;
  double diffGAM;
  double iter;
  double varargin_1;
  double *GAM_data;
  double *GAMc_data;
  double *GAMctr_data;
  double *GAMold_data;
  double *Ord_data;
  double *diff_data;
  double *es_data;
  double *lamGAMc_data;
  int b_loop_ub;
  int c_loop_ub;
  int d_loop_ub;
  int e_loop_ub;
  int i;
  int i1;
  int i2;
  int j;
  int k;
  int loop_ub;
  int npages;
  int p;
  int unnamed_idx_0;
  int vlen;
  int xpageoffset;
  int *iidx_data;
  bool b_p;
  bool *booeig_data;
  niini_data = niini->data;
  SigmaB_data = SigmaB->data;
  Omega_data = Omega->data;
  lmd_data = lmd->data;
  /* restrshapeGPCM produces the restricted shape matrix for the 14 GPCM */
  /*  */
  /* <a href="matlab: docsearchFS('restrshapeGPCM')">Link to the help
   * function</a> */
  /*  */
  /*  The purpose of this routine is to produce the constrained shape matrix */
  /*  $\Gamma$. */
  /*  This routine copes with the second of the 3 letters of modeltype. It */
  /*  deals with the cases in which the second letter is E, or I or V. If the */
  /*  second letter is V procedure restrshapecore is invoked and both (within */
  /*  groups) cshw, and (between groups) cshb constraints are imposed. If the */
  /*  second letter of modeltype is E just cshw is used. If the second letter */
  /*  is I, GAMc becomes a matrix of ones. */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*      lmd : Determinants. Vector. */
  /*             Row vector of length k containing in the j-th position */
  /*            the estimate of lambda. In the first iteration the estiamte of
   */
  /*            \lambda_j is $|\Sigma_j|^(1/v)$, $j=1, 2, \ldots, k$ if */
  /*            different determinants are allowed else it is a row vector of */
  /*            ones. */
  /*     Omega : Rotation. 3D array. */
  /*            v-by-v-by-k 3D array containing in */
  /*            position (:,:,j) the rotation */
  /*            matrix $\Omega_j$ for group $j$, with $j=1, 2, \ldots, k$. */
  /*    SigmaB : initial unconstrained covariance matrices. v-by-v-by-k array.
   */
  /*             v-by-v-by-k array containing the k unconstrained covariance */
  /*             matrices for the k groups. */
  /*    niini  : size of the groups. Vector. */
  /*            Row vector of length k containing the size of the groups. */
  /*      pa : constraining parameters. Structure. Structure containing 3 letter
   * character specifying modeltype, */
  /*             number of dimensions, number of groups... */
  /*             pa must contain the following fields: */
  /*             pa.v = scalar, number of variables. */
  /*             pa.k = scalar, number of groups. */
  /*             pa.pars = type of Gaussian Parsimonious Clustering Model. */
  /*                A 3 letter word in the set: */
  /*                'VVE','EVE','VVV','EVV','VEE','EEE','VEV','EEV','VVI', */
  /*                'EVI','VEI','EEI','VII','EII' */
  /*             pa.shb = between groups shape constraint */
  /*             pa.shw = within groups shape constraint */
  /*             pa.zerotol = tolerance to decleare elements equal to 0. */
  /*             pa.maxiterS = maximum number of iterations in presence of */
  /*             varying shape matrices. */
  /*             pa.userepmat = scalar (if =2 implicit expansion is used) */
  /*                  Data Types - struct */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*  Output: */
  /*  */
  /*      GAMc : constrained shape matrix. Matrix of size v-by-k containing in
   */
  /*            column j the elements on the main diagonal of shape matrix */
  /*            $\Gamma_j$. The elements of GAMc satisfy the following */
  /*            constraints: */
  /*            The product of the elements of each column is equal to 1. */
  /*            The ratio among the largest elements of each column is */
  /*            not greater than pa.shb. */
  /*            The ratio among the second largest elements of each column is */
  /*            not greater than pa.shb. */
  /*            .... */
  /*            The ratio among the smallest elements of each column is */
  /*            not greater than pa.shb. */
  /*            The ratio of the elements of each column is not greater than */
  /*            pa.shw. */
  /*            All the columns of matrix GAMc are equal if the second */
  /*            letter of modeltype is E. All the columns of matrix GAMc are */
  /*            equal to 1 if the second letter of modeltype is I. This matrix
   */
  /*            will be an input of routine restrdeterGPCM.m to compute */
  /*            constrained determinants. */
  /*  */
  /*  See also: restrSigmaGPCM, restrdeterGPCM, restreigen, tclust */
  /*  */
  /*  References: */
  /*  */
  /*    Garcia-Escudero, L.A., Mayo-Iscar, A. and Riani M. (2020), */
  /*    Robust parsimonious clustering models. Submitted. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* <a href="matlab: docsearchFS('restrshapeGPCM')">Link to the help
   * function</a> */
  /*  */
  /* $LastChangedDate:: 2018-09-15 00:27:12 #$: Date of the last commit */
  /*  Examples: */
  /*  Beginning of code */
  emxInit_real_T(&GAM, 2);
  emxInit_real_T(&lamGAMc, 2);
  emxInit_boolean_T(&booeig, 2);
  emxInit_real_T(&Ord, 2);
  emxInit_real_T(&GAMctr, 2);
  emxInit_real_T(&GAMold, 1);
  emxInit_real_T(&b_lmd, 2);
  emxInit_real_T(&es, 2);
  emxInit_real_T(&diff, 1);
  emxInit_boolean_T(&b_booeig, 1);
  emxInit_int32_T(&r, 1);
  emxInit_int32_T(&iidx, 1);
  emxInit_real_T(&ex, 1);
  emxInit_boolean_T(&r1, 2);
  emxInit_int32_T(&r2, 2);
  emxInit_real_T(&b_SigmaB, 2);
  if ((!(pa_pars[1] != 'E')) || (pa_shb == 1.0)) {
    /*  In this case just restriction shw is used */
    diffGAM = blockedSummation(niini, niini->size[0]);
    i = Ord->size[0] * Ord->size[1];
    Ord->size[0] = (int)pa_v;
    Ord->size[1] = (int)pa_v;
    emxEnsureCapacity_real_T(Ord, i);
    Ord_data = Ord->data;
    xpageoffset = (int)pa_v * (int)pa_v;
    for (i = 0; i < xpageoffset; i++) {
      Ord_data[i] = 0.0;
    }
    i = (int)pa_k;
    for (j = 0; j < i; j++) {
      varargin_1 = niini_data[j] / diffGAM * (1.0 / lmd_data[j]);
      loop_ub = Omega->size[0];
      b_loop_ub = Omega->size[1];
      i1 = lamGAMc->size[0] * lamGAMc->size[1];
      lamGAMc->size[0] = Omega->size[1];
      lamGAMc->size[1] = Omega->size[0];
      emxEnsureCapacity_real_T(lamGAMc, i1);
      lamGAMc_data = lamGAMc->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        for (i2 = 0; i2 < b_loop_ub; i2++) {
          lamGAMc_data[i2 + lamGAMc->size[0] * i1] =
              varargin_1 * Omega_data[(i1 + Omega->size[0] * i2) +
                                      Omega->size[0] * Omega->size[1] * j];
        }
      }
      loop_ub = SigmaB->size[0];
      b_loop_ub = SigmaB->size[1];
      i1 = b_SigmaB->size[0] * b_SigmaB->size[1];
      b_SigmaB->size[0] = SigmaB->size[0];
      b_SigmaB->size[1] = SigmaB->size[1];
      emxEnsureCapacity_real_T(b_SigmaB, i1);
      es_data = b_SigmaB->data;
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          es_data[i2 + b_SigmaB->size[0] * i1] =
              SigmaB_data[(i2 + SigmaB->size[0] * i1) +
                          SigmaB->size[0] * SigmaB->size[1] * j];
        }
      }
      b_mtimes(lamGAMc, b_SigmaB, GAMctr);
      loop_ub = Omega->size[0];
      b_loop_ub = Omega->size[1];
      i1 = lamGAMc->size[0] * lamGAMc->size[1];
      lamGAMc->size[0] = Omega->size[0];
      lamGAMc->size[1] = Omega->size[1];
      emxEnsureCapacity_real_T(lamGAMc, i1);
      lamGAMc_data = lamGAMc->data;
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          lamGAMc_data[i2 + lamGAMc->size[0] * i1] =
              Omega_data[(i2 + Omega->size[0] * i1) +
                         Omega->size[0] * Omega->size[1] * j];
        }
      }
      b_mtimes(GAMctr, lamGAMc, GAM);
      GAM_data = GAM->data;
      i1 = r1->size[0] * r1->size[1];
      r1->size[0] = GAM->size[0];
      r1->size[1] = GAM->size[1];
      emxEnsureCapacity_boolean_T(r1, i1);
      booeig_data = r1->data;
      loop_ub = GAM->size[0] * GAM->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        booeig_data[i1] = rtIsNaN(GAM_data[i1]);
      }
      b_combineVectorElements(r1, r2);
      iidx_data = r2->data;
      i1 = b_lmd->size[0] * b_lmd->size[1];
      b_lmd->size[0] = 1;
      b_lmd->size[1] = r2->size[1];
      emxEnsureCapacity_real_T(b_lmd, i1);
      diff_data = b_lmd->data;
      loop_ub = r2->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        diff_data[i1] = iidx_data[i1];
      }
      if (e_sum(b_lmd) > 0.0) {
        i1 = GAM->size[0] * GAM->size[1];
        GAM->size[0] = (int)pa_v;
        GAM->size[1] = (int)pa_v;
        emxEnsureCapacity_real_T(GAM, i1);
        GAM_data = GAM->data;
        for (i1 = 0; i1 < xpageoffset; i1++) {
          GAM_data[i1] = 0.0;
        }
      }
      if ((Ord->size[0] == GAM->size[0]) && (Ord->size[1] == GAM->size[1])) {
        loop_ub = Ord->size[0] * Ord->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          Ord_data[i1] += GAM_data[i1];
        }
      } else {
        d_plus(Ord, GAM);
        Ord_data = Ord->data;
      }
    }
    /*  Apply the constraint shw to the diagonal elements of the pooled Gamma
     * matrix */
    /*  GAMpooledc is a column vector of length p which contains the diagonal */
    /*  elements of the pooled \Gamma matrix after applying constraint shw */
    if ((Ord->size[0] == 1) && (Ord->size[1] == 1)) {
      i1 = diff->size[0];
      diff->size[0] = 1;
      emxEnsureCapacity_real_T(diff, i1);
      diff_data = diff->data;
      diff_data[0] = Ord_data[0];
    } else {
      xpageoffset = Ord->size[0];
      vlen = Ord->size[1];
      if (xpageoffset <= vlen) {
        vlen = xpageoffset;
      }
      if (0 < Ord->size[1]) {
        xpageoffset = vlen;
      } else {
        xpageoffset = 0;
      }
      i1 = diff->size[0];
      diff->size[0] = xpageoffset;
      emxEnsureCapacity_real_T(diff, i1);
      diff_data = diff->data;
      i1 = xpageoffset - 1;
      for (k = 0; k <= i1; k++) {
        diff_data[k] = Ord_data[k + Ord->size[0] * k];
      }
    }
    restreigen(diff, pa_shw, pa_zerotol, pa_userepmat);
    diff_data = diff->data;
    /*  Impose the constraint that the product of the elements of vector */
    /*  GAMpooledc is equal to 1 */
    vlen = diff->size[0];
    if (diff->size[0] == 0) {
      varargin_1 = 1.0;
    } else {
      varargin_1 = diff_data[0];
      for (k = 2; k <= vlen; k++) {
        varargin_1 *= diff_data[k - 1];
      }
    }
    diffGAM = rt_powd_snf(varargin_1, 1.0 / pa_v);
    if (diffGAM == 0.0) {
      diffGAM = 1.0;
    }
    /*  replicate v-by-1 GAMpooledc vector k times */
    loop_ub = diff->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      diff_data[i1] /= diffGAM;
    }
    i1 = GAMc->size[0] * GAMc->size[1];
    GAMc->size[0] = diff->size[0];
    GAMc->size[1] = (int)pa_k;
    emxEnsureCapacity_real_T(GAMc, i1);
    GAMc_data = GAMc->data;
    xpageoffset = diff->size[0];
    for (npages = 0; npages < i; npages++) {
      vlen = npages * xpageoffset;
      for (k = 0; k < xpageoffset; k++) {
        GAMc_data[vlen + k] = diff_data[k];
      }
    }
  } else if ((!(pa_pars[1] != 'I')) || (pa_shw == 1.0)) {
    i = GAMc->size[0] * GAMc->size[1];
    GAMc->size[0] = (int)pa_v;
    GAMc->size[1] = (int)pa_k;
    emxEnsureCapacity_real_T(GAMc, i);
    GAMc_data = GAMc->data;
    loop_ub = (int)pa_v * (int)pa_k;
    for (i = 0; i < loop_ub; i++) {
      GAMc_data[i] = 1.0;
    }
  } else {
    /*  This is the case strcmp(pars(2),'V') */
    i = GAM->size[0] * GAM->size[1];
    GAM->size[0] = (int)pa_v;
    i1 = (int)pa_k;
    GAM->size[1] = (int)pa_k;
    emxEnsureCapacity_real_T(GAM, i);
    GAM_data = GAM->data;
    if (0 <= (int)pa_k - 1) {
      loop_ub = Omega->size[0];
      i2 = Omega->size[1];
      b_loop_ub = Omega->size[1];
      npages = SigmaB->size[0];
      unnamed_idx_0 = SigmaB->size[1];
      c_loop_ub = SigmaB->size[1];
      d_loop_ub = Omega->size[0];
      p = Omega->size[1];
      e_loop_ub = Omega->size[1];
    }
    for (j = 0; j < i1; j++) {
      i = lamGAMc->size[0] * lamGAMc->size[1];
      lamGAMc->size[0] = loop_ub;
      lamGAMc->size[1] = i2;
      emxEnsureCapacity_real_T(lamGAMc, i);
      lamGAMc_data = lamGAMc->data;
      for (i = 0; i < b_loop_ub; i++) {
        for (xpageoffset = 0; xpageoffset < loop_ub; xpageoffset++) {
          lamGAMc_data[xpageoffset + lamGAMc->size[0] * i] =
              Omega_data[(xpageoffset + Omega->size[0] * i) +
                         Omega->size[0] * Omega->size[1] * j];
        }
      }
      i = b_SigmaB->size[0] * b_SigmaB->size[1];
      b_SigmaB->size[0] = npages;
      b_SigmaB->size[1] = unnamed_idx_0;
      emxEnsureCapacity_real_T(b_SigmaB, i);
      es_data = b_SigmaB->data;
      for (i = 0; i < c_loop_ub; i++) {
        for (xpageoffset = 0; xpageoffset < npages; xpageoffset++) {
          es_data[xpageoffset + b_SigmaB->size[0] * i] =
              SigmaB_data[(xpageoffset + SigmaB->size[0] * i) +
                          SigmaB->size[0] * SigmaB->size[1] * j];
        }
      }
      c_mtimes(lamGAMc, b_SigmaB, GAMctr);
      i = lamGAMc->size[0] * lamGAMc->size[1];
      lamGAMc->size[0] = d_loop_ub;
      lamGAMc->size[1] = p;
      emxEnsureCapacity_real_T(lamGAMc, i);
      lamGAMc_data = lamGAMc->data;
      for (i = 0; i < e_loop_ub; i++) {
        for (xpageoffset = 0; xpageoffset < d_loop_ub; xpageoffset++) {
          lamGAMc_data[xpageoffset + lamGAMc->size[0] * i] =
              Omega_data[(xpageoffset + Omega->size[0] * i) +
                         Omega->size[0] * Omega->size[1] * j];
        }
      }
      b_mtimes(GAMctr, lamGAMc, Ord);
      Ord_data = Ord->data;
      if ((Ord->size[0] == 1) && (Ord->size[1] == 1)) {
        i = diff->size[0];
        diff->size[0] = 1;
        emxEnsureCapacity_real_T(diff, i);
        diff_data = diff->data;
        diff_data[0] = Ord_data[0];
      } else {
        xpageoffset = Ord->size[0];
        vlen = Ord->size[1];
        if (xpageoffset <= vlen) {
          vlen = xpageoffset;
        }
        if (0 < Ord->size[1]) {
          xpageoffset = vlen;
        } else {
          xpageoffset = 0;
        }
        i = diff->size[0];
        diff->size[0] = xpageoffset;
        emxEnsureCapacity_real_T(diff, i);
        diff_data = diff->data;
        i = xpageoffset - 1;
        for (k = 0; k <= i; k++) {
          diff_data[k] = Ord_data[k + Ord->size[0] * k];
        }
      }
      diffGAM = lmd_data[j];
      xpageoffset = diff->size[0];
      for (i = 0; i < xpageoffset; i++) {
        GAM_data[i + GAM->size[0] * j] = diff_data[i] / diffGAM;
      }
    }
    /*  restrshapecore computes constrained Gamma (shape) matrix */
    /*  */
    /*  The purpose is to find the new constrained shape matrix. */
    /*  This routine is called when modeltype(2) = V (that is in presence of */
    /*  varying shape matrices). In order to impose both shw inside each group
     */
    /*  and shb between groups, a number of iterations specified by input */
    /*  parameter maxiterS and a stopping condition given by itertol are
     * necessary . */
    /*  */
    /*  Required input arguments: */
    /*  */
    /*  GAMini  : matrix of size v-by-k */
    /*            GAMini contains in the first column the elements on the */
    /*            diagonal of GAM(:,:,1). In other words the first */
    /*            column contains the diagonal elements of matrix */
    /*            $\Gamma_1$ */
    /*            GAMini contains in the second column the elements on the */
    /*            diagonal of GAM(:,:,2). In other words the first */
    /*            column contains the diagonal elements of matrix */
    /*            $\Gamma_2$ */
    /*            ......... */
    /*    niini  : vector of length k containing the size of the groups. */
    /*      shw  : scalar greater or equal 1. Constraint to impose inside each
     */
    /*            group. For example, if shw is 3 the ratio of each column of
     * output */
    /*            matrix GAMc will not be greater than 3. */
    /*      shb  : scalar greater or equal 1. Constraint to impose among groups.
     */
    /*            For example, if shb is 5 the ratio of each row of (sorted)
     * output */
    /*            matrix GAMc will not be greater than 5. */
    /*   zerotol : scalar. Tolerance value to declare all input values equal to
     * 0 */
    /*            in the eigenvalues restriction routine (file restreigen.m). */
    /*  maxiterS : maximum number of iterations in the iterative procedure. */
    /*            Scalar. */
    /*      tolS : tolerance to use to exit the iterative procedure. Scalar. The
     */
    /*            iterative procedure stops when the relative difference of */
    /*            output matrix GAMc is smaller than itertol in two consecutive
     */
    /*            iterations or when maxiterS is reached. */
    /*  */
    /*  Output: */
    /*  */
    /*      GAMc : constrained shape matrix. Matrix of size v-by-k containing in
     */
    /*            column j the elements on the main diagonal of shape matrix */
    /*            $\Gamma_j$. The elements of GAMc satisfy the following */
    /*            constraints: */
    /*            The product of the elements of each column is equal to 1. */
    /*            The ratio among the largest elements of each column is */
    /*            not greater than pa.shb. */
    /*            The ratio among the second largest elements of each column is
     */
    /*            not greater than pa.shb. */
    /*            .... */
    /*            The ratio among the smallest elements of each column is */
    /*            not greater than pa.shb. */
    /*            The ratio of the elements of each column is not greater than
     */
    /*            pa.shw. */
    /*  Beginning of code */
    i = lamGAMc->size[0] * lamGAMc->size[1];
    lamGAMc->size[0] = GAM->size[0];
    lamGAMc->size[1] = GAM->size[1];
    emxEnsureCapacity_real_T(lamGAMc, i);
    lamGAMc_data = lamGAMc->data;
    loop_ub = GAM->size[0] * GAM->size[1];
    for (i = 0; i < loop_ub; i++) {
      lamGAMc_data[i] = GAM_data[i];
    }
    /*  Initialize GAMc = Shape matrix constrained */
    d_loop_ub = GAM->size[1] - 1;
    p = GAM->size[0];
    /*  Apply eigenvalue restriction inside each group using constraining
     * parameter */
    /*  shw */
    /*  The ratio of each column of matrix lamGAMc is not greater than shw */
    maximum(GAM, b_lmd);
    diff_data = b_lmd->data;
    minimum(GAM, es);
    es_data = es->data;
    if (b_lmd->size[1] == es->size[1]) {
      i = booeig->size[0] * booeig->size[1];
      booeig->size[0] = 1;
      booeig->size[1] = b_lmd->size[1];
      emxEnsureCapacity_boolean_T(booeig, i);
      booeig_data = booeig->data;
      loop_ub = b_lmd->size[1];
      for (i = 0; i < loop_ub; i++) {
        booeig_data[i] = (diff_data[i] / es_data[i] > pa_shw);
      }
    } else {
      lf_binary_expand_op(booeig, b_lmd, es, pa_shw);
      booeig_data = booeig->data;
    }
    i = GAM->size[1];
    for (j = 0; j < i; j++) {
      if (booeig_data[j]) {
        loop_ub = GAM->size[0];
        i1 = diff->size[0];
        diff->size[0] = GAM->size[0];
        emxEnsureCapacity_real_T(diff, i1);
        diff_data = diff->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          diff_data[i1] = GAM_data[i1 + GAM->size[0] * j];
        }
        restreigen(diff, pa_shw, pa_zerotol, pa_userepmat);
        diff_data = diff->data;
        loop_ub = diff->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          lamGAMc_data[i1 + lamGAMc->size[0] * j] = diff_data[i1];
        }
      } else {
        loop_ub = GAM->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          lamGAMc_data[i1 + lamGAMc->size[0] * j] =
              GAM_data[i1 + GAM->size[0] * j];
        }
      }
    }
    /*  Apply the iterative procedure to find constrained \Gamma matrix */
    iter = 0.0;
    /*  diffGAM value of the relative sum of squares of the difference between
     */
    /*  the element of matrix \Gamma in two consecutive iterations */
    diffGAM = 9999.0;
    unnamed_idx_0 = GAM->size[0];
    c_loop_ub = GAM->size[1];
    i = GAM->size[0] * GAM->size[1];
    GAM->size[0] = unnamed_idx_0;
    GAM->size[1] = c_loop_ub;
    emxEnsureCapacity_real_T(GAM, i);
    GAM_data = GAM->data;
    xpageoffset = unnamed_idx_0 * c_loop_ub;
    for (i = 0; i < xpageoffset; i++) {
      GAM_data[i] = rtNaN;
    }
    i = GAMctr->size[0] * GAMctr->size[1];
    GAMctr->size[0] = unnamed_idx_0;
    GAMctr->size[1] = c_loop_ub;
    emxEnsureCapacity_real_T(GAMctr, i);
    GAMctr_data = GAMctr->data;
    for (i = 0; i < xpageoffset; i++) {
      GAMctr_data[i] = rtNaN;
    }
    i = GAMc->size[0] * GAMc->size[1];
    GAMc->size[0] = unnamed_idx_0;
    GAMc->size[1] = c_loop_ub;
    emxEnsureCapacity_real_T(GAMc, i);
    GAMc_data = GAMc->data;
    for (i = 0; i < xpageoffset; i++) {
      GAMc_data[i] = rtNaN;
    }
    while ((diffGAM > pa_tolS) && (iter < pa_maxiterS)) {
      iter++;
      /*  In this stage GAM(:,j) is diag(\lambda_j^(1/p) \times \Gamma_j ) */
      i = GAMold->size[0];
      GAMold->size[0] = lamGAMc->size[0] * lamGAMc->size[1];
      emxEnsureCapacity_real_T(GAMold, i);
      GAMold_data = GAMold->data;
      loop_ub = lamGAMc->size[0] * lamGAMc->size[1];
      for (i = 0; i < loop_ub; i++) {
        GAMold_data[i] = lamGAMc_data[i];
      }
      vlen = lamGAMc->size[0];
      if ((lamGAMc->size[0] == 0) || (lamGAMc->size[1] == 0)) {
        i = b_lmd->size[0] * b_lmd->size[1];
        b_lmd->size[0] = 1;
        b_lmd->size[1] = lamGAMc->size[1];
        emxEnsureCapacity_real_T(b_lmd, i);
        diff_data = b_lmd->data;
        loop_ub = lamGAMc->size[1];
        for (i = 0; i < loop_ub; i++) {
          diff_data[i] = 1.0;
        }
      } else {
        npages = lamGAMc->size[1];
        i = b_lmd->size[0] * b_lmd->size[1];
        b_lmd->size[0] = 1;
        b_lmd->size[1] = lamGAMc->size[1];
        emxEnsureCapacity_real_T(b_lmd, i);
        diff_data = b_lmd->data;
        for (e_loop_ub = 0; e_loop_ub < npages; e_loop_ub++) {
          xpageoffset = e_loop_ub * lamGAMc->size[0];
          diff_data[e_loop_ub] = lamGAMc_data[xpageoffset];
          for (k = 2; k <= vlen; k++) {
            diff_data[e_loop_ub] *= lamGAMc_data[(xpageoffset + k) - 1];
          }
        }
      }
      diffGAM = 1.0 / (double)p;
      i = b_lmd->size[0] * b_lmd->size[1];
      b_lmd->size[0] = 1;
      emxEnsureCapacity_real_T(b_lmd, i);
      diff_data = b_lmd->data;
      loop_ub = b_lmd->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        varargin_1 = diff_data[i];
        diff_data[i] = rt_powd_snf(varargin_1, diffGAM);
      }
      i = es->size[0] * es->size[1];
      es->size[0] = 1;
      es->size[1] = b_lmd->size[1];
      emxEnsureCapacity_real_T(es, i);
      es_data = es->data;
      loop_ub = b_lmd->size[1];
      for (i = 0; i < loop_ub; i++) {
        es_data[i] = diff_data[i];
      }
      vlen = b_lmd->size[1];
      for (e_loop_ub = 0; e_loop_ub < vlen; e_loop_ub++) {
        if (diff_data[e_loop_ub] == 0.0) {
          es_data[e_loop_ub] = 1.0;
        }
      }
      /*  In this stage GAM(:,j) is diag(\Gamma_j ) */
      /*  det(Gamma_j)=1 */
      i = Ord->size[0] * Ord->size[1];
      Ord->size[0] = p;
      Ord->size[1] = es->size[1];
      emxEnsureCapacity_real_T(Ord, i);
      Ord_data = Ord->data;
      xpageoffset = es->size[1];
      for (npages = 0; npages < xpageoffset; npages++) {
        vlen = npages * p;
        for (e_loop_ub = 0; e_loop_ub < p; e_loop_ub++) {
          Ord_data[vlen + e_loop_ub] = es_data[npages];
        }
      }
      if ((lamGAMc->size[0] == Ord->size[0]) &&
          (lamGAMc->size[1] == Ord->size[1])) {
        loop_ub = lamGAMc->size[0] * lamGAMc->size[1];
        for (i = 0; i < loop_ub; i++) {
          lamGAMc_data[i] /= Ord_data[i];
        }
      } else {
        rdivide(lamGAMc, Ord);
        lamGAMc_data = lamGAMc->data;
      }
      vlen = lamGAMc->size[0] * lamGAMc->size[1] - 1;
      xpageoffset = 0;
      for (e_loop_ub = 0; e_loop_ub <= vlen; e_loop_ub++) {
        if (lamGAMc_data[e_loop_ub] == 0.0) {
          xpageoffset++;
        }
      }
      i = r->size[0];
      r->size[0] = xpageoffset;
      emxEnsureCapacity_int32_T(r, i);
      iidx_data = r->data;
      xpageoffset = 0;
      for (e_loop_ub = 0; e_loop_ub <= vlen; e_loop_ub++) {
        if (lamGAMc_data[e_loop_ub] == 0.0) {
          iidx_data[xpageoffset] = e_loop_ub + 1;
          xpageoffset++;
        }
      }
      loop_ub = r->size[0] - 1;
      for (i = 0; i <= loop_ub; i++) {
        lamGAMc_data[iidx_data[i] - 1] = 1.0;
      }
      i = Ord->size[0] * Ord->size[1];
      Ord->size[0] = unnamed_idx_0;
      Ord->size[1] = c_loop_ub;
      emxEnsureCapacity_real_T(Ord, i);
      Ord_data = Ord->data;
      for (j = 0; j <= d_loop_ub; j++) {
        loop_ub = lamGAMc->size[0];
        i = diff->size[0];
        diff->size[0] = lamGAMc->size[0];
        emxEnsureCapacity_real_T(diff, i);
        diff_data = diff->data;
        for (i = 0; i < loop_ub; i++) {
          diff_data[i] = lamGAMc_data[i + lamGAMc->size[0] * j];
        }
        sort(diff, iidx);
        iidx_data = iidx->data;
        diff_data = diff->data;
        loop_ub = diff->size[0];
        for (i = 0; i < loop_ub; i++) {
          GAM_data[i + GAM->size[0] * j] = diff_data[i];
        }
        loop_ub = iidx->size[0];
        for (i = 0; i < loop_ub; i++) {
          Ord_data[i + Ord->size[0] * j] = iidx_data[i];
        }
      }
      /*  Apply restriction between groups */
      /*  The elements of each column of GAM are sorted from largest to smallest
       */
      /*  The ranks of the orginal ordering of each column is store in matrix
       * Ord */
      /*  The ratio of each row of matrix GAMc is not greater than shb */
      vlen = GAM->size[0] - 1;
      xpageoffset = GAM->size[1];
      i = ex->size[0];
      ex->size[0] = GAM->size[0];
      emxEnsureCapacity_real_T(ex, i);
      es_data = ex->data;
      if (GAM->size[0] >= 1) {
        for (e_loop_ub = 0; e_loop_ub <= vlen; e_loop_ub++) {
          es_data[e_loop_ub] = GAM_data[e_loop_ub];
        }
        for (j = 2; j <= xpageoffset; j++) {
          for (e_loop_ub = 0; e_loop_ub <= vlen; e_loop_ub++) {
            diffGAM = GAM_data[e_loop_ub + GAM->size[0] * (j - 1)];
            if (rtIsNaN(diffGAM)) {
              b_p = false;
            } else if (rtIsNaN(es_data[e_loop_ub])) {
              b_p = true;
            } else {
              b_p = (es_data[e_loop_ub] > diffGAM);
            }
            if (b_p) {
              es_data[e_loop_ub] = diffGAM;
            }
          }
        }
      }
      f_maximum(GAM, diff);
      diff_data = diff->data;
      if (diff->size[0] == ex->size[0]) {
        i = b_booeig->size[0];
        b_booeig->size[0] = diff->size[0];
        emxEnsureCapacity_boolean_T(b_booeig, i);
        booeig_data = b_booeig->data;
        loop_ub = diff->size[0];
        for (i = 0; i < loop_ub; i++) {
          booeig_data[i] = (diff_data[i] / es_data[i] > pa_shb);
        }
      } else {
        kf_binary_expand_op(b_booeig, diff, ex, pa_shb);
        booeig_data = b_booeig->data;
      }
      for (e_loop_ub = 0; e_loop_ub < p; e_loop_ub++) {
        if (booeig_data[e_loop_ub]) {
          loop_ub = GAM->size[1];
          i = b_lmd->size[0] * b_lmd->size[1];
          b_lmd->size[0] = 1;
          b_lmd->size[1] = GAM->size[1];
          emxEnsureCapacity_real_T(b_lmd, i);
          diff_data = b_lmd->data;
          for (i = 0; i < loop_ub; i++) {
            diff_data[i] = GAM_data[e_loop_ub + GAM->size[0] * i];
          }
          b_restreigen(b_lmd, niini, pa_shb, pa_zerotol, pa_userepmat);
          diff_data = b_lmd->data;
          loop_ub = b_lmd->size[1];
          for (i = 0; i < loop_ub; i++) {
            GAMctr_data[e_loop_ub + GAMctr->size[0] * i] = diff_data[i];
          }
        } else {
          loop_ub = GAM->size[1];
          for (i = 0; i < loop_ub; i++) {
            GAMctr_data[e_loop_ub + GAMctr->size[0] * i] =
                GAM_data[e_loop_ub + GAM->size[0] * i];
          }
        }
      }
      /*  Reconstruct the original order for each column */
      for (j = 0; j <= d_loop_ub; j++) {
        loop_ub = GAMctr->size[0];
        for (i = 0; i < loop_ub; i++) {
          GAMc_data[((int)Ord_data[i + Ord->size[0] * j] + GAMc->size[0] * j) -
                    1] = GAMctr_data[i + GAMctr->size[0] * j];
        }
      }
      i = lamGAMc->size[0] * lamGAMc->size[1];
      lamGAMc->size[0] = GAMc->size[0];
      lamGAMc->size[1] = GAMc->size[1];
      emxEnsureCapacity_real_T(lamGAMc, i);
      lamGAMc_data = lamGAMc->data;
      loop_ub = GAMc->size[0] * GAMc->size[1];
      for (i = 0; i < loop_ub; i++) {
        lamGAMc_data[i] = GAMc_data[i];
      }
      /*  GAMold = old values of matrix Gamma in vectorized form */
      /*  diff = (new values of Gamma) - (old values of Gamma) */
      if (GAMc->size[0] * GAMc->size[1] == GAMold->size[0]) {
        xpageoffset = GAMc->size[0] * GAMc->size[1];
        i = diff->size[0];
        diff->size[0] = xpageoffset;
        emxEnsureCapacity_real_T(diff, i);
        diff_data = diff->data;
        for (i = 0; i < xpageoffset; i++) {
          diff_data[i] = GAMc_data[i] - GAMold_data[i];
        }
      } else {
        jf_binary_expand_op(diff, GAMc, GAMold);
        diff_data = diff->data;
      }
      /*  relative sum of squares of the differences */
      diffGAM = 0.0;
      loop_ub = diff->size[0];
      for (i = 0; i < loop_ub; i++) {
        diffGAM += diff_data[i] * diff_data[i];
      }
      varargin_1 = 0.0;
      loop_ub = GAMold->size[0];
      for (i = 0; i < loop_ub; i++) {
        varargin_1 += GAMold_data[i] * GAMold_data[i];
      }
      diffGAM /= varargin_1;
    }
  }
  emxFree_real_T(&b_SigmaB);
  emxFree_int32_T(&r2);
  emxFree_boolean_T(&r1);
  emxFree_real_T(&ex);
  emxFree_int32_T(&iidx);
  emxFree_int32_T(&r);
  emxFree_boolean_T(&b_booeig);
  emxFree_real_T(&diff);
  emxFree_real_T(&es);
  emxFree_real_T(&b_lmd);
  emxFree_real_T(&GAMold);
  emxFree_real_T(&GAMctr);
  emxFree_real_T(&Ord);
  emxFree_boolean_T(&booeig);
  emxFree_real_T(&lamGAMc);
  emxFree_real_T(&GAM);
}

/* End of code generation (restrshapeGPCM.c) */
