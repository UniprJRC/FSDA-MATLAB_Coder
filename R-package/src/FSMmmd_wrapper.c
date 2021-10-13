/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSMmmd_wrapper.c
 *
 * Code generation for function 'FSMmmd_wrapper'
 *
 */

/* Include files */
#include <R.h>

#include "FSMmmd_wrapper.h"
#include "FSMmmd.h"
#include "bsxfun.h"
#include "cat.h"
#include "chkinputM.h"
#include "colon.h"
#include "combineVectorElements.h"
#include "cov.h"
#include "eml_mtimes_helper.h"
#include "find.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_initialize.h"
#include "fsdaC_internal_types.h"
#include "fsdaC_types.h"
#include "ifWhileCond.h"
#include "int2str.h"
#include "inv.h"
#include "mahalFS.h"
#include "minOrMax.h"
#include "mod.h"
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
void FSMmmd_wrapper(const emxArray_real_T *Y, const emxArray_real_T *bsb,
                    const emxArray_real_T *bsbsteps, double init, bool msg,
                    bool nocheck, emxArray_real_T *mmd, emxArray_real_T *Un,
                    emxArray_real_T *BB)
{
  emxArray_boolean_T *MDltminbsb;
  emxArray_boolean_T *b_bsbT;
  emxArray_boolean_T *bsbT;
  emxArray_boolean_T *bsbriniT;
  emxArray_boolean_T *c_bsbsteps;
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
  emxArray_real_T *MD;
  emxArray_real_T *R;
  emxArray_real_T *S;
  emxArray_real_T *Szi;
  emxArray_real_T *Yb;
  emxArray_real_T *Ym;
  emxArray_real_T *b_Y;
  emxArray_real_T *b_Ym;
  emxArray_real_T *b_bsb;
  emxArray_real_T *b_bsbsteps;
  emxArray_real_T *meoldbsb;
  emxArray_real_T *mi;
  emxArray_real_T *mibsbr;
  emxArray_real_T *r;
  emxArray_real_T *r3;
  emxArray_real_T *r4;
  emxArray_real_T *seq;
  emxArray_real_T *unitout;
  emxArray_real_T *y;
  emxArray_real_T *ym;
  emxArray_real_T *zi;
  emxArray_uint32_T *bsbrini;
  const double *Y_data;
  const double *bsb_data;
  const double *bsbsteps_data;
  double b_mm;
  double d;
  double init1;
  double ksor;
  double minMD;
  double percn;
  double rankgap;
  double *BB_data;
  double *MD_data;
  double *S_data;
  double *Szi_data;
  double *Un_data;
  double *Ym_data;
  double *b_Y_data;
  double *b_bsb_data;
  double *b_bsbsteps_data;
  double *meoldbsb_data;
  double *mi_data;
  double *mibsbr_data;
  double *mmd_data;
  double *seq_data;
  double *unitout_data;
  double *ym_data;
  int bsbradd[10];
  int tmp_data[10];
  int unitadd[10];
  int b_i;
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
  bool b_guard1 = false;
  bool exitg1;
  bool guard1 = false;
  bool *MDltminbsb_data;
  bool *bsbT_data;
  bool *bsbriniT_data;
  bool *oldbsbT_data;
  bool *unitoutT_data;
  if (!isInitialized_fsdaC) {
    fsdaC_initialize();
  }
  bsbsteps_data = bsbsteps->data;
  bsb_data = bsb->data;
  Y_data = Y->data;
  emxInit_real_T(&b_bsb, 1);
  /*  Required input arguments */
  /*  Y: an array of doubles of any dimension */
  /*  bsb: a column vector of doubles of any length */
  /*  bsbsteps: a missing value, a scalar or a column vector of doubles of any
   * length */
  /*  init a scalar double */
  /*  msg is a scalar boolean */
  /*  nocheck is a boolean */
  i = b_bsb->size[0];
  b_bsb->size[0] = bsb->size[0];
  emxEnsureCapacity_real_T(b_bsb, i);
  b_bsb_data = b_bsb->data;
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_bsb_data[i] = bsb_data[i];
  }
  emxInit_real_T(&b_Y, 2);
  /* FSMmmd monitors minMD */
  /*  */
  /* <a href="matlab: docsearchFS('FSMmmd')">Link to the help function</a> */
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
  /*                Data Types - single | double */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*    bsbsteps :  Save the units forming subsets. Vector. It specifies for */
  /*                which steps of the fwd search it */
  /*                is necessary to save the units forming subsets. If bsbsteps
   */
  /*                is 0 we store the units forming subset in all steps. The */
  /*                default is store the units forming subset in all steps if */
  /*                n<=5000, else to store the units forming subset at steps */
  /*                init and steps which are multiple of 100. For example, as */
  /*                default, if n=7530 and init=6, */
  /*                units forming subset are stored for */
  /*                m=init, 100, 200, ..., 7500. */
  /*                Example - 'bsbsteps',[100 200] stores the unis forming */
  /*                subset in steps 100 and 200. */
  /*                Data Types - double */
  /*  */
  /*  init :       Point where to start monitoring */
  /*                required diagnostics. Scalar. Note that if bsb is supplied,
   */
  /*                init>=length(bsb). If init is not specified it will */
  /*                be set equal to floor(n*0.6). */
  /*                  Example - 'init',50 */
  /*                  Data Types - double */
  /*  */
  /*   msg  :     It controls whether to display or not messages */
  /*                about great interchange on the screen. Scalar. */
  /*                If msg==1 (default) messages are displyed on the screen */
  /*                else no message is displayed on the screen. */
  /*                  Example - 'msg',0 */
  /*                  Data Types - double */
  /*  */
  /*  nocheck :   It controls wether to perform checks on */
  /*                matrix Y. Boolean. If nocheck is equal to true no check is
   */
  /*                performed on matrix Y. As default nocheck=false. */
  /*                  Example - 'nocheck',false */
  /*                  Data Types - logical */
  /*  */
  /*  plots :     It specify whether it is necessary to produce the plots of
   * minimum Mahalanobis */
  /*                  distance. Scalar. If plots=1, a plot of the monitoring of
   * minMD among */
  /*                the units not belonging to the subset is produced on the */
  /*                screen with 1% 50% and 99% confidence bands */
  /*                else (default) no plot is produced. */
  /*                  Example - 'plots',0 */
  /*                  Data Types - double */
  /*  */
  /*  Remark :      The user should only give the input arguments that have to
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
  /*  mmd :         (n-init) x 2 matrix which contains the monitoring of minimum
   */
  /*                Mahalanobis distance each step of the forward search. */
  /*                1st col = fwd search index (from init to n-1); */
  /*                2nd col = minimum Mahalanobis distance. */
  /*  Un :          (n-init) x 11 Matrix which contains the unit(s) included */
  /*                in the subset at each step of the search. */
  /*                REMARK: in every step the new subset is compared with the */
  /*                old subset. Un contains the unit(s) present in the new */
  /*                subset but not in the old one. */
  /*                Un(1,2) for example contains the unit included in step */
  /*                init+1. */
  /*                Un(end,2) contains the units included in the final step */
  /*                of the search. */
  /*  */
  /*   Optional Output: */
  /*  */
  /*  BB :   n x (n-init+1) matrix containing units belonging to subset in */
  /*                each step of the search. Each row is associated to a unit */
  /*                while each colum is associated to a step of the fwd search.
   */
  /*  */
  /*  See also FSMenvmmd.m, FSM.m, FSMmmdeasy, quickselectFS.m */
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
  /* <a href="matlab: docsearchFS('FSMmmd')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     %% Minimum Mahalanobis distance. */
  /*     % Personalized initial subset (small n). Create an initial subset with
   */
  /*     % the 4 observations which fell the smallest */
  /*     % number of times outside the robust bivariate ellipses and with the */
  /*     % lowest Mahalanobis Distance. */
  /*     rng('default') */
  /*     n=200; */
  /*     v=3; */
  /*     m0=4; */
  /*     randn('state',123456); */
  /*     Y=randn(n,v); */
  /*     %Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:)=Ycont(1:5,:)+3; */
  /*     [fre]=unibiv(Y); */
  /*     fre=sortrows(fre,[3 4]); */
  /*     bs=fre(1:m0,1); */
  /*     mmd=FSMmmd(Ycont,bs); */
  /*     plot(mmd(:,1),mmd(:,2)) */
  /* } */
  /* { */
  /*     %% FSMmmd with optional arguments. */
  /*     % Plotting the bandwith of the minimum Mahalanobis distance */
  /*     n=200; */
  /*     v=3; */
  /*     m0=4; */
  /*     randn('state',123456); */
  /*     Y=randn(n,v); */
  /*     %Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:)=Ycont(1:5,:)+3; */
  /*     [fre]=unibiv(Y); */
  /*     fre=sortrows(fre,[3 4]); */
  /*     bs=fre(1:m0,1); */
  /*     [mmd]=FSMmmd(Ycont,bs,'plots',1); */
  /*     % The output is exactly the same as that of FSMmmdeasy */
  /*     % mmd1=FSMmmdeasy(Ycont,bs,'plots',1); */
  /* } */
  /* { */
  /*     % Checking the unit(s) included in the subset at each step of the */
  /*     % search. */
  /*     % Un contains the unit(s) present in the new subset but not in the old
   * one. */
  /*     n=200; */
  /*     v=3; */
  /*     m0=4; */
  /*     randn('state',123456); */
  /*     Y=randn(n,v); */
  /*     %Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:)=Ycont(1:5,:)+3; */
  /*     [fre]=unibiv(Y); */
  /*     fre=sortrows(fre,[3 4]); */
  /*     bs=fre(1:m0,1); */
  /*     [mmd,Un]=FSMmmd(Ycont,bs,'plots',1); */
  /*     % The output is exactly the same as that of FSMmmdeasy */
  /*     % [mmd1,Un]=FSMmmdeasy(Ycont,bs,'plots',1); */
  /* } */
  /* { */
  /*     % Checking the units belonging to subset in each step of the search. */
  /*     % Personalized initial subset (large n). Each row of BB matrix */
  /*     % is associated to a unit while each colum is associated to a step of
   * the fwd search. */
  /*     n=20000; */
  /*     v=3; */
  /*     m0=10; */
  /*     randn('state',123456); */
  /*     Y=randn(n,v); */
  /*     % 25 per cent of Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5000,:)=Ycont(1:5000,:)+3; */
  /*     [fre]=unibiv(Y); */
  /*     fre=sortrows(fre,[3 4]); */
  /*     bs=fre(1:m0,1); */
  /*     [mmd,Un,BB]=FSMmmd(Ycont,bs,'plots',1); */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checking */
  /* chkinputM does not do any check if option nocheck=true */
  i = b_Y->size[0] * b_Y->size[1];
  b_Y->size[0] = Y->size[0];
  b_Y->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(b_Y, i);
  b_Y_data = b_Y->data;
  loop_ub = Y->size[0] * Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_Y_data[i] = Y_data[i];
  }
  emxInit_boolean_T(&bsbT, 1);
  chkinputM(b_Y, nocheck);
  b_Y_data = b_Y->data;
  /*  rows(Y) */
  v = b_Y->size[1];
  n = b_Y->size[0];
  /*  Do not use implicit expansion */
  /*  Input parameters checking */
  /* init1=options.init; */
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
      randsample(n, (double)v + 1.0, b_bsb);
      b_bsb_data = b_bsb->data;
      /*  Check if the var-cov matrix of the random sample is full (i.e =v) */
      loop_ub = b_Y->size[1];
      i = Yb->size[0] * Yb->size[1];
      Yb->size[0] = b_bsb->size[0];
      Yb->size[1] = b_Y->size[1];
      emxEnsureCapacity_real_T(Yb, i);
      S_data = Yb->data;
      for (i = 0; i < loop_ub; i++) {
        end = b_bsb->size[0];
        for (partialTrueCount = 0; partialTrueCount < end; partialTrueCount++) {
          S_data[partialTrueCount + Yb->size[0] * i] =
              b_Y_data[((int)b_bsb_data[partialTrueCount] + b_Y->size[0] * i) -
                       1];
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
  percn = 0.85 * (double)b_Y->size[0];
  /*  nrepmin = scalar which controls the maximum number of repeated minima */
  /*  which must be taken in order to find new subset */
  if (b_Y->size[0] < 1) {
    ym->size[0] = 1;
    ym->size[1] = 0;
  } else {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = b_Y->size[0];
    emxEnsureCapacity_real_T(ym, i);
    ym_data = ym->data;
    loop_ub = b_Y->size[0] - 1;
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
  bsbT->size[0] = b_Y->size[0];
  emxEnsureCapacity_boolean_T(bsbT, i);
  bsbT_data = bsbT->data;
  loop_ub = b_Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT_data[i] = false;
  }
  emxInit_int32_T(&r1, 1);
  i = r1->size[0];
  r1->size[0] = b_bsb->size[0];
  emxEnsureCapacity_int32_T(r1, i);
  r2 = r1->data;
  loop_ub = b_bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    r2[i] = (int)b_bsb_data[i];
  }
  loop_ub = r1->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT_data[r2[i] - 1] = true;
  }
  emxInit_real_T(&S, 2);
  /*  Initialization for Matlab coder */
  rankgap = 0.0;
  i = S->size[0] * S->size[1];
  S->size[0] = b_Y->size[1];
  S->size[1] = b_Y->size[1];
  emxEnsureCapacity_real_T(S, i);
  S_data = S->data;
  loop_ub = b_Y->size[1] * b_Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    S_data[i] = 0.0;
  }
  emxInit_real_T(&meoldbsb, 2);
  i = meoldbsb->size[0] * meoldbsb->size[1];
  meoldbsb->size[0] = 1;
  meoldbsb->size[1] = b_Y->size[1];
  emxEnsureCapacity_real_T(meoldbsb, i);
  meoldbsb_data = meoldbsb->data;
  loop_ub = b_Y->size[1];
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
  bsbr->size[0] = b_Y->size[0];
  emxEnsureCapacity_int32_T(bsbr, i);
  bsbr_data = bsbr->data;
  loop_ub = b_Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbr_data[i] = 0;
  }
  emxInit_real_T(&unitout, 1);
  i = unitout->size[0];
  unitout->size[0] = b_Y->size[0];
  emxEnsureCapacity_real_T(unitout, i);
  unitout_data = unitout->data;
  loop_ub = b_Y->size[0];
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
  bsbrini->size[0] = b_Y->size[0];
  emxEnsureCapacity_uint32_T(bsbrini, i);
  bsbrini_data = bsbrini->data;
  loop_ub = b_Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbrini_data[i] = 0U;
  }
  ini0 = b_bsb->size[0];
  /*  check init */
  init1 = init;
  if (init < (double)b_Y->size[1] + 1.0) {
    Rprintf("%s\n",
           "Attention : init1 should be larger than v. \nIt is set to v+1.");
    //fflush(stdout);
    init1 = (double)b_Y->size[1] + 1.0;
  } else if (init < b_bsb->size[0]) {
    init1 = b_bsb->size[0];
  } else if (init >= b_Y->size[0]) {
    Rprintf("%s\n",
           "Attention : init1 should be smaller than n. \nIt is set to n-1.");
    //fflush(stdout);
    init1 = (double)b_Y->size[0] - 1.0;
  }
  /*  Matrix BB will contain the units forming subset in each step (or in */
  /*  selected steps) of the forward search. The first column contains */
  /*  information about units forming subset at step init1. */
  emxInit_int32_T(&unit, 1);
  emxInit_real_T(&b_bsbsteps, 1);
  if ((bsbsteps->size[0] == 0) || (bsbsteps->size[1] == 0)) {
    /*  Default for vector bsbsteps which indicates for which steps of the fwd
     */
    /*  search units forming subset have to be saved */
    if (b_Y->size[0] <= 5000) {
      if (rtIsNaN(init1)) {
        i = ym->size[0] * ym->size[1];
        ym->size[0] = 1;
        ym->size[1] = 1;
        emxEnsureCapacity_real_T(ym, i);
        ym_data = ym->data;
        ym_data[0] = rtNaN;
      } else if (b_Y->size[0] < init1) {
        ym->size[0] = 1;
        ym->size[1] = 0;
      } else if (rtIsInf(init1) && (init1 == b_Y->size[0])) {
        i = ym->size[0] * ym->size[1];
        ym->size[0] = 1;
        ym->size[1] = 1;
        emxEnsureCapacity_real_T(ym, i);
        ym_data = ym->data;
        ym_data[0] = rtNaN;
      } else if (floor(init1) == init1) {
        i = ym->size[0] * ym->size[1];
        ym->size[0] = 1;
        ym->size[1] = (int)((double)b_Y->size[0] - init1) + 1;
        emxEnsureCapacity_real_T(ym, i);
        ym_data = ym->data;
        loop_ub = (int)((double)b_Y->size[0] - init1);
        for (i = 0; i <= loop_ub; i++) {
          ym_data[i] = init1 + (double)i;
        }
      } else {
        eml_float_colon(init1, b_Y->size[0], ym);
        ym_data = ym->data;
      }
      i = b_bsbsteps->size[0];
      b_bsbsteps->size[0] = ym->size[1];
      emxEnsureCapacity_real_T(b_bsbsteps, i);
      b_bsbsteps_data = b_bsbsteps->data;
      loop_ub = ym->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_bsbsteps_data[i] = ym_data[i];
      }
    } else {
      emxInit_real_T(&y, 2);
      MD_data = y->data;
      ksor = (init1 + 100.0) - b_mod(init1);
      irank = 100 * (int)floor((double)b_Y->size[0] / 100.0);
      if (rtIsNaN(ksor)) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(y, i);
        MD_data = y->data;
        MD_data[0] = rtNaN;
      } else if (irank < ksor) {
        y->size[0] = 1;
        y->size[1] = 0;
      } else if (rtIsInf(ksor) && (ksor == irank)) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(y, i);
        MD_data = y->data;
        MD_data[0] = rtNaN;
      } else if (floor(ksor) == ksor) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        loop_ub = (int)floor(((double)irank - ksor) / 100.0);
        y->size[1] = loop_ub + 1;
        emxEnsureCapacity_real_T(y, i);
        MD_data = y->data;
        for (i = 0; i <= loop_ub; i++) {
          MD_data[i] = ksor + 100.0 * (double)i;
        }
      } else {
        b_eml_float_colon(ksor, irank, y);
        MD_data = y->data;
      }
      i = b_bsbsteps->size[0];
      b_bsbsteps->size[0] = y->size[1] + 1;
      emxEnsureCapacity_real_T(b_bsbsteps, i);
      b_bsbsteps_data = b_bsbsteps->data;
      b_bsbsteps_data[0] = init1;
      loop_ub = y->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_bsbsteps_data[i + 1] = MD_data[i];
      }
      emxFree_real_T(&y);
    }
    i = BB->size[0] * BB->size[1];
    BB->size[0] = b_Y->size[0];
    BB->size[1] = b_bsbsteps->size[0];
    emxEnsureCapacity_real_T(BB, i);
    BB_data = BB->data;
    loop_ub = b_Y->size[0] * b_bsbsteps->size[0];
    for (i = 0; i < loop_ub; i++) {
      BB_data[i] = rtNaN;
    }
  } else {
    emxInit_boolean_T(&c_bsbsteps, 2);
    i = c_bsbsteps->size[0] * c_bsbsteps->size[1];
    c_bsbsteps->size[0] = bsbsteps->size[0];
    c_bsbsteps->size[1] = 1;
    emxEnsureCapacity_boolean_T(c_bsbsteps, i);
    unitoutT_data = c_bsbsteps->data;
    loop_ub = bsbsteps->size[0];
    for (i = 0; i < loop_ub; i++) {
      unitoutT_data[i] = (bsbsteps_data[i] == 0.0);
    }
    if (b_ifWhileCond(c_bsbsteps)) {
      if (rtIsNaN(init1)) {
        i = ym->size[0] * ym->size[1];
        ym->size[0] = 1;
        ym->size[1] = 1;
        emxEnsureCapacity_real_T(ym, i);
        ym_data = ym->data;
        ym_data[0] = rtNaN;
      } else if (b_Y->size[0] < init1) {
        ym->size[0] = 1;
        ym->size[1] = 0;
      } else if (rtIsInf(init1) && (init1 == b_Y->size[0])) {
        i = ym->size[0] * ym->size[1];
        ym->size[0] = 1;
        ym->size[1] = 1;
        emxEnsureCapacity_real_T(ym, i);
        ym_data = ym->data;
        ym_data[0] = rtNaN;
      } else if (floor(init1) == init1) {
        i = ym->size[0] * ym->size[1];
        ym->size[0] = 1;
        ym->size[1] = (int)((double)b_Y->size[0] - init1) + 1;
        emxEnsureCapacity_real_T(ym, i);
        ym_data = ym->data;
        loop_ub = (int)((double)b_Y->size[0] - init1);
        for (i = 0; i <= loop_ub; i++) {
          ym_data[i] = init1 + (double)i;
        }
      } else {
        eml_float_colon(init1, b_Y->size[0], ym);
        ym_data = ym->data;
      }
      i = b_bsbsteps->size[0];
      b_bsbsteps->size[0] = ym->size[1];
      emxEnsureCapacity_real_T(b_bsbsteps, i);
      b_bsbsteps_data = b_bsbsteps->data;
      loop_ub = ym->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_bsbsteps_data[i] = ym_data[i];
      }
      i = BB->size[0] * BB->size[1];
      BB->size[0] = b_Y->size[0];
      BB->size[1] = (int)(((double)b_Y->size[0] - init1) + 1.0);
      emxEnsureCapacity_real_T(BB, i);
      BB_data = BB->data;
      loop_ub = b_Y->size[0] * (int)(((double)b_Y->size[0] - init1) + 1.0);
      for (i = 0; i < loop_ub; i++) {
        BB_data[i] = rtNaN;
      }
    } else {
      end = bsbsteps->size[0] - 1;
      trueCount = 0;
      for (b_i = 0; b_i <= end; b_i++) {
        if (bsbsteps_data[b_i] >= init1) {
          trueCount++;
        }
      }
      i = unit->size[0];
      unit->size[0] = trueCount;
      emxEnsureCapacity_int32_T(unit, i);
      unit_data = unit->data;
      partialTrueCount = 0;
      for (b_i = 0; b_i <= end; b_i++) {
        if (bsbsteps_data[b_i] >= init1) {
          unit_data[partialTrueCount] = b_i + 1;
          partialTrueCount++;
        }
      }
      i = b_bsbsteps->size[0];
      b_bsbsteps->size[0] = unit->size[0];
      emxEnsureCapacity_real_T(b_bsbsteps, i);
      b_bsbsteps_data = b_bsbsteps->data;
      loop_ub = unit->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_bsbsteps_data[i] = bsbsteps_data[unit_data[i] - 1];
      }
      i = BB->size[0] * BB->size[1];
      BB->size[0] = b_Y->size[0];
      BB->size[1] = unit->size[0];
      emxEnsureCapacity_real_T(BB, i);
      BB_data = BB->data;
      loop_ub = b_Y->size[0] * unit->size[0];
      for (i = 0; i < loop_ub; i++) {
        BB_data[i] = rtNaN;
      }
    }
    emxFree_boolean_T(&c_bsbsteps);
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
  } else if (b_Y->size[0] < init1 + 1.0) {
    ym->size[0] = 1;
    ym->size[1] = 0;
  } else if (rtIsInf(init1 + 1.0) && (init1 + 1.0 == b_Y->size[0])) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = 1;
    emxEnsureCapacity_real_T(ym, i);
    ym_data = ym->data;
    ym_data[0] = rtNaN;
  } else if (floor(init1 + 1.0) == init1 + 1.0) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = (int)floor((double)b_Y->size[0] - (init1 + 1.0)) + 1;
    emxEnsureCapacity_real_T(ym, i);
    ym_data = ym->data;
    loop_ub = (int)floor((double)b_Y->size[0] - (init1 + 1.0));
    for (i = 0; i <= loop_ub; i++) {
      ym_data[i] = (init1 + 1.0) + (double)i;
    }
  } else {
    eml_float_colon(init1 + 1.0, b_Y->size[0], ym);
    ym_data = ym->data;
  }
  emxInit_real_T(&Szi, 1);
  irank = (int)((double)b_Y->size[0] - init1);
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
  MD_data = r3->data;
  loop_ub = irank * 10;
  for (i = 0; i < loop_ub; i++) {
    MD_data[i] = rtNaN;
  }
  emxInit_real_T(&r4, 2);
  cat(Szi, r3, r4);
  MD_data = r4->data;
  i = Un->size[0] * Un->size[1];
  Un->size[0] = r4->size[0];
  Un->size[1] = 11;
  emxEnsureCapacity_real_T(Un, i);
  Un_data = Un->data;
  loop_ub = r4->size[0] * 11;
  emxFree_real_T(&r3);
  for (i = 0; i < loop_ub; i++) {
    Un_data[i] = MD_data[i];
  }
  emxFree_real_T(&r4);
  /*   mmd has two columns */
  /*   1st col = dimension of the subset */
  /*   2nd col min. Mahalanobis distances among the units */
  /*   which do not belong to the subset */
  if (rtIsNaN(init1)) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = 1;
    emxEnsureCapacity_real_T(ym, i);
    ym_data = ym->data;
    ym_data[0] = rtNaN;
  } else if ((double)b_Y->size[0] - 1.0 < init1) {
    ym->size[0] = 1;
    ym->size[1] = 0;
  } else if (rtIsInf(init1) && (init1 == (double)b_Y->size[0] - 1.0)) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = 1;
    emxEnsureCapacity_real_T(ym, i);
    ym_data = ym->data;
    ym_data[0] = rtNaN;
  } else if (floor(init1) == init1) {
    i = ym->size[0] * ym->size[1];
    ym->size[0] = 1;
    ym->size[1] = (int)(((double)b_Y->size[0] - 1.0) - init1) + 1;
    emxEnsureCapacity_real_T(ym, i);
    ym_data = ym->data;
    loop_ub = (int)(((double)b_Y->size[0] - 1.0) - init1);
    for (i = 0; i <= loop_ub; i++) {
      ym_data[i] = init1 + (double)i;
    }
  } else {
    eml_float_colon(init1, (double)b_Y->size[0] - 1.0, ym);
    ym_data = ym->data;
  }
  i = Szi->size[0];
  Szi->size[0] = (int)((double)b_Y->size[0] - init1);
  emxEnsureCapacity_real_T(Szi, i);
  Szi_data = Szi->data;
  loop_ub = (int)((double)b_Y->size[0] - init1);
  for (i = 0; i < loop_ub; i++) {
    Szi_data[i] = 0.0;
  }
  i = mmd->size[0] * mmd->size[1];
  mmd->size[0] = ym->size[1];
  mmd->size[1] = 2;
  emxEnsureCapacity_real_T(mmd, i);
  mmd_data = mmd->data;
  loop_ub = ym->size[1];
  for (i = 0; i < loop_ub; i++) {
    mmd_data[i] = ym_data[i];
  }
  loop_ub = Szi->size[0];
  for (i = 0; i < loop_ub; i++) {
    mmd_data[i + mmd->size[0]] = 0.0;
  }
  /*  unit is the vector which will contain the units which enter subset at each
   */
  /*  step. It is initialized as a vector of zeros */
  i = unit->size[0];
  unit->size[0] = b_bsb->size[0];
  emxEnsureCapacity_int32_T(unit, i);
  unit_data = unit->data;
  loop_ub = b_bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    unit_data[i] = 0;
  }
  lunit = b_bsb->size[0];
  /*  If the subset Y(bsb,:) is not full rank or a column is constant, then we
   */
  /*  return as output an empty structure. */
  loop_ub = b_Y->size[1];
  i = Yb->size[0] * Yb->size[1];
  Yb->size[0] = b_bsb->size[0];
  Yb->size[1] = b_Y->size[1];
  emxEnsureCapacity_real_T(Yb, i);
  S_data = Yb->data;
  for (i = 0; i < loop_ub; i++) {
    end = b_bsb->size[0];
    for (partialTrueCount = 0; partialTrueCount < end; partialTrueCount++) {
      S_data[partialTrueCount + Yb->size[0] * i] =
          b_Y_data[((int)b_bsb_data[partialTrueCount] + b_Y->size[0] * i) - 1];
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
    loop_ub = b_Y->size[1];
    i = Yb->size[0] * Yb->size[1];
    Yb->size[0] = b_bsb->size[0];
    Yb->size[1] = b_Y->size[1];
    emxEnsureCapacity_real_T(Yb, i);
    S_data = Yb->data;
    for (i = 0; i < loop_ub; i++) {
      end = b_bsb->size[0];
      for (partialTrueCount = 0; partialTrueCount < end; partialTrueCount++) {
        S_data[partialTrueCount + Yb->size[0] * i] =
            b_Y_data[((int)b_bsb_data[partialTrueCount] + b_Y->size[0] * i) -
                     1];
      }
    }
    maximum(Yb, ym);
    ym_data = ym->data;
    loop_ub = b_Y->size[1];
    i = Yb->size[0] * Yb->size[1];
    Yb->size[0] = b_bsb->size[0];
    Yb->size[1] = b_Y->size[1];
    emxEnsureCapacity_real_T(Yb, i);
    S_data = Yb->data;
    for (i = 0; i < loop_ub; i++) {
      end = b_bsb->size[0];
      for (partialTrueCount = 0; partialTrueCount < end; partialTrueCount++) {
        S_data[partialTrueCount + Yb->size[0] * i] =
            b_Y_data[((int)b_bsb_data[partialTrueCount] + b_Y->size[0] * i) -
                     1];
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
          loop_ub = b_Y->size[1];
          i = Yb->size[0] * Yb->size[1];
          Yb->size[0] = b_bsb->size[0];
          Yb->size[1] = b_Y->size[1];
          emxEnsureCapacity_real_T(Yb, i);
          S_data = Yb->data;
          for (i = 0; i < loop_ub; i++) {
            end = b_bsb->size[0];
            for (partialTrueCount = 0; partialTrueCount < end;
                 partialTrueCount++) {
              S_data[partialTrueCount + Yb->size[0] * i] = b_Y_data
                  [((int)b_bsb_data[partialTrueCount] + b_Y->size[0] * i) - 1];
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
          loop_ub = b_Y->size[1];
          i = Yb->size[0] * Yb->size[1];
          Yb->size[0] = r5->size[0];
          Yb->size[1] = b_Y->size[1];
          emxEnsureCapacity_real_T(Yb, i);
          S_data = Yb->data;
          for (i = 0; i < loop_ub; i++) {
            end = r5->size[0];
            for (partialTrueCount = 0; partialTrueCount < end;
                 partialTrueCount++) {
              S_data[partialTrueCount + Yb->size[0] * i] =
                  b_Y_data[(r2[partialTrueCount] + b_Y->size[0] * i) - 1];
            }
          }
        }
        /*  If required, store units forming subset at each step */
        if (b_mm >= init1) {
          i = MD->size[0];
          MD->size[0] = b_bsbsteps->size[0];
          emxEnsureCapacity_real_T(MD, i);
          MD_data = MD->data;
          loop_ub = b_bsbsteps->size[0];
          for (i = 0; i < loop_ub; i++) {
            MD_data[i] = b_mm - b_bsbsteps_data[i];
          }
          irank = MD->size[0];
          i = Szi->size[0];
          Szi->size[0] = MD->size[0];
          emxEnsureCapacity_real_T(Szi, i);
          Szi_data = Szi->data;
          for (end = 0; end < irank; end++) {
            Szi_data[end] = fabs(MD_data[end]);
          }
          if (b_minimum(Szi) == 0.0) {
            /*  intersect(mm,bsbsteps)==mm */
            if (b_mm <= percn) {
              loop_ub = b_bsb->size[0];
              for (i = 0; i < loop_ub; i++) {
                BB_data[((int)b_bsb_data[i] + BB->size[0] * ((int)ij - 1)) -
                        1] = b_bsb_data[i];
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
        bsxfun(b_Y, ym, Ym);
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
            loop_ub = b_Y->size[1];
            i = Yb->size[0] * Yb->size[1];
            Yb->size[0] = unitout->size[0];
            Yb->size[1] = b_Y->size[1];
            emxEnsureCapacity_real_T(Yb, i);
            S_data = Yb->data;
            for (i = 0; i < loop_ub; i++) {
              end = unitout->size[0];
              for (partialTrueCount = 0; partialTrueCount < end;
                   partialTrueCount++) {
                S_data[partialTrueCount + Yb->size[0] * i] =
                    b_Y_data[((int)unitout_data[partialTrueCount] +
                              b_Y->size[0] * i) -
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
              loop_ub = b_Y->size[1];
              i = Yb->size[0] * Yb->size[1];
              Yb->size[0] = r10->size[0];
              Yb->size[1] = b_Y->size[1];
              emxEnsureCapacity_real_T(Yb, i);
              S_data = Yb->data;
              for (i = 0; i < loop_ub; i++) {
                end = r10->size[0];
                for (partialTrueCount = 0; partialTrueCount < end;
                     partialTrueCount++) {
                  S_data[partialTrueCount + Yb->size[0] * i] =
                      b_Y_data[(r2[partialTrueCount] + b_Y->size[0] * i) - 1];
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
              loop_ub = b_Y->size[1];
              i = Yb->size[0] * Yb->size[1];
              Yb->size[0] = bsbr->size[0];
              Yb->size[1] = b_Y->size[1];
              emxEnsureCapacity_real_T(Yb, i);
              S_data = Yb->data;
              for (i = 0; i < loop_ub; i++) {
                end = bsbr->size[0];
                for (partialTrueCount = 0; partialTrueCount < end;
                     partialTrueCount++) {
                  S_data[partialTrueCount + Yb->size[0] * i] = b_Y_data
                      [(bsbr_data[partialTrueCount] + b_Y->size[0] * i) - 1];
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
              MD_data = zi->data;
              loop_ub = mi->size[1];
              for (i = 0; i < loop_ub; i++) {
                MD_data[i] = ksor * (mi_data[i] - mibsbr_data[i]);
              }
            } else {
              s_binary_expand_op(zi, ksor, mi, mibsbr);
              MD_data = zi->data;
            }
            mtimes(S, zi, Szi);
            Szi_data = Szi->data;
            /*  S=S+(S*(zi')*zi*S)/(1-zi*S*(zi')); */
            ksor = 0.0;
            loop_ub = zi->size[1];
            for (i = 0; i < loop_ub; i++) {
              ksor += MD_data[i] * Szi_data[i];
            }
            i = r->size[0] * r->size[1];
            r->size[0] = Szi->size[0];
            r->size[1] = Szi->size[0];
            emxEnsureCapacity_real_T(r, i);
            MD_data = r->data;
            loop_ub = Szi->size[0];
            i = Yb->size[0] * Yb->size[1];
            Yb->size[0] = Szi->size[0];
            Yb->size[1] = Szi->size[0];
            emxEnsureCapacity_real_T(Yb, i);
            S_data = Yb->data;
            for (i = 0; i < loop_ub; i++) {
              end = Szi->size[0];
              for (partialTrueCount = 0; partialTrueCount < end;
                   partialTrueCount++) {
                d = Szi_data[partialTrueCount] * Szi_data[i];
                MD_data[partialTrueCount + r->size[0] * i] = d;
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
                end = Szi->size[0];
                for (partialTrueCount = 0; partialTrueCount < end;
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
                loop_ub = b_Y->size[1];
                if (b_Y->size[1] == mi->size[1]) {
                  partialTrueCount = zi->size[0] * zi->size[1];
                  zi->size[0] = 1;
                  zi->size[1] = b_Y->size[1];
                  emxEnsureCapacity_real_T(zi, partialTrueCount);
                  MD_data = zi->data;
                  for (partialTrueCount = 0; partialTrueCount < loop_ub;
                       partialTrueCount++) {
                    MD_data[partialTrueCount] =
                        b_Y_data[((int)unitout_data[b_i] +
                                  b_Y->size[0] * partialTrueCount) -
                                 1] -
                        mi_data[partialTrueCount];
                  }
                } else {
                  o_binary_expand_op(zi, b_Y, unitout, b_i, mi);
                  MD_data = zi->data;
                }
                mtimes(S, zi, Szi);
                Szi_data = Szi->data;
                /*  S=S+(S*(zi')*zi*S)/(1-zi*S*(zi')); */
                ksor = 0.0;
                loop_ub = zi->size[1];
                for (partialTrueCount = 0; partialTrueCount < loop_ub;
                     partialTrueCount++) {
                  ksor +=
                      MD_data[partialTrueCount] * Szi_data[partialTrueCount];
                }
                partialTrueCount = r->size[0] * r->size[1];
                r->size[0] = Szi->size[0];
                r->size[1] = Szi->size[0];
                emxEnsureCapacity_real_T(r, partialTrueCount);
                MD_data = r->data;
                loop_ub = Szi->size[0];
                partialTrueCount = Yb->size[0] * Yb->size[1];
                Yb->size[0] = Szi->size[0];
                Yb->size[1] = Szi->size[0];
                emxEnsureCapacity_real_T(Yb, partialTrueCount);
                S_data = Yb->data;
                for (partialTrueCount = 0; partialTrueCount < loop_ub;
                     partialTrueCount++) {
                  end = Szi->size[0];
                  for (nwhile = 0; nwhile < end; nwhile++) {
                    d = Szi_data[nwhile] * Szi_data[partialTrueCount];
                    MD_data[nwhile + r->size[0] * partialTrueCount] = d;
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
                    end = Szi->size[0];
                    for (nwhile = 0; nwhile < end; nwhile++) {
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
          loop_ub = b_Y->size[1];
          i = Yb->size[0] * Yb->size[1];
          Yb->size[0] = unit->size[0];
          Yb->size[1] = b_Y->size[1];
          emxEnsureCapacity_real_T(Yb, i);
          S_data = Yb->data;
          for (i = 0; i < loop_ub; i++) {
            end = unit->size[0];
            for (partialTrueCount = 0; partialTrueCount < end;
                 partialTrueCount++) {
              S_data[partialTrueCount + Yb->size[0] * i] =
                  b_Y_data[(unit_data[partialTrueCount] + b_Y->size[0] * i) -
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
            MD_data = zi->data;
            loop_ub = mi->size[1];
            for (i = 0; i < loop_ub; i++) {
              MD_data[i] = ksor * (mi_data[i] - mibsbr_data[i]);
            }
          } else {
            s_binary_expand_op(zi, ksor, mi, mibsbr);
            MD_data = zi->data;
          }
          mtimes(S, zi, Szi);
          Szi_data = Szi->data;
          /*  S=S+(S*(zi')*zi*S)/(1-zi*S*(zi')); */
          ksor = 0.0;
          loop_ub = zi->size[1];
          for (i = 0; i < loop_ub; i++) {
            ksor += MD_data[i] * Szi_data[i];
          }
          i = r->size[0] * r->size[1];
          r->size[0] = Szi->size[0];
          r->size[1] = Szi->size[0];
          emxEnsureCapacity_real_T(r, i);
          MD_data = r->data;
          loop_ub = Szi->size[0];
          i = Yb->size[0] * Yb->size[1];
          Yb->size[0] = Szi->size[0];
          Yb->size[1] = Szi->size[0];
          emxEnsureCapacity_real_T(Yb, i);
          S_data = Yb->data;
          for (i = 0; i < loop_ub; i++) {
            end = Szi->size[0];
            for (partialTrueCount = 0; partialTrueCount < end;
                 partialTrueCount++) {
              d = Szi_data[partialTrueCount] * Szi_data[i];
              MD_data[partialTrueCount + r->size[0] * i] = d;
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
              end = Szi->size[0];
              for (partialTrueCount = 0; partialTrueCount < end;
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
              loop_ub = b_Y->size[1];
              if (b_Y->size[1] == mi->size[1]) {
                i = zi->size[0] * zi->size[1];
                zi->size[0] = 1;
                zi->size[1] = b_Y->size[1];
                emxEnsureCapacity_real_T(zi, i);
                MD_data = zi->data;
                for (i = 0; i < loop_ub; i++) {
                  MD_data[i] =
                      b_Y_data[(unit_data[b_i] + b_Y->size[0] * i) - 1] -
                      mi_data[i];
                }
              } else {
                q_binary_expand_op(zi, b_Y, unit, b_i, mi);
                MD_data = zi->data;
              }
              mtimes(S, zi, Szi);
              Szi_data = Szi->data;
              /*  S=S-(S*(zi')*zi*S)/(1+zi*S*(zi')); */
              ksor = 0.0;
              loop_ub = zi->size[1];
              for (i = 0; i < loop_ub; i++) {
                ksor += MD_data[i] * Szi_data[i];
              }
              i = r->size[0] * r->size[1];
              r->size[0] = Szi->size[0];
              r->size[1] = Szi->size[0];
              emxEnsureCapacity_real_T(r, i);
              MD_data = r->data;
              loop_ub = Szi->size[0];
              i = Yb->size[0] * Yb->size[1];
              Yb->size[0] = Szi->size[0];
              Yb->size[1] = Szi->size[0];
              emxEnsureCapacity_real_T(Yb, i);
              S_data = Yb->data;
              for (i = 0; i < loop_ub; i++) {
                end = Szi->size[0];
                for (partialTrueCount = 0; partialTrueCount < end;
                     partialTrueCount++) {
                  d = Szi_data[partialTrueCount] * Szi_data[i];
                  MD_data[partialTrueCount + r->size[0] * i] = d;
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
                  end = Szi->size[0];
                  for (partialTrueCount = 0; partialTrueCount < end;
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
            MD_data = r->data;
            if ((r->size[0] == Ym->size[0]) && (r->size[1] == Ym->size[1])) {
              i = Yb->size[0] * Yb->size[1];
              Yb->size[0] = r->size[0];
              Yb->size[1] = r->size[1];
              emxEnsureCapacity_real_T(Yb, i);
              S_data = Yb->data;
              loop_ub = r->size[0] * r->size[1];
              for (i = 0; i < loop_ub; i++) {
                S_data[i] = MD_data[i] * Ym_data[i];
              }
              sum(Yb, MD);
              MD_data = MD->data;
            } else {
              binary_expand_op(MD, r, Ym);
              MD_data = MD->data;
            }
            loop_ub = MD->size[0];
            for (i = 0; i < loop_ub; i++) {
              MD_data[i] *= b_mm - 1.0;
            }
          } else {
            b_mtimes(Ym, S, r);
            b_bsxfun(r, Ym, Yb);
            sum(Yb, MD);
            MD_data = MD->data;
            loop_ub = MD->size[0];
            for (i = 0; i < loop_ub; i++) {
              MD_data[i] *= b_mm - 1.0;
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
            MD_data = b_Ym->data;
            i = Yb->size[0] * Yb->size[1];
            Yb->size[0] = r8->size[0];
            Yb->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(Yb, i);
            S_data = Yb->data;
            for (i = 0; i < loop_ub; i++) {
              end = r7->size[0];
              for (partialTrueCount = 0; partialTrueCount < end;
                   partialTrueCount++) {
                MD_data[partialTrueCount + b_Ym->size[0] * i] =
                    Ym_data[(r2[partialTrueCount] + Ym->size[0] * i) - 1];
              }
              end = r8->size[0];
              for (partialTrueCount = 0; partialTrueCount < end;
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
            MD_data = b_Ym->data;
            for (i = 0; i < loop_ub; i++) {
              end = r9->size[0];
              for (partialTrueCount = 0; partialTrueCount < end;
                   partialTrueCount++) {
                MD_data[partialTrueCount + b_Ym->size[0] * i] =
                    Ym_data[(r2[partialTrueCount] + Ym->size[0] * i) - 1];
              }
            }
            qr(b_Ym, Yb, R);
          } else {
            loop_ub = Ym->size[1];
            i = b_Ym->size[0] * b_Ym->size[1];
            b_Ym->size[0] = b_bsb->size[0];
            b_Ym->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(b_Ym, i);
            MD_data = b_Ym->data;
            i = Yb->size[0] * Yb->size[1];
            Yb->size[0] = b_bsb->size[0];
            Yb->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(Yb, i);
            S_data = Yb->data;
            for (i = 0; i < loop_ub; i++) {
              end = b_bsb->size[0];
              for (partialTrueCount = 0; partialTrueCount < end;
                   partialTrueCount++) {
                MD_data[partialTrueCount + b_Ym->size[0] * i] = Ym_data
                    [((int)b_bsb_data[partialTrueCount] + Ym->size[0] * i) - 1];
              }
              end = b_bsb->size[0];
              for (partialTrueCount = 0; partialTrueCount < end;
                   partialTrueCount++) {
                S_data[partialTrueCount + Yb->size[0] * i] = Ym_data
                    [((int)b_bsb_data[partialTrueCount] + Ym->size[0] * i) - 1];
              }
            }
            c_mtimes(b_Ym, Yb, r);
            inv(r, S);
            S_data = S->data;
            loop_ub = Ym->size[1];
            i = b_Ym->size[0] * b_Ym->size[1];
            b_Ym->size[0] = b_bsb->size[0];
            b_Ym->size[1] = Ym->size[1];
            emxEnsureCapacity_real_T(b_Ym, i);
            MD_data = b_Ym->data;
            for (i = 0; i < loop_ub; i++) {
              end = b_bsb->size[0];
              for (partialTrueCount = 0; partialTrueCount < end;
                   partialTrueCount++) {
                MD_data[partialTrueCount + b_Ym->size[0] * i] = Ym_data
                    [((int)b_bsb_data[partialTrueCount] + Ym->size[0] * i) - 1];
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
            for (end = 2; end <= irank; end++) {
              nwhile += unitoutT_data[end - 1];
            }
          }
          if (nwhile > 0) {
            i = mmd->size[0] * mmd->size[1];
            mmd->size[0] = 1;
            mmd->size[1] = 1;
            emxEnsureCapacity_real_T(mmd, i);
            mmd_data = mmd->data;
            mmd_data[0] = rtNaN;
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
            MD_data = r->data;
            loop_ub = r->size[0] * r->size[1];
            for (i = 0; i < loop_ub; i++) {
              ksor = MD_data[i];
              MD_data[i] = ksor * ksor;
            }
            sum(r, MD);
            MD_data = MD->data;
            loop_ub = MD->size[0];
            for (i = 0; i < loop_ub; i++) {
              MD_data[i] *= b_mm - 1.0;
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
              Szi_data[i] = MD_data[i];
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
              r1->size[0] = b_bsb->size[0];
              emxEnsureCapacity_int32_T(r1, i);
              r2 = r1->data;
              loop_ub = b_bsb->size[0];
              for (i = 0; i < loop_ub; i++) {
                r2[i] = (int)b_bsb_data[i];
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
            d_minimum(Szi, &minMD, &lunit);
            /*  MDltminT = n x 1 Boolean vector which is true if corresponding
             * MD is */
            /*  smaller or equal minMD */
            i = unitoutT->size[0];
            unitoutT->size[0] = MD->size[0];
            emxEnsureCapacity_boolean_T(unitoutT, i);
            unitoutT_data = unitoutT->data;
            loop_ub = MD->size[0];
            for (i = 0; i < loop_ub; i++) {
              unitoutT_data[i] = (MD_data[i] <= minMD);
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
              MDltminbsb->size[0] = b_bsb->size[0];
              emxEnsureCapacity_boolean_T(MDltminbsb, i);
              MDltminbsb_data = MDltminbsb->data;
              loop_ub = b_bsb->size[0];
              for (i = 0; i < loop_ub; i++) {
                MDltminbsb_data[i] = unitoutT_data[(int)b_bsb_data[i] - 1];
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
              for (end = 2; end <= irank; end++) {
                nwhile += MDltminbsb_data[end - 1];
              }
            }
            rankgap = (b_mm + 1.0) - (double)nwhile;
            if (rankgap == 1.0) {
              /*  Just one new unit entered subset */
              i = unit->size[0];
              unit->size[0] = 1;
              emxEnsureCapacity_int32_T(unit, i);
              unit_data = unit->data;
              unit_data[0] = lunit;
              /*  Compute new bsbT and new bsb */
              if (b_mm <= percn) {
                /*  new bsb is equal to oldbsb plus unit which just entered */
                i = b_bsb->size[0];
                partialTrueCount = b_bsb->size[0];
                b_bsb->size[0]++;
                emxEnsureCapacity_real_T(b_bsb, partialTrueCount);
                b_bsb_data = b_bsb->data;
                b_bsb_data[i] = lunit;
              }
              /*  bsbT is equal to old bsbT after adding a single true in */
              /*  correspondence of the unit which entered subset */
              bsbT_data[lunit - 1] = true;
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
                Szi_data[i] = MD_data[i];
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
                end = b_bsb->size[0] - 1;
                trueCount = 0;
                for (b_i = 0; b_i <= end; b_i++) {
                  if (unitoutT_data[(int)b_bsb_data[b_i] - 1]) {
                    trueCount++;
                  }
                }
                i = bsbrini->size[0];
                bsbrini->size[0] = trueCount;
                emxEnsureCapacity_uint32_T(bsbrini, i);
                bsbrini_data = bsbrini->data;
                partialTrueCount = 0;
                for (b_i = 0; b_i <= end; b_i++) {
                  if (unitoutT_data[(int)b_bsb_data[b_i] - 1]) {
                    bsbrini_data[partialTrueCount] =
                        (unsigned int)b_bsb_data[b_i];
                    partialTrueCount++;
                  }
                }
                /*  unitout = list of the units which potentially left */
                /*  subset. We say potentially because there are still k */
                /*  units to be included */
                /*  unitout=bsb(~bsbini); */
                end = b_bsb->size[0] - 1;
                trueCount = 0;
                for (b_i = 0; b_i <= end; b_i++) {
                  if (!unitoutT_data[(int)b_bsb_data[b_i] - 1]) {
                    trueCount++;
                  }
                }
                i = unitout->size[0];
                unitout->size[0] = trueCount;
                emxEnsureCapacity_real_T(unitout, i);
                unitout_data = unitout->data;
                partialTrueCount = 0;
                for (b_i = 0; b_i <= end; b_i++) {
                  if (!unitoutT_data[(int)b_bsb_data[b_i] - 1]) {
                    unitout_data[partialTrueCount] = b_bsb_data[b_i];
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
                d_minimum(Szi, &ksor, &lunit);
                /*  minMDindex = index of the unit which is about to */
                /*  enter subset. We check whether unit minMDindex */
                /*  belonged or not to previous subset If unit minMDindex */
                /*  belonged to previous subset than a true is added into */
                /*  vector bsbriniT and the unit is included in vector */
                /*  bsbradd If unit minMDindex did not belong to previous */
                /*  subset, than minMDindex is included in vector unitadd */
                if (bsbT_data[lunit - 1]) {
                  if (b_mm <= percn) {
                    bsbradd[nwhile] = lunit;
                    nwhile++;
                    /*  Delete from vector unitout (containing the */
                    /*  list of the units which went out of the */
                    /*  subset) element minMDindex */
                    end = unitout->size[0] - 1;
                    trueCount = 0;
                    for (b_i = 0; b_i <= end; b_i++) {
                      if ((int)unitout_data[b_i] != lunit) {
                        trueCount++;
                      }
                    }
                    partialTrueCount = 0;
                    for (b_i = 0; b_i <= end; b_i++) {
                      if ((int)unitout_data[b_i] != lunit) {
                        unitout_data[partialTrueCount] = unitout_data[b_i];
                        partialTrueCount++;
                      }
                    }
                    partialTrueCount = unitout->size[0];
                    unitout->size[0] = trueCount;
                    emxEnsureCapacity_real_T(unitout, partialTrueCount);
                    unitout_data = unitout->data;
                  } else {
                    bsbriniT_data[lunit - 1] = true;
                  }
                } else {
                  unitadd[irank] = lunit;
                  irank++;
                }
                /*  disp(posunit(posncl1)) */
                Szi_data[lunit - 1] = rtInf;
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
                  end = 0;
                } else {
                  end = nwhile;
                }
                i = bsbr->size[0];
                bsbr->size[0] = bsbrini->size[0] + end;
                emxEnsureCapacity_int32_T(bsbr, i);
                bsbr_data = bsbr->data;
                irank = bsbrini->size[0];
                for (i = 0; i < irank; i++) {
                  bsbr_data[i] = (int)bsbrini_data[i];
                }
                for (i = 0; i < end; i++) {
                  bsbr_data[i + bsbrini->size[0]] = bsbradd[i];
                }
                i = b_bsb->size[0];
                b_bsb->size[0] = bsbr->size[0] + loop_ub;
                emxEnsureCapacity_real_T(b_bsb, i);
                b_bsb_data = b_bsb->data;
                end = bsbr->size[0];
                for (i = 0; i < end; i++) {
                  b_bsb_data[i] = bsbr_data[i];
                }
                for (i = 0; i < loop_ub; i++) {
                  b_bsb_data[i + bsbr->size[0]] = unitadd[i];
                }
                i = bsbT->size[0];
                bsbT->size[0] = n;
                emxEnsureCapacity_boolean_T(bsbT, i);
                bsbT_data = bsbT->data;
                for (i = 0; i < n; i++) {
                  bsbT_data[i] = false;
                }
                i = r1->size[0];
                r1->size[0] = b_bsb->size[0];
                emxEnsureCapacity_int32_T(r1, i);
                r2 = r1->data;
                loop_ub = b_bsb->size[0];
                for (i = 0; i < loop_ub; i++) {
                  r2[i] = (int)b_bsb_data[i];
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
              /*  Old sorting */
              /*                  [~,MDsor]=sort(MD); */
              /*                  bsb=MDsor(1:mm+1); */
              /*                  bsbT=zeron1; */
              /*                  bsbT(bsb)=true; */
              /*  New sorting based on quickselectFS */
              i = Szi->size[0];
              Szi->size[0] = MD->size[0];
              emxEnsureCapacity_real_T(Szi, i);
              Szi_data = Szi->data;
              loop_ub = MD->size[0] - 1;
              for (i = 0; i <= loop_ub; i++) {
                Szi_data[i] = MD_data[i];
              }
              ksor = quickselectFS(Szi, b_mm + 1.0, lunit);
              i = bsbT->size[0];
              bsbT->size[0] = MD->size[0];
              emxEnsureCapacity_boolean_T(bsbT, i);
              bsbT_data = bsbT->data;
              loop_ub = MD->size[0];
              for (i = 0; i < loop_ub; i++) {
                bsbT_data[i] = (MD_data[i] <= ksor);
              }
              irank = bsbT->size[0];
              if (bsbT->size[0] == 0) {
                nwhile = 0;
              } else {
                nwhile = bsbT_data[0];
                for (end = 2; end <= irank; end++) {
                  nwhile += bsbT_data[end - 1];
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
                  i = b_bsb->size[0];
                  b_bsb->size[0] = trueCount;
                  emxEnsureCapacity_real_T(b_bsb, i);
                  b_bsb_data = b_bsb->data;
                  partialTrueCount = 0;
                  for (b_i = 0; b_i <= end; b_i++) {
                    if (bsbT_data[b_i]) {
                      b_bsb_data[partialTrueCount] = seq_data[b_i];
                      partialTrueCount++;
                    }
                  }
                }
              } else {
                end = MD->size[0];
                trueCount = 0;
                for (b_i = 0; b_i < end; b_i++) {
                  if (MD_data[b_i] < ksor) {
                    trueCount++;
                  }
                }
                d = (b_mm + 1.0) - (double)trueCount;
                if (1.0 > d) {
                  loop_ub = 0;
                } else {
                  loop_ub = (int)d;
                }
                end = MD->size[0] - 1;
                trueCount = 0;
                for (b_i = 0; b_i <= end; b_i++) {
                  if (MD_data[b_i] < ksor) {
                    trueCount++;
                  }
                }
                i = r11->size[0];
                r11->size[0] = trueCount;
                emxEnsureCapacity_int32_T(r11, i);
                r2 = r11->data;
                partialTrueCount = 0;
                for (b_i = 0; b_i <= end; b_i++) {
                  if (MD_data[b_i] < ksor) {
                    r2[partialTrueCount] = b_i + 1;
                    partialTrueCount++;
                  }
                }
                end = MD->size[0] - 1;
                trueCount = 0;
                for (b_i = 0; b_i <= end; b_i++) {
                  if (MD_data[b_i] == ksor) {
                    trueCount++;
                  }
                }
                i = r12->size[0];
                r12->size[0] = trueCount;
                emxEnsureCapacity_int32_T(r12, i);
                r13 = r12->data;
                partialTrueCount = 0;
                for (b_i = 0; b_i <= end; b_i++) {
                  if (MD_data[b_i] == ksor) {
                    r13[partialTrueCount] = b_i + 1;
                    partialTrueCount++;
                  }
                }
                i = b_bsb->size[0];
                b_bsb->size[0] = r11->size[0] + loop_ub;
                emxEnsureCapacity_real_T(b_bsb, i);
                b_bsb_data = b_bsb->data;
                end = r11->size[0];
                for (i = 0; i < end; i++) {
                  b_bsb_data[i] = seq_data[r2[i] - 1];
                }
                for (i = 0; i < loop_ub; i++) {
                  b_bsb_data[i + r11->size[0]] = seq_data[r13[i] - 1];
                }
                i = bsbT->size[0];
                bsbT->size[0] = n;
                emxEnsureCapacity_boolean_T(bsbT, i);
                bsbT_data = bsbT->data;
                for (i = 0; i < n; i++) {
                  bsbT_data[i] = false;
                }
                i = r1->size[0];
                r1->size[0] = b_bsb->size[0];
                emxEnsureCapacity_int32_T(r1, i);
                r2 = r1->data;
                loop_ub = b_bsb->size[0];
                for (i = 0; i < loop_ub; i++) {
                  r2[i] = (int)b_bsb_data[i];
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
            if (b_mm >= init1) {
              /*  mmd contains minimum of Mahalanobis distances among */
              /*  the units which are not in the subset at step m */
              mmd_data[((int)((b_mm - init1) + 1.0) + mmd->size[0]) - 1] =
                  sqrt(minMD);
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
                if (msg) {
                  int2str(b_mm, c_mm.data, c_mm.size);
                  int2str(unit->size[0], c_mm.data, c_mm.size);
                }
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
    i = mmd->size[0] * mmd->size[1];
    mmd->size[0] = 1;
    mmd->size[1] = 1;
    emxEnsureCapacity_real_T(mmd, i);
    mmd_data = mmd->data;
    mmd_data[0] = rtNaN;
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
  emxFree_real_T(&b_bsbsteps);
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
  emxFree_real_T(&b_bsb);
  emxFree_real_T(&b_Y);
}

/* End of code generation (FSMmmd_wrapper.c) */
