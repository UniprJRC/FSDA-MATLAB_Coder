/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * restrSigmaGPCM.c
 *
 * Code generation for function 'restrSigmaGPCM'
 *
 */

/* Include files */
#include "restrSigmaGPCM.h"
#include "any.h"
#include "blockedSummation.h"
#include "combineVectorElements.h"
#include "cpcE.h"
#include "cpcV.h"
#include "det.h"
#include "diag.h"
#include "eig.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_internal_types.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "minOrMax.h"
#include "mtimes.h"
#include "power.h"
#include "repmat.h"
#include "restreigen.h"
#include "restrshapeGPCM.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "strcmp.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void b_restrSigmaGPCM(emxArray_real_T *SigmaB, const emxArray_real_T *niini,
                      const char pa_pars[3], double pa_cdet, double pa_shw,
                      double pa_shb, double pa_maxiterDSR, double pa_maxiterS,
                      double pa_tolR, double pa_tolS, double pa_userepmat,
                      double pa_zerotol, emxArray_real_T *lmd,
                      emxArray_real_T *OMG)
{
  static const char b[3] = {'E', 'V', 'E'};
  static const char b_b[3] = {'V', 'V', 'E'};
  cell_wrap_60 r;
  cell_wrap_60 r1;
  emxArray_boolean_T *x;
  emxArray_creal_T *r2;
  emxArray_real_T *GAM;
  emxArray_real_T *GAMfc;
  emxArray_real_T *GAMold;
  emxArray_real_T *OMGold;
  emxArray_real_T *Wk;
  emxArray_real_T *b_OMG;
  emxArray_real_T *b_Wk;
  emxArray_real_T *diff;
  emxArray_real_T *eyep;
  emxArray_real_T *lmdold;
  emxArray_real_T *r3;
  emxArray_real_T *r4;
  emxArray_real_T *wk;
  double difflmd[3];
  double a;
  double b_GAMold;
  double b_diff;
  double b_lmdold;
  double iter;
  double maxiterDSR;
  double sumnini;
  int b_loop_ub;
  int b_ret;
  int b_unnamed_idx_1;
  int c_loop_ub;
  int d_loop_ub;
  int e_loop_ub;
  int f_loop_ub;
  int g_loop_ub;
  int h_loop_ub;
  int i;
  int i1;
  int i_loop_ub;
  int j;
  int j_loop_ub;
  int k_loop_ub;
  int loop_ub;
  int nv;
  int pa_k;
  int pa_maxiterR;
  int pa_sortsh;
  int pa_v;
  int ret;
  int unnamed_idx_0;
  int unnamed_idx_1;
  int v;
  bool varargin_1[7];
  bool b_varargin_1[6];
  bool b_bool;
  bool cpc;
  bool exitg1;
  bool guard1 = false;
  /* restrSigmaGPCM computes constrained covariance matrices for the 14 GPCM
   * specifications */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('restrSigmaGPCM')">Link to the help
   * function</a> */
  /*  */
  /*  */
  /*   This routine applies the constraints to the covariance matrices using the
   */
  /*   specifications contained in input structure pa. */
  /*  */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*    SigmaB : initial unconstrained covariance matrices. p-by-p-by-k array.
   */
  /*             p-by-p-by-k array containing the k covariance matrices for the
   */
  /*             k groups. */
  /*                Data Types - single|double */
  /*  */
  /*    niini  : sizes of the groups. Vector. Vector of length k containing */
  /*            the size of the groups. ninini can be either a row or a columns
   */
  /*            vector. */
  /*                Data Types - single|double */
  /*  */
  /*       pa  : Constraints to apply and model specification. Structure. */
  /*             Structure containing the following fields: */
  /*              pa.pars= type of Gaussian Parsimonious Clustering Model.
   * Character. */
  /*                A 3 letter word in the set: */
  /*                'VVE','EVE','VVV','EVV','VEE','EEE','VEV','EEV','VVI', */
  /*                'EVI','VEI','EEI','VII','EII'. */
  /*                The field pa.pars is compulsory. All the other fields are */
  /*                non necessary. If they are not present they are set to */
  /*                their default values. */
  /*              pa.cdet = scalar in the interval [1 Inf) which specifies the
   */
  /*                the restriction which has to be applied to the determinants.
   */
  /*                If pa.cdet=1 all determinants are forced to be equal. */
  /*                See section More About for additional details. */
  /*              pa.shw = scalar in the interval [1 Inf) which specifies the */
  /*                the restriction which has to be applied to the elements of
   */
  /*                the shape matrices inside each group. If pa.shw=1 all
   * diagonal */
  /*                elements of the shape matrix of cluster j (with j=1, ..., */
  /*                k) will be equal. */
  /*              pa.shb = scalar in the interval [1 Inf) which specifies the */
  /*                the restriction which has to be applied to the elements of
   */
  /*                the shape matrices across each group. */
  /*              pa.maxiterS = positive integer which specifies the maximum */
  /*                number of iterations to obtain the restricted shape matrix.
   */
  /*                This parameter is used by routine restrshapepars. The */
  /*                default value of pa.maxiterS is 5. */
  /*              pa.maxiterR = positive integer which specifies the maximum */
  /*                number of iterations to obtain the common rotation matrix */
  /*                in presence of varying shape. */
  /*                This parameter is used by routine cpcV. The */
  /*                default value of pa.maxiterR is 20. */
  /*           pa.maxiterDSR = positive integer which specifies the maximum */
  /*                number of iterations to obtain the requested restricted */
  /*                determinants, shape matrices and rotation. For all */
  /*                parametrizations  pa.maxiterDSR is set to 1 apart from for
   */
  /*                the specifications 'VVE', 'EVE' and 'VEE'. The default */
  /*                value of pa.maxiterDSR is 20. */
  /*            pa.tolS=tolerance to use to exit the iterative procedure for */
  /*                estimating the shape. Scalar. The */
  /*                iterative procedures stops when the relative difference of
   */
  /*                a certain output matrix is smaller than itertol in two
   * consecutive */
  /*                iterations. The default value of pa.tol is 1e-12. */
  /*       pa.zerotol = tolerance value to declare all input values equal to 0
   */
  /*                in the eigenvalues restriction routine (file restreigen.m)
   */
  /*                or in the final reconstruction of covariance matrices. */
  /*                The default value of zerotol is 1e-10. */
  /*           pa.msg = boolean which if set equal to true enables to monitor */
  /*                the relative change of the estimates of lambda Gamma and */
  /*                Omega in each iteration. The default value of pa.msg is */
  /*                false, that is nothing is displayed in each iteration. */
  /*            pa.k  = the number of groups. */
  /*            pa.v  = the number of variables. */
  /*    pa.userepmat  = scalar, which specifies whether to use implicit */
  /*                    expansion or bsxfun.  pa.userepmat =2 implies implicit
   */
  /*                    expansion, pa.userepmat=1 implies use of bsxfun. The */
  /*                    default is to use implicit expansion (faster) */
  /*                    if verLessThanFS(9.1) is false and bsxfun if MATLAB is
   */
  /*                    older than 2016b. */
  /*                Data Types - struct */
  /*  */
  /*     nocheck : check in input option pa. Boolean. Specify whether it is */
  /*                necessary to check the input fields in */
  /*                previous input option pa. If nocheck is */
  /*                false (default is true) no check is performed on input */
  /*                structure pa. */
  /*                Data Types - Boolean */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*      lmd  : determinants. Vector. */
  /*              Initial estimates of (constrained) determinants */
  /*                  Example - [ 2 4 6] */
  /*                  Data Types - double */
  /*       OMG : rotation matrices. p-by-p-by-k array. */
  /*              p-by-p-by-k array containing the preliminary estimates of the
   */
  /*              rotation matrices for the k groups. If common rotation is */
  /*              imposed (third letter is equal to E), */
  /*              OMG(:,:,1)=...=OMG(:,:,k). */
  /*                  Example - .5*hadamard(4) */
  /*                  Data Types - double */
  /*  */
  /*  Output: */
  /*  */
  /*  */
  /*     Sigma  : constrained covariance matrices. p-by-p-by-k array. */
  /*              p-by-p-by-k array containing the k covariance matrices for */
  /*              the k groups. See section 'More About' for the notation for */
  /*              the eigen-decomposition of the component covariance matrices.
   */
  /*      lmd  : restricted determinants. Vector. */
  /*              Row vector of length $k$ containing restricted determinants.
   */
  /*              More precisely, the $j$-th element of lmd contains */
  /*              $\lambda_j^{1/p}$. The elements of lmd satisfy the */
  /*              constraint pa.cdet in the sense that $\max(lmd) / \min(lmd) */
  /*              \leq pa.cdet^{(1/p)}$. In other words, the ratio between the
   */
  /*              largest and the smallest determinant is not greater than */
  /*              pa.cdet. All the elements of vector lmd are equal if */
  /*              modeltype is E** or if pa.cdet=1. */
  /*       OMG : constrained rotation matrices. p-by-p-by-k array. */
  /*              p-by-p-by-k array containing the k rotation matrices for */
  /*              the k groups. If common rotation is imposed (third letter is
   */
  /*              equal to E), OMG(:,:,1)=...=OMG(:,:,k). */
  /*      GAM : constrained shape matrix. 2D array. */
  /*            Matrix of size p-by-k containing in */
  /*            column j the elements on the main diagonal of shape matrix */
  /*            $\Gamma_j$. The elements of GAM satisfy the following */
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
  /*  */
  /*  */
  /*  More About: */
  /*  The notation for the eigen-decomposition of the */
  /*  component covariance matrices is as follows */
  /*  */
  /*  \[ */
  /*  \Sigma_j= \lambda_j^{1/p} \Omega_j \Gamma_j \Omega_j'  \qquad j=1, 2,
   * \ldots, k */
  /*  \] */
  /*  The dimension of matrices $\Omega_j$ (rotation) and $\Gamma_j$ (shape) is
   * $p\times p$. */
  /*  */
  /*  $c_{det}=$ scalar, constraint associated with the determinants. */
  /*  */
  /*  $c_{shw}=$ scalar, constraint inside each group of the shape matrix. */
  /*  */
  /*  $c_{shb}=$ scalar, constraint among groups of the shape matrix. */
  /*  */
  /*  Note that if you impose equal volumes $c_{det}=1$. Similarly, if you */
  /*  impose a spherical shape $c_{shw}=1$. */
  /*  */
  /*  We also denote with */
  /*  */
  /*    [1] $\Sigma_B$ the 3D array of size $p\times p \times k$ containing the
   */
  /*    empirical covariance matrices of the $k$ groups, before applying the */
  /*    constraints coming from the 14 parametrizations. In the code $\Sigma_B$
   */
  /*    is called $SigmaB$. The $j$-th slice of this 3D array of size $p\times
   */
  /*    p$ is denoted with symbol $\hat \Sigma_j$. */
  /*    [2] $\Omega$ the 3D array of size $p\times p \times k$ containing the */
  /*    rotation matrices of the $k$ groups. In the code $\Omega$  is called */
  /*    $OMG$. The $j$-th slice of this 3D array of size $p\times p$ is called
   */
  /*    $\hat \Omega_j$. */
  /*    [3] $\Gamma$ the $p\times k$ matrix containing in column $j$, with */
  /*    $j=1, 2, \ldots, k$, the diagonal elements of matrix $\Gamma_j$ (shape
   */
  /*    matrix of group j). In the code matrix $\Gamma$ is called GAM. */
  /*    After the application of this routine, the product of the elements of */
  /*    each column of matrix GAM is equal to 1. */
  /*    The ratio among the largest (second largest, ...smallest) elements of */
  /*    each column is not greater than $c_{shb}$ (pa.shb). */
  /*    The ratio of the elements of each column is not greater than */
  /*    $c_{shw}$ (pa.shb). All the columns of matrix GAM are equal if the
   * second */
  /*    letter of modeltype is E. All the columns of matrix GAM are */
  /*    equal to 1 if the second letter of modeltype is I. */
  /*    [4] niini the vector of length $k$ containing the number of units */
  /*    (weights) associated to each group. */
  /*    [5]  $\lambda$ = the vector of length $p$ containing in the $j$-th */
  /*    position $\lambda_j^{1/p}=|\Sigma_j|^{1/p}$. In the code  vector */
  /*    $\lambda$ is called $lmd$. */
  /*    The elements of lmd satisfy the constraint pa.cdet in the sense that */
  /*    $\max(lmd) / \min(lmd) \leq pa.cdet^{(1/p)}$. In other words, the */
  /*    ratio between the largest and the smallest determinant is not */
  /*    greater than pa.cdet. All the elements of vector lmd are equal */
  /*    if modeltype is E** or if $c_{det}=1$ (pa.cdet=1). */
  /*  */
  /*  */
  /*  */
  /*  See also restrshapeGPCM, restrdeterGPCM, restreigen, tclust */
  /*  */
  /*  */
  /*  References: */
  /*  */
  /*    Garcia-Escudero, L.A., Mayo-Iscar, A. and Riani M. (2019), */
  /*    Robust parsimonious clustering models. Submitted. */
  /*  */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('restrSigmaGPCM')">Link to the help
   * function</a> */
  /*  */
  /* $LastChangedDate:: 2018-09-15 00:27:12 #$: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % Use of restrSigmaGPCM with just one output argument. */
  /*     % Generate 3 cov matrices of size 2-by-2 */
  /*     rng('default') */
  /*     rng(1500) */
  /*     Sig = [1 .5; .5 2]; */
  /*     df = 10; */
  /*     k=2; */
  /*     v=2; */
  /*     Sigma=zeros(v,v,k); */
  /*     for j=1:k */
  /*         Sigma(:,:,j) = wishrnd(Sig,df)/df; */
  /*     end */
  /*     niini=2; */
  /*     % Apply model EEE. */
  /*     pa=struct; */
  /*     pa.pars='EEE'; */
  /*     SigmaNEW  = restrSigmaGPCM(Sigma, niini, pa); */
  /* } */
  /* { */
  /*     %% Use of restrSigmaGPCM with all default options. */
  /*     % Generate 3 cov matrices of size 2-by-2 */
  /*     rng('default') */
  /*     rng(1500) */
  /*     Sig = [1 .5; .5 2]; */
  /*     df = 10; */
  /*     k=3; */
  /*     v=2; */
  /*     Sigma=zeros(v,v,k); */
  /*     for j=1:k */
  /*         Sigma(:,:,j) = wishrnd(Sig,df)/df; */
  /*     end */
  /*     niini=[20 150 200]; */
  /*     % Apply model VVE. */
  /*     pa=struct; */
  /*     pa.pars='VVE'; */
  /*     [SigmaNEW, lmd, OMG, GAM]  = restrSigmaGPCM(Sigma, niini, pa); */
  /* } */
  /* { */
  /*     %% Use function genSigmaGPCM to generate the covariance matrices. */
  /*     v=3; */
  /*     k=5; */
  /*     pa=struct; */
  /*     pa.pars='EVI'; */
  /*     S=genSigmaGPCM(v, k, pa); */
  /*     niini=100*ones(1,k); */
  /*     pa.pars='VVE'; */
  /*     [SigmaNEW, lmd, OMG, GAM]  = restrSigmaGPCM(S, niini, pa); */
  /* } */
  /* { */
  /*     %% Generate ad hoc cov matrices. */
  /*     k=7; v=20; n=100; */
  /*     rng('default') */
  /*     seed=1141; */
  /*     add=ones(v,v)+diag(1:v); */
  /*     niini= round(100*mtR(k,0,seed)); */
  /*     Sigma=zeros(v,v,k); */
  /*     for j=1:k */
  /*         Sigma(:,:,j)=cov(reshape(mtR(n*v,1,-1),n,v)).*add; */
  /*     end */
  /*     sph=struct; */
  /*     sph.pars='EVV'; */
  /*     niini=100*ones(k,1); */
  /*     [SigmaNEW, lmd, OMG, GAM]  = restrSigmaGPCM(Sigma, niini', sph); */
  /* } */
  /*  Beginning of code */
  /*  Set default values for tolerances and maximum number of iterations. */
  /*  pa = structure containing modeltype, number of iterations ..... */
  /*  if nocheck is false check that the fieldnames of input structure pa are */
  /*  those specified in input structure options. */
  /*  SigmaB = p-times-p-times-k = empirical covariance matrix */
  v = SigmaB->size[0];
  pa_v = SigmaB->size[0];
  pa_k = niini->size[0];
  /*  Tolerance associated to the maximum of the elements which have to be */
  /*  constrained. If the maximum  is smaller than zerotol restreigen */
  /*  procedures returns in output what has been given in input. For example, */
  /*  if the elements which have to be constrained are the eigenvalues of the */
  /*  covariance matrices and the max of the eigenvalues is smaller than */
  /*  zerotol it means that all n points are concentrated in k points and there
   */
  /*  is a perfect fit therefore no further changes on the eigenvalues is */
  /*  required. */
  /*  pa.pars = character vector with three letters specifying the type of the
   */
  /*  14 constraints (i.e. EEE, CVVV, EVE, ...) */
  /*  Select cases in which maxiterDSR>1 and specify relative tolerance */
  /*  EVE VEE VVE VVV VEV VVI and VEI require iterations */
  /*  All the other specification do not */
  /*  Model which require more than one iteration in the main loop */
  l_strcmp(pa_pars, varargin_1);
  cpc = varargin_1[0];
  for (ret = 0; ret < 6; ret++) {
    if ((int)cpc < (int)varargin_1[ret + 1]) {
      cpc = true;
    }
  }
  if (cpc) {
    maxiterDSR = pa_maxiterDSR;
  } else {
    maxiterDSR = 1.0;
  }
  /*  Cases with different shape (they require iteration for the shape) */
  m_strcmp(pa_pars, b_varargin_1);
  cpc = b_varargin_1[0];
  for (ret = 0; ret < 5; ret++) {
    if ((int)cpc < (int)b_varargin_1[ret + 1]) {
      cpc = true;
    }
  }
  if (!cpc) {
    pa_maxiterS = 1.0;
  }
  pa_maxiterR = 20;
  r.f1[0] = pa_pars[0];
  r1.f1[0] = pa_pars[0];
  r.f1[1] = pa_pars[1];
  r1.f1[1] = pa_pars[1];
  r.f1[2] = pa_pars[2];
  r1.f1[2] = pa_pars[2];
  ret = memcmp(&r.f1[0], &b[0], 3);
  b_ret = memcmp(&r.f1[0], &b_b[0], 3);
  cpc = (ret == 0);
  ret = memcmp(&r1.f1[0], &b[0], 3);
  cpc = (((ret == 0) < (b_ret == 0)) || cpc);
  if (cpc) {
    /*  maxiterR=pa.maxiterR; */
    cpc = true;
  } else {
    cpc = false;
    pa_maxiterR = 1;
  }
  /*  Parameters not set by the user */
  b_bool = !(pa_pars[2] != 'E');
  if (b_bool) {
    pa_sortsh = 1;
  } else {
    b_bool = !(pa_pars[2] != 'I');
    if (b_bool) {
      pa_sortsh = 1;
    } else {
      pa_sortsh = 0;
    }
  }
  b_bool = !(pa_pars[0] != 'E');
  if (b_bool) {
    pa_cdet = 1.0;
  }
  /*  If OMG is identity, shape restriction parameter within groups is set to 1
   */
  b_bool = !(pa_pars[1] != 'I');
  if (b_bool) {
    pa_shw = 1.0;
  }
  /*  if Equal shape is imposed shape restriction parameter between groups is */
  /*  set to 1 */
  b_bool = !(pa_pars[1] != 'E');
  if (b_bool) {
    pa_shb = 1.0;
  }
  emxInit_real_T(&Wk, 3);
  /*  Initialization part */
  b_ret = SigmaB->size[0];
  unnamed_idx_1 = SigmaB->size[0];
  i = Wk->size[0] * Wk->size[1] * Wk->size[2];
  Wk->size[0] = b_ret;
  Wk->size[1] = unnamed_idx_1;
  Wk->size[2] = niini->size[0];
  emxEnsureCapacity_real_T(Wk, i);
  ret = b_ret * unnamed_idx_1 * niini->size[0];
  for (i = 0; i < ret; i++) {
    Wk->data[i] = 0.0;
  }
  emxInit_real_T(&wk, 1);
  i = wk->size[0];
  wk->size[0] = niini->size[0];
  emxEnsureCapacity_real_T(wk, i);
  ret = niini->size[0];
  for (i = 0; i < ret; i++) {
    wk->data[i] = 0.0;
  }
  emxInit_real_T(&GAMfc, 2);
  i = GAMfc->size[0] * GAMfc->size[1];
  GAMfc->size[0] = SigmaB->size[0];
  GAMfc->size[1] = niini->size[0];
  emxEnsureCapacity_real_T(GAMfc, i);
  ret = SigmaB->size[0] * niini->size[0];
  for (i = 0; i < ret; i++) {
    GAMfc->data[i] = 0.0;
  }
  b_bool = !(pa_pars[2] != 'E');
  emxInit_real_T(&GAMold, 1);
  emxInit_real_T(&b_Wk, 2);
  if (b_bool) {
    /*  In the common principal components case it is necessary to find */
    /*  initial values for OMG (rotation), and lmd (unconstrained */
    /*  determinants) */
    /*          % Initialize lmd */
    /*          lmd = NaN(1,k); */
    /*  */
    /*          if strcmp(pars(1),'V') */
    /*              for j=1:k */
    /*                  % lmd(j)=exp(log(det(SigmaB(:,:,j)))/v); */
    /*                  lmd(j) = (det(SigmaB(:,:,j))) ^ (1 / v); */
    /*              end */
    /*          else */
    /*              lmd = ones(1,k); */
    /*          end */
    /*  In presence of variable shape */
    /*  compute Wk and wk once and for all. */
    /*  Wk(:,:,j) contains (n_j/n) \Sigma_j */
    /*  wk(j) contains largest eigenvalue of Wk(:,:,j) */
    /*  These two matrices will be used inside routine cpcV */
    ret = memcmp(&pa_pars[0], &b_b[0], 3);
    emxInit_creal_T(&r2, 1);
    guard1 = false;
    if (ret == 0) {
      guard1 = true;
    } else {
      ret = memcmp(&pa_pars[0], &b[0], 3);
      if (ret == 0) {
        guard1 = true;
      }
    }
    if (guard1) {
      sumnini = blockedSummation(niini, niini->size[0]);
      i = niini->size[0];
      i1 = Wk->size[0] * Wk->size[1] * Wk->size[2];
      Wk->size[0] = b_ret;
      Wk->size[1] = unnamed_idx_1;
      Wk->size[2] = niini->size[0];
      emxEnsureCapacity_real_T(Wk, i1);
      i1 = wk->size[0];
      wk->size[0] = niini->size[0];
      emxEnsureCapacity_real_T(wk, i1);
      for (j = 0; j < i; j++) {
        a = niini->data[j] / sumnini;
        ret = SigmaB->size[0];
        b_ret = SigmaB->size[1];
        for (i1 = 0; i1 < b_ret; i1++) {
          for (unnamed_idx_1 = 0; unnamed_idx_1 < ret; unnamed_idx_1++) {
            Wk->data[(unnamed_idx_1 + Wk->size[0] * i1) +
                     Wk->size[0] * Wk->size[1] * j] =
                a * SigmaB->data[(unnamed_idx_1 + SigmaB->size[0] * i1) +
                                 SigmaB->size[0] * SigmaB->size[1] * j];
          }
        }
        ret = Wk->size[0];
        b_ret = Wk->size[1];
        i1 = b_Wk->size[0] * b_Wk->size[1];
        b_Wk->size[0] = Wk->size[0];
        b_Wk->size[1] = Wk->size[1];
        emxEnsureCapacity_real_T(b_Wk, i1);
        for (i1 = 0; i1 < b_ret; i1++) {
          for (unnamed_idx_1 = 0; unnamed_idx_1 < ret; unnamed_idx_1++) {
            b_Wk->data[unnamed_idx_1 + b_Wk->size[0] * i1] =
                Wk->data[(unnamed_idx_1 + Wk->size[0] * i1) +
                         Wk->size[0] * Wk->size[1] * j];
          }
        }
        c_eig(b_Wk, r2);
        i1 = GAMold->size[0];
        GAMold->size[0] = r2->size[0];
        emxEnsureCapacity_real_T(GAMold, i1);
        ret = r2->size[0];
        for (i1 = 0; i1 < ret; i1++) {
          GAMold->data[i1] = r2->data[i1].re;
        }
        wk->data[j] = b_maximum(GAMold);
      }
    }
    emxFree_creal_T(&r2);
  }
  emxInit_real_T(&GAM, 2);
  i = GAM->size[0] * GAM->size[1];
  GAM->size[0] = SigmaB->size[0];
  GAM->size[1] = niini->size[0];
  emxEnsureCapacity_real_T(GAM, i);
  ret = SigmaB->size[0] * niini->size[0];
  for (i = 0; i < ret; i++) {
    GAM->data[i] = 1.0;
  }
  emxInit_real_T(&OMGold, 2);
  /*  Immediately apply the restriction on vector lmd */
  /*  if ~isequal(lmd,ones(1,k)) */
  /*  */
  /*      [lmd]=restrdeterGPCM(GAM, OMG, SigmaB, niini, pa); */
  /*  end */
  ret = OMG->size[0];
  b_ret = OMG->size[1];
  i = OMGold->size[0] * OMGold->size[1];
  OMGold->size[0] = ret;
  OMGold->size[1] = b_ret;
  emxEnsureCapacity_real_T(OMGold, i);
  for (i = 0; i < b_ret; i++) {
    for (i1 = 0; i1 < ret; i1++) {
      OMGold->data[i1 + OMGold->size[0] * i] = OMG->data[i1 + OMG->size[0] * i];
    }
  }
  i = GAMold->size[0];
  GAMold->size[0] = SigmaB->size[0] * niini->size[0];
  emxEnsureCapacity_real_T(GAMold, i);
  ret = SigmaB->size[0] * niini->size[0];
  for (i = 0; i < ret; i++) {
    GAMold->data[i] = 9999.0;
  }
  emxInit_real_T(&lmdold, 1);
  i = lmdold->size[0];
  lmdold->size[0] = niini->size[0];
  emxEnsureCapacity_real_T(lmdold, i);
  ret = niini->size[0];
  for (i = 0; i < ret; i++) {
    lmdold->data[i] = 999.0;
  }
  /*  Beginning of iterative process */
  /*  Apply the iterative procedure to find Det, Shape and Rot matrices */
  iter = 0.0;
  sumnini = rtInf;
  emxInit_real_T(&diff, 1);
  emxInit_real_T(&eyep, 2);
  emxInit_real_T(&b_OMG, 2);
  emxInit_real_T(&r3, 2);
  emxInit_real_T(&r4, 2);
  while ((sumnini > 1.0E-5) && (iter < maxiterDSR)) {
    iter++;
    /*  In the **E case (except for the case EEE) it is necessary to update in
     * each step of the */
    /*  iterative procedure OMG */
    if (iter > 1.0) {
      b_bool = !(pa_pars[2] != 'E');
      if (b_bool) {
        if (cpc) {
          /*  Variable shape: update OMG (rotation) */
          /*  parameter pa.maxiterR is used here */
          b_ret = OMG->size[0] - 1;
          ret = OMG->size[1] - 1;
          i = b_OMG->size[0] * b_OMG->size[1];
          b_OMG->size[0] = b_ret + 1;
          b_OMG->size[1] = ret + 1;
          emxEnsureCapacity_real_T(b_OMG, i);
          for (i = 0; i <= ret; i++) {
            for (i1 = 0; i1 <= b_ret; i1++) {
              b_OMG->data[i1 + b_OMG->size[0] * i] =
                  OMG->data[i1 + OMG->size[0] * i];
            }
          }
          cpcV(lmd, GAM, b_OMG, Wk, wk, pa_k, pa_maxiterR, pa_tolR, pa_v, OMG);
        } else {
          /*  Equal shape: update OMG (rotation) */
          cpcE(lmd, SigmaB, niini, pa_k, pa_v, OMG);
          /*  In all the other cases OMG is not updated */
        }
        /*  diffOMG is the relative sum of squares of the differences between */
        /*  the element of matrix Omega2D in two consecutive iterations */
        ret = OMG->size[0];
        b_ret = OMG->size[1];
        i = b_OMG->size[0] * b_OMG->size[1];
        b_OMG->size[0] = ret;
        b_OMG->size[1] = b_ret;
        emxEnsureCapacity_real_T(b_OMG, i);
        for (i = 0; i < b_ret; i++) {
          for (i1 = 0; i1 < ret; i1++) {
            b_OMG->data[i1 + b_OMG->size[0] * i] =
                OMG->data[i1 + OMG->size[0] * i];
          }
        }
        c_mtimes(b_OMG, OMGold, GAM);
        i = eyep->size[0] * eyep->size[1];
        eyep->size[0] = GAM->size[0];
        eyep->size[1] = GAM->size[1];
        emxEnsureCapacity_real_T(eyep, i);
        b_ret = GAM->size[0] * GAM->size[1];
        for (ret = 0; ret < b_ret; ret++) {
          eyep->data[ret] = GAM->data[ret] * GAM->data[ret];
        }
        combineVectorElements(eyep, r3);
        sumnini = fabs(((double)v - d_combineVectorElements(r3)) / (double)v);
        ret = OMG->size[0];
        b_ret = OMG->size[1];
        i = OMGold->size[0] * OMGold->size[1];
        OMGold->size[0] = ret;
        OMGold->size[1] = b_ret;
        emxEnsureCapacity_real_T(OMGold, i);
        for (i = 0; i < b_ret; i++) {
          for (i1 = 0; i1 < ret; i1++) {
            OMGold->data[i1 + OMGold->size[0] * i] =
                OMG->data[i1 + OMG->size[0] * i];
          }
        }
      } else {
        sumnini = 0.0;
      }
    } else {
      sumnini = 0.0;
    }
    /*  Update GAM */
    restrshapeGPCM(lmd, OMG, SigmaB, niini, pa_pars, pa_shw, pa_shb, pa_k,
                   pa_maxiterS, pa_tolS, pa_userepmat, pa_v, pa_zerotol, GAM);
    /*  GAMf=GAM; */
    if (pa_sortsh == 1) {
      i = niini->size[0];
      for (j = 0; j < i; j++) {
        ret = GAM->size[0];
        i1 = diff->size[0];
        diff->size[0] = GAM->size[0];
        emxEnsureCapacity_real_T(diff, i1);
        for (i1 = 0; i1 < ret; i1++) {
          diff->data[i1] = GAM->data[i1 + GAM->size[0] * j];
        }
        h_sort(diff);
        ret = diff->size[0];
        for (i1 = 0; i1 < ret; i1++) {
          GAMfc->data[i1 + GAMfc->size[0] * j] = diff->data[i1];
        }
      }
    } else {
      i = GAMfc->size[0] * GAMfc->size[1];
      GAMfc->size[0] = GAM->size[0];
      GAMfc->size[1] = GAM->size[1];
      emxEnsureCapacity_real_T(GAMfc, i);
      ret = GAM->size[0] * GAM->size[1];
      for (i = 0; i < ret; i++) {
        GAMfc->data[i] = GAM->data[i];
      }
    }
    /*  GAMnew = new values of matrix GAM in vectorized form */
    /*  diff = (new values of GAM - old values of GAM) */
    i = diff->size[0];
    diff->size[0] = GAMfc->size[0] * GAMfc->size[1];
    emxEnsureCapacity_real_T(diff, i);
    ret = GAMfc->size[0] * GAMfc->size[1];
    for (i = 0; i < ret; i++) {
      diff->data[i] = GAMfc->data[i] - GAMold->data[i];
    }
    /*  relative sum of squares of the differences */
    a = 0.0;
    ret = diff->size[0];
    for (i = 0; i < ret; i++) {
      a += diff->data[i] * diff->data[i];
    }
    b_GAMold = 0.0;
    ret = GAMold->size[0];
    for (i = 0; i < ret; i++) {
      b_GAMold += GAMold->data[i] * GAMold->data[i];
    }
    i = GAMold->size[0];
    GAMold->size[0] = GAMfc->size[0] * GAMfc->size[1];
    emxEnsureCapacity_real_T(GAMold, i);
    ret = GAMfc->size[0] * GAMfc->size[1];
    for (i = 0; i < ret; i++) {
      GAMold->data[i] = GAMfc->data[i];
    }
    /*  Update determinants in case of varying determinants (apart from VII) */
    /*  Update lmd */
    /* restrdeterGPCM applies determinat restrictions for the 14 GPCM */
    /*  */
    /*  */
    /* <a href="matlab: docsearchFS('restrdeterGPCM')">Link to the help
     * function</a> */
    /*  */
    /*  */
    /*   This routine applies the constraints to the determinants using the */
    /*   specification contained in field pa.cdet of input structure pa. */
    /*  */
    /*  */
    /*   Required input arguments: */
    /*  */
    /*      GAM : constrained shape matrix. 2D array. */
    /*            Matrix of size p-by-k containing in */
    /*            column $j$, ($j=1, 2, \ldots, k$), the elements on the main */
    /*            diagonal of shape matrix $\Gamma_j$. The elements of GAM */
    /*            satisfy the following constraints: */
    /*            The product of the elements of each column is equal to 1. */
    /*            The ratio of the elements of each row is not greater than
     * pa.shb. */
    /*            The ratio of the elements of each column is not greater than
     */
    /*            pa.shw. All the columns of matrix GAM are equal if the second
     */
    /*            letter of modeltype is E. All the columns of matrix GAM are */
    /*            equal to 1 if the second letter of modeltype is I. This matrix
     */
    /*            can be constructed from routine restrshapepars */
    /*            Data Types - double */
    /*     OMG  : costrained rotation array. 3D array. p-by-p-by-k 3D array */
    /*            containing in position (:,:,j) the rotation */
    /*            matrix $\Omega_j$ for group $j$, with $j=1, 2, \ldots, k$ */
    /*            Data Types - double */
    /*    SigmaB : initial unconstrained covariance matrices. p-by-p-by-k array.
     */
    /*             p-by-p-by-k array containing the k unconstrained covariance
     */
    /*             matrices for the k groups. */
    /*    niini  : size of the groups. Vector.   */
    /*            Row vector of length k containing the size of the groups. */
    /*            Data Types - double */
    /*      pa : constraining parameters. Structure. Structure containing 3
     * letter character specifying modeltype, */
    /*             number of dimensions, number of groups... */
    /*             pa must contain the following fields:  */
    /*             pa.v = scalar, number of variables. */
    /*             pa.k = scalar, number of groups. */
    /*             pa.cdet = determinants constraint */
    /*            Data Types - double */
    /*   */
    /*  */
    /*   Optional input arguments: */
    /*  */
    /*  */
    /*  Output: */
    /*  */
    /*  lmdc  : restricted determinants. Vector.  */
    /*          Row vector of length $k$ containing restricted determinants.
     * More */
    /*          precisely, the $j$-th element of lmdc contains
     * $\lambda_j^{1/p}$. */
    /*          The elements of lmdc satisfy the constraint pa.cdet in the sense
     */
    /*          that $\max(lmdc) / \min(lmdc) \leq pa.cdet^{(1/p)}$. In other
     * words, */
    /*          the ratio between the largest and the smallest determinant is
     * not */
    /*          greater than pa.cdet. All the elements of vector lmdc are equal
     */
    /*          if modeltype is E** or if pa.cdet=1; */
    /*  */
    /*  */
    /*  */
    /*  See also: restrSigmaGPCM, restrdeterGPCM, restreigen, tclust */
    /*  */
    /*  */
    /*  References: */
    /*  */
    /*    Garcia-Escudero, L.A., Mayo-Iscar, A. and Riani M. (2019), */
    /*    Robust parsimonious clustering models. Submitted. */
    /*  */
    /*  */
    /*  Copyright 2008-2021. */
    /*  Written by FSDA team */
    /*  */
    /*  */
    /* <a href="matlab: docsearchFS('restrdeterGPCM')">Link to the help
     * function</a> */
    /*  */
    /* $LastChangedDate:: 2018-09-15 00:27:12 #$: Date of the last commit */
    /*  Examples: */
    /*  Beginning of code */
    /*  Initialize constrained determinant vector */
    i = lmd->size[0] * lmd->size[1];
    lmd->size[0] = 1;
    emxEnsureCapacity_real_T(lmd, i);
    i = lmd->size[0] * lmd->size[1];
    lmd->size[1] = pa_k;
    emxEnsureCapacity_real_T(lmd, i);
    for (i = 0; i < pa_k; i++) {
      lmd->data[i] = rtNaN;
    }
    /*  Inefficient code to obtain lmd */
    /*  for j=1:pa.k */
    /*      lmd(j) = sum( diag(  diag(1./GAM(:,j)) * (OMG(:,:,j))' *
     * SigmaB(:,:,j) * OMG(:,:,j) )) / pa.v; */
    /*  end */
    /*  Fancy way which avoids the loop below (it works from MATLAB 2020b) */
    /*  MM=pagemtimes(pagemtimes(OMG,'ctranspose',SigmaB,'none'),OMG); */
    /*  Lr=reshape(MM,pa.v*pa.v,[]); */
    /*  D=reshape(Lr(1:(pa.v+1):end,:),pa.v,pa.k); */
    /*  lmd=sum(D./GAM,1)/pa.v; */
    if (0 <= pa_k - 1) {
      f_loop_ub = OMG->size[0];
      g_loop_ub = OMG->size[1];
      h_loop_ub = SigmaB->size[0];
      i_loop_ub = SigmaB->size[1];
      j_loop_ub = OMG->size[0];
      k_loop_ub = OMG->size[1];
    }
    for (j = 0; j < pa_k; j++) {
      i = b_OMG->size[0] * b_OMG->size[1];
      b_OMG->size[0] = f_loop_ub;
      b_OMG->size[1] = g_loop_ub;
      emxEnsureCapacity_real_T(b_OMG, i);
      for (i = 0; i < g_loop_ub; i++) {
        for (i1 = 0; i1 < f_loop_ub; i1++) {
          b_OMG->data[i1 + b_OMG->size[0] * i] =
              OMG->data[(i1 + OMG->size[0] * i) +
                        OMG->size[0] * OMG->size[1] * j];
        }
      }
      i = b_Wk->size[0] * b_Wk->size[1];
      b_Wk->size[0] = h_loop_ub;
      b_Wk->size[1] = i_loop_ub;
      emxEnsureCapacity_real_T(b_Wk, i);
      for (i = 0; i < i_loop_ub; i++) {
        for (i1 = 0; i1 < h_loop_ub; i1++) {
          b_Wk->data[i1 + b_Wk->size[0] * i] =
              SigmaB->data[(i1 + SigmaB->size[0] * i) +
                           SigmaB->size[0] * SigmaB->size[1] * j];
        }
      }
      c_mtimes(b_OMG, b_Wk, r4);
      i = b_OMG->size[0] * b_OMG->size[1];
      b_OMG->size[0] = j_loop_ub;
      b_OMG->size[1] = k_loop_ub;
      emxEnsureCapacity_real_T(b_OMG, i);
      for (i = 0; i < k_loop_ub; i++) {
        for (i1 = 0; i1 < j_loop_ub; i1++) {
          b_OMG->data[i1 + b_OMG->size[0] * i] =
              OMG->data[(i1 + OMG->size[0] * i) +
                        OMG->size[0] * OMG->size[1] * j];
        }
      }
      b_mtimes(r4, b_OMG, eyep);
      if ((eyep->size[0] == 1) && (eyep->size[1] == 1)) {
        i = diff->size[0];
        diff->size[0] = 1;
        emxEnsureCapacity_real_T(diff, i);
        diff->data[0] = eyep->data[0];
      } else {
        b_ret = eyep->size[0];
        ret = eyep->size[1];
        if (b_ret < ret) {
          ret = b_ret;
        }
        if (0 < eyep->size[1]) {
          b_ret = ret;
        } else {
          b_ret = 0;
        }
        i = diff->size[0];
        diff->size[0] = b_ret;
        emxEnsureCapacity_real_T(diff, i);
        i = b_ret - 1;
        for (ret = 0; ret <= i; ret++) {
          diff->data[ret] = eyep->data[ret + eyep->size[0] * ret];
        }
      }
      ret = diff->size[0];
      for (i = 0; i < ret; i++) {
        diff->data[i] /= GAM->data[i + GAM->size[0] * j];
      }
      lmd->data[j] = blockedSummation(diff, diff->size[0]) / (double)pa_v;
    }
    /*  Note that ((OMG(:,:,j))' * SigmaB(:,:,j) * OMG(:,:,j) computes */
    /*  (\lambda_j^(1/p)*\Gamma_j) where \Gamma_j is the UNCONSTRAINED shape */
    /*  matrix for component j based on updated Omega matrix. Using Luis Angel
     */
    /*  notation this is ( d_j^(1/p) D_j^*) */
    /*  GAM, the input of this procedure, on the other hand, contains in the
     * j-th */
    /*  column the elements on the diagonal of the CONSTRAINED shape matrix for
     */
    /*  component j. In Luis Angel notation the j-th column of matrix GAM
     * contains */
    /*  d_{j1}^{***}, \ldots, d_{jp}^{***} */
    /*  lmdc = row vector containing the restricted determinants */
    /*  Make sure niini is a column vector */
    if (d_maximum(lmd) / b_minimum(lmd) >
        rt_powd_snf(pa_cdet, 1.0 / (double)pa_v)) {
      c_restreigen(lmd, niini, rt_powd_snf(pa_cdet, 1.0 / (double)pa_v),
                   pa_zerotol, pa_userepmat);
    }
    /*  lmdnew = new values of vector lmd */
    /*  diff = (new values of lmd) - (old values of lmd) */
    i = diff->size[0];
    diff->size[0] = lmd->size[1];
    emxEnsureCapacity_real_T(diff, i);
    ret = lmd->size[1];
    for (i = 0; i < ret; i++) {
      diff->data[i] = lmd->data[i] - lmdold->data[i];
    }
    /*  relative sum of squares of the differences */
    b_diff = 0.0;
    ret = diff->size[0];
    for (i = 0; i < ret; i++) {
      b_diff += diff->data[i] * diff->data[i];
    }
    b_lmdold = 0.0;
    ret = lmdold->size[0];
    for (i = 0; i < ret; i++) {
      b_lmdold += lmdold->data[i] * lmdold->data[i];
    }
    i = lmdold->size[0];
    lmdold->size[0] = lmd->size[1];
    emxEnsureCapacity_real_T(lmdold, i);
    ret = lmd->size[1];
    for (i = 0; i < ret; i++) {
      lmdold->data[i] = lmd->data[i];
    }
    difflmd[0] = b_diff / b_lmdold;
    difflmd[1] = a / b_GAMold;
    difflmd[2] = sumnini;
    sumnini = j_maximum(difflmd);
  }
  emxFree_real_T(&diff);
  emxFree_real_T(&lmdold);
  emxFree_real_T(&GAMold);
  emxFree_real_T(&OMGold);
  emxFree_real_T(&wk);
  emxFree_real_T(&Wk);
  emxFree_real_T(&GAMfc);
  emxInit_boolean_T(&x, 1);
  /*  Check if all is well */
  i = x->size[0];
  x->size[0] = GAM->size[0] * GAM->size[1];
  emxEnsureCapacity_boolean_T(x, i);
  ret = GAM->size[0] * GAM->size[1];
  for (i = 0; i < ret; i++) {
    x->data[i] = rtIsNaN(GAM->data[i]);
  }
  cpc = false;
  b_ret = 1;
  exitg1 = false;
  while ((!exitg1) && (b_ret <= x->size[0])) {
    if (!x->data[b_ret - 1]) {
      b_ret++;
    } else {
      cpc = true;
      exitg1 = true;
    }
  }
  emxFree_boolean_T(&x);
  guard1 = false;
  if (!cpc) {
    maximum(GAM, r3);
    if (d_maximum(r3) > pa_zerotol) {
      /*  Reconstruct the cov matrices using final values of lmd, OMG and GAM */
      i = niini->size[0];
      if (0 <= niini->size[0] - 1) {
        nv = GAM->size[0] - 1;
        unnamed_idx_0 = GAM->size[0];
        b_unnamed_idx_1 = GAM->size[0];
        loop_ub = GAM->size[0] * GAM->size[0];
        b_loop_ub = OMG->size[0];
        c_loop_ub = OMG->size[1];
        d_loop_ub = OMG->size[0];
        e_loop_ub = OMG->size[1];
      }
      for (j = 0; j < i; j++) {
        i1 = eyep->size[0] * eyep->size[1];
        eyep->size[0] = unnamed_idx_0;
        eyep->size[1] = b_unnamed_idx_1;
        emxEnsureCapacity_real_T(eyep, i1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          eyep->data[i1] = 0.0;
        }
        for (b_ret = 0; b_ret <= nv; b_ret++) {
          eyep->data[b_ret + eyep->size[0] * b_ret] =
              GAM->data[b_ret + GAM->size[0] * j];
        }
        sumnini = lmd->data[j];
        i1 = b_Wk->size[0] * b_Wk->size[1];
        b_Wk->size[0] = b_loop_ub;
        b_Wk->size[1] = c_loop_ub;
        emxEnsureCapacity_real_T(b_Wk, i1);
        for (i1 = 0; i1 < c_loop_ub; i1++) {
          for (unnamed_idx_1 = 0; unnamed_idx_1 < b_loop_ub; unnamed_idx_1++) {
            b_Wk->data[unnamed_idx_1 + b_Wk->size[0] * i1] =
                sumnini * OMG->data[(unnamed_idx_1 + OMG->size[0] * i1) +
                                    OMG->size[0] * OMG->size[1] * j];
          }
        }
        i1 = b_OMG->size[0] * b_OMG->size[1];
        b_OMG->size[0] = d_loop_ub;
        b_OMG->size[1] = e_loop_ub;
        emxEnsureCapacity_real_T(b_OMG, i1);
        for (i1 = 0; i1 < e_loop_ub; i1++) {
          for (unnamed_idx_1 = 0; unnamed_idx_1 < d_loop_ub; unnamed_idx_1++) {
            b_OMG->data[unnamed_idx_1 + b_OMG->size[0] * i1] =
                OMG->data[(unnamed_idx_1 + OMG->size[0] * i1) +
                          OMG->size[0] * OMG->size[1] * j];
          }
        }
        b_mtimes(b_Wk, eyep, r4);
        d_mtimes(r4, b_OMG, b_Wk);
        ret = b_Wk->size[1];
        for (i1 = 0; i1 < ret; i1++) {
          b_ret = b_Wk->size[0];
          for (unnamed_idx_1 = 0; unnamed_idx_1 < b_ret; unnamed_idx_1++) {
            SigmaB->data[(unnamed_idx_1 + SigmaB->size[0] * i1) +
                         SigmaB->size[0] * SigmaB->size[1] * j] =
                b_Wk->data[unnamed_idx_1 + b_Wk->size[0] * i1];
          }
        }
      }
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }
  if (guard1) {
    /*  In this case final Sigma is the identity matrix replicated k times */
    b_ret = SigmaB->size[0];
    i = eyep->size[0] * eyep->size[1];
    eyep->size[0] = SigmaB->size[0];
    eyep->size[1] = SigmaB->size[0];
    emxEnsureCapacity_real_T(eyep, i);
    ret = SigmaB->size[0] * SigmaB->size[0];
    for (i = 0; i < ret; i++) {
      eyep->data[i] = 0.0;
    }
    if (SigmaB->size[0] > 0) {
      for (ret = 0; ret < b_ret; ret++) {
        eyep->data[ret + eyep->size[0] * ret] = 1.0;
      }
    }
    i = niini->size[0];
    for (j = 0; j < i; j++) {
      ret = eyep->size[1];
      for (i1 = 0; i1 < ret; i1++) {
        b_ret = eyep->size[0];
        for (unnamed_idx_1 = 0; unnamed_idx_1 < b_ret; unnamed_idx_1++) {
          SigmaB->data[(unnamed_idx_1 + SigmaB->size[0] * i1) +
                       SigmaB->size[0] * SigmaB->size[1] * j] =
              eyep->data[unnamed_idx_1 + eyep->size[0] * i1];
        }
      }
    }
  }
  emxFree_real_T(&r4);
  emxFree_real_T(&r3);
  emxFree_real_T(&b_OMG);
  emxFree_real_T(&b_Wk);
  emxFree_real_T(&eyep);
  emxFree_real_T(&GAM);
}

void restrSigmaGPCM(emxArray_real_T *SigmaB, const emxArray_real_T *niini,
                    const char pa_pars[3], double pa_cdet, double pa_shw,
                    double pa_shb, double pa_maxiterDSR, double pa_maxiterS,
                    double pa_tolR, double pa_tolS, double pa_userepmat,
                    double pa_zerotol, emxArray_real_T *lmd,
                    emxArray_real_T *OMG)
{
  emxArray_boolean_T *r;
  emxArray_creal_T *V;
  emxArray_creal_T *eigunsorted;
  emxArray_creal_T *r4;
  emxArray_int32_T *iidx;
  emxArray_real_T *GAMfc;
  emxArray_real_T *GAMold;
  emxArray_real_T *OMGold;
  emxArray_real_T *Wk;
  emxArray_real_T *b_OMG;
  emxArray_real_T *b_SigmaB;
  emxArray_real_T *diageigunsorted;
  emxArray_real_T *eyep;
  emxArray_real_T *lmdold;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *r3;
  emxArray_real_T *wk;
  double difflmd[3];
  double b_GAMold;
  double b_diageigunsorted;
  double b_lmdold;
  double diffOMG;
  double diffglob;
  double iter;
  double maxiterDSR;
  int b_loop_ub;
  int c_loop_ub;
  int d_loop_ub;
  int e_loop_ub;
  int f_loop_ub;
  int i;
  int i1;
  int i2;
  int i3;
  int i4;
  int j;
  int loop_ub;
  int m;
  int nx;
  int pa_k;
  int pa_maxiterR;
  int pa_sortsh;
  int pa_v;
  int unnamed_idx_0;
  int unnamed_idx_1;
  int v;
  bool varargin_1[7];
  bool b_bv[6];
  bool bv1[2];
  bool cpc;
  bool guard1 = false;
  bool maxval;
  /* restrSigmaGPCM computes constrained covariance matrices for the 14 GPCM
   * specifications */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('restrSigmaGPCM')">Link to the help
   * function</a> */
  /*  */
  /*  */
  /*   This routine applies the constraints to the covariance matrices using the
   */
  /*   specifications contained in input structure pa. */
  /*  */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*    SigmaB : initial unconstrained covariance matrices. p-by-p-by-k array.
   */
  /*             p-by-p-by-k array containing the k covariance matrices for the
   */
  /*             k groups. */
  /*                Data Types - single|double */
  /*  */
  /*    niini  : sizes of the groups. Vector. Vector of length k containing */
  /*            the size of the groups. ninini can be either a row or a columns
   */
  /*            vector. */
  /*                Data Types - single|double */
  /*  */
  /*       pa  : Constraints to apply and model specification. Structure. */
  /*             Structure containing the following fields: */
  /*              pa.pars= type of Gaussian Parsimonious Clustering Model.
   * Character. */
  /*                A 3 letter word in the set: */
  /*                'VVE','EVE','VVV','EVV','VEE','EEE','VEV','EEV','VVI', */
  /*                'EVI','VEI','EEI','VII','EII'. */
  /*                The field pa.pars is compulsory. All the other fields are */
  /*                non necessary. If they are not present they are set to */
  /*                their default values. */
  /*              pa.cdet = scalar in the interval [1 Inf) which specifies the
   */
  /*                the restriction which has to be applied to the determinants.
   */
  /*                If pa.cdet=1 all determinants are forced to be equal. */
  /*                See section More About for additional details. */
  /*              pa.shw = scalar in the interval [1 Inf) which specifies the */
  /*                the restriction which has to be applied to the elements of
   */
  /*                the shape matrices inside each group. If pa.shw=1 all
   * diagonal */
  /*                elements of the shape matrix of cluster j (with j=1, ..., */
  /*                k) will be equal. */
  /*              pa.shb = scalar in the interval [1 Inf) which specifies the */
  /*                the restriction which has to be applied to the elements of
   */
  /*                the shape matrices across each group. */
  /*              pa.maxiterS = positive integer which specifies the maximum */
  /*                number of iterations to obtain the restricted shape matrix.
   */
  /*                This parameter is used by routine restrshapepars. The */
  /*                default value of pa.maxiterS is 5. */
  /*              pa.maxiterR = positive integer which specifies the maximum */
  /*                number of iterations to obtain the common rotation matrix */
  /*                in presence of varying shape. */
  /*                This parameter is used by routine cpcV. The */
  /*                default value of pa.maxiterR is 20. */
  /*           pa.maxiterDSR = positive integer which specifies the maximum */
  /*                number of iterations to obtain the requested restricted */
  /*                determinants, shape matrices and rotation. For all */
  /*                parametrizations  pa.maxiterDSR is set to 1 apart from for
   */
  /*                the specifications 'VVE', 'EVE' and 'VEE'. The default */
  /*                value of pa.maxiterDSR is 20. */
  /*            pa.tolS=tolerance to use to exit the iterative procedure for */
  /*                estimating the shape. Scalar. The */
  /*                iterative procedures stops when the relative difference of
   */
  /*                a certain output matrix is smaller than itertol in two
   * consecutive */
  /*                iterations. The default value of pa.tol is 1e-12. */
  /*       pa.zerotol = tolerance value to declare all input values equal to 0
   */
  /*                in the eigenvalues restriction routine (file restreigen.m)
   */
  /*                or in the final reconstruction of covariance matrices. */
  /*                The default value of zerotol is 1e-10. */
  /*           pa.msg = boolean which if set equal to true enables to monitor */
  /*                the relative change of the estimates of lambda Gamma and */
  /*                Omega in each iteration. The default value of pa.msg is */
  /*                false, that is nothing is displayed in each iteration. */
  /*            pa.k  = the number of groups. */
  /*            pa.v  = the number of variables. */
  /*    pa.userepmat  = scalar, which specifies whether to use implicit */
  /*                    expansion or bsxfun.  pa.userepmat =2 implies implicit
   */
  /*                    expansion, pa.userepmat=1 implies use of bsxfun. The */
  /*                    default is to use implicit expansion (faster) */
  /*                    if verLessThanFS(9.1) is false and bsxfun if MATLAB is
   */
  /*                    older than 2016b. */
  /*                Data Types - struct */
  /*  */
  /*     nocheck : check in input option pa. Boolean. Specify whether it is */
  /*                necessary to check the input fields in */
  /*                previous input option pa. If nocheck is */
  /*                false (default is true) no check is performed on input */
  /*                structure pa. */
  /*                Data Types - Boolean */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*      lmd  : determinants. Vector. */
  /*              Initial estimates of (constrained) determinants */
  /*                  Example - [ 2 4 6] */
  /*                  Data Types - double */
  /*       OMG : rotation matrices. p-by-p-by-k array. */
  /*              p-by-p-by-k array containing the preliminary estimates of the
   */
  /*              rotation matrices for the k groups. If common rotation is */
  /*              imposed (third letter is equal to E), */
  /*              OMG(:,:,1)=...=OMG(:,:,k). */
  /*                  Example - .5*hadamard(4) */
  /*                  Data Types - double */
  /*  */
  /*  Output: */
  /*  */
  /*  */
  /*     Sigma  : constrained covariance matrices. p-by-p-by-k array. */
  /*              p-by-p-by-k array containing the k covariance matrices for */
  /*              the k groups. See section 'More About' for the notation for */
  /*              the eigen-decomposition of the component covariance matrices.
   */
  /*      lmd  : restricted determinants. Vector. */
  /*              Row vector of length $k$ containing restricted determinants.
   */
  /*              More precisely, the $j$-th element of lmd contains */
  /*              $\lambda_j^{1/p}$. The elements of lmd satisfy the */
  /*              constraint pa.cdet in the sense that $\max(lmd) / \min(lmd) */
  /*              \leq pa.cdet^{(1/p)}$. In other words, the ratio between the
   */
  /*              largest and the smallest determinant is not greater than */
  /*              pa.cdet. All the elements of vector lmd are equal if */
  /*              modeltype is E** or if pa.cdet=1. */
  /*       OMG : constrained rotation matrices. p-by-p-by-k array. */
  /*              p-by-p-by-k array containing the k rotation matrices for */
  /*              the k groups. If common rotation is imposed (third letter is
   */
  /*              equal to E), OMG(:,:,1)=...=OMG(:,:,k). */
  /*      GAM : constrained shape matrix. 2D array. */
  /*            Matrix of size p-by-k containing in */
  /*            column j the elements on the main diagonal of shape matrix */
  /*            $\Gamma_j$. The elements of GAM satisfy the following */
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
  /*  */
  /*  */
  /*  More About: */
  /*  The notation for the eigen-decomposition of the */
  /*  component covariance matrices is as follows */
  /*  */
  /*  \[ */
  /*  \Sigma_j= \lambda_j^{1/p} \Omega_j \Gamma_j \Omega_j'  \qquad j=1, 2,
   * \ldots, k */
  /*  \] */
  /*  The dimension of matrices $\Omega_j$ (rotation) and $\Gamma_j$ (shape) is
   * $p\times p$. */
  /*  */
  /*  $c_{det}=$ scalar, constraint associated with the determinants. */
  /*  */
  /*  $c_{shw}=$ scalar, constraint inside each group of the shape matrix. */
  /*  */
  /*  $c_{shb}=$ scalar, constraint among groups of the shape matrix. */
  /*  */
  /*  Note that if you impose equal volumes $c_{det}=1$. Similarly, if you */
  /*  impose a spherical shape $c_{shw}=1$. */
  /*  */
  /*  We also denote with */
  /*  */
  /*    [1] $\Sigma_B$ the 3D array of size $p\times p \times k$ containing the
   */
  /*    empirical covariance matrices of the $k$ groups, before applying the */
  /*    constraints coming from the 14 parametrizations. In the code $\Sigma_B$
   */
  /*    is called $SigmaB$. The $j$-th slice of this 3D array of size $p\times
   */
  /*    p$ is denoted with symbol $\hat \Sigma_j$. */
  /*    [2] $\Omega$ the 3D array of size $p\times p \times k$ containing the */
  /*    rotation matrices of the $k$ groups. In the code $\Omega$  is called */
  /*    $OMG$. The $j$-th slice of this 3D array of size $p\times p$ is called
   */
  /*    $\hat \Omega_j$. */
  /*    [3] $\Gamma$ the $p\times k$ matrix containing in column $j$, with */
  /*    $j=1, 2, \ldots, k$, the diagonal elements of matrix $\Gamma_j$ (shape
   */
  /*    matrix of group j). In the code matrix $\Gamma$ is called GAM. */
  /*    After the application of this routine, the product of the elements of */
  /*    each column of matrix GAM is equal to 1. */
  /*    The ratio among the largest (second largest, ...smallest) elements of */
  /*    each column is not greater than $c_{shb}$ (pa.shb). */
  /*    The ratio of the elements of each column is not greater than */
  /*    $c_{shw}$ (pa.shb). All the columns of matrix GAM are equal if the
   * second */
  /*    letter of modeltype is E. All the columns of matrix GAM are */
  /*    equal to 1 if the second letter of modeltype is I. */
  /*    [4] niini the vector of length $k$ containing the number of units */
  /*    (weights) associated to each group. */
  /*    [5]  $\lambda$ = the vector of length $p$ containing in the $j$-th */
  /*    position $\lambda_j^{1/p}=|\Sigma_j|^{1/p}$. In the code  vector */
  /*    $\lambda$ is called $lmd$. */
  /*    The elements of lmd satisfy the constraint pa.cdet in the sense that */
  /*    $\max(lmd) / \min(lmd) \leq pa.cdet^{(1/p)}$. In other words, the */
  /*    ratio between the largest and the smallest determinant is not */
  /*    greater than pa.cdet. All the elements of vector lmd are equal */
  /*    if modeltype is E** or if $c_{det}=1$ (pa.cdet=1). */
  /*  */
  /*  */
  /*  */
  /*  See also restrshapeGPCM, restrdeterGPCM, restreigen, tclust */
  /*  */
  /*  */
  /*  References: */
  /*  */
  /*    Garcia-Escudero, L.A., Mayo-Iscar, A. and Riani M. (2019), */
  /*    Robust parsimonious clustering models. Submitted. */
  /*  */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('restrSigmaGPCM')">Link to the help
   * function</a> */
  /*  */
  /* $LastChangedDate:: 2018-09-15 00:27:12 #$: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % Use of restrSigmaGPCM with just one output argument. */
  /*     % Generate 3 cov matrices of size 2-by-2 */
  /*     rng('default') */
  /*     rng(1500) */
  /*     Sig = [1 .5; .5 2]; */
  /*     df = 10; */
  /*     k=2; */
  /*     v=2; */
  /*     Sigma=zeros(v,v,k); */
  /*     for j=1:k */
  /*         Sigma(:,:,j) = wishrnd(Sig,df)/df; */
  /*     end */
  /*     niini=2; */
  /*     % Apply model EEE. */
  /*     pa=struct; */
  /*     pa.pars='EEE'; */
  /*     SigmaNEW  = restrSigmaGPCM(Sigma, niini, pa); */
  /* } */
  /* { */
  /*     %% Use of restrSigmaGPCM with all default options. */
  /*     % Generate 3 cov matrices of size 2-by-2 */
  /*     rng('default') */
  /*     rng(1500) */
  /*     Sig = [1 .5; .5 2]; */
  /*     df = 10; */
  /*     k=3; */
  /*     v=2; */
  /*     Sigma=zeros(v,v,k); */
  /*     for j=1:k */
  /*         Sigma(:,:,j) = wishrnd(Sig,df)/df; */
  /*     end */
  /*     niini=[20 150 200]; */
  /*     % Apply model VVE. */
  /*     pa=struct; */
  /*     pa.pars='VVE'; */
  /*     [SigmaNEW, lmd, OMG, GAM]  = restrSigmaGPCM(Sigma, niini, pa); */
  /* } */
  /* { */
  /*     %% Use function genSigmaGPCM to generate the covariance matrices. */
  /*     v=3; */
  /*     k=5; */
  /*     pa=struct; */
  /*     pa.pars='EVI'; */
  /*     S=genSigmaGPCM(v, k, pa); */
  /*     niini=100*ones(1,k); */
  /*     pa.pars='VVE'; */
  /*     [SigmaNEW, lmd, OMG, GAM]  = restrSigmaGPCM(S, niini, pa); */
  /* } */
  /* { */
  /*     %% Generate ad hoc cov matrices. */
  /*     k=7; v=20; n=100; */
  /*     rng('default') */
  /*     seed=1141; */
  /*     add=ones(v,v)+diag(1:v); */
  /*     niini= round(100*mtR(k,0,seed)); */
  /*     Sigma=zeros(v,v,k); */
  /*     for j=1:k */
  /*         Sigma(:,:,j)=cov(reshape(mtR(n*v,1,-1),n,v)).*add; */
  /*     end */
  /*     sph=struct; */
  /*     sph.pars='EVV'; */
  /*     niini=100*ones(k,1); */
  /*     [SigmaNEW, lmd, OMG, GAM]  = restrSigmaGPCM(Sigma, niini', sph); */
  /* } */
  /*  Beginning of code */
  /*  Set default values for tolerances and maximum number of iterations. */
  /*  pa = structure containing modeltype, number of iterations ..... */
  /*  if nocheck is false check that the fieldnames of input structure pa are */
  /*  those specified in input structure options. */
  /*  SigmaB = p-times-p-times-k = empirical covariance matrix */
  v = SigmaB->size[0];
  pa_v = SigmaB->size[0];
  pa_k = niini->size[0];
  /*  OMG = initialize 3D array containing rotation matrices */
  unnamed_idx_0 = SigmaB->size[0];
  unnamed_idx_1 = SigmaB->size[1];
  nx = SigmaB->size[2];
  i = OMG->size[0] * OMG->size[1] * OMG->size[2];
  OMG->size[0] = unnamed_idx_0;
  OMG->size[1] = unnamed_idx_1;
  OMG->size[2] = nx;
  emxEnsureCapacity_real_T(OMG, i);
  loop_ub = unnamed_idx_0 * unnamed_idx_1 * nx;
  for (i = 0; i < loop_ub; i++) {
    OMG->data[i] = 0.0;
  }
  /*  Tolerance associated to the maximum of the elements which have to be */
  /*  constrained. If the maximum  is smaller than zerotol restreigen */
  /*  procedures returns in output what has been given in input. For example, */
  /*  if the elements which have to be constrained are the eigenvalues of the */
  /*  covariance matrices and the max of the eigenvalues is smaller than */
  /*  zerotol it means that all n points are concentrated in k points and there
   */
  /*  is a perfect fit therefore no further changes on the eigenvalues is */
  /*  required. */
  /*  pa.pars = character vector with three letters specifying the type of the
   */
  /*  14 constraints (i.e. EEE, CVVV, EVE, ...) */
  /*  Select cases in which maxiterDSR>1 and specify relative tolerance */
  /*  EVE VEE VVE VVV VEV VVI and VEI require iterations */
  /*  All the other specification do not */
  /*  Model which require more than one iteration in the main loop */
  l_strcmp(pa_pars, varargin_1);
  maxval = varargin_1[0];
  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    if ((int)maxval < (int)varargin_1[loop_ub + 1]) {
      maxval = true;
    }
  }
  if (maxval) {
    maxiterDSR = pa_maxiterDSR;
  } else {
    maxiterDSR = 1.0;
  }
  /*  Cases with different shape (they require iteration for the shape) */
  m_strcmp(pa_pars, b_bv);
  if (!h_maximum(b_bv)) {
    pa_maxiterS = 1.0;
  }
  pa_maxiterR = 20;
  n_strcmp(pa_pars, bv1);
  if (i_maximum(bv1)) {
    /*  maxiterR=pa.maxiterR; */
    cpc = true;
  } else {
    cpc = false;
    pa_maxiterR = 1;
  }
  /*  Parameters not set by the user */
  maxval = !(pa_pars[2] != 'E');
  if (maxval) {
    pa_sortsh = 1;
  } else {
    maxval = !(pa_pars[2] != 'I');
    if (maxval) {
      pa_sortsh = 1;
    } else {
      pa_sortsh = 0;
    }
  }
  maxval = !(pa_pars[0] != 'E');
  if (maxval) {
    pa_cdet = 1.0;
  }
  /*  If OMG is identity, shape restriction parameter within groups is set to 1
   */
  maxval = !(pa_pars[1] != 'I');
  if (maxval) {
    pa_shw = 1.0;
  }
  /*  if Equal shape is imposed shape restriction parameter between groups is */
  /*  set to 1 */
  maxval = !(pa_pars[1] != 'E');
  if (maxval) {
    pa_shb = 1.0;
  }
  emxInit_real_T(&Wk, 3);
  /*  Initialization part */
  unnamed_idx_0 = SigmaB->size[0];
  unnamed_idx_1 = SigmaB->size[0];
  i = Wk->size[0] * Wk->size[1] * Wk->size[2];
  Wk->size[0] = unnamed_idx_0;
  Wk->size[1] = unnamed_idx_1;
  Wk->size[2] = niini->size[0];
  emxEnsureCapacity_real_T(Wk, i);
  loop_ub = unnamed_idx_0 * unnamed_idx_1 * niini->size[0];
  for (i = 0; i < loop_ub; i++) {
    Wk->data[i] = 0.0;
  }
  emxInit_real_T(&wk, 1);
  i = wk->size[0];
  wk->size[0] = niini->size[0];
  emxEnsureCapacity_real_T(wk, i);
  loop_ub = niini->size[0];
  for (i = 0; i < loop_ub; i++) {
    wk->data[i] = 0.0;
  }
  emxInit_real_T(&GAMfc, 2);
  i = GAMfc->size[0] * GAMfc->size[1];
  GAMfc->size[0] = SigmaB->size[0];
  GAMfc->size[1] = niini->size[0];
  emxEnsureCapacity_real_T(GAMfc, i);
  loop_ub = SigmaB->size[0] * niini->size[0];
  for (i = 0; i < loop_ub; i++) {
    GAMfc->data[i] = 0.0;
  }
  maxval = !(pa_pars[2] != 'E');
  emxInit_real_T(&diageigunsorted, 1);
  emxInit_real_T(&eyep, 2);
  emxInit_real_T(&OMGold, 2);
  emxInit_real_T(&GAMold, 1);
  emxInit_creal_T(&V, 2);
  emxInit_creal_T(&eigunsorted, 2);
  emxInit_int32_T(&iidx, 1);
  emxInit_boolean_T(&r, 1);
  emxInit_real_T(&b_SigmaB, 2);
  if (maxval) {
    /*  In the common principal components case it is necessary to find */
    /*  initial values for OMG (rotation), and lmd (unconstrained */
    /*  determinants) */
    /*  fifth argin is lm and 6th argin is OMG */
    /* initR finds initial common rotation matrix */
    /*  */
    /*  This procedures is called when **E that is when a common rotation matrix
     */
    /*  is imposed. The main purpose of this function is to find the an initial
     */
    /*  estimate of the common rotation matrix. */
    /*  */
    /*  */
    /*  Required input arguments: */
    /*  */
    /*  */
    /*    SigmaB : p-by-p-by-k array containing the k covariance matrices for
     * the */
    /*            k groups. */
    /*    niini  : vector of length k containing the size of the groups. */
    /*      pars : structure containing 3 letter character specifying modeltype,
     */
    /*             number of dimensions, number of groups... */
    /*             The fields of pars which are used in this routine are pa.v,
     */
    /*             pa.k and pa.pars */
    /*  */
    /*  Output: */
    /*  */
    /*      lmd : row vector of length k containing in the j-th position */
    /*            $|\Sigma_j|^(1/p)$, $j=1, 2, \ldots, k$ if different */
    /*            determinants are allowed else it is a row vector of ones. */
    /*    Omega2D : p-by-p matrix containing the eigenvectors of pooled matrix
     */
    /*             $\sum_{j=1}^k \frac{n_j}{n} \frac{1}{|\Sigma_j|^(1/p)} */
    /*             \Sigma_j$. The first column is associated with the largest */
    /*             eigenvalue .... This is the initial common rotation matrix.
     */
    /*     Omega : p-by-p-k 3D array containing in position j Omega2D. */
    /*             This is the common rotation matrix replicated k times. */
    /*  Copyright 2008-2021. */
    /*  Written by FSDA team */
    /* $LastChangedDate::                      $: Date of the last commit */
    /*  Beginning of code */
    /*  Initialize lmd */
    maxval = !(pa_pars[0] != 'V');
    if (maxval) {
      i = niini->size[0];
      i1 = lmd->size[0] * lmd->size[1];
      lmd->size[0] = 1;
      lmd->size[1] = niini->size[0];
      emxEnsureCapacity_real_T(lmd, i1);
      for (j = 0; j < i; j++) {
        /*  lmd(j)=exp(log(det(SigmaB(:,:,j)))/v); */
        loop_ub = SigmaB->size[0];
        nx = SigmaB->size[1];
        i1 = b_SigmaB->size[0] * b_SigmaB->size[1];
        b_SigmaB->size[0] = loop_ub;
        b_SigmaB->size[1] = nx;
        emxEnsureCapacity_real_T(b_SigmaB, i1);
        for (i1 = 0; i1 < nx; i1++) {
          for (m = 0; m < loop_ub; m++) {
            b_SigmaB->data[m + b_SigmaB->size[0] * i1] =
                SigmaB->data[(m + SigmaB->size[0] * i1) +
                             SigmaB->size[0] * SigmaB->size[1] * j];
          }
        }
        lmd->data[j] = rt_powd_snf(det(b_SigmaB), 1.0 / (double)v);
        /*  lmd(j) = real(complex(det(SigmaB(:,:,j)))^complex(1/v)); */
      }
    } else {
      i = lmd->size[0] * lmd->size[1];
      lmd->size[0] = 1;
      lmd->size[1] = niini->size[0];
      emxEnsureCapacity_real_T(lmd, i);
      loop_ub = niini->size[0];
      for (i = 0; i < loop_ub; i++) {
        lmd->data[i] = 1.0;
      }
    }
    diffglob = blockedSummation(niini, niini->size[0]);
    /*  Sigma = NaN(p, p, K); */
    /*  for j=1:K */
    /*      Sigma(:,:,j) = (niini(j) / sumniini) * (1 /lmd(j) ) * SigmaB(:,:,j);
     */
    /*  end */
    /*  Sw = pooled estimate of \Omega \Gamma \Omega^T (rescaled pooled */
    /*  within-group covariance matrix) */
    /*  Sw = sum(Sigma,3); */
    i = eyep->size[0] * eyep->size[1];
    eyep->size[0] = SigmaB->size[0];
    eyep->size[1] = SigmaB->size[0];
    emxEnsureCapacity_real_T(eyep, i);
    loop_ub = SigmaB->size[0] * SigmaB->size[0];
    for (i = 0; i < loop_ub; i++) {
      eyep->data[i] = 0.0;
    }
    i = niini->size[0];
    for (j = 0; j < i; j++) {
      diffOMG = niini->data[j] / diffglob * (1.0 / lmd->data[j]);
      loop_ub = eyep->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        nx = eyep->size[0];
        for (m = 0; m < nx; m++) {
          eyep->data[m + eyep->size[0] * i1] +=
              diffOMG * SigmaB->data[(m + SigmaB->size[0] * i1) +
                                     SigmaB->size[0] * SigmaB->size[1] * j];
        }
      }
    }
    i = r->size[0];
    r->size[0] = eyep->size[0] * eyep->size[1];
    emxEnsureCapacity_boolean_T(r, i);
    loop_ub = eyep->size[0] * eyep->size[1];
    for (i = 0; i < loop_ub; i++) {
      r->data[i] = rtIsNaN(eyep->data[i]);
    }
    if (any(r)) {
      maxval = true;
    } else {
      i = r->size[0];
      r->size[0] = eyep->size[0] * eyep->size[1];
      emxEnsureCapacity_boolean_T(r, i);
      loop_ub = eyep->size[0] * eyep->size[1];
      for (i = 0; i < loop_ub; i++) {
        r->data[i] = rtIsInf(eyep->data[i]);
      }
      if (any(r)) {
        maxval = true;
      } else {
        maxval = false;
      }
    }
    /*  In case of missing or infinite values common rotation matrix is forced
     * to */
    /*  be the identity matrix */
    if (maxval) {
      m = SigmaB->size[0];
      i = eyep->size[0] * eyep->size[1];
      eyep->size[0] = SigmaB->size[0];
      eyep->size[1] = SigmaB->size[0];
      emxEnsureCapacity_real_T(eyep, i);
      loop_ub = SigmaB->size[0] * SigmaB->size[0];
      for (i = 0; i < loop_ub; i++) {
        eyep->data[i] = 0.0;
      }
      if (SigmaB->size[0] > 0) {
        for (loop_ub = 0; loop_ub < m; loop_ub++) {
          eyep->data[loop_ub + eyep->size[0] * loop_ub] = 1.0;
        }
      }
    } else {
      /*  The common rotation matrix is formed by the eigenvectors of the */
      /*  pooled within-group covariance matrix Sw */
      b_eig(eyep, V, eigunsorted);
      i = eyep->size[0] * eyep->size[1];
      eyep->size[0] = V->size[0];
      eyep->size[1] = V->size[1];
      emxEnsureCapacity_real_T(eyep, i);
      loop_ub = V->size[0] * V->size[1];
      for (i = 0; i < loop_ub; i++) {
        eyep->data[i] = V->data[i].re;
      }
      /*  Sort eigenvalues from largest to smallest and reorder the columns */
      /*  of the matrix of eigenvectors accordingly */
      i = b_SigmaB->size[0] * b_SigmaB->size[1];
      b_SigmaB->size[0] = eigunsorted->size[0];
      b_SigmaB->size[1] = eigunsorted->size[1];
      emxEnsureCapacity_real_T(b_SigmaB, i);
      loop_ub = eigunsorted->size[0] * eigunsorted->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_SigmaB->data[i] = eigunsorted->data[i].re;
      }
      diag(b_SigmaB, GAMold);
      f_sort(GAMold, iidx);
      nx = eyep->size[0] - 1;
      i = b_SigmaB->size[0] * b_SigmaB->size[1];
      b_SigmaB->size[0] = eyep->size[0];
      b_SigmaB->size[1] = iidx->size[0];
      emxEnsureCapacity_real_T(b_SigmaB, i);
      loop_ub = iidx->size[0];
      for (i = 0; i < loop_ub; i++) {
        for (i1 = 0; i1 <= nx; i1++) {
          b_SigmaB->data[i1 + b_SigmaB->size[0] * i] =
              eyep->data[i1 + eyep->size[0] * (iidx->data[i] - 1)];
        }
      }
      i = eyep->size[0] * eyep->size[1];
      eyep->size[0] = b_SigmaB->size[0];
      eyep->size[1] = b_SigmaB->size[1];
      emxEnsureCapacity_real_T(eyep, i);
      loop_ub = b_SigmaB->size[0] * b_SigmaB->size[1];
      for (i = 0; i < loop_ub; i++) {
        eyep->data[i] = b_SigmaB->data[i];
      }
    }
    /*  Omega = array of size p-by-p-by-k */
    /*  containing k replicates of matrix V */
    d_repmat(eyep, niini->size[0], OMG);
    /*  In presence of variable shape */
    /*  compute Wk and wk once and for all. */
    /*  Wk(:,:,j) contains (n_j/n) \Sigma_j */
    /*  wk(j) contains largest eigenvalue of Wk(:,:,j) */
    /*  These two matrices will be used inside routine cpcV */
    emxInit_creal_T(&r4, 1);
    if (o_strcmp(pa_pars) || p_strcmp(pa_pars)) {
      i = niini->size[0];
      i1 = Wk->size[0] * Wk->size[1] * Wk->size[2];
      Wk->size[0] = unnamed_idx_0;
      Wk->size[1] = unnamed_idx_1;
      Wk->size[2] = niini->size[0];
      emxEnsureCapacity_real_T(Wk, i1);
      i1 = wk->size[0];
      wk->size[0] = niini->size[0];
      emxEnsureCapacity_real_T(wk, i1);
      for (j = 0; j < i; j++) {
        diffOMG = niini->data[j] / diffglob;
        loop_ub = SigmaB->size[0];
        nx = SigmaB->size[1];
        for (i1 = 0; i1 < nx; i1++) {
          for (m = 0; m < loop_ub; m++) {
            Wk->data[(m + Wk->size[0] * i1) + Wk->size[0] * Wk->size[1] * j] =
                diffOMG * SigmaB->data[(m + SigmaB->size[0] * i1) +
                                       SigmaB->size[0] * SigmaB->size[1] * j];
          }
        }
        loop_ub = Wk->size[0];
        nx = Wk->size[1];
        i1 = b_SigmaB->size[0] * b_SigmaB->size[1];
        b_SigmaB->size[0] = Wk->size[0];
        b_SigmaB->size[1] = Wk->size[1];
        emxEnsureCapacity_real_T(b_SigmaB, i1);
        for (i1 = 0; i1 < nx; i1++) {
          for (m = 0; m < loop_ub; m++) {
            b_SigmaB->data[m + b_SigmaB->size[0] * i1] =
                Wk->data[(m + Wk->size[0] * i1) +
                         Wk->size[0] * Wk->size[1] * j];
          }
        }
        c_eig(b_SigmaB, r4);
        i1 = diageigunsorted->size[0];
        diageigunsorted->size[0] = r4->size[0];
        emxEnsureCapacity_real_T(diageigunsorted, i1);
        loop_ub = r4->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          diageigunsorted->data[i1] = r4->data[i1].re;
        }
        wk->data[j] = b_maximum(diageigunsorted);
      }
    }
    emxFree_creal_T(&r4);
  } else {
    maxval = !(pa_pars[2] != 'V');
    if (maxval) {
      /*  Initialize lmd */
      i = lmd->size[0] * lmd->size[1];
      lmd->size[0] = 1;
      lmd->size[1] = niini->size[0];
      emxEnsureCapacity_real_T(lmd, i);
      loop_ub = niini->size[0];
      for (i = 0; i < loop_ub; i++) {
        lmd->data[i] = 1.0;
      }
      /*  Find initial (and final value for OMG) */
      i = niini->size[0];
      for (j = 0; j < i; j++) {
        loop_ub = SigmaB->size[0];
        nx = SigmaB->size[1];
        i1 = b_SigmaB->size[0] * b_SigmaB->size[1];
        b_SigmaB->size[0] = loop_ub;
        b_SigmaB->size[1] = nx;
        emxEnsureCapacity_real_T(b_SigmaB, i1);
        for (i1 = 0; i1 < nx; i1++) {
          for (m = 0; m < loop_ub; m++) {
            b_SigmaB->data[m + b_SigmaB->size[0] * i1] =
                SigmaB->data[(m + SigmaB->size[0] * i1) +
                             SigmaB->size[0] * SigmaB->size[1] * j];
          }
        }
        b_eig(b_SigmaB, V, eigunsorted);
        i1 = eyep->size[0] * eyep->size[1];
        eyep->size[0] = eigunsorted->size[0];
        eyep->size[1] = eigunsorted->size[1];
        emxEnsureCapacity_real_T(eyep, i1);
        loop_ub = eigunsorted->size[0] * eigunsorted->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          eyep->data[i1] = eigunsorted->data[i1].re;
        }
        nx = eyep->size[0] * eyep->size[1];
        i1 = OMGold->size[0] * OMGold->size[1];
        OMGold->size[0] = eyep->size[0];
        OMGold->size[1] = eyep->size[1];
        emxEnsureCapacity_real_T(OMGold, i1);
        for (loop_ub = 0; loop_ub < nx; loop_ub++) {
          OMGold->data[loop_ub] = fabs(eyep->data[loop_ub]);
        }
        diag(OMGold, diageigunsorted);
        /*  Sort eigenvalues from largest to smallest and reorder the columns */
        /*  of the matrix of eigenvectors accordingly */
        i1 = GAMold->size[0];
        GAMold->size[0] = diageigunsorted->size[0];
        emxEnsureCapacity_real_T(GAMold, i1);
        loop_ub = diageigunsorted->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          GAMold->data[i1] = diageigunsorted->data[i1];
        }
        f_sort(GAMold, iidx);
        loop_ub = V->size[0];
        nx = iidx->size[0];
        for (i1 = 0; i1 < nx; i1++) {
          for (m = 0; m < loop_ub; m++) {
            OMG->data[(m + OMG->size[0] * i1) +
                      OMG->size[0] * OMG->size[1] * j] =
                V->data[m + V->size[0] * (iidx->data[i1] - 1)].re;
          }
        }
        maxval = !(pa_pars[0] != 'V');
        if (maxval) {
          /*  lmd(j) = (det(SigmaB(:,:,j))) ^ (1 / v); */
          nx = diageigunsorted->size[0];
          if (diageigunsorted->size[0] == 0) {
            diffglob = 1.0;
          } else {
            diffglob = diageigunsorted->data[0];
            for (loop_ub = 2; loop_ub <= nx; loop_ub++) {
              diffglob *= diageigunsorted->data[loop_ub - 1];
            }
          }
          lmd->data[j] = rt_powd_snf(diffglob, 1.0 / (double)v);
        }
      }
    } else {
      /*  The remaining case is when **I */
      /*  Find initial (and final value for OMG). */
      /*  in this case OMG is a 3D arry contaning identity matrices */
      m = SigmaB->size[0];
      i = eyep->size[0] * eyep->size[1];
      eyep->size[0] = SigmaB->size[0];
      eyep->size[1] = SigmaB->size[0];
      emxEnsureCapacity_real_T(eyep, i);
      loop_ub = SigmaB->size[0] * SigmaB->size[0];
      for (i = 0; i < loop_ub; i++) {
        eyep->data[i] = 0.0;
      }
      if (SigmaB->size[0] > 0) {
        for (loop_ub = 0; loop_ub < m; loop_ub++) {
          eyep->data[loop_ub + eyep->size[0] * loop_ub] = 1.0;
        }
      }
      i = niini->size[0];
      for (j = 0; j < i; j++) {
        loop_ub = eyep->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          nx = eyep->size[0];
          for (m = 0; m < nx; m++) {
            OMG->data[(m + OMG->size[0] * i1) +
                      OMG->size[0] * OMG->size[1] * j] =
                eyep->data[m + eyep->size[0] * i1];
          }
        }
      }
      /*  Initialize lmd */
      i = lmd->size[0] * lmd->size[1];
      lmd->size[0] = 1;
      lmd->size[1] = niini->size[0];
      emxEnsureCapacity_real_T(lmd, i);
      loop_ub = niini->size[0];
      for (i = 0; i < loop_ub; i++) {
        lmd->data[i] = 1.0;
      }
      maxval = !(pa_pars[0] != 'V');
      if (maxval) {
        i = niini->size[0];
        i1 = lmd->size[0] * lmd->size[1];
        lmd->size[0] = 1;
        lmd->size[1] = niini->size[0];
        emxEnsureCapacity_real_T(lmd, i1);
        for (j = 0; j < i; j++) {
          loop_ub = SigmaB->size[0];
          nx = SigmaB->size[1];
          i1 = b_SigmaB->size[0] * b_SigmaB->size[1];
          b_SigmaB->size[0] = loop_ub;
          b_SigmaB->size[1] = nx;
          emxEnsureCapacity_real_T(b_SigmaB, i1);
          for (i1 = 0; i1 < nx; i1++) {
            for (m = 0; m < loop_ub; m++) {
              b_SigmaB->data[m + b_SigmaB->size[0] * i1] =
                  SigmaB->data[(m + SigmaB->size[0] * i1) +
                               SigmaB->size[0] * SigmaB->size[1] * j];
            }
          }
          lmd->data[j] = rt_powd_snf(det(b_SigmaB), 1.0 / (double)v);
        }
      }
    }
  }
  emxFree_int32_T(&iidx);
  emxFree_creal_T(&eigunsorted);
  emxFree_creal_T(&V);
  i = eyep->size[0] * eyep->size[1];
  eyep->size[0] = SigmaB->size[0];
  eyep->size[1] = niini->size[0];
  emxEnsureCapacity_real_T(eyep, i);
  loop_ub = SigmaB->size[0] * niini->size[0];
  for (i = 0; i < loop_ub; i++) {
    eyep->data[i] = 1.0;
  }
  /*  Immediately apply the restriction on vector lmd */
  /*  if ~isequal(lmd,ones(1,k)) */
  /*  */
  /*      [lmd]=restrdeterGPCM(GAM, OMG, SigmaB, niini, pa); */
  /*  end */
  loop_ub = OMG->size[0];
  nx = OMG->size[1];
  i = OMGold->size[0] * OMGold->size[1];
  OMGold->size[0] = OMG->size[0];
  OMGold->size[1] = OMG->size[1];
  emxEnsureCapacity_real_T(OMGold, i);
  for (i = 0; i < nx; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      OMGold->data[i1 + OMGold->size[0] * i] = OMG->data[i1 + OMG->size[0] * i];
    }
  }
  i = GAMold->size[0];
  GAMold->size[0] = SigmaB->size[0] * niini->size[0];
  emxEnsureCapacity_real_T(GAMold, i);
  loop_ub = SigmaB->size[0] * niini->size[0];
  for (i = 0; i < loop_ub; i++) {
    GAMold->data[i] = 9999.0;
  }
  emxInit_real_T(&lmdold, 1);
  i = lmdold->size[0];
  lmdold->size[0] = niini->size[0];
  emxEnsureCapacity_real_T(lmdold, i);
  loop_ub = niini->size[0];
  for (i = 0; i < loop_ub; i++) {
    lmdold->data[i] = 999.0;
  }
  /*  Beginning of iterative process */
  /*  Apply the iterative procedure to find Det, Shape and Rot matrices */
  iter = 0.0;
  diffglob = rtInf;
  emxInit_real_T(&b_OMG, 2);
  emxInit_real_T(&r1, 2);
  emxInit_real_T(&r2, 2);
  emxInit_real_T(&r3, 2);
  while ((diffglob > 1.0E-5) && (iter < maxiterDSR)) {
    iter++;
    /*  In the **E case (except for the case EEE) it is necessary to update in
     * each step of the */
    /*  iterative procedure OMG */
    if (iter > 1.0) {
      maxval = !(pa_pars[2] != 'E');
      if (maxval) {
        if (cpc) {
          /*  Variable shape: update OMG (rotation) */
          /*  parameter pa.maxiterR is used here */
          nx = OMG->size[0] - 1;
          m = OMG->size[1] - 1;
          i = b_OMG->size[0] * b_OMG->size[1];
          b_OMG->size[0] = OMG->size[0];
          b_OMG->size[1] = OMG->size[1];
          emxEnsureCapacity_real_T(b_OMG, i);
          for (i = 0; i <= m; i++) {
            for (i1 = 0; i1 <= nx; i1++) {
              b_OMG->data[i1 + b_OMG->size[0] * i] =
                  OMG->data[i1 + OMG->size[0] * i];
            }
          }
          cpcV(lmd, eyep, b_OMG, Wk, wk, pa_k, pa_maxiterR, pa_tolR, pa_v, OMG);
        } else {
          /*  Equal shape: update OMG (rotation) */
          cpcE(lmd, SigmaB, niini, pa_k, pa_v, OMG);
          /*  In all the other cases OMG is not updated */
        }
        /*  diffOMG is the relative sum of squares of the differences between */
        /*  the element of matrix Omega2D in two consecutive iterations */
        loop_ub = OMG->size[0];
        nx = OMG->size[1];
        i = b_OMG->size[0] * b_OMG->size[1];
        b_OMG->size[0] = OMG->size[0];
        b_OMG->size[1] = OMG->size[1];
        emxEnsureCapacity_real_T(b_OMG, i);
        for (i = 0; i < nx; i++) {
          for (i1 = 0; i1 < loop_ub; i1++) {
            b_OMG->data[i1 + b_OMG->size[0] * i] =
                OMG->data[i1 + OMG->size[0] * i];
          }
        }
        c_mtimes(b_OMG, OMGold, r2);
        power(r2, r3);
        combineVectorElements(r3, r1);
        diffOMG = fabs(((double)v - d_combineVectorElements(r1)) / (double)v);
        loop_ub = OMG->size[0];
        nx = OMG->size[1];
        i = OMGold->size[0] * OMGold->size[1];
        OMGold->size[0] = OMG->size[0];
        OMGold->size[1] = OMG->size[1];
        emxEnsureCapacity_real_T(OMGold, i);
        for (i = 0; i < nx; i++) {
          for (i1 = 0; i1 < loop_ub; i1++) {
            OMGold->data[i1 + OMGold->size[0] * i] =
                OMG->data[i1 + OMG->size[0] * i];
          }
        }
      } else {
        diffOMG = 0.0;
      }
    } else {
      diffOMG = 0.0;
    }
    /*  Update GAM */
    restrshapeGPCM(lmd, OMG, SigmaB, niini, pa_pars, pa_shw, pa_shb, pa_k,
                   pa_maxiterS, pa_tolS, pa_userepmat, pa_v, pa_zerotol, eyep);
    /*  GAMf=GAM; */
    if (pa_sortsh == 1) {
      i = niini->size[0];
      for (j = 0; j < i; j++) {
        loop_ub = eyep->size[0];
        i1 = diageigunsorted->size[0];
        diageigunsorted->size[0] = eyep->size[0];
        emxEnsureCapacity_real_T(diageigunsorted, i1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          diageigunsorted->data[i1] = eyep->data[i1 + eyep->size[0] * j];
        }
        h_sort(diageigunsorted);
        loop_ub = diageigunsorted->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          GAMfc->data[i1 + GAMfc->size[0] * j] = diageigunsorted->data[i1];
        }
      }
    } else {
      i = GAMfc->size[0] * GAMfc->size[1];
      GAMfc->size[0] = eyep->size[0];
      GAMfc->size[1] = eyep->size[1];
      emxEnsureCapacity_real_T(GAMfc, i);
      loop_ub = eyep->size[0] * eyep->size[1];
      for (i = 0; i < loop_ub; i++) {
        GAMfc->data[i] = eyep->data[i];
      }
    }
    /*  GAMnew = new values of matrix GAM in vectorized form */
    /*  diff = (new values of GAM - old values of GAM) */
    i = diageigunsorted->size[0];
    diageigunsorted->size[0] = GAMfc->size[0] * GAMfc->size[1];
    emxEnsureCapacity_real_T(diageigunsorted, i);
    loop_ub = GAMfc->size[0] * GAMfc->size[1];
    for (i = 0; i < loop_ub; i++) {
      diageigunsorted->data[i] = GAMfc->data[i] - GAMold->data[i];
    }
    /*  relative sum of squares of the differences */
    diffglob = 0.0;
    loop_ub = diageigunsorted->size[0];
    for (i = 0; i < loop_ub; i++) {
      diffglob += diageigunsorted->data[i] * diageigunsorted->data[i];
    }
    b_GAMold = 0.0;
    loop_ub = GAMold->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_GAMold += GAMold->data[i] * GAMold->data[i];
    }
    i = GAMold->size[0];
    GAMold->size[0] = GAMfc->size[0] * GAMfc->size[1];
    emxEnsureCapacity_real_T(GAMold, i);
    loop_ub = GAMfc->size[0] * GAMfc->size[1];
    for (i = 0; i < loop_ub; i++) {
      GAMold->data[i] = GAMfc->data[i];
    }
    /*  Update determinants in case of varying determinants (apart from VII) */
    /*  Update lmd */
    /* restrdeterGPCM applies determinat restrictions for the 14 GPCM */
    /*  */
    /*  */
    /* <a href="matlab: docsearchFS('restrdeterGPCM')">Link to the help
     * function</a> */
    /*  */
    /*  */
    /*   This routine applies the constraints to the determinants using the */
    /*   specification contained in field pa.cdet of input structure pa. */
    /*  */
    /*  */
    /*   Required input arguments: */
    /*  */
    /*      GAM : constrained shape matrix. 2D array. */
    /*            Matrix of size p-by-k containing in */
    /*            column $j$, ($j=1, 2, \ldots, k$), the elements on the main */
    /*            diagonal of shape matrix $\Gamma_j$. The elements of GAM */
    /*            satisfy the following constraints: */
    /*            The product of the elements of each column is equal to 1. */
    /*            The ratio of the elements of each row is not greater than
     * pa.shb. */
    /*            The ratio of the elements of each column is not greater than
     */
    /*            pa.shw. All the columns of matrix GAM are equal if the second
     */
    /*            letter of modeltype is E. All the columns of matrix GAM are */
    /*            equal to 1 if the second letter of modeltype is I. This matrix
     */
    /*            can be constructed from routine restrshapepars */
    /*            Data Types - double */
    /*     OMG  : costrained rotation array. 3D array. p-by-p-by-k 3D array */
    /*            containing in position (:,:,j) the rotation */
    /*            matrix $\Omega_j$ for group $j$, with $j=1, 2, \ldots, k$ */
    /*            Data Types - double */
    /*    SigmaB : initial unconstrained covariance matrices. p-by-p-by-k array.
     */
    /*             p-by-p-by-k array containing the k unconstrained covariance
     */
    /*             matrices for the k groups. */
    /*    niini  : size of the groups. Vector.   */
    /*            Row vector of length k containing the size of the groups. */
    /*            Data Types - double */
    /*      pa : constraining parameters. Structure. Structure containing 3
     * letter character specifying modeltype, */
    /*             number of dimensions, number of groups... */
    /*             pa must contain the following fields:  */
    /*             pa.v = scalar, number of variables. */
    /*             pa.k = scalar, number of groups. */
    /*             pa.cdet = determinants constraint */
    /*            Data Types - double */
    /*   */
    /*  */
    /*   Optional input arguments: */
    /*  */
    /*  */
    /*  Output: */
    /*  */
    /*  lmdc  : restricted determinants. Vector.  */
    /*          Row vector of length $k$ containing restricted determinants.
     * More */
    /*          precisely, the $j$-th element of lmdc contains
     * $\lambda_j^{1/p}$. */
    /*          The elements of lmdc satisfy the constraint pa.cdet in the sense
     */
    /*          that $\max(lmdc) / \min(lmdc) \leq pa.cdet^{(1/p)}$. In other
     * words, */
    /*          the ratio between the largest and the smallest determinant is
     * not */
    /*          greater than pa.cdet. All the elements of vector lmdc are equal
     */
    /*          if modeltype is E** or if pa.cdet=1; */
    /*  */
    /*  */
    /*  */
    /*  See also: restrSigmaGPCM, restrdeterGPCM, restreigen, tclust */
    /*  */
    /*  */
    /*  References: */
    /*  */
    /*    Garcia-Escudero, L.A., Mayo-Iscar, A. and Riani M. (2019), */
    /*    Robust parsimonious clustering models. Submitted. */
    /*  */
    /*  */
    /*  Copyright 2008-2021. */
    /*  Written by FSDA team */
    /*  */
    /*  */
    /* <a href="matlab: docsearchFS('restrdeterGPCM')">Link to the help
     * function</a> */
    /*  */
    /* $LastChangedDate:: 2018-09-15 00:27:12 #$: Date of the last commit */
    /*  Examples: */
    /*  Beginning of code */
    /*  Initialize constrained determinant vector */
    i = lmd->size[0] * lmd->size[1];
    lmd->size[0] = 1;
    lmd->size[1] = pa_k;
    emxEnsureCapacity_real_T(lmd, i);
    /*  Inefficient code to obtain lmd */
    /*  for j=1:pa.k */
    /*      lmd(j) = sum( diag(  diag(1./GAM(:,j)) * (OMG(:,:,j))' *
     * SigmaB(:,:,j) * OMG(:,:,j) )) / pa.v; */
    /*  end */
    /*  Fancy way which avoids the loop below (it works from MATLAB 2020b) */
    /*  MM=pagemtimes(pagemtimes(OMG,'ctranspose',SigmaB,'none'),OMG); */
    /*  Lr=reshape(MM,pa.v*pa.v,[]); */
    /*  D=reshape(Lr(1:(pa.v+1):end,:),pa.v,pa.k); */
    /*  lmd=sum(D./GAM,1)/pa.v; */
    for (j = 0; j < pa_k; j++) {
      lmd->data[j] = rtNaN;
      loop_ub = OMG->size[0];
      nx = OMG->size[1];
      i = b_OMG->size[0] * b_OMG->size[1];
      b_OMG->size[0] = OMG->size[0];
      b_OMG->size[1] = OMG->size[1];
      emxEnsureCapacity_real_T(b_OMG, i);
      for (i = 0; i < nx; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_OMG->data[i1 + b_OMG->size[0] * i] =
              OMG->data[(i1 + OMG->size[0] * i) +
                        OMG->size[0] * OMG->size[1] * j];
        }
      }
      loop_ub = SigmaB->size[0];
      nx = SigmaB->size[1];
      i = b_SigmaB->size[0] * b_SigmaB->size[1];
      b_SigmaB->size[0] = loop_ub;
      b_SigmaB->size[1] = nx;
      emxEnsureCapacity_real_T(b_SigmaB, i);
      for (i = 0; i < nx; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_SigmaB->data[i1 + b_SigmaB->size[0] * i] =
              SigmaB->data[(i1 + SigmaB->size[0] * i) +
                           SigmaB->size[0] * SigmaB->size[1] * j];
        }
      }
      c_mtimes(b_OMG, b_SigmaB, r2);
      loop_ub = OMG->size[0];
      nx = OMG->size[1];
      i = b_OMG->size[0] * b_OMG->size[1];
      b_OMG->size[0] = OMG->size[0];
      b_OMG->size[1] = OMG->size[1];
      emxEnsureCapacity_real_T(b_OMG, i);
      for (i = 0; i < nx; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_OMG->data[i1 + b_OMG->size[0] * i] =
              OMG->data[(i1 + OMG->size[0] * i) +
                        OMG->size[0] * OMG->size[1] * j];
        }
      }
      b_mtimes(r2, b_OMG, r3);
      diag(r3, diageigunsorted);
      loop_ub = diageigunsorted->size[0];
      for (i = 0; i < loop_ub; i++) {
        diageigunsorted->data[i] /= eyep->data[i + eyep->size[0] * j];
      }
      lmd->data[j] =
          blockedSummation(diageigunsorted, diageigunsorted->size[0]) /
          (double)pa_v;
    }
    /*  Note that ((OMG(:,:,j))' * SigmaB(:,:,j) * OMG(:,:,j) computes */
    /*  (\lambda_j^(1/p)*\Gamma_j) where \Gamma_j is the UNCONSTRAINED shape */
    /*  matrix for component j based on updated Omega matrix. Using Luis Angel
     */
    /*  notation this is ( d_j^(1/p) D_j^*) */
    /*  GAM, the input of this procedure, on the other hand, contains in the
     * j-th */
    /*  column the elements on the diagonal of the CONSTRAINED shape matrix for
     */
    /*  component j. In Luis Angel notation the j-th column of matrix GAM
     * contains */
    /*  d_{j1}^{***}, \ldots, d_{jp}^{***} */
    /*  lmdc = row vector containing the restricted determinants */
    /*  Make sure niini is a column vector */
    if (d_maximum(lmd) / b_minimum(lmd) >
        rt_powd_snf(pa_cdet, 1.0 / (double)pa_v)) {
      c_restreigen(lmd, niini, rt_powd_snf(pa_cdet, 1.0 / (double)pa_v),
                   pa_zerotol, pa_userepmat);
    }
    /*  lmdnew = new values of vector lmd */
    /*  diff = (new values of lmd) - (old values of lmd) */
    i = diageigunsorted->size[0];
    diageigunsorted->size[0] = lmd->size[1];
    emxEnsureCapacity_real_T(diageigunsorted, i);
    loop_ub = lmd->size[1];
    for (i = 0; i < loop_ub; i++) {
      diageigunsorted->data[i] = lmd->data[i] - lmdold->data[i];
    }
    /*  relative sum of squares of the differences */
    b_diageigunsorted = 0.0;
    loop_ub = diageigunsorted->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_diageigunsorted += diageigunsorted->data[i] * diageigunsorted->data[i];
    }
    b_lmdold = 0.0;
    loop_ub = lmdold->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_lmdold += lmdold->data[i] * lmdold->data[i];
    }
    i = lmdold->size[0];
    lmdold->size[0] = lmd->size[1];
    emxEnsureCapacity_real_T(lmdold, i);
    loop_ub = lmd->size[1];
    for (i = 0; i < loop_ub; i++) {
      lmdold->data[i] = lmd->data[i];
    }
    difflmd[0] = b_diageigunsorted / b_lmdold;
    difflmd[1] = diffglob / b_GAMold;
    difflmd[2] = diffOMG;
    diffglob = j_maximum(difflmd);
  }
  emxFree_real_T(&lmdold);
  emxFree_real_T(&GAMold);
  emxFree_real_T(&OMGold);
  emxFree_real_T(&wk);
  emxFree_real_T(&Wk);
  emxFree_real_T(&GAMfc);
  /*  Check if all is well */
  i = r->size[0];
  r->size[0] = eyep->size[0] * eyep->size[1];
  emxEnsureCapacity_boolean_T(r, i);
  loop_ub = eyep->size[0] * eyep->size[1];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = rtIsNaN(eyep->data[i]);
  }
  guard1 = false;
  if (!any(r)) {
    maximum(eyep, r1);
    if (d_maximum(r1) > pa_zerotol) {
      /*  Reconstruct the cov matrices using final values of lmd, OMG and GAM */
      i = niini->size[0];
      if (0 <= niini->size[0] - 1) {
        i2 = eyep->size[0];
        b_loop_ub = eyep->size[0];
        c_loop_ub = OMG->size[0];
        i3 = OMG->size[1];
        d_loop_ub = OMG->size[1];
        e_loop_ub = OMG->size[0];
        i4 = OMG->size[1];
        f_loop_ub = OMG->size[1];
      }
      for (j = 0; j < i; j++) {
        i1 = diageigunsorted->size[0];
        diageigunsorted->size[0] = i2;
        emxEnsureCapacity_real_T(diageigunsorted, i1);
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          diageigunsorted->data[i1] = eyep->data[i1 + eyep->size[0] * j];
        }
        diffglob = lmd->data[j];
        i1 = b_SigmaB->size[0] * b_SigmaB->size[1];
        b_SigmaB->size[0] = c_loop_ub;
        b_SigmaB->size[1] = i3;
        emxEnsureCapacity_real_T(b_SigmaB, i1);
        for (i1 = 0; i1 < d_loop_ub; i1++) {
          for (m = 0; m < c_loop_ub; m++) {
            b_SigmaB->data[m + b_SigmaB->size[0] * i1] =
                diffglob * OMG->data[(m + OMG->size[0] * i1) +
                                     OMG->size[0] * OMG->size[1] * j];
          }
        }
        i1 = b_OMG->size[0] * b_OMG->size[1];
        b_OMG->size[0] = e_loop_ub;
        b_OMG->size[1] = i4;
        emxEnsureCapacity_real_T(b_OMG, i1);
        for (i1 = 0; i1 < f_loop_ub; i1++) {
          for (m = 0; m < e_loop_ub; m++) {
            b_OMG->data[m + b_OMG->size[0] * i1] =
                OMG->data[(m + OMG->size[0] * i1) +
                          OMG->size[0] * OMG->size[1] * j];
          }
        }
        c_diag(diageigunsorted, r2);
        b_mtimes(b_SigmaB, r2, r3);
        d_mtimes(r3, b_OMG, r2);
        loop_ub = r2->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          nx = r2->size[0];
          for (m = 0; m < nx; m++) {
            SigmaB->data[(m + SigmaB->size[0] * i1) +
                         SigmaB->size[0] * SigmaB->size[1] * j] =
                r2->data[m + r2->size[0] * i1];
          }
        }
      }
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }
  if (guard1) {
    /*  In this case final Sigma is the identity matrix replicated k times */
    m = SigmaB->size[0];
    i = eyep->size[0] * eyep->size[1];
    eyep->size[0] = SigmaB->size[0];
    eyep->size[1] = SigmaB->size[0];
    emxEnsureCapacity_real_T(eyep, i);
    loop_ub = SigmaB->size[0] * SigmaB->size[0];
    for (i = 0; i < loop_ub; i++) {
      eyep->data[i] = 0.0;
    }
    if (SigmaB->size[0] > 0) {
      for (loop_ub = 0; loop_ub < m; loop_ub++) {
        eyep->data[loop_ub + eyep->size[0] * loop_ub] = 1.0;
      }
    }
    i = niini->size[0];
    for (j = 0; j < i; j++) {
      loop_ub = eyep->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        nx = eyep->size[0];
        for (m = 0; m < nx; m++) {
          SigmaB->data[(m + SigmaB->size[0] * i1) +
                       SigmaB->size[0] * SigmaB->size[1] * j] =
              eyep->data[m + eyep->size[0] * i1];
        }
      }
    }
  }
  emxFree_real_T(&r3);
  emxFree_real_T(&r2);
  emxFree_real_T(&r1);
  emxFree_real_T(&b_OMG);
  emxFree_real_T(&b_SigmaB);
  emxFree_boolean_T(&r);
  emxFree_real_T(&eyep);
  emxFree_real_T(&diageigunsorted);
}

/* End of code generation (restrSigmaGPCM.c) */
