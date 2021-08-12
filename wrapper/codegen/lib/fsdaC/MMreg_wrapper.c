/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * MMreg_wrapper.c
 *
 * Code generation for function 'MMreg_wrapper'
 *
 */

/* Include files */
#include "MMreg_wrapper.h"
#include "HAeff.h"
#include "HAwei.h"
#include "HYPwei.h"
#include "OPTeff.h"
#include "OPTwei.h"
#include "Sreg.h"
#include "TBeff.h"
#include "TBwei.h"
#include "any.h"
#include "bsxfun.h"
#include "cat.h"
#include "chi2inv.h"
#include "find.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_initialize.h"
#include "fsdaC_internal_types.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "int2str.h"
#include "minOrMax.h"
#include "mldivide.h"
#include "mtimes.h"
#include "nullAssignment.h"
#include "rank.h"
#include "rt_nonfinite.h"
#include "strcmp.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void MMreg_wrapper(const emxArray_real_T *y, const emxArray_real_T *X,
                   double conflev, double eff, const struct1_T *InitialEst,
                   bool intercept, bool msg, bool nocheck, double refsteps,
                   const emxArray_char_T *rhofunc,
                   const emxArray_real_T *rhofuncparam, double Sbdp,
                   double Sbestr, double Sminsctol, double Snsamp,
                   double Srefsteps, double Srefstepsbestr, double Sreftol,
                   double Sreftolbestr, const emxArray_char_T *Srhofunc,
                   const emxArray_real_T *Srhofuncparam, double tol,
                   bool yxsave, struct_MMreg_T *out, emxArray_real_T *C)
{
  static const char cv3[5] = {'M', 'M', 'r', 'e', 'g'};
  static const char b_cv1[3] = {'O', 'P', 'T'};
  static const char b_cv[2] = {'T', 'B'};
  static const char cv2[2] = {'H', 'A'};
  emxArray_boolean_T *b_constcols;
  emxArray_boolean_T *c_y;
  emxArray_boolean_T *na_X;
  emxArray_boolean_T *na_y;
  emxArray_char_T_1x310 c_out;
  emxArray_int32_T *c_constcols;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_int32_T *r3;
  emxArray_real_T *b1;
  emxArray_real_T *b_out;
  emxArray_real_T *b_y;
  emxArray_real_T *c;
  emxArray_real_T *constcols;
  emxArray_real_T *d_y;
  emxArray_real_T *r2;
  j_struct_T Sresult;
  double varargin_1[50];
  double row[5];
  double b_varargin_1[3];
  double A2=0;
  double B2=0;
  double F;
  double c2=0;
  double crit;
  double d2=0;
  double diffk;
  double ss;
  int psifunc_class_size[2];
  int b_i;
  int exitg1;
  int i;
  int i1;
  int loop_ub;
  int nx;
  int trueCount;
  char psifunc_class_data[3];
  bool b_bool;
  if (!isInitialized_fsdaC) {
    fsdaC_initialize();
  }
  /*  wrapper function for MMreg. NV pair names are not taken as */
  /*  inputs. Instead, just the values are taken as inputs. */
  /*  Required input arguments */
  /*  y: a column vector of doubles of any length */
  /*  ARGS{1}{1} = coder.typeof(0,[Inf 1],[1 0]); */
  /*  X: an array of doubles of any dimensions */
  /*  ARGS{1}{2} = coder.typeof(0,[Inf Inf],[1 1]); */
  /*  Optional input arguments (name / pairs) in (case insensitive) */
  /*  alphabetical order */
  /*  conflev a scalar double */
  /*  eff a scalar double */
  /*  InitialEst: a struct (with 2 fields) */
  /*  assert(length(InitialEst) <=1); */
  /*  field beta a column vector of type double */
  /*  field scale a scalar of type double */
  /*  intercept a boolean */
  /*  msg is a boolean */
  /*  nocheck is a boolean */
  /*  refsteps: a scalar of type double */
  /*  rhofunc: a character */
  /*  rhofuncparam */
  /*  assert(size(rhofuncparam,2) == 1); */
  /*  Sbdp a scalar double */
  /*  Sbestr a scalar double */
  /*  Sminsctol a scalar double */
  /*  Snsamp a scalar double */
  /*  Srefsteps: a scalar of type double */
  /*  Srefstepsbestr: a scalar of type double */
  /*  Sreftol: a scalar of type double */
  /*  Sreftolbestr: a scalar of type double */
  /*  Srhofunc: a character */
  /*  Srhofuncparam */
  /*  assert(size(rhofuncparam,2) == 1); */
  /*  tol: a scalar of type double */
  /*  yxsave is a boolean */
  /* MMreg computes MM estimator of regression coefficients */
  /*  */
  /* <a href="matlab: docsearchFS('MMreg')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     y: Response variable. Vector. A vector with n elements that contains */
  /*        the response variable. y can be either a row or a column vector. */
  /*     X: Data matrix of explanatory variables (also called 'regressors') of
   */
  /*        dimension (n x p-1). Rows of X represent observations, and columns
   */
  /*        represent variables. */
  /*        Missing values (NaN's) and infinite values (Inf's) are allowed, */
  /*        since observations (rows) with missing or infinite values will */
  /*        automatically be excluded from the computations. */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*  */
  /*  */
  /*      conflev :  Confidence level which is */
  /*                used to declare units as outliers. Scalar. */
  /*                Usually conflev=0.95, 0.975 0.99 (individual alpha) */
  /*                or 1-0.05/n, 1-0.025/n, 1-0.01/n (simultaneous alpha). */
  /*                Default value is 0.975 */
  /*                  Example - 'conflev',0.99 */
  /*                  Data Types - double */
  /*  */
  /*       eff     : nominal efficiency. Scalar. */
  /*                 Scalar defining nominal efficiency (i.e. a number between
   */
  /*                  0.5 and 0.99). The default value is 0.95 */
  /*                  Asymptotic nominal efficiency is: */
  /*                  $(\int \psi' d\Phi)^2 / (\psi^2 d\Phi)$ */
  /*                  Example - 'eff',0.99 */
  /*                  Data Types - double */
  /*  */
  /*      effshape : location or scale efficiency. dummy scalar. */
  /*                 If effshape=1 efficiency refers to shape */
  /*                 efficiency else (default) efficiency refers to location */
  /*                  Example - 'effshape',1 */
  /*                  Data Types - double */
  /*  */
  /*   InitialEst : starting values of the MM-estimator. [] (default) or
   * structure. */
  /*                InitialEst must contain the following fields */
  /*                InitialEst.beta =  v x 1 vector (estimate of the initial
   * regression coefficients) */
  /*                InitialEst.scale = scalar (estimate of the scale parameter).
   */
  /*                If InitialEst is empty (default) or InitialEst.beta */
  /*                continas NaN values, program uses S estimators. In this */
  /*                last case it is possible to specify the options given in */
  /*                function Sreg.  */
  /*                Example - 'InitialEst',[] */
  /*                Data Types - struct or empty value */
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
  /*        msg    :  Level of output to display. Scalar. It controls whether */
  /*                  to display or not messages on the screen */
  /*                  If msg==1 (default) messages are displayed on the screen
   * about */
  /*                    step in which signal took place */
  /*                  else no message is displayed on the screen. */
  /*                Example - 'msg',1 */
  /*                Data Types - double */
  /*  */
  /*  */
  /*        nocheck : Check input arguments. Boolean. If nocheck is equal to */
  /*                true no check is performed on matrix y and matrix X. Notice
   */
  /*                that y and X are left unchanged. In other words the */
  /*                additional column of ones for the intercept is not added. */
  /*                As default nocheck=false. */
  /*                Example - 'nocheck',true */
  /*                Data Types - boolean */
  /*  */
  /*      refsteps  : Maximum iterations. Scalar. */
  /*                  Scalar defining maximum number of iterations in the MM */
  /*                  loop. Default value is 100. */
  /*                  Example - 'refsteps',10 */
  /*                  Data Types - double */
  /*  */
  /*      rhofunc : rho function. String. String which specifies the rho */
  /*                function which must be used to weight the residuals. */
  /*                Possible values are */
  /*                'bisquare'; */
  /*                'optimal'; */
  /*                'hyperbolic'; */
  /*                'hampel'; */
  /*                'mdpd'. */
  /*                'bisquare' uses Tukey's $\rho$ and $\psi$ functions. */
  /*                See TBrho and TBpsi. */
  /*                'optimal' uses optimal $\rho$ and $\psi$ functions. */
  /*                See OPTrho and OPTpsi. */
  /*                'hyperbolic' uses hyperbolic $\rho$ and $\psi$ functions. */
  /*                See HYPrho and HYPpsi. */
  /*                'hampel' uses Hampel $\rho$ and $\psi$ functions. */
  /*                See HArho and HApsi. */
  /*                'mdpd' uses Minimum Density Power Divergence $\rho$ and
   * $\psi$ functions. */
  /*                See PDrho.m and PDpsi.m. */
  /*                The default is bisquare */
  /*                  Example - 'rhofunc','optimal' */
  /*                  Data Types - char */
  /*  */
  /*  */
  /*  rhofuncparam: Additional parameters for the specified rho function. */
  /*                Scalar or vector. */
  /*                For hyperbolic rho function it is possible to set up the */
  /*                value of k = sup CVC (the default value of k is 4.5). */
  /*                For Hampel rho function it is possible to define parameters
   */
  /*                a, b and c (the default values are a=2, b=4, c=8) */
  /*                  Example - 'rhofuncparam',5 */
  /*                  Data Types - single | double */
  /*  */
  /*   Soptions  :  options to pass to Sreg for initial S estimator. Name value
   * pairs. */
  /*                Options if initial estimator is S and InitialEst is empty.
   */
  /*                The options are: Snsamp,Srefsteps,Srefstepsbestr, */
  /*                Srhofunc,Srhofuncparam, Sreftol,Sreftolbestr, Sminsctol,
   * Sbestr. */
  /*                See function Sreg.m for more details on these options. */
  /*                It is necessary to add to the S options the letter */
  /*                S at the beginning. For example, if you want to use the */
  /*                optimal rho function the supplied option is */
  /*                'Srhofunc','optimal'. For example, if you want to use 3000
   */
  /*                subsets, the supplied option is 'Snsamp',3000 */
  /*                Example - 'Snsamp',1000 */
  /*                Data Types - single | double */
  /*  */
  /*  */
  /*        tol    : Tolerance. Scalar. */
  /*                  Scalar controlling tolerance in the MM loop. */
  /*                  Default value is 1e-7 */
  /*                  Example - 'tol',1e-10 */
  /*                  Data Types - double */
  /*  */
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
  /*                If plots = 1, generates a plot with the robust residuals */
  /*                against index number. The confidence level used to draw the
   */
  /*                confidence bands for the residuals is given by the input */
  /*                option conflev. If conflev is not specified a nominal 0.975
   */
  /*                confidence interval will be used. */
  /*                  Example - 'plots',0 */
  /*                  Data Types - single | double */
  /*  */
  /*   Output: */
  /*  */
  /*  */
  /*   out :     A structure containing the following fields: */
  /*        out.beta        =   p x 1 vector containing MM estimate of */
  /*                            regression coefficients. */
  /*        out.auxscale    =   scalar, S estimate of the scale (or supplied */
  /*                            external estimate of scale, if option InitialEst
   */
  /*                            is not empty). */
  /*        out.residuals	=   n x 1 vector containing standardized MM */
  /*                            residuals. */
  /*       out.fittedvalues =   n x 1 vector containing the fitted values. */
  /*                            out.residuals=(y-X*out.beta)/out.auxscale */
  /*        out.weights     =   n x 1 vector. Weights assigned to each
   * observation */
  /*        out.Sbeta       :   p x 1 vector containing S estimate of regression
   */
  /*                            coefficients (or supplied initial external */
  /*                            estimate of regression coefficients, if option
   */
  /*                            InitialEst is not empty) */
  /*        out.Ssingsub    =   Number of subsets without full rank in the S */
  /*                            preliminary part. Notice that */
  /*                            out.singsub > 0.1*(number of subsamples) */
  /*                            produces a warning */
  /*        out.outliers    :   1 x k vectors containing the outliers which */
  /*                            have been found */
  /*        out.conflev     =   Confidence level that was used to declare
   * outliers */
  /*            out.rhofuncS =   string identifying the rho function which has
   * been */
  /*                            used in the S initial step. This field is empty
   * if */
  /*                            input option InitialEst is not empty */
  /*       out.rhofuncparamS =   vector which contains the additional parameters
   */
  /*                            for the specified rho function which have been
   */
  /*                            used in the S initial step. This field is empty
   * if */
  /*                            input option InitialEst is not empty. */
  /*            out.rhofunc =   string identifying the rho function which has
   * been */
  /*                            used in the MM loop. */
  /*       out.rhofuncparam =   vector which contains the additional parameters
   */
  /*                            for the specified rho function which have been
   */
  /*                            used in the MM loop. */
  /*             out.y      =   response vector Y. The field is present if
   * option */
  /*                            yxsave is set to 1. */
  /*             out.X      =   data matrix X. The field is present if option */
  /*                            yxsave is set to 1. */
  /*        out.class       =   'MMreg' */
  /*  */
  /*  */
  /*   Optional Output: */
  /*  */
  /*             C        : matrix containing the indices of the subsamples */
  /*                        extracted for computing the estimate (the so called
   */
  /*                        elemental sets). */
  /*  */
  /*  */
  /*  See also: Sreg */
  /*  */
  /*  References: */
  /*  */
  /*  Maronna, R.A., Martin D. and Yohai V.J. (2006), "Robust Statistics, Theory
   */
  /*  and Methods", Wiley, New York. */
  /*  */
  /*  Acknowledgements: */
  /*  */
  /*  This function follows the lines of MATLAB/R code developed during the */
  /*  years by many authors. */
  /*  For more details see http://www.econ.kuleuven.be/public/NDBAE06/programs/
   */
  /*  and the R library robustbase http://robustbase.r-forge.r-project.org/ */
  /*  The core of these routines, e.g. the resampling approach, however, has */
  /*  been completely redesigned, with considerable increase of the */
  /*  computational performance. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('MMreg')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % MMreg with all default options. */
  /*     % Run this code to see the output shown in the help file */
  /*     n=200; */
  /*     p=3; */
  /*     randn('state', 123456); */
  /*     X=randn(n,p); */
  /*     % Uncontaminated data */
  /*     y=randn(n,1); */
  /*     % Contaminated data */
  /*     ycont=y; */
  /*     ycont(1:5)=ycont(1:5)+6; */
  /*     [out]=MMreg(ycont,X); */
  /* } */
  /* { */
  /*     % MMreg with optional input arguments. */
  /*     % MMreg using the hyperbolic rho function. */
  /*     % Run this code to see the output shown in the help file */
  /*     n=200; */
  /*     p=3; */
  /*     randn('state', 123456); */
  /*     X=randn(n,p); */
  /*     % Uncontaminated data */
  /*     y=randn(n,1); */
  /*     % Contaminated data */
  /*     ycont=y; */
  /*     ycont(1:5)=ycont(1:5)+6; */
  /*     [out]=MMreg(ycont,X,'Srhofunc','optimal'); */
  /* } */
  /* { */
  /*     % MMreg with optional input arguments. */
  /*     % MMreg using the OLS estimates ac InitialEst. */
  /*     % Run this code to see the output shown in the help file */
  /*     n=200; */
  /*     p=3; */
  /*     randn('state', 123456); */
  /*     X=randn(n,p); */
  /*     % Uncontaminated data */
  /*     y=randn(n,1); */
  /*     % Contaminated data */
  /*     ycont=y; */
  /*     ycont(1:5)=ycont(1:5)+6; */
  /*     % OLS estimates */
  /*     bols=[ones(n,1) X]\y; */
  /*     res=y-[ones(n,1) X]*bols; */
  /*     sols=sqrt((res'*res)/(n-p-1)); */
  /*     InitialEst.beta=bols; */
  /*     InitialEst.scale=sols; */
  /*     [out]=MMreg(ycont,X,'InitialEst',InitialEst); */
  /* } */
  /* { */
  /*     %% Comparing the output of different MMreg runs. */
  /*     state=100; */
  /*     randn('state', state); */
  /*     n=100; */
  /*     X=randn(n,3); */
  /*     bet=[3;4;5]; */
  /*     y=3*randn(n,1)+X*bet; */
  /*     y(1:20)=y(1:20)+13; */
  /*  */
  /*     %For outlier detection we consider both the nominal individual 1% */
  /*     %significance level and the simultaneous Bonferroni confidence level.
   */
  /*  */
  /*     % Define nominal confidence level */
  /*     conflev=[0.99,1-0.01/length(y)]; */
  /*     % Define number of subsets */
  /*     nsamp=3000; */
  /*     % Define the main title of the plots */
  /*     titl=''; */
  /*  */
  /*     % MM  estimators */
  /*     [outMM]=MMreg(y,X,'conflev',conflev(1)); */
  /*     laby='Scaled MM residuals'; */
  /*     resindexplot(outMM.residuals,'title',titl,'laby',laby,'numlab','','conflev',conflev)
   */
  /*     % In this example MM estimator seems to detect half of the outlier with
   * a Bonferroni significance level. */
  /*     % By simply changing the seed to 543 (state=543), using a Bonferroni
   * size */
  /*     %of 1%, no unit is declared as outlier and just half of them using the
   * 99% */
  /*     %band. */
  /* } */
  /* { */
  /*     % Comparison between direct call to MMreg and call to Sreg and
   * MMregcore. */
  /*     n=30; */
  /*     p=3; */
  /*     randn('state', 123456); */
  /*     X=randn(n,p); */
  /*     % Uncontaminated data */
  /*     y=randn(n,1); */
  /*     % Contaminated data */
  /*     ycont=y; */
  /*     ycont(1:5)=ycont(1:5)+6; */
  /*     % Two different rho functions are used for S and MM */
  /*     rhofuncS='hyperbolic'; */
  /*     rhofuncMM='hampel'; */
  /*     % Direct call to MMreg */
  /*     [out]=MMreg(ycont,X,'Srhofunc',rhofuncS,'rhofunc',rhofuncMM,'Snsamp',0);
   */
  /*  */
  /*     % Call to Sreg and then to MMregcore */
  /*     [outS]=Sreg(ycont,X,'rhofunc',rhofuncS,'nsamp',0); */
  /*     outMM=MMregcore(ycont,X,outS.beta,outS.scale,'rhofunc',rhofuncMM); */
  /*     disp('Difference between direct call to S and the calls to Sreg and
   * MMregcore') */
  /*     max(abs([out.beta-outMM.beta])) */
  /* } */
  /* { */
  /*     %%  Example of the use of Power Divergence estimator. */
  /*     n=200; */
  /*     p=3; */
  /*     rng('default') */
  /*     rng(100); */
  /*     X=randn(n,p); */
  /*     % Uncontaminated data */
  /*     y=randn(n,1); */
  /*     % Contaminated data */
  /*     ycont=y; */
  /*     ycont(1:5)=ycont(1:5)+6; */
  /*     % mdpd is used both in the S and in MM step. */
  /*     [out]=MMreg(ycont,X,'Srhofunc','mdpd','rhofunc','mdpd','plots',1); */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checking */
  i = out->X->size[0] * out->X->size[1];
  out->X->size[0] = X->size[0];
  out->X->size[1] = X->size[1];
  emxEnsureCapacity_real_T(out->X, i);
  loop_ub = X->size[0] * X->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->X->data[i] = X->data[i];
  }
  emxInit_real_T(&b_y, 1);
  i = b_y->size[0];
  b_y->size[0] = y->size[0];
  emxEnsureCapacity_real_T(b_y, i);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] = y->data[i];
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
  emxInit_boolean_T(&na_y, 1);
  emxInit_real_T(&constcols, 2);
  emxInit_int32_T(&r, 1);
  emxInit_real_T(&b1, 1);
  emxInit_boolean_T(&c_y, 1);
  emxInit_real_T(&b_out, 2);
  if (!nocheck) {
    /*  The first argument which is passed is y */
    /*  The second argument which is passed is X */
    /*  Check dimension consistency of X and y */
    i = b1->size[0];
    b1->size[0] = X->size[1];
    emxEnsureCapacity_real_T(b1, i);
    loop_ub = X->size[1];
    for (i = 0; i < loop_ub; i++) {
      b1->data[i] = 1.0;
    }
    mtimes(X, b1, b_y);
    i = na_y->size[0];
    na_y->size[0] = b_y->size[0];
    emxEnsureCapacity_boolean_T(na_y, i);
    loop_ub = b_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      na_y->data[i] = rtIsInf(b_y->data[i]);
    }
    i = c_y->size[0];
    c_y->size[0] = b_y->size[0];
    emxEnsureCapacity_boolean_T(c_y, i);
    loop_ub = b_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      c_y->data[i] = rtIsNaN(b_y->data[i]);
    }
    emxInit_boolean_T(&na_X, 1);
    i = na_X->size[0];
    na_X->size[0] = na_y->size[0];
    emxEnsureCapacity_boolean_T(na_X, i);
    loop_ub = na_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      na_X->data[i] = (na_y->data[i] || c_y->data[i]);
    }
    i = na_y->size[0];
    na_y->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(na_y, i);
    loop_ub = y->size[0];
    for (i = 0; i < loop_ub; i++) {
      na_y->data[i] = rtIsInf(y->data[i]);
    }
    i = c_y->size[0];
    c_y->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(c_y, i);
    loop_ub = y->size[0];
    for (i = 0; i < loop_ub; i++) {
      c_y->data[i] = rtIsNaN(y->data[i]);
    }
    loop_ub = na_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      na_y->data[i] = (na_y->data[i] || c_y->data[i]);
    }
    /*  Observations with missing or infinite values are removed from X and y */
    loop_ub = na_X->size[0] - 1;
    trueCount = 0;
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      if ((!na_X->data[b_i]) && (!na_y->data[b_i])) {
        trueCount++;
      }
    }
    i = r->size[0];
    r->size[0] = trueCount;
    emxEnsureCapacity_int32_T(r, i);
    nx = 0;
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      if ((!na_X->data[b_i]) && (!na_y->data[b_i])) {
        r->data[nx] = b_i + 1;
        nx++;
      }
    }
    loop_ub = X->size[1];
    i = out->X->size[0] * out->X->size[1];
    out->X->size[0] = r->size[0];
    out->X->size[1] = X->size[1];
    emxEnsureCapacity_real_T(out->X, i);
    for (i = 0; i < loop_ub; i++) {
      nx = r->size[0];
      for (i1 = 0; i1 < nx; i1++) {
        out->X->data[i1 + out->X->size[0] * i] =
            X->data[(r->data[i1] + X->size[0] * i) - 1];
      }
    }
    loop_ub = na_X->size[0] - 1;
    trueCount = 0;
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      if ((!na_X->data[b_i]) && (!na_y->data[b_i])) {
        trueCount++;
      }
    }
    emxInit_int32_T(&r1, 1);
    i = r1->size[0];
    r1->size[0] = trueCount;
    emxEnsureCapacity_int32_T(r1, i);
    nx = 0;
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      if ((!na_X->data[b_i]) && (!na_y->data[b_i])) {
        r1->data[nx] = b_i + 1;
        nx++;
      }
    }
    emxFree_boolean_T(&na_X);
    i = b_y->size[0];
    b_y->size[0] = r1->size[0];
    emxEnsureCapacity_real_T(b_y, i);
    loop_ub = r1->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_y->data[i] = y->data[r1->data[i] - 1];
    }
    /*  Now n is the new number of non missing observations */
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
      i = b1->size[0];
      b1->size[0] = r1->size[0];
      emxEnsureCapacity_real_T(b1, i);
      loop_ub = r1->size[0];
      for (i = 0; i < loop_ub; i++) {
        b1->data[i] = 1.0;
      }
      i = b_out->size[0] * b_out->size[1];
      b_out->size[0] = out->X->size[0];
      b_out->size[1] = out->X->size[1];
      emxEnsureCapacity_real_T(b_out, i);
      loop_ub = out->X->size[0] * out->X->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        b_out->data[i] = out->X->data[i];
      }
      b_cat(b1, b_out, out->X);
    }
    emxInit_real_T(&r2, 2);
    emxInit_boolean_T(&b_constcols, 2);
    /*  constcols = scalar vector of the indices of possible constant columns.
     */
    maximum(out->X, constcols);
    minimum(out->X, r2);
    i = b_constcols->size[0] * b_constcols->size[1];
    b_constcols->size[0] = 1;
    b_constcols->size[1] = constcols->size[1];
    emxEnsureCapacity_boolean_T(b_constcols, i);
    loop_ub = constcols->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_constcols->data[i] = (constcols->data[i] - r2->data[i] == 0.0);
    }
    emxFree_real_T(&r2);
    emxInit_int32_T(&c_constcols, 2);
    eml_find(b_constcols, c_constcols);
    i = constcols->size[0] * constcols->size[1];
    constcols->size[0] = 1;
    constcols->size[1] = c_constcols->size[1];
    emxEnsureCapacity_real_T(constcols, i);
    loop_ub = c_constcols->size[1];
    emxFree_boolean_T(&b_constcols);
    for (i = 0; i < loop_ub; i++) {
      constcols->data[i] = c_constcols->data[i];
    }
    if (constcols->size[1] > 1) {
      loop_ub = constcols->size[1] - 2;
      i = c_constcols->size[0] * c_constcols->size[1];
      c_constcols->size[0] = 1;
      c_constcols->size[1] = constcols->size[1] - 1;
      emxEnsureCapacity_int32_T(c_constcols, i);
      for (i = 0; i <= loop_ub; i++) {
        c_constcols->data[i] = (int)constcols->data[i + 1];
      }
      nullAssignment(out->X, c_constcols);
    }
    emxFree_int32_T(&c_constcols);
    /*  p is the number of parameters to be estimated */
    if (r1->size[0] < out->X->size[1]) {
      int2str(out->X->size[0], c_out.data, c_out.size);
      int2str(out->X->size[1], c_out.data, c_out.size);
    }
    emxFree_int32_T(&r1);
    local_rank(out->X);
  }
  /*  default values for the initial S estimate: */
  /*  default value of break down point */
  /*  default values of subsamples to extract */
  /*  default value of number of refining iterations (C steps) for each
   * extracted subset */
  /*  default value of tolerance for the refining steps convergence for  each
   * extracted subset */
  /*  default value of number of best locs to remember */
  /*  default value of number of refining iterations (C steps) for best subsets
   */
  /*  default value of tolerance for the refining steps convergence for best
   * subsets */
  /*  default value of tolerance for finding the minimum value of the scale */
  /*  both for each extracted subset and each of the best subsets */
  /*  rho (psi) function which has to be used to weight the residuals */
  /*  Write in structure 'options' the options chosen by the user */
  /*  intercept=options.intercept; */
  /*  InitialEst = structure which contains initial estimate of beta and sigma
   */
  /*  If InitialEst is empty then initial estimates of beta and sigma come from
   */
  /*  S-estimation */
  i = na_y->size[0];
  na_y->size[0] = InitialEst->beta->size[0];
  emxEnsureCapacity_boolean_T(na_y, i);
  loop_ub = InitialEst->beta->size[0];
  for (i = 0; i < loop_ub; i++) {
    na_y->data[i] = rtIsNaN(InitialEst->beta->data[i]);
  }
  emxInitStruct_struct_T6(&Sresult);
  if (any(na_y)) {
    /*  break down point */
    /*  refining steps */
    /*  best locs for refining steps till convergence */
    /*  subsamples to extract */
    /*  tolerance for refining steps */
    /*  tolerance for finding minimum value of the scale for each subset */
    /*  refining steps for the best subsets */
    /*  tolerance for refining steps for the best subsets */
    i = out->rhofuncS->size[0] * out->rhofuncS->size[1];
    out->rhofuncS->size[0] = Srhofunc->size[0];
    out->rhofuncS->size[1] = Srhofunc->size[1];
    emxEnsureCapacity_char_T(out->rhofuncS, i);
    loop_ub = Srhofunc->size[0] * Srhofunc->size[1];
    for (i = 0; i < loop_ub; i++) {
      out->rhofuncS->data[i] = Srhofunc->data[i];
    }
    /*  rho function which must be used for S estimator */
    i = out->rhofuncparamS->size[0] * out->rhofuncparamS->size[1];
    out->rhofuncparamS->size[0] = Srhofuncparam->size[0];
    out->rhofuncparamS->size[1] = Srhofuncparam->size[1];
    emxEnsureCapacity_real_T(out->rhofuncparamS, i);
    loop_ub = Srhofuncparam->size[0] * Srhofuncparam->size[1];
    for (i = 0; i < loop_ub; i++) {
      out->rhofuncparamS->data[i] = Srhofuncparam->data[i];
    }
    /*  eventual additional parameters associated to the rho function for S
     * estimator */
    /*  first compute S-estimator with a fixed breakdown point */
    /*  SR is the routine which computes S estimates of beta and sigma in
     * regression */
    /*  Note that intercept is taken care of by chkinputR call. */
    Sreg(b_y, out->X, Snsamp, Sbdp, Srefsteps, Sbestr, Sreftol, Sminsctol,
         Srefstepsbestr, Sreftolbestr, Srhofunc, Srhofuncparam, msg, &Sresult,
         C);
    ss = Sresult.scale;
    out->Ssingsub = Sresult.singsub;
  } else {
    i = Sresult.beta->size[0];
    Sresult.beta->size[0] = InitialEst->beta->size[0];
    emxEnsureCapacity_real_T(Sresult.beta, i);
    loop_ub = InitialEst->beta->size[0];
    for (i = 0; i < loop_ub; i++) {
      Sresult.beta->data[i] = InitialEst->beta->data[i];
    }
    ss = InitialEst->scale;
    out->Ssingsub = 0.0;
    /*  In this case there is no preliminary S estimator */
    out->rhofuncS->size[0] = 1;
    out->rhofuncS->size[1] = 0;
    out->rhofuncparamS->size[0] = 0;
    out->rhofuncparamS->size[1] = 0;
    i = C->size[0] * C->size[1];
    C->size[0] = 1;
    C->size[1] = 1;
    emxEnsureCapacity_real_T(C, i);
    C->data[0] = 0.0;
  }
  /*  rho function which must be used for MM loop */
  /*  eventual additional parameters associated to the rho function for MM loop
   */
  /*  Asymptotic nominal efficiency (for location or shape) */
  /*  effshape = scalar which specifies whether nominal efficiency refers to
   * location or scale */
  /*  refsteps = maximum number of iteration in the MM step */
  /*  tol = tolerance to declare convergence in the MM step */
  /*  MMregcore = function which does IRWLS steps from initialbeta (bs) and
   * sigma (ss) */
  /*  Notice that the estimate of sigma (scale) remains fixed */
  /* MMregcore computes MM regression estimators for a selected fixed scale. */
  /*  */
  /* <a href="matlab: docsearchFS('MMregcore')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     y: Response variable. Vector. A vector with n elements that contains */
  /*        the response variable. y can be either a row or a column vector. */
  /*     X: Data matrix of explanatory variables (also called 'regressors') of
   */
  /*        dimension (n x p-1). Rows of X represent observations, and columns
   */
  /*        represent variables. */
  /*        Missing values (NaN's) and infinite values (Inf's) are allowed, */
  /*        since observations (rows) with missing or infinite values will */
  /*        automatically be excluded from the computations. */
  /*     b0:        Initial estimate of beta. Vector. Vector containing initial
   */
  /*                estimate of beta (generally an S estimate with high */
  /*                breakdown point (e.g. 0.5) */
  /*  auxscale:     scale estimate. Scalar. */
  /*                Scalar containing estimate of the scale (generally an S */
  /*                estimate with high breakdown point (e.g. .5) */
  /*  */
  /*   Optional input arguments: */
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
  /*       eff     : nominal efficiency. Scalar. */
  /*                 Scalar defining nominal efficiency (i.e. a number between
   */
  /*                  0.5 and 0.99). The default value is 0.95 */
  /*                  Asymptotic nominal efficiency is: */
  /*                  $(\int \psi' d\Phi)^2 / (\psi^2 d\Phi)$ */
  /*                  Example - 'eff',0.99 */
  /*                  Data Types - double */
  /*  */
  /*      effshape : locacation or scale effiicency. dummy scalar. */
  /*                 If effshape=1 efficiency refers to shape */
  /*                 efficiency else (default) efficiency refers to location */
  /*                  Example - 'effshape',1 */
  /*                  Data Types - double */
  /*  */
  /*      refsteps  : Maximum iterations. Scalar. */
  /*                  Scalar defining maximum number of iterations in the MM */
  /*                  loop. Default value is 100. */
  /*                  Example - 'refsteps',10 */
  /*                  Data Types - double */
  /*  */
  /*       reftol: Tolerance. Scalar. */
  /*                  Scalar controlling tolerance in the MM loop. */
  /*                  Default value is 1e-7 */
  /*                  Example - 'tol',1e-10 */
  /*                  Data Types - double */
  /*  */
  /*      conflev :  Confidence level which is */
  /*                used to declare units as outliers. Scalar. */
  /*                Usually conflev=0.95, 0.975 0.99 (individual alpha) */
  /*                or 1-0.05/n, 1-0.025/n, 1-0.01/n (simultaneous alpha). */
  /*                Default value is 0.975 */
  /*                  Example - 'conflev',0.99 */
  /*                  Data Types - double */
  /*  */
  /*      rhofunc : rho function. String. String which specifies the rho */
  /*                function which must be used to weight the residuals. */
  /*                Possible values are */
  /*                'bisquare'; */
  /*                'optimal'; */
  /*                'hyperbolic'; */
  /*                'hampel'; */
  /*                'mdpd'. */
  /*                'bisquare' uses Tukey's $\rho$ and $\psi$ functions. */
  /*                See TBrho and TBpsi. */
  /*                'optimal' uses optimal $\rho$ and $\psi$ functions. */
  /*                See OPTrho and OPTpsi. */
  /*                'hyperbolic' uses hyperbolic $\rho$ and $\psi$ functions. */
  /*                See HYPrho and HYPpsi. */
  /*                'hampel' uses Hampel $\rho$ and $\psi$ functions. */
  /*                See HArho and HApsi. */
  /*                'mdpd' uses Minimum Density Power Divergence $\rho$ and
   * $\psi$ functions. */
  /*                See PDrho.m and PDpsi.m. */
  /*                The default is bisquare */
  /*                  Example - 'rhofunc','optimal' */
  /*                  Data Types - char */
  /*  */
  /*  rhofuncparam: Additional parameters for the specified rho function. */
  /*                Scalar or vector or empty  value. */
  /*                For hyperbolic rho function it is possible to set up the */
  /*                value of k = sup CVC (the default value of k is 4.5). */
  /*                For Hampel rho function it is possible to define parameters
   */
  /*                a, b and c (the default values are a=2, b=4, c=8). For the
   */
  /*                other rho functions (Tuhey, PD and optimal) it is an empty
   */
  /*                value. */
  /*                  Example - 'rhofuncparam',5 */
  /*                  Data Types - single | double */
  /*  */
  /*        nocheck : Check input arguments. Boolean. If nocheck is equal to */
  /*                true no check is performed on matrix y and matrix X. Notice
   */
  /*                that y and X are left unchanged. In other words the */
  /*                additional column of ones for the intercept is not added. */
  /*                As default nocheck=false. */
  /*                Example - 'nocheck',true */
  /*                Data Types - boolean */
  /*  */
  /*        plots : Plot on the screen. Scalar or structure. */
  /*                If plots = 1, generates a plot with the robust residuals */
  /*                against index number. The confidence level used to draw the
   */
  /*                confidence bands for the residuals is given by the input */
  /*                option conflev. If conflev is not specified a nominal 0.975
   */
  /*                confidence interval will be used. */
  /*                  Example - 'plots',0 */
  /*                  Data Types - single | double */
  /*  */
  /*        yxsave : the response vector y and data matrix X are saved into the
   * output */
  /*                 structure out. Scalar. */
  /*                Default is 0, i.e. no saving is done. */
  /*                Example - 'yxsave',1 */
  /*                Data Types - double */
  /*  */
  /*   Output: */
  /*  */
  /*       out :     A structure containing the following fields */
  /*  */
  /*        out.beta  = p x 1 vector. Estimate of beta coefficients after */
  /*                    refsteps refining steps */
  /*    out.residuals = n x 1 vector containing the estimates of the robust */
  /*                    scaled residuals */
  /*    out.outliers  = A vector containing the list of the units declared as */
  /*                    outliers using confidence level specified in input */
  /*                    scalar conflev */
  /*    out.conflev   = Confidence level that was used to declare outliers */
  /*    out.weights   = n x 1 vector. Weights assigned to each observation */
  /*      out.rhofunc = string identifying the rho function which has been */
  /*                    used. */
  /*  out.rhofuncparam= vector which contains the additional parameters */
  /*                    for the specified rho function which have been */
  /*                    used. For hyperbolic rho function the value of */
  /*                    k =sup CVC. For Hampel rho function the parameters */
  /*                    a, b and c. This field is empty if rhofunc is not */
  /*                    'hampel' or 'hyperbolic'. */
  /*      out.y       = response vector y. The field is present only if option
   */
  /*                    yxsave is set to 1. */
  /*      out.X       = data matrix X. The field is present only if option */
  /*                    yxsave is set to 1. */
  /*      out.class   = 'MMreg' */
  /*  */
  /*  */
  /*  More About: */
  /*  */
  /*  It does iterative reweighted least squares (IRWLS) steps from "initial */
  /*  beta" (b0) keeping the estimate of the scale (auxscale) fixed. */
  /*  */
  /*  See also: Sreg */
  /*  */
  /*  References: */
  /*  */
  /*  Maronna, R.A., Martin D. and Yohai V.J. (2006), "Robust Statistics, Theory
   */
  /*  and Methods", Wiley, New York. */
  /*  */
  /*  Acknowledgements: */
  /*  */
  /*  This function follows the lines of MATLAB/R code developed during the */
  /*  years by many authors. */
  /*  For more details see http://www.econ.kuleuven.be/public/NDBAE06/programs/
   */
  /*  and the R library robustbase http://robustbase.r-forge.r-project.org/. */
  /*  The core of these routines, e.g. the resampling approach, however, has */
  /*  been completely redesigned, with considerable increase of the */
  /*  computational performance. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('MMregcore')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /*  */
  /* { */
  /*     % MMregcore with all default options. */
  /*     n=200; */
  /*     p=3; */
  /*     state1=123456; */
  /*     randn('state', state1); */
  /*     X=randn(n,p); */
  /*     y=randn(n,1); */
  /*     kk=10; */
  /*     ycont = y; */
  /*     ycont(1:kk)=ycont(1:kk)+7; */
  /*     [outS]=Sreg(ycont,X); */
  /*     outMM=MMregcore(ycont,X,outS.beta,outS.scale) */
  /* } */
  /* { */
  /*     %% MMregcore with optional input arguments. */
  /*     % Determine, e.g., an S estimate and extract the required arguments for
   * the MM estimate. */
  /*     n=200; */
  /*     p=3; */
  /*     state1=123456; */
  /*     randn('state', state1); */
  /*     X=randn(n,p); */
  /*     y=randn(n,1); */
  /*     kk=10; */
  /*     ycont = y; */
  /*     ycont(1:kk)=ycont(1:kk)+7; */
  /*     [outS]=Sreg(ycont,X); */
  /*     out=MMregcore(ycont,X,outS.beta,outS.scale,'plots',1) */
  /* } */
  /* { */
  /*     % Weighting the residuals with a rho function. */
  /*     % Determine, e.g., an S estimate and extract the required arguments for
   * the MM estimate. */
  /*     % This time use a Tukey biweight for S estimation and HA rho function
   */
  /*     % for MM loop */
  /*     n=200; */
  /*     p=3; */
  /*     state1=123456; */
  /*     randn('state', state1); */
  /*     X=randn(n,p); */
  /*     y=randn(n,1); */
  /*     kk=10; */
  /*     ycont = y; */
  /*     ycont(1:kk)=ycont(1:kk)+7; */
  /*     [outS]=Sreg(ycont,X); */
  /*     rhofunc='hampel'; */
  /*     outMM1=MMregcore(ycont,X,outS.beta,outS.scale,'rhofunc',rhofunc,'plots',1)
   */
  /* } */
  /* { */
  /*     % Comparison between direct call to MMreg and call to Sreg and
   * MMregcore. */
  /*     % In this example two different rho functions are used for S and MM */
  /*     n=30; */
  /*     p=3; */
  /*     randn('state', 16); */
  /*     X=randn(n,p); */
  /*     % Uncontaminated data */
  /*     y=randn(n,1); */
  /*     % Contaminated data */
  /*     ycont=y; */
  /*     ycont(1:5)=ycont(1:5)+6; */
  /*     % Two different rho functions are used for S and MM */
  /*     rhofuncS='hyperbolic'; */
  /*     rhofuncMM='hampel'; */
  /*     % Direct call to MMreg */
  /*     [out]=MMreg(ycont,X,'Srhofunc',rhofuncS,'rhofunc',rhofuncMM,'Snsamp',0);
   */
  /*  */
  /*     % Call to Sreg and then to MMregcore */
  /*     [outS]=Sreg(ycont,X,'rhofunc',rhofuncS,'nsamp',0); */
  /*     outMM=MMregcore(ycont,X,outS.beta,outS.scale,'rhofunc',rhofuncMM); */
  /*     disp('Difference between direct call to S and the calls to Sreg and
   * MMregcore') */
  /*     max(abs([out.beta-outMM.beta])) */
  /* } */
  /*  Beginning of code */
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
  /*  default nominal efficiency */
  /*  by default the nominal efficiency refers to location efficiency */
  /*  default value of number of maximum refining iterations */
  /*  default value of tolerance for the refining steps convergence */
  /*  rho (psi) function which has to be used to weight the residuals */
  /*  MATLAB c coder initialization */
  /*  Write in structure 'options' the options chosen by the user */
  /*  nominal efficiency */
  /*  nominal efficiency refers to shape or location */
  /*  maximum refining iterations */
  /*  tolerance for refining iterations covergence */
  /*  String which specifies the function to use to weight the residuals */
  emxInit_real_T(&c, 1);
  if (l_strcmp(rhofunc)) {
    /*  Compute tuning constant associated to the requested nominal efficiency
     */
    /*  c = consistency factor for a given value of efficiency */
    i = c->size[0];
    c->size[0] = 1;
    emxEnsureCapacity_real_T(c, i);
    c->data[0] = TBeff(eff);
    /* TODO:MMregcore:shapeff */
    psifunc_class_size[0] = 1;
    psifunc_class_size[1] = 2;
    psifunc_class_data[0] = 'T';
    psifunc_class_data[1] = 'B';
    out->rhofuncparam->size[0] = 0;
    out->rhofuncparam->size[1] = 0;
  } else if (m_strcmp(rhofunc)) {
    /*  Compute tuning constant associated to the requested nominal efficiency
     */
    /*  c2 = consistency factor for a given value of efficiency */
    /*  Remark: given that in function OPTeff rho function is defined in the
     * interval 0---2c/3, 2c/3---3c/3, >3c/3 */
    /*  it is necessary to divide the output of OPTeff by 3 */
    i = c->size[0];
    c->size[0] = 1;
    emxEnsureCapacity_real_T(c, i);
    c->data[0] = OPTeff(eff) / 3.0;
    psifunc_class_size[0] = 1;
    psifunc_class_size[1] = 3;
    psifunc_class_data[0] = 'O';
    psifunc_class_data[1] = 'P';
    psifunc_class_data[2] = 'T';
    out->rhofuncparam->size[0] = 0;
    out->rhofuncparam->size[1] = 0;
  } else if (n_strcmp(rhofunc)) {
    if ((rhofuncparam->size[0] == 0) || (rhofuncparam->size[1] == 0)) {
      F = 4.5;
    } else {
      F = rhofuncparam->data[0];
      /*  Instruction necessary for Ccoder */
    }
    i = out->rhofuncparam->size[0] * out->rhofuncparam->size[1];
    out->rhofuncparam->size[0] = 1;
    out->rhofuncparam->size[1] = 1;
    emxEnsureCapacity_real_T(out->rhofuncparam, i);
    out->rhofuncparam->data[0] = F;
    /*  Use (if possible) precalculated values of c,A,b,d and kc */
    for (trueCount = 0; trueCount < 50; trueCount++) {
      varargin_1[trueCount] = fabs(eff - dv3[trueCount]);
    }
    e_minimum(varargin_1, &crit, &nx);
    b_varargin_1[0] = fabs(F - 4.0);
    b_varargin_1[1] = fabs(F - 4.5);
    b_varargin_1[2] = fabs(F - 5.0);
    f_minimum(b_varargin_1, &diffk, &trueCount);
    if ((crit < 1.0E-6) && (diffk < 1.0E-6)) {
      /*  Load precalculated values of tuning constants */
      for (i = 0; i < 5; i++) {
        row[i] = dv4[((nx + 50 * (i + 1)) + 300 * (trueCount - 1)) - 1];
      }
      c2 = row[0];
      A2 = row[2];
      B2 = row[3];
      d2 = row[4];
      /*      if kdef == 4 && eff==0.85 */
      /*          c2 =3.212800979614258; */
      /*          A2 =0.570183575755717; */
      /*          B2 =0.696172437281084; */
      /*          d2 =1.205900263786317; */
      /*      elseif kdef == 4.5 && eff==0.85 */
      /*          c2 =3.032387733459473; */
      /*          A2 =0.615717108822885; */
      /*          B2 = 0.723435958485131; */
      /*          d2 =1.321987605094910; */
      /*      elseif kdef == 5 && eff==0.85 */
      /*          c2 =2.911890029907227; */
      /*          A2 =0.650228046997054; */
      /*          B2 =0.743433840145084; */
      /*          d2 =1.419320821762087; */
      /*           */
      /*      elseif kdef == 4 && eff==0.90 */
      /*          c2 =3.544333040714264; */
      /*          A2 =0.655651252372878; */
      /*          B2 =0.768170638356071; */
      /*          d2 =1.330560147762300; */
      /*      elseif kdef == 4.5 && eff==0.90 */
      /*          c2 =3.313891947269440; */
      /*          A2 =0.697965573395585; */
      /*          B2 =0.792571144662011; */
      /*          d2 =1.452220833301545; */
      /*      elseif kdef == 5 && eff==0.90 */
      /*          c2 =3.167660615756176; */
      /*          A2 =0.729727894789617; */
      /*          B2 =0.810404284656104; */
      /*          d2 =1.5553258180618305; */
      /*           */
      /*      elseif kdef == 4 && eff==0.95 */
      /*          c2 =4.331634521484375; */
      /*          A2 =0.754327484845243; */
      /*          B2 =0.846528826589308; */
      /*          d2 =1.480099129676819; */
      /*      elseif kdef == 4.5 && eff==0.95 */
      /*          c2 =3.866390228271484; */
      /*          A2 =0.791281464739131; */
      /*          B2 =0.867016329355630; */
      /*          d2 =1.610621500015260; */
      /*      elseif kdef == 5 && eff==0.95 */
      /*          c2 =3.629499435424805; */
      /*          A2 =0.818876452066880; */
      /*          B2 =0.882004888111327; */
      /*          d2 =1.723768949508668; */
    }
    psifunc_class_size[0] = 1;
    psifunc_class_size[1] = 3;
    psifunc_class_data[0] = 'H';
    psifunc_class_data[1] = 'Y';
    psifunc_class_data[2] = 'P';
    row[0] = c2;
    row[1] = F;
    row[2] = A2;
    row[3] = B2;
    row[4] = d2;
    i = c->size[0];
    c->size[0] = 5;
    emxEnsureCapacity_real_T(c, i);
    for (i = 0; i < 5; i++) {
      c->data[i] = row[i];
    }
  } else if (o_strcmp(rhofunc)) {
    if ((rhofuncparam->size[0] == 0) || (rhofuncparam->size[1] == 0)) {
      i = out->rhofuncparam->size[0] * out->rhofuncparam->size[1];
      out->rhofuncparam->size[0] = 3;
      out->rhofuncparam->size[1] = 1;
      emxEnsureCapacity_real_T(out->rhofuncparam, i);
      out->rhofuncparam->data[0] = 2.0;
      out->rhofuncparam->data[1] = 4.0;
      out->rhofuncparam->data[2] = 8.0;
    } else {
      i = out->rhofuncparam->size[0] * out->rhofuncparam->size[1];
      out->rhofuncparam->size[0] = rhofuncparam->size[0];
      out->rhofuncparam->size[1] = 1;
      emxEnsureCapacity_real_T(out->rhofuncparam, i);
      loop_ub = rhofuncparam->size[0];
      for (i = 0; i < loop_ub; i++) {
        out->rhofuncparam->data[i] = rhofuncparam->data[i];
      }
    }
    /*  Compute tuning constant associated to the requested nominal efficiency
     */
    /*  c2 = consistency factor for a given value of efficiency */
    F = HAeff(eff, out->rhofuncparam);
    psifunc_class_size[0] = 1;
    psifunc_class_size[1] = 2;
    psifunc_class_data[0] = 'H';
    psifunc_class_data[1] = 'A';
    i = c->size[0];
    c->size[0] = out->rhofuncparam->size[0] + 1;
    emxEnsureCapacity_real_T(c, i);
    c->data[0] = F;
    loop_ub = out->rhofuncparam->size[0];
    for (i = 0; i < loop_ub; i++) {
      c->data[i + 1] = out->rhofuncparam->data[i];
    }
  } else if (p_strcmp(rhofunc)) {
    /*  Compute tuning constant associated to the requested nominal efficiency
     */
    /*  c = consistency factor for a given value of efficiency */
    /* PDeff finds the constant alpha which is associated to the requested
     * efficiency for minimum power divergence estimator */
    /*  */
    /*  */
    /*  */
    /* <a href="matlab: docsearchFS('PDeff')">Link to the help function</a> */
    /*  */
    /*  */
    /*   Required input arguments: */
    /*  */
    /*     eff:       required efficienty. Scalar. */
    /*                Scalar which contains the required efficiency (of location
     */
    /*                or scale estimator). */
    /*                Generally eff=0.85, 0.9 or 0.95 */
    /*                Data Types - single|double */
    /*  */
    /*   Optional input arguments: */
    /*  */
    /*  */
    /*  */
    /*  Output: */
    /*  */
    /*   alpha : Requested tuning constant. Scalar. Tuning constant for minimum
     */
    /*            power divergence estimator associated to requested value of */
    /*            efficiency */
    /*  */
    /*  See also: TBeff, OPTeff, HYPeff, HAeff */
    /*  */
    /*  References: */
    /*  */
    /*   Riani, M. Atkinson, A.C., Corbellini A. and Perrotta A. (2020), Robust
     */
    /*   Regression with Density Power Divergence: Theory, Comparisons and Data
     */
    /*   Analysis, submitted. */
    /*  */
    /*  Copyright 2008-2021. */
    /*  Written by FSDA team */
    /*  */
    /*  */
    /* <a href="matlab: docsearchFS('PDeff')">Link to the help page for this
     * function</a> */
    /*  */
    /* $LastChangedDate::                      $: Date of the last commit */
    /*  */
    /*  */
    /*  Examples: */
    /*  */
    /* { */
    /*     % Find tuning constant alpha for a given efficiency. */
    /*     % The constant alpha associated to a nominal location efficiency of
     * 95% in regression is */
    /*     % alpha= 0.224515798935881 */
    /*     c=PDeff(0.95); */
    /* } */
    /*  */
    /*  */
    /*  Beginning of code */
    F = rt_powd_snf(eff, 0.66666666666666663);
    /*  Alternative more complicated way to find alpha */
    /*  F=eff^2; */
    /*  coeff=[F, 6*F, 15*F, 20*F-8, 15*F-12, 6*F-6, F-1]; */
    /*  r=roots(coeff); */
    /*  r = r(imag(r)==0); % Save only the real roots */
    /*  alpha = r(r>0); */
    psifunc_class_size[0] = 1;
    psifunc_class_size[1] = 2;
    psifunc_class_data[0] = 'P';
    psifunc_class_data[1] = 'D';
    i = c->size[0];
    c->size[0] = 1;
    emxEnsureCapacity_real_T(c, i);
    c->data[0] = ((1.0 - F) + sqrt(1.0 - F)) / F;
    out->rhofuncparam->size[0] = 0;
    out->rhofuncparam->size[1] = 0;
  }
  F = 0.0;
  crit = rtInf;
  i = b1->size[0];
  b1->size[0] = Sresult.beta->size[0];
  emxEnsureCapacity_real_T(b1, i);
  loop_ub = Sresult.beta->size[0];
  for (i = 0; i < loop_ub; i++) {
    b1->data[i] = Sresult.beta->data[i];
  }
  i = out->beta->size[0];
  out->beta->size[0] = Sresult.beta->size[0];
  emxEnsureCapacity_real_T(out->beta, i);
  loop_ub = Sresult.beta->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->beta->data[i] = Sresult.beta->data[i];
  }
  i = out->weights->size[0];
  out->weights->size[0] = b_y->size[0];
  emxEnsureCapacity_real_T(out->weights, i);
  loop_ub = b_y->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->weights->data[i] = b_y->data[i];
  }
  /*  MATLAB Ccoder initialization */
  emxInit_real_T(&d_y, 1);
  while ((F <= refsteps) && (crit > tol)) {
    mtimes(out->X, b1, out->beta);
    i = out->beta->size[0];
    out->beta->size[0] = b_y->size[0];
    emxEnsureCapacity_real_T(out->beta, i);
    loop_ub = b_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->beta->data[i] = (b_y->data[i] - out->beta->data[i]) / ss;
    }
    nx = out->beta->size[0];
    i = d_y->size[0];
    d_y->size[0] = out->beta->size[0];
    emxEnsureCapacity_real_T(d_y, i);
    for (trueCount = 0; trueCount < nx; trueCount++) {
      d_y->data[trueCount] = fabs(out->beta->data[trueCount]);
    }
    i = c_y->size[0];
    c_y->size[0] = d_y->size[0];
    emxEnsureCapacity_boolean_T(c_y, i);
    loop_ub = d_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      c_y->data[i] = (d_y->data[i] <= 2.2204460492503131E-16);
    }
    b_eml_find(c_y, r);
    i = out->fittedvalues->size[0];
    out->fittedvalues->size[0] = r->size[0];
    emxEnsureCapacity_real_T(out->fittedvalues, i);
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->fittedvalues->data[i] = r->data[i];
    }
    if (out->fittedvalues->size[0] != 0) {
      i = r->size[0];
      r->size[0] = out->fittedvalues->size[0];
      emxEnsureCapacity_int32_T(r, i);
      loop_ub = out->fittedvalues->size[0];
      for (i = 0; i < loop_ub; i++) {
        r->data[i] = (int)out->fittedvalues->data[i];
      }
      loop_ub = r->size[0];
      for (i = 0; i < loop_ub; i++) {
        out->beta->data[r->data[i] - 1] = 2.2204460492503131E-16;
      }
    }
    /*  w is the weight vector \psi(x)/x Each observations receives a */
    /*  weight. Units associated to outliers tend to have 0 weight */
    /*  OLD INSTRUCTION */
    /*  w=TBwei(r1,c); */
    b_bool = false;
    if (psifunc_class_size[1] == 2) {
      nx = 0;
      do {
        exitg1 = 0;
        if (nx < 2) {
          if (psifunc_class_data[nx] != b_cv[nx]) {
            exitg1 = 1;
          } else {
            nx++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }
    if (b_bool) {
      TBwei(out->beta, c, out->weights);
    } else {
      b_bool = false;
      if (psifunc_class_size[1] == 3) {
        nx = 0;
        do {
          exitg1 = 0;
          if (nx < 3) {
            if (psifunc_class_data[nx] != b_cv1[nx]) {
              exitg1 = 1;
            } else {
              nx++;
            }
          } else {
            b_bool = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }
      if (b_bool) {
        OPTwei(out->beta, c, out->weights);
      } else {
        b_bool = false;
        if (psifunc_class_size[1] == 2) {
          nx = 0;
          do {
            exitg1 = 0;
            if (nx < 2) {
              if (psifunc_class_data[nx] != cv2[nx]) {
                exitg1 = 1;
              } else {
                nx++;
              }
            } else {
              b_bool = true;
              exitg1 = 1;
            }
          } while (exitg1 == 0);
        }
        if (b_bool) {
          HAwei(out->beta, c, out->weights);
        } else if (t_strcmp(psifunc_class_data, psifunc_class_size)) {
          HYPwei(out->beta, c, out->weights);
        } else if (u_strcmp(psifunc_class_data, psifunc_class_size)) {
          /* PDwei computes weight function psi(u)/u for  for minimum density
           * power divergence estimator   */
          /*  */
          /* <a href="matlab: docsearchFS('PDwei')">Link to the help
           * function</a> */
          /*  */
          /*  */
          /*  Required input arguments: */
          /*  */
          /*     u:         scaled residuals or Mahalanobis distances. Vector. n
           * x 1 */
          /*                vector containing residuals or Mahalanobis distances
           */
          /*                for the n units of the sample */
          /*     alpha :    tuning parameter. Scalar. Scalar in the interval
           * (0,1] which */
          /*                controls the robustness/efficiency of the estimator
           */
          /*                (beta in regression or mu in the location case ...).
           * The */
          /*                greater is alpha the greater is the bdp and smaller
           * is the */
          /*                efficiency. */
          /*  */
          /*   Optional input arguments: */
          /*  */
          /*   Output: */
          /*  */
          /*     w :         n x 1 vector which contains the Tukey's biweight
           * weights */
          /*                 associated to the scaled residuals or Mahalanobis
           */
          /*                 distances for the n units of the sample. */
          /*  */
          /*  More About: */
          /*  */
          /*  function PDwei transforms vector u as follows */
          /*  \[ */
          /*  PDwei(u,alpha)=  \alpha \exp(-\alpha (u^2/2)); */
          /*       \] */
          /*  */
          /*  */
          /*  */
          /*  */
          /*  See also: TBwei, HYPwei, HAwei, OPTwei */
          /*  */
          /*  References: */
          /*  */
          /*   Riani, M. Atkinson, A.C., Corbellini A. and Perrotta A. (2020),
           * Robust */
          /*   Regression with Density Power Divergence: Theory, Comparisons and
           * Data */
          /*   Analysis, submitted. */
          /*  */
          /*  */
          /*  Copyright 2008-2021. */
          /*  Written by FSDA team */
          /*  */
          /*  */
          /* <a href="matlab: docsearchFS('PDwei')">Link to the help page for
           * this function</a> */
          /*  */
          /* $LastChangedDate::                      $: Date of the last commit
           */
          /*  Examples: */
          /* { */
          /*     % Weight function for minimum density power divergence
           * estimator. */
          /*     x=-6:0.01:6; */
          /*     alpha=0.01; */
          /*     weiPD=PDwei(x,alpha); */
          /*     plot(x,weiPD) */
          /*     xlabel('x','Interpreter','Latex') */
          /*     ylabel('$W (x) =\psi(x)/x$','Interpreter','Latex') */
          /*  */
          /* } */
          /* { */
          /*     % Comparing two weight functions for two values of bdp. */
          /*     close all */
          /*     x=-6:0.01:6; */
          /*     lwd=2; */
          /*     hold('on') */
          /*     bdp1=0.25; */
          /*     alpha1=PDbdp(bdp1);     */
          /*     weiPD=PDwei(x,alpha1); */
          /*     weiPD=weiPD/max(weiPD); */
          /*     plot(x,weiPD,'LineStyle','-','LineWidth',lwd) */
          /*     bdp2=0.01; */
          /*     c=PDbdp(bdp2); */
          /*     weiPD=PDwei(x,c); */
          /*     weiPD=weiPD/max(weiPD); */
          /*     plot(x,weiPD,'LineStyle','-.','LineWidth',lwd) */
          /*     xlabel('$x$','Interpreter','Latex','FontSize',16) */
          /*     ylabel('PD weight function
           * $\psi_\alpha(x)/x$','Interpreter','Latex','FontSize',20) */
          /*     legend({['bdp=' num2str(bdp1,2)],  ['bdp='
           * num2str(bdp2,2)]},... */
          /*     'Interpreter','Latex','Location','SouthEast','FontSize',12) */
          /* } */
          /* { */
          /*     %% Compare five different weight functions in each of them eff
           * is 95 per cent. */
          /*     % Initialize graphical parameters. */
          /*     FontSize=14; */
          /*     x=-6:0.01:6; */
          /*     ylim1=-0.05; */
          /*     ylim2=1.05; */
          /*     xlim1=min(x); */
          /*     xlim2=max(x); */
          /*     LineWidth=2; */
          /*  */
          /*     subplot(2,3,1) */
          /*     ceff095HU=HUeff(0.95,1); */
          /*     weiHU=HUwei(x,ceff095HU); */
          /*     plot(x,weiHU,'LineWidth',LineWidth) */
          /*     xlabel('$u$','Interpreter','Latex','FontSize',FontSize) */
          /*     title('Huber','FontSize',FontSize) */
          /*     ylim([ylim1 ylim2]) */
          /*     xlim([xlim1 xlim2]) */
          /*  */
          /*     subplot(2,3,2) */
          /*     ceff095HA=HAeff(0.95,1); */
          /*     weiHA=HAwei(x,ceff095HA); */
          /*     plot(x,weiHA,'LineWidth',LineWidth) */
          /*     xlabel('$u$','Interpreter','Latex','FontSize',FontSize) */
          /*     title('Hampel','FontSize',FontSize) */
          /*     ylim([ylim1 ylim2]) */
          /*     xlim([xlim1 xlim2]) */
          /*  */
          /*  */
          /*     subplot(2,3,3) */
          /*     ceff095TB=TBeff(0.95,1); */
          /*     weiTB=TBwei(x,ceff095TB); */
          /*     plot(x,weiTB,'LineWidth',LineWidth) */
          /*     xlabel('$u$','Interpreter','Latex','FontSize',FontSize) */
          /*     title('Tukey biweight','FontSize',FontSize) */
          /*     ylim([ylim1 ylim2]) */
          /*     xlim([xlim1 xlim2]) */
          /*  */
          /*     subplot(2,3,4) */
          /*     ceff095HYP=HYPeff(0.95,1); */
          /*     ktuning=4.5; */
          /*     weiHYP=HYPwei(x,[ceff095HYP,ktuning]); */
          /*     plot(x,weiHYP,'LineWidth',LineWidth) */
          /*     xlabel('$u$','Interpreter','Latex','FontSize',FontSize) */
          /*     title('Hyperbolic','FontSize',FontSize) */
          /*     ylim([ylim1 ylim2]) */
          /*     xlim([xlim1 xlim2]) */
          /*  */
          /*     subplot(2,3,5) */
          /*     ceff095PD=PDeff(0.95); */
          /*     weiPD=PDwei(x,ceff095PD); */
          /*     weiPD=weiPD/max(weiPD); */
          /*     plot(x,weiPD,'LineWidth',LineWidth) */
          /*     xlabel('$u$','Interpreter','Latex','FontSize',FontSize) */
          /*     title('Power divergence','FontSize',FontSize) */
          /*     ylim([ylim1 ylim2]) */
          /*     xlim([xlim1 xlim2]) */
          /* } */
          /*  Beginning of code */
          /*  MATLAB Ccoder instruction to enforce that alpha is a scalar */
          /*  normalized wights in such a way that when u=0 w=1 */
          i = out->weights->size[0];
          out->weights->size[0] = out->beta->size[0];
          emxEnsureCapacity_real_T(out->weights, i);
          nx = out->weights->size[0];
          for (trueCount = 0; trueCount < nx; trueCount++) {
            out->weights->data[trueCount] =
                out->beta->data[trueCount] * out->beta->data[trueCount];
          }
          loop_ub = out->weights->size[0];
          for (i = 0; i < loop_ub; i++) {
            out->weights->data[i] = -c->data[0] * (out->weights->data[i] / 2.0);
          }
          nx = out->weights->size[0];
          for (trueCount = 0; trueCount < nx; trueCount++) {
            out->weights->data[trueCount] = exp(out->weights->data[trueCount]);
          }
          /*  Unnormalized weights are */
          /*  w = alpha * exp(- alpha *(u.^2/2)); */
        }
      }
    }
    /*  Every column of matrix X and vector y is multiplied by the sqrt root of
     * the n x 1 */
    /*  weight vector w, then weighted regression is performed */
    i = out->fittedvalues->size[0];
    out->fittedvalues->size[0] = out->weights->size[0];
    emxEnsureCapacity_real_T(out->fittedvalues, i);
    loop_ub = out->weights->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->fittedvalues->data[i] = out->weights->data[i];
    }
    nx = out->weights->size[0];
    for (trueCount = 0; trueCount < nx; trueCount++) {
      out->fittedvalues->data[trueCount] =
          sqrt(out->fittedvalues->data[trueCount]);
    }
    /*  b2 = inv(X'W*X)*X'W*y where W=w*ones(1,k) */
    i = d_y->size[0];
    d_y->size[0] = b_y->size[0];
    emxEnsureCapacity_real_T(d_y, i);
    loop_ub = b_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      d_y->data[i] = b_y->data[i] * out->fittedvalues->data[i];
    }
    d_bsxfun(out->X, out->fittedvalues, b_out);
    mldivide(b_out, d_y, out->beta);
    /*  disp([b2-b22]) */
    i = b1->size[0];
    b1->size[0] = out->beta->size[0];
    emxEnsureCapacity_real_T(b1, i);
    loop_ub = out->beta->size[0];
    for (i = 0; i < loop_ub; i++) {
      b1->data[i] = out->beta->data[i] - b1->data[i];
    }
    nx = b1->size[0];
    i = out->fittedvalues->size[0];
    out->fittedvalues->size[0] = b1->size[0];
    emxEnsureCapacity_real_T(out->fittedvalues, i);
    for (trueCount = 0; trueCount < nx; trueCount++) {
      out->fittedvalues->data[trueCount] = fabs(b1->data[trueCount]);
    }
    crit = b_maximum(out->fittedvalues);
    F++;
    i = b1->size[0];
    b1->size[0] = out->beta->size[0];
    emxEnsureCapacity_real_T(b1, i);
    loop_ub = out->beta->size[0];
    for (i = 0; i < loop_ub; i++) {
      b1->data[i] = out->beta->data[i];
    }
  }
  emxFree_real_T(&b_out);
  emxFree_boolean_T(&c_y);
  emxFree_real_T(&b1);
  emxFree_real_T(&c);
  emxFree_int32_T(&r);
  mtimes(out->X, out->beta, out->fittedvalues);
  i = out->fittedvalues->size[0];
  out->fittedvalues->size[0] = b_y->size[0];
  emxEnsureCapacity_real_T(out->fittedvalues, i);
  loop_ub = b_y->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->fittedvalues->data[i] =
        (b_y->data[i] - out->fittedvalues->data[i]) / ss;
  }
  /*  Store in output structure the outliers found with confidence level conflev
   */
  /*  which has been usedto declared the outliers */
  if (out->X->size[0] < 1) {
    constcols->size[0] = 1;
    constcols->size[1] = 0;
  } else {
    i = constcols->size[0] * constcols->size[1];
    constcols->size[0] = 1;
    constcols->size[1] = out->X->size[0];
    emxEnsureCapacity_real_T(constcols, i);
    loop_ub = out->X->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      constcols->data[i] = (double)i + 1.0;
    }
  }
  nx = out->fittedvalues->size[0];
  i = d_y->size[0];
  d_y->size[0] = out->fittedvalues->size[0];
  emxEnsureCapacity_real_T(d_y, i);
  for (trueCount = 0; trueCount < nx; trueCount++) {
    d_y->data[trueCount] = fabs(out->fittedvalues->data[trueCount]);
  }
  F = sqrt(c_chi2inv(conflev));
  i = na_y->size[0];
  na_y->size[0] = d_y->size[0];
  emxEnsureCapacity_boolean_T(na_y, i);
  loop_ub = d_y->size[0];
  for (i = 0; i < loop_ub; i++) {
    na_y->data[i] = (d_y->data[i] > F);
  }
  emxFree_real_T(&d_y);
  loop_ub = na_y->size[0] - 1;
  trueCount = 0;
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    if (na_y->data[b_i]) {
      trueCount++;
    }
  }
  emxInit_int32_T(&r3, 1);
  i = r3->size[0];
  r3->size[0] = trueCount;
  emxEnsureCapacity_int32_T(r3, i);
  nx = 0;
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    if (na_y->data[b_i]) {
      r3->data[nx] = b_i + 1;
      nx++;
    }
  }
  emxFree_boolean_T(&na_y);
  /*  In case of Hampel or hyperbolic tangent estimator store the additional */
  /*  parameters which have been used */
  /*  For Hampel store a vector of length 3 containing parameters a, b and c */
  /*  For hyperbolic store the value of k= sup CVC */
  /*  Store X (without the column of ones if there is an intercept) */
  /*  Plot of residual with outliers highlighted */
  out->auxscale = ss;
  mtimes(out->X, out->beta, out->fittedvalues);
  i = out->residuals->size[0];
  out->residuals->size[0] = b_y->size[0];
  emxEnsureCapacity_real_T(out->residuals, i);
  loop_ub = b_y->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->residuals->data[i] = (b_y->data[i] - out->fittedvalues->data[i]) / ss;
  }
  /*  MM scaled residuals */
  i = out->Sbeta->size[0];
  out->Sbeta->size[0] = Sresult.beta->size[0];
  emxEnsureCapacity_real_T(out->Sbeta, i);
  loop_ub = Sresult.beta->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->Sbeta->data[i] = Sresult.beta->data[i];
  }
  emxFreeStruct_struct_T6(&Sresult);
  i = out->outliers->size[0] * out->outliers->size[1];
  out->outliers->size[0] = 1;
  out->outliers->size[1] = r3->size[0];
  emxEnsureCapacity_real_T(out->outliers, i);
  loop_ub = r3->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->outliers->data[i] = constcols->data[r3->data[i] - 1];
  }
  emxFree_int32_T(&r3);
  emxFree_real_T(&constcols);
  out->conflev = conflev;
  for (i = 0; i < 5; i++) {
    out->class[i] = cv3[i];
  }
  /*  In case of Hampel or hyperbolic tangent estimator store the additional */
  /*  parameters which have been used */
  /*  For Hampel store a vector of length 3 containing parameters a, b and c */
  /*  For hyperbolic store the value of k= sup CVC */
  i = out->rhofunc->size[0] * out->rhofunc->size[1];
  out->rhofunc->size[0] = rhofunc->size[0];
  out->rhofunc->size[1] = rhofunc->size[1];
  emxEnsureCapacity_char_T(out->rhofunc, i);
  loop_ub = rhofunc->size[0] * rhofunc->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->rhofunc->data[i] = rhofunc->data[i];
  }
  /*  In case of Hampel or hyperbolic tangent estimator store the additional */
  /*  parameters which have been used */
  /*  For Hampel store a vector of length 3 containing parameters a, b and c */
  /*  For hyperbolic store the value of k= sup CVC */
  if (yxsave) {
    if (intercept) {
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
      trueCount = i1 - i;
      for (i1 = 0; i1 < trueCount; i1++) {
        for (b_i = 0; b_i < loop_ub; b_i++) {
          out->X->data[b_i + (nx + 1) * i1] =
              out->X->data[b_i + out->X->size[0] * (i + i1)];
        }
      }
      i = out->X->size[0] * out->X->size[1];
      out->X->size[0] = nx + 1;
      out->X->size[1] = trueCount;
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
}

/* End of code generation (MMreg_wrapper.c) */
