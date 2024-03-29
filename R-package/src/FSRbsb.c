/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRbsb.c
 *
 * Code generation for function 'FSRbsb'
 *
 */

/* Include files */
#include "FSRbsb.h"
#include "FSRmdr.h"
#include "cat.h"
#include "colon.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_internal_types.h"
#include "fsdaC_types.h"
#include "int2str.h"
#include "linsolve.h"
#include "randsample.h"
#include "rank.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void FSRbsb(const emxArray_real_T *y, const emxArray_real_T *X,
            emxArray_real_T *bsb, double varargin_4, emxArray_real_T *Un,
            emxArray_real_T *BB)
{
  emxArray_boolean_T *boobsbsteps;
  emxArray_boolean_T *bsbT;
  emxArray_boolean_T *oldbsbT;
  emxArray_boolean_T *seq100boo;
  emxArray_char_T_1x310 c_mm;
  emxArray_int32_T *b_r;
  emxArray_int32_T *iidx;
  emxArray_real_T *C;
  emxArray_real_T *Xb;
  emxArray_real_T *b;
  emxArray_real_T *b_y;
  emxArray_real_T *blast;
  emxArray_real_T *c_y;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *seq;
  emxArray_real_T *seq100;
  emxArray_real_T *unit;
  emxArray_real_T *yb;
  const double *X_data;
  const double *y_data;
  double condNumber;
  double init;
  double *BB_data;
  double *Un_data;
  double *Xb_data;
  double *b_data;
  double *blast_data;
  double *bsb_data;
  double *r_data;
  double *seq_data;
  double *yb_data;
  int aoffset;
  int b_i;
  unsigned int b_mm;
  int i;
  unsigned int ij;
  int ini0;
  int loop_ub;
  int mm;
  int n;
  int nwhile;
  int p;
  int trueCount;
  int *iidx_data;
  bool Ra;
  bool exitg1;
  bool *boobsbsteps_data;
  bool *bsbT_data;
  bool *oldbsbT_data;
  bool *seq100boo_data;
  bsb_data = bsb->data;
  X_data = X->data;
  y_data = y->data;
  emxInit_real_T(&Xb, 2);
  /* FSRbsb returns the units belonging to the subset in each step of the
   * forward search */
  /*  */
  /* <a href="matlab: docsearchFS('FSRbsb')">Link to the help function</a> */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*     y    :     Response variable. Vector. A vector with n elements that
   * contains */
  /*                the response variable. y can be either a row or a column
   * vector. */
  /*   X :          Predictor variables. Matrix. */
  /*                Matrix of explanatory variables (also called 'regressors')
   */
  /*                of dimension n x (p-1) where p denotes the number of */
  /*                explanatory variables including the intercept. */
  /*                Rows of X represent observations, and columns represent */
  /*                variables. By default, there is a constant term in the */
  /*                model, unless you explicitly remove it using input option */
  /*                intercept, so do not include a column of 1s in X. Missing */
  /*                values (NaN's) and infinite values (Inf's) are allowed, */
  /*                since observations (rows) with missing or infinite values */
  /*                will automatically be excluded from the computations. */
  /*   bsb :        list of units forming the initial subset. Vector | 0. If */
  /*                bsb=0 then the procedure starts with p units randomly */
  /*                chosen else if bsb is not 0 the search will start with */
  /*                m0=length(bsb) */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*        init  :     Search initialization. Scalar. */
  /*                    It specifies the initial subset size to start */
  /*                    monitoring units forming subset */
  /*                    Example - 'init',100 starts the search from step m=100
   */
  /*                    Data Types - double */
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
  /*     nocheck  :    Check input arguments. Boolean. */
  /*                   If nocheck is equal to 1 no check is performed on */
  /*                   matrix y and matrix X. Notice that y and X are left */
  /*                   unchanged. In other words the additional column of ones
   * for */
  /*                   the intercept is not added. As default nocheck=false. */
  /*                   Example - 'nocheck',true */
  /*                   Data Types - boolean */
  /*  */
  /*    bsbsteps :  Save the units forming subsets in selected steps. Vector or
   */
  /*                empty value. */
  /*                It specifies for which steps of the fwd search it is */
  /*                necessary to save the units forming subset. If bsbsteps */
  /*                is 0 we store the units forming subset in all steps. If */
  /*                bsbsteps=[] or omitted, the default is to store the units */
  /*                forming subset in all steps if n<=5000, else to store the */
  /*                units forming subset at steps init and steps which are */
  /*                multiple of 100. For example, as default, if n=753 and */
  /*                init=6, units forming subset are stored for m=init, 100, */
  /*                200, 300, 400, 500 and 600. */
  /*                Example - 'bsbsteps',[100 200] stores the unis forming */
  /*                subset in steps 100 and 200. */
  /*                Data Types - double */
  /*  */
  /*        msg    :  Level of output to display. Boolean. It controls whether
   */
  /*                  to display or not messages on the screen */
  /*                  If msg==true (default) messages are displayed on the
   * screen about */
  /*                    step of the fwd search */
  /*                  else no message is displayed on the screen. */
  /*                Example - 'msg',true */
  /*                Data Types - boolean */
  /*  */
  /*        plots   : Plot on the screen. Scalar. */
  /*                  If plots=1 the monitoring units plot is displayed on the
   */
  /*                  screen. The default value of plots is 0 (that is no plot
   */
  /*                  is produced on the screen). */
  /*                  Example - 'plots',1 */
  /*                  Data Types - double */
  /*  */
  /*  Output: */
  /*  */
  /*   Un:          Units included in each step. Matrix. */
  /*                (n-init) x 11 Matrix which contains the unit(s) included */
  /*                in the subset at each step of the search. */
  /*                REMARK: in every step the new subset is compared with the */
  /*                old subset. Un contains the unit(s) present in the new */
  /*                subset but not in the old one. */
  /*                Un(1,2) for example contains the unit included in step */
  /*                init+1. */
  /*                Un(end,2) contains the units included in the final step */
  /*                of the search. */
  /*   BB:          Units belonging to subset in each step or selected steps.
   * Matrix. */
  /*                n-by-(n-init+1) or n-by-length(bsbsteps) matrix which */
  /*                contains the units belonging to the subset at each step (or
   */
  /*                in selected steps as specified by optional vector bsbsteps)
   */
  /*                of the forward search. */
  /*                More precisely: */
  /*                BB(:,1) contains the units forming subset in step
   * bsbsteps(1); */
  /*                ....; */
  /*                BB(:,end) contains the units forming subset in step
   * bsbsteps(end); */
  /*                Row 1 of matrix BB is referred to unit 1; */
  /*                ......; */
  /*                Row n of matrix BB is referred to unit n; */
  /*                Units not belonging to subset are denoted with NaN. */
  /*  */
  /*  See also FSRBbsb, FSRHbsb */
  /*  */
  /*  See also: FSReda */
  /*  */
  /*  References: */
  /*  */
  /*  Atkinson, A.C. and Riani, M. (2000), "Robust Diagnostic Regression */
  /*  Analysis", Springer Verlag, New York. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* <a href="matlab: docsearchFS('FSRbsb')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % FSRbsb with all default options. */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*     [out]=LXS(y,X,'nsamp',10000); */
  /*     Un = FSRbsb(y,X,out.bs); */
  /* } */
  /* { */
  /*     %% FSRbsb with optional arguments. */
  /*     % Monitoring units plot for fishery dataset */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*     [out]=LXS(y,X,'nsamp',10000); */
  /*     Un = FSRbsb(y,X,out.bs,'plots',1); */
  /* } */
  /* { */
  /*     %% Monitoring the units belonging to subset. */
  /*     state=1000; */
  /*     randn('state', state); */
  /*     n=100; */
  /*     X=randn(n,3); */
  /*     bet=[3;4;5]; */
  /*     y=3*randn(n,1)+X*bet; */
  /*     y(1:20)=y(1:20)+15; */
  /*     [outLMS]=LXS(y,X); */
  /*     bsb=outLMS.bs; */
  /*     % Store in matrix BB the units belonging to subset in each step of the
   * forward search */
  /*     [Un,BB] = FSRbsb(y,X,bsb); */
  /*     % Create the 'monitoring units plot' */
  /*     figure; */
  /*     seqr=[Un(1,1)-1; Un(:,1)]; */
  /*     plot(seqr,BB','bx'); */
  /*     xlabel('Subset size m'); */
  /*     ylabel('Monitoring units plot'); */
  /*     % The plot, which monitors the units belonging to subset in each step
   * of */
  /*     % the forward search shows that apart from unit 11 which enters the */
  /*     % search in step m=78 all the other contaminated units enter the search
   */
  /*     % in the last 19 steps. */
  /*  */
  /*     % if we consider the seed state=500, we obtain a plot showing that the
   */
  /*     % 20 contaminated units enter the search in the final 20 steps. */
  /*     state=500; */
  /*     randn('state', state); */
  /*     X=randn(n,3); */
  /*     y=3*randn(n,1)+X*bet; */
  /*     y(1:20)=y(1:20)+15; */
  /*     [outLMS]=LXS(y,X); */
  /*     bsb=outLMS.bs; */
  /*     % Store in matrix BB the units belonging to subset in each step of the
   * forward search */
  /*     [Un,BB] = FSRbsb(y,X,bsb); */
  /*     % Create the 'monitoring units plot' */
  /*     figure; */
  /*     seqr=[Un(1,1)-1; Un(:,1)]; */
  /*     plot(seqr,BB','bx'); */
  /*     xlabel('Subset size m'); */
  /*     ylabel('Monitoring units plot'); */
  /* } */
  /* { */
  /*     % Example with monitoring from step 60. */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*     [out]=LXS(y,X,'nsamp',10000); */
  /*     Un = FSRbsb(y,X,out.bs,'init',60); */
  /* } */
  /* { */
  /*     % FSR using a regression model without intercept. */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*     [out]=LXS(y,X); */
  /*     bsb=out.bs; */
  /*     [Un,BB] = FSRbsb(y,X,out.bs,'intercept',false); */
  /* } */
  /* { */
  /*     %FSR applied without doing any checks on y and X variables. */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*     [out]=LXS(y,X,'nsamp',10000); */
  /*     [Un,BB] = FSRbsb(y,X,out.bs,'nocheck',true); */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checking */
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
  p = X->size[1];
  n = X->size[0];
  /*  User options */
  /*  We now overwrite inside structure options the default values with */
  /*  those chosen by the user */
  /*  Initialize Xb (necessary for MATLAB coder) */
  /*  otherwise the following message appears */
  /*  Variable 'Xb' is not fully defined on some execution paths. */
  if (1 > X->size[1]) {
    loop_ub = 0;
  } else {
    loop_ub = X->size[1];
  }
  aoffset = X->size[1];
  i = Xb->size[0] * Xb->size[1];
  Xb->size[0] = loop_ub;
  Xb->size[1] = X->size[1];
  emxEnsureCapacity_real_T(Xb, i);
  Xb_data = Xb->data;
  for (i = 0; i < aoffset; i++) {
    for (b_i = 0; b_i < loop_ub; b_i++) {
      Xb_data[b_i + Xb->size[0] * i] = X_data[b_i + X->size[0] * i];
    }
  }
  emxInit_boolean_T(&bsbT, 1);
  i = bsbT->size[0];
  bsbT->size[0] = bsb->size[0];
  emxEnsureCapacity_boolean_T(bsbT, i);
  bsbT_data = bsbT->data;
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT_data[i] = (bsb_data[i] == 0.0);
  }
  Ra = (bsbT->size[0] != 0);
  if (Ra) {
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub <= bsbT->size[0] - 1)) {
      if (!bsbT_data[loop_ub]) {
        Ra = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
  }
  emxInit_real_T(&yb, 1);
  if (Ra) {
    Ra = true;
    nwhile = 1;
    while (Ra && (nwhile < 100)) {
      randsample(n, p, bsb);
      bsb_data = bsb->data;
      loop_ub = X->size[1];
      i = Xb->size[0] * Xb->size[1];
      Xb->size[0] = bsb->size[0];
      Xb->size[1] = X->size[1];
      emxEnsureCapacity_real_T(Xb, i);
      Xb_data = Xb->data;
      for (i = 0; i < loop_ub; i++) {
        aoffset = bsb->size[0];
        for (b_i = 0; b_i < aoffset; b_i++) {
          Xb_data[b_i + Xb->size[0] * i] =
              X_data[((int)bsb_data[b_i] + X->size[0] * i) - 1];
        }
      }
      aoffset = local_rank(Xb);
      Ra = (aoffset < p);
      nwhile++;
    }
    i = yb->size[0];
    yb->size[0] = bsb->size[0];
    emxEnsureCapacity_real_T(yb, i);
    yb_data = yb->data;
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      yb_data[i] = y_data[(int)bsb_data[i] - 1];
    }
  } else {
    loop_ub = X->size[1];
    i = Xb->size[0] * Xb->size[1];
    Xb->size[0] = bsb->size[0];
    Xb->size[1] = X->size[1];
    emxEnsureCapacity_real_T(Xb, i);
    Xb_data = Xb->data;
    for (i = 0; i < loop_ub; i++) {
      aoffset = bsb->size[0];
      for (b_i = 0; b_i < aoffset; b_i++) {
        Xb_data[b_i + Xb->size[0] * i] =
            X_data[((int)bsb_data[b_i] + X->size[0] * i) - 1];
      }
    }
    i = yb->size[0];
    yb->size[0] = bsb->size[0];
    emxEnsureCapacity_real_T(yb, i);
    yb_data = yb->data;
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      yb_data[i] = y_data[(int)bsb_data[i] - 1];
    }
  }
  ini0 = bsb->size[0];
  /*  check init */
  init = varargin_4;
  if (varargin_4 < X->size[1]) {
    init = X->size[1];
  } else if (varargin_4 < bsb->size[0]) {
    init = bsb->size[0];
  } else if (varargin_4 >= X->size[0]) {
    init = (double)X->size[0] - 1.0;
  }
  /*  Initialise key matrices */
  /*  Initialization of the n x 1 Boolean vector which contains a true in */
  /*  correspondence of the units belonging to subset in each step */
  i = bsbT->size[0];
  bsbT->size[0] = X->size[0];
  emxEnsureCapacity_boolean_T(bsbT, i);
  bsbT_data = bsbT->data;
  loop_ub = X->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT_data[i] = false;
  }
  emxInit_int32_T(&iidx, 1);
  i = iidx->size[0];
  iidx->size[0] = bsb->size[0];
  emxEnsureCapacity_int32_T(iidx, i);
  iidx_data = iidx->data;
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    iidx_data[i] = (int)bsb_data[i];
  }
  loop_ub = iidx->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT_data[iidx_data[i] - 1] = true;
  }
  /*  sequence from 1 to n. */
  emxInit_real_T(&b_y, 2);
  b_data = b_y->data;
  if (X->size[0] < 1) {
    b_y->size[0] = 1;
    b_y->size[1] = 0;
  } else {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = X->size[0];
    emxEnsureCapacity_real_T(b_y, i);
    b_data = b_y->data;
    loop_ub = X->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_data[i] = (double)i + 1.0;
    }
  }
  emxInit_real_T(&seq, 1);
  i = seq->size[0];
  seq->size[0] = b_y->size[1];
  emxEnsureCapacity_real_T(seq, i);
  seq_data = seq->data;
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq_data[i] = b_data[i];
  }
  emxInit_real_T(&r, 2);
  /*  The second column of matrix R will contain the OLS residuals at each step
   */
  /*  of the forward search */
  i = r->size[0] * r->size[1];
  r->size[0] = seq->size[0];
  r->size[1] = 2;
  emxEnsureCapacity_real_T(r, i);
  r_data = r->data;
  loop_ub = seq->size[0];
  for (i = 0; i < loop_ub; i++) {
    r_data[i] = seq_data[i];
  }
  loop_ub = X->size[0];
  for (i = 0; i < loop_ub; i++) {
    r_data[i + r->size[0]] = 0.0;
  }
  /*  If n is very large, the step of the search is printed every 100 step */
  /*  seq100 is linked to printing */
  aoffset = (int)ceil((double)X->size[0] / 100.0);
  if (aoffset < 1) {
    b_y->size[0] = 1;
    b_y->size[1] = 0;
  } else {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = aoffset;
    emxEnsureCapacity_real_T(b_y, i);
    b_data = b_y->data;
    loop_ub = aoffset - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_data[i] = (double)i + 1.0;
    }
  }
  emxInit_real_T(&c_y, 2);
  i = c_y->size[0] * c_y->size[1];
  c_y->size[0] = 1;
  c_y->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(c_y, i);
  yb_data = c_y->data;
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    yb_data[i] = 100.0 * b_data[i];
  }
  emxInit_real_T(&seq100, 2);
  i = seq100->size[0] * seq100->size[1];
  seq100->size[0] = 1;
  seq100->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(seq100, i);
  Xb_data = seq100->data;
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    Xb_data[i] = 100.0 * b_data[i];
  }
  nwhile = c_y->size[1] - 1;
  trueCount = 0;
  aoffset = 0;
  for (b_i = 0; b_i <= nwhile; b_i++) {
    if (yb_data[b_i] <= n) {
      trueCount++;
    }
    if (Xb_data[b_i] <= n) {
      Xb_data[aoffset] = Xb_data[b_i];
      aoffset++;
    }
  }
  emxFree_real_T(&c_y);
  emxInit_boolean_T(&seq100boo, 1);
  i = seq100->size[0] * seq100->size[1];
  seq100->size[0] = 1;
  seq100->size[1] = trueCount;
  emxEnsureCapacity_real_T(seq100, i);
  Xb_data = seq100->data;
  i = seq100boo->size[0];
  seq100boo->size[0] = X->size[0];
  emxEnsureCapacity_boolean_T(seq100boo, i);
  seq100boo_data = seq100boo->data;
  loop_ub = X->size[0];
  for (i = 0; i < loop_ub; i++) {
    seq100boo_data[i] = false;
  }
  emxInit_int32_T(&b_r, 2);
  i = b_r->size[0] * b_r->size[1];
  b_r->size[0] = 1;
  b_r->size[1] = trueCount;
  emxEnsureCapacity_int32_T(b_r, i);
  iidx_data = b_r->data;
  for (i = 0; i < trueCount; i++) {
    iidx_data[i] = (int)Xb_data[i];
  }
  emxFree_real_T(&seq100);
  loop_ub = b_r->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq100boo_data[iidx_data[i] - 1] = true;
  }
  emxFree_int32_T(&b_r);
  /*  Matrix BB will contain the units forming subset in each step (or in */
  /*  selected steps) of the forward search. The first column contains */
  /*  information about units forming subset at step init1. */
  if (rtIsNaN(init)) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    emxEnsureCapacity_real_T(b_y, i);
    b_data = b_y->data;
    b_data[0] = rtNaN;
  } else if (X->size[0] < init) {
    b_y->size[0] = 1;
    b_y->size[1] = 0;
  } else if (rtIsInf(init) && (init == X->size[0])) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    emxEnsureCapacity_real_T(b_y, i);
    b_data = b_y->data;
    b_data[0] = rtNaN;
  } else if (floor(init) == init) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = (int)((double)X->size[0] - init) + 1;
    emxEnsureCapacity_real_T(b_y, i);
    b_data = b_y->data;
    loop_ub = (int)((double)X->size[0] - init);
    for (i = 0; i <= loop_ub; i++) {
      b_data[i] = init + (double)i;
    }
  } else {
    eml_float_colon(init, X->size[0], b_y);
    b_data = b_y->data;
  }
  i = BB->size[0] * BB->size[1];
  BB->size[0] = X->size[0];
  BB->size[1] = (int)(((double)X->size[0] - init) + 1.0);
  emxEnsureCapacity_real_T(BB, i);
  BB_data = BB->data;
  loop_ub = X->size[0] * (int)(((double)X->size[0] - init) + 1.0);
  for (i = 0; i < loop_ub; i++) {
    BB_data[i] = rtNaN;
  }
  emxInit_boolean_T(&boobsbsteps, 1);
  i = boobsbsteps->size[0];
  boobsbsteps->size[0] = X->size[0];
  emxEnsureCapacity_boolean_T(boobsbsteps, i);
  boobsbsteps_data = boobsbsteps->data;
  loop_ub = X->size[0];
  for (i = 0; i < loop_ub; i++) {
    boobsbsteps_data[i] = false;
  }
  i = iidx->size[0];
  iidx->size[0] = b_y->size[1];
  emxEnsureCapacity_int32_T(iidx, i);
  iidx_data = iidx->data;
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    iidx_data[i] = (int)b_data[i];
  }
  loop_ub = iidx->size[0];
  for (i = 0; i < loop_ub; i++) {
    boobsbsteps_data[iidx_data[i] - 1] = true;
  }
  /*   UN is a Matrix whose 2nd column:11th col contains the unit(s) just */
  /*   included. */
  if (rtIsNaN(init + 1.0)) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    emxEnsureCapacity_real_T(b_y, i);
    b_data = b_y->data;
    b_data[0] = rtNaN;
  } else if (X->size[0] < init + 1.0) {
    b_y->size[0] = 1;
    b_y->size[1] = 0;
  } else if (rtIsInf(init + 1.0) && (init + 1.0 == X->size[0])) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    emxEnsureCapacity_real_T(b_y, i);
    b_data = b_y->data;
    b_data[0] = rtNaN;
  } else if (floor(init + 1.0) == init + 1.0) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = (int)floor((double)X->size[0] - (init + 1.0)) + 1;
    emxEnsureCapacity_real_T(b_y, i);
    b_data = b_y->data;
    loop_ub = (int)floor((double)X->size[0] - (init + 1.0));
    for (i = 0; i <= loop_ub; i++) {
      b_data[i] = (init + 1.0) + (double)i;
    }
  } else {
    eml_float_colon(init + 1.0, X->size[0], b_y);
    b_data = b_y->data;
  }
  emxInit_real_T(&blast, 1);
  aoffset = (int)((double)X->size[0] - init);
  i = blast->size[0];
  blast->size[0] = b_y->size[1];
  emxEnsureCapacity_real_T(blast, i);
  blast_data = blast->data;
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    blast_data[i] = b_data[i];
  }
  emxFree_real_T(&b_y);
  emxInit_real_T(&r1, 2);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = aoffset;
  r1->size[1] = 10;
  emxEnsureCapacity_real_T(r1, i);
  yb_data = r1->data;
  loop_ub = aoffset * 10;
  for (i = 0; i < loop_ub; i++) {
    yb_data[i] = rtNaN;
  }
  cat(blast, r1, Un);
  Un_data = Un->data;
  /*  The last correctly computed beta oefficients */
  i = blast->size[0];
  blast->size[0] = X->size[1];
  emxEnsureCapacity_real_T(blast, i);
  blast_data = blast->data;
  loop_ub = X->size[1];
  emxFree_real_T(&r1);
  for (i = 0; i < loop_ub; i++) {
    blast_data[i] = rtNaN;
  }
  /*  opts is a structure which contains the options to use in linsolve */
  /*  Forward search loop */
  /*  ij = index which is linked with the columns of matrix BB. During the */
  /*  search every time a subset is stored inside matrix BB ij increases by one
   */
  ij = 1U;
  i = X->size[0] - bsb->size[0];
  emxInit_real_T(&b, 1);
  emxInit_boolean_T(&oldbsbT, 1);
  emxInit_real_T(&unit, 1);
  emxInit_real_T(&C, 1);
  for (mm = 0; mm <= i; mm++) {
    b_mm = (unsigned int)ini0 + mm;
    /*  if n>200 show every 100 steps the fwd search index */
    if ((n > 200) && seq100boo_data[(int)b_mm - 1]) {
      /*  OLD CODE if length(intersect(mm,seq100))==1 */
      int2str(b_mm, c_mm.data, c_mm.size);
    }
    /*  Store units belonging to the subset */
    if ((b_mm >= init) && boobsbsteps_data[(int)b_mm - 1]) {
      /*  OLD CODE */
      /*  intersect(mm,bsbsteps)==mm */
      loop_ub = bsb->size[0];
      for (b_i = 0; b_i < loop_ub; b_i++) {
        BB_data[((int)bsb_data[b_i] + BB->size[0] * ((int)ij - 1)) - 1] =
            bsb_data[b_i];
      }
      ij++;
    }
    /*  Compute beta coefficients using subset */
    /*  Implicitly control the rank of Xb checking the condition number */
    /*  for inversion (which in the case of a rectangular matrix is */
    /*  nothing but the rank) */
    /*  Old instruction was b=Xb\yb; */
    linsolve(Xb, yb, b, &condNumber);
    b_data = b->data;
    /*  disp([mm condNumber]) */
    if (!(condNumber < p)) {
      /*  rank is ok */
      b_i = blast->size[0];
      blast->size[0] = b->size[0];
      emxEnsureCapacity_real_T(blast, b_i);
      blast_data = blast->data;
      loop_ub = b->size[0];
      for (b_i = 0; b_i < loop_ub; b_i++) {
        blast_data[b_i] = b_data[b_i];
      }
    } else {
      loop_ub = blast->size[0];
      b_i = b->size[0];
      b->size[0] = blast->size[0];
      emxEnsureCapacity_real_T(b, b_i);
      b_data = b->data;
      for (b_i = 0; b_i < loop_ub; b_i++) {
        b_data[b_i] = blast_data[b_i];
      }
      /*  in case of rank problem, the last orrectly computed coefficients are
       * used */
    }
    /*  e= vector of residual for all units using b estimated using subset */
    nwhile = X->size[0] - 1;
    trueCount = X->size[1];
    b_i = C->size[0];
    C->size[0] = X->size[0];
    emxEnsureCapacity_real_T(C, b_i);
    Xb_data = C->data;
    for (b_i = 0; b_i <= nwhile; b_i++) {
      Xb_data[b_i] = 0.0;
    }
    for (loop_ub = 0; loop_ub < trueCount; loop_ub++) {
      aoffset = loop_ub * X->size[0];
      for (b_i = 0; b_i <= nwhile; b_i++) {
        Xb_data[b_i] += X_data[aoffset + b_i] * b_data[loop_ub];
      }
    }
    loop_ub = y->size[0];
    if (y->size[0] == C->size[0]) {
      for (b_i = 0; b_i < loop_ub; b_i++) {
        condNumber = y_data[b_i] - Xb_data[b_i];
        r_data[b_i + r->size[0]] = condNumber * condNumber;
      }
    } else {
      pc_binary_expand_op(r, y, C);
      r_data = r->data;
    }
    if (b_mm < (unsigned int)n) {
      /*  store units forming old subset in vector oldbsb */
      loop_ub = bsbT->size[0];
      b_i = oldbsbT->size[0];
      oldbsbT->size[0] = bsbT->size[0];
      emxEnsureCapacity_boolean_T(oldbsbT, b_i);
      oldbsbT_data = oldbsbT->data;
      for (b_i = 0; b_i < loop_ub; b_i++) {
        oldbsbT_data[b_i] = bsbT_data[b_i];
      }
      /*  order the r_i and include the smallest among the units forming */
      /*  the group of potential outliers */
      /*  ord=sortrows(r,2); */
      loop_ub = r->size[0];
      b_i = b->size[0];
      b->size[0] = r->size[0];
      emxEnsureCapacity_real_T(b, b_i);
      b_data = b->data;
      for (b_i = 0; b_i < loop_ub; b_i++) {
        b_data[b_i] = r_data[b_i + r->size[0]];
      }
      sort(b, iidx);
      iidx_data = iidx->data;
      b_i = b->size[0];
      b->size[0] = iidx->size[0];
      emxEnsureCapacity_real_T(b, b_i);
      b_data = b->data;
      loop_ub = iidx->size[0];
      for (b_i = 0; b_i < loop_ub; b_i++) {
        b_data[b_i] = iidx_data[b_i];
      }
      /*  bsb= units forming the new subset */
      b_i = bsb->size[0];
      bsb->size[0] = (int)b_mm + 1;
      emxEnsureCapacity_real_T(bsb, b_i);
      bsb_data = bsb->data;
      loop_ub = (int)b_mm;
      for (b_i = 0; b_i <= loop_ub; b_i++) {
        bsb_data[b_i] = b_data[b_i];
      }
      b_i = bsbT->size[0];
      bsbT->size[0] = n;
      emxEnsureCapacity_boolean_T(bsbT, b_i);
      bsbT_data = bsbT->data;
      for (b_i = 0; b_i < n; b_i++) {
        bsbT_data[b_i] = false;
      }
      b_i = iidx->size[0];
      iidx->size[0] = (int)b_mm + 1;
      emxEnsureCapacity_int32_T(iidx, b_i);
      iidx_data = iidx->data;
      loop_ub = (int)b_mm;
      for (b_i = 0; b_i <= loop_ub; b_i++) {
        iidx_data[b_i] = (int)b_data[b_i];
      }
      loop_ub = iidx->size[0];
      for (b_i = 0; b_i < loop_ub; b_i++) {
        bsbT_data[iidx_data[b_i] - 1] = true;
      }
      loop_ub = X->size[1];
      b_i = Xb->size[0] * Xb->size[1];
      Xb->size[0] = (int)b_mm + 1;
      Xb->size[1] = X->size[1];
      emxEnsureCapacity_real_T(Xb, b_i);
      Xb_data = Xb->data;
      for (b_i = 0; b_i < loop_ub; b_i++) {
        aoffset = (int)b_mm;
        for (trueCount = 0; trueCount <= aoffset; trueCount++) {
          Xb_data[trueCount + Xb->size[0] * b_i] =
              X_data[((int)b_data[trueCount] + X->size[0] * b_i) - 1];
        }
      }
      /*  subset of X */
      b_i = yb->size[0];
      yb->size[0] = (int)b_mm + 1;
      emxEnsureCapacity_real_T(yb, b_i);
      yb_data = yb->data;
      loop_ub = (int)b_mm;
      for (b_i = 0; b_i <= loop_ub; b_i++) {
        yb_data[b_i] = y_data[(int)b_data[b_i] - 1];
      }
      /*  subset of y */
      if (b_mm >= init) {
        /*  unit = vector containing units which just entered subset; */
        /*  unit=setdiff(bsb,oldbsb); */
        /*  new instruction to find unit */
        loop_ub = bsbT->size[0];
        if (bsbT->size[0] == oldbsbT->size[0]) {
          b_i = oldbsbT->size[0];
          oldbsbT->size[0] = bsbT->size[0];
          emxEnsureCapacity_boolean_T(oldbsbT, b_i);
          oldbsbT_data = oldbsbT->data;
          for (b_i = 0; b_i < loop_ub; b_i++) {
            oldbsbT_data[b_i] = (bsbT_data[b_i] && (!oldbsbT_data[b_i]));
          }
        } else {
          ub_binary_expand_op(oldbsbT, bsbT);
          oldbsbT_data = oldbsbT->data;
        }
        nwhile = oldbsbT->size[0] - 1;
        trueCount = 0;
        for (b_i = 0; b_i <= nwhile; b_i++) {
          if (oldbsbT_data[b_i]) {
            trueCount++;
          }
        }
        b_i = unit->size[0];
        unit->size[0] = trueCount;
        emxEnsureCapacity_real_T(unit, b_i);
        yb_data = unit->data;
        aoffset = 0;
        for (b_i = 0; b_i <= nwhile; b_i++) {
          if (oldbsbT_data[b_i]) {
            yb_data[aoffset] = seq_data[b_i];
            aoffset++;
          }
        }
        /*  If the interchange involves more than 10 units, store only the */
        /*  first 10. */
        if (unit->size[0] <= 10) {
          if (2 > unit->size[0] + 1) {
            b_i = -1;
            trueCount = -1;
          } else {
            b_i = 0;
            trueCount = unit->size[0];
          }
          aoffset = (int)(((double)b_mm - init) + 1.0) - 1;
          nwhile = trueCount - b_i;
          for (trueCount = 0; trueCount < nwhile; trueCount++) {
            Un_data[aoffset + Un->size[0] * ((b_i + trueCount) + 1)] =
                yb_data[trueCount];
          }
        } else {
          int2str(b_mm, c_mm.data, c_mm.size);
          aoffset = (int)(((double)b_mm - init) + 1.0);
          for (b_i = 0; b_i < 10; b_i++) {
            Un_data[(aoffset + Un->size[0] * (b_i + 1)) - 1] = yb_data[b_i];
          }
        }
      }
    }
  }
  emxFree_real_T(&C);
  emxFree_int32_T(&iidx);
  emxFree_real_T(&unit);
  emxFree_boolean_T(&oldbsbT);
  emxFree_real_T(&b);
  emxFree_real_T(&blast);
  emxFree_boolean_T(&boobsbsteps);
  emxFree_boolean_T(&seq100boo);
  emxFree_real_T(&r);
  emxFree_real_T(&seq);
  emxFree_boolean_T(&bsbT);
  emxFree_real_T(&yb);
  emxFree_real_T(&Xb);
}

void pc_binary_expand_op(emxArray_real_T *r, const emxArray_real_T *y,
                         const emxArray_real_T *C)
{
  emxArray_real_T *b_y;
  const double *C_data;
  const double *y_data;
  double varargin_1;
  double *b_y_data;
  double *r_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  C_data = C->data;
  y_data = y->data;
  r_data = r->data;
  emxInit_real_T(&b_y, 1);
  i = b_y->size[0];
  if (C->size[0] == 1) {
    b_y->size[0] = y->size[0];
  } else {
    b_y->size[0] = C->size[0];
  }
  emxEnsureCapacity_real_T(b_y, i);
  b_y_data = b_y->data;
  stride_0_0 = (y->size[0] != 1);
  stride_1_0 = (C->size[0] != 1);
  if (C->size[0] == 1) {
    loop_ub = y->size[0];
  } else {
    loop_ub = C->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_y_data[i] = y_data[i * stride_0_0] - C_data[i * stride_1_0];
  }
  loop_ub = b_y->size[0];
  for (i = 0; i < loop_ub; i++) {
    varargin_1 = b_y_data[i];
    r_data[i + r->size[0]] = varargin_1 * varargin_1;
  }
  emxFree_real_T(&b_y);
}

/* End of code generation (FSRbsb.c) */
