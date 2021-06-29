/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Score.c
 *
 * Code generation for function 'Score'
 *
 */

/* Include files */
#include "Score.h"
#include "blockedSummation.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "mldivide.h"
#include "mtimes.h"
#include "qr.h"
#include "rt_nonfinite.h"
#include "xnrm2.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void Score(const emxArray_real_T *y, const emxArray_real_T *X,
           double varargin_2, double outSC_Score_data[], int *outSC_Score_size,
           double *outSC_Lik)
{
  emxArray_real_T *R;
  emxArray_real_T *Xw;
  emxArray_real_T *logy;
  emxArray_real_T *ri;
  emxArray_real_T *ylai;
  emxArray_real_T *ylaim1;
  emxArray_real_T *z;
  double G;
  double b_X;
  double laiGlaim1;
  double logG;
  int b_i;
  int b_loop_ub;
  int c_loop_ub;
  int i;
  int k;
  int loop_ub;
  int nx;
  int p;
  signed char i1;
  bool empty_non_axis_sizes;
  emxInit_real_T(&logy, 1);
  /* Score computes the score test for transformation */
  /*  */
  /* <a href="matlab: docsearchFS('Score')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     y:         Response variable. Vector. A vector with n elements that */
  /*                contains the response */
  /*                variable.  It can be either a row or a column vector. */
  /*     X :        Predictor variables. Matrix. Data matrix of explanatory */
  /*                variables (also called 'regressors') */
  /*                of dimension (n x p-1). Rows of X represent observations,
   * and */
  /*                columns represent variables. */
  /*                Missing values (NaN's) and infinite values (Inf's) are
   * allowed, */
  /*                since observations (rows) with missing or infinite values
   * will */
  /*                automatically be excluded from the computations. */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*     intercept :  Indicator for constant term. true (default) | false. */
  /*                  Indicator for the constant term (intercept) in the fit, */
  /*                  specified as the comma-separated pair consisting of */
  /*                  'Intercept' and either true to include or false to remove
   */
  /*                  the constant term from the model. */
  /*                  Example - 'intercept',false */
  /*                  Data Types - boolean */
  /*  */
  /*            la  :transformation parameter. Vector. It specifies for which
   * values of the */
  /*                  transformation parameter it is necessary to compute the */
  /*                  score test. */
  /*                  Default value of lambda is la=[-1 -0.5 0 0.5 1]; that */
  /*                  is the five most common values of lambda */
  /*                Example - 'la',[0 0.5] */
  /*                Data Types - double */
  /*  */
  /*            Lik : likelihood for the augmented model. Boolean. */
  /*                    If true the value of the likelihood for the augmented */
  /*                    model will be produced */
  /*                  else (default) only the value of the score test will be */
  /*                  given */
  /*                Example - 'Lik',false */
  /*                Data Types - logical */
  /*  */
  /*        nocheck : Check input arguments. Boolean. */
  /*                If nocheck is equal to true no check is performed on */
  /*                  matrix y and matrix X. Notice that y and X are left */
  /*                  unchanged. In other words the additional column of ones */
  /*                  for the intercept is not added. As default nocheck=false.
   */
  /*                Example - 'nocheck',true */
  /*                Data Types - boolean */
  /*  */
  /*   Output: */
  /*  */
  /*   The output consists of a structure 'outSC' containing the following
   * fields: */
  /*  */
  /*         outSC.Score    =    score test. Vector. Vector of length */
  /*                             length(lambda) which contains the value of the
   */
  /*                             score test for each value of lambda specfied */
  /*                             in optional input parameter la. If la is not */
  /*                             specified, the vector will be of length 5 and
   */
  /*                             contains the values of the score test for the
   */
  /*                             5 most common values of lambda. */
  /*         outSC.Lik      =    value of the likelihood. Scalar. This output */
  /*                            is produced only if input value Lik =1 */
  /*  */
  /*  See also: FSRfan, ScoreYJ, ScoreYJpn, normBoxCox, normYJ */
  /*  */
  /*  References: */
  /*  */
  /*  Atkinson, A.C. and Riani, M. (2000), "Robust Diagnostic Regression */
  /*  Analysis", Springer Verlag, New York. [see equation 2.30 for the */
  /*  expression for score test statistic] */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('Score')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples */
  /* { */
  /*     %% Score with all default options. */
  /*     % Wool data. */
  /*     XX=load('wool.txt'); */
  /*     y=XX(:,end); */
  /*     X=XX(:,1:end-1); */
  /*     % Score test using the five most common values of lambda */
  /*     [outSC]=Score(y,X); */
  /*     disp('Values of the score test') */
  /*     disp({'la=-1' 'la=-0.5' 'la=0' 'la=0.5' 'la=1'}) */
  /*     disp(outSC.Score') */
  /* } */
  /* { */
  /*     % Score with optional arguments. */
  /*     % Loyalty cards data. */
  /*     load('loyalty.txt'); */
  /*     y=loyalty(:,4); */
  /*     X=loyalty(:,1:3); */
  /*     % la = vector containing the values of the transformation */
  /*     % parameters which have to be tested */
  /*     la=[0.25 1/3 0.4 0.5]; */
  /*     [outSc]=Score(y,X,'la',la,'intercept',false); */
  /* } */
  /*  Beginning of code */
  /* chkinputR makes some input parameters and user options checking in
   * regression */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*  y:            Response variable. Vector. */
  /*                A vector with n elements that contains the response */
  /*                variables, possibly with missing values (NaN's) and */
  /*                infinite values (Inf's). */
  /*  X :           Predictor variables. Matrix. */
  /*                Data matrix of explanatory variables (also called */
  /*                'regressors') of dimension (n x p-1), possibly with missing
   */
  /*                values (NaN's) and infinite values (Inf's). Rows of X */
  /*                represent observations, and columns represent variables. */
  /*  nnargin:      nargin. Scalar. The number of input arguments specified for
   * the caller */
  /*                function. */
  /*  vvarargin:    nvarargin. Scalar. The variable length input argument list
   */
  /*                specified for the */
  /*                caller function. */
  /*  */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*  Output: */
  /*  */
  /*  y:            response without missing and infs. Vector. The new response
   * variable, with observations (rows) with */
  /*                missing or infinite values excluded. */
  /*  X:            Predictor variables without infs and missings. Matrix. */
  /*                The new matrix of explanatory variables, with missing or */
  /*                infinite values excluded. */
  /*  n:            Number of rows of X (observations). Scalar.  Number of */
  /*                rows after listwise exclusion. */
  /*  p:            Number of columns of X (variables). Scalar. */
  /*                Number of parameters to be estimated. */
  /*  */
  /*  */
  /*  More About: */
  /*  */
  /*  This routines preforms the following operations: */
  /*  1) If y is a row vector it is transformed in a column vector; */
  /*  2) Checks that X is a matrix that has not more than two dimensions; */
  /*  3) Checks dimension consistency of X and y; */
  /*  4) Removes observations with missing or infinite values from X or y */
  /*  (listwise exclusion); */
  /*  5) Adds to matrix X a column of ones if option intercept is 1; */
  /*  6) Checks if there are constant columns in matrix X. In other words, if */
  /*  Xj is a generic column of X (excluding the column which contains the */
  /*  intercept) it removes it if max(Xj)=min(Xj) and produces a warning. */
  /*  7) Computes final values of n and p after previous operations; */
  /*  8) Makes sure than n>=p; */
  /*  9) Makes sure that new X is full rank */
  /*  */
  /*  See also chkinputRB */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Example: */
  /* { */
  /*  example_producing_error */
  /*     %To examplify the behaviour of chkinputR, we call function FSR without
   * a */
  /*     %compulsory parameter ('y'). */
  /*     n=200; */
  /*     p=3; */
  /*     state1=123498; */
  /*     randn('state', state1); */
  /*     X=randn(n,p); */
  /*     [out]=FSR(X); */
  /* } */
  /*  Beginning of code */
  /*  chklist is the vector containing the names of optional arguments */
  /*  chkchk is the position of the option nocheck in vector chklist */
  /*  chkchk = strmatch('nocheck',chklist,'exact'); */
  /*  chkint is the position of the option intercept in vector chklist */
  /*  chkint = strmatch('intercept',chklist,'exact'); */
  /*  If nocheck=true, then skip checks on y and X */
  p = X->size[1] + 1;
  /*  Add the extra check on vector y */
  /*  Write in structure 'options' the options chosen by the user */
  /*   Sc= vector which contains the t test for constructed variables for the */
  /*   values of \lambda specified in vector la */
  /*  Lik is a vector which contains the likelihoods for diff. values of la */
  /*  Geometric mean of the observations */
  i = logy->size[0];
  logy->size[0] = y->size[0];
  emxEnsureCapacity_real_T(logy, i);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    logy->data[i] = y->data[i];
  }
  nx = y->size[0];
  for (k = 0; k < nx; k++) {
    logy->data[k] = log(logy->data[k]);
  }
  G = exp(blockedSummation(logy, logy->size[0]) / (double)X->size[0]);
  logG = log(G);
  /*  loop over the values of \lambda */
  *outSC_Score_size = 1;
  loop_ub = (X->size[1] + 1) * (X->size[1] + 1);
  b_X = (double)(X->size[0] - X->size[1]) - 1.0;
  /*  Define transformed and constructed variable */
  emxInit_real_T(&z, 1);
  emxInit_real_T(&ylai, 1);
  emxInit_real_T(&ylaim1, 1);
  if (fabs(varargin_2) < 1.0E-8) {
    b_loop_ub = logy->size[0];
    i = z->size[0];
    z->size[0] = logy->size[0];
    emxEnsureCapacity_real_T(z, i);
    for (i = 0; i < b_loop_ub; i++) {
      z->data[i] = G * logy->data[i];
    }
    i = ylai->size[0];
    ylai->size[0] = z->size[0];
    emxEnsureCapacity_real_T(ylai, i);
    b_loop_ub = z->size[0];
    for (i = 0; i < b_loop_ub; i++) {
      ylai->data[i] = z->data[i] * (logy->data[i] / 2.0 - logG);
    }
  } else {
    /*  laiGlaim1=lai*G^(lai-1); */
    laiGlaim1 = varargin_2 * exp((varargin_2 - 1.0) * logG);
    /*  ylai=y.^lai; */
    b_loop_ub = logy->size[0];
    i = ylai->size[0];
    ylai->size[0] = logy->size[0];
    emxEnsureCapacity_real_T(ylai, i);
    for (i = 0; i < b_loop_ub; i++) {
      ylai->data[i] = varargin_2 * logy->data[i];
    }
    nx = ylai->size[0];
    for (k = 0; k < nx; k++) {
      ylai->data[k] = exp(ylai->data[k]);
    }
    i = ylaim1->size[0];
    ylaim1->size[0] = ylai->size[0];
    emxEnsureCapacity_real_T(ylaim1, i);
    b_loop_ub = ylai->size[0];
    for (i = 0; i < b_loop_ub; i++) {
      ylaim1->data[i] = ylai->data[i] - 1.0;
    }
    i = z->size[0];
    z->size[0] = ylaim1->size[0];
    emxEnsureCapacity_real_T(z, i);
    b_loop_ub = ylaim1->size[0];
    for (i = 0; i < b_loop_ub; i++) {
      z->data[i] = ylaim1->data[i] / laiGlaim1;
    }
    G = 1.0 / varargin_2 + logG;
    b_loop_ub = ylai->size[0];
    for (i = 0; i < b_loop_ub; i++) {
      ylai->data[i] =
          (ylai->data[i] * logy->data[i] - ylaim1->data[i] * G) / laiGlaim1;
    }
    /*  OLD slow code */
    /*  z=(y.^la(i)-1)/(la(i)*G^(la(i)-1)); */
    /*  w=(y.^la(i).*log(y)-(y.^la(i)-1)*(1/la(i)+log(G)))/(la(i)*G^(la(i)-1));
     */
  }
  emxFree_real_T(&logy);
  /*  Define augmented X matrix */
  if ((X->size[0] != 0) && (X->size[1] != 0)) {
    nx = X->size[0];
  } else if (ylai->size[0] != 0) {
    nx = ylai->size[0];
  } else {
    nx = X->size[0];
  }
  empty_non_axis_sizes = (nx == 0);
  if (empty_non_axis_sizes || ((X->size[0] != 0) && (X->size[1] != 0))) {
    b_loop_ub = X->size[1];
  } else {
    b_loop_ub = 0;
  }
  if (empty_non_axis_sizes || (ylai->size[0] != 0)) {
    i1 = 1;
  } else {
    i1 = 0;
  }
  emxInit_real_T(&Xw, 2);
  i = Xw->size[0] * Xw->size[1];
  Xw->size[0] = nx;
  Xw->size[1] = b_loop_ub + i1;
  emxEnsureCapacity_real_T(Xw, i);
  for (i = 0; i < b_loop_ub; i++) {
    for (b_i = 0; b_i < nx; b_i++) {
      Xw->data[b_i + Xw->size[0] * i] = X->data[b_i + nx * i];
    }
  }
  c_loop_ub = i1;
  for (i = 0; i < c_loop_ub; i++) {
    for (b_i = 0; b_i < nx; b_i++) {
      Xw->data[b_i + Xw->size[0] * b_loop_ub] = ylai->data[b_i];
    }
  }
  emxInit_real_T(&ri, 2);
  emxInit_real_T(&R, 2);
  qr(Xw, ri, R);
  b_loop_ub = ri->size[1] - 1;
  c_loop_ub = ri->size[0];
  i = ylai->size[0];
  ylai->size[0] = ri->size[1];
  emxEnsureCapacity_real_T(ylai, i);
  for (b_i = 0; b_i <= b_loop_ub; b_i++) {
    ylai->data[b_i] = 0.0;
  }
  for (k = 0; k < c_loop_ub; k++) {
    for (b_i = 0; b_i <= b_loop_ub; b_i++) {
      ylai->data[b_i] += ri->data[b_i * ri->size[0] + k] * z->data[k];
    }
  }
  mldivide(R, ylai, ylaim1);
  b_loop_ub = Xw->size[0] - 1;
  c_loop_ub = Xw->size[1];
  i = ylai->size[0];
  ylai->size[0] = Xw->size[0];
  emxEnsureCapacity_real_T(ylai, i);
  for (b_i = 0; b_i <= b_loop_ub; b_i++) {
    ylai->data[b_i] = 0.0;
  }
  for (k = 0; k < c_loop_ub; k++) {
    nx = k * Xw->size[0];
    for (b_i = 0; b_i <= b_loop_ub; b_i++) {
      ylai->data[b_i] += Xw->data[nx + b_i] * ylaim1->data[k];
    }
  }
  b_loop_ub = z->size[0];
  for (i = 0; i < b_loop_ub; i++) {
    z->data[i] -= ylai->data[i];
  }
  /*  Sum of squares of residuals */
  if (z->size[0] == 0) {
    G = 0.0;
  } else {
    G = b_xnrm2(z->size[0], z);
  }
  G *= G;
  /*  Compute t stat for constructed added variable */
  i = Xw->size[0] * Xw->size[1];
  Xw->size[0] = X->size[1] + 1;
  Xw->size[1] = X->size[1] + 1;
  emxEnsureCapacity_real_T(Xw, i);
  emxFree_real_T(&z);
  for (i = 0; i < loop_ub; i++) {
    Xw->data[i] = 0.0;
  }
  if (X->size[1] + 1 > 0) {
    for (k = 0; k < p; k++) {
      Xw->data[k + Xw->size[0] * k] = 1.0;
    }
  }
  b_mldivide(R, Xw, ri);
  d_mtimes(ri, ri, Xw);
  loop_ub = Xw->size[0] * Xw->size[1];
  emxFree_real_T(&R);
  emxFree_real_T(&ri);
  for (i = 0; i < loop_ub; i++) {
    Xw->data[i] = Xw->data[i] * G / b_X;
  }
  if ((Xw->size[0] == 1) && (Xw->size[1] == 1)) {
    i = ylai->size[0];
    ylai->size[0] = 1;
    emxEnsureCapacity_real_T(ylai, i);
    ylai->data[0] = Xw->data[0];
  } else {
    nx = Xw->size[0];
    b_loop_ub = Xw->size[1];
    if (nx < b_loop_ub) {
      b_loop_ub = nx;
    }
    if (0 < Xw->size[1]) {
      nx = b_loop_ub;
    } else {
      nx = 0;
    }
    i = ylai->size[0];
    ylai->size[0] = nx;
    emxEnsureCapacity_real_T(ylai, i);
    i = nx - 1;
    for (k = 0; k <= i; k++) {
      ylai->data[k] = Xw->data[k + Xw->size[0] * k];
    }
  }
  emxFree_real_T(&Xw);
  nx = ylai->size[0];
  for (k = 0; k < nx; k++) {
    ylai->data[k] = sqrt(ylai->data[k]);
  }
  outSC_Score_data[0] =
      -ylaim1->data[ylaim1->size[0] - 1] / ylai->data[ylai->size[0] - 1];
  /*  Store the value of the likelihood for the model which also contains */
  /*  the constructed variable */
  /*  Store values of the score test inside structure outSC */
  /*  Store values of the likelihood inside structure outSC */
  *outSC_Lik = rtNaN;
  emxFree_real_T(&ylaim1);
  emxFree_real_T(&ylai);
}

/* End of code generation (Score.c) */
