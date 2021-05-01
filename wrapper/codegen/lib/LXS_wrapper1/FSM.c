/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSM.c
 *
 * Code generation for function 'FSM'
 *
 */

/* Include files */
#include "FSM.h"
#include "FSMbonfbound.h"
#include "FSMbsb.h"
#include "FSMenvmmd.h"
#include "FSMmmd.h"
#include "LXS_wrapper1_emxutil.h"
#include "LXS_wrapper1_internal_types.h"
#include "LXS_wrapper1_types.h"
#include "bsxfun.h"
#include "chkinputM.h"
#include "combineVectorElements.h"
#include "cov.h"
#include "eml_setop.h"
#include "ifWhileCond.h"
#include "int2str.h"
#include "minOrMax.h"
#include "mrdivide_helper.h"
#include "mtimes.h"
#include "rank.h"
#include "rt_nonfinite.h"
#include "sortrows.h"
#include "strcmp.h"
#include "sum.h"
#include "unibiv.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
void FSM(emxArray_real_T *Y, const double varargin_4_data[],
         const int varargin_4_size[2], double varargin_8,
         const char varargin_10_data[], const int varargin_10_size[2],
         double varargin_12, emxArray_real_T *out_outliers,
         emxArray_real_T *out_loc, emxArray_real_T *out_cov,
         emxArray_real_T *out_md, emxArray_real_T *out_mmd,
         emxArray_real_T *out_Un, double out_nout_data[], int out_nout_size[2],
         char out_class_data[], int out_class_size[2])
{
  static const int iv[5] = {1, 99, 999, 9999, 99999};
  emxArray_boolean_T b_varargin_4_data;
  emxArray_boolean_T *r;
  emxArray_boolean_T *x;
  emxArray_char_T_1x310 b_out_mmd;
  emxArray_int32_T *ia;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_int32_T *r3;
  emxArray_int32_T *r4;
  emxArray_int32_T *r6;
  emxArray_real_T d_varargin_4_data;
  emxArray_real_T *Ytilde;
  emxArray_real_T *a__1;
  emxArray_real_T *b_bs;
  emxArray_real_T *b_loc;
  emxArray_real_T *bs;
  emxArray_real_T *fre;
  emxArray_real_T *gbonf;
  emxArray_real_T *gfind;
  emxArray_real_T *gmin;
  emxArray_real_T *gmin1;
  emxArray_real_T *goodobs;
  emxArray_real_T *gval;
  emxArray_real_T *loc;
  emxArray_real_T *outliers;
  emxArray_real_T *r5;
  emxArray_real_T *r7;
  emxArray_real_T *seq;
  emxArray_real_T *y;
  double d;
  double incre;
  double init_contents;
  double tr;
  unsigned int nout_data[10];
  unsigned int uv[10];
  int b_varargin_4_size[2];
  int nout_size[2];
  int b_i;
  int b_loop_ub;
  int b_signal;
  int c001;
  int c99;
  int c999;
  int c9999;
  int c99999;
  int c_i;
  int exitg1;
  int i;
  int i1;
  int i2;
  unsigned int ii;
  int irank;
  int loop_ub;
  int n;
  int nout_size_idx_0;
  int nout_size_idx_1;
  int sto;
  int trueCount;
  unsigned int u;
  int v;
  signed char tmp_data[5];
  bool b_x[31];
  bool b_nout_data[5];
  bool NoFalseSig;
  bool c_varargin_4_data;
  bool exitg2;
  bool exitg3;
  bool guard1 = false;
  emxInit_real_T(&loc, 2);
  /* FSM computes forward search estimator in multivariate analysis */
  /*  */
  /* <a href="matlab: docsearchFS('FSM')">Link to the help function</a> */
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
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*  */
  /*       bonflev  : option that might be used to identify extreme outliers */
  /*                  when the distribution of the data is strongly non normal.
   */
  /*                  Scalar. */
  /*                  In these circumstances, the general signal detection rule
   * based on */
  /*                  consecutive exceedances cannot be used. In this case */
  /*                  bonflev can be: */
  /*                  - a scalar smaller than 1, which specifies the confidence
   */
  /*                    level for a signal and a stopping rule based on the */
  /*                    comparison of the minimum deletion residual with a */
  /*                    Bonferroni bound. For example if bonflev=0.99 the */
  /*                    procedure stops when the trajectory exceeds for the */
  /*                    first time the 99% bonferroni bound. */
  /*                  - A scalar value greater than 1. In this case the */
  /*                    procedure stops when the residual trajectory exceeds */
  /*                    for the first time this value. */
  /*                  Default value is ' ', which means to rely on general rules
   */
  /*                  based on consecutive exceedances. */
  /*                  Example - 'bonflev',0.7 */
  /*                  Data Types - double */
  /*  */
  /*  */
  /*        crit    : It specified the criterion to be used to */
  /*                  initialize the search. Character. */
  /*                  if crit='md' the units which form initial subset are */
  /*                   those which have the smallest m0 pseudo Mahalanobis */
  /*                   distances computed using procedure unibiv (bivariate */
  /*                   robust ellipses). */
  /*                  if crit='biv' sorting is done first in */
  /*                   terms of times units fell outside robust bivariate */
  /*                   ellipses and then in terms of pseudoMD. In other words,
   */
  /*                   the units forming initial subset are chosen first among
   */
  /*                   the set of those which never fell outside robust */
  /*                   bivariate ellipses then among those which fell only once
   */
  /*                   outside bivariate ellipses ... up to reach m0. */
  /*                  if crit='uni' sorting is done first in */
  /*                   terms of times units fell outside univariate boxplots */
  /*                   and then in terms of pseudoMD. In other words, */
  /*                   the units forming initial subset are chosen first among
   */
  /*                   the set of those which never fell outside */
  /*                   univariate boxplots then among those which fell only once
   */
  /*                   outside univariate boxplots... up to reach m0. */
  /*                Example - 'crit','md' */
  /*                Data Types - char */
  /*                  Remark: as the user can see the starting point of the */
  /*                  search is not going to affect at all the results of the */
  /*                  analysis. The user can explore this point with his own */
  /*                  datasets. */
  /*                  Remark: if crit='biv' the user can also supply in scalar
   * rf */
  /*                  (see below) the confidence level of the bivariate */
  /*                  ellipses. */
  /*  */
  /*        init    : Point where to start monitoring required diagnostics.
   * Scalar. */
  /*                  Note that if bsb is suppliedinit>=length(bsb). If init is
   * not */
  /*                  specified it will be set equal to floor(n*0.6). */
  /*                  Example - 'init',50 */
  /*                  Data Types - double */
  /*  */
  /*           m0   : Initial subset size or vector which contains the list of
   */
  /*                  the units forming initial subset. Scalar or vector. */
  /*                  The default is to start the search with v+1 units which */
  /*                  consisting of those observations which are not outlying */
  /*                  on any scatterplot, found as the intersection of all */
  /*                  points lying within a robust contour containing a */
  /*                  specified portion of the data (Riani and Zani 1997) and */
  /*                  inside the univariate boxplot. Remark: if m0 is a vector
   */
  /*                  option below crit is ignored. */
  /*                  Example - 'm0',5 */
  /*                  Data Types - double */
  /*  */
  /*        msg     : It controls whether to display or not messages */
  /*                  on the screen. Boolean. */
  /*                  If msg==1 (default) messages about the progression of the
   */
  /*                  search are displayed on the screen otherwise only error */
  /*                  messages will be displayed. */
  /*                  Example - 'msg',0 */
  /*                  Data Types - logical */
  /*  */
  /*    nocheck     : It controls whether to perform checks on matrix Y.Scalar.
   */
  /*                  If nocheck is equal to 1 no check is performed. */
  /*                  As default nocheck=0. */
  /*                  Example - 'nocheck',1 */
  /*                  Data Types - double */
  /*  */
  /*         rf     : confidence level for bivariate ellipses. Scalar. The
   * default is */
  /*                  0.95. This option is useful only if crit='biv'. */
  /*                  Example - 'rf',0.9 */
  /*                  Data Types - double */
  /*  */
  /*        plots   : plot of minimum Mahalanobis distance. */
  /*                  Scalar or structure. If plots is a missing value or is a
   */
  /*                  scalar equal to 0 no plot is produced. */
  /*                  If plots is a scalar equal to 1 (default) the plot */
  /*                  of minimum MD with envelopes based on n observations and
   */
  /*                  the scatterplot matrix with the outliers highlighted is */
  /*                  produced. */
  /*                  If plots is a scalar equal to 2 the additional plots of */
  /*                  envelope resuperimposition are */
  /*                  produced. */
  /*                  If plots is a structure it may contain the following
   * fields: */
  /*                    plots.ylim = vector with two elements controlling
   * minimum and maximum */
  /*                        on the y axis. Default value is '' (automatic */
  /*                        scale); */
  /*                    plots.xlim = vector with two elements controlling
   * minimum and maximum */
  /*                        on the x axis. Default value is '' (automatic */
  /*                        scale); */
  /*                    plots.resuper = vector which specifies for which steps
   * it is */
  /*                        necessary to show the plots of resuperimposed
   * envelopes */
  /*                        if resuper is not supplied a plot of each step in
   * which the */
  /*                        envelope is resuperimposed is shown. Example if
   * resuper =[85 87] */
  /*                        plots of resuperimposedenvelopes are shown at steps
   */
  /*                        m=85 and m=87; */
  /*                    plots.ncoord = scalar. If ncoord=1 plots are shown in
   * normal */
  /*                        coordinates else (default) plots are shown in */
  /*                        traditional mmd coordinates; */
  /*                    plots.labeladd = If this option is '1', the outliers in
   * the */
  /*                        spm are labelled with the unit row index. The */
  /*                        default value is labeladd='', i.e. no label is */
  /*                        added; */
  /*                    plots.nameY = cell array of strings containing the
   * labels of */
  /*                        the variables. As default value, the labels which
   * are */
  /*                        added are Y1, ...Yv; */
  /*                    plots.lwd =  Scalar which controls line width of the
   * curve which */
  /*                        contains the monitoring of minimum Mahalanobis */
  /*                        distance. Default line of lwd=2. */
  /*                    plots.lwdenv = Scalar which controls linewidth of the */
  /*                        envelopes. Default value of lwdenv=2. */
  /*                Example - 'plots',2 */
  /*                Data Types - double */
  /*  */
  /*  */
  /*  Output: */
  /*  */
  /*          out:   structure which contains the following fields */
  /*  */
  /* out.outliers=  k x 1 vector containing the list of the units declared as */
  /*                outliers or NaN if the sample is homogeneous */
  /*  out.mmd    =  (n-init) x 2 matrix. */
  /*                1st col = fwd search index; */
  /*                2nd col = value of minimum Mahalanobis Distance in each step
   */
  /*                of the fwd search. */
  /*  out.Un     =  (n-init) x 11 Matrix which contains the unit(s) included */
  /*                in the subset at each step of the fwd search. */
  /*                REMARK: in every step the new subset is compared with the */
  /*                old subset. Un contains the unit(s) present in the new */
  /*                subset but not in the old one. Un(1,2) for example */
  /*                contains the unit included in step init+1. Un(end,2) */
  /*                contains the units included in the final step of the search.
   */
  /*  out.nout    = 2 x 5 matrix containing the number of times mmd went out */
  /*                of particular quantiles. */
  /*                First row contains quantiles 1 99 99.9 99.99 99.999 per
   * cent; */
  /*                Second row contains the frequency distribution. It is NaN */
  /*                if bonflev threshold is used. */
  /*  out.loc     = 1 x v  vector containing location of the data. */
  /*  out.cov     = v x v robust estimate of covariance matrix. */
  /*  out.md      = n x 1 vector containing the estimates of the robust */
  /*                Mahalanobis distances (in squared units). This vector */
  /*                contains the distances of each observation from the */
  /*                location of the data, relative to the scatter matrix cov. */
  /*  out.class  =  'FSM'. */
  /*  */
  /*  */
  /*  See also: FSMeda, unibiv.m, FSMmmd.m */
  /*  */
  /*  References: */
  /*  */
  /*  Riani, M., Atkinson, A.C. and Cerioli, A. (2009), Finding an unknown */
  /*  number of multivariate outliers, "Journal of the Royal Statistical */
  /*  Society Series B", Vol. 71, pp. 201-221. */
  /*  Cerioli, A., Farcomeni, A. and Riani M. (2014), Strong consistency and */
  /*  robustness of the Forward Search estimator of multivariate location */
  /*  and scatter, "Journal of Multivariate Analysis", Vol. 126, */
  /*  pp. 167-183, http://dx.doi.org/10.1016/j.jmva.2013.12.010 */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('FSM')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     %% FSM with all default options. */
  /*     n=200; */
  /*     v=3; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,v); */
  /*     % Contaminated data */
  /*     Ycont=Y; Ycont(1:5,[1,3]) = Ycont(1:5,[1,3])+sign(randn(5,2))*4.5; */
  /*     [out]=FSM(Ycont); */
  /*     title('Outliers detected by FSM','Fontsize',24,'Interpreter','LaTex');
   */
  /* } */
  /* { */
  /*     %% FSM with optional arguments. */
  /*     % FSM with plots showing envelope superimposition. */
  /*     n=200; */
  /*     v=3; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,v); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:)=Ycont(1:5,:)+3; */
  /*     [out]=FSM(Ycont,'plots',2); */
  /* } */
  /* { */
  /*     %% FSM with plots showing envelope superimposition in normal */
  /*     % coordinates. */
  /*     n=200; */
  /*     v=3; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,v); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:)=Ycont(1:5,:)+3; */
  /*     plots=struct; */
  /*     plots.ncoord=1; */
  /*     [out]=FSM(Ycont,'plots',plots); */
  /* } */
  /* { */
  /*     % Monitor the exceedances from m=200 without showing plots. */
  /*     n=1000; */
  /*     v=10; */
  /*     Y=randn(n,v); */
  /*     [out]=FSM(Y,'init',200,'plots',0); */
  /* } */
  /* { */
  /*     % Choosing an initial subset formed by the three observations with */
  /*     % the smallest Mahalanobis Distance. */
  /*     n=100; */
  /*     v=3; */
  /*     Y=randn(n,v); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:)=Ycont(1:5,:)+3; */
  /*     [out]=FSM(Ycont,'m0',5,'crit','md'); */
  /* } */
  /* { */
  /*     % Forgery Swiss banknotes examples. */
  /*  */
  /*     load('swiss_banknotes'); */
  /*     Y=swiss_banknotes{:,:}; */
  /*     % Monitor the exceedances of Minimum Mahalanobis Distance */
  /*     [out]=FSM(Y(101:200,:),'plots',1); */
  /*  */
  /*     % Control minimum and maximum on the x axis */
  /*     plots=struct; */
  /*     plots.xlim=[60 90]; */
  /*     [out]=FSM(Y(101:200,:),'plots',plots); */
  /*  */
  /*     % Monitor the exceedances of Minimum Mahalanobis Distance using normal
   * coordinates for mmd. */
  /*     plots.ncoord=1; */
  /*     [out]=FSM(Y(101:200,:),'plots',plots); */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checking */
  /* chkinputM does not do any check if option nocheck=1 */
  chkinputM(Y);
  v = Y->size[1];
  n = Y->size[0];
  if (Y->size[0] < 1) {
    loc->size[0] = 1;
    loc->size[1] = 0;
  } else {
    i = loc->size[0] * loc->size[1];
    loc->size[0] = 1;
    loc->size[1] = Y->size[0];
    emxEnsureCapacity_real_T(loc, i);
    loop_ub = Y->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      loc->data[i] = (double)i + 1.0;
    }
  }
  emxInit_real_T(&seq, 1);
  i = seq->size[0];
  seq->size[0] = loc->size[1];
  emxEnsureCapacity_real_T(seq, i);
  loop_ub = loc->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq->data[i] = loc->data[i];
  }
  emxInit_real_T(&fre, 2);
  /*  Write in structure 'options' the options chosen by the user */
  init_contents = varargin_8;
  /*  fsizeannot is a scalar which Font Size of the annotations which are */
  /*  shown on the screen */
  /*  Start of the forward search */
  /*  m0(1) necessary for MATLAB C coder */
  /*  Confidence level for robust bivariate ellipses */
  /*  Find initial subset to initialize the search */
  unibiv(Y, fre);
  if (b_strcmp(varargin_10_data, varargin_10_size)) {
    /*  The user has chosen to select the intial subset according to the */
    /*  smallest m0 pseudo MD Select only the potential bivariate outliers */
    sortrows(fre);
  } else if (c_strcmp(varargin_10_data, varargin_10_size)) {
    b_sortrows(fre);
  } else if (d_strcmp(varargin_10_data, varargin_10_size)) {
    c_sortrows(fre);
  }
  emxInit_real_T(&bs, 1);
  /*  initial subset */
  irank = (int)varargin_12;
  i = bs->size[0];
  bs->size[0] = (int)varargin_12;
  emxEnsureCapacity_real_T(bs, i);
  for (i = 0; i < irank; i++) {
    bs->data[i] = fre->data[i];
  }
  emxInit_real_T(&Ytilde, 2);
  /*  the subset need to be incremented if it is not full rank. We also */
  /*  treat the unfortunate case when the rank of the matrix is v but a */
  /*  column is constant. */
  incre = 1.0;
  /* the second condition is added to treat subset with a constant */
  /* variable. This situation does not decrease the rank of Y, but it */
  /* decreases the rank of ym (i.e. Y-mean(Y)) inside FSMmmd. */
  loop_ub = Y->size[1];
  emxInit_real_T(&goodobs, 2);
  emxInit_real_T(&b_loc, 2);
  do {
    exitg1 = 0;
    i = Ytilde->size[0] * Ytilde->size[1];
    Ytilde->size[0] = bs->size[0];
    Ytilde->size[1] = loop_ub;
    emxEnsureCapacity_real_T(Ytilde, i);
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = bs->size[0];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        Ytilde->data[i1 + Ytilde->size[0] * i] =
            Y->data[((int)bs->data[i1] + Y->size[0] * i) - 1];
      }
    }
    irank = local_rank(Ytilde);
    guard1 = false;
    if (irank < v) {
      guard1 = true;
    } else {
      b_loop_ub = Y->size[1];
      i = Ytilde->size[0] * Ytilde->size[1];
      Ytilde->size[0] = bs->size[0];
      Ytilde->size[1] = Y->size[1];
      emxEnsureCapacity_real_T(Ytilde, i);
      for (i = 0; i < b_loop_ub; i++) {
        irank = bs->size[0];
        for (i1 = 0; i1 < irank; i1++) {
          Ytilde->data[i1 + Ytilde->size[0] * i] =
              Y->data[((int)bs->data[i1] + Y->size[0] * i) - 1];
        }
      }
      maximum(Ytilde, loc);
      b_loop_ub = Y->size[1];
      i = Ytilde->size[0] * Ytilde->size[1];
      Ytilde->size[0] = bs->size[0];
      Ytilde->size[1] = Y->size[1];
      emxEnsureCapacity_real_T(Ytilde, i);
      for (i = 0; i < b_loop_ub; i++) {
        irank = bs->size[0];
        for (i1 = 0; i1 < irank; i1++) {
          Ytilde->data[i1 + Ytilde->size[0] * i] =
              Y->data[((int)bs->data[i1] + Y->size[0] * i) - 1];
        }
      }
      minimum(Ytilde, goodobs);
      i = b_loc->size[0] * b_loc->size[1];
      b_loc->size[0] = 1;
      b_loc->size[1] = loc->size[1];
      emxEnsureCapacity_real_T(b_loc, i);
      b_loop_ub = loc->size[1];
      for (i = 0; i < b_loop_ub; i++) {
        b_loc->data[i] = loc->data[i] - goodobs->data[i];
      }
      if (b_minimum(b_loc) == 0.0) {
        guard1 = true;
      } else {
        exitg1 = 1;
      }
    }
    if (guard1) {
      b_loop_ub = (int)(varargin_12 + incre);
      i = bs->size[0];
      bs->size[0] = b_loop_ub;
      emxEnsureCapacity_real_T(bs, i);
      for (i = 0; i < b_loop_ub; i++) {
        bs->data[i] = fre->data[i];
      }
      incre++;
    }
  } while (exitg1 == 0);
  emxFree_real_T(&b_loc);
  emxFree_real_T(&fre);
  /*  To make sure that new value of init is minimum lenght of bs for which */
  /*  the Y matrix is full rank */
  if (varargin_8 < bs->size[0]) {
    init_contents = bs->size[0];
  }
  /*  Compute Minimum Mahalanobis Distance for each step of the search */
  emxInit_real_T(&b_bs, 1);
  if (Y->size[0] < 5000) {
    i = b_bs->size[0];
    b_bs->size[0] = bs->size[0];
    emxEnsureCapacity_real_T(b_bs, i);
    loop_ub = bs->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_bs->data[i] = bs->data[i];
    }
    FSMmmd(Y, b_bs, init_contents, out_mmd, out_Un, out_cov);
  } else {
    i = b_bs->size[0];
    b_bs->size[0] = bs->size[0];
    emxEnsureCapacity_real_T(b_bs, i);
    loop_ub = bs->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_bs->data[i] = bs->data[i];
    }
    b_FSMmmd(Y, b_bs, init_contents, out_mmd, out_Un);
    i = out_cov->size[0] * out_cov->size[1];
    out_cov->size[0] = 1;
    out_cov->size[1] = 1;
    emxEnsureCapacity_real_T(out_cov, i);
    out_cov->data[0] = 0.0;
  }
  emxInit_boolean_T(&r, 2);
  i = r->size[0] * r->size[1];
  r->size[0] = out_mmd->size[0];
  r->size[1] = out_mmd->size[1];
  emxEnsureCapacity_boolean_T(r, i);
  loop_ub = out_mmd->size[0] * out_mmd->size[1];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = rtIsNaN(out_mmd->data[i]);
  }
  if (b_ifWhileCond(r)) {
    out_outliers->size[0] = 0;
    out_outliers->size[1] = 0;
    out_loc->size[0] = 0;
    out_loc->size[1] = 0;
    out_cov->size[0] = 0;
    out_cov->size[1] = 0;
    out_md->size[0] = 0;
    out_md->size[1] = 0;
    out_mmd->size[0] = 0;
    out_mmd->size[1] = 0;
    out_Un->size[0] = 0;
    out_Un->size[1] = 0;
    out_nout_size[0] = 0;
    out_nout_size[1] = 0;
    out_class_size[0] = 1;
    out_class_size[1] = 0;
    /*  all(structfun(@isempty,out)) */
  } else {
    /*  Part 1. Signal detection and validation */
    b_signal = 0;
    sto = 0;
    emxInit_real_T(&gbonf, 2);
    emxInit_real_T(&gmin, 2);
    emxInit_real_T(&gmin1, 2);
    emxInit_int32_T(&ia, 1);
    if ((varargin_4_size[0] != 0) && (varargin_4_size[1] != 0)) {
      b_varargin_4_size[0] = 1;
      b_varargin_4_size[1] = 1;
      for (i = 0; i < 1; i++) {
        c_varargin_4_data = (varargin_4_data[0] < 1.0);
      }
      b_varargin_4_data.data = &c_varargin_4_data;
      b_varargin_4_data.size = &b_varargin_4_size[0];
      b_varargin_4_data.allocatedSize = 1;
      b_varargin_4_data.numDimensions = 2;
      b_varargin_4_data.canFreeData = false;
      if (b_ifWhileCond(&b_varargin_4_data)) {
        FSMbonfbound(Y->size[0], Y->size[1], varargin_4_data, varargin_4_size,
                     init_contents, gbonf);
      } else {
        i = b_bs->size[0];
        b_bs->size[0] = (int)((double)Y->size[0] - init_contents);
        emxEnsureCapacity_real_T(b_bs, i);
        loop_ub = (int)((double)Y->size[0] - init_contents);
        for (i = 0; i < loop_ub; i++) {
          b_bs->data[i] = 1.0;
        }
        emxInit_real_T(&y, 1);
        d_varargin_4_data.data = (double *)&varargin_4_data[0];
        d_varargin_4_data.size = (int *)&varargin_4_size[0];
        d_varargin_4_data.allocatedSize = -1;
        d_varargin_4_data.numDimensions = 2;
        d_varargin_4_data.canFreeData = false;
        mtimes(&d_varargin_4_data, b_bs, y);
        i = gbonf->size[0] * gbonf->size[1];
        gbonf->size[0] = y->size[0];
        gbonf->size[1] = 1;
        emxEnsureCapacity_real_T(gbonf, i);
        loop_ub = y->size[0];
        for (i = 0; i < loop_ub; i++) {
          gbonf->data[i] = y->data[i];
        }
        emxFree_real_T(&y);
      }
      /*  declarations necessary for MATLAB C coder */
      trueCount = 0;
      c99 = -1;
      c999 = -1;
      c9999 = -1;
      c99999 = -1;
      c001 = -1;
      i = gmin->size[0] * gmin->size[1];
      gmin->size[0] = 1;
      gmin->size[1] = 1;
      emxEnsureCapacity_real_T(gmin, i);
      gmin->data[0] = 0.0;
      NoFalseSig = true;
      incre = 0.0;
      ii = 0U;
      i = gmin1->size[0] * gmin1->size[1];
      gmin1->size[0] = 1;
      gmin1->size[1] = 1;
      emxEnsureCapacity_real_T(gmin1, i);
      gmin1->data[0] = 0.0;
      nout_size_idx_0 = 1;
      nout_size_idx_1 = 1;
      nout_data[0] = 0U;
    } else {
      /*  declaration necessary for C coder */
      i = gbonf->size[0] * gbonf->size[1];
      gbonf->size[0] = 1;
      gbonf->size[1] = 1;
      emxEnsureCapacity_real_T(gbonf, i);
      gbonf->data[0] = 0.0;
      incre = 0.0;
      ii = 0U;
      i = gmin1->size[0] * gmin1->size[1];
      gmin1->size[0] = 1;
      gmin1->size[1] = 1;
      emxEnsureCapacity_real_T(gmin1, i);
      gmin1->data[0] = 0.0;
      /*  Compute theoretical envelops for minimum Mahalanobis Distance based on
       * all */
      /*  the observations for the above quantiles. */
      FSMenvmmd(Y->size[0], Y->size[1], init_contents, gmin);
      /*  gmin = the matrix which contains envelopes based on all observations.
       */
      /*  1st col of gmin = fwd search index */
      /*  2nd col of gmin = 99% envelope */
      /*  3rd col of gmin = 99.9% envelope */
      /*  4th col of gmin = 99.99% envelope */
      /*  5th col of gmin = 99.999% envelope */
      /*  6th col of gmin = 1% envelope */
      /*  7th col of gmin = 50% envelope */
      /*  Thus, set the columns of gmin where the theoretical quantiles are
       * located. */
      c99 = 1;
      c999 = 2;
      c9999 = 3;
      c99999 = 4;
      c001 = 5;
      /*  Store in nout the number of times the observed mmd (d_min) lies above:
       */
      b_loop_ub = out_mmd->size[0] - 1;
      trueCount = 0;
      for (b_i = 0; b_i <= b_loop_ub; b_i++) {
        if (out_mmd->data[b_i + out_mmd->size[0]] >
            gmin->data[b_i + gmin->size[0]]) {
          trueCount++;
        }
      }
      i = ia->size[0];
      ia->size[0] = trueCount;
      emxEnsureCapacity_int32_T(ia, i);
      irank = 0;
      for (b_i = 0; b_i <= b_loop_ub; b_i++) {
        if (out_mmd->data[b_i + out_mmd->size[0]] >
            gmin->data[b_i + gmin->size[0]]) {
          ia->data[irank] = b_i + 1;
          irank++;
        }
      }
      b_loop_ub = out_mmd->size[0] - 1;
      trueCount = 0;
      for (b_i = 0; b_i <= b_loop_ub; b_i++) {
        if (out_mmd->data[b_i + out_mmd->size[0]] >
            gmin->data[b_i + gmin->size[0] * 2]) {
          trueCount++;
        }
      }
      emxInit_int32_T(&r1, 1);
      i = r1->size[0];
      r1->size[0] = trueCount;
      emxEnsureCapacity_int32_T(r1, i);
      irank = 0;
      for (b_i = 0; b_i <= b_loop_ub; b_i++) {
        if (out_mmd->data[b_i + out_mmd->size[0]] >
            gmin->data[b_i + gmin->size[0] * 2]) {
          r1->data[irank] = b_i + 1;
          irank++;
        }
      }
      b_loop_ub = out_mmd->size[0] - 1;
      trueCount = 0;
      for (b_i = 0; b_i <= b_loop_ub; b_i++) {
        if (out_mmd->data[b_i + out_mmd->size[0]] >
            gmin->data[b_i + gmin->size[0] * 3]) {
          trueCount++;
        }
      }
      emxInit_int32_T(&r2, 1);
      i = r2->size[0];
      r2->size[0] = trueCount;
      emxEnsureCapacity_int32_T(r2, i);
      irank = 0;
      for (b_i = 0; b_i <= b_loop_ub; b_i++) {
        if (out_mmd->data[b_i + out_mmd->size[0]] >
            gmin->data[b_i + gmin->size[0] * 3]) {
          r2->data[irank] = b_i + 1;
          irank++;
        }
      }
      b_loop_ub = out_mmd->size[0] - 1;
      trueCount = 0;
      for (b_i = 0; b_i <= b_loop_ub; b_i++) {
        if (out_mmd->data[b_i + out_mmd->size[0]] >
            gmin->data[b_i + gmin->size[0] * 4]) {
          trueCount++;
        }
      }
      emxInit_int32_T(&r3, 1);
      i = r3->size[0];
      r3->size[0] = trueCount;
      emxEnsureCapacity_int32_T(r3, i);
      irank = 0;
      for (b_i = 0; b_i <= b_loop_ub; b_i++) {
        if (out_mmd->data[b_i + out_mmd->size[0]] >
            gmin->data[b_i + gmin->size[0] * 4]) {
          r3->data[irank] = b_i + 1;
          irank++;
        }
      }
      b_loop_ub = out_mmd->size[0] - 1;
      trueCount = 0;
      for (b_i = 0; b_i <= b_loop_ub; b_i++) {
        if (out_mmd->data[b_i + out_mmd->size[0]] <
            gmin->data[b_i + gmin->size[0] * 5]) {
          trueCount++;
        }
      }
      emxInit_int32_T(&r4, 1);
      i = r4->size[0];
      r4->size[0] = trueCount;
      emxEnsureCapacity_int32_T(r4, i);
      irank = 0;
      for (b_i = 0; b_i <= b_loop_ub; b_i++) {
        if (out_mmd->data[b_i + out_mmd->size[0]] <
            gmin->data[b_i + gmin->size[0] * 5]) {
          r4->data[irank] = b_i + 1;
          irank++;
        }
      }
      /*        % the 99% envelope */
      /*       % the 99.9% envelope */
      /*      % the 99.99% envelope */
      /*     % the 99.999% envelope */
      /*  the 1% envelope */
      for (i = 0; i < 5; i++) {
        uv[i << 1] = (unsigned int)iv[i];
      }
      uv[1] = (unsigned int)r4->size[0];
      uv[3] = (unsigned int)ia->size[0];
      uv[5] = (unsigned int)r1->size[0];
      uv[7] = (unsigned int)r2->size[0];
      uv[9] = (unsigned int)r3->size[0];
      nout_size_idx_0 = 2;
      nout_size_idx_1 = 5;
      emxFree_int32_T(&r4);
      emxFree_int32_T(&r3);
      emxFree_int32_T(&r2);
      emxFree_int32_T(&r1);
      for (i = 0; i < 10; i++) {
        nout_data[i] = uv[i];
      }
      /*  NoFalseSig = boolean linked to the fact that the signal is good or not
       */
      /*  NoFalseSig is set to 1 if the condition for an INCONTROVERTIBLE SIGNAL
       * is */
      /*  fulfilled. */
      trueCount = 0;
      irank = 0;
      for (b_i = 0; b_i < 5; b_i++) {
        NoFalseSig = ((int)nout_data[2 * b_i] == 9999);
        if (NoFalseSig) {
          trueCount++;
          tmp_data[irank] = (signed char)(b_i + 1);
          irank++;
        }
      }
      nout_size[0] = 1;
      nout_size[1] = trueCount;
      for (i = 0; i < trueCount; i++) {
        b_nout_data[i] = ((int)nout_data[2 * (tmp_data[i] - 1) + 1] >= 10);
      }
      NoFalseSig = c_ifWhileCond(b_nout_data, nout_size);
      /*  Divide central part from final part of the search */
      trueCount =
          Y->size[0] - (int)floor(13.0 * sqrt((double)Y->size[0] / 200.0));
    }
    /*  Stage 1a: signal detection */
    /*  Signal detection is based on monitoring consecutive triplets or single
     */
    /*  extreme values */
    /*  Signal detection loop */
    b_i = 3;
    c_i = 2;
    emxInit_real_T(&gval, 2);
    emxInit_boolean_T(&x, 1);
    exitg2 = false;
    while ((!exitg2) && (c_i - 2 <= out_mmd->size[0] - 3)) {
      b_i = c_i + 1;
      if ((varargin_4_size[0] == 0) || (varargin_4_size[1] == 0)) {
        if ((double)(c_i - 2) + 3.0 <
            ((double)trueCount - init_contents) + 1.0) {
          /*  CENTRAL PART OF THE SEARCH */
          /*  Extreme triplet or an extreme single value */
          /*  Three consecutive values of d_min above the 99.99% threshold or 1
           */
          /*  above 99.999% envelope */
          if (((out_mmd->data[c_i + out_mmd->size[0]] >
                gmin->data[c_i + gmin->size[0] * c9999]) &&
               (out_mmd->data[(c_i + out_mmd->size[0]) + 1] >
                gmin->data[(c_i + gmin->size[0] * c9999) + 1]) &&
               (out_mmd->data[(c_i + out_mmd->size[0]) - 1] >
                gmin->data[(c_i + gmin->size[0] * c9999) - 1])) ||
              (out_mmd->data[c_i + out_mmd->size[0]] >
               gmin->data[(gmin->size[0] + gmin->size[0] * c99) - 1]) ||
              (out_mmd->data[c_i + out_mmd->size[0]] >
               gmin->data[c_i + gmin->size[0] * c99999])) {
            if ((out_mmd->data[c_i + out_mmd->size[0]] >
                 gmin->data[c_i + gmin->size[0] * c9999]) &&
                (out_mmd->data[(c_i + out_mmd->size[0]) + 1] >
                 gmin->data[(c_i + gmin->size[0] * c9999) + 1]) &&
                (out_mmd->data[(c_i + out_mmd->size[0]) - 1] >
                 gmin->data[(c_i + gmin->size[0] * c9999) - 1])) {
              int2str(out_mmd->data[c_i], b_out_mmd.data, b_out_mmd.size);
              int2str(n, b_out_mmd.data, b_out_mmd.size);
              int2str(out_mmd->data[c_i - 1], b_out_mmd.data, b_out_mmd.size);
              int2str(n, b_out_mmd.data, b_out_mmd.size);
              int2str(out_mmd->data[c_i + 1], b_out_mmd.data, b_out_mmd.size);
              int2str(n, b_out_mmd.data, b_out_mmd.size);
            }
            if (out_mmd->data[c_i + out_mmd->size[0]] >
                gmin->data[c_i + gmin->size[0] * c99999]) {
              int2str(out_mmd->data[c_i], b_out_mmd.data, b_out_mmd.size);
              int2str(n, b_out_mmd.data, b_out_mmd.size);
            }
            if (out_mmd->data[c_i + out_mmd->size[0]] >
                gmin->data[(gmin->size[0] + gmin->size[0] * c99) - 1]) {
              int2str(out_mmd->data[c_i], b_out_mmd.data, b_out_mmd.size);
              int2str(n, b_out_mmd.data, b_out_mmd.size);
              NoFalseSig = true;
              /*  i.e., no need of further validation */
            }
            b_signal = 1;
          }
        } else if (c_i + 1 < out_mmd->size[0] - 1) {
          /*  FINAL PART OF THE SEARCH */
          /*  Extreme couple adjacent to an exceedance */
          /*  Two consecutive values of mmd above the 99.99% envelope and 1
           * above 99% */
          if (((out_mmd->data[c_i + out_mmd->size[0]] >
                gmin->data[c_i + gmin->size[0] * c999]) &&
               (out_mmd->data[(c_i + out_mmd->size[0]) + 1] >
                gmin->data[(c_i + gmin->size[0] * c999) + 1]) &&
               (out_mmd->data[(c_i + out_mmd->size[0]) - 1] >
                gmin->data[(c_i + gmin->size[0] * c99) - 1])) ||
              ((out_mmd->data[(c_i + out_mmd->size[0]) - 1] >
                gmin->data[(c_i + gmin->size[0] * c999) - 1]) &&
               (out_mmd->data[c_i + out_mmd->size[0]] >
                gmin->data[c_i + gmin->size[0] * c999]) &&
               (out_mmd->data[(c_i + out_mmd->size[0]) + 1] >
                gmin->data[(c_i + gmin->size[0] * c99) + 1])) ||
              (out_mmd->data[c_i + out_mmd->size[0]] >
               gmin->data[(gmin->size[0] + gmin->size[0] * c99) - 1]) ||
              (out_mmd->data[c_i + out_mmd->size[0]] >
               gmin->data[c_i + gmin->size[0] * c99999])) {
            if ((out_mmd->data[c_i + out_mmd->size[0]] >
                 gmin->data[c_i + gmin->size[0] * c999]) &&
                (out_mmd->data[(c_i + out_mmd->size[0]) + 1] >
                 gmin->data[(c_i + gmin->size[0] * c999) + 1]) &&
                (out_mmd->data[(c_i + out_mmd->size[0]) - 1] >
                 gmin->data[(c_i + gmin->size[0] * c99) - 1])) {
              int2str(out_mmd->data[c_i], b_out_mmd.data, b_out_mmd.size);
              int2str(n, b_out_mmd.data, b_out_mmd.size);
              int2str(out_mmd->data[c_i - 1], b_out_mmd.data, b_out_mmd.size);
              int2str(n, b_out_mmd.data, b_out_mmd.size);
              int2str(out_mmd->data[c_i + 1], b_out_mmd.data, b_out_mmd.size);
              int2str(n, b_out_mmd.data, b_out_mmd.size);
            }
            if ((out_mmd->data[(c_i + out_mmd->size[0]) - 1] >
                 gmin->data[(c_i + gmin->size[0] * c999) - 1]) &&
                (out_mmd->data[c_i + out_mmd->size[0]] >
                 gmin->data[c_i + gmin->size[0] * c999]) &&
                (out_mmd->data[(c_i + out_mmd->size[0]) + 1] >
                 gmin->data[(c_i + gmin->size[0] * c99) + 1])) {
              int2str(out_mmd->data[c_i], b_out_mmd.data, b_out_mmd.size);
              int2str(n, b_out_mmd.data, b_out_mmd.size);
              int2str(out_mmd->data[c_i - 1], b_out_mmd.data, b_out_mmd.size);
              int2str(n, b_out_mmd.data, b_out_mmd.size);
              int2str(out_mmd->data[c_i + 1], b_out_mmd.data, b_out_mmd.size);
              int2str(n, b_out_mmd.data, b_out_mmd.size);
            }
            if (out_mmd->data[c_i + out_mmd->size[0]] >
                gmin->data[(gmin->size[0] + gmin->size[0] * c99) - 1]) {
              int2str(out_mmd->data[c_i], b_out_mmd.data, b_out_mmd.size);
              int2str(n, b_out_mmd.data, b_out_mmd.size);
            }
            /*  Extreme single value */
            if (out_mmd->data[c_i + out_mmd->size[0]] >
                gmin->data[c_i + gmin->size[0] * c99999]) {
              int2str(out_mmd->data[c_i], b_out_mmd.data, b_out_mmd.size);
              int2str(n, b_out_mmd.data, b_out_mmd.size);
            }
            /*  Signal is always considered true if it takes place in the */
            /*  final part of the search */
            NoFalseSig = true;
            b_signal = 1;
          }
        } else if (((out_mmd->data[c_i + out_mmd->size[0]] >
                     gmin->data[c_i + gmin->size[0] * c999]) ||
                    (out_mmd->data[c_i + out_mmd->size[0]] >
                     gmin->data[(gmin->size[0] + gmin->size[0] * c99) - 1])) &&
                   (c_i + 1 == out_mmd->size[0] - 1)) {
          /*  potential couple of outliers */
          b_signal = 1;
          if (out_mmd->data[c_i + out_mmd->size[0]] >
              gmin->data[c_i + gmin->size[0] * c999]) {
            int2str(out_mmd->data[c_i], b_out_mmd.data, b_out_mmd.size);
            int2str(n, b_out_mmd.data, b_out_mmd.size);
          }
          if (out_mmd->data[c_i + out_mmd->size[0]] >
              gmin->data[(gmin->size[0] + gmin->size[0] * c99) - 1]) {
            int2str(out_mmd->data[c_i], b_out_mmd.data, b_out_mmd.size);
            int2str(n, b_out_mmd.data, b_out_mmd.size);
          }
        } else if ((out_mmd->data[c_i + out_mmd->size[0]] >
                    gmin->data[c_i + gmin->size[0] * c99]) &&
                   (c_i + 1 == out_mmd->size[0])) {
          /*  a single outlier */
          b_signal = 1;
          int2str(out_mmd->data[c_i], b_out_mmd.data, b_out_mmd.size);
          int2str(n, b_out_mmd.data, b_out_mmd.size);
        }
        /*         %% Stage 1b: signal validation */
        if (b_signal == 1) {
          /*  mdag is $m^\dagger$ */
          incre = out_mmd->data[c_i];
          if (out_mmd->data[c_i] < (double)n - 2.0) {
            /*  Check if the signal is incontrovertible */
            /*  Incontrovertible signal = 3 consecutive values of d_min > */
            /*  99.999% threshold */
            if ((out_mmd->data[c_i + out_mmd->size[0]] >
                 gmin->data[c_i + gmin->size[0] * c99999]) &&
                (out_mmd->data[(c_i + out_mmd->size[0]) - 1] >
                 gmin->data[(c_i + gmin->size[0] * c99999) - 1]) &&
                (out_mmd->data[(c_i + out_mmd->size[0]) + 1] >
                 gmin->data[(c_i + gmin->size[0] * c99999) + 1])) {
              NoFalseSig = true;
            }
          } else {
            NoFalseSig = true;
          }
          /*  if the following statement is true, observed curve of d_min is */
          /*  above 99.99% and later is below 1%: peak followed by dip */
          if (out_mmd->size[0] > (incre - out_mmd->data[0]) + 31.0) {
            for (i = 0; i < 31; i++) {
              u = ((unsigned int)i + c_i) + 2U;
              b_x[i] = (out_mmd->data[((int)u + out_mmd->size[0]) - 1] <
                        gmin->data[((int)u + gmin->size[0] * c001) - 1]);
            }
            b_loop_ub = b_x[0];
            for (loop_ub = 0; loop_ub < 30; loop_ub++) {
              b_loop_ub += b_x[loop_ub + 1];
            }
            if (b_loop_ub >= 2) {
              NoFalseSig = true;
              /*  Peak followed by dip */
            }
          } else {
            if (c_i + 2U > (unsigned int)out_mmd->size[0]) {
              i = -1;
              i1 = -2;
            } else {
              i = c_i;
              i1 = out_mmd->size[0] - 2;
            }
            if (c_i + 2U > (unsigned int)gmin->size[0]) {
              i2 = -1;
            } else {
              i2 = c_i;
            }
            loop_ub = i1 - i;
            i1 = x->size[0];
            x->size[0] = loop_ub + 1;
            emxEnsureCapacity_boolean_T(x, i1);
            for (i1 = 0; i1 <= loop_ub; i1++) {
              x->data[i1] =
                  (out_mmd->data[((i + i1) + out_mmd->size[0]) + 1] <
                   gmin->data[((i2 + i1) + gmin->size[0] * c001) + 1]);
            }
            irank = x->size[0];
            if (x->size[0] == 0) {
              b_loop_ub = 0;
            } else {
              b_loop_ub = x->data[0];
              for (loop_ub = 2; loop_ub <= irank; loop_ub++) {
                b_loop_ub += x->data[loop_ub - 1];
              }
            }
            if (b_loop_ub >= 2) {
              NoFalseSig = true;
              /* Peak followed by dip in the final part of the search'; */
            }
          }
          /*  if at this point NoFalseSig==0 it means that: */
          /*  1) n9999<10 */
          /*  2) signal tool place in the central part of the search */
          /*  3) signal was not incontrovertible */
          /*  4) there was not a peak followed by dip */
          if (!NoFalseSig) {
            /*  Compute the final value of the envelope based on */
            /*  mmd(i+1,1)=mdagger+1 observations */
            b_FSMenvmmd(incre + 1.0, v, incre, gval);
            if (out_mmd->data[c_i + out_mmd->size[0]] <
                gval->data[gval->size[0]]) {
              /*  increase mdag of the search by one unit */
              incre = 0.0;
            } else {
              NoFalseSig = true;
            }
          }
          /*  If the signal has been validated get out of the signal detection
           */
          /*  loop and move to stage 2: superimposition of the envelopes */
          if (NoFalseSig) {
            exitg2 = true;
          } else {
            c_i++;
          }
        } else {
          c_i++;
        }

        /*  Outlier detection based on Bonferroni threshold */
      } else if (out_mmd->data[c_i + out_mmd->size[0]] >
                 gbonf->data[c_i + gbonf->size[0] * (gbonf->size[1] - 1)]) {
        int2str(out_mmd->data[c_i], b_out_mmd.data, b_out_mmd.size);
        int2str(n, b_out_mmd.data, b_out_mmd.size);
        b_signal = 1;
        exitg2 = true;
      } else {
        c_i++;
      }
    }
    emxFree_real_T(&gval);
    emxFree_real_T(&gmin);
    emxFree_real_T(&gbonf);
    /*  Create figure containing mmd + envelopes based on all the observations.
     */
    /*  if plo is a structure or if it is a scalar different from 0 */
    /*  then produce a plot */
    /*  Part 2: envelope resuperimposition */
    /*  if a validated signal tool place, superimposition of the envelopes
     * starts */
    /*  from m^\dagger-1 */
    if (b_signal == 1) {
      if ((varargin_4_size[0] == 0) || (varargin_4_size[1] == 0)) {
        /*  First resuperimposed envelope is based on mdag-1 observations */
        /*  Notice that mmd(i,1) = m dagger */
        i = (int)((double)Y->size[0] + (1.0 - (incre - 1.0)));
        tr = incre - 1.0;
        irank = 0;
        exitg2 = false;
        while ((!exitg2) && (irank <= i - 1)) {
          tr = (incre - 1.0) + (double)irank;
          /*  Compute theoretical envelopes based on tr observations */
          c_FSMenvmmd(tr, v, init_contents, gmin1);
          i1 = (gmin1->size[0] - b_i) + 1;
          ii = (unsigned int)(b_i - 1);
          b_loop_ub = 0;
          exitg3 = false;
          while ((!exitg3) && (b_loop_ub <= i1)) {
            ii = ((unsigned int)b_i + b_loop_ub) - 1U;
            /*  CHECK IF STOPPING RULE IS FULFILLED */
            /*  ii>=size(gmin1,1)-2 = final, penultimate or antepenultimate
             * value */
            /*  of the resuperimposed envelope based on tr observations */
            d = out_mmd->data[((int)ii + out_mmd->size[0]) - 1];
            if ((d > gmin1->data[((int)ii + gmin1->size[0] * c99) - 1]) &&
                ((int)ii >= gmin1->size[0] - 2)) {
              /*  Condition S1 */
              int2str(out_mmd->data[(int)ii - 1], b_out_mmd.data,
                      b_out_mmd.size);
              int2str(tr, b_out_mmd.data, b_out_mmd.size);
              sto = 1;
              exitg3 = true;
            } else if (((int)ii < gmin1->size[0] - 2) &&
                       (d >
                        gmin1->data[((int)ii + gmin1->size[0] * c999) - 1])) {
              /*  Condition S2 */
              int2str(out_mmd->data[(int)ii - 1], b_out_mmd.data,
                      b_out_mmd.size);
              int2str(tr, b_out_mmd.data, b_out_mmd.size);
              sto = 1;
              exitg3 = true;
            } else {
              /*  mmd is inside the envelopes, so keep resuperimposing */
              b_loop_ub++;
            }
          }
          /*  The following is the only one non graphical instruction */
          if (sto == 1) {
            exitg2 = true;
          } else {
            irank++;
          }
        }
        /*         %% Stage 2a: subset validation */
        /*  In this part we check whether the subset is homogeneous. In other */
        /*  words we verify conditions H1 and H2 */
        /*  tr= m^\dagger+k+1 */
        /*  m^\dagger+k=tr-1 */
        /*  m*=mmd(ii,1) */
        /*  Condition H2 */
        /*  Check if stopping rule takes place at m* <m^\dagger+k */
        if (out_mmd->data[(int)ii - 1] < tr - 1.0) {
          /*  Condition H2b and H2a */
          if (ii + 1U > (unsigned int)gmin1->size[0]) {
            i = 0;
            i1 = 0;
            i2 = 0;
          } else {
            i = (int)ii;
            i1 = gmin1->size[0];
            i2 = (int)ii;
          }
          loop_ub = i1 - i;
          i1 = x->size[0];
          x->size[0] = loop_ub;
          emxEnsureCapacity_boolean_T(x, i1);
          for (i1 = 0; i1 < loop_ub; i1++) {
            x->data[i1] = (gmin1->data[(i + i1) + gmin1->size[0] * 3] >
                           out_mmd->data[(i2 + i1) + out_mmd->size[0]]);
          }
          irank = x->size[0];
          if (x->size[0] == 0) {
            b_loop_ub = 0;
          } else {
            b_loop_ub = x->data[0];
            for (loop_ub = 2; loop_ub <= irank; loop_ub++) {
              b_loop_ub += x->data[loop_ub - 1];
            }
          }
          if (b_loop_ub > 0) {
            /*  Find m^{1%} that is the step where mmd goes below the 1% */
            /*  threshold for the first time */
            /*  ginfd = concatenate all the steps from m^*+1 to m^\dagger+k-1 */
            if (b_i + 1U > (unsigned int)gmin1->size[0]) {
              i = 0;
              i1 = 0;
              i2 = 0;
              irank = 0;
              b_loop_ub = 0;
            } else {
              i = b_i;
              i1 = gmin1->size[0];
              i2 = b_i;
              irank = gmin1->size[0];
              b_loop_ub = b_i;
            }
            emxInit_real_T(&gfind, 2);
            loop_ub = i1 - i;
            i1 = gfind->size[0] * gfind->size[1];
            gfind->size[0] = loop_ub;
            gfind->size[1] = 2;
            emxEnsureCapacity_real_T(gfind, i1);
            for (i1 = 0; i1 < loop_ub; i1++) {
              gfind->data[i1] = gmin1->data[i + i1];
            }
            loop_ub = irank - i2;
            for (i = 0; i < loop_ub; i++) {
              gfind->data[i + gfind->size[0]] =
                  (gmin1->data[(i2 + i) + gmin1->size[0] * 3] >
                   out_mmd->data[(b_loop_ub + i) + out_mmd->size[0]]);
            }
            /*  select from gfind the steps where mmd was below 1% threshold */
            /*  gfind(1,1) contains the first step where mmd was below 1% */
            /*  find maximum in the interval m^\dagger=mmd(i,1) to the step */
            /*  prior to the one where mmd goes below 1% envelope */
            loop_ub = gfind->size[0];
            i = x->size[0];
            x->size[0] = gfind->size[0];
            emxEnsureCapacity_boolean_T(x, i);
            for (i = 0; i < loop_ub; i++) {
              x->data[i] = (gfind->data[i + gfind->size[0]] > 0.0);
            }
            b_loop_ub = x->size[0] - 1;
            trueCount = 0;
            for (c_i = 0; c_i <= b_loop_ub; c_i++) {
              if (x->data[c_i]) {
                trueCount++;
              }
            }
            emxInit_int32_T(&r6, 1);
            i = r6->size[0];
            r6->size[0] = trueCount;
            emxEnsureCapacity_int32_T(r6, i);
            irank = 0;
            for (c_i = 0; c_i <= b_loop_ub; c_i++) {
              if (x->data[c_i]) {
                r6->data[irank] = c_i + 1;
                irank++;
              }
            }
            d = gfind->data[r6->data[0] - 1] - out_mmd->data[0];
            emxFree_int32_T(&r6);
            if (b_i > d) {
              i = 0;
              i1 = 0;
            } else {
              i = b_i - 1;
              i1 = (int)d;
            }
            loop_ub = i1 - i;
            i1 = gfind->size[0] * gfind->size[1];
            gfind->size[0] = loop_ub;
            gfind->size[1] = 2;
            emxEnsureCapacity_real_T(gfind, i1);
            for (i1 = 0; i1 < 2; i1++) {
              for (i2 = 0; i2 < loop_ub; i2++) {
                gfind->data[i2 + gfind->size[0] * i1] =
                    out_mmd->data[(i + i2) + out_mmd->size[0] * i1];
              }
            }
            d_sortrows(gfind);
            /*  tr is redefined and is associated with the step associated to */
            /*  the maximum value of d_min */
            /*  try=sormcl[rows(sormcl),1]+1; */
            tr = gfind->data[gfind->size[0] - 1] + 1.0;
            emxFree_real_T(&gfind);
          }
        }
        incre = ((double)Y->size[0] - tr) + 1.0;
      } else {
        incre = (double)Y->size[0] - out_mmd->data[b_i - 1];
      }
    } else {
      incre = 0.0;
    }
    emxFree_real_T(&gmin1);
    /*  End of the forward search */
    emxInit_real_T(&outliers, 1);
    if (incre > 0.0) {
      /*  Now find the list of the units declared as outliers */
      /*  bsel=~isnan(bb(:,tr-init+1)); */
      /*  ListOut=setdiff(1:n,bsel,1); */
      if (Y->size[0] < 5000) {
        irank = (int)((double)out_cov->size[1] - incre);
        loop_ub = out_cov->size[0];
        i = bs->size[0];
        bs->size[0] = out_cov->size[0];
        emxEnsureCapacity_real_T(bs, i);
        for (i = 0; i < loop_ub; i++) {
          bs->data[i] = out_cov->data[i + out_cov->size[0] * (irank - 1)];
        }
        i = x->size[0];
        x->size[0] = bs->size[0];
        emxEnsureCapacity_boolean_T(x, i);
        loop_ub = bs->size[0];
        for (i = 0; i < loop_ub; i++) {
          x->data[i] = rtIsNaN(bs->data[i]);
        }
        b_loop_ub = x->size[0] - 1;
        trueCount = 0;
        for (b_i = 0; b_i <= b_loop_ub; b_i++) {
          if (x->data[b_i]) {
            trueCount++;
          }
        }
        i = outliers->size[0];
        outliers->size[0] = trueCount;
        emxEnsureCapacity_real_T(outliers, i);
        irank = 0;
        for (b_i = 0; b_i <= b_loop_ub; b_i++) {
          if (x->data[b_i]) {
            outliers->data[irank] = seq->data[b_i];
            irank++;
          }
        }
      } else {
        emxInit_real_T(&a__1, 2);
        FSMbsb(Y, bs, (double)Y->size[0] - incre, (double)Y->size[0] - incre,
               a__1, out_cov);
        i = r->size[0] * r->size[1];
        r->size[0] = out_cov->size[0];
        r->size[1] = out_cov->size[1];
        emxEnsureCapacity_boolean_T(r, i);
        loop_ub = out_cov->size[0] * out_cov->size[1];
        emxFree_real_T(&a__1);
        for (i = 0; i < loop_ub; i++) {
          r->data[i] = rtIsNaN(out_cov->data[i]);
        }
        b_loop_ub = r->size[0] * r->size[1] - 1;
        trueCount = 0;
        for (b_i = 0; b_i <= b_loop_ub; b_i++) {
          if (r->data[b_i]) {
            trueCount++;
          }
        }
        i = outliers->size[0];
        outliers->size[0] = trueCount;
        emxEnsureCapacity_real_T(outliers, i);
        irank = 0;
        for (b_i = 0; b_i <= b_loop_ub; b_i++) {
          if (r->data[b_i]) {
            outliers->data[irank] = seq->data[b_i];
            irank++;
          }
        }
      }
    } else {
      i = outliers->size[0];
      outliers->size[0] = 1;
      emxEnsureCapacity_real_T(outliers, i);
      outliers->data[0] = rtNaN;
    }
    emxFree_boolean_T(&x);
    /* compute locatione and covariance matrix */
    if (Y->size[0] < 1) {
      loc->size[0] = 1;
      loc->size[1] = 0;
    } else {
      i = loc->size[0] * loc->size[1];
      loc->size[0] = 1;
      loc->size[1] = Y->size[0];
      emxEnsureCapacity_real_T(loc, i);
      loop_ub = Y->size[0] - 1;
      for (i = 0; i <= loop_ub; i++) {
        loc->data[i] = (double)i + 1.0;
      }
    }
    b_do_vectors(loc, outliers, goodobs, ia, &irank);
    i = bs->size[0];
    bs->size[0] = goodobs->size[1];
    emxEnsureCapacity_real_T(bs, i);
    loop_ub = goodobs->size[1];
    emxFree_int32_T(&ia);
    for (i = 0; i < loop_ub; i++) {
      bs->data[i] = goodobs->data[i];
    }
    loop_ub = Y->size[1];
    i = Ytilde->size[0] * Ytilde->size[1];
    Ytilde->size[0] = bs->size[0];
    Ytilde->size[1] = Y->size[1];
    emxEnsureCapacity_real_T(Ytilde, i);
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = bs->size[0];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        Ytilde->data[i1 + Ytilde->size[0] * i] =
            Y->data[((int)bs->data[i1] + Y->size[0] * i) - 1];
      }
    }
    combineVectorElements(Ytilde, loc);
    i = loc->size[0] * loc->size[1];
    loc->size[0] = 1;
    emxEnsureCapacity_real_T(loc, i);
    loop_ub = loc->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      loc->data[i] /= (double)bs->size[0];
    }
    loop_ub = Y->size[1];
    i = Ytilde->size[0] * Ytilde->size[1];
    Ytilde->size[0] = bs->size[0];
    Ytilde->size[1] = Y->size[1];
    emxEnsureCapacity_real_T(Ytilde, i);
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = bs->size[0];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        Ytilde->data[i1 + Ytilde->size[0] * i] =
            Y->data[((int)bs->data[i1] + Y->size[0] * i) - 1];
      }
    }
    emxInit_real_T(&r5, 2);
    cov(Ytilde, out_cov);
    /* mahalFS computes Mahalanobis distances (in squared units) for each row of
     * matrix Y  */
    /*  */
    /*    d = mahalFS(Y,MU,SIGMA) returns the Mahalanobis distance (in squared
     * units) of */
    /*    each observation (point) in Y using centroid MU and covariance matrix
     * SIGMA */
    /*  */
    /*       d(i) = (Y(i,:)-MU) * SIGMA^(-1) * (Y(i,:)-MU)', */
    /*  */
    /*  */
    /* <a href="matlab: docsearchFS('mahalFS')">Link to the help function</a> */
    /*  */
    /*   Required input arguments: */
    /*  */
    /*  Y :           Input data. Matrix.  */
    /*                n x v data matrix; n observations and v variables. Rows of
     */
    /*                Y represent observations, and columns represent variables.
     */
    /*                Missing values (NaN's) and infinite values (Inf's) are */
    /*                allowed, since observations (rows) with missing or
     * infinite */
    /*                values will automatically be excluded from the */
    /*                computations. */
    /*                 Data Types - single|double */
    /*         MU :   Centroid. Vector. v x 1 vector containing centroid to use
     */
    /*       SIGMA:   Covariance matrix. Matrix. v x v matrix containing
     * covariance matrix which must be used */
    /*         */
    /*  */
    /*   Optional input arguments: */
    /*  */
    /*   Output: */
    /*  */
    /*     d :         Mahalanobis distances. Vector. */
    /*                 n x 1 vector which contains the squared Mahalanobid
     * distances. */
    /*    \[ */
    /*       d(i) = (y_i-\mu)^T \times  \Sigma^{-1} \times (y_i-\mu), \qquad  */
    /*       i=1, 2, \ldots, n */
    /*    \] */
    /*  */
    /*  See also: mahal */
    /*  */
    /*  */
    /*  References: */
    /*  */
    /*  */
    /*  Copyright 2008-2021. */
    /*  Written by FSDA team */
    /*  */
    /*  */
    /* <a href="matlab: docsearchFS('mahalFS')">Link to the help function</a> */
    /*  */
    /* $LastChangedDate::                      $: Date of the last commit */
    /*  Examples: */
    /* { */
    /*     % Example of computation of MD. */
    /*     Y=randn(10,2); */
    /*     MU=median(Y);  */
    /*     SIGMA=[0.3 0.4; 0.4 1]; */
    /*     % Compute MD using as centroid the medians and shape matrix SIGMA */
    /*     d=mahalFS(Y,MU,SIGMA); */
    /* } */
    /*  Beginning of code */
    bsxfun(Y, loc, Ytilde);
    i = r5->size[0] * r5->size[1];
    r5->size[0] = Ytilde->size[0];
    r5->size[1] = Ytilde->size[1];
    emxEnsureCapacity_real_T(r5, i);
    loop_ub = Ytilde->size[0] * Ytilde->size[1];
    for (i = 0; i < loop_ub; i++) {
      r5->data[i] = Ytilde->data[i];
    }
    emxInit_real_T(&r7, 2);
    mrdiv(r5, out_cov);
    i = r7->size[0] * r7->size[1];
    r7->size[0] = r5->size[0];
    r7->size[1] = r5->size[1];
    emxEnsureCapacity_real_T(r7, i);
    loop_ub = r5->size[0] * r5->size[1];
    for (i = 0; i < loop_ub; i++) {
      r7->data[i] = r5->data[i] * Ytilde->data[i];
    }
    emxFree_real_T(&r5);
    sum(r7, bs);
    /*  Scatter plot matrix with the outliers shown with a different symbol */
    /*  Structure returned by function FSM */
    /*  If you wish that the output also contains the list of units not declared
     */
    /*  as outliers, please uncomment the two following lines. */
    /* ListIn=seq(~isnan(bb(:,end-ndecl))); */
    /* out.ListIn=ListIn; */
    i = out_outliers->size[0] * out_outliers->size[1];
    out_outliers->size[0] = outliers->size[0];
    out_outliers->size[1] = 1;
    emxEnsureCapacity_real_T(out_outliers, i);
    loop_ub = outliers->size[0];
    emxFree_real_T(&r7);
    for (i = 0; i < loop_ub; i++) {
      out_outliers->data[i] = outliers->data[i];
    }
    emxFree_real_T(&outliers);
    i = out_loc->size[0] * out_loc->size[1];
    out_loc->size[0] = 1;
    out_loc->size[1] = loc->size[1];
    emxEnsureCapacity_real_T(out_loc, i);
    loop_ub = loc->size[1];
    for (i = 0; i < loop_ub; i++) {
      out_loc->data[i] = loc->data[i];
    }
    i = out_md->size[0] * out_md->size[1];
    out_md->size[0] = bs->size[0];
    out_md->size[1] = 1;
    emxEnsureCapacity_real_T(out_md, i);
    loop_ub = bs->size[0];
    for (i = 0; i < loop_ub; i++) {
      out_md->data[i] = bs->data[i];
    }
    if ((varargin_4_size[0] == 0) || (varargin_4_size[1] == 0)) {
      out_nout_size[0] = nout_size_idx_0;
      out_nout_size[1] = nout_size_idx_1;
      loop_ub = nout_size_idx_0 * nout_size_idx_1;
      for (i = 0; i < loop_ub; i++) {
        out_nout_data[i] = nout_data[i];
      }
    } else {
      out_nout_size[0] = 1;
      out_nout_size[1] = 1;
      out_nout_data[0] = rtNaN;
    }
    out_class_size[0] = 1;
    out_class_size[1] = 3;
    out_class_data[0] = 'F';
    out_class_data[1] = 'S';
    out_class_data[2] = 'M';
  }
  emxFree_real_T(&b_bs);
  emxFree_boolean_T(&r);
  emxFree_real_T(&Ytilde);
  emxFree_real_T(&loc);
  emxFree_real_T(&goodobs);
  emxFree_real_T(&bs);
  emxFree_real_T(&seq);
}

/* End of code generation (FSM.c) */
