/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRbsb_wrapper.c
 *
 * Code generation for function 'FSRbsb_wrapper'
 *
 */

/* Include files */
#include "FSRbsb_wrapper.h"
#include "cat.h"
#include "chkinputR.h"
#include "colon.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_initialize.h"
#include "fsdaC_internal_types.h"
#include "fsdaC_types.h"
#include "ifWhileCond.h"
#include "int2str.h"
#include "mldivide.h"
#include "mod.h"
#include "mtimes.h"
#include "randsample.h"
#include "rank.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
void FSRbsb_wrapper(const emxArray_real_T *y, const emxArray_real_T *X,
                    const emxArray_real_T *bsb, const emxArray_real_T *bsbsteps,
                    double init, bool intercept, bool msg, bool nocheck,
                    emxArray_real_T *Un, emxArray_real32_T *BB)
{
  emxArray_boolean_T *boobsbsteps;
  emxArray_boolean_T *bsbT;
  emxArray_boolean_T *c_bsbsteps;
  emxArray_boolean_T *oldbsbT;
  emxArray_boolean_T *seq100boo;
  emxArray_char_T_1x310 c_mm;
  emxArray_int32_T *b_r;
  emxArray_int32_T *iidx;
  emxArray_int32_T *r1;
  emxArray_real_T *Xb;
  emxArray_real_T *b_X;
  emxArray_real_T *b_a;
  emxArray_real_T *b_bsb;
  emxArray_real_T *b_bsbsteps;
  emxArray_real_T *b_y;
  emxArray_real_T *blast;
  emxArray_real_T *c_y;
  emxArray_real_T *d_y;
  emxArray_real_T *e_y;
  emxArray_real_T *r;
  emxArray_real_T *r2;
  emxArray_real_T *r3;
  emxArray_real_T *seq;
  emxArray_real_T *seq100;
  emxArray_real_T *unit;
  emxArray_real_T *yb;
  double a;
  double b;
  double b_init;
  double n;
  double p;
  int b_i;
  unsigned int b_mm;
  int i;
  int i1;
  unsigned int ij;
  int ini0;
  int irank;
  int loop_ub;
  int loop_ub_tmp;
  int mm;
  int nwhile;
  bool Ra;
  bool guard1 = false;
  if (!isInitialized_fsdaC) {
    fsdaC_initialize();
  }
  emxInit_real_T(&b_bsb, 1);
  /*  Required input arguments */
  /*  y: a column vector of doubles of any length */
  /*  X: an array of doubles of any dimensions */
  /*  bsb: a column vector of doubles of any length */
  /*  Optional input arguments (name / pairs) */
  /*  bsbsteps a column vector of any length or a missing value */
  /*  init a scalar double */
  /*  intercept */
  /*  msg is a boolean */
  /*  nocheck is a boolean */
  i = b_bsb->size[0];
  b_bsb->size[0] = bsb->size[0];
  emxEnsureCapacity_real_T(b_bsb, i);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_bsb->data[i] = bsb->data[i];
  }
  emxInit_real_T(&b_y, 1);
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
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
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
  i = b_y->size[0];
  b_y->size[0] = y->size[0];
  emxEnsureCapacity_real_T(b_y, i);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] = y->data[i];
  }
  emxInit_real_T(&b_X, 2);
  i = b_X->size[0] * b_X->size[1];
  b_X->size[0] = X->size[0];
  b_X->size[1] = X->size[1];
  emxEnsureCapacity_real_T(b_X, i);
  loop_ub = X->size[0] * X->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_X->data[i] = X->data[i];
  }
  emxInit_real_T(&Xb, 2);
  chkinputR(b_y, b_X, intercept, nocheck, &n, &p);
  /*  User options */
  /*  We now overwrite inside structure options the default values with */
  /*  those chosen by the user */
  /*  Initialize Xb (necessary for MATLAB coder) */
  /*  otherwise the following message appears */
  /*  Variable 'Xb' is not fully defined on some execution paths. */
  if (1.0 > p) {
    loop_ub = 0;
  } else {
    loop_ub = (int)p;
  }
  irank = b_X->size[1];
  i = Xb->size[0] * Xb->size[1];
  Xb->size[0] = loop_ub;
  Xb->size[1] = b_X->size[1];
  emxEnsureCapacity_real_T(Xb, i);
  for (i = 0; i < irank; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      Xb->data[i1 + Xb->size[0] * i] = b_X->data[i1 + b_X->size[0] * i];
    }
  }
  emxInit_boolean_T(&bsbT, 1);
  i = bsbT->size[0];
  bsbT->size[0] = bsb->size[0];
  emxEnsureCapacity_boolean_T(bsbT, i);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[i] = (bsb->data[i] == 0.0);
  }
  emxInit_real_T(&yb, 1);
  if (ifWhileCond(bsbT)) {
    Ra = true;
    nwhile = 1;
    while (Ra && (nwhile < 100)) {
      randsample(n, p, b_bsb);
      loop_ub = b_X->size[1];
      i = Xb->size[0] * Xb->size[1];
      Xb->size[0] = b_bsb->size[0];
      Xb->size[1] = b_X->size[1];
      emxEnsureCapacity_real_T(Xb, i);
      for (i = 0; i < loop_ub; i++) {
        irank = b_bsb->size[0];
        for (i1 = 0; i1 < irank; i1++) {
          Xb->data[i1 + Xb->size[0] * i] =
              b_X->data[((int)b_bsb->data[i1] + b_X->size[0] * i) - 1];
        }
      }
      irank = local_rank(Xb);
      Ra = (irank < p);
      nwhile++;
    }
    i = yb->size[0];
    yb->size[0] = b_bsb->size[0];
    emxEnsureCapacity_real_T(yb, i);
    loop_ub = b_bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      yb->data[i] = b_y->data[(int)b_bsb->data[i] - 1];
    }
  } else {
    loop_ub = b_X->size[1];
    i = Xb->size[0] * Xb->size[1];
    Xb->size[0] = bsb->size[0];
    Xb->size[1] = b_X->size[1];
    emxEnsureCapacity_real_T(Xb, i);
    for (i = 0; i < loop_ub; i++) {
      irank = bsb->size[0];
      for (i1 = 0; i1 < irank; i1++) {
        Xb->data[i1 + Xb->size[0] * i] =
            b_X->data[((int)bsb->data[i1] + b_X->size[0] * i) - 1];
      }
    }
    i = yb->size[0];
    yb->size[0] = bsb->size[0];
    emxEnsureCapacity_real_T(yb, i);
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      yb->data[i] = b_y->data[(int)bsb->data[i] - 1];
    }
  }
  ini0 = b_bsb->size[0];
  /*  check init */
  b_init = init;
  if (init < p) {
    b_init = p;
  } else if (init < b_bsb->size[0]) {
    b_init = b_bsb->size[0];
  } else if (init >= n) {
    b_init = n - 1.0;
  }
  /*  Initialise key matrices */
  /*  Initialization of the n x 1 Boolean vector which contains a true in */
  /*  correspondence of the units belonging to subset in each step */
  loop_ub_tmp = (int)n;
  i = bsbT->size[0];
  bsbT->size[0] = (int)n;
  emxEnsureCapacity_boolean_T(bsbT, i);
  for (i = 0; i < loop_ub_tmp; i++) {
    bsbT->data[i] = false;
  }
  emxInit_int32_T(&iidx, 1);
  i = iidx->size[0];
  iidx->size[0] = b_bsb->size[0];
  emxEnsureCapacity_int32_T(iidx, i);
  loop_ub = b_bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    iidx->data[i] = (int)b_bsb->data[i];
  }
  loop_ub = iidx->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[iidx->data[i] - 1] = true;
  }
  /*  sequence from 1 to n. */
  emxInit_real_T(&c_y, 2);
  if (rtIsNaN(n)) {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = 1;
    emxEnsureCapacity_real_T(c_y, i);
    c_y->data[0] = rtNaN;
  } else if (n < 1.0) {
    c_y->size[0] = 1;
    c_y->size[1] = 0;
  } else if (rtIsInf(n) && (1.0 == n)) {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = 1;
    emxEnsureCapacity_real_T(c_y, i);
    c_y->data[0] = rtNaN;
  } else {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    loop_ub = (int)floor(n - 1.0);
    c_y->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(c_y, i);
    for (i = 0; i <= loop_ub; i++) {
      c_y->data[i] = (double)i + 1.0;
    }
  }
  emxInit_real_T(&seq, 1);
  i = seq->size[0];
  seq->size[0] = c_y->size[1];
  emxEnsureCapacity_real_T(seq, i);
  loop_ub = c_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq->data[i] = c_y->data[i];
  }
  emxInit_real_T(&r, 2);
  /*  The second column of matrix R will contain the OLS residuals at each step
   */
  /*  of the forward search */
  i = r->size[0] * r->size[1];
  r->size[0] = seq->size[0];
  r->size[1] = 2;
  emxEnsureCapacity_real_T(r, i);
  loop_ub = seq->size[0];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = seq->data[i];
  }
  for (i = 0; i < loop_ub_tmp; i++) {
    r->data[i + r->size[0]] = 0.0;
  }
  /*  If n is very large, the step of the search is printed every 100 step */
  /*  seq100 is linked to printing */
  b = ceil(n / 100.0);
  if (rtIsNaN(b)) {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = 1;
    emxEnsureCapacity_real_T(c_y, i);
    c_y->data[0] = rtNaN;
  } else if (b < 1.0) {
    c_y->size[0] = 1;
    c_y->size[1] = 0;
  } else if (rtIsInf(b) && (1.0 == b)) {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = 1;
    emxEnsureCapacity_real_T(c_y, i);
    c_y->data[0] = rtNaN;
  } else {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = (int)(b - 1.0) + 1;
    emxEnsureCapacity_real_T(c_y, i);
    loop_ub = (int)(b - 1.0);
    for (i = 0; i <= loop_ub; i++) {
      c_y->data[i] = (double)i + 1.0;
    }
  }
  emxInit_real_T(&d_y, 2);
  i = d_y->size[0] * d_y->size[1];
  d_y->size[0] = 1;
  d_y->size[1] = c_y->size[1];
  emxEnsureCapacity_real_T(d_y, i);
  loop_ub = c_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    d_y->data[i] = 100.0 * c_y->data[i];
  }
  emxInit_real_T(&seq100, 2);
  i = seq100->size[0] * seq100->size[1];
  seq100->size[0] = 1;
  seq100->size[1] = c_y->size[1];
  emxEnsureCapacity_real_T(seq100, i);
  loop_ub = c_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq100->data[i] = 100.0 * c_y->data[i];
  }
  irank = d_y->size[1] - 1;
  loop_ub = 0;
  nwhile = 0;
  for (b_i = 0; b_i <= irank; b_i++) {
    if (d_y->data[b_i] <= n) {
      loop_ub++;
    }
    if (seq100->data[b_i] <= n) {
      seq100->data[nwhile] = seq100->data[b_i];
      nwhile++;
    }
  }
  emxFree_real_T(&d_y);
  emxInit_boolean_T(&seq100boo, 1);
  i = seq100->size[0] * seq100->size[1];
  seq100->size[0] = 1;
  seq100->size[1] = loop_ub;
  emxEnsureCapacity_real_T(seq100, i);
  i = seq100boo->size[0];
  seq100boo->size[0] = (int)n;
  emxEnsureCapacity_boolean_T(seq100boo, i);
  for (i = 0; i < loop_ub_tmp; i++) {
    seq100boo->data[i] = false;
  }
  emxInit_int32_T(&b_r, 2);
  i = b_r->size[0] * b_r->size[1];
  b_r->size[0] = 1;
  b_r->size[1] = loop_ub;
  emxEnsureCapacity_int32_T(b_r, i);
  for (i = 0; i < loop_ub; i++) {
    b_r->data[i] = (int)seq100->data[i];
  }
  emxFree_real_T(&seq100);
  loop_ub = b_r->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq100boo->data[b_r->data[i] - 1] = true;
  }
  emxFree_int32_T(&b_r);
  /*  Matrix BB will contain the units forming subset in each step (or in */
  /*  selected steps) of the forward search. The first column contains */
  /*  information about units forming subset at step init1. */
  emxInit_real_T(&b_bsbsteps, 1);
  if ((bsbsteps->size[0] == 0) || (bsbsteps->size[1] == 0)) {
    /*  Default for vector bsbsteps which indicates for which steps of the fwd
     */
    /*  search units forming subset have to be saved */
    if (n <= 5000.0) {
      if (rtIsNaN(b_init)) {
        i = c_y->size[0] * c_y->size[1];
        c_y->size[0] = 1;
        c_y->size[1] = 1;
        emxEnsureCapacity_real_T(c_y, i);
        c_y->data[0] = rtNaN;
      } else if (n < b_init) {
        c_y->size[0] = 1;
        c_y->size[1] = 0;
      } else if ((rtIsInf(b_init) || rtIsInf(n)) && (b_init == n)) {
        i = c_y->size[0] * c_y->size[1];
        c_y->size[0] = 1;
        c_y->size[1] = 1;
        emxEnsureCapacity_real_T(c_y, i);
        c_y->data[0] = rtNaN;
      } else if (floor(b_init) == b_init) {
        i = c_y->size[0] * c_y->size[1];
        c_y->size[0] = 1;
        loop_ub = (int)floor(n - b_init);
        c_y->size[1] = loop_ub + 1;
        emxEnsureCapacity_real_T(c_y, i);
        for (i = 0; i <= loop_ub; i++) {
          c_y->data[i] = b_init + (double)i;
        }
      } else {
        eml_float_colon(b_init, n, c_y);
      }
      i = b_bsbsteps->size[0];
      b_bsbsteps->size[0] = c_y->size[1];
      emxEnsureCapacity_real_T(b_bsbsteps, i);
      loop_ub = c_y->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_bsbsteps->data[i] = c_y->data[i];
      }
    } else {
      emxInit_real_T(&e_y, 2);
      a = (b_init + 100.0) - b_mod(b_init);
      b = 100.0 * floor(n / 100.0);
      if (rtIsNaN(a) || rtIsNaN(b)) {
        i = e_y->size[0] * e_y->size[1];
        e_y->size[0] = 1;
        e_y->size[1] = 1;
        emxEnsureCapacity_real_T(e_y, i);
        e_y->data[0] = rtNaN;
      } else if (b < a) {
        e_y->size[0] = 1;
        e_y->size[1] = 0;
      } else if ((rtIsInf(a) || rtIsInf(b)) && (a == b)) {
        i = e_y->size[0] * e_y->size[1];
        e_y->size[0] = 1;
        e_y->size[1] = 1;
        emxEnsureCapacity_real_T(e_y, i);
        e_y->data[0] = rtNaN;
      } else if (floor(a) == a) {
        i = e_y->size[0] * e_y->size[1];
        e_y->size[0] = 1;
        loop_ub = (int)floor((b - a) / 100.0);
        e_y->size[1] = loop_ub + 1;
        emxEnsureCapacity_real_T(e_y, i);
        for (i = 0; i <= loop_ub; i++) {
          e_y->data[i] = a + 100.0 * (double)i;
        }
      } else {
        b_eml_float_colon(a, b, e_y);
      }
      i = b_bsbsteps->size[0];
      b_bsbsteps->size[0] = e_y->size[1] + 1;
      emxEnsureCapacity_real_T(b_bsbsteps, i);
      b_bsbsteps->data[0] = b_init;
      loop_ub = e_y->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_bsbsteps->data[i + 1] = e_y->data[i];
      }
      emxFree_real_T(&e_y);
    }
    i = BB->size[0] * BB->size[1];
    BB->size[0] = (int)n;
    BB->size[1] = b_bsbsteps->size[0];
    emxEnsureCapacity_real32_T(BB, i);
    loop_ub = (int)n * b_bsbsteps->size[0];
    for (i = 0; i < loop_ub; i++) {
      BB->data[i] = rtNaNF;
    }
  } else {
    emxInit_boolean_T(&c_bsbsteps, 2);
    i = c_bsbsteps->size[0] * c_bsbsteps->size[1];
    c_bsbsteps->size[0] = bsbsteps->size[0];
    c_bsbsteps->size[1] = 1;
    emxEnsureCapacity_boolean_T(c_bsbsteps, i);
    loop_ub = bsbsteps->size[0];
    for (i = 0; i < loop_ub; i++) {
      c_bsbsteps->data[i] = (bsbsteps->data[i] == 0.0);
    }
    if (b_ifWhileCond(c_bsbsteps)) {
      if (rtIsNaN(b_init) || rtIsNaN(n)) {
        i = c_y->size[0] * c_y->size[1];
        c_y->size[0] = 1;
        c_y->size[1] = 1;
        emxEnsureCapacity_real_T(c_y, i);
        c_y->data[0] = rtNaN;
      } else if (n < b_init) {
        c_y->size[0] = 1;
        c_y->size[1] = 0;
      } else if ((rtIsInf(b_init) || rtIsInf(n)) && (b_init == n)) {
        i = c_y->size[0] * c_y->size[1];
        c_y->size[0] = 1;
        c_y->size[1] = 1;
        emxEnsureCapacity_real_T(c_y, i);
        c_y->data[0] = rtNaN;
      } else if (floor(b_init) == b_init) {
        i = c_y->size[0] * c_y->size[1];
        c_y->size[0] = 1;
        c_y->size[1] = (int)floor(n - b_init) + 1;
        emxEnsureCapacity_real_T(c_y, i);
        loop_ub = (int)floor(n - b_init);
        for (i = 0; i <= loop_ub; i++) {
          c_y->data[i] = b_init + (double)i;
        }
      } else {
        eml_float_colon(b_init, n, c_y);
      }
      i = b_bsbsteps->size[0];
      b_bsbsteps->size[0] = c_y->size[1];
      emxEnsureCapacity_real_T(b_bsbsteps, i);
      loop_ub = c_y->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_bsbsteps->data[i] = c_y->data[i];
      }
      i = BB->size[0] * BB->size[1];
      BB->size[0] = (int)n;
      i1 = (int)((n - b_init) + 1.0);
      BB->size[1] = i1;
      emxEnsureCapacity_real32_T(BB, i);
      loop_ub = (int)n * i1;
      for (i = 0; i < loop_ub; i++) {
        BB->data[i] = rtNaNF;
      }
    } else {
      irank = bsbsteps->size[0] - 1;
      loop_ub = 0;
      for (b_i = 0; b_i <= irank; b_i++) {
        if (bsbsteps->data[b_i] >= b_init) {
          loop_ub++;
        }
      }
      emxInit_int32_T(&r1, 1);
      i = r1->size[0];
      r1->size[0] = loop_ub;
      emxEnsureCapacity_int32_T(r1, i);
      nwhile = 0;
      for (b_i = 0; b_i <= irank; b_i++) {
        if (bsbsteps->data[b_i] >= b_init) {
          r1->data[nwhile] = b_i + 1;
          nwhile++;
        }
      }
      i = b_bsbsteps->size[0];
      b_bsbsteps->size[0] = r1->size[0];
      emxEnsureCapacity_real_T(b_bsbsteps, i);
      loop_ub = r1->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_bsbsteps->data[i] = bsbsteps->data[r1->data[i] - 1];
      }
      i = BB->size[0] * BB->size[1];
      BB->size[0] = (int)n;
      BB->size[1] = r1->size[0];
      emxEnsureCapacity_real32_T(BB, i);
      loop_ub = (int)n * r1->size[0];
      emxFree_int32_T(&r1);
      for (i = 0; i < loop_ub; i++) {
        BB->data[i] = rtNaNF;
      }
    }
    emxFree_boolean_T(&c_bsbsteps);
  }
  emxInit_boolean_T(&boobsbsteps, 1);
  i = boobsbsteps->size[0];
  boobsbsteps->size[0] = (int)n;
  emxEnsureCapacity_boolean_T(boobsbsteps, i);
  for (i = 0; i < loop_ub_tmp; i++) {
    boobsbsteps->data[i] = false;
  }
  i = iidx->size[0];
  iidx->size[0] = b_bsbsteps->size[0];
  emxEnsureCapacity_int32_T(iidx, i);
  loop_ub = b_bsbsteps->size[0];
  for (i = 0; i < loop_ub; i++) {
    iidx->data[i] = (int)b_bsbsteps->data[i];
  }
  loop_ub = iidx->size[0];
  for (i = 0; i < loop_ub; i++) {
    boobsbsteps->data[iidx->data[i] - 1] = true;
  }
  /*   UN is a Matrix whose 2nd column:11th col contains the unit(s) just */
  /*   included. */
  if (rtIsNaN(b_init + 1.0) || rtIsNaN(n)) {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = 1;
    emxEnsureCapacity_real_T(c_y, i);
    c_y->data[0] = rtNaN;
  } else if (n < b_init + 1.0) {
    c_y->size[0] = 1;
    c_y->size[1] = 0;
  } else if ((rtIsInf(b_init + 1.0) || rtIsInf(n)) && (b_init + 1.0 == n)) {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = 1;
    emxEnsureCapacity_real_T(c_y, i);
    c_y->data[0] = rtNaN;
  } else if (floor(b_init + 1.0) == b_init + 1.0) {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    loop_ub = (int)floor(n - (b_init + 1.0));
    c_y->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(c_y, i);
    for (i = 0; i <= loop_ub; i++) {
      c_y->data[i] = (b_init + 1.0) + (double)i;
    }
  } else {
    eml_float_colon(b_init + 1.0, n, c_y);
  }
  irank = (int)(n - b_init);
  i = b_bsbsteps->size[0];
  b_bsbsteps->size[0] = c_y->size[1];
  emxEnsureCapacity_real_T(b_bsbsteps, i);
  loop_ub = c_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_bsbsteps->data[i] = c_y->data[i];
  }
  emxFree_real_T(&c_y);
  emxInit_real_T(&r2, 2);
  i = r2->size[0] * r2->size[1];
  r2->size[0] = irank;
  r2->size[1] = 10;
  emxEnsureCapacity_real_T(r2, i);
  loop_ub = irank * 10;
  for (i = 0; i < loop_ub; i++) {
    r2->data[i] = rtNaN;
  }
  emxInit_real_T(&r3, 2);
  cat(b_bsbsteps, r2, r3);
  i = Un->size[0] * Un->size[1];
  Un->size[0] = r3->size[0];
  Un->size[1] = 11;
  emxEnsureCapacity_real_T(Un, i);
  loop_ub = r3->size[0] * 11;
  emxFree_real_T(&r2);
  for (i = 0; i < loop_ub; i++) {
    Un->data[i] = r3->data[i];
  }
  emxFree_real_T(&r3);
  emxInit_real_T(&blast, 1);
  /*  The last correctly computed beta oefficients */
  irank = (int)p;
  i = blast->size[0];
  blast->size[0] = (int)p;
  emxEnsureCapacity_real_T(blast, i);
  for (i = 0; i < irank; i++) {
    blast->data[i] = rtNaN;
  }
  /*  Forward search loop */
  emxInit_boolean_T(&oldbsbT, 1);
  emxInit_real_T(&unit, 1);
  emxInit_real_T(&b_a, 1);
  guard1 = false;
  if (!nocheck) {
    irank = local_rank(Xb);
    if (irank != p) {
      /*  FS loop will not be performed */
      i = Un->size[0] * Un->size[1];
      Un->size[0] = 1;
      Un->size[1] = 1;
      emxEnsureCapacity_real_T(Un, i);
      Un->data[0] = rtNaN;
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }
  if (guard1) {
    /*  ij = index which is linked with the columns of matrix BB. During the */
    /*  search every time a subset is stored inside matrix BB ij icreases by one
     */
    ij = 1U;
    i = (int)(n + (1.0 - (double)b_bsb->size[0]));
    for (mm = 0; mm < i; mm++) {
      b_mm = (unsigned int)ini0 + mm;
      /*  if n>200 show every 100 steps the fwd search index */
      if ((n > 200.0) && msg && seq100boo->data[(int)b_mm - 1]) {
        /*  OLD CODE if length(intersect(mm,seq100))==1 */
        int2str(b_mm, c_mm.data, c_mm.size);
      }
      /*  Store units belonging to the subset */
      if ((b_mm >= b_init) && boobsbsteps->data[(int)b_mm - 1]) {
        /*  OLD CODE */
        /*  intersect(mm,bsbsteps)==mm */
        loop_ub = b_bsb->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          BB->data[((int)b_bsb->data[i1] + BB->size[0] * ((int)ij - 1)) - 1] =
              (float)b_bsb->data[i1];
        }
        ij++;
      }
      /*  Compute beta coefficients using subset */
      if (nocheck) {
        Ra = true;
      } else {
        irank = local_rank(Xb);
        Ra = (irank == p);
      }
      if (Ra) {
        /*  rank is ok */
        mldivide(Xb, yb, blast);
      } else {
        /*  in case of rank problem, the last orrectly computed coefficients are
         * used */
      }
      /*  e= vector of residual for all units using b estimated using subset */
      mtimes(b_X, blast, b_a);
      loop_ub = b_y->size[0];
      i1 = b_a->size[0];
      b_a->size[0] = b_y->size[0];
      emxEnsureCapacity_real_T(b_a, i1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_a->data[i1] = b_y->data[i1] - b_a->data[i1];
      }
      i1 = b_bsbsteps->size[0];
      b_bsbsteps->size[0] = b_a->size[0];
      emxEnsureCapacity_real_T(b_bsbsteps, i1);
      nwhile = b_a->size[0];
      for (irank = 0; irank < nwhile; irank++) {
        b_bsbsteps->data[irank] = b_a->data[irank] * b_a->data[irank];
      }
      loop_ub = b_bsbsteps->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        r->data[i1 + r->size[0]] = b_bsbsteps->data[i1];
      }
      if (b_mm < n) {
        /*  store units forming old subset in vector oldbsb */
        loop_ub = bsbT->size[0];
        i1 = oldbsbT->size[0];
        oldbsbT->size[0] = bsbT->size[0];
        emxEnsureCapacity_boolean_T(oldbsbT, i1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          oldbsbT->data[i1] = bsbT->data[i1];
        }
        /*  order the r_i and include the smallest among the units forming */
        /*  the group of potential outliers */
        /*  ord=sortrows(r,2); */
        loop_ub = r->size[0];
        i1 = b_bsbsteps->size[0];
        b_bsbsteps->size[0] = r->size[0];
        emxEnsureCapacity_real_T(b_bsbsteps, i1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_bsbsteps->data[i1] = r->data[i1 + r->size[0]];
        }
        sort(b_bsbsteps, iidx);
        i1 = b_bsbsteps->size[0];
        b_bsbsteps->size[0] = iidx->size[0];
        emxEnsureCapacity_real_T(b_bsbsteps, i1);
        loop_ub = iidx->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_bsbsteps->data[i1] = iidx->data[i1];
        }
        /*  bsb= units forming the new subset */
        nwhile = (int)((double)b_mm + 1.0);
        i1 = b_bsb->size[0];
        b_bsb->size[0] = (int)((double)b_mm + 1.0);
        emxEnsureCapacity_real_T(b_bsb, i1);
        for (i1 = 0; i1 < nwhile; i1++) {
          b_bsb->data[i1] = b_bsbsteps->data[i1];
        }
        i1 = bsbT->size[0];
        bsbT->size[0] = (int)n;
        emxEnsureCapacity_boolean_T(bsbT, i1);
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          bsbT->data[i1] = false;
        }
        i1 = iidx->size[0];
        iidx->size[0] = (int)((double)b_mm + 1.0);
        emxEnsureCapacity_int32_T(iidx, i1);
        for (i1 = 0; i1 < nwhile; i1++) {
          iidx->data[i1] = (int)b_bsbsteps->data[i1];
        }
        loop_ub = iidx->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          bsbT->data[iidx->data[i1] - 1] = true;
        }
        loop_ub = b_X->size[1];
        i1 = Xb->size[0] * Xb->size[1];
        Xb->size[0] = (int)((double)b_mm + 1.0);
        Xb->size[1] = b_X->size[1];
        emxEnsureCapacity_real_T(Xb, i1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          for (b_i = 0; b_i < nwhile; b_i++) {
            Xb->data[b_i + Xb->size[0] * i1] =
                b_X->data[((int)b_bsbsteps->data[b_i] + b_X->size[0] * i1) - 1];
          }
        }
        /*  subset of X */
        i1 = yb->size[0];
        yb->size[0] = (int)((double)b_mm + 1.0);
        emxEnsureCapacity_real_T(yb, i1);
        for (i1 = 0; i1 < nwhile; i1++) {
          yb->data[i1] = b_y->data[(int)b_bsbsteps->data[i1] - 1];
        }
        /*  subset of y */
        if (b_mm >= b_init) {
          /*  unit = vector containing units which just entered subset; */
          /*  unit=setdiff(bsb,oldbsb); */
          /*  new instruction to find unit */
          loop_ub = oldbsbT->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            oldbsbT->data[i1] = !oldbsbT->data[i1];
          }
          irank = bsbT->size[0] - 1;
          loop_ub = 0;
          for (b_i = 0; b_i <= irank; b_i++) {
            if (bsbT->data[b_i] && oldbsbT->data[b_i]) {
              loop_ub++;
            }
          }
          i1 = unit->size[0];
          unit->size[0] = loop_ub;
          emxEnsureCapacity_real_T(unit, i1);
          nwhile = 0;
          for (b_i = 0; b_i <= irank; b_i++) {
            if (bsbT->data[b_i] && oldbsbT->data[b_i]) {
              unit->data[nwhile] = seq->data[b_i];
              nwhile++;
            }
          }
          /*  If the interchange involves more than 10 units, store only the */
          /*  first 10. */
          if (unit->size[0] <= 10) {
            if (2 > unit->size[0] + 1) {
              i1 = -1;
              b_i = -1;
            } else {
              i1 = 0;
              b_i = unit->size[0];
            }
            nwhile = (int)(((double)b_mm - b_init) + 1.0) - 1;
            irank = b_i - i1;
            for (b_i = 0; b_i < irank; b_i++) {
              Un->data[nwhile + Un->size[0] * ((i1 + b_i) + 1)] =
                  unit->data[b_i];
            }
          } else {
            int2str(b_mm, c_mm.data, c_mm.size);
            i1 = (int)(((double)b_mm - b_init) + 1.0) - 1;
            for (b_i = 0; b_i < 10; b_i++) {
              Un->data[i1 + Un->size[0] * (b_i + 1)] = unit->data[b_i];
            }
          }
        }
      }
    }
  }
  emxFree_real_T(&b_a);
  emxFree_int32_T(&iidx);
  emxFree_real_T(&b_bsbsteps);
  emxFree_real_T(&b_X);
  emxFree_real_T(&b_y);
  emxFree_real_T(&unit);
  emxFree_boolean_T(&oldbsbT);
  emxFree_real_T(&blast);
  emxFree_boolean_T(&boobsbsteps);
  emxFree_boolean_T(&seq100boo);
  emxFree_real_T(&r);
  emxFree_real_T(&seq);
  emxFree_boolean_T(&bsbT);
  emxFree_real_T(&yb);
  emxFree_real_T(&Xb);
  emxFree_real_T(&b_bsb);
}

/* End of code generation (FSRbsb_wrapper.c) */
