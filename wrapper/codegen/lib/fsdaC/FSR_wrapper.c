/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: FSR_wrapper.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "FSR_wrapper.h"
#include "FSRcore.h"
#include "FSRmdr.h"
#include "LXS.h"
#include "chkinputR.h"
#include "colon.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_initialize.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
/*
 * Required input arguments
 *  y: a column vector of doubles of any length
 *
 * Arguments    : const emxArray_real_T *y
 *                const emxArray_real_T *X
 *                bool bsbmfullrank
 *                const double bonflev_data[]
 *                const int bonflev_size[2]
 *                double h
 *                double init
 *                bool intercept
 *                double lms
 *                bool msg
 *                bool nocheck
 *                double nsamp
 *                const double threshoutX_data[]
 *                const int threshoutX_size[2]
 *                bool weak
 *                struct_FSR_T *out
 * Return Type  : void
 */
void FSR_wrapper(const emxArray_real_T *y, const emxArray_real_T *X,
                 bool bsbmfullrank, const double bonflev_data[],
                 const int bonflev_size[2], double h, double init,
                 bool intercept, double lms, bool msg, bool nocheck,
                 double nsamp, const double threshoutX_data[],
                 const int threshoutX_size[2], bool weak, struct_FSR_T *out)
{
  emxArray_boolean_T *x;
  emxArray_real_T *INP_Bcoeff;
  emxArray_real_T *INP_S2;
  emxArray_real_T *INP_Un;
  emxArray_real_T *INP_bb;
  emxArray_real_T *INP_mdr;
  emxArray_real_T *S2;
  emxArray_real_T *Un;
  emxArray_real_T *b_X;
  emxArray_real_T *b_expl_temp;
  emxArray_real_T *b_y;
  emxArray_real_T *bsbstepdef;
  emxArray_real_T *constr;
  emxArray_real_T *d_y;
  emxArray_real_T *iniseq;
  struct_LXS_T expl_temp;
  struct_T c_expl_temp;
  double bonflevoutX_data;
  double initdef;
  double n;
  double p;
  double threshlevoutX_data;
  int bonflevoutX_size[2];
  int threshlevoutX_size[2];
  int aoffset;
  int i;
  int k;
  int partialTrueCount;
  int trueCount;
  bool c_y;
  (void)bsbmfullrank;
  if (!isInitialized_fsdaC) {
    fsdaC_initialize();
  }
  emxInit_real_T(&b_y, 1);
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
  /*  */
  /*  Output: */
  /*  */
  /*          out:   structure which contains the following fields */
  /*  */
  /*  out.ListOut  = row vector containing the list of the units declared as */
  /*                 outliers or NaN if the sample is homogeneous */
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
  /*  */
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
  k = b_y->size[0];
  b_y->size[0] = y->size[0];
  emxEnsureCapacity_real_T(b_y, k);
  aoffset = y->size[0];
  for (k = 0; k < aoffset; k++) {
    b_y->data[k] = y->data[k];
  }
  emxInit_real_T(&b_X, 2);
  k = b_X->size[0] * b_X->size[1];
  b_X->size[0] = X->size[0];
  b_X->size[1] = X->size[1];
  emxEnsureCapacity_real_T(b_X, k);
  aoffset = X->size[0] * X->size[1];
  for (k = 0; k < aoffset; k++) {
    b_X->data[k] = X->data[k];
  }
  chkinputR(b_y, b_X, intercept, nocheck, &n, &p);
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
    emxInit_boolean_T(&x, 2);
    k = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = 1;
    emxEnsureCapacity_boolean_T(x, k);
    x->data[0] = (threshoutX_data[0] == 1.0);
    c_y = true;
    if (!x->data[0]) {
      c_y = false;
    }
    emxFree_boolean_T(&x);
    if (c_y) {
      bonflevoutX_size[0] = 1;
      bonflevoutX_size[1] = 1;
      bonflevoutX_data = 0.99;
      threshlevoutX_size[0] = 1;
      threshlevoutX_size[1] = 1;
      threshlevoutX_data = 10.0;
    }
  }
  emxInit_real_T(&INP_mdr, 2);
  emxInit_real_T(&d_y, 2);
  emxInitStruct_struct_LXS_T(&expl_temp);
  /*  Start of the forward search */
  /*  Initialization necessary for MATLAB C-Coder */
  /*  Use as initial subset the one supplied by the user or the best according
   */
  /*  to LMS or LTS */
  /*  initial subset is not supplied by the user */
  /*  Find initial subset to initialize the search */
  LXS(b_y, b_X, lms, h, nsamp, msg, (double *)&bonflevoutX_data,
      bonflevoutX_size, &expl_temp);
  /*  Necessary for MATLAb C Coder initialization */
  /*  Initialize constr as a column vector of variable size whose elements */
  /*  are greater than n is such a way that no unit is constrained to enter the
   * final steps  */
  bonflevoutX_data = 2.0 * n;
  if (rtIsNaN(n + 1.0) || rtIsNaN(bonflevoutX_data)) {
    k = d_y->size[0] * d_y->size[1];
    d_y->size[0] = 1;
    d_y->size[1] = 1;
    emxEnsureCapacity_real_T(d_y, k);
    d_y->data[0] = rtNaN;
  } else if (bonflevoutX_data < n + 1.0) {
    d_y->size[0] = 1;
    d_y->size[1] = 0;
  } else if ((rtIsInf(n + 1.0) || rtIsInf(bonflevoutX_data)) &&
             (n + 1.0 == bonflevoutX_data)) {
    k = d_y->size[0] * d_y->size[1];
    d_y->size[0] = 1;
    d_y->size[1] = 1;
    emxEnsureCapacity_real_T(d_y, k);
    d_y->data[0] = rtNaN;
  } else if (floor(n + 1.0) == n + 1.0) {
    k = d_y->size[0] * d_y->size[1];
    d_y->size[0] = 1;
    aoffset = (int)floor(bonflevoutX_data - (n + 1.0));
    d_y->size[1] = aoffset + 1;
    emxEnsureCapacity_real_T(d_y, k);
    for (k = 0; k <= aoffset; k++) {
      d_y->data[k] = (n + 1.0) + (double)k;
    }
  } else {
    eml_float_colon(n + 1.0, bonflevoutX_data, d_y);
  }
  emxInit_real_T(&constr, 1);
  k = constr->size[0];
  constr->size[0] = d_y->size[1];
  emxEnsureCapacity_real_T(constr, k);
  aoffset = d_y->size[1];
  for (k = 0; k < aoffset; k++) {
    constr->data[k] = d_y->data[k];
  }
  emxFree_real_T(&d_y);
  if (n < 40.0) {
    initdef = p + 1.0;
  } else {
    initdef = fmin(3.0 * p + 1.0, floor(0.5 * ((n + p) + 1.0)));
  }
  emxInit_real_T(&bsbstepdef, 2);
  if (n <= 5000.0) {
    k = bsbstepdef->size[0] * bsbstepdef->size[1];
    bsbstepdef->size[0] = 1;
    bsbstepdef->size[1] = 1;
    emxEnsureCapacity_real_T(bsbstepdef, k);
    bsbstepdef->data[0] = 0.0;
  } else {
    bonflevoutX_data = 100.0 * floor(n / 100.0);
    emxInit_real_T(&iniseq, 2);
    if (rtIsNaN(bonflevoutX_data)) {
      k = iniseq->size[0] * iniseq->size[1];
      iniseq->size[0] = 1;
      iniseq->size[1] = 1;
      emxEnsureCapacity_real_T(iniseq, k);
      iniseq->data[0] = rtNaN;
    } else {
      k = iniseq->size[0] * iniseq->size[1];
      iniseq->size[0] = 1;
      aoffset = (int)floor((bonflevoutX_data - 100.0) / 100.0);
      iniseq->size[1] = aoffset + 1;
      emxEnsureCapacity_real_T(iniseq, k);
      for (k = 0; k <= aoffset; k++) {
        iniseq->data[k] = 100.0 * (double)k + 100.0;
      }
    }
    aoffset = iniseq->size[1] - 1;
    trueCount = 0;
    for (i = 0; i <= aoffset; i++) {
      if (iniseq->data[i] > initdef) {
        trueCount++;
      }
    }
    partialTrueCount = 0;
    for (i = 0; i <= aoffset; i++) {
      if (iniseq->data[i] > initdef) {
        iniseq->data[partialTrueCount] = iniseq->data[i];
        partialTrueCount++;
      }
    }
    k = iniseq->size[0] * iniseq->size[1];
    iniseq->size[0] = 1;
    iniseq->size[1] = trueCount;
    emxEnsureCapacity_real_T(iniseq, k);
    k = bsbstepdef->size[0] * bsbstepdef->size[1];
    bsbstepdef->size[0] = 1;
    bsbstepdef->size[1] = trueCount + 1;
    emxEnsureCapacity_real_T(bsbstepdef, k);
    bsbstepdef->data[0] = initdef;
    for (k = 0; k < trueCount; k++) {
      bsbstepdef->data[k + 1] = iniseq->data[k];
    }
    emxFree_real_T(&iniseq);
  }
  emxInit_real_T(&S2, 2);
  emxInit_real_T(&INP_Un, 2);
  emxInit_real_T(&INP_bb, 2);
  emxInit_real_T(&INP_Bcoeff, 2);
  emxInit_real_T(&b_expl_temp, 1);
  /*  Matlab C Coder initializations. */
  aoffset = expl_temp.bs->size[1];
  /*  Compute Minimum Deletion Residual for each step of the search */
  /*  The instruction below is surely executed once. */
  k = b_expl_temp->size[0];
  b_expl_temp->size[0] = aoffset;
  emxEnsureCapacity_real_T(b_expl_temp, k);
  aoffset--;
  for (k = 0; k <= aoffset; k++) {
    b_expl_temp->data[k] = expl_temp.bs->data[k];
  }
  emxFreeStruct_struct_LXS_T(&expl_temp);
  emxInit_real_T(&INP_S2, 2);
  emxInit_real_T(&Un, 2);
  FSRmdr(b_y, b_X, b_expl_temp, init, msg, constr,
         (double *)&threshlevoutX_data, threshlevoutX_size, bsbstepdef, INP_S2,
         Un, INP_bb, INP_Bcoeff, S2);
  k = INP_mdr->size[0] * INP_mdr->size[1];
  INP_mdr->size[0] = INP_S2->size[0];
  INP_mdr->size[1] = 2;
  emxEnsureCapacity_real_T(INP_mdr, k);
  aoffset = INP_S2->size[0] * 2;
  emxFree_real_T(&b_expl_temp);
  emxFree_real_T(&bsbstepdef);
  for (k = 0; k < aoffset; k++) {
    INP_mdr->data[k] = INP_S2->data[k];
  }
  k = INP_Un->size[0] * INP_Un->size[1];
  INP_Un->size[0] = Un->size[0];
  INP_Un->size[1] = 11;
  emxEnsureCapacity_real_T(INP_Un, k);
  aoffset = Un->size[0] * 11;
  for (k = 0; k < aoffset; k++) {
    INP_Un->data[k] = Un->data[k];
  }
  emxFree_real_T(&Un);
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
  aoffset = S2->size[0];
  k = INP_S2->size[0] * INP_S2->size[1];
  INP_S2->size[0] = S2->size[0];
  INP_S2->size[1] = 2;
  emxEnsureCapacity_real_T(INP_S2, k);
  for (k = 0; k < 2; k++) {
    for (partialTrueCount = 0; partialTrueCount < aoffset; partialTrueCount++) {
      INP_S2->data[partialTrueCount + INP_S2->size[0] * k] =
          S2->data[partialTrueCount + S2->size[0] * k];
    }
  }
  emxFree_real_T(&S2);
  emxInitStruct_struct_T(&c_expl_temp);
  /*  Call core function which computes exceedances to thresholds of mdr */
  FSRcore(b_y, b_X, n, p, INP_mdr, init, INP_Un, INP_bb, INP_Bcoeff, INP_S2,
          weak, bonflev_data, bonflev_size, msg, &c_expl_temp);
  k = out->ListOut->size[0] * out->ListOut->size[1];
  out->ListOut->size[0] = 1;
  out->ListOut->size[1] = c_expl_temp.ListOut->size[1];
  emxEnsureCapacity_real_T(out->ListOut, k);
  aoffset = c_expl_temp.ListOut->size[1];
  emxFree_real_T(&INP_S2);
  emxFree_real_T(&INP_Bcoeff);
  emxFree_real_T(&INP_bb);
  emxFree_real_T(&INP_Un);
  emxFree_real_T(&INP_mdr);
  for (k = 0; k < aoffset; k++) {
    out->ListOut->data[k] = c_expl_temp.ListOut->data[k];
  }
  k = out->outliers->size[0] * out->outliers->size[1];
  out->outliers->size[0] = 1;
  out->outliers->size[1] = c_expl_temp.outliers->size[1];
  emxEnsureCapacity_real_T(out->outliers, k);
  aoffset = c_expl_temp.outliers->size[1];
  for (k = 0; k < aoffset; k++) {
    out->outliers->data[k] = c_expl_temp.outliers->data[k];
  }
  k = out->mdr->size[0] * out->mdr->size[1];
  out->mdr->size[0] = c_expl_temp.mdr->size[0];
  out->mdr->size[1] = c_expl_temp.mdr->size[1];
  emxEnsureCapacity_real_T(out->mdr, k);
  aoffset = c_expl_temp.mdr->size[0] * c_expl_temp.mdr->size[1];
  for (k = 0; k < aoffset; k++) {
    out->mdr->data[k] = c_expl_temp.mdr->data[k];
  }
  k = out->Un->size[0] * out->Un->size[1];
  out->Un->size[0] = c_expl_temp.Un->size[0];
  out->Un->size[1] = c_expl_temp.Un->size[1];
  emxEnsureCapacity_real_T(out->Un, k);
  aoffset = c_expl_temp.Un->size[0] * c_expl_temp.Un->size[1];
  for (k = 0; k < aoffset; k++) {
    out->Un->data[k] = c_expl_temp.Un->data[k];
  }
  k = out->nout->size[0] * out->nout->size[1];
  out->nout->size[0] = c_expl_temp.nout.size[0];
  out->nout->size[1] = c_expl_temp.nout.size[1];
  emxEnsureCapacity_real_T(out->nout, k);
  aoffset = c_expl_temp.nout.size[0] * c_expl_temp.nout.size[1];
  for (k = 0; k < aoffset; k++) {
    out->nout->data[k] = c_expl_temp.nout.data[k];
  }
  k = out->beta->size[0];
  out->beta->size[0] = c_expl_temp.beta->size[0];
  emxEnsureCapacity_real_T(out->beta, k);
  aoffset = c_expl_temp.beta->size[0];
  for (k = 0; k < aoffset; k++) {
    out->beta->data[k] = c_expl_temp.beta->data[k];
  }
  out->scale = c_expl_temp.scale;
  k = out->mdag->size[0] * out->mdag->size[1];
  out->mdag->size[0] = c_expl_temp.mdag.size[0];
  out->mdag->size[1] = c_expl_temp.mdag.size[1];
  emxEnsureCapacity_real_T(out->mdag, k);
  aoffset = c_expl_temp.mdag.size[0] * c_expl_temp.mdag.size[1];
  for (k = 0; k < aoffset; k++) {
    out->mdag->data[0] = c_expl_temp.mdag.data[0];
  }
  k = out->ListCl->size[0] * out->ListCl->size[1];
  out->ListCl->size[0] = 1;
  out->ListCl->size[1] = c_expl_temp.ListCl->size[1];
  emxEnsureCapacity_real_T(out->ListCl, k);
  aoffset = c_expl_temp.ListCl->size[1];
  for (k = 0; k < aoffset; k++) {
    out->ListCl->data[k] = c_expl_temp.ListCl->data[k];
  }
  k = out->VIOMout->size[0] * out->VIOMout->size[1];
  out->VIOMout->size[0] = 1;
  out->VIOMout->size[1] = c_expl_temp.VIOMout->size[1];
  emxEnsureCapacity_real_T(out->VIOMout, k);
  aoffset = c_expl_temp.VIOMout->size[1];
  for (k = 0; k < aoffset; k++) {
    out->VIOMout->data[k] = c_expl_temp.VIOMout->data[k];
  }
  /*  compute and store in output structure the S robust scaled residuals */
  partialTrueCount = b_X->size[0] - 1;
  trueCount = b_X->size[1];
  k = constr->size[0];
  constr->size[0] = b_X->size[0];
  emxEnsureCapacity_real_T(constr, k);
  for (i = 0; i <= partialTrueCount; i++) {
    constr->data[i] = 0.0;
  }
  for (k = 0; k < trueCount; k++) {
    aoffset = k * b_X->size[0];
    for (i = 0; i <= partialTrueCount; i++) {
      constr->data[i] += b_X->data[aoffset + i] * c_expl_temp.beta->data[k];
    }
  }
  emxFree_real_T(&b_X);
  k = out->fittedvalues->size[0] * out->fittedvalues->size[1];
  out->fittedvalues->size[0] = constr->size[0];
  out->fittedvalues->size[1] = 1;
  emxEnsureCapacity_real_T(out->fittedvalues, k);
  aoffset = constr->size[0];
  for (k = 0; k < aoffset; k++) {
    out->fittedvalues->data[k] = constr->data[k];
  }
  aoffset = b_y->size[0];
  for (k = 0; k < aoffset; k++) {
    b_y->data[k] = (b_y->data[k] - constr->data[k]) / c_expl_temp.scale;
  }
  emxFreeStruct_struct_T(&c_expl_temp);
  emxFree_real_T(&constr);
  k = out->residuals->size[0] * out->residuals->size[1];
  out->residuals->size[0] = b_y->size[0];
  out->residuals->size[1] = 1;
  emxEnsureCapacity_real_T(out->residuals, k);
  aoffset = b_y->size[0];
  for (k = 0; k < aoffset; k++) {
    out->residuals->data[k] = b_y->data[k];
  }
  emxFree_real_T(&b_y);
  out->class[0] = 'F';
  out->class[1] = 'S';
  out->class[2] = 'R';
}

/*
 * File trailer for FSR_wrapper.c
 *
 * [EOF]
 */
