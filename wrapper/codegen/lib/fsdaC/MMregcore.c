/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * MMregcore.c
 *
 * Code generation for function 'MMregcore'
 *
 */

/* Include files */
#include "MMregcore.h"
#include "HAeff.h"
#include "HAwei.h"
#include "HYPwei.h"
#include "OPTeff.h"
#include "OPTwei.h"
#include "TBeff.h"
#include "TBwei.h"
#include "bsxfun.h"
#include "find.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "gammaincinv.h"
#include "minOrMax.h"
#include "mldivide.h"
#include "rt_nonfinite.h"
#include "strcmp.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void MMregcore(const emxArray_real_T *y, const emxArray_real_T *X,
               const emxArray_real_T *b0, double auxscale, double varargin_2,
               double varargin_6, double varargin_8, double varargin_10,
               const emxArray_char_T *varargin_16,
               const emxArray_real_T *varargin_18, e_struct_T *out)
{
  static const char b_cv[8] = {'b', 'i', 's', 'q', 'u', 'a', 'r', 'e'};
  static const char b_cv1[7] = {'o', 'p', 't', 'i', 'm', 'a', 'l'};
  static const char cv2[5] = {'M', 'M', 'r', 'e', 'g'};
  static const char cv4[3] = {'O', 'P', 'T'};
  static const char cv6[3] = {'H', 'Y', 'P'};
  static const char cv3[2] = {'T', 'B'};
  static const char cv5[2] = {'H', 'A'};
  static const char cv7[2] = {'P', 'D'};
  emxArray_boolean_T *b_b2;
  emxArray_int32_T *r;
  emxArray_int32_T *r2;
  emxArray_real_T *b1;
  emxArray_real_T *b2;
  emxArray_real_T *b_r1;
  emxArray_real_T *c;
  emxArray_real_T *r1;
  double varargin_1[50];
  double row[5];
  double b_varargin_1[3];
  double A2=0;
  double B2=0;
  double F;
  double c2=0;
  double d2=0;
  double diffk;
  double iter;
  int aoffset;
  int exitg1;
  int i;
  int inner;
  int k;
  int nx;
  int psifunc_class_size_idx_1=1;
  char psifunc_class_data[3];
  bool b_bool;
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
  b_bool = false;
  if ((varargin_16->size[0] == 1) && (varargin_16->size[1] == 8)) {
    nx = 0;
    do {
      exitg1 = 0;
      if (nx < 8) {
        if (varargin_16->data[nx] != b_cv[nx]) {
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
  emxInit_real_T(&c, 2);
  if (b_bool) {
    /*  Compute tuning constant associated to the requested nominal efficiency
     */
    /*  c = consistency factor for a given value of efficiency */
    k = c->size[0] * c->size[1];
    c->size[0] = 1;
    c->size[1] = 1;
    emxEnsureCapacity_real_T(c, k);
    c->data[0] = TBeff(varargin_2);
    /* TODO:MMregcore:shapeff */
    psifunc_class_size_idx_1 = 2;
    psifunc_class_data[0] = 'T';
    psifunc_class_data[1] = 'B';
    out->rhofuncparam->size[0] = 0;
    out->rhofuncparam->size[1] = 0;
  } else {
    b_bool = false;
    if ((varargin_16->size[0] == 1) && (varargin_16->size[1] == 7)) {
      nx = 0;
      do {
        exitg1 = 0;
        if (nx < 7) {
          if (varargin_16->data[nx] != b_cv1[nx]) {
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
      /*  Compute tuning constant associated to the requested nominal efficiency
       */
      /*  c2 = consistency factor for a given value of efficiency */
      /*  Remark: given that in function OPTeff rho function is defined in the
       * interval 0---2c/3, 2c/3---3c/3, >3c/3 */
      /*  it is necessary to divide the output of OPTeff by 3 */
      k = c->size[0] * c->size[1];
      c->size[0] = 1;
      c->size[1] = 1;
      emxEnsureCapacity_real_T(c, k);
      c->data[0] = OPTeff(varargin_2) / 3.0;
      psifunc_class_size_idx_1 = 3;
      psifunc_class_data[0] = 'O';
      psifunc_class_data[1] = 'P';
      psifunc_class_data[2] = 'T';
      out->rhofuncparam->size[0] = 0;
      out->rhofuncparam->size[1] = 0;
    } else {
      b_bool = false;
      if ((varargin_16->size[0] == 1) && (varargin_16->size[1] == 10)) {
        nx = 0;
        do {
          exitg1 = 0;
          if (nx < 10) {
            if (varargin_16->data[nx] != cv1[nx]) {
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
        if ((varargin_18->size[0] == 0) || (varargin_18->size[1] == 0)) {
          F = 4.5;
        } else {
          F = varargin_18->data[0];
          /*  Instruction necessary for Ccoder */
        }
        k = out->rhofuncparam->size[0] * out->rhofuncparam->size[1];
        out->rhofuncparam->size[0] = 1;
        out->rhofuncparam->size[1] = 1;
        emxEnsureCapacity_real_T(out->rhofuncparam, k);
        out->rhofuncparam->data[0] = F;
        /*  Use (if possible) precalculated values of c,A,b,d and kc */
        for (k = 0; k < 50; k++) {
          varargin_1[k] = fabs(varargin_2 - dv3[k]);
        }
        e_minimum(varargin_1, &iter, &nx);
        b_varargin_1[0] = fabs(F - 4.0);
        b_varargin_1[1] = fabs(F - 4.5);
        b_varargin_1[2] = fabs(F - 5.0);
        f_minimum(b_varargin_1, &diffk, &aoffset);
        if ((iter < 1.0E-6) && (diffk < 1.0E-6)) {
          /*  Load precalculated values of tuning constants */
          for (k = 0; k < 5; k++) {
            row[k] = dv4[((nx + 50 * (k + 1)) + 300 * (aoffset - 1)) - 1];
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
        psifunc_class_size_idx_1 = 3;
        psifunc_class_data[0] = 'H';
        psifunc_class_data[1] = 'Y';
        psifunc_class_data[2] = 'P';
        k = c->size[0] * c->size[1];
        c->size[0] = 1;
        c->size[1] = 5;
        emxEnsureCapacity_real_T(c, k);
        c->data[0] = c2;
        c->data[1] = F;
        c->data[2] = A2;
        c->data[3] = B2;
        c->data[4] = d2;
      } else if (o_strcmp(varargin_16)) {
        if ((varargin_18->size[0] == 0) || (varargin_18->size[1] == 0)) {
          k = out->rhofuncparam->size[0] * out->rhofuncparam->size[1];
          out->rhofuncparam->size[0] = 1;
          out->rhofuncparam->size[1] = 3;
          emxEnsureCapacity_real_T(out->rhofuncparam, k);
          out->rhofuncparam->data[0] = 2.0;
          out->rhofuncparam->data[1] = 4.0;
          out->rhofuncparam->data[2] = 8.0;
        } else {
          k = out->rhofuncparam->size[0] * out->rhofuncparam->size[1];
          out->rhofuncparam->size[0] = varargin_18->size[0];
          out->rhofuncparam->size[1] = 1;
          emxEnsureCapacity_real_T(out->rhofuncparam, k);
          nx = varargin_18->size[0];
          for (k = 0; k < nx; k++) {
            out->rhofuncparam->data[k] = varargin_18->data[k];
          }
        }
        /*  Compute tuning constant associated to the requested nominal
         * efficiency */
        /*  c2 = consistency factor for a given value of efficiency */
        F = HAeff(varargin_2, out->rhofuncparam);
        psifunc_class_size_idx_1 = 2;
        psifunc_class_data[0] = 'H';
        psifunc_class_data[1] = 'A';
        k = c->size[0] * c->size[1];
        c->size[0] = 1;
        c->size[1] = (signed char)out->rhofuncparam->size[1] + 1;
        emxEnsureCapacity_real_T(c, k);
        c->data[0] = F;
        nx = (signed char)out->rhofuncparam->size[1];
        for (k = 0; k < nx; k++) {
          c->data[k + 1] = out->rhofuncparam->data[k];
        }
      } else if (p_strcmp(varargin_16)) {
        /*  Compute tuning constant associated to the requested nominal
         * efficiency */
        /*  c = consistency factor for a given value of efficiency */
        /* PDeff finds the constant alpha which is associated to the requested
         * efficiency for minimum power divergence estimator */
        /*  */
        /*  */
        /*  */
        /* <a href="matlab: docsearchFS('PDeff')">Link to the help function</a>
         */
        /*  */
        /*  */
        /*   Required input arguments: */
        /*  */
        /*     eff:       required efficienty. Scalar. */
        /*                Scalar which contains the required efficiency (of
         * location */
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
        /*   alpha : Requested tuning constant. Scalar. Tuning constant for
         * minimum */
        /*            power divergence estimator associated to requested value
         * of */
        /*            efficiency */
        /*  */
        /*  See also: TBeff, OPTeff, HYPeff, HAeff */
        /*  */
        /*  References: */
        /*  */
        /*   Riani, M. Atkinson, A.C., Corbellini A. and Perrotta A. (2020),
         * Robust */
        /*   Regression with Density Power Divergence: Theory, Comparisons and
         * Data */
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
        /*     % The constant alpha associated to a nominal location efficiency
         * of 95% in regression is */
        /*     % alpha= 0.224515798935881 */
        /*     c=PDeff(0.95); */
        /* } */
        /*  */
        /*  */
        /*  Beginning of code */
        F = rt_powd_snf(varargin_2, 0.66666666666666663);
        /*  Alternative more complicated way to find alpha */
        /*  F=eff^2; */
        /*  coeff=[F, 6*F, 15*F, 20*F-8, 15*F-12, 6*F-6, F-1]; */
        /*  r=roots(coeff); */
        /*  r = r(imag(r)==0); % Save only the real roots */
        /*  alpha = r(r>0); */
        psifunc_class_size_idx_1 = 2;
        psifunc_class_data[0] = 'P';
        psifunc_class_data[1] = 'D';
        k = c->size[0] * c->size[1];
        c->size[0] = 1;
        c->size[1] = 1;
        emxEnsureCapacity_real_T(c, k);
        c->data[0] = ((1.0 - F) + sqrt(1.0 - F)) / F;
        out->rhofuncparam->size[0] = 0;
        out->rhofuncparam->size[1] = 0;
      }
    }
  }
  emxInit_real_T(&b1, 1);
  iter = 0.0;
  F = rtInf;
  k = b1->size[0];
  b1->size[0] = b0->size[0];
  emxEnsureCapacity_real_T(b1, k);
  nx = b0->size[0];
  for (k = 0; k < nx; k++) {
    b1->data[k] = b0->data[k];
  }
  emxInit_real_T(&b2, 1);
  k = b2->size[0];
  b2->size[0] = b0->size[0];
  emxEnsureCapacity_real_T(b2, k);
  nx = b0->size[0];
  for (k = 0; k < nx; k++) {
    b2->data[k] = b0->data[k];
  }
  k = out->weights->size[0];
  out->weights->size[0] = y->size[0];
  emxEnsureCapacity_real_T(out->weights, k);
  nx = y->size[0];
  for (k = 0; k < nx; k++) {
    out->weights->data[k] = y->data[k];
  }
  /*  MATLAB Ccoder initialization */
  emxInit_real_T(&r1, 1);
  emxInit_int32_T(&r, 1);
  emxInit_boolean_T(&b_b2, 1);
  emxInit_real_T(&b_r1, 2);
  while ((iter <= varargin_6) && (F > varargin_8)) {
    nx = X->size[0] - 1;
    inner = X->size[1];
    k = r1->size[0];
    r1->size[0] = X->size[0];
    emxEnsureCapacity_real_T(r1, k);
    for (i = 0; i <= nx; i++) {
      r1->data[i] = 0.0;
    }
    for (k = 0; k < inner; k++) {
      aoffset = k * X->size[0];
      for (i = 0; i <= nx; i++) {
        r1->data[i] += X->data[aoffset + i] * b1->data[k];
      }
    }
    k = r1->size[0];
    r1->size[0] = y->size[0];
    emxEnsureCapacity_real_T(r1, k);
    nx = y->size[0];
    for (k = 0; k < nx; k++) {
      r1->data[k] = (y->data[k] - r1->data[k]) / auxscale;
    }
    nx = r1->size[0];
    k = b2->size[0];
    b2->size[0] = r1->size[0];
    emxEnsureCapacity_real_T(b2, k);
    for (k = 0; k < nx; k++) {
      b2->data[k] = fabs(r1->data[k]);
    }
    k = b_b2->size[0];
    b_b2->size[0] = b2->size[0];
    emxEnsureCapacity_boolean_T(b_b2, k);
    nx = b2->size[0];
    for (k = 0; k < nx; k++) {
      b_b2->data[k] = (b2->data[k] <= 2.2204460492503131E-16);
    }
    b_eml_find(b_b2, r);
    k = out->residuals->size[0];
    out->residuals->size[0] = r->size[0];
    emxEnsureCapacity_real_T(out->residuals, k);
    nx = r->size[0];
    for (k = 0; k < nx; k++) {
      out->residuals->data[k] = r->data[k];
    }
    if (out->residuals->size[0] != 0) {
      k = r->size[0];
      r->size[0] = out->residuals->size[0];
      emxEnsureCapacity_int32_T(r, k);
      nx = out->residuals->size[0];
      for (k = 0; k < nx; k++) {
        r->data[k] = (int)out->residuals->data[k];
      }
      nx = r->size[0];
      for (k = 0; k < nx; k++) {
        r1->data[r->data[k] - 1] = 2.2204460492503131E-16;
      }
    }
    /*  w is the weight vector \psi(x)/x Each observations receives a */
    /*  weight. Units associated to outliers tend to have 0 weight */
    /*  OLD INSTRUCTION */
    /*  w=TBwei(r1,c); */
    b_bool = false;
    if (psifunc_class_size_idx_1 == 2) {
      nx = 0;
      do {
        exitg1 = 0;
        if (nx < 2) {
          if (psifunc_class_data[nx] != cv3[nx]) {
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
      TBwei(r1, (double *)c->data, out->weights);
    } else {
      b_bool = false;
      if (psifunc_class_size_idx_1 == 3) {
        nx = 0;
        do {
          exitg1 = 0;
          if (nx < 3) {
            if (psifunc_class_data[nx] != cv4[nx]) {
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
        OPTwei(r1, (double *)c->data, out->weights);
      } else {
        b_bool = false;
        if (psifunc_class_size_idx_1 == 2) {
          nx = 0;
          do {
            exitg1 = 0;
            if (nx < 2) {
              if (psifunc_class_data[nx] != cv5[nx]) {
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
          HAwei(r1, (double *)c->data, *(int(*)[2])c->size, out->weights);
        } else {
          b_bool = false;
          if (psifunc_class_size_idx_1 == 3) {
            nx = 0;
            do {
              exitg1 = 0;
              if (nx < 3) {
                if (psifunc_class_data[nx] != cv6[nx]) {
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
            HYPwei(r1, (double *)c->data, *(int(*)[2])c->size, out->weights);
          } else {
            b_bool = false;
            if (psifunc_class_size_idx_1 == 2) {
              nx = 0;
              do {
                exitg1 = 0;
                if (nx < 2) {
                  if (psifunc_class_data[nx] != cv7[nx]) {
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
              /* PDwei computes weight function psi(u)/u for  for minimum
               * density power divergence estimator   */
              /*  */
              /* <a href="matlab: docsearchFS('PDwei')">Link to the help
               * function</a> */
              /*  */
              /*  */
              /*  Required input arguments: */
              /*  */
              /*     u:         scaled residuals or Mahalanobis distances.
               * Vector. n x 1 */
              /*                vector containing residuals or Mahalanobis
               * distances */
              /*                for the n units of the sample */
              /*     alpha :    tuning parameter. Scalar. Scalar in the interval
               * (0,1] which */
              /*                controls the robustness/efficiency of the
               * estimator */
              /*                (beta in regression or mu in the location case
               * ...). The */
              /*                greater is alpha the greater is the bdp and
               * smaller is the */
              /*                efficiency. */
              /*  */
              /*   Optional input arguments: */
              /*  */
              /*   Output: */
              /*  */
              /*     w :         n x 1 vector which contains the Tukey's
               * biweight weights */
              /*                 associated to the scaled residuals or
               * Mahalanobis */
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
              /*   Riani, M. Atkinson, A.C., Corbellini A. and Perrotta A.
               * (2020), Robust */
              /*   Regression with Density Power Divergence: Theory, Comparisons
               * and Data */
              /*   Analysis, submitted. */
              /*  */
              /*  */
              /*  Copyright 2008-2021. */
              /*  Written by FSDA team */
              /*  */
              /*  */
              /* <a href="matlab: docsearchFS('PDwei')">Link to the help page
               * for this function</a> */
              /*  */
              /* $LastChangedDate::                      $: Date of the last
               * commit */
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
              /*     'Interpreter','Latex','Location','SouthEast','FontSize',12)
               */
              /* } */
              /* { */
              /*     %% Compare five different weight functions in each of them
               * eff is 95 per cent. */
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
              /*  normalized wights in such a way that when u=0 w=1 */
              k = b2->size[0];
              b2->size[0] = r1->size[0];
              emxEnsureCapacity_real_T(b2, k);
              nx = r1->size[0];
              for (k = 0; k < nx; k++) {
                b2->data[k] = r1->data[k] * r1->data[k];
              }
              F = 0.0;
              nx = c->size[1];
              for (k = 0; k < nx; k++) {
                F += -c->data[k] * (b2->data[k] / 2.0);
              }
              /*  Unnormalized weights are */
              /*  w = alpha * exp(- alpha *(u.^2/2)); */
              k = out->weights->size[0];
              out->weights->size[0] = 1;
              emxEnsureCapacity_real_T(out->weights, k);
              out->weights->data[0] = exp(F);
            }
          }
        }
      }
    }
    /*  Every column of matrix X and vector y is multiplied by the sqrt root of
     * the n x 1 */
    /*  weight vector w, then weighted regression is performed */
    k = out->residuals->size[0];
    out->residuals->size[0] = out->weights->size[0];
    emxEnsureCapacity_real_T(out->residuals, k);
    nx = out->weights->size[0];
    for (k = 0; k < nx; k++) {
      out->residuals->data[k] = out->weights->data[k];
    }
    nx = out->weights->size[0];
    for (k = 0; k < nx; k++) {
      out->residuals->data[k] = sqrt(out->residuals->data[k]);
    }
    /*  b2 = inv(X'W*X)*X'W*y where W=w*ones(1,k) */
    k = r1->size[0];
    r1->size[0] = y->size[0];
    emxEnsureCapacity_real_T(r1, k);
    nx = y->size[0];
    for (k = 0; k < nx; k++) {
      r1->data[k] = y->data[k] * out->residuals->data[k];
    }
    d_bsxfun(X, out->residuals, b_r1);
    mldivide(b_r1, r1, b2);
    /*  disp([b2-b22]) */
    k = b1->size[0];
    b1->size[0] = b2->size[0];
    emxEnsureCapacity_real_T(b1, k);
    nx = b2->size[0];
    for (k = 0; k < nx; k++) {
      b1->data[k] = b2->data[k] - b1->data[k];
    }
    nx = b1->size[0];
    k = out->residuals->size[0];
    out->residuals->size[0] = b1->size[0];
    emxEnsureCapacity_real_T(out->residuals, k);
    for (k = 0; k < nx; k++) {
      out->residuals->data[k] = fabs(b1->data[k]);
    }
    F = b_maximum(out->residuals);
    iter++;
    k = b1->size[0];
    b1->size[0] = b2->size[0];
    emxEnsureCapacity_real_T(b1, k);
    nx = b2->size[0];
    for (k = 0; k < nx; k++) {
      b1->data[k] = b2->data[k];
    }
  }
  emxFree_real_T(&b_r1);
  emxFree_int32_T(&r);
  emxFree_real_T(&r1);
  emxFree_real_T(&b1);
  for (k = 0; k < 5; k++) {
    out->class[k] = cv2[k];
  }
  k = out->beta->size[0];
  out->beta->size[0] = b2->size[0];
  emxEnsureCapacity_real_T(out->beta, k);
  nx = b2->size[0];
  for (k = 0; k < nx; k++) {
    out->beta->data[k] = b2->data[k];
  }
  nx = X->size[0] - 1;
  inner = X->size[1];
  k = out->residuals->size[0];
  out->residuals->size[0] = X->size[0];
  emxEnsureCapacity_real_T(out->residuals, k);
  for (i = 0; i <= nx; i++) {
    out->residuals->data[i] = 0.0;
  }
  for (k = 0; k < inner; k++) {
    aoffset = k * X->size[0];
    for (i = 0; i <= nx; i++) {
      out->residuals->data[i] += X->data[aoffset + i] * b2->data[k];
    }
  }
  k = out->residuals->size[0];
  out->residuals->size[0] = y->size[0];
  emxEnsureCapacity_real_T(out->residuals, k);
  nx = y->size[0];
  for (k = 0; k < nx; k++) {
    out->residuals->data[k] = (y->data[k] - out->residuals->data[k]) / auxscale;
  }
  /*  Store in output structure the outliers found with confidence level conflev
   */
  /*  which has been usedto declared the outliers */
  if (X->size[0] < 1) {
    c->size[0] = 1;
    c->size[1] = 0;
  } else {
    k = c->size[0] * c->size[1];
    c->size[0] = 1;
    c->size[1] = X->size[0];
    emxEnsureCapacity_real_T(c, k);
    nx = X->size[0] - 1;
    for (k = 0; k <= nx; k++) {
      c->data[k] = (double)k + 1.0;
    }
  }
  nx = out->residuals->size[0];
  k = b2->size[0];
  b2->size[0] = out->residuals->size[0];
  emxEnsureCapacity_real_T(b2, k);
  for (k = 0; k < nx; k++) {
    b2->data[k] = fabs(out->residuals->data[k]);
  }
  if ((varargin_10 >= 0.0) && (varargin_10 <= 1.0)) {
    if ((varargin_10 > 0.0) && (varargin_10 < 1.0)) {
      F = (gammaincinv(varargin_10, 0.5)).re * 2.0;
    } else if (varargin_10 == 0.0) {
      F = 0.0;
    } else {
      F = rtInf;
    }
  } else {
    F = rtNaN;
  }
  F = sqrt(F);
  k = b_b2->size[0];
  b_b2->size[0] = b2->size[0];
  emxEnsureCapacity_boolean_T(b_b2, k);
  nx = b2->size[0];
  for (k = 0; k < nx; k++) {
    b_b2->data[k] = (b2->data[k] > F);
  }
  emxFree_real_T(&b2);
  inner = b_b2->size[0] - 1;
  aoffset = 0;
  for (i = 0; i <= inner; i++) {
    if (b_b2->data[i]) {
      aoffset++;
    }
  }
  emxInit_int32_T(&r2, 1);
  k = r2->size[0];
  r2->size[0] = aoffset;
  emxEnsureCapacity_int32_T(r2, k);
  nx = 0;
  for (i = 0; i <= inner; i++) {
    if (b_b2->data[i]) {
      r2->data[nx] = i + 1;
      nx++;
    }
  }
  emxFree_boolean_T(&b_b2);
  k = out->outliers->size[0] * out->outliers->size[1];
  out->outliers->size[0] = 1;
  out->outliers->size[1] = r2->size[0];
  emxEnsureCapacity_real_T(out->outliers, k);
  nx = r2->size[0];
  for (k = 0; k < nx; k++) {
    out->outliers->data[k] = c->data[r2->data[k] - 1];
  }
  emxFree_int32_T(&r2);
  emxFree_real_T(&c);
  out->conflev = varargin_10;
  k = out->rhofunc->size[0] * out->rhofunc->size[1];
  out->rhofunc->size[0] = varargin_16->size[0];
  out->rhofunc->size[1] = varargin_16->size[1];
  emxEnsureCapacity_char_T(out->rhofunc, k);
  nx = varargin_16->size[0] * varargin_16->size[1];
  for (k = 0; k < nx; k++) {
    out->rhofunc->data[k] = varargin_16->data[k];
  }
  /*  In case of Hampel or hyperbolic tangent estimator store the additional */
  /*  parameters which have been used */
  /*  For Hampel store a vector of length 3 containing parameters a, b and c */
  /*  For hyperbolic store the value of k= sup CVC */
  /*  Store X (without the column of ones if there is an intercept) */
  /*  Plot of residual with outliers highlighted */
}

/* End of code generation (MMregcore.c) */
