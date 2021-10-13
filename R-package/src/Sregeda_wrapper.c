/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Sregeda_wrapper.c
 *
 * Code generation for function 'Sregeda_wrapper'
 *
 */

/* Include files */
#include <R.h>

#include "Sregeda_wrapper.h"
#include "HAbdp.h"
#include "HArho.h"
#include "HYPrho.h"
#include "Mscale.h"
#include "OPTbdp.h"
#include "OPTrho.h"
#include "Sreg.h"
#include "Sregeda.h"
#include "TBbdp.h"
#include "TBrho.h"
#include "bc.h"
#include "blockedSummation.h"
#include "chkinputR.h"
#include "erfcinv.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_initialize.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "median.h"
#include "minOrMax.h"
#include "mldivide.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "strcmp.h"
#include "subsets.h"
#include "tic.h"
#include "toc.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <stdio.h>
#include <string.h>

/* Function Definitions */
void Sregeda_wrapper(const emxArray_real_T *y, const emxArray_real_T *X,
                     const emxArray_real_T *bdp, double bestr, double conflev,
                     bool intercept, double minsctol, bool msg, bool nocheck,
                     double nsamp, double refsteps, double refstepsbestr,
                     double reftol, double reftolbestr,
                     const emxArray_char_T *rhofunc,
                     const emxArray_real_T *rhofuncparam, struct_Sregeda_T *out,
                     emxArray_real_T *C)
{
  static const char b_cv[7] = {'S', 'r', 'e', 'g', 'e', 'd', 'a'};
  emxArray_boolean_T *r1;
  emxArray_int32_T *r;
  emxArray_int32_T *r2;
  emxArray_real_T b_time_data;
  emxArray_real_T *Xb;
  emxArray_real_T *abc;
  emxArray_real_T *bestbetas;
  emxArray_real_T *bestscales;
  emxArray_real_T *bestsubset;
  emxArray_real_T *beta;
  emxArray_real_T *c;
  emxArray_real_T *psifunc_c1;
  emxArray_real_T *residuals;
  emxArray_real_T *resrw;
  emxArray_real_T *seq;
  emxArray_real_T *superbestsubset;
  double time_data[1000];
  double varargin_1[50];
  double row[5];
  double b_varargin_1[3];
  const double *X_data;
  const double *bdp_data;
  const double *rhofuncparam_data;
  const double *y_data;
  double A=0;
  double B=0;
  double b_c=0;
  double b_conflev;
  double d=0;
  double kc=0;
  double kdef;
  double nselected;
  double p;
  double psifunc_kc1=0;
  double scalerw;
  double scaletest=1;
  double singsub;
  double sworst;
  double tsampling;
  double *C_data;
  double *abc_data;
  double *bestbetas_data;
  double *bestscales_data;
  double *bestsubset_data;
  double *beta_data;
  double *c_data;
  double *psifunc_c1_data;
  double *resrw_data;
  double *seq_data;
  double *superbestsubset_data;
  int psifunc_class_size[2];
  int b_i;
  int i;
  int i1;
  int i2;
  unsigned int ij;
  int jj;
  int k;
  int loop_ub;
  int loop_ub_tmp;
  int nx;
  int time_size;
  int *r4;
  int *r5;
  char psifunc_class_data[3];
  const char *rhofunc_data;
  bool w;
  bool *r3;
  if (!isInitialized_fsdaC) {
    fsdaC_initialize();
  }
  rhofuncparam_data = rhofuncparam->data;
  rhofunc_data = rhofunc->data;
  bdp_data = bdp->data;
  X_data = X->data;
  y_data = y->data;
  /*  Sreg wrapper. NV pair names are not taken as */
  /*  inputs. Instead, just the values are taken as inputs. */
  /*  Required input arguments */
  /*  y: a column vector of doubles of any length */
  /*  ARGS{1}{1} = coder.typeof(0,[Inf 1],[1 0]); */
  /*  X: an array of doubles of any dimensions */
  /*  ARGS{1}{2} = coder.typeof(0,[Inf Inf],[1 1]); */
  /*  Optional input arguments (name / pairs) in (case insensitive) */
  /*  alphabetical order */
  /*  bdp a column vector of any length */
  /*  bestr a scalar double */
  /*  conflev a scalar double */
  /*  intercept */
  /*  minsctol a scalar double */
  /*  msg is a boolean */
  /*  nocheck is a boolean */
  /*  nsamp a scalar double */
  /*  refsteps: a scalar of type double */
  /*  refstepsbestr: a scalar of type double */
  /*  reftol: a scalar of type double */
  /*  reftolbestr: a scalar of type double */
  /*  rhofunc: a character */
  /*  rhofuncparam */
  /*  assert(size(rhofuncparam,2) == 1); */
  /* Sregeda computes S estimators in linear regression for a series of values
   * of bdp */
  /*  */
  /* <a href="matlab: docsearchFS('Sregeda')">Link to the help function</a> */
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
  /*          bdp :  breakdown point. Scalar or vector. */
  /*                It measures the fraction of outliers */
  /*                the algorithm should resist. In this case any value greater
   */
  /*                than 0 but smaller or equal than 0.5 will do fine. */
  /*                The default for bdp is a sequence from 0.5 to 0.01 */
  /*                with step -0.01. The sequence is forced to be monotonically
   */
  /*                decreasing. */
  /*                  Example - 'bdp',[0.5 0.4 0.3 0.2 0.1] */
  /*                  Data Types - double */
  /*  */
  /*       bestr  : number of "best betas" to remember. Scalar. Scalar defining
   */
  /*                number of "best betas" to remember from the subsamples. */
  /*                These will be later iterated until convergence (default=5).
   */
  /*                  Example - 'bestr',10 */
  /*                  Data Types - single | double */
  /*  */
  /*      conflev :  Confidence level which is */
  /*                used to declare units as outliers. Scalar. */
  /*                Usually conflev=0.95, 0.975 0.99 (individual alpha) */
  /*                or 1-0.05/n, 1-0.025/n, 1-0.01/n (simultaneous alpha). */
  /*                Default value is 0.975 */
  /*                  Example - 'conflev',0.99 */
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
  /*      minsctol: tolerance for the iterative */
  /*                procedure for finding the minimum value of the scale.
   * Scalar. */
  /*                Value of tolerance for the iterative */
  /*                procedure for finding the minimum value of the scale */
  /*                for each subset and each of the best subsets */
  /*                (It is used by subroutine minscale.m) */
  /*                The default value is 1e-7; */
  /*                  Example - 'minsctol',1e-7 */
  /*                  Data Types - single | double */
  /*  */
  /*         msg  : Level of output to display. Scalar. It controls whether */
  /*                  to display or not messages on the screen. */
  /*                If msg==1 (default) messages are displayed */
  /*                on the screen about estimated time to compute the estimator
   */
  /*                and the warnings about */
  /*                'MATLAB:rankDeficientMatrix', 'MATLAB:singularMatrix' and */
  /*                'MATLAB:nearlySingularMatrix' are set to off */
  /*                else no message is displayed on the screen */
  /*                  Example - 'msg',0 */
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
  /*        nsamp   : Number of subsamples which will be extracted to find the
   */
  /*                  robust estimator. Scalar. If nsamp=0 all subsets will be
   * extracted. */
  /*                  They will be (n choose p). */
  /*                  If the number of all possible subset is <1000 the */
  /*                  default is to extract all subsets otherwise just 1000. */
  /*                  Example - 'nsamp',1000 */
  /*                  Data Types - single | double */
  /*  */
  /*     refsteps : Number of refining iterations. Scalar. Number of refining */
  /*                iterationsin each subsample (default = 3). */
  /*                refsteps = 0 means "raw-subsampling" without iterations. */
  /*                  Example - 'refsteps',10 */
  /*                  Data Types - single | double */
  /*  */
  /* refstepsbestr: number of refining iterations for each best subset. Scalar.
   */
  /*                Scalar defining number of refining iterations for each */
  /*                best subset (default = 50). */
  /*                  Example - 'refstepsbestr',10 */
  /*                  Data Types - single | double */
  /*  */
  /*      reftol  : tolerance for the refining steps. Scalar. */
  /*                The default value is 1e-6; */
  /*                  Example - 'reftol',1e-05 */
  /*                  Data Types - single | double */
  /*  */
  /*  reftolbestr : Tolerance for the refining steps. Scalar. */
  /*                Tolerance for the refining steps */
  /*                for each of the best subsets */
  /*                The default value is 1e-8; */
  /*                  Example - 'reftolbestr',1e-10 */
  /*                  Data Types - single | double */
  /*  */
  /*      rhofunc : rho function. String. String which specifies the rho */
  /*                function which must be used to weight the residuals. */
  /*                Possible values are */
  /*                'bisquare' */
  /*                'optimal' */
  /*                'hyperbolic' */
  /*                'hampel' */
  /*                'mdpd'. */
  /*                'bisquare' uses Tukey's $\rho$ and $\psi$ functions. */
  /*                See TBrho.m and TBpsi.m. */
  /*                'optimal' uses optimal $\rho$ and $\psi$ functions. */
  /*                See OPTrho.m and OPTpsi.m. */
  /*                'hyperbolic' uses hyperbolic $\rho$ and $\psi$ functions. */
  /*                See HYPrho.m and HYPpsi.m. */
  /*                'hampel' uses Hampel $\rho$ and $\psi$ functions. */
  /*                See HArho.m and HApsi.m. */
  /*                'mdpd' uses Minimum Density Power Divergence $\rho$ and
   * $\psi$ functions. */
  /*                See PDrho.m and PDpsi.m. */
  /*                The default is bisquare */
  /*                  Example - 'rhofunc','optimal' */
  /*                  Data Types - double */
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
  /*        plots : Plot on the screen. Scalar. */
  /*                If plots = 1, generates a plot with the robust residuals */
  /*                for each value of bdp. The confidence level used to draw the
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
  /*   out :     A structure containing the following fields */
  /*  */
  /*             out.Beta = matrix containing the S estimator of regression */
  /*                        coefficients for each value of bdp */
  /*             out.Scale= vector containing the estimate of the scale */
  /*                        (sigma) for each value of bdp. This is the value of
   * the objective function */
  /*               out.BS = p x 1 vector containing the units forming best
   * subset */
  /*                        associated with S estimate of regression
   * coefficient. */
  /*               out.RES= n x length(bdp) matrix containing the robust */
  /*                        scaled residuals for each value of bdp */
  /*          out.Weights = n x length(bdp) vector containing the estimates of
   */
  /*                        the weights for each value of bdp */
  /*         out.Outliers = Boolean matrix containing the list of */
  /*                        the units declared as outliers for each value of bdp
   * using confidence */
  /*                        level specified in input scalar conflev */
  /*          out.conflev = confidence level which has been used to declare */
  /*                        outliers. */
  /*          out.Singsub = Number of subsets wihtout full rank. Notice that */
  /*                        out.singsub(bdp(jj)) > 0.1*(number of subsamples)
   * produces a */
  /*                        warning */
  /*          out.rhofunc = string identifying the rho function which has been
   */
  /*                        used */
  /*     out.rhofuncparam = vector which contains the additional parameters */
  /*                        for the specified rho function which have been */
  /*                        used. For hyperbolic rho function the value of */
  /*                        k =sup CVC. For Hampel rho function the parameters
   */
  /*                        a, b and c.  This field is present only if input */
  /*                        argument 'rhofunc' is  'hyperbolic' or 'hampel'. */
  /*            out.bdp   = vector which contains the values of bdp which have
   */
  /*                        been used */
  /*             out.y    = response vector y. */
  /*             out.X    = data matrix X. */
  /*            out.class = 'Sregeda' */
  /*  */
  /*   Optional Output: */
  /*  */
  /*             C        : matrix containing the indices of the subsamples */
  /*                        extracted for computing the estimate (the so called
   */
  /*                        elemental sets). */
  /*  */
  /*  See also: Sreg, MMreg, Taureg */
  /*  */
  /*  References: */
  /*  */
  /*  Riani, M., Cerioli, A., Atkinson, A.C. and Perrotta, D. (2014), Monitoring
   */
  /*  Robust Regression, "Electronic Journal of Statistics", Vol. 8, pp.
   * 646-677. */
  /*  */
  /*  Maronna, R.A., Martin D. and Yohai V.J. (2006), "Robust Statistics, Theory
   */
  /*  and Methods", Wiley, New York. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* <a href="matlab: docsearchFS('Sregeda')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Examples: */
  /* { */
  /*     %% Sregeda with msg=0. */
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
  /*     [out]=Sregeda(ycont,X,'msg',0); */
  /*     resfwdplot(out) */
  /*     ylabel('Scaled S residuals'); */
  /* } */
  /* { */
  /*     % Sreg with optional input arguments. */
  /*     % Sreg with optimal rho function. Run this code to see the output shown
   * in the help file */
  /*     n=200; */
  /*     p=3; */
  /*     randn('state', 123456); */
  /*     X=randn(n,p); */
  /*     % Uncontaminated data */
  /*     y=randn(n,1); */
  /*     % Contaminated data */
  /*     ycont=y; */
  /*     ycont(1:5)=ycont(1:5)+6; */
  /*     [out]=Sregeda(ycont,X,'rhofunc','optimal'); */
  /* } */
  /* { */
  /*     % Sreg with hyperbolic rho function. */
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
  /*     [out]=Sregeda(ycont,X,'rhofunc','hyperbolic'); */
  /* } */
  /* { */
  /*     %% Sreg on Stars data. */
  /*     % Run this code to see the Figure 2 of the article in the References */
  /*     load('stars'); */
  /*     X=stars{:,1}; */
  /*     y=stars{:,2}; */
  /*     [out]=Sregeda(y,X,'rhofunc','bisquare'); */
  /*  */
  /*     standard.Color={'b'} */
  /*     standard.xvalues=size(out.RES,1)-size(out.RES,2)+1:size(out.RES,1) */
  /*     fground.Color={'r'} */
  /*     resfwdplot(out,'standard',standard,'fground',fground) */
  /*     ylabel('Scaled S residuals'); */
  /*  */
  /*      */
  /*     RHO = []; */
  /*     for i=1:49 */
  /*         RHO(i,1) = corr(out.RES(:,i),out.RES(:,i+1),'type','Spearman'); */
  /*         RHO(i,2) = corr(out.RES(:,i),out.RES(:,i+1),'type','Kendall'); */
  /*         RHO(i,3) = corr(out.RES(:,i),out.RES(:,i+1),'type','Pearson'); */
  /*     end */
  /*     minc = min(RHO); */
  /*     maxc = max(RHO); */
  /*     ylimits = [min(minc)*0.8,max(maxc)*1.1]; */
  /*     figure; */
  /*     subplot(3,1,1); */
  /*     plot(out.bdp(1:49),RHO(:,1)'); */
  /*     if strcmp(out.class,'Sregeda') */
  /*         set(gca,'XDir','reverse','ylim',ylimits); */
  /*         title('Spearman'); */
  /*     end */
  /*  */
  /*     subplot(3,1,2); */
  /*     plot(out.bdp(1:49),RHO(:,2)'); */
  /*     if strcmp(out.class,'Sregeda') */
  /*         set(gca,'XDir','reverse','ylim',ylimits); */
  /*         title('Kendall'); */
  /*     end */
  /*  */
  /*     subplot(3,1,3); */
  /*     plot(out.bdp(1:49),RHO(:,3)'); */
  /*     if strcmp(out.class,'Sregeda') */
  /*         set(gca,'XDir','reverse','ylim',ylimits); */
  /*         title('Pearson'); */
  /*     end */
  /*  */
  /* } */
  /*  Beginning of code */
  i = out->y->size[0];
  out->y->size[0] = y->size[0];
  emxEnsureCapacity_real_T(out->y, i);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->y->data[i] = y_data[i];
  }
  i = out->X->size[0] * out->X->size[1];
  out->X->size[0] = X->size[0];
  out->X->size[1] = X->size[1];
  emxEnsureCapacity_real_T(out->X, i);
  loop_ub = X->size[0] * X->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->X->data[i] = X_data[i];
  }
  chkinputR(out->y, out->X, intercept, nocheck, &kdef, &p);
  /*  default value of break down point */
  /*  default values of subsamples to extract */
  /*  default value of number of refining iterations (C steps) for each
   * extracted subset */
  /*  default value of tolerance for the refining steps convergence for  each
   * extracted subset */
  /*  default value of number of best betas to remember */
  /*  default value of number of refining iterations (C steps) for best subsets
   */
  /*  default value of tolerance for the refining steps convergence for best
   * subsets */
  /*  default value of tolerance for finding the minimum value of the scale */
  /*  both for each extracted subset and each of the best subsets */
  /*  rho (psi) function which has to be used to weight the residuals */
  /* rhofuncdef='optimal'; */
  /*  Write in structure 'options' the options chosen by the user */
  i = out->bdp->size[0];
  out->bdp->size[0] = bdp->size[0];
  emxEnsureCapacity_real_T(out->bdp, i);
  loop_ub = bdp->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->bdp->data[i] = bdp_data[i];
  }
  /*  break down point */
  /*  refining steps */
  /*  tolerance for refining steps */
  /*  best betas for refining steps till convergence */
  /*  subsamples to extract */
  /*  tolerance for finding minimum value of the scale for each subset */
  /*  refining steps for the best subsets */
  /*  tolerance for refining steps for the best subsets */
  /*  Scalar which controls the messages displayed on the screen */
  /*  String which specifies the function to use to weight the residuals */
  if ((!(b_minimum(bdp) < 0.0)) && (!(b_maximum(bdp) > 0.5))) {
    f_sort(out->bdp);
  }
  /*  Extract in the rows of matrix C the indexes of all required subsets */
  subsets(nsamp, kdef, p, bc(kdef, p), C, &nselected);
  C_data = C->data;
  /*  Store the indices in varargout */
  /*  Store in output structure the outliers found with confidence level conflev
   */
  out->conflev = conflev;
  b_conflev = (conflev + 1.0) / 2.0;
  emxInit_real_T(&seq, 2);
  seq_data = seq->data;
  if (rtIsNaN(kdef)) {
    i = seq->size[0] * seq->size[1];
    seq->size[0] = 1;
    seq->size[1] = 1;
    emxEnsureCapacity_real_T(seq, i);
    seq_data = seq->data;
    seq_data[0] = rtNaN;
  } else if (kdef < 1.0) {
    seq->size[0] = 1;
    seq->size[1] = 0;
  } else if (rtIsInf(kdef) && (1.0 == kdef)) {
    i = seq->size[0] * seq->size[1];
    seq->size[0] = 1;
    seq->size[1] = 1;
    emxEnsureCapacity_real_T(seq, i);
    seq_data = seq->data;
    seq_data[0] = rtNaN;
  } else {
    i = seq->size[0] * seq->size[1];
    seq->size[0] = 1;
    loop_ub = (int)floor(kdef - 1.0);
    seq->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(seq, i);
    seq_data = seq->data;
    for (i = 0; i <= loop_ub; i++) {
      seq_data[i] = (double)i + 1.0;
    }
  }
  /*  Define matrices which will store relevant quantities */
  /*  Beta= matrix which will contain beta coefficients */
  i = out->Beta->size[0] * out->Beta->size[1];
  out->Beta->size[0] = (int)p;
  out->Beta->size[1] = out->bdp->size[0];
  emxEnsureCapacity_real_T(out->Beta, i);
  loop_ub = (int)p * out->bdp->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->Beta->data[i] = 0.0;
  }
  /*  Scale = vector which will contain the estimate of the scale */
  i = out->Scale->size[0];
  out->Scale->size[0] = out->bdp->size[0];
  emxEnsureCapacity_real_T(out->Scale, i);
  loop_ub = out->bdp->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->Scale->data[i] = 0.0;
  }
  i = out->BS->size[0] * out->BS->size[1];
  out->BS->size[0] = (int)p;
  out->BS->size[1] = out->bdp->size[0];
  emxEnsureCapacity_real_T(out->BS, i);
  loop_ub = (int)p * out->bdp->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->BS->data[i] = 0.0;
  }
  i = out->Weights->size[0] * out->Weights->size[1];
  out->Weights->size[0] = (int)kdef;
  out->Weights->size[1] = out->bdp->size[0];
  emxEnsureCapacity_real_T(out->Weights, i);
  loop_ub = (int)kdef * out->bdp->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->Weights->data[i] = 0.0;
  }
  i = out->RES->size[0] * out->RES->size[1];
  out->RES->size[0] = (int)kdef;
  out->RES->size[1] = out->bdp->size[0];
  emxEnsureCapacity_real_T(out->RES, i);
  loop_ub = (int)kdef * out->bdp->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->RES->data[i] = 0.0;
  }
  i = out->Singsub->size[0];
  out->Singsub->size[0] = out->bdp->size[0];
  emxEnsureCapacity_real_T(out->Singsub, i);
  loop_ub = out->bdp->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->Singsub->data[i] = 0.0;
  }
  i = out->Outliers->size[0] * out->Outliers->size[1];
  out->Outliers->size[0] = (int)kdef;
  out->Outliers->size[1] = out->bdp->size[0];
  emxEnsureCapacity_boolean_T(out->Outliers, i);
  loop_ub = (int)kdef * out->bdp->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->Outliers->data[i] = false;
  }
  out->rhofuncparam->size[0] = 0;
  out->rhofuncparam->size[1] = 0;
  i = out->bdp->size[0];
  emxInit_real_T(&psifunc_c1, 1);
  psifunc_c1_data = psifunc_c1->data;
  emxInit_real_T(&abc, 2);
  emxInit_real_T(&bestbetas, 2);
  emxInit_real_T(&bestsubset, 2);
  emxInit_real_T(&bestscales, 1);
  emxInit_real_T(&Xb, 2);
  emxInit_real_T(&beta, 1);
  emxInit_real_T(&resrw, 1);
  emxInit_real_T(&superbestsubset, 2);
  emxInit_real_T(&residuals, 1);
  emxInit_int32_T(&r, 1);
  emxInit_boolean_T(&r1, 1);
  emxInit_int32_T(&r2, 1);
  emxInit_real_T(&c, 1);
  for (jj = 0; jj < i; jj++) {
    if (l_strcmp(rhofunc)) {
      /*  Tukey's biweight is strictly increasing on [0 c] and constant (equal
       * to c^2/6) on [c \infty) */
      /*  E(\rho) = kc = (c^2/6)*bdp = TBrho(c,c)*bdp, being kc the K of
       * Rousseeuw */
      /*  and Leroy (1987) */
      /*  Compute tuning constant associated to the requested breakdown */
      /*  point */
      /*  For bdp =0.5 and Tukey biweight rho function c1=0.4046 */
      /*  Remark: given that in function OPTbdp rho function is defined in the
       * interval 0---2c/3, 2c/3---3c/3, >3c/3 */
      /*  it is necessary to divide the output of OPTbdp by 3 */
      b_c = TBbdp(out->bdp->data[jj]);
      /*  kc1 = E(rho) = sup(rho)*bdp */
      /* TBrho computes rho function for Tukey's biweight */
      /*  */
      /* <a href="matlab: docsearchFS('TBrho')">Link to the help function</a> */
      /*  */
      /*   Required input arguments: */
      /*  */
      /*     u:         scaled residuals or Mahalanobis distances. Vector. n x 1
       */
      /*                vector containing residuals or Mahalanobis distances */
      /*                for the n units of the sample */
      /*     c :        tuning parameter. Scalar. Scalar greater than 0 which */
      /*                controls the robustness/efficiency of the estimator */
      /*                (beta in regression or mu in the location case ...)  */
      /*  */
      /*   Optional input arguments: */
      /*  */
      /*   Output: */
      /*  */
      /*    rhoTB :      n x 1 vector which contains the Tukey's biweight rho */
      /*                 associated to the residuals or Mahalanobis distances
       * for */
      /*                 the n units of the sample. */
      /*  */
      /*  More About: */
      /*  */
      /*  function TBrho transforms vector u as follows  */
      /*  \[ */
      /*  TBrho(u)= \left\{ */
      /*     \begin{array}{cc} */
      /*   (c^2/6) \left\{ 1-[1-(u/c)^2]^3 \right\}  &  |u/c| \leq 1  \\ */
      /*   (c^2/6)                      &  |u/c| >1   \\ */
      /*  \end{array} */
      /*     \right. */
      /*   \] */
      /*    */
      /*  See equation (2.37) p. 29 of Maronna et al. (2006). */
      /*  Remark: equation (2.37) is written in standardized terms in such a way
       */
      /*  that $\rho(c)=1$, so it is the previous expression divided by
       * $(c^2/6)$ */
      /*  */
      /*  See also HYPrho, HArho, OPTrho */
      /*  */
      /*  References: */
      /*  */
      /*  Maronna, R.A., Martin D. and Yohai V.J. (2006), "Robust Statistics,
       * Theory */
      /*  and Methods", Wiley, New York. */
      /*  Riani, M., Cerioli, A. and Torti, F. (2014), On consistency factors
       * and */
      /*  efficiency of robust S-estimators, "TEST", Vol. 23, pp. 356-387. */
      /*  http://dx.doi.org/10.1007/s11749-014-0357-7 */
      /*  */
      /*  Copyright 2008-2021. */
      /*  Written by FSDA team */
      /*  */
      /* <a href="matlab: docsearchFS('TBrho')">Link to the help page for this
       * function</a> */
      /*  */
      /* $LastChangedDate::                      $: Date of the last commit */
      /*  Examples: */
      /* { */
      /*     % Plot of rho function. */
      /*     close all */
      /*     x=-6:0.01:6; */
      /*     rhoTB=TBrho(x,2); */
      /*     plot(x,rhoTB,'LineWidth',2) */
      /*     xlabel('$u$','Interpreter','Latex') */
      /*     ylabel('$\rho (u,2)$','Interpreter','Latex') */
      /*     text(x(1)-0.8,rhoTB(1),'c^2/6') */
      /*     text(x(end)+0.2,rhoTB(end),'c^2/6') */
      /*     title('$\rho (u,c)$','Interpreter','Latex') */
      /*     hold('on') */
      /*     c=2; */
      /*     stem(c,c^2/6,'LineStyle',':','LineWidth',1) */
      /*     stem(-c,c^2/6,'LineStyle',':','LineWidth',1) */
      /*  */
      /* } */
      /* { */
      /*     %% Compare two rho functions for 2 different values of c.   */
      /*     % In the first we fix the bdp (value of efficiency is automatically
       * given), */
      /*     % while in the second we find the efficiency (the value of bdp is
       */
      /*     % automatically given) */
      /*     close all */
      /*     x=-6:0.01:6; */
      /*     lwd=2; */
      /*     hold('on') */
      /*     c=TBbdp(0.5,1); */
      /*     rhoTB=TBrho(x,c); */
      /*     rhoTB=rhoTB/max(rhoTB); */
      /*     plot(x,rhoTB,'LineStyle','-','LineWidth',lwd) */
      /*     c=TBeff(0.95,1); */
      /*     rhoTB=TBrho(x,c); */
      /*     rhoTB=rhoTB/max(rhoTB); */
      /*     plot(x,rhoTB,'LineStyle','-.','LineWidth',lwd) */
      /*     xlabel('$x$','Interpreter','Latex','FontSize',16) */
      /*     ylabel('TB. Normalized
       * $\rho_c(x)$','Interpreter','Latex','FontSize',20) */
      /*     legend({'$c_{(bdp=0.5 \mapsto eff=0.29)}$', '$c_{(eff=0.95 \mapsto
       * bdp=0.12)}$'},'Interpreter','Latex','Location','SouthEast','FontSize',16)
       */
      /* } */
      /*  Beginning of code */
      /*  MATLAB Ccoder instruction to enforce that c is a scalar */
      w = (fabs(b_c) <= b_c);
      kdef = rt_powd_snf(b_c, 2.0);
      tsampling = rt_powd_snf(b_c, 4.0);
      sworst = b_c * b_c;
      kc = (kdef / 2.0 *
                ((1.0 - kdef / sworst) + tsampling / (3.0 * tsampling)) *
                (double)w +
            (1.0 - (double)w) * (sworst / 6.0)) *
           out->bdp->data[jj];
      i1 = psifunc_c1->size[0];
      psifunc_c1->size[0] = 1;
      emxEnsureCapacity_real_T(psifunc_c1, i1);
      psifunc_c1_data = psifunc_c1->data;
      psifunc_c1_data[0] = b_c;
      psifunc_kc1 = kc;
      psifunc_class_size[0] = 1;
      psifunc_class_size[1] = 2;
      psifunc_class_data[0] = 'T';
      psifunc_class_data[1] = 'B';
    } else if (m_strcmp(rhofunc)) {
      /*  Optimal rho function is strictly increasing on [0 3c] and constant
       * (equal to 3.25c^2) on [3c \infty) */
      /*  E(\rho) = kc = (3.25c^2)*bdp = TBrho(3*c,c)*bdp, being kc the K of */
      /*  Rousseeuw and Leroy (1987) */
      /*  Compute tuning constant associated to the requested breakdown */
      /*  point */
      /*  For bdp =0.5 and optimal rho function c1=0.4046 */
      /*  Remark: given that in function OPTbdp rho function is defined in the
       * interval 0---2c/3, 2c/3---3c/3, >3c/3 */
      /*  it is necessary to divide the output of OPTbdp by 3 */
      b_c = OPTbdp(out->bdp->data[jj]) / 3.0;
      /*  kc1 = E(rho) = sup(rho)*bdp */
      kc = OPTrho(3.0 * b_c, b_c) * out->bdp->data[jj];
      i1 = psifunc_c1->size[0];
      psifunc_c1->size[0] = 1;
      emxEnsureCapacity_real_T(psifunc_c1, i1);
      psifunc_c1_data = psifunc_c1->data;
      psifunc_c1_data[0] = b_c;
      psifunc_kc1 = kc;
      psifunc_class_size[0] = 1;
      psifunc_class_size[1] = 3;
      psifunc_class_data[0] = 'O';
      psifunc_class_data[1] = 'P';
      psifunc_class_data[2] = 'T';
    } else if (n_strcmp(rhofunc)) {
      if ((rhofuncparam->size[0] == 0) || (rhofuncparam->size[1] == 0)) {
        kdef = 4.5;
      } else {
        kdef = rhofuncparam_data[0];
        /*  Instruction necessary for Ccoder */
      }
      i1 = out->rhofuncparam->size[0] * out->rhofuncparam->size[1];
      out->rhofuncparam->size[0] = 1;
      out->rhofuncparam->size[1] = 1;
      emxEnsureCapacity_real_T(out->rhofuncparam, i1);
      out->rhofuncparam->data[0] = kdef;
      /*  Use (if possible) precalculated values of c,A,b,d and kc */
      for (k = 0; k < 50; k++) {
        varargin_1[k] = fabs(out->bdp->data[jj] - dv5[k]);
      }
      e_minimum(varargin_1, &tsampling, &k);
      b_varargin_1[0] = fabs(kdef - 4.0);
      b_varargin_1[1] = fabs(kdef - 4.5);
      b_varargin_1[2] = fabs(kdef - 5.0);
      f_minimum(b_varargin_1, &sworst, &nx);
      if ((tsampling < 1.0E-6) && (sworst < 1.0E-6)) {
        /*  Load precalculated values of tuning constants */
        for (i1 = 0; i1 < 5; i1++) {
          row[i1] = dv6[((k + 50 * (i1 + 1)) + 300 * (nx - 1)) - 1];
        }
        b_c = row[0];
        A = row[1];
        B = row[2];
        d = row[3];
        kc = row[4];
        /*      % Use (if possible) precalculated values of c,A,b,d and kc */
        /*      if kdef == 4 && bdp(jj)==0.5 */
        /*          c =2.158325031399727; */
        /*          A =1.627074124322223e-04; */
        /*          B =0.006991738279441; */
        /*          d =0.016982948780061; */
        /*          kc=0.010460153813287; */
        /*  */
        /*      elseif kdef == 4.5 && bdp(jj)==0.5 */
        /*          c =2.010311082005501; */
        /*          A =0.008931591866092; */
        /*          B =0.051928487236632; */
        /*          d =0.132017481327058; */
        /*          kc=0.074478627985759; */
        /*      elseif kdef == 5 && bdp(jj)==0.5 */
        /*          c =1.900709968805313; */
        /*          A =0.023186529890225; */
        /*          B =0.083526860351552; */
        /*          d =0.221246910095216; */
        /*          kc=0.116380290077336; */
        /*      elseif kdef == 4.5 && bdp(jj)==0.25 */
        /*          c =2.679452645778656; */
        /*          A =0.464174145115400; */
        /*          B =0.588821276233494; */
        /*          d =1.092639541625978; */
        /*          kc=0.410853066399912; */
      }
      row[0] = b_c;
      row[1] = kdef;
      row[2] = A;
      row[3] = B;
      row[4] = d;
      i1 = psifunc_c1->size[0];
      psifunc_c1->size[0] = 5;
      emxEnsureCapacity_real_T(psifunc_c1, i1);
      psifunc_c1_data = psifunc_c1->data;
      for (i1 = 0; i1 < 5; i1++) {
        psifunc_c1_data[i1] = row[i1];
      }
      psifunc_kc1 = kc;
      psifunc_class_size[0] = 1;
      psifunc_class_size[1] = 3;
      psifunc_class_data[0] = 'H';
      psifunc_class_data[1] = 'Y';
      psifunc_class_data[2] = 'P';
    } else if (o_strcmp(rhofunc)) {
      if ((rhofuncparam->size[0] == 0) || (rhofuncparam->size[1] == 0)) {
        i1 = abc->size[0] * abc->size[1];
        abc->size[0] = 3;
        abc->size[1] = 1;
        emxEnsureCapacity_real_T(abc, i1);
        abc_data = abc->data;
        abc_data[0] = 2.0;
        abc_data[1] = 4.0;
        abc_data[2] = 8.0;
      } else {
        i1 = abc->size[0] * abc->size[1];
        abc->size[0] = rhofuncparam->size[0];
        abc->size[1] = 1;
        emxEnsureCapacity_real_T(abc, i1);
        abc_data = abc->data;
        loop_ub = rhofuncparam->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          abc_data[i1] = rhofuncparam_data[i1];
        }
      }
      i1 = out->rhofuncparam->size[0] * out->rhofuncparam->size[1];
      out->rhofuncparam->size[0] = abc->size[0];
      out->rhofuncparam->size[1] = 1;
      emxEnsureCapacity_real_T(out->rhofuncparam, i1);
      loop_ub = abc->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        out->rhofuncparam->data[i1] = abc_data[i1];
      }
      /*  Compute tuning constant associated to the requested breakdown */
      /*  point */
      b_c = HAbdp(out->bdp->data[jj], abc);
      /*  kc = E(rho) = sup(rho)*bdp */
      i1 = c->size[0];
      c->size[0] = abc->size[0] + 1;
      emxEnsureCapacity_real_T(c, i1);
      c_data = c->data;
      c_data[0] = b_c;
      loop_ub = abc->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        c_data[i1 + 1] = abc_data[i1];
      }
      kc = HArho(b_c * abc_data[2], c) * out->bdp->data[jj];
      loop_ub = abc->size[0];
      i1 = psifunc_c1->size[0];
      psifunc_c1->size[0] = abc->size[0] + 1;
      emxEnsureCapacity_real_T(psifunc_c1, i1);
      psifunc_c1_data = psifunc_c1->data;
      psifunc_c1_data[0] = b_c;
      for (i1 = 0; i1 < loop_ub; i1++) {
        psifunc_c1_data[i1 + 1] = abc_data[i1];
      }
      psifunc_kc1 = kc;
      psifunc_class_size[0] = 1;
      psifunc_class_size[1] = 2;
      psifunc_class_data[0] = 'H';
      psifunc_class_data[1] = 'A';
    } else if (p_strcmp(rhofunc)) {
      /*  minimum density power divergence estimator */
      /* PDbdp finds the constant alpha associated to the supplied breakdown
       * point for minimum power divergence estimator */
      /*  */
      /* <a href="matlab: docsearchFS('PDbdp')">Link to the help function</a> */
      /*  */
      /*   Required input arguments: */
      /*  */
      /*       bdp    : breakdown point. Scalar. Scalar defining breakdown point
       */
      /*                (i.e a number between 0 and 0.5) */
      /*                Data Types - single|double */
      /*  */
      /*   Optional input arguments: */
      /*  */
      /*  Output: */
      /*  */
      /*   alpha : Requested tuning constant. Scalar. Tuning constatnt of
       * minimum */
      /*            power divergence estimator associated to requested breakdown
       * point */
      /*  */
      /*  See also: TBbdp, OPTbdp, HYPbdp, HAbdp */
      /*  */
      /*  References: */
      /*   */
      /*   Riani, M. Atkinson, A.C., Corbellini A. and Perrotta A. (2020),
       * Robust */
      /*   Regression with Density Power Divergence: Theory, Comparisons and
       * Data */
      /*   Analysis, submitted. */
      /*  */
      /*  Copyright 2008-2021. */
      /*  Written by FSDA team */
      /*  */
      /* <a href="matlab: docsearchFS('PDbdp')">Link to the help page for this
       * function</a> */
      /*  */
      /* $LastChangedDate::                      $: Date of the last commit */
      /*  */
      /*  Examples: */
      /*  */
      /* { */
      /*     % Find alpha given bdp. */
      /*     % The constant alpha associated to a breakdown point of 30% in
       * regression is  */
      /*     % alpha=1.040816326530613 */
      /*     alpha=PDbdp(0.3) */
      /* } */
      /*  */
      /*  Beginning of code */
      /*  Convergence condition is E(\rho) = sup(\rho(x)) bdp */
      /*   where sup(\rho(x)) is 1 */
      b_c = 1.0 / rt_powd_snf(1.0 - out->bdp->data[jj], 2.0) - 1.0;
      /*  kc1 = E(rho) = sup(rho)*bdp */
      kc = out->bdp->data[jj];
      i1 = psifunc_c1->size[0];
      psifunc_c1->size[0] = 1;
      emxEnsureCapacity_real_T(psifunc_c1, i1);
      psifunc_c1_data = psifunc_c1->data;
      psifunc_c1_data[0] = b_c;
      psifunc_kc1 = out->bdp->data[jj];
      psifunc_class_size[0] = 1;
      psifunc_class_size[1] = 2;
      psifunc_class_data[0] = 'P';
      psifunc_class_data[1] = 'D';
    }
    loop_ub_tmp = (int)bestr;
    i1 = bestbetas->size[0] * bestbetas->size[1];
    bestbetas->size[0] = (int)bestr;
    bestbetas->size[1] = (int)p;
    emxEnsureCapacity_real_T(bestbetas, i1);
    bestbetas_data = bestbetas->data;
    loop_ub = (int)bestr * (int)p;
    i1 = bestsubset->size[0] * bestsubset->size[1];
    bestsubset->size[0] = (int)bestr;
    bestsubset->size[1] = (int)p;
    emxEnsureCapacity_real_T(bestsubset, i1);
    bestsubset_data = bestsubset->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      bestbetas_data[i1] = 0.0;
      bestsubset_data[i1] = 0.0;
    }
    i1 = bestscales->size[0];
    bestscales->size[0] = (int)bestr;
    emxEnsureCapacity_real_T(bestscales, i1);
    bestscales_data = bestscales->data;
    for (i1 = 0; i1 < loop_ub_tmp; i1++) {
      bestscales_data[i1] = rtInf;
    }
    sworst = rtInf;
    /*  singsub = scalar which will contain the number of singular subsets which
     */
    /*  are extracted (that is the subsets of size p which are not full rank) */
    singsub = 0.0;
    /*  ij is a scalar used to ensure that the best first bestr non singular */
    /*  subsets are stored */
    ij = 1U;
    /*  initialise and start timer. */
    tsampling = ceil(fmin(nselected / 100.0, 1000.0));
    nx = (int)tsampling;
    time_size = (int)tsampling;
    if (0 <= nx - 1) {
      memset(&time_data[0], 0, nx * sizeof(double));
    }
    i1 = (int)nselected;
    for (b_i = 0; b_i < i1; b_i++) {
      if (b_i + 1U <= (unsigned int)tsampling) {
        b_tic();
      }
      /*  extract a subset of size p */
      loop_ub = C->size[1];
      nx = out->X->size[1];
      i2 = Xb->size[0] * Xb->size[1];
      Xb->size[0] = C->size[1];
      Xb->size[1] = out->X->size[1];
      emxEnsureCapacity_real_T(Xb, i2);
      abc_data = Xb->data;
      for (i2 = 0; i2 < nx; i2++) {
        for (k = 0; k < loop_ub; k++) {
          abc_data[k + Xb->size[0] * i2] =
              out->X->data[((int)C_data[b_i + C->size[0] * k] +
                            out->X->size[0] * i2) -
                           1];
        }
      }
      /*  beta estimate */
      loop_ub = C->size[1];
      i2 = c->size[0];
      c->size[0] = C->size[1];
      emxEnsureCapacity_real_T(c, i2);
      c_data = c->data;
      for (i2 = 0; i2 < loop_ub; i2++) {
        c_data[i2] = out->y->data[(int)C_data[b_i + C->size[0] * i2] - 1];
      }
      mldivide(Xb, c, beta);
      beta_data = beta->data;
      if ((!rtIsNaN(beta_data[0])) && (!rtIsInf(beta_data[0]))) {
        if (refsteps > 0.0) {
          /*  do the refsteps refining steps */
          /*  kc determines the breakdown point */
          /*  c is linked to the biweight function */
          IRWLSregS(out->y, out->X, beta, psifunc_c1, psifunc_kc1,
                    psifunc_class_data, psifunc_class_size, refsteps, reftol, c,
                    &scalerw, residuals);
          c_data = c->data;
          i2 = beta->size[0];
          beta->size[0] = c->size[0];
          emxEnsureCapacity_real_T(beta, i2);
          beta_data = beta->data;
          loop_ub = c->size[0];
          for (i2 = 0; i2 < loop_ub; i2++) {
            beta_data[i2] = c_data[i2];
          }
          mtimes(out->X, c, resrw);
          if (out->y->size[0] == resrw->size[0]) {
            i2 = resrw->size[0];
            resrw->size[0] = out->y->size[0];
            emxEnsureCapacity_real_T(resrw, i2);
            resrw_data = resrw->data;
            loop_ub = out->y->size[0];
            for (i2 = 0; i2 < loop_ub; i2++) {
              resrw_data[i2] = out->y->data[i2] - resrw_data[i2];
            }
          } else {
            cf_binary_expand_op(resrw, out);
            resrw_data = resrw->data;
          }
        } else {
          /*  no refining steps */
          mtimes(out->X, beta, resrw);
          if (out->y->size[0] == resrw->size[0]) {
            i2 = resrw->size[0];
            resrw->size[0] = out->y->size[0];
            emxEnsureCapacity_real_T(resrw, i2);
            resrw_data = resrw->data;
            loop_ub = out->y->size[0];
            for (i2 = 0; i2 < loop_ub; i2++) {
              resrw_data[i2] = out->y->data[i2] - resrw_data[i2];
            }
          } else {
            cf_binary_expand_op(resrw, out);
            resrw_data = resrw->data;
          }
          nx = resrw->size[0];
          i2 = c->size[0];
          c->size[0] = resrw->size[0];
          emxEnsureCapacity_real_T(c, i2);
          c_data = c->data;
          for (k = 0; k < nx; k++) {
            c_data[k] = fabs(resrw_data[k]);
          }
          scalerw = median(c) / 0.6745;
        }
        /*  to find s, save first the best bestr scales (deriving from non */
        /*  singular subsets) and, from iteration bestr+1 (associated to */
        /*  another non singular subset), replace the worst scale */
        /*  with a better one as follows */
        if (ij > bestr) {
          /*  compute the objective function using current residuals and */
          /*  the worst estimate of the scale among the bests previously */
          /*  stored */
          /*  scaletest = (1/n) \sum_i=1^n (u_i/(sworst*c)) */
          /*  Use function handle hrho. For example if */
          /*  for optimal psi hrho=OPTrho */
          if (q_strcmp(psifunc_class_data, psifunc_class_size)) {
            i2 = c->size[0];
            c->size[0] = resrw->size[0];
            emxEnsureCapacity_real_T(c, i2);
            c_data = c->data;
            loop_ub = resrw->size[0];
            for (i2 = 0; i2 < loop_ub; i2++) {
              c_data[i2] = resrw_data[i2] / sworst;
            }
            TBrho(c, psifunc_c1, residuals);
            scaletest = blockedSummation(residuals, residuals->size[0]) /
                        (double)residuals->size[0];
          } else if (r_strcmp(psifunc_class_data, psifunc_class_size)) {
            i2 = c->size[0];
            c->size[0] = resrw->size[0];
            emxEnsureCapacity_real_T(c, i2);
            c_data = c->data;
            loop_ub = resrw->size[0];
            for (i2 = 0; i2 < loop_ub; i2++) {
              c_data[i2] = resrw_data[i2] / sworst;
            }
            b_OPTrho(c, psifunc_c1, residuals);
            scaletest = blockedSummation(residuals, residuals->size[0]) /
                        (double)residuals->size[0];
          } else if (s_strcmp(psifunc_class_data, psifunc_class_size)) {
            i2 = c->size[0];
            c->size[0] = resrw->size[0];
            emxEnsureCapacity_real_T(c, i2);
            c_data = c->data;
            loop_ub = resrw->size[0];
            for (i2 = 0; i2 < loop_ub; i2++) {
              c_data[i2] = resrw_data[i2] / sworst;
            }
            b_HArho(c, psifunc_c1, residuals);
            scaletest = blockedSummation(residuals, residuals->size[0]) /
                        (double)residuals->size[0];
          } else if (t_strcmp(psifunc_class_data, psifunc_class_size)) {
            i2 = c->size[0];
            c->size[0] = resrw->size[0];
            emxEnsureCapacity_real_T(c, i2);
            c_data = c->data;
            loop_ub = resrw->size[0];
            for (i2 = 0; i2 < loop_ub; i2++) {
              c_data[i2] = resrw_data[i2] / sworst;
            }
            HYPrho(c, psifunc_c1, residuals);
            scaletest = blockedSummation(residuals, residuals->size[0]) /
                        (double)residuals->size[0];
          } else if (u_strcmp(psifunc_class_data, psifunc_class_size)) {
            /* PDrho computes rho function for minimum density power divergence
             * estimator  */
            /*  */
            /* <a href="matlab: docsearchFS('PDrho')">Link to the help
             * function</a> */
            /*  */
            /*   Required input arguments: */
            /*  */
            /*     u:         scaled residuals or Mahalanobis distances. Vector.
             * n x 1 */
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
            /*    rhoPD :      n x 1 vector which contains the Minimum density
             * power */
            /*                divergence rho */
            /*                 function associated to the residuals or
             * Mahalanobis */
            /*                 distances for the n units of the sample. */
            /*  */
            /*  More About: */
            /*  */
            /*  function PDrho transforms vector u as follows  */
            /*  \[ */
            /*  PDrho(u,alpha)=  1-\exp(-\alpha (u^2/2)); */
            /*       \] */
            /*    */
            /*  */
            /*  See also TBrho, HYPrho, HArho, OPTrho, HUrho */
            /*  */
            /*  References: */
            /*  */
            /*   Riani, M. Atkinson, A.C., Corbellini A. and Perrotta A. (2020),
             * Robust */
            /*   Regression with Density Power Divergence: Theory, Comparisons
             * and Data */
            /*   Analysis, submitted. */
            /*  */
            /*  Copyright 2008-2021. */
            /*  Written by FSDA team */
            /*  */
            /* <a href="matlab: docsearchFS('PDrho')">Link to the help page for
             * this function</a> */
            /*  */
            /* $LastChangedDate::                      $: Date of the last
             * commit */
            /*  Examples: */
            /* { */
            /*     % Plot of rho function. */
            /*     close all */
            /*     x=-6:0.01:6; */
            /*     alpha=1; */
            /*     rhoPD=PDrho(x,alpha); */
            /*     plot(x,rhoPD,'LineWidth',2) */
            /*     xlabel('$u$','Interpreter','Latex') */
            /*     ylabel('$\rho (u,1)$','Interpreter','Latex') */
            /*  */
            /* } */
            /* { */
            /*     %% Compare two rho functions for 2 different values of alpha.
             */
            /*     % In the first we fix the bdp (value of efficiency is
             * automatically given), */
            /*     % while in the second we find the efficiency (the value of
             * bdp is */
            /*     % automatically given) */
            /*     close all */
            /*     x=-6:0.01:6; */
            /*     lwd=2; */
            /*     alpha1=1; */
            /*     bdp1=1-1/sqrt(1+alpha1); */
            /*     eff1=(sqrt(1+2*alpha1)/(1+alpha1))^3; */
            /*     hold('on') */
            /*     rhoPD=PDrho(x,alpha1); */
            /*     plot(x,rhoPD,'LineStyle','-','LineWidth',lwd) */
            /*     alpha2=0.5; */
            /*     bdp2=1-1/sqrt(1+alpha2); */
            /*     eff2=(sqrt(1+2*alpha2)/(1+alpha2))^3; */
            /*     rhoPD=PDrho(x,alpha2); */
            /*     plot(x,rhoPD,'LineStyle','-.','LineWidth',lwd) */
            /*     xlabel('$x$','Interpreter','Latex','FontSize',16) */
            /*     ylabel('MDPD. Normalized
             * $\rho_\alpha(x)$','Interpreter','Latex','FontSize',20) */
            /*     legend({['$\alpha=' num2str(alpha1) '\mapsto bdp='
             * num2str(bdp1,2) '\;  eff=' num2str(eff1,2) '$'], ... */
            /*        ['$\alpha=' num2str(alpha2) '\mapsto bdp=' num2str(bdp2,2)
             * '\;  eff=' num2str(eff2,2) '$']},... */
            /*        'Interpreter','Latex','Location','SouthEast','FontSize',12)
             */
            /* } */
            /*  Beginning of code */
            /*  MATLAB Ccoder instruction to enforce that alpha is a scalar */
            i2 = c->size[0];
            c->size[0] = resrw->size[0];
            emxEnsureCapacity_real_T(c, i2);
            c_data = c->data;
            loop_ub = resrw->size[0];
            for (i2 = 0; i2 < loop_ub; i2++) {
              kdef = resrw_data[i2] / sworst;
              c_data[i2] = kdef * kdef;
            }
            loop_ub = c->size[0];
            for (i2 = 0; i2 < loop_ub; i2++) {
              c_data[i2] = -psifunc_c1_data[0] * (c_data[i2] / 2.0);
            }
            nx = c->size[0];
            for (k = 0; k < nx; k++) {
              c_data[k] = exp(c_data[k]);
            }
            loop_ub = c->size[0];
            for (i2 = 0; i2 < loop_ub; i2++) {
              c_data[i2] = 1.0 - c_data[i2];
            }
            scaletest = blockedSummation(c, c->size[0]) / (double)c->size[0];
          }
          if (scaletest < kc) {
            /*  Find position of the maximum value of previously stored */
            /*  best scales */
            c_maximum(bestscales, &kdef, &k);
            bestscales_data[k - 1] =
                Mscale(resrw, psifunc_c1, psifunc_kc1, psifunc_class_data,
                       psifunc_class_size, scalerw, minsctol);
            /* sbest1 = Mscale1(resrw,psifunc,scalerw,minsctol); */
            /* sbest2 = minscale(resrw,psifunc.c1,psifunc.kc1,scalerw,minsctol);
             */
            /* [sbest sbest1 sbest2] */
            /*  Store sbest, betarw and indexes of the units forming the */
            /*  best subset associated with minimum value */
            /*  of the scale */
            loop_ub = beta->size[0];
            for (i2 = 0; i2 < loop_ub; i2++) {
              bestbetas_data[(k + bestbetas->size[0] * i2) - 1] = beta_data[i2];
            }
            /*  best subset */
            loop_ub = C->size[1];
            for (i2 = 0; i2 < loop_ub; i2++) {
              bestsubset_data[(k + bestsubset->size[0] * i2) - 1] =
                  C_data[b_i + C->size[0] * i2];
            }
            /*  sworst = the best scale among the bestr found up to now */
            sworst = b_maximum(bestscales);
          }
        } else {
          /* bestscales(ij) = minscale(resrw,psifunc,scalerw,minsctol); */
          bestscales_data[(int)ij - 1] =
              Mscale(resrw, psifunc_c1, psifunc_kc1, psifunc_class_data,
                     psifunc_class_size, scalerw, minsctol);
          loop_ub = beta->size[0];
          for (i2 = 0; i2 < loop_ub; i2++) {
            bestbetas_data[((int)ij + bestbetas->size[0] * i2) - 1] =
                beta_data[i2];
          }
          loop_ub = C->size[1];
          for (i2 = 0; i2 < loop_ub; i2++) {
            bestsubset_data[((int)ij + bestsubset->size[0] * i2) - 1] =
                C_data[b_i + C->size[0] * i2];
          }
          ij++;
        }
      } else {
        singsub++;
      }
      /*  Write total estimate time to compute final estimate */
      if (b_i + 1U <= (unsigned int)tsampling) {
        /*  sampling time until step tsampling */
        time_data[b_i] = b_toc();
      } else if ((b_i + 1U == (unsigned int)((int)tsampling + 1)) && msg) {
        /*  stop sampling and print the estimated time */
        b_time_data.data = &time_data[0];
        b_time_data.size = &time_size;
        b_time_data.allocatedSize = 1000;
        b_time_data.numDimensions = 1;
        b_time_data.canFreeData = false;
        Rprintf("Total estimated time to complete S estimate: %5.2f seconds \n",
               nselected * median(&b_time_data));
        //fflush(stdout);
      }
    }
    /*  perform C-steps on best 'bestr' solutions, till convergence or for a */
    /*  maximum of refstepsbestr steps using a convergence tolerance as
     * specified */
    /*  by scalar reftolbestr */
    tsampling = rtInf;
    /*  Initializations necessary for MATLAB Ccoder */
    loop_ub = bestbetas->size[1];
    i1 = beta->size[0];
    beta->size[0] = bestbetas->size[1];
    emxEnsureCapacity_real_T(beta, i1);
    beta_data = beta->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      beta_data[i1] = bestbetas_data[bestbetas->size[0] * i1];
    }
    loop_ub = bestsubset->size[1];
    i1 = superbestsubset->size[0] * superbestsubset->size[1];
    superbestsubset->size[0] = 1;
    superbestsubset->size[1] = bestsubset->size[1];
    emxEnsureCapacity_real_T(superbestsubset, i1);
    superbestsubset_data = superbestsubset->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      superbestsubset_data[i1] = bestsubset_data[bestsubset->size[0] * i1];
    }
    i1 = resrw->size[0];
    resrw->size[0] = out->y->size[0];
    emxEnsureCapacity_real_T(resrw, i1);
    resrw_data = resrw->data;
    loop_ub = out->y->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      resrw_data[i1] = out->y->data[i1];
    }
    for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
      loop_ub = bestbetas->size[1];
      i1 = bestscales->size[0];
      bestscales->size[0] = bestbetas->size[1];
      emxEnsureCapacity_real_T(bestscales, i1);
      bestscales_data = bestscales->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        bestscales_data[i1] = bestbetas_data[b_i + bestbetas->size[0] * i1];
      }
      IRWLSregS(out->y, out->X, bestscales, psifunc_c1, psifunc_kc1,
                psifunc_class_data, psifunc_class_size, refstepsbestr,
                reftolbestr, c, &scalerw, residuals);
      abc_data = residuals->data;
      c_data = c->data;
      if (scalerw < tsampling) {
        tsampling = scalerw;
        loop_ub = c->size[0];
        i1 = beta->size[0];
        beta->size[0] = c->size[0];
        emxEnsureCapacity_real_T(beta, i1);
        beta_data = beta->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          beta_data[i1] = c_data[i1];
        }
        loop_ub = bestsubset->size[1];
        i1 = superbestsubset->size[0] * superbestsubset->size[1];
        superbestsubset->size[0] = 1;
        superbestsubset->size[1] = bestsubset->size[1];
        emxEnsureCapacity_real_T(superbestsubset, i1);
        superbestsubset_data = superbestsubset->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          superbestsubset_data[i1] =
              bestsubset_data[b_i + bestsubset->size[0] * i1];
        }
        loop_ub = residuals->size[0];
        i1 = resrw->size[0];
        resrw->size[0] = residuals->size[0];
        emxEnsureCapacity_real_T(resrw, i1);
        resrw_data = resrw->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          resrw_data[i1] = abc_data[i1];
        }
      }
    }
    mtimes(out->X, beta, residuals);
    if (out->y->size[0] == residuals->size[0]) {
      i1 = residuals->size[0];
      residuals->size[0] = out->y->size[0];
      emxEnsureCapacity_real_T(residuals, i1);
      abc_data = residuals->data;
      loop_ub = out->y->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        abc_data[i1] = (out->y->data[i1] - abc_data[i1]) / tsampling;
      }
    } else {
      df_binary_expand_op(residuals, out, tsampling);
      abc_data = residuals->data;
    }
    nx = residuals->size[0];
    i1 = c->size[0];
    c->size[0] = residuals->size[0];
    emxEnsureCapacity_real_T(c, i1);
    c_data = c->data;
    for (k = 0; k < nx; k++) {
      c_data[k] = fabs(abc_data[k]);
    }
    if ((b_conflev >= 0.0) && (b_conflev <= 1.0)) {
      kdef = -1.4142135623730951 * erfcinv(2.0 * b_conflev);
    } else {
      kdef = rtNaN;
    }
    i1 = r1->size[0];
    r1->size[0] = c->size[0];
    emxEnsureCapacity_boolean_T(r1, i1);
    r3 = r1->data;
    loop_ub = c->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      r3[i1] = (c_data[i1] > kdef);
    }
    k = r1->size[0] - 1;
    nx = 0;
    for (b_i = 0; b_i <= k; b_i++) {
      if (r3[b_i]) {
        nx++;
      }
    }
    i1 = r2->size[0];
    r2->size[0] = nx;
    emxEnsureCapacity_int32_T(r2, i1);
    r4 = r2->data;
    nx = 0;
    for (b_i = 0; b_i <= k; b_i++) {
      if (r3[b_i]) {
        r4[nx] = b_i + 1;
        nx++;
      }
    }
    loop_ub = residuals->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      out->RES->data[i1 + out->RES->size[0] * jj] = abc_data[i1];
    }
    loop_ub = beta->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      out->Beta->data[i1 + out->Beta->size[0] * jj] = beta_data[i1];
    }
    out->Scale->data[jj] = tsampling;
    loop_ub = out->BS->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      out->BS->data[i1 + out->BS->size[0] * jj] = superbestsubset_data[i1];
    }
    loop_ub = resrw->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      out->Weights->data[i1 + out->Weights->size[0] * jj] = resrw_data[i1];
    }
    out->Singsub->data[jj] = singsub;
    loop_ub = r2->size[0];
    i1 = r->size[0];
    r->size[0] = r2->size[0];
    emxEnsureCapacity_int32_T(r, i1);
    r5 = r->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      r5[i1] = (int)seq_data[r4[i1] - 1];
    }
    loop_ub = r->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      out->Outliers->data[(r5[i1] + out->Outliers->size[0] * jj) - 1] = true;
    }
  }
  emxFree_real_T(&c);
  emxFree_int32_T(&r2);
  emxFree_boolean_T(&r1);
  emxFree_int32_T(&r);
  emxFree_real_T(&residuals);
  emxFree_real_T(&superbestsubset);
  emxFree_real_T(&resrw);
  emxFree_real_T(&beta);
  emxFree_real_T(&Xb);
  emxFree_real_T(&bestscales);
  emxFree_real_T(&bestsubset);
  emxFree_real_T(&bestbetas);
  emxFree_real_T(&abc);
  emxFree_real_T(&psifunc_c1);
  emxFree_real_T(&seq);
  /*  Store in output structure monitored \beta, s, best subset, vector of */
  /*  S-weights and residuals */
  /*  Store in output structure the number of singular subsets */
  /*  Store in output structure the outliers */
  /*  Store values of bdp which have been used */
  for (i = 0; i < 7; i++) {
    out->class[i] = b_cv[i];
  }
  i = out->rhofunc->size[0] * out->rhofunc->size[1];
  out->rhofunc->size[0] = rhofunc->size[0];
  out->rhofunc->size[1] = rhofunc->size[1];
  emxEnsureCapacity_char_T(out->rhofunc, i);
  loop_ub = rhofunc->size[0] * rhofunc->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->rhofunc->data[i] = rhofunc_data[i];
  }
  /*  In case of Hampel or hyperbolic tangent estimator store the additional */
  /*  parameters which have been used */
  /*  For Hampel store a vector of length 3 containing parameters a, b and c */
  /*  For hyperbolic store the value of k= sup CVC */
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
}

/* End of code generation (Sregeda_wrapper.c) */
