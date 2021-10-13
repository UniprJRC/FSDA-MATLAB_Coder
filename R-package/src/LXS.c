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
#include <R.h>

#include "LXS.h"
#include "FSM.h"
#include "bc.h"
#include "blockedSummation.h"
#include "eml_setop.h"
#include "erfcinv.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_internal_types.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "gammainc.h"
#include "gammaincinv.h"
#include "gammaln.h"
#include "int2str.h"
#include "median.h"
#include "mldivide.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "subsets.h"
#include "tic.h"
#include "tinv.h"
#include "toc.h"
#include "unibiv.h"
#include "unsafeSxfun.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <stdio.h>
#include <string.h>

/* Function Definitions */
void LXS(const emxArray_real_T *y, const emxArray_real_T *X, double varargin_2,
         double varargin_4, double varargin_6, bool varargin_10,
         const double varargin_12_data[], const int varargin_12_size[2],
         struct_LXS_T *out)
{
  emxArray_boolean_T *weights;
  emxArray_char_T_1x310 b_X;
  emxArray_int32_T *ia;
  emxArray_int32_T *ib;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_real_T *C;
  emxArray_real_T *Xb;
  emxArray_real_T *b_C;
  emxArray_real_T *b_expl_temp;
  emxArray_real_T *c_X;
  emxArray_real_T *c_expl_temp;
  emxArray_real_T *d_expl_temp;
  emxArray_real_T *e_expl_temp;
  emxArray_real_T *expl_temp;
  emxArray_real_T *outFSM_outliers;
  emxArray_real_T *outliers;
  emxArray_real_T *r2;
  emxArray_real_T *seq;
  const double *X_data;
  const double *y_data;
  double ncomb;
  double nselected;
  double rmin;
  double sh0;
  double singsub;
  double tsampling;
  double *C_data;
  double *outFSM_outliers_data;
  double *outliers_data;
  double *seq_data;
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
  int *ia_data;
  char critdef_data[3];
  char expl_temp_data[3];
  bool bonflevout;
  bool guard1 = false;
  bool *weights_data;
  X_data = X->data;
  y_data = y->data;
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
  emxInit_real_T(&seq, 2);
  seq_data = seq->data;
  if (X->size[0] < 1) {
    seq->size[0] = 1;
    seq->size[1] = 0;
  } else {
    i = seq->size[0] * seq->size[1];
    seq->size[0] = 1;
    seq->size[1] = X->size[0];
    emxEnsureCapacity_real_T(seq, i);
    seq_data = seq->data;
    aoffset = X->size[0] - 1;
    for (i = 0; i <= aoffset; i++) {
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
  sh0 = varargin_6;
  /*  And check if the optional user parameters are reasonable. */
  /*  Check h and bdp */
  /*  The user has only specified h: no need to specify bdp. */
  if (varargin_4 < (double)X->size[1] + 1.0) {
    int2str((double)X->size[1] + 1.0, b_X.data, b_X.size);
  }
  /*  the user has only specified bdp: h is defined accordingly */
  /*  Check number of subsamples to extract */
  if (varargin_6 > ncomb) {
    sh0 = 0.0;
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
  subsets(sh0, X->size[0], X->size[1], ncomb, C, &nselected);
  C_data = C->data;
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
    outliers_data = c_X->data;
    aoffset = X->size[0] * X->size[1] - 1;
    for (i = 0; i <= aoffset; i++) {
      outliers_data[i] = X_data[i];
    }
    emxInit_real_T(&outFSM_outliers, 2);
    emxInit_real_T(&expl_temp, 2);
    emxInit_real_T(&b_expl_temp, 2);
    emxInit_real_T(&c_expl_temp, 2);
    emxInit_real_T(&d_expl_temp, 2);
    emxInit_real_T(&e_expl_temp, 2);
    FSM(c_X, varargin_12_data, varargin_12_size,
        floor((double)X->size[0] * 0.6), critdef_data, critdef_size,
        (double)X->size[1] + 1.0, outFSM_outliers, expl_temp, Xb, b_expl_temp,
        c_expl_temp, d_expl_temp, e_expl_temp, expl_temp_data, expl_temp_size);
    outFSM_outliers_data = outFSM_outliers->data;
    i = outliers->size[0];
    outliers->size[0] = outFSM_outliers->size[0] * outFSM_outliers->size[1];
    emxEnsureCapacity_real_T(outliers, i);
    outliers_data = outliers->data;
    aoffset = outFSM_outliers->size[0] * outFSM_outliers->size[1];
    emxFree_real_T(&c_X);
    emxFree_real_T(&e_expl_temp);
    emxFree_real_T(&d_expl_temp);
    emxFree_real_T(&c_expl_temp);
    emxFree_real_T(&b_expl_temp);
    emxFree_real_T(&expl_temp);
    for (i = 0; i < aoffset; i++) {
      outliers_data[i] = outFSM_outliers_data[i];
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
  tic(&ncomb, &sh0);
  i = out->bs->size[0] * out->bs->size[1];
  out->bs->size[0] = 1;
  out->bs->size[1] = X->size[1];
  emxEnsureCapacity_real_T(out->bs, i);
  aoffset = X->size[1];
  for (i = 0; i < aoffset; i++) {
    out->bs->data[i] = 0.0;
  }
  i = (int)nselected;
  emxInit_real_T(&r2, 1);
  emxInit_int32_T(&ia, 1);
  emxInit_int32_T(&ib, 1);
  emxInit_real_T(&b_C, 2);
  for (b_i = 0; b_i < i; b_i++) {
    if (b_i + 1U <= (unsigned int)tsampling) {
      tic(&ncomb, &sh0);
    }
    /*  extract a subset of size p */
    guard1 = false;
    if (bonflevout) {
      aoffset = C->size[1];
      c_i = b_C->size[0] * b_C->size[1];
      b_C->size[0] = 1;
      b_C->size[1] = C->size[1];
      emxEnsureCapacity_real_T(b_C, c_i);
      outliers_data = b_C->data;
      for (c_i = 0; c_i < aoffset; c_i++) {
        outliers_data[c_i] = C_data[b_i + C->size[0] * c_i];
      }
      c_do_vectors(b_C, outliers, r2, ia, ib);
      if (r2->size[0] != 0) {
        c_i = out->residuals->size[0];
        out->residuals->size[0] = 1;
        emxEnsureCapacity_real_T(out->residuals, c_i);
        out->residuals->data[0] = rtNaN;
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
      outliers_data = Xb->data;
      for (c_i = 0; c_i < loop_ub; c_i++) {
        for (inner = 0; inner < aoffset; inner++) {
          outliers_data[inner + Xb->size[0] * c_i] = X_data
              [((int)C_data[b_i + C->size[0] * inner] + X->size[0] * c_i) - 1];
        }
      }
      /*  if rank(Xb)==p Warning: this instruction has been replaced by a */
      /*  posteriori control on vector b */
      /*  Compute the vector of coefficients using matrice Xb and yb */
      aoffset = C->size[1];
      c_i = r2->size[0];
      r2->size[0] = C->size[1];
      emxEnsureCapacity_real_T(r2, c_i);
      outliers_data = r2->data;
      for (c_i = 0; c_i < aoffset; c_i++) {
        outliers_data[c_i] = y_data[(int)C_data[b_i + C->size[0] * c_i] - 1];
      }
      mldivide(Xb, r2, out->residuals);
    }
    if ((!rtIsNaN(out->residuals->data[0])) &&
        (!rtIsInf(out->residuals->data[0]))) {
      /*  Residuals for all observations using b based on subset */
      /*  Squared residuals for all the observations */
      /*  Ordering of squared residuals */
      loop_ub = X->size[0] - 1;
      inner = X->size[1];
      c_i = r2->size[0];
      r2->size[0] = X->size[0];
      emxEnsureCapacity_real_T(r2, c_i);
      outliers_data = r2->data;
      for (c_i = 0; c_i <= loop_ub; c_i++) {
        outliers_data[c_i] = 0.0;
      }
      for (k = 0; k < inner; k++) {
        aoffset = k * X->size[0];
        for (c_i = 0; c_i <= loop_ub; c_i++) {
          outliers_data[c_i] += X_data[aoffset + c_i] * out->residuals->data[k];
        }
      }
      aoffset = y->size[0];
      if (y->size[0] == r2->size[0]) {
        c_i = r2->size[0];
        r2->size[0] = y->size[0];
        emxEnsureCapacity_real_T(r2, c_i);
        outliers_data = r2->data;
        for (c_i = 0; c_i < aoffset; c_i++) {
          ncomb = y_data[c_i] - outliers_data[c_i];
          outliers_data[c_i] = ncomb * ncomb;
        }
      } else {
        jb_binary_expand_op(r2, y);
      }
      c_sort(r2);
      outliers_data = r2->data;
      if (varargin_2 == 1.0) {
        /*  LMS */
        ncomb = outliers_data[(int)varargin_4 - 1];
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
        out->beta->size[0] = out->residuals->size[0];
        emxEnsureCapacity_real_T(out->beta, c_i);
        aoffset = out->residuals->size[0];
        for (c_i = 0; c_i < aoffset; c_i++) {
          out->beta->data[c_i] = out->residuals->data[c_i];
        }
        /*  bs = units forming best subset according to lms or lts */
        aoffset = C->size[1];
        c_i = out->bs->size[0] * out->bs->size[1];
        out->bs->size[0] = 1;
        out->bs->size[1] = C->size[1];
        emxEnsureCapacity_real_T(out->bs, c_i);
        for (c_i = 0; c_i < aoffset; c_i++) {
          out->bs->data[c_i] = C_data[b_i + C->size[0] * c_i];
        }
      }
    } else {
      singsub++;
    }
  }
  emxFree_real_T(&b_C);
  emxFree_int32_T(&ib);
  emxFree_real_T(&C);
  emxFree_real_T(&Xb);
  emxFree_real_T(&outliers);
  if (varargin_2 == 1.0) {
    /*  Estimate of scale based on h-quantile of all squared residuals */
    sh0 = sqrt(rmin);
  } else {
    /*  Estimate of scale based on the first h squared smallest residuals */
    sh0 = sqrt(rmin / varargin_4);
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
      out->residuals->data[b_i] += X_data[aoffset + b_i] * out->beta->data[k];
    }
  }
  if (y->size[0] == out->residuals->size[0]) {
    i = out->residuals->size[0];
    out->residuals->size[0] = y->size[0];
    emxEnsureCapacity_real_T(out->residuals, i);
    aoffset = y->size[0];
    for (i = 0; i < aoffset; i++) {
      out->residuals->data[i] = y_data[i] - out->residuals->data[i];
    }
  } else {
    kb_binary_expand_op(out, y);
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
    sh0 *= 1.4826 * (5.0 / (double)(X->size[0] - X->size[1]) + 1.0);
  } else {
    /*  Consistency factor based on the variance of the truncated normal
     * distribution. */
    /*  1-h/n=trimming percentage */
    /*  Compute variance of the truncated normal distribution. */
    ncomb = 0.5 * (varargin_4 / (double)X->size[0] + 1.0);
    if ((ncomb >= 0.0) && (ncomb <= 1.0)) {
      ncomb = -1.4142135623730951 * erfcinv(2.0 * ncomb);
    } else {
      ncomb = rtNaN;
    }
    /* factor=1/sqrt(1-(2*a.*normpdf(a))./(2*normcdf(a)-1)); */
    /*  Note that factor=sqrt(factor1) */
    /*      v=1; */
    /*      a=chi2inv(h/n,1); */
    /*      factor1=(h/n)/(chi2cdf(a,1+2)); */
    /*  Apply the asymptotic consistency factor to the preliminary scale
     * estimate */
    sh0 *=
        1.0 / sqrt(1.0 - 2.0 * ((double)X->size[0] / varargin_4) * ncomb *
                             (exp(-0.5 * ncomb * ncomb) / 2.5066282746310002));
    /*  Apply small sample correction factor of Pison et al. */
    if (varargin_4 < X->size[0]) {
      sh0 *= sqrt(b_corfactorRAW(X->size[0], varargin_4 / (double)X->size[0]));
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
  if (fabs(sh0) > 1.0E-7) {
    /*  Assign weight=1 to the h units which show the smallest h squared */
    /*  residuals */
    i = r2->size[0];
    r2->size[0] = out->residuals->size[0];
    emxEnsureCapacity_real_T(r2, i);
    outliers_data = r2->data;
    aoffset = out->residuals->size[0];
    for (i = 0; i < aoffset; i++) {
      ncomb = out->residuals->data[i];
      outliers_data[i] = ncomb * ncomb;
    }
    sort(r2, ia);
    ia_data = ia->data;
    i = r2->size[0];
    r2->size[0] = ia->size[0];
    emxEnsureCapacity_real_T(r2, i);
    outliers_data = r2->data;
    aoffset = ia->size[0];
    for (i = 0; i < aoffset; i++) {
      outliers_data[i] = ia_data[i];
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
    ia_data = r->data;
    for (i = 0; i < aoffset; i++) {
      ia_data[i] = (int)outliers_data[i];
    }
    aoffset = r->size[1];
    for (i = 0; i < aoffset; i++) {
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
    ncomb =
        tinv(0.9875, 2.0 * (double)X->size[0] / asvar(varargin_4, X->size[0]));
    /*  Observations with a standardized residual smaller than the quantile */
    /*  threshold have a weight equal to 1, else the weight is equal to 0. */
    /*  REMARK: using this threshold, even if the sample is homogeneous, */
    /*  you are willing to declare at least 2.5% units as outliers. */
    /*  Remark: sqrt(chi2inv(0.975,1)) = tinv(0.9875,\infinity) = quantile */
    aoffset = out->residuals->size[0];
    for (i = 0; i < aoffset; i++) {
      out->residuals->data[i] /= sh0;
    }
    aoffset = out->residuals->size[0];
    i = r2->size[0];
    r2->size[0] = out->residuals->size[0];
    emxEnsureCapacity_real_T(r2, i);
    outliers_data = r2->data;
    for (k = 0; k < aoffset; k++) {
      outliers_data[k] = fabs(out->residuals->data[k]);
    }
    i = weights->size[0];
    weights->size[0] = r2->size[0];
    emxEnsureCapacity_boolean_T(weights, i);
    weights_data = weights->data;
    aoffset = r2->size[0];
    for (i = 0; i < aoffset; i++) {
      weights_data[i] = (outliers_data[i] <= ncomb);
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
    i = r2->size[0];
    r2->size[0] = out->residuals->size[0];
    emxEnsureCapacity_real_T(r2, i);
    outliers_data = r2->data;
    for (k = 0; k < aoffset; k++) {
      outliers_data[k] = fabs(out->residuals->data[k]);
    }
    i = weights->size[0];
    weights->size[0] = r2->size[0];
    emxEnsureCapacity_boolean_T(weights, i);
    weights_data = weights->data;
    aoffset = r2->size[0];
    for (i = 0; i < aoffset; i++) {
      weights_data[i] = (outliers_data[i] <= 1.0E-7);
    }
    /*  Store the weights */
    i = out->weights->size[0];
    out->weights->size[0] = weights->size[0];
    emxEnsureCapacity_boolean_T(out->weights, i);
    aoffset = weights->size[0];
    for (i = 0; i < aoffset; i++) {
      out->weights->data[i] = weights_data[i];
    }
    out->rew = false;
    /*  s is set to 0 */
    sh0 = 0.0;
    /*  Standardized residuals are artificially set equal to raw residuals. */
  }
  emxFree_int32_T(&ia);
  emxFree_real_T(&r2);
  /*  Store quantities in the out structure */
  /*  Store robust estimate of beta coefficients */
  /*  Store robust estimate of s */
  out->scale = sh0;
  /*  Store standardized residuals */
  /*  Store units forming initial subset */
  /*  Store list of units declared as outliers */
  loop_ub = weights->size[0] - 1;
  aoffset = 0;
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    if (!weights_data[b_i]) {
      aoffset++;
    }
  }
  emxInit_int32_T(&r1, 1);
  i = r1->size[0];
  r1->size[0] = aoffset;
  emxEnsureCapacity_int32_T(r1, i);
  ia_data = r1->data;
  aoffset = 0;
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    if (!weights_data[b_i]) {
      ia_data[aoffset] = b_i + 1;
      aoffset++;
    }
  }
  emxFree_boolean_T(&weights);
  i = out->outliers->size[0] * out->outliers->size[1];
  out->outliers->size[0] = 1;
  out->outliers->size[1] = r1->size[0];
  emxEnsureCapacity_real_T(out->outliers, i);
  aoffset = r1->size[0];
  for (i = 0; i < aoffset; i++) {
    out->outliers->data[i] = seq_data[ia_data[i] - 1];
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
  out->X->size[0] = 0;
  out->X->size[1] = 0;
  out->y->size[0] = 0;
  out->y->size[1] = 0;
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

double asvar(double h, double n)
{
  double a;
  double b_xk;
  double c2;
  double d;
  double hn;
  double qalfa;
  double xk;
  bool b;
  /*  The part below contains subfunctions which are used only inside this file
   */
  /* asvar computes the new degrees of freedom for the Student T */
  hn = h / n;
  if ((hn >= 0.0) && (hn <= 1.0)) {
    if ((hn > 0.0) && (hn < 1.0)) {
      d = 0.5;
      gammaln(&d);
      b_xk = 1.5;
      gammaln(&b_xk);
      qalfa = eml_gammaincinv(hn, 0.5, -0.69314718055994529, d, b_xk) * 2.0;
    } else if (hn == 0.0) {
      qalfa = 0.0;
    } else {
      qalfa = rtInf;
    }
  } else {
    qalfa = rtNaN;
  }
  xk = qalfa / 2.0;
  b_xk = xk;
  b = rtIsNaN(xk);
  if (!b) {
    if (xk < 0.0) {
      b_xk = 0.0;
    }
    d = 2.5;
    gammaln(&d);
    c2 = (scalar_gammainc(b_xk, 1.5, 0.40546510810816438, d)).re;
  } else {
    c2 = rtNaN;
  }
  a = 1.0 / c2;
  if (!b) {
    if (xk < 0.0) {
      xk = 0.0;
    }
    d = 3.5;
    gammaln(&d);
    b_xk = (scalar_gammainc(xk, 2.5, 0.91629073187415511, d)).re;
  } else {
    b_xk = rtNaN;
  }
  xk = qalfa * hn - c2;
  return a * a *
         (((3.0 * b_xk - 2.0 * qalfa * c2) + hn * (qalfa * qalfa)) - xk * xk);
}

void b_IRWLSreg(const emxArray_real_T *y, const emxArray_real_T *X,
                const emxArray_real_T *initialbeta, double refsteps,
                double reftol, double h, emxArray_real_T *outIRWLS_betarw,
                double *outIRWLS_numscale2rw, emxArray_real_T *outIRWLS_weights)
{
  emxArray_boolean_T *x;
  emxArray_int32_T *i_r2s;
  emxArray_int32_T *r;
  emxArray_real_T *b_X;
  emxArray_real_T *b_y;
  emxArray_real_T *beta;
  emxArray_real_T *r2;
  const double *X_data;
  const double *initialbeta_data;
  const double *y_data;
  double betadiff;
  double initialscale;
  double iter;
  double varargin_1;
  double *beta_data;
  double *outIRWLS_betarw_data;
  double *r2_data;
  int aoffset;
  int i;
  int inner;
  int k;
  int loop_ub_tmp_tmp;
  int mc;
  int *i_r2s_data;
  int *r1;
  bool c_y;
  bool exitg1;
  bool exitg2;
  bool *x_data;
  initialbeta_data = initialbeta->data;
  X_data = X->data;
  y_data = y->data;
  emxInit_real_T(&r2, 1);
  /*  ------------------------------------------------------------------- */
  /*  subfunction IRWLSreg */
  /*  ------------------------------------------------------------------- */
  /* IRWLSreg (iterative reweighted least squares) does refsteps refining steps
   * from initialbeta */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     y:         A vector with n elements that contains the response
   * variable. */
  /*                It can be both a row or column vector. */
  /*     X :        Data matrix of explanatory variables (also called
   * 'regressors') */
  /*                of dimension (n x p). Rows of X represent observations, and
   */
  /*                columns represent variables. */
  /*  initialbeta : p x 1 vector containing initial estimate of beta */
  /*    refsteps  : scalar, number of refining (IRLS) steps */
  /*    reftol    : relative convergence tolerance */
  /*                Default value is 1e-7 */
  /*       h      : scalar. number of observations with smallest residuals to
   * consider */
  /*  */
  /*   Output: */
  /*  */
  /*   The output consists of a structure 'outIRWLS' containing the following
   * fields: */
  /*       betarw  : p x 1 vector. Estimate of beta after refsteps refining
   * steps */
  /*   numscale2rw : scalar. Sum of the smallest h squared residuals from */
  /*                 final iteration (after refsteps refining step).It is the */
  /*                 numerator of the estimate of the squared scale. */
  /*      weights  : n x 1 vector. Weights assigned to each observation */
  /*                In this case weights are 0,1. */
  /*                1 for the units associated with the smallest h squared
   * residuals from */
  /*                final iteration */
  /*                0 for the other units. */
  /*  */
  /*  Residuals for the initialbeta */
  /*  Squared residuals for all the observations */
  /*  Ordering of squared residuals */
  mc = X->size[0] - 1;
  inner = X->size[1];
  i = r2->size[0];
  r2->size[0] = X->size[0];
  emxEnsureCapacity_real_T(r2, i);
  r2_data = r2->data;
  for (i = 0; i <= mc; i++) {
    r2_data[i] = 0.0;
  }
  for (k = 0; k < inner; k++) {
    aoffset = k * X->size[0];
    for (i = 0; i <= mc; i++) {
      r2_data[i] += X_data[aoffset + i] * initialbeta_data[k];
    }
  }
  if (y->size[0] == r2->size[0]) {
    i = r2->size[0];
    r2->size[0] = y->size[0];
    emxEnsureCapacity_real_T(r2, i);
    r2_data = r2->data;
    aoffset = y->size[0];
    for (i = 0; i < aoffset; i++) {
      varargin_1 = y_data[i] - r2_data[i];
      r2_data[i] = varargin_1 * varargin_1;
    }
  } else {
    jb_binary_expand_op(r2, y);
  }
  emxInit_int32_T(&i_r2s, 1);
  emxInit_real_T(&beta, 1);
  sort(r2, i_r2s);
  i_r2s_data = i_r2s->data;
  r2_data = r2->data;
  loop_ub_tmp_tmp = (int)h;
  i = beta->size[0];
  beta->size[0] = (int)h;
  emxEnsureCapacity_real_T(beta, i);
  beta_data = beta->data;
  for (i = 0; i < loop_ub_tmp_tmp; i++) {
    beta_data[i] = r2_data[i];
  }
  initialscale = blockedSummation(beta, (int)h);
  /*  Initialize parameters for the refining steps loop */
  iter = 0.0;
  betadiff = 9999.0;
  i = beta->size[0];
  beta->size[0] = initialbeta->size[0];
  emxEnsureCapacity_real_T(beta, i);
  beta_data = beta->data;
  aoffset = initialbeta->size[0];
  for (i = 0; i < aoffset; i++) {
    beta_data[i] = initialbeta_data[i];
  }
  *outIRWLS_numscale2rw = rtInf;
  i = outIRWLS_betarw->size[0];
  outIRWLS_betarw->size[0] = initialbeta->size[0];
  emxEnsureCapacity_real_T(outIRWLS_betarw, i);
  outIRWLS_betarw_data = outIRWLS_betarw->data;
  aoffset = initialbeta->size[0];
  for (i = 0; i < aoffset; i++) {
    outIRWLS_betarw_data[i] = initialbeta_data[i];
  }
  /*  Initialization for MATLAB Ccoder */
  /*  update of weights moved at the end of the function */
  /*  weights=zeros(n,1); */
  /*  weights(i_r2s(1:h))=1; */
  emxInit_boolean_T(&x, 1);
  emxInit_real_T(&b_X, 2);
  emxInit_real_T(&b_y, 1);
  exitg1 = false;
  while ((!exitg1) && ((betadiff > reftol) && (iter < refsteps))) {
    iter++;
    /*  i_r2s= units with smallest h squared residuals */
    i = i_r2s->size[0];
    i_r2s->size[0] = (int)h;
    emxEnsureCapacity_int32_T(i_r2s, i);
    i_r2s_data = i_r2s->data;
    /*  new coefficients based on units with smallest h squared */
    /*  residuals */
    aoffset = X->size[1];
    i = b_X->size[0] * b_X->size[1];
    b_X->size[0] = (int)h;
    b_X->size[1] = X->size[1];
    emxEnsureCapacity_real_T(b_X, i);
    r2_data = b_X->data;
    for (i = 0; i < aoffset; i++) {
      for (mc = 0; mc < loop_ub_tmp_tmp; mc++) {
        r2_data[mc + b_X->size[0] * i] =
            X_data[(i_r2s_data[mc] + X->size[0] * i) - 1];
      }
    }
    i = b_y->size[0];
    b_y->size[0] = (int)h;
    emxEnsureCapacity_real_T(b_y, i);
    r2_data = b_y->data;
    for (i = 0; i < loop_ub_tmp_tmp; i++) {
      r2_data[i] = y_data[i_r2s_data[i] - 1];
    }
    mldivide(b_X, b_y, outIRWLS_betarw);
    outIRWLS_betarw_data = outIRWLS_betarw->data;
    /*  exit from the loop if the new beta has singular values. In such a */
    /*  case, any intermediate estimate is not reliable and we can just */
    /*  keep the initialbeta and initial scale. */
    i = x->size[0];
    x->size[0] = outIRWLS_betarw->size[0];
    emxEnsureCapacity_boolean_T(x, i);
    x_data = x->data;
    aoffset = outIRWLS_betarw->size[0];
    for (i = 0; i < aoffset; i++) {
      x_data[i] = rtIsNaN(outIRWLS_betarw_data[i]);
    }
    c_y = false;
    aoffset = 1;
    exitg2 = false;
    while ((!exitg2) && (aoffset <= x->size[0])) {
      if (x_data[aoffset - 1]) {
        c_y = true;
        exitg2 = true;
      } else {
        aoffset++;
      }
    }
    if (c_y) {
      i = outIRWLS_betarw->size[0];
      outIRWLS_betarw->size[0] = initialbeta->size[0];
      emxEnsureCapacity_real_T(outIRWLS_betarw, i);
      outIRWLS_betarw_data = outIRWLS_betarw->data;
      aoffset = initialbeta->size[0];
      for (i = 0; i < aoffset; i++) {
        outIRWLS_betarw_data[i] = initialbeta_data[i];
      }
      *outIRWLS_numscale2rw = initialscale;
      exitg1 = true;
    } else {
      /*  betadiff is linked to the tolerance (specified in scalar reftol) */
      if (beta->size[0] == outIRWLS_betarw->size[0]) {
        i = r2->size[0];
        r2->size[0] = beta->size[0];
        emxEnsureCapacity_real_T(r2, i);
        r2_data = r2->data;
        aoffset = beta->size[0];
        for (i = 0; i < aoffset; i++) {
          r2_data[i] = beta_data[i] - outIRWLS_betarw_data[i];
        }
      } else {
        minus(r2, beta, outIRWLS_betarw);
        r2_data = r2->data;
      }
      if (r2->size[0] == 0) {
        varargin_1 = 0.0;
      } else {
        varargin_1 = 0.0;
        i = r2->size[0];
        for (k = 0; k < i; k++) {
          varargin_1 += fabs(r2_data[k]);
        }
      }
      if (beta->size[0] == 0) {
        betadiff = 0.0;
      } else {
        betadiff = 0.0;
        i = beta->size[0];
        for (k = 0; k < i; k++) {
          betadiff += fabs(beta_data[k]);
        }
      }
      betadiff = varargin_1 / betadiff;
      /*  update residuals */
      /*  Ordering of all new squared residuals */
      mc = X->size[0] - 1;
      inner = X->size[1];
      i = r2->size[0];
      r2->size[0] = X->size[0];
      emxEnsureCapacity_real_T(r2, i);
      r2_data = r2->data;
      for (i = 0; i <= mc; i++) {
        r2_data[i] = 0.0;
      }
      for (k = 0; k < inner; k++) {
        aoffset = k * X->size[0];
        for (i = 0; i <= mc; i++) {
          r2_data[i] += X_data[aoffset + i] * outIRWLS_betarw_data[k];
        }
      }
      if (y->size[0] == r2->size[0]) {
        i = r2->size[0];
        r2->size[0] = y->size[0];
        emxEnsureCapacity_real_T(r2, i);
        r2_data = r2->data;
        aoffset = y->size[0];
        for (i = 0; i < aoffset; i++) {
          varargin_1 = y_data[i] - r2_data[i];
          r2_data[i] = varargin_1 * varargin_1;
        }
      } else {
        jb_binary_expand_op(r2, y);
      }
      sort(r2, i_r2s);
      i_r2s_data = i_r2s->data;
      r2_data = r2->data;
      /*  sum of the smallest new squared residuals */
      i = beta->size[0];
      beta->size[0] = (int)h;
      emxEnsureCapacity_real_T(beta, i);
      beta_data = beta->data;
      for (i = 0; i < loop_ub_tmp_tmp; i++) {
        beta_data[i] = r2_data[i];
      }
      *outIRWLS_numscale2rw = blockedSummation(beta, (int)h);
      /*  update beta */
      i = beta->size[0];
      beta->size[0] = outIRWLS_betarw->size[0];
      emxEnsureCapacity_real_T(beta, i);
      beta_data = beta->data;
      aoffset = outIRWLS_betarw->size[0];
      for (i = 0; i < aoffset; i++) {
        beta_data[i] = outIRWLS_betarw_data[i];
      }
    }
  }
  emxFree_real_T(&b_y);
  emxFree_real_T(&b_X);
  emxFree_boolean_T(&x);
  emxFree_real_T(&beta);
  emxFree_real_T(&r2);
  /*  store final estimate of beta */
  /*  store final estimate of scale */
  /*  store final estimate of the weights for each observation */
  /*  In this case weights are 0,1. */
  /*  1 for the units associated with the smallest h squared residuals from */
  /*  final iteration */
  /*  0 for the other units. */
  i = outIRWLS_weights->size[0];
  outIRWLS_weights->size[0] = y->size[0];
  emxEnsureCapacity_real_T(outIRWLS_weights, i);
  r2_data = outIRWLS_weights->data;
  aoffset = y->size[0];
  for (i = 0; i < aoffset; i++) {
    r2_data[i] = 0.0;
  }
  emxInit_int32_T(&r, 2);
  i = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = (int)h;
  emxEnsureCapacity_int32_T(r, i);
  r1 = r->data;
  for (i = 0; i < loop_ub_tmp_tmp; i++) {
    r1[i] = i_r2s_data[i];
  }
  emxFree_int32_T(&i_r2s);
  aoffset = r->size[1];
  for (i = 0; i < aoffset; i++) {
    r2_data[r1[i] - 1] = 1.0;
  }
  emxFree_int32_T(&r);
}

void b_LXS(const emxArray_real_T *y, const emxArray_real_T *X,
           double varargin_2, double varargin_4, double varargin_6,
           bool varargin_10, const double varargin_14_data[],
           const int varargin_14_size[2], struct_LXS_T *out)
{
  emxArray_boolean_T *weights;
  emxArray_char_T_1x310 b_X;
  emxArray_int32_T *ia;
  emxArray_int32_T *ib;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_real_T *C;
  emxArray_real_T *Xb;
  emxArray_real_T *b_C;
  emxArray_real_T *b_expl_temp;
  emxArray_real_T *c_X;
  emxArray_real_T *c_expl_temp;
  emxArray_real_T *d_expl_temp;
  emxArray_real_T *e_expl_temp;
  emxArray_real_T *expl_temp;
  emxArray_real_T *outFSM_outliers;
  emxArray_real_T *outliers;
  emxArray_real_T *r2;
  emxArray_real_T *seq;
  const double *X_data;
  const double *y_data;
  double ncomb;
  double nselected;
  double rmin;
  double sh0;
  double singsub;
  double tsampling;
  double *C_data;
  double *outFSM_outliers_data;
  double *outliers_data;
  double *seq_data;
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
  int *ia_data;
  char critdef_data[3];
  char expl_temp_data[3];
  bool bonflevout;
  bool guard1 = false;
  bool *weights_data;
  X_data = X->data;
  y_data = y->data;
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
  emxInit_real_T(&seq, 2);
  seq_data = seq->data;
  if (X->size[0] < 1) {
    seq->size[0] = 1;
    seq->size[1] = 0;
  } else {
    i = seq->size[0] * seq->size[1];
    seq->size[0] = 1;
    seq->size[1] = X->size[0];
    emxEnsureCapacity_real_T(seq, i);
    seq_data = seq->data;
    aoffset = X->size[0] - 1;
    for (i = 0; i <= aoffset; i++) {
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
  sh0 = varargin_6;
  /*  And check if the optional user parameters are reasonable. */
  /*  Check h and bdp */
  /*  The user has only specified h: no need to specify bdp. */
  if (varargin_2 < (double)X->size[1] + 1.0) {
    int2str((double)X->size[1] + 1.0, b_X.data, b_X.size);
  }
  /*  the user has only specified bdp: h is defined accordingly */
  /*  Check number of subsamples to extract */
  if (varargin_6 > ncomb) {
    sh0 = 0.0;
  }
  /*  Default values for the optional */
  /*  parameters are set inside structure 'options' */
  /*  Number of data points on which estimates are based */
  /*  Number of subsets to extract */
  /*  if options.lms==1 then LMS, else LTS */
  if (varargin_4 == 2.0) {
    /*  lms=struct; */
    /*  ij is a scalar used to ensure that the best first bestr non singular */
    /*  subsets are stored */
    /*  lmsopt is associated with the message about total computing time */
    lmsopt = 2;
  } else {
    /*  lmsopt is associated with the message about total computing time */
    lmsopt = (varargin_4 == 1.0);
  }
  emxInit_real_T(&C, 2);
  /*  Scalar which controls the messages displayed on the screen */
  /*  if options.nomes==true no message about estimated time to compute LMS is
   * displayed */
  /*  Extract in the rows of matrix C the indexes of all required subsets */
  subsets(sh0, X->size[0], X->size[1], ncomb, C, &nselected);
  C_data = C->data;
  /*  Store the indices in varargout */
  /*  rmin will contain the minimum value of LMS (LTS) */
  rmin = rtInf;
  /*  initialise and start timer. */
  tsampling = ceil(fmin(nselected / 100.0, 1000.0));
  /*  bonflevoutX option to search for outliers in the X space */
  emxInit_real_T(&outliers, 1);
  emxInit_real_T(&Xb, 2);
  if ((varargin_14_size[0] != 0) && (varargin_14_size[1] != 0)) {
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
    outliers_data = c_X->data;
    aoffset = X->size[0] * X->size[1] - 1;
    for (i = 0; i <= aoffset; i++) {
      outliers_data[i] = X_data[i];
    }
    emxInit_real_T(&outFSM_outliers, 2);
    emxInit_real_T(&expl_temp, 2);
    emxInit_real_T(&b_expl_temp, 2);
    emxInit_real_T(&c_expl_temp, 2);
    emxInit_real_T(&d_expl_temp, 2);
    emxInit_real_T(&e_expl_temp, 2);
    FSM(c_X, varargin_14_data, varargin_14_size,
        floor((double)X->size[0] * 0.6), critdef_data, critdef_size,
        (double)X->size[1] + 1.0, outFSM_outliers, expl_temp, Xb, b_expl_temp,
        c_expl_temp, d_expl_temp, e_expl_temp, expl_temp_data, expl_temp_size);
    outFSM_outliers_data = outFSM_outliers->data;
    i = outliers->size[0];
    outliers->size[0] = outFSM_outliers->size[0] * outFSM_outliers->size[1];
    emxEnsureCapacity_real_T(outliers, i);
    outliers_data = outliers->data;
    aoffset = outFSM_outliers->size[0] * outFSM_outliers->size[1];
    emxFree_real_T(&c_X);
    emxFree_real_T(&e_expl_temp);
    emxFree_real_T(&d_expl_temp);
    emxFree_real_T(&c_expl_temp);
    emxFree_real_T(&b_expl_temp);
    emxFree_real_T(&expl_temp);
    for (i = 0; i < aoffset; i++) {
      outliers_data[i] = outFSM_outliers_data[i];
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
  tic(&ncomb, &sh0);
  i = out->bs->size[0] * out->bs->size[1];
  out->bs->size[0] = 1;
  out->bs->size[1] = X->size[1];
  emxEnsureCapacity_real_T(out->bs, i);
  aoffset = X->size[1];
  for (i = 0; i < aoffset; i++) {
    out->bs->data[i] = 0.0;
  }
  i = (int)nselected;
  emxInit_real_T(&r2, 1);
  emxInit_int32_T(&ia, 1);
  emxInit_int32_T(&ib, 1);
  emxInit_real_T(&b_C, 2);
  for (b_i = 0; b_i < i; b_i++) {
    if (b_i + 1U <= (unsigned int)tsampling) {
      tic(&ncomb, &sh0);
    }
    /*  extract a subset of size p */
    guard1 = false;
    if (bonflevout) {
      aoffset = C->size[1];
      c_i = b_C->size[0] * b_C->size[1];
      b_C->size[0] = 1;
      b_C->size[1] = C->size[1];
      emxEnsureCapacity_real_T(b_C, c_i);
      outliers_data = b_C->data;
      for (c_i = 0; c_i < aoffset; c_i++) {
        outliers_data[c_i] = C_data[b_i + C->size[0] * c_i];
      }
      c_do_vectors(b_C, outliers, r2, ia, ib);
      if (r2->size[0] != 0) {
        c_i = out->residuals->size[0];
        out->residuals->size[0] = 1;
        emxEnsureCapacity_real_T(out->residuals, c_i);
        out->residuals->data[0] = rtNaN;
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
      outliers_data = Xb->data;
      for (c_i = 0; c_i < loop_ub; c_i++) {
        for (inner = 0; inner < aoffset; inner++) {
          outliers_data[inner + Xb->size[0] * c_i] = X_data
              [((int)C_data[b_i + C->size[0] * inner] + X->size[0] * c_i) - 1];
        }
      }
      /*  if rank(Xb)==p Warning: this instruction has been replaced by a */
      /*  posteriori control on vector b */
      /*  Compute the vector of coefficients using matrice Xb and yb */
      aoffset = C->size[1];
      c_i = r2->size[0];
      r2->size[0] = C->size[1];
      emxEnsureCapacity_real_T(r2, c_i);
      outliers_data = r2->data;
      for (c_i = 0; c_i < aoffset; c_i++) {
        outliers_data[c_i] = y_data[(int)C_data[b_i + C->size[0] * c_i] - 1];
      }
      mldivide(Xb, r2, out->residuals);
    }
    if ((!rtIsNaN(out->residuals->data[0])) &&
        (!rtIsInf(out->residuals->data[0]))) {
      /*  Residuals for all observations using b based on subset */
      /*  Squared residuals for all the observations */
      /*  Ordering of squared residuals */
      loop_ub = X->size[0] - 1;
      inner = X->size[1];
      c_i = r2->size[0];
      r2->size[0] = X->size[0];
      emxEnsureCapacity_real_T(r2, c_i);
      outliers_data = r2->data;
      for (c_i = 0; c_i <= loop_ub; c_i++) {
        outliers_data[c_i] = 0.0;
      }
      for (k = 0; k < inner; k++) {
        aoffset = k * X->size[0];
        for (c_i = 0; c_i <= loop_ub; c_i++) {
          outliers_data[c_i] += X_data[aoffset + c_i] * out->residuals->data[k];
        }
      }
      aoffset = y->size[0];
      if (y->size[0] == r2->size[0]) {
        c_i = r2->size[0];
        r2->size[0] = y->size[0];
        emxEnsureCapacity_real_T(r2, c_i);
        outliers_data = r2->data;
        for (c_i = 0; c_i < aoffset; c_i++) {
          ncomb = y_data[c_i] - outliers_data[c_i];
          outliers_data[c_i] = ncomb * ncomb;
        }
      } else {
        jb_binary_expand_op(r2, y);
      }
      c_sort(r2);
      outliers_data = r2->data;
      if (varargin_4 == 1.0) {
        /*  LMS */
        ncomb = outliers_data[(int)varargin_2 - 1];
      } else {
        /*  STANDARD LTS without concentration steps */
        c_i = r2->size[0];
        r2->size[0] = (int)varargin_2;
        emxEnsureCapacity_real_T(r2, c_i);
        ncomb = blockedSummation(r2, (int)varargin_2);
      }
      if (ncomb < rmin) {
        /*  rmin = smallest ordered quantile or smallest truncated sum. */
        rmin = ncomb;
        /*  brob = \beta_lms or \beta_lts */
        c_i = out->beta->size[0];
        out->beta->size[0] = out->residuals->size[0];
        emxEnsureCapacity_real_T(out->beta, c_i);
        aoffset = out->residuals->size[0];
        for (c_i = 0; c_i < aoffset; c_i++) {
          out->beta->data[c_i] = out->residuals->data[c_i];
        }
        /*  bs = units forming best subset according to lms or lts */
        aoffset = C->size[1];
        c_i = out->bs->size[0] * out->bs->size[1];
        out->bs->size[0] = 1;
        out->bs->size[1] = C->size[1];
        emxEnsureCapacity_real_T(out->bs, c_i);
        for (c_i = 0; c_i < aoffset; c_i++) {
          out->bs->data[c_i] = C_data[b_i + C->size[0] * c_i];
        }
      }
    } else {
      singsub++;
    }
  }
  emxFree_real_T(&b_C);
  emxFree_int32_T(&ib);
  emxFree_real_T(&C);
  emxFree_real_T(&Xb);
  emxFree_real_T(&outliers);
  if (varargin_4 == 1.0) {
    /*  Estimate of scale based on h-quantile of all squared residuals */
    sh0 = sqrt(rmin);
  } else {
    /*  Estimate of scale based on the first h squared smallest residuals */
    sh0 = sqrt(rmin / varargin_2);
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
      out->residuals->data[b_i] += X_data[aoffset + b_i] * out->beta->data[k];
    }
  }
  if (y->size[0] == out->residuals->size[0]) {
    i = out->residuals->size[0];
    out->residuals->size[0] = y->size[0];
    emxEnsureCapacity_real_T(out->residuals, i);
    aoffset = y->size[0];
    for (i = 0; i < aoffset; i++) {
      out->residuals->data[i] = y_data[i] - out->residuals->data[i];
    }
  } else {
    kb_binary_expand_op(out, y);
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
    sh0 *= 1.4826 * (5.0 / (double)(X->size[0] - X->size[1]) + 1.0);
  } else {
    /*  Consistency factor based on the variance of the truncated normal
     * distribution. */
    /*  1-h/n=trimming percentage */
    /*  Compute variance of the truncated normal distribution. */
    ncomb = 0.5 * (varargin_2 / (double)X->size[0] + 1.0);
    if ((ncomb >= 0.0) && (ncomb <= 1.0)) {
      ncomb = -1.4142135623730951 * erfcinv(2.0 * ncomb);
    } else {
      ncomb = rtNaN;
    }
    /* factor=1/sqrt(1-(2*a.*normpdf(a))./(2*normcdf(a)-1)); */
    /*  Note that factor=sqrt(factor1) */
    /*      v=1; */
    /*      a=chi2inv(h/n,1); */
    /*      factor1=(h/n)/(chi2cdf(a,1+2)); */
    /*  Apply the asymptotic consistency factor to the preliminary scale
     * estimate */
    sh0 *=
        1.0 / sqrt(1.0 - 2.0 * ((double)X->size[0] / varargin_2) * ncomb *
                             (exp(-0.5 * ncomb * ncomb) / 2.5066282746310002));
    /*  Apply small sample correction factor of Pison et al. */
    if (varargin_2 < X->size[0]) {
      sh0 *= sqrt(b_corfactorRAW(X->size[0], varargin_2 / (double)X->size[0]));
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
  if (fabs(sh0) > 1.0E-7) {
    /*  Assign weight=1 to the h units which show the smallest h squared */
    /*  residuals */
    i = r2->size[0];
    r2->size[0] = out->residuals->size[0];
    emxEnsureCapacity_real_T(r2, i);
    outliers_data = r2->data;
    aoffset = out->residuals->size[0];
    for (i = 0; i < aoffset; i++) {
      ncomb = out->residuals->data[i];
      outliers_data[i] = ncomb * ncomb;
    }
    sort(r2, ia);
    ia_data = ia->data;
    i = r2->size[0];
    r2->size[0] = ia->size[0];
    emxEnsureCapacity_real_T(r2, i);
    outliers_data = r2->data;
    aoffset = ia->size[0];
    for (i = 0; i < aoffset; i++) {
      outliers_data[i] = ia_data[i];
    }
    i = out->weights->size[0];
    out->weights->size[0] = X->size[0];
    emxEnsureCapacity_boolean_T(out->weights, i);
    aoffset = X->size[0];
    for (i = 0; i < aoffset; i++) {
      out->weights->data[i] = false;
    }
    emxInit_int32_T(&r, 2);
    aoffset = (int)varargin_2;
    i = r->size[0] * r->size[1];
    r->size[0] = 1;
    r->size[1] = (int)varargin_2;
    emxEnsureCapacity_int32_T(r, i);
    ia_data = r->data;
    for (i = 0; i < aoffset; i++) {
      ia_data[i] = (int)outliers_data[i];
    }
    aoffset = r->size[1];
    for (i = 0; i < aoffset; i++) {
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
    ncomb =
        tinv(0.9875, 2.0 * (double)X->size[0] / asvar(varargin_2, X->size[0]));
    /*  Observations with a standardized residual smaller than the quantile */
    /*  threshold have a weight equal to 1, else the weight is equal to 0. */
    /*  REMARK: using this threshold, even if the sample is homogeneous, */
    /*  you are willing to declare at least 2.5% units as outliers. */
    /*  Remark: sqrt(chi2inv(0.975,1)) = tinv(0.9875,\infinity) = quantile */
    aoffset = out->residuals->size[0];
    for (i = 0; i < aoffset; i++) {
      out->residuals->data[i] /= sh0;
    }
    aoffset = out->residuals->size[0];
    i = r2->size[0];
    r2->size[0] = out->residuals->size[0];
    emxEnsureCapacity_real_T(r2, i);
    outliers_data = r2->data;
    for (k = 0; k < aoffset; k++) {
      outliers_data[k] = fabs(out->residuals->data[k]);
    }
    i = weights->size[0];
    weights->size[0] = r2->size[0];
    emxEnsureCapacity_boolean_T(weights, i);
    weights_data = weights->data;
    aoffset = r2->size[0];
    for (i = 0; i < aoffset; i++) {
      weights_data[i] = (outliers_data[i] <= ncomb);
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
    i = r2->size[0];
    r2->size[0] = out->residuals->size[0];
    emxEnsureCapacity_real_T(r2, i);
    outliers_data = r2->data;
    for (k = 0; k < aoffset; k++) {
      outliers_data[k] = fabs(out->residuals->data[k]);
    }
    i = weights->size[0];
    weights->size[0] = r2->size[0];
    emxEnsureCapacity_boolean_T(weights, i);
    weights_data = weights->data;
    aoffset = r2->size[0];
    for (i = 0; i < aoffset; i++) {
      weights_data[i] = (outliers_data[i] <= 1.0E-7);
    }
    /*  Store the weights */
    i = out->weights->size[0];
    out->weights->size[0] = weights->size[0];
    emxEnsureCapacity_boolean_T(out->weights, i);
    aoffset = weights->size[0];
    for (i = 0; i < aoffset; i++) {
      out->weights->data[i] = weights_data[i];
    }
    out->rew = false;
    /*  s is set to 0 */
    sh0 = 0.0;
    /*  Standardized residuals are artificially set equal to raw residuals. */
  }
  emxFree_int32_T(&ia);
  emxFree_real_T(&r2);
  /*  Store quantities in the out structure */
  /*  Store robust estimate of beta coefficients */
  /*  Store robust estimate of s */
  out->scale = sh0;
  /*  Store standardized residuals */
  /*  Store units forming initial subset */
  /*  Store list of units declared as outliers */
  loop_ub = weights->size[0] - 1;
  aoffset = 0;
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    if (!weights_data[b_i]) {
      aoffset++;
    }
  }
  emxInit_int32_T(&r1, 1);
  i = r1->size[0];
  r1->size[0] = aoffset;
  emxEnsureCapacity_int32_T(r1, i);
  ia_data = r1->data;
  aoffset = 0;
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    if (!weights_data[b_i]) {
      ia_data[aoffset] = b_i + 1;
      aoffset++;
    }
  }
  emxFree_boolean_T(&weights);
  i = out->outliers->size[0] * out->outliers->size[1];
  out->outliers->size[0] = 1;
  out->outliers->size[1] = r1->size[0];
  emxEnsureCapacity_real_T(out->outliers, i);
  aoffset = r1->size[0];
  for (i = 0; i < aoffset; i++) {
    out->outliers->data[i] = seq_data[ia_data[i] - 1];
  }
  emxFree_int32_T(&r1);
  emxFree_real_T(&seq);
  /*  Store confidence level which is used to draw the horizontal lines in the
   */
  /*  plot */
  out->conflev = 0.975;
  /*  Store the number of observations that have determined the LTS (LMS) */
  /*  estimator, i.e. the value of h. */
  out->h = varargin_2;
  /*  Store number of singular subsets */
  out->singsub = singsub;
  if (varargin_10 && (singsub / nselected > 0.1)) {
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
  out->X->size[0] = 0;
  out->X->size[1] = 0;
  out->y->size[0] = 0;
  out->y->size[1] = 0;
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

double b_corfactorRAW(double n, double alpha)
{
  double fp_500_n;
  double fp_875_n;
  double rawcorfac;
  /*  corfactorRAW function */
  fp_500_n = 1.0 - 1.2995580068132053 / rt_powd_snf(n, 0.604756680630497);
  fp_875_n = 1.0 - 0.70357229237653807 / rt_powd_snf(n, 1.01646567502486);
  if ((0.5 <= alpha) && (alpha <= 0.875)) {
    fp_500_n += (fp_875_n - fp_500_n) / 0.375 * (alpha - 0.5);
  } else if ((0.875 < alpha) && (alpha < 1.0)) {
    fp_500_n = fp_875_n + (1.0 - fp_875_n) / 0.125 * (alpha - 0.875);
  } else {
    fp_500_n = 1.0;
    /*  Initialization necessary for MATLAB C-coder */
  }
  rawcorfac = 1.0 / fp_500_n;
  if ((rawcorfac <= 0.0) || (rawcorfac > 50.0)) {
    rawcorfac = 1.0;
    /*  if msg==1 */
    /*  end */
  }
  return rawcorfac;
}

void c_LXS(const emxArray_real_T *y, const emxArray_real_T *X,
           const emxArray_real_T *varargin_2, double varargin_4,
           const emxArray_real_T *varargin_6, bool varargin_10,
           struct_LXS_T *out)
{
  emxArray_boolean_T *weights;
  emxArray_boolean_T *x;
  emxArray_char_T_1x310 b_X;
  emxArray_int32_T *iidx;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_real_T b_time_data;
  emxArray_real_T c_time_data;
  emxArray_real_T d_time_data;
  emxArray_real_T *Xb;
  emxArray_real_T *nsamp;
  emxArray_real_T *r2;
  emxArray_real_T *seq;
  double time_data[1000];
  const double *X_data;
  const double *varargin_2_data;
  const double *varargin_6_data;
  const double *y_data;
  double ncomb;
  double nselected;
  double rmin;
  double singsub;
  double tsampling;
  double ttic_tv_nsec;
  double ttic_tv_sec;
  double *Xb_data;
  double *nsamp_data;
  double *seq_data;
  int aoffset;
  int b_i;
  int c_i;
  int i;
  int inner;
  int k;
  int lmsopt;
  int loop_ub;
  int time_size;
  int *iidx_data;
  bool b_y;
  bool exitg1;
  bool *weights_data;
  varargin_6_data = varargin_6->data;
  varargin_2_data = varargin_2->data;
  X_data = X->data;
  y_data = y->data;
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
  emxInit_real_T(&seq, 2);
  seq_data = seq->data;
  if (X->size[0] < 1) {
    seq->size[0] = 1;
    seq->size[1] = 0;
  } else {
    i = seq->size[0] * seq->size[1];
    seq->size[0] = 1;
    seq->size[1] = X->size[0];
    emxEnsureCapacity_real_T(seq, i);
    seq_data = seq->data;
    aoffset = X->size[0] - 1;
    for (i = 0; i <= aoffset; i++) {
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
  emxInit_real_T(&nsamp, 2);
  /*  Write in structure 'options' the options chosen by the user */
  i = nsamp->size[0] * nsamp->size[1];
  nsamp->size[0] = varargin_6->size[0];
  nsamp->size[1] = varargin_6->size[1];
  emxEnsureCapacity_real_T(nsamp, i);
  nsamp_data = nsamp->data;
  aoffset = varargin_6->size[0] * varargin_6->size[1];
  for (i = 0; i < aoffset; i++) {
    nsamp_data[i] = varargin_6_data[i];
  }
  /*  And check if the optional user parameters are reasonable. */
  /*  Check h and bdp */
  /*  The user has only specified h: no need to specify bdp. */
  if (varargin_4 < (double)X->size[1] + 1.0) {
    int2str((double)X->size[1] + 1.0, b_X.data, b_X.size);
  }
  /*  the user has only specified bdp: h is defined accordingly */
  emxInit_boolean_T(&x, 2);
  if ((varargin_6->size[0] == 1) && (varargin_6->size[1] == 1)) {
    /*  Check number of subsamples to extract */
    i = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = 1;
    emxEnsureCapacity_boolean_T(x, i);
    weights_data = x->data;
    weights_data[0] = (varargin_6_data[0] > ncomb);
    if (weights_data[0]) {
      i = nsamp->size[0] * nsamp->size[1];
      nsamp->size[0] = 1;
      nsamp->size[1] = 1;
      emxEnsureCapacity_real_T(nsamp, i);
      nsamp_data = nsamp->data;
      nsamp_data[0] = 0.0;
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
    nsamp_data = nsamp->data;
    nsamp_data[0] = fmin(3000.0, ncomb);
  }
  /*  if options.lms==1 then LMS, else LTS */
  if (varargin_2_data[0] == 2.0) {
    /*  lms=struct; */
    /*  ij is a scalar used to ensure that the best first bestr non singular */
    /*  subsets are stored */
    /*  lmsopt is associated with the message about total computing time */
    lmsopt = 2;
  } else {
    /*  lmsopt is associated with the message about total computing time */
    i = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = varargin_2->size[1];
    emxEnsureCapacity_boolean_T(x, i);
    weights_data = x->data;
    aoffset = varargin_2->size[1];
    for (i = 0; i < aoffset; i++) {
      weights_data[i] = (varargin_2_data[i] == 1.0);
    }
    b_y = (x->size[1] != 0);
    if (b_y) {
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k <= x->size[1] - 1)) {
        if (!weights_data[k]) {
          b_y = false;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    lmsopt = b_y;
  }
  /*  Scalar which controls the messages displayed on the screen */
  /*  if options.nomes==true no message about estimated time to compute LMS is
   * displayed */
  /*  Extract in the rows of matrix C the indexes of all required subsets */
  emxInit_real_T(&Xb, 2);
  if ((nsamp->size[0] == 1) && (nsamp->size[1] == 1)) {
    i = Xb->size[0] * Xb->size[1];
    Xb->size[0] = nsamp->size[0];
    Xb->size[1] = nsamp->size[1];
    emxEnsureCapacity_real_T(Xb, i);
    Xb_data = Xb->data;
    aoffset = nsamp->size[0] * nsamp->size[1] - 1;
    for (i = 0; i <= aoffset; i++) {
      Xb_data[i] = nsamp_data[i];
    }
    c_subsets(Xb, X->size[0], X->size[1], ncomb, nsamp, &nselected);
    nsamp_data = nsamp->data;
  } else {
    nselected = nsamp->size[0];
  }
  /*  Store the indices in varargout */
  /*  rmin will contain the minimum value of LMS (LTS) */
  rmin = rtInf;
  /*  initialise and start timer. */
  tsampling = ceil(fmin(nselected / 100.0, 1000.0));
  aoffset = (int)tsampling;
  time_size = (int)tsampling;
  if (0 <= aoffset - 1) {
    memset(&time_data[0], 0, aoffset * sizeof(double));
  }
  /*  bonflevoutX option to search for outliers in the X space */
  /*  Computation of LMS (LTS) */
  tic(&ttic_tv_sec, &ttic_tv_nsec);
  i = out->bs->size[0] * out->bs->size[1];
  out->bs->size[0] = 1;
  out->bs->size[1] = X->size[1];
  emxEnsureCapacity_real_T(out->bs, i);
  aoffset = X->size[1];
  for (i = 0; i < aoffset; i++) {
    out->bs->data[i] = 0.0;
  }
  i = (int)nselected;
  emxInit_real_T(&r2, 1);
  for (b_i = 0; b_i < i; b_i++) {
    if (b_i + 1U <= (unsigned int)tsampling) {
      tic(&ttic_tv_sec, &ttic_tv_nsec);
    }
    /*  extract a subset of size p */
    aoffset = nsamp->size[1];
    loop_ub = X->size[1];
    c_i = Xb->size[0] * Xb->size[1];
    Xb->size[0] = nsamp->size[1];
    Xb->size[1] = X->size[1];
    emxEnsureCapacity_real_T(Xb, c_i);
    Xb_data = Xb->data;
    for (c_i = 0; c_i < loop_ub; c_i++) {
      for (inner = 0; inner < aoffset; inner++) {
        Xb_data[inner + Xb->size[0] * c_i] =
            X_data[((int)nsamp_data[b_i + nsamp->size[0] * inner] +
                    X->size[0] * c_i) -
                   1];
      }
    }
    /*  if rank(Xb)==p Warning: this instruction has been replaced by a */
    /*  posteriori control on vector b */
    /*  Compute the vector of coefficients using matrice Xb and yb */
    aoffset = nsamp->size[1];
    c_i = r2->size[0];
    r2->size[0] = nsamp->size[1];
    emxEnsureCapacity_real_T(r2, c_i);
    Xb_data = r2->data;
    for (c_i = 0; c_i < aoffset; c_i++) {
      Xb_data[c_i] = y_data[(int)nsamp_data[b_i + nsamp->size[0] * c_i] - 1];
    }
    mldivide(Xb, r2, out->residuals);
    if ((!rtIsNaN(out->residuals->data[0])) &&
        (!rtIsInf(out->residuals->data[0]))) {
      /*  Residuals for all observations using b based on subset */
      /*  Squared residuals for all the observations */
      /*  Ordering of squared residuals */
      loop_ub = X->size[0] - 1;
      inner = X->size[1];
      c_i = r2->size[0];
      r2->size[0] = X->size[0];
      emxEnsureCapacity_real_T(r2, c_i);
      Xb_data = r2->data;
      for (c_i = 0; c_i <= loop_ub; c_i++) {
        Xb_data[c_i] = 0.0;
      }
      for (k = 0; k < inner; k++) {
        aoffset = k * X->size[0];
        for (c_i = 0; c_i <= loop_ub; c_i++) {
          Xb_data[c_i] += X_data[aoffset + c_i] * out->residuals->data[k];
        }
      }
      aoffset = y->size[0];
      if (y->size[0] == r2->size[0]) {
        c_i = r2->size[0];
        r2->size[0] = y->size[0];
        emxEnsureCapacity_real_T(r2, c_i);
        Xb_data = r2->data;
        for (c_i = 0; c_i < aoffset; c_i++) {
          ncomb = y_data[c_i] - Xb_data[c_i];
          Xb_data[c_i] = ncomb * ncomb;
        }
      } else {
        jb_binary_expand_op(r2, y);
      }
      c_sort(r2);
      Xb_data = r2->data;
      c_i = x->size[0] * x->size[1];
      x->size[0] = 1;
      x->size[1] = varargin_2->size[1];
      emxEnsureCapacity_boolean_T(x, c_i);
      weights_data = x->data;
      aoffset = varargin_2->size[1];
      for (c_i = 0; c_i < aoffset; c_i++) {
        weights_data[c_i] = (varargin_2_data[c_i] == 1.0);
      }
      b_y = (x->size[1] != 0);
      if (b_y) {
        k = 0;
        exitg1 = false;
        while ((!exitg1) && (k <= x->size[1] - 1)) {
          if (!weights_data[k]) {
            b_y = false;
            exitg1 = true;
          } else {
            k++;
          }
        }
      }
      if (b_y) {
        /*  LMS */
        ncomb = Xb_data[(int)varargin_4 - 1];
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
        out->beta->size[0] = out->residuals->size[0];
        emxEnsureCapacity_real_T(out->beta, c_i);
        aoffset = out->residuals->size[0];
        for (c_i = 0; c_i < aoffset; c_i++) {
          out->beta->data[c_i] = out->residuals->data[c_i];
        }
        /*  bs = units forming best subset according to lms or lts */
        aoffset = nsamp->size[1];
        c_i = out->bs->size[0] * out->bs->size[1];
        out->bs->size[0] = 1;
        out->bs->size[1] = nsamp->size[1];
        emxEnsureCapacity_real_T(out->bs, c_i);
        for (c_i = 0; c_i < aoffset; c_i++) {
          out->bs->data[c_i] = nsamp_data[b_i + nsamp->size[0] * c_i];
        }
      }
    } else {
      singsub++;
    }
    if (b_i + 1U <= (unsigned int)tsampling) {
      /*  sampling time until step tsampling */
      time_data[b_i] = toc(ttic_tv_sec, ttic_tv_nsec);
    } else if ((b_i + 1U == (unsigned int)((int)tsampling + 1)) &&
               varargin_10) {
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
  emxFree_real_T(&Xb);
  emxFree_real_T(&nsamp);
  i = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = varargin_2->size[1];
  emxEnsureCapacity_boolean_T(x, i);
  weights_data = x->data;
  aoffset = varargin_2->size[1];
  for (i = 0; i < aoffset; i++) {
    weights_data[i] = (varargin_2_data[i] == 1.0);
  }
  b_y = (x->size[1] != 0);
  if (b_y) {
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= x->size[1] - 1)) {
      if (!weights_data[k]) {
        b_y = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  emxFree_boolean_T(&x);
  if (b_y) {
    /*  Estimate of scale based on h-quantile of all squared residuals */
    rmin = sqrt(rmin);
  } else {
    /*  Estimate of scale based on the first h squared smallest residuals */
    rmin = sqrt(rmin / varargin_4);
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
      out->residuals->data[b_i] += X_data[aoffset + b_i] * out->beta->data[k];
    }
  }
  if (y->size[0] == out->residuals->size[0]) {
    i = out->residuals->size[0];
    out->residuals->size[0] = y->size[0];
    emxEnsureCapacity_real_T(out->residuals, i);
    aoffset = y->size[0];
    for (i = 0; i < aoffset; i++) {
      out->residuals->data[i] = y_data[i] - out->residuals->data[i];
    }
  } else {
    kb_binary_expand_op(out, y);
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
    rmin *= 1.4826 * (5.0 / (double)(X->size[0] - X->size[1]) + 1.0);
  } else {
    /*  Consistency factor based on the variance of the truncated normal
     * distribution. */
    /*  1-h/n=trimming percentage */
    /*  Compute variance of the truncated normal distribution. */
    ncomb = 0.5 * (varargin_4 / (double)X->size[0] + 1.0);
    if ((ncomb >= 0.0) && (ncomb <= 1.0)) {
      ncomb = -1.4142135623730951 * erfcinv(2.0 * ncomb);
    } else {
      ncomb = rtNaN;
    }
    /* factor=1/sqrt(1-(2*a.*normpdf(a))./(2*normcdf(a)-1)); */
    /*  Note that factor=sqrt(factor1) */
    /*      v=1; */
    /*      a=chi2inv(h/n,1); */
    /*      factor1=(h/n)/(chi2cdf(a,1+2)); */
    /*  Apply the asymptotic consistency factor to the preliminary scale
     * estimate */
    rmin *=
        1.0 / sqrt(1.0 - 2.0 * ((double)X->size[0] / varargin_4) * ncomb *
                             (exp(-0.5 * ncomb * ncomb) / 2.5066282746310002));
    /*  Apply small sample correction factor of Pison et al. */
    if (varargin_4 < X->size[0]) {
      rmin *= sqrt(b_corfactorRAW(X->size[0], varargin_4 / (double)X->size[0]));
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
    Xb_data = r2->data;
    aoffset = out->residuals->size[0];
    for (i = 0; i < aoffset; i++) {
      ncomb = out->residuals->data[i];
      Xb_data[i] = ncomb * ncomb;
    }
    emxInit_int32_T(&iidx, 1);
    sort(r2, iidx);
    iidx_data = iidx->data;
    i = r2->size[0];
    r2->size[0] = iidx->size[0];
    emxEnsureCapacity_real_T(r2, i);
    Xb_data = r2->data;
    aoffset = iidx->size[0];
    for (i = 0; i < aoffset; i++) {
      Xb_data[i] = iidx_data[i];
    }
    emxFree_int32_T(&iidx);
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
    iidx_data = r->data;
    for (i = 0; i < aoffset; i++) {
      iidx_data[i] = (int)Xb_data[i];
    }
    aoffset = r->size[1];
    for (i = 0; i < aoffset; i++) {
      out->weights->data[iidx_data[i] - 1] = true;
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
    ncomb =
        tinv(0.995, 2.0 * (double)X->size[0] / asvar(varargin_4, X->size[0]));
    /*  Observations with a standardized residual smaller than the quantile */
    /*  threshold have a weight equal to 1, else the weight is equal to 0. */
    /*  REMARK: using this threshold, even if the sample is homogeneous, */
    /*  you are willing to declare at least 2.5% units as outliers. */
    /*  Remark: sqrt(chi2inv(0.975,1)) = tinv(0.9875,\infinity) = quantile */
    aoffset = out->residuals->size[0];
    for (i = 0; i < aoffset; i++) {
      out->residuals->data[i] /= rmin;
    }
    aoffset = out->residuals->size[0];
    i = r2->size[0];
    r2->size[0] = out->residuals->size[0];
    emxEnsureCapacity_real_T(r2, i);
    Xb_data = r2->data;
    for (k = 0; k < aoffset; k++) {
      Xb_data[k] = fabs(out->residuals->data[k]);
    }
    i = weights->size[0];
    weights->size[0] = r2->size[0];
    emxEnsureCapacity_boolean_T(weights, i);
    weights_data = weights->data;
    aoffset = r2->size[0];
    for (i = 0; i < aoffset; i++) {
      weights_data[i] = (Xb_data[i] <= ncomb);
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
    i = r2->size[0];
    r2->size[0] = out->residuals->size[0];
    emxEnsureCapacity_real_T(r2, i);
    Xb_data = r2->data;
    for (k = 0; k < aoffset; k++) {
      Xb_data[k] = fabs(out->residuals->data[k]);
    }
    i = weights->size[0];
    weights->size[0] = r2->size[0];
    emxEnsureCapacity_boolean_T(weights, i);
    weights_data = weights->data;
    aoffset = r2->size[0];
    for (i = 0; i < aoffset; i++) {
      weights_data[i] = (Xb_data[i] <= 1.0E-7);
    }
    /*  Store the weights */
    i = out->weights->size[0];
    out->weights->size[0] = weights->size[0];
    emxEnsureCapacity_boolean_T(out->weights, i);
    aoffset = weights->size[0];
    for (i = 0; i < aoffset; i++) {
      out->weights->data[i] = weights_data[i];
    }
    out->rew = false;
    /*  s is set to 0 */
    rmin = 0.0;
    /*  Standardized residuals are artificially set equal to raw residuals. */
  }
  emxFree_real_T(&r2);
  /*  Store quantities in the out structure */
  /*  Store robust estimate of beta coefficients */
  /*  Store robust estimate of s */
  out->scale = rmin;
  /*  Store standardized residuals */
  /*  Store units forming initial subset */
  /*  Store list of units declared as outliers */
  loop_ub = weights->size[0] - 1;
  aoffset = 0;
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    if (!weights_data[b_i]) {
      aoffset++;
    }
  }
  emxInit_int32_T(&r1, 1);
  i = r1->size[0];
  r1->size[0] = aoffset;
  emxEnsureCapacity_int32_T(r1, i);
  iidx_data = r1->data;
  aoffset = 0;
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    if (!weights_data[b_i]) {
      iidx_data[aoffset] = b_i + 1;
      aoffset++;
    }
  }
  emxFree_boolean_T(&weights);
  i = out->outliers->size[0] * out->outliers->size[1];
  out->outliers->size[0] = 1;
  out->outliers->size[1] = r1->size[0];
  emxEnsureCapacity_real_T(out->outliers, i);
  aoffset = r1->size[0];
  for (i = 0; i < aoffset; i++) {
    out->outliers->data[i] = seq_data[iidx_data[i] - 1];
  }
  emxFree_int32_T(&r1);
  emxFree_real_T(&seq);
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
    Rprintf("Warning: Number of subsets without full rank equal to %.1f%%\n",
           100.0 * singsub / nselected);
    //fflush(stdout);
  }
  out->X->size[0] = 0;
  out->X->size[1] = 0;
  out->y->size[0] = 0;
  out->y->size[1] = 0;
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

void he_binary_expand_op(emxArray_real_T *r2, const emxArray_boolean_T *weights)
{
  emxArray_real_T *b_weights;
  double *b_weights_data;
  double *r2_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  const bool *weights_data;
  weights_data = weights->data;
  r2_data = r2->data;
  emxInit_real_T(&b_weights, 1);
  i = b_weights->size[0];
  if (r2->size[0] == 1) {
    b_weights->size[0] = weights->size[0];
  } else {
    b_weights->size[0] = r2->size[0];
  }
  emxEnsureCapacity_real_T(b_weights, i);
  b_weights_data = b_weights->data;
  stride_0_0 = (weights->size[0] != 1);
  stride_1_0 = (r2->size[0] != 1);
  if (r2->size[0] == 1) {
    loop_ub = weights->size[0];
  } else {
    loop_ub = r2->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_weights_data[i] =
        (double)weights_data[i * stride_0_0] * r2_data[i * stride_1_0];
  }
  i = r2->size[0];
  r2->size[0] = b_weights->size[0];
  emxEnsureCapacity_real_T(r2, i);
  r2_data = r2->data;
  loop_ub = b_weights->size[0];
  for (i = 0; i < loop_ub; i++) {
    r2_data[i] = b_weights_data[i];
  }
  emxFree_real_T(&b_weights);
}

void kb_binary_expand_op(struct_LXS_T *out, const emxArray_real_T *y)
{
  emxArray_real_T *b_y;
  const double *y_data;
  double *b_y_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  y_data = y->data;
  emxInit_real_T(&b_y, 1);
  i = b_y->size[0];
  if (out->residuals->size[0] == 1) {
    b_y->size[0] = y->size[0];
  } else {
    b_y->size[0] = out->residuals->size[0];
  }
  emxEnsureCapacity_real_T(b_y, i);
  b_y_data = b_y->data;
  stride_0_0 = (y->size[0] != 1);
  stride_1_0 = (out->residuals->size[0] != 1);
  if (out->residuals->size[0] == 1) {
    loop_ub = y->size[0];
  } else {
    loop_ub = out->residuals->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_y_data[i] = y_data[i * stride_0_0] - out->residuals->data[i * stride_1_0];
  }
  i = out->residuals->size[0];
  out->residuals->size[0] = b_y->size[0];
  emxEnsureCapacity_real_T(out->residuals, i);
  loop_ub = b_y->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->residuals->data[i] = b_y_data[i];
  }
  emxFree_real_T(&b_y);
}

/* End of code generation (LXS.c) */
