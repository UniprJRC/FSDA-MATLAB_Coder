/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRmdr_wrapper.c
 *
 * Code generation for function 'FSRmdr_wrapper'
 *
 */

/* Include files */
#include <R.h>

#include "FSRmdr_wrapper.h"
#include "FSRmdr.h"
#include "any.h"
#include "blockedSummation.h"
#include "cat.h"
#include "cat1.h"
#include "chkinputR.h"
#include "colon.h"
#include "eml_setop.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_initialize.h"
#include "fsdaC_internal_types.h"
#include "fsdaC_types.h"
#include "ifWhileCond.h"
#include "int2str.h"
#include "linsolve.h"
#include "mahalFS.h"
#include "minOrMax.h"
#include "mrdivide_helper.h"
#include "mtimes.h"
#include "randsample.h"
#include "rank.h"
#include "repelem.h"
#include "rt_nonfinite.h"
#include "setdiffFS.h"
#include "sort.h"
#include "sprintf.h"
#include "sum.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <stdio.h>
#include <string.h>

/* Function Declarations */
static void jd_binary_expand_op(emxArray_real_T *b, const emxArray_real_T *r,
                                const emxArray_real_T *weight);

/* Function Definitions */
static void jd_binary_expand_op(emxArray_real_T *b, const emxArray_real_T *r,
                                const emxArray_real_T *weight)
{
  const double *r_data;
  const double *weight_data;
  double *b_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  weight_data = weight->data;
  r_data = r->data;
  i = r->size[0];
  stride_0_0 = b->size[0];
  if (weight->size[0] == 1) {
    b->size[0] = i;
  } else {
    b->size[0] = weight->size[0];
  }
  emxEnsureCapacity_real_T(b, stride_0_0);
  b_data = b->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (weight->size[0] != 1);
  if (weight->size[0] == 1) {
    loop_ub = i;
  } else {
    loop_ub = weight->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_data[i] =
        r_data[i * stride_0_0 + r->size[0]] / weight_data[i * stride_1_0];
  }
}

void FSRmdr_wrapper(const emxArray_real_T *y, const emxArray_real_T *X,
                    const emxArray_real_T *bsb, bool bsbmfullrank,
                    const emxArray_real_T *bsbsteps,
                    const emxArray_real_T *constr, double init, bool intercept,
                    bool internationaltrade, bool msg, bool nocheck,
                    const double threshlevoutX_data[],
                    const int threshlevoutX_size[2], emxArray_real_T *mdr,
                    emxArray_real_T *Un, emxArray_real_T *BB,
                    emxArray_real_T *Bols, emxArray_real_T *S2)
{
  emxArray_boolean_T *boobsbsteps;
  emxArray_boolean_T *bsbT;
  emxArray_boolean_T *c_bsbsteps;
  emxArray_boolean_T *oldbsbT;
  emxArray_boolean_T *r5;
  emxArray_boolean_T *unitstopenalize;
  emxArray_char_T_1x310 c_mm;
  emxArray_int32_T *b_r;
  emxArray_int32_T *iidx;
  emxArray_int32_T *r1;
  emxArray_real_T b_constr;
  emxArray_real_T *Xb;
  emxArray_real_T *Xbb;
  emxArray_real_T *b_X;
  emxArray_real_T *b_b;
  emxArray_real_T *b_bsb;
  emxArray_real_T *b_bsbsteps;
  emxArray_real_T *b_y;
  emxArray_real_T *blast;
  emxArray_real_T *bsbstepdef;
  emxArray_real_T *c_y;
  emxArray_real_T *d_y;
  emxArray_real_T *e;
  emxArray_real_T *iniseq;
  emxArray_real_T *ncl;
  emxArray_real_T *ord;
  emxArray_real_T *r;
  emxArray_real_T *r2;
  emxArray_real_T *r3;
  emxArray_real_T *r4;
  emxArray_real_T *r6;
  emxArray_real_T *resBSB;
  emxArray_real_T *seq;
  emxArray_real_T *unit;
  emxArray_real_T *weight;
  emxArray_real_T *yb;
  emxArray_uint32_T *truerownamestopenalize;
  const double *X_data;
  const double *bsb_data;
  const double *bsbsteps_data;
  const double *constr_data;
  const double *y_data;
  double b;
  double b_mm;
  double init1;
  double initdef;
  double n;
  double p;
  double *BB_data;
  double *Bols_data;
  double *S2_data;
  double *Un_data;
  double *Xb_data;
  double *b_X_data;
  double *b_bsb_data;
  double *b_bsbsteps_data;
  double *b_data;
  double *b_y_data;
  double *blast_data;
  double *bsbstepdef_data;
  double *e_data;
  double *iniseq_data;
  double *mdr_data;
  double *ncl_data;
  double *r_data;
  double *resBSB_data;
  double *seq_data;
  double *weight_data;
  double *yb_data;
  int c_size[2];
  int thpmm_size[2];
  int b_i;
  int b_loop_ub;
  int b_n;
  int end;
  int exitg1;
  int i;
  int i1;
  unsigned int ij;
  int ini0;
  int loop_ub;
  int loop_ub_tmp;
  int mm;
  int nwhile;
  int sizes_idx_1;
  int *iidx_data;
  unsigned int *truerownamestopenalize_data;
  signed char input_sizes_idx_1;
  bool Ra;
  bool bonflevout;
  bool exitg2;
  bool guard1 = false;
  bool *boobsbsteps_data;
  bool *bsbT_data;
  bool *unitstopenalize_data;
  if (!isInitialized_fsdaC) {
    fsdaC_initialize();
  }
  constr_data = constr->data;
  bsbsteps_data = bsbsteps->data;
  bsb_data = bsb->data;
  X_data = X->data;
  y_data = y->data;
  emxInit_real_T(&b_bsb, 1);
  /*  Required input arguments */
  /*  y: a column vector of doubles of any length */
  /*  X: an array of doubles of any dimension */
  /*  bsb: a column vector of doubles of any length */
  /*  Optional input arguments (name / pairs) */
  /*  bsbmfullrank */
  /*  bsbsteps: a missing value, a scalar or a column vector of doubles of any
   * length */
  /*  constr: a missing value, a scalar or a column vector of doubles of any
   * length */
  /*  init a scalar double */
  /*  intercept a scalar boolean */
  /*  internationaltrade a scalar boolean */
  /*  msg is a scalar boolean */
  /*  nocheck is a boolean */
  /*  threshlevoutX a scalar double or an empty value */
  i = b_bsb->size[0];
  b_bsb->size[0] = bsb->size[0];
  emxEnsureCapacity_real_T(b_bsb, i);
  b_bsb_data = b_bsb->data;
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_bsb_data[i] = bsb_data[i];
  }
  emxInit_real_T(&b_y, 1);
  /* FSRmdr computes minimum deletion residual and other basic linear regression
   * quantities in each step of the search */
  /*  */
  /* <a href="matlab: docsearchFS('FSRmdr')">Link to the help function</a> */
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
  /*   bsb     :    list of units forming the initial subset. Vector. If bsb=0
   */
  /*                (default) then the procedure starts with p units randomly */
  /*                chosen else if bsb is not 0 the search will start with */
  /*                m0=length(bsb) */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*  bsbmfullrank :What to do in case subset at step m (say bsbm) produces a */
  /*                non singular X. Scalar. */
  /*                This options controls what to do when rank(X(bsbm,:)) is */
  /*                smaller then number of explanatory variables. */
  /*                If bsbmfullrank = 1 (default is 1) these units (whose number
   */
  /*                is say mnofullrank) are constrained to enter the search in
   */
  /*                the final n-mnofullrank steps else the search continues */
  /*                using as estimate of beta at step m the estimate of beta */
  /*                found in the previous step. */
  /*                Example - 'bsbmfullrank',1 */
  /*                Data Types - double */
  /*  */
  /*    bsbsteps :  Save the units forming subsets. Vector. It specifies for */
  /*                which steps of the fwd search it */
  /*                is necessary to save the units forming subsets. If bsbsteps
   */
  /*                is 0 we store the units forming subset in all steps. If */
  /*                bsbsteps=[] or omitted, the default is to store the units */
  /*                forming subset in all steps if n<=5000, else to store the */
  /*                units forming subset at steps init and steps which are */
  /*                multiple of 100. For example, as default, if n=753 and */
  /*                init=6, units forming subset are stored for m=init, 100, */
  /*                200, 300, 400, 500 and 600. */
  /*                Example - 'bsbsteps',[100 200] stores the unis forming */
  /*                subset in steps 100 and 200. */
  /*                Data Types - double */
  /*  */
  /*   constr :     Constrained search. Vector. r x 1 vector which contains the
   */
  /*                list of units which are forced to join the search in the */
  /*                last r steps. The default is constr=[]. */
  /*                 No constraint is imposed */
  /*                Example - 'constr',[1:10] forces the first 10 units to join
   */
  /*                the subset in the last 10 steps */
  /*                Data Types - double */
  /*  */
  /*   init :       Search initialization. Scalar. */
  /*                It specifies the point where to initialize the search and */
  /*                start monitoring required diagnostics. If it is not */
  /*                specified it is set equal to: */
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
  /*  internationaltrade : criterion for updating subset. Boolean. */
  /*                If internationaltrade is true (default is false) residuals
   */
  /*                which have large of the final column of X (generally */
  /*                quantity) are reduced. Note that this guarantees that */
  /*                leverge units which have a large value of  X will tend to */
  /*                stay in the subset. This option is particularly useful in */
  /*                the context of international trade data where we */
  /*                regress value (value=price*Q) on quantity (Q). In other */
  /*                words, we use the residuals as if we were regressing y/X */
  /*                (that is price) on the vector of ones. */
  /*                Example - 'internationaltrade',true */
  /*                Data Types - boolean */
  /*  */
  /*   msg  :       Level of output to display. Scalar. It controls whether to
   */
  /*                display or not messages about great interchange on the */
  /*                screen If msg==1 (default) */
  /*                messages are displayed on the screen */
  /*                else no message is displayed on the screen */
  /*                Example - 'msg',1 */
  /*                Data Types - double */
  /*  */
  /*   nocheck:     Check input arguments. Boolean. If nocheck is equal to true
   * no */
  /*                check is performed on matrix y and matrix X. Notice that y
   */
  /*                and X are left unchanged. In other words the additioanl */
  /*                column of ones for the intercept is not added. As default */
  /*                nocheck=false. The controls on h, alpha and nsamp still
   * remain */
  /*                Example - 'nocheck',true */
  /*                Data Types - boolean */
  /*  */
  /* threshlevoutX: threshold for high leverage units. Scalar or empty value. */
  /*                Threshold to bound the effect of high leverage units in the
   */
  /*                computation of deletion residuals. In the computation of */
  /*                the quantity $h_i(m^*) = x_i^T\{X(m^*)^TX(m^*)\}^{-1}x_i$,
   */
  /*                $i \notin S^{(m)}_*$, units which very far from the bulk of
   */
  /*                the data (represented by $X(m^*)$) will have a huge value */
  /*                of $h_i(m^*)$ and consequently of the deletion residuals. */
  /*                In order to tackle this problem it is possible to put a */
  /*                bound to the value of $h_i(m^*)$. For example */
  /*                threshlevoutX=r imposes the contrainst that $h_i(m^*)$ */
  /*                cannot exceed $r \times p/m$. The default value of */
  /*                threshlevoutX is empty, which means that no threshold is */
  /*                imposed. */
  /*                Example - 'threshlevoutX',5 */
  /*                Data Types - double */
  /*  */
  /*   plots :      Plot on the screen. Scalar. If equal to one a plot of */
  /*                minimum deletion residual appears  on the screen with 1%, */
  /*                50% and 99% confidence bands else (default) no plot is */
  /*                shown. */
  /*                Example - 'plots',1 */
  /*                Data Types - double */
  /*                Remark: the plot which is produced is very simple. In order
   */
  /*                to control a series of options in this plot and in order to
   */
  /*                connect it dynamically to the other forward plots it is */
  /*                necessary to use function mdrplot. */
  /*  */
  /*  Output: */
  /*  */
  /*   mdr:          n -init x 2 matrix which contains the monitoring of minimum
   */
  /*                deletion residual at each step of the forward search. */
  /*                1st col = fwd search index (from init to n-1). */
  /*                2nd col = minimum deletion residual. */
  /*                REMARK: if in a certain step of the search matrix is */
  /*                singular, this procedure checks how many observations */
  /*                produce a singular matrix. In this case mdr is a column */
  /*                vector which contains the list of units for which matrix X
   */
  /*                is non singular. */
  /*   Un:          Units included in each step. Matrix. */
  /*                (n-init) x 11 Matrix which contains the unit(s) included */
  /*                in the subset at each step of the search. */
  /*                REMARK: in every step the new subset is compared with the */
  /*                old subset. Un contains the unit(s) present in the new */
  /*                subset but not in the old one. */
  /*                Un(1,2) for example contains the unit included in step */
  /*                init+1. */
  /*                Un(end,2) contains the units included in the final step */
  /*                of the search. */
  /*   BB:          Units belonging to subset in each step. Matrix. */
  /*                n x (n-init+1) or n-by-length(bsbsteps) matrix (depending on
   * input */
  /*                option bsbsteps) which contains information about the units
   */
  /*                belonging to the subset at each step of the forward search.
   */
  /*                BB has the following structure */
  /*                1-st row has number 1 in correspondence of the steps in */
  /*                    which unit 1 is included inside subset and a missing */
  /*                    value for the other steps */
  /*                ...... */
  /*                (n-1)-th row has number n-1 in correspondence of the steps
   * in */
  /*                    which unit n-1 is included inside subset and a missing
   */
  /*                    value for the other steps */
  /*                n-th row has number n in correspondence of the steps in */
  /*                    which unit n is included inside subset and a missing */
  /*                    value for the other steps */
  /*                The size of matrix BB is n x (n-init+1) if option input */
  /*                bsbsteps is 0 else the size is n-by-length(bsbsteps). */
  /*   Bols:        OLS coefficents. Matrix. */
  /*                (n-init+1) x (p+1) matrix containing the monitoring of */
  /*                estimated beta coefficients in each step of the forward */
  /*                search. */
  /*   S2:          S2 and R2. Matrix. */
  /*                (n-init+1) x 3 matrix containing the monitoring of S2 (2nd
   */
  /*                column)and R2 (third column) in each step of the forward */
  /*                search. */
  /*  */
  /*  More About: */
  /*  */
  /*                Let $S^{(m)}_* \in \cal{M}$ be the  optimum subset of size
   * $m$, */
  /*                for which the matrix of regressors is $X(m^*)$. Least
   * squares */
  /*                applied to this subset yields parameter estimates */
  /*                $\hat{\beta}(m^*)$ and $s^2(m^*)$, the mean square estimate
   * of */
  /*                $\sigma^2$ on $m-p$ degrees of freedom. Residuals can be */
  /*                calculated for all observations including those not in */
  /*                $S^{(m)}_*$. The $n$ resulting least squares residuals are
   */
  /*                \begin{equation} */
  /*                  e_i(m^*) =  y_i -x_i^T\hat{\beta}(m^*). \label{eq2.14a} */
  /*                \end{equation} */
  /*                The search moves forward */
  /*                with the subset $S^{(m+1)}_*$ consisting of the observations
   * with */
  /*                the $m+1$ smallest absolute values of $e_i(m^*)$. When $m <
   * n$ the */
  /*                estimates of the parameters are based on only those
   * observations */
  /*                giving the central $m$ residuals. */
  /*                To test for outliers the deletion residual is calculated for
   * the */
  /*                $n-m$ observations not in $S^{(m)}_*$. These residuals are
   */
  /*                \begin{equation} */
  /*                r_i^*(m^*)  = \frac{y_{i} - x_{i}^T\hat{\beta}(m^*)} { */
  /*                \sqrt{s^2(m^*)\{1 + h_i(m^*)\}}}  = \frac{e_{i}(m^*)} { */
  /*                \sqrt{s^2(m^*)\{1 + h_i(m^*)\}}}, */
  /*                \end{equation} */
  /*                where $h_i(m^*) = x_i^T\{X(m^*)^TX(m^*)\}^{-1}x_i$;  the
   * leverage */
  /*                of each observation depends on $S^{(m)}_*$. Let the
   * observation */
  /*                nearest to those constituting $S^{(m)}_*$ be */
  /*                $i_{\mbox{min}}$ where */
  /*                \[ */
  /*                i_{\mbox{min}} = \arg \min | r^*_i(m^*)| \; \mbox{for} \; i
   * \notin S^{(m)}_*, */
  /*                \] */
  /*                the observation with the minimum absolute deletion  residual
   * among */
  /*                those not in $S^{(m)}_*$. This function computes */
  /*                $r_i^*(m^*)$ for $m^*=init, init+1, \ldots, n-1$. */
  /*  */
  /*  See also: FSR, FSReda */
  /*  */
  /*  References: */
  /*  */
  /*  Atkinson, A.C. and Riani, M. (2000), "Robust Diagnostic Regression */
  /*  Analysis", Springer Verlag, New York. */
  /*  Atkinson, A.C. and Riani, M. (2006), Distribution theory and */
  /*  simulations for tests of outliers in regression, "Journal of */
  /*  Computational and Graphical Statistics", Vol. 15, pp. 460-476. */
  /*  Riani, M. and Atkinson, A.C. (2007), Fast calibrations of the forward */
  /*  search for testing multiple outliers in regression, "Advances in Data */
  /*  Analysis and Classification", Vol. 1, pp. 123-141. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* <a href="matlab: docsearchFS('FSRmdr')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % FSRmdr with all default options. */
  /*     % Compute minimum deletion residual. */
  /*     % Monitor minimum deletion residual in each step of the forward search.
   */
  /*     % Common part to all examples: load fishery dataset. */
  /*      load('fishery'); */
  /*      y=fishery{:,2}; */
  /*      X=fishery{:,1}; */
  /*      % Find starting subset */
  /*      [out]=LXS(y,X,'nsamp',10000); */
  /*      [mdr] = FSRmdr(y,X,out.bs); */
  /*      plot(mdr(:,1),mdr(:,2)) */
  /*      title('Monitoring of minimum deletion residual') */
  /* } */
  /* { */
  /*     % FSRmdr with optional arguments. */
  /*     % Choose step to start monitoring. */
  /*     % Compute minimum deletion residual and start monitoring it from step
   */
  /*     % 60. */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*      % Find starting subset */
  /*      [out]=LXS(y,X,'nsamp',10000); */
  /*     [mdr] = FSRmdr(y,X,out.bs,'init',60); */
  /* } */
  /* { */
  /*     % Analyze units entering the search in the final steps. */
  /*     % Compute minimum deletion residual and analyze the units entering */
  /*     % subset in each step of the fwd search (matrix Un).  As is well known,
   */
  /*     % the FS provides an ordering of the data from those most in agreement
   */
  /*     % with a suggested model (which enter the first steps) to those least
   * in */
  /*     % agreement with it (which are included in the final steps). */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*      % Find starting subset */
  /*      [out]=LXS(y,X,'nsamp',10000); */
  /*     [mdr,Un] = FSRmdr(y,X,out.bs); */
  /* } */
  /* { */
  /*     % Units forming subset in each step. */
  /*     % Obtain detailed information about the units forming subset in each */
  /*     % step of the forward search (matrix BB). */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*      % Find starting subset */
  /*      [out]=LXS(y,X,'nsamp',10000); */
  /*     [mdr,Un,BB] = FSRmdr(y,X,out.bs); */
  /* } */
  /* { */
  /*     % Monitor \( \hat  \beta \). */
  /*     % Monitor how the estimates of beta coefficients changes as the subset
   */
  /*     % size increases (matrix Bols). */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*      % Find starting subset */
  /*      [out]=LXS(y,X,'nsamp',10000); */
  /*     [mdr,Un,BB,Bols] = FSRmdr(y,X,out.bs); */
  /* } */
  /* { */
  /*     % Monitor $s^2$. */
  /*     % Monitor the estimate of $\sigma^2$ in each step of the fwd search */
  /*     % (matrix S2). */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*      % Find starting subset */
  /*      [out]=LXS(y,X,'nsamp',10000); */
  /*     [mdr,Un,BB,Bols,S2] = FSRmdr(y,X,out.bs); */
  /*     plot(S2(:,1),S2(:,2)) */
  /*     title('Monitoring of s2') */
  /* } */
  /* { */
  /*     % Specify a regression model without intercept. */
  /*     % FSRmdr using a regression model without intercept. */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*      % Find starting subset */
  /*      [out]=LXS(y,X,'nsamp',10000); */
  /*     [mdr,Un,BB,Bols,S2] = FSRmdr(y,X,out.bs,'intercept',false); */
  /* } */
  /* { */
  /*     % Example of the use of option nocheck. */
  /*     %FSRmdr applied without doing any checks on y and X variables. */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*      % Find starting subset */
  /*      [out]=LXS(y,X,'nsamp',10000); */
  /*     [mdr,Un,BB,Bols,S2] = FSRmdr(y,X,out.bs,'nocheck',true); */
  /* } */
  /* { */
  /*     %% Monitoring of s2, and the evolution of beta coefficients for the
   * Hawkins dataset */
  /*     load('hawkins.txt'); */
  /*     y=hawkins(:,9); */
  /*     X=hawkins(:,1:8); */
  /*     [out]=LXS(y,X,'nsamp',10000); */
  /*     [~,~,~,Bols,S2] = FSRmdr(y,X,out.bs); */
  /*     if isnan(S2) */
  /*         disp('NoFullRank in initial subset, please rerun FSRmdr') */
  /*     else */
  /*         %The forward plot of s2 shows that initially the estimate is
   * virtually */
  /*         %zero. The four line segments comprising the plot correspond to the
   * four */
  /*         %groups of observations */
  /*  */
  /*         % Plot of the monitoring of S2 and R2 */
  /*         figure; */
  /*         subplot(1,2,1) */
  /*         plot(S2(:,1),S2(:,2)) */
  /*         xlabel('Subset size m'); */
  /*         ylabel('S2'); */
  /*         subplot(1,2,2) */
  /*         plot(S2(:,1),S2(:,3)) */
  /*         xlabel('Subset size m'); */
  /*         ylabel('R2'); */
  /*  */
  /*         %The forward plots of the estimates of the beta coefficients show
   * that they are virtually constant until m = 86, after which they start
   * fluctuating in different directions. */
  /*  */
  /*         % Plots of the monitoring of "Estimates of beta coefficients" */
  /*         figure; */
  /*         for j=3:size(Bols,2) */
  /*             subplot(2,4,j-2) */
  /*             plot(Bols(:,1),Bols(:,j)) */
  /*             xlabel('Subset size m'); */
  /*             ylabel(['b' num2str(j-2)]); */
  /*         end */
  /*     end */
  /* } */
  /* { */
  /*     %% Store units forming subsets in selected steps. */
  /*     % In this example the units forming subset are stored just for */
  /*     % selected steps. */
  /*     load('hawkins.txt'); */
  /*     y=hawkins(:,9); */
  /*     X=hawkins(:,1:8); */
  /*     rng('default') */
  /*     rng(100) */
  /*     [out]=LXS(y,X,'nsamp',10000); */
  /*     [mdr,Un,BB,Bols,S2] = FSRmdr(y,X,out.bs,'bsbsteps',[30 60]); */
  /*     if isnan(S2) */
  /*         disp('NoFullRank in initial subset, please rerun FSRmdr') */
  /*     else */
  /*         % BB has just two columns */
  /*         % First column contains information about units forming subset at
   * step m=30 */
  /*         % sum(~isnan(BB(:,1))) is 30 */
  /*         % Second column contains information about units forming subset at
   * step m=60 */
  /*         % sum(~isnan(BB(:,2))) is 60 */
  /*         disp(sum(~isnan(BB(:,1)))) */
  /*         disp(sum(~isnan(BB(:,2)))) */
  /*     end */
  /* } */
  /* { */
  /*     %% Example of the use of option threshlevoutX. */
  /*     % In this example a set of remote units is added to a cloud of points.
   */
  /*     % The purpose of this example is to show that in presence of units very
   * far */
  /*     % from the bulk of th data (bad or good elverage points) it is
   * necessary to */
  /*     % bound their effect putting a constraint on their leverage
   * hi=xi'(X'X)xi */
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
  /*     outLXS=LXS(y,X); */
  /*     bs=outLXS.bs; */
  /*     subplot(2,1,1) */
  /*     out1=FSRmdr(yall,Xall,bs,'plots',1); */
  /*     xylim=axis; */
  /*     ylabel('mdr') */
  /*     title('Monitoring of mdr without bound on the leverage') */
  /*     subplot(2,1,2) */
  /*     out2=FSRmdr(yall,Xall,bs,'plots',1,'threshlevoutX',10); */
  /*     ylim(xylim(3:4)); */
  /*     ylabel('mdr') */
  /*     title('Monitoring of mdr with bound on the leverage') */
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
  emxInit_real_T(&b_X, 2);
  i = b_X->size[0] * b_X->size[1];
  b_X->size[0] = X->size[0];
  b_X->size[1] = X->size[1];
  emxEnsureCapacity_real_T(b_X, i);
  b_X_data = b_X->data;
  loop_ub = X->size[0] * X->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_X_data[i] = X_data[i];
  }
  chkinputR(b_y, b_X, intercept, nocheck, &n, &p);
  b_X_data = b_X->data;
  b_y_data = b_y->data;
  /*  User options */
  if (n < 40.0) {
    initdef = p + 1.0;
  } else {
    initdef = fmin(3.0 * p + 1.0, floor(0.5 * ((n + p) + 1.0)));
  }
  /*  Default for vector bsbsteps which indicates for which steps of the fwd */
  /*  search units forming subset have to be saved */
  emxInit_real_T(&bsbstepdef, 2);
  if (n <= 5000.0) {
    i = bsbstepdef->size[0] * bsbstepdef->size[1];
    bsbstepdef->size[0] = 1;
    bsbstepdef->size[1] = 1;
    emxEnsureCapacity_real_T(bsbstepdef, i);
    bsbstepdef_data = bsbstepdef->data;
    bsbstepdef_data[0] = 0.0;
  } else {
    b = 100.0 * floor(n / 100.0);
    emxInit_real_T(&iniseq, 2);
    if (rtIsNaN(b)) {
      i = iniseq->size[0] * iniseq->size[1];
      iniseq->size[0] = 1;
      iniseq->size[1] = 1;
      emxEnsureCapacity_real_T(iniseq, i);
      iniseq_data = iniseq->data;
      iniseq_data[0] = rtNaN;
    } else {
      i = iniseq->size[0] * iniseq->size[1];
      iniseq->size[0] = 1;
      loop_ub = (int)floor((b - 100.0) / 100.0);
      iniseq->size[1] = loop_ub + 1;
      emxEnsureCapacity_real_T(iniseq, i);
      iniseq_data = iniseq->data;
      for (i = 0; i <= loop_ub; i++) {
        iniseq_data[i] = 100.0 * (double)i + 100.0;
      }
    }
    end = iniseq->size[1] - 1;
    sizes_idx_1 = 0;
    for (b_i = 0; b_i <= end; b_i++) {
      if (iniseq_data[b_i] > initdef) {
        sizes_idx_1++;
      }
    }
    nwhile = 0;
    for (b_i = 0; b_i <= end; b_i++) {
      if (iniseq_data[b_i] > initdef) {
        iniseq_data[nwhile] = iniseq_data[b_i];
        nwhile++;
      }
    }
    i = iniseq->size[0] * iniseq->size[1];
    iniseq->size[0] = 1;
    iniseq->size[1] = sizes_idx_1;
    emxEnsureCapacity_real_T(iniseq, i);
    iniseq_data = iniseq->data;
    i = bsbstepdef->size[0] * bsbstepdef->size[1];
    bsbstepdef->size[0] = 1;
    bsbstepdef->size[1] = sizes_idx_1 + 1;
    emxEnsureCapacity_real_T(bsbstepdef, i);
    bsbstepdef_data = bsbstepdef->data;
    bsbstepdef_data[0] = initdef;
    for (i = 0; i < sizes_idx_1; i++) {
      bsbstepdef_data[i + 1] = iniseq_data[i];
    }
    emxFree_real_T(&iniseq);
    /*  OLD WRONG statement */
    /*  bsbstepdef = [initdef 100:100:100*floor(n/100)]; */
  }
  emxInit_boolean_T(&bsbT, 1);
  /* init1=options.init; */
  /*  Write in structure 'options' the options chosen by the user */
  /*  And check if the optional user parameters are reasonable. */
  i = bsbT->size[0];
  bsbT->size[0] = bsb->size[0];
  emxEnsureCapacity_boolean_T(bsbT, i);
  bsbT_data = bsbT->data;
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT_data[i] = (bsb_data[i] == 0.0);
  }
  emxInit_real_T(&Xb, 2);
  emxInit_real_T(&yb, 1);
  if (ifWhileCond(bsbT)) {
    i = Xb->size[0] * Xb->size[1];
    Xb->size[0] = 1;
    Xb->size[1] = 1;
    emxEnsureCapacity_real_T(Xb, i);
    Xb_data = Xb->data;
    Xb_data[0] = 0.0;
    Ra = true;
    nwhile = 1;
    while (Ra && (nwhile < 100)) {
      randsample(n, p, b_bsb);
      b_bsb_data = b_bsb->data;
      loop_ub = b_X->size[1];
      i = Xb->size[0] * Xb->size[1];
      Xb->size[0] = b_bsb->size[0];
      Xb->size[1] = b_X->size[1];
      emxEnsureCapacity_real_T(Xb, i);
      Xb_data = Xb->data;
      for (i = 0; i < loop_ub; i++) {
        b_loop_ub = b_bsb->size[0];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          Xb_data[i1 + Xb->size[0] * i] =
              b_X_data[((int)b_bsb_data[i1] + b_X->size[0] * i) - 1];
        }
      }
      sizes_idx_1 = local_rank(Xb);
      Ra = (sizes_idx_1 < p);
      nwhile++;
    }
    i = yb->size[0];
    yb->size[0] = b_bsb->size[0];
    emxEnsureCapacity_real_T(yb, i);
    yb_data = yb->data;
    loop_ub = b_bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      yb_data[i] = b_y_data[(int)b_bsb_data[i] - 1];
    }
  } else {
    loop_ub = b_X->size[1];
    i = Xb->size[0] * Xb->size[1];
    Xb->size[0] = bsb->size[0];
    Xb->size[1] = b_X->size[1];
    emxEnsureCapacity_real_T(Xb, i);
    Xb_data = Xb->data;
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = bsb->size[0];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        Xb_data[i1 + Xb->size[0] * i] =
            b_X_data[((int)bsb_data[i1] + b_X->size[0] * i) - 1];
      }
    }
    i = yb->size[0];
    yb->size[0] = bsb->size[0];
    emxEnsureCapacity_real_T(yb, i);
    yb_data = yb->data;
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      yb_data[i] = b_y_data[(int)bsb_data[i] - 1];
    }
  }
  ini0 = b_bsb->size[0];
  /*  check init */
  init1 = init;
  if (init < p + 1.0) {
    Rprintf("Attention : init1 should be larger than p. \nIt is set to p+1.");
    //fflush(stdout);
    init1 = p + 1.0;
  } else if (init < b_bsb->size[0]) {
    b_sprintf(b_bsb->size[0]);
    init1 = b_bsb->size[0];
  } else if (init >= n) {
    Rprintf("Attention : init1 should be smaller than n. \nIt is set to n-1.");
    //fflush(stdout);
    init1 = n - 1.0;
  }
  emxInit_real_T(&b_bsbsteps, 2);
  /*  if ~isempty(constr) */
  /*      constr=constr(:); */
  /*      constr(constr>n)=[]; */
  /*  end */
  i = b_bsbsteps->size[0] * b_bsbsteps->size[1];
  b_bsbsteps->size[0] = bsbsteps->size[0];
  b_bsbsteps->size[1] = bsbsteps->size[1];
  emxEnsureCapacity_real_T(b_bsbsteps, i);
  b_bsbsteps_data = b_bsbsteps->data;
  loop_ub = bsbsteps->size[0] * bsbsteps->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_bsbsteps_data[i] = bsbsteps_data[i];
  }
  if ((bsbsteps->size[0] == 0) || (bsbsteps->size[1] == 0)) {
    i = b_bsbsteps->size[0] * b_bsbsteps->size[1];
    b_bsbsteps->size[0] = 1;
    b_bsbsteps->size[1] = bsbstepdef->size[1];
    emxEnsureCapacity_real_T(b_bsbsteps, i);
    b_bsbsteps_data = b_bsbsteps->data;
    loop_ub = bsbstepdef->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_bsbsteps_data[i] = bsbstepdef_data[i];
    }
  }
  emxFree_real_T(&bsbstepdef);
  emxInit_real_T(&weight, 1);
  if (internationaltrade) {
    loop_ub = b_X->size[0];
    i = weight->size[0];
    weight->size[0] = b_X->size[0];
    emxEnsureCapacity_real_T(weight, i);
    weight_data = weight->data;
    for (i = 0; i < loop_ub; i++) {
      initdef = b_X_data[i + b_X->size[0] * (b_X->size[1] - 1)];
      weight_data[i] = initdef * initdef;
    }
  } else {
    i = weight->size[0];
    weight->size[0] = 1;
    emxEnsureCapacity_real_T(weight, i);
    weight_data = weight->data;
    weight_data[0] = 0.0;
  }
  bonflevout = ((threshlevoutX_size[0] != 0) && (threshlevoutX_size[1] != 0));
  /*  Initialise key matrices */
  /*  Initialization of the n x 1 Boolean vector which contains a true in */
  /*  correspondence of the units belonging to subset in each step */
  loop_ub_tmp = (int)n;
  i = bsbT->size[0];
  bsbT->size[0] = (int)n;
  emxEnsureCapacity_boolean_T(bsbT, i);
  bsbT_data = bsbT->data;
  for (i = 0; i < loop_ub_tmp; i++) {
    bsbT_data[i] = false;
  }
  emxInit_int32_T(&iidx, 1);
  i = iidx->size[0];
  iidx->size[0] = b_bsb->size[0];
  emxEnsureCapacity_int32_T(iidx, i);
  iidx_data = iidx->data;
  loop_ub = b_bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    iidx_data[i] = (int)b_bsb_data[i];
  }
  loop_ub = iidx->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT_data[iidx_data[i] - 1] = true;
  }
  /*  sequence from 1 to n. */
  emxInit_real_T(&c_y, 2);
  bsbstepdef_data = c_y->data;
  if (rtIsNaN(n)) {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = 1;
    emxEnsureCapacity_real_T(c_y, i);
    bsbstepdef_data = c_y->data;
    bsbstepdef_data[0] = rtNaN;
  } else if (n < 1.0) {
    c_y->size[0] = 1;
    c_y->size[1] = 0;
  } else if (rtIsInf(n) && (1.0 == n)) {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = 1;
    emxEnsureCapacity_real_T(c_y, i);
    bsbstepdef_data = c_y->data;
    bsbstepdef_data[0] = rtNaN;
  } else {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    loop_ub = (int)floor(n - 1.0);
    c_y->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(c_y, i);
    bsbstepdef_data = c_y->data;
    for (i = 0; i <= loop_ub; i++) {
      bsbstepdef_data[i] = (double)i + 1.0;
    }
  }
  emxInit_real_T(&seq, 1);
  i = seq->size[0];
  seq->size[0] = c_y->size[1];
  emxEnsureCapacity_real_T(seq, i);
  seq_data = seq->data;
  loop_ub = c_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq_data[i] = bsbstepdef_data[i];
  }
  /*  the set complementary to bsb. */
  /*  ncl=setdiff(seq,bsb); */
  end = bsbT->size[0] - 1;
  sizes_idx_1 = 0;
  for (b_i = 0; b_i <= end; b_i++) {
    if (!bsbT_data[b_i]) {
      sizes_idx_1++;
    }
  }
  emxInit_real_T(&ncl, 1);
  i = ncl->size[0];
  ncl->size[0] = sizes_idx_1;
  emxEnsureCapacity_real_T(ncl, i);
  ncl_data = ncl->data;
  nwhile = 0;
  for (b_i = 0; b_i <= end; b_i++) {
    if (!bsbT_data[b_i]) {
      ncl_data[nwhile] = seq_data[b_i];
      nwhile++;
    }
  }
  emxInit_real_T(&r, 2);
  /*  The second column of matrix R will contain the OLS residuals at each step
   */
  /*  of the search */
  i = r->size[0] * r->size[1];
  r->size[0] = seq->size[0];
  r->size[1] = 2;
  emxEnsureCapacity_real_T(r, i);
  r_data = r->data;
  loop_ub = seq->size[0];
  for (i = 0; i < loop_ub; i++) {
    r_data[i] = seq_data[i];
  }
  for (i = 0; i < loop_ub_tmp; i++) {
    r_data[i + r->size[0]] = 0.0;
  }
  /*  If n is very large (>500), the step of the search is printed every 500
   * step */
  /*  seq500 is linked to printing */
  b = ceil(n / 500.0);
  if (rtIsNaN(b)) {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = 1;
    emxEnsureCapacity_real_T(c_y, i);
    bsbstepdef_data = c_y->data;
    bsbstepdef_data[0] = rtNaN;
  } else if (b < 1.0) {
    c_y->size[1] = 0;
  } else if (rtIsInf(b) && (1.0 == b)) {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = 1;
    emxEnsureCapacity_real_T(c_y, i);
    bsbstepdef_data = c_y->data;
    bsbstepdef_data[0] = rtNaN;
  } else {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = (int)(b - 1.0) + 1;
    emxEnsureCapacity_real_T(c_y, i);
    bsbstepdef_data = c_y->data;
    loop_ub = (int)(b - 1.0);
    for (i = 0; i <= loop_ub; i++) {
      bsbstepdef_data[i] = (double)i + 1.0;
    }
  }
  i = c_y->size[0] * c_y->size[1];
  c_y->size[0] = 1;
  emxEnsureCapacity_real_T(c_y, i);
  bsbstepdef_data = c_y->data;
  loop_ub = c_y->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    bsbstepdef_data[i] *= 500.0;
  }
  /*  Matrix Bols will contain the beta coefficients in each step of the fwd */
  /*  search. The first column of Bols contains the fwd search index */
  emxInit_real_T(&d_y, 2);
  bsbstepdef_data = d_y->data;
  if (rtIsNaN(init1) || rtIsNaN(n)) {
    i = d_y->size[0] * d_y->size[1];
    d_y->size[0] = 1;
    d_y->size[1] = 1;
    emxEnsureCapacity_real_T(d_y, i);
    bsbstepdef_data = d_y->data;
    bsbstepdef_data[0] = rtNaN;
  } else if (n < init1) {
    d_y->size[0] = 1;
    d_y->size[1] = 0;
  } else if ((rtIsInf(init1) || rtIsInf(n)) && (init1 == n)) {
    i = d_y->size[0] * d_y->size[1];
    d_y->size[0] = 1;
    d_y->size[1] = 1;
    emxEnsureCapacity_real_T(d_y, i);
    bsbstepdef_data = d_y->data;
    bsbstepdef_data[0] = rtNaN;
  } else if (floor(init1) == init1) {
    i = d_y->size[0] * d_y->size[1];
    d_y->size[0] = 1;
    loop_ub = (int)floor(n - init1);
    d_y->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(d_y, i);
    bsbstepdef_data = d_y->data;
    for (i = 0; i <= loop_ub; i++) {
      bsbstepdef_data[i] = init1 + (double)i;
    }
  } else {
    eml_float_colon(init1, n, d_y);
    bsbstepdef_data = d_y->data;
  }
  emxInit_real_T(&b_b, 1);
  i = b_b->size[0];
  b_b->size[0] = d_y->size[1];
  emxEnsureCapacity_real_T(b_b, i);
  b_data = b_b->data;
  loop_ub = d_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_data[i] = bsbstepdef_data[i];
  }
  if (b_b->size[0] != 0) {
    b_loop_ub = b_b->size[0];
  } else {
    i = (int)((n - init1) + 1.0);
    if ((i != 0) && ((int)p != 0)) {
      b_loop_ub = i;
    } else {
      b_loop_ub = 0;
      if (i > 0) {
        b_loop_ub = i;
      }
    }
  }
  Ra = (b_loop_ub == 0);
  if (Ra || (b_b->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (Ra || (((int)((n - init1) + 1.0) != 0) && ((int)p != 0))) {
    sizes_idx_1 = (int)p;
  } else {
    sizes_idx_1 = 0;
  }
  i = Bols->size[0] * Bols->size[1];
  Bols->size[0] = b_loop_ub;
  Bols->size[1] = input_sizes_idx_1 + sizes_idx_1;
  emxEnsureCapacity_real_T(Bols, i);
  Bols_data = Bols->data;
  loop_ub = input_sizes_idx_1;
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      Bols_data[i1] = b_data[i1];
    }
  }
  for (i = 0; i < sizes_idx_1; i++) {
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      Bols_data[i1 + Bols->size[0] * (i + input_sizes_idx_1)] = rtNaN;
    }
  }
  /* initial value of beta coefficients is set to NaN */
  /*  S2 = (n-init1+1) x 3 matrix which will contain: */
  /*  1st col = fwd search index */
  /*  2nd col = S2= \sum e_i^2 / (m-p) */
  /*  3rd col = R^2 */
  if (rtIsNaN(init1) || rtIsNaN(n)) {
    i = d_y->size[0] * d_y->size[1];
    d_y->size[0] = 1;
    d_y->size[1] = 1;
    emxEnsureCapacity_real_T(d_y, i);
    bsbstepdef_data = d_y->data;
    bsbstepdef_data[0] = rtNaN;
  } else if (n < init1) {
    d_y->size[0] = 1;
    d_y->size[1] = 0;
  } else if ((rtIsInf(init1) || rtIsInf(n)) && (init1 == n)) {
    i = d_y->size[0] * d_y->size[1];
    d_y->size[0] = 1;
    d_y->size[1] = 1;
    emxEnsureCapacity_real_T(d_y, i);
    bsbstepdef_data = d_y->data;
    bsbstepdef_data[0] = rtNaN;
  } else if (floor(init1) == init1) {
    i = d_y->size[0] * d_y->size[1];
    d_y->size[0] = 1;
    d_y->size[1] = (int)floor(n - init1) + 1;
    emxEnsureCapacity_real_T(d_y, i);
    bsbstepdef_data = d_y->data;
    loop_ub = (int)floor(n - init1);
    for (i = 0; i <= loop_ub; i++) {
      bsbstepdef_data[i] = init1 + (double)i;
    }
  } else {
    eml_float_colon(init1, n, d_y);
    bsbstepdef_data = d_y->data;
  }
  i = b_b->size[0];
  b_b->size[0] = d_y->size[1];
  emxEnsureCapacity_real_T(b_b, i);
  b_data = b_b->data;
  loop_ub = d_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_data[i] = bsbstepdef_data[i];
  }
  emxInit_real_T(&ord, 2);
  i = (int)((n - init1) + 1.0);
  i1 = ord->size[0] * ord->size[1];
  ord->size[0] = i;
  ord->size[1] = 2;
  emxEnsureCapacity_real_T(ord, i1);
  iniseq_data = ord->data;
  loop_ub = i << 1;
  for (i1 = 0; i1 < loop_ub; i1++) {
    iniseq_data[i1] = rtNaN;
  }
  if (b_b->size[0] != 0) {
    b_loop_ub = b_b->size[0];
  } else if (i != 0) {
    b_loop_ub = i;
  } else {
    b_loop_ub = 0;
  }
  Ra = (b_loop_ub == 0);
  if (Ra || (b_b->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (Ra || (i != 0)) {
    sizes_idx_1 = 2;
  } else {
    sizes_idx_1 = 0;
  }
  i1 = S2->size[0] * S2->size[1];
  S2->size[0] = b_loop_ub;
  S2->size[1] = input_sizes_idx_1 + sizes_idx_1;
  emxEnsureCapacity_real_T(S2, i1);
  S2_data = S2->data;
  loop_ub = input_sizes_idx_1;
  for (i1 = 0; i1 < loop_ub; i1++) {
    for (nwhile = 0; nwhile < b_loop_ub; nwhile++) {
      S2_data[nwhile] = b_data[nwhile];
    }
  }
  for (i1 = 0; i1 < sizes_idx_1; i1++) {
    for (nwhile = 0; nwhile < b_loop_ub; nwhile++) {
      S2_data[nwhile + S2->size[0] * (i1 + input_sizes_idx_1)] = rtNaN;
    }
  }
  /* initial value of S2 (R2) is set to NaN */
  /*  mdr = (n-init1-1) x 2 matrix which will contain min deletion residual */
  /*  among nobsb r_i^* */
  if (rtIsNaN(init1) || rtIsNaN(n - 1.0)) {
    i1 = d_y->size[0] * d_y->size[1];
    d_y->size[0] = 1;
    d_y->size[1] = 1;
    emxEnsureCapacity_real_T(d_y, i1);
    bsbstepdef_data = d_y->data;
    bsbstepdef_data[0] = rtNaN;
  } else if (n - 1.0 < init1) {
    d_y->size[0] = 1;
    d_y->size[1] = 0;
  } else if ((rtIsInf(init1) || rtIsInf(n - 1.0)) && (init1 == n - 1.0)) {
    i1 = d_y->size[0] * d_y->size[1];
    d_y->size[0] = 1;
    d_y->size[1] = 1;
    emxEnsureCapacity_real_T(d_y, i1);
    bsbstepdef_data = d_y->data;
    bsbstepdef_data[0] = rtNaN;
  } else if (floor(init1) == init1) {
    i1 = d_y->size[0] * d_y->size[1];
    d_y->size[0] = 1;
    loop_ub = (int)floor((n - 1.0) - init1);
    d_y->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(d_y, i1);
    bsbstepdef_data = d_y->data;
    for (i1 = 0; i1 <= loop_ub; i1++) {
      bsbstepdef_data[i1] = init1 + (double)i1;
    }
  } else {
    eml_float_colon(init1, n - 1.0, d_y);
    bsbstepdef_data = d_y->data;
  }
  loop_ub = (int)(n - init1);
  i1 = b_b->size[0];
  b_b->size[0] = loop_ub;
  emxEnsureCapacity_real_T(b_b, i1);
  b_data = b_b->data;
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_data[i1] = rtNaN;
  }
  i1 = mdr->size[0] * mdr->size[1];
  mdr->size[0] = d_y->size[1];
  mdr->size[1] = 2;
  emxEnsureCapacity_real_T(mdr, i1);
  mdr_data = mdr->data;
  b_loop_ub = d_y->size[1];
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    mdr_data[i1] = bsbstepdef_data[i1];
  }
  b_loop_ub = b_b->size[0];
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    mdr_data[i1 + mdr->size[0]] = rtNaN;
  }
  emxInit_boolean_T(&c_bsbsteps, 2);
  /* initial value of mdr is set to NaN */
  /*  Matrix BB will contain the units forming subset in each step (or in */
  /*  selected steps) of the forward search. The first column contains */
  /*  information about units forming subset at step init1. */
  i1 = c_bsbsteps->size[0] * c_bsbsteps->size[1];
  c_bsbsteps->size[0] = b_bsbsteps->size[0];
  c_bsbsteps->size[1] = b_bsbsteps->size[1];
  emxEnsureCapacity_boolean_T(c_bsbsteps, i1);
  unitstopenalize_data = c_bsbsteps->data;
  b_loop_ub = b_bsbsteps->size[0] * b_bsbsteps->size[1];
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    unitstopenalize_data[i1] = (b_bsbsteps_data[i1] == 0.0);
  }
  emxInit_real_T(&e, 1);
  if (b_ifWhileCond(c_bsbsteps)) {
    if (rtIsNaN(init1) || rtIsNaN(n)) {
      i1 = d_y->size[0] * d_y->size[1];
      d_y->size[0] = 1;
      d_y->size[1] = 1;
      emxEnsureCapacity_real_T(d_y, i1);
      bsbstepdef_data = d_y->data;
      bsbstepdef_data[0] = rtNaN;
    } else if (n < init1) {
      d_y->size[0] = 1;
      d_y->size[1] = 0;
    } else if ((rtIsInf(init1) || rtIsInf(n)) && (init1 == n)) {
      i1 = d_y->size[0] * d_y->size[1];
      d_y->size[0] = 1;
      d_y->size[1] = 1;
      emxEnsureCapacity_real_T(d_y, i1);
      bsbstepdef_data = d_y->data;
      bsbstepdef_data[0] = rtNaN;
    } else if (floor(init1) == init1) {
      i1 = d_y->size[0] * d_y->size[1];
      d_y->size[0] = 1;
      d_y->size[1] = (int)floor(n - init1) + 1;
      emxEnsureCapacity_real_T(d_y, i1);
      bsbstepdef_data = d_y->data;
      b_loop_ub = (int)floor(n - init1);
      for (i1 = 0; i1 <= b_loop_ub; i1++) {
        bsbstepdef_data[i1] = init1 + (double)i1;
      }
    } else {
      eml_float_colon(init1, n, d_y);
      bsbstepdef_data = d_y->data;
    }
    i1 = b_bsbsteps->size[0] * b_bsbsteps->size[1];
    b_bsbsteps->size[0] = 1;
    b_bsbsteps->size[1] = d_y->size[1];
    emxEnsureCapacity_real_T(b_bsbsteps, i1);
    b_bsbsteps_data = b_bsbsteps->data;
    b_loop_ub = d_y->size[1];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_bsbsteps_data[i1] = bsbstepdef_data[i1];
    }
    i1 = BB->size[0] * BB->size[1];
    BB->size[0] = (int)n;
    BB->size[1] = i;
    emxEnsureCapacity_real_T(BB, i1);
    BB_data = BB->data;
    b_loop_ub = (int)n * i;
    for (i = 0; i < b_loop_ub; i++) {
      BB_data[i] = rtNaN;
    }
  } else {
    /*  The number of columns of matrix BB is equal to the number of steps */
    /*  for which bsbsteps is greater or equal than init1 */
    end = b_bsbsteps->size[0] * b_bsbsteps->size[1] - 1;
    sizes_idx_1 = 0;
    for (b_i = 0; b_i <= end; b_i++) {
      if (b_bsbsteps_data[b_i] >= init1) {
        sizes_idx_1++;
      }
    }
    emxInit_int32_T(&b_r, 1);
    i = b_r->size[0];
    b_r->size[0] = sizes_idx_1;
    emxEnsureCapacity_int32_T(b_r, i);
    iidx_data = b_r->data;
    nwhile = 0;
    for (b_i = 0; b_i <= end; b_i++) {
      if (b_bsbsteps_data[b_i] >= init1) {
        iidx_data[nwhile] = b_i + 1;
        nwhile++;
      }
    }
    i = e->size[0];
    e->size[0] = b_r->size[0];
    emxEnsureCapacity_real_T(e, i);
    e_data = e->data;
    b_loop_ub = b_r->size[0];
    for (i = 0; i < b_loop_ub; i++) {
      e_data[i] = b_bsbsteps_data[iidx_data[i] - 1];
    }
    i = b_bsbsteps->size[0] * b_bsbsteps->size[1];
    b_bsbsteps->size[0] = b_r->size[0];
    b_bsbsteps->size[1] = 1;
    emxEnsureCapacity_real_T(b_bsbsteps, i);
    b_bsbsteps_data = b_bsbsteps->data;
    b_loop_ub = b_r->size[0];
    emxFree_int32_T(&b_r);
    for (i = 0; i < b_loop_ub; i++) {
      b_bsbsteps_data[i] = e_data[i];
    }
    sizes_idx_1 = b_bsbsteps->size[0];
    if (sizes_idx_1 < 1) {
      sizes_idx_1 = 1;
    }
    if (b_bsbsteps->size[0] == 0) {
      nwhile = 0;
    } else {
      nwhile = sizes_idx_1;
    }
    i = BB->size[0] * BB->size[1];
    BB->size[0] = (int)n;
    BB->size[1] = nwhile;
    emxEnsureCapacity_real_T(BB, i);
    BB_data = BB->data;
    b_loop_ub = (int)n * nwhile;
    for (i = 0; i < b_loop_ub; i++) {
      BB_data[i] = rtNaN;
    }
    /*    BB = NaN(n, sum(bsbsteps>=init1)); */
  }
  emxFree_boolean_T(&c_bsbsteps);
  emxInit_boolean_T(&boobsbsteps, 1);
  i = boobsbsteps->size[0];
  boobsbsteps->size[0] = (int)n;
  emxEnsureCapacity_boolean_T(boobsbsteps, i);
  boobsbsteps_data = boobsbsteps->data;
  for (i = 0; i < loop_ub_tmp; i++) {
    boobsbsteps_data[i] = false;
  }
  emxInit_int32_T(&r1, 2);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = b_bsbsteps->size[0];
  r1->size[1] = b_bsbsteps->size[1];
  emxEnsureCapacity_int32_T(r1, i);
  iidx_data = r1->data;
  b_loop_ub = b_bsbsteps->size[0] * b_bsbsteps->size[1];
  for (i = 0; i < b_loop_ub; i++) {
    iidx_data[i] = (int)b_bsbsteps_data[i];
  }
  b_loop_ub = r1->size[0] * r1->size[1];
  for (i = 0; i < b_loop_ub; i++) {
    boobsbsteps_data[iidx_data[i] - 1] = true;
  }
  emxFree_int32_T(&r1);
  /*  ij = index which is linked with the columns of matrix BB. During the */
  /*  search every time a subset is stored inside matrix BB ij increases by one
   */
  ij = 1U;
  /*   Un is a Matrix whose 2nd column:11th col contains the unit(s) just */
  /*   included. */
  if (rtIsNaN(init1 + 1.0) || rtIsNaN(n)) {
    i = d_y->size[0] * d_y->size[1];
    d_y->size[0] = 1;
    d_y->size[1] = 1;
    emxEnsureCapacity_real_T(d_y, i);
    bsbstepdef_data = d_y->data;
    bsbstepdef_data[0] = rtNaN;
  } else if (n < init1 + 1.0) {
    d_y->size[0] = 1;
    d_y->size[1] = 0;
  } else if ((rtIsInf(init1 + 1.0) || rtIsInf(n)) && (init1 + 1.0 == n)) {
    i = d_y->size[0] * d_y->size[1];
    d_y->size[0] = 1;
    d_y->size[1] = 1;
    emxEnsureCapacity_real_T(d_y, i);
    bsbstepdef_data = d_y->data;
    bsbstepdef_data[0] = rtNaN;
  } else if (floor(init1 + 1.0) == init1 + 1.0) {
    i = d_y->size[0] * d_y->size[1];
    d_y->size[0] = 1;
    b_loop_ub = (int)floor(n - (init1 + 1.0));
    d_y->size[1] = b_loop_ub + 1;
    emxEnsureCapacity_real_T(d_y, i);
    bsbstepdef_data = d_y->data;
    for (i = 0; i <= b_loop_ub; i++) {
      bsbstepdef_data[i] = (init1 + 1.0) + (double)i;
    }
  } else {
    eml_float_colon(init1 + 1.0, n, d_y);
    bsbstepdef_data = d_y->data;
  }
  i = e->size[0];
  e->size[0] = d_y->size[1];
  emxEnsureCapacity_real_T(e, i);
  e_data = e->data;
  b_loop_ub = d_y->size[1];
  for (i = 0; i < b_loop_ub; i++) {
    e_data[i] = bsbstepdef_data[i];
  }
  emxFree_real_T(&d_y);
  emxInit_real_T(&r2, 2);
  i = r2->size[0] * r2->size[1];
  r2->size[0] = loop_ub;
  r2->size[1] = 10;
  emxEnsureCapacity_real_T(r2, i);
  iniseq_data = r2->data;
  loop_ub *= 10;
  for (i = 0; i < loop_ub; i++) {
    iniseq_data[i] = rtNaN;
  }
  emxInit_real_T(&r3, 2);
  cat(e, r2, r3);
  iniseq_data = r3->data;
  i = Un->size[0] * Un->size[1];
  Un->size[0] = r3->size[0];
  Un->size[1] = 11;
  emxEnsureCapacity_real_T(Un, i);
  Un_data = Un->data;
  loop_ub = r3->size[0] * 11;
  emxFree_real_T(&r2);
  for (i = 0; i < loop_ub; i++) {
    Un_data[i] = iniseq_data[i];
  }
  emxFree_real_T(&r3);
  emxInit_real_T(&blast, 1);
  emxInit_real_T(&Xbb, 2);
  emxInit_real_T(&resBSB, 1);
  i = blast->size[0];
  blast->size[0] = 1;
  emxEnsureCapacity_real_T(blast, i);
  blast_data = blast->data;
  blast_data[0] = 0.0;
  i = Xbb->size[0] * Xbb->size[1];
  Xbb->size[0] = 1;
  emxEnsureCapacity_real_T(Xbb, i);
  i = resBSB->size[0];
  resBSB->size[0] = 1;
  emxEnsureCapacity_real_T(resBSB, i);
  resBSB_data = resBSB->data;
  resBSB_data[0] = 0.0;
  /*  opts is a structure which contains the options to use in linsolve */
  /*  Start of the forward search */
  /*  if nocheck==false && rank(Xb)~=p */
  sizes_idx_1 = local_rank(Xb);
  emxInit_boolean_T(&unitstopenalize, 2);
  emxInit_uint32_T(&truerownamestopenalize, 1);
  emxInit_boolean_T(&oldbsbT, 1);
  emxInit_real_T(&unit, 1);
  emxInit_real_T(&r4, 2);
  emxInit_boolean_T(&r5, 2);
  emxInit_real_T(&r6, 2);
  if (sizes_idx_1 != p) {
    i = mdr->size[0] * mdr->size[1];
    mdr->size[0] = 1;
    mdr->size[1] = 1;
    emxEnsureCapacity_real_T(mdr, i);
    mdr_data = mdr->data;
    mdr_data[0] = rtNaN;
    /*  FS loop will not be performed */
    /*  rank check */
  } else {
    mm = 0;
    do {
      exitg1 = 0;
      if (mm <= (int)(n + (1.0 - (double)ini0)) - 1) {
        b_mm = (double)ini0 + (double)mm;
        /*  if n>5000 show every 500 steps the fwd search index */
        if (msg && (n > 5000.0)) {
          d_do_vectors(b_mm, c_y, (double *)&initdef, c_size,
                       (int *)&sizes_idx_1, &nwhile, (int *)&b_loop_ub, &end);
          if (c_size[1] == 1) {
            int2str(b_mm, c_mm.data, c_mm.size);
          }
        }
        /*  Implicitly control the rank of Xb checking the condition number */
        /*  for inversion (which in the case of a rectangular matrix is */
        /*  nothing but the rank) */
        /*  Old instruction was b=Xb\yb; */
        linsolve(Xb, yb, b_b, &initdef);
        b_data = b_b->data;
        /*  disp([mm condNumber]) */
        Ra = !(initdef < p);
        guard1 = false;
        if (Ra) {
          /*  rank is ok */
          mtimes(Xb, b_b, resBSB);
          if (yb->size[0] == resBSB->size[0]) {
            i = resBSB->size[0];
            resBSB->size[0] = yb->size[0];
            emxEnsureCapacity_real_T(resBSB, i);
            resBSB_data = resBSB->data;
            loop_ub = yb->size[0];
            for (i = 0; i < loop_ub; i++) {
              resBSB_data[i] = yb_data[i] - resBSB_data[i];
            }
          } else {
            b_minus(resBSB, yb);
            resBSB_data = resBSB->data;
          }
          i = blast->size[0];
          blast->size[0] = b_b->size[0];
          emxEnsureCapacity_real_T(blast, i);
          blast_data = blast->data;
          loop_ub = b_b->size[0];
          for (i = 0; i < loop_ub; i++) {
            blast_data[i] = b_data[i];
          }
          /*  Store correctly computed b for the case of rank problem */
          guard1 = true;

          /*  number of independent columns is smaller than number of parameters
           */
        } else if (bsbmfullrank) {
          i = b_b->size[0];
          b_b->size[0] = (int)n;
          emxEnsureCapacity_real_T(b_b, i);
          b_data = b_b->data;
          for (i = 0; i < loop_ub_tmp; i++) {
            b_data[i] = 0.0;
          }
          if (1.0 > b_mm) {
            loop_ub = 0;
          } else {
            loop_ub = (int)b_mm;
          }
          for (i = 0; i < loop_ub; i++) {
            b_data[i] = b_bsb_data[i];
          }
          sizes_idx_1 = 1;
          while (sizes_idx_1 == 1) {
            /*  Increase the size of the subset by one unit iteratively until
             * you */
            /*  obtain a full rank matrix */
            b_i = 0;
            exitg2 = false;
            while ((!exitg2) && (b_i <= ncl->size[0] - 1)) {
              if ((Xb->size[0] != 0) && (Xb->size[1] != 0)) {
                b_loop_ub = Xb->size[1];
              } else if (b_X->size[1] != 0) {
                b_loop_ub = b_X->size[1];
              } else {
                b_loop_ub = Xb->size[1];
              }
              Ra = (b_loop_ub == 0);
              if (Ra || ((Xb->size[0] != 0) && (Xb->size[1] != 0))) {
                sizes_idx_1 = Xb->size[0];
              } else {
                sizes_idx_1 = 0;
              }
              if (Ra || (b_X->size[1] != 0)) {
                nwhile = 1;
              } else {
                nwhile = 0;
              }
              loop_ub = b_X->size[1];
              i = c_y->size[0] * c_y->size[1];
              c_y->size[0] = 1;
              c_y->size[1] = b_X->size[1];
              emxEnsureCapacity_real_T(c_y, i);
              bsbstepdef_data = c_y->data;
              for (i = 0; i < loop_ub; i++) {
                bsbstepdef_data[i] =
                    b_X_data[((int)ncl_data[b_i] + b_X->size[0] * i) - 1];
              }
              i = Xbb->size[0] * Xbb->size[1];
              Xbb->size[0] = sizes_idx_1 + nwhile;
              Xbb->size[1] = b_loop_ub;
              emxEnsureCapacity_real_T(Xbb, i);
              iniseq_data = Xbb->data;
              for (i = 0; i < b_loop_ub; i++) {
                for (i1 = 0; i1 < sizes_idx_1; i1++) {
                  iniseq_data[i1 + Xbb->size[0] * i] =
                      Xb_data[i1 + sizes_idx_1 * i];
                }
              }
              for (i = 0; i < b_loop_ub; i++) {
                for (i1 = 0; i1 < nwhile; i1++) {
                  iniseq_data[sizes_idx_1 + Xbb->size[0] * i] =
                      bsbstepdef_data[nwhile * i];
                }
              }
              sizes_idx_1 = local_rank(Xbb);
              if (sizes_idx_1 == (int)p) {
                sizes_idx_1 = 0;
                b_i++;
              } else {
                if (1 > Xbb->size[0] - 1) {
                  loop_ub = 0;
                } else {
                  loop_ub = Xbb->size[0] - 1;
                }
                i = c_y->size[0] * c_y->size[1];
                c_y->size[0] = 1;
                c_y->size[1] = loop_ub + 1;
                emxEnsureCapacity_real_T(c_y, i);
                bsbstepdef_data = c_y->data;
                for (i = 0; i < loop_ub; i++) {
                  bsbstepdef_data[i] = b_data[i];
                }
                bsbstepdef_data[loop_ub] = ncl_data[b_i];
                loop_ub = c_y->size[1];
                for (i = 0; i < loop_ub; i++) {
                  b_data[i] = bsbstepdef_data[i];
                }
                if (1 > Xbb->size[0]) {
                  loop_ub = 0;
                } else {
                  loop_ub = Xbb->size[0];
                }
                b_loop_ub = b_X->size[1];
                i = Xb->size[0] * Xb->size[1];
                Xb->size[0] = loop_ub;
                Xb->size[1] = b_X->size[1];
                emxEnsureCapacity_real_T(Xb, i);
                Xb_data = Xb->data;
                for (i = 0; i < b_loop_ub; i++) {
                  for (i1 = 0; i1 < loop_ub; i1++) {
                    Xb_data[i1 + Xb->size[0] * i] =
                        b_X_data[((int)b_data[i1] + b_X->size[0] * i) - 1];
                  }
                }
                if (1 > Xbb->size[0]) {
                  loop_ub = 0;
                } else {
                  loop_ub = Xbb->size[0];
                }
                i = e->size[0];
                e->size[0] = loop_ub;
                emxEnsureCapacity_real_T(e, i);
                e_data = e->data;
                for (i = 0; i < loop_ub; i++) {
                  e_data[i] = b_data[i];
                }
                setdiffFS(seq, e, ncl);
                ncl_data = ncl->data;
                sizes_idx_1 = 1;
                exitg2 = true;
              }
            }
          }
          /*  check how many observations produce a singular X matrix */
          if (1 > Xbb->size[0] - 1) {
            loop_ub = 0;
          } else {
            loop_ub = Xbb->size[0] - 1;
          }
          if (msg) {
            Rprintf("FSDA:FSRmdr,Rank problem in step %.0f\n", b_mm);
            //fflush(stdout);
          }
          i = mdr->size[0] * mdr->size[1];
          mdr->size[0] = loop_ub;
          mdr->size[1] = 1;
          emxEnsureCapacity_real_T(mdr, i);
          mdr_data = mdr->data;
          for (i = 0; i < loop_ub; i++) {
            mdr_data[i] = b_data[i];
          }
          i = Un->size[0] * Un->size[1];
          Un->size[0] = 1;
          Un->size[1] = 1;
          emxEnsureCapacity_real_T(Un, i);
          Un_data = Un->data;
          Un_data[0] = rtNaN;
          i = BB->size[0] * BB->size[1];
          BB->size[0] = 1;
          BB->size[1] = 1;
          emxEnsureCapacity_real_T(BB, i);
          BB_data = BB->data;
          BB_data[0] = rtNaN;
          i = Bols->size[0] * Bols->size[1];
          Bols->size[0] = 1;
          Bols->size[1] = 1;
          emxEnsureCapacity_real_T(Bols, i);
          Bols_data = Bols->data;
          Bols_data[0] = rtNaN;
          i = S2->size[0] * S2->size[1];
          S2->size[0] = 1;
          S2->size[1] = 1;
          emxEnsureCapacity_real_T(S2, i);
          S2_data = S2->data;
          S2_data[0] = rtNaN;
          exitg1 = 1;
        } else {
          Rprintf("Matrix without full rank at step m= %.0f\n", b_mm);
          //fflush(stdout);
          i = b_b->size[0];
          b_b->size[0] = blast->size[0];
          emxEnsureCapacity_real_T(b_b, i);
          b_data = b_b->data;
          loop_ub = blast->size[0];
          for (i = 0; i < loop_ub; i++) {
            b_data[i] = blast_data[i];
          }
          /*  disp([mm b']) */
          guard1 = true;
        }
        if (guard1) {
          mtimes(b_X, b_b, e);
          if (b_y->size[0] == e->size[0]) {
            i = e->size[0];
            e->size[0] = b_y->size[0];
            emxEnsureCapacity_real_T(e, i);
            e_data = e->data;
            loop_ub = b_y->size[0];
            for (i = 0; i < loop_ub; i++) {
              e_data[i] = b_y_data[i] - e_data[i];
            }
          } else {
            b_minus(e, b_y);
            e_data = e->data;
          }
          /*  e = vector of residual for all units using b estimated using
           * subset */
          loop_ub = e->size[0];
          for (i = 0; i < loop_ub; i++) {
            initdef = e_data[i];
            r_data[i + r->size[0]] = initdef * initdef;
          }
          if (b_mm >= init1) {
            /*  Store units belonging to the subset */
            if (boobsbsteps_data[(int)b_mm - 1]) {
              /*  OLD CODE */
              /*  intersect(mm,bsbsteps)==mm */
              loop_ub = b_bsb->size[0];
              for (i = 0; i < loop_ub; i++) {
                BB_data[((int)b_bsb_data[i] + BB->size[0] * ((int)ij - 1)) -
                        1] = b_bsb_data[i];
              }
              ij++;
            }
            if (Ra) {
              /*  Store beta coefficients if there is no rank problem */
              i = !(2.0 > p + 1.0);
              i1 = (int)((b_mm - init1) + 1.0) - 1;
              loop_ub = b_b->size[0];
              for (nwhile = 0; nwhile < loop_ub; nwhile++) {
                Bols_data[i1 + Bols->size[0] * (i + nwhile)] = b_data[nwhile];
              }
              /*  Compute and store estimate of sigma^2 */
              initdef = 0.0;
              loop_ub = resBSB->size[0];
              for (i = 0; i < loop_ub; i++) {
                initdef += resBSB_data[i] * resBSB_data[i];
              }
              S2_data[i1 + S2->size[0]] = initdef / (b_mm - p);
              /*  Store R2 */
              /*  S2(mm-init1+1,3)=1-var(resBSB)/var(yb); */
              initdef = blockedSummation(yb, yb->size[0]) / b_mm;
              i = b_b->size[0];
              b_b->size[0] = yb->size[0];
              emxEnsureCapacity_real_T(b_b, i);
              b_data = b_b->data;
              loop_ub = yb->size[0];
              for (i = 0; i < loop_ub; i++) {
                b_data[i] = yb_data[i] - initdef;
              }
              initdef = 0.0;
              loop_ub = resBSB->size[0];
              for (i = 0; i < loop_ub; i++) {
                initdef += resBSB_data[i] * resBSB_data[i];
              }
              b = 0.0;
              loop_ub = b_b->size[0];
              for (i = 0; i < loop_ub; i++) {
                b += b_data[i] * b_data[i];
              }
              S2_data[i1 + S2->size[0] * 2] = 1.0 - initdef / b;
              if (b_mm < n) {
                /*  Take minimum deletion residual among noBSB */
                /*  hi (the leverage for the units not belonging to the */
                /*  subset) is defined as follows */
                /*  hi=diag(X(ncl,:)*inv(Xb'*Xb)*(X(ncl,:))'); */
                /*  Take units not belonging to bsb */
                loop_ub = b_X->size[1];
                i = b_bsbsteps->size[0] * b_bsbsteps->size[1];
                b_bsbsteps->size[0] = ncl->size[0];
                b_bsbsteps->size[1] = b_X->size[1];
                emxEnsureCapacity_real_T(b_bsbsteps, i);
                b_bsbsteps_data = b_bsbsteps->data;
                for (i = 0; i < loop_ub; i++) {
                  b_loop_ub = ncl->size[0];
                  for (nwhile = 0; nwhile < b_loop_ub; nwhile++) {
                    b_bsbsteps_data[nwhile + b_bsbsteps->size[0] * i] =
                        b_X_data[((int)ncl_data[nwhile] + b_X->size[0] * i) -
                                 1];
                  }
                }
                /*  mmX=inv(mAm); */
                /*  hi = sum((Xncl*mmX).*Xncl,2); */
                c_mtimes(Xb, Xb, r6);
                mrdiv(b_bsbsteps, r6, r4);
                iniseq_data = r4->data;
                if ((r4->size[0] == b_bsbsteps->size[0]) &&
                    (r4->size[1] == b_bsbsteps->size[1])) {
                  i = r6->size[0] * r6->size[1];
                  r6->size[0] = r4->size[0];
                  r6->size[1] = r4->size[1];
                  emxEnsureCapacity_real_T(r6, i);
                  bsbstepdef_data = r6->data;
                  loop_ub = r4->size[0] * r4->size[1];
                  for (i = 0; i < loop_ub; i++) {
                    bsbstepdef_data[i] = iniseq_data[i] * b_bsbsteps_data[i];
                  }
                  sum(r6, b_b);
                  b_data = b_b->data;
                } else {
                  binary_expand_op(b_b, r4, b_bsbsteps);
                  b_data = b_b->data;
                }
                /* hiall=sum((X/mAm).*X,2); */
                if (bonflevout) {
                  thpmm_size[0] = threshlevoutX_size[0];
                  thpmm_size[1] = threshlevoutX_size[1];
                  loop_ub = threshlevoutX_size[0] * threshlevoutX_size[1];
                  for (i = 0; i < loop_ub; i++) {
                    initdef = threshlevoutX_data[0] * p / b_mm;
                  }
                  repelem((double *)&initdef, thpmm_size, n - b_mm, r6);
                  bsbstepdef_data = r6->data;
                  if (b_b->size[0] == r6->size[0]) {
                    i = unitstopenalize->size[0] * unitstopenalize->size[1];
                    unitstopenalize->size[0] = b_b->size[0];
                    unitstopenalize->size[1] = r6->size[1];
                    emxEnsureCapacity_boolean_T(unitstopenalize, i);
                    unitstopenalize_data = unitstopenalize->data;
                    loop_ub = r6->size[1];
                    for (i = 0; i < loop_ub; i++) {
                      b_loop_ub = b_b->size[0];
                      for (nwhile = 0; nwhile < b_loop_ub; nwhile++) {
                        unitstopenalize_data[nwhile +
                                             unitstopenalize->size[0] * i] =
                            (b_data[nwhile] >
                             bsbstepdef_data[nwhile + r6->size[0] * i]);
                      }
                    }
                  } else {
                    wb_binary_expand_op(unitstopenalize, b_b, r6);
                    unitstopenalize_data = unitstopenalize->data;
                  }
                  any(unitstopenalize, r5);
                  if (c_ifWhileCond(r5)) {
                    end = unitstopenalize->size[0] * unitstopenalize->size[1];
                    for (b_i = 0; b_i < end; b_i++) {
                      if (unitstopenalize_data[b_i]) {
                        b_data[b_i] = initdef;
                      }
                    }
                  }
                } else {
                  i = unitstopenalize->size[0] * unitstopenalize->size[1];
                  unitstopenalize->size[0] = 1;
                  unitstopenalize->size[1] = 1;
                  emxEnsureCapacity_boolean_T(unitstopenalize, i);
                  unitstopenalize_data = unitstopenalize->data;
                  unitstopenalize_data[0] = false;
                }
                if (ncl->size[0] == b_b->size[0]) {
                  i = ord->size[0] * ord->size[1];
                  ord->size[0] = ncl->size[0];
                  ord->size[1] = 2;
                  emxEnsureCapacity_real_T(ord, i);
                  iniseq_data = ord->data;
                  loop_ub = ncl->size[0];
                  for (i = 0; i < loop_ub; i++) {
                    iniseq_data[i] =
                        r_data[((int)ncl_data[i] + r->size[0]) - 1] /
                        (b_data[i] + 1.0);
                  }
                  loop_ub = ncl->size[0];
                  for (i = 0; i < loop_ub; i++) {
                    iniseq_data[i + ord->size[0]] =
                        e_data[(int)ncl_data[i] - 1];
                  }
                } else {
                  vb_binary_expand_op(ord, r, ncl, b_b, e);
                  iniseq_data = ord->data;
                }
                if (bonflevout) {
                  end = unitstopenalize->size[0] * unitstopenalize->size[1] - 1;
                  sizes_idx_1 = 0;
                  for (b_i = 0; b_i <= end; b_i++) {
                    if (unitstopenalize_data[b_i]) {
                      sizes_idx_1++;
                    }
                  }
                  i = truerownamestopenalize->size[0];
                  truerownamestopenalize->size[0] = sizes_idx_1;
                  emxEnsureCapacity_uint32_T(truerownamestopenalize, i);
                  truerownamestopenalize_data = truerownamestopenalize->data;
                  nwhile = 0;
                  for (b_i = 0; b_i <= end; b_i++) {
                    if (unitstopenalize_data[b_i]) {
                      truerownamestopenalize_data[nwhile] =
                          (unsigned int)ncl_data[b_i];
                      nwhile++;
                    }
                  }
                  /*  disp(ncl(unittopenalize)) */
                  i = e->size[0];
                  e->size[0] = truerownamestopenalize->size[0];
                  emxEnsureCapacity_real_T(e, i);
                  e_data = e->data;
                  loop_ub = truerownamestopenalize->size[0];
                  for (i = 0; i < loop_ub; i++) {
                    e_data[i] = r_data[((int)truerownamestopenalize_data[i] +
                                        r->size[0]) -
                                       1] *
                                1.0E+7;
                  }
                  loop_ub = e->size[0];
                  for (i = 0; i < loop_ub; i++) {
                    r_data[((int)truerownamestopenalize_data[i] + r->size[0]) -
                           1] = e_data[i];
                  }
                }
                /*  Store minimum deletion residual in matrix mdr */
                /*  selmdr=sortrows(ord,1); */
                initdef = S2_data[i1 + S2->size[0]];
                if (initdef == 0.0) {
                  c_sprintf((b_mm - init1) + 1.0);
                } else {
                  loop_ub = ord->size[0];
                  i = e->size[0];
                  e->size[0] = ord->size[0];
                  emxEnsureCapacity_real_T(e, i);
                  e_data = e->data;
                  for (i = 0; i < loop_ub; i++) {
                    e_data[i] = iniseq_data[i];
                  }
                  mdr_data[i1 + mdr->size[0]] =
                      sqrt(fabs(b_minimum(e)) / initdef);
                }
              }
              /* if mm<n */
            }
            /* ~RankProblem */
          }
          /* mm>=init1 */
          if (b_mm < n) {
            /*  store units forming old subset in vector oldbsb */
            i = oldbsbT->size[0];
            oldbsbT->size[0] = bsbT->size[0];
            emxEnsureCapacity_boolean_T(oldbsbT, i);
            unitstopenalize_data = oldbsbT->data;
            loop_ub = bsbT->size[0];
            for (i = 0; i < loop_ub; i++) {
              unitstopenalize_data[i] = bsbT_data[i];
            }
            /*  order the r_i */
            /*  units inside vector constr are forced to join the search in */
            /*  the final k steps */
            if ((constr->size[0] != 0) && (constr->size[1] != 0) &&
                (b_mm < n - (double)constr->size[0])) {
              i = iidx->size[0];
              iidx->size[0] = constr->size[0];
              emxEnsureCapacity_int32_T(iidx, i);
              iidx_data = iidx->data;
              loop_ub = constr->size[0];
              for (i = 0; i < loop_ub; i++) {
                iidx_data[i] = (int)constr_data[i];
              }
              loop_ub = iidx->size[0];
              for (i = 0; i < loop_ub; i++) {
                r_data[(iidx_data[i] + r->size[0]) - 1] = rtInf;
              }
            }
            /*  If internationaltrade is true residuals which have large of */
            /*  the final column of X (generally quantity) are reduced. Note */
            /*  that this guarantees that leverge units which have a large */
            /*  value of  X will tend to stay in the subset. */
            /*  In other words, we use the residuals as if we were regressing */
            /*  y/X (that is price) on the vector of ones. */
            if (!internationaltrade) {
              loop_ub = r->size[0];
              i = b_b->size[0];
              b_b->size[0] = r->size[0];
              emxEnsureCapacity_real_T(b_b, i);
              b_data = b_b->data;
              for (i = 0; i < loop_ub; i++) {
                b_data[i] = r_data[i + r->size[0]];
              }
              sort(b_b, iidx);
              iidx_data = iidx->data;
              i = b_b->size[0];
              b_b->size[0] = iidx->size[0];
              emxEnsureCapacity_real_T(b_b, i);
              b_data = b_b->data;
              loop_ub = iidx->size[0];
              for (i = 0; i < loop_ub; i++) {
                b_data[i] = iidx_data[i];
              }
            } else {
              if (r->size[0] == weight->size[0]) {
                loop_ub = r->size[0];
                i = b_b->size[0];
                b_b->size[0] = r->size[0];
                emxEnsureCapacity_real_T(b_b, i);
                b_data = b_b->data;
                for (i = 0; i < loop_ub; i++) {
                  b_data[i] = r_data[i + r->size[0]] / weight_data[i];
                }
              } else {
                jd_binary_expand_op(b_b, r, weight);
              }
              sort(b_b, iidx);
              iidx_data = iidx->data;
              i = b_b->size[0];
              b_b->size[0] = iidx->size[0];
              emxEnsureCapacity_real_T(b_b, i);
              b_data = b_b->data;
              loop_ub = iidx->size[0];
              for (i = 0; i < loop_ub; i++) {
                b_data[i] = iidx_data[i];
              }
            }
            /*  bsb= units forming the new  subset */
            sizes_idx_1 = (int)(b_mm + 1.0);
            i = b_bsb->size[0];
            b_bsb->size[0] = (int)(b_mm + 1.0);
            emxEnsureCapacity_real_T(b_bsb, i);
            b_bsb_data = b_bsb->data;
            for (i = 0; i < sizes_idx_1; i++) {
              b_bsb_data[i] = b_data[i];
            }
            i = bsbT->size[0];
            bsbT->size[0] = (int)n;
            emxEnsureCapacity_boolean_T(bsbT, i);
            bsbT_data = bsbT->data;
            for (i = 0; i < loop_ub_tmp; i++) {
              bsbT_data[i] = false;
            }
            i = iidx->size[0];
            iidx->size[0] = (int)(b_mm + 1.0);
            emxEnsureCapacity_int32_T(iidx, i);
            iidx_data = iidx->data;
            for (i = 0; i < sizes_idx_1; i++) {
              iidx_data[i] = (int)b_data[i];
            }
            loop_ub = iidx->size[0];
            for (i = 0; i < loop_ub; i++) {
              bsbT_data[iidx_data[i] - 1] = true;
            }
            loop_ub = b_X->size[1];
            i = Xb->size[0] * Xb->size[1];
            Xb->size[0] = (int)(b_mm + 1.0);
            Xb->size[1] = b_X->size[1];
            emxEnsureCapacity_real_T(Xb, i);
            Xb_data = Xb->data;
            for (i = 0; i < loop_ub; i++) {
              for (i1 = 0; i1 < sizes_idx_1; i1++) {
                Xb_data[i1 + Xb->size[0] * i] =
                    b_X_data[((int)b_data[i1] + b_X->size[0] * i) - 1];
              }
            }
            /*  subset of X */
            i = yb->size[0];
            yb->size[0] = (int)(b_mm + 1.0);
            emxEnsureCapacity_real_T(yb, i);
            yb_data = yb->data;
            for (i = 0; i < sizes_idx_1; i++) {
              yb_data[i] = b_y_data[(int)b_data[i] - 1];
            }
            /*  subset of y */
            if (b_mm >= init1) {
              /*  unit = vector containing units which just entered subset; */
              /*  unit=setdiff(bsb,oldbsb); */
              /*  new instruction to find unit */
              if (bsbT->size[0] == oldbsbT->size[0]) {
                i = oldbsbT->size[0];
                oldbsbT->size[0] = bsbT->size[0];
                emxEnsureCapacity_boolean_T(oldbsbT, i);
                unitstopenalize_data = oldbsbT->data;
                loop_ub = bsbT->size[0];
                for (i = 0; i < loop_ub; i++) {
                  unitstopenalize_data[i] =
                      (bsbT_data[i] && (!unitstopenalize_data[i]));
                }
              } else {
                ub_binary_expand_op(oldbsbT, bsbT);
                unitstopenalize_data = oldbsbT->data;
              }
              end = oldbsbT->size[0] - 1;
              sizes_idx_1 = 0;
              for (b_i = 0; b_i <= end; b_i++) {
                if (unitstopenalize_data[b_i]) {
                  sizes_idx_1++;
                }
              }
              i = unit->size[0];
              unit->size[0] = sizes_idx_1;
              emxEnsureCapacity_real_T(unit, i);
              iniseq_data = unit->data;
              nwhile = 0;
              for (b_i = 0; b_i <= end; b_i++) {
                if (unitstopenalize_data[b_i]) {
                  iniseq_data[nwhile] = seq_data[b_i];
                  nwhile++;
                }
              }
              /*  If the interchange involves more than 10 units, store only the
               */
              /*  first 10. */
              if (unit->size[0] <= 10) {
                if (2 > unit->size[0] + 1) {
                  i = -1;
                  i1 = -1;
                } else {
                  i = 0;
                  i1 = unit->size[0];
                }
                nwhile = (int)((b_mm - init1) + 1.0) - 1;
                sizes_idx_1 = i1 - i;
                for (i1 = 0; i1 < sizes_idx_1; i1++) {
                  Un_data[nwhile + Un->size[0] * ((i + i1) + 1)] =
                      iniseq_data[i1];
                }
              } else if (msg) {
                int2str(b_mm, c_mm.data, c_mm.size);
                int2str(unit->size[0], c_mm.data, c_mm.size);
                i = (int)((b_mm - init1) + 1.0) - 1;
                for (i1 = 0; i1 < 10; i1++) {
                  Un_data[i + Un->size[0] * (i1 + 1)] = iniseq_data[i1];
                }
              }
            }
            if (b_mm < n - 1.0) {
              if ((constr->size[0] != 0) && (constr->size[1] != 0) &&
                  (b_mm < (n - (double)constr->size[0]) - 1.0)) {
                /*  disp(mm) */
                if (b_mm + 2.0 > n) {
                  i = 0;
                  i1 = 0;
                } else {
                  i = (int)(b_mm + 2.0) - 1;
                  i1 = (int)n;
                }
                /*  ncl= units forming the new noclean */
                nwhile = constr->size[0];
                sizes_idx_1 = i1 - i;
                for (i1 = 0; i1 < sizes_idx_1; i1++) {
                  b_data[i1] = b_data[i + i1];
                }
                i = b_b->size[0];
                b_b->size[0] = sizes_idx_1;
                emxEnsureCapacity_real_T(b_b, i);
                b_constr = *constr;
                b_n = nwhile;
                b_constr.size = &b_n;
                b_constr.numDimensions = 1;
                setdiffFS(b_b, &b_constr, ncl);
                ncl_data = ncl->data;
              } else {
                if (b_mm + 2.0 > n) {
                  i = 0;
                  i1 = 0;
                } else {
                  i = (int)(b_mm + 2.0) - 1;
                  i1 = (int)n;
                }
                loop_ub = i1 - i;
                i1 = ncl->size[0];
                ncl->size[0] = loop_ub;
                emxEnsureCapacity_real_T(ncl, i1);
                ncl_data = ncl->data;
                for (i1 = 0; i1 < loop_ub; i1++) {
                  ncl_data[i1] = b_data[i + i1];
                }
                /*  ncl= units forming the new noclean */
              }
            }
          }
          /*  if mm<n */
          mm++;
        }
      } else {
        /*  for mm=ini0:n loop */
        /*  Plot minimum deletion residual with 1%, 50% and 99% envelopes */
        /*  rank check */
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  emxFree_real_T(&r6);
  emxFree_boolean_T(&r5);
  emxFree_real_T(&r4);
  emxFree_int32_T(&iidx);
  emxFree_real_T(&c_y);
  emxFree_real_T(&b_X);
  emxFree_real_T(&b_y);
  emxFree_real_T(&unit);
  emxFree_boolean_T(&oldbsbT);
  emxFree_uint32_T(&truerownamestopenalize);
  emxFree_real_T(&ord);
  emxFree_boolean_T(&unitstopenalize);
  emxFree_real_T(&e);
  emxFree_real_T(&b_b);
  emxFree_real_T(&resBSB);
  emxFree_real_T(&Xbb);
  emxFree_real_T(&blast);
  emxFree_boolean_T(&boobsbsteps);
  emxFree_real_T(&r);
  emxFree_real_T(&ncl);
  emxFree_real_T(&seq);
  emxFree_boolean_T(&bsbT);
  emxFree_real_T(&weight);
  emxFree_real_T(&b_bsbsteps);
  emxFree_real_T(&yb);
  emxFree_real_T(&Xb);
  emxFree_real_T(&b_bsb);
}

/* End of code generation (FSRmdr_wrapper.c) */
