/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LTSts_wrapper.c
 *
 * Code generation for function 'LTSts_wrapper'
 *
 */

/* Include files */
#include "LTSts_wrapper.h"
#include "FSM_wrapper_data.h"
#include "FSM_wrapper_emxutil.h"
#include "FSM_wrapper_initialize.h"
#include "FSM_wrapper_internal_types.h"
#include "FSM_wrapper_rtwutil.h"
#include "FSM_wrapper_types.h"
#include "FSRinvmdr.h"
#include "GYfilt.h"
#include "HUrho.h"
#include "LTSts.h"
#include "LXS.h"
#include "RobRegrSize.h"
#include "any.h"
#include "array2table.h"
#include "bc.h"
#include "blockedSummation.h"
#include "colon.h"
#include "diag.h"
#include "eml_erfcore.h"
#include "eml_setop.h"
#include "erfcinv.h"
#include "fcdf.h"
#include "ifWhileCond.h"
#include "int2str.h"
#include "inv.h"
#include "minOrMax.h"
#include "mldivide.h"
#include "mtimes.h"
#include "prctile.h"
#include "randsample.h"
#include "rank.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "sprintf.h"
#include "str2double.h"
#include "string1.h"
#include "subsets.h"
#include "tcdf.h"
#include "zscore.h"
#include "zscoreFS.h"
#include "mkl_cblas.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <stdio.h>
#include <string.h>

/* Function Definitions */
void LTSts_wrapper(const emxArray_real_T *y, double conflev, bool dispresults,
                   double h, bool intercept, const struct3_T *lshiftlocref,
                   const struct4_T *lts, const struct5_T *model, bool msg,
                   double nbestindexes, bool nocheck, const double nsamp_data[],
                   const int nsamp_size[2], double refstepsALS, double reftolALS,
                   double SmallSampleCor, bool yxsave, struct6_T *out,
                   emxArray_real_T *C)
{
  static const char b_seaso[88] = { 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b',
    'b', 'b', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', 'c', 's',
    'c', 's', 'c', 's', 'c', 's', 'c', 's', 'c', 'o', 'i', 'o', 'i', 'o', 'i',
    'o', 'i', 'o', 'i', 'o', 's', 'n', 's', 'n', 's', 'n', 's', 'n', 's', 'n',
    's', '1', '1', '2', '2', '3', '3', '4', '4', '5', '5', '6', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ' };

  static const char b_AR[48] = { 'b', 'b', 'b', 'b', 'b', 'b', '_', '_', '_',
    '_', '_', '_', 'A', 'A', 'A', 'A', 'A', 'A', 'u', 'u', 'u', 'u', 'u', 'u',
    't', 't', 't', 't', 't', 't', 'o', 'o', 'o', 'o', 'o', 'o', 'R', 'R', 'R',
    'R', 'R', 'R', '1', '2', '3', '4', '5', '6' };

  static const char b_X[48] = { 'b', 'b', 'b', 'b', 'b', 'b', '_', '_', '_', '_',
    '_', '_', 'e', 'e', 'e', 'e', 'e', 'e', 'x', 'x', 'x', 'x', 'x', 'x', 'p',
    'p', 'p', 'p', 'p', 'p', 'l', 'l', 'l', 'l', 'l', 'l', 'X', 'X', 'X', 'X',
    'X', 'X', '1', '2', '3', '4', '5', '6' };

  static const char b_trend[32] = { 'b', 'b', 'b', 'b', '_', '_', '_', '_', 't',
    't', 't', 't', 'r', 'r', 'r', 'r', 'e', 'e', 'e', 'e', 'n', 'n', 'n', 'n',
    'd', 'd', 'd', 'd', '1', '2', '3', '4' };

  static const char b_varampl[24] = { 'b', 'b', 'b', '_', '_', '_', 'v', 'v',
    'v', 'a', 'a', 'a', 'r', 'r', 'r', 'a', 'a', 'a', 'm', 'm', 'm', 'l', '2',
    '3' };

  static const char cv1[8] = { 'b', '_', 'l', 's', 'h', 'i', 'f', 't' };

  static const char cv[5] = { 'L', 'T', 'S', 't', 's' };

  b_captured_var isemptyX;
  b_captured_var verLess2016b;
  b_struct_T b_expl_temp;
  b_struct_T expl_temp;
  c_captured_var weights;
  c_captured_var zerT1;
  captured_var b_refstepsALS;
  captured_var b_reftolALS;
  captured_var constr;
  captured_var lshiftYN;
  captured_var nexpl;
  captured_var s;
  captured_var seasonal;
  captured_var trend;
  captured_var varampl;
  d_captured_var Seq;
  d_captured_var X;
  d_captured_var Xlshift;
  d_captured_var Xseaso;
  d_captured_var Xsel;
  d_captured_var Xtrend;
  d_captured_var beta;
  d_captured_var bsb;
  d_captured_var indlinsc;
  d_captured_var otherind;
  d_captured_var seq;
  d_captured_var yhat;
  d_captured_var yhatseaso;
  d_captured_var yin;
  emxArray_boolean_T b_varargin_22_data;
  emxArray_boolean_T *Weights;
  emxArray_boolean_T *r1;
  emxArray_boolean_T *weightsst;
  emxArray_boolean_T *x;
  emxArray_char_T *sstring;
  emxArray_char_T_1x310 b_hmin;
  emxArray_int32_T *ia;
  emxArray_int32_T *r;
  emxArray_int32_T *r2;
  emxArray_int32_T *r3;
  emxArray_int32_T *r4;
  emxArray_int32_T *r5;
  emxArray_int32_T *r6;
  emxArray_int32_T *r7;
  emxArray_real_T *Cr;
  emxArray_real_T *Xfinal;
  emxArray_real_T *Xseldum;
  emxArray_real_T *Ylagged;
  emxArray_real_T *allnumscale2;
  emxArray_real_T *b_C;
  emxArray_real_T *b_Xfinal;
  emxArray_real_T *b_out;
  emxArray_real_T *b_y;
  emxArray_real_T *b_yin;
  emxArray_real_T *bestnumscale2;
  emxArray_real_T *bestyhat;
  emxArray_real_T *betaini;
  emxArray_real_T *brob;
  emxArray_real_T *brobLSH;
  emxArray_real_T *p_all;
  emxArray_real_T *posvarampl;
  emxArray_real_T *selWithoutLastHarmonic;
  emxArray_real_T *selWithoutLastHarmonic_tmp;
  emxArray_real_T *yhatrob;
  creal_T dc;
  double numscale2LSH[3];
  double varargin_22_data[2];
  double ARp;
  double a;
  double b_h;
  double bdp;
  double d;
  double factor;
  double ij;
  double lshift;
  double ncomb;
  double p;
  double pini;
  double posLS;
  double sworst;
  int c_size[2];
  int lab_size[2];
  int varargin_22_size[2];
  int b_input_sizes_idx_1;
  int b_loop_ub;
  int b_sizes_idx_1;
  int c_loop_ub;
  int d_loop_ub;
  int e_loop_ub;
  int end;
  int exitg1;
  int f_loop_ub;
  int g_loop_ub;
  int h_loop_ub;
  int hmin;
  int i;
  int i1;
  int i2;
  int i3;
  int i4;
  int i_loop_ub;
  int ib_size;
  int j_loop_ub;
  int loop_ub;
  int nseaso;
  int nx;
  int result;
  int sizes_idx_1;
  int unnamed_idx_0;
  int varargin_22_size_idx_0;
  int varargin_22_size_idx_1;
  int vlen;
  char b_lab_data[248];
  char lab_data[248];
  char b_expl_data[96];
  char tmp_data[8];
  signed char input_sizes_idx_1;
  bool c_varargin_22_data[2];
  bool empty_non_axis_sizes;
  bool exitg2;
  (void)nocheck;
  if (!isInitialized_FSM_wrapper) {
    FSM_wrapper_initialize();
  }

  /*  Wrapper function for LTSts. NV pair names are not taken as */
  /*  inputs. Instead, just the values are taken as inputs. */
  /*  Required input arguments */
  /*  y: a column vector of doubles of any length */
  /*  Optional input arguments (name / pairs) in (case insensitive) */
  /*  alphabetical order */
  /*  conflev a scalar double */
  /*  dispresults a boolean */
  /*  h a scalar double */
  /*  intercept */
  /*  lshiftlocref: a struct (with 3 fields of type scalar double) */
  /*  field wlength a scalar of type double */
  /*  field lshiftlocref a scalar of type double */
  /*  field huberc a scalar of type double */
  /*  lts: a struct (with 5 fields of type scalar double) */
  /*  field bestr a scalar of type double */
  /*  field refsteps a scalar of type double */
  /*  field refstepsbestr a scalar of type double */
  /*  field reftol a scalar of type double */
  /*  field reftolbestr a scalar of type double */
  /*  model: a struct (with 6 fields of type scalar double) */
  /*  field lshift  a scalar of type double */
  /*  field s a scalar of type double */
  /*  field trend a scalar of type double */
  /*  field seasonal a scalar of type double */
  /*  field ARp a scalar of type double */
  /*  field X a missing value or a matrix of any dimension */
  /*  msg a boolean */
  /*  nbestindexes a scalar double */
  /*  nocheck is a boolean */
  /*  nsamp: a column vector of maximum length equal to 2 */
  /*  refstepsALS a scalar double */
  /*  refstepsALS a scalar double */
  /*  SmallSampleCor a scalar double */
  /*  yxsave is a boolean */
  varargin_22_size_idx_0 = nsamp_size[1];
  varargin_22_size_idx_1 = nsamp_size[0];
  loop_ub = nsamp_size[0];
  for (i = 0; i < loop_ub; i++) {
    vlen = nsamp_size[1];
    if (0 <= vlen - 1) {
      varargin_22_data[varargin_22_size_idx_0 * i] = nsamp_data[i];
    }
  }

  emxInitStruct_captured_var1(&yin);

  /* LTSts extends LTS estimator to time series */
  /*  */
  /* <a href="matlab: docsearchFS('LTSts')">Link to the help function</a> */
  /*  */
  /*  It is possible to set a model with a trend (up to third order), a */
  /*  seasonality (constant or of varying amplitude and with a different number */
  /*  of harmonics) and a level shift (in this last case it is possible to */
  /*  specify the window in which level shift has to be searched for). */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     y:         Time series to analyze. Vector. A row or a column vector */
  /*                with T elements, which contains the time series. */
  /*  */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*  */
  /*          bdp : breakdown point. Scalar. It measures the fraction of outliers */
  /*                the algorithm should resist. In this case any value greater */
  /*                than 0 but smaller or equal than 0.5 will do fine. Please */
  /*                specify h or bdp, but not both. */
  /*                  Example - 'bdp',0.4 */
  /*                  Data Types - double */
  /*  */
  /*      conflev : Confidence level. Scalar. Scalar between 0 and 1 containing */
  /*                Confidence level which is used to declare units as */
  /*                outliers. Usually conflev=0.95, 0.975 0.99 (individual */
  /*                alpha) or 1-0.05/n, 1-0.025/n, 1-0.01/n (simultaneous */
  /*                alpha). Default value is 0.975. */
  /*                  Example - 'conflev',0.99 */
  /*                  Data Types - double */
  /*  */
  /*   dispresults : Display results of final fit. Boolean. If dispresults is */
  /*                true,  labels of coefficients, estimated coefficients, */
  /*                standard errors, tstat and p-values are shown on the */
  /*                screen in a fully formatted way. The default value of */
  /*                dispresults is false. */
  /*                Example - 'dispresults',true */
  /*                Data Types - logical */
  /*  */
  /*  */
  /*            h : The number of observations that determined the least */
  /*                trimmed squares estimator. Scalar. h is an integer greater */
  /*                than p (number of columns of matrix X including the */
  /*                intercept but smaller then n. If the purpose is outlier */
  /*                detection than h does not have to be smaller than */
  /*                [0.5*(T+p+1)]. The default value of h is [0.75*T]. Note */
  /*                that if h is supplied input argument bdp is ignored. */
  /*                  Example - 'h',round(n*0.75) */
  /*                  Data Types - double */
  /*  */
  /*     intercept :  Indicator for constant term. true (default) | false. */
  /*                  Indicator for the constant term (intercept) in the fit, */
  /*                  specified as the comma-separated pair consisting of */
  /*                  'Intercept' and either true to include or false to remove */
  /*                  the constant term from the model. */
  /*                  Example - 'intercept',false */
  /*                  Data Types - boolean */
  /*  */
  /*  lshiftlocref: Parameters for local shift refinement. Structure. */
  /*                This option is used just if model.lshift is greater then 0. */
  /*                In order to precisely identify level shift position it is */
  /*                necessary to consider a local sum of squares varying the */
  /*                position of the level shift around the first tentative */
  /*                position keeping all the other parameters fixed. This */
  /*                structure contains the following fields: */
  /*                lshiftlocref.wlength = scalar greater than 0 which */
  /*                    identifies the length of the window. The default value */
  /*                    is 15, that is the tentative level shift position */
  /*                    varies from tl-15, tl-15, ..., tl+14, tl+15, where tl is */
  /*                    the best preliminary tentative level shift position. */
  /*               lshiftlocref.typeres = scalar which identifies the type of */
  /*                    residuals to consider. If typerres =1, the local */
  /*                    residuals sum of squares is based on huberized (scaled) */
  /*                    residuals (this is the default */
  /*                    choice) else raw residuals are used. */
  /*               lshiftlocref.huberc= tuning constant for Huber estimator just */
  /*                    in case lshiftlocref.typeres=1. The default value is 2. */
  /*                Example - 'lshiftlocref',lshiftlocref.typeres=2 */
  /*                Data Types - struct */
  /*  */
  /*        lts   : structure which controls a set of options of the */
  /*                maximization procedure. Structure. Structure with the */
  /*                following fields: */
  /*                    lts.bestr   = scalar defining number of "best betas" to */
  /*                                remember from the subsamples. These will be */
  /*                                later iterated until convergence. */
  /*                                The default is 20 (10 of them are the best */
  /*                                from previous iteration in case a level */
  /*                                shift is present). */
  /*                   lts.refsteps = scalar defining number of concentration */
  /*                                steps (default = 2). refsteps = 0 means */
  /*                                "raw-subsampling" without iterations. */
  /*              lts.refstepsbestr = scalar defining maximum number of refining */
  /*                                steps for each best subset (default=50). */
  /*                    lts.reftol  = scalar. Default value of tolerance for */
  /*                                the refining steps */
  /*                                The default value is 1e-6; */
  /*               lts.reftolbestr  = scalar. Default value of tolerance for */
  /*                                the refining steps for each of the best */
  /*                                subsets The default value is 1e-8. */
  /*                 Example - 'lts',lts */
  /*                 Data Types - struct */
  /*               Remark: if lts is an empty value all default values of */
  /*               structure lts will be used. */
  /*  */
  /*       model :  model type. Structure. A structure which specifies the model */
  /*                which will be used. The model structure contains the following */
  /*                fields: */
  /*                model.s = scalar (length of seasonal period). For monthly */
  /*                          data s=12 (default), for quartely data s=4, ... */
  /*                model.trend = scalar (order of the trend component). */
  /*                        trend = 0 implies no trend; */
  /*                        trend = 1 implies linear trend with intercept (default); */
  /*                        trend = 2 implies quadratic trend; */
  /*                        trend = 3 implies cubic trend. */
  /*                        Admissible values for trend are, 0, 1, 2 and 3. */
  /*                        In the paper RPRH to denote the order of the trend */
  /*                        symbol A is used. */
  /*                model.seasonal = scalar (integer specifying number of */
  /*                         frequencies, i.e. harmonics, in the seasonal */
  /*                         component. Possible values for seasonal are */
  /*                         $1, 2, ..., [s/2]$, where $[s/2]=floor(s/2)$. */
  /*                         For example: */
  /*                         if seasonal =1 (default) we have: */
  /*                         $\beta_1 \cos( 2 \pi t/s) + \beta_2 sin ( 2 \pi t/s)$; */
  /*                         if seasonal =2 we have: */
  /*                         $\beta_1 \cos( 2 \pi t/s) + \beta_2 \sin ( 2 \pi t/s) */
  /*                         + \beta_3 \cos(4 \pi t/s) + \beta_4 \sin (4 \pi t/s)$. */
  /*                         Note that when $s$ is even the sine term disappears */
  /*                         for $j=s/2$ and so the maximum number of */
  /*                         trigonometric parameters is $s-1$. */
  /*                         If seasonal is a number greater than 100 then it */
  /*                         is possible to specify how the seasonal component */
  /*                         grows over time. */
  /*                         For example, seasonal = 101 implies a seasonal */
  /*                         component which just uses one frequency */
  /*                         which grows linearly over time as follows: */
  /*                         $(1+\beta_3 t)\times ( \beta_1 cos( 2 \pi t/s) + */
  /*                         \beta_2 \sin ( 2 \pi t/s))$. */
  /*                         For example, seasonal =201 implies a seasonal */
  /*                         component which just uses one frequency */
  /*                         which grows in a quadratic way over time as */
  /*                         follows: */
  /*                         $(1+\beta_3 t + \beta_4  t^2)\times( \beta_1 \cos( */
  /*                         2 \pi t/s) + \beta_2 \sin ( 2 \pi t/s))$. */
  /*                         seasonal =0 implies a non seasonal model. */
  /*                        In the paper RPRH to denote the number of */
  /*                        frequencies of the seasonal component */
  /*                        symbol B is used, while symbol G is used to denote */
  /*                        the order of the trend of the seasonal component. */
  /*                        Therefore, for example, model.seasonal=201 */
  /*                        corresponds to B=1 and G=2, while model.seasonal=3 */
  /*                        corresponds to B=3 and G=0; */
  /*                model.X  =  matrix of size T-by-nexpl containing the */
  /*                          values of nexpl extra covariates which are likely */
  /*                          to affect y. */
  /*                model.lshift = scalar greater or equal than 0 or equal to -1, */
  /*                          or vector of positive integer values which */
  /*                          specifies whether it is necessary to include a */
  /*                          level shift component. lshift = 0 (default) */
  /*                          implies no level shift component. lshift = -1 */
  /*                          specifies the moment to start considering level */
  /*                          shifts automatically from specification of */
  /*                          lshift in position floor((T-1-p)/2). If lshift is */
  /*                          an interger greater then 0 or a vector of positive */
  /*                          integer values then it specifies the */
  /*                          moments where the level shift can be located. For */
  /*                          example if lshift =13 then the following */
  /*                          additional parameters are estimated */
  /*                           $\beta_{LS1}* I(t \geq beta_{LS2})$ where */
  /*                           $\beta_{LS1}$ is a real number and $\beta_{LS2}$ */
  /*                           is an integer which assumes values 13. */
  /*                           T-13. If lshift =[13 20] then the following */
  /*                          additional parameters are estimated */
  /*                           $\beta_{LS1}* I(t \geq beta_{LS2})$ where */
  /*                           $\beta_{LS1}$ is a real number and $\beta_{LS2}$ */
  /*                           is an integer which assumes values 13 or 20. */
  /*                        In the paper RPRH $\beta_{LS1}$ is denoted with */
  /*                        symbol $\delta_1$, while, $\beta_{LS2}$ is denoted */
  /*                        with symbol $\delta_2$. */
  /*                model.ARp = scalar greater or equal than 0 which */
  /*                          specifies the length of the autoregressive */
  /*                          component. The default value of model.ARp is 0, */
  /*                          that is there is no autoregressive component. */
  /*                  Example - 'model', model */
  /*                  Data Types - struct */
  /*                Remark: the default model is for monthly data with a linear */
  /*                trend (2 parameters) + seasonal component with just one */
  /*                harmonic (2 parameters), no additional explanatory */
  /*                variables and no level shift that is */
  /*                                model=struct; */
  /*                                model.s=12; */
  /*                                model.trend=1; */
  /*                                model.seasonal=1; */
  /*                                model.X=''; */
  /*                                model.lshift=0; */
  /*                Using the notation of the paper RPRH we have A=1, B=1; and */
  /*                $\delta_1=0$. */
  /*  */
  /*         msg  : Messages on the screen. Boolean. */
  /*                Scalar which controls whether to display or not messages */
  /*                on the screen. If msg==true (default) messages are displayed on */
  /*                the screen about estimated time to compute the estimator */
  /*                and the warnings about 'MATLAB:rankDeficientMatrix', */
  /*                'MATLAB:singularMatrix' and 'MATLAB:nearlySingularMatrix' */
  /*                are set to off else no message is displayed on the screen */
  /*                Example - 'msg',true */
  /*                Data Types - logical */
  /*  */
  /* nbestindexes : position of the best solutions. Positive integer. For each */
  /*                tentative level shift solution, it is interesenting to */
  /*                understand whether best solutions of target function come */
  /*                from subsets associated with current level shift solution */
  /*                or from best solutions from previous tentative level shift */
  /*                position.  The indexes from 1 to lts.bestr/2 are associated */
  /*                with subsets just extracted. The indexes from lts.bestr/2+1 */
  /*                to lts.bestr are associated with best solutions from */
  /*                previous tentative level shift. More precisely: */
  /*                index lts.bestr/2+1 is associated with best solution from */
  /*                previous tentative level shift; */
  /*                index lts.bestr/2+2 is associated with second best solution */
  /*                from previous tentative level shift; */
  /*                ... */
  /*                nbestindexes is an integer which specifies how many indexes */
  /*                we want to store. The default value of nbestindexes  is 3. */
  /*                Example - 'nbestindexes',5 */
  /*                Data Types - double */
  /*  */
  /*       nocheck: Check input arguments. Boolean. If nocheck is equal to true no */
  /*                check is performed on matrix y and matrix X. Notice that y */
  /*                and X are left unchanged. In other words the additioanl */
  /*                column of ones for the intercept is not added. As default */
  /*                nocheck=false. The controls on h, bdp and nsamp still remain. */
  /*                Example - 'nocheck',true */
  /*                Data Types - boolean */
  /*  */
  /*        nsamp : number of subsamples to extract. Scalar or vector of length 2. */
  /*                Vector of length 1 or 2 which controls the number of */
  /*                subsamples which will be extracted to find the robust */
  /*                estimator. If lshift>0 then nsamp(1) controls the number of */
  /*                subsets which have to be extracted to find the solution for */
  /*                t=lshift. nsamp(2) controls the number of subsets which */
  /*                have to be extracted to find the solution for t=lshift+1, */
  /*                lshift+2, ..., T-lshift. */
  /*                Note that nsamp(2) is generally smaller than nsamp(1) */
  /*                because in order to compute the best solution for */
  /*                t=lshift+1, lshift+2, ..., T-lshift, we use the lts.bestr/2 */
  /*                best solutions from previous t (after shifting by one the */
  /*                position of the level shift in the estimator of beta). If */
  /*                lshift is >0 the default value of nsamp is (500 250). If */
  /*                lshift is >0 and nsamp is supplied as a scalar the default */
  /*                is to extract [nsamp/2] subsamples for t=lshift+1, */
  /*                lshift+2, ... Therefore, for example, in order to extract */
  /*                600 subsamples for t=lshift and 300 subsamples for t= */
  /*                lshift+1 ... you can use nsamp =600 or nsamp=[600 300]. */
  /*                The default value of nsamp is 1000; */
  /*                  Example - 'nsamp',500 */
  /*                  Data Types - double */
  /*                Remark: if nsamp=0 all subsets will be extracted. */
  /*                They will be (n choose p). */
  /*  */
  /*  refstepsALS :   Maximum iterations inside ALS. Scalar. Maximum number */
  /*                  of iterations inside ALS routine. Default value of */
  /*                  tolerance for the refining steps inside ALS routine. The */
  /*                  default value is 50. */
  /*                  Example - 'refstepsALS',20 */
  /*                  Data Types - double */
  /*  */
  /*  */
  /*   reftolALS  :   Tolerance inside ALS. Scalar. Tolerance value of tolerance */
  /*                  for the refining steps inside ALS routine. The default */
  /*                  value is 1e-03. */
  /*                  Example - 'reftolALS',1e-05 */
  /*                  Data Types - double */
  /*  */
  /* SmallSampleCor:Small sample correction factor to control empirical size of */
  /*                the test.  Scalar equal to 1 or 2 (default) or 3 or 4. */
  /*                - If SmallSampleCor=1 in the reweighting step the nominal */
  /*                  threshold based on $\chi^2_{0.99}$ is multiplied by the */
  /*                  small sample correction factor which guarrantees that the */
  /*                  empirical size of the test is equal to the nominal size. */
  /*                  Given that the correction factors were obtained through */
  /*                  simulation for a linear model, the number of explanatory */
  /*                  which is used to compute the correction factor refers to */
  /*                  all explanatory variables except the non linear components */
  /*                  in the seasonal part of the model. For example, in a model */
  /*                  with linear trend 4 seasonal harmonics + level shift and */
  /*                  second order trend in the seasonal component the number of */
  /*                  explanatory variables used is 11 = total number of */
  /*                  variables -2 = 2 (linear trend) + 8 (4 seasonal harmonics) */
  /*                  +1 (level shift). */
  /*                - If SmallSampleCor =2 Gervini and Yohai procedure is called */
  /*                  with 'iterating' false and 'alpha' 0.99 is invoked, that is: */
  /*                  weights=GYfilt(stdres,'iterating',false,'alpha',0.99); */
  /*                - If SmallSampleCor =3 Gervini and Yohai procedure  called */
  /*                  with 'iterating' true and 'alpha' 0.99 is invoked, that is: */
  /*                  weights=GYfilt(stdres,'iterating',true,'alpha',0.99); */
  /*                - If SmallSampleCor =4  $\chi^2_{0.99}$ threshold is used that is: */
  /*                  weights = abs(stdres)<=sqrt(chi2inv(0.99,1)); */
  /*                  Example - 'SmallSampleCor',3 */
  /*                  Data Types - double */
  /*  */
  /*  */
  /*        yxsave : store X and y. Boolean. Scalar that is set to 1 to request */
  /*                 that the response vector y and data matrix X are saved */
  /*                 into the output structure out. */
  /*                 Default is 0, i.e. no saving is done. */
  /*                Example - 'yxsave',1 */
  /*                Data Types - logical */
  /*  */
  /*        plots : Plots on the screen. Scalar. */
  /*                If plots = 1, a two panel plot will be shown on the screen. */
  /*                The upper panel contains the orginal time series with */
  /*                fitted values. The bottom panel will contain the plot */
  /*                of robust residuals against index number. The confidence */
  /*                level which is used to draw the horizontal lines associated */
  /*                with the bands for the residuals is specified in input */
  /*                option conflev. If conflev is missing a nominal 0.975 */
  /*                confidence interval will be used. If plots =2 the following */
  /*                additional plots will be shown on the screen. */
  /*                1) Boxplot of the distribution of the lts.bestr values of */
  /*                the target function for each tentative level shift position; */
  /*                2) A two panel plot which shows the values of the local sum */
  /*                of squares varying the position of the level shift around */
  /*                the first tentative position keeping all the other */
  /*                parameters fixed. Top panel refers to Huberized residuals */
  /*                sum of squares and bottom panel refers to residual sum of */
  /*                squares. */
  /*                3) A plot which shows the indexes of the best nbestindexes */
  /*                solutions for each tentative level shift position. */
  /*                4) A plot which shows the relative frequency of inclusion */
  /*                of each unit in the best h-subset after lts.refsteps */
  /*                refining steps. */
  /*                5) A plot which shows the relative frequency of inclusion */
  /*                of each unit inside the best nbestindexes subsets which are */
  /*                brought to full convergence. */
  /*                The default value of plot is 0 i.e. no plot is shown on the */
  /*                screen. */
  /*                  Example - 'plots',1 */
  /*                  Data Types - double */
  /*  */
  /*        Remark: The user should only give the input arguments that have to */
  /*                change their default value. The name of the input arguments */
  /*                needs to be followed by their value. The order of the input */
  /*                arguments is of no importance. */
  /*  */
  /*   Output: */
  /*  */
  /*   out :     A structure containing the following fields */
  /*  */
  /*              out.B =   Matrix containing estimated beta coefficients, */
  /*                        (including the intercept when options.intercept=true) */
  /*                        standard errors, t-stat and p-values */
  /*                        The content of matrix B is as follows: */
  /*                        1st col = beta coefficients */
  /*                         The order of the beta coefficients is as follows: */
  /*                         1) trend elements (if present). If the trend is */
  /*                         of order two there are r+1 coefficients if the */
  /*                         intercept is present otherwise there are just r */
  /*                         components; */
  /*                         2) linear part of seasonal component 2, 4, 6, ..., */
  /*                         s-2, s-1 coefficients (if present); */
  /*                         3) coefficients associated with the matrix of */
  /*                         explanatory variables which have a potential effect */
  /*                         on the time series under study (X or */
  /*                         autoregressive part); If model.ARp>0 the first */
  /*                         model.ARp elements refer to the autoregressive */
  /*                         component. */
  /*                         4) non linear part of seasonal component, that is */
  /*                         varying amplitude. If varying amplitude is of order */
  /*                         k there are k coefficients (if present); */
  /*                         5) level shift component (if present). In out.B it */
  /*                         is shown just the real number which identifies the */
  /*                         magnitude of the upward (downward) level shift. */
  /*                         The integer which specifies the time in which */
  /*                         level shift takes place is given in output */
  /*                         out.posLS. */
  /*                        2nd col = standard errors; */
  /*                        3rd col = t-statistics; */
  /*                        4th col = p values. */
  /*           out.Btable = same thing out.B but n table format. */
  /*                out.h = The number of observations that have determined the */
  /*                        initial LTS estimator, i.e. the value of h. */
  /*               out.bs = Vector containing the units with the smallest p+k */
  /*                        squared residuals before the reweighting step, */
  /*                        where p is the total number of the parameters in */
  /*                        the model and p+k is smallest number of units such */
  /*                        that the design matrix is full rank. */
  /*                        out.bs can be used to initialize the forward */
  /*                        search. */
  /*          out.Hsubset = matrix of size T-by-(T-2*lshift) */
  /*                        containing units forming best H subset for each */
  /*                        tentative level shift which is considered. */
  /*                        Units belonging to */
  /*                        subset are given with their row number, units not */
  /*                        belonging to subset have missing values */
  /*                        ( Remark: T-2*lshift = length((lshift+1):(T-lshift)) ) */
  /*                        This output is present just if input option */
  /*                        model.lshift>0. */
  /*            out.posLS = scalar associated with best tentative level shift */
  /*                        position. */
  /*                        This output is present just if input option */
  /*                        model.lshift>0. */
  /*      out.numscale2 = matrix of size lts.bestr-by-(T-2*lshift) containing */
  /*                        (in the columns) the values of the lts.bestr smallest */
  /*                        values of the target function. Target function = truncated */
  /*                        residuals sum of squares. */
  /*      out.BestIndexes = matrix of size nbestindexes-by-(T-2*lshift) */
  /*                        containing in each column the indexes */
  /*                        associated with the best nbestindexes solutions. */
  /*                        The indexes from lts.bestr/2+1 to lts.bestr are */
  /*                        associated with best solutions from previous */
  /*                        tentative level shift. */
  /*                        More precisely: */
  /*                        index lts.bestr/2+1 is associated with best solution */
  /*                        from previous tentative level shift; */
  /*                        index lts.bestr/2+2 is associated with best solution */
  /*                        from previous tentative level shift. */
  /*                        This output is present just if input option */
  /*                        model.lshift>0. */
  /*          out.Likloc  = matrix of size (2*lshiftlocref.wlength+1)-by-3 */
  /*                        containing local sum of squares of residuals in */
  /*                        order to decide best position of level shift: */
  /*                        1st col = position of level shift; */
  /*                        2nd col = local sum of squares of huberized residuals; */
  /*                        3rd col = local sum of squares of raw residuals. */
  /*                        This output is present just if input option */
  /*                        model.lshift>0. */
  /*              out.RES = Matrix of size T-by-(T-lshift) containing scaled */
  /*                        residuals for all the T units of the original time */
  /*                        series monitored in steps lshift+1, lshift+2, ..., */
  /*                        T-lshift, where lshift+1 is the first tentative */
  /*                        level shift position, lshift +2 is the second level */
  /*                        shift position, and so on. This output is present */
  /*                        just if input option model.lshift>0. */
  /*             out.yhat = vector of fitted values after final (NLS=non linear */
  /*                        least squares) step. */
  /*                        $ (\hat \eta_1, \hat \eta_2, \ldots, \hat \eta_T)'$ */
  /*        out.residuals = Vector T-by-1 containing the scaled residuals from */
  /*                        after final NLS step. */
  /*          out.weights = Vector containing weights after adaptive */
  /*                        reweighting. The elements of */
  /*                        this vector are 0 or 1. These weights identify the */
  /*                        observations which are used to compute the final */
  /*                        NLS estimate. */
  /*            out.scale = Final scale estimate of the residuals using final weights. */
  /*                      \[ */
  /*                      \hat \sigma = cor \times \sum_{i \in S_m} [y_i- \eta(x_i,\hat \beta)]^2/(m-p) */
  /*                      \] */
  /*                      where $S_m$ is a set of cardinality $m$ which */
  /*                      contains the units not declared as outliers, $p$ */
  /*                      is the total number of estimated parameters and $cor$ */
  /*                      is a correction factor to make the estimator */
  /*                      consistent. */
  /*          out.conflev = confidence level which is used to declare outliers. */
  /*                        Remark: scalar out.conflev will be used to draw the */
  /*                        horizontal lines (confidence bands) in the plots */
  /*         out.outliers = vector containing the list of the units declared */
  /*                        as outliers using confidence level specified in */
  /*                        input scalar conflev. */
  /*    out.outliersPval  =  p-value of the units declared as outliers. */
  /*          out.singsub = Number of subsets wihtout full rank. Notice that if */
  /*                        this number is greater than 0.1*(number of */
  /*                        subsamples) a warning is produced on the screen */
  /*             out.invXX = $cov(\beta)/\hat \sigma^2$. p-by-p, square matrix. */
  /*                        If the model is linear out.invXX  is equal to */
  /*                        $(X'X)^{-1}$, else out.invXX is equal to $(A'A)^{-1}$ */
  /*                        where $A$ is the matrix of partial derivatives. More */
  /*                        precisely: */
  /*                        \[ */
  /*                        a_{i,j}=\frac{\partial \eta_i(x_i, \hat \beta)}{\partial \hat \beta_j} */
  /*                        \] */
  /*                        where */
  /*                        \begin{eqnarray} */
  /*                        y_i & = & \eta(x_i,\beta)+ \epsilon_i  \\ */
  /*                            & = & \eta_i +\epsilon_i \\ */
  /*                            & = & \eta(x_i,\hat \beta)+ e_i  \\ */
  /*                            & = & \hat \eta_i + e_i */
  /*                        \end{eqnarray} */
  /*  out.LastHarmonicPval = combined p value for the two coefficients of the */
  /*                         last harmonic (this p value comes from an F test). */
  /*  out.LastHarmonicPval = combined p value for the two coefficients of the */
  /*                         last harmonic (this p value comes from an F test). */
  /*  out.LevelShiftPval  =  p value of the level shift which takes into */
  /*                        account (this pvalue comes from Bonferronization to */
  /*                        take it account that if you impose a level shift, */
  /*                        this component is always found). */
  /*             out.y    = response vector y. */
  /*             out.X    = data matrix X containing trend, seasonal, expl */
  /*                        (with autoregressive component) and */
  /*                        lshift, if the model is linear or linearized */
  /*                        version of $\eta(x_i, \beta)$ if the model is non */
  /*                        linear containing in the columns partial */
  /*                        derivatives evaluated in correspondence of */
  /*                        out.B(:,1) with respect to each parameter. In other */
  /*                        words, the $i,j$-th element of out.X is */
  /*                        \[ */
  /*                        \frac{\partial \eta_i(x_i, \hat \beta)}{\partial \hat \beta_j} */
  /*                        \] */
  /*                        $j=1, 2, \ldots, p$, $i \in S_m$. */
  /*                        The size of this matrix is: */
  /*                        n-length(out.outliers)-by-p */
  /*                        The field is present only if option */
  /*                        yxsave is set to 1. */
  /*            out.class = 'LTSts'. */
  /*  */
  /*   Optional Output: */
  /*  */
  /*             C        : cell  containing the indices of the subsamples */
  /*                        extracted for computing the estimate (the so called */
  /*                        elemental sets) for each tentative level shift */
  /*                        position. */
  /*                        C{1} is associated with the subsamples for */
  /*                        first tentative level shift position; */
  /*                        C{2} is associated with the subsamples for */
  /*                        second tentative level shift position; */
  /*                        ... */
  /*                        C{end} is associated with the subsamples for */
  /*                        last tentative level shift position; */
  /*  */
  /*  See also LXS, wedgeplot */
  /*  */
  /*  References: */
  /*  */
  /*  Rousseeuw, P.J., Perrotta D., Riani M. and Hubert, M. (2018), Robust */
  /*  Monitoring of Many Time Series with Application to Fraud Detection, */
  /*  "Econometrics and Statistics". [RPRH] */
  /*  */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by Marco Riani, Domenico Perrotta, Peter */
  /*  Rousseeuw and Mia Hubert */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('LTSts')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate:: 2019-12-15 21:09:21 #$: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % Simulated data with linear trend and level shift. */
  /*     % No seasonal component. */
  /*     rng('default') */
  /*     n=45; */
  /*     a=1; */
  /*     b=0.8; */
  /*     sig=1; */
  /*     seq=(1:n)'; */
  /*     y=a+b*seq+sig*randn(n,1); */
  /*     % Add a level shift in the simulated series */
  /*     y(round(n/2):end)=y(round(n/2):end)+10; */
  /*     % model with a linear trend, non seasonal and level shift */
  /*     model=struct; */
  /*     model.trend=1; */
  /*     model.seasonal=0; */
  /*     % Potential level shift position is investigated in positions: */
  /*     % t=10, t=11, ..., t=T-10. */
  /*     model.lshift=11:n-10; */
  /*     out=LTSts(y,'model',model,'plots',1); */
  /*     % Using the notation of the paper RPRH: A=1, B=1, G=0 and $\delta_1>0$. */
  /*     str=strcat('A=1, B=0, G=0, $\delta_2=',num2str(out.posLS),'$'); */
  /*     title(findobj(gcf,'-regexp','Tag','LTSts:ts'),str,'interpreter','latex'); */
  /* } */
  /* { */
  /*     % Airline data: linear trend + just one harmonic for seasonal component. */
  /*     % Load airline data. */
  /*     %   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 */
  /*     y = [112  115  145  171  196  204  242  284  315  340  360  417    % Jan */
  /*          118  126  150  180  196  188  233  277  301  318  342  391    % Feb */
  /*          132  141  178  193  236  235  267  317  356  362  406  419    % Mar */
  /*          129  135  163  181  235  227  269  313  348  348  396  461    % Apr */
  /*          121  125  172  183  229  234  270  318  355  363  420  472    % May */
  /*          135  149  178  218  243  264  315  374  422  435  472  535    % Jun */
  /*          148  170  199  230  264  302  364  413  465  491  548  622    % Jul */
  /*          148  170  199  242  272  293  347  405  467  505  559  606    % Aug */
  /*          136  158  184  209  237  259  312  355  404  404  463  508    % Sep */
  /*          119  133  162  191  211  229  274  306  347  359  407  461    % Oct */
  /*          104  114  146  172  180  203  237  271  305  310  362  390    % Nov */
  /*          118  140  166  194  201  229  278  306  336  337  405  432 ]; % Dec */
  /*     % Source: */
  /*     % http://datamarket.com/data/list/?q=provider:tsdl */
  /*  */
  /*     y=(y(:)); */
  /*     yr = repmat((1949:1960),12,1); */
  /*     mo = repmat((1:12)',1,12); */
  /*     time = datestr(datenum(yr(:),mo(:),1)); */
  /*     ts = timeseries(y(:),time,'name','AirlinePassengers'); */
  /*     ts.TimeInfo.Format = 'dd-mmm-yyyy'; */
  /*     tscol = tscollection(ts); */
  /*     % plot airline data */
  /*     plot(ts) */
  /*     % linear trend + just one harmonic for seasonal component */
  /*     model=struct; */
  /*     model.trend=1;              % linear trend */
  /*     model.s=12;                 % monthly time series */
  /*     model.seasonal=1;           % just one harmonic */
  /*     model.lshift=0;             % no level shift */
  /*     out=LTSts(y,'model',model,'dispresults',true); */
  /*  */
  /*     close all */
  /*     % Plot real and fitted values */
  /*     plot(y,'Linewidth',1.5); */
  /*     hold('on') */
  /*     plot(out.yhat,'r--','Linewidth',1.5) */
  /*     legend({'Real values','Fitted values'},'Location','SouthEast','interpreter','LaTeX','FontSize',14) */
  /*     numpar = {'model parameters:' , 'A=1, B=1, G=0, $\delta_1=0$'}; */
  /*     title(gca,numpar,'interpreter','LaTeX','FontSize',16); */
  /* } */
  /* { */
  /*     % Model with linear trend and six harmonics for seasonal component. */
  /*     % Load airline data. */
  /*     %   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 */
  /*     y = [112  115  145  171  196  204  242  284  315  340  360  417    % Jan */
  /*          118  126  150  180  196  188  233  277  301  318  342  391    % Feb */
  /*          132  141  178  193  236  235  267  317  356  362  406  419    % Mar */
  /*          129  135  163  181  235  227  269  313  348  348  396  461    % Apr */
  /*          121  125  172  183  229  234  270  318  355  363  420  472    % May */
  /*          135  149  178  218  243  264  315  374  422  435  472  535    % Jun */
  /*          148  170  199  230  264  302  364  413  465  491  548  622    % Jul */
  /*          148  170  199  242  272  293  347  405  467  505  559  606    % Aug */
  /*          136  158  184  209  237  259  312  355  404  404  463  508    % Sep */
  /*          119  133  162  191  211  229  274  306  347  359  407  461    % Oct */
  /*          104  114  146  172  180  203  237  271  305  310  362  390    % Nov */
  /*          118  140  166  194  201  229  278  306  336  337  405  432 ]; % Dec */
  /*     % Source: */
  /*     % http://datamarket.com/data/list/?q=provider:tsdl */
  /*  */
  /*     y=(y(:)); */
  /*     model=struct; */
  /*     model.trend=1;              % linear trend */
  /*     model.s=12;                 % monthly time series */
  /*     model.seasonal=6;           % six harmonics */
  /*     model.lshift=0;             % no level shift */
  /*     out=LTSts(y,'model',model); */
  /*  */
  /*     close all */
  /*     % Plot real and fitted values */
  /*     plot(y,'Linewidth',1.5); */
  /*     hold('on') */
  /*     plot(out.yhat,'r--','Linewidth',1.5) */
  /*     legend({'Real values','Fitted values'},'Location','SouthEast','interpreter','LaTeX','FontSize',14) */
  /*     numpar = {'model parameters:' , 'A=1, B=6, G=0, $\delta_1=0$'}; */
  /*     title(gca,numpar,'interpreter','LaTeX','FontSize',16); */
  /*  */
  /* } */
  /* { */
  /*     % Model with linear trend, two harmonics for seasonal component and */
  /*     % varying amplitude using a linear trend (1). */
  /*     % Load airline data. */
  /*     %   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 */
  /*     y = [112  115  145  171  196  204  242  284  315  340  360  417    % Jan */
  /*          118  126  150  180  196  188  233  277  301  318  342  391    % Feb */
  /*          132  141  178  193  236  235  267  317  356  362  406  419    % Mar */
  /*          129  135  163  181  235  227  269  313  348  348  396  461    % Apr */
  /*          121  125  172  183  229  234  270  318  355  363  420  472    % May */
  /*          135  149  178  218  243  264  315  374  422  435  472  535    % Jun */
  /*          148  170  199  230  264  302  364  413  465  491  548  622    % Jul */
  /*          148  170  199  242  272  293  347  405  467  505  559  606    % Aug */
  /*          136  158  184  209  237  259  312  355  404  404  463  508    % Sep */
  /*          119  133  162  191  211  229  274  306  347  359  407  461    % Oct */
  /*          104  114  146  172  180  203  237  271  305  310  362  390    % Nov */
  /*          118  140  166  194  201  229  278  306  336  337  405  432 ]; % Dec */
  /*     % Source: */
  /*     % http://datamarket.com/data/list/?q=provider:tsdl */
  /*  */
  /*     y=(y(:)); */
  /*     model=struct; */
  /*     model.trend=1;              % linear trend */
  /*     model.s=12;                 % monthly time series */
  /*     model.seasonal=102;         % two harmonics with time varying seasonality */
  /*     model.lshift=0;             % no level shift */
  /*     out=LTSts(y,'model',model); */
  /*  */
  /*     close all */
  /*     % Plot real and fitted values */
  /*     plot(y,'Linewidth',1.5); */
  /*     hold('on') */
  /*     plot(out.yhat,'r--','Linewidth',1.5) */
  /*     legend({'Real values','Fitted values'},'Location','SouthEast','interpreter','LaTeX','FontSize',14) */
  /*     numpar = {'model parameters:' , 'A=1, B=2, G=1, $\delta_1=0$'}; */
  /*    title(gca,numpar,'interpreter','LaTeX','FontSize',16); */
  /* } */
  /* { */
  /*     % Model with linear trend, six harmonics for seasonal component and */
  /*     % varying amplitude using a linear trend (2). */
  /*     % Load airline data. */
  /*     %   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 */
  /*     y = [112  115  145  171  196  204  242  284  315  340  360  417    % Jan */
  /*          118  126  150  180  196  188  233  277  301  318  342  391    % Feb */
  /*          132  141  178  193  236  235  267  317  356  362  406  419    % Mar */
  /*          129  135  163  181  235  227  269  313  348  348  396  461    % Apr */
  /*          121  125  172  183  229  234  270  318  355  363  420  472    % May */
  /*          135  149  178  218  243  264  315  374  422  435  472  535    % Jun */
  /*          148  170  199  230  264  302  364  413  465  491  548  622    % Jul */
  /*          148  170  199  242  272  293  347  405  467  505  559  606    % Aug */
  /*          136  158  184  209  237  259  312  355  404  404  463  508    % Sep */
  /*          119  133  162  191  211  229  274  306  347  359  407  461    % Oct */
  /*          104  114  146  172  180  203  237  271  305  310  362  390    % Nov */
  /*          118  140  166  194  201  229  278  306  336  337  405  432 ]; % Dec */
  /*     % Source: */
  /*     % http://datamarket.com/data/list/?q=provider:tsdl */
  /*  */
  /*     y=(y(:)); */
  /*     model=struct; */
  /*     model.trend=1;              % linear trend */
  /*     model.s=12;                 % monthly time series */
  /*     model.seasonal=106;         % six harmonics with linear time varying seasonality */
  /*     model.lshift=0;             % no level shift */
  /*     % out=fitTSLS(y,'model',model); */
  /*     out=LTSts(y,'model',model); */
  /*  */
  /*     close all */
  /*     % Plot real and fitted values */
  /*     plot(y,'Linewidth',1.5); */
  /*     hold('on') */
  /*     plot(out.yhat,'r--','Linewidth',1.5) */
  /*     legend({'Real values','Fitted values'},'Location','SouthEast','interpreter','LaTeX','FontSize',14) */
  /*     numpar = {'model parameters:' , 'A=1, B=6, G=1, $\delta_1=0$'}; */
  /*    title(gca,numpar,'interpreter','LaTeX','FontSize',16); */
  /*  */
  /* } */
  /* { */
  /*     % Contaminated time series with upward level shift. */
  /*     % Model with linear trend, six harmonics for seasonal component and */
  /*     % varying amplitude using a linear trend). */
  /*     % Load airline data. */
  /*     %   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 */
  /*     y = [112  115  145  171  196  204  242  284  315  340  360  417    % Jan */
  /*          118  126  150  180  196  188  233  277  301  318  342  391    % Feb */
  /*          132  141  178  193  236  235  267  317  356  362  406  419    % Mar */
  /*          129  135  163  181  235  227  269  313  348  348  396  461    % Apr */
  /*          121  125  172  183  229  234  270  318  355  363  420  472    % May */
  /*          135  149  178  218  243  264  315  374  422  435  472  535    % Jun */
  /*          148  170  199  230  264  302  364  413  465  491  548  622    % Jul */
  /*          148  170  199  242  272  293  347  405  467  505  559  606    % Aug */
  /*          136  158  184  209  237  259  312  355  404  404  463  508    % Sep */
  /*          119  133  162  191  211  229  274  306  347  359  407  461    % Oct */
  /*          104  114  146  172  180  203  237  271  305  310  362  390    % Nov */
  /*          118  140  166  194  201  229  278  306  336  337  405  432 ]; % Dec */
  /*     % Source: */
  /*     % http://datamarket.com/data/list/?q=provider:tsdl */
  /*  */
  /*     y=(y(:)); */
  /*     yLS=y; */
  /*     yLS(55:end)=yLS(55:end)+130; */
  /*     model=struct; */
  /*     model.trend=1;                          % linear trend */
  /*     model.s=12;                             % monthly time series */
  /*     model.seasonal=1; */
  /*     model.lshift=14:length(yLS)-13;         % impose level shift */
  /*     out=LTSts(yLS,'model',model); */
  /*  */
  /*     close all */
  /*     % Plot real and fitted values */
  /*     plot(yLS,'Linewidth',1.5); */
  /*     hold('on') */
  /*     plot(out.yhat,'r--','Linewidth',1.5) */
  /*     legend({'Real values','Fitted values'},'Location','SouthEast','interpreter','LaTeX','FontSize',14) */
  /*     % Using the notation of the paper RPRH: A=1, B=1, G=0 and $\delta_1>0$. */
  /*     str=strcat('A=1, B=1, G=0, $\delta_2=',num2str(out.posLS),'$'); */
  /*     numpar = {'model parameters:' , str}; */
  /*     title(gca,numpar,'interpreter','LaTeX','FontSize',16); */
  /*  */
  /* } */
  /* { */
  /*     % Contaminated time series with downward level shift. */
  /*     % Model with linear trend, three harmonics for seasonal component and */
  /*     % varying amplitude using a linear trend). */
  /*     % Load airline data. */
  /*     %   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 */
  /*     y = [112  115  145  171  196  204  242  284  315  340  360  417    % Jan */
  /*          118  126  150  180  196  188  233  277  301  318  342  391    % Feb */
  /*          132  141  178  193  236  235  267  317  356  362  406  419    % Mar */
  /*          129  135  163  181  235  227  269  313  348  348  396  461    % Apr */
  /*          121  125  172  183  229  234  270  318  355  363  420  472    % May */
  /*          135  149  178  218  243  264  315  374  422  435  472  535    % Jun */
  /*          148  170  199  230  264  302  364  413  465  491  548  622    % Jul */
  /*          148  170  199  242  272  293  347  405  467  505  559  606    % Aug */
  /*          136  158  184  209  237  259  312  355  404  404  463  508    % Sep */
  /*          119  133  162  191  211  229  274  306  347  359  407  461    % Oct */
  /*          104  114  146  172  180  203  237  271  305  310  362  390    % Nov */
  /*          118  140  166  194  201  229  278  306  336  337  405  432 ]; % Dec */
  /*     % Source: */
  /*     % http://datamarket.com/data/list/?q=provider:tsdl */
  /*  */
  /*     y=(y(:)); */
  /*     yLS=y; */
  /*     yLS(35:end)=yLS(35:end)-300; */
  /*     model=struct; */
  /*     model.trend=1;              % linear trend */
  /*     model.s=12;                 % monthly time series */
  /*     model.seasonal=103; */
  /*     model.lshift=26:length(yLS)-25; */
  /*     out=LTSts(yLS,'model',model,'msg',0); */
  /*  */
  /*     close all */
  /*     % Plot real and fitted values */
  /*     plot(yLS,'Linewidth',1.5); */
  /*     hold('on') */
  /*     plot(out.yhat,'r--','Linewidth',1.5) */
  /*     legend({'Real values','Fitted values'},'Location','SouthEast','interpreter','LaTeX','FontSize',14) */
  /*     % Using the notation of the paper RPRH: A=1, B=3, G=1 and $\delta_1>0$. */
  /*     str=strcat('A=1, B=3, G=1, $\delta_2=',num2str(out.posLS),'$'); */
  /*     numpar = {'model parameters:' , str}; */
  /*     title(gca,numpar,'interpreter','LaTeX','FontSize',16); */
  /* } */
  /* { */
  /*     % Model with an explanatory variable using log-transformed series. */
  /*     % Load airline data. */
  /*     %   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 */
  /*     y = [112  115  145  171  196  204  242  284  315  340  360  417    % Jan */
  /*          118  126  150  180  196  188  233  277  301  318  342  391    % Feb */
  /*          132  141  178  193  236  235  267  317  356  362  406  419    % Mar */
  /*          129  135  163  181  235  227  269  313  348  348  396  461    % Apr */
  /*          121  125  172  183  229  234  270  318  355  363  420  472    % May */
  /*          135  149  178  218  243  264  315  374  422  435  472  535    % Jun */
  /*          148  170  199  230  264  302  364  413  465  491  548  622    % Jul */
  /*          148  170  199  242  272  293  347  405  467  505  559  606    % Aug */
  /*          136  158  184  209  237  259  312  355  404  404  463  508    % Sep */
  /*          119  133  162  191  211  229  274  306  347  359  407  461    % Oct */
  /*          104  114  146  172  180  203  237  271  305  310  362  390    % Nov */
  /*          118  140  166  194  201  229  278  306  336  337  405  432 ]; % Dec */
  /*     % Source: */
  /*     % http://datamarket.com/data/list/?q=provider:tsdl */
  /*  */
  /*     y=(y(:)); */
  /*     y1=log(y); */
  /*     % Model with linear trend, two harmonics for seasonal component and */
  /*     % varying amplitude using a linear trend). */
  /*     model=struct; */
  /*     model.trend=1;              % linear trend */
  /*     model.s=12;                 % monthly time series */
  /*     model.seasonal=106; */
  /*     model.lshift=0; */
  /*     model.X=randn(length(y),1); */
  /*     out=LTSts(y1,'model',model); */
  /*  */
  /*     close all */
  /*     % Plot real and fitted values */
  /*     plot(y1,'Linewidth',1.5); */
  /*     hold('on') */
  /*     plot(out.yhat,'r--','Linewidth',1.5) */
  /*     legend({'Real values','Fitted values'},'Location','SouthEast','interpreter','LaTeX','FontSize',14) */
  /*     % Using the notation of the paper RPRH: A=1, B=6, G=1 and $\delta_1>0$. */
  /*     str=strcat('A=1, B=6, G=1, $\delta_1=0$'); */
  /*     numpar = {'model parameters:' , str}; */
  /*     title(gca,numpar,'interpreter','LaTeX','FontSize',16); */
  /* } */
  /* { */
  /*     %% Example 1 used in the paper RPRH. */
  /*     % Load airline data. */
  /*     %   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 */
  /*     y = [112  115  145  171  196  204  242  284  315  340  360  417    % Jan */
  /*          118  126  150  180  196  188  233  277  301  318  342  391    % Feb */
  /*          132  141  178  193  236  235  267  317  356  362  406  419    % Mar */
  /*          129  135  163  181  235  227  269  313  348  348  396  461    % Apr */
  /*          121  125  172  183  229  234  270  318  355  363  420  472    % May */
  /*          135  149  178  218  243  264  315  374  422  435  472  535    % Jun */
  /*          148  170  199  230  264  302  364  413  465  491  548  622    % Jul */
  /*          148  170  199  242  272  293  347  405  467  505  559  606    % Aug */
  /*          136  158  184  209  237  259  312  355  404  404  463  508    % Sep */
  /*          119  133  162  191  211  229  274  306  347  359  407  461    % Oct */
  /*          104  114  146  172  180  203  237  271  305  310  362  390    % Nov */
  /*          118  140  166  194  201  229  278  306  336  337  405  432 ]; % Dec */
  /*     % Two short level shifts in opposite directions and an isolated outlier. */
  /*     % Add a level shift contamination plus some outliers. */
  /*     y1=y(:); */
  /*     y1(50:55)=y1(50:55)-300; */
  /*     y1(70:75)=y1(70:75)+300; */
  /*     y1(90:90)=y1(90:90)+300; */
  /*     % Create structure specifying model */
  /*     model=struct; */
  /*     model.trend=2;                  % quadratic trend */
  /*     model.s=12;                     % monthly time series */
  /*     model.seasonal=204;             % number of harmonics */
  /*     model.lshift=41:length(y1)-40;  % position where monitoring level shift */
  /*     model.X=''; */
  /*     % Create structure lts specifying lts options */
  /*     lshiftlocref=struct; */
  /*     % Set window length for local refinement. */
  /*     lshiftlocref.wlength=10; */
  /*     % Set tuning constant to use insde Huber rho function */
  /*     lshiftlocref.huberc=1.5; */
  /*     % Estimate the parameters */
  /*     [out]=LTSts(y1,'model',model,'nsamp',500,... */
  /*        'plots',1,'lshiftlocref',lshiftlocref,'msg',0); */
  /*     % Using the notation of the paper RPRH: A=2, B=4, G=2 and $\delta_1>0$. */
  /*     str=strcat('A=2, B=4, G=2, $\delta_2=',num2str(out.posLS),'$'); */
  /*     numpar = {'model parameters:' , str}; */
  /*     axeslast=findobj('-regexp','Tag','LTSts:ts'); */
  /*     title(axeslast(end),numpar,'interpreter','LaTeX','FontSize',16); */
  /*  */
  /*     % generate the wedgeplot */
  /*     % wedgeplot(out,'transpose',true,'extradata',[y1 out.yhat]); */
  /* } */
  /* { */
  /*     %% Example 2 used in the paper RPRH. */
  /*     % A persisting level shift and three isolated outliers, two of which in */
  /*     % proximity of the level shift. */
  /*         % Load airline data. */
  /*     %   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 */
  /*     y = [112  115  145  171  196  204  242  284  315  340  360  417    % Jan */
  /*          118  126  150  180  196  188  233  277  301  318  342  391    % Feb */
  /*          132  141  178  193  236  235  267  317  356  362  406  419    % Mar */
  /*          129  135  163  181  235  227  269  313  348  348  396  461    % Apr */
  /*          121  125  172  183  229  234  270  318  355  363  420  472    % May */
  /*          135  149  178  218  243  264  315  374  422  435  472  535    % Jun */
  /*          148  170  199  230  264  302  364  413  465  491  548  622    % Jul */
  /*          148  170  199  242  272  293  347  405  467  505  559  606    % Aug */
  /*          136  158  184  209  237  259  312  355  404  404  463  508    % Sep */
  /*          119  133  162  191  211  229  274  306  347  359  407  461    % Oct */
  /*          104  114  146  172  180  203  237  271  305  310  362  390    % Nov */
  /*          118  140  166  194  201  229  278  306  336  337  405  432 ]; % Dec */
  /*     close all */
  /*     y1=y(:); */
  /*     y1(68:end)=y1(68:end)+1300; */
  /*     y1(67)=y1(67)-600; */
  /*     y1(45)=y1(45)-800; */
  /*     y1(68:69)=y1(68:69)+800; */
  /*     % Create structure specifying model */
  /*     model=struct; */
  /*     model.trend=2;                  % quadratic trend */
  /*     model.s=12;                     % monthly time series */
  /*     model.seasonal=204;             % number of harmonics */
  /*     model.lshift=41:length(y1)-40;  % position where monitoring level shift */
  /*     model.X=''; */
  /*     % Create structure lts specifying lts options */
  /*     lshiftlocref=struct; */
  /*     % Set window length for local refinement. */
  /*     lshiftlocref.wlength=10; */
  /*     % Set tuning constant to use insde Huber rho function */
  /*     lshiftlocref.huberc=1.5; */
  /*     % Estimate the parameters */
  /*     [out, varargout]=LTSts(y1,'model',model,'nsamp',500,... */
  /*        'plots',1,'lshiftlocref',lshiftlocref,'msg',0); */
  /*  */
  /*     % Using the notation of the paper RPRH: A=2, B=4, G=2 and $\delta_1>0$. */
  /*     str=strcat('A=2, B=4, G=2, $\delta_2=',num2str(out.posLS),'$'); */
  /*     numpar = {'model parameters:' , str}; */
  /*     title(findobj('-regexp','Tag','LTSts:ts'),numpar,'interpreter','LaTeX','FontSize',16); */
  /*  */
  /*     % generate the wedgeplot */
  /*     % wedgeplot(out,'transpose',true,'extradata',[y1 out.yhat]); */
  /*  */
  /* } */
  /* { */
  /*     %% Example 3 used in the paper RPRH. */
  /*     % A persisting level shift preceded and followed in the proximity by */
  /*     % other two short level shifts, and an isolated outlier. */
  /*         % Load airline data. */
  /*     %   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 */
  /*     y = [112  115  145  171  196  204  242  284  315  340  360  417    % Jan */
  /*          118  126  150  180  196  188  233  277  301  318  342  391    % Feb */
  /*          132  141  178  193  236  235  267  317  356  362  406  419    % Mar */
  /*          129  135  163  181  235  227  269  313  348  348  396  461    % Apr */
  /*          121  125  172  183  229  234  270  318  355  363  420  472    % May */
  /*          135  149  178  218  243  264  315  374  422  435  472  535    % Jun */
  /*          148  170  199  230  264  302  364  413  465  491  548  622    % Jul */
  /*          148  170  199  242  272  293  347  405  467  505  559  606    % Aug */
  /*          136  158  184  209  237  259  312  355  404  404  463  508    % Sep */
  /*          119  133  162  191  211  229  274  306  347  359  407  461    % Oct */
  /*          104  114  146  172  180  203  237  271  305  310  362  390    % Nov */
  /*          118  140  166  194  201  229  278  306  336  337  405  432 ]; % Dec */
  /*     y1=y(:); */
  /*     y1(50:55)=y1(50:55)-300; */
  /*     y1(68:end)=y1(68:end)-700; */
  /*     y1(70:75)=y1(70:75)+300; */
  /*     y1(90:90)=y1(90:90)+300; */
  /*     % Create structure specifying model */
  /*     model=struct; */
  /*     model.trend=2;                  % quadratic trend */
  /*     model.s=12;                     % monthly time series */
  /*     model.seasonal=204;             % number of harmonics */
  /*     model.lshift=41:length(y1)-40;  % position where monitoring level shift */
  /*     model.X=''; */
  /*     % Create structure lts specifying lts options */
  /*     lshiftlocref=struct; */
  /*     % Set window length for local refinement. */
  /*     lshiftlocref.wlength=10; */
  /*     % Set tuning constant to use insde Huber rho function */
  /*     lshiftlocref.huberc=1.5; */
  /*     close all */
  /*     % Estimate the parameters */
  /*     [out, varargout]=LTSts(y1,'model',model,'nsamp',500,... */
  /*        'plots',2,'lshiftlocref',lshiftlocref,'msg',0); */
  /*     % Using the notation of the paper RPRH: A=2, B=4, G=2 and $\delta_1>0$. */
  /*     str=strcat('A=2, B=4, G=2, $\delta_2=',num2str(out.posLS),'$'); */
  /*     numpar = {'model parameters:' , str}; */
  /*     title(findobj('-regexp','Tag','LTSts:ts'),numpar,'interpreter','LaTeX','FontSize',16); */
  /*  */
  /*     % generate the wedgeplot */
  /*     % wedgeplot(out,'transpose',true,'extradata',[y1 out.yhat]); */
  /*  */
  /* } */
  /* { */
  /*  */
  /*     %% Examples 4 and 5 used in the paper RPRH: trade data. */
  /*     close all; clear all; */
  /*     % the datasets */
  /*     load('P12119085'); */
  /*     load('P17049075'); */
  /*     Y4 = P12119085{:,1}; */
  /*     Y5 = P17049075{:,1}; */
  /*  */
  /*     % the model */
  /*     model           = struct; */
  /*     model.trend     = 1; */
  /*     model.seasonal  = 102; */
  /*     model.s         = 12; */
  /*     model.lshift    = 14:length(Y4)-13; */
  /*  */
  /*     % LTSts */
  /*     out4 = LTSts(Y4,'model',model,'plots',0,'dispresults',true,'msg',0); */
  /*     out5 = LTSts(Y5,'model',model,'plots',0,'dispresults',true,'msg',0); */
  /*  */
  /*     % the wedgeplot with the time series and the detected outliers and */
  /*     % level shift */
  /*     wedgeplot(out4,'extradata',Y4,'titl','P12119085, imports of plants from KN to UK'); */
  /*     wedgeplot(out5,'extradata',Y5,'titl','P17049075, imports of sugars from UA to LT'); */
  /*  */
  /*     % Forecasts with a 99.9 per cent confidence level */
  /*     nfore=10; */
  /*     outfore4 = forecastTS(out4,'model',model,'nfore',nfore,'conflev',0.999,'titl','LTSts forecast for P12119085, imports of plants from KN to UK'); */
  /*     outfore5 = forecastTS(out5,'model',model,'nfore',nfore,'conflev',0.999,'titl','LTSts forecast for P17049075, imports of sugars from UA to LT'); */
  /*  */
  /*     % Comparing with FS (needs conflev option) */
  /*  */
  /*     outLTS4 = LTSts(Y4,'model',model,'plots',1,'conflev',0.99,'msg',0); */
  /*     title(findobj(gcf,'Tag','LTSts:ts'),'P12119085, LTS with conflev=0.99'); */
  /*      */
  /*     outFRS4 = FSRts(Y4,'model',model,'plots',1); */
  /*     title(findobj(gcf,'Tag','FSRts:ts'),'P12119085, FS with default conflev'); */
  /*  */
  /*     outLTS5 = LTSts(Y5,'model',model,'plots',1,'conflev',0.99,'msg',0); */
  /*     title(findobj(gcf,'Tag','LTSts:ts'),'P17049075, LTS with conflev=0.99'); */
  /*  */
  /*     outFRS5 = FSRts(Y5,'model',model,'plots',1); */
  /*     title(findobj(gcf,'Tag','FSRts:ts'),'P17049075, FS with default conflev'); */
  /*  */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checking */
  /*  setting global variable yin */
  i = yin.contents->size[0];
  yin.contents->size[0] = y->size[0];
  emxEnsureCapacity_real_T(yin.contents, i);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    yin.contents->data[i] = y->data[i];
  }

  /*  Extract size of the data */
  /*  seq is the vector which will contain linear time trend */
  emxInit_real_T(&Cr, 2);
  if (y->size[0] < 1) {
    Cr->size[0] = 1;
    Cr->size[1] = 0;
  } else {
    i = Cr->size[0] * Cr->size[1];
    Cr->size[0] = 1;
    Cr->size[1] = y->size[0];
    emxEnsureCapacity_real_T(Cr, i);
    loop_ub = y->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      Cr->data[i] = (double)i + 1.0;
    }
  }

  emxInitStruct_captured_var1(&seq);
  i = seq.contents->size[0];
  seq.contents->size[0] = Cr->size[1];
  emxEnsureCapacity_real_T(seq.contents, i);
  loop_ub = Cr->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq.contents->data[i] = Cr->data[i];
  }

  emxInitStruct_captured_var(&zerT1);
  i = zerT1.contents->size[0];
  zerT1.contents->size[0] = y->size[0];
  emxEnsureCapacity_boolean_T(zerT1.contents, i);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    zerT1.contents->data[i] = false;
  }

  emxInit_real_T(&brob, 1);

  /*  Set up values for default model */
  /*  linear trend */
  /*  monthly time series */
  /*  just one harmonic */
  /*  no extra explanatory variable */
  /*  no level shift */
  /*  no autoregressive component */
  /*  h to be implemented for LTS */
  /*  Set the default value for h (the default is 75 per cent of the data) */
  hmin = (int)floor(0.5 * (double)y->size[0]);

  /*  default value for ALS iterations */
  /*  default values for structure which contains the parameters associated */
  /*  with local level shift refinement */
  /*  nbestindexesdef is a positive integer which specifies how many indices of */
  /*  the smallest values of the target functions we want to retain. */
  /*  dispresultsdef Boolean about display results. */
  /*  User options */
  /*  singsub= scalar which will contain the number of singular subsets which */
  /*  are extracted (that is the subsets of size p which are not full rank) */
  /*  initialize brob which will be the vector of estimated robust regression */
  /*  coefficients */
  i = brob->size[0];
  brob->size[0] = y->size[0];
  emxEnsureCapacity_real_T(brob, i);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    brob->data[i] = -99.0;
  }

  emxInit_real_T(&b_y, 1);

  /*  Write in structure 'options' the options chosen by the user */
  /*  Default values for the optional parameters are set inside structure */
  /*  'options' */
  /*  Get model parameters */
  s.contents = model->s;

  /*  get periodicity of time series */
  trend.contents = model->trend;

  /*  get kind of  trend */
  seasonal.contents = model->seasonal;

  /*  get number of harmonics */
  lshift = model->lshift;

  /*  get level shift */
  /*  nbestindexes = indexes of the best  nbestindexes solutions for each */
  /*  tentative position of level shift */
  /*  Check if the optional user parameters are valid. */
  h_do_vectors(model->trend, (double *)&ncomb, c_size, (int *)&nx, &sizes_idx_1,
               (int *)&vlen, &ib_size);

  /*  Construct the matrices which are fixed in each step of the minimization */
  /*  procedure */
  i = b_y->size[0];
  b_y->size[0] = seq.contents->size[0];
  emxEnsureCapacity_real_T(b_y, i);
  nx = seq.contents->size[0];
  for (sizes_idx_1 = 0; sizes_idx_1 < nx; sizes_idx_1++) {
    b_y->data[sizes_idx_1] = seq.contents->data[sizes_idx_1] *
      seq.contents->data[sizes_idx_1];
  }

  emxInit_real_T(&betaini, 1);
  i = betaini->size[0];
  betaini->size[0] = seq.contents->size[0];
  emxEnsureCapacity_real_T(betaini, i);
  nx = seq.contents->size[0];
  for (sizes_idx_1 = 0; sizes_idx_1 < nx; sizes_idx_1++) {
    betaini->data[sizes_idx_1] = rt_powd_snf(seq.contents->data[sizes_idx_1],
      3.0);
  }

  emxInitStruct_captured_var2(&Seq);
  i = Seq.contents->size[0] * Seq.contents->size[1];
  Seq.contents->size[0] = y->size[0];
  Seq.contents->size[1] = 4;
  emxEnsureCapacity_real_T(Seq.contents, i);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    Seq.contents->data[i] = 1.0;
  }

  loop_ub = seq.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    Seq.contents->data[i + Seq.contents->size[0]] = seq.contents->data[i];
  }

  loop_ub = b_y->size[0];
  for (i = 0; i < loop_ub; i++) {
    Seq.contents->data[i + Seq.contents->size[0] * 2] = b_y->data[i];
  }

  loop_ub = betaini->size[0];
  for (i = 0; i < loop_ub; i++) {
    Seq.contents->data[i + Seq.contents->size[0] * 3] = betaini->data[i];
  }

  /*  Define matrix which contains linear quadratic of cubic trend */
  emxInitStruct_captured_var2(&Xtrend);
  if (intercept) {
    if (1.0 > model->trend + 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int)(model->trend + 1.0);
    }

    vlen = Seq.contents->size[0];
    i = Xtrend.contents->size[0] * Xtrend.contents->size[1];
    Xtrend.contents->size[0] = Seq.contents->size[0];
    Xtrend.contents->size[1] = loop_ub;
    emxEnsureCapacity_real_T(Xtrend.contents, i);
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < vlen; i1++) {
        Xtrend.contents->data[i1 + Xtrend.contents->size[0] * i] =
          Seq.contents->data[i1 + Seq.contents->size[0] * i];
      }
    }
  } else {
    if (2.0 > model->trend + 1.0) {
      i = 0;
      i1 = 0;
    } else {
      i = 1;
      i1 = (int)(model->trend + 1.0);
    }

    loop_ub = Seq.contents->size[0];
    ib_size = Xtrend.contents->size[0] * Xtrend.contents->size[1];
    Xtrend.contents->size[0] = Seq.contents->size[0];
    vlen = i1 - i;
    Xtrend.contents->size[1] = vlen;
    emxEnsureCapacity_real_T(Xtrend.contents, ib_size);
    for (i1 = 0; i1 < vlen; i1++) {
      for (ib_size = 0; ib_size < loop_ub; ib_size++) {
        Xtrend.contents->data[ib_size + Xtrend.contents->size[0] * i1] =
          Seq.contents->data[ib_size + Seq.contents->size[0] * (i + i1)];
      }
    }
  }

  emxInitStruct_captured_var1(&yhatseaso);

  /*  seasonal component */
  i = yhatseaso.contents->size[0];
  yhatseaso.contents->size[0] = 1;
  emxEnsureCapacity_real_T(yhatseaso.contents, i);
  yhatseaso.contents->data[0] = 0.0;
  emxInitStruct_captured_var2(&Xseaso);
  emxInit_real_T(&bestnumscale2, 1);
  if (model->seasonal > 0.0) {
    emxInit_char_T(&sstring, 2);
    d_sprintf(model->seasonal, sstring);

    /*  sstring=num2str(seasonal); TODO */
    if (model->seasonal > 100.0) {
      dc = str2double(sstring->data[0]);
      varampl.contents = dc.re;
      dc = b_str2double(*(char (*)[2])&sstring->data[1]);
      seasonal.contents = dc.re;
    } else {
      varampl.contents = 0.0;
    }

    emxFree_char_T(&sstring);
    i = Xseaso.contents->size[0] * Xseaso.contents->size[1];
    Xseaso.contents->size[0] = y->size[0];
    i1 = (int)(seasonal.contents * 2.0);
    Xseaso.contents->size[1] = i1;
    emxEnsureCapacity_real_T(Xseaso.contents, i);
    loop_ub = y->size[0] * i1;
    for (i = 0; i < loop_ub; i++) {
      Xseaso.contents->data[i] = 0.0;
    }

    i = (int)seasonal.contents;
    for (ib_size = 0; ib_size < i; ib_size++) {
      d = 2.0 * ((double)ib_size + 1.0);
      ncomb = d * 3.1415926535897931;
      loop_ub = seq.contents->size[0];
      i1 = bestnumscale2->size[0];
      bestnumscale2->size[0] = seq.contents->size[0];
      emxEnsureCapacity_real_T(bestnumscale2, i1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        bestnumscale2->data[i1] = ncomb * seq.contents->data[i1] / s.contents;
      }

      nx = bestnumscale2->size[0];
      for (sizes_idx_1 = 0; sizes_idx_1 < nx; sizes_idx_1++) {
        bestnumscale2->data[sizes_idx_1] = cos(bestnumscale2->data[sizes_idx_1]);
      }

      loop_ub = seq.contents->size[0];
      i1 = betaini->size[0];
      betaini->size[0] = seq.contents->size[0];
      emxEnsureCapacity_real_T(betaini, i1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        betaini->data[i1] = ncomb * seq.contents->data[i1] / s.contents;
      }

      nx = betaini->size[0];
      for (sizes_idx_1 = 0; sizes_idx_1 < nx; sizes_idx_1++) {
        betaini->data[sizes_idx_1] = sin(betaini->data[sizes_idx_1]);
      }

      loop_ub = bestnumscale2->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Xseaso.contents->data[i1 + Xseaso.contents->size[0] * ((int)(d + -1.0) -
          1)] = bestnumscale2->data[i1];
      }

      loop_ub = betaini->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Xseaso.contents->data[i1 + Xseaso.contents->size[0] * ((int)d - 1)] =
          betaini->data[i1];
      }
    }

    /*  Remark: when s is even the sine term disapperas for j=s/2 and so the */
    /*  maximum number of trigonometric terms is s-1 */
    if (seasonal.contents == model->s / 2.0) {
      if (1 > Xseaso.contents->size[1] - 1) {
        loop_ub = 0;
      } else {
        loop_ub = Xseaso.contents->size[1] - 1;
      }

      ib_size = Xseaso.contents->size[0] - 1;
      vlen = Xseaso.contents->size[0];
      for (i = 0; i < loop_ub; i++) {
        for (i1 = 0; i1 < vlen; i1++) {
          Xseaso.contents->data[i1 + (ib_size + 1) * i] = Xseaso.contents->
            data[i1 + Xseaso.contents->size[0] * i];
        }
      }

      i = Xseaso.contents->size[0] * Xseaso.contents->size[1];
      Xseaso.contents->size[0] = ib_size + 1;
      Xseaso.contents->size[1] = loop_ub;
      emxEnsureCapacity_real_T(Xseaso.contents, i);
    }

    nseaso = Xseaso.contents->size[1];
  } else {
    nseaso = 0;
    varampl.contents = 0.0;
    Xseaso.contents->size[0] = 0;
    Xseaso.contents->size[1] = 0;
  }

  emxInitStruct_captured_var2(&X);
  i = X.contents->size[0] * X.contents->size[1];
  X.contents->size[0] = model->X->size[0];
  X.contents->size[1] = model->X->size[1];
  emxEnsureCapacity_real_T(X.contents, i);
  loop_ub = model->X->size[0] * model->X->size[1];
  for (i = 0; i < loop_ub; i++) {
    X.contents->data[i] = model->X->data[i];
  }

  /*  Order of the autoregressive component */
  ARp = model->ARp.data[0];
  if (model->ARp.data[0] > 6.0) {
    ARp = 6.0;
  }

  if (ARp > 0.0) {
    emxInit_real_T(&Ylagged, 2);

    /*  Ylagged = matrix which contains lagged values of Y */
    i = Ylagged->size[0] * Ylagged->size[1];
    Ylagged->size[0] = y->size[0];
    i1 = (int)ARp;
    Ylagged->size[1] = (int)ARp;
    emxEnsureCapacity_real_T(Ylagged, i);
    for (ib_size = 0; ib_size < i1; ib_size++) {
      i = (int)((double)y->size[0] - ((double)ib_size + 1.0));
      if (1 > i) {
        loop_ub = 0;
      } else {
        loop_ub = i;
      }

      for (i = 0; i <= ib_size; i++) {
        Ylagged->data[i + Ylagged->size[0] * ib_size] = y->data[i];
      }

      for (i = 0; i < loop_ub; i++) {
        Ylagged->data[((i + ib_size) + Ylagged->size[0] * ib_size) + 1] =
          y->data[i];
      }
    }

    if ((Ylagged->size[0] != 0) && (Ylagged->size[1] != 0)) {
      result = Ylagged->size[0];
    } else if ((model->X->size[0] != 0) && (model->X->size[1] != 0)) {
      result = model->X->size[0];
    } else {
      result = Ylagged->size[0];
      if (model->X->size[0] > Ylagged->size[0]) {
        result = model->X->size[0];
      }
    }

    empty_non_axis_sizes = (result == 0);
    if (empty_non_axis_sizes || ((Ylagged->size[0] != 0) && (Ylagged->size[1] !=
          0))) {
      input_sizes_idx_1 = (signed char)Ylagged->size[1];
    } else {
      input_sizes_idx_1 = 0;
    }

    if (empty_non_axis_sizes || ((model->X->size[0] != 0) && (model->X->size[1]
          != 0))) {
      b_sizes_idx_1 = model->X->size[1];
    } else {
      b_sizes_idx_1 = 0;
    }

    ib_size = input_sizes_idx_1;
    b_input_sizes_idx_1 = input_sizes_idx_1;
    i = X.contents->size[0] * X.contents->size[1];
    X.contents->size[0] = result;
    X.contents->size[1] = input_sizes_idx_1 + b_sizes_idx_1;
    emxEnsureCapacity_real_T(X.contents, i);
    for (i = 0; i < ib_size; i++) {
      for (i1 = 0; i1 < result; i1++) {
        X.contents->data[i1 + X.contents->size[0] * i] = Ylagged->data[i1 +
          result * i];
      }
    }

    emxFree_real_T(&Ylagged);
    for (i = 0; i < b_sizes_idx_1; i++) {
      for (i1 = 0; i1 < result; i1++) {
        X.contents->data[i1 + X.contents->size[0] * (i + input_sizes_idx_1)] =
          model->X->data[i1 + result * i];
      }
    }
  }

  /*  nexpl = number of potential explanatory variables */
  isemptyX.contents = ((X.contents->size[0] == 0) || (X.contents->size[1] == 0));
  if (isemptyX.contents) {
    nexpl.contents = 0.0;
  } else {
    nexpl.contents = X.contents->size[1];
  }

  /*  pini = number of parameters in the linear model without level shifts nor */
  /*  varying amplitude */
  /*  ntrend = number of trend parameters, */
  /*  nseaso = number of parameters associated with the harmonics, */
  /*  nexpl = number of explanatory variables, */
  pini = (double)((unsigned int)Xtrend.contents->size[1] + nseaso) +
    nexpl.contents;

  /*  p = total number of parameters in the model */
  /*  nini + */
  /*  varampl = number of parameters involving time varying trend, */
  /*  + 2 additional parameters if there is a level shift component */
  lshiftYN.contents = 0.0;
  if ((model->lshift == -1.0) || (model->lshift > 0.0)) {
    lshiftYN.contents = 1.0;
  }

  p = (pini + varampl.contents) + lshiftYN.contents * 2.0;

  /* automatic specification of lshift which takes into account the fact that */
  /* at line 217 of FSRinvmdr the degrees of freedom mm-p must be positive. */
  /* Being mm the length of LSH = (lshift+1):(T-lshift), mm-p>0 can be written as: */
  /* (T-lshift)-(lshift+1) > p -->  2*lshift < T-1-p  --> lshift < (T-1-p)/2 */
  if (model->lshift == -1.0) {
    lshift = floor((((double)y->size[0] - 1.0) - p) / 2.0);
  }

  /*  indexes of linear part of seasonal component */
  emxInitStruct_captured_var2(&indlinsc);
  if (seasonal.contents < 6.0) {
    sworst = (model->trend + 1.0) + seasonal.contents * 2.0;
    if (rtIsNaN(model->trend + 2.0) || rtIsNaN(sworst)) {
      i = indlinsc.contents->size[0] * indlinsc.contents->size[1];
      indlinsc.contents->size[0] = 1;
      indlinsc.contents->size[1] = 1;
      emxEnsureCapacity_real_T(indlinsc.contents, i);
      indlinsc.contents->data[0] = rtNaN;
    } else if (sworst < model->trend + 2.0) {
      indlinsc.contents->size[0] = 1;
      indlinsc.contents->size[1] = 0;
    } else if ((rtIsInf(model->trend + 2.0) || rtIsInf(sworst)) && (model->trend
                + 2.0 == sworst)) {
      i = indlinsc.contents->size[0] * indlinsc.contents->size[1];
      indlinsc.contents->size[0] = 1;
      indlinsc.contents->size[1] = 1;
      emxEnsureCapacity_real_T(indlinsc.contents, i);
      indlinsc.contents->data[0] = rtNaN;
    } else if (floor(model->trend + 2.0) == model->trend + 2.0) {
      i = indlinsc.contents->size[0] * indlinsc.contents->size[1];
      indlinsc.contents->size[0] = 1;
      loop_ub = (int)floor(sworst - (model->trend + 2.0));
      indlinsc.contents->size[1] = loop_ub + 1;
      emxEnsureCapacity_real_T(indlinsc.contents, i);
      for (i = 0; i <= loop_ub; i++) {
        indlinsc.contents->data[i] = (model->trend + 2.0) + (double)i;
      }
    } else {
      eml_float_colon(model->trend + 2.0, sworst, indlinsc.contents);
    }
  } else {
    sworst = ((model->trend + 1.0) + seasonal.contents * 2.0) - 1.0;
    if (rtIsNaN(model->trend + 2.0) || rtIsNaN(sworst)) {
      i = indlinsc.contents->size[0] * indlinsc.contents->size[1];
      indlinsc.contents->size[0] = 1;
      indlinsc.contents->size[1] = 1;
      emxEnsureCapacity_real_T(indlinsc.contents, i);
      indlinsc.contents->data[0] = rtNaN;
    } else if (sworst < model->trend + 2.0) {
      indlinsc.contents->size[0] = 1;
      indlinsc.contents->size[1] = 0;
    } else if ((rtIsInf(model->trend + 2.0) || rtIsInf(sworst)) && (model->trend
                + 2.0 == sworst)) {
      i = indlinsc.contents->size[0] * indlinsc.contents->size[1];
      indlinsc.contents->size[0] = 1;
      indlinsc.contents->size[1] = 1;
      emxEnsureCapacity_real_T(indlinsc.contents, i);
      indlinsc.contents->data[0] = rtNaN;
    } else if (floor(model->trend + 2.0) == model->trend + 2.0) {
      i = indlinsc.contents->size[0] * indlinsc.contents->size[1];
      indlinsc.contents->size[0] = 1;
      loop_ub = (int)floor(sworst - (model->trend + 2.0));
      indlinsc.contents->size[1] = loop_ub + 1;
      emxEnsureCapacity_real_T(indlinsc.contents, i);
      for (i = 0; i <= loop_ub; i++) {
        indlinsc.contents->data[i] = (model->trend + 2.0) + (double)i;
      }
    } else {
      eml_float_colon(model->trend + 2.0, sworst, indlinsc.contents);
    }
  }

  if (rtIsNaN(p)) {
    i = Cr->size[0] * Cr->size[1];
    Cr->size[0] = 1;
    Cr->size[1] = 1;
    emxEnsureCapacity_real_T(Cr, i);
    Cr->data[0] = rtNaN;
  } else if (p < 1.0) {
    Cr->size[0] = 1;
    Cr->size[1] = 0;
  } else if (rtIsInf(p) && (1.0 == p)) {
    i = Cr->size[0] * Cr->size[1];
    Cr->size[0] = 1;
    Cr->size[1] = 1;
    emxEnsureCapacity_real_T(Cr, i);
    Cr->data[0] = rtNaN;
  } else {
    i = Cr->size[0] * Cr->size[1];
    Cr->size[0] = 1;
    loop_ub = (int)floor(p - 1.0);
    Cr->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(Cr, i);
    for (i = 0; i <= loop_ub; i++) {
      Cr->data[i] = (double)i + 1.0;
    }
  }

  emxInitStruct_captured_var2(&otherind);
  emxInit_int32_T(&ia, 1);
  g_do_vectors(Cr, indlinsc.contents, otherind.contents, ia, &ib_size);
  if (lshiftYN.contents == 1.0) {
    i = otherind.contents->size[0] * otherind.contents->size[1];
    if (1 > otherind.contents->size[1] - 1) {
      otherind.contents->size[1] = 0;
    } else {
      otherind.contents->size[1]--;
    }

    emxEnsureCapacity_real_T(otherind.contents, i);
  }

  /*  If the number of all possible subsets is <10000 the default is to extract */
  /*  all subsets otherwise just 10000. Notice that we use bc, a fast version */
  /*  of nchoosek. One may also use the approximation */
  /*  floor(exp(gammaln(n+1)-gammaln(n-p+1)-gammaln(pini+1))+0.5) */
  ncomb = bc(y->size[0], pini);

  /*  And check if the optional user parameters are reasonable. */
  /*  Check h and bdp The user has only specified h: no need to specify bdp. */
  if (h < hmin) {
    int2str(hmin, b_hmin.data, b_hmin.size);
  }

  bdp = 1.0 - h / (double)y->size[0];

  /*  the user has only specified bdp: h is defined accordingly */
  /*  Check number of subsamples to extract */
  varargin_22_size[0] = nsamp_size[1];
  varargin_22_size[1] = nsamp_size[0];
  loop_ub = nsamp_size[0] * nsamp_size[1];
  for (i = 0; i < loop_ub; i++) {
    c_varargin_22_data[i] = (varargin_22_data[i] > ncomb);
  }

  b_varargin_22_data.data = &c_varargin_22_data[0];
  b_varargin_22_data.size = &varargin_22_size[0];
  b_varargin_22_data.allocatedSize = 2;
  b_varargin_22_data.numDimensions = 2;
  b_varargin_22_data.canFreeData = false;
  if (b_ifWhileCond(&b_varargin_22_data)) {
    varargin_22_size_idx_0 = 1;
    varargin_22_size_idx_1 = 1;
    varargin_22_data[0] = 0.0;
  }

  b_h = floor(h);

  /*  Number of data points on which estimates are based */
  /*  Number of subsets to extract */
  /*  small sample correction factor */
  if (varampl.contents > 0.0) {
    /*  Convergence criteria inside ALS loop */
    b_reftolALS.contents = reftolALS;
    b_refstepsALS.contents = refstepsALS;
    verLess2016b.contents = false;
  } else {
    verLess2016b.contents = false;
    b_reftolALS.contents = 0.0;
    b_refstepsALS.contents = 0.0;
  }

  constr.contents = 0.0;

  /*  Confidence level which is used for outlier detection */
  /*  Scalar which controls the messages displayed on the screen */
  if (!(lshiftYN.contents == 1.0)) {
    lshift = 0.0;
  } else {
    /*  If a level shift is present, it is necessary to */
    /*  reestimate a linear model each time with a different */
    /*  level shift and, if  take the one which minimizes the target */
    /*  function (residual sum of squares/2 = negative log */
    /*  likelihood) */
    /*  total number of subsets to pass to procedure subsets */
  }

  emxInit_real_T(&allnumscale2, 1);

  /*  ScaleLSH= estimate of the squared scale for each value of LSH which has been */
  /*  considered */
  /*  yhatrobLSH = vector of fitted values for each value of LSH */
  /*  ilsh is a counter which is linked to the rows of LSH */
  /*  lLSH = length of tentative level shift positions */
  /*  allnumscale2 will contain the best best estimates of the target function */
  /*  for a tentative value of level shift position */
  hmin = (int)lts->bestr;
  i = allnumscale2->size[0];
  allnumscale2->size[0] = (int)lts->bestr;
  emxEnsureCapacity_real_T(allnumscale2, i);
  for (i = 0; i < hmin; i++) {
    allnumscale2->data[i] = 0.0;
  }

  /*  Store all bestr target functions for each tentative level shift */
  /*  position (target function = truncated residual sum of squares) */
  i = out->numscale2->size[0];
  out->numscale2->size[0] = (int)lts->bestr;
  emxEnsureCapacity_real_T(out->numscale2, i);
  for (i = 0; i < hmin; i++) {
    out->numscale2->data[i] = 0.0;
  }

  /*  Store the position of the indexes occupying nbestindexes best solutions of target */
  /*  function for each tentative level shift position */
  /*  1-bestrdiv2       = solutions from fresh subsets. */
  /*  bestrdiv2+1-bestr = best solutions coming from previous tentative level */
  /*  shift position */
  nx = (int)nbestindexes;
  i = out->BestIndexes->size[0];
  out->BestIndexes->size[0] = (int)nbestindexes;
  emxEnsureCapacity_real_T(out->BestIndexes, i);
  for (i = 0; i < nx; i++) {
    out->BestIndexes->data[i] = 0.0;
  }

  emxInit_boolean_T(&Weights, 1);

  /*  Weights = units forming subset for the solution associated to the minimum */
  /*  scale for each value of LSH */
  i = Weights->size[0];
  Weights->size[0] = y->size[0];
  emxEnsureCapacity_boolean_T(Weights, i);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    Weights->data[i] = false;
  }

  emxInit_real_T(&brobLSH, 1);
  nx = (int)p;
  i = brobLSH->size[0];
  brobLSH->size[0] = (int)p;
  emxEnsureCapacity_real_T(brobLSH, i);
  for (i = 0; i < nx; i++) {
    brobLSH->data[i] = 0.0;
  }

  /*  Construct matrix X (called Xsel) which contains the linear part of the model */
  emxInitStruct_captured_var2(&Xsel);
  if (seasonal.contents == 0.0) {
    if (isemptyX.contents) {
      i = Xsel.contents->size[0] * Xsel.contents->size[1];
      Xsel.contents->size[0] = Xtrend.contents->size[0];
      Xsel.contents->size[1] = Xtrend.contents->size[1];
      emxEnsureCapacity_real_T(Xsel.contents, i);
      loop_ub = Xtrend.contents->size[0] * Xtrend.contents->size[1];
      for (i = 0; i < loop_ub; i++) {
        Xsel.contents->data[i] = Xtrend.contents->data[i];
      }
    } else {
      if ((Xtrend.contents->size[0] != 0) && (Xtrend.contents->size[1] != 0)) {
        result = Xtrend.contents->size[0];
      } else if ((X.contents->size[0] != 0) && (X.contents->size[1] != 0)) {
        result = X.contents->size[0];
      } else {
        result = Xtrend.contents->size[0];
        if (X.contents->size[0] > Xtrend.contents->size[0]) {
          result = X.contents->size[0];
        }
      }

      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes || ((Xtrend.contents->size[0] != 0) &&
           (Xtrend.contents->size[1] != 0))) {
        input_sizes_idx_1 = (signed char)Xtrend.contents->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || ((X.contents->size[0] != 0) &&
           (X.contents->size[1] != 0))) {
        sizes_idx_1 = X.contents->size[1];
      } else {
        sizes_idx_1 = 0;
      }

      ib_size = input_sizes_idx_1;
      b_input_sizes_idx_1 = input_sizes_idx_1;
      b_sizes_idx_1 = sizes_idx_1;
      i = Xsel.contents->size[0] * Xsel.contents->size[1];
      Xsel.contents->size[0] = result;
      Xsel.contents->size[1] = input_sizes_idx_1 + sizes_idx_1;
      emxEnsureCapacity_real_T(Xsel.contents, i);
      for (i = 0; i < ib_size; i++) {
        for (i1 = 0; i1 < result; i1++) {
          Xsel.contents->data[i1 + Xsel.contents->size[0] * i] =
            Xtrend.contents->data[i1 + result * i];
        }
      }

      for (i = 0; i < sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          Xsel.contents->data[i1 + Xsel.contents->size[0] * (i +
            input_sizes_idx_1)] = X.contents->data[i1 + result * i];
        }
      }
    }
  } else {
    if (isemptyX.contents) {
      if ((Xtrend.contents->size[0] != 0) && (Xtrend.contents->size[1] != 0)) {
        result = Xtrend.contents->size[0];
      } else if ((Xseaso.contents->size[0] != 0) && (Xseaso.contents->size[1] !=
                  0)) {
        result = Xseaso.contents->size[0];
      } else {
        result = Xtrend.contents->size[0];
        if (Xseaso.contents->size[0] > Xtrend.contents->size[0]) {
          result = Xseaso.contents->size[0];
        }
      }

      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes || ((Xtrend.contents->size[0] != 0) &&
           (Xtrend.contents->size[1] != 0))) {
        input_sizes_idx_1 = (signed char)Xtrend.contents->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || ((Xseaso.contents->size[0] != 0) &&
           (Xseaso.contents->size[1] != 0))) {
        sizes_idx_1 = Xseaso.contents->size[1];
      } else {
        sizes_idx_1 = 0;
      }

      ib_size = input_sizes_idx_1;
      b_input_sizes_idx_1 = input_sizes_idx_1;
      b_sizes_idx_1 = sizes_idx_1;
      i = Xsel.contents->size[0] * Xsel.contents->size[1];
      Xsel.contents->size[0] = result;
      Xsel.contents->size[1] = input_sizes_idx_1 + sizes_idx_1;
      emxEnsureCapacity_real_T(Xsel.contents, i);
      for (i = 0; i < ib_size; i++) {
        for (i1 = 0; i1 < result; i1++) {
          Xsel.contents->data[i1 + Xsel.contents->size[0] * i] =
            Xtrend.contents->data[i1 + result * i];
        }
      }

      for (i = 0; i < sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          Xsel.contents->data[i1 + Xsel.contents->size[0] * (i +
            input_sizes_idx_1)] = Xseaso.contents->data[i1 + result * i];
        }
      }
    } else {
      if ((Xtrend.contents->size[0] != 0) && (Xtrend.contents->size[1] != 0)) {
        result = Xtrend.contents->size[0];
      } else if ((Xseaso.contents->size[0] != 0) && (Xseaso.contents->size[1] !=
                  0)) {
        result = Xseaso.contents->size[0];
      } else if ((X.contents->size[0] != 0) && (X.contents->size[1] != 0)) {
        result = X.contents->size[0];
      } else {
        result = Xtrend.contents->size[0];
        if (Xseaso.contents->size[0] > Xtrend.contents->size[0]) {
          result = Xseaso.contents->size[0];
        }

        if (X.contents->size[0] > result) {
          result = X.contents->size[0];
        }
      }

      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes || ((Xtrend.contents->size[0] != 0) &&
           (Xtrend.contents->size[1] != 0))) {
        input_sizes_idx_1 = (signed char)Xtrend.contents->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || ((Xseaso.contents->size[0] != 0) &&
           (Xseaso.contents->size[1] != 0))) {
        b_sizes_idx_1 = Xseaso.contents->size[1];
      } else {
        b_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || ((X.contents->size[0] != 0) &&
           (X.contents->size[1] != 0))) {
        sizes_idx_1 = X.contents->size[1];
      } else {
        sizes_idx_1 = 0;
      }

      ib_size = input_sizes_idx_1;
      b_input_sizes_idx_1 = input_sizes_idx_1;
      i = Xsel.contents->size[0] * Xsel.contents->size[1];
      Xsel.contents->size[0] = result;
      Xsel.contents->size[1] = (input_sizes_idx_1 + b_sizes_idx_1) + sizes_idx_1;
      emxEnsureCapacity_real_T(Xsel.contents, i);
      for (i = 0; i < ib_size; i++) {
        for (i1 = 0; i1 < result; i1++) {
          Xsel.contents->data[i1 + Xsel.contents->size[0] * i] =
            Xtrend.contents->data[i1 + result * i];
        }
      }

      for (i = 0; i < b_sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          Xsel.contents->data[i1 + Xsel.contents->size[0] * (i +
            input_sizes_idx_1)] = Xseaso.contents->data[i1 + result * i];
        }
      }

      for (i = 0; i < sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          Xsel.contents->data[i1 + Xsel.contents->size[0] * ((i +
            input_sizes_idx_1) + b_sizes_idx_1)] = X.contents->data[i1 + result *
            i];
        }
      }
    }

    /*  zero for varampl is automatically included because b0 is */
    /*  initialized as a vector of zeroes b0=[b0;zeros(varampl,1)]; */
  }

  /*  WEIisum = matrix which will contain the number of times each units has */
  /*  been included into the best h-subset after two iterations */
  /*  WEIisumbest10 = matrix which will contain the number of times each units has */
  /*  been included into the best h-subsets among the bestr/2 best */
  i = out->RES->size[0];
  out->RES->size[0] = y->size[0];
  emxEnsureCapacity_real_T(out->RES, i);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->RES->data[i] = rtNaN;
  }

  /*  Consistency factor based on the variance of the truncated normal */
  /*  distribution. 1-h/n=trimming percentage Compute variance of the truncated */
  /*  normal distribution. */
  sworst = 0.5 * (b_h / (double)y->size[0] + 1.0);
  if ((sworst >= 0.0) && (sworst <= 1.0)) {
    a = -1.4142135623730951 * erfcinv(2.0 * sworst);
  } else {
    a = rtNaN;
  }

  emxInitStruct_captured_var1(&bsb);
  emxInit_real_T(&yhatrob, 1);
  emxInit_boolean_T(&weightsst, 1);
  emxInit_real_T(&Xseldum, 2);

  /* factor=1/sqrt(1-(2*a.*normpdf(a))./(2*normcdf(a)-1)); */
  factor = 1.0 / sqrt(1.0 - 2.0 * ((double)y->size[0] / b_h) * a * (exp(-0.5 * a
    * a) / 2.5066282746310002));

  /*  Initialize 2D or 3D array which stores indexes of extracted */
  /*  subsets for each tentative level shift position */
  /*  Initialization of Ccell is necessary for MATLAB C coder */
  i = bsb.contents->size[0];
  bsb.contents->size[0] = 1;
  emxEnsureCapacity_real_T(bsb.contents, i);
  bsb.contents->data[0] = 0.0;
  i = yhatrob->size[0];
  yhatrob->size[0] = 1;
  emxEnsureCapacity_real_T(yhatrob, i);
  yhatrob->data[0] = 0.0;
  i = weightsst->size[0];
  weightsst->size[0] = 1;
  emxEnsureCapacity_boolean_T(weightsst, i);
  weightsst->data[0] = false;
  posLS = 0.0;
  i = out->Likloc->size[0] * out->Likloc->size[1];
  out->Likloc->size[0] = 1;
  out->Likloc->size[1] = 1;
  emxEnsureCapacity_real_T(out->Likloc, i);
  out->Likloc->data[0] = 0.0;
  i = Xseldum->size[0] * Xseldum->size[1];
  Xseldum->size[0] = 1;
  Xseldum->size[1] = 1;
  emxEnsureCapacity_real_T(Xseldum, i);
  Xseldum->data[0] = 0.0;
  sworst = rtInf;

  /*  Xlshift = explanatory variable associated with */
  /*  level shift Xlshift is 0 up to lsh-1 and 1 from */
  /*  lsh to T */
  i = bestnumscale2->size[0];
  bestnumscale2->size[0] = (int)(lshift - 1.0) + (int)(((double)y->size[0] -
    lshift) + 1.0);
  emxEnsureCapacity_real_T(bestnumscale2, i);
  loop_ub = (int)(lshift - 1.0);
  for (i = 0; i < loop_ub; i++) {
    bestnumscale2->data[i] = 0.0;
  }

  loop_ub = (int)(((double)y->size[0] - lshift) + 1.0);
  for (i = 0; i < loop_ub; i++) {
    bestnumscale2->data[i + (int)(lshift - 1.0)] = 1.0;
  }

  emxInitStruct_captured_var2(&Xlshift);
  i = Xlshift.contents->size[0] * Xlshift.contents->size[1];
  Xlshift.contents->size[0] = bestnumscale2->size[0];
  Xlshift.contents->size[1] = 1;
  emxEnsureCapacity_real_T(Xlshift.contents, i);
  loop_ub = bestnumscale2->size[0];
  for (i = 0; i < loop_ub; i++) {
    Xlshift.contents->data[i] = bestnumscale2->data[i];
  }

  i = out->invXX->size[0] * out->invXX->size[1];
  out->invXX->size[0] = (int)lts->bestr;
  out->invXX->size[1] = (int)p;
  emxEnsureCapacity_real_T(out->invXX, i);
  loop_ub = (int)lts->bestr * (int)p;
  for (i = 0; i < loop_ub; i++) {
    out->invXX->data[i] = 0.0;
  }

  emxInit_real_T(&bestyhat, 2);
  i = bestyhat->size[0] * bestyhat->size[1];
  bestyhat->size[0] = y->size[0];
  bestyhat->size[1] = (int)lts->bestr;
  emxEnsureCapacity_real_T(bestyhat, i);
  loop_ub = y->size[0] * (int)lts->bestr;
  for (i = 0; i < loop_ub; i++) {
    bestyhat->data[i] = 0.0;
  }

  i = bestnumscale2->size[0];
  bestnumscale2->size[0] = (int)lts->bestr;
  emxEnsureCapacity_real_T(bestnumscale2, i);
  for (i = 0; i < hmin; i++) {
    bestnumscale2->data[i] = rtInf;
  }

  emxInit_real_T(&b_C, 2);
  if (lshift > 0.0) {
    i = b_C->size[0] * b_C->size[1];
    b_C->size[0] = varargin_22_size_idx_0;
    b_C->size[1] = varargin_22_size_idx_1;
    emxEnsureCapacity_real_T(b_C, i);
    loop_ub = varargin_22_size_idx_0 * varargin_22_size_idx_1 - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_C->data[i] = varargin_22_data[i];
    }

    c_subsets(b_C, (double)y->size[0] - 1.0, pini + 1.0, 0.0, C, &a);
    if ((int)a != 0) {
      result = (int)a;
    } else if (((int)a != 0) && ((int)(pini + 1.0) != 0)) {
      result = (int)a;
    } else {
      result = (int)a;
      if (result <= 0) {
        result = 0;
      }

      if ((int)a > result) {
        result = (int)a;
      }
    }

    empty_non_axis_sizes = (result == 0);
    if (empty_non_axis_sizes || ((int)a != 0)) {
      input_sizes_idx_1 = 1;
    } else {
      input_sizes_idx_1 = 0;
    }

    if (empty_non_axis_sizes || (((int)a != 0) && ((int)(pini + 1.0) != 0))) {
      b_sizes_idx_1 = (int)(pini + 1.0);
    } else {
      b_sizes_idx_1 = 0;
    }

    ib_size = input_sizes_idx_1;
    b_input_sizes_idx_1 = input_sizes_idx_1;
    i = b_C->size[0] * b_C->size[1];
    b_C->size[0] = result;
    b_C->size[1] = input_sizes_idx_1 + b_sizes_idx_1;
    emxEnsureCapacity_real_T(b_C, i);
    if (0 <= ib_size - 1) {
      for (i = 0; i < result; i++) {
        b_C->data[i] = lshift;
      }
    }

    for (i = 0; i < b_sizes_idx_1; i++) {
      for (i1 = 0; i1 < result; i1++) {
        b_C->data[i1 + b_C->size[0] * (i + input_sizes_idx_1)] = 0.0;
      }
    }

    /*  Make sure that observation lsh is always included in the subset */
    /*  and that the subset contains at least one unit smaller than lsh */
    i = (int)a;
    if (0 <= (int)a - 1) {
      i2 = C->size[1];
      c_loop_ub = C->size[1];
      end = C->size[1] - 1;
    }

    emxInit_int32_T(&r, 2);
    emxInit_boolean_T(&x, 2);
    for (varargin_22_size_idx_0 = 0; varargin_22_size_idx_0 < i;
         varargin_22_size_idx_0++) {
      i1 = Cr->size[0] * Cr->size[1];
      Cr->size[0] = 1;
      Cr->size[1] = i2;
      emxEnsureCapacity_real_T(Cr, i1);

      /*  Observations greater or equal than lsh will be increased by one */
      nx = 0;
      for (sizes_idx_1 = 0; sizes_idx_1 < c_loop_ub; sizes_idx_1++) {
        d = C->data[varargin_22_size_idx_0 + C->size[0] * sizes_idx_1];
        Cr->data[sizes_idx_1] = d;
        if (d >= lshift) {
          nx++;
        }
      }

      i1 = r->size[0] * r->size[1];
      r->size[0] = 1;
      r->size[1] = nx;
      emxEnsureCapacity_int32_T(r, i1);
      nx = 0;
      for (sizes_idx_1 = 0; sizes_idx_1 <= end; sizes_idx_1++) {
        if (Cr->data[sizes_idx_1] >= lshift) {
          r->data[nx] = sizes_idx_1 + 1;
          nx++;
        }
      }

      loop_ub = r->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Cr->data[r->data[i1] - 1] = C->data[varargin_22_size_idx_0 + C->size[0] *
          (r->data[i1] - 1)] + 1.0;
      }

      /*  Make sure there is at least one observation smaller than lsh */
      /*  if sum(boo)==0 then in the subset there is no observation */
      /*  which is smaller than lsh */
      i1 = x->size[0] * x->size[1];
      x->size[0] = 1;
      x->size[1] = Cr->size[1];
      emxEnsureCapacity_boolean_T(x, i1);
      loop_ub = Cr->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        x->data[i1] = (Cr->data[i1] < lshift);
      }

      vlen = x->size[1];
      if (x->size[1] == 0) {
        ib_size = 0;
      } else {
        ib_size = x->data[0];
        for (sizes_idx_1 = 2; sizes_idx_1 <= vlen; sizes_idx_1++) {
          ib_size += x->data[sizes_idx_1 - 1];
        }
      }

      if (ib_size < 1) {
        Cr->data[0] = b_randsample(lshift - 1.0);
      }

      if (2 > b_C->size[1]) {
        i1 = 0;
      } else {
        i1 = 1;
      }

      loop_ub = Cr->size[1];
      for (ib_size = 0; ib_size < loop_ub; ib_size++) {
        b_C->data[varargin_22_size_idx_0 + b_C->size[0] * (i1 + ib_size)] =
          Cr->data[ib_size];
      }
    }

    emxFree_boolean_T(&x);
    emxFree_int32_T(&r);
  } else {
    /*  If there is no level shift component */
    i = b_C->size[0] * b_C->size[1];
    b_C->size[0] = varargin_22_size_idx_0;
    b_C->size[1] = varargin_22_size_idx_1;
    emxEnsureCapacity_real_T(b_C, i);
    loop_ub = varargin_22_size_idx_0 * varargin_22_size_idx_1 - 1;
    for (i = 0; i <= loop_ub; i++) {
      b_C->data[i] = varargin_22_data[i];
    }

    c_subsets(b_C, y->size[0], pini, ncomb, C, &a);
    i = b_C->size[0] * b_C->size[1];
    b_C->size[0] = C->size[0];
    b_C->size[1] = C->size[1];
    emxEnsureCapacity_real_T(b_C, i);
    loop_ub = C->size[0] * C->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_C->data[i] = C->data[i];
    }
  }

  /*  Store indexes of extracted subsets if nargout is greater than 1 */
  /*  yhatall= matrix which will contain fitted values for each extracted */
  /*  subset */
  /*  yhatall=zeros(T,nselected); */
  /*  WEIi = matrix which will contain indication of the units forming best */
  /*  h subset. Each column refers to a subset */
  /*  ij is a scalar used to ensure that the best first bestr solutions are */
  /*  stored in order to be brought to full convergence */
  /*  subsets are stored */
  ij = 1.0;

  /*  Loop through all nselected subsamples */
  i = (int)a;
  if (0 <= (int)a - 1) {
    b_loop_ub = (int)p;
    if (lshift == 0.0) {
      Xlshift.contents->size[0] = 0;
      Xlshift.contents->size[1] = 0;
    }

    if ((Xsel.contents->size[0] != 0) && (Xsel.contents->size[1] != 0)) {
      result = Xsel.contents->size[0];
    } else if ((Xlshift.contents->size[0] != 0) && (Xlshift.contents->size[1] !=
                0)) {
      result = Xlshift.contents->size[0];
    } else {
      result = Xsel.contents->size[0];
      if (Xlshift.contents->size[0] > Xsel.contents->size[0]) {
        result = Xlshift.contents->size[0];
      }
    }

    empty_non_axis_sizes = (result == 0);
    if (empty_non_axis_sizes || ((Xsel.contents->size[0] != 0) &&
         (Xsel.contents->size[1] != 0))) {
      b_input_sizes_idx_1 = Xsel.contents->size[1];
    } else {
      b_input_sizes_idx_1 = 0;
    }

    if (empty_non_axis_sizes || ((Xlshift.contents->size[0] != 0) &&
         (Xlshift.contents->size[1] != 0))) {
      b_sizes_idx_1 = Xlshift.contents->size[1];
    } else {
      b_sizes_idx_1 = 0;
    }

    d_loop_ub = b_input_sizes_idx_1;
    e_loop_ub = b_sizes_idx_1;
    f_loop_ub = b_C->size[1];
    g_loop_ub = b_C->size[1];
    unnamed_idx_0 = b_C->size[1];
    h_loop_ub = b_C->size[1];
  }

  emxInitStruct_captured_var(&weights);
  emxInitStruct_captured_var1(&yhat);
  emxInitStruct_captured_var1(&beta);
  emxInit_real_T(&Xfinal, 2);
  emxInit_boolean_T(&r1, 1);
  emxInitStruct_struct_T1(&expl_temp);
  emxInitStruct_struct_T1(&b_expl_temp);
  emxInit_real_T(&b_Xfinal, 2);
  emxInit_real_T(&b_yin, 1);
  for (sizes_idx_1 = 0; sizes_idx_1 < i; sizes_idx_1++) {
    /*  Initialize b0 as vector of zeroes for each subset */
    /*  The order of the elements of b0 is as follows */
    /*  1) trend elements (if present). If the trend is order two r are */
    /*  r+1 coefficients if the intercept is present otherwise there are */
    /*  just r components (Xtrend) */
    /*  2) linear part of seasonal component 2, 4, 6, ..., s-2, s-1 coefficients */
    /*  (if present)   (Xseaso) */
    /*  3) coefficients associated with the matrix of explanatory variables */
    /*  which have a potential effect on the time series under study (X) */
    /*  4) non linear part of seasonal component, that is varying amplitude. */
    /*  If varying amplitude is of order k there are k coefficients (if */
    /*  present) (Seq) */
    /*  5) level shift component (if present). In this case there are two */
    /*  coefficients, the second (which is also the last element of */
    /*  vector b0) is an integer which specifies the time in which level */
    /*  shift takes place and the first (which is also the penultime */
    /*  element of vector b0) is a real number which identifies the */
    /*  magnitude of the upward (downward) level shift (Xlshift) */
    i1 = out->residuals->size[0];
    out->residuals->size[0] = (int)p;
    emxEnsureCapacity_real_T(out->residuals, i1);
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      out->residuals->data[i1] = 0.0;
    }

    /*  extract a subset of size p */
    i1 = Xfinal->size[0] * Xfinal->size[1];
    Xfinal->size[0] = result;
    Xfinal->size[1] = b_input_sizes_idx_1 + b_sizes_idx_1;
    emxEnsureCapacity_real_T(Xfinal, i1);
    for (i1 = 0; i1 < d_loop_ub; i1++) {
      for (ib_size = 0; ib_size < result; ib_size++) {
        Xfinal->data[ib_size + Xfinal->size[0] * i1] = Xsel.contents->
          data[ib_size + result * i1];
      }
    }

    for (i1 = 0; i1 < e_loop_ub; i1++) {
      for (ib_size = 0; ib_size < result; ib_size++) {
        Xfinal->data[ib_size + Xfinal->size[0] * b_input_sizes_idx_1] =
          Xlshift.contents->data[ib_size];
      }
    }

    /*  Preliminary OLS estimates (including tentative level shift) based */
    /*  just on the units forming subset */
    i1 = bsb.contents->size[0];
    bsb.contents->size[0] = f_loop_ub;
    emxEnsureCapacity_real_T(bsb.contents, i1);
    for (i1 = 0; i1 < f_loop_ub; i1++) {
      bsb.contents->data[i1] = b_C->data[sizes_idx_1 + b_C->size[0] * i1];
    }

    loop_ub = Xfinal->size[1];
    i1 = b_Xfinal->size[0] * b_Xfinal->size[1];
    b_Xfinal->size[0] = g_loop_ub;
    b_Xfinal->size[1] = Xfinal->size[1];
    emxEnsureCapacity_real_T(b_Xfinal, i1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      for (ib_size = 0; ib_size < g_loop_ub; ib_size++) {
        b_Xfinal->data[ib_size + b_Xfinal->size[0] * i1] = Xfinal->data[((int)
          b_C->data[sizes_idx_1 + b_C->size[0] * ib_size] + Xfinal->size[0] * i1)
          - 1];
      }
    }

    i1 = b_yin->size[0];
    b_yin->size[0] = unnamed_idx_0;
    emxEnsureCapacity_real_T(b_yin, i1);
    for (i1 = 0; i1 < h_loop_ub; i1++) {
      b_yin->data[i1] = yin.contents->data[(int)b_C->data[sizes_idx_1 +
        b_C->size[0] * i1] - 1];
    }

    mldivide(b_Xfinal, b_yin, betaini);

    /*  Check if betaini contains NaN */
    i1 = r1->size[0];
    r1->size[0] = betaini->size[0];
    emxEnsureCapacity_boolean_T(r1, i1);
    loop_ub = betaini->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      r1->data[i1] = rtIsNaN(betaini->data[i1]);
    }

    if (!any(r1)) {
      /*  The first pini components are associated with */
      /*  trend and seasonal (without varying */
      /*  amplitude) and explanatory variables */
      if (1.0 > pini) {
        loop_ub = 0;
      } else {
        loop_ub = (int)pini;
      }

      for (i1 = 0; i1 < loop_ub; i1++) {
        out->residuals->data[i1] = betaini->data[i1];
      }

      if (lshift > 0.0) {
        /*  The last two components of beta0 are the associated with */
        /*  level shift. More precisely penultimate position is for the */
        /*  coefficient of level shift and, final position is the integer */
        /*  which specifies the starting point of level shift */
        nx = out->residuals->size[0] - 1;
        out->residuals->data[out->residuals->size[0] - 2] = betaini->
          data[betaini->size[0] - 1];
        out->residuals->data[nx] = lshift;
      }

      if (varampl.contents > 0.0) {
        ALS(&Seq, &bsb, &Xseaso, &Xtrend, &yin, &trend, &nexpl, &varampl,
            &isemptyX, &lshiftYN, &Xlshift, &X, &b_reftolALS, &b_refstepsALS,
            &indlinsc, &otherind, out->residuals, beta.contents);

        /*   betaoutCHK=ALSbsxfun(beta0); */
        /*  dd=1; */
      } else {
        i1 = beta.contents->size[0];
        beta.contents->size[0] = out->residuals->size[0];
        emxEnsureCapacity_real_T(beta.contents, i1);
        loop_ub = out->residuals->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          beta.contents->data[i1] = out->residuals->data[i1];
        }

        /* disp(['lsh' num2str(lsh)]) */
        /* disp(beta0) */
        /* disp('------') */
      }

      /*  Compute  fitted values (for all units). Therefore recall function */
      /*  lik but this time computed using all observations */
      loop_ub = seq.contents->size[0];
      i1 = bsb.contents->size[0];
      bsb.contents->size[0] = seq.contents->size[0];
      emxEnsureCapacity_real_T(bsb.contents, i1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        bsb.contents->data[i1] = seq.contents->data[i1];
      }

      /*  Procedure lik computes yhat (fitted values for all the */
      /*  observations using parameter estimates based on bsb). vector yhat */
      /*  will be used inside procedure IRWLSreg as starting value of the */
      /*  iterations (concentration steps) */
      lik(&Xtrend, &bsb, &trend, &seasonal, &s, &yhatseaso, &Xseaso, &varampl,
          &Seq, &nexpl, &isemptyX, &X, &lshiftYN, &Xlshift, &yhat, beta.contents);

      /*  1(a) ii. -  Now apply concentration steps */
      i1 = b_y->size[0];
      b_y->size[0] = beta.contents->size[0];
      emxEnsureCapacity_real_T(b_y, i1);
      loop_ub = beta.contents->size[0] - 1;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        b_y->data[i1] = beta.contents->data[i1];
      }

      IRWLSreg(&b_reftolALS, &b_refstepsALS, &indlinsc, &Xseaso, &bsb, &isemptyX,
               &lshiftYN, &Xtrend, &Seq, &varampl, &Xlshift, &X, &yin, &trend,
               &nexpl, &otherind, &seasonal, &s, &yhatseaso, &yhat, &beta,
               &constr, &Xsel, &verLess2016b, &seq, &weights, &zerT1,
               yin.contents, b_y, lts->refsteps, lts->reftol, b_h, &b_expl_temp);
      i1 = expl_temp.betarw->size[0];
      expl_temp.betarw->size[0] = b_expl_temp.betarw->size[0];
      emxEnsureCapacity_real_T(expl_temp.betarw, i1);
      loop_ub = b_expl_temp.betarw->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        expl_temp.betarw->data[i1] = b_expl_temp.betarw->data[i1];
      }

      /*  Store weights */
      /*  Store fitted values for each subset */
      /*  yhatall(:,i)=tmp.yhat; */
      /*  1(c) Consider only the 10 subsets that yield the lowest objective */
      /*  function so far. */
      if (ij > lts->bestr) {
        if (b_expl_temp.numscale2rw < sworst) {
          /*  Store numscale2rw, betarw and indexes of the units */
          /*  forming the best subset for the current iteration */
          /*  Find position of the maximum value of previously */
          /*  stored best numerator of squared scaled */
          b_maximum(bestnumscale2, &ncomb, &nx);
          bestnumscale2->data[nx - 1] = b_expl_temp.numscale2rw;
          loop_ub = expl_temp.betarw->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            out->invXX->data[(nx + out->invXX->size[0] * i1) - 1] =
              expl_temp.betarw->data[i1];
          }

          loop_ub = yhat.contents->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            bestyhat->data[i1 + bestyhat->size[0] * (nx - 1)] =
              yhat.contents->data[i1];
          }

          /*  sworst = best scale among the bestr found up to now */
          sworst = c_maximum(bestnumscale2);
        }
      } else {
        bestnumscale2->data[(int)ij - 1] = b_expl_temp.numscale2rw;
        loop_ub = expl_temp.betarw->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          out->invXX->data[((int)ij + out->invXX->size[0] * i1) - 1] =
            expl_temp.betarw->data[i1];
        }

        loop_ub = yhat.contents->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          bestyhat->data[i1 + bestyhat->size[0] * ((int)ij - 1)] =
            yhat.contents->data[i1];
        }

        /*  sworst = best scale among the bestr found up to now */
        sworst = c_maximum(bestnumscale2);
        ij++;
        i1 = brob->size[0];
        brob->size[0] = 1;
        emxEnsureCapacity_real_T(brob, i1);
        brob->data[0] = 1.0;
      }
    }
  }

  emxFree_real_T(&b_Xfinal);
  emxFreeStruct_struct_T1(&b_expl_temp);
  emxFree_boolean_T(&r1);

  /*  Store for each tentative level shift the number of times each unit */
  /*  belonged to the best subset */
  /*  1 (b) */
  /*  With the 0 subsets that yield the lowest objective function so far. */
  /*  Apply C-steps to these until full convergence. */
  /*  perform C-steps on best 'bestr' solutions, till convergence or for a */
  /*  maximum of refstepsbestr steps using a convergence tolerance as */
  /*  specified by scalar reftolbestr */
  /*  If ilsh >1 it is necessary also to consider the 10 best solutions from */
  /*  step j-1 */
  /*  numsuperbestscale2 = numerator of estimate of super best squared */
  /*  scale */
  sworst = rtInf;

  /*  Just to have an idea about y and yhat for a particular lsh value */
  /*  plot([y bestyhat(:,1)]) */
  if (0 <= (int)lts->bestr - 1) {
    i3 = bestyhat->size[0];
    i_loop_ub = bestyhat->size[0];
    i4 = out->invXX->size[1];
    j_loop_ub = out->invXX->size[1];
  }

  for (sizes_idx_1 = 0; sizes_idx_1 < hmin; sizes_idx_1++) {
    i = yhat.contents->size[0];
    yhat.contents->size[0] = i3;
    emxEnsureCapacity_real_T(yhat.contents, i);
    for (i = 0; i < i_loop_ub; i++) {
      yhat.contents->data[i] = bestyhat->data[i + bestyhat->size[0] *
        sizes_idx_1];
    }

    i = b_y->size[0];
    b_y->size[0] = i4;
    emxEnsureCapacity_real_T(b_y, i);
    for (i = 0; i < j_loop_ub; i++) {
      b_y->data[i] = out->invXX->data[sizes_idx_1 + out->invXX->size[0] * i];
    }

    IRWLSreg(&b_reftolALS, &b_refstepsALS, &indlinsc, &Xseaso, &bsb, &isemptyX,
             &lshiftYN, &Xtrend, &Seq, &varampl, &Xlshift, &X, &yin, &trend,
             &nexpl, &otherind, &seasonal, &s, &yhatseaso, &yhat, &beta, &constr,
             &Xsel, &verLess2016b, &seq, &weights, &zerT1, yin.contents, b_y,
             lts->refstepsbestr, lts->reftolbestr, b_h, &expl_temp);

    /*  Store information about the units forming best h subset among the */
    /*  10 best */
    allnumscale2->data[sizes_idx_1] = expl_temp.numscale2rw;

    /*  allscales(i,2)=tmp.betarw(end); */
    if (expl_temp.numscale2rw < sworst) {
      /*  brob = superbestbeta */
      i = brob->size[0];
      brob->size[0] = expl_temp.betarw->size[0];
      emxEnsureCapacity_real_T(brob, i);
      loop_ub = expl_temp.betarw->size[0];
      for (i = 0; i < loop_ub; i++) {
        brob->data[i] = expl_temp.betarw->data[i];
      }

      /*  bs = superbestsubset, units forming best subset according to */
      /*  fastlts */
      /*  bs = bestsubsetall(i,:); */
      i = yhatrob->size[0];
      yhatrob->size[0] = expl_temp.yhat->size[0];
      emxEnsureCapacity_real_T(yhatrob, i);
      loop_ub = expl_temp.yhat->size[0];
      for (i = 0; i < loop_ub; i++) {
        yhatrob->data[i] = expl_temp.yhat->data[i];
      }

      sworst = expl_temp.numscale2rw;
      i = weightsst->size[0];
      weightsst->size[0] = expl_temp.weights->size[0];
      emxEnsureCapacity_boolean_T(weightsst, i);
      loop_ub = expl_temp.weights->size[0];
      for (i = 0; i < loop_ub; i++) {
        weightsst->data[i] = expl_temp.weights->data[i];
      }
    }
  }

  emxFreeStruct_struct_T1(&expl_temp);
  emxFreeStruct_captured_var(&zerT1);
  emxFreeStruct_captured_var1(&indlinsc);
  emxFreeStruct_captured_var1(&otherind);

  /*  Store the bestrdiv2 best values of target function */
  i = bestnumscale2->size[0];
  bestnumscale2->size[0] = allnumscale2->size[0];
  emxEnsureCapacity_real_T(bestnumscale2, i);
  loop_ub = allnumscale2->size[0];
  for (i = 0; i < loop_ub; i++) {
    bestnumscale2->data[i] = allnumscale2->data[i];
  }

  sort(bestnumscale2, ia);
  i = betaini->size[0];
  betaini->size[0] = ia->size[0];
  emxEnsureCapacity_real_T(betaini, i);
  loop_ub = ia->size[0];
  for (i = 0; i < loop_ub; i++) {
    betaini->data[i] = ia->data[i];
  }

  /*  The last element of estimated beta coefficients is the point in */
  /*  which level shift takes place. This has to be increased by one */
  /*  unit. Please note that betas are stored in rows therefore we have */
  /*  to change the last column */
  loop_ub = brob->size[0];
  for (i = 0; i < loop_ub; i++) {
    brobLSH->data[i] = brob->data[i];
  }

  emxFree_real_T(&brob);

  /*  plot(seq,[y yhatrob]) */
  /*  title(['Level shift in step t=' num2str(LSH(ilsh))]) */
  loop_ub = allnumscale2->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->numscale2->data[i] = allnumscale2->data[i];
  }

  ij = sqrt(sworst / b_h);
  i = yhatrob->size[0];
  yhatrob->size[0] = yin.contents->size[0];
  emxEnsureCapacity_real_T(yhatrob, i);
  loop_ub = yin.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    yhatrob->data[i] = (yin.contents->data[i] - yhatrob->data[i]) / ij;
  }

  loop_ub = yhatrob->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->RES->data[i] = yhatrob->data[i];
  }

  nx = yhatrob->size[0];
  i = b_y->size[0];
  b_y->size[0] = yhatrob->size[0];
  emxEnsureCapacity_real_T(b_y, i);
  for (sizes_idx_1 = 0; sizes_idx_1 < nx; sizes_idx_1++) {
    b_y->data[sizes_idx_1] = fabs(yhatrob->data[sizes_idx_1]);
  }

  d = 2.58 * factor;
  loop_ub = weightsst->size[0];
  for (i = 0; i < loop_ub; i++) {
    Weights->data[i] = (weightsst->data[i] || (b_y->data[i] < d));
  }

  emxFree_boolean_T(&weightsst);

  /*  disp(sum(weightsst)) */
  /*  Store the indexes among the bestr best, forming the bestrdiv2 best */
  /*  estimates of the target function (target function = numerator of */
  /*  squared scale) */
  if (1.0 > nbestindexes) {
    loop_ub = 0;
  } else {
    loop_ub = (int)nbestindexes;
  }

  for (i = 0; i < loop_ub; i++) {
    out->BestIndexes->data[i] = betaini->data[i];
  }

  if ((lshift > 0.0) && msg) {
    printf("Level shift for t=%.0f\n", lshift);
    fflush(stdout);
  }

  /*  save RES to output structure (these residuals can be used for example to */
  /*  prouduce the double wedge plot, see function wedgeplot for more details) */
  i = betaini->size[0];
  betaini->size[0] = Weights->size[0];
  emxEnsureCapacity_real_T(betaini, i);
  loop_ub = Weights->size[0];
  for (i = 0; i < loop_ub; i++) {
    betaini->data[i] = Weights->data[i];
  }

  loop_ub = betaini->size[0];
  i = Weights->size[0];
  Weights->size[0] = betaini->size[0];
  emxEnsureCapacity_boolean_T(Weights, i);
  for (i = 0; i < loop_ub; i++) {
    Weights->data[i] = (betaini->data[i] == 1.0);
  }

  end = Weights->size[0] - 1;
  nx = 0;
  for (sizes_idx_1 = 0; sizes_idx_1 <= end; sizes_idx_1++) {
    if (Weights->data[sizes_idx_1]) {
      nx++;
    }
  }

  emxInit_int32_T(&r2, 1);
  i = r2->size[0];
  r2->size[0] = nx;
  emxEnsureCapacity_int32_T(r2, i);
  nx = 0;
  for (sizes_idx_1 = 0; sizes_idx_1 <= end; sizes_idx_1++) {
    if (Weights->data[sizes_idx_1]) {
      r2->data[nx] = sizes_idx_1 + 1;
      nx++;
    }
  }

  end = Weights->size[0] - 1;
  nx = 0;
  for (sizes_idx_1 = 0; sizes_idx_1 <= end; sizes_idx_1++) {
    if (Weights->data[sizes_idx_1]) {
      nx++;
    }
  }

  emxInit_int32_T(&r3, 1);
  i = r3->size[0];
  r3->size[0] = nx;
  emxEnsureCapacity_int32_T(r3, i);
  nx = 0;
  for (sizes_idx_1 = 0; sizes_idx_1 <= end; sizes_idx_1++) {
    if (Weights->data[sizes_idx_1]) {
      r3->data[nx] = sizes_idx_1 + 1;
      nx++;
    }
  }

  loop_ub = r2->size[0];
  for (i = 0; i < loop_ub; i++) {
    betaini->data[r3->data[i] - 1] = seq.contents->data[r2->data[i] - 1];
  }

  emxFree_int32_T(&r3);
  end = Weights->size[0] - 1;
  nx = 0;
  for (sizes_idx_1 = 0; sizes_idx_1 <= end; sizes_idx_1++) {
    if (!Weights->data[sizes_idx_1]) {
      nx++;
    }
  }

  emxInit_int32_T(&r4, 1);
  i = r4->size[0];
  r4->size[0] = nx;
  emxEnsureCapacity_int32_T(r4, i);
  nx = 0;
  for (sizes_idx_1 = 0; sizes_idx_1 <= end; sizes_idx_1++) {
    if (!Weights->data[sizes_idx_1]) {
      r4->data[nx] = sizes_idx_1 + 1;
      nx++;
    }
  }

  loop_ub = r4->size[0];
  for (i = 0; i < loop_ub; i++) {
    betaini->data[r4->data[i] - 1] = rtNaN;
  }

  emxFree_int32_T(&r4);

  /*  Store units forming best h subset */
  i = out->Hsubset->size[0];
  out->Hsubset->size[0] = betaini->size[0];
  emxEnsureCapacity_real_T(out->Hsubset, i);
  loop_ub = betaini->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->Hsubset->data[i] = betaini->data[i];
  }

  loop_ub = brobLSH->size[0];
  i = yhatrob->size[0];
  yhatrob->size[0] = brobLSH->size[0];
  emxEnsureCapacity_real_T(yhatrob, i);
  for (i = 0; i < loop_ub; i++) {
    yhatrob->data[i] = brobLSH->data[i];
  }

  /*  Pass from numerator of squared estimate of the scale to proper scale */
  /*  estimate */
  /*  Consistency factor */
  /*  Apply small sample correction factor of Pison et al. */
  factor = ij * factor * sqrt(b_corfactorRAW(yin.contents->size[0], b_h /
    (double)yin.contents->size[0]));
  if (lshift > 0.0) {
    /*  Compute the residuals locally just changing the position of the level */
    /*  shift */
    ncomb = lshiftlocref->wlength;
    a = brobLSH->data[brobLSH->size[0] - 1] - lshiftlocref->wlength;
    sworst = brobLSH->data[brobLSH->size[0] - 1] + lshiftlocref->wlength;
    if (rtIsNaN(a) || rtIsNaN(sworst)) {
      i = Cr->size[0] * Cr->size[1];
      Cr->size[0] = 1;
      Cr->size[1] = 1;
      emxEnsureCapacity_real_T(Cr, i);
      Cr->data[0] = rtNaN;
    } else if (sworst < a) {
      Cr->size[0] = 1;
      Cr->size[1] = 0;
    } else if ((rtIsInf(a) || rtIsInf(sworst)) && (a == sworst)) {
      i = Cr->size[0] * Cr->size[1];
      Cr->size[0] = 1;
      Cr->size[1] = 1;
      emxEnsureCapacity_real_T(Cr, i);
      Cr->data[0] = rtNaN;
    } else if (floor(a) == a) {
      i = Cr->size[0] * Cr->size[1];
      Cr->size[0] = 1;
      loop_ub = (int)floor(sworst - a);
      Cr->size[1] = loop_ub + 1;
      emxEnsureCapacity_real_T(Cr, i);
      for (i = 0; i <= loop_ub; i++) {
        Cr->data[i] = a + (double)i;
      }
    } else {
      eml_float_colon(a, sworst, Cr);
    }

    /*  Reduce width of tloc dinamically */
    /*  make sure that tloc is in the range LSHmin and LSHmax */
    while (((d_maximum(Cr) > lshift) || (b_minimum(Cr) < lshift)) && (!(ncomb ==
             0.0))) {
      ncomb--;
      a = brobLSH->data[brobLSH->size[0] - 1] - ncomb;
      sworst = brobLSH->data[brobLSH->size[0] - 1] + ncomb;
      if (rtIsNaN(a) || rtIsNaN(sworst)) {
        i = Cr->size[0] * Cr->size[1];
        Cr->size[0] = 1;
        Cr->size[1] = 1;
        emxEnsureCapacity_real_T(Cr, i);
        Cr->data[0] = rtNaN;
      } else if (sworst < a) {
        Cr->size[0] = 1;
        Cr->size[1] = 0;
      } else if ((rtIsInf(a) || rtIsInf(sworst)) && (a == sworst)) {
        i = Cr->size[0] * Cr->size[1];
        Cr->size[0] = 1;
        Cr->size[1] = 1;
        emxEnsureCapacity_real_T(Cr, i);
        Cr->data[0] = rtNaN;
      } else if (floor(a) == a) {
        i = Cr->size[0] * Cr->size[1];
        Cr->size[0] = 1;
        loop_ub = (int)floor(sworst - a);
        Cr->size[1] = loop_ub + 1;
        emxEnsureCapacity_real_T(Cr, i);
        for (i = 0; i <= loop_ub; i++) {
          Cr->data[i] = a + (double)i;
        }
      } else {
        eml_float_colon(a, sworst, Cr);
      }
    }

    i = bsb.contents->size[0];
    bsb.contents->size[0] = Cr->size[1];
    emxEnsureCapacity_real_T(bsb.contents, i);
    loop_ub = Cr->size[1];
    for (i = 0; i < loop_ub; i++) {
      bsb.contents->data[i] = Cr->data[i];
    }

    i = betaini->size[0];
    betaini->size[0] = Cr->size[1];
    emxEnsureCapacity_real_T(betaini, i);
    loop_ub = Cr->size[1];
    for (i = 0; i < loop_ub; i++) {
      betaini->data[i] = Cr->data[i];
    }

    if (betaini->size[0] != 0) {
      result = betaini->size[0];
    } else if (Cr->size[1] != 0) {
      result = Cr->size[1];
    } else {
      result = 0;
    }

    empty_non_axis_sizes = (result == 0);
    if (empty_non_axis_sizes || (betaini->size[0] != 0)) {
      input_sizes_idx_1 = 1;
    } else {
      input_sizes_idx_1 = 0;
    }

    if (empty_non_axis_sizes || (Cr->size[1] != 0)) {
      b_sizes_idx_1 = 3;
    } else {
      b_sizes_idx_1 = 0;
    }

    i = out->Likloc->size[0] * out->Likloc->size[1];
    out->Likloc->size[0] = result;
    out->Likloc->size[1] = input_sizes_idx_1 + b_sizes_idx_1;
    emxEnsureCapacity_real_T(out->Likloc, i);
    loop_ub = input_sizes_idx_1;
    if (0 <= loop_ub - 1) {
      for (i = 0; i < result; i++) {
        out->Likloc->data[i] = betaini->data[i];
      }
    }

    for (i = 0; i < b_sizes_idx_1; i++) {
      for (i1 = 0; i1 < result; i1++) {
        out->Likloc->data[i1 + out->Likloc->size[0] * (i + input_sizes_idx_1)] =
          0.0;
      }
    }

    i = (int)(Cr->data[Cr->size[1] - 1] + (1.0 - Cr->data[0]));
    for (ib_size = 0; ib_size < i; ib_size++) {
      ncomb = Cr->data[0] + (double)ib_size;
      loop_ub = yhatrob->size[0];
      i1 = betaini->size[0];
      betaini->size[0] = yhatrob->size[0];
      emxEnsureCapacity_real_T(betaini, i1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        betaini->data[i1] = yhatrob->data[i1];
      }

      betaini->data[brobLSH->size[0] - 1] = ncomb;
      i1 = bestnumscale2->size[0];
      bestnumscale2->size[0] = (int)(ncomb - 1.0) + (int)(((double)y->size[0] -
        ncomb) + 1.0);
      emxEnsureCapacity_real_T(bestnumscale2, i1);
      loop_ub = (int)(ncomb - 1.0);
      for (i1 = 0; i1 < loop_ub; i1++) {
        bestnumscale2->data[i1] = 0.0;
      }

      loop_ub = (int)(((double)y->size[0] - ncomb) + 1.0);
      for (i1 = 0; i1 < loop_ub; i1++) {
        bestnumscale2->data[i1 + (int)(ncomb - 1.0)] = 1.0;
      }

      i1 = Xlshift.contents->size[0] * Xlshift.contents->size[1];
      Xlshift.contents->size[0] = bestnumscale2->size[0];
      Xlshift.contents->size[1] = 1;
      emxEnsureCapacity_real_T(Xlshift.contents, i1);
      loop_ub = bestnumscale2->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Xlshift.contents->data[i1] = bestnumscale2->data[i1];
      }

      lik(&Xtrend, &bsb, &trend, &seasonal, &s, &yhatseaso, &Xseaso, &varampl,
          &Seq, &nexpl, &isemptyX, &X, &lshiftYN, &Xlshift, &yhat, betaini);
      i1 = b_yin->size[0];
      b_yin->size[0] = bsb.contents->size[0];
      emxEnsureCapacity_real_T(b_yin, i1);
      loop_ub = bsb.contents->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_yin->data[i1] = (yin.contents->data[(int)bsb.contents->data[i1] - 1] -
                           yhat.contents->data[i1]) / ij;
      }

      HUrho(b_yin, lshiftlocref->huberc, betaini);
      i1 = b_y->size[0];
      b_y->size[0] = betaini->size[0];
      emxEnsureCapacity_real_T(b_y, i1);
      nx = betaini->size[0];
      for (sizes_idx_1 = 0; sizes_idx_1 < nx; sizes_idx_1++) {
        b_y->data[sizes_idx_1] = betaini->data[sizes_idx_1] * betaini->
          data[sizes_idx_1];
      }

      out->Likloc->data[ib_size + out->Likloc->size[0]] = blockedSummation(b_y,
        b_y->size[0]);
      i1 = betaini->size[0];
      betaini->size[0] = bsb.contents->size[0];
      emxEnsureCapacity_real_T(betaini, i1);
      loop_ub = bsb.contents->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        betaini->data[i1] = yin.contents->data[(int)bsb.contents->data[i1] - 1]
          - yhat.contents->data[i1];
      }

      i1 = b_y->size[0];
      b_y->size[0] = betaini->size[0];
      emxEnsureCapacity_real_T(b_y, i1);
      nx = betaini->size[0];
      for (sizes_idx_1 = 0; sizes_idx_1 < nx; sizes_idx_1++) {
        b_y->data[sizes_idx_1] = betaini->data[sizes_idx_1] * betaini->
          data[sizes_idx_1];
      }

      out->Likloc->data[ib_size + out->Likloc->size[0] * 2] = blockedSummation
        (b_y, b_y->size[0]);
    }

    /*  Use Huberized residual sum of squares to find minimum */
    loop_ub = out->Likloc->size[0];
    i = b_y->size[0];
    b_y->size[0] = out->Likloc->size[0];
    emxEnsureCapacity_real_T(b_y, i);
    for (i = 0; i < loop_ub; i++) {
      b_y->data[i] = out->Likloc->data[i + out->Likloc->size[0] * ((int)
        (lshiftlocref->typeres + 1.0) - 1)];
    }

    d_minimum(b_y, &ncomb, &nx);
    posLS = out->Likloc->data[nx - 1];
    i = bestnumscale2->size[0];
    bestnumscale2->size[0] = (int)(posLS - 1.0) + (int)(((double)
      yin.contents->size[0] - posLS) + 1.0);
    emxEnsureCapacity_real_T(bestnumscale2, i);
    loop_ub = (int)(posLS - 1.0);
    for (i = 0; i < loop_ub; i++) {
      bestnumscale2->data[i] = 0.0;
    }

    loop_ub = (int)(((double)yin.contents->size[0] - posLS) + 1.0);
    for (i = 0; i < loop_ub; i++) {
      bestnumscale2->data[i + (int)(posLS - 1.0)] = 1.0;
    }

    i = Xlshift.contents->size[0] * Xlshift.contents->size[1];
    Xlshift.contents->size[0] = bestnumscale2->size[0];
    Xlshift.contents->size[1] = 1;
    emxEnsureCapacity_real_T(Xlshift.contents, i);
    loop_ub = bestnumscale2->size[0];
    for (i = 0; i < loop_ub; i++) {
      Xlshift.contents->data[i] = bestnumscale2->data[i];
    }

    yhatrob->data[brobLSH->size[0] - 1] = posLS;
  }

  emxFree_real_T(&brobLSH);
  i = bsb.contents->size[0];
  bsb.contents->size[0] = seq.contents->size[0];
  emxEnsureCapacity_real_T(bsb.contents, i);
  loop_ub = seq.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsb.contents->data[i] = seq.contents->data[i];
  }

  /*  Compute fitted values using final estimate of beta for all the */
  /*  observations */
  lik(&Xtrend, &bsb, &trend, &seasonal, &s, &yhatseaso, &Xseaso, &varampl, &Seq,
      &nexpl, &isemptyX, &X, &lshiftYN, &Xlshift, &yhat, yhatrob);

  /*  REWEIGHTING STEP */
  /*  residuals = Raw residuals using final estimate of beta */
  i = out->residuals->size[0];
  out->residuals->size[0] = yin.contents->size[0];
  emxEnsureCapacity_real_T(out->residuals, i);
  loop_ub = yin.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->residuals->data[i] = yin.contents->data[i] - yhat.contents->data[i];
  }

  /*  Find the units with the smallest absolute p+1 residuals (before */
  /*  reweighting step) */
  nx = out->residuals->size[0];
  i = b_y->size[0];
  b_y->size[0] = out->residuals->size[0];
  emxEnsureCapacity_real_T(b_y, i);
  for (sizes_idx_1 = 0; sizes_idx_1 < nx; sizes_idx_1++) {
    b_y->data[sizes_idx_1] = fabs(out->residuals->data[sizes_idx_1]);
  }

  sort(b_y, ia);
  i = betaini->size[0];
  betaini->size[0] = ia->size[0];
  emxEnsureCapacity_real_T(betaini, i);
  loop_ub = ia->size[0];
  for (i = 0; i < loop_ub; i++) {
    betaini->data[i] = ia->data[i];
  }

  nx = (int)(p + 1.0);
  i = out->bs->size[0];
  out->bs->size[0] = (int)(p + 1.0);
  emxEnsureCapacity_real_T(out->bs, i);
  for (i = 0; i < nx; i++) {
    out->bs->data[i] = betaini->data[i];
  }

  ij = 0.0;
  if (2 > Xsel.contents->size[1]) {
    i = 0;
    i1 = 0;
  } else {
    i = 1;
    i1 = Xsel.contents->size[1];
  }

  hmin = i1 - i;
  do {
    exitg1 = 0;
    d = p + ij;
    if (1.0 > d) {
      loop_ub = 0;
    } else {
      loop_ub = (int)d;
    }

    i1 = out->bs->size[0];
    out->bs->size[0] = loop_ub;
    emxEnsureCapacity_real_T(out->bs, i1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      out->bs->data[i1] = betaini->data[i1];
    }

    i1 = bestyhat->size[0] * bestyhat->size[1];
    bestyhat->size[0] = loop_ub;
    bestyhat->size[1] = hmin;
    emxEnsureCapacity_real_T(bestyhat, i1);
    for (i1 = 0; i1 < hmin; i1++) {
      for (ib_size = 0; ib_size < loop_ub; ib_size++) {
        bestyhat->data[ib_size + bestyhat->size[0] * i1] = Xsel.contents->data
          [((int)betaini->data[ib_size] + Xsel.contents->size[0] * (i + i1)) - 1];
      }
    }

    zscore(bestyhat, b_C);
    nx = local_rank(b_C);
    if (nx < pini - 1.0) {
      ij++;
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  /* if the robust s0 is too small, compute it with a set of different methods: */
  /* Qn, Sn, std and the interquantile difference for increasing percentages */
  /* ([0.25-0.75], [0.26-0.76], ...) */
  if (fabs(factor) < 1.0E-7) {
    zscoreFS(out->residuals, betaini, &ncomb, &factor);
    if (factor == 0.0) {
      b_zscoreFS(out->residuals, betaini, &ncomb, &factor);
    }

    if (factor == 0.0) {
      c_zscoreFS(out->residuals, betaini, &ncomb, &factor);
    }

    if (factor == 0.0) {
      nx = out->residuals->size[0];
      i = betaini->size[0];
      betaini->size[0] = out->residuals->size[0];
      emxEnsureCapacity_real_T(betaini, i);
      for (sizes_idx_1 = 0; sizes_idx_1 < nx; sizes_idx_1++) {
        betaini->data[sizes_idx_1] = fabs(out->residuals->data[sizes_idx_1]);
      }

      ib_size = 0;
      exitg2 = false;
      while ((!exitg2) && (ib_size < 25)) {
        factor = prctile(betaini, (double)ib_size + 75.0) - prctile(betaini,
          100.0 - ((double)ib_size + 75.0));
        if (factor > 0.0) {
          exitg2 = true;
        } else {
          ib_size++;
        }
      }
    }

    /* weights = abs(residuals)<=1e-7; */
    /*  stdres = residuals/s0; */
  }

  loop_ub = out->residuals->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->residuals->data[i] /= factor;
  }

  if (SmallSampleCor == 1.0) {
    if (bdp == -99.0) {
      bdp = 1.0 - h / (double)yin.contents->size[0];
    }

    if (yin.contents->size[0] < 50) {
      varargin_22_size_idx_1 = 50;
    } else {
      varargin_22_size_idx_1 = yin.contents->size[0];
    }

    ncomb = RobRegrSize(varargin_22_size_idx_1, pini + lshiftYN.contents, bdp);
    nx = out->residuals->size[0];
    i = b_y->size[0];
    b_y->size[0] = out->residuals->size[0];
    emxEnsureCapacity_real_T(b_y, i);
    for (sizes_idx_1 = 0; sizes_idx_1 < nx; sizes_idx_1++) {
      b_y->data[sizes_idx_1] = fabs(out->residuals->data[sizes_idx_1]);
    }

    d = 2.5758293035489004 * sqrt(ncomb / 6.6348966010212136);
    i = weights.contents->size[0];
    weights.contents->size[0] = b_y->size[0];
    emxEnsureCapacity_boolean_T(weights.contents, i);
    loop_ub = b_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      weights.contents->data[i] = (b_y->data[i] <= d);
    }
  } else if (SmallSampleCor == 2.0) {
    GYfilt(out->residuals, weights.contents);
  } else if (SmallSampleCor == 3.0) {
    b_GYfilt(out->residuals, weights.contents);
  } else if (SmallSampleCor == 4.0) {
    nx = out->residuals->size[0];
    i = b_y->size[0];
    b_y->size[0] = out->residuals->size[0];
    emxEnsureCapacity_real_T(b_y, i);
    for (sizes_idx_1 = 0; sizes_idx_1 < nx; sizes_idx_1++) {
      b_y->data[sizes_idx_1] = fabs(out->residuals->data[sizes_idx_1]);
    }

    i = weights.contents->size[0];
    weights.contents->size[0] = b_y->size[0];
    emxEnsureCapacity_boolean_T(weights.contents, i);
    loop_ub = b_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      weights.contents->data[i] = (b_y->data[i] <= 2.5758293035489004);
    }
  }

  /*  else */
  /*      % There is an approximate perfect fit for the first h observations. */
  /*      % We consider as outliers all units with residual greater than 1e-7. */
  /*      weights = abs(residuals)<=1e-7; */
  /*  */
  /*      %     % Store the weights */
  /*      %     out.weights=weights; */
  /*  */
  /*  */
  /*      % s is set to 0 */
  /*  %     s0=0; */
  /*  % */
  /*  %     % Standardized residuals are artificially set equal to raw residuals. */
  /*  %     stdres=residuals; */
  /*  end */
  /*  weights is a boolean vector. */
  end = weights.contents->size[0] - 1;
  nx = 0;
  for (sizes_idx_1 = 0; sizes_idx_1 <= end; sizes_idx_1++) {
    if (weights.contents->data[sizes_idx_1]) {
      nx++;
    }
  }

  emxInit_int32_T(&r5, 1);
  i = r5->size[0];
  r5->size[0] = nx;
  emxEnsureCapacity_int32_T(r5, i);
  nx = 0;
  for (sizes_idx_1 = 0; sizes_idx_1 <= end; sizes_idx_1++) {
    if (weights.contents->data[sizes_idx_1]) {
      r5->data[nx] = sizes_idx_1 + 1;
      nx++;
    }
  }

  i = bsb.contents->size[0];
  bsb.contents->size[0] = r5->size[0];
  emxEnsureCapacity_real_T(bsb.contents, i);
  loop_ub = r5->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsb.contents->data[i] = seq.contents->data[r5->data[i] - 1];
  }

  emxFree_int32_T(&r5);

  /*  Store bsb to use in order to find sum of squares of residuals for */
  /*  reduced model. */
  i = allnumscale2->size[0];
  allnumscale2->size[0] = bsb.contents->size[0];
  emxEnsureCapacity_real_T(allnumscale2, i);
  loop_ub = bsb.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    allnumscale2->data[i] = bsb.contents->data[i];
  }

  /*  Find new estimate of beta using only observations which have */
  /*  weight equal to 1. Notice that new brob overwrites old brob */
  /*  computed previously. */
  if ((varampl.contents == 0.0) && (lshiftYN.contents == 0.0)) {
    /*  In this case the model is linear */
    /*  Function lik constructs fitted values and residual sum of */
    /*  squares */
    loop_ub = Xsel.contents->size[1];
    i = bestyhat->size[0] * bestyhat->size[1];
    bestyhat->size[0] = bsb.contents->size[0];
    bestyhat->size[1] = Xsel.contents->size[1];
    emxEnsureCapacity_real_T(bestyhat, i);
    for (i = 0; i < loop_ub; i++) {
      vlen = bsb.contents->size[0];
      for (i1 = 0; i1 < vlen; i1++) {
        bestyhat->data[i1 + bestyhat->size[0] * i] = Xsel.contents->data[((int)
          bsb.contents->data[i1] + Xsel.contents->size[0] * i) - 1];
      }
    }

    i = b_yin->size[0];
    b_yin->size[0] = bsb.contents->size[0];
    emxEnsureCapacity_real_T(b_yin, i);
    loop_ub = bsb.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_yin->data[i] = yin.contents->data[(int)bsb.contents->data[i] - 1];
    }

    mldivide(bestyhat, b_yin, beta.contents);

    /*  update fitted values */
    if ((Xsel.contents->size[0] != 0) && (Xsel.contents->size[1] != 0) &&
        (beta.contents->size[0] != 0)) {
      i = betaini->size[0];
      betaini->size[0] = Xsel.contents->size[0];
      emxEnsureCapacity_real_T(betaini, i);
      cblas_dgemm(CblasColMajor, CblasNoTrans, CblasNoTrans, (MKL_INT)
                  Xsel.contents->size[0], (MKL_INT)1, (MKL_INT)
                  Xsel.contents->size[1], 1.0, &Xsel.contents->data[0], (MKL_INT)
                  Xsel.contents->size[0], &beta.contents->data[0], (MKL_INT)
                  beta.contents->size[0], 0.0, &betaini->data[0], (MKL_INT)
                  Xsel.contents->size[0]);
    }

    /*  find fitted values using all observations */
    if ((Xsel.contents->size[0] == 0) || (Xsel.contents->size[1] == 0) ||
        (beta.contents->size[0] == 0)) {
      i = yhat.contents->size[0];
      yhat.contents->size[0] = Xsel.contents->size[0];
      emxEnsureCapacity_real_T(yhat.contents, i);
      loop_ub = Xsel.contents->size[0];
      for (i = 0; i < loop_ub; i++) {
        yhat.contents->data[i] = 0.0;
      }
    } else {
      i = yhat.contents->size[0];
      yhat.contents->size[0] = Xsel.contents->size[0];
      emxEnsureCapacity_real_T(yhat.contents, i);
      cblas_dgemm(CblasColMajor, CblasNoTrans, CblasNoTrans, (MKL_INT)
                  Xsel.contents->size[0], (MKL_INT)1, (MKL_INT)
                  Xsel.contents->size[1], 1.0, &Xsel.contents->data[0], (MKL_INT)
                  Xsel.contents->size[0], &beta.contents->data[0], (MKL_INT)
                  beta.contents->size[0], 0.0, &yhat.contents->data[0], (MKL_INT)
                  Xsel.contents->size[0]);
    }

    i = betaini->size[0];
    betaini->size[0] = bsb.contents->size[0];
    emxEnsureCapacity_real_T(betaini, i);
    loop_ub = bsb.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      nx = (int)bsb.contents->data[i] - 1;
      betaini->data[i] = yin.contents->data[nx] - yhat.contents->data[nx];
    }

    i = b_y->size[0];
    b_y->size[0] = betaini->size[0];
    emxEnsureCapacity_real_T(b_y, i);
    nx = betaini->size[0];
    for (sizes_idx_1 = 0; sizes_idx_1 < nx; sizes_idx_1++) {
      b_y->data[sizes_idx_1] = betaini->data[sizes_idx_1] * betaini->
        data[sizes_idx_1];
    }

    a = blockedSummation(b_y, b_y->size[0]) / (b_h - (double)Xsel.contents->
      size[1]);
    b_mtimes(Xsel.contents, Xsel.contents, Xfinal);
    inv(Xfinal, out->invXX);
    i = Xfinal->size[0] * Xfinal->size[1];
    Xfinal->size[0] = out->invXX->size[0];
    Xfinal->size[1] = out->invXX->size[1];
    emxEnsureCapacity_real_T(Xfinal, i);
    loop_ub = out->invXX->size[0] * out->invXX->size[1];
    for (i = 0; i < loop_ub; i++) {
      Xfinal->data[i] = a * out->invXX->data[i];
    }

    i = Xseldum->size[0] * Xseldum->size[1];
    Xseldum->size[0] = Xsel.contents->size[0];
    Xseldum->size[1] = Xsel.contents->size[1];
    emxEnsureCapacity_real_T(Xseldum, i);
    loop_ub = Xsel.contents->size[0] * Xsel.contents->size[1];
    for (i = 0; i < loop_ub; i++) {
      Xseldum->data[i] = Xsel.contents->data[i];
    }
  } else if ((varampl.contents == 0.0) && (lshiftYN.contents == 1.0)) {
    /*  In this case there is just level shift however we do not redo */
    /*  the non linear estimation but a simple LS */
    if ((Xsel.contents->size[0] != 0) && (Xsel.contents->size[1] != 0)) {
      result = Xsel.contents->size[0];
    } else if ((Xlshift.contents->size[0] != 0) && (Xlshift.contents->size[1] !=
                0)) {
      result = Xlshift.contents->size[0];
    } else {
      result = Xsel.contents->size[0];
      if (Xlshift.contents->size[0] > Xsel.contents->size[0]) {
        result = Xlshift.contents->size[0];
      }
    }

    empty_non_axis_sizes = (result == 0);
    if (empty_non_axis_sizes || ((Xsel.contents->size[0] != 0) &&
         (Xsel.contents->size[1] != 0))) {
      b_input_sizes_idx_1 = Xsel.contents->size[1];
    } else {
      b_input_sizes_idx_1 = 0;
    }

    if (empty_non_axis_sizes || ((Xlshift.contents->size[0] != 0) &&
         (Xlshift.contents->size[1] != 0))) {
      sizes_idx_1 = Xlshift.contents->size[1];
    } else {
      sizes_idx_1 = 0;
    }

    i = Xseldum->size[0] * Xseldum->size[1];
    Xseldum->size[0] = result;
    Xseldum->size[1] = b_input_sizes_idx_1 + sizes_idx_1;
    emxEnsureCapacity_real_T(Xseldum, i);
    for (i = 0; i < b_input_sizes_idx_1; i++) {
      for (i1 = 0; i1 < result; i1++) {
        Xseldum->data[i1 + Xseldum->size[0] * i] = Xsel.contents->data[i1 +
          result * i];
      }
    }

    for (i = 0; i < sizes_idx_1; i++) {
      for (i1 = 0; i1 < result; i1++) {
        Xseldum->data[i1 + Xseldum->size[0] * b_input_sizes_idx_1] =
          Xlshift.contents->data[i1];
      }
    }

    loop_ub = Xseldum->size[1];
    i = bestyhat->size[0] * bestyhat->size[1];
    bestyhat->size[0] = bsb.contents->size[0];
    bestyhat->size[1] = Xseldum->size[1];
    emxEnsureCapacity_real_T(bestyhat, i);
    for (i = 0; i < loop_ub; i++) {
      vlen = bsb.contents->size[0];
      for (i1 = 0; i1 < vlen; i1++) {
        bestyhat->data[i1 + bestyhat->size[0] * i] = Xseldum->data[((int)
          bsb.contents->data[i1] + Xseldum->size[0] * i) - 1];
      }
    }

    i = b_yin->size[0];
    b_yin->size[0] = bsb.contents->size[0];
    emxEnsureCapacity_real_T(b_yin, i);
    loop_ub = bsb.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_yin->data[i] = yin.contents->data[(int)bsb.contents->data[i] - 1];
    }

    mldivide(bestyhat, b_yin, beta.contents);

    /*  find fitted values using all observations */
    if ((Xseldum->size[0] == 0) || (Xseldum->size[1] == 0) ||
        (beta.contents->size[0] == 0)) {
      i = yhat.contents->size[0];
      yhat.contents->size[0] = Xseldum->size[0];
      emxEnsureCapacity_real_T(yhat.contents, i);
      loop_ub = Xseldum->size[0];
      for (i = 0; i < loop_ub; i++) {
        yhat.contents->data[i] = 0.0;
      }
    } else {
      i = yhat.contents->size[0];
      yhat.contents->size[0] = Xseldum->size[0];
      emxEnsureCapacity_real_T(yhat.contents, i);
      cblas_dgemm(CblasColMajor, CblasNoTrans, CblasNoTrans, (MKL_INT)
                  Xseldum->size[0], (MKL_INT)1, (MKL_INT)Xseldum->size[1], 1.0,
                  &Xseldum->data[0], (MKL_INT)Xseldum->size[0],
                  &beta.contents->data[0], (MKL_INT)beta.contents->size[0], 0.0,
                  &yhat.contents->data[0], (MKL_INT)Xseldum->size[0]);
    }

    i = betaini->size[0];
    betaini->size[0] = bsb.contents->size[0];
    emxEnsureCapacity_real_T(betaini, i);
    loop_ub = bsb.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      nx = (int)bsb.contents->data[i] - 1;
      betaini->data[i] = yin.contents->data[nx] - yhat.contents->data[nx];
    }

    i = b_y->size[0];
    b_y->size[0] = betaini->size[0];
    emxEnsureCapacity_real_T(b_y, i);
    nx = betaini->size[0];
    for (sizes_idx_1 = 0; sizes_idx_1 < nx; sizes_idx_1++) {
      b_y->data[sizes_idx_1] = betaini->data[sizes_idx_1] * betaini->
        data[sizes_idx_1];
    }

    a = blockedSummation(b_y, b_y->size[0]) / (b_h - (double)Xseldum->size[1]);
    loop_ub = Xseldum->size[1];
    i = bestyhat->size[0] * bestyhat->size[1];
    bestyhat->size[0] = bsb.contents->size[0];
    bestyhat->size[1] = Xseldum->size[1];
    emxEnsureCapacity_real_T(bestyhat, i);
    for (i = 0; i < loop_ub; i++) {
      vlen = bsb.contents->size[0];
      for (i1 = 0; i1 < vlen; i1++) {
        bestyhat->data[i1 + bestyhat->size[0] * i] = Xseldum->data[((int)
          bsb.contents->data[i1] + Xseldum->size[0] * i) - 1];
      }
    }

    loop_ub = Xseldum->size[1];
    i = b_C->size[0] * b_C->size[1];
    b_C->size[0] = bsb.contents->size[0];
    b_C->size[1] = Xseldum->size[1];
    emxEnsureCapacity_real_T(b_C, i);
    for (i = 0; i < loop_ub; i++) {
      vlen = bsb.contents->size[0];
      for (i1 = 0; i1 < vlen; i1++) {
        b_C->data[i1 + b_C->size[0] * i] = Xseldum->data[((int)
          bsb.contents->data[i1] + Xseldum->size[0] * i) - 1];
      }
    }

    b_mtimes(bestyhat, b_C, Xfinal);
    inv(Xfinal, out->invXX);
    i = Xfinal->size[0] * Xfinal->size[1];
    Xfinal->size[0] = out->invXX->size[0];
    Xfinal->size[1] = out->invXX->size[1];
    emxEnsureCapacity_real_T(Xfinal, i);
    loop_ub = out->invXX->size[0] * out->invXX->size[1];
    for (i = 0; i < loop_ub; i++) {
      Xfinal->data[i] = a * out->invXX->data[i];
    }
  } else {
    /*  model is non linear because there is time varying amplitude in seasonal component */
    /*  Find new estimate of scale using only observations which have */
    /*  weight equal to 1. */
    i = weights.contents->size[0];
    weights.contents->size[0] = yin.contents->size[0];
    emxEnsureCapacity_boolean_T(weights.contents, i);
    loop_ub = yin.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      weights.contents->data[i] = false;
    }

    i = r2->size[0];
    r2->size[0] = bsb.contents->size[0];
    emxEnsureCapacity_int32_T(r2, i);
    loop_ub = bsb.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      r2->data[i] = (int)bsb.contents->data[i];
    }

    loop_ub = r2->size[0];
    for (i = 0; i < loop_ub; i++) {
      weights.contents->data[r2->data[i] - 1] = true;
    }

    /*  TODO nlinfit not supported by MATLAB C Coder */
    if (lshiftYN.contents == 1.0) {
      if (1 > yhatrob->size[0] - 1) {
        loop_ub = 0;
      } else {
        loop_ub = yhatrob->size[0] - 1;
      }

      i = beta.contents->size[0];
      beta.contents->size[0] = loop_ub;
      emxEnsureCapacity_real_T(beta.contents, i);
      for (i = 0; i < loop_ub; i++) {
        beta.contents->data[i] = yhatrob->data[i];
      }
    } else {
      i = beta.contents->size[0];
      beta.contents->size[0] = yhatrob->size[0];
      emxEnsureCapacity_real_T(beta.contents, i);
      loop_ub = yhatrob->size[0];
      for (i = 0; i < loop_ub; i++) {
        beta.contents->data[i] = yhatrob->data[i];
      }
    }

    i = Xfinal->size[0] * Xfinal->size[1];
    Xfinal->size[0] = 1;
    Xfinal->size[1] = 1;
    emxEnsureCapacity_real_T(Xfinal, i);
    Xfinal->data[0] = 1.0 / (double)beta.contents->size[0];
    i = out->invXX->size[0] * out->invXX->size[1];
    out->invXX->size[0] = 1;
    out->invXX->size[1] = 1;
    emxEnsureCapacity_real_T(out->invXX, i);
    out->invXX->data[0] = 1.0 / (double)beta.contents->size[0];

    /*  Now compute again vector yhat using final vector betaout */
    i = bsb.contents->size[0];
    bsb.contents->size[0] = seq.contents->size[0];
    emxEnsureCapacity_real_T(bsb.contents, i);
    loop_ub = seq.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      bsb.contents->data[i] = seq.contents->data[i];
    }

    lik(&Xtrend, &bsb, &trend, &seasonal, &s, &yhatseaso, &Xseaso, &varampl,
        &Seq, &nexpl, &isemptyX, &X, &lshiftYN, &Xlshift, &yhat, beta.contents);
  }

  emxFree_int32_T(&r2);
  emxFree_real_T(&b_C);

  /*  Store beta standard error, t stat and p values */
  diag(Xfinal, bestnumscale2);
  nx = bestnumscale2->size[0];
  for (sizes_idx_1 = 0; sizes_idx_1 < nx; sizes_idx_1++) {
    bestnumscale2->data[sizes_idx_1] = sqrt(bestnumscale2->data[sizes_idx_1]);
  }

  i = out->residuals->size[0];
  out->residuals->size[0] = beta.contents->size[0];
  emxEnsureCapacity_real_T(out->residuals, i);
  loop_ub = beta.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->residuals->data[i] = beta.contents->data[i] / bestnumscale2->data[i];
  }

  nx = out->residuals->size[0];
  i = b_y->size[0];
  b_y->size[0] = out->residuals->size[0];
  emxEnsureCapacity_real_T(b_y, i);
  for (sizes_idx_1 = 0; sizes_idx_1 < nx; sizes_idx_1++) {
    b_y->data[sizes_idx_1] = fabs(out->residuals->data[sizes_idx_1]);
  }

  loop_ub = b_y->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] = -b_y->data[i];
  }

  tcdf(b_y, y->size[0] - beta.contents->size[0], betaini);
  i = out->B->size[0] * out->B->size[1];
  out->B->size[0] = beta.contents->size[0];
  out->B->size[1] = 4;
  emxEnsureCapacity_real_T(out->B, i);
  loop_ub = beta.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->B->data[i] = beta.contents->data[i];
  }

  loop_ub = bestnumscale2->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->B->data[i + out->B->size[0]] = bestnumscale2->data[i];
  }

  loop_ub = out->residuals->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->B->data[i + out->B->size[0] * 2] = out->residuals->data[i];
  }

  loop_ub = betaini->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->B->data[i + out->B->size[0] * 3] = 2.0 * betaini->data[i];
  }

  if (lshift > 0.0) {
    /*  Store position of level shift */
    out->posLS.size[0] = 1;
    out->posLS.size[1] = 1;
    out->posLS.data[0] = posLS;
  } else {
    out->posLS.size[0] = 0;
    out->posLS.size[1] = 0;
  }

  /*  Computation of reweighted residuals. */
  i = out->residuals->size[0];
  out->residuals->size[0] = yin.contents->size[0];
  emxEnsureCapacity_real_T(out->residuals, i);
  loop_ub = yin.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->residuals->data[i] = yin.contents->data[i] - yhat.contents->data[i];
  }

  /*  s2full */
  i = betaini->size[0];
  betaini->size[0] = allnumscale2->size[0];
  emxEnsureCapacity_real_T(betaini, i);
  loop_ub = allnumscale2->size[0];
  for (i = 0; i < loop_ub; i++) {
    betaini->data[i] = out->residuals->data[(int)allnumscale2->data[i] - 1];
  }

  i = bestnumscale2->size[0];
  bestnumscale2->size[0] = allnumscale2->size[0];
  emxEnsureCapacity_real_T(bestnumscale2, i);
  loop_ub = allnumscale2->size[0];
  for (i = 0; i < loop_ub; i++) {
    bestnumscale2->data[i] = out->residuals->data[(int)allnumscale2->data[i] - 1];
  }

  if (allnumscale2->size[0] < 1) {
    ij = 0.0;
  } else {
    ij = cblas_ddot((MKL_INT)allnumscale2->size[0], &betaini->data[0], (MKL_INT)
                    1, &bestnumscale2->data[0], (MKL_INT)1);
  }

  emxFree_real_T(&bestnumscale2);

  /*  s0 =sqrt(MSE) */
  /*  Compute new standardized residuals. */
  /*  Apply consistency factor to reweighted estimate of sigma */
  vlen = weights.contents->size[0];
  if (weights.contents->size[0] == 0) {
    nx = 0;
  } else {
    nx = weights.contents->data[0];
    for (sizes_idx_1 = 2; sizes_idx_1 <= vlen; sizes_idx_1++) {
      nx += weights.contents->data[sizes_idx_1 - 1];
    }
  }

  vlen = weights.contents->size[0];
  if (weights.contents->size[0] == 0) {
    ib_size = 0;
  } else {
    ib_size = weights.contents->data[0];
    for (sizes_idx_1 = 2; sizes_idx_1 <= vlen; sizes_idx_1++) {
      ib_size += weights.contents->data[sizes_idx_1 - 1];
    }
  }

  ncomb = ib_size;
  if (nx < yin.contents->size[0]) {
    /*  Make sure that hrew has at least T/2 observations */
    if (nx < (double)yin.contents->size[0] / 2.0) {
      ncomb = (double)yin.contents->size[0] / 2.0;
    }

    /*  factor=consistencyfactor(hrew,n,1); */
    sworst = 0.5 * (ncomb / (double)yin.contents->size[0] + 1.0);
    if ((sworst >= 0.0) && (sworst <= 1.0)) {
      a = -1.4142135623730951 * erfcinv(2.0 * sworst);
    } else {
      a = rtNaN;
    }

    /* factor=1/sqrt(1-(2*a.*normpdf(a))./(2*normcdf(a)-1)); */
    /*  Apply small sample correction factor to reweighted estimate */
    /*  of sigma */
    factor = 1.0 / sqrt(1.0 - 2.0 * ((double)yin.contents->size[0] / ncomb) * a *
                        (exp(-0.5 * a * a) / 2.5066282746310002)) * sqrt
      (corfactorREW(yin.contents->size[0], ncomb / (double)yin.contents->size[0]));
  } else {
    factor = 1.0;
  }

  i = b_y->size[0];
  b_y->size[0] = out->residuals->size[0];
  emxEnsureCapacity_real_T(b_y, i);
  nx = out->residuals->size[0];
  for (sizes_idx_1 = 0; sizes_idx_1 < nx; sizes_idx_1++) {
    b_y->data[sizes_idx_1] = out->residuals->data[sizes_idx_1] * out->
      residuals->data[sizes_idx_1];
  }

  i = b_y->size[0];
  b_y->size[0] = weights.contents->size[0];
  emxEnsureCapacity_real_T(b_y, i);
  loop_ub = weights.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] *= (double)weights.contents->data[i];
  }

  vlen = weights.contents->size[0];
  if (weights.contents->size[0] == 0) {
    ib_size = 0;
  } else {
    ib_size = weights.contents->data[0];
    for (sizes_idx_1 = 2; sizes_idx_1 <= vlen; sizes_idx_1++) {
      ib_size += weights.contents->data[sizes_idx_1 - 1];
    }
  }

  factor *= sqrt(blockedSummation(b_y, b_y->size[0]) / ((double)ib_size - 1.0));
  if (!(factor == 0.0)) {
    loop_ub = out->residuals->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->residuals->data[i] /= factor;
    }
  }

  /*  Declare as outliers the observations which have a standardized */
  /*  residual greater than cutoff. REMARK: while the first threshold */
  /*  was based on the Student T (with modified degrees of freedom), in */
  /*  this second round the threshold is based on the Normal. Notice */
  /*  that: sqrt(chi2inv(0.975,1)) = tinv(0.9875,\infinity) = */
  /*  norminv(0.9875) */
  i = out->yhat->size[0];
  out->yhat->size[0] = yhat.contents->size[0];
  emxEnsureCapacity_real_T(out->yhat, i);
  loop_ub = yhat.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->yhat->data[i] = yhat.contents->data[i];
  }

  /*  Store quantities in the out structure */
  nx = out->residuals->size[0];
  i = b_y->size[0];
  b_y->size[0] = out->residuals->size[0];
  emxEnsureCapacity_real_T(b_y, i);
  for (sizes_idx_1 = 0; sizes_idx_1 < nx; sizes_idx_1++) {
    b_y->data[sizes_idx_1] = fabs(out->residuals->data[sizes_idx_1]);
  }

  sworst = (conflev + 1.0) / 2.0;
  if ((sworst >= 0.0) && (sworst <= 1.0)) {
    sworst = -1.4142135623730951 * erfcinv(2.0 * sworst);
  } else {
    sworst = rtNaN;
  }

  i = Weights->size[0];
  Weights->size[0] = b_y->size[0];
  emxEnsureCapacity_boolean_T(Weights, i);
  loop_ub = b_y->size[0];
  for (i = 0; i < loop_ub; i++) {
    Weights->data[i] = (b_y->data[i] > sworst);
  }

  end = Weights->size[0] - 1;
  nx = 0;
  for (sizes_idx_1 = 0; sizes_idx_1 <= end; sizes_idx_1++) {
    if (Weights->data[sizes_idx_1]) {
      nx++;
    }
  }

  emxInit_int32_T(&r6, 1);
  i = r6->size[0];
  r6->size[0] = nx;
  emxEnsureCapacity_int32_T(r6, i);
  nx = 0;
  for (sizes_idx_1 = 0; sizes_idx_1 <= end; sizes_idx_1++) {
    if (Weights->data[sizes_idx_1]) {
      r6->data[nx] = sizes_idx_1 + 1;
      nx++;
    }
  }

  i = out->outliers->size[0];
  out->outliers->size[0] = r6->size[0];
  emxEnsureCapacity_real_T(out->outliers, i);
  loop_ub = r6->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->outliers->data[i] = seq.contents->data[r6->data[i] - 1];
  }

  emxFree_int32_T(&r6);
  emxFreeStruct_captured_var1(&seq);

  /* decomment the following two lines to get outlier pvalues */
  nx = out->residuals->size[0];
  i = b_y->size[0];
  b_y->size[0] = out->residuals->size[0];
  emxEnsureCapacity_real_T(b_y, i);
  for (sizes_idx_1 = 0; sizes_idx_1 < nx; sizes_idx_1++) {
    b_y->data[sizes_idx_1] = fabs(out->residuals->data[sizes_idx_1]);
  }

  loop_ub = b_y->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] = -b_y->data[i];
  }

  emxInit_real_T(&p_all, 1);
  i = p_all->size[0];
  p_all->size[0] = b_y->size[0];
  emxEnsureCapacity_real_T(p_all, i);
  i = b_y->size[0];
  for (sizes_idx_1 = 0; sizes_idx_1 < i; sizes_idx_1++) {
    sworst = eml_erfcore(-b_y->data[sizes_idx_1] / 1.4142135623730951);
    p_all->data[sizes_idx_1] = 0.5 * sworst;
  }

  end = Weights->size[0] - 1;
  nx = 0;
  for (sizes_idx_1 = 0; sizes_idx_1 <= end; sizes_idx_1++) {
    if (Weights->data[sizes_idx_1]) {
      nx++;
    }
  }

  emxInit_int32_T(&r7, 1);
  i = r7->size[0];
  r7->size[0] = nx;
  emxEnsureCapacity_int32_T(r7, i);
  nx = 0;
  for (sizes_idx_1 = 0; sizes_idx_1 <= end; sizes_idx_1++) {
    if (Weights->data[sizes_idx_1]) {
      r7->data[nx] = sizes_idx_1 + 1;
      nx++;
    }
  }

  emxFree_boolean_T(&Weights);
  i = out->outliersPval->size[0];
  out->outliersPval->size[0] = r7->size[0];
  emxEnsureCapacity_real_T(out->outliersPval, i);
  loop_ub = r7->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->outliersPval->data[i] = p_all->data[r7->data[i] - 1];
  }

  emxFree_int32_T(&r7);
  emxFree_real_T(&p_all);

  /*  Store robust estimate of s */
  out->scale = factor;

  /*  Store the 20 best estimates of the scale for each tentative level shift */
  /*  which is considered */
  /*  Store indices forming the bestrdiv2 best estimates of the target function */
  /*  Store scaled residuals */
  /*  Store units forming best initial subset of p-1 observations */
  /*  Store list of units declared as outliers */
  /*  out.outliers=seq(weights==0); */
  /*  Store confidence level which is used to draw the horizontal lines in the */
  /*  plot */
  out->conflev = conflev;

  /*  Store the number of observations that have determined the LTS (LMS) */
  /*  estimator, i.e. the value of h. */
  out->h = b_h;

  /*  Store vector of weights (values equal to 1 are associated with units */
  /*  parteciapting to the fit) */
  i = out->weights->size[0];
  out->weights->size[0] = weights.contents->size[0];
  emxEnsureCapacity_boolean_T(out->weights, i);
  loop_ub = weights.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->weights->data[i] = weights.contents->data[i];
  }

  emxFreeStruct_captured_var(&weights);

  /*  Store number of singular subsets */
  out->singsub = 0.0;

  /*  Store information about the class of the object */
  for (i = 0; i < 5; i++) {
    out->class [i] = cv[i];
  }

  if (!(lshift > 0.0)) {
    i = out->Likloc->size[0] * out->Likloc->size[1];
    out->Likloc->size[0] = 1;
    out->Likloc->size[1] = 1;
    emxEnsureCapacity_real_T(out->Likloc, i);
    out->Likloc->data[0] = 0.0;
  } else {
    /*  Store local improvement of the likelihood */
  }

  /*  Store response */
  i = out->y->size[0];
  out->y->size[0] = yin.contents->size[0];
  emxEnsureCapacity_real_T(out->y, i);
  loop_ub = yin.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->y->data[i] = yin.contents->data[i];
  }

  if (yxsave) {
    if (intercept) {
      /*  Store X (without the column of ones if there is an intercept) */
      if (2 > Xseldum->size[1]) {
        i = 0;
        i1 = 0;
      } else {
        i = 1;
        i1 = Xseldum->size[1];
      }

      loop_ub = Xseldum->size[0];
      ib_size = out->X->size[0] * out->X->size[1];
      out->X->size[0] = Xseldum->size[0];
      vlen = i1 - i;
      out->X->size[1] = vlen;
      emxEnsureCapacity_real_T(out->X, ib_size);
      for (i1 = 0; i1 < vlen; i1++) {
        for (ib_size = 0; ib_size < loop_ub; ib_size++) {
          out->X->data[ib_size + out->X->size[0] * i1] = Xseldum->data[ib_size +
            Xseldum->size[0] * (i + i1)];
        }
      }
    } else {
      i = out->X->size[0] * out->X->size[1];
      out->X->size[0] = Xseldum->size[0];
      out->X->size[1] = Xseldum->size[1];
      emxEnsureCapacity_real_T(out->X, i);
      loop_ub = Xseldum->size[0] * Xseldum->size[1];
      for (i = 0; i < loop_ub; i++) {
        out->X->data[i] = Xseldum->data[i];
      }
    }
  } else {
    out->X->size[0] = 0;
    out->X->size[1] = 0;
  }

  /*  b_trend = {'b_trend1'; 'b_trend2'; 'b_trend3'; 'b_trend4'}; */
  /*  b_seaso = {'b_cos1'; 'b_sin1'; 'b_cos2'; 'b_sin2'; ... */
  /*      'b_cos3'; 'b_sin3'; 'b_cos4'; 'b_sin4'; ... */
  /*      'b_cos5'; 'b_sin5'; 'b_cos6'}; */
  /*  b_AR =    {'b_AR1'; 'b_AR2'; 'b_AR3'; 'b_AR4'; 'b_AR5'; 'b_AR6'}; */
  /*  b_X  =    {'b_X1'; 'b_X2'; 'b_X3'; 'b_X4'; 'b_X5'; 'b_X6'}; */
  /*  b_varampl = {'b_varampl'; 'b_varamp2'; 'b_varamp3'}; */
  /*  b_lshift  = {'b_lshift' ; 't_lshift'}; */
  /*  */
  /*  if ARp>0 */
  /*       b_expl=[b_AR(1:ARp); b_X(1:nexpl-ARp)]; */
  /*  else */
  /*      b_expl=b_X; */
  /*  end */
  /*  */
  /*  if seasonal>0 */
  /*      if 2*seasonal==s */
  /*          lab=[b_trend(1:trend+1); b_seaso]; */
  /*      else */
  /*          lab=[b_trend(1:trend+1); b_seaso(1:2*seasonal)]; */
  /*      end */
  /*  else */
  /*      lab=b_trend(1:trend+1); */
  /*  end */
  /*  */
  /*  if nexpl>0 */
  /*      lab=[lab;b_expl(1:nexpl)]; */
  /*  end */
  /*  if varampl>0 */
  /*      lab=[lab;b_varampl(1:varampl)]; */
  /*      posvarampl=length(lab)-varampl+1:length(lab); */
  /*  else */
  /*      posvarampl=[]; */
  /*  end */
  /*  if lshiftYN==1 */
  /*      lab=[lab; b_lshift(1)]; */
  /*  end */
  /*  Code generation does not support string arrays */
  /*  b_trend = ["b_trend1"; "b_trend2"; "b_trend3"; "b_trend4"]; */
  /*  b_seaso = ["b_cos1"; "b_sin1"; "b_cos2"; "b_sin2"; ... */
  /*      "b_cos3"; "b_sin3"; "b_cos4"; "b_sin4"; ... */
  /*      "b_cos5"; "b_sin5"; "b_cos6"]; */
  /*  b_AR =    ["b_AR1"; "b_AR2"; "b_AR3"; "b_AR4"; "b_AR5"; "b_AR6"]; */
  /*  b_X  =    ["b_X1"; "b_X2"; "b_X3"; "b_X4"; "b_X5"; "b_X6"]; */
  /*  b_varampl = ["b_varampl"; "b_varamp2"; "b_varamp3"]; */
  /*  b_lshift  = ["b_lshift" ; "t_lshift"]; */
  if (ARp > 0.0) {
    if (1.0 > ARp) {
      loop_ub = 0;
    } else {
      loop_ub = (int)ARp;
    }

    d = nexpl.contents - ARp;
    if (1.0 > d) {
      vlen = 0;
    } else {
      vlen = (int)d;
    }

    nx = loop_ub + vlen;
    for (i = 0; i < 8; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_expl_data[i1 + nx * i] = b_AR[i1 + 6 * i];
      }

      for (i1 = 0; i1 < vlen; i1++) {
        b_expl_data[(i1 + loop_ub) + nx * i] = b_X[i1 + 6 * i];
      }
    }
  } else {
    nx = 6;
    for (i = 0; i < 48; i++) {
      b_expl_data[i] = b_X[i];
    }
  }

  if (seasonal.contents > 0.0) {
    d = 2.0 * seasonal.contents;
    if (d == model->s) {
      if (1.0 > model->trend + 1.0) {
        loop_ub = 0;
      } else {
        loop_ub = (int)(model->trend + 1.0);
      }

      lab_size[0] = loop_ub + 11;
      lab_size[1] = 8;
      for (i = 0; i < 8; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          lab_data[i1 + (loop_ub + 11) * i] = b_trend[i1 + (i << 2)];
        }

        for (i1 = 0; i1 < 11; i1++) {
          lab_data[(i1 + loop_ub) + (loop_ub + 11) * i] = b_seaso[i1 + 11 * i];
        }
      }
    } else {
      if (1.0 > model->trend + 1.0) {
        loop_ub = 0;
      } else {
        loop_ub = (int)(model->trend + 1.0);
      }

      if (1.0 > d) {
        vlen = 0;
      } else {
        vlen = (int)d;
      }

      lab_size[0] = loop_ub + vlen;
      lab_size[1] = 8;
      for (i = 0; i < 8; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          lab_data[i1 + lab_size[0] * i] = b_trend[i1 + (i << 2)];
        }

        for (i1 = 0; i1 < vlen; i1++) {
          lab_data[(i1 + loop_ub) + lab_size[0] * i] = b_seaso[i1 + 11 * i];
        }
      }
    }
  } else {
    if (1.0 > model->trend + 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int)(model->trend + 1.0);
    }

    lab_size[0] = loop_ub;
    lab_size[1] = 8;
    for (i = 0; i < 8; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        lab_data[i1 + loop_ub * i] = b_trend[i1 + (i << 2)];
      }
    }
  }

  if (nexpl.contents > 0.0) {
    hmin = (int)nexpl.contents;
    sizes_idx_1 = lab_size[0] + hmin;
    loop_ub = lab_size[0];
    for (i = 0; i < 8; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_lab_data[i1 + sizes_idx_1 * i] = lab_data[i1 + lab_size[0] * i];
      }

      for (i1 = 0; i1 < hmin; i1++) {
        b_lab_data[(i1 + lab_size[0]) + sizes_idx_1 * i] = b_expl_data[i1 + nx *
          i];
      }
    }

    lab_size[0] = sizes_idx_1;
    lab_size[1] = 8;
    loop_ub = sizes_idx_1 * 8;
    if (0 <= loop_ub - 1) {
      memcpy(&lab_data[0], &b_lab_data[0], loop_ub * sizeof(char));
    }
  }

  emxInit_real_T(&posvarampl, 2);
  if (varampl.contents > 0.0) {
    if (1.0 > varampl.contents) {
      loop_ub = 0;
    } else {
      loop_ub = (int)varampl.contents;
    }

    sizes_idx_1 = lab_size[0] + loop_ub;
    vlen = lab_size[0];
    for (i = 0; i < 8; i++) {
      for (i1 = 0; i1 < vlen; i1++) {
        b_lab_data[i1 + sizes_idx_1 * i] = lab_data[i1 + lab_size[0] * i];
      }

      for (i1 = 0; i1 < loop_ub; i1++) {
        b_lab_data[(i1 + lab_size[0]) + sizes_idx_1 * i] = b_varampl[i1 + 3 * i];
      }
    }

    lab_size[0] = sizes_idx_1;
    lab_size[1] = 8;
    loop_ub = sizes_idx_1 * 8;
    if (0 <= loop_ub - 1) {
      memcpy(&lab_data[0], &b_lab_data[0], loop_ub * sizeof(char));
    }

    if (sizes_idx_1 > 8) {
      ib_size = sizes_idx_1;
    } else {
      ib_size = 8;
    }

    if (sizes_idx_1 == 0) {
      nx = 0;
    } else {
      nx = ib_size;
    }

    if (sizes_idx_1 > 8) {
      ib_size = sizes_idx_1;
    } else {
      ib_size = 8;
    }

    if (sizes_idx_1 == 0) {
      ib_size = 0;
    }

    a = ((double)ib_size - varampl.contents) + 1.0;
    if (nx < a) {
      posvarampl->size[0] = 1;
      posvarampl->size[1] = 0;
    } else if (rtIsInf(a) && (a == nx)) {
      i = posvarampl->size[0] * posvarampl->size[1];
      posvarampl->size[0] = 1;
      posvarampl->size[1] = 1;
      emxEnsureCapacity_real_T(posvarampl, i);
      posvarampl->data[0] = rtNaN;
    } else if (floor(a) == a) {
      i = posvarampl->size[0] * posvarampl->size[1];
      posvarampl->size[0] = 1;
      loop_ub = (int)((double)nx - a);
      posvarampl->size[1] = loop_ub + 1;
      emxEnsureCapacity_real_T(posvarampl, i);
      for (i = 0; i <= loop_ub; i++) {
        posvarampl->data[i] = a + (double)i;
      }
    } else {
      eml_float_colon(a, nx, posvarampl);
    }
  } else {
    posvarampl->size[0] = 1;
    posvarampl->size[1] = 0;
  }

  if (lshiftYN.contents == 1.0) {
    sizes_idx_1 = lab_size[0] + 1;
    loop_ub = lab_size[0];
    for (i = 0; i < 8; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_lab_data[i1 + sizes_idx_1 * i] = lab_data[i1 + lab_size[0] * i];
      }

      b_lab_data[lab_size[0] + sizes_idx_1 * i] = cv1[i];
    }

    lab_size[0]++;
    lab_size[1] = 8;
    loop_ub = sizes_idx_1 * 8;
    if (0 <= loop_ub - 1) {
      memcpy(&lab_data[0], &b_lab_data[0], loop_ub * sizeof(char));
    }
  }

  emxInit_real_T(&b_out, 2);

  /*  if verLessThan ('matlab','8.2.0') */
  /*  else */
  /*  Store matrix B in table format (with labels for rows and columns) */
  string_string(lab_data, lab_size, tmp_data, c_size);
  i = b_out->size[0] * b_out->size[1];
  b_out->size[0] = out->B->size[0];
  b_out->size[1] = 4;
  emxEnsureCapacity_real_T(b_out, i);
  loop_ub = out->B->size[0] * out->B->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    b_out->data[i] = out->B->data[i];
  }

  array2table(b_out, tmp_data, c_size, &out->Btable.metaDim.length,
              &out->Btable.rowDim.labels[0], &out->Btable.rowDim.length,
              &out->Btable.varDim, out->Btable.data,
              out->Btable.arrayProps.Description.size);

  /*  end */
  emxFree_real_T(&b_out);
  if (dispresults && (lshiftYN.contents == 1.0)) {
    /*          bhat=out.B(:,1); */
    /*          se=out.B(:,2); */
    /*          tstat=out.B(:,3); */
    /*          pval=out.B(:,4); */
    /*          %         disp('           Coeff.     SE         t-stat       p-values'); */
    /*          fprintf('%s%.3f',lab,bhat) */
    /*      if verLessThan ('matlab','8.2.0') */
    /*          disp('           Coeff.     SE         t-stat       p-values'); */
    /*          disp( [char(lab) num2str([bhat se tstat pval])]); */
    /*      else */
    /*  disp([table(lab) table(bhat) table(se) table(tstat) table(pval)]); */
    /*      end */
    printf("Level shift position t=%.0f\n", posLS);
    fflush(stdout);
  }

  /*  Create plots */
  /*  Part of the code to find the F test for the final harmonic of the seasonal */
  /*  component part */
  i = bsb.contents->size[0];
  bsb.contents->size[0] = allnumscale2->size[0];
  emxEnsureCapacity_real_T(bsb.contents, i);
  loop_ub = allnumscale2->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsb.contents->data[i] = allnumscale2->data[i];
  }

  if (seasonal.contents < 6.0) {
    /*  selWithoutLastHarmonic = indexes of the linear part of the model after excluding the last harmonic */
    sworst = ((double)Xtrend.contents->size[1] + (double)nseaso) - 2.0;
    emxInit_real_T(&selWithoutLastHarmonic_tmp, 2);
    if (sworst < 1.0) {
      selWithoutLastHarmonic_tmp->size[0] = 1;
      selWithoutLastHarmonic_tmp->size[1] = 0;
    } else {
      i = selWithoutLastHarmonic_tmp->size[0] * selWithoutLastHarmonic_tmp->
        size[1];
      selWithoutLastHarmonic_tmp->size[0] = 1;
      selWithoutLastHarmonic_tmp->size[1] = (int)(sworst - 1.0) + 1;
      emxEnsureCapacity_real_T(selWithoutLastHarmonic_tmp, i);
      loop_ub = (int)(sworst - 1.0);
      for (i = 0; i <= loop_ub; i++) {
        selWithoutLastHarmonic_tmp->data[i] = (double)i + 1.0;
      }
    }

    a = ((double)Xtrend.contents->size[1] + (double)nseaso) + 1.0;
    if (Xsel.contents->size[1] < a) {
      Cr->size[0] = 1;
      Cr->size[1] = 0;
    } else if (a == a) {
      i = Cr->size[0] * Cr->size[1];
      Cr->size[0] = 1;
      Cr->size[1] = (int)((double)Xsel.contents->size[1] - a) + 1;
      emxEnsureCapacity_real_T(Cr, i);
      loop_ub = (int)((double)Xsel.contents->size[1] - a);
      for (i = 0; i <= loop_ub; i++) {
        Cr->data[i] = a + (double)i;
      }
    } else {
      eml_float_colon(a, Xsel.contents->size[1], Cr);
    }

    emxInit_real_T(&selWithoutLastHarmonic, 2);
    i = selWithoutLastHarmonic->size[0] * selWithoutLastHarmonic->size[1];
    selWithoutLastHarmonic->size[0] = 1;
    selWithoutLastHarmonic->size[1] = selWithoutLastHarmonic_tmp->size[1] +
      Cr->size[1];
    emxEnsureCapacity_real_T(selWithoutLastHarmonic, i);
    loop_ub = selWithoutLastHarmonic_tmp->size[1];
    for (i = 0; i < loop_ub; i++) {
      selWithoutLastHarmonic->data[i] = selWithoutLastHarmonic_tmp->data[i];
    }

    loop_ub = Cr->size[1];
    for (i = 0; i < loop_ub; i++) {
      selWithoutLastHarmonic->data[i + selWithoutLastHarmonic_tmp->size[1]] =
        Cr->data[i];
    }

    if ((varampl.contents == 0.0) && (lshiftYN.contents == 0.0)) {
      /*  In this case the model is linear */
      /*  Function lik constructs fitted values and residual sum of */
      /*  squares */
      i = bestyhat->size[0] * bestyhat->size[1];
      bestyhat->size[0] = allnumscale2->size[0];
      bestyhat->size[1] = selWithoutLastHarmonic->size[1];
      emxEnsureCapacity_real_T(bestyhat, i);
      loop_ub = selWithoutLastHarmonic->size[1];
      for (i = 0; i < loop_ub; i++) {
        vlen = allnumscale2->size[0];
        for (i1 = 0; i1 < vlen; i1++) {
          bestyhat->data[i1 + bestyhat->size[0] * i] = Xsel.contents->data[((int)
            allnumscale2->data[i1] + Xsel.contents->size[0] * ((int)
            selWithoutLastHarmonic->data[i] - 1)) - 1];
        }
      }

      i = b_yin->size[0];
      b_yin->size[0] = allnumscale2->size[0];
      emxEnsureCapacity_real_T(b_yin, i);
      loop_ub = allnumscale2->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_yin->data[i] = yin.contents->data[(int)allnumscale2->data[i] - 1];
      }

      mldivide(bestyhat, b_yin, beta.contents);

      /*  update fitted values */
      loop_ub = Xsel.contents->size[0];
      i = Xfinal->size[0] * Xfinal->size[1];
      Xfinal->size[0] = Xsel.contents->size[0];
      Xfinal->size[1] = selWithoutLastHarmonic->size[1];
      emxEnsureCapacity_real_T(Xfinal, i);
      vlen = selWithoutLastHarmonic->size[1];
      for (i = 0; i < vlen; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Xfinal->data[i1 + Xfinal->size[0] * i] = Xsel.contents->data[i1 +
            Xsel.contents->size[0] * ((int)selWithoutLastHarmonic->data[i] - 1)];
        }
      }

      if ((Xsel.contents->size[0] == 0) || (selWithoutLastHarmonic->size[1] == 0)
          || (beta.contents->size[0] == 0)) {
        loop_ub = Xsel.contents->size[0];
        i = yhat.contents->size[0];
        yhat.contents->size[0] = Xsel.contents->size[0];
        emxEnsureCapacity_real_T(yhat.contents, i);
        for (i = 0; i < loop_ub; i++) {
          yhat.contents->data[i] = 0.0;
        }
      } else {
        i = yhat.contents->size[0];
        yhat.contents->size[0] = Xsel.contents->size[0];
        emxEnsureCapacity_real_T(yhat.contents, i);
        cblas_dgemm(CblasColMajor, CblasNoTrans, CblasNoTrans, (MKL_INT)
                    Xsel.contents->size[0], (MKL_INT)1, (MKL_INT)
                    selWithoutLastHarmonic->size[1], 1.0, &Xfinal->data[0],
                    (MKL_INT)Xsel.contents->size[0], &beta.contents->data[0],
                    (MKL_INT)beta.contents->size[0], 0.0, &yhat.contents->data[0],
                    (MKL_INT)Xsel.contents->size[0]);
      }

      i = betaini->size[0];
      betaini->size[0] = allnumscale2->size[0];
      emxEnsureCapacity_real_T(betaini, i);
      loop_ub = allnumscale2->size[0];
      for (i = 0; i < loop_ub; i++) {
        nx = (int)allnumscale2->data[i] - 1;
        betaini->data[i] = yin.contents->data[nx] - yhat.contents->data[nx];
      }

      i = b_y->size[0];
      b_y->size[0] = betaini->size[0];
      emxEnsureCapacity_real_T(b_y, i);
      nx = betaini->size[0];
      for (sizes_idx_1 = 0; sizes_idx_1 < nx; sizes_idx_1++) {
        b_y->data[sizes_idx_1] = betaini->data[sizes_idx_1] * betaini->
          data[sizes_idx_1];
      }

      ncomb = blockedSummation(b_y, b_y->size[0]);
    } else if ((varampl.contents == 0.0) && (lshiftYN.contents == 1.0)) {
      /*  In this case there is just level shift however we do not redo */
      /*  the non linear estimation but a simple LS */
      loop_ub = Xsel.contents->size[0];
      i = Xfinal->size[0] * Xfinal->size[1];
      Xfinal->size[0] = Xsel.contents->size[0];
      Xfinal->size[1] = selWithoutLastHarmonic->size[1];
      emxEnsureCapacity_real_T(Xfinal, i);
      vlen = selWithoutLastHarmonic->size[1];
      for (i = 0; i < vlen; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Xfinal->data[i1 + Xfinal->size[0] * i] = Xsel.contents->data[i1 +
            Xsel.contents->size[0] * ((int)selWithoutLastHarmonic->data[i] - 1)];
        }
      }

      if ((Xsel.contents->size[0] != 0) && (selWithoutLastHarmonic->size[1] != 0))
      {
        result = Xsel.contents->size[0];
      } else if ((Xlshift.contents->size[0] != 0) && (Xlshift.contents->size[1]
                  != 0)) {
        result = Xlshift.contents->size[0];
      } else {
        if (Xsel.contents->size[0] > 0) {
          result = Xsel.contents->size[0];
        } else {
          result = 0;
        }

        if (Xlshift.contents->size[0] > result) {
          result = Xlshift.contents->size[0];
        }
      }

      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes || ((Xsel.contents->size[0] != 0) &&
           (selWithoutLastHarmonic->size[1] != 0))) {
        b_input_sizes_idx_1 = selWithoutLastHarmonic->size[1];
      } else {
        b_input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || ((Xlshift.contents->size[0] != 0) &&
           (Xlshift.contents->size[1] != 0))) {
        b_sizes_idx_1 = Xlshift.contents->size[1];
      } else {
        b_sizes_idx_1 = 0;
      }

      i = Xseldum->size[0] * Xseldum->size[1];
      Xseldum->size[0] = result;
      Xseldum->size[1] = b_input_sizes_idx_1 + b_sizes_idx_1;
      emxEnsureCapacity_real_T(Xseldum, i);
      for (i = 0; i < b_input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          Xseldum->data[i1 + Xseldum->size[0] * i] = Xfinal->data[i1 + result *
            i];
        }
      }

      for (i = 0; i < b_sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          Xseldum->data[i1 + Xseldum->size[0] * b_input_sizes_idx_1] =
            Xlshift.contents->data[i1];
        }
      }

      loop_ub = Xseldum->size[1];
      i = bestyhat->size[0] * bestyhat->size[1];
      bestyhat->size[0] = allnumscale2->size[0];
      bestyhat->size[1] = Xseldum->size[1];
      emxEnsureCapacity_real_T(bestyhat, i);
      for (i = 0; i < loop_ub; i++) {
        vlen = allnumscale2->size[0];
        for (i1 = 0; i1 < vlen; i1++) {
          bestyhat->data[i1 + bestyhat->size[0] * i] = Xseldum->data[((int)
            allnumscale2->data[i1] + Xseldum->size[0] * i) - 1];
        }
      }

      i = b_yin->size[0];
      b_yin->size[0] = allnumscale2->size[0];
      emxEnsureCapacity_real_T(b_yin, i);
      loop_ub = allnumscale2->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_yin->data[i] = yin.contents->data[(int)allnumscale2->data[i] - 1];
      }

      mldivide(bestyhat, b_yin, beta.contents);

      /*  find fitted values using all observations */
      if ((Xseldum->size[0] == 0) || (Xseldum->size[1] == 0) ||
          (beta.contents->size[0] == 0)) {
        i = yhat.contents->size[0];
        yhat.contents->size[0] = Xseldum->size[0];
        emxEnsureCapacity_real_T(yhat.contents, i);
        loop_ub = Xseldum->size[0];
        for (i = 0; i < loop_ub; i++) {
          yhat.contents->data[i] = 0.0;
        }
      } else {
        i = yhat.contents->size[0];
        yhat.contents->size[0] = Xseldum->size[0];
        emxEnsureCapacity_real_T(yhat.contents, i);
        cblas_dgemm(CblasColMajor, CblasNoTrans, CblasNoTrans, (MKL_INT)
                    Xseldum->size[0], (MKL_INT)1, (MKL_INT)Xseldum->size[1], 1.0,
                    &Xseldum->data[0], (MKL_INT)Xseldum->size[0],
                    &beta.contents->data[0], (MKL_INT)beta.contents->size[0],
                    0.0, &yhat.contents->data[0], (MKL_INT)Xseldum->size[0]);
      }

      i = betaini->size[0];
      betaini->size[0] = allnumscale2->size[0];
      emxEnsureCapacity_real_T(betaini, i);
      loop_ub = allnumscale2->size[0];
      for (i = 0; i < loop_ub; i++) {
        nx = (int)allnumscale2->data[i] - 1;
        betaini->data[i] = yin.contents->data[nx] - yhat.contents->data[nx];
      }

      i = b_y->size[0];
      b_y->size[0] = betaini->size[0];
      emxEnsureCapacity_real_T(b_y, i);
      nx = betaini->size[0];
      for (sizes_idx_1 = 0; sizes_idx_1 < nx; sizes_idx_1++) {
        b_y->data[sizes_idx_1] = betaini->data[sizes_idx_1] * betaini->
          data[sizes_idx_1];
      }

      ncomb = blockedSummation(b_y, b_y->size[0]);
    } else {
      /*  model is non linear because there is time varying amplitude in seasonal component */
      /*  Remove the last harmonic from Xseaso */
      seasonal.contents--;
      if (seasonal.contents == 0.0) {
        Xseaso.contents->size[0] = 0;
        Xseaso.contents->size[1] = 0;
        i = yhatseaso.contents->size[0];
        yhatseaso.contents->size[0] = 1;
        emxEnsureCapacity_real_T(yhatseaso.contents, i);
        yhatseaso.contents->data[0] = 0.0;
      } else {
        if (1.0 > (double)Xseaso.contents->size[1] - 2.0) {
          loop_ub = 0;
        } else {
          loop_ub = Xseaso.contents->size[1] - 2;
        }

        ib_size = Xseaso.contents->size[0] - 1;
        vlen = Xseaso.contents->size[0];
        for (i = 0; i < loop_ub; i++) {
          for (i1 = 0; i1 < vlen; i1++) {
            Xseaso.contents->data[i1 + (ib_size + 1) * i] =
              Xseaso.contents->data[i1 + Xseaso.contents->size[0] * i];
          }
        }

        i = Xseaso.contents->size[0] * Xseaso.contents->size[1];
        Xseaso.contents->size[0] = ib_size + 1;
        Xseaso.contents->size[1] = loop_ub;
        emxEnsureCapacity_real_T(Xseaso.contents, i);
      }

      a = ((double)Xtrend.contents->size[1] + (double)nseaso) + 1.0;
      if (yhatrob->size[0] < a) {
        Cr->size[0] = 1;
        Cr->size[1] = 0;
      } else if (a == a) {
        i = Cr->size[0] * Cr->size[1];
        Cr->size[0] = 1;
        Cr->size[1] = (int)((double)yhatrob->size[0] - a) + 1;
        emxEnsureCapacity_real_T(Cr, i);
        loop_ub = (int)((double)yhatrob->size[0] - a);
        for (i = 0; i <= loop_ub; i++) {
          Cr->data[i] = a + (double)i;
        }
      } else {
        eml_float_colon(a, yhatrob->size[0], Cr);
      }

      i = selWithoutLastHarmonic->size[0] * selWithoutLastHarmonic->size[1];
      selWithoutLastHarmonic->size[0] = 1;
      selWithoutLastHarmonic->size[1] = selWithoutLastHarmonic_tmp->size[1] +
        Cr->size[1];
      emxEnsureCapacity_real_T(selWithoutLastHarmonic, i);
      loop_ub = selWithoutLastHarmonic_tmp->size[1];
      for (i = 0; i < loop_ub; i++) {
        selWithoutLastHarmonic->data[i] = selWithoutLastHarmonic_tmp->data[i];
      }

      loop_ub = Cr->size[1];
      for (i = 0; i < loop_ub; i++) {
        selWithoutLastHarmonic->data[i + selWithoutLastHarmonic_tmp->size[1]] =
          Cr->data[i];
      }

      /*  If there is no seasonality it is also necessary to */
      /*  remove the non linear part of the seasonal component */
      /*  that is, it is necessary to select the elements of vector selWithoutLastHarmonic */
      /*  apart from those which are in posvarampl */
      if (seasonal.contents == 0.0) {
        i = Cr->size[0] * Cr->size[1];
        Cr->size[0] = 1;
        Cr->size[1] = selWithoutLastHarmonic->size[1];
        emxEnsureCapacity_real_T(Cr, i);
        loop_ub = selWithoutLastHarmonic->size[0] * selWithoutLastHarmonic->
          size[1] - 1;
        for (i = 0; i <= loop_ub; i++) {
          Cr->data[i] = selWithoutLastHarmonic->data[i];
        }

        g_do_vectors(Cr, posvarampl, selWithoutLastHarmonic, ia, &ib_size);
        varampl.contents = 0.0;
      }

      /*  TODO nlinfit not supported by MATLAB C Coder */
      if (lshiftYN.contents == 1.0) {
        if (1 > selWithoutLastHarmonic->size[1] - 1) {
          loop_ub = 0;
        } else {
          loop_ub = selWithoutLastHarmonic->size[1] - 1;
        }

        i = beta.contents->size[0];
        beta.contents->size[0] = loop_ub;
        emxEnsureCapacity_real_T(beta.contents, i);
        for (i = 0; i < loop_ub; i++) {
          beta.contents->data[i] = yhatrob->data[(int)
            selWithoutLastHarmonic->data[i] - 1];
        }
      } else {
        i = beta.contents->size[0];
        beta.contents->size[0] = selWithoutLastHarmonic->size[1];
        emxEnsureCapacity_real_T(beta.contents, i);
        loop_ub = selWithoutLastHarmonic->size[1];
        for (i = 0; i < loop_ub; i++) {
          beta.contents->data[i] = yhatrob->data[(int)
            selWithoutLastHarmonic->data[i] - 1];
        }
      }

      lik(&Xtrend, &bsb, &trend, &seasonal, &s, &yhatseaso, &Xseaso, &varampl,
          &Seq, &nexpl, &isemptyX, &X, &lshiftYN, &Xlshift, &yhat, beta.contents);

      /*  Computation of residuals. */
      i = betaini->size[0];
      betaini->size[0] = bsb.contents->size[0];
      emxEnsureCapacity_real_T(betaini, i);
      loop_ub = bsb.contents->size[0];
      for (i = 0; i < loop_ub; i++) {
        betaini->data[i] = yin.contents->data[(int)bsb.contents->data[i] - 1] -
          yhat.contents->data[i];
      }

      i = b_y->size[0];
      b_y->size[0] = betaini->size[0];
      emxEnsureCapacity_real_T(b_y, i);
      nx = betaini->size[0];
      for (sizes_idx_1 = 0; sizes_idx_1 < nx; sizes_idx_1++) {
        b_y->data[sizes_idx_1] = betaini->data[sizes_idx_1] * betaini->
          data[sizes_idx_1];
      }

      ncomb = blockedSummation(b_y, b_y->size[0]);
    }

    emxFree_real_T(&selWithoutLastHarmonic_tmp);
    emxFree_real_T(&selWithoutLastHarmonic);
    sworst = (double)bsb.contents->size[0] - p;
    out->LastHarmonicPval = 1.0 - fcdf((ncomb - ij) / 2.0 / (ij / sworst),
      sworst);
  } else {
    /*  In presence of 6 harmonics, the last one is just made up of a single */
    /*  variable, therefore the p value is just the p value of the assocaited */
    /*  t-stat */
    out->LastHarmonicPval = out->B->data[((Xtrend.contents->size[1] + nseaso) +
      out->B->size[0] * 3) - 1];
  }

  emxFree_real_T(&b_yin);
  emxFree_real_T(&b_y);
  emxFree_int32_T(&ia);
  emxFree_real_T(&posvarampl);
  emxFree_real_T(&Xseldum);
  emxFree_real_T(&betaini);
  emxFree_real_T(&Xfinal);
  emxFree_real_T(&Cr);
  emxFree_real_T(&bestyhat);
  emxFree_real_T(&yhatrob);
  emxFree_real_T(&allnumscale2);
  emxFreeStruct_captured_var1(&yin);
  emxFreeStruct_captured_var1(&Seq);
  emxFreeStruct_captured_var1(&Xtrend);
  emxFreeStruct_captured_var1(&yhatseaso);
  emxFreeStruct_captured_var1(&Xseaso);
  emxFreeStruct_captured_var1(&X);
  emxFreeStruct_captured_var1(&Xsel);
  emxFreeStruct_captured_var1(&bsb);
  emxFreeStruct_captured_var1(&Xlshift);
  emxFreeStruct_captured_var1(&beta);
  emxFreeStruct_captured_var1(&yhat);
  if (lshiftYN.contents == 1.0) {
    varargin_22_data[0] = 1.0;
    varargin_22_data[1] = fabs(out->B->data[(out->B->size[0] + out->B->size[0] *
      2) - 1]);
    FSRinvmdr(varargin_22_data, p - 1.0, numscale2LSH);
    out->LevelShiftPval.size[0] = 1;
    out->LevelShiftPval.size[1] = 1;
    out->LevelShiftPval.data[0] = 1.0 - numscale2LSH[1];
  } else {
    out->LevelShiftPval.size[0] = 0;
    out->LevelShiftPval.size[1] = 0;
  }

  /*  check about the y global variable */
}

/* End of code generation (LTSts_wrapper.c) */
