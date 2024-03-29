/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LXS_wrapper.c
 *
 * Code generation for function 'LXS_wrapper'
 *
 */

/* Include files */
#include <R.h>

#include "LXS_wrapper.h"
#include "FSM.h"
#include "LTSts.h"
#include "LXS.h"
#include "bc.h"
#include "blockedSummation.h"
#include "chkinputR.h"
#include "eml_setop.h"
#include "erfcinv.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_initialize.h"
#include "fsdaC_internal_types.h"
#include "fsdaC_types.h"
#include "int2str.h"
#include "median.h"
#include "mldivide.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "subsets.h"
#include "tic.h"
#include "tinv.h"
#include "toc.h"
#include "unsafeSxfun.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <stdio.h>
#include <string.h>

/* Function Definitions */
void LXS_wrapper(const emxArray_real_T *y, const emxArray_real_T *X,
                 const double bonflevoutX_data[], const int bonflevoutX_size[2],
                 double conflev, double h, bool intercept, double lms, bool msg,
                 bool nocheck, bool nomes, double nsamp, bool rew, bool yxsave,
                 struct_LXS_T *out, emxArray_real_T *C)
{
  emxArray_boolean_T *weights;
  emxArray_char_T_1x310 b_p;
  emxArray_int32_T *b_r2;
  emxArray_int32_T *ia;
  emxArray_int32_T *ib;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_real_T b_time_data;
  emxArray_real_T c_time_data;
  emxArray_real_T d_time_data;
  emxArray_real_T *Xwithoutint;
  emxArray_real_T *b_C;
  emxArray_real_T *b_Xwithoutint;
  emxArray_real_T *b_expl_temp;
  emxArray_real_T *b_y;
  emxArray_real_T *c_expl_temp;
  emxArray_real_T *d_expl_temp;
  emxArray_real_T *e_expl_temp;
  emxArray_real_T *expl_temp;
  emxArray_real_T *f_expl_temp;
  emxArray_real_T *outFSM_outliers;
  emxArray_real_T *outliers;
  emxArray_real_T *r2;
  emxArray_real_T *seq;
  double time_data[1000];
  const double *X_data;
  const double *y_data;
  double b_conflev;
  double n;
  double ncomb;
  double nselected;
  double p;
  double rmin;
  double singsub;
  double tsampling;
  double ttic_tv_nsec;
  double varargin_1;
  double *C_data;
  double *Xwithoutint_data;
  double *b_y_data;
  double *outliers_data;
  double *seq_data;
  int critdef_size[2];
  int expl_temp_size[2];
  int b_i;
  int i;
  int i1;
  int i2;
  int lmsopt;
  int loop_ub;
  int loop_ub_tmp;
  int nx;
  int time_size;
  int *ia_data;
  char critdef_data[3];
  char expl_temp_data[3];
  bool bonflevout;
  bool guard1 = false;
  bool *weights_data;
  if (!isInitialized_fsdaC) {
    fsdaC_initialize();
  }
  X_data = X->data;
  y_data = y->data;
  emxInit_real_T(&b_y, 1);
  /*  Wrapper function for LXS (when lms is a scalar). NV pair names are not
   * taken as */
  /*  inputs. Instead, just the values are taken as inputs. */
  /*  Required input arguments */
  /*  y: a column vector of doubles of any length */
  /*  ARGS{1}{1} = coder.typeof(0,[Inf 1],[1 0]); */
  /*  X: an array of doubles of any dimensions */
  /*  ARGS{1}{2} = coder.typeof(0,[Inf Inf],[1 1]); */
  /*  Optional input arguments (name / pairs) in (case insensitive) */
  /*  alphabetical order */
  /*  bonflevoutX a scalar double or an empty value */
  /*  conflev a scalar double */
  /*  h a scalar double */
  /*  intercept */
  /*  nocheck is a boolean */
  /*  lms: a scalar of type double */
  /*  msg is a boolean */
  /*  nomes is a boolean */
  /*  nsamp: a scalar of type double */
  /*  rew is a boolean */
  /*  yxsave is a boolean */
  /* LXS computes the Least Median of Squares (LMS) or Least Trimmed Squares
   * (LTS) estimators */
  /*  */
  /* <a href="matlab: docsearchFS('LXS')">Link to the help function</a> */
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
  /*  */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite
   */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*          bdp :  breakdown point. Scalar. */
  /*                It measures the fraction of outliers */
  /*                the algorithm should */
  /*                resist. In this case any value greater than 0 but smaller */
  /*                or equal than 0.5 will do fine. If on the other hand the */
  /*                purpose is subgroups detection then bdp can be greater than
   */
  /*                0.5. In any case however n*(1-bdp) must be greater than */
  /*                p. If this condition is not fulfilled an error will be */
  /*                given. Please specify h or bdp not both. */
  /*                  Example - 'bdp',0.4 */
  /*                  Data Types - double */
  /*  */
  /*   bonflevoutX : remote units in the X space. Scalar or empty (default). */
  /*                If the design matrix X contains several high leverage units
   */
  /*                (that is units which are very far from the bulk of the */
  /*                data), it may happen that the best subset may include some
   */
  /*                of these units. */
  /*                If boflevoutX is not empty, outlier detection procedure FSM
   */
  /*                is applied to the design matrix X,  using name/pair option
   */
  /*                'bonflev',bonflevoutX. The extracted subsets which contain
   */
  /*                at least one unit declared as outlier in the X space by FSM
   */
  /*                are removed (more precisely they are treated as singular */
  /*                subsets) from the list of candidate subsets to find the LXS
   */
  /*                solution. The default value of bonflevoutX is empty, that */
  /*                is FSM is not invoked. */
  /*                Example - 'bonflevoutX',0.95 */
  /*                Data Types - double */
  /*  */
  /*      conflev :  Confidence level which is */
  /*                used to declare units as outliers. Scalar */
  /*                Usually conflev=0.95, 0.975 0.99 (individual alpha) */
  /*                or 1-0.05/n, 1-0.025/n, 1-0.01/n (simultaneous alpha). */
  /*                Default value is 0.975 */
  /*                  Example - 'conflev',0.99 */
  /*                  Data Types - double */
  /*  */
  /*            h : The number of observations that have determined the least */
  /*                  trimmed squares estimator. Scalar. */
  /*                The number of observations that have determined the least */
  /*                trimmed squares estimator. h is an integer greater than p */
  /*                (number of columns of matrix X including the intercept but
   */
  /*                smaller then n. If the purpose is outlier detection than h
   */
  /*                does not have to be smaller than [0.5*(n+p+1)] (default */
  /*                value). On the other hand if the purpose is to find */
  /*                subgroups of homogeneous observations h can be smaller than
   */
  /*                [0.5*(n+p+1)]. If h <p+1 an error will be given. */
  /*                  Example - 'h',round(n*0,75) */
  /*                  Data Types - double */
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
  /*        lms   : Estimation method. Scalar, vector or structure. */
  /*                If lms is a scalar = 1 (default) Least Median of Squares is
   */
  /*                        computed, */
  /*                else if lms is a scalar = 2 fast lts with the all default
   * options is used */
  /*                else if lms is a scalar different from 1 and 2 standard lts
   */
  /*                        is used (without concentration steps) */
  /*                else if lms is a struct fast lts (with concentration steps)
   * is used. */
  /*                   In this case the user can control the following options:
   */
  /*                   lms.refsteps : scalar defining number of refining
   * iterations in each */
  /*                                subsample (default = 3). refsteps = 0 means
   */
  /*                                "raw-subsampling" without iterations. */
  /*                    lms.reftol  : scalar. Default value of tolerance for the
   * refining steps */
  /*                                The default value is 1e-6. */
  /*                    lms.bestr   : scalar defining number of "best betas" to
   * remember from the */
  /*                                subsamples. These will be later iterated
   * until convergence */
  /*                                (default=5). */
  /*              lms.refstepsbestr : scalar defining number of refining
   * iterations for each */
  /*                                best subset (default = 50). */
  /*               lms.reftolbestr  : scalar. Default value of tolerance for the
   * refining steps */
  /*                                for each of the best subsets */
  /*                                The default value is 1e-8. */
  /*                  Example - 'lms',1 */
  /*                  Data Types - double */
  /*  */
  /*       nocheck: Check input arguments. Boolean. If nocheck is equal to true
   * no */
  /*                check is performed on matrix y and matrix X. Notice that */
  /*                when no check is true y and X are left unchanged, that is */
  /*                the additional column of ones for the intercept is */
  /*                not added. As default nocheck=false. The controls on h, bdp
   */
  /*                and nsamp still remain. Example - 'nocheck',true */
  /*                Data Types - boolean */
  /*  */
  /*         nomes:  It controls whether to display or not on the screen */
  /*                messages about estimated  time to compute LMS (LTS) .
   * Boolean. */
  /*                If nomes is equal to true no message about estimated */
  /*                time to compute LMS (LTS) is displayed, else if nomes is */
  /*                equal to false (default), a message about estimated time is
   */
  /*                displayed. */
  /*                Example - 'nomes',true */
  /*                Data Types - logical */
  /*  */
  /*         msg  : It controls whether to display or not messages on the
   * screen. Boolean. */
  /*                 If msg==true (default) messages are displayed */
  /*                on the screen about estimated time to compute the estimator
   */
  /*                and the warnings about */
  /*                'MATLAB:rankDeficientMatrix', 'MATLAB:singularMatrix' and */
  /*                'MATLAB:nearlySingularMatrix' are set to off */
  /*                else no message is displayed on the screen */
  /*                Example - 'msg',false */
  /*                Data Types - logical */
  /*  */
  /*        nsamp : Number of subsamples which will be extracted to find the */
  /*                robust estimator or matrix with preextracted subsamples. */
  /*                Scalar or matrix. */
  /*                If nsamp=0 all subsets will be extracted. They will be (n */
  /*                choose p). If nsamp is (say) 200, 200 subsets will be */
  /*                extracted. If nsamp is a matrix of size r-by-p, it contains
   */
  /*                in the rows the subsets which sill have to be extracted. */
  /*                For example, if p=3 and nsamp=[ 2 4 9; 23 45 49; 90 34 1];
   */
  /*                the first subset is made up of units [2 4 9], the second */
  /*                subset of units [23 45 49] and the third subset of units */
  /*                [90 34 1]; */
  /*                  Example - 'nsamp',0 */
  /*                  Data Types - double */
  /*                Remark: if the number of all possible subset is <1000 the */
  /*                default is to extract all subsets, otherwise just 1000 if */
  /*                fastLTS is used (lms=2 or lms is a structure) or 3000 for */
  /*                standard LTS or LMS. */
  /*  */
  /*        rew   : LXS reweighted. Boolean. */
  /*                 If rew=true the reweighted version of LTS (LMS) is */
  /*                used and the output quantities refer to the reweighted */
  /*                version */
  /*                else no reweighting is performed (default). */
  /*                  Example - 'rew',true */
  /*                  Data Types - logical */
  /*  */
  /*        yxsave : the response vector y and data matrix X are saved into the
   * output */
  /*                 structure out. Scalar. */
  /*                Default is 0, i.e. no saving is done. */
  /*                Example - 'yxsave',1 */
  /*                Data Types - double */
  /*  */
  /*        plots : Plot on the screen. Scalar or structure. */
  /*                If plots = 1, a plot which shows the */
  /*                robust residuals against index number is shown on the */
  /*                screen. The confidence level which is used to draw the */
  /*                horizontal lines associated with the bands for the */
  /*                residuals is as specified in input option conflev. If */
  /*                conflev is missing a nominal 0.975 confidence interval will
   */
  /*                be used. */
  /*                  Example - 'plots',1 */
  /*                  Data Types - double */
  /*  */
  /*        Remark: The user should only give the input arguments that have to
   */
  /*                change their default value. The name of the input arguments
   */
  /*                needs to be followed by their value. The order of the input
   */
  /*                arguments is of no importance. */
  /*  */
  /*   Output: */
  /*  */
  /*   out :     A structure containing the following fields */
  /*  */
  /*             out.rew  = boolean. if out.rew=true all subsequent output
   * refers to */
  /*                        reweighted else no reweighting is done. */
  /*             out.beta = Vector of beta LTS (LMS) coefficient estimates, */
  /*                        including the intercept when options.intercept=true.
   */
  /*                        out.beta=[intercept slopes]. */
  /*               out.bs = p x 1 vector containing the units forming subset */
  /*                        associated with bLMS (bLTS). */
  /*        out.residuals = Vector containing the standardized residuals from */
  /*                        the regression. */
  /*            out.scale = Scale estimate of the residuals. */
  /*          out.weights = Vector like y containing weights. The elements of */
  /*                        this vector are 0 or 1. */
  /*                        These weights identify the h observations which are
   */
  /*                        used to compute the final LTS (LMS) estimate. */
  /*                        sum(out.weights)=h if there is not a perfect fit */
  /*                        otherwise sum(out.weights) can be greater than h */
  /*                out.h = The number of observations that have determined the
   */
  /*                        LTS (LMS) estimator, i.e. the value of h. */
  /*         out.outliers = row vector containing the list of the units declared
   */
  /*                        as outliers using confidence level specified in */
  /*                        input scalar conflev. */
  /*          out.conflev = confidence level which is used to declare outliers.
   */
  /*                        Remark: scalar out.conflev will be used */
  /*                        to draw the horizontal lines (confidence bands) in
   * the plots */
  /*          out.singsub = Number of subsets wihtout full rank. Notice that if
   */
  /*                        this number is greater than 0.1*(number of */
  /*                        subsamples) a warning is produced on the screen */
  /*            out.class = 'LTS' or 'LMS'. */
  /*             out.y    = response vector Y. The field is present only if
   * option */
  /*                        yxsave is set to 1. */
  /*             out.X    = data matrix X. The field is present only if option
   */
  /*                        yxsave is set to 1. */
  /*  */
  /*   Optional Output: */
  /*  */
  /*             C        : Indexes of the extracted subsamples. Matrix. */
  /*                        Matrix containing the indexes of the subsamples */
  /*                        extracted for computing the estimate (the so called
   */
  /*                        elemental sets). For example, if C(3,:)=[2 5 20], */
  /*                        implies that the third extracted subsample is */
  /*                        formed by units 2, 5 and 20. */
  /*  */
  /*  See also FSReda, Sreg, MMreg, LTSts */
  /*  */
  /*  References: */
  /*  */
  /*    Rousseeuw P.J., Leroy A.M. (1987), "Robust regression and outlier */
  /*    detection", Wiley. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* <a href="matlab: docsearchFS('LXS')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /*  */
  /* { */
  /*     % LXS with default input and output. */
  /*     % Compute LMS estimator without reweighting, add intercept to matrix X
   */
  /*     % and do not produce plots. */
  /*     n=200; */
  /*     p=3; */
  /*     randn('state', 123456); */
  /*     X=randn(n,p); */
  /*     y=randn(n,1); */
  /*     y(1:5)=y(1:5)+6; */
  /*     [out]=LXS(y,X); */
  /* } */
  /* { */
  /*     % LXS with optional arguments. */
  /*     % Compute LMS estimator, reweight and plot the residuals. */
  /*     n=200; */
  /*     p=3; */
  /*     randn('state', 123456); */
  /*     X=randn(n,p); */
  /*     y=randn(n,1); */
  /*     y(1:5)=y(1:5)+6; */
  /*     [out]=LXS(y,X,'rew',1,'plots',1); */
  /* } */
  /* { */
  /*     % LXS with optional output. */
  /*     % Generating the C matrix containing the indices of the subsamples */
  /*     % extracted for computing the estimate (the so called elemental sets).
   */
  /*     n=200; */
  /*     p=3; */
  /*     randn('state', 123456); */
  /*     X=randn(n,p); */
  /*     y=randn(n,1); */
  /*     y(1:5)=y(1:5)+6; */
  /*     [out,C]=LXS(y,X); */
  /* } */
  /* { */
  /*     % Reweighted LTS estimator. */
  /*     % Compute reweighted LTS estimator and produce the plot of */
  /*     % residuals. */
  /*     n=200; */
  /*     p=3; */
  /*     randn('state', 123456); */
  /*     X=randn(n,p); */
  /*     y=randn(n,1); */
  /*     y(1:5)=y(1:5)+6; */
  /*     [out]=LXS(y,X,'rew',1,'lms',0,'plots',1); */
  /* } */
  /* { */
  /*     % Specifying the number of subsamples. */
  /*     % Compute LMS estimator, without plots using 20000 subsamples. */
  /*     n=200; */
  /*     p=3; */
  /*     randn('state', 123456); */
  /*     X=randn(n,p); */
  /*     y=randn(n,1); */
  /*     y(1:5)=y(1:5)+6; */
  /*     [out]=LXS(y,X,'nsamp',20000); */
  /* } */
  /* { */
  /*     % Specifying a confidence level. */
  /*     % Compute reweighted LMS and use a confidence level for outlier */
  /*     % detection equal to 0.999. */
  /*     n=200; */
  /*     p=3; */
  /*     randn('state', 123456); */
  /*     X=randn(n,p); */
  /*     y=randn(n,1); */
  /*     y(1:5)=y(1:5)+6; */
  /*     [out]=LXS(y,X,'rew',1,'conflev',0.999); */
  /* } */
  /* { */
  /*     % Using fast options. */
  /*     % Compute LTS using fast options */
  /*     % detection equal to 0.999. */
  /*     lms=struct; */
  /*     % Do 5 refining steps for each elemental subset */
  /*     lms.refsteps=5; */
  /*     % Store the best 10 subsets */
  /*     lms.bestr=10; */
  /*     n=200; */
  /*     p=3; */
  /*     randn('state', 123456); */
  /*     X=randn(n,p); */
  /*     y=randn(n,1); */
  /*     y(1:5)=y(1:5)+6; */
  /*     [out]=LXS(y,X,'lms',lms,'plots',1); */
  /* } */
  /* { */
  /*     %% We compare the output of different procedures:  only the reweighted
   */
  /*     % LTS seems to detect half of the outlier with a Bonferroni */
  /*     %significance level. */
  /*     close all; */
  /*     state=100; */
  /*     randn('state', state); */
  /*     n=100; */
  /*     X=randn(n,3); */
  /*     bet=[3;4;5]; */
  /*     y=3*randn(n,1)+X*bet; */
  /*     y(1:20)=y(1:20)+13; */
  /*  */
  /*     % Define nominal confidence level */
  /*     conflev=[0.99,1-0.01/length(y)]; */
  /*     % Define number of subsets */
  /*     nsamp=3000; */
  /*     % Define the main title of the plots */
  /*     titl=''; */
  /*  */
  /*     % LMS with no reweighting */
  /*     [outLMS]=LXS(y,X,'nsamp',nsamp,'conflev',conflev(1)); */
  /*     h=subplot(2,2,1) */
  /*     laby='Scaled LMS residuals'; */
  /*     resindexplot(outLMS.residuals,'h',h,'title',titl,'laby',laby,'numlab','','conflev',conflev)
   */
  /*  */
  /*     % LTS with no reweighting */
  /*     h=subplot(2,2,2); */
  /*     [outLTS]=LXS(y,X,'nsamp',nsamp,'conflev',conflev(1),'lms',0); */
  /*     laby='Scaled LTS residuals'; */
  /*     resindexplot(outLTS.residuals,'h',h,'title',titl,'laby',laby,'numlab','','conflev',conflev);
   */
  /*  */
  /*     % LMS with reweighting */
  /*     [outLMSr]=LXS(y,X,'nsamp',nsamp,'conflev',conflev(1),'rew',1); */
  /*     h=subplot(2,2,3); */
  /*     laby='Scaled reweighted LMS residuals'; */
  /*     resindexplot(outLMSr.residuals,'h',h,'title',titl,'laby',laby,'numlab','','conflev',conflev)
   */
  /*  */
  /*     % LTS with reweighting */
  /*     [outLTSr]=LXS(y,X,'nsamp',nsamp,'conflev',conflev(1),'rew',1,'lms',0);
   */
  /*     h=subplot(2,2,4); */
  /*     laby='Scaled reweighted LTS residuals'; */
  /*     resindexplot(outLTSr.residuals,'h',h,'title',titl,'laby',laby,'numlab','','conflev',conflev);
   */
  /*     % By simply changing the seed to 543 (state=543), using a Bonferroni
   * size of 1%, no unit is declared as outlier. */
  /* } */
  /* { */
  /*     %% Example of the use of option bonflevoutX. */
  /*     % In this example a set of remote units is added to a cloud of points.
   */
  /*     % The purpose of this example is to show that while best LMS using all
   */
  /*     % default options contains some of the remote units. In order to make
   * sure */
  /*     % that the remote units are excluded from the best LMS subset it is */
  /*     % necessary to use option bonflevoutX. */
  /*     rng('default') */
  /*     rng(10000) */
  /*     n=100; */
  /*     p=1; */
  /*     X=randn(n,p); */
  /*     epsil=10; */
  /*     beta=ones(p,1); */
  /*     y=X*beta+randn(n,1)*epsil; */
  /*     % Add 10 very remote points */
  /*     add=10; */
  /*     Xadd=X(1:add,:)+5000; */
  /*     yadd=y(1:add)+200; */
  /*     Xall=[X;Xadd]; */
  /*     yall=[y;yadd]; */
  /*     out=LXS(yall,Xall); */
  /*     subplot(2,1,1) */
  /*     plot(Xall,yall,'o') */
  /*     xylim=axis; */
  /*     line(xylim(1:2),out.beta(1)+out.beta(2)*xylim(1:2)) */
  /*     title('Fit using best subset with option bonflevoutX empty') */
  /*     subplot(2,1,2) */
  /*     plot(Xall,yall,'o') */
  /*     out=LXS(yall,Xall,'bonflevoutX',0.99); */
  /*     line(xylim(1:2),out.beta(1)+out.beta(2)*xylim(1:2)) */
  /*     ylim(xylim(3:4)); */
  /*     title('Fit using best subset with option bonflevoutX  not empty') */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checking */
  i = b_y->size[0];
  b_y->size[0] = y->size[0];
  emxEnsureCapacity_real_T(b_y, i);
  b_y_data = b_y->data;
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_y_data[i] = y_data[i];
  }
  i = out->X->size[0] * out->X->size[1];
  out->X->size[0] = X->size[0];
  out->X->size[1] = X->size[1];
  emxEnsureCapacity_real_T(out->X, i);
  loop_ub = X->size[0] * X->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->X->data[i] = X_data[i];
  }
  chkinputR(b_y, out->X, intercept, nocheck, &n, &p);
  b_y_data = b_y->data;
  emxInit_real_T(&seq, 2);
  seq_data = seq->data;
  if (rtIsNaN(n)) {
    i = seq->size[0] * seq->size[1];
    seq->size[0] = 1;
    seq->size[1] = 1;
    emxEnsureCapacity_real_T(seq, i);
    seq_data = seq->data;
    seq_data[0] = rtNaN;
  } else if (n < 1.0) {
    seq->size[0] = 1;
    seq->size[1] = 0;
  } else if (rtIsInf(n) && (1.0 == n)) {
    i = seq->size[0] * seq->size[1];
    seq->size[0] = 1;
    seq->size[1] = 1;
    emxEnsureCapacity_real_T(seq, i);
    seq_data = seq->data;
    seq_data[0] = rtNaN;
  } else {
    i = seq->size[0] * seq->size[1];
    seq->size[0] = 1;
    loop_ub = (int)floor(n - 1.0);
    seq->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(seq, i);
    seq_data = seq->data;
    for (i = 0; i <= loop_ub; i++) {
      seq_data[i] = (double)i + 1.0;
    }
  }
  /*  User options */
  /*  singsub= scalar which will contain the number of singular subsets which */
  /*  are extracted (that is the subsets of size p which are not full rank) */
  singsub = 0.0;
  /*  If the number of all possible subsets is <10000 the default is to extract
   */
  /*  all subsets otherwise just 10000. */
  /*  Notice that we use bc, a fast version of nchoosek. One may also use the */
  /*  approximation floor(exp(gammaln(n+1)-gammaln(n-p+1)-gammaln(p+1))+0.5) */
  ncomb = bc(n, p);
  /*  Set the "half" of the data points. */
  /*  initialize brob which will be the vector of estimated robust regression */
  /*  coefficients */
  loop_ub_tmp = (int)p;
  i = out->beta->size[0];
  out->beta->size[0] = (int)p;
  emxEnsureCapacity_real_T(out->beta, i);
  for (i = 0; i < loop_ub_tmp; i++) {
    out->beta->data[i] = -99.0;
  }
  /*  Write in structure 'options' the options chosen by the user */
  rmin = nsamp;
  /*  And check if the optional user parameters are reasonable. */
  /*  Check h and bdp */
  /*  The user has only specified h: no need to specify bdp. */
  if (h < p + 1.0) {
    int2str(p + 1.0, b_p.data, b_p.size);
  }
  /*  the user has only specified bdp: h is defined accordingly */
  /*  Check number of subsamples to extract */
  if (nsamp > ncomb) {
    rmin = 0.0;
  }
  /*  Default values for the optional */
  /*  parameters are set inside structure 'options' */
  /*  Number of data points on which estimates are based */
  /*  Number of subsets to extract */
  /*  if options.lms==1 then LMS, else LTS */
  if (lms == 2.0) {
    /*  lms=struct; */
    /*  ij is a scalar used to ensure that the best first bestr non singular */
    /*  subsets are stored */
    /*  lmsopt is associated with the message about total computing time */
    lmsopt = 2;
  } else {
    /*  lmsopt is associated with the message about total computing time */
    lmsopt = (lms == 1.0);
  }
  /*  Scalar which controls the messages displayed on the screen */
  /*  if options.nomes==true no message about estimated time to compute LMS is
   * displayed */
  /*  Extract in the rows of matrix C the indexes of all required subsets */
  subsets(rmin, n, p, ncomb, C, &nselected);
  C_data = C->data;
  /*  Store the indices in varargout */
  /*  rmin will contain the minimum value of LMS (LTS) */
  rmin = rtInf;
  /*  initialise and start timer. */
  tsampling = ceil(fmin(nselected / 100.0, 1000.0));
  nx = (int)tsampling;
  time_size = (int)tsampling;
  if (0 <= nx - 1) {
    memset(&time_data[0], 0, nx * sizeof(double));
  }
  /*  bonflevoutX option to search for outliers in the X space */
  emxInit_real_T(&Xwithoutint, 2);
  emxInit_real_T(&outliers, 1);
  if ((bonflevoutX_size[0] != 0) && (bonflevoutX_size[1] != 0)) {
    bonflevout = true;
    if (nocheck) {
      i = Xwithoutint->size[0] * Xwithoutint->size[1];
      Xwithoutint->size[0] = out->X->size[0];
      Xwithoutint->size[1] = out->X->size[1];
      emxEnsureCapacity_real_T(Xwithoutint, i);
      outliers_data = Xwithoutint->data;
      loop_ub = out->X->size[0] * out->X->size[1];
      for (i = 0; i < loop_ub; i++) {
        outliers_data[i] = out->X->data[i];
      }
    } else if (intercept) {
      if (2 > out->X->size[1]) {
        i = 0;
        i1 = 0;
      } else {
        i = 1;
        i1 = out->X->size[1];
      }
      loop_ub = out->X->size[0];
      i2 = Xwithoutint->size[0] * Xwithoutint->size[1];
      Xwithoutint->size[0] = out->X->size[0];
      nx = i1 - i;
      Xwithoutint->size[1] = nx;
      emxEnsureCapacity_real_T(Xwithoutint, i2);
      outliers_data = Xwithoutint->data;
      for (i1 = 0; i1 < nx; i1++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          outliers_data[i2 + Xwithoutint->size[0] * i1] =
              out->X->data[i2 + out->X->size[0] * (i + i1)];
        }
      }
    } else {
      i = Xwithoutint->size[0] * Xwithoutint->size[1];
      Xwithoutint->size[0] = out->X->size[0];
      Xwithoutint->size[1] = out->X->size[1];
      emxEnsureCapacity_real_T(Xwithoutint, i);
      outliers_data = Xwithoutint->data;
      loop_ub = out->X->size[0] * out->X->size[1];
      for (i = 0; i < loop_ub; i++) {
        outliers_data[i] = out->X->data[i];
      }
    }
    if (Xwithoutint->size[1] > 1) {
      critdef_size[0] = 1;
      critdef_size[1] = 2;
      critdef_data[0] = 'm';
      critdef_data[1] = 'd';
    } else {
      critdef_size[0] = 1;
      critdef_size[1] = 3;
      critdef_data[0] = 'u';
      critdef_data[1] = 'n';
      critdef_data[2] = 'i';
    }
    emxInit_real_T(&b_Xwithoutint, 2);
    i = b_Xwithoutint->size[0] * b_Xwithoutint->size[1];
    b_Xwithoutint->size[0] = Xwithoutint->size[0];
    b_Xwithoutint->size[1] = Xwithoutint->size[1];
    emxEnsureCapacity_real_T(b_Xwithoutint, i);
    Xwithoutint_data = b_Xwithoutint->data;
    loop_ub = Xwithoutint->size[0] * Xwithoutint->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      Xwithoutint_data[i] = outliers_data[i];
    }
    emxInit_real_T(&outFSM_outliers, 2);
    emxInit_real_T(&expl_temp, 2);
    emxInit_real_T(&b_expl_temp, 2);
    emxInit_real_T(&c_expl_temp, 2);
    emxInit_real_T(&d_expl_temp, 2);
    emxInit_real_T(&e_expl_temp, 2);
    emxInit_real_T(&f_expl_temp, 2);
    FSM(b_Xwithoutint, bonflevoutX_data, bonflevoutX_size, floor(n * 0.6),
        critdef_data, critdef_size, (double)Xwithoutint->size[1] + 1.0,
        outFSM_outliers, expl_temp, b_expl_temp, c_expl_temp, d_expl_temp,
        e_expl_temp, f_expl_temp, expl_temp_data, expl_temp_size);
    Xwithoutint_data = outFSM_outliers->data;
    i = outliers->size[0];
    outliers->size[0] = outFSM_outliers->size[0] * outFSM_outliers->size[1];
    emxEnsureCapacity_real_T(outliers, i);
    outliers_data = outliers->data;
    loop_ub = outFSM_outliers->size[0] * outFSM_outliers->size[1];
    emxFree_real_T(&b_Xwithoutint);
    emxFree_real_T(&f_expl_temp);
    emxFree_real_T(&e_expl_temp);
    emxFree_real_T(&d_expl_temp);
    emxFree_real_T(&c_expl_temp);
    emxFree_real_T(&b_expl_temp);
    emxFree_real_T(&expl_temp);
    for (i = 0; i < loop_ub; i++) {
      outliers_data[i] = Xwithoutint_data[i];
    }
    emxFree_real_T(&outFSM_outliers);
  } else {
    bonflevout = false;
    i = outliers->size[0];
    outliers->size[0] = 1;
    emxEnsureCapacity_real_T(outliers, i);
    outliers_data = outliers->data;
    outliers_data[0] = 0.0;
  }
  /*  Computation of LMS (LTS) */
  tic(&b_conflev, &ttic_tv_nsec);
  i = out->bs->size[0] * out->bs->size[1];
  out->bs->size[0] = 1;
  out->bs->size[1] = (int)p;
  emxEnsureCapacity_real_T(out->bs, i);
  for (i = 0; i < loop_ub_tmp; i++) {
    out->bs->data[i] = 0.0;
  }
  i = (int)nselected;
  emxInit_real_T(&r2, 1);
  emxInit_int32_T(&ia, 1);
  emxInit_int32_T(&ib, 1);
  emxInit_real_T(&b_C, 2);
  for (b_i = 0; b_i < i; b_i++) {
    if (b_i + 1U <= (unsigned int)tsampling) {
      tic(&b_conflev, &ttic_tv_nsec);
    }
    /*  extract a subset of size p */
    guard1 = false;
    if (bonflevout) {
      loop_ub = C->size[1];
      i1 = b_C->size[0] * b_C->size[1];
      b_C->size[0] = 1;
      b_C->size[1] = C->size[1];
      emxEnsureCapacity_real_T(b_C, i1);
      outliers_data = b_C->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        outliers_data[i1] = C_data[b_i + C->size[0] * i1];
      }
      c_do_vectors(b_C, outliers, r2, ia, ib);
      if (r2->size[0] != 0) {
        i1 = out->residuals->size[0];
        out->residuals->size[0] = 1;
        emxEnsureCapacity_real_T(out->residuals, i1);
        out->residuals->data[0] = rtNaN;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
    if (guard1) {
      loop_ub = C->size[1];
      nx = out->X->size[1];
      i1 = Xwithoutint->size[0] * Xwithoutint->size[1];
      Xwithoutint->size[0] = C->size[1];
      Xwithoutint->size[1] = out->X->size[1];
      emxEnsureCapacity_real_T(Xwithoutint, i1);
      outliers_data = Xwithoutint->data;
      for (i1 = 0; i1 < nx; i1++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          outliers_data[i2 + Xwithoutint->size[0] * i1] =
              out->X->data[((int)C_data[b_i + C->size[0] * i2] +
                            out->X->size[0] * i1) -
                           1];
        }
      }
      /*  if rank(Xb)==p Warning: this instruction has been replaced by a */
      /*  posteriori control on vector b */
      /*  Compute the vector of coefficients using matrice Xb and yb */
      loop_ub = C->size[1];
      i1 = r2->size[0];
      r2->size[0] = C->size[1];
      emxEnsureCapacity_real_T(r2, i1);
      outliers_data = r2->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        outliers_data[i1] = b_y_data[(int)C_data[b_i + C->size[0] * i1] - 1];
      }
      mldivide(Xwithoutint, r2, out->residuals);
    }
    if ((!rtIsNaN(out->residuals->data[0])) &&
        (!rtIsInf(out->residuals->data[0]))) {
      /*  Residuals for all observations using b based on subset */
      /*  Squared residuals for all the observations */
      /*  Ordering of squared residuals */
      mtimes(out->X, out->residuals, r2);
      loop_ub = b_y->size[0];
      if (b_y->size[0] == r2->size[0]) {
        i1 = r2->size[0];
        r2->size[0] = b_y->size[0];
        emxEnsureCapacity_real_T(r2, i1);
        outliers_data = r2->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          varargin_1 = b_y_data[i1] - outliers_data[i1];
          outliers_data[i1] = varargin_1 * varargin_1;
        }
      } else {
        jb_binary_expand_op(r2, b_y);
      }
      c_sort(r2);
      outliers_data = r2->data;
      if (lms == 1.0) {
        /*  LMS */
        ncomb = outliers_data[(int)h - 1];
      } else {
        /*  STANDARD LTS without concentration steps */
        i1 = r2->size[0];
        r2->size[0] = (int)h;
        emxEnsureCapacity_real_T(r2, i1);
        ncomb = blockedSummation(r2, (int)h);
      }
      if (ncomb < rmin) {
        /*  rmin = smallest ordered quantile or smallest truncated sum. */
        rmin = ncomb;
        /*  brob = \beta_lms or \beta_lts */
        i1 = out->beta->size[0];
        out->beta->size[0] = out->residuals->size[0];
        emxEnsureCapacity_real_T(out->beta, i1);
        loop_ub = out->residuals->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          out->beta->data[i1] = out->residuals->data[i1];
        }
        /*  bs = units forming best subset according to lms or lts */
        loop_ub = C->size[1];
        i1 = out->bs->size[0] * out->bs->size[1];
        out->bs->size[0] = 1;
        out->bs->size[1] = C->size[1];
        emxEnsureCapacity_real_T(out->bs, i1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          out->bs->data[i1] = C_data[b_i + C->size[0] * i1];
        }
      }
    } else {
      singsub++;
    }
    if (!nomes) {
      if (b_i + 1U <= (unsigned int)tsampling) {
        /*  sampling time until step tsampling */
        time_data[b_i] = toc(b_conflev, ttic_tv_nsec);
      } else if ((b_i + 1U == (unsigned int)((int)tsampling + 1)) && msg) {
        /*  stop sampling and print the estimated time */
        switch (lmsopt) {
        case 1:
          c_time_data.data = &time_data[0];
          c_time_data.size = &time_size;
          c_time_data.allocatedSize = 1000;
          c_time_data.numDimensions = 1;
          c_time_data.canFreeData = false;
          Rprintf("Total estimated time to complete LMS: %5.2f seconds \n",
                 nselected * median(&c_time_data));
          //fflush(stdout);
          break;
        case 2:
          d_time_data.data = &time_data[0];
          d_time_data.size = &time_size;
          d_time_data.allocatedSize = 1000;
          d_time_data.numDimensions = 1;
          d_time_data.canFreeData = false;
          Rprintf("Total estimated time to complete FASTLTS: %5.2f seconds \n",
                 nselected * median(&d_time_data));
          //fflush(stdout);
          break;
        default:
          b_time_data.data = &time_data[0];
          b_time_data.size = &time_size;
          b_time_data.allocatedSize = 1000;
          b_time_data.numDimensions = 1;
          b_time_data.canFreeData = false;
          Rprintf("Total estimated time to complete LTS: %5.2f seconds \n",
                 nselected * median(&b_time_data));
          //fflush(stdout);
          break;
        }
      }
    }
  }
  emxFree_real_T(&b_C);
  emxFree_int32_T(&ib);
  emxFree_real_T(&outliers);
  if (lms == 1.0) {
    /*  Estimate of scale based on h-quantile of all squared residuals */
    ncomb = sqrt(rmin);
  } else {
    /*  Estimate of scale based on the first h squared smallest residuals */
    ncomb = sqrt(rmin / h);
  }
  /*  residuals = Raw residuals using robust estimate of beta */
  mtimes(out->X, out->beta, out->residuals);
  if (b_y->size[0] == out->residuals->size[0]) {
    i = out->residuals->size[0];
    out->residuals->size[0] = b_y->size[0];
    emxEnsureCapacity_real_T(out->residuals, i);
    loop_ub = b_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->residuals->data[i] = b_y_data[i] - out->residuals->data[i];
    }
  } else {
    kb_binary_expand_op(out, b_y);
  }
  /*  Consistency factor */
  if (lmsopt == 1) {
    /*  Consistency factor based on the fact that med |z_i|/ \Phi^-1(0.75) is a
     */
    /*  consistent estimator of \sigma when z_i ~ N(0, \sigma^2) */
    /*  The additional factor 1+5/(n-p) was found by simulation by Rousseeuw and
     */
    /*  Leroy (1987), see p. 202 */
    /*  Apply the consistency factor to the preliminary scale estimate */
    rmin = ncomb * (1.4826 * (5.0 / (n - p) + 1.0));
  } else {
    /*  Consistency factor based on the variance of the truncated normal
     * distribution. */
    /*  1-h/n=trimming percentage */
    /*  Compute variance of the truncated normal distribution. */
    tsampling = h / n;
    p = 0.5 * (tsampling + 1.0);
    if ((p >= 0.0) && (p <= 1.0)) {
      rmin = -1.4142135623730951 * erfcinv(2.0 * p);
    } else {
      rmin = rtNaN;
    }
    /* factor=1/sqrt(1-(2*a.*normpdf(a))./(2*normcdf(a)-1)); */
    /*  Note that factor=sqrt(factor1) */
    /*      v=1; */
    /*      a=chi2inv(h/n,1); */
    /*      factor1=(h/n)/(chi2cdf(a,1+2)); */
    /*  Apply the asymptotic consistency factor to the preliminary scale
     * estimate */
    rmin =
        ncomb *
        (1.0 / sqrt(1.0 - 2.0 * (n / h) * rmin *
                              (exp(-0.5 * rmin * rmin) / 2.5066282746310002)));
    /*  Apply small sample correction factor of Pison et al. */
    if (h < n) {
      rmin *= sqrt(b_corfactorRAW(n, tsampling));
    }
    /*          % Analysis of the small sample correction factor of Pison et al.
     */
    /*          rangen=20:100; */
    /*          corf=zeros(length(rangen),1); */
    /*          for i=1:length(rangen) */
    /*              corf(i)=sqrt(corfactorRAW(1,rangen(i),0.7)); */
    /*          end */
    /*          plot(rangen',corf) */
    /*          disp('s0 after') */
    /*          disp(s0) */
  }
  emxInit_boolean_T(&weights, 1);
  if (fabs(rmin) > 1.0E-7) {
    /*  Assign weight=1 to the h units which show the smallest h squared */
    /*  residuals */
    i = r2->size[0];
    r2->size[0] = out->residuals->size[0];
    emxEnsureCapacity_real_T(r2, i);
    outliers_data = r2->data;
    loop_ub = out->residuals->size[0];
    for (i = 0; i < loop_ub; i++) {
      varargin_1 = out->residuals->data[i];
      outliers_data[i] = varargin_1 * varargin_1;
    }
    sort(r2, ia);
    ia_data = ia->data;
    i = r2->size[0];
    r2->size[0] = ia->size[0];
    emxEnsureCapacity_real_T(r2, i);
    outliers_data = r2->data;
    loop_ub = ia->size[0];
    for (i = 0; i < loop_ub; i++) {
      outliers_data[i] = ia_data[i];
    }
    loop_ub_tmp = (int)n;
    i = out->weights->size[0];
    out->weights->size[0] = (int)n;
    emxEnsureCapacity_boolean_T(out->weights, i);
    for (i = 0; i < loop_ub_tmp; i++) {
      out->weights->data[i] = false;
    }
    emxInit_int32_T(&r, 2);
    nx = (int)h;
    i = r->size[0] * r->size[1];
    r->size[0] = 1;
    r->size[1] = (int)h;
    emxEnsureCapacity_int32_T(r, i);
    ia_data = r->data;
    for (i = 0; i < nx; i++) {
      ia_data[i] = (int)outliers_data[i];
    }
    loop_ub = r->size[1];
    for (i = 0; i < loop_ub; i++) {
      out->weights->data[ia_data[i] - 1] = true;
    }
    emxFree_int32_T(&r);
    /*  Initialize structure out */
    /*  Store inside structure out, the vector of the weights */
    /*  Compute the Student T quantile threshold . If options.conflev=0.975, */
    /*  1.25% on the right and */
    /*  1.25% on the left, globally 2.5%. */
    /*  m = factor which modifies the degrees of freedom used for computing */
    /*  the quantile. */
    /*  Confidence level which is used for outlier detection */
    b_conflev = (conflev + 1.0) / 2.0;
    ncomb = tinv(b_conflev, 2.0 * n / asvar(h, n));
    /*  Observations with a standardized residual smaller than the quantile */
    /*  threshold have a weight equal to 1, else the weight is equal to 0. */
    /*  REMARK: using this threshold, even if the sample is homogeneous, */
    /*  you are willing to declare at least 2.5% units as outliers. */
    /*  Remark: sqrt(chi2inv(0.975,1)) = tinv(0.9875,\infinity) = quantile */
    loop_ub = out->residuals->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->residuals->data[i] /= rmin;
    }
    nx = out->residuals->size[0];
    i = r2->size[0];
    r2->size[0] = out->residuals->size[0];
    emxEnsureCapacity_real_T(r2, i);
    outliers_data = r2->data;
    for (loop_ub = 0; loop_ub < nx; loop_ub++) {
      outliers_data[loop_ub] = fabs(out->residuals->data[loop_ub]);
    }
    i = weights->size[0];
    weights->size[0] = r2->size[0];
    emxEnsureCapacity_boolean_T(weights, i);
    weights_data = weights->data;
    loop_ub = r2->size[0];
    for (i = 0; i < loop_ub; i++) {
      weights_data[i] = (outliers_data[i] <= ncomb);
    }
    /*  weights is a boolean vector. */
    /*     %% Reweighting part */
    /*  if options.rew==true use reweighted version of LMS/LTS, */
    if (rew) {
      /*  Find new estimate of beta using only observations which have */
      /*  weight equal to 1. Notice that new brob overwrites old brob */
      /*  computed previously. */
      loop_ub_tmp = weights->size[0] - 1;
      nx = 0;
      for (b_i = 0; b_i <= loop_ub_tmp; b_i++) {
        if (weights_data[b_i]) {
          nx++;
        }
      }
      emxInit_int32_T(&b_r2, 1);
      i = b_r2->size[0];
      b_r2->size[0] = nx;
      emxEnsureCapacity_int32_T(b_r2, i);
      ia_data = b_r2->data;
      nx = 0;
      for (b_i = 0; b_i <= loop_ub_tmp; b_i++) {
        if (weights_data[b_i]) {
          ia_data[nx] = b_i + 1;
          nx++;
        }
      }
      loop_ub = out->X->size[1];
      i = Xwithoutint->size[0] * Xwithoutint->size[1];
      Xwithoutint->size[0] = b_r2->size[0];
      Xwithoutint->size[1] = out->X->size[1];
      emxEnsureCapacity_real_T(Xwithoutint, i);
      outliers_data = Xwithoutint->data;
      for (i = 0; i < loop_ub; i++) {
        nx = b_r2->size[0];
        for (i1 = 0; i1 < nx; i1++) {
          outliers_data[i1 + Xwithoutint->size[0] * i] =
              out->X->data[(ia_data[i1] + out->X->size[0] * i) - 1];
        }
      }
      i = r2->size[0];
      r2->size[0] = b_r2->size[0];
      emxEnsureCapacity_real_T(r2, i);
      outliers_data = r2->data;
      loop_ub = b_r2->size[0];
      for (i = 0; i < loop_ub; i++) {
        outliers_data[i] = b_y_data[ia_data[i] - 1];
      }
      emxFree_int32_T(&b_r2);
      mldivide(Xwithoutint, r2, out->beta);
      /*  The QR decomposition is equivalent to the above but less efficient: */
      /*  [Q,R]=qr(X(weights==1,:),0); */
      /*  brob = R\(Q'*y(weights==1)); */
      /*  Computation of reweighted residuals. */
      mtimes(out->X, out->beta, out->residuals);
      if (b_y->size[0] == out->residuals->size[0]) {
        i = out->residuals->size[0];
        out->residuals->size[0] = b_y->size[0];
        emxEnsureCapacity_real_T(out->residuals, i);
        loop_ub = b_y->size[0];
        for (i = 0; i < loop_ub; i++) {
          out->residuals->data[i] = b_y_data[i] - out->residuals->data[i];
        }
      } else {
        kb_binary_expand_op(out, b_y);
      }
      /*  Find new estimate of scale using only observations which have */
      /*  weight equal to 1. */
      nx = weights->size[0];
      if (weights->size[0] == 0) {
        loop_ub_tmp = 0;
      } else {
        loop_ub_tmp = weights_data[0];
        for (loop_ub = 2; loop_ub <= nx; loop_ub++) {
          loop_ub_tmp += weights_data[loop_ub - 1];
        }
      }
      /*  Compute new standardized residuals. */
      /*  Apply consistency factor to reweighted estimate of sigma */
      if (loop_ub_tmp < n) {
        /*  factor=consistencyfactor(hrew,n,1); */
        tsampling = (double)loop_ub_tmp / n;
        p = 0.5 * (tsampling + 1.0);
        if ((p >= 0.0) && (p <= 1.0)) {
          rmin = -1.4142135623730951 * erfcinv(2.0 * p);
        } else {
          rmin = rtNaN;
        }
        /* factor=1/sqrt(1-(2*a.*normpdf(a))./(2*normcdf(a)-1)); */
        /*  Apply small sample correction factor to reweighted estimate of sigma
         */
        ncomb = 1.0 /
                sqrt(1.0 - 2.0 * (n / (double)loop_ub_tmp) * rmin *
                               (exp(-0.5 * rmin * rmin) / 2.5066282746310002)) *
                sqrt(corfactorREW(n, tsampling));
      } else {
        ncomb = 1.0;
      }
      i = r2->size[0];
      r2->size[0] = out->residuals->size[0];
      emxEnsureCapacity_real_T(r2, i);
      outliers_data = r2->data;
      loop_ub = out->residuals->size[0];
      for (i = 0; i < loop_ub; i++) {
        varargin_1 = out->residuals->data[i];
        outliers_data[i] = varargin_1 * varargin_1;
      }
      if (weights->size[0] == r2->size[0]) {
        i = r2->size[0];
        r2->size[0] = weights->size[0];
        emxEnsureCapacity_real_T(r2, i);
        outliers_data = r2->data;
        loop_ub = weights->size[0];
        for (i = 0; i < loop_ub; i++) {
          outliers_data[i] *= (double)weights_data[i];
        }
      } else {
        he_binary_expand_op(r2, weights);
      }
      rmin = sqrt(blockedSummation(r2, r2->size[0]) /
                  ((double)loop_ub_tmp - 1.0)) *
             ncomb;
      loop_ub = out->residuals->size[0];
      for (i = 0; i < loop_ub; i++) {
        out->residuals->data[i] /= rmin;
      }
      /*  Declare as outliers the observations which have a standardized */
      /*  residual greater than cutoff. */
      /*  REMARK: while the first threshold was based on the Student T */
      /*  (with modified degrees of freedom), in this second round the */
      /*  threshold is based on the Normal. Notice that: */
      /*  sqrt(chi2inv(0.975,1)) = tinv(0.9875,\infinity) = norminv(0.9875) */
      nx = out->residuals->size[0];
      i = r2->size[0];
      r2->size[0] = out->residuals->size[0];
      emxEnsureCapacity_real_T(r2, i);
      outliers_data = r2->data;
      for (loop_ub = 0; loop_ub < nx; loop_ub++) {
        outliers_data[loop_ub] = fabs(out->residuals->data[loop_ub]);
      }
      if ((b_conflev >= 0.0) && (b_conflev <= 1.0)) {
        ncomb = -1.4142135623730951 * erfcinv(2.0 * b_conflev);
      } else {
        ncomb = rtNaN;
      }
      i = weights->size[0];
      weights->size[0] = r2->size[0];
      emxEnsureCapacity_boolean_T(weights, i);
      weights_data = weights->data;
      loop_ub = r2->size[0];
      for (i = 0; i < loop_ub; i++) {
        weights_data[i] = (outliers_data[i] <= ncomb);
      }
      /*  The new vector of weights overwrites previous vector of weigths */
      /*  before reweighting. */
      /*  Store information about reweighting */
      out->rew = true;
    } else {
      /*  The default is no reweighting */
      out->rew = false;
    }
  } else {
    /*  Perfect fit */
    /*  There is an approximate perfect fit for the first h observations. */
    /*  We consider as outliers all units with residual greater than 1e-7. */
    nx = out->residuals->size[0];
    i = r2->size[0];
    r2->size[0] = out->residuals->size[0];
    emxEnsureCapacity_real_T(r2, i);
    outliers_data = r2->data;
    for (loop_ub = 0; loop_ub < nx; loop_ub++) {
      outliers_data[loop_ub] = fabs(out->residuals->data[loop_ub]);
    }
    i = weights->size[0];
    weights->size[0] = r2->size[0];
    emxEnsureCapacity_boolean_T(weights, i);
    weights_data = weights->data;
    loop_ub = r2->size[0];
    for (i = 0; i < loop_ub; i++) {
      weights_data[i] = (outliers_data[i] <= 1.0E-7);
    }
    /*  Store the weights */
    i = out->weights->size[0];
    out->weights->size[0] = weights->size[0];
    emxEnsureCapacity_boolean_T(out->weights, i);
    loop_ub = weights->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->weights->data[i] = weights_data[i];
    }
    out->rew = false;
    /*  s is set to 0 */
    rmin = 0.0;
    /*  Standardized residuals are artificially set equal to raw residuals. */
  }
  emxFree_int32_T(&ia);
  emxFree_real_T(&r2);
  emxFree_real_T(&Xwithoutint);
  /*  Store quantities in the out structure */
  /*  Store robust estimate of beta coefficients */
  /*  Store robust estimate of s */
  out->scale = rmin;
  /*  Store standardized residuals */
  /*  Store units forming initial subset */
  /*  Store list of units declared as outliers */
  loop_ub_tmp = weights->size[0] - 1;
  nx = 0;
  for (b_i = 0; b_i <= loop_ub_tmp; b_i++) {
    if (!weights_data[b_i]) {
      nx++;
    }
  }
  emxInit_int32_T(&r1, 1);
  i = r1->size[0];
  r1->size[0] = nx;
  emxEnsureCapacity_int32_T(r1, i);
  ia_data = r1->data;
  nx = 0;
  for (b_i = 0; b_i <= loop_ub_tmp; b_i++) {
    if (!weights_data[b_i]) {
      ia_data[nx] = b_i + 1;
      nx++;
    }
  }
  emxFree_boolean_T(&weights);
  i = out->outliers->size[0] * out->outliers->size[1];
  out->outliers->size[0] = 1;
  out->outliers->size[1] = r1->size[0];
  emxEnsureCapacity_real_T(out->outliers, i);
  loop_ub = r1->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->outliers->data[i] = seq_data[ia_data[i] - 1];
  }
  emxFree_int32_T(&r1);
  emxFree_real_T(&seq);
  /*  Store confidence level which is used to draw the horizontal lines in the
   */
  /*  plot */
  out->conflev = conflev;
  /*  Store the number of observations that have determined the LTS (LMS) */
  /*  estimator, i.e. the value of h. */
  out->h = h;
  /*  Store number of singular subsets */
  out->singsub = singsub;
  if (msg && (singsub / nselected > 0.1)) {
    ncomb = 100.0 * singsub / nselected;
    if (bonflevout) {
      Rprintf("Warning: Number of subsets without full rank or excluded because "
             "containing remote units in the X space equal to %.1f %%\n",
             ncomb);
      //fflush(stdout);
    } else {
      Rprintf("Warning: Number of subsets without full rank equal to %.1f%%\n",
             ncomb);
      //fflush(stdout);
    }
  }
  if (yxsave) {
    if ((!nocheck) && intercept) {
      /*  Store X (without the column of ones if there is an intercept) */
      if (2 > out->X->size[1]) {
        i = 0;
        i1 = 0;
      } else {
        i = 1;
        i1 = out->X->size[1];
      }
      nx = out->X->size[0] - 1;
      loop_ub = out->X->size[0];
      loop_ub_tmp = i1 - i;
      for (i1 = 0; i1 < loop_ub_tmp; i1++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          out->X->data[i2 + (nx + 1) * i1] =
              out->X->data[i2 + out->X->size[0] * (i + i1)];
        }
      }
      i = out->X->size[0] * out->X->size[1];
      out->X->size[0] = nx + 1;
      out->X->size[1] = loop_ub_tmp;
      emxEnsureCapacity_real_T(out->X, i);
    }
    /*  Store response */
    i = out->y->size[0] * out->y->size[1];
    out->y->size[0] = b_y->size[0];
    out->y->size[1] = 1;
    emxEnsureCapacity_real_T(out->y, i);
    loop_ub = b_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->y->data[i] = b_y_data[i];
    }
  } else {
    out->X->size[0] = 0;
    out->X->size[1] = 0;
    out->y->size[0] = 0;
    out->y->size[1] = 0;
  }
  emxFree_real_T(&b_y);
  /*  Store information about the class of the object */
  if (lmsopt == 1) {
    out->class[0] = 'L';
    out->class[1] = 'M';
    out->class[2] = 'S';
  } else {
    out->class[0] = 'L';
    out->class[1] = 'T';
    out->class[2] = 'S';
  }
  /*  Create plots */
}

/* End of code generation (LXS_wrapper.c) */
