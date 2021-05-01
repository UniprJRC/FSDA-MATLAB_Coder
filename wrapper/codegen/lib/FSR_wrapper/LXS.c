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
#include "FSM.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_internal_types.h"
#include "FSR_wrapper_rtwutil.h"
#include "FSR_wrapper_types.h"
#include "bc.h"
#include "betaincinv.h"
#include "blockedSummation.h"
#include "eml_setop.h"
#include "erfcinv.h"
#include "gammainc.h"
#include "gammaincinv.h"
#include "int2str.h"
#include "mldivide.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "subsets.h"
#include "tic.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <stdio.h>

/* Function Definitions */
void LXS(const emxArray_real_T *y, const emxArray_real_T *X, double varargin_2,
         double varargin_4, double varargin_6, bool varargin_10,
         const double varargin_12_data[], const int varargin_12_size[2],
         b_struct_T *out)
{
  emxArray_boolean_T *weights;
  emxArray_char_T_1x310 b_X;
  emxArray_int32_T *ia;
  emxArray_int32_T *ib;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_real_T *C;
  emxArray_real_T *Xb;
  emxArray_real_T *b;
  emxArray_real_T *b_expl_temp;
  emxArray_real_T *b_y;
  emxArray_real_T *c_X;
  emxArray_real_T *c_expl_temp;
  emxArray_real_T *d_expl_temp;
  emxArray_real_T *expl_temp;
  emxArray_real_T *outFSM_outliers;
  emxArray_real_T *outliers;
  emxArray_real_T *r2;
  emxArray_real_T *seq;
  creal_T dc;
  double expl_temp_data[10];
  double a;
  double fp_500_n;
  double fp_alpha_n;
  double ncomb;
  double nselected;
  double rmin;
  double s0;
  double singsub;
  double tsampling;
  int b_expl_temp_size[2];
  int critdef_size[2];
  int expl_temp_size[2];
  int aoffset;
  int b_i;
  int c_i;
  int i;
  int inner;
  int k;
  int lmsopt;
  int loop_ub;
  char b_expl_temp_data[3];
  char critdef_data[3];
  bool b_b;
  bool bonflevout;
  bool guard1 = false;
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
  emxInit_real_T(&b_y, 2);
  if (X->size[0] < 1) {
    b_y->size[0] = 1;
    b_y->size[1] = 0;
  } else {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = X->size[0];
    emxEnsureCapacity_real_T(b_y, i);
    aoffset = X->size[0] - 1;
    for (i = 0; i <= aoffset; i++) {
      b_y->data[i] = (double)i + 1.0;
    }
  }
  emxInit_real_T(&seq, 1);
  i = seq->size[0];
  seq->size[0] = b_y->size[1];
  emxEnsureCapacity_real_T(seq, i);
  aoffset = b_y->size[1];
  for (i = 0; i < aoffset; i++) {
    seq->data[i] = b_y->data[i];
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
  aoffset = X->size[1];
  for (i = 0; i < aoffset; i++) {
    out->beta->data[i] = -99.0;
  }
  /*  Write in structure 'options' the options chosen by the user */
  fp_500_n = varargin_6;
  /*  And check if the optional user parameters are reasonable. */
  /*  Check h and bdp */
  /*  The user has only specified h: no need to specify bdp. */
  if (varargin_4 < (double)X->size[1] + 1.0) {
    int2str((double)X->size[1] + 1.0, b_X.data, b_X.size);
  }
  /*  the user has only specified bdp: h is defined accordingly */
  /*  Check number of subsamples to extract */
  if (varargin_6 > ncomb) {
    fp_500_n = 0.0;
  }
  /*  Default values for the optional */
  /*  parameters are set inside structure 'options' */
  /*  Number of data points on which estimates are based */
  /*  Number of subsets to extract */
  /*  if options.lms==1 then LMS, else LTS */
  if (varargin_2 == 2.0) {
    /*  lms=struct; */
    /*  ij is a scalar used to ensure that the best first bestr non singular */
    /*  subsets are stored */
    /*  lmsopt is associated with the message about total computing time */
    lmsopt = 2;
  } else {
    /*  lmsopt is associated with the message about total computing time */
    lmsopt = (varargin_2 == 1.0);
  }
  emxInit_real_T(&C, 2);
  /*  Scalar which controls the messages displayed on the screen */
  /*  if options.nomes==true no message about estimated time to compute LMS is
   * displayed */
  /*  Extract in the rows of matrix C the indexes of all required subsets */
  subsets(fp_500_n, X->size[0], X->size[1], ncomb, C, &nselected);
  /*  Store the indices in varargout */
  /*  rmin will contain the minimum value of LMS (LTS) */
  rmin = rtInf;
  /*  initialise and start timer. */
  tsampling = ceil(fmin(nselected / 100.0, 1000.0));
  /*  bonflevoutX option to search for outliers in the X space */
  emxInit_real_T(&outliers, 1);
  emxInit_real_T(&Xb, 2);
  if ((varargin_12_size[0] != 0) && (varargin_12_size[1] != 0)) {
    bonflevout = true;
    if (X->size[1] > 1) {
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
    emxInit_real_T(&c_X, 2);
    i = c_X->size[0] * c_X->size[1];
    c_X->size[0] = X->size[0];
    c_X->size[1] = X->size[1];
    emxEnsureCapacity_real_T(c_X, i);
    aoffset = X->size[0] * X->size[1] - 1;
    for (i = 0; i <= aoffset; i++) {
      c_X->data[i] = X->data[i];
    }
    emxInit_real_T(&outFSM_outliers, 2);
    emxInit_real_T(&expl_temp, 2);
    emxInit_real_T(&b_expl_temp, 2);
    emxInit_real_T(&c_expl_temp, 2);
    emxInit_real_T(&d_expl_temp, 2);
    FSM(c_X, varargin_12_data, varargin_12_size,
        floor((double)X->size[0] * 0.6), critdef_data, critdef_size,
        (double)X->size[1] + 1.0, outFSM_outliers, expl_temp, Xb, b_expl_temp,
        c_expl_temp, d_expl_temp, expl_temp_data, expl_temp_size,
        b_expl_temp_data, b_expl_temp_size);
    i = outliers->size[0];
    outliers->size[0] = outFSM_outliers->size[0] * outFSM_outliers->size[1];
    emxEnsureCapacity_real_T(outliers, i);
    aoffset = outFSM_outliers->size[0] * outFSM_outliers->size[1];
    emxFree_real_T(&c_X);
    emxFree_real_T(&d_expl_temp);
    emxFree_real_T(&c_expl_temp);
    emxFree_real_T(&b_expl_temp);
    emxFree_real_T(&expl_temp);
    for (i = 0; i < aoffset; i++) {
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
  tic(&ncomb, &fp_500_n);
  i = out->bs->size[0] * out->bs->size[1];
  out->bs->size[0] = 1;
  out->bs->size[1] = X->size[1];
  emxEnsureCapacity_real_T(out->bs, i);
  aoffset = X->size[1];
  for (i = 0; i < aoffset; i++) {
    out->bs->data[i] = 0.0;
  }
  i = (int)nselected;
  emxInit_real_T(&b, 1);
  emxInit_real_T(&r2, 1);
  emxInit_int32_T(&ia, 1);
  emxInit_int32_T(&ib, 1);
  for (b_i = 0; b_i < i; b_i++) {
    if (b_i + 1U <= (unsigned int)tsampling) {
      tic(&ncomb, &fp_500_n);
    }
    /*  extract a subset of size p */
    guard1 = false;
    if (bonflevout) {
      aoffset = C->size[1];
      c_i = b_y->size[0] * b_y->size[1];
      b_y->size[0] = 1;
      b_y->size[1] = C->size[1];
      emxEnsureCapacity_real_T(b_y, c_i);
      for (c_i = 0; c_i < aoffset; c_i++) {
        b_y->data[c_i] = C->data[b_i + C->size[0] * c_i];
      }
      c_do_vectors(b_y, outliers, b, ia, ib);
      if (b->size[0] != 0) {
        c_i = b->size[0];
        b->size[0] = 1;
        emxEnsureCapacity_real_T(b, c_i);
        b->data[0] = rtNaN;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
    if (guard1) {
      aoffset = C->size[1];
      loop_ub = X->size[1];
      c_i = Xb->size[0] * Xb->size[1];
      Xb->size[0] = C->size[1];
      Xb->size[1] = X->size[1];
      emxEnsureCapacity_real_T(Xb, c_i);
      for (c_i = 0; c_i < loop_ub; c_i++) {
        for (inner = 0; inner < aoffset; inner++) {
          Xb->data[inner + Xb->size[0] * c_i] =
              X->data[((int)C->data[b_i + C->size[0] * inner] +
                       X->size[0] * c_i) -
                      1];
        }
      }
      /*  if rank(Xb)==p Warning: this instruction has been replaced by a */
      /*  posteriori control on vector b */
      /*  Compute the vector of coefficients using matrice Xb and yb */
      aoffset = C->size[1];
      c_i = b->size[0];
      b->size[0] = C->size[1];
      emxEnsureCapacity_real_T(b, c_i);
      for (c_i = 0; c_i < aoffset; c_i++) {
        b->data[c_i] = y->data[(int)C->data[b_i + C->size[0] * c_i] - 1];
      }
      mldivide(Xb, b);
    }
    if ((!rtIsNaN(b->data[0])) && (!rtIsInf(b->data[0]))) {
      /*  Residuals for all observations using b based on subset */
      /*  Squared residuals for all the observations */
      /*  Ordering of squared residuals */
      loop_ub = X->size[0] - 1;
      inner = X->size[1];
      c_i = out->residuals->size[0];
      out->residuals->size[0] = X->size[0];
      emxEnsureCapacity_real_T(out->residuals, c_i);
      for (c_i = 0; c_i <= loop_ub; c_i++) {
        out->residuals->data[c_i] = 0.0;
      }
      for (k = 0; k < inner; k++) {
        aoffset = k * X->size[0];
        for (c_i = 0; c_i <= loop_ub; c_i++) {
          out->residuals->data[c_i] += X->data[aoffset + c_i] * b->data[k];
        }
      }
      aoffset = y->size[0];
      c_i = out->residuals->size[0];
      out->residuals->size[0] = y->size[0];
      emxEnsureCapacity_real_T(out->residuals, c_i);
      for (c_i = 0; c_i < aoffset; c_i++) {
        out->residuals->data[c_i] = y->data[c_i] - out->residuals->data[c_i];
      }
      c_i = r2->size[0];
      r2->size[0] = out->residuals->size[0];
      emxEnsureCapacity_real_T(r2, c_i);
      aoffset = out->residuals->size[0];
      for (k = 0; k < aoffset; k++) {
        r2->data[k] = out->residuals->data[k] * out->residuals->data[k];
      }
      c_sort(r2);
      if (varargin_2 == 1.0) {
        /*  LMS */
        ncomb = r2->data[(int)varargin_4 - 1];
      } else {
        /*  STANDARD LTS without concentration steps */
        c_i = r2->size[0];
        r2->size[0] = (int)varargin_4;
        emxEnsureCapacity_real_T(r2, c_i);
        ncomb = blockedSummation(r2, (int)varargin_4);
      }
      if (ncomb < rmin) {
        /*  rmin = smallest ordered quantile or smallest truncated sum. */
        rmin = ncomb;
        /*  brob = \beta_lms or \beta_lts */
        c_i = out->beta->size[0];
        out->beta->size[0] = b->size[0];
        emxEnsureCapacity_real_T(out->beta, c_i);
        aoffset = b->size[0];
        for (c_i = 0; c_i < aoffset; c_i++) {
          out->beta->data[c_i] = b->data[c_i];
        }
        /*  bs = units forming best subset according to lms or lts */
        aoffset = C->size[1];
        c_i = out->bs->size[0] * out->bs->size[1];
        out->bs->size[0] = 1;
        out->bs->size[1] = C->size[1];
        emxEnsureCapacity_real_T(out->bs, c_i);
        for (c_i = 0; c_i < aoffset; c_i++) {
          out->bs->data[c_i] = C->data[b_i + C->size[0] * c_i];
        }
      }
    } else {
      singsub++;
    }
  }
  emxFree_int32_T(&ib);
  emxFree_real_T(&b_y);
  emxFree_real_T(&C);
  emxFree_real_T(&r2);
  emxFree_real_T(&Xb);
  emxFree_real_T(&outliers);
  if (varargin_2 == 1.0) {
    /*  Estimate of scale based on h-quantile of all squared residuals */
    ncomb = sqrt(rmin);
  } else {
    /*  Estimate of scale based on the first h squared smallest residuals */
    ncomb = sqrt(rmin / varargin_4);
  }
  /*  residuals = Raw residuals using robust estimate of beta */
  loop_ub = X->size[0] - 1;
  inner = X->size[1];
  i = out->residuals->size[0];
  out->residuals->size[0] = X->size[0];
  emxEnsureCapacity_real_T(out->residuals, i);
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    out->residuals->data[b_i] = 0.0;
  }
  for (k = 0; k < inner; k++) {
    aoffset = k * X->size[0];
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      out->residuals->data[b_i] += X->data[aoffset + b_i] * out->beta->data[k];
    }
  }
  i = out->residuals->size[0];
  out->residuals->size[0] = y->size[0];
  emxEnsureCapacity_real_T(out->residuals, i);
  aoffset = y->size[0];
  for (i = 0; i < aoffset; i++) {
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
    fp_500_n = 0.5 * (varargin_4 / (double)X->size[0] + 1.0);
    if ((fp_500_n >= 0.0) && (fp_500_n <= 1.0)) {
      a = -1.4142135623730951 * erfcinv(2.0 * fp_500_n);
    } else {
      a = rtNaN;
    }
    /* factor=1/sqrt(1-(2*a.*normpdf(a))./(2*normcdf(a)-1)); */
    /*  Note that factor=sqrt(factor1) */
    /*      v=1; */
    /*      a=chi2inv(h/n,1); */
    /*      factor1=(h/n)/(chi2cdf(a,1+2)); */
    /*  Apply the asymptotic consistency factor to the preliminary scale
     * estimate */
    s0 = ncomb *
         (1.0 / sqrt(1.0 - 2.0 * ((double)X->size[0] / varargin_4) * a *
                               (exp(-0.5 * a * a) / 2.5066282746310002)));
    /*  Apply small sample correction factor of Pison et al. */
    if (varargin_4 < X->size[0]) {
      ncomb = varargin_4 / (double)X->size[0];
      /*  corfactorRAW function */
      fp_500_n =
          1.0 - 1.2995580068132053 / rt_powd_snf(X->size[0], 0.604756680630497);
      rmin =
          1.0 - 0.70357229237653807 / rt_powd_snf(X->size[0], 1.01646567502486);
      if ((0.5 <= ncomb) && (ncomb <= 0.875)) {
        fp_alpha_n = fp_500_n + (rmin - fp_500_n) / 0.375 * (ncomb - 0.5);
      } else if ((0.875 < ncomb) && (ncomb < 1.0)) {
        fp_alpha_n = rmin + (1.0 - rmin) / 0.125 * (ncomb - 0.875);
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
    sort(b, ia);
    i = b->size[0];
    b->size[0] = ia->size[0];
    emxEnsureCapacity_real_T(b, i);
    aoffset = ia->size[0];
    for (i = 0; i < aoffset; i++) {
      b->data[i] = ia->data[i];
    }
    i = out->weights->size[0];
    out->weights->size[0] = X->size[0];
    emxEnsureCapacity_boolean_T(out->weights, i);
    aoffset = X->size[0];
    for (i = 0; i < aoffset; i++) {
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
    aoffset = r->size[1];
    for (i = 0; i < aoffset; i++) {
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
    tsampling = varargin_4 / (double)X->size[0];
    if (tsampling <= 1.0) {
      if (tsampling < 1.0) {
        fp_alpha_n = (gammaincinv(tsampling, 0.5)).re * 2.0;
      } else {
        fp_alpha_n = rtInf;
      }
    } else {
      fp_alpha_n = rtNaN;
    }
    fp_500_n = fp_alpha_n / 2.0;
    ncomb = fp_500_n;
    b_b = rtIsNaN(fp_500_n);
    if (!b_b) {
      if (fp_500_n < 0.0) {
        ncomb = 0.0;
      }
      rmin = (gammainc(ncomb, 1.5)).re;
    } else {
      rmin = rtNaN;
    }
    a = 1.0 / rmin;
    if (!b_b) {
      if (fp_500_n < 0.0) {
        fp_500_n = 0.0;
      }
      fp_500_n = (gammainc(fp_500_n, 2.5)).re;
    } else {
      fp_500_n = rtNaN;
    }
    ncomb = fp_alpha_n * tsampling - rmin;
    /*  Confidence level which is used for outlier detection */
    ncomb = 2.0 * (double)X->size[0] /
            (a * a *
             (((3.0 * fp_500_n - 2.0 * fp_alpha_n * rmin) +
               tsampling * (fp_alpha_n * fp_alpha_n)) -
              ncomb * ncomb));
    if (ncomb > 0.0) {
      if (ncomb == 1.0) {
        fp_500_n = 25.451699579357186;
      } else if (ncomb < 1000.0) {
        dc = betaincinv(0.97500000000000009, ncomb / 2.0, 0.5);
        fp_500_n = sqrt(ncomb * ((1.0 - dc.re) / dc.re));
      } else {
        fp_500_n = -1.4142135623730951 * erfcinv(1.975);
        if (ncomb < 6.6457388829771584E+75) {
          rmin = rt_powd_snf(fp_500_n, 3.0);
          tsampling = rt_powd_snf(fp_500_n, 5.0);
          fp_alpha_n = rt_powd_snf(fp_500_n, 7.0);
          fp_500_n =
              (((fp_500_n + (rmin + fp_500_n) / (4.0 * ncomb)) +
                ((5.0 * tsampling + 16.0 * rmin) + 3.0 * fp_500_n) /
                    (96.0 * (ncomb * ncomb))) +
               (((3.0 * fp_alpha_n + 19.0 * tsampling) + 17.0 * rmin) -
                15.0 * fp_500_n) /
                   (384.0 * rt_powd_snf(ncomb, 3.0))) +
              ((((79.0 * rt_powd_snf(fp_500_n, 9.0) + 776.0 * fp_alpha_n) +
                 1482.0 * tsampling) -
                1920.0 * rmin) -
               945.0 * fp_500_n) /
                  (92160.0 * rt_powd_snf(ncomb, 4.0));
        }
      }
    } else {
      fp_500_n = rtNaN;
    }
    /*  Observations with a standardized residual smaller than the quantile */
    /*  threshold have a weight equal to 1, else the weight is equal to 0. */
    /*  REMARK: using this threshold, even if the sample is homogeneous, */
    /*  you are willing to declare at least 2.5% units as outliers. */
    /*  Remark: sqrt(chi2inv(0.975,1)) = tinv(0.9875,\infinity) = quantile */
    aoffset = out->residuals->size[0];
    for (i = 0; i < aoffset; i++) {
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
    aoffset = b->size[0];
    for (i = 0; i < aoffset; i++) {
      weights->data[i] = (b->data[i] <= fp_500_n);
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
    aoffset = b->size[0];
    for (i = 0; i < aoffset; i++) {
      weights->data[i] = (b->data[i] <= 1.0E-7);
    }
    /*  Store the weights */
    i = out->weights->size[0];
    out->weights->size[0] = weights->size[0];
    emxEnsureCapacity_boolean_T(out->weights, i);
    aoffset = weights->size[0];
    for (i = 0; i < aoffset; i++) {
      out->weights->data[i] = weights->data[i];
    }
    out->rew = false;
    /*  s is set to 0 */
    s0 = 0.0;
    /*  Standardized residuals are artificially set equal to raw residuals. */
  }
  emxFree_int32_T(&ia);
  emxFree_real_T(&b);
  /*  Store quantities in the out structure */
  /*  Store robust estimate of beta coefficients */
  /*  Store robust estimate of s */
  out->scale = s0;
  /*  Store standardized residuals */
  /*  Store units forming initial subset */
  /*  Store list of units declared as outliers */
  loop_ub = weights->size[0] - 1;
  aoffset = 0;
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    if (!weights->data[b_i]) {
      aoffset++;
    }
  }
  emxInit_int32_T(&r1, 1);
  i = r1->size[0];
  r1->size[0] = aoffset;
  emxEnsureCapacity_int32_T(r1, i);
  aoffset = 0;
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    if (!weights->data[b_i]) {
      r1->data[aoffset] = b_i + 1;
      aoffset++;
    }
  }
  emxFree_boolean_T(&weights);
  i = out->outliers->size[0];
  out->outliers->size[0] = r1->size[0];
  emxEnsureCapacity_real_T(out->outliers, i);
  aoffset = r1->size[0];
  for (i = 0; i < aoffset; i++) {
    out->outliers->data[i] = seq->data[r1->data[i] - 1];
  }
  emxFree_int32_T(&r1);
  emxFree_real_T(&seq);
  /*  Store confidence level which is used to draw the horizontal lines in the
   */
  /*  plot */
  out->conflev = 0.975;
  /*  Store the number of observations that have determined the LTS (LMS) */
  /*  estimator, i.e. the value of h. */
  out->h = varargin_4;
  /*  Store number of singular subsets */
  out->singsub = singsub;
  if (varargin_10 && (singsub / nselected > 0.1)) {
    ncomb = 100.0 * singsub / nselected;
    if (bonflevout) {
      printf("Warning: Number of subsets without full rank or excluded because "
             "containing remote units in the X space equal to %.1f %%",
             ncomb);
      fflush(stdout);
    } else {
      printf("Warning: Number of subsets without full rank equal to %.1f%%",
             ncomb);
      fflush(stdout);
    }
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
