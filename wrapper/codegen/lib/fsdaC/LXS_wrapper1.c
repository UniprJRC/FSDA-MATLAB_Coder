/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LXS_wrapper1.c
 *
 * Code generation for function 'LXS_wrapper1'
 *
 */

/* Include files */
#include "LXS_wrapper1.h"
#include "FSM.h"
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
#include "minOrMax.h"
#include "mldivide.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "subsets.h"
#include "tic.h"
#include "tinv.h"
#include "toc.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <stdio.h>
#include <string.h>

/* Function Definitions */
void LXS_wrapper1(const emxArray_real_T *y, const emxArray_real_T *X,
                  const double bonflevoutX_data[],
                  const int bonflevoutX_size[2], double conflev, double h,
                  bool intercept, const struct1_T *lms, bool msg, bool nocheck,
                  bool nomes, double nsamp, bool rew, bool yxsave,
                  struct_LXSlmsstruct_T *out, emxArray_real_T *C)
{
  emxArray_boolean_T *weights;
  emxArray_char_T_1x310 b_p;
  emxArray_int32_T *ia;
  emxArray_int32_T *ib;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_real_T b_time_data;
  emxArray_real_T *Xwithoutint;
  emxArray_real_T *b;
  emxArray_real_T *b_Xwithoutint;
  emxArray_real_T *b_expl_temp;
  emxArray_real_T *b_y;
  emxArray_real_T *bestbetas;
  emxArray_real_T *bestsubset;
  emxArray_real_T *c_expl_temp;
  emxArray_real_T *c_y;
  emxArray_real_T *d_expl_temp;
  emxArray_real_T *e_expl_temp;
  emxArray_real_T *expl_temp;
  emxArray_real_T *f_expl_temp;
  emxArray_real_T *outFSM_outliers;
  emxArray_real_T *outliers;
  emxArray_real_T *seq;
  emxArray_real_T *tmp_betarw;
  double time_data[1000];
  double expl_temp_data[10];
  double b_conflev;
  double n;
  double ncomb;
  double nselected;
  double p;
  double singsub;
  double sworst;
  double tsampling;
  double ttic_tv_sec;
  int b_expl_temp_size[2];
  int critdef_size[2];
  int expl_temp_size[2];
  int b_i;
  int b_loop_ub_tmp;
  int i;
  int i1;
  int i2;
  unsigned int ij;
  int loop_ub;
  int loop_ub_tmp;
  int nx;
  int time_size;
  char b_expl_temp_data[3];
  char critdef_data[3];
  bool bonflevout;
  bool guard1 = false;
  if (!isInitialized_fsdaC) {
    fsdaC_initialize();
  }
  emxInit_real_T(&b_y, 1);
  /*  Wrapper function for LXS (when lms is a struct). NV pair names are not
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
  /*  lms: a struct (with 5 fields of type scalar double) */
  /*  field bestr a scalar of type double */
  /*  field refsteps a scalar of type double */
  /*  field refstepsbestr a scalar of type double */
  /*  field reftol a scalar of type double */
  /*  field reftolbestr a scalar of type double */
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
  /*  */
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
  /*         out.outliers = vector containing the list of the units declared */
  /*                        as outliers using confidence level specified in */
  /*                        input scalar conflev */
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
  /*  */
  /*  See also FSReda, Sreg, MMreg */
  /*  */
  /*  References: */
  /*  */
  /*    Rousseeuw P.J., Leroy A.M. (1987), "Robust regression and outlier */
  /*    detection", Wiley. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
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
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] = y->data[i];
  }
  i = out->X->size[0] * out->X->size[1];
  out->X->size[0] = X->size[0];
  out->X->size[1] = X->size[1];
  emxEnsureCapacity_real_T(out->X, i);
  loop_ub = X->size[0] * X->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->X->data[i] = X->data[i];
  }
  emxInit_real_T(&c_y, 2);
  chkinputR(b_y, out->X, intercept, nocheck, &n, &p);
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
  tsampling = nsamp;
  /*  And check if the optional user parameters are reasonable. */
  /*  Check h and bdp */
  /*  The user has only specified h: no need to specify bdp. */
  if (h < p + 1.0) {
    int2str(p + 1.0, b_p.data, b_p.size);
  }
  /*  the user has only specified bdp: h is defined accordingly */
  /*  Check number of subsamples to extract */
  if (nsamp > ncomb) {
    tsampling = 0.0;
  }
  emxInit_real_T(&bestbetas, 2);
  /*  Default values for the optional */
  /*  parameters are set inside structure 'options' */
  /*  Number of data points on which estimates are based */
  /*  Number of subsets to extract */
  /*  if options.lms==1 then LMS, else LTS */
  b_loop_ub_tmp = (int)lms->bestr;
  i = bestbetas->size[0] * bestbetas->size[1];
  bestbetas->size[0] = (int)lms->bestr;
  bestbetas->size[1] = (int)p;
  emxEnsureCapacity_real_T(bestbetas, i);
  nx = (int)lms->bestr * (int)p;
  for (i = 0; i < nx; i++) {
    bestbetas->data[i] = 0.0;
  }
  emxInit_real_T(&bestsubset, 2);
  i = bestsubset->size[0] * bestsubset->size[1];
  bestsubset->size[0] = (int)lms->bestr;
  bestsubset->size[1] = (int)p;
  emxEnsureCapacity_real_T(bestsubset, i);
  for (i = 0; i < nx; i++) {
    bestsubset->data[i] = 0.0;
  }
  i = out->residuals->size[0];
  out->residuals->size[0] = (int)lms->bestr;
  emxEnsureCapacity_real_T(out->residuals, i);
  for (i = 0; i < b_loop_ub_tmp; i++) {
    out->residuals->data[i] = rtInf;
  }
  sworst = rtInf;
  /*  ij is a scalar used to ensure that the best first bestr non singular */
  /*  subsets are stored */
  ij = 1U;
  /*  lmsopt is associated with the message about total computing time */
  /*  Scalar which controls the messages displayed on the screen */
  /*  if options.nomes==true no message about estimated time to compute LMS is
   * displayed */
  /*  Extract in the rows of matrix C the indexes of all required subsets */
  subsets(tsampling, n, p, ncomb, C, &nselected);
  /*  Store the indices in varargout */
  /*  rmin will contain the minimum value of LMS (LTS) */
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
      loop_ub = out->X->size[0] * out->X->size[1];
      for (i = 0; i < loop_ub; i++) {
        Xwithoutint->data[i] = out->X->data[i];
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
      for (i1 = 0; i1 < nx; i1++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          Xwithoutint->data[i2 + Xwithoutint->size[0] * i1] =
              out->X->data[i2 + out->X->size[0] * (i + i1)];
        }
      }
    } else {
      i = Xwithoutint->size[0] * Xwithoutint->size[1];
      Xwithoutint->size[0] = out->X->size[0];
      Xwithoutint->size[1] = out->X->size[1];
      emxEnsureCapacity_real_T(Xwithoutint, i);
      loop_ub = out->X->size[0] * out->X->size[1];
      for (i = 0; i < loop_ub; i++) {
        Xwithoutint->data[i] = out->X->data[i];
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
    loop_ub = Xwithoutint->size[0] * Xwithoutint->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_Xwithoutint->data[i] = Xwithoutint->data[i];
    }
    emxInit_real_T(&outFSM_outliers, 2);
    emxInit_real_T(&b_expl_temp, 2);
    emxInit_real_T(&c_expl_temp, 2);
    emxInit_real_T(&d_expl_temp, 2);
    emxInit_real_T(&e_expl_temp, 2);
    emxInit_real_T(&f_expl_temp, 2);
    FSM(b_Xwithoutint, bonflevoutX_data, bonflevoutX_size, floor(n * 0.6),
        critdef_data, critdef_size, (double)Xwithoutint->size[1] + 1.0,
        outFSM_outliers, b_expl_temp, c_expl_temp, d_expl_temp, e_expl_temp,
        f_expl_temp, expl_temp_data, expl_temp_size, b_expl_temp_data,
        b_expl_temp_size);
    i = outliers->size[0];
    outliers->size[0] = outFSM_outliers->size[0] * outFSM_outliers->size[1];
    emxEnsureCapacity_real_T(outliers, i);
    loop_ub = outFSM_outliers->size[0] * outFSM_outliers->size[1];
    emxFree_real_T(&b_Xwithoutint);
    emxFree_real_T(&f_expl_temp);
    emxFree_real_T(&e_expl_temp);
    emxFree_real_T(&d_expl_temp);
    emxFree_real_T(&c_expl_temp);
    emxFree_real_T(&b_expl_temp);
    for (i = 0; i < loop_ub; i++) {
      outliers->data[i] = outFSM_outliers->data[i];
    }
    emxFree_real_T(&outFSM_outliers);
  } else {
    bonflevout = false;
    i = outliers->size[0];
    outliers->size[0] = 1;
    emxEnsureCapacity_real_T(outliers, i);
    outliers->data[0] = 0.0;
  }
  /*  Computation of LMS (LTS) */
  tic(&ttic_tv_sec, &b_conflev);
  i = out->bs->size[0] * out->bs->size[1];
  out->bs->size[0] = 1;
  out->bs->size[1] = (int)p;
  emxEnsureCapacity_real_T(out->bs, i);
  for (i = 0; i < loop_ub_tmp; i++) {
    out->bs->data[i] = 0.0;
  }
  i = (int)nselected;
  emxInit_real_T(&b, 1);
  emxInit_real_T(&tmp_betarw, 1);
  emxInit_int32_T(&ia, 1);
  emxInit_int32_T(&ib, 1);
  emxInit_real_T(&expl_temp, 1);
  for (b_i = 0; b_i < i; b_i++) {
    if (b_i + 1U <= (unsigned int)tsampling) {
      tic(&ttic_tv_sec, &b_conflev);
    }
    /*  extract a subset of size p */
    guard1 = false;
    if (bonflevout) {
      loop_ub = C->size[1];
      i1 = c_y->size[0] * c_y->size[1];
      c_y->size[0] = 1;
      c_y->size[1] = C->size[1];
      emxEnsureCapacity_real_T(c_y, i1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        c_y->data[i1] = C->data[b_i + C->size[0] * i1];
      }
      c_do_vectors(c_y, outliers, b, ia, ib);
      if (b->size[0] != 0) {
        i1 = b->size[0];
        b->size[0] = 1;
        emxEnsureCapacity_real_T(b, i1);
        b->data[0] = rtNaN;
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
      for (i1 = 0; i1 < nx; i1++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          Xwithoutint->data[i2 + Xwithoutint->size[0] * i1] =
              out->X->data[((int)C->data[b_i + C->size[0] * i2] +
                            out->X->size[0] * i1) -
                           1];
        }
      }
      /*  if rank(Xb)==p Warning: this instruction has been replaced by a */
      /*  posteriori control on vector b */
      /*  Compute the vector of coefficients using matrice Xb and yb */
      loop_ub = C->size[1];
      i1 = b->size[0];
      b->size[0] = C->size[1];
      emxEnsureCapacity_real_T(b, i1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b->data[i1] = b_y->data[(int)C->data[b_i + C->size[0] * i1] - 1];
      }
      c_mldivide(Xwithoutint, b);
    }
    if ((!rtIsNaN(b->data[0])) && (!rtIsInf(b->data[0]))) {
      /*  in this case the user has chosen the FAST LTS (with concentration
       * steps) */
      b_IRWLSreg(b_y, out->X, b, lms->refsteps, lms->reftol, h, tmp_betarw, &p,
                 expl_temp);
      if (ij > lms->bestr) {
        if (p < sworst) {
          /*  Find position of the maximum value of previously stored */
          /*  best scales */
          b_maximum(out->residuals, &ncomb, &nx);
          /*  Store numscale2rw, betarw and indexes of the units forming the */
          /*  best subset for the current iteration */
          out->residuals->data[nx - 1] = p;
          loop_ub = tmp_betarw->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            bestbetas->data[(nx + bestbetas->size[0] * i1) - 1] =
                tmp_betarw->data[i1];
          }
          loop_ub = C->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            bestsubset->data[(nx + bestsubset->size[0] * i1) - 1] =
                C->data[b_i + C->size[0] * i1];
          }
          /*  sworst = the best scale among the bestr found up to now */
          sworst = c_maximum(out->residuals);
        }
      } else {
        out->residuals->data[(int)ij - 1] = p;
        loop_ub = tmp_betarw->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          bestbetas->data[((int)ij + bestbetas->size[0] * i1) - 1] =
              tmp_betarw->data[i1];
        }
        loop_ub = C->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          bestsubset->data[((int)ij + bestsubset->size[0] * i1) - 1] =
              C->data[b_i + C->size[0] * i1];
        }
        /*  sworst = the best scale among the bestr found up to now */
        sworst = c_maximum(out->residuals);
        ij++;
        out->beta->data[0] = 1.0;
      }
    } else {
      singsub++;
    }
    if (!nomes) {
      if (b_i + 1U <= (unsigned int)tsampling) {
        /*  sampling time until step tsampling */
        time_data[b_i] = toc(ttic_tv_sec, b_conflev);
      } else if ((b_i + 1U == (unsigned int)((int)tsampling + 1)) && msg) {
        /*  stop sampling and print the estimated time */
        b_time_data.data = &time_data[0];
        b_time_data.size = &time_size;
        b_time_data.allocatedSize = 1000;
        b_time_data.numDimensions = 1;
        b_time_data.canFreeData = false;
        printf("Total estimated time to complete FASTLTS: %5.2f seconds \n",
               nselected * median(&b_time_data));
        fflush(stdout);
      }
    }
  }
  emxFree_int32_T(&ib);
  emxFree_real_T(&c_y);
  emxFree_real_T(&Xwithoutint);
  /*  perform C-steps on best 'bestr' solutions, till convergence or for a */
  /*  maximum of refstepsbestr steps using a convergence tolerance as specified
   */
  /*  by scalar reftolbestr */
  ncomb = rtInf;
  tsampling = rtInf;
  for (b_i = 0; b_i < b_loop_ub_tmp; b_i++) {
    loop_ub = bestbetas->size[1];
    i = outliers->size[0];
    outliers->size[0] = bestbetas->size[1];
    emxEnsureCapacity_real_T(outliers, i);
    for (i = 0; i < loop_ub; i++) {
      outliers->data[i] = bestbetas->data[b_i + bestbetas->size[0] * i];
    }
    b_IRWLSreg(b_y, out->X, outliers, lms->refstepsbestr, lms->reftolbestr, h,
               tmp_betarw, &p, expl_temp);
    if (p < ncomb) {
      /*  sh0 = superbestscale */
      tsampling = p;
      /*  brob = superbestbeta */
      loop_ub = tmp_betarw->size[0];
      i = out->beta->size[0];
      out->beta->size[0] = tmp_betarw->size[0];
      emxEnsureCapacity_real_T(out->beta, i);
      for (i = 0; i < loop_ub; i++) {
        out->beta->data[i] = tmp_betarw->data[i];
      }
      /*  bs = superbestsubset, units forming best subset according to fastlts
       */
      loop_ub = bestsubset->size[1];
      i = out->bs->size[0] * out->bs->size[1];
      out->bs->size[0] = 1;
      out->bs->size[1] = bestsubset->size[1];
      emxEnsureCapacity_real_T(out->bs, i);
      for (i = 0; i < loop_ub; i++) {
        out->bs->data[i] = bestsubset->data[b_i + bestsubset->size[0] * i];
      }
      ncomb = p;
    }
  }
  emxFree_real_T(&expl_temp);
  emxFree_real_T(&tmp_betarw);
  emxFree_real_T(&outliers);
  emxFree_real_T(&bestsubset);
  /*  Pass from numerator of squared estimate of the scale to proper scale */
  /*  estimate */
  tsampling /= h;
  tsampling = sqrt(tsampling);
  /*  residuals = Raw residuals using robust estimate of beta */
  mtimes(out->X, out->beta, out->residuals);
  i = out->residuals->size[0];
  out->residuals->size[0] = b_y->size[0];
  emxEnsureCapacity_real_T(out->residuals, i);
  loop_ub = b_y->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->residuals->data[i] = b_y->data[i] - out->residuals->data[i];
  }
  /*  Consistency factor */
  /*  Consistency factor based on the variance of the truncated normal
   * distribution. */
  /*  1-h/n=trimming percentage */
  /*  Compute variance of the truncated normal distribution. */
  ttic_tv_sec = h / n;
  p = 0.5 * (ttic_tv_sec + 1.0);
  if ((p >= 0.0) && (p <= 1.0)) {
    ncomb = -1.4142135623730951 * erfcinv(2.0 * p);
  } else {
    ncomb = rtNaN;
  }
  /* factor=1/sqrt(1-(2*a.*normpdf(a))./(2*normcdf(a)-1)); */
  /*  Note that factor=sqrt(factor1) */
  /*      v=1; */
  /*      a=chi2inv(h/n,1); */
  /*      factor1=(h/n)/(chi2cdf(a,1+2)); */
  /*  Apply the asymptotic consistency factor to the preliminary scale estimate
   */
  tsampling *=
      1.0 / sqrt(1.0 - 2.0 * (n / h) * ncomb *
                           (exp(-0.5 * ncomb * ncomb) / 2.5066282746310002));
  /*  Apply small sample correction factor of Pison et al. */
  if (h < n) {
    tsampling *= sqrt(corfactorRAW(n, ttic_tv_sec));
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
  emxInit_boolean_T(&weights, 1);
  if (fabs(tsampling) > 1.0E-7) {
    /*  Assign weight=1 to the h units which show the smallest h squared */
    /*  residuals */
    i = b->size[0];
    b->size[0] = out->residuals->size[0];
    emxEnsureCapacity_real_T(b, i);
    nx = out->residuals->size[0];
    for (b_loop_ub_tmp = 0; b_loop_ub_tmp < nx; b_loop_ub_tmp++) {
      b->data[b_loop_ub_tmp] = out->residuals->data[b_loop_ub_tmp] *
                               out->residuals->data[b_loop_ub_tmp];
    }
    sort(b, ia);
    i = b->size[0];
    b->size[0] = ia->size[0];
    emxEnsureCapacity_real_T(b, i);
    loop_ub = ia->size[0];
    for (i = 0; i < loop_ub; i++) {
      b->data[i] = ia->data[i];
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
    for (i = 0; i < nx; i++) {
      r->data[i] = (int)b->data[i];
    }
    loop_ub = r->size[1];
    for (i = 0; i < loop_ub; i++) {
      out->weights->data[r->data[i] - 1] = true;
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
      out->residuals->data[i] /= tsampling;
    }
    nx = out->residuals->size[0];
    i = b->size[0];
    b->size[0] = out->residuals->size[0];
    emxEnsureCapacity_real_T(b, i);
    for (b_loop_ub_tmp = 0; b_loop_ub_tmp < nx; b_loop_ub_tmp++) {
      b->data[b_loop_ub_tmp] = fabs(out->residuals->data[b_loop_ub_tmp]);
    }
    i = weights->size[0];
    weights->size[0] = b->size[0];
    emxEnsureCapacity_boolean_T(weights, i);
    loop_ub = b->size[0];
    for (i = 0; i < loop_ub; i++) {
      weights->data[i] = (b->data[i] <= ncomb);
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
        if (weights->data[b_i]) {
          nx++;
        }
      }
      emxInit_int32_T(&r2, 1);
      i = r2->size[0];
      r2->size[0] = nx;
      emxEnsureCapacity_int32_T(r2, i);
      nx = 0;
      for (b_i = 0; b_i <= loop_ub_tmp; b_i++) {
        if (weights->data[b_i]) {
          r2->data[nx] = b_i + 1;
          nx++;
        }
      }
      i = out->beta->size[0];
      out->beta->size[0] = r2->size[0];
      emxEnsureCapacity_real_T(out->beta, i);
      loop_ub = r2->size[0];
      for (i = 0; i < loop_ub; i++) {
        out->beta->data[i] = b_y->data[r2->data[i] - 1];
      }
      loop_ub = out->X->size[1];
      i = bestbetas->size[0] * bestbetas->size[1];
      bestbetas->size[0] = r2->size[0];
      bestbetas->size[1] = out->X->size[1];
      emxEnsureCapacity_real_T(bestbetas, i);
      for (i = 0; i < loop_ub; i++) {
        nx = r2->size[0];
        for (i1 = 0; i1 < nx; i1++) {
          bestbetas->data[i1 + bestbetas->size[0] * i] =
              out->X->data[(r2->data[i1] + out->X->size[0] * i) - 1];
        }
      }
      emxFree_int32_T(&r2);
      c_mldivide(bestbetas, out->beta);
      /*  The QR decomposition is equivalent to the above but less efficient: */
      /*  [Q,R]=qr(X(weights==1,:),0); */
      /*  brob = R\(Q'*y(weights==1)); */
      /*  Computation of reweighted residuals. */
      mtimes(out->X, out->beta, out->residuals);
      i = out->residuals->size[0];
      out->residuals->size[0] = b_y->size[0];
      emxEnsureCapacity_real_T(out->residuals, i);
      loop_ub = b_y->size[0];
      for (i = 0; i < loop_ub; i++) {
        out->residuals->data[i] = b_y->data[i] - out->residuals->data[i];
      }
      /*  Find new estimate of scale using only observations which have */
      /*  weight equal to 1. */
      nx = weights->size[0];
      if (weights->size[0] == 0) {
        loop_ub_tmp = 0;
      } else {
        loop_ub_tmp = weights->data[0];
        for (b_loop_ub_tmp = 2; b_loop_ub_tmp <= nx; b_loop_ub_tmp++) {
          loop_ub_tmp += weights->data[b_loop_ub_tmp - 1];
        }
      }
      /*  Compute new standardized residuals. */
      /*  Apply consistency factor to reweighted estimate of sigma */
      if (loop_ub_tmp < n) {
        /*  factor=consistencyfactor(hrew,n,1); */
        ttic_tv_sec = (double)loop_ub_tmp / n;
        p = 0.5 * (ttic_tv_sec + 1.0);
        if ((p >= 0.0) && (p <= 1.0)) {
          ncomb = -1.4142135623730951 * erfcinv(2.0 * p);
        } else {
          ncomb = rtNaN;
        }
        /* factor=1/sqrt(1-(2*a.*normpdf(a))./(2*normcdf(a)-1)); */
        /*  Apply small sample correction factor to reweighted estimate of sigma
         */
        ncomb =
            1.0 /
            sqrt(1.0 - 2.0 * (n / (double)loop_ub_tmp) * ncomb *
                           (exp(-0.5 * ncomb * ncomb) / 2.5066282746310002)) *
            sqrt(corfactorREW(n, ttic_tv_sec));
      } else {
        ncomb = 1.0;
      }
      i = b->size[0];
      b->size[0] = out->residuals->size[0];
      emxEnsureCapacity_real_T(b, i);
      nx = out->residuals->size[0];
      for (b_loop_ub_tmp = 0; b_loop_ub_tmp < nx; b_loop_ub_tmp++) {
        b->data[b_loop_ub_tmp] = out->residuals->data[b_loop_ub_tmp] *
                                 out->residuals->data[b_loop_ub_tmp];
      }
      i = b->size[0];
      b->size[0] = weights->size[0];
      emxEnsureCapacity_real_T(b, i);
      loop_ub = weights->size[0];
      for (i = 0; i < loop_ub; i++) {
        b->data[i] *= (double)weights->data[i];
      }
      tsampling =
          sqrt(blockedSummation(b, b->size[0]) / ((double)loop_ub_tmp - 1.0)) *
          ncomb;
      loop_ub = out->residuals->size[0];
      for (i = 0; i < loop_ub; i++) {
        out->residuals->data[i] /= tsampling;
      }
      /*  Declare as outliers the observations which have a standardized */
      /*  residual greater than cutoff. */
      /*  REMARK: while the first threshold was based on the Student T */
      /*  (with modified degrees of freedom), in this second round the */
      /*  threshold is based on the Normal. Notice that: */
      /*  sqrt(chi2inv(0.975,1)) = tinv(0.9875,\infinity) = norminv(0.9875) */
      nx = out->residuals->size[0];
      i = b->size[0];
      b->size[0] = out->residuals->size[0];
      emxEnsureCapacity_real_T(b, i);
      for (b_loop_ub_tmp = 0; b_loop_ub_tmp < nx; b_loop_ub_tmp++) {
        b->data[b_loop_ub_tmp] = fabs(out->residuals->data[b_loop_ub_tmp]);
      }
      if ((b_conflev >= 0.0) && (b_conflev <= 1.0)) {
        ncomb = -1.4142135623730951 * erfcinv(2.0 * b_conflev);
      } else {
        ncomb = rtNaN;
      }
      i = weights->size[0];
      weights->size[0] = b->size[0];
      emxEnsureCapacity_boolean_T(weights, i);
      loop_ub = b->size[0];
      for (i = 0; i < loop_ub; i++) {
        weights->data[i] = (b->data[i] <= ncomb);
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
    i = b->size[0];
    b->size[0] = out->residuals->size[0];
    emxEnsureCapacity_real_T(b, i);
    for (b_loop_ub_tmp = 0; b_loop_ub_tmp < nx; b_loop_ub_tmp++) {
      b->data[b_loop_ub_tmp] = fabs(out->residuals->data[b_loop_ub_tmp]);
    }
    i = weights->size[0];
    weights->size[0] = b->size[0];
    emxEnsureCapacity_boolean_T(weights, i);
    loop_ub = b->size[0];
    for (i = 0; i < loop_ub; i++) {
      weights->data[i] = (b->data[i] <= 1.0E-7);
    }
    /*  Store the weights */
    i = out->weights->size[0];
    out->weights->size[0] = weights->size[0];
    emxEnsureCapacity_boolean_T(out->weights, i);
    loop_ub = weights->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->weights->data[i] = weights->data[i];
    }
    out->rew = false;
    /*  s is set to 0 */
    tsampling = 0.0;
    /*  Standardized residuals are artificially set equal to raw residuals. */
  }
  emxFree_int32_T(&ia);
  emxFree_real_T(&b);
  emxFree_real_T(&bestbetas);
  /*  Store quantities in the out structure */
  /*  Store robust estimate of beta coefficients */
  /*  Store robust estimate of s */
  out->scale = tsampling;
  /*  Store standardized residuals */
  /*  Store units forming initial subset */
  /*  Store list of units declared as outliers */
  loop_ub_tmp = weights->size[0] - 1;
  nx = 0;
  for (b_i = 0; b_i <= loop_ub_tmp; b_i++) {
    if (!weights->data[b_i]) {
      nx++;
    }
  }
  emxInit_int32_T(&r1, 1);
  i = r1->size[0];
  r1->size[0] = nx;
  emxEnsureCapacity_int32_T(r1, i);
  nx = 0;
  for (b_i = 0; b_i <= loop_ub_tmp; b_i++) {
    if (!weights->data[b_i]) {
      r1->data[nx] = b_i + 1;
      nx++;
    }
  }
  emxFree_boolean_T(&weights);
  i = out->outliers->size[0];
  out->outliers->size[0] = r1->size[0];
  emxEnsureCapacity_real_T(out->outliers, i);
  loop_ub = r1->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->outliers->data[i] = seq->data[r1->data[i] - 1];
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
      printf("Warning: Number of subsets without full rank or excluded because "
             "containing remote units in the X space equal to %.1f %%\n",
             ncomb);
      fflush(stdout);
    } else {
      printf("Warning: Number of subsets without full rank equal to %.1f%%\n",
             ncomb);
      fflush(stdout);
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
      out->y->data[i] = b_y->data[i];
    }
  } else {
    out->X->size[0] = 0;
    out->X->size[1] = 0;
    out->y->size[0] = 0;
    out->y->size[1] = 0;
  }
  emxFree_real_T(&b_y);
  /*  Store information about the class of the object */
  out->class[0] = 'L';
  out->class[1] = 'T';
  out->class[2] = 'S';
  /*  Create plots */
}

/* End of code generation (LXS_wrapper1.c) */
