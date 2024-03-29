/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSMbsb.c
 *
 * Code generation for function 'FSMbsb'
 *
 */

/* Include files */
#include <R.h>

#include "FSMbsb.h"
#include "FSMmmd.h"
#include "bsxfun.h"
#include "cat.h"
#include "colon.h"
#include "combineVectorElements.h"
#include "cov.h"
#include "eml_mtimes_helper.h"
#include "eml_setop.h"
#include "find.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_internal_types.h"
#include "fsdaC_types.h"
#include "ifWhileCond.h"
#include "int2str.h"
#include "inv.h"
#include "mahalFS.h"
#include "minOrMax.h"
#include "mrdivide_helper.h"
#include "mtimes.h"
#include "qr.h"
#include "quickselectFS.h"
#include "randsample.h"
#include "rank.h"
#include "rt_nonfinite.h"
#include "sum.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <stdio.h>
#include <string.h>

/* Function Definitions */
void FSMbsb(const emxArray_real_T *Y, emxArray_real_T *bsb, double varargin_2,
            double varargin_4, emxArray_real_T *Un, emxArray_real_T *BB)
{
  emxArray_boolean_T c_data;
  emxArray_boolean_T *MDltminbsb;
  emxArray_boolean_T *b_bsbT;
  emxArray_boolean_T *bsbT;
  emxArray_boolean_T *bsbriniT;
  emxArray_boolean_T *oldbsbT;
  emxArray_boolean_T *unitoutT;
  emxArray_char_T_1x310 c_mm;
  emxArray_int32_T *bsbr;
  emxArray_int32_T *r1;
  emxArray_int32_T *r10;
  emxArray_int32_T *r11;
  emxArray_int32_T *r12;
  emxArray_int32_T *r5;
  emxArray_int32_T *r6;
  emxArray_int32_T *r7;
  emxArray_int32_T *r8;
  emxArray_int32_T *r9;
  emxArray_int32_T *unit;
  emxArray_real_T b_bsbsteps;
  emxArray_real_T *MD;
  emxArray_real_T *R;
  emxArray_real_T *S;
  emxArray_real_T *Szi;
  emxArray_real_T *Yb;
  emxArray_real_T *Ym;
  emxArray_real_T *b_Ym;
  emxArray_real_T *bsbsteps;
  emxArray_real_T *meoldbsb;
  emxArray_real_T *mi;
  emxArray_real_T *mibsbr;
  emxArray_real_T *r;
  emxArray_real_T *r3;
  emxArray_real_T *r4;
  emxArray_real_T *seq;
  emxArray_real_T *unitout;
  emxArray_real_T *ym;
  emxArray_real_T *zi;
  emxArray_uint32_T *bsbrini;
  const double *Y_data;
  double b_mm;
  double d;
  double init1;
  double ksor;
  double percn;
  double rankgap;
  double *BB_data;
  double *S_data;
  double *Szi_data;
  double *Un_data;
  double *Ym_data;
  double *bsb_data;
  double *bsbsteps_data;
  double *meoldbsb_data;
  double *mi_data;
  double *mibsbr_data;
  double *seq_data;
  double *unitout_data;
  double *ym_data;
  int bsbradd[10];
  int tmp_data[10];
  int unitadd[10];
  int b_i;
  int b_loop_ub;
  int c_bsbsteps;
  int c_size;
  int end;
  int i;
  unsigned int ij;
  int ini0;
  int irank;
  int loop_ub;
  int lunit;
  int mm;
  int n;
  int nwhile;
  int partialTrueCount;
  int trueCount;
  int v;
  int *bsbr_data;
  unsigned int *bsbrini_data;
  int *r13;
  int *r2;
  int *unit_data;
  bool Ra;
  bool b_c_data;
  bool b_guard1 = false;
  bool exitg1;
  bool guard1 = false;
  bool *MDltminbsb_data;
  bool *bsbT_data;
  bool *bsbriniT_data;
  bool *oldbsbT_data;
  bool *unitoutT_data;
  bsb_data = bsb->data;
  Y_data = Y->data;
  emxInit_boolean_T(&bsbT, 1);
  /* FSMbsb gives the units belonging to subset at step(s) msel of the forward
   * search */
  /*  */
  /* <a href="matlab: docsearchFS('FSMbsb')">Link to the help function</a> */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*  Y :           Input data. Matrix. */
  /*                n x v data matrix; n observations and v variables. Rows of
   */
  /*                Y represent observations, and columns represent variables.
   */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite
   */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*                 Data Types - single|double */
  /*  bsb :         Units forming subset. Vector. List of units forming the
   * initial subset. */
  /*                If bsb=0 (default) then the procedure starts with p units
   * randomly */
  /*                chosen else if bsb is not 0 the search will start with */
  /*                m0=length(bsb) */
  /*                 Data Types - single|double */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*    bsbsteps :  Save the units forming subsets in selected steps. Vector. */
  /*                It specifies for which steps of the fwd search it is */
  /*                necessary to save the units forming subset. If bsbsteps is
   */
  /*                0 we store the units forming subset in all steps. The */
  /*                default is store the units forming subset in all steps if */
  /*                n<=5000, else to store the units forming subset at steps */
  /*                init and steps which are multiple of 100. For example, as */
  /*                default, if n=7530 and init=6, units forming subset are */
  /*                stored for */
  /*                m=init, 100, 200, ..., 7500. */
  /*                Example - 'bsbsteps',[100 200] stores the unis forming */
  /*                subset in steps 100 and 200. */
  /*                Data Types - double */
  /*  */
  /*  init :       Point where to start monitoring required diagnostics. Scalar.
   */
  /*               Note that if bsb is supplied, init>=length(bsb). If init is
   * not */
  /*               specified it will be set equal to floor(n*0.6). */
  /*                  Example - 'init',50 */
  /*                  Data Types - double */
  /*  */
  /*   msg  :   It controls whether to display or not messages */
  /*                about great interchange on the screen. Boolean. */
  /*                If msg==true (default) messages are displyed on the screen
   */
  /*                else no message is displayed on the screen */
  /*                  Example - 'msg',false */
  /*                  Data Types - logical */
  /*  */
  /*  nocheck :   It controls whether to perform checks on matrix Y. Scalar. */
  /*              If nocheck is equal to 1 no check is performed on matrix Y. */
  /*              As default nocheck=0. */
  /*                  Example - 'nocheck',1 */
  /*                  Data Types - double */
  /*  */
  /*  plots :     Plot on the screen. Scalar. */
  /*                If plots=1, a plot of the monitoring of minMD among */
  /*                the units not belonging to the subset is produced on the */
  /*                screen with 1 per cent, 50 per cent and 99 per cent
   * confidence bands */
  /*                else (default) no plot is produced. */
  /*                Example - 'plots',0 */
  /*                Data Types - double */
  /*  */
  /*  Remark:       The user should only give the input arguments that have to
   */
  /*                change their default value. */
  /*                The name of the input arguments needs to be followed by */
  /*                their value. The order of the input arguments is of no */
  /*                importance. */
  /*  */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite
   */
  /*                values will automatically be excluded from the */
  /*                computations. y can be both a row of column vector. */
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
  /*  See also FSMeda, FSM.m, FSMmmd, FSRbsb, FSRHbsb, FSRBbsb */
  /*  */
  /*  References: */
  /*  */
  /*  Atkinson, A.C., Riani, M. and Cerioli, A. (2004), "Exploring multivariate
   */
  /*  data with the forward search", Springer Verlag, New York. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* <a href="matlab: docsearchFS('FSMbsb')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % FSMbsb with all default options. */
  /*     n=200; */
  /*     v=3; */
  /*     randn('state',123456); */
  /*     Y=randn(n,v); */
  /*     %Contaminated data */
  /*     Ycont=Y; */
  /*     seqcont=11:10:51; */
  /*     disp('Contaminated units') */
  /*     disp(seqcont) */
  /*     Ycont(seqcont,:)=Ycont(seqcont,:)+2.5; */
  /*     Un=FSMbsb(Ycont,0); */
  /* } */
  /* { */
  /*     % FSMbsb with optional argument. */
  /*     n=200; */
  /*     v=3; */
  /*     randn('state',123456); */
  /*     Y=randn(n,v); */
  /*     %Contaminated data */
  /*     Ycont=Y; */
  /*     seqcont=11:10:51; */
  /*     disp('Contaminated units') */
  /*     disp(seqcont) */
  /*     Ycont(seqcont,:)=Ycont(seqcont,:)+2.5; */
  /*     % Analyse the units forming subset in step msel=195 */
  /*     msel=195; */
  /*     [~,BBsel]=FSMbsb(Ycont,0,'bsbsteps',msel); */
  /*     disp(['Units outside subset at step m=' num2str(msel)]) */
  /*     disp(setdiff(1:n,BBsel)) */
  /* } */
  /* { */
  /*     %% Monitoring the units belonging to subset in each step. */
  /*     n=200; */
  /*     v=3; */
  /*     randn('state',123456); */
  /*     Y=randn(n,v); */
  /*     %Contaminated data */
  /*     Ycont=Y; */
  /*     seqcont=11:10:51; */
  /*     disp('Contaminated units') */
  /*     disp(seqcont) */
  /*     Ycont(seqcont,:)=Ycont(seqcont,:)+2.5; */
  /*     % Analyse the units forming subset in step msel=195 */
  /*     msel=195; */
  /*     [~,BBsel]=FSMbsb(Ycont,0,'bsbsteps',msel); */
  /*     seq=1:n; */
  /*     disp(['Units outside subset at step m=' num2str(msel)]) */
  /*     disp(setdiff(seq,BBsel)) */
  /* } */
  /* { */
  /*     % Specifying the point where to start monitoring. */
  /*     % Specifying the point where to start monitoring units belongng to
   * subset. */
  /*     n=200; */
  /*     v=3; */
  /*     randn('state',123456); */
  /*     Y=randn(n,v); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     seqcont=11:10:51; */
  /*     disp('Contaminated units') */
  /*     disp(seqcont) */
  /*     Ycont(seqcont,:)=Ycont(seqcont,:)+2.5; */
  /*     % Analyse the units forming subset in step msel=195 */
  /*     msel=195; */
  /*     [Un,BBsel]=FSMbsb(Ycont,0,'bsbsteps',msel,'init',100); */
  /*     seq=1:n; */
  /*     disp(['Units outside subset at step m=' num2str(msel)]) */
  /*     disp(setdiff(seq,BBsel)) */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checking */
  /* chkinputM does not do any check if option nocheck=1 */
  /* chkinputM makes some input parameters and user options checking in
   * multivariate analysis */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*  X :          Input data. Matrix. */
  /*                n x v data matrix; n observations and v variables. Rows of
   */
  /*                X represent observations, and columns represent variables.
   */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite
   */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*                 Data Types - single|double */
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
  /*  X:            Data matrix without missing and infs. Matrix. */
  /*                The new matrix of variables, with missing or */
  /*                infinite values excluded. */
  /*  n:            Number of rows of X (observations). Scalar.  Number of */
  /*                rows after listwise exclusion. */
  /*  p:            Number of columns of X (variables). Scalar. */
  /*                Number of variable in the input data matrix. */
  /*  */
  /*  See also */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Example: */
  /* { */
  /*     %% example_producing_error */
  /*     %To examplify the behaviour of chkinputM, we call function FSM with a
   */
  /*     %X with more columns then rows. */
  /*     n=3; */
  /*     p=200; */
  /*     state1=123498; */
  /*     randn('state', state1); */
  /*     X=randn(n,p); */
  /*     [out]=FSM(X); */
  /* } */
  /*  Beginning of code */
  /*  chkchk is the position of the option nocheck in vector chklist */
  /*  chkchk = strmatch('nocheck',chklist,'exact'); */
  /*  If nocheck=1, then skip checks on y and X */
  /*  Input parameters checking */
  v = Y->size[1];
  n = Y->size[0];
  /*  Write in structure 'options' the options chosen by the user */
  /*  And check if the optional user parameters are reasonable. */
  i = bsbT->size[0];
  bsbT->size[0] = bsb->size[0];
  emxEnsureCapacity_boolean_T(bsbT, i);
  bsbT_data = bsbT->data;
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT_data[i] = (bsb_data[i] == 0.0);
  }
  emxInit_real_T(&Yb, 2);
  emxInit_real_T(&r, 2);
  if (ifWhileCond(bsbT)) {
    Ra = true;
    nwhile = 1;
    while (Ra && (nwhile < 100)) {
      /*  Extract a random sample of size v+1 */
      randsample(n, (double)v + 1.0, bsb);
      bsb_data = bsb->data;
      /*  Check if the var-cov matrix of the random sample is full (i.e =v) */
      loop_ub = Y->size[1];
      i = Yb->size[0] * Yb->size[1];
      Yb->size[0] = bsb->size[0];
      Yb->size[1] = Y->size[1];
      emxEnsureCapacity_real_T(Yb, i);
      S_data = Yb->data;
      for (i = 0; i < loop_ub; i++) {
        b_loop_ub = bsb->size[0];
        for (partialTrueCount = 0; partialTrueCount < b_loop_ub;
             partialTrueCount++) {
          S_data[partialTrueCount + Yb->size[0] * i] =
              Y_data[((int)bsb_data[partialTrueCount] + Y->size[0] * i) - 1];
        }
      }
      cov(Yb, r);
      irank = local_rank(r);
      Ra = (irank < v);
      nwhile++;
    }
  }
  emxInit_real_T(&ym, 2);
  ym_data = ym->data;
  /*  percn = scalar which controls up to which point of the search it is */
  /*  better to use linear indexing to extract the units forming subset. For */
  /*  example percn=0.85*n means that units belonging to susbet are found using
   */
  /*  linear indexing up to step m=0.85*n. After m=0.85*n units belonging to */
  /*  subset are found using a n-by-1 logical vector */
  percn = 0.85 * (double)Y->size[0];
  /*  nrepmin = scalar which controls the maximum number of repeated minima */
  /*  which must be taken in order to find new subset */
  if (Y->size[0] < 1) {
    ym->size[0] = 1;
    ym->size[1] = 0;
  } else {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = Y->size[0];
    emxEnsureCapacity_real_T(ym, i);
    ym_data = ym->data;
    loop_ub = Y->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      ym_data[i] = (double)i + 1.0;
    }
  }
  emxInit_real_T(&seq, 1);
  i = seq->size[0];
  seq->size[0] = ym->size[1];
  emxEnsureCapacity_real_T(seq, i);
  seq_data = seq->data;
  loop_ub = ym->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq_data[i] = ym_data[i];
  }
  for (b_i = 0; b_i < 10; b_i++) {
    unitadd[b_i] = 0;
    bsbradd[b_i] = 0;
  }
  /*  Initialization of the n x 1 Boolean vector which contains a true in */
  /*  correspondence of the units belonging to subset in each step */
  i = bsbT->size[0];
  bsbT->size[0] = Y->size[0];
  emxEnsureCapacity_boolean_T(bsbT, i);
  bsbT_data = bsbT->data;
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT_data[i] = false;
  }
  emxInit_int32_T(&r1, 1);
  i = r1->size[0];
  r1->size[0] = bsb->size[0];
  emxEnsureCapacity_int32_T(r1, i);
  r2 = r1->data;
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    r2[i] = (int)bsb_data[i];
  }
  loop_ub = r1->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT_data[r2[i] - 1] = true;
  }
  emxInit_real_T(&S, 2);
  /*  Initialization for Matlab coder */
  rankgap = 0.0;
  i = S->size[0] * S->size[1];
  S->size[0] = Y->size[1];
  S->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(S, i);
  S_data = S->data;
  loop_ub = Y->size[1] * Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    S_data[i] = 0.0;
  }
  emxInit_real_T(&meoldbsb, 2);
  i = meoldbsb->size[0] * meoldbsb->size[1];
  meoldbsb->size[0] = 1;
  meoldbsb->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(meoldbsb, i);
  meoldbsb_data = meoldbsb->data;
  loop_ub = Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    meoldbsb_data[i] = 0.0;
  }
  emxInit_boolean_T(&oldbsbT, 1);
  i = oldbsbT->size[0];
  oldbsbT->size[0] = bsbT->size[0];
  emxEnsureCapacity_boolean_T(oldbsbT, i);
  oldbsbT_data = oldbsbT->data;
  loop_ub = bsbT->size[0];
  for (i = 0; i < loop_ub; i++) {
    oldbsbT_data[i] = bsbT_data[i];
  }
  emxInit_int32_T(&bsbr, 1);
  i = bsbr->size[0];
  bsbr->size[0] = Y->size[0];
  emxEnsureCapacity_int32_T(bsbr, i);
  bsbr_data = bsbr->data;
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbr_data[i] = 0;
  }
  emxInit_real_T(&unitout, 1);
  i = unitout->size[0];
  unitout->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(unitout, i);
  unitout_data = unitout->data;
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    unitout_data[i] = 0.0;
  }
  emxInit_boolean_T(&bsbriniT, 1);
  i = bsbriniT->size[0];
  bsbriniT->size[0] = bsbT->size[0];
  emxEnsureCapacity_boolean_T(bsbriniT, i);
  bsbriniT_data = bsbriniT->data;
  loop_ub = bsbT->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbriniT_data[i] = bsbT_data[i];
  }
  emxInit_uint32_T(&bsbrini, 1);
  i = bsbrini->size[0];
  bsbrini->size[0] = Y->size[0];
  emxEnsureCapacity_uint32_T(bsbrini, i);
  bsbrini_data = bsbrini->data;
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbrini_data[i] = 0U;
  }
  ini0 = bsb->size[0];
  /*  check init */
  init1 = varargin_4;
  if (varargin_4 < (double)Y->size[1] + 1.0) {
    Rprintf("%s\n",
           "Attention : init1 should be larger than v. \nIt is set to v+1.");
    //fflush(stdout);
    init1 = (double)Y->size[1] + 1.0;
  } else if (varargin_4 < bsb->size[0]) {
    init1 = bsb->size[0];
  } else if (varargin_4 >= Y->size[0]) {
    Rprintf("%s\n",
           "Attention : init1 should be smaller than n. \nIt is set to n-1.");
    //fflush(stdout);
    init1 = (double)Y->size[0] - 1.0;
  }
  /*  Matrix BB will contain the units forming subset in each step (or in */
  /*  selected steps) of the forward search. The first column contains */
  /*  information about units forming subset at step init1. */
  emxInit_real_T(&Szi, 1);
  emxInit_real_T(&bsbsteps, 2);
  if (varargin_2 == 0.0) {
    if (rtIsNaN(init1)) {
      i = ym->size[0] * ym->size[1];
      ym->size[0] = 1;
      ym->size[1] = 1;
      emxEnsureCapacity_real_T(ym, i);
      ym_data = ym->data;
      ym_data[0] = rtNaN;
    } else if (Y->size[0] < init1) {
      ym->size[0] = 1;
      ym->size[1] = 0;
    } else if (rtIsInf(init1) && (init1 == Y->size[0])) {
      i = ym->size[0] * ym->size[1];
      ym->size[0] = 1;
      ym->size[1] = 1;
      emxEnsureCapacity_real_T(ym, i);
      ym_data = ym->data;
      ym_data[0] = rtNaN;
    } else if (floor(init1) == init1) {
      i = ym->size[0] * ym->size[1];
      ym->size[0] = 1;
      ym->size[1] = (int)((double)Y->size[0] - init1) + 1;
      emxEnsureCapacity_real_T(ym, i);
      ym_data = ym->data;
      loop_ub = (int)((double)Y->size[0] - init1);
      for (i = 0; i <= loop_ub; i++) {
        ym_data[i] = init1 + (double)i;
      }
    } else {
      eml_float_colon(init1, Y->size[0], ym);
      ym_data = ym->data;
    }
    i = Szi->size[0];
    Szi->size[0] = ym->size[1];
    emxEnsureCapacity_real_T(Szi, i);
    Szi_data = Szi->data;
    loop_ub = ym->size[1];
    for (i = 0; i < loop_ub; i++) {
      Szi_data[i] = ym_data[i];
    }
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = ym->size[1];
    bsbsteps->size[1] = 1;
    emxEnsureCapacity_real_T(bsbsteps, i);
    bsbsteps_data = bsbsteps->data;
    loop_ub = ym->size[1];
    for (i = 0; i < loop_ub; i++) {
      bsbsteps_data[i] = Szi_data[i];
    }
    i = BB->size[0] * BB->size[1];
    BB->size[0] = Y->size[0];
    BB->size[1] = (int)(((double)Y->size[0] - init1) + 1.0);
    emxEnsureCapacity_real_T(BB, i);
    BB_data = BB->data;
    loop_ub = Y->size[0] * (int)(((double)Y->size[0] - init1) + 1.0);
    for (i = 0; i < loop_ub; i++) {
      BB_data[i] = rtNaN;
    }
  } else {
    trueCount = 0;
    if (varargin_2 >= init1) {
      trueCount = 1;
    }
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = trueCount;
    emxEnsureCapacity_real_T(bsbsteps, i);
    bsbsteps_data = bsbsteps->data;
    for (i = 0; i < trueCount; i++) {
      bsbsteps_data[0] = varargin_2;
    }
    irank = (trueCount != 0);
    i = BB->size[0] * BB->size[1];
    BB->size[0] = Y->size[0];
    BB->size[1] = irank;
    emxEnsureCapacity_real_T(BB, i);
    BB_data = BB->data;
    loop_ub = Y->size[0] * irank;
    for (i = 0; i < loop_ub; i++) {
      BB_data[i] = rtNaN;
    }
  }
  /*   Un is a Matrix whose 2nd column:11th col contain the unit(s) just */
  /*   included. */
  if (rtIsNaN(init1 + 1.0)) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = 1;
    emxEnsureCapacity_real_T(ym, i);
    ym_data = ym->data;
    ym_data[0] = rtNaN;
  } else if (Y->size[0] < init1 + 1.0) {
    ym->size[0] = 1;
    ym->size[1] = 0;
  } else if (rtIsInf(init1 + 1.0) && (init1 + 1.0 == Y->size[0])) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = 1;
    emxEnsureCapacity_real_T(ym, i);
    ym_data = ym->data;
    ym_data[0] = rtNaN;
  } else if (floor(init1 + 1.0) == init1 + 1.0) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = (int)floor((double)Y->size[0] - (init1 + 1.0)) + 1;
    emxEnsureCapacity_real_T(ym, i);
    ym_data = ym->data;
    loop_ub = (int)floor((double)Y->size[0] - (init1 + 1.0));
    for (i = 0; i <= loop_ub; i++) {
      ym_data[i] = (init1 + 1.0) + (double)i;
    }
  } else {
    eml_float_colon(init1 + 1.0, Y->size[0], ym);
    ym_data = ym->data;
  }
  irank = (int)((double)Y->size[0] - init1);
  i = Szi->size[0];
  Szi->size[0] = ym->size[1];
  emxEnsureCapacity_real_T(Szi, i);
  Szi_data = Szi->data;
  loop_ub = ym->size[1];
  for (i = 0; i < loop_ub; i++) {
    Szi_data[i] = ym_data[i];
  }
  emxInit_real_T(&r3, 2);
  i = r3->size[0] * r3->size[1];
  r3->size[0] = irank;
  r3->size[1] = 10;
  emxEnsureCapacity_real_T(r3, i);
  bsbsteps_data = r3->data;
  loop_ub = irank * 10;
  for (i = 0; i < loop_ub; i++) {
    bsbsteps_data[i] = rtNaN;
  }
  emxInit_real_T(&r4, 2);
  cat(Szi, r3, r4);
  bsbsteps_data = r4->data;
  i = Un->size[0] * Un->size[1];
  Un->size[0] = r4->size[0];
  Un->size[1] = 11;
  emxEnsureCapacity_real_T(Un, i);
  Un_data = Un->data;
  loop_ub = r4->size[0] * 11;
  emxFree_real_T(&r3);
  for (i = 0; i < loop_ub; i++) {
    Un_data[i] = bsbsteps_data[i];
  }
  emxFree_real_T(&r4);
  emxInit_int32_T(&unit, 1);
  /*  unit is the vector which will contain the units which enter subset at each
   */
  /*  step. It is initialized as a vector of zeros */
  i = unit->size[0];
  unit->size[0] = bsb->size[0];
  emxEnsureCapacity_int32_T(unit, i);
  unit_data = unit->data;
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    unit_data[i] = 0;
  }
  lunit = bsb->size[0];
  /*  If the subset Y(bsb,:) is not full rank or a column is constant, then we
   */
  /*  return as output an empty structure. */
  loop_ub = Y->size[1];
  i = Yb->size[0] * Yb->size[1];
  Yb->size[0] = bsb->size[0];
  Yb->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(Yb, i);
  S_data = Yb->data;
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = bsb->size[0];
    for (partialTrueCount = 0; partialTrueCount < b_loop_ub;
         partialTrueCount++) {
      S_data[partialTrueCount + Yb->size[0] * i] =
          Y_data[((int)bsb_data[partialTrueCount] + Y->size[0] * i) - 1];
    }
  }
  irank = local_rank(Yb);
  emxInit_real_T(&Ym, 2);
  emxInit_boolean_T(&unitoutT, 1);
  emxInit_real_T(&mi, 2);
  emxInit_real_T(&mibsbr, 2);
  emxInit_real_T(&zi, 2);
  emxInit_real_T(&MD, 1);
  emxInit_real_T(&R, 2);
  emxInit_boolean_T(&MDltminbsb, 1);
  emxInit_int32_T(&r5, 1);
  emxInit_int32_T(&r6, 1);
  emxInit_int32_T(&r7, 1);
  emxInit_int32_T(&r8, 1);
  emxInit_int32_T(&r9, 1);
  emxInit_int32_T(&r10, 1);
  emxInit_int32_T(&r11, 1);
  emxInit_int32_T(&r12, 1);
  emxInit_real_T(&b_Ym, 2);
  emxInit_boolean_T(&b_bsbT, 1);
  guard1 = false;
  if (irank < v) {
    guard1 = true;
  } else {
    loop_ub = Y->size[1];
    i = Yb->size[0] * Yb->size[1];
    Yb->size[0] = bsb->size[0];
    Yb->size[1] = Y->size[1];
    emxEnsureCapacity_real_T(Yb, i);
    S_data = Yb->data;
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = bsb->size[0];
      for (partialTrueCount = 0; partialTrueCount < b_loop_ub;
           partialTrueCount++) {
        S_data[partialTrueCount + Yb->size[0] * i] =
            Y_data[((int)bsb_data[partialTrueCount] + Y->size[0] * i) - 1];
      }
    }
    maximum(Yb, ym);
    ym_data = ym->data;
    loop_ub = Y->size[1];
    i = Yb->size[0] * Yb->size[1];
    Yb->size[0] = bsb->size[0];
    Yb->size[1] = Y->size[1];
    emxEnsureCapacity_real_T(Yb, i);
    S_data = Yb->data;
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = bsb->size[0];
      for (partialTrueCount = 0; partialTrueCount < b_loop_ub;
           partialTrueCount++) {
        S_data[partialTrueCount + Yb->size[0] * i] =
            Y_data[((int)bsb_data[partialTrueCount] + Y->size[0] * i) - 1];
      }
    }
    minimum(Yb, mibsbr);
    mibsbr_data = mibsbr->data;
    i = mi->size[0] * mi->size[1];
    mi->size[0] = 1;
    if (mibsbr->size[1] == 1) {
      mi->size[1] = ym->size[1];
    } else {
      mi->size[1] = mibsbr->size[1];
    }
    emxEnsureCapacity_real_T(mi, i);
    mi_data = mi->data;
    irank = (ym->size[1] != 1);
    nwhile = (mibsbr->size[1] != 1);
    if (mibsbr->size[1] == 1) {
      loop_ub = ym->size[1];
    } else {
      loop_ub = mibsbr->size[1];
    }
    for (i = 0; i < loop_ub; i++) {
      mi_data[i] = ym_data[i * irank] - mibsbr_data[i * nwhile];
    }
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = mi->size[1];
    emxEnsureCapacity_real_T(ym, i);
    ym_data = ym->data;
    loop_ub = mi->size[1];
    for (i = 0; i < loop_ub; i++) {
      ym_data[i] = mi_data[i];
    }
    if (c_minimum(ym) == 0.0) {
      guard1 = true;
    } else {
      /*  ij = index which is linked with the columns of matrix BB. During the
       */
      /*  search every time a subset is stored inside matrix BB ij icreases by
       * one */
      ij = 1U;
      mm = 0;
      exitg1 = false;
      while ((!exitg1) && (mm <= n - ini0)) {
        b_mm = (double)ini0 + (double)mm;
        /*  Extract units forming subset */
        if (b_mm <= percn) {
          loop_ub = Y->size[1];
          i = Yb->size[0] * Yb->size[1];
          Yb->size[0] = bsb->size[0];
          Yb->size[1] = Y->size[1];
          emxEnsureCapacity_real_T(Yb, i);
          S_data = Yb->data;
          for (i = 0; i < loop_ub; i++) {
            b_loop_ub = bsb->size[0];
            for (partialTrueCount = 0; partialTrueCount < b_loop_ub;
                 partialTrueCount++) {
              S_data[partialTrueCount + Yb->size[0] * i] =
                  Y_data[((int)bsb_data[partialTrueCount] + Y->size[0] * i) -
                         1];
            }
          }
        } else {
          end = bsbT->size[0] - 1;
          trueCount = 0;
          for (b_i = 0; b_i <= end; b_i++) {
            if (bsbT_data[b_i]) {
              trueCount++;
            }
          }
          i = r5->size[0];
          r5->size[0] = trueCount;
          emxEnsureCapacity_int32_T(r5, i);
          r2 = r5->data;
          partialTrueCount = 0;
          for (b_i = 0; b_i <= end; b_i++) {
            if (bsbT_data[b_i]) {
              r2[partialTrueCount] = b_i + 1;
              partialTrueCount++;
            }
          }
          loop_ub = Y->size[1];
          i = Yb->size[0] * Yb->size[1];
          Yb->size[0] = r5->size[0];
          Yb->size[1] = Y->size[1];
          emxEnsureCapacity_real_T(Yb, i);
          S_data = Yb->data;
          for (i = 0; i < loop_ub; i++) {
            b_loop_ub = r5->size[0];
            for (partialTrueCount = 0; partialTrueCount < b_loop_ub;
                 partialTrueCount++) {
              S_data[partialTrueCount + Yb->size[0] * i] =
                  Y_data[(r2[partialTrueCount] + Y->size[0] * i) - 1];
            }
          }
        }
        /*  If required, store units forming subset at each step */
        if (b_mm >= init1) {
          irank = bsbsteps->size[0] * bsbsteps->size[1];
          b_bsbsteps = *bsbsteps;
          c_bsbsteps = irank;
          b_bsbsteps.size = &c_bsbsteps;
          b_bsbsteps.numDimensions = 1;
          do_vectors(b_mm, &b_bsbsteps, (double *)&ksor, &end, (int *)&irank,
                     &nwhile, (int *)&b_loop_ub, &partialTrueCount);
          c_size = end;
          for (i = 0; i < end; i++) {
            b_c_data = (ksor == b_mm);
          }
          c_data.data = &b_c_data;
          c_data.size = &c_size;
          c_data.allocatedSize = 1;
          c_data.numDimensions = 1;
          c_data.canFreeData = false;
          if (ifWhileCond(&c_data)) {
            if (b_mm <= percn) {
              loop_ub = bsb->size[0];
              for (i = 0; i < loop_ub; i++) {
                BB_data[((int)bsb_data[i] + BB->size[0] * ((int)ij - 1)) - 1] =
                    bsb_data[i];
              }
            } else {
              end = bsbT->size[0] - 1;
              trueCount = 0;
              for (b_i = 0; b_i <= end; b_i++) {
                if (bsbT_data[b_i]) {
                  trueCount++;
                }
              }
              i = r6->size[0];
              r6->size[0] = trueCount;
              emxEnsureCapacity_int32_T(r6, i);
              r2 = r6->data;
              partialTrueCount = 0;
              for (b_i = 0; b_i <= end; b_i++) {
                if (bsbT_data[b_i]) {
                  r2[partialTrueCount] = b_i + 1;
                  partialTrueCount++;
                }
              }
              loop_ub = r6->size[0];
              for (i = 0; i < loop_ub; i++) {
                BB_data[(r2[i] + BB->size[0] * ((int)ij - 1)) - 1] =
                    seq_data[r2[i] - 1];
              }
            }
            ij++;
          }
        }
        /*  Find vector of means inside subset */
        /*  Note that ym is a row vector */
        combineVectorElements(Yb, ym);
        i = ym->size[0] * ym->size[1];
        ym->size[0] = 1;
        emxEnsureCapacity_real_T(ym, i);
        ym_data = ym->data;
        loop_ub = ym->size[1] - 1;
        for (i = 0; i <= loop_ub; i++) {
          ym_data[i] /= b_mm;
        }
        /*  Ym = n-by-v matrix containing deviations from the means computed */
        /*  using units forming subset */
        /*  Ym=Y-one*ym; */
        bsxfun(Y, ym, Ym);
        Ym_data = Ym->data;
        b_guard1 = false;
        if (b_mm - (double)lunit > (double)v + 1.0) {
          /*  Find new S */
          if (lunit > 1) {
            /*  S0=S; */
            /*  Find units which left subset */
            /*  Inefficient code is */
            /*  unitout=setdiff(oldbsb,bsb); */
            /*  unitoutT = Boolean for units which left subset */
            /*  ~oldbsbF = units which were in previous subset */
            /*  ~bsbT = units which are not in the current subset */
            /*  unitoutT=~oldbsbF & ~bsbT; */
            /*  Given that \not A intersect \not B = \not (A U B) */
            if ((b_mm > percn) || (rankgap > 10.0)) {
              /*  unitoutT=~(~oldbsbT | bsbT); */
              if (oldbsbT->size[0] == bsbT->size[0]) {
                i = unitoutT->size[0];
                unitoutT->size[0] = oldbsbT->size[0];
                emxEnsureCapacity_boolean_T(unitoutT, i);
                unitoutT_data = unitoutT->data;
                loop_ub = oldbsbT->size[0];
                for (i = 0; i < loop_ub; i++) {
                  unitoutT_data[i] = (oldbsbT_data[i] && (!bsbT_data[i]));
                }
              } else {
                t_binary_expand_op(unitoutT, oldbsbT, bsbT);
                unitoutT_data = unitoutT->data;
              }
              end = unitoutT->size[0] - 1;
              trueCount = 0;
              for (b_i = 0; b_i <= end; b_i++) {
                if (unitoutT_data[b_i]) {
                  trueCount++;
                }
              }
              i = unitout->size[0];
              unitout->size[0] = trueCount;
              emxEnsureCapacity_real_T(unitout, i);
              unitout_data = unitout->data;
              partialTrueCount = 0;
              for (b_i = 0; b_i <= end; b_i++) {
                if (unitoutT_data[b_i]) {
                  unitout_data[partialTrueCount] = seq_data[b_i];
                  partialTrueCount++;
                }
              }
            }
            irank = unitout->size[0];
            loop_ub = Y->size[1];
            i = Yb->size[0] * Yb->size[1];
            Yb->size[0] = unitout->size[0];
            Yb->size[1] = Y->size[1];
            emxEnsureCapacity_real_T(Yb, i);
            S_data = Yb->data;
            for (i = 0; i < loop_ub; i++) {
              b_loop_ub = unitout->size[0];
              for (partialTrueCount = 0; partialTrueCount < b_loop_ub;
                   partialTrueCount++) {
                S_data[partialTrueCount + Yb->size[0] * i] =
                    Y_data[((int)unitout_data[partialTrueCount] +
                            Y->size[0] * i) -
                           1];
              }
            }
            combineVectorElements(Yb, mi);
            i = mi->size[0] * mi->size[1];
            mi->size[0] = 1;
            emxEnsureCapacity_real_T(mi, i);
            mi_data = mi->data;
            loop_ub = mi->size[1] - 1;
            for (i = 0; i <= loop_ub; i++) {
              mi_data[i] /= (double)unitout->size[0];
            }
            /*  bsbr units which remained in subset */
            /*  old inefficient code */
            /*  bsbr=setdiff(oldbsb,unitout); */
            /*  If mm>percn or if rankgap is greater than nrepmin, the units */
            /*  which remained in subset are found using Boolean */
            /*  operations */
            /*  else they were immediately stored when repeated minima */
            /*  were taken */
            if ((b_mm > percn) || (rankgap > 10.0)) {
              /*  oldbsbT = units which were in previous subset */
              /*  bsbT = units which are in current subset */
              if (oldbsbT->size[0] == bsbT->size[0]) {
                i = unitoutT->size[0];
                unitoutT->size[0] = oldbsbT->size[0];
                emxEnsureCapacity_boolean_T(unitoutT, i);
                unitoutT_data = unitoutT->data;
                loop_ub = oldbsbT->size[0];
                for (i = 0; i < loop_ub; i++) {
                  unitoutT_data[i] = (oldbsbT_data[i] && bsbT_data[i]);
                }
              } else {
                and(unitoutT, oldbsbT, bsbT);
                unitoutT_data = unitoutT->data;
              }
              end = unitoutT->size[0] - 1;
              trueCount = 0;
              for (b_i = 0; b_i <= end; b_i++) {
                if (unitoutT_data[b_i]) {
                  trueCount++;
                }
              }
              i = r10->size[0];
              r10->size[0] = trueCount;
              emxEnsureCapacity_int32_T(r10, i);
              r2 = r10->data;
              partialTrueCount = 0;
              for (b_i = 0; b_i <= end; b_i++) {
                if (unitoutT_data[b_i]) {
                  r2[partialTrueCount] = b_i + 1;
                  partialTrueCount++;
                }
              }
              loop_ub = Y->size[1];
              i = Yb->size[0] * Yb->size[1];
              Yb->size[0] = r10->size[0];
              Yb->size[1] = Y->size[1];
              emxEnsureCapacity_real_T(Yb, i);
              S_data = Yb->data;
              for (i = 0; i < loop_ub; i++) {
                b_loop_ub = r10->size[0];
                for (partialTrueCount = 0; partialTrueCount < b_loop_ub;
                     partialTrueCount++) {
                  S_data[partialTrueCount + Yb->size[0] * i] =
                      Y_data[(r2[partialTrueCount] + Y->size[0] * i) - 1];
                }
              }
              combineVectorElements(Yb, mibsbr);
              i = mibsbr->size[0] * mibsbr->size[1];
              mibsbr->size[0] = 1;
              emxEnsureCapacity_real_T(mibsbr, i);
              mibsbr_data = mibsbr->data;
              ksor = (b_mm - 1.0) - (double)unitout->size[0];
              loop_ub = mibsbr->size[1] - 1;
              for (i = 0; i <= loop_ub; i++) {
                mibsbr_data[i] /= ksor;
              }
            } else {
              loop_ub = Y->size[1];
              i = Yb->size[0] * Yb->size[1];
              Yb->size[0] = bsbr->size[0];
              Yb->size[1] = Y->size[1];
              emxEnsureCapacity_real_T(Yb, i);
              S_data = Yb->data;
              for (i = 0; i < loop_ub; i++) {
                b_loop_ub = bsbr->size[0];
                for (partialTrueCount = 0; partialTrueCount < b_loop_ub;
                     partialTrueCount++) {
                  S_data[partialTrueCount + Yb->size[0] * i] =
                      Y_data[(bsbr_data[partialTrueCount] + Y->size[0] * i) -
                             1];
                }
              }
              combineVectorElements(Yb, mibsbr);
              i = mibsbr->size[0] * mibsbr->size[1];
              mibsbr->size[0] = 1;
              emxEnsureCapacity_real_T(mibsbr, i);
              mibsbr_data = mibsbr->data;
              ksor = (b_mm - 1.0) - (double)unitout->size[0];
              loop_ub = mibsbr->size[1] - 1;
              for (i = 0; i <= loop_ub; i++) {
                mibsbr_data[i] /= ksor;
              }
            }
            ksor =
                sqrt((double)unitout->size[0] *
                     ((b_mm - 1.0) - (double)unitout->size[0]) / (b_mm - 1.0));
            if (mi->size[1] == mibsbr->size[1]) {
              i = zi->size[0] * zi->size[1];
              zi->size[0] = 1;
              zi->size[1] = mi->size[1];
              emxEnsureCapacity_real_T(zi, i);
              bsbsteps_data = zi->data;
              loop_ub = mi->size[1];
              for (i = 0; i < loop_ub; i++) {
                bsbsteps_data[i] = ksor * (mi_data[i] - mibsbr_data[i]);
              }
            } else {
              s_binary_expand_op(zi, ksor, mi, mibsbr);
              bsbsteps_data = zi->data;
            }
            mtimes(S, zi, Szi);
            Szi_data = Szi->data;
            /*  S=S+(S*(zi')*zi*S)/(1-zi*S*(zi')); */
            ksor = 0.0;
            loop_ub = zi->size[1];
            for (i = 0; i < loop_ub; i++) {
              ksor += bsbsteps_data[i] * Szi_data[i];
            }
            i = r->size[0] * r->size[1];
            r->size[0] = Szi->size[0];
            r->size[1] = Szi->size[0];
            emxEnsureCapacity_real_T(r, i);
            bsbsteps_data = r->data;
            loop_ub = Szi->size[0];
            i = Yb->size[0] * Yb->size[1];
            Yb->size[0] = Szi->size[0];
            Yb->size[1] = Szi->size[0];
            emxEnsureCapacity_real_T(Yb, i);
            S_data = Yb->data;
            for (i = 0; i < loop_ub; i++) {
              b_loop_ub = Szi->size[0];
              for (partialTrueCount = 0; partialTrueCount < b_loop_ub;
                   partialTrueCount++) {
                d = Szi_data[partialTrueCount] * Szi_data[i];
                bsbsteps_data[partialTrueCount + r->size[0] * i] = d;
                S_data[partialTrueCount + Yb->size[0] * i] = d;
              }
            }
            if ((S->size[0] == r->size[0]) && (S->size[1] == Yb->size[1])) {
              i = S->size[0] * S->size[1];
              S->size[0] = Szi->size[0];
              S->size[1] = Szi->size[0];
              emxEnsureCapacity_real_T(S, i);
              S_data = S->data;
              loop_ub = Szi->size[0];
              for (i = 0; i < loop_ub; i++) {
                b_loop_ub = Szi->size[0];
                for (partialTrueCount = 0; partialTrueCount < b_loop_ub;
                     partialTrueCount++) {
                  S_data[partialTrueCount + S->size[0] * i] +=
                      Szi_data[partialTrueCount] * Szi_data[i] / (1.0 - ksor);
                }
              }
            } else {
              n_binary_expand_op(S, Szi, ksor);
            }
            if (unitout->size[0] > 1) {
              i = unitout->size[0];
              for (b_i = 0; b_i < i; b_i++) {
                loop_ub = Y->size[1];
                if (Y->size[1] == mi->size[1]) {
                  partialTrueCount = zi->size[0] * zi->size[1];
                  zi->size[0] = 1;
                  zi->size[1] = Y->size[1];
                  emxEnsureCapacity_real_T(zi, partialTrueCount);
                  bsbsteps_data = zi->data;
                  for (partialTrueCount = 0; partialTrueCount < loop_ub;
                       partialTrueCount++) {
                    bsbsteps_data[partialTrueCount] =
                        Y_data[((int)unitout_data[b_i] +
                                Y->size[0] * partialTrueCount) -
                               1] -
                        mi_data[partialTrueCount];
                  }
                } else {
                  o_binary_expand_op(zi, Y, unitout, b_i, mi);
                  bsbsteps_data = zi->data;
                }
                mtimes(S, zi, Szi);
                Szi_data = Szi->data;
                /*  S=S+(S*(zi')*zi*S)/(1-zi*S*(zi')); */
                ksor = 0.0;
                loop_ub = zi->size[1];
                for (partialTrueCount = 0; partialTrueCount < loop_ub;
                     partialTrueCount++) {
                  ksor += bsbsteps_data[partialTrueCount] *
                          Szi_data[partialTrueCount];
                }
                partialTrueCount = r->size[0] * r->size[1];
                r->size[0] = Szi->size[0];
                r->size[1] = Szi->size[0];
                emxEnsureCapacity_real_T(r, partialTrueCount);
                bsbsteps_data = r->data;
                loop_ub = Szi->size[0];
                partialTrueCount = Yb->size[0] * Yb->size[1];
                Yb->size[0] = Szi->size[0];
                Yb->size[1] = Szi->size[0];
                emxEnsureCapacity_real_T(Yb, partialTrueCount);
                S_data = Yb->data;
                for (partialTrueCount = 0; partialTrueCount < loop_ub;
                     partialTrueCount++) {
                  b_loop_ub = Szi->size[0];
                  for (nwhile = 0; nwhile < b_loop_ub; nwhile++) {
                    d = Szi_data[nwhile] * Szi_data[partialTrueCount];
                    bsbsteps_data[nwhile + r->size[0] * partialTrueCount] = d;
                    S_data[nwhile + Yb->size[0] * partialTrueCount] = d;
                  }
                }
                if ((S->size[0] == r->size[0]) && (S->size[1] == Yb->size[1])) {
                  partialTrueCount = S->size[0] * S->size[1];
                  S->size[0] = Szi->size[0];
                  S->size[1] = Szi->size[0];
                  emxEnsureCapacity_real_T(S, partialTrueCount);
                  S_data = S->data;
                  loop_ub = Szi->size[0];
                  for (partialTrueCount = 0; partialTrueCount < loop_ub;
                       partialTrueCount++) {
                    b_loop_ub = Szi->size[0];
                    for (nwhile = 0; nwhile < b_loop_ub; nwhile++) {
                      S_data[nwhile + S->size[0] * partialTrueCount] +=
                          Szi_data[nwhile] * Szi_data[partialTrueCount] /
                          (1.0 - ksor);
                    }
                  }
                } else {
                  n_binary_expand_op(S, Szi, ksor);
                }
              }
            }
          } else {
            irank = 0;
            i = mibsbr->size[0] * mibsbr->size[1];
            mibsbr->size[0] = 1;
            mibsbr->size[1] = meoldbsb->size[1];
            emxEnsureCapacity_real_T(mibsbr, i);
            mibsbr_data = mibsbr->data;
            loop_ub = meoldbsb->size[1];
            for (i = 0; i < loop_ub; i++) {
              mibsbr_data[i] = meoldbsb_data[i];
            }
          }
          /*  mi = mean of units entering subset */
          loop_ub = Y->size[1];
          i = Yb->size[0] * Yb->size[1];
          Yb->size[0] = unit->size[0];
          Yb->size[1] = Y->size[1];
          emxEnsureCapacity_real_T(Yb, i);
          S_data = Yb->data;
          for (i = 0; i < loop_ub; i++) {
            b_loop_ub = unit->size[0];
            for (partialTrueCount = 0; partialTrueCount < b_loop_ub;
                 partialTrueCount++) {
              S_data[partialTrueCount + Yb->size[0] * i] =
                  Y_data[(unit_data[partialTrueCount] + Y->size[0] * i) - 1];
            }
          }
          combineVectorElements(Yb, mi);
          i = mi->size[0] * mi->size[1];
          mi->size[0] = 1;
          emxEnsureCapacity_real_T(mi, i);
          mi_data = mi->data;
          loop_ub = mi->size[1] - 1;
          for (i = 0; i <= loop_ub; i++) {
            mi_data[i] /= (double)lunit;
          }
          /*  zi=sqrt(kin*(mm-1-k)/(mm-1-k+kin))*(mi-mean(Y(bsbr,:),1)); */
          ksor = (b_mm - 1.0) - (double)irank;
          ksor = sqrt((double)lunit * ksor / (ksor + (double)lunit));
          if (mi->size[1] == mibsbr->size[1]) {
            i = zi->size[0] * zi->size[1];
            zi->size[0] = 1;
            zi->size[1] = mi->size[1];
            emxEnsureCapacity_real_T(zi, i);
            bsbsteps_data = zi->data;
            loop_ub = mi->size[1];
            for (i = 0; i < loop_ub; i++) {
              bsbsteps_data[i] = ksor * (mi_data[i] - mibsbr_data[i]);
            }
          } else {
            s_binary_expand_op(zi, ksor, mi, mibsbr);
            bsbsteps_data = zi->data;
          }
          mtimes(S, zi, Szi);
          Szi_data = Szi->data;
          /*  S=S+(S*(zi')*zi*S)/(1-zi*S*(zi')); */
          ksor = 0.0;
          loop_ub = zi->size[1];
          for (i = 0; i < loop_ub; i++) {
            ksor += bsbsteps_data[i] * Szi_data[i];
          }
          i = r->size[0] * r->size[1];
          r->size[0] = Szi->size[0];
          r->size[1] = Szi->size[0];
          emxEnsureCapacity_real_T(r, i);
          bsbsteps_data = r->data;
          loop_ub = Szi->size[0];
          i = Yb->size[0] * Yb->size[1];
          Yb->size[0] = Szi->size[0];
          Yb->size[1] = Szi->size[0];
          emxEnsureCapacity_real_T(Yb, i);
          S_data = Yb->data;
          for (i = 0; i < loop_ub; i++) {
            b_loop_ub = Szi->size[0];
            for (partialTrueCount = 0; partialTrueCount < b_loop_ub;
                 partialTrueCount++) {
              d = Szi_data[partialTrueCount] * Szi_data[i];
              bsbsteps_data[partialTrueCount + r->size[0] * i] = d;
              S_data[partialTrueCount + Yb->size[0] * i] = d;
            }
          }
          if ((S->size[0] == r->size[0]) && (S->size[1] == Yb->size[1])) {
            i = S->size[0] * S->size[1];
            S->size[0] = Szi->size[0];
            S->size[1] = Szi->size[0];
            emxEnsureCapacity_real_T(S, i);
            S_data = S->data;
            loop_ub = Szi->size[0];
            for (i = 0; i < loop_ub; i++) {
              b_loop_ub = Szi->size[0];
              for (partialTrueCount = 0; partialTrueCount < b_loop_ub;
                   partialTrueCount++) {
                S_data[partialTrueCount + S->size[0] * i] -=
                    Szi_data[partialTrueCount] * Szi_data[i] / (ksor + 1.0);
              }
            }
          } else {
            p_binary_expand_op(S, Szi, ksor);
          }
          if (lunit > 1) {
            /* mi=mean(Y(unit,:),1); */
            for (b_i = 0; b_i < lunit; b_i++) {
              loop_ub = Y->size[1];
              if (Y->size[1] == mi->size[1]) {
                i = zi->size[0] * zi->size[1];
                zi->size[0] = 1;
                zi->size[1] = Y->size[1];
                emxEnsureCapacity_real_T(zi, i);
                bsbsteps_data = zi->data;
                for (i = 0; i < loop_ub; i++) {
                  bsbsteps_data[i] =
                      Y_data[(unit_data[b_i] + Y->size[0] * i) - 1] -
                      mi_data[i];
                }
              } else {
                q_binary_expand_op(zi, Y, unit, b_i, mi);
                bsbsteps_data = zi->data;
              }
              mtimes(S, zi, Szi);
              Szi_data = Szi->data;
              /*  S=S-(S*(zi')*zi*S)/(1+zi*S*(zi')); */
              ksor = 0.0;
              loop_ub = zi->size[1];
              for (i = 0; i < loop_ub; i++) {
                ksor += bsbsteps_data[i] * Szi_data[i];
              }
              i = r->size[0] * r->size[1];
              r->size[0] = Szi->size[0];
              r->size[1] = Szi->size[0];
              emxEnsureCapacity_real_T(r, i);
              bsbsteps_data = r->data;
              loop_ub = Szi->size[0];
              i = Yb->size[0] * Yb->size[1];
              Yb->size[0] = Szi->size[0];
              Yb->size[1] = Szi->size[0];
              emxEnsureCapacity_real_T(Yb, i);
              S_data = Yb->data;
              for (i = 0; i < loop_ub; i++) {
                b_loop_ub = Szi->size[0];
                for (partialTrueCount = 0; partialTrueCount < b_loop_ub;
                     partialTrueCount++) {
                  d = Szi_data[partialTrueCount] * Szi_data[i];
                  bsbsteps_data[partialTrueCount + r->size[0] * i] = d;
                  S_data[partialTrueCount + Yb->size[0] * i] = d;
                }
              }
              if ((S->size[0] == r->size[0]) && (S->size[1] == Yb->size[1])) {
                i = S->size[0] * S->size[1];
                S->size[0] = Szi->size[0];
                S->size[1] = Szi->size[0];
                emxEnsureCapacity_real_T(S, i);
                S_data = S->data;
                loop_ub = Szi->size[0];
                for (i = 0; i < loop_ub; i++) {
                  b_loop_ub = Szi->size[0];
                  for (partialTrueCount = 0; partialTrueCount < b_loop_ub;
                       partialTrueCount++) {
                    S_data[partialTrueCount + S->size[0] * i] -=
                        Szi_data[partialTrueCount] * Szi_data[i] / (ksor + 1.0);
                  }
                }
              } else {
                p_binary_expand_op(S, Szi, ksor);
              }
            }
          }
          /*  Compute Mahalanobis distance using updating formulae */
          /*  Note that up for n>30000 it seems faster to use bsxfun rather */
          /*  than .* */
          if (n < 30000) {
            b_mtimes(Ym, S, r);
            bsbsteps_data = r->data;
            if ((r->size[0] == Ym->size[0]) && (r->size[1] == Ym->size[1])) {
              i = Yb->size[0] * Yb->size[1];
              Yb->size[0] = r->size[0];
              Yb->size[1] = r->size[1];
              emxEnsureCapacity_real_T(Yb, i);
              S_data = Yb->data;
              loop_ub = r->size[0] * r->size[1];
              for (i = 0; i < loop_ub; i++) {
                S_data[i] = bsbsteps_data[i] * Ym_data[i];
              }
              sum(Yb, MD);
              bsbsteps_data = MD->data;
            } else {
              binary_expand_op(MD, r, Ym);
              bsbsteps_data = MD->data;
            }
            loop_ub = MD->size[0];
            for (i = 0; i < loop_ub; i++) {
              bsbsteps_data[i] *= b_mm - 1.0;
            }
          } else {
            b_mtimes(Ym, S, r);
            b_bsxfun(r, Ym, Yb);
            sum(Yb, MD);
            bsbsteps_data = MD->data;
            loop_ub = MD->size[0];
            for (i = 0; i < loop_ub; i++) {
              bsbsteps_data[i] *= b_mm - 1.0;
            }
          }
          b_guard1 = true;
        } else {
          /*  In the initial step of the search the inverse is computed directly
           */
          if (b_mm > percn) {
            end = bsbT->size[0] - 1;
            trueCount = 0;
            for (b_i = 0; b_i <= end; b_i++) {
              if (bsbT_data[b_i]) {
                trueCount++;
              }
            }
            i = r7->size[0];
            r7->size[0] = trueCount;
            emxEnsureCapacity_int32_T(r7, i);
            r2 = r7->data;
            partialTrueCount = 0;
            for (b_i = 0; b_i <= end; b_i++) {
              if (bsbT_data[b_i]) {
                r2[partialTrueCount] = b_i + 1;
                partialTrueCount++;
              }
            }
            end = bsbT->size[0] - 1;
            trueCount = 0;
            for (b_i = 0; b_i <= end; b_i++) {
              if (bsbT_data[b_i]) {
                trueCount++;
              }
            }
            i = r8->size[0];
            r8->size[0] = trueCount;
            emxEnsureCapacity_int32_T(r8, i);
            r13 = r8->data;
            partialTrueCount = 0;
            for (b_i = 0; b_i <= end; b_i++) {
              if (bsbT_data[b_i]) {
                r13[partialTrueCount] = b_i + 1;
                partialTrueCount++;
              }
            }
            loop_ub = Ym->size[1];
            i = b_Ym->size[0] * b_Ym->size[1];
            b_Ym->size[0] = r7->size[0];
            b_Ym->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(b_Ym, i);
            bsbsteps_data = b_Ym->data;
            i = Yb->size[0] * Yb->size[1];
            Yb->size[0] = r8->size[0];
            Yb->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(Yb, i);
            S_data = Yb->data;
            for (i = 0; i < loop_ub; i++) {
              b_loop_ub = r7->size[0];
              for (partialTrueCount = 0; partialTrueCount < b_loop_ub;
                   partialTrueCount++) {
                bsbsteps_data[partialTrueCount + b_Ym->size[0] * i] =
                    Ym_data[(r2[partialTrueCount] + Ym->size[0] * i) - 1];
              }
              b_loop_ub = r8->size[0];
              for (partialTrueCount = 0; partialTrueCount < b_loop_ub;
                   partialTrueCount++) {
                S_data[partialTrueCount + Yb->size[0] * i] =
                    Ym_data[(r13[partialTrueCount] + Ym->size[0] * i) - 1];
              }
            }
            c_mtimes(b_Ym, Yb, r);
            inv(r, S);
            S_data = S->data;
            end = bsbT->size[0] - 1;
            trueCount = 0;
            for (b_i = 0; b_i <= end; b_i++) {
              if (bsbT_data[b_i]) {
                trueCount++;
              }
            }
            i = r9->size[0];
            r9->size[0] = trueCount;
            emxEnsureCapacity_int32_T(r9, i);
            r2 = r9->data;
            partialTrueCount = 0;
            for (b_i = 0; b_i <= end; b_i++) {
              if (bsbT_data[b_i]) {
                r2[partialTrueCount] = b_i + 1;
                partialTrueCount++;
              }
            }
            loop_ub = Ym->size[1];
            i = b_Ym->size[0] * b_Ym->size[1];
            b_Ym->size[0] = r9->size[0];
            b_Ym->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(b_Ym, i);
            bsbsteps_data = b_Ym->data;
            for (i = 0; i < loop_ub; i++) {
              b_loop_ub = r9->size[0];
              for (partialTrueCount = 0; partialTrueCount < b_loop_ub;
                   partialTrueCount++) {
                bsbsteps_data[partialTrueCount + b_Ym->size[0] * i] =
                    Ym_data[(r2[partialTrueCount] + Ym->size[0] * i) - 1];
              }
            }
            qr(b_Ym, Yb, R);
          } else {
            loop_ub = Ym->size[1];
            i = b_Ym->size[0] * b_Ym->size[1];
            b_Ym->size[0] = bsb->size[0];
            b_Ym->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(b_Ym, i);
            bsbsteps_data = b_Ym->data;
            i = Yb->size[0] * Yb->size[1];
            Yb->size[0] = bsb->size[0];
            Yb->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(Yb, i);
            S_data = Yb->data;
            for (i = 0; i < loop_ub; i++) {
              b_loop_ub = bsb->size[0];
              for (partialTrueCount = 0; partialTrueCount < b_loop_ub;
                   partialTrueCount++) {
                bsbsteps_data[partialTrueCount + b_Ym->size[0] * i] = Ym_data
                    [((int)bsb_data[partialTrueCount] + Ym->size[0] * i) - 1];
              }
              b_loop_ub = bsb->size[0];
              for (partialTrueCount = 0; partialTrueCount < b_loop_ub;
                   partialTrueCount++) {
                S_data[partialTrueCount + Yb->size[0] * i] = Ym_data
                    [((int)bsb_data[partialTrueCount] + Ym->size[0] * i) - 1];
              }
            }
            c_mtimes(b_Ym, Yb, r);
            inv(r, S);
            S_data = S->data;
            loop_ub = Ym->size[1];
            i = b_Ym->size[0] * b_Ym->size[1];
            b_Ym->size[0] = bsb->size[0];
            b_Ym->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(b_Ym, i);
            bsbsteps_data = b_Ym->data;
            for (i = 0; i < loop_ub; i++) {
              b_loop_ub = bsb->size[0];
              for (partialTrueCount = 0; partialTrueCount < b_loop_ub;
                   partialTrueCount++) {
                bsbsteps_data[partialTrueCount + b_Ym->size[0] * i] = Ym_data
                    [((int)bsb_data[partialTrueCount] + Ym->size[0] * i) - 1];
              }
            }
            qr(b_Ym, Yb, R);
          }
          i = unitoutT->size[0];
          unitoutT->size[0] = S->size[0] * S->size[1];
          emxEnsureCapacity_boolean_T(unitoutT, i);
          unitoutT_data = unitoutT->data;
          loop_ub = S->size[0] * S->size[1];
          for (i = 0; i < loop_ub; i++) {
            unitoutT_data[i] = rtIsInf(S_data[i]);
          }
          irank = unitoutT->size[0];
          if (unitoutT->size[0] == 0) {
            nwhile = 0;
          } else {
            nwhile = unitoutT_data[0];
            for (partialTrueCount = 2; partialTrueCount <= irank;
                 partialTrueCount++) {
              nwhile += unitoutT_data[partialTrueCount - 1];
            }
          }
          if (nwhile > 0) {
            i = Un->size[0] * Un->size[1];
            Un->size[0] = 1;
            Un->size[1] = 1;
            emxEnsureCapacity_real_T(Un, i);
            Un_data = Un->data;
            Un_data[0] = rtNaN;
            i = BB->size[0] * BB->size[1];
            BB->size[0] = 1;
            BB->size[1] = 1;
            emxEnsureCapacity_real_T(BB, i);
            BB_data = BB->data;
            BB_data[0] = rtNaN;
            exitg1 = true;
          } else {
            /*  Compute squared Mahalanobis distances */
            mrdiv(Ym, R, r);
            bsbsteps_data = r->data;
            loop_ub = r->size[0] * r->size[1];
            for (i = 0; i < loop_ub; i++) {
              ksor = bsbsteps_data[i];
              bsbsteps_data[i] = ksor * ksor;
            }
            sum(r, MD);
            bsbsteps_data = MD->data;
            loop_ub = MD->size[0];
            for (i = 0; i < loop_ub; i++) {
              bsbsteps_data[i] *= b_mm - 1.0;
            }
            b_guard1 = true;
          }
        }
        if (b_guard1) {
          if (b_mm < n) {
            /*  MDmod contains modified Mahalanobis distances. The */
            /*  Mahalanobis distance of the units belonging to subset are set */
            /*  to inf because we need to consider the minimum of the units */
            /*  outside subset */
            i = Szi->size[0];
            Szi->size[0] = MD->size[0];
            emxEnsureCapacity_real_T(Szi, i);
            Szi_data = Szi->data;
            loop_ub = MD->size[0];
            for (i = 0; i < loop_ub; i++) {
              Szi_data[i] = bsbsteps_data[i];
            }
            if (b_mm > percn) {
              end = bsbT->size[0];
              for (b_i = 0; b_i < end; b_i++) {
                if (bsbT_data[b_i]) {
                  Szi_data[b_i] = rtInf;
                }
              }
            } else {
              i = r1->size[0];
              r1->size[0] = bsb->size[0];
              emxEnsureCapacity_int32_T(r1, i);
              r2 = r1->data;
              loop_ub = bsb->size[0];
              for (i = 0; i < loop_ub; i++) {
                r2[i] = (int)bsb_data[i];
              }
              loop_ub = r1->size[0];
              for (i = 0; i < loop_ub; i++) {
                Szi_data[r2[i] - 1] = rtInf;
              }
            }
            /*  oldbsbF=bsbF; */
            i = oldbsbT->size[0];
            oldbsbT->size[0] = bsbT->size[0];
            emxEnsureCapacity_boolean_T(oldbsbT, i);
            oldbsbT_data = oldbsbT->data;
            loop_ub = bsbT->size[0];
            for (i = 0; i < loop_ub; i++) {
              oldbsbT_data[i] = bsbT_data[i];
            }
            /*  Take minimum distance of the units not belonging to subset */
            d_minimum(Szi, &ksor, &b_loop_ub);
            /*  MDltminT = n x 1 Boolean vector which is true if corresponding
             * MD is */
            /*  smaller or equal minMD */
            i = unitoutT->size[0];
            unitoutT->size[0] = MD->size[0];
            emxEnsureCapacity_boolean_T(unitoutT, i);
            unitoutT_data = unitoutT->data;
            loop_ub = MD->size[0];
            for (i = 0; i < loop_ub; i++) {
              unitoutT_data[i] = (bsbsteps_data[i] <= ksor);
            }
            /*  MDltminbsb = n x 1 Boolean vector (if m>percn) or */
            /*  int32 vector containing the units which certainly remain inside
             * subset */
            /*  i.e. those which have a true in MDltminT and belong to previous
             * subset */
            if (b_mm > percn) {
              if (unitoutT->size[0] == bsbT->size[0]) {
                i = MDltminbsb->size[0];
                MDltminbsb->size[0] = unitoutT->size[0];
                emxEnsureCapacity_boolean_T(MDltminbsb, i);
                MDltminbsb_data = MDltminbsb->data;
                loop_ub = unitoutT->size[0];
                for (i = 0; i < loop_ub; i++) {
                  MDltminbsb_data[i] = (unitoutT_data[i] && bsbT_data[i]);
                }
              } else {
                and(MDltminbsb, unitoutT, bsbT);
                MDltminbsb_data = MDltminbsb->data;
              }
            } else {
              i = MDltminbsb->size[0];
              MDltminbsb->size[0] = bsb->size[0];
              emxEnsureCapacity_boolean_T(MDltminbsb, i);
              MDltminbsb_data = MDltminbsb->data;
              loop_ub = bsb->size[0];
              for (i = 0; i < loop_ub; i++) {
                MDltminbsb_data[i] = unitoutT_data[(int)bsb_data[i] - 1];
              }
            }
            /*  Find number of units of old subset which have a MD <= minMD */
            /*  rankgap is the difference between m+1 (size of new size) and */
            /*  the number of units of old subset which have a distance <= */
            /*  minMD. For example if rankgap is =3, three more units must be */
            /*  added. */
            irank = MDltminbsb->size[0];
            if (MDltminbsb->size[0] == 0) {
              nwhile = 0;
            } else {
              nwhile = MDltminbsb_data[0];
              for (partialTrueCount = 2; partialTrueCount <= irank;
                   partialTrueCount++) {
                nwhile += MDltminbsb_data[partialTrueCount - 1];
              }
            }
            rankgap = (b_mm + 1.0) - (double)nwhile;
            if (rankgap == 1.0) {
              /*  Just one new unit entered subset */
              i = unit->size[0];
              unit->size[0] = 1;
              emxEnsureCapacity_int32_T(unit, i);
              unit_data = unit->data;
              unit_data[0] = b_loop_ub;
              /*  Compute new bsbT and new bsb */
              if (b_mm <= percn) {
                /*  new bsb is equal to oldbsb plus unit which just entered */
                i = bsb->size[0];
                partialTrueCount = bsb->size[0];
                bsb->size[0]++;
                emxEnsureCapacity_real_T(bsb, partialTrueCount);
                bsb_data = bsb->data;
                bsb_data[i] = b_loop_ub;
              }
              /*  bsbT is equal to old bsbT after adding a single true in */
              /*  correspondence of the unit which entered subset */
              bsbT_data[b_loop_ub - 1] = true;
            } else if ((rankgap > 1.0) && (rankgap <= 10.0)) {
              /*  MDmod is the vector of Mahalanobis distance which will have */
              /*  a Inf in correspondence of the units of old subset which */
              /*  had a MD smaller than minMD */
              i = Szi->size[0];
              Szi->size[0] = MD->size[0];
              emxEnsureCapacity_real_T(Szi, i);
              Szi_data = Szi->data;
              loop_ub = MD->size[0];
              for (i = 0; i < loop_ub; i++) {
                Szi_data[i] = bsbsteps_data[i];
              }
              /*  Find bsbrini, i.e. the vector which will contain the */
              /*  units which remain in the subset in the next step */
              /*  Note that bsbrini is defined using Boolean vector bsbT */
              /*  when mm is greater than percn otherwise it uses numerical */
              /*  vector bsb */
              if (b_mm <= percn) {
                /*  bsbrini = vector containing the list of the units */
                /*  which certainly remain inside subset (i.e. those */
                /*  which have a MD smaller than minMD). In order to find */
                /*  bsbr we must check whether the k units which will be */
                /*  included were or not in the previous subset */
                end = bsb->size[0] - 1;
                trueCount = 0;
                for (b_i = 0; b_i <= end; b_i++) {
                  if (unitoutT_data[(int)bsb_data[b_i] - 1]) {
                    trueCount++;
                  }
                }
                i = bsbrini->size[0];
                bsbrini->size[0] = trueCount;
                emxEnsureCapacity_uint32_T(bsbrini, i);
                bsbrini_data = bsbrini->data;
                partialTrueCount = 0;
                for (b_i = 0; b_i <= end; b_i++) {
                  if (unitoutT_data[(int)bsb_data[b_i] - 1]) {
                    bsbrini_data[partialTrueCount] =
                        (unsigned int)bsb_data[b_i];
                    partialTrueCount++;
                  }
                }
                /*  unitout = list of the units which potentially left */
                /*  subset. We say potentially because there are still k */
                /*  units to be included */
                /*  unitout=bsb(~bsbini); */
                end = bsb->size[0] - 1;
                trueCount = 0;
                for (b_i = 0; b_i <= end; b_i++) {
                  if (!unitoutT_data[(int)bsb_data[b_i] - 1]) {
                    trueCount++;
                  }
                }
                i = unitout->size[0];
                unitout->size[0] = trueCount;
                emxEnsureCapacity_real_T(unitout, i);
                unitout_data = unitout->data;
                partialTrueCount = 0;
                for (b_i = 0; b_i <= end; b_i++) {
                  if (!unitoutT_data[(int)bsb_data[b_i] - 1]) {
                    unitout_data[partialTrueCount] = bsb_data[b_i];
                    partialTrueCount++;
                  }
                }
                i = r1->size[0];
                r1->size[0] = bsbrini->size[0];
                emxEnsureCapacity_int32_T(r1, i);
                r2 = r1->data;
                loop_ub = bsbrini->size[0];
                for (i = 0; i < loop_ub; i++) {
                  r2[i] = (int)bsbrini_data[i];
                }
                loop_ub = r1->size[0];
                for (i = 0; i < loop_ub; i++) {
                  Szi_data[r2[i] - 1] = rtInf;
                }
              } else {
                /*  bsbriniT = Boolean vector which is true if the */
                /*  corresponding unit belonged to previous subset and */
                /*  has a MD smaller than minMD. This vector is nothing */
                /*  but the Boolean version of bsbrini. */
                /*  bsbriniT=MDltminT & bsbT; */
                i = bsbriniT->size[0];
                bsbriniT->size[0] = MDltminbsb->size[0];
                emxEnsureCapacity_boolean_T(bsbriniT, i);
                bsbriniT_data = bsbriniT->data;
                loop_ub = MDltminbsb->size[0];
                for (i = 0; i < loop_ub; i++) {
                  bsbriniT_data[i] = MDltminbsb_data[i];
                }
                end = MDltminbsb->size[0];
                for (b_i = 0; b_i < end; b_i++) {
                  if (MDltminbsb_data[b_i]) {
                    Szi_data[b_i] = rtInf;
                  }
                }
              }
              irank = 0;
              nwhile = 0;
              /*  In the following loop we add k units to form the new */
              /*  subset of m+1 units Note that if the difference between */
              /*  m+1 and the rank of the min outside subset is equal to
               * rankgap, */
              /*  than at most rankgap minima must be calculated to find */
              /*  the the (m+1)-th order statistic */
              i = (int)rankgap;
              for (loop_ub = 0; loop_ub < i; loop_ub++) {
                d_minimum(Szi, &ksor, &b_loop_ub);
                /*  minMDindex = index of the unit which is about to */
                /*  enter subset. We check whether unit minMDindex */
                /*  belonged or not to previous subset If unit minMDindex */
                /*  belonged to previous subset than a true is added into */
                /*  vector bsbriniT and the unit is included in vector */
                /*  bsbradd If unit minMDindex did not belong to previous */
                /*  subset, than minMDindex is included in vector unitadd */
                if (bsbT_data[b_loop_ub - 1]) {
                  if (b_mm <= percn) {
                    bsbradd[nwhile] = b_loop_ub;
                    nwhile++;
                    /*  Delete from vector unitout (containing the */
                    /*  list of the units which went out of the */
                    /*  subset) element minMDindex */
                    end = unitout->size[0] - 1;
                    trueCount = 0;
                    for (b_i = 0; b_i <= end; b_i++) {
                      if ((int)unitout_data[b_i] != b_loop_ub) {
                        trueCount++;
                      }
                    }
                    partialTrueCount = 0;
                    for (b_i = 0; b_i <= end; b_i++) {
                      if ((int)unitout_data[b_i] != b_loop_ub) {
                        unitout_data[partialTrueCount] = unitout_data[b_i];
                        partialTrueCount++;
                      }
                    }
                    partialTrueCount = unitout->size[0];
                    unitout->size[0] = trueCount;
                    emxEnsureCapacity_real_T(unitout, partialTrueCount);
                    unitout_data = unitout->data;
                  } else {
                    bsbriniT_data[b_loop_ub - 1] = true;
                  }
                } else {
                  unitadd[irank] = b_loop_ub;
                  irank++;
                }
                /*  disp(posunit(posncl1)) */
                Szi_data[b_loop_ub - 1] = rtInf;
              }
              /*  unit = vector containing all units which enter the new subset
               */
              /*  but did not belong to previous subset */
              if (1 > irank) {
                loop_ub = 0;
              } else {
                loop_ub = irank;
              }
              i = unit->size[0];
              unit->size[0] = loop_ub;
              emxEnsureCapacity_int32_T(unit, i);
              unit_data = unit->data;
              for (i = 0; i < loop_ub; i++) {
                unit_data[i] = unitadd[i];
              }
              /*  bsbr = vector containing all units which enter the new */
              /*  subset and were also in the previous subset */
              /*  bsb = units forming new subset. */
              if (b_mm <= percn) {
                if (1 > nwhile) {
                  b_loop_ub = 0;
                } else {
                  b_loop_ub = nwhile;
                }
                i = bsbr->size[0];
                bsbr->size[0] = bsbrini->size[0] + b_loop_ub;
                emxEnsureCapacity_int32_T(bsbr, i);
                bsbr_data = bsbr->data;
                irank = bsbrini->size[0];
                for (i = 0; i < irank; i++) {
                  bsbr_data[i] = (int)bsbrini_data[i];
                }
                for (i = 0; i < b_loop_ub; i++) {
                  bsbr_data[i + bsbrini->size[0]] = bsbradd[i];
                }
                i = bsb->size[0];
                bsb->size[0] = bsbr->size[0] + loop_ub;
                emxEnsureCapacity_real_T(bsb, i);
                bsb_data = bsb->data;
                b_loop_ub = bsbr->size[0];
                for (i = 0; i < b_loop_ub; i++) {
                  bsb_data[i] = bsbr_data[i];
                }
                for (i = 0; i < loop_ub; i++) {
                  bsb_data[i + bsbr->size[0]] = unitadd[i];
                }
                i = bsbT->size[0];
                bsbT->size[0] = n;
                emxEnsureCapacity_boolean_T(bsbT, i);
                bsbT_data = bsbT->data;
                for (i = 0; i < n; i++) {
                  bsbT_data[i] = false;
                }
                i = r1->size[0];
                r1->size[0] = bsb->size[0];
                emxEnsureCapacity_int32_T(r1, i);
                r2 = r1->data;
                loop_ub = bsb->size[0];
                for (i = 0; i < loop_ub; i++) {
                  r2[i] = (int)bsb_data[i];
                }
                loop_ub = r1->size[0];
                for (i = 0; i < loop_ub; i++) {
                  bsbT_data[r2[i] - 1] = true;
                }
              } else {
                /*  After the instruction which follows bsbriniT */
                /*  will be exactly equal to bsbT */
                /*  Note that bsbT has been computed through the 3 following
                 * instructions */
                /*  -----------    bsbriniT=MDltminT & bsbT; */
                /*  -----------    bsbriniT(minMDindex)=true; */
                /*  -----------    bsbriniT(unit)=true; */
                if (0 <= loop_ub - 1) {
                  memcpy(&tmp_data[0], &unitadd[0], loop_ub * sizeof(int));
                }
                for (i = 0; i < loop_ub; i++) {
                  bsbriniT_data[tmp_data[i] - 1] = true;
                }
                i = bsbT->size[0];
                bsbT->size[0] = bsbriniT->size[0];
                emxEnsureCapacity_boolean_T(bsbT, i);
                bsbT_data = bsbT->data;
                loop_ub = bsbriniT->size[0];
                for (i = 0; i < loop_ub; i++) {
                  bsbT_data[i] = bsbriniT_data[i];
                }
              }
              /*  Compute bsbT (Boolean vector which identifies new subset) */
            } else {
              /*   rankgap>nrepmin */
              /*  New sorting based on quickselectFS */
              i = Szi->size[0];
              Szi->size[0] = MD->size[0];
              emxEnsureCapacity_real_T(Szi, i);
              Szi_data = Szi->data;
              loop_ub = MD->size[0] - 1;
              for (i = 0; i <= loop_ub; i++) {
                Szi_data[i] = bsbsteps_data[i];
              }
              ksor = quickselectFS(Szi, b_mm + 1.0, b_loop_ub);
              i = bsbT->size[0];
              bsbT->size[0] = MD->size[0];
              emxEnsureCapacity_boolean_T(bsbT, i);
              bsbT_data = bsbT->data;
              loop_ub = MD->size[0];
              for (i = 0; i < loop_ub; i++) {
                bsbT_data[i] = (bsbsteps_data[i] <= ksor);
              }
              irank = bsbT->size[0];
              if (bsbT->size[0] == 0) {
                nwhile = 0;
              } else {
                nwhile = bsbT_data[0];
                for (partialTrueCount = 2; partialTrueCount <= irank;
                     partialTrueCount++) {
                  nwhile += bsbT_data[partialTrueCount - 1];
                }
              }
              if (nwhile == (int)b_mm + 1) {
                if (b_mm <= percn) {
                  end = bsbT->size[0] - 1;
                  trueCount = 0;
                  for (b_i = 0; b_i <= end; b_i++) {
                    if (bsbT_data[b_i]) {
                      trueCount++;
                    }
                  }
                  i = bsb->size[0];
                  bsb->size[0] = trueCount;
                  emxEnsureCapacity_real_T(bsb, i);
                  bsb_data = bsb->data;
                  partialTrueCount = 0;
                  for (b_i = 0; b_i <= end; b_i++) {
                    if (bsbT_data[b_i]) {
                      bsb_data[partialTrueCount] = seq_data[b_i];
                      partialTrueCount++;
                    }
                  }
                }
              } else {
                end = MD->size[0];
                trueCount = 0;
                nwhile = MD->size[0] - 1;
                irank = 0;
                for (b_i = 0; b_i < end; b_i++) {
                  if (bsbsteps_data[b_i] < ksor) {
                    trueCount++;
                  }
                  if (bsbsteps_data[b_i] < ksor) {
                    irank++;
                  }
                }
                d = (b_mm + 1.0) - (double)trueCount;
                if (1.0 > d) {
                  loop_ub = 0;
                } else {
                  loop_ub = (int)d;
                }
                i = r11->size[0];
                r11->size[0] = irank;
                emxEnsureCapacity_int32_T(r11, i);
                r2 = r11->data;
                partialTrueCount = 0;
                end = MD->size[0] - 1;
                trueCount = 0;
                for (b_i = 0; b_i <= nwhile; b_i++) {
                  if (bsbsteps_data[b_i] < ksor) {
                    r2[partialTrueCount] = b_i + 1;
                    partialTrueCount++;
                  }
                  if (bsbsteps_data[b_i] == ksor) {
                    trueCount++;
                  }
                }
                i = r12->size[0];
                r12->size[0] = trueCount;
                emxEnsureCapacity_int32_T(r12, i);
                r13 = r12->data;
                partialTrueCount = 0;
                for (b_i = 0; b_i <= end; b_i++) {
                  if (bsbsteps_data[b_i] == ksor) {
                    r13[partialTrueCount] = b_i + 1;
                    partialTrueCount++;
                  }
                }
                i = bsb->size[0];
                bsb->size[0] = r11->size[0] + loop_ub;
                emxEnsureCapacity_real_T(bsb, i);
                bsb_data = bsb->data;
                b_loop_ub = r11->size[0];
                for (i = 0; i < b_loop_ub; i++) {
                  bsb_data[i] = seq_data[r2[i] - 1];
                }
                for (i = 0; i < loop_ub; i++) {
                  bsb_data[i + r11->size[0]] = seq_data[r13[i] - 1];
                }
                i = bsbT->size[0];
                bsbT->size[0] = n;
                emxEnsureCapacity_boolean_T(bsbT, i);
                bsbT_data = bsbT->data;
                for (i = 0; i < n; i++) {
                  bsbT_data[i] = false;
                }
                i = r1->size[0];
                r1->size[0] = bsb->size[0];
                emxEnsureCapacity_int32_T(r1, i);
                r2 = r1->data;
                loop_ub = bsb->size[0];
                for (i = 0; i < loop_ub; i++) {
                  r2[i] = (int)bsb_data[i];
                }
                loop_ub = r1->size[0];
                for (i = 0; i < loop_ub; i++) {
                  bsbT_data[r2[i] - 1] = true;
                }
              }
              /*  unit = vector containing units which just entered subset; */
              if (bsbT->size[0] == oldbsbT->size[0]) {
                i = b_bsbT->size[0];
                b_bsbT->size[0] = bsbT->size[0];
                emxEnsureCapacity_boolean_T(b_bsbT, i);
                unitoutT_data = b_bsbT->data;
                loop_ub = bsbT->size[0];
                for (i = 0; i < loop_ub; i++) {
                  unitoutT_data[i] = (bsbT_data[i] && (!oldbsbT_data[i]));
                }
                b_eml_find(b_bsbT, r1);
                r2 = r1->data;
              } else {
                r_binary_expand_op(r1, bsbT, oldbsbT);
                r2 = r1->data;
              }
              i = unit->size[0];
              unit->size[0] = r1->size[0];
              emxEnsureCapacity_int32_T(unit, i);
              unit_data = unit->data;
              loop_ub = r1->size[0];
              for (i = 0; i < loop_ub; i++) {
                unit_data[i] = r2[i];
              }
            }
            /*  store mean of units forming old subset */
            i = meoldbsb->size[0] * meoldbsb->size[1];
            meoldbsb->size[0] = 1;
            meoldbsb->size[1] = ym->size[1];
            emxEnsureCapacity_real_T(meoldbsb, i);
            meoldbsb_data = meoldbsb->data;
            loop_ub = ym->size[1];
            for (i = 0; i < loop_ub; i++) {
              meoldbsb_data[i] = ym_data[i];
            }
            lunit = unit->size[0];
            if (b_mm >= init1) {
              if (unit->size[0] <= 10) {
                if (2 > unit->size[0] + 1) {
                  i = -1;
                  partialTrueCount = -1;
                } else {
                  i = 0;
                  partialTrueCount = unit->size[0];
                }
                nwhile = (int)((b_mm - init1) + 1.0) - 1;
                irank = partialTrueCount - i;
                for (partialTrueCount = 0; partialTrueCount < irank;
                     partialTrueCount++) {
                  Un_data[nwhile + Un->size[0] * ((i + partialTrueCount) + 1)] =
                      unit_data[partialTrueCount];
                }
              } else {
                int2str(b_mm, c_mm.data, c_mm.size);
                int2str(unit->size[0], c_mm.data, c_mm.size);
                i = (int)((b_mm - init1) + 1.0) - 1;
                for (partialTrueCount = 0; partialTrueCount < 10;
                     partialTrueCount++) {
                  Un_data[i + Un->size[0] * (partialTrueCount + 1)] =
                      unit_data[partialTrueCount];
                }
              }
            }
          }
          mm++;
        }
      }
    }
  }
  if (guard1) {
    i = Un->size[0] * Un->size[1];
    Un->size[0] = 1;
    Un->size[1] = 1;
    emxEnsureCapacity_real_T(Un, i);
    Un_data = Un->data;
    Un_data[0] = rtNaN;
    i = BB->size[0] * BB->size[1];
    BB->size[0] = 1;
    BB->size[1] = 1;
    emxEnsureCapacity_real_T(BB, i);
    BB_data = BB->data;
    BB_data[0] = rtNaN;
  }
  emxFree_real_T(&r);
  emxFree_boolean_T(&b_bsbT);
  emxFree_real_T(&b_Ym);
  emxFree_int32_T(&r12);
  emxFree_int32_T(&r11);
  emxFree_int32_T(&r10);
  emxFree_int32_T(&r9);
  emxFree_int32_T(&r8);
  emxFree_int32_T(&r7);
  emxFree_int32_T(&r6);
  emxFree_int32_T(&r5);
  emxFree_int32_T(&r1);
  emxFree_real_T(&bsbsteps);
  emxFree_boolean_T(&MDltminbsb);
  emxFree_real_T(&R);
  emxFree_real_T(&MD);
  emxFree_real_T(&Szi);
  emxFree_real_T(&zi);
  emxFree_real_T(&mibsbr);
  emxFree_real_T(&mi);
  emxFree_boolean_T(&unitoutT);
  emxFree_real_T(&Ym);
  emxFree_real_T(&ym);
  emxFree_real_T(&Yb);
  emxFree_int32_T(&unit);
  emxFree_uint32_T(&bsbrini);
  emxFree_boolean_T(&bsbriniT);
  emxFree_real_T(&unitout);
  emxFree_int32_T(&bsbr);
  emxFree_boolean_T(&oldbsbT);
  emxFree_real_T(&meoldbsb);
  emxFree_real_T(&S);
  emxFree_boolean_T(&bsbT);
  emxFree_real_T(&seq);
}

/* End of code generation (FSMbsb.c) */
