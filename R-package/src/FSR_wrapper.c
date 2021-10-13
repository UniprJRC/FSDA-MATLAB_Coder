/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSR_wrapper.c
 *
 * Code generation for function 'FSR_wrapper'
 *
 */

/* Include files */
#include "FSR_wrapper.h"
#include "FSR.h"
#include "FSRcore.h"
#include "FSRmdr.h"
#include "LXS.h"
#include "cat.h"
#include "chkinputR.h"
#include "find.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_initialize.h"
#include "fsdaC_internal_types.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "ifWhileCond.h"
#include "int2str.h"
#include "ixfun.h"
#include "minOrMax.h"
#include "mtimes.h"
#include "nullAssignment.h"
#include "rank.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void FSR_wrapper(const emxArray_real_T *y, const emxArray_real_T *X,
                 bool bsbmfullrank, const double bonflev_data[],
                 const int bonflev_size[2], double h, double init,
                 bool intercept, double lms, bool msg, bool nocheck,
                 double nsamp, const double threshoutX_data[],
                 const int threshoutX_size[2], bool weak, struct_FSR_T *out)
{
  emxArray_boolean_T c_threshoutX_data;
  emxArray_boolean_T *aT;
  emxArray_boolean_T *bT;
  emxArray_boolean_T *c;
  emxArray_boolean_T *c_constcols;
  emxArray_boolean_T *ok;
  emxArray_char_T_1x310 d_X;
  emxArray_int32_T *b_constcols;
  emxArray_int32_T *bsb;
  emxArray_int32_T *iniseq;
  emxArray_int32_T *r;
  emxArray_real_T *Bols;
  emxArray_real_T *INP_S2;
  emxArray_real_T *S2;
  emxArray_real_T *Un;
  emxArray_real_T *b_X;
  emxArray_real_T *b_bs;
  emxArray_real_T *b_y;
  emxArray_real_T *bb;
  emxArray_real_T *bs;
  emxArray_real_T *bsbstepdef;
  emxArray_real_T *c_X;
  emxArray_real_T *constcols;
  emxArray_real_T *constr;
  emxArray_real_T *mdr;
  emxArray_real_T *r1;
  emxArray_real_T *seq;
  struct_LXS_T c_expl_temp;
  struct_LXS_T expl_temp;
  struct_T b_expl_temp;
  const double *X_data;
  const double *y_data;
  double bonflevoutX_data;
  double initdef;
  double threshlevoutX_data;
  double *S2_data;
  double *b_X_data;
  double *b_y_data;
  double *bs_data;
  double *constcols_data;
  double *constr_data;
  double *seq_data;
  int b_threshoutX_size[2];
  int bonflevoutX_size[2];
  int threshlevoutX_size[2];
  unsigned int b;
  int b_i;
  int exitg1;
  int i;
  int iter;
  int loop_ub;
  int n;
  int p;
  int varsize;
  int *bsb_data;
  bool b_threshoutX_data;
  bool guard1 = false;
  bool varargin_1;
  bool varargin_2;
  bool *aT_data;
  bool *bT_data;
  bool *c_data;
  bool *ok_data;
  if (!isInitialized_fsdaC) {
    fsdaC_initialize();
  }
  X_data = X->data;
  y_data = y->data;
  emxInit_real_T(&b_X, 2);
  /*  Wrapper function for FSR (when input option lms is not a struct).  */
  /*  Required input arguments */
  /*  y: a column vector of doubles of any length */
  /*  X: an array of doubles of any dimension */
  /*  Optional input arguments (name / pairs) */
  /*  bsbmfullrank */
  /*  bonflev a scalar double or an empty value */
  /*  h a scalar double */
  /*  init a scalar double */
  /*  intercept */
  /*  lms a scalar double */
  /*  msg is a boolean */
  /*  nocheck is a boolean */
  /*  nsamp a scalar double */
  /*  threshoutX a scalar double or an empty value */
  /*  weak is a boolean */
  /* FSR computes forward search estimator in linear regression */
  /*  */
  /* <a href="matlab: docsearchFS('FSR')">Link to the help function</a> */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*     y:         Response variable. Vector. Response variable, specified as
   */
  /*                a vector of length n, where n is the number of */
  /*                observations. Each entry in y is the response for the */
  /*                corresponding row of X. */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite
   */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*   X :          Predictor variables. Matrix. Matrix of explanatory */
  /*                variables (also called 'regressors') of dimension n x (p-1)
   */
  /*                where p denotes the number of explanatory variables */
  /*                including the intercept. */
  /*                Rows of X represent observations, and columns represent */
  /*                variables. By default, there is a constant term in the */
  /*                model, unless you explicitly remove it using input option */
  /*                intercept, so do not include a column of 1s in X. Missing */
  /*                values (NaN's) and infinite values (Inf's) are allowed, */
  /*                since observations (rows) with missing or infinite values */
  /*                will automatically be excluded from the computations. */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*  bsbmfullrank : Dealing with singular X matrix. Boolean. This option tells
   */
  /*                  how to behave in case subset at step m */
  /*                  (say bsbm) produces a singular X. In other words, */
  /*                  this options controls what to do when rank(X(bsbm,:)) is
   */
  /*                  smaller then number of explanatory variables. If */
  /*                  bsbmfullrank =true (default) these units (whose number is
   */
  /*                  say mnofullrank) are constrained to enter the search in */
  /*                  the final n-mnofullrank steps else the search continues */
  /*                  using as estimate of beta at step m the estimate of beta
   */
  /*                  found in the previous step. */
  /*                Example - 'bsbmfullrank',false */
  /*                Data Types - logical */
  /*  */
  /*       bonflev  : Signal to use to identify outliers. Scalar or empty value
   * (default). */
  /*                Option to be used if the distribution of the data is */
  /*                  strongly non normal and, thus, the general signal */
  /*                  detection rule based on consecutive exceedances cannot be
   */
  /*                  used. In this case bonflev can be: */
  /*                  - a scalar smaller than 1 which specifies the confidence
   */
  /*                    level for a signal and a stopping rule based on the */
  /*                    comparison of the minimum MD with a */
  /*                    Bonferroni bound. For example if bonflev=0.99 the */
  /*                    procedure stops when the trajectory exceeds for the */
  /*                    first time the 99% bonferroni bound. */
  /*                  - A scalar value greater than 1. In this case the */
  /*                    procedure stops when the residual trajectory exceeds */
  /*                    for the first time this value. */
  /*                  Default value is '', which means to rely on general rules
   */
  /*                  based on consecutive exceedances. */
  /*                Example - 'bonflev',0.99 */
  /*                Data Types - double */
  /*  */
  /*            h   : The number of observations that have determined the least
   */
  /*                  trimmed squares estimator. Scalar. h is an integer */
  /*                  greater or equal than p but smaller then n. Generally if
   */
  /*                  the purpose is outlier detection h=[0.5*(n+p+1)] (default
   */
  /*                  value). h can be smaller than this threshold if the */
  /*                  purpose is to find subgroups of homogeneous observations.
   */
  /*                  In this function the LTS/LMS estimator is used just to */
  /*                  initialize the search. */
  /*                  Example - 'h',round(n*0,75) */
  /*                  Data Types - double */
  /*  */
  /*        init    : Search initialization. Scalar. It specifies the initial */
  /*                  subset size to start monitoring exceedances of minimum */
  /*                  deletion residual, if init is not specified it set equal
   */
  /*                  to: */
  /*                    p+1, if the sample size is smaller than 40; */
  /*                    min(3*p+1,floor(0.5*(n+p+1))), otherwise. */
  /*                Example - 'init',100 starts monitoring from step m=100 */
  /*                Data Types - double */
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
  /*        lms     : Criterion to use to find the initial */
  /*                  subset to initialize the search. Scalar,  vector or
   * structure. */
  /*                  lms specifies the criterion to use to find the initial */
  /*                  subset to initialize the search (LMS, LTS with */
  /*                  concentration steps, LTS without concentration steps */
  /*                  or subset supplied directly by the user). */
  /*                  The default value is 1 (Least Median of Squares */
  /*                  is computed to initialize the search). On the other hand,
   */
  /*                  if the user wants to initialze the search with LTS with */
  /*                  all the default options for concentration steps then */
  /*                  lms=2. If the user wants to use LTS without */
  /*                  concentration steps, lms can be a scalar different from 1
   */
  /*                  or 2. If lms is a struct it is possible to control a */
  /*                  series of options for concentration steps (for more */
  /*                  details see option lms inside LXS.m) */
  /*                  LXS.m. */
  /*                  If, on the other hand, the user wants to initialize the */
  /*                  search with a prespecified set of units there are two */
  /*                  possibilities: */
  /*                  1) lms can be a vector with length greater than 1 which */
  /*                  contains the list of units forming the initial subset. For
   */
  /*                  example, if the user wants to initialize the search */
  /*                  with units 4, 6 and 10 then lms=[4 6 10]; */
  /*                  2) lms is a struct which contains a field named bsb which
   */
  /*                  contains the list of units to initialize the search. For
   */
  /*                  example, in the case of simple regression through the */
  /*                  origin with just one explanatory variable, if the user */
  /*                  wants to initialize the search with unit 3 then */
  /*                  lms=struct; lms.bsb=3; */
  /*                  Example - 'lms',1 */
  /*                  Data Types - double */
  /*  */
  /*        msg    :  Level of output to display. Boolean. It controls whether
   */
  /*                  to display or not messages on the screen */
  /*                  If msg==true (default) messages are displayed on the
   * screen about */
  /*                    step in which signal took place */
  /*                  else no message is displayed on the screen. */
  /*                Example - 'msg',false */
  /*                Data Types - logical */
  /*  */
  /*        nocheck : Check input arguments. Boolean. If nocheck is equal to */
  /*                  true no check is performed on matrix y and matrix X. */
  /*                  Notice that y and X are left unchanged. In other words */
  /*                  the additional column of ones for the intercept is not */
  /*                  added. As default nocheck=false. */
  /*                Example - 'nocheck',true */
  /*                Data Types - double */
  /*  */
  /*        nsamp   : Number of subsamples which will be extracted to find the
   */
  /*                  robust estimator. Scalar. If nsamp=0 all subsets will be
   * extracted. */
  /*                  They will be (n choose p). */
  /*                  If the number of all possible subset is <1000 the */
  /*                  default is to extract all subsets otherwise just 1000. */
  /*                  Example - 'nsamp',1000 */
  /*                  Data Types - double */
  /*  */
  /*   threshoutX  : threshold to bound the effect of high leverage units. */
  /*                 empty value (default) or scalar equal to 1 or structure. */
  /*                If the design matrix X contains several high leverage units
   */
  /*                (that is units which are very far from the bulk of the */
  /*                data), it may happen that the best subset of LXS may include
   * some */
  /*                of these units, or it may happen that these units have a */
  /*                deletion residual which is very small due to their */
  /*                extremely high value of $h_i$. bonflevoutX=1 imposes the */
  /*                constraints that: */
  /*                1) the extracted subsets which contain */
  /*                at least one unit declared as outlier in the X space by FSM
   */
  /*                using a Bonferronized confidence level of 0.99 */
  /*                are removed from the list of candidate subsets to find the
   */
  /*                LXS solution. */
  /*                2) imposes the contrainst that $h_i(m^*)$ */
  /*                cannot exceed $10 \times p/m$. */
  /*                If threshoutX is a structure, it contains the following */
  /*                fields: */
  /*                threshoutX.bonflevoutX = specifies the Bonferronized */
  /*                confidence level to be used to find the outliers in the X */
  /*                space. If this field is not present a 99 per cent */
  /*                confidence level is used. */
  /*                threshoutX.threshlevoutX = specifies the threshold to bound
   */
  /*                the effect of high leverage units in the computation of */
  /*                deletion residuals. In the computation of */
  /*                the quantity $h_i(m^*) = x_i^T\{X(m^*)^TX(m^*)\}^{-1}x_i$,
   */
  /*                $i \notin S^{(m)}_*$, units which very far from the bulk of
   */
  /*                the data (represented by $X(m^*)$) will have a huge value */
  /*                of $h_i(m^*)$ and consequently of the deletion residuals. */
  /*                In order to tackle this problem it is possible to put a */
  /*                bound to the value of $h_i(m^*)$. For example */
  /*                threshoutX.threshlevoutX=r imposes the contrainst that
   * $h_i(m^*)$ */
  /*                cannot exceed $r \times p/m$. If this field is not present
   */
  /*                the default threshold of 10 is imposed. */
  /*                Example - 'threshoutX',1 */
  /*                Data Types - double */
  /*  */
  /*      weak:     Indicator to use a different decision rule to detect */
  /*                the signal and flag outliers. false (default) | true. */
  /*                If weak=false default FSRcore values are used, */
  /*                if weak=true 'stronger' quantiles are used  as a */
  /*                decision rule to trim outliers and VIOM outliers */
  /* 				are the ones entering the Search after the first signal.
   */
  /*                Example - 'weak',true */
  /*                Data Types - logical */
  /*  */
  /*        plots   : Plot on the screen. Scalar. */
  /*                  If plots=1 (default) the plot of minimum deletion */
  /*                  residual with envelopes based on n observations and the */
  /*                  scatterplot matrix with the outliers highlighted is */
  /*                  produced. */
  /*                  If plots=2 the user can also monitor the intermediate */
  /*                  plots based on envelope superimposition. */
  /*                  Else no plot is produced. */
  /*                  Example - 'plots',1 */
  /*                  Data Types - double */
  /*  */
  /*     bivarfit : Superimpose bivariate least square lines. Character. This
   * option adds */
  /*                  one or more least squares lines, based on */
  /*                  SIMPLE REGRESSION of y on Xi, to the plots of y|Xi. */
  /*                  bivarfit = '' */
  /*                    is the default: no line is fitted. */
  /*                  bivarfit = '1' */
  /*                    fits a single ols line to all points of each bivariate
   */
  /*                    plot in the scatter matrix y|X. */
  /*                  bivarfit = '2' */
  /*                    fits two ols lines: one to all points and another to */
  /*                    the group of the genuine observations. The group of the
   */
  /*                    potential outliers is not fitted. */
  /*                  bivarfit = '0' */
  /*                    fits one ols line to each group. This is useful for the
   */
  /*                    purpose of fitting mixtures of regression lines. */
  /*                  bivarfit = 'i1' or 'i2' or 'i3' etc. fits */
  /*                    an ols line to a specific group, the one with */
  /*                    index 'i' equal to 1, 2, 3 etc. Again, useful in case */
  /*                    of mixtures. */
  /*                Example - 'bivarfit','2' */
  /*                Data Types - char */
  /*  */
  /*       labeladd : Add outlier labels in plot. Character. If this option is
   */
  /*                  '1',  we label the outliers with the */
  /*                  unit row index in matrices X and y. The default value is
   */
  /*                  labeladd='', i.e. no label is added. */
  /*                Example - 'labeladd','1' */
  /*                Data Types - char */
  /*  */
  /*        multivarfit : Superimpose multivariate least square lines.
   * Character. */
  /*                  This option adds one or more least square lines, based on
   */
  /*                  MULTIVARIATE REGRESSION of y on X, to the plots of y|Xi.
   */
  /*                  multivarfit = '' */
  /*                    is the default: no line is fitted. */
  /*                  multivarfit = '1' */
  /*                    fits a single ols line to all points of each bivariate
   */
  /*                    plot in the scatter matrix y|X. The line added to the */
  /*                    scatter plot y|Xi is avconst + Ci*Xi, where Ci is the */
  /*                    coefficient of Xi in the multivariate regression and */
  /*                    avconst is the effect of all the other explanatory */
  /*                    variables different from Xi evaluated at their centroid
   */
  /*                    (that is overline{y}'C)) */
  /*                  multivarfit = '2' */
  /*                    equal to multivarfit ='1' but this time we also add the
   */
  /*                    line based on the group of unselected observations */
  /*                    (i.e. the normal units). */
  /*                Example - 'multivarfit','1' */
  /*                Data Types - char */
  /*  */
  /*        nameX  : Add variable labels in plot. Cell array of strings. Cell */
  /*                  array of strings of length p containing the labels of */
  /*                  the variables of the regression dataset. If it is empty */
  /*                  (default) the sequence X1, ..., Xp will be created */
  /*                  automatically */
  /*                Example - 'nameX',{'NameVar1','NameVar2'} */
  /*                Data Types - cell */
  /*  */
  /*        namey  :  Add response label. Character. String containing the */
  /*                  label of the response */
  /*                Example - 'namey','NameOfResponse' */
  /*                Data Types - char */
  /*  */
  /*         tag    : tags to the plots which are created. */
  /*                  character or cell array of characters. */
  /*                  This option enables to add a tag to the plots which are */
  /*                  created. The default tag names are: */
  /*                  fsr_mdrplot for the plot of mdr based on all the */
  /*                  observations; */
  /*                  fsr_yXplot for the plot of y against each column of X */
  /*                  with the outliers highlighted; */
  /*                  fsr_resuperplot for the plot of resuperimposed envelopes.
   * The */
  /*                  first plot with 4 panel of resuperimposed envelopes has */
  /*                  tag fsr_resuperplot1, the second  fsr_resuperplot2 ... */
  /*                  If tag is character or a cell of characters of length 1,
   */
  /*                  it is possible to specify the tag for the plot of mdr */
  /*                  based on all the observations; */
  /*                  If tag is a cell of length 2 it is possible to control */
  /*                  both the tag for the plot of mdr based on all the */
  /*                  observations and the tag for the yXplot with outliers */
  /*                  highlighted. */
  /*                  If tag is a cell of length 3 the third element specifies
   */
  /*                  the names of the plots of resuperimposed envelopes. */
  /*                  Example - 'tag',{'plmdr' 'plyXplot'}; */
  /*                  Data Types - char or cell */
  /*  */
  /*        xlim   : Control x scale in plot. Vector. Vector with two elements
   */
  /*                minimum and maximum on the x axis. Default value is '' */
  /*                (automatic scale) */
  /*                Example - 'xlim',[0,10] sets the minimum value to 0 and the
   */
  /*                max to 10 on the x axis */
  /*                Data Types - double */
  /*  */
  /*        ylim   :  Control y scale in plot. Vector. Vector with two elements
   */
  /*                  controlling minimum and maximum on the y axis. */
  /*                  Default value is '' (automatic scale) */
  /*                Example - 'ylim',[0,10] sets the minimum value to 0 and the
   */
  /*                max to 10 on the y axis */
  /*                Data Types - double */
  /*  */
  /*  Output: */
  /*  */
  /*          out:   structure which contains the following fields */
  /*  */
  /*  out.ListOut  = row vector containing the list of the units declared as */
  /*                 outliers or NaN if the sample is homogeneous. If */
  /*  out.outliers = out.ListOut. This field is added for homogeneity with the
   */
  /*                 other robust estimators and is equal to out.ListOut. */
  /*  out.beta   =  p-by-1 vector containing the estimated regression */
  /*                parameters (in step n-k). */
  /*  out.scale  =  scalar containing the estimate of the scale (sigma). */
  /*  */
  /*  out.residuals= n x 1 vector containing the estimates of the robust */
  /*                 scaled residuals. */
  /*  out.fittedvalues= n x 1 vector containing the fitted values. */
  /*  out.mdr    =  (n-init) x 2 matrix */
  /*                1st col = fwd search index */
  /*                2nd col = value of minimum deletion residual in each step */
  /*                of the fwd search */
  /*  out.Un     =  (n-init) x 11 matrix which contains the unit(s) included */
  /*                in the subset at each step of the fwd search. */
  /*                REMARK: in every step the new subset is compared with the */
  /*                old subset. Un contains the unit(s) present in the new */
  /*                subset but not in the old one. */
  /*                Un(1,2) for example contains the unit included in step */
  /*                init+1. */
  /*                Un(end,2) contains the units included in the final step */
  /*                of the search. */
  /*  out.nout    = 2 x 5 matrix containing the number of times mdr went out */
  /*                of particular quantiles. */
  /*                First row contains quantiles 1 99 99.9 99.99 99.999. */
  /*                Second row contains the frequency distribution. */
  /*  out.class  =  'FSR'. */
  /*  out.VIOMout = m x 1 vector containing the list of the units declared as */
  /*                VIOM outliers or NaN if they are not present. */
  /*                This field is present only if weak = true. */
  /*  out.ListCl  = (n-m) x 1 vector of non-outlying units. */
  /*                This field is present only if weak = true. */
  /*  */
  /*  See also: FSReda, LXS.m */
  /*  */
  /*  References: */
  /*  */
  /*  Riani, M., Atkinson, A.C. and Cerioli, A. (2009), Finding an unknown */
  /*  number of multivariate outliers, "Journal of the Royal Statistical */
  /*  Society Series B", Vol. 71, pp. 201-221. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* <a href="matlab: docsearchFS('FSR')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % FSR with all default options. */
  /*     % Run this code to see the output shown in the help file. */
  /*     n=200; */
  /*     p=3; */
  /*     randn('state', 123456); */
  /*     X=randn(n,p); */
  /*     % Uncontaminated data */
  /*     y=randn(n,1); */
  /*     % Contaminated data */
  /*     ycont=y; */
  /*     ycont(1:5)=ycont(1:5)+6; */
  /*     [out]=FSR(ycont,X,'plots',2); */
  /* } */
  /* { */
  /*     %% FSR with optional arguments. */
  /*     % Run this code to see the output shown in the help file. */
  /*     state=100; */
  /*     randn('state', state); */
  /*     n=100; */
  /*     X=randn(n,3); */
  /*     bet=[3;4;5]; */
  /*     y=3*randn(n,1)+X*bet; */
  /*     y(1:20)=y(1:20)+13; */
  /*     [outFS]=FSR(y,X,'plots',2); */
  /*     % The envelopes based on all the observations show that in the central
   */
  /*     % part of the search the observed curve is well beyond the extreme */
  /*     % thresholds. More precisely, the message inside the graph informs that
   */
  /*     % the signal took place in step 81 because the value of minimum
   * deletion */
  /*     % residual in this step was greater than 99.999% threshold. */
  /*     % Once a signal takes place the envelopes are resuperimposed until a */
  /*     % stopping rule is fulfilled. */
  /*     % The procedure of resuperimposing envelopes in this case stops when */
  /*     % n = 85, the first time in which we have a value of rmin(m) for */
  /*     % $n>=m^\dagger-1$ greater than the 99% threshold. The group can */
  /*     % therefore be considered as homogeneous up to when we include 84
   * units. */
  /* } */
  /* { */
  /*     % FSR with optional arguments. */
  /*     % Monitor the exceedances from m=60 without showing plots. */
  /*     n=200; */
  /*     p=3; */
  /*     X=rand(n,p); */
  /*     y=rand(n,1); */
  /*     [out]=FSR(y,X,'init',60,'plots',0); */
  /* } */
  /* { */
  /*     % Initialize the search with the subsample which produces the smallest
   */
  /*     % [h/n] quantile of squared residuals. */
  /*     n=200; */
  /*     p=3; */
  /*     X=randn(n,p); */
  /*     y=randn(n,1); */
  /*     [out]=FSR(y,X,'h',120); */
  /* } */
  /* { */
  /*     % Extract all possible subsamples in order to find susbet to initialize
   */
  /*     % the search. */
  /*     n=50; */
  /*     p=3; */
  /*     X=randn(n,p); */
  /*     y=randn(n,1); */
  /*     [out]=FSR(y,X,'nsamp',0); */
  /* } */
  /* { */
  /*     %% Example for various combinations of the labeladd, bivarfit */
  /*     % and multivarfit options. */
  /*     n=200; */
  /*     p=3; */
  /*     X=randn(n,p); */
  /*     y=randn(n,1); */
  /*     [out]=FSR(y,X, 'labeladd','1','bivarfit','1','multivarfit','1'); */
  /* } */
  /* { */
  /*     % Example of use of options xlim and ylim (Hawkins data). */
  /*     load('hawkins.txt','hawkins'); */
  /*     y=hawkins(:,9); */
  /*     X=hawkins(:,1:8); */
  /*     % Use of FSR starting with 1000 subsamples */
  /*     [out]=FSR(y,X,'nsamp',1000); */
  /*     % Use of FSR starting with 1000 subsamples */
  /*     % focusing in the output plots to the interval 1-6 on the y axis and */
  /*     % to steps 30-90. */
  /*     [out]=FSR(y,X,'nsamp',1000,'ylim',[1 6],'xlim',[30 90]); */
  /* } */
  /* { */
  /*     % Example of use of options nameX and nameY with contaminated data. */
  /*     n=200; */
  /*     p=3; */
  /*     state1=123498; */
  /*     randn('state', state1); */
  /*     X=randn(n,p); */
  /*     y=randn(n,1); */
  /*     kk=33; */
  /*     % shift contamination of the first 33 units of the response */
  /*     y(1:kk)=y(1:kk)+6; */
  /*     nameX={'age', 'salary', 'position'}; */
  /*     namey='salary'; */
  /*     [out]=FSR(y,X,'nameX',nameX,'namey',namey); */
  /* } */
  /* { */
  /*     % Example of point mass contamination. */
  /*     n=130; */
  /*     p=5; */
  /*     state1=123498; */
  /*     randn('state', state1); */
  /*     X=randn(n,p); */
  /*     y=randn(n,1); */
  /*     kk=30; */
  /*     % point mass contamination of the first kk units */
  /*     X(1:kk,:)=1; */
  /*     y(1:kk)=3; */
  /*     [out]=FSR(y,X); */
  /* } */
  /* { */
  /*     % Example of the use of option threshoutX. */
  /*     % In this example a set of remote units is added to a cloud of points.
   */
  /*     % The purpose of this example is to show that in presence of units very
   * far */
  /*     % from the bulk of th data (bad or good elverage points) it is
   * necessary to */
  /*     % bound their effect putting a constraint on their leverage
   * hi=xi'(X'X)xi */
  /*     rng('default') */
  /*     rng(10000) */
  /*     n=100; */
  /*     p=1; */
  /*     X=randn(n,p); */
  /*     epsil=10; */
  /*     beta=ones(p,1); */
  /*     y=X*beta+randn(n,1)*epsil; */
  /*     % Add 10 very remote points */
  /*     add=3; */
  /*     Xadd=X(1:add,:)+5000; */
  /*     yadd=y(1:add)+200; */
  /*     Xall=[X;Xadd]; */
  /*     yall=[y;yadd]; */
  /*     outNoLevConstr=FSR(yall,Xall,'msg',0,'ylim',[0 5]); */
  /*     xylim=axis; */
  /*     ylabel('mdr') */
  /*     title('FS without bound on the leverage') */
  /*     % threshoutX is passed as astructure */
  /*     threshoutX=struct; */
  /*     threshoutX.threshlevoutX=5; */
  /*     % Use the instruction below if you wish to change the confidence level
   * to */
  /*     % be used to find outlierd in the X space */
  /*     % threshoutX.bonflevoutX=0.99 */
  /*     outWithLevConstr=FSR(yall,Xall,'threshoutX',threshoutX,'msg',0,'ylim',[0
   * 5]); */
  /*     title('FS with bound on the leverage') */
  /* } */
  /* { */
  /*     %% Example to detect both VIOM and MSOM outliers using weak=true. */
  /*     % loyalty data */
  /*     load('loyalty'); */
  /*     y = loyalty{:,end}; */
  /*     X = loyalty{:,1}; */
  /*     xla = 'Number of visits'; */
  /*     yla = 'Amount spent (in Euros)'; */
  /*     n = size(X,1); */
  /*     % run FSR to detect a weaker signal indicating VIOM */
  /*     FSRoutw = FSR(y, X, 'intercept', false, ... */
  /*         'init', floor(n/2)-1, 'msg', 0, 'plots', 1, 'weak', true); */
  /*     trim_FSR =  FSRoutw.outliers; */
  /*     down_FSR =  FSRoutw.VIOMout; */
  /*     clean_FSR = FSRoutw.ListCl; */
  /*     % plotting */
  /*     figure */
  /*     plot(X(clean_FSR, :), y(clean_FSR), 'b.', 'MarkerSize', 15,
   * 'DisplayName', 'clean'); */
  /*     hold('on') */
  /*     plot(X(trim_FSR, :), y(trim_FSR), 'r.', 'MarkerSize', 15,
   * 'DisplayName', 'MSOM'); */
  /*     plot(X(down_FSR, :), y(down_FSR), 'g.', 'MarkerSize', 15,
   * 'DisplayName', 'VIOM'); */
  /*     drawnow */
  /*     clb = clickableMultiLegend(gca, 'Location', 'northeast'); */
  /*     set(clb,'FontSize',12); */
  /*     xlabel(xla); */
  /*     ylabel(yla); */
  /*     box */
  /*     cascade */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checking */
  i = b_X->size[0] * b_X->size[1];
  b_X->size[0] = X->size[0];
  b_X->size[1] = X->size[1];
  emxEnsureCapacity_real_T(b_X, i);
  b_X_data = b_X->data;
  loop_ub = X->size[0] * X->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_X_data[i] = X_data[i];
  }
  emxInit_real_T(&b_y, 1);
  i = b_y->size[0];
  b_y->size[0] = y->size[0];
  emxEnsureCapacity_real_T(b_y, i);
  b_y_data = b_y->data;
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_y_data[i] = y_data[i];
  }
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
  emxInit_real_T(&bs, 1);
  emxInit_int32_T(&bsb, 1);
  emxInit_boolean_T(&aT, 1);
  emxInit_boolean_T(&bT, 1);
  emxInit_boolean_T(&c, 1);
  emxInit_real_T(&constcols, 2);
  constcols_data = constcols->data;
  emxInit_real_T(&c_X, 2);
  if (nocheck) {
    p = X->size[1];
    n = X->size[0];
  } else {
    /*  The first argument which is passed is y */
    /*  The second argument which is passed is X */
    /*  Check dimension consistency of X and y */
    i = bs->size[0];
    bs->size[0] = X->size[1];
    emxEnsureCapacity_real_T(bs, i);
    bs_data = bs->data;
    loop_ub = X->size[1];
    for (i = 0; i < loop_ub; i++) {
      bs_data[i] = 1.0;
    }
    emxInit_boolean_T(&ok, 1);
    mtimes(X, bs, b_y);
    b_y_data = b_y->data;
    /*  Observations with missing or infinite values are removed from X and y */
    i = ok->size[0];
    ok->size[0] = b_y->size[0];
    emxEnsureCapacity_boolean_T(ok, i);
    ok_data = ok->data;
    loop_ub = b_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      ok_data[i] = rtIsInf(b_y_data[i]);
    }
    i = bT->size[0];
    bT->size[0] = b_y->size[0];
    emxEnsureCapacity_boolean_T(bT, i);
    bT_data = bT->data;
    loop_ub = b_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      bT_data[i] = rtIsNaN(b_y_data[i]);
    }
    i = aT->size[0];
    aT->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(aT, i);
    aT_data = aT->data;
    loop_ub = y->size[0];
    for (i = 0; i < loop_ub; i++) {
      aT_data[i] = rtIsInf(y_data[i]);
    }
    i = c->size[0];
    c->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(c, i);
    c_data = c->data;
    loop_ub = y->size[0];
    for (i = 0; i < loop_ub; i++) {
      c_data[i] = rtIsNaN(y_data[i]);
    }
    if (ok->size[0] == aT->size[0]) {
      loop_ub = ok->size[0];
      for (i = 0; i < loop_ub; i++) {
        ok_data[i] =
            ((!ok_data[i]) && (!bT_data[i]) && ((!aT_data[i]) && (!c_data[i])));
      }
    } else {
      ib_binary_expand_op(ok, bT, aT, c);
      ok_data = ok->data;
    }
    varsize = ok->size[0] - 1;
    iter = 0;
    for (b_i = 0; b_i <= varsize; b_i++) {
      if (ok_data[b_i]) {
        iter++;
      }
    }
    i = bsb->size[0];
    bsb->size[0] = iter;
    emxEnsureCapacity_int32_T(bsb, i);
    bsb_data = bsb->data;
    loop_ub = 0;
    for (b_i = 0; b_i <= varsize; b_i++) {
      if (ok_data[b_i]) {
        bsb_data[loop_ub] = b_i + 1;
        loop_ub++;
      }
    }
    loop_ub = X->size[1];
    i = b_X->size[0] * b_X->size[1];
    b_X->size[0] = bsb->size[0];
    b_X->size[1] = X->size[1];
    emxEnsureCapacity_real_T(b_X, i);
    b_X_data = b_X->data;
    for (i = 0; i < loop_ub; i++) {
      varsize = bsb->size[0];
      for (b_i = 0; b_i < varsize; b_i++) {
        b_X_data[b_i + b_X->size[0] * i] =
            X_data[(bsb_data[b_i] + X->size[0] * i) - 1];
      }
    }
    varsize = ok->size[0] - 1;
    iter = 0;
    for (b_i = 0; b_i <= varsize; b_i++) {
      if (ok_data[b_i]) {
        iter++;
      }
    }
    emxInit_int32_T(&r, 1);
    i = r->size[0];
    r->size[0] = iter;
    emxEnsureCapacity_int32_T(r, i);
    bsb_data = r->data;
    loop_ub = 0;
    for (b_i = 0; b_i <= varsize; b_i++) {
      if (ok_data[b_i]) {
        bsb_data[loop_ub] = b_i + 1;
        loop_ub++;
      }
    }
    emxFree_boolean_T(&ok);
    i = b_y->size[0];
    b_y->size[0] = r->size[0];
    emxEnsureCapacity_real_T(b_y, i);
    b_y_data = b_y->data;
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_y_data[i] = y_data[bsb_data[i] - 1];
    }
    /*  Now n is the new number of non missing observations */
    n = r->size[0];
    /*  Now add to matrix X a column of ones for the intercept. */
    /*  If a value for the intercept has not been specified or if this value is
     */
    /*  equal to 1, add to matrix X the column of ones. The position of */
    /*  the option intercept in chklist, which contains the optional is */
    /*  given in chkint. chkint is empty if the option intercept is not */
    /*  specified. */
    /* if coder.target('MATLAB') */
    /* else */
    /*     interceptPresent=vvarargin{2*chkint}==true; */
    /* end */
    if (intercept) {
      i = bs->size[0];
      bs->size[0] = r->size[0];
      emxEnsureCapacity_real_T(bs, i);
      bs_data = bs->data;
      loop_ub = r->size[0];
      for (i = 0; i < loop_ub; i++) {
        bs_data[i] = 1.0;
      }
      i = c_X->size[0] * c_X->size[1];
      c_X->size[0] = b_X->size[0];
      c_X->size[1] = b_X->size[1];
      emxEnsureCapacity_real_T(c_X, i);
      constr_data = c_X->data;
      loop_ub = b_X->size[0] * b_X->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        constr_data[i] = b_X_data[i];
      }
      b_cat(bs, c_X, b_X);
      b_X_data = b_X->data;
    }
    emxInit_real_T(&r1, 2);
    /*  constcols = scalar vector of the indices of possible constant columns.
     */
    maximum(b_X, constcols);
    constcols_data = constcols->data;
    minimum(b_X, r1);
    constr_data = r1->data;
    emxInit_int32_T(&b_constcols, 2);
    if (constcols->size[1] == r1->size[1]) {
      emxInit_boolean_T(&c_constcols, 2);
      i = c_constcols->size[0] * c_constcols->size[1];
      c_constcols->size[0] = 1;
      c_constcols->size[1] = constcols->size[1];
      emxEnsureCapacity_boolean_T(c_constcols, i);
      ok_data = c_constcols->data;
      loop_ub = constcols->size[1];
      for (i = 0; i < loop_ub; i++) {
        ok_data[i] = (constcols_data[i] - constr_data[i] == 0.0);
      }
      eml_find(c_constcols, b_constcols);
      bsb_data = b_constcols->data;
      emxFree_boolean_T(&c_constcols);
    } else {
      hb_binary_expand_op(b_constcols, constcols, r1);
      bsb_data = b_constcols->data;
    }
    emxFree_real_T(&r1);
    i = constcols->size[0] * constcols->size[1];
    constcols->size[0] = 1;
    constcols->size[1] = b_constcols->size[1];
    emxEnsureCapacity_real_T(constcols, i);
    constcols_data = constcols->data;
    loop_ub = b_constcols->size[1];
    for (i = 0; i < loop_ub; i++) {
      constcols_data[i] = bsb_data[i];
    }
    if (constcols->size[1] > 1) {
      loop_ub = constcols->size[1] - 2;
      i = b_constcols->size[0] * b_constcols->size[1];
      b_constcols->size[0] = 1;
      b_constcols->size[1] = constcols->size[1] - 1;
      emxEnsureCapacity_int32_T(b_constcols, i);
      bsb_data = b_constcols->data;
      for (i = 0; i <= loop_ub; i++) {
        bsb_data[i] = (int)constcols_data[i + 1];
      }
      nullAssignment(b_X, b_constcols);
      b_X_data = b_X->data;
    }
    emxFree_int32_T(&b_constcols);
    /*  p is the number of parameters to be estimated */
    p = b_X->size[1];
    if (r->size[0] < b_X->size[1]) {
      int2str(b_X->size[0], d_X.data, d_X.size);
      int2str(b_X->size[1], d_X.data, d_X.size);
    }
    emxFree_int32_T(&r);
    local_rank(b_X);
  }
  /*  User options */
  /*  If the number of all possible subsets is <1000 the default is to extract
   */
  /*  all subsets, otherwise just 1000. */
  /*  Notice that a fast approximation of the bc computed above is: */
  /*  ncomb=floor(exp( gammaln(n+1) - gammaln(n-p+1) - gammaln(p+1) ) + .5); */
  /*  The default value of h is floor(0.5*(n+p+1)) */
  /*  ini0=init; */
  /*  tag */
  /*  Write in structure 'options' the options chosen by the user */
  /*  Make sure that nsamp and h are not empty */
  if ((threshoutX_size[0] == 0) || (threshoutX_size[1] == 0)) {
    bonflevoutX_size[0] = 0;
    bonflevoutX_size[1] = 0;
    threshlevoutX_size[0] = 0;
    threshlevoutX_size[1] = 0;
  } else {
    b_threshoutX_size[0] = 1;
    b_threshoutX_size[1] = 1;
    b_threshoutX_data = (threshoutX_data[0] == 1.0);
    c_threshoutX_data.data = &b_threshoutX_data;
    c_threshoutX_data.size = &b_threshoutX_size[0];
    c_threshoutX_data.allocatedSize = 1;
    c_threshoutX_data.numDimensions = 2;
    c_threshoutX_data.canFreeData = false;
    if (b_ifWhileCond(&c_threshoutX_data)) {
      bonflevoutX_size[0] = 1;
      bonflevoutX_size[1] = 1;
      bonflevoutX_data = 0.99;
      threshlevoutX_size[0] = 1;
      threshlevoutX_size[1] = 1;
      threshlevoutX_data = 10.0;
    }
  }
  /*  Necessary for MATLAb C Coder initialization */
  /*  Initialize constr as a column vector of variable size whose elements */
  /*  are greater than n is such a way that no unit is constrained to enter the
   * final steps */
  b = (unsigned int)n << 1;
  if (b < n + 1U) {
    constcols->size[0] = 1;
    constcols->size[1] = 0;
  } else {
    i = constcols->size[0] * constcols->size[1];
    constcols->size[0] = 1;
    b_i = (int)b - n;
    constcols->size[1] = b_i;
    emxEnsureCapacity_real_T(constcols, i);
    constcols_data = constcols->data;
    loop_ub = b_i - 1;
    for (i = 0; i <= loop_ub; i++) {
      constcols_data[i] = ((unsigned int)n + i) + 1U;
    }
  }
  emxInit_real_T(&constr, 1);
  i = constr->size[0];
  constr->size[0] = constcols->size[1];
  emxEnsureCapacity_real_T(constr, i);
  constr_data = constr->data;
  loop_ub = constcols->size[1];
  for (i = 0; i < loop_ub; i++) {
    constr_data[i] = constcols_data[i];
  }
  if (n < 40) {
    initdef = (double)p + 1.0;
  } else {
    initdef = fmin(3.0 * (double)p + 1.0,
                   floor(0.5 * (((double)n + (double)p) + 1.0)));
  }
  emxInit_real_T(&bsbstepdef, 2);
  if (n <= 5000) {
    i = bsbstepdef->size[0] * bsbstepdef->size[1];
    bsbstepdef->size[0] = 1;
    bsbstepdef->size[1] = 1;
    emxEnsureCapacity_real_T(bsbstepdef, i);
    constr_data = bsbstepdef->data;
    constr_data[0] = 0.0;
  } else {
    emxInit_int32_T(&iniseq, 2);
    i = iniseq->size[0] * iniseq->size[1];
    iniseq->size[0] = 1;
    loop_ub = div_nde_s32_floor(100 * (int)floor((double)n / 100.0) - 100, 100);
    iniseq->size[1] = loop_ub + 1;
    emxEnsureCapacity_int32_T(iniseq, i);
    bsb_data = iniseq->data;
    for (i = 0; i <= loop_ub; i++) {
      bsb_data[i] = 100 * i + 100;
    }
    varsize = iniseq->size[1] - 1;
    iter = 0;
    for (b_i = 0; b_i <= varsize; b_i++) {
      if (bsb_data[b_i] > initdef) {
        iter++;
      }
    }
    loop_ub = 0;
    for (b_i = 0; b_i <= varsize; b_i++) {
      if (bsb_data[b_i] > initdef) {
        bsb_data[loop_ub] = bsb_data[b_i];
        loop_ub++;
      }
    }
    i = iniseq->size[0] * iniseq->size[1];
    iniseq->size[0] = 1;
    iniseq->size[1] = iter;
    emxEnsureCapacity_int32_T(iniseq, i);
    bsb_data = iniseq->data;
    i = bsbstepdef->size[0] * bsbstepdef->size[1];
    bsbstepdef->size[0] = 1;
    bsbstepdef->size[1] = iter + 1;
    emxEnsureCapacity_real_T(bsbstepdef, i);
    constr_data = bsbstepdef->data;
    constr_data[0] = initdef;
    for (i = 0; i < iter; i++) {
      constr_data[i + 1] = bsb_data[i];
    }
    emxFree_int32_T(&iniseq);
  }
  emxInit_real_T(&Un, 2);
  emxInit_real_T(&bb, 2);
  emxInit_real_T(&Bols, 2);
  emxInit_real_T(&S2, 2);
  /*  Matlab C Coder initializations. */
  i = Un->size[0] * Un->size[1];
  Un->size[0] = 1;
  Un->size[1] = 1;
  emxEnsureCapacity_real_T(Un, i);
  constr_data = Un->data;
  constr_data[0] = 0.0;
  i = bb->size[0] * bb->size[1];
  bb->size[0] = 1;
  bb->size[1] = 1;
  emxEnsureCapacity_real_T(bb, i);
  constr_data = bb->data;
  constr_data[0] = 0.0;
  i = Bols->size[0] * Bols->size[1];
  Bols->size[0] = 1;
  Bols->size[1] = 1;
  emxEnsureCapacity_real_T(Bols, i);
  constr_data = Bols->data;
  constr_data[0] = 0.0;
  i = S2->size[0] * S2->size[1];
  S2->size[0] = 1;
  S2->size[1] = 1;
  emxEnsureCapacity_real_T(S2, i);
  S2_data = S2->data;
  S2_data[0] = 0.0;
  /*  Start of the forward search */
  if (n < 1) {
    constcols->size[0] = 1;
    constcols->size[1] = 0;
  } else {
    i = constcols->size[0] * constcols->size[1];
    constcols->size[0] = 1;
    constcols->size[1] = n;
    emxEnsureCapacity_real_T(constcols, i);
    constcols_data = constcols->data;
    loop_ub = n - 1;
    for (i = 0; i <= loop_ub; i++) {
      constcols_data[i] = (double)i + 1.0;
    }
  }
  emxInit_real_T(&seq, 1);
  i = seq->size[0];
  seq->size[0] = constcols->size[1];
  emxEnsureCapacity_real_T(seq, i);
  seq_data = seq->data;
  loop_ub = constcols->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq_data[i] = constcols_data[i];
  }
  emxFree_real_T(&constcols);
  emxInit_real_T(&mdr, 2);
  emxInitStruct_struct_LXS_T(&expl_temp);
  iter = 0;
  i = mdr->size[0] * mdr->size[1];
  mdr->size[0] = 1;
  mdr->size[1] = 1;
  emxEnsureCapacity_real_T(mdr, i);
  constcols_data = mdr->data;
  constcols_data[0] = 0.0;
  /*  Initialization necessary for MATLAB C-Coder */
  /*  Use as initial subset the one supplied by the user or the best according
   */
  /*  to LMS or LTS */
  /*  initial subset is not supplied by the user */
  /*  Find initial subset to initialize the search */
  LXS(b_y, b_X, lms, h, nsamp, msg, (double *)&bonflevoutX_data,
      bonflevoutX_size, &expl_temp);
  i = bs->size[0];
  bs->size[0] = expl_temp.bs->size[1];
  emxEnsureCapacity_real_T(bs, i);
  bs_data = bs->data;
  loop_ub = expl_temp.bs->size[1];
  for (i = 0; i < loop_ub; i++) {
    bs_data[i] = expl_temp.bs->data[i];
  }
  emxInit_real_T(&INP_S2, 2);
  emxInitStruct_struct_T(&b_expl_temp);
  emxInitStruct_struct_LXS_T(&c_expl_temp);
  emxInit_real_T(&b_bs, 1);
  guard1 = false;
  do {
    exitg1 = 0;
    if (iter < 6) {
      /*  Compute Minimum Deletion Residual for each step of the search */
      /*  The instruction below is surely executed once. */
      i = b_bs->size[0];
      b_bs->size[0] = bs->size[0];
      emxEnsureCapacity_real_T(b_bs, i);
      constr_data = b_bs->data;
      loop_ub = bs->size[0] - 1;
      for (i = 0; i <= loop_ub; i++) {
        constr_data[i] = bs_data[i];
      }
      FSRmdr(b_y, b_X, b_bs, init, msg, constr, bsbmfullrank,
             (double *)&threshlevoutX_data, threshlevoutX_size, bsbstepdef, mdr,
             Un, bb, Bols, S2);
      S2_data = S2->data;
      constcols_data = mdr->data;
      /*  If FSRmdr runs without problems mdr has two columns. In the second */
      /*  column it contains the value of the minimum deletion residual */
      /*  monitored in each step of the search */
      /*  If mdr has just one columns then one of the following two cases took
       * place: */
      /*  isnan(mdr)=1 ==> in this case initial subset was not full rank */
      /*  mdr has just one column ==> in this case, even if the initial */
      /*     subset was full rank, the search has found at a certain step */
      /*     m<n/2 a list of units which produce a singular matrix. In this */
      /*     case LXS is rerun excluding these units which gave rise to a */
      /*     singular matrix */
      if (mdr->size[1] < 2) {
        loop_ub = mdr->size[0];
        if (loop_ub < 1) {
          loop_ub = 1;
        }
        if (mdr->size[0] == 0) {
          loop_ub = 0;
        }
        if (loop_ub >= (double)n / 2.0) {
          /*  In this case ListOut contains the list of units which */
          /*  produced a singular matrix. */
          /*  out.ListOut = setdiff(seq,mdr(:,1))'; */
          loop_ub = mdr->size[0];
          i = out->ListOut->size[0] * out->ListOut->size[1];
          out->ListOut->size[0] = 1;
          out->ListOut->size[1] = mdr->size[0];
          emxEnsureCapacity_real_T(out->ListOut, i);
          for (i = 0; i < loop_ub; i++) {
            out->ListOut->data[i] = constcols_data[i];
          }
          varsize = (int)ceil((double)n / 1.0E+6);
          i = out->outliers->size[0] * out->outliers->size[1];
          out->outliers->size[0] = 1;
          out->outliers->size[1] = varsize;
          emxEnsureCapacity_real_T(out->outliers, i);
          for (i = 0; i < varsize; i++) {
            out->outliers->data[i] = rtNaN;
          }
          i = out->mdr->size[0] * out->mdr->size[1];
          out->mdr->size[0] = 1;
          out->mdr->size[1] = varsize;
          emxEnsureCapacity_real_T(out->mdr, i);
          for (i = 0; i < varsize; i++) {
            out->mdr->data[i] = rtNaN;
          }
          i = out->Un->size[0] * out->Un->size[1];
          out->Un->size[0] = varsize;
          out->Un->size[1] = 11;
          emxEnsureCapacity_real_T(out->Un, i);
          loop_ub = varsize * 11;
          for (i = 0; i < loop_ub; i++) {
            out->Un->data[i] = rtNaN;
          }
          i = out->nout->size[0] * out->nout->size[1];
          out->nout->size[0] = varsize;
          out->nout->size[1] = varsize;
          emxEnsureCapacity_real_T(out->nout, i);
          loop_ub = varsize * varsize;
          for (i = 0; i < loop_ub; i++) {
            out->nout->data[i] = rtNaN;
          }
          i = out->beta->size[0];
          out->beta->size[0] = varsize;
          emxEnsureCapacity_real_T(out->beta, i);
          for (i = 0; i < varsize; i++) {
            out->beta->data[i] = rtNaN;
          }
          out->scale = rtNaN;
          i = out->mdag->size[0] * out->mdag->size[1];
          out->mdag->size[0] = varsize;
          out->mdag->size[1] = varsize;
          emxEnsureCapacity_real_T(out->mdag, i);
          for (i = 0; i < loop_ub; i++) {
            out->mdag->data[i] = rtNaN;
          }
          i = out->ListCl->size[0] * out->ListCl->size[1];
          out->ListCl->size[0] = 1;
          out->ListCl->size[1] = varsize;
          emxEnsureCapacity_real_T(out->ListCl, i);
          for (i = 0; i < varsize; i++) {
            out->ListCl->data[i] = rtNaN;
          }
          i = out->VIOMout->size[0] * out->VIOMout->size[1];
          out->VIOMout->size[0] = 1;
          out->VIOMout->size[1] = varsize;
          emxEnsureCapacity_real_T(out->VIOMout, i);
          for (i = 0; i < varsize; i++) {
            out->VIOMout->data[i] = rtNaN;
          }
          out->fittedvalues->size[0] = 0;
          out->fittedvalues->size[1] = 0;
          out->residuals->size[0] = 0;
          out->residuals->size[1] = 0;
          out->class[0] = 'F';
          out->class[1] = 'S';
          out->class[2] = 'R';
          exitg1 = 1;
        } else {
          if (rtIsNaN(constcols_data[0])) {
            /*  INITIAL SUBSET WAS NOT FULL RANK */
            /*  restart LXS without the units forming */
            /*  initial subset */
            /* setdiffFS finds the positive integers in a which are not present
             * in the positive integers in b */
            /*  */
            /*  This is a faster special case of function setdiff when */
            /*  both vectors in a and b just contain positive integer numbers.
             */
            /*  */
            /* <a href="matlab: docsearchFS('setdiffFS')">Link to the help
             * function</a> */
            /*  */
            /*  Required input arguments: */
            /*  */
            /*     a:         vector containing positive integer elements.
             * Vector. A */
            /*                vector of length na containing positive integer
             * numbers. */
            /*  */
            /*     b:         vector containing positive integer elements.
             * Vector. A */
            /*                vector of length nb containing positive integer
             * numbers. */
            /*  */
            /*  Optional input arguments: */
            /*  */
            /*  Output: */
            /*  */
            /*     c:         vector containing positive integer elements thare
             * are on a but not in b. */
            /*                Column vector.  */
            /*                Note that the elements of c contain no repetitions
             * and are sorted. */
            /*  */
            /*  See also: setdiff */
            /*  */
            /*  References: */
            /*  */
            /*  Riani, M., Perrotta, D. and Cerioli, A. (2015), The Forward
             * Search for */
            /*  Very Large Datasets, "Journal of Statistical Software" */
            /*  */
            /*  Copyright 2008-2021. */
            /*  Written by FSDA team */
            /*  */
            /* <a href="matlab: docsearchFS('setdiffFS')">Link to the help page
             * for this function</a> */
            /*  */
            /* $LastChangedDate::                      $: Date of the last
             * commit */
            /*  Examples: */
            /* { */
            /*     %% Example of use of setdiffFS. */
            /*     % Define two vectors (containing positive integers) with
             * values in */
            /*     % common. */
            /*     A = [3 6 2 1 5 1 1];  */
            /*     B = [2 4 6]; */
            /*     C=setdiffFS(A,B); */
            /*     disp(C); */
            /* } */
            /* { */
            /*     % Time comparison with setdiff. */
            /*     % 20000 calls to setdiff and to setdiffFS. */
            /*     % Analysis of computational time. */
            /*     n=100; */
            /*     nsimul=20000; */
            /*     tSETDIFF=0; */
            /*     tSETDIFFFS=0; */
            /*     for j=1:nsimul */
            /*         a=randi(n,[300,1]); */
            /*         b=randi(n,[40,1]); */
            /*  */
            /*         tsetdiff = tic; */
            /*         c=setdiff(a,b); */
            /*         tSETDIFF = tSETDIFF + toc(tsetdiff); */
            /*  */
            /*         tsetdiffFS = tic; */
            /*         cFS=setdiffFS(a,b); */
            /*         tSETDIFFFS = tSETDIFFFS + toc(tsetdiffFS); */
            /*  */
            /*         if ~isequal(c,cFS) */
            /*             error('FSDA:setdiffFS:WrongOutput','c and cFS are
             * different') */
            /*         end */
            /*  */
            /*     end */
            /*  */
            /*     disp(array2table([tSETDIFF
             * tSETDIFFFS],'VariableNames',{'setdiff time' 'setdiffFS time'}))
             */
            /* } */
            /*  Beginning of code */
            i = bs->size[0];
            bs->size[0] = seq->size[0] + expl_temp.bs->size[1];
            emxEnsureCapacity_real_T(bs, i);
            bs_data = bs->data;
            loop_ub = seq->size[0];
            for (i = 0; i < loop_ub; i++) {
              bs_data[i] = seq_data[i];
            }
            loop_ub = expl_temp.bs->size[1];
            for (i = 0; i < loop_ub; i++) {
              bs_data[i + seq->size[0]] = expl_temp.bs->data[i];
            }
            initdef = b_maximum(bs);
            loop_ub = (int)b_maximum(bs);
            i = aT->size[0];
            aT->size[0] = (int)initdef;
            emxEnsureCapacity_boolean_T(aT, i);
            aT_data = aT->data;
            for (i = 0; i < loop_ub; i++) {
              aT_data[i] = false;
            }
            i = bT->size[0];
            bT->size[0] = (int)initdef;
            emxEnsureCapacity_boolean_T(bT, i);
            bT_data = bT->data;
            for (i = 0; i < loop_ub; i++) {
              bT_data[i] = false;
            }
            i = bsb->size[0];
            bsb->size[0] = seq->size[0];
            emxEnsureCapacity_int32_T(bsb, i);
            bsb_data = bsb->data;
            loop_ub = seq->size[0];
            for (i = 0; i < loop_ub; i++) {
              bsb_data[i] = (int)seq_data[i];
            }
            loop_ub = bsb->size[0];
            for (i = 0; i < loop_ub; i++) {
              aT_data[bsb_data[i] - 1] = true;
            }
            i = bsb->size[0];
            bsb->size[0] = expl_temp.bs->size[1];
            emxEnsureCapacity_int32_T(bsb, i);
            bsb_data = bsb->data;
            loop_ub = expl_temp.bs->size[1];
            for (i = 0; i < loop_ub; i++) {
              bsb_data[i] = (int)expl_temp.bs->data[i];
            }
            loop_ub = bsb->size[0];
            for (i = 0; i < loop_ub; i++) {
              bT_data[bsb_data[i] - 1] = true;
            }
            /*  c = vector containing numbers which are inside vector a which
             * are not */
            /*  present in b. Elements in c are sorted and contain no
             * repetitions. */
            if (aT->size[0] == bT->size[0]) {
              i = c->size[0];
              c->size[0] = aT->size[0];
              emxEnsureCapacity_boolean_T(c, i);
              c_data = c->data;
              loop_ub = aT->size[0];
              for (i = 0; i < loop_ub; i++) {
                varargin_1 = aT_data[i];
                varargin_2 = bT_data[i];
                c_data[i] = (varargin_1 && varargin_2);
              }
            } else {
              expand_bitand(aT, bT, c);
              c_data = c->data;
            }
            if (aT->size[0] == c->size[0]) {
              i = bT->size[0];
              bT->size[0] = aT->size[0];
              emxEnsureCapacity_boolean_T(bT, i);
              bT_data = bT->data;
              loop_ub = aT->size[0];
              for (i = 0; i < loop_ub; i++) {
                varargin_1 = aT_data[i];
                varargin_2 = c_data[i];
                bT_data[i] = varargin_1 ^ varargin_2;
              }
            } else {
              expand_bitxor(aT, c, bT);
            }
            b_eml_find(bT, bsb);
            bsb_data = bsb->data;
            /*  The instruction above is faster than the one below */
            /*  c = find(bitand(aT , not(bT))); */
            /*  The instruction above is faster than the one below */
            /*  c = find(aT & ~bT); */
            i = bs->size[0];
            bs->size[0] = bsb->size[0];
            emxEnsureCapacity_real_T(bs, i);
            bs_data = bs->data;
            loop_ub = bsb->size[0];
            for (i = 0; i < loop_ub; i++) {
              bs_data[i] = b_y_data[bsb_data[i] - 1];
            }
            loop_ub = b_X->size[1];
            i = c_X->size[0] * c_X->size[1];
            c_X->size[0] = bsb->size[0];
            c_X->size[1] = b_X->size[1];
            emxEnsureCapacity_real_T(c_X, i);
            constr_data = c_X->data;
            for (i = 0; i < loop_ub; i++) {
              varsize = bsb->size[0];
              for (b_i = 0; b_i < varsize; b_i++) {
                constr_data[b_i + c_X->size[0] * i] =
                    b_X_data[(bsb_data[b_i] + b_X->size[0] * i) - 1];
              }
            }
            b_LXS(bs, c_X, h, lms, nsamp, msg, (double *)&bonflevoutX_data,
                  bonflevoutX_size, &c_expl_temp);
            i = expl_temp.bs->size[0] * expl_temp.bs->size[1];
            expl_temp.bs->size[0] = 1;
            expl_temp.bs->size[1] = c_expl_temp.bs->size[1];
            emxEnsureCapacity_real_T(expl_temp.bs, i);
            loop_ub = c_expl_temp.bs->size[1];
            for (i = 0; i < loop_ub; i++) {
              expl_temp.bs->data[i] = c_expl_temp.bs->data[i];
            }
            i = bs->size[0];
            bs->size[0] = expl_temp.bs->size[1];
            emxEnsureCapacity_real_T(bs, i);
            bs_data = bs->data;
            loop_ub = expl_temp.bs->size[1];
            for (i = 0; i < loop_ub; i++) {
              bs_data[i] = bsb_data[(int)expl_temp.bs->data[i] - 1];
            }
          } else {
            /*  INITIAL SUBSET WAS FULL RANK BUT THE SEARCH HAS FOUND A */
            /*  SET OF OBSERVATIONS CONSTR <n/2  WHICH PRODUCED A SINGULAR */
            /*  MATRIX. IN THIS CASE NEW LXS IS BASED ON  n-constr OBSERVATIONS
             */
            iter++;
            /* setdiffFS finds the positive integers in a which are not present
             * in the positive integers in b */
            /*  */
            /*  This is a faster special case of function setdiff when */
            /*  both vectors in a and b just contain positive integer numbers.
             */
            /*  */
            /* <a href="matlab: docsearchFS('setdiffFS')">Link to the help
             * function</a> */
            /*  */
            /*  Required input arguments: */
            /*  */
            /*     a:         vector containing positive integer elements.
             * Vector. A */
            /*                vector of length na containing positive integer
             * numbers. */
            /*  */
            /*     b:         vector containing positive integer elements.
             * Vector. A */
            /*                vector of length nb containing positive integer
             * numbers. */
            /*  */
            /*  Optional input arguments: */
            /*  */
            /*  Output: */
            /*  */
            /*     c:         vector containing positive integer elements thare
             * are on a but not in b. */
            /*                Column vector.  */
            /*                Note that the elements of c contain no repetitions
             * and are sorted. */
            /*  */
            /*  See also: setdiff */
            /*  */
            /*  References: */
            /*  */
            /*  Riani, M., Perrotta, D. and Cerioli, A. (2015), The Forward
             * Search for */
            /*  Very Large Datasets, "Journal of Statistical Software" */
            /*  */
            /*  Copyright 2008-2021. */
            /*  Written by FSDA team */
            /*  */
            /* <a href="matlab: docsearchFS('setdiffFS')">Link to the help page
             * for this function</a> */
            /*  */
            /* $LastChangedDate::                      $: Date of the last
             * commit */
            /*  Examples: */
            /* { */
            /*     %% Example of use of setdiffFS. */
            /*     % Define two vectors (containing positive integers) with
             * values in */
            /*     % common. */
            /*     A = [3 6 2 1 5 1 1];  */
            /*     B = [2 4 6]; */
            /*     C=setdiffFS(A,B); */
            /*     disp(C); */
            /* } */
            /* { */
            /*     % Time comparison with setdiff. */
            /*     % 20000 calls to setdiff and to setdiffFS. */
            /*     % Analysis of computational time. */
            /*     n=100; */
            /*     nsimul=20000; */
            /*     tSETDIFF=0; */
            /*     tSETDIFFFS=0; */
            /*     for j=1:nsimul */
            /*         a=randi(n,[300,1]); */
            /*         b=randi(n,[40,1]); */
            /*  */
            /*         tsetdiff = tic; */
            /*         c=setdiff(a,b); */
            /*         tSETDIFF = tSETDIFF + toc(tsetdiff); */
            /*  */
            /*         tsetdiffFS = tic; */
            /*         cFS=setdiffFS(a,b); */
            /*         tSETDIFFFS = tSETDIFFFS + toc(tsetdiffFS); */
            /*  */
            /*         if ~isequal(c,cFS) */
            /*             error('FSDA:setdiffFS:WrongOutput','c and cFS are
             * different') */
            /*         end */
            /*  */
            /*     end */
            /*  */
            /*     disp(array2table([tSETDIFF
             * tSETDIFFFS],'VariableNames',{'setdiff time' 'setdiffFS time'}))
             */
            /* } */
            /*  Beginning of code */
            i = bs->size[0];
            bs->size[0] = seq->size[0] + mdr->size[0];
            emxEnsureCapacity_real_T(bs, i);
            bs_data = bs->data;
            loop_ub = seq->size[0];
            for (i = 0; i < loop_ub; i++) {
              bs_data[i] = seq_data[i];
            }
            loop_ub = mdr->size[0];
            for (i = 0; i < loop_ub; i++) {
              bs_data[i + seq->size[0]] = constcols_data[i];
            }
            initdef = b_maximum(bs);
            loop_ub = (int)b_maximum(bs);
            i = aT->size[0];
            aT->size[0] = (int)initdef;
            emxEnsureCapacity_boolean_T(aT, i);
            aT_data = aT->data;
            for (i = 0; i < loop_ub; i++) {
              aT_data[i] = false;
            }
            i = bT->size[0];
            bT->size[0] = (int)initdef;
            emxEnsureCapacity_boolean_T(bT, i);
            bT_data = bT->data;
            for (i = 0; i < loop_ub; i++) {
              bT_data[i] = false;
            }
            i = bsb->size[0];
            bsb->size[0] = seq->size[0];
            emxEnsureCapacity_int32_T(bsb, i);
            bsb_data = bsb->data;
            loop_ub = seq->size[0];
            for (i = 0; i < loop_ub; i++) {
              bsb_data[i] = (int)seq_data[i];
            }
            loop_ub = bsb->size[0];
            for (i = 0; i < loop_ub; i++) {
              aT_data[bsb_data[i] - 1] = true;
            }
            i = bsb->size[0];
            bsb->size[0] = mdr->size[0];
            emxEnsureCapacity_int32_T(bsb, i);
            bsb_data = bsb->data;
            loop_ub = mdr->size[0];
            for (i = 0; i < loop_ub; i++) {
              bsb_data[i] = (int)constcols_data[i];
            }
            loop_ub = bsb->size[0];
            for (i = 0; i < loop_ub; i++) {
              bT_data[bsb_data[i] - 1] = true;
            }
            /*  c = vector containing numbers which are inside vector a which
             * are not */
            /*  present in b. Elements in c are sorted and contain no
             * repetitions. */
            if (aT->size[0] == bT->size[0]) {
              i = c->size[0];
              c->size[0] = aT->size[0];
              emxEnsureCapacity_boolean_T(c, i);
              c_data = c->data;
              loop_ub = aT->size[0];
              for (i = 0; i < loop_ub; i++) {
                varargin_1 = aT_data[i];
                varargin_2 = bT_data[i];
                c_data[i] = (varargin_1 && varargin_2);
              }
            } else {
              expand_bitand(aT, bT, c);
              c_data = c->data;
            }
            if (aT->size[0] == c->size[0]) {
              i = bT->size[0];
              bT->size[0] = aT->size[0];
              emxEnsureCapacity_boolean_T(bT, i);
              bT_data = bT->data;
              loop_ub = aT->size[0];
              for (i = 0; i < loop_ub; i++) {
                varargin_1 = aT_data[i];
                varargin_2 = c_data[i];
                bT_data[i] = varargin_1 ^ varargin_2;
              }
            } else {
              expand_bitxor(aT, c, bT);
            }
            b_eml_find(bT, bsb);
            bsb_data = bsb->data;
            /*  The instruction above is faster than the one below */
            /*  c = find(bitand(aT , not(bT))); */
            /*  The instruction above is faster than the one below */
            /*  c = find(aT & ~bT); */
            i = constr->size[0];
            constr->size[0] = mdr->size[0];
            emxEnsureCapacity_real_T(constr, i);
            constr_data = constr->data;
            loop_ub = mdr->size[0];
            for (i = 0; i < loop_ub; i++) {
              constr_data[i] = constcols_data[i];
            }
            i = bs->size[0];
            bs->size[0] = bsb->size[0];
            emxEnsureCapacity_real_T(bs, i);
            bs_data = bs->data;
            loop_ub = bsb->size[0];
            for (i = 0; i < loop_ub; i++) {
              bs_data[i] = b_y_data[bsb_data[i] - 1];
            }
            loop_ub = b_X->size[1];
            i = c_X->size[0] * c_X->size[1];
            c_X->size[0] = bsb->size[0];
            c_X->size[1] = b_X->size[1];
            emxEnsureCapacity_real_T(c_X, i);
            constr_data = c_X->data;
            for (i = 0; i < loop_ub; i++) {
              varsize = bsb->size[0];
              for (b_i = 0; b_i < varsize; b_i++) {
                constr_data[b_i + c_X->size[0] * i] =
                    b_X_data[(bsb_data[b_i] + b_X->size[0] * i) - 1];
              }
            }
            b_LXS(bs, c_X, h, lms, nsamp, msg, (double *)&bonflevoutX_data,
                  bonflevoutX_size, &c_expl_temp);
            i = expl_temp.bs->size[0] * expl_temp.bs->size[1];
            expl_temp.bs->size[0] = 1;
            expl_temp.bs->size[1] = c_expl_temp.bs->size[1];
            emxEnsureCapacity_real_T(expl_temp.bs, i);
            loop_ub = c_expl_temp.bs->size[1];
            for (i = 0; i < loop_ub; i++) {
              expl_temp.bs->data[i] = c_expl_temp.bs->data[i];
            }
            i = bs->size[0];
            bs->size[0] = expl_temp.bs->size[1];
            emxEnsureCapacity_real_T(bs, i);
            bs_data = bs->data;
            loop_ub = expl_temp.bs->size[1];
            for (i = 0; i < loop_ub; i++) {
              bs_data[i] = bsb_data[(int)expl_temp.bs->data[i] - 1];
            }
          }
          guard1 = false;
        }
      } else {
        guard1 = true;
        exitg1 = 1;
      }
    } else {
      guard1 = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  if (guard1) {
    loop_ub = S2->size[0];
    i = INP_S2->size[0] * INP_S2->size[1];
    INP_S2->size[0] = S2->size[0];
    INP_S2->size[1] = 2;
    emxEnsureCapacity_real_T(INP_S2, i);
    constr_data = INP_S2->data;
    for (i = 0; i < 2; i++) {
      for (b_i = 0; b_i < loop_ub; b_i++) {
        constr_data[b_i + INP_S2->size[0] * i] = S2_data[b_i + S2->size[0] * i];
      }
    }
    /*  Call core function which computes exceedances to thresholds of mdr */
    FSRcore(b_y, b_X, n, p, mdr, init, Un, bb, Bols, INP_S2, weak, bonflev_data,
            bonflev_size, msg, &b_expl_temp);
    i = out->ListOut->size[0] * out->ListOut->size[1];
    out->ListOut->size[0] = 1;
    out->ListOut->size[1] = b_expl_temp.ListOut->size[1];
    emxEnsureCapacity_real_T(out->ListOut, i);
    loop_ub = b_expl_temp.ListOut->size[1];
    for (i = 0; i < loop_ub; i++) {
      out->ListOut->data[i] = b_expl_temp.ListOut->data[i];
    }
    i = out->outliers->size[0] * out->outliers->size[1];
    out->outliers->size[0] = 1;
    out->outliers->size[1] = b_expl_temp.outliers->size[1];
    emxEnsureCapacity_real_T(out->outliers, i);
    loop_ub = b_expl_temp.outliers->size[1];
    for (i = 0; i < loop_ub; i++) {
      out->outliers->data[i] = b_expl_temp.outliers->data[i];
    }
    i = out->mdr->size[0] * out->mdr->size[1];
    out->mdr->size[0] = b_expl_temp.mdr->size[0];
    out->mdr->size[1] = b_expl_temp.mdr->size[1];
    emxEnsureCapacity_real_T(out->mdr, i);
    loop_ub = b_expl_temp.mdr->size[0] * b_expl_temp.mdr->size[1];
    for (i = 0; i < loop_ub; i++) {
      out->mdr->data[i] = b_expl_temp.mdr->data[i];
    }
    i = out->Un->size[0] * out->Un->size[1];
    out->Un->size[0] = b_expl_temp.Un->size[0];
    out->Un->size[1] = b_expl_temp.Un->size[1];
    emxEnsureCapacity_real_T(out->Un, i);
    loop_ub = b_expl_temp.Un->size[0] * b_expl_temp.Un->size[1];
    for (i = 0; i < loop_ub; i++) {
      out->Un->data[i] = b_expl_temp.Un->data[i];
    }
    i = out->nout->size[0] * out->nout->size[1];
    out->nout->size[0] = b_expl_temp.nout.size[0];
    out->nout->size[1] = b_expl_temp.nout.size[1];
    emxEnsureCapacity_real_T(out->nout, i);
    loop_ub = b_expl_temp.nout.size[0] * b_expl_temp.nout.size[1];
    for (i = 0; i < loop_ub; i++) {
      out->nout->data[i] = b_expl_temp.nout.data[i];
    }
    i = out->beta->size[0];
    out->beta->size[0] = b_expl_temp.beta->size[0];
    emxEnsureCapacity_real_T(out->beta, i);
    loop_ub = b_expl_temp.beta->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->beta->data[i] = b_expl_temp.beta->data[i];
    }
    out->scale = b_expl_temp.scale;
    i = out->mdag->size[0] * out->mdag->size[1];
    out->mdag->size[0] = b_expl_temp.mdag.size[0];
    out->mdag->size[1] = b_expl_temp.mdag.size[1];
    emxEnsureCapacity_real_T(out->mdag, i);
    loop_ub = b_expl_temp.mdag.size[0] * b_expl_temp.mdag.size[1];
    for (i = 0; i < loop_ub; i++) {
      out->mdag->data[0] = b_expl_temp.mdag.data[0];
    }
    i = out->ListCl->size[0] * out->ListCl->size[1];
    out->ListCl->size[0] = 1;
    out->ListCl->size[1] = b_expl_temp.ListCl->size[1];
    emxEnsureCapacity_real_T(out->ListCl, i);
    loop_ub = b_expl_temp.ListCl->size[1];
    for (i = 0; i < loop_ub; i++) {
      out->ListCl->data[i] = b_expl_temp.ListCl->data[i];
    }
    i = out->VIOMout->size[0] * out->VIOMout->size[1];
    out->VIOMout->size[0] = 1;
    out->VIOMout->size[1] = b_expl_temp.VIOMout->size[1];
    emxEnsureCapacity_real_T(out->VIOMout, i);
    loop_ub = b_expl_temp.VIOMout->size[1];
    for (i = 0; i < loop_ub; i++) {
      out->VIOMout->data[i] = b_expl_temp.VIOMout->data[i];
    }
    /*  compute and store in output structure the S robust scaled residuals */
    mtimes(b_X, b_expl_temp.beta, constr);
    constr_data = constr->data;
    i = out->fittedvalues->size[0] * out->fittedvalues->size[1];
    out->fittedvalues->size[0] = constr->size[0];
    out->fittedvalues->size[1] = 1;
    emxEnsureCapacity_real_T(out->fittedvalues, i);
    loop_ub = constr->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->fittedvalues->data[i] = constr_data[i];
    }
    if (b_y->size[0] == constr->size[0]) {
      loop_ub = b_y->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_y_data[i] = (b_y_data[i] - constr_data[i]) / b_expl_temp.scale;
      }
    } else {
      gb_binary_expand_op(b_y, constr, b_expl_temp.scale);
      b_y_data = b_y->data;
    }
    i = out->residuals->size[0] * out->residuals->size[1];
    out->residuals->size[0] = b_y->size[0];
    out->residuals->size[1] = 1;
    emxEnsureCapacity_real_T(out->residuals, i);
    loop_ub = b_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->residuals->data[i] = b_y_data[i];
    }
    out->class[0] = 'F';
    out->class[1] = 'S';
    out->class[2] = 'R';
  }
  emxFree_real_T(&c_X);
  emxFree_real_T(&b_bs);
  emxFreeStruct_struct_LXS_T(&expl_temp);
  emxFreeStruct_struct_LXS_T(&c_expl_temp);
  emxFreeStruct_struct_T(&b_expl_temp);
  emxFree_boolean_T(&c);
  emxFree_boolean_T(&bT);
  emxFree_boolean_T(&aT);
  emxFree_real_T(&b_X);
  emxFree_real_T(&b_y);
  emxFree_real_T(&INP_S2);
  emxFree_int32_T(&bsb);
  emxFree_real_T(&bs);
  emxFree_real_T(&mdr);
  emxFree_real_T(&seq);
  emxFree_real_T(&S2);
  emxFree_real_T(&Bols);
  emxFree_real_T(&bb);
  emxFree_real_T(&Un);
  emxFree_real_T(&bsbstepdef);
  emxFree_real_T(&constr);
}

/* End of code generation (FSR_wrapper.c) */
