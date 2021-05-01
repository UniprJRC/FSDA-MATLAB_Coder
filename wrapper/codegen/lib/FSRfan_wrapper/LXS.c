/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LXS.c
 *
 * Code generation for function 'LXS'
 *
 */

/* Include files */
#include "LXS.h"
#include "FSRfan_wrapper_emxutil.h"
#include "FSRfan_wrapper_internal_types.h"
#include "FSRfan_wrapper_rtwutil.h"
#include "FSRfan_wrapper_types.h"
#include "bc.h"
#include "chi2inv.h"
#include "combsFS.h"
#include "gammainc.h"
#include "gammaln.h"
#include "ifWhileCond.h"
#include "int2str.h"
#include "lexunrank.h"
#include "median.h"
#include "mldivide.h"
#include "norminv.h"
#include "pascal.h"
#include "randperm.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "sum.h"
#include "tic.h"
#include "tinv.h"
#include "toc.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <stdio.h>
#include <string.h>

/* Function Definitions */
void LXS(const emxArray_real_T *y, const emxArray_real_T *X,
         const emxArray_real_T *varargin_2, double varargin_4,
         const emxArray_real_T *varargin_6, bool varargin_10, struct_T *out)
{
  emxArray_boolean_T *b_varargin_6;
  emxArray_boolean_T *weights;
  emxArray_char_T_1x10 b_X;
  emxArray_int32_T *iidx;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_real_T *Xb;
  emxArray_real_T *b;
  emxArray_real_T *b_seq;
  emxArray_real_T *nsamp;
  emxArray_real_T *pascalM;
  emxArray_real_T *r2;
  emxArray_real_T *s;
  emxArray_real_T *seq;
  double time_data[1000];
  double fp_875_n;
  double fp_alpha_n;
  double ncomb;
  double nselected;
  double rrob;
  double s0;
  double singsub;
  double tsampling;
  double xk;
  int aoffset;
  int b_i;
  int c_i;
  int i;
  int k;
  int lmsopt;
  int loop_ub;
  int p;
  bool usepascal;
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
  emxInit_real_T(&seq, 2);
  if (X->size[0] < 1) {
    seq->size[0] = 1;
    seq->size[1] = 0;
  } else {
    i = seq->size[0] * seq->size[1];
    seq->size[0] = 1;
    seq->size[1] = X->size[0];
    emxEnsureCapacity_real_T(seq, i);
    loop_ub = X->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      seq->data[i] = (double)i + 1.0;
    }
  }
  emxInit_real_T(&b_seq, 1);
  i = b_seq->size[0];
  b_seq->size[0] = seq->size[1];
  emxEnsureCapacity_real_T(b_seq, i);
  loop_ub = seq->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_seq->data[i] = seq->data[i];
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
  ncomb = bc(X->size[0], X->size[1]);
  /*  Set the "half" of the data points. */
  /*  initialize brob which will be the vector of estimated robust regression */
  /*  coefficients */
  i = out->beta->size[0];
  out->beta->size[0] = X->size[1];
  emxEnsureCapacity_real_T(out->beta, i);
  loop_ub = X->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->beta->data[i] = -99.0;
  }
  emxInit_real_T(&nsamp, 2);
  /*  Write in structure 'options' the options chosen by the user */
  i = nsamp->size[0] * nsamp->size[1];
  nsamp->size[0] = varargin_6->size[0];
  nsamp->size[1] = varargin_6->size[1];
  emxEnsureCapacity_real_T(nsamp, i);
  loop_ub = varargin_6->size[0] * varargin_6->size[1];
  for (i = 0; i < loop_ub; i++) {
    nsamp->data[i] = varargin_6->data[i];
  }
  /*  And check if the optional user parameters are reasonable. */
  /*  Check h and bdp */
  /*  The user has only specified h: no need to specify bdp. */
  if (varargin_4 < (double)X->size[1] + 1.0) {
    int2str((double)X->size[1] + 1.0, b_X.data, b_X.size);
  }
  /*  the user has only specified bdp: h is defined accordingly */
  emxInit_boolean_T(&b_varargin_6, 2);
  if ((varargin_6->size[0] == 1) && (varargin_6->size[1] == 1)) {
    /*  Check number of subsamples to extract */
    i = b_varargin_6->size[0] * b_varargin_6->size[1];
    b_varargin_6->size[0] = 1;
    b_varargin_6->size[1] = 1;
    emxEnsureCapacity_boolean_T(b_varargin_6, i);
    b_varargin_6->data[0] = (varargin_6->data[0] > ncomb);
    if (ifWhileCond(b_varargin_6)) {
      i = nsamp->size[0] * nsamp->size[1];
      nsamp->size[0] = 1;
      nsamp->size[1] = 1;
      emxEnsureCapacity_real_T(nsamp, i);
      nsamp->data[0] = 0.0;
    }
  } else {
    /*  in this case nsamp is the matrix of prextracted subsamples */
  }
  /*  Default values for the optional */
  /*  parameters are set inside structure 'options' */
  /*  Number of data points on which estimates are based */
  /*  Number of subsets to extract */
  if ((nsamp->size[0] == 0) || (nsamp->size[1] == 0)) {
    i = nsamp->size[0] * nsamp->size[1];
    nsamp->size[0] = 1;
    nsamp->size[1] = 1;
    emxEnsureCapacity_real_T(nsamp, i);
    nsamp->data[0] = fmin(3000.0, ncomb);
  }
  /*  if options.lms==1 then LMS, else LTS */
  if (varargin_2->data[0] == 2.0) {
    /*  lms=struct; */
    /*  ij is a scalar used to ensure that the best first bestr non singular */
    /*  subsets are stored */
    /*  lmsopt is associated with the message about total computing time */
    lmsopt = 2;
  } else {
    /*  lmsopt is associated with the message about total computing time */
    i = b_varargin_6->size[0] * b_varargin_6->size[1];
    b_varargin_6->size[0] = 1;
    b_varargin_6->size[1] = varargin_2->size[1];
    emxEnsureCapacity_boolean_T(b_varargin_6, i);
    loop_ub = varargin_2->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_varargin_6->data[i] = (varargin_2->data[i] == 1.0);
    }
    lmsopt = ifWhileCond(b_varargin_6);
  }
  /*  Scalar which controls the messages displayed on the screen */
  /*  if options.nomes==true no message about estimated time to compute LMS is
   * displayed */
  /*  Extract in the rows of matrix C the indexes of all required subsets */
  emxInit_real_T(&Xb, 2);
  if ((nsamp->size[0] == 1) && (nsamp->size[1] == 1)) {
    i = Xb->size[0] * Xb->size[1];
    Xb->size[0] = 1;
    Xb->size[1] = 1;
    emxEnsureCapacity_real_T(Xb, i);
    for (i = 0; i < 1; i++) {
      Xb->data[0] = nsamp->data[0];
    }
    aoffset = X->size[0];
    p = X->size[1];
    /* subsets creates a matrix of indexes where rows are distinct p-subsets
     * extracted from a set of n elements */
    /*  */
    /* <a href="matlab: docsearchFS('subsets')">Link to the help function</a> */
    /*  */
    /*   Required input arguments: */
    /*  */
    /*        nsamp : Number of subsamples which have to be extracted. Scalar;
     */
    /*                if nsamp=0 all subsets will be extracted; they will be (n
     */
    /*                choose p). */
    /*                Data Types - single|double */
    /*  */
    /*          n   : Number of observations of the dataset. Scalar. */
    /*                Data Types - single|double */
    /*  */
    /*          p   : Size of the subsets. Scalar. In regression with p */
    /*                explanatory variable the size of the elmental subsets is
     * p; */
    /*                in multivariate analysis, in presence of v variables, */
    /*                the size of the elemental subsets is v+1. */
    /*                Data Types - single|double */
    /*  */
    /*   Optional input arguments: */
    /*  */
    /*        ncomb : scalar (n choose p). If the user has already computed this
     */
    /*                value it can supply it directly, otherwise the program
     * will */
    /*                calculate it automatically. */
    /*                Example - C=subsets(20,10,3,120) */
    /*                Data Types - single|double */
    /*  */
    /*         msg  : scalar which controls whether to display or not messages
     */
    /*                on the screen. If msg=true (default), messages are
     * displayed */
    /*                on the screen about estimated time. */
    /*                Example - C=subsets(20,10,3,120,0) */
    /*                Data Types - boolean */
    /*  */
    /*    method : Sampling methods. Scalar or vector. */
    /*             Methods used to extract the subsets. See section 'More About'
     */
    /*             of function randsampleFS.m for details about the sampling */
    /*             methods. Default is method = 1. */
    /*             - Scalar, from 0 to 3 determining the (random sample without
     */
    /*             replacement) method to be used. */
    /*             - Vector of weights: in such a case, Weighted Sampling
     * Without */
    /*               Replacement is applied using that vector of weights. */
    /*             Example - randsampleFS(100,10,2) */
    /*             Data Types - single|double */
    /*  */
    /*  */
    /*   Output: */
    /*  */
    /*  */
    /*            C : The indices of the subsets which need to be extracted. */
    /*                Matrix with nselected rows and p columns (stored in int16
     * format). */
    /*                Data Types - single|double */
    /*  */
    /*    nselected : Number of rows of matrix C. Scalar. */
    /*                Data Types - single|double */
    /*  */
    /*  */
    /*  See also randsampleFS.m, lexunrank.m, bc.m */
    /*  */
    /*  References: */
    /*        See references in randsampleFS.m, lexunrank.m and bc.m. See also,
     * for */
    /*        weighted sampling, Pavlos S. Efraimidis, Paul G. Spirakis,
     * Weighted */
    /*        random sampling with a reservoir, Information Processing Letters,
     * Volume */
    /*        97, Issue 5, 16 March 2006, Pages 181-185. */
    /*  */
    /*        Wong, C.K. and M.C. Easton (1980) "An Efficient Method for
     * Weighted */
    /*        Sampling Without Replacement", SIAM Journal of Computing, */
    /*        9(1):111-113. */
    /*  */
    /*  */
    /*  Copyright 2008-2021. */
    /*  Written by FSDA team */
    /*  */
    /*  */
    /* <a href="matlab: docsearchFS('subsets')">Link to the help function</a> */
    /*  */
    /*  */
    /* $LastChangedDate::                      $: Date of the last commit */
    /*  */
    /*  Examples: */
    /*  */
    /* { */
    /*        %% Create a matrix with the indexes of 5 subsets when n=100, p=3.
     */
    /*        % Only default arguments used. */
    /*        C = subsets(5,100,3) */
    /* } */
    /* { */
    /*        %% Create a matrix with the indexes of 5 subsets when n=100, p=3.
     */
    /*        % Use information on the number of combinations to speed up
     * generation. */
    /*         ncomb = bc(100,3); */
    /*         C = subsets(5,100,3,ncomb) */
    /* } */
    /* { */
    /*        %% Create a matrix with the indexes of 5 subsets when n=100, p=3.
     */
    /*        % Also inform about the time taken for the operation. */
    /*         */
    /*        ncomb = bc(1000,5); */
    /*        C = subsets(500000,1000,5,ncomb,1); */
    /* } */
    /* { */
    /*        % Create a matrix with the indexes of 5 subsets when n=100, p=3.
     */
    /*        % As the previous example, but in addition returns in nselected
     * the */
    /*        % number of combinations. */
    /*         */
    /*        ncomb = bc(1000,5); */
    /*        [C , nselected] = subsets(500000,1000,5,ncomb,1); */
    /* } */
    /* { */
    /*         % Extract 80000 subsets and check they are unique. */
    /*          */
    /*         C=subsets(80000,100,5); */
    /*         size(unique(C,'rows')) */
    /* } */
    /* { */
    /*     %% Sampling without replacement and the hypergeometric distribution.
     */
    /*  */
    /*     clear all; close all; */
    /*  */
    /*     % parameters */
    /*     n      = 100; */
    /*     p      = 3; */
    /*     nsamp  = 1000000; */
    /*     ncomb  = bc(n,p); */
    /*     msg    = 0; */
    /*      */
    /*     % Sampling without repetition nsamp p-subsets from a dataset of n
     * units. */
    /* 	C = subsets(nsamp, n, p, ncomb, msg); */
    /*     if verLessThan('matlab','8.4') */
    /*         hist(double(C(:))); xlim([1 n]); */
    /*     else */
    /*         histogram(double(C(:)),'Normalization','pdf','BinMethod','Integers');
     * xlim([1 n]); */
    /*         % this superimposes a line with the unit counts */
    /*         frC = tabulateFS(double(C(:))); */
    /*         hold on; plot(1:n,frC(:,3)/100,'r-','LineWidth',3); */
    /*     end */
    /*  */
    /*  */
    /*     % The hypergeometric distribution hygepdf(X,M,K,N) computes the
     * probability */
    /*     % of drawing exactly X of a possible K items in N drawings without */
    /*     % replacement from a group of M objects. For drawings with
     * replacement, */
    /*     % the distribution would be binomial. */
    /*     hpdf = hygepdf(0:p,n,n/2,p); */
    /*  */
    /*     % Say that the n/2 target items (which determine the success of a
     * draw) are */
    /*     % in the subset formed by units 1,2,...n/2. Let's then count how many
     * times */
    /*     % we get units from this group. */
    /*     c   = C<=n/2; */
    /*     sc  = sum(c,2); */
    /*     tab = tabulateFS(sc); */
    /*     tab = (tab(:,2)/sum(tab(:,2)))'; */
    /*  */
    /*     disp('Probability of getting 0 to p successes in p drawns
     * (hypergeometric pdf):'); */
    /*     disp(hpdf); */
    /*     disp('Frequencies of the 0 to p successes in the p drawns (subsets
     * output):'); */
    /*     disp(tab); */
    /*  */
    /* } */
    /* { */
    /*     %% Weighted sampling without replacement and the non-central
     * Wallenius hypergeometric distribution. */
    /*  */
    /*     clear all; close all; */
    /*  */
    /*     % parameters */
    /*     n      = 500; */
    /*     p      = 3; */
    /*     nsamp  = 50000; */
    /*     ncomb  = bc(n,p); */
    /*     msg    = 0; */
    /*  */
    /*     % Sampling probability of the first n/2 units is 10 times larger than
     * the others n/2. */
    /*     method = [10*ones(n/2,1); ones(n/2,1)]; */
    /*     % no need to normalize weights: method = method(:)' / sum(method); */
    /*  */
    /* 	C = subsets(nsamp, n, p, ncomb, msg, method); */
    /*  */
    /*     if verLessThan('matlab','8.4') */
    /*         hist(double(C(:))); xlim([1 n]); */
    /*     else */
    /*         histogram(double(C(:)),'Normalization','pdf','BinMethod','Integers');
     */
    /*     end */
    /*  */
    /*     % Here we address the case when the sampling (without replacement) is
     * biased, */
    /*     % in the sense that the probabilities to select the units in the
     * sample are */
    /*     % proportional to weights provided using option 'method'. In this
     * case, the */
    /*     % extraction probabilities follow Wallenius' noncentral
     * hypergeometric */
    /*     % distribution. The sampling scheme is the same of that of the
     * hypergeometric */
    /*     % distribution but, in addition, the success and failure are
     * associated with */
    /*     % weights w1 and w2 and we will say that the odds ratio is W = w1 /
     * w2. The */
    /*     % function is then called as: wpdf = WNChygepdf(x,N,K,M,W). */
    /*  */
    /*     for i = 0:p */
    /*         wpdf(i+1) = WNChygepdf(i,p,n/2,n,10); */
    /*     end */
    /*  */
    /*     % counts of the actual samples */
    /*     c   = C<=n/2; */
    /*     sc  = sum(c,2); */
    /*     tab = tabulateFS(sc); */
    /*     tab = (tab(:,2)/sum(tab(:,2)))'; */
    /*  */
    /*     disp('Probability of getting 0 to p successes in p weighted drawns
     * (non-central hypergeometric pdf):'); */
    /*     disp(wpdf); */
    /*     disp('Frequencies of the 0 to p successes in the p weighted drawns
     * (subsets output):'); */
    /*     disp(tab); */
    /*      */
    /*     % The non-central hypergeometric is also available in the R package
     */
    /*     % BiasedUrn. In the example above, where there are just two groups
     * and one */
    /*     % weight defining the ratio between the units in the two groups, the
     * function */
    /*     % to use is dWNCHypergeo (for Wallenius' distribution): */
    /*     % */
    /*     % dWNCHypergeo(c(0,1,2,3), 50, 50, 3, 10) */
    /*     % [1] 0.0007107089 0.0225823308 0.2296133830 0.7470935773 */
    /*     % */
    /*     % The general syntax of the function is: */
    /*     % dWNCHypergeo(x, m1, m2, n, odds) */
    /*     % x  = Number of red balls sampled. */
    /*     % m1 = Initial number of red balls in the urn. */
    /*     % m2 = Initial number of white balls in the urn. */
    /*     % n  = Total number of balls sampled. */
    /*     % N  = Total number of balls in urn before sampling. */
    /*     % odds = Probability ratio of red over white balls. */
    /*     % p = Cumulative probability. */
    /*     % nran = Number of random variates to generate. */
    /*     % mu = Mean x. */
    /*     % precision = Desired precision of calculation. */
    /*  */
    /* } */
    /* { */
    /*     % Weighted sampling without replacement, with negative weights. */
    /*  */
    /*     clear all; close all; */
    /*  */
    /*     n = 200; */
    /*     p = 3; */
    /*     nsamp = 10000; */
    /*     ncomb = bc(n,p); */
    /*     msg = 0; */
    /*     method = [-4*ones(n/4,1); -2*ones(n/4,1) ; -1*ones(n/4,1);
     * -4*ones(n/4,1)]; */
    /*     C = subsets(nsamp, n, p, ncomb, msg, method); */
    /*     if verLessThan('matlab','8.4') */
    /*         hist(double(C(:))); xlim([1 n]); */
    /*     else */
    /*         histogram(double(C(:)),'Normalization','pdf','BinMethod','Integers');
     */
    /*     end */
    /* } */
    /* { */
    /*     %% Function subset used in clustering or mixture modeling
     * simulations. */
    /*  */
    /*     clear all; close all; */
    /*  */
    /*     % parameters */
    /*     n      = 100;       %number of units */
    /*     p      = 2;         %number of variables */
    /*     k      = 3;         %number of groups */
    /*     nsamp  = 500;       %number of samples */
    /*     ncomb  = bc(n,p); */
    /*     msg    = 0; */
    /*  */
    /*     % A dataset simulated using MixSim */
    /*     rng(372,'twister'); */
    /*     Q=MixSimreg(k,p,'BarOmega',0.001); */
    /*     [y,X,id]=simdatasetreg(n,Q.Pi,Q.Beta,Q.S,Q.Xdistrib); */
    /*  */
    /*     % Some user-defined weights for weighted sampling, provided as a
     * vector of "method" option. */
    /*     method = [1*ones(n/2,1); ones(n/2,1)]; */
    /*  */
    /*     % C must be a nsamp-by-k*p matrix, to contain the extraction of nsamp
     * p-combinations k times. */
    /*     % This can be easily done as follows: */
    /*     for i=1:k */
    /*         Ck(:,(i-1)*p+1:i*p) = subsets(nsamp, n, p, ncomb, msg, method);
     */
    /*     end */
    /*  */
    /*     % Ck is then provided, e.g., to tclustreg as follows: */
    /*     out=tclustreg(y,X,k,50,0.01,0.01,'nsamp',Ck); */
    /* } */
    /*  Beginning of code */
    /*  We cache the MATLAB memory information for better performance. */
    if (X->size[0] < 1) {
      seq->size[0] = 1;
      seq->size[1] = 0;
    } else {
      i = seq->size[0] * seq->size[1];
      seq->size[0] = 1;
      seq->size[1] = X->size[0];
      emxEnsureCapacity_real_T(seq, i);
      loop_ub = X->size[0] - 1;
      for (i = 0; i <= loop_ub; i++) {
        seq->data[i] = (double)i + 1.0;
      }
    }
    i = b_varargin_6->size[0] * b_varargin_6->size[1];
    b_varargin_6->size[0] = 1;
    b_varargin_6->size[1] = 1;
    emxEnsureCapacity_boolean_T(b_varargin_6, i);
    b_varargin_6->data[0] = (ncomb < nsamp->data[0]);
    if (ifWhileCond(b_varargin_6)) {
      i = Xb->size[0] * Xb->size[1];
      Xb->size[0] = 1;
      Xb->size[1] = 1;
      emxEnsureCapacity_real_T(Xb, i);
      Xb->data[0] = 0.0;
    }
    /*  this check is used in combination of randsampleFS, for computational */
    /*  efficiency */
    /*  Combinatorial part to extract the subsamples */
    /*  Key combinatorial variables used: */
    /*  C = matrix containing the indexes of the p-subsets. */
    /*  nselected = size(C,1), number of p-subsets to be selected. */
    /*  rndsi = vector of nselected indexes, randomly chosen between 1 e ncomb.
     */
    /*  Constants that determine the method used to extract the p-subsets */
    emxInit_real_T(&pascalM, 2);
    emxInit_real_T(&s, 2);
    if ((Xb->data[0] == 0.0) || (ncomb <= 5.0E+7)) {
      if (Xb->data[0] == 0.0) {
        nselected = ncomb;
      } else {
        nselected = Xb->data[0];
      }
      /*  If nsamp = 0 matrix C contains the indexes of all possible subsets */
      combsFS(seq, X->size[1], nsamp);
      /*  If nsamp is > 0 just select randomly ncomb rows from matrix C */
      if (Xb->data[0] > 0.0) {
        /*  Extract without replacement nsamp elements from ncomb */
        /* randsampleFS generates a random sample of k elements from the
         * integers 1 to n (k<=n) */
        /*  */
        /* <a href="matlab: docsearchFS('randsampleFS')">Link to the help
         * function</a> */
        /*  */
        /*   Required input arguments: */
        /*  */
        /*        n : A vector of numbers will be selected from the integers 1
         * to n. */
        /*            Scalar, a positive integer. */
        /*            Data Types - single|double */
        /*  */
        /*       k  : The number of elements to be selected. Non negative
         * integer. */
        /*            Data Types - single|double */
        /*  */
        /*   Optional input arguments: */
        /*  */
        /*    method : Sampling methods. Scalar or vector. */
        /*             Methods used to extract the subsets. See more about for
         * details. */
        /*             Default is method = 0. */
        /*             - Scalar from 0 to 3 determining the method used to
         * extract */
        /*              (without replacement) the random sample. */
        /*             - Vector of weights: in such a case, a weighted sampling
         * without */
        /*               replacement algorithm is applied using that vector of
         * weights. */
        /*             Example - randsampleFS(100,10,2) */
        /*             Data Types - single|double */
        /*  */
        /*  */
        /*    Output: */
        /*  */
        /*    y :     A column vector of k values sampled at random from the
         * integers 1:n. */
        /*            For methods 0, 1, 2 and weighted sampling the elements
         * extracted */
        /*            are unique; For method 3 (included for historical reasons)
         * there is */
        /*            no guarantee that the elements extracted are unique. */
        /*            Data Types - single|double. */
        /*  */
        /*  More About: */
        /*  */
        /*    The method=0 uses MATLAB function randperm. In old MATLAB releases
         */
        /*    randperm was slower than FSDA function shuffling, which is used in
         */
        /*    method 1 (for example, in R2009a - MATLAB 7.8 - randperm was at
         * least */
        /*    50% slower). */
        /*  */
        /*    If method=1 the approach depends on the population and sample
         * sizes: */
        /*    - if $n < 1000$ and $k < n/(10 + 0.007n)$, that is if the
         * population is */
        /*      relatively small and the desired sample is small compared to the
         */
        /*      population, we repeatedly sample with replacement until there
         * are k */
        /*      unique values; */
        /*    - otherwise, we do a random permutation of the population and
         * return */
        /*      the first k elements. */
        /*    The threshold $k < n/(10 + 0.007n)$ has been determined by
         * simulation */
        /*    under MATLAB R2016b. Before, the threshold was $n < 4*k$. */
        /*  */
        /*    If method=2 systematic sampling is used, where the starting point
         * is */
        /*    random and the step is also random. */
        /*  */
        /*    If method=3 random sampling is based on the old but well known
         * Linear */
        /*    Congruential Generator (LCG) method. In this case there is no
         * guarantee */
        /*    to get unique numbers. The method is included for historical
         * reasons. */
        /*  */
        /*    If method is a vector of n weights, then Weighted Sampling Without
         */
        /*    Replacement is applied. Our implementation follows Efraimidis and
         */
        /*    Spirakis (2006). MATLAB function datasample follows Wong and
         * Easton */
        /*    (1980), which is also quite fast; note however that function
         * datasample */
        /*    may be very slow if applied repetedly, for the large amount of
         * time */
        /*    spent on options checking. */
        /*  */
        /*    Remark on computation performances. Method=2 (systematic sampling)
         * is */
        /*    by far the fastest for any practical population size $n$. For
         * example, */
        /*    for $n \approx 10^6$ method=2 is two orders of magniture faster
         * than */
        /*    method=1. With recent MATLAB releases (after R2011b) method = 0
         * (which */
        /*    uses compiled MATLAB function randperm) has comparable
         * performances, at */
        /*    least for reasonably small $k$. In releases before 2012a, randperm
         * was */
        /*    considerably slow. */
        /*  */
        /*  See also: randsample, datasample, shuffling */
        /*  */
        /*  References: */
        /*  */
        /*  Fisher, R.A. and Yates, F. (1948), "Statistical tables */
        /*  for biological, agricultural and medical research (3rd ed.)", */
        /*  Oliver & Boyd, pp. 26-27. [For Method 1] */
        /*  Cochran, W.G. (1977), "Sampling techniques (Third ed.)", Wiley. [For
         */
        /*  Method 2] */
        /*  Knuth, D.E. (1997), "The Art of Computer Programming, Volume 2: */
        /*  Seminumerical Algorithms, Third Edition" Addison-Wesley, pp. 10-26.
         * [For */
        /*  Method 3. For details see: Section 3.2.1: The Linear Congruential
         * Method] */
        /*  Efraimidis, P.S. and Spirakis, P.G. (2006), Weighted random sampling
         * with */
        /*  a reservoir, "Information Processing Letters", Vol. 97, pp. 181-185.
         * [For */
        /*  Weighted Sampling Without Replacement] */
        /*  Wong, C.K. and Easton, M.C. (1980), An Efficient Method for Weighted
         */
        /*  Sampling Without Replacement, "SIAM Journal of Computing", Vol. 9,
         * pp. 111-113. */
        /*  */
        /*  Copyright 2008-2021. */
        /*  Written by FSDA team */
        /*  */
        /* <a href="matlab: docsearchFS('randsampleFS')">Link to the help
         * function</a> */
        /*  */
        /*  */
        /* $LastChangedDate::                      $: Date of the last commit */
        /*  */
        /*  Examples: */
        /* { */
        /*     %% randsampleFS with default options. */
        /*     % default method (1) is used. */
        /*     randsampleFS(1000,10) */
        /* } */
        /* { */
        /*     %% randsampleFS with optional argument set to method (2). */
        /*     method = 2; */
        /*     randsampleFS(100,10,method) */
        /* } */
        /* { */
        /*     % randsampleFS with optional arguments set to method (3). */
        /*     method = 3; */
        /*     % Here, being nsel so big wrt nsamp, it is likely to obtain
         * repetitions. */
        /*     randsampleFS(100,10,method) */
        /* } */
        /* { */
        /*     % randsampleFS Weighted Sampling Without Replacement. */
        /*     % Extract k=10 number in [-1000 -900] with gamma distributed
         * weights. */
        /*      population = -1000:1:-900; */
        /*      n = numel(population); */
        /*      wgts = sort(random('gamma',0.3,2,n,1),'descend'); */
        /*  */
        /*      k=10; */
        /*      y = randsampleFS(n,k,wgts); */
        /*      sample  = population(y); */
        /*       */
        /*      plot(wgts,'.r') */
        /*      hold on; */
        /*      text(y,wgts(y),'X'); */
        /*      title('Weight distribution with the extracted numbers
         * superimposed') */
        /* } */
        /*  Beginning of code */
        /*  randsampleFS needs to check the MATLAB version in use in order to:
         */
        /*  - decide the sampling method to use, and */
        /*  - use properly the optional parameter of randperm. */
        /*  In the first case  the release to check is R2012a, i.e. 7.14 */
        /*  In the second case the release to check is R2011b, i.e. 7.13 */
        /*  For the sake of computational efficiency, we just check the latest
         */
        /*  To pass the argument, use: */
        /*  after2012a = ~verLessThan('MATLAB','7.14'); */
        /*  choose the default sampling method */
        /*  Weighted Sampling Without Replacement */
        /*  This is done if the third argument is provided as a vector of
         * weights. */
        /*  Extract a random sample of k integers between 1 and n. */
        randperm(ncomb, Xb->data[0], seq);
        /*  METHOD: it was set to 2 */
        aoffset = nsamp->size[1] - 1;
        i = Xb->size[0] * Xb->size[1];
        Xb->size[0] = seq->size[1];
        Xb->size[1] = nsamp->size[1];
        emxEnsureCapacity_real_T(Xb, i);
        for (i = 0; i <= aoffset; i++) {
          loop_ub = seq->size[1];
          for (c_i = 0; c_i < loop_ub; c_i++) {
            Xb->data[c_i + Xb->size[0] * i] =
                nsamp->data[((int)seq->data[c_i] + nsamp->size[0] * i) - 1];
          }
        }
        i = nsamp->size[0] * nsamp->size[1];
        nsamp->size[0] = Xb->size[0];
        nsamp->size[1] = Xb->size[1];
        emxEnsureCapacity_real_T(nsamp, i);
        loop_ub = Xb->size[0] * Xb->size[1];
        for (i = 0; i < loop_ub; i++) {
          nsamp->data[i] = Xb->data[i];
        }
      }
    } else {
      nselected = Xb->data[0];
      /*  usepascal: flag used to decide whether to use the Pascal triangle */
      /*  tric, which allows to reduce considerably the computation time */
      usepascal = true;
      if ((ncomb > 5.0E+7) && (ncomb < 1.0E+8)) {
        /*  Extract without replacement nsamp elements from ncomb */
        /* randsampleFS generates a random sample of k elements from the
         * integers 1 to n (k<=n) */
        /*  */
        /* <a href="matlab: docsearchFS('randsampleFS')">Link to the help
         * function</a> */
        /*  */
        /*   Required input arguments: */
        /*  */
        /*        n : A vector of numbers will be selected from the integers 1
         * to n. */
        /*            Scalar, a positive integer. */
        /*            Data Types - single|double */
        /*  */
        /*       k  : The number of elements to be selected. Non negative
         * integer. */
        /*            Data Types - single|double */
        /*  */
        /*   Optional input arguments: */
        /*  */
        /*    method : Sampling methods. Scalar or vector. */
        /*             Methods used to extract the subsets. See more about for
         * details. */
        /*             Default is method = 0. */
        /*             - Scalar from 0 to 3 determining the method used to
         * extract */
        /*              (without replacement) the random sample. */
        /*             - Vector of weights: in such a case, a weighted sampling
         * without */
        /*               replacement algorithm is applied using that vector of
         * weights. */
        /*             Example - randsampleFS(100,10,2) */
        /*             Data Types - single|double */
        /*  */
        /*  */
        /*    Output: */
        /*  */
        /*    y :     A column vector of k values sampled at random from the
         * integers 1:n. */
        /*            For methods 0, 1, 2 and weighted sampling the elements
         * extracted */
        /*            are unique; For method 3 (included for historical reasons)
         * there is */
        /*            no guarantee that the elements extracted are unique. */
        /*            Data Types - single|double. */
        /*  */
        /*  More About: */
        /*  */
        /*    The method=0 uses MATLAB function randperm. In old MATLAB releases
         */
        /*    randperm was slower than FSDA function shuffling, which is used in
         */
        /*    method 1 (for example, in R2009a - MATLAB 7.8 - randperm was at
         * least */
        /*    50% slower). */
        /*  */
        /*    If method=1 the approach depends on the population and sample
         * sizes: */
        /*    - if $n < 1000$ and $k < n/(10 + 0.007n)$, that is if the
         * population is */
        /*      relatively small and the desired sample is small compared to the
         */
        /*      population, we repeatedly sample with replacement until there
         * are k */
        /*      unique values; */
        /*    - otherwise, we do a random permutation of the population and
         * return */
        /*      the first k elements. */
        /*    The threshold $k < n/(10 + 0.007n)$ has been determined by
         * simulation */
        /*    under MATLAB R2016b. Before, the threshold was $n < 4*k$. */
        /*  */
        /*    If method=2 systematic sampling is used, where the starting point
         * is */
        /*    random and the step is also random. */
        /*  */
        /*    If method=3 random sampling is based on the old but well known
         * Linear */
        /*    Congruential Generator (LCG) method. In this case there is no
         * guarantee */
        /*    to get unique numbers. The method is included for historical
         * reasons. */
        /*  */
        /*    If method is a vector of n weights, then Weighted Sampling Without
         */
        /*    Replacement is applied. Our implementation follows Efraimidis and
         */
        /*    Spirakis (2006). MATLAB function datasample follows Wong and
         * Easton */
        /*    (1980), which is also quite fast; note however that function
         * datasample */
        /*    may be very slow if applied repetedly, for the large amount of
         * time */
        /*    spent on options checking. */
        /*  */
        /*    Remark on computation performances. Method=2 (systematic sampling)
         * is */
        /*    by far the fastest for any practical population size $n$. For
         * example, */
        /*    for $n \approx 10^6$ method=2 is two orders of magniture faster
         * than */
        /*    method=1. With recent MATLAB releases (after R2011b) method = 0
         * (which */
        /*    uses compiled MATLAB function randperm) has comparable
         * performances, at */
        /*    least for reasonably small $k$. In releases before 2012a, randperm
         * was */
        /*    considerably slow. */
        /*  */
        /*  See also: randsample, datasample, shuffling */
        /*  */
        /*  References: */
        /*  */
        /*  Fisher, R.A. and Yates, F. (1948), "Statistical tables */
        /*  for biological, agricultural and medical research (3rd ed.)", */
        /*  Oliver & Boyd, pp. 26-27. [For Method 1] */
        /*  Cochran, W.G. (1977), "Sampling techniques (Third ed.)", Wiley. [For
         */
        /*  Method 2] */
        /*  Knuth, D.E. (1997), "The Art of Computer Programming, Volume 2: */
        /*  Seminumerical Algorithms, Third Edition" Addison-Wesley, pp. 10-26.
         * [For */
        /*  Method 3. For details see: Section 3.2.1: The Linear Congruential
         * Method] */
        /*  Efraimidis, P.S. and Spirakis, P.G. (2006), Weighted random sampling
         * with */
        /*  a reservoir, "Information Processing Letters", Vol. 97, pp. 181-185.
         * [For */
        /*  Weighted Sampling Without Replacement] */
        /*  Wong, C.K. and Easton, M.C. (1980), An Efficient Method for Weighted
         */
        /*  Sampling Without Replacement, "SIAM Journal of Computing", Vol. 9,
         * pp. 111-113. */
        /*  */
        /*  Copyright 2008-2021. */
        /*  Written by FSDA team */
        /*  */
        /* <a href="matlab: docsearchFS('randsampleFS')">Link to the help
         * function</a> */
        /*  */
        /*  */
        /* $LastChangedDate::                      $: Date of the last commit */
        /*  */
        /*  Examples: */
        /* { */
        /*     %% randsampleFS with default options. */
        /*     % default method (1) is used. */
        /*     randsampleFS(1000,10) */
        /* } */
        /* { */
        /*     %% randsampleFS with optional argument set to method (2). */
        /*     method = 2; */
        /*     randsampleFS(100,10,method) */
        /* } */
        /* { */
        /*     % randsampleFS with optional arguments set to method (3). */
        /*     method = 3; */
        /*     % Here, being nsel so big wrt nsamp, it is likely to obtain
         * repetitions. */
        /*     randsampleFS(100,10,method) */
        /* } */
        /* { */
        /*     % randsampleFS Weighted Sampling Without Replacement. */
        /*     % Extract k=10 number in [-1000 -900] with gamma distributed
         * weights. */
        /*      population = -1000:1:-900; */
        /*      n = numel(population); */
        /*      wgts = sort(random('gamma',0.3,2,n,1),'descend'); */
        /*  */
        /*      k=10; */
        /*      y = randsampleFS(n,k,wgts); */
        /*      sample  = population(y); */
        /*       */
        /*      plot(wgts,'.r') */
        /*      hold on; */
        /*      text(y,wgts(y),'X'); */
        /*      title('Weight distribution with the extracted numbers
         * superimposed') */
        /* } */
        /*  Beginning of code */
        /*  randsampleFS needs to check the MATLAB version in use in order to:
         */
        /*  - decide the sampling method to use, and */
        /*  - use properly the optional parameter of randperm. */
        /*  In the first case  the release to check is R2012a, i.e. 7.14 */
        /*  In the second case the release to check is R2011b, i.e. 7.13 */
        /*  For the sake of computational efficiency, we just check the latest
         */
        /*  To pass the argument, use: */
        /*  after2012a = ~verLessThan('MATLAB','7.14'); */
        /*  choose the default sampling method */
        /*  Weighted Sampling Without Replacement */
        /*  This is done if the third argument is provided as a vector of
         * weights. */
        /*  Extract a random sample of k integers between 1 and n. */
        randperm(ncomb, Xb->data[0], seq);
        /*  METHOD: it was set to 2 */
        /*  The Pascal triangle can be used only if there is enough memory. */
        if (X->size[0] <= 20000) {
          pascal(X->size[0], pascalM);
        } else {
          usepascal = false;
          i = pascalM->size[0] * pascalM->size[1];
          pascalM->size[0] = 1;
          pascalM->size[1] = 1;
          emxEnsureCapacity_real_T(pascalM, i);
          pascalM->data[0] = 0.0;
          /*  C coder initialization */
        }
      } else {
        i = seq->size[0] * seq->size[1];
        seq->size[0] = 1;
        seq->size[1] = 1;
        emxEnsureCapacity_real_T(seq, i);
        seq->data[0] = 0.0;
        /*  C coder initialization */
        i = pascalM->size[0] * pascalM->size[1];
        pascalM->size[0] = 1;
        pascalM->size[1] = 1;
        emxEnsureCapacity_real_T(pascalM, i);
        pascalM->data[0] = 0.0;
        /*  C coder initialization */
      }
      /*  Create matrix C which will contain in each row the indexes forming the
       */
      /*  subset which is extracted at step i, where i=1....number of selected
       */
      /*  subsamples (nselected) */
      i = nsamp->size[0] * nsamp->size[1];
      nsamp->size[0] = (int)Xb->data[0];
      nsamp->size[1] = X->size[1];
      emxEnsureCapacity_real_T(nsamp, i);
      i = (int)Xb->data[0];
      for (b_i = 0; b_i < i; b_i++) {
        if ((ncomb > 5.0E+7) && (ncomb < 1.0E+8)) {
          if (usepascal) {
            lexunrank(aoffset, p, seq->data[b_i], pascalM, s);
          } else {
            b_lexunrank(aoffset, p, seq->data[b_i], s);
          }
        } else {
          /* randsampleFS generates a random sample of k elements from the
           * integers 1 to n (k<=n) */
          /*  */
          /* <a href="matlab: docsearchFS('randsampleFS')">Link to the help
           * function</a> */
          /*  */
          /*   Required input arguments: */
          /*  */
          /*        n : A vector of numbers will be selected from the integers 1
           * to n. */
          /*            Scalar, a positive integer. */
          /*            Data Types - single|double */
          /*  */
          /*       k  : The number of elements to be selected. Non negative
           * integer. */
          /*            Data Types - single|double */
          /*  */
          /*   Optional input arguments: */
          /*  */
          /*    method : Sampling methods. Scalar or vector. */
          /*             Methods used to extract the subsets. See more about for
           * details. */
          /*             Default is method = 0. */
          /*             - Scalar from 0 to 3 determining the method used to
           * extract */
          /*              (without replacement) the random sample. */
          /*             - Vector of weights: in such a case, a weighted
           * sampling without */
          /*               replacement algorithm is applied using that vector of
           * weights. */
          /*             Example - randsampleFS(100,10,2) */
          /*             Data Types - single|double */
          /*  */
          /*  */
          /*    Output: */
          /*  */
          /*    y :     A column vector of k values sampled at random from the
           * integers 1:n. */
          /*            For methods 0, 1, 2 and weighted sampling the elements
           * extracted */
          /*            are unique; For method 3 (included for historical
           * reasons) there is */
          /*            no guarantee that the elements extracted are unique. */
          /*            Data Types - single|double. */
          /*  */
          /*  More About: */
          /*  */
          /*    The method=0 uses MATLAB function randperm. In old MATLAB
           * releases */
          /*    randperm was slower than FSDA function shuffling, which is used
           * in */
          /*    method 1 (for example, in R2009a - MATLAB 7.8 - randperm was at
           * least */
          /*    50% slower). */
          /*  */
          /*    If method=1 the approach depends on the population and sample
           * sizes: */
          /*    - if $n < 1000$ and $k < n/(10 + 0.007n)$, that is if the
           * population is */
          /*      relatively small and the desired sample is small compared to
           * the */
          /*      population, we repeatedly sample with replacement until there
           * are k */
          /*      unique values; */
          /*    - otherwise, we do a random permutation of the population and
           * return */
          /*      the first k elements. */
          /*    The threshold $k < n/(10 + 0.007n)$ has been determined by
           * simulation */
          /*    under MATLAB R2016b. Before, the threshold was $n < 4*k$. */
          /*  */
          /*    If method=2 systematic sampling is used, where the starting
           * point is */
          /*    random and the step is also random. */
          /*  */
          /*    If method=3 random sampling is based on the old but well known
           * Linear */
          /*    Congruential Generator (LCG) method. In this case there is no
           * guarantee */
          /*    to get unique numbers. The method is included for historical
           * reasons. */
          /*  */
          /*    If method is a vector of n weights, then Weighted Sampling
           * Without */
          /*    Replacement is applied. Our implementation follows Efraimidis
           * and */
          /*    Spirakis (2006). MATLAB function datasample follows Wong and
           * Easton */
          /*    (1980), which is also quite fast; note however that function
           * datasample */
          /*    may be very slow if applied repetedly, for the large amount of
           * time */
          /*    spent on options checking. */
          /*  */
          /*    Remark on computation performances. Method=2 (systematic
           * sampling) is */
          /*    by far the fastest for any practical population size $n$. For
           * example, */
          /*    for $n \approx 10^6$ method=2 is two orders of magniture faster
           * than */
          /*    method=1. With recent MATLAB releases (after R2011b) method = 0
           * (which */
          /*    uses compiled MATLAB function randperm) has comparable
           * performances, at */
          /*    least for reasonably small $k$. In releases before 2012a,
           * randperm was */
          /*    considerably slow. */
          /*  */
          /*  See also: randsample, datasample, shuffling */
          /*  */
          /*  References: */
          /*  */
          /*  Fisher, R.A. and Yates, F. (1948), "Statistical tables */
          /*  for biological, agricultural and medical research (3rd ed.)", */
          /*  Oliver & Boyd, pp. 26-27. [For Method 1] */
          /*  Cochran, W.G. (1977), "Sampling techniques (Third ed.)", Wiley.
           * [For */
          /*  Method 2] */
          /*  Knuth, D.E. (1997), "The Art of Computer Programming, Volume 2: */
          /*  Seminumerical Algorithms, Third Edition" Addison-Wesley, pp.
           * 10-26. [For */
          /*  Method 3. For details see: Section 3.2.1: The Linear Congruential
           * Method] */
          /*  Efraimidis, P.S. and Spirakis, P.G. (2006), Weighted random
           * sampling with */
          /*  a reservoir, "Information Processing Letters", Vol. 97, pp.
           * 181-185. [For */
          /*  Weighted Sampling Without Replacement] */
          /*  Wong, C.K. and Easton, M.C. (1980), An Efficient Method for
           * Weighted */
          /*  Sampling Without Replacement, "SIAM Journal of Computing", Vol. 9,
           * pp. 111-113. */
          /*  */
          /*  Copyright 2008-2021. */
          /*  Written by FSDA team */
          /*  */
          /* <a href="matlab: docsearchFS('randsampleFS')">Link to the help
           * function</a> */
          /*  */
          /*  */
          /* $LastChangedDate::                      $: Date of the last commit
           */
          /*  */
          /*  Examples: */
          /* { */
          /*     %% randsampleFS with default options. */
          /*     % default method (1) is used. */
          /*     randsampleFS(1000,10) */
          /* } */
          /* { */
          /*     %% randsampleFS with optional argument set to method (2). */
          /*     method = 2; */
          /*     randsampleFS(100,10,method) */
          /* } */
          /* { */
          /*     % randsampleFS with optional arguments set to method (3). */
          /*     method = 3; */
          /*     % Here, being nsel so big wrt nsamp, it is likely to obtain
           * repetitions. */
          /*     randsampleFS(100,10,method) */
          /* } */
          /* { */
          /*     % randsampleFS Weighted Sampling Without Replacement. */
          /*     % Extract k=10 number in [-1000 -900] with gamma distributed
           * weights. */
          /*      population = -1000:1:-900; */
          /*      n = numel(population); */
          /*      wgts = sort(random('gamma',0.3,2,n,1),'descend'); */
          /*  */
          /*      k=10; */
          /*      y = randsampleFS(n,k,wgts); */
          /*      sample  = population(y); */
          /*       */
          /*      plot(wgts,'.r') */
          /*      hold on; */
          /*      text(y,wgts(y),'X'); */
          /*      title('Weight distribution with the extracted numbers
           * superimposed') */
          /* } */
          /*  Beginning of code */
          /*  randsampleFS needs to check the MATLAB version in use in order to:
           */
          /*  - decide the sampling method to use, and */
          /*  - use properly the optional parameter of randperm. */
          /*  In the first case  the release to check is R2012a, i.e. 7.14 */
          /*  In the second case the release to check is R2011b, i.e. 7.13 */
          /*  For the sake of computational efficiency, we just check the latest
           */
          /*  To pass the argument, use: */
          /*  after2012a = ~verLessThan('MATLAB','7.14'); */
          /*  choose the default sampling method */
          /*  Weighted Sampling Without Replacement */
          /*  This is done if the third argument is provided as a vector of
           * weights. */
          /*  Extract a random sample of k integers between 1 and n. */
          randperm(aoffset, p, s);
        }
        loop_ub = s->size[1];
        for (c_i = 0; c_i < loop_ub; c_i++) {
          nsamp->data[b_i + nsamp->size[0] * c_i] = s->data[c_i];
        }
      }
      /*          C=zeros(nselected,p); */
      /*          for i=1:nselected */
      /*              s=randsampleFS(n,p,method); */
      /*              C(i,:)=s; */
      /*          end */
    }
    emxFree_real_T(&s);
    emxFree_real_T(&pascalM);
  } else {
    nselected = nsamp->size[0];
  }
  emxFree_real_T(&seq);
  /*  Store the indices in varargout */
  /*  rmin will contain the minimum value of LMS (LTS) */
  ncomb = rtInf;
  /*  initialise and start timer. */
  tsampling = ceil(fmin(nselected / 100.0, 1000.0));
  aoffset = (int)tsampling;
  if (0 <= aoffset - 1) {
    memset(&time_data[0], 0, aoffset * sizeof(double));
  }
  /*  bonflevoutX option to search for outliers in the X space */
  /*  Computation of LMS (LTS) */
  tic(&fp_875_n, &xk);
  i = out->bs->size[0] * out->bs->size[1];
  out->bs->size[0] = 1;
  out->bs->size[1] = X->size[1];
  emxEnsureCapacity_real_T(out->bs, i);
  loop_ub = X->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->bs->data[i] = 0.0;
  }
  i = (int)nselected;
  emxInit_real_T(&b, 1);
  emxInit_real_T(&r2, 1);
  for (b_i = 0; b_i < i; b_i++) {
    if (b_i + 1U <= (unsigned int)tsampling) {
      tic(&fp_875_n, &xk);
    }
    /*  extract a subset of size p */
    loop_ub = nsamp->size[1];
    aoffset = X->size[1];
    c_i = Xb->size[0] * Xb->size[1];
    Xb->size[0] = nsamp->size[1];
    Xb->size[1] = X->size[1];
    emxEnsureCapacity_real_T(Xb, c_i);
    for (c_i = 0; c_i < aoffset; c_i++) {
      for (p = 0; p < loop_ub; p++) {
        Xb->data[p + Xb->size[0] * c_i] =
            X->data[((int)nsamp->data[b_i + nsamp->size[0] * p] +
                     X->size[0] * c_i) -
                    1];
      }
    }
    /*  if rank(Xb)==p Warning: this instruction has been replaced by a */
    /*  posteriori control on vector b */
    /*  Compute the vector of coefficients using matrice Xb and yb */
    loop_ub = nsamp->size[1];
    c_i = b->size[0];
    b->size[0] = nsamp->size[1];
    emxEnsureCapacity_real_T(b, c_i);
    for (c_i = 0; c_i < loop_ub; c_i++) {
      b->data[c_i] = y->data[(int)nsamp->data[b_i + nsamp->size[0] * c_i] - 1];
    }
    mldivide(Xb, b);
    if ((!rtIsNaN(b->data[0])) && (!rtIsInf(b->data[0]))) {
      /*  Residuals for all observations using b based on subset */
      /*  Squared residuals for all the observations */
      /*  Ordering of squared residuals */
      p = X->size[0] - 1;
      loop_ub = X->size[1];
      c_i = out->residuals->size[0];
      out->residuals->size[0] = X->size[0];
      emxEnsureCapacity_real_T(out->residuals, c_i);
      for (c_i = 0; c_i <= p; c_i++) {
        out->residuals->data[c_i] = 0.0;
      }
      for (k = 0; k < loop_ub; k++) {
        aoffset = k * X->size[0];
        for (c_i = 0; c_i <= p; c_i++) {
          out->residuals->data[c_i] += X->data[aoffset + c_i] * b->data[k];
        }
      }
      loop_ub = y->size[0];
      c_i = out->residuals->size[0];
      out->residuals->size[0] = y->size[0];
      emxEnsureCapacity_real_T(out->residuals, c_i);
      for (c_i = 0; c_i < loop_ub; c_i++) {
        out->residuals->data[c_i] = y->data[c_i] - out->residuals->data[c_i];
      }
      c_i = r2->size[0];
      r2->size[0] = out->residuals->size[0];
      emxEnsureCapacity_real_T(r2, c_i);
      aoffset = out->residuals->size[0];
      for (k = 0; k < aoffset; k++) {
        r2->data[k] = out->residuals->data[k] * out->residuals->data[k];
      }
      sort(r2);
      c_i = b_varargin_6->size[0] * b_varargin_6->size[1];
      b_varargin_6->size[0] = 1;
      b_varargin_6->size[1] = varargin_2->size[1];
      emxEnsureCapacity_boolean_T(b_varargin_6, c_i);
      loop_ub = varargin_2->size[1];
      for (c_i = 0; c_i < loop_ub; c_i++) {
        b_varargin_6->data[c_i] = (varargin_2->data[c_i] == 1.0);
      }
      if (ifWhileCond(b_varargin_6)) {
        /*  LMS */
        rrob = r2->data[(int)varargin_4 - 1];
      } else {
        /*  STANDARD LTS without concentration steps */
        c_i = r2->size[0];
        r2->size[0] = (int)varargin_4;
        emxEnsureCapacity_real_T(r2, c_i);
        rrob = sum(r2);
      }
      if (rrob < ncomb) {
        /*  rmin = smallest ordered quantile or smallest truncated sum. */
        ncomb = rrob;
        /*  brob = \beta_lms or \beta_lts */
        c_i = out->beta->size[0];
        out->beta->size[0] = b->size[0];
        emxEnsureCapacity_real_T(out->beta, c_i);
        loop_ub = b->size[0];
        for (c_i = 0; c_i < loop_ub; c_i++) {
          out->beta->data[c_i] = b->data[c_i];
        }
        /*  bs = units forming best subset according to lms or lts */
        loop_ub = nsamp->size[1];
        c_i = out->bs->size[0] * out->bs->size[1];
        out->bs->size[0] = 1;
        out->bs->size[1] = nsamp->size[1];
        emxEnsureCapacity_real_T(out->bs, c_i);
        for (c_i = 0; c_i < loop_ub; c_i++) {
          out->bs->data[c_i] = nsamp->data[b_i + nsamp->size[0] * c_i];
        }
      }
    } else {
      singsub++;
    }
    if (b_i + 1U <= (unsigned int)tsampling) {
      /*  sampling time until step tsampling */
      time_data[b_i] = toc(fp_875_n, xk);
    } else if ((b_i + 1U == (unsigned int)((int)tsampling + 1)) &&
               varargin_10) {
      /*  stop sampling and print the estimated time */
      switch (lmsopt) {
      case 1:
        printf("Total estimated time to complete LMS: %5.2f seconds \n",
               nselected * median(time_data, (int)tsampling));
        fflush(stdout);
        break;
      case 2:
        printf("Total estimated time to complete FASTLTS: %5.2f seconds \n",
               nselected * median(time_data, (int)tsampling));
        fflush(stdout);
        break;
      default:
        printf("Total estimated time to complete LTS: %5.2f seconds \n",
               nselected * median(time_data, (int)tsampling));
        fflush(stdout);
        break;
      }
    }
  }
  emxFree_real_T(&r2);
  emxFree_real_T(&Xb);
  emxFree_real_T(&nsamp);
  i = b_varargin_6->size[0] * b_varargin_6->size[1];
  b_varargin_6->size[0] = 1;
  b_varargin_6->size[1] = varargin_2->size[1];
  emxEnsureCapacity_boolean_T(b_varargin_6, i);
  loop_ub = varargin_2->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_varargin_6->data[i] = (varargin_2->data[i] == 1.0);
  }
  if (ifWhileCond(b_varargin_6)) {
    /*  Estimate of scale based on h-quantile of all squared residuals */
    ncomb = sqrt(ncomb);
  } else {
    /*  Estimate of scale based on the first h squared smallest residuals */
    ncomb = sqrt(ncomb / varargin_4);
  }
  emxFree_boolean_T(&b_varargin_6);
  /*  residuals = Raw residuals using robust estimate of beta */
  p = X->size[0] - 1;
  loop_ub = X->size[1];
  i = out->residuals->size[0];
  out->residuals->size[0] = X->size[0];
  emxEnsureCapacity_real_T(out->residuals, i);
  for (b_i = 0; b_i <= p; b_i++) {
    out->residuals->data[b_i] = 0.0;
  }
  for (k = 0; k < loop_ub; k++) {
    aoffset = k * X->size[0];
    for (b_i = 0; b_i <= p; b_i++) {
      out->residuals->data[b_i] += X->data[aoffset + b_i] * out->beta->data[k];
    }
  }
  i = out->residuals->size[0];
  out->residuals->size[0] = y->size[0];
  emxEnsureCapacity_real_T(out->residuals, i);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->residuals->data[i] = y->data[i] - out->residuals->data[i];
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
    s0 = ncomb * (1.4826 * (5.0 / (double)(X->size[0] - X->size[1]) + 1.0));
  } else {
    /*  Consistency factor based on the variance of the truncated normal
     * distribution. */
    /*  1-h/n=trimming percentage */
    /*  Compute variance of the truncated normal distribution. */
    tsampling = norminv(0.5 * (varargin_4 / (double)X->size[0] + 1.0));
    /* factor=1/sqrt(1-(2*a.*normpdf(a))./(2*normcdf(a)-1)); */
    /*  Note that factor=sqrt(factor1) */
    /*      v=1; */
    /*      a=chi2inv(h/n,1); */
    /*      factor1=(h/n)/(chi2cdf(a,1+2)); */
    /*  Apply the asymptotic consistency factor to the preliminary scale
     * estimate */
    s0 = ncomb *
         (1.0 / sqrt(1.0 - 2.0 * ((double)X->size[0] / varargin_4) * tsampling *
                               (exp(-0.5 * tsampling * tsampling) /
                                2.5066282746310002)));
    /*  Apply small sample correction factor of Pison et al. */
    if (varargin_4 < X->size[0]) {
      ncomb = varargin_4 / (double)X->size[0];
      /*  corfactorRAW function */
      tsampling =
          1.0 - 1.2995580068132053 / rt_powd_snf(X->size[0], 0.604756680630497);
      fp_875_n =
          1.0 - 0.70357229237653807 / rt_powd_snf(X->size[0], 1.01646567502486);
      if ((0.5 <= ncomb) && (ncomb <= 0.875)) {
        fp_alpha_n = tsampling + (fp_875_n - tsampling) / 0.375 * (ncomb - 0.5);
      } else if ((0.875 < ncomb) && (ncomb < 1.0)) {
        fp_alpha_n = fp_875_n + (1.0 - fp_875_n) / 0.125 * (ncomb - 0.875);
      }
      ncomb = 1.0 / fp_alpha_n;
      if ((ncomb <= 0.0) || (ncomb > 50.0)) {
        ncomb = 1.0;
        /*  if msg==1 */
        /*  end */
      }
      s0 *= sqrt(ncomb);
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
  if (fabs(s0) > 1.0E-7) {
    /*  Assign weight=1 to the h units which show the smallest h squared */
    /*  residuals */
    i = b->size[0];
    b->size[0] = out->residuals->size[0];
    emxEnsureCapacity_real_T(b, i);
    aoffset = out->residuals->size[0];
    for (k = 0; k < aoffset; k++) {
      b->data[k] = out->residuals->data[k] * out->residuals->data[k];
    }
    emxInit_int32_T(&iidx, 1);
    b_sort(b, iidx);
    i = b->size[0];
    b->size[0] = iidx->size[0];
    emxEnsureCapacity_real_T(b, i);
    loop_ub = iidx->size[0];
    for (i = 0; i < loop_ub; i++) {
      b->data[i] = iidx->data[i];
    }
    emxFree_int32_T(&iidx);
    i = out->weights->size[0];
    out->weights->size[0] = X->size[0];
    emxEnsureCapacity_boolean_T(out->weights, i);
    loop_ub = X->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->weights->data[i] = false;
    }
    emxInit_int32_T(&r, 2);
    aoffset = (int)varargin_4;
    i = r->size[0] * r->size[1];
    r->size[0] = 1;
    r->size[1] = (int)varargin_4;
    emxEnsureCapacity_int32_T(r, i);
    for (i = 0; i < aoffset; i++) {
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
    /*  The part below contains subfunctions which are used only inside this
     * file */
    /* asvar computes the new degrees of freedom for the Student T */
    rrob = varargin_4 / (double)X->size[0];
    fp_alpha_n = chi2inv(rrob);
    xk = fp_alpha_n / 2.0;
    ncomb = xk;
    usepascal = rtIsNaN(xk);
    if (!usepascal) {
      if (xk < 0.0) {
        ncomb = 0.0;
      }
      tsampling = 2.5;
      gammaln(&tsampling);
      fp_875_n =
          (scalar_gammainc(ncomb, 1.5, 0.40546510810816438, tsampling)).re;
    } else {
      fp_875_n = rtNaN;
    }
    /*  Confidence level which is used for outlier detection */
    if (!usepascal) {
      if (xk < 0.0) {
        xk = 0.0;
      }
      tsampling = 3.5;
      gammaln(&tsampling);
      ncomb = (scalar_gammainc(xk, 2.5, 0.91629073187415511, tsampling)).re;
    } else {
      ncomb = rtNaN;
    }
    ncomb = tinv(2.0 * (double)X->size[0] /
                 (rt_powd_snf(1.0 / fp_875_n, 2.0) *
                  (((3.0 * ncomb - 2.0 * fp_alpha_n * fp_875_n) +
                    rrob * rt_powd_snf(fp_alpha_n, 2.0)) -
                   rt_powd_snf(fp_alpha_n * rrob - fp_875_n, 2.0))));
    /*  Observations with a standardized residual smaller than the quantile */
    /*  threshold have a weight equal to 1, else the weight is equal to 0. */
    /*  REMARK: using this threshold, even if the sample is homogeneous, */
    /*  you are willing to declare at least 2.5% units as outliers. */
    /*  Remark: sqrt(chi2inv(0.975,1)) = tinv(0.9875,\infinity) = quantile */
    loop_ub = out->residuals->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->residuals->data[i] /= s0;
    }
    aoffset = out->residuals->size[0];
    i = b->size[0];
    b->size[0] = out->residuals->size[0];
    emxEnsureCapacity_real_T(b, i);
    for (k = 0; k < aoffset; k++) {
      b->data[k] = fabs(out->residuals->data[k]);
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
    /*  The default is no reweighting */
    out->rew = false;
  } else {
    /*  Perfect fit */
    /*  There is an approximate perfect fit for the first h observations. */
    /*  We consider as outliers all units with residual greater than 1e-7. */
    aoffset = out->residuals->size[0];
    i = b->size[0];
    b->size[0] = out->residuals->size[0];
    emxEnsureCapacity_real_T(b, i);
    for (k = 0; k < aoffset; k++) {
      b->data[k] = fabs(out->residuals->data[k]);
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
    s0 = 0.0;
    /*  Standardized residuals are artificially set equal to raw residuals. */
  }
  emxFree_real_T(&b);
  /*  Store quantities in the out structure */
  /*  Store robust estimate of beta coefficients */
  /*  Store robust estimate of s */
  out->scale = s0;
  /*  Store standardized residuals */
  /*  Store units forming initial subset */
  /*  Store list of units declared as outliers */
  p = weights->size[0] - 1;
  aoffset = 0;
  for (b_i = 0; b_i <= p; b_i++) {
    if (!weights->data[b_i]) {
      aoffset++;
    }
  }
  emxInit_int32_T(&r1, 1);
  i = r1->size[0];
  r1->size[0] = aoffset;
  emxEnsureCapacity_int32_T(r1, i);
  aoffset = 0;
  for (b_i = 0; b_i <= p; b_i++) {
    if (!weights->data[b_i]) {
      r1->data[aoffset] = b_i + 1;
      aoffset++;
    }
  }
  emxFree_boolean_T(&weights);
  i = out->outliers->size[0];
  out->outliers->size[0] = r1->size[0];
  emxEnsureCapacity_real_T(out->outliers, i);
  loop_ub = r1->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->outliers->data[i] = b_seq->data[r1->data[i] - 1];
  }
  emxFree_int32_T(&r1);
  emxFree_real_T(&b_seq);
  /*  Store confidence level which is used to draw the horizontal lines in the
   */
  /*  plot */
  out->conflev = 0.99;
  /*  Store the number of observations that have determined the LTS (LMS) */
  /*  estimator, i.e. the value of h. */
  out->h = varargin_4;
  /*  Store number of singular subsets */
  out->singsub = singsub;
  if (varargin_10 && (singsub / nselected > 0.1)) {
    printf("Warning: Number of subsets without full rank equal to %.1f%%\n",
           100.0 * singsub / nselected);
    fflush(stdout);
  }
  out->X.size[0] = 0;
  out->X.size[1] = 0;
  out->y.size[0] = 0;
  out->y.size[1] = 0;
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

/* End of code generation (LXS.c) */
