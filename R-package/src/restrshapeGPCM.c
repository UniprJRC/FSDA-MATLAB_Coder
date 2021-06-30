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
#include "fsdaC_emxutil.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "minOrMax.h"
#include "mtimes.h"
#include "restreigen.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
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
  emxArray_real_T *r3;
  double b_GAMold;
  double diffGAM;
  double iter;
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
  bool b_bool;
  /* restrshapeGPCM produces the restricted shape matrix for the 14 GPCM */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('restrshapeGPCM')">Link to the help
   * function</a> */
  /*  */
  /*  */
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
  /*  */
  /*   Optional input arguments: */
  /*  */
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
  /*  */
  /*  See also: restrSigmaGPCM, restrdeterGPCM, restreigen, tclust */
  /*  */
  /*  */
  /*  References: */
  /*  */
  /*    Garcia-Escudero, L.A., Mayo-Iscar, A. and Riani M. (2020), */
  /*    Robust parsimonious clustering models. Submitted. */
  /*  */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('restrshapeGPCM')">Link to the help
   * function</a> */
  /*  */
  /* $LastChangedDate:: 2018-09-15 00:27:12 #$: Date of the last commit */
  /*  Examples: */
  /*  Beginning of code */
  b_bool = !(pa_pars[1] != 'E');
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
  emxInit_real_T(&r3, 2);
  emxInit_real_T(&b_SigmaB, 2);
  if (b_bool || (pa_shb == 1.0)) {
    /*  In this case just restriction shw is used */
    diffGAM = blockedSummation(niini, niini->size[0]);
    i = Ord->size[0] * Ord->size[1];
    Ord->size[0] = (int)pa_v;
    Ord->size[1] = (int)pa_v;
    emxEnsureCapacity_real_T(Ord, i);
    xpageoffset = (int)pa_v * (int)pa_v;
    for (i = 0; i < xpageoffset; i++) {
      Ord->data[i] = 0.0;
    }
    i = (int)pa_k;
    for (j = 0; j < i; j++) {
      b_GAMold = niini->data[j] / diffGAM * (1.0 / lmd->data[j]);
      loop_ub = Omega->size[0];
      b_loop_ub = Omega->size[1];
      i1 = lamGAMc->size[0] * lamGAMc->size[1];
      lamGAMc->size[0] = Omega->size[1];
      lamGAMc->size[1] = Omega->size[0];
      emxEnsureCapacity_real_T(lamGAMc, i1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        for (i2 = 0; i2 < b_loop_ub; i2++) {
          lamGAMc->data[i2 + lamGAMc->size[0] * i1] =
              b_GAMold * Omega->data[(i1 + Omega->size[0] * i2) +
                                     Omega->size[0] * Omega->size[1] * j];
        }
      }
      loop_ub = SigmaB->size[0];
      b_loop_ub = SigmaB->size[1];
      i1 = b_SigmaB->size[0] * b_SigmaB->size[1];
      b_SigmaB->size[0] = SigmaB->size[0];
      b_SigmaB->size[1] = SigmaB->size[1];
      emxEnsureCapacity_real_T(b_SigmaB, i1);
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_SigmaB->data[i2 + b_SigmaB->size[0] * i1] =
              SigmaB->data[(i2 + SigmaB->size[0] * i1) +
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
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          lamGAMc->data[i2 + lamGAMc->size[0] * i1] =
              Omega->data[(i2 + Omega->size[0] * i1) +
                          Omega->size[0] * Omega->size[1] * j];
        }
      }
      b_mtimes(GAMctr, lamGAMc, GAM);
      i1 = r1->size[0] * r1->size[1];
      r1->size[0] = GAM->size[0];
      r1->size[1] = GAM->size[1];
      emxEnsureCapacity_boolean_T(r1, i1);
      loop_ub = GAM->size[0] * GAM->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        r1->data[i1] = rtIsNaN(GAM->data[i1]);
      }
      b_combineVectorElements(r1, r2);
      i1 = r3->size[0] * r3->size[1];
      r3->size[0] = 1;
      r3->size[1] = r2->size[1];
      emxEnsureCapacity_real_T(r3, i1);
      loop_ub = r2->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        r3->data[i1] = r2->data[i1];
      }
      if (d_combineVectorElements(r3) > 0.0) {
        i1 = GAM->size[0] * GAM->size[1];
        GAM->size[0] = (int)pa_v;
        GAM->size[1] = (int)pa_v;
        emxEnsureCapacity_real_T(GAM, i1);
        for (i1 = 0; i1 < xpageoffset; i1++) {
          GAM->data[i1] = 0.0;
        }
      }
      loop_ub = Ord->size[0] * Ord->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Ord->data[i1] += GAM->data[i1];
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
      diff->data[0] = Ord->data[0];
    } else {
      xpageoffset = Ord->size[0];
      vlen = Ord->size[1];
      if (xpageoffset < vlen) {
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
      i1 = xpageoffset - 1;
      for (k = 0; k <= i1; k++) {
        diff->data[k] = Ord->data[k + Ord->size[0] * k];
      }
    }
    b_restreigen(diff, pa_shw, pa_zerotol, pa_userepmat);
    /*  Impose the constraint that the product of the elements of vector */
    /*  GAMpooledc is equal to 1 */
    vlen = diff->size[0];
    if (diff->size[0] == 0) {
      diffGAM = 1.0;
    } else {
      diffGAM = diff->data[0];
      for (k = 2; k <= vlen; k++) {
        diffGAM *= diff->data[k - 1];
      }
    }
    diffGAM = rt_powd_snf(diffGAM, 1.0 / pa_v);
    if (diffGAM == 0.0) {
      diffGAM = 1.0;
    }
    /*  replicate v-by-1 GAMpooledc vector k times */
    loop_ub = diff->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      diff->data[i1] /= diffGAM;
    }
    i1 = GAMc->size[0] * GAMc->size[1];
    GAMc->size[0] = diff->size[0];
    GAMc->size[1] = (int)pa_k;
    emxEnsureCapacity_real_T(GAMc, i1);
    xpageoffset = diff->size[0];
    for (npages = 0; npages < i; npages++) {
      vlen = npages * xpageoffset;
      for (k = 0; k < xpageoffset; k++) {
        GAMc->data[vlen + k] = diff->data[k];
      }
    }
  } else {
    b_bool = !(pa_pars[1] != 'I');
    if (b_bool || (pa_shw == 1.0)) {
      i = GAMc->size[0] * GAMc->size[1];
      GAMc->size[0] = (int)pa_v;
      GAMc->size[1] = (int)pa_k;
      emxEnsureCapacity_real_T(GAMc, i);
      loop_ub = (int)pa_v * (int)pa_k;
      for (i = 0; i < loop_ub; i++) {
        GAMc->data[i] = 1.0;
      }
    } else {
      /*  This is the case strcmp(pars(2),'V') */
      i = GAM->size[0] * GAM->size[1];
      GAM->size[0] = (int)pa_v;
      i1 = (int)pa_k;
      GAM->size[1] = (int)pa_k;
      emxEnsureCapacity_real_T(GAM, i);
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
        for (i = 0; i < b_loop_ub; i++) {
          for (xpageoffset = 0; xpageoffset < loop_ub; xpageoffset++) {
            lamGAMc->data[xpageoffset + lamGAMc->size[0] * i] =
                Omega->data[(xpageoffset + Omega->size[0] * i) +
                            Omega->size[0] * Omega->size[1] * j];
          }
        }
        i = b_SigmaB->size[0] * b_SigmaB->size[1];
        b_SigmaB->size[0] = npages;
        b_SigmaB->size[1] = unnamed_idx_0;
        emxEnsureCapacity_real_T(b_SigmaB, i);
        for (i = 0; i < c_loop_ub; i++) {
          for (xpageoffset = 0; xpageoffset < npages; xpageoffset++) {
            b_SigmaB->data[xpageoffset + b_SigmaB->size[0] * i] =
                SigmaB->data[(xpageoffset + SigmaB->size[0] * i) +
                             SigmaB->size[0] * SigmaB->size[1] * j];
          }
        }
        c_mtimes(lamGAMc, b_SigmaB, GAMctr);
        i = lamGAMc->size[0] * lamGAMc->size[1];
        lamGAMc->size[0] = d_loop_ub;
        lamGAMc->size[1] = p;
        emxEnsureCapacity_real_T(lamGAMc, i);
        for (i = 0; i < e_loop_ub; i++) {
          for (xpageoffset = 0; xpageoffset < d_loop_ub; xpageoffset++) {
            lamGAMc->data[xpageoffset + lamGAMc->size[0] * i] =
                Omega->data[(xpageoffset + Omega->size[0] * i) +
                            Omega->size[0] * Omega->size[1] * j];
          }
        }
        b_mtimes(GAMctr, lamGAMc, Ord);
        if ((Ord->size[0] == 1) && (Ord->size[1] == 1)) {
          i = diff->size[0];
          diff->size[0] = 1;
          emxEnsureCapacity_real_T(diff, i);
          diff->data[0] = Ord->data[0];
        } else {
          xpageoffset = Ord->size[0];
          vlen = Ord->size[1];
          if (xpageoffset < vlen) {
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
          i = xpageoffset - 1;
          for (k = 0; k <= i; k++) {
            diff->data[k] = Ord->data[k + Ord->size[0] * k];
          }
        }
        diffGAM = lmd->data[j];
        xpageoffset = diff->size[0];
        for (i = 0; i < xpageoffset; i++) {
          GAM->data[i + GAM->size[0] * j] = diff->data[i] / diffGAM;
        }
      }
      /*  restrshapecore computes constrained Gamma (shape) matrix */
      /*  */
      /*  The purpose is to find the new constrained shape matrix. */
      /*  This routine is called when modeltype(2) = V (that is in presence of
       */
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
      /*      shb  : scalar greater or equal 1. Constraint to impose among
       * groups. */
      /*            For example, if shb is 5 the ratio of each row of (sorted)
       * output */
      /*            matrix GAMc will not be greater than 5. */
      /*   zerotol : scalar. Tolerance value to declare all input values equal
       * to 0 */
      /*            in the eigenvalues restriction routine (file restreigen.m).
       */
      /*  maxiterS : maximum number of iterations in the iterative procedure. */
      /*            Scalar. */
      /*      tolS : tolerance to use to exit the iterative procedure. Scalar.
       * The */
      /*            iterative procedure stops when the relative difference of */
      /*            output matrix GAMc is smaller than itertol in two
       * consecutive */
      /*            iterations or when maxiterS is reached. */
      /*  */
      /*  */
      /*  Output: */
      /*  */
      /*      GAMc : constrained shape matrix. Matrix of size v-by-k containing
       * in */
      /*            column j the elements on the main diagonal of shape matrix
       */
      /*            $\Gamma_j$. The elements of GAMc satisfy the following */
      /*            constraints: */
      /*            The product of the elements of each column is equal to 1. */
      /*            The ratio among the largest elements of each column is */
      /*            not greater than pa.shb. */
      /*            The ratio among the second largest elements of each column
       * is */
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
      loop_ub = GAM->size[0] * GAM->size[1];
      for (i = 0; i < loop_ub; i++) {
        lamGAMc->data[i] = GAM->data[i];
      }
      /*  Initialize GAMc = Shape matrix constrained */
      d_loop_ub = GAM->size[1] - 1;
      p = GAM->size[0];
      /*  Apply eigenvalue restriction inside each group using constraining
       * parameter */
      /*  shw */
      /*  The ratio of each column of matrix lamGAMc is not greater than shw */
      maximum(GAM, es);
      minimum(GAM, r3);
      i = booeig->size[0] * booeig->size[1];
      booeig->size[0] = 1;
      booeig->size[1] = es->size[1];
      emxEnsureCapacity_boolean_T(booeig, i);
      loop_ub = es->size[1];
      for (i = 0; i < loop_ub; i++) {
        booeig->data[i] = (es->data[i] / r3->data[i] > pa_shw);
      }
      i = GAM->size[1];
      for (j = 0; j < i; j++) {
        if (booeig->data[j]) {
          loop_ub = GAM->size[0];
          i1 = diff->size[0];
          diff->size[0] = GAM->size[0];
          emxEnsureCapacity_real_T(diff, i1);
          for (i1 = 0; i1 < loop_ub; i1++) {
            diff->data[i1] = GAM->data[i1 + GAM->size[0] * j];
          }
          b_restreigen(diff, pa_shw, pa_zerotol, pa_userepmat);
          loop_ub = diff->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            lamGAMc->data[i1 + lamGAMc->size[0] * j] = diff->data[i1];
          }
        } else {
          loop_ub = GAM->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            lamGAMc->data[i1 + lamGAMc->size[0] * j] =
                GAM->data[i1 + GAM->size[0] * j];
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
      xpageoffset = unnamed_idx_0 * c_loop_ub;
      for (i = 0; i < xpageoffset; i++) {
        GAM->data[i] = rtNaN;
      }
      i = GAMctr->size[0] * GAMctr->size[1];
      GAMctr->size[0] = unnamed_idx_0;
      GAMctr->size[1] = c_loop_ub;
      emxEnsureCapacity_real_T(GAMctr, i);
      for (i = 0; i < xpageoffset; i++) {
        GAMctr->data[i] = rtNaN;
      }
      i = GAMc->size[0] * GAMc->size[1];
      GAMc->size[0] = unnamed_idx_0;
      GAMc->size[1] = c_loop_ub;
      emxEnsureCapacity_real_T(GAMc, i);
      for (i = 0; i < xpageoffset; i++) {
        GAMc->data[i] = rtNaN;
      }
      while ((diffGAM > pa_tolS) && (iter < pa_maxiterS)) {
        iter++;
        /*  In this stage GAM(:,j) is diag(\lambda_j^(1/p) \times \Gamma_j ) */
        i = GAMold->size[0];
        GAMold->size[0] = lamGAMc->size[0] * lamGAMc->size[1];
        emxEnsureCapacity_real_T(GAMold, i);
        loop_ub = lamGAMc->size[0] * lamGAMc->size[1];
        for (i = 0; i < loop_ub; i++) {
          GAMold->data[i] = lamGAMc->data[i];
        }
        vlen = lamGAMc->size[0];
        if ((lamGAMc->size[0] == 0) || (lamGAMc->size[1] == 0)) {
          i = es->size[0] * es->size[1];
          es->size[0] = 1;
          es->size[1] = lamGAMc->size[1];
          emxEnsureCapacity_real_T(es, i);
          loop_ub = lamGAMc->size[1];
          for (i = 0; i < loop_ub; i++) {
            es->data[i] = 1.0;
          }
        } else {
          npages = lamGAMc->size[1];
          i = es->size[0] * es->size[1];
          es->size[0] = 1;
          es->size[1] = lamGAMc->size[1];
          emxEnsureCapacity_real_T(es, i);
          for (e_loop_ub = 0; e_loop_ub < npages; e_loop_ub++) {
            xpageoffset = e_loop_ub * lamGAMc->size[0];
            es->data[e_loop_ub] = lamGAMc->data[xpageoffset];
            for (k = 2; k <= vlen; k++) {
              es->data[e_loop_ub] *= lamGAMc->data[(xpageoffset + k) - 1];
            }
          }
        }
        diffGAM = 1.0 / (double)p;
        i = b_lmd->size[0] * b_lmd->size[1];
        b_lmd->size[0] = 1;
        b_lmd->size[1] = es->size[1];
        emxEnsureCapacity_real_T(b_lmd, i);
        xpageoffset = es->size[1];
        for (k = 0; k < xpageoffset; k++) {
          b_lmd->data[k] = rt_powd_snf(es->data[k], diffGAM);
        }
        i = es->size[0] * es->size[1];
        es->size[0] = 1;
        es->size[1] = b_lmd->size[1];
        emxEnsureCapacity_real_T(es, i);
        loop_ub = b_lmd->size[1];
        for (i = 0; i < loop_ub; i++) {
          es->data[i] = b_lmd->data[i];
        }
        npages = b_lmd->size[1];
        for (e_loop_ub = 0; e_loop_ub < npages; e_loop_ub++) {
          if (b_lmd->data[e_loop_ub] == 0.0) {
            es->data[e_loop_ub] = 1.0;
          }
        }
        /*  In this stage GAM(:,j) is diag(\Gamma_j ) */
        /*  det(Gamma_j)=1 */
        i = Ord->size[0] * Ord->size[1];
        Ord->size[0] = p;
        Ord->size[1] = es->size[1];
        emxEnsureCapacity_real_T(Ord, i);
        vlen = es->size[1];
        for (npages = 0; npages < vlen; npages++) {
          xpageoffset = npages * p;
          for (e_loop_ub = 0; e_loop_ub < p; e_loop_ub++) {
            Ord->data[xpageoffset + e_loop_ub] = es->data[npages];
          }
        }
        loop_ub = lamGAMc->size[0] * lamGAMc->size[1];
        for (i = 0; i < loop_ub; i++) {
          lamGAMc->data[i] /= Ord->data[i];
        }
        npages = lamGAMc->size[0] * lamGAMc->size[1] - 1;
        xpageoffset = 0;
        for (e_loop_ub = 0; e_loop_ub <= npages; e_loop_ub++) {
          if (lamGAMc->data[e_loop_ub] == 0.0) {
            xpageoffset++;
          }
        }
        i = r->size[0];
        r->size[0] = xpageoffset;
        emxEnsureCapacity_int32_T(r, i);
        vlen = 0;
        for (e_loop_ub = 0; e_loop_ub <= npages; e_loop_ub++) {
          if (lamGAMc->data[e_loop_ub] == 0.0) {
            r->data[vlen] = e_loop_ub + 1;
            vlen++;
          }
        }
        loop_ub = r->size[0] - 1;
        for (i = 0; i <= loop_ub; i++) {
          lamGAMc->data[r->data[i] - 1] = 1.0;
        }
        i = Ord->size[0] * Ord->size[1];
        Ord->size[0] = unnamed_idx_0;
        Ord->size[1] = c_loop_ub;
        emxEnsureCapacity_real_T(Ord, i);
        for (j = 0; j <= d_loop_ub; j++) {
          loop_ub = lamGAMc->size[0];
          i = diff->size[0];
          diff->size[0] = lamGAMc->size[0];
          emxEnsureCapacity_real_T(diff, i);
          for (i = 0; i < loop_ub; i++) {
            diff->data[i] = lamGAMc->data[i + lamGAMc->size[0] * j];
          }
          sort(diff, iidx);
          loop_ub = diff->size[0];
          for (i = 0; i < loop_ub; i++) {
            GAM->data[i + GAM->size[0] * j] = diff->data[i];
          }
          loop_ub = iidx->size[0];
          for (i = 0; i < loop_ub; i++) {
            Ord->data[i + Ord->size[0] * j] = iidx->data[i];
          }
        }
        /*  Apply restriction between groups */
        /*  The elements of each column of GAM are sorted from largest to
         * smallest */
        /*  The ranks of the orginal ordering of each column is store in matrix
         * Ord */
        /*  The ratio of each row of matrix GAMc is not greater than shb */
        vlen = GAM->size[0] - 1;
        xpageoffset = GAM->size[1];
        i = ex->size[0];
        ex->size[0] = GAM->size[0];
        emxEnsureCapacity_real_T(ex, i);
        if (GAM->size[0] >= 1) {
          for (e_loop_ub = 0; e_loop_ub <= vlen; e_loop_ub++) {
            ex->data[e_loop_ub] = GAM->data[e_loop_ub];
          }
          for (j = 2; j <= xpageoffset; j++) {
            for (e_loop_ub = 0; e_loop_ub <= vlen; e_loop_ub++) {
              diffGAM = GAM->data[e_loop_ub + GAM->size[0] * (j - 1)];
              if (rtIsNaN(diffGAM)) {
                b_bool = false;
              } else if (rtIsNaN(ex->data[e_loop_ub])) {
                b_bool = true;
              } else {
                b_bool = (ex->data[e_loop_ub] > diffGAM);
              }
              if (b_bool) {
                ex->data[e_loop_ub] = diffGAM;
              }
            }
          }
        }
        f_maximum(GAM, diff);
        i = b_booeig->size[0];
        b_booeig->size[0] = diff->size[0];
        emxEnsureCapacity_boolean_T(b_booeig, i);
        loop_ub = diff->size[0];
        for (i = 0; i < loop_ub; i++) {
          b_booeig->data[i] = (diff->data[i] / ex->data[i] > pa_shb);
        }
        for (e_loop_ub = 0; e_loop_ub < p; e_loop_ub++) {
          if (b_booeig->data[e_loop_ub]) {
            loop_ub = GAM->size[1];
            i = es->size[0] * es->size[1];
            es->size[0] = 1;
            es->size[1] = GAM->size[1];
            emxEnsureCapacity_real_T(es, i);
            for (i = 0; i < loop_ub; i++) {
              es->data[i] = GAM->data[e_loop_ub + GAM->size[0] * i];
            }
            c_restreigen(es, niini, pa_shb, pa_zerotol, pa_userepmat);
            loop_ub = es->size[1];
            for (i = 0; i < loop_ub; i++) {
              GAMctr->data[e_loop_ub + GAMctr->size[0] * i] = es->data[i];
            }
          } else {
            loop_ub = GAM->size[1];
            for (i = 0; i < loop_ub; i++) {
              GAMctr->data[e_loop_ub + GAMctr->size[0] * i] =
                  GAM->data[e_loop_ub + GAM->size[0] * i];
            }
          }
        }
        /*  Reconstruct the original order for each column */
        for (j = 0; j <= d_loop_ub; j++) {
          loop_ub = GAMctr->size[0];
          for (i = 0; i < loop_ub; i++) {
            GAMc->data[((int)Ord->data[i + Ord->size[0] * j] +
                        GAMc->size[0] * j) -
                       1] = GAMctr->data[i + GAMctr->size[0] * j];
          }
        }
        i = lamGAMc->size[0] * lamGAMc->size[1];
        lamGAMc->size[0] = GAMc->size[0];
        lamGAMc->size[1] = GAMc->size[1];
        emxEnsureCapacity_real_T(lamGAMc, i);
        loop_ub = GAMc->size[0] * GAMc->size[1];
        /*  GAMold = old values of matrix Gamma in vectorized form */
        /*  diff = (new values of Gamma) - (old values of Gamma) */
        i = diff->size[0];
        diff->size[0] = GAMc->size[0] * GAMc->size[1];
        emxEnsureCapacity_real_T(diff, i);
        for (i = 0; i < loop_ub; i++) {
          lamGAMc->data[i] = GAMc->data[i];
          diff->data[i] = GAMc->data[i] - GAMold->data[i];
        }
        /*  relative sum of squares of the differences */
        diffGAM = 0.0;
        loop_ub = diff->size[0];
        for (i = 0; i < loop_ub; i++) {
          diffGAM += diff->data[i] * diff->data[i];
        }
        b_GAMold = 0.0;
        loop_ub = GAMold->size[0];
        for (i = 0; i < loop_ub; i++) {
          b_GAMold += GAMold->data[i] * GAMold->data[i];
        }
        diffGAM /= b_GAMold;
      }
    }
  }
  emxFree_real_T(&b_SigmaB);
  emxFree_real_T(&r3);
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
