/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * logmvnpdfFS.c
 *
 * Code generation for function 'logmvnpdfFS'
 *
 */

/* Include files */
#include "logmvnpdfFS.h"
#include "blockedSummation.h"
#include "chol.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "mldivide.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "sum.h"
#include <math.h>
#include <string.h>

/* Function Declarations */
static void d_minus(emxArray_real_T *X0, const emxArray_real_T *X,
                    const emxArray_real_T *Mu);

/* Function Definitions */
static void d_minus(emxArray_real_T *X0, const emxArray_real_T *X,
                    const emxArray_real_T *Mu)
{
  const double *Mu_data;
  const double *X_data;
  double *X0_data;
  int aux_0_1;
  int aux_1_1;
  int b_loop_ub;
  int i;
  int i1;
  int loop_ub;
  int stride_0_1;
  int stride_1_1;
  Mu_data = Mu->data;
  X_data = X->data;
  i = X0->size[0] * X0->size[1];
  X0->size[0] = X->size[0];
  if (Mu->size[1] == 1) {
    X0->size[1] = X->size[1];
  } else {
    X0->size[1] = Mu->size[1];
  }
  emxEnsureCapacity_real_T(X0, i);
  X0_data = X0->data;
  stride_0_1 = (X->size[1] != 1);
  stride_1_1 = (Mu->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (Mu->size[1] == 1) {
    loop_ub = X->size[1];
  } else {
    loop_ub = Mu->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = X->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      X0_data[i1 + X0->size[0] * i] =
          X_data[i1 + X->size[0] * aux_0_1] - Mu_data[aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

void logmvnpdfFS(const emxArray_real_T *X, const emxArray_real_T *Mu,
                 const emxArray_real_T *Sigma, emxArray_real_T *y)
{
  emxArray_real_T *A;
  emxArray_real_T *X0;
  emxArray_real_T *eyed;
  emxArray_real_T *r;
  emxArray_real_T *x;
  const double *Mu_data;
  const double *Sigma_data;
  const double *X_data;
  double Const;
  double varargin_1;
  double *X0_data;
  double *eyed_data;
  int b_loop_ub;
  int i;
  int loop_ub;
  int m;
  Sigma_data = Sigma->data;
  Mu_data = Mu->data;
  X_data = X->data;
  /* logmvnpdfFS produces log of Multivariate normal probability density
   * function (pdf) */
  /*  */
  /* <a href="matlab: docsearchFS('logmvnpdfFS')">Link to the help function</a>
   */
  /*  */
  /*  This function is a much faster version than (log of) Matlab function */
  /*  mvnpdf.  If this function is called without optional arguments than it */
  /*  uses matlab function bsxfun to compute */
  /*  the deviations form the means and no mex function. */
  /*  If this function is called with the four optional input */
  /*  arguments X0, eyed, n and d a mex function based on C code is directly
   * used. */
  /*  Additional details follow: in order to compute the kernel of the quadratic
   * form */
  /*  at the exponent logmvnpdfFS creates an identity of size length(Mu) and */
  /*  similarly needs to compute length(Mu). These two quantites can be */
  /*  precalculated and supplied as input parameters. If logmvnpdfFS has to be
   */
  /*  called thousands of times (as it happens for example in each iteration */
  /*  of all procedures of cluster analysis based mixtures of multivariate */
  /*  gaussian distributions). The same argument above applies to scalars n */
  /*  and d which are directly passed to the compiled mex function */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*  X :           Input data. Scalar, Vector or matrix. */
  /*                n x d data matrix; n observations and d variables. Rows of
   */
  /*                Y represent observations, and columns represent variables or
   * coordinates. */
  /*                The (log of the) probability density of the multivariate */
  /*                normal distribution will be evaluated at each row of the */
  /*                n-by-d matrix Y */
  /*                Data Types - single|double */
  /*  Mu:           mean mu of the multivariate normal distribution. 1-by-d
   * vector. */
  /*                Data Types - single|double */
  /*  Sigma  :      covariance matrix of the multivariate normal distribution.
   */
  /*                d-by-d matrix. */
  /*                Data Types - single|double */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*    X0  :       matrix of the same size of X which passes to C function a
   * container. */
  /*                Note that options X0, eyed, n, and d must be supplied */
  /*                together. */
  /*                  Example - 'X0',X */
  /*                  Data Types - single|double */
  /*  */
  /*   eyed :       identity matrix of size length(Mu) wchich passes to C
   * function a container. */
  /*                Note that options X0, eyed, n, and d must be supplied */
  /*                together. */
  /*                  Example - 'eyed',eye(v) */
  /*                  Data Types - single|double */
  /*  */
  /*      n :       scalar which passes to C function size(X,1). */
  /*                Note that options X0, eyed, n, and d must be supplied */
  /*                together. */
  /*                  Example - 'eyed',eye(v) */
  /*                  Data Types - single|double */
  /*  */
  /*      d :       scalar which passes to C function length(Mu). */
  /*                Note that options X0, eyed, n, and d must be supplied */
  /*                together. */
  /*                  Example - 'eyed',eye(v) */
  /*                  Data Types - single|double */
  /*  */
  /*         msg  : Level of output to display. Scalar. */
  /*                Scalar which controls whether to display or not messages */
  /*                on the screen. If msg==1 (default) messages are displayed */
  /*                on the screen when cholesky of Sigma is impossibile */
  /*                else no message is displayed on the screen. When Clolesky */
  /*                of Sigma is impossible -Inf output is returned. */
  /*                  Example - 'msg',1 */
  /*                  Data Types - single | double */
  /*  */
  /*      callmex  : call or not mex function to compute the result. Boolean. */
  /*                Boolean which controls whether to call or not the mex
   * function. */
  /*                  Example - 'callmex',false */
  /*                  Data Types - boolean */
  /*  */
  /*  Output: */
  /*  */
  /*    y    :   log-density of the multivariate normal. Vector. Vector with
   * length */
  /*                equal to n which returns the log-density of the multivariate
   * normal */
  /*                distribution with mean Mu and covariance Sigma, evaluated at
   * each row */
  /*                of X. */
  /*  */
  /*  See also mvnpdf */
  /*  */
  /*  References: */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* <a href="matlab: docsearchFS('logmvnpdfFS')">Link to the help function</a>
   */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*    Examples: */
  /* { */
  /*     % Call to logmvnpdfFS with 3 input arguments. */
  /*      n=20; */
  /*      v=2; */
  /*      X=randn(n,v); */
  /*      mu = [1 1]; Sigma = [.9 .4; .4 .3]; */
  /*      y = logmvnpdfFS(X, mu, Sigma); */
  /* } */
  /* { */
  /*      % Comparison with mvnpdf. */
  /*      % In this example we check the agreement of the results with MATLAB */
  /*      % function mvnpdf. */
  /*      n=20000; */
  /*      v=2; */
  /*      X=randn(n,v); */
  /*      mu = [1 -1]; Sigma = [.9 .4; .4 .3]; */
  /*      y = logmvnpdfFS(X, mu, Sigma); */
  /*      y1=log(mvnpdf(X,mu,Sigma)); */
  /*      max(abs(y-y1)) */
  /*      % 2.842e-14 */
  /* } */
  /* { */
  /*    % Remark: Options X0, eyed, n, and d must be used together. */
  /* } */
  /* { */
  /*     % TIME COMPARISON USING TIC TOC. */
  /*     % In the examples below we compare the speed of the different solutions
   */
  /*     % logmvnpdfFS with mex function and logmvnpdfFS without mex function */
  /*  */
  /*     % In this code computation time is based on tic toc combined with a
   * series */
  /*     % of replications */
  /*  */
  /*     % nn = sample size */
  /*     % vv = number of variables */
  /*     nn=[100 200 500 1000 5000 10000 50000 100000]; */
  /*     vv=[2 5 10 20]; */
  /*  */
  /*     % rep =number of replications */
  /*     rep = 1000; */
  /*  */
  /*     ttMat=nan(length(nn) , length(vv)); */
  /*     ttFSwithMex=ttMat; */
  /*     ttFSnoMex=ttMat; */
  /*  */
  /*     Mat=0; tMat=0; */
  /*     FSwithmex=0; tFSwithMex=0; */
  /*     FSnoMex=0; tFSnoMex=0; */
  /*  */
  /*     in = 1; iv=1; */
  /*     for n = nn */
  /*         for v = vv */
  /*  */
  /*             X0 = zeros(n,v); */
  /*             eyed=eye(v); */
  /*  */
  /*             for i=1:rep */
  /*  */
  /*                 X = randn(n,v); */
  /*                 Mu = randn(1,v); */
  /*                 Sigma=cov(X); */
  /*  */
  /*                 %  Matlab function mvnpdf, (black line in plot) */
  /*                 Mat = tic; */
  /*                 y0 = mvnpdf(X, Mu, Sigma); */
  /*                 y0=log(y0); */
  /*                 tMat = tMat + toc(Mat); */
  /*  */
  /*                 % logmvnpdfFS using mex file for mean deviations, (blue
   * line in plot) */
  /*                 FSwithmex = tic; */
  /*                 yD = logmvnpdfFS(X, Mu, Sigma,X0,eyed,n,v); */
  /*                 tFSwithMex = tFSwithMex + toc(FSwithmex); */
  /*  */
  /*                 % logmvnpdfFS and no mex file for mean deviations. (red
   * line in plot) */
  /*                 FSnoMex = tic; */
  /*                 yI = logmvnpdfFS(X, Mu, Sigma); */
  /*                 tFSnoMex = tFSnoMex + toc(FSnoMex); */
  /*  */
  /*                 if (sum(sum(abs(y0-yD))))>10^-6  || (sum(sum(abs(y0-yI))))
   * >10^-6 */
  /*                    error('FSDA:logmvnpdfFS:ShouldBeEq','Difference in
   * results: stop'); */
  /*                 end */
  /*  */
  /*             end */
  /*  */
  /*             ttMat(in,iv) = tMat; */
  /*             ttFSwithMex(in,iv) = tFSwithMex; */
  /*             ttFSnoMex(in,iv) = tFSnoMex; */
  /*  */
  /*             Mat=0; tMat=0; */
  /*             FSwithmex=0; tFSwithMex=0; */
  /*             FSnoMex=0; tFSnoMex=0; */
  /*  */
  /*             disp(['n=' num2str(n) ' -- v=' num2str(v)]); */
  /*             iv = iv+1; */
  /*  */
  /*         end */
  /*         in = in+1; */
  /*         iv = 1; */
  /*     end */
  /*  */
  /*     % Plotting part */
  /*     a=ver; */
  /*     a=a.Release; */
  /*     aa=1; */
  /*     bb=8; */
  /*  */
  /*     for ij=1:length(vv); */
  /*         subplot(length(vv)/2,2,ij) */
  /*         hold('on') */
  /*         plot(nn(aa:bb)',ttMat(aa:bb,ij),'k'); */
  /*         plot(nn(aa:bb)',ttFSwithMex(aa:bb,ij),'b') */
  /*         plot(nn(aa:bb)',ttFSnoMex(aa:bb,ij),'r'); */
  /*  */
  /*         if ij==1 */
  /*             title(['v (number of variables)=' num2str(vv(ij)) ' version'
   * a]) */
  /*         else */
  /*             title(['v=' num2str(vv(ij))]) */
  /*         end */
  /*         ylabel('Seconds') */
  /*         xlabel('Number of observations') */
  /*         if ij==4 */
  /*             legend('mvnpdf','FS+mex','FS','location','NorthWest') */
  /*         end */
  /*     end */
  /*  */
  /*     hold off; */
  /* } */
  /* { */
  /*     %% TIME COMPARISON USING TIMEIT FUNCTION. */
  /*     % Remark: timeit function is present from  MATLAB 2013b */
  /*  */
  /*     if verLessThan('matlab', '8.2.0') */
  /*         warning('FSDA:logmvnpdfFS:MatlabTooOld','This example needs routine
   * timeit which has been introduced in Matlab 2013b') */
  /*         warning('FSDA:logmvnpdfFS:MatlabTooOld','You have a version of
   * Matlab which is < 2013b and you cannot run this example') */
  /*     else */
  /*         % nn = sample size */
  /*         % vv = number of variables */
  /*         nn=[100 200 500 1000 5000 10000 50000 100000]; */
  /*         vv=[2 5 10 20]; */
  /*  */
  /*         ttMat=nan(length(nn) , length(vv)); */
  /*         ttFSwithMex=ttMat; */
  /*         ttFSnoMex=ttMat; */
  /*  */
  /*         in = 1; iv=1; */
  /*         for n = nn */
  /*             for v = vv */
  /*  */
  /*                 X0 = zeros(n,v); */
  /*                 eyed=eye(v); */
  /*  */
  /*                 X = randn(n,v); */
  /*                 Mu = randn(1,v); */
  /*                 Sigma=cov(X); */
  /*  */
  /*                 %  Matlab function mvnpdf */
  /*                 yMat = @() log(mvnpdf(X, Mu, Sigma)); */
  /*                 tMat = timeit(yMat); */
  /*  */
  /*                 % logmvnpdfFS using mex file for mean deviations. */
  /*                 yFSwithMex = @() logmvnpdfFS(X, Mu, Sigma,X0,eyed,n,v); */
  /*                 tFSwithMex = timeit(yFSwithMex); */
  /*  */
  /*                 % logmvnpdfFS and no mex file for mean deviations. */
  /*                 yFSnoMex = @() logmvnpdfFS(X, Mu, Sigma); */
  /*                 tFSnoMex = timeit(yFSnoMex); */
  /*  */
  /*                 ttMat(in,iv) = tMat; */
  /*                 ttFSwithMex(in,iv) = tFSwithMex; */
  /*                 ttFSnoMex(in,iv) = tFSnoMex; */
  /*  */
  /*                 disp(['n=' num2str(n) ' -- v=' num2str(v)]); */
  /*                 iv = iv+1; */
  /*  */
  /*             end */
  /*             in = in+1; */
  /*             iv = 1; */
  /*         end */
  /*  */
  /*         % Plotting part */
  /*         a=ver; */
  /*         a=a.Release; */
  /*         aa=1; */
  /*         bb=length(nn); */
  /*  */
  /*         for ij=1:length(vv); */
  /*             subplot(length(vv)/2,2,ij) */
  /*             hold('on') */
  /*             plot(nn(aa:bb)',ttMat(aa:bb,ij),'k'); */
  /*             plot(nn(aa:bb)',ttFSwithMex(aa:bb,ij),'b') */
  /*             plot(nn(aa:bb)',ttFSnoMex(aa:bb,ij),'r'); */
  /*  */
  /*             if ij==1 */
  /*                 title(['v (number of variables) =' num2str(vv(ij)) '
   * version' a]) */
  /*             else */
  /*                 title(['v=' num2str(vv(ij))]) */
  /*             end */
  /*             xlabel('Number of observations') */
  /*             ylabel('Seconds') */
  /*  */
  /*             if ij==4 */
  /*                 legend('mvnpdf','FS+mex','FS','location','NorthWest') */
  /*             end */
  /*  */
  /*         end */
  /*  */
  /*         hold off; */
  /*     end */
  /* } */
  /* { */
  /*     % Example of the use of option msg 0. */
  /*     n=20000; */
  /*     v=2; */
  /*     X=randn(n,v); */
  /*     mu = [1 -1]; Sigma = [.9 1; 1 .3]; */
  /*     msg=0; */
  /*     X0=X; */
  /*     eyed=eye(v); */
  /*     y = logmvnpdfFS(X,mu,Sigma,X0,eyed,n,v,msg); */
  /*     % y is -Inf but no warning is shown. */
  /* } */
  /* { */
  /*     % Example of the use of option msg 1. */
  /*     n=20000; */
  /*     v=2; */
  /*     X=randn(n,v); */
  /*     mu = [1 -1]; Sigma = [.9 1; 1 .3]; */
  /*     msg=1; */
  /*     X0=X; */
  /*     eyed=eye(v); */
  /*     y = logmvnpdfFS(X,mu,Sigma,X0,eyed,n,v,msg); */
  /*     %  y is -Inf and warning is shown. */
  /* } */
  /*  Beginning  of code. */
  /*    Note that X/Sigma ~ X*inv(Sigma) ~ mrdivide(X,Sigma) are equivalent. */
  /*  verLess2016b is a boolean which is true if current version is less then */
  /*  2016b */
  emxInit_real_T(&X0, 2);
  if (X->size[1] == Mu->size[1]) {
    i = X0->size[0] * X0->size[1];
    X0->size[0] = X->size[0];
    X0->size[1] = X->size[1];
    emxEnsureCapacity_real_T(X0, i);
    X0_data = X0->data;
    loop_ub = X->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = X->size[0];
      for (m = 0; m < b_loop_ub; m++) {
        X0_data[m + X0->size[0] * i] = X_data[m + X->size[0] * i] - Mu_data[i];
      }
    }
  } else {
    d_minus(X0, X, Mu);
  }
  emxInit_real_T(&eyed, 2);
  /*  Create an identity matrix of size d */
  m = X0->size[1];
  i = eyed->size[0] * eyed->size[1];
  eyed->size[0] = X0->size[1];
  eyed->size[1] = X0->size[1];
  emxEnsureCapacity_real_T(eyed, i);
  eyed_data = eyed->data;
  loop_ub = X0->size[1] * X0->size[1];
  for (i = 0; i < loop_ub; i++) {
    eyed_data[i] = 0.0;
  }
  if (X0->size[1] > 0) {
    for (b_loop_ub = 0; b_loop_ub < m; b_loop_ub++) {
      eyed_data[b_loop_ub + eyed->size[0] * b_loop_ub] = 1.0;
    }
  }
  emxInit_real_T(&A, 2);
  /*  Take Choleski of Sigma */
  i = A->size[0] * A->size[1];
  A->size[0] = Sigma->size[0];
  A->size[1] = Sigma->size[1];
  emxEnsureCapacity_real_T(A, i);
  eyed_data = A->data;
  loop_ub = Sigma->size[0] * Sigma->size[1];
  for (i = 0; i < loop_ub; i++) {
    eyed_data[i] = Sigma_data[i];
  }
  m = cholesky(A);
  eyed_data = A->data;
  if (m != 0) {
    i = y->size[0];
    y->size[0] = 1;
    emxEnsureCapacity_real_T(y, i);
    X0_data = y->data;
    X0_data[0] = rtMinusInf;
  } else {
    /*  Define the following value: d*log(2*pi)/2 */
    /*  Compute log(sqrt(diag(Sigma))), and define a constant value. */
    emxInit_real_T(&x, 1);
    if ((A->size[0] == 1) && (A->size[1] == 1)) {
      i = x->size[0];
      x->size[0] = 1;
      emxEnsureCapacity_real_T(x, i);
      X0_data = x->data;
      X0_data[0] = eyed_data[0];
    } else {
      m = A->size[0];
      b_loop_ub = A->size[1];
      if (m <= b_loop_ub) {
        b_loop_ub = m;
      }
      if (0 < A->size[1]) {
        m = b_loop_ub;
      } else {
        m = 0;
      }
      i = x->size[0];
      x->size[0] = m;
      emxEnsureCapacity_real_T(x, i);
      X0_data = x->data;
      i = m - 1;
      for (b_loop_ub = 0; b_loop_ub <= i; b_loop_ub++) {
        X0_data[b_loop_ub] = eyed_data[b_loop_ub + A->size[0] * b_loop_ub];
      }
    }
    m = x->size[0];
    for (b_loop_ub = 0; b_loop_ub < m; b_loop_ub++) {
      X0_data[b_loop_ub] = log(X0_data[b_loop_ub]);
    }
    emxInit_real_T(&r, 2);
    Const = blockedSummation(x, x->size[0]) +
            0.918938533204673 * (double)X0->size[1];
    b_mldivide(A, eyed, r);
    b_mtimes(X0, r, eyed);
    eyed_data = eyed->data;
    i = r->size[0] * r->size[1];
    r->size[0] = eyed->size[0];
    r->size[1] = eyed->size[1];
    emxEnsureCapacity_real_T(r, i);
    X0_data = r->data;
    loop_ub = eyed->size[0] * eyed->size[1];
    emxFree_real_T(&x);
    for (i = 0; i < loop_ub; i++) {
      varargin_1 = eyed_data[i];
      X0_data[i] = varargin_1 * varargin_1;
    }
    sum(r, y);
    X0_data = y->data;
    loop_ub = y->size[0];
    emxFree_real_T(&r);
    for (i = 0; i < loop_ub; i++) {
      X0_data[i] = -0.5 * X0_data[i] - Const;
    }
    /*  Note that the instruction above is slightly faster than */
    /*  y = -0.5*sum((X*inv(Sigma)).^2,2)- Const; %#ok<MINV> */
  }
  emxFree_real_T(&A);
  emxFree_real_T(&eyed);
  emxFree_real_T(&X0);
}

/* End of code generation (logmvnpdfFS.c) */
