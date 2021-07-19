/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ScoreYJ.c
 *
 * Code generation for function 'ScoreYJ'
 *
 */

/* Include files */
#include "ScoreYJ.h"
#include "FSRfan_wrapper_data.h"
#include "FSRfan_wrapper_emxutil.h"
#include "FSRfan_wrapper_types.h"
#include "abs.h"
#include "eml_mtimes_helper.h"
#include "exp.h"
#include "log.h"
#include "mldivide.h"
#include "mtimes.h"
#include "norm.h"
#include "rt_nonfinite.h"
#include "sign.h"
#include "sum.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo sr_emlrtRSI = {
    189,                                               /* lineNo */
    "ScoreYJ",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pathName */
};

static emlrtRSInfo tr_emlrtRSI = {
    192,                                               /* lineNo */
    "ScoreYJ",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pathName */
};

static emlrtRSInfo ur_emlrtRSI = {
    193,                                               /* lineNo */
    "ScoreYJ",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pathName */
};

static emlrtRSInfo vr_emlrtRSI = {
    212,                                               /* lineNo */
    "ScoreYJ",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pathName */
};

static emlrtRSInfo wr_emlrtRSI = {
    227,                                               /* lineNo */
    "ScoreYJ",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pathName */
};

static emlrtRSInfo xr_emlrtRSI = {
    242,                                               /* lineNo */
    "ScoreYJ",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pathName */
};

static emlrtRSInfo yr_emlrtRSI = {
    243,                                               /* lineNo */
    "ScoreYJ",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pathName */
};

static emlrtRSInfo as_emlrtRSI = {
    245,                                               /* lineNo */
    "ScoreYJ",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pathName */
};

static emlrtRSInfo bs_emlrtRSI = {
    249,                                               /* lineNo */
    "ScoreYJ",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pathName */
};

static emlrtRSInfo cs_emlrtRSI = {
    252,                                               /* lineNo */
    "ScoreYJ",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pathName */
};

static emlrtRSInfo ds_emlrtRSI = {
    253,                                               /* lineNo */
    "ScoreYJ",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pathName */
};

static emlrtRSInfo es_emlrtRSI = {
    255,                                               /* lineNo */
    "ScoreYJ",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pathName */
};

static emlrtRSInfo fs_emlrtRSI = {
    259,                                               /* lineNo */
    "ScoreYJ",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pathName */
};

static emlrtECInfo t_emlrtECI = {
    -1,                                                /* nDims */
    189,                                               /* lineNo */
    12,                                                /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtBCInfo wd_emlrtBCI = {
    -1,                                                 /* iFirst */
    -1,                                                 /* iLast */
    186,                                                /* lineNo */
    12,                                                 /* colNo */
    "y",                                                /* aName */
    "ScoreYJ",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m", /* pName */
    0                                                   /* checkKind */
};

static emlrtBCInfo xd_emlrtBCI = {
    -1,                                                 /* iFirst */
    -1,                                                 /* iLast */
    187,                                                /* lineNo */
    9,                                                  /* colNo */
    "y",                                                /* aName */
    "ScoreYJ",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m", /* pName */
    0                                                   /* checkKind */
};

static emlrtECInfo u_emlrtECI = {
    -1,                                                /* nDims */
    219,                                               /* lineNo */
    9,                                                 /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtBCInfo yd_emlrtBCI = {
    -1,                                                 /* iFirst */
    -1,                                                 /* iLast */
    219,                                                /* lineNo */
    9,                                                  /* colNo */
    "z",                                                /* aName */
    "ScoreYJ",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m", /* pName */
    0                                                   /* checkKind */
};

static emlrtECInfo v_emlrtECI = {
    -1,                                                /* nDims */
    214,                                               /* lineNo */
    9,                                                 /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtECInfo w_emlrtECI = {
    -1,                                                /* nDims */
    220,                                               /* lineNo */
    20,                                                /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtECInfo x_emlrtECI = {
    -1,                                                /* nDims */
    216,                                               /* lineNo */
    23,                                                /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtBCInfo ae_emlrtBCI = {
    -1,                                                 /* iFirst */
    -1,                                                 /* iLast */
    214,                                                /* lineNo */
    9,                                                  /* colNo */
    "z",                                                /* aName */
    "ScoreYJ",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m", /* pName */
    0                                                   /* checkKind */
};

static emlrtECInfo y_emlrtECI = {
    -1,                                                /* nDims */
    220,                                               /* lineNo */
    9,                                                 /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtECInfo ab_emlrtECI = {
    -1,                                                /* nDims */
    216,                                               /* lineNo */
    9,                                                 /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtBCInfo be_emlrtBCI = {
    -1,                                                 /* iFirst */
    -1,                                                 /* iLast */
    220,                                                /* lineNo */
    9,                                                  /* colNo */
    "w",                                                /* aName */
    "ScoreYJ",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m", /* pName */
    0                                                   /* checkKind */
};

static emlrtBCInfo ce_emlrtBCI = {
    -1,                                                 /* iFirst */
    -1,                                                 /* iLast */
    216,                                                /* lineNo */
    9,                                                  /* colNo */
    "w",                                                /* aName */
    "ScoreYJ",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m", /* pName */
    0                                                   /* checkKind */
};

static emlrtECInfo bb_emlrtECI = {
    -1,                                                /* nDims */
    237,                                               /* lineNo */
    9,                                                 /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtBCInfo de_emlrtBCI = {
    -1,                                                 /* iFirst */
    -1,                                                 /* iLast */
    237,                                                /* lineNo */
    9,                                                  /* colNo */
    "z",                                                /* aName */
    "ScoreYJ",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m", /* pName */
    0                                                   /* checkKind */
};

static emlrtECInfo cb_emlrtECI = {
    -1,                                                /* nDims */
    230,                                               /* lineNo */
    9,                                                 /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtECInfo db_emlrtECI = {
    -1,                                                /* nDims */
    238,                                               /* lineNo */
    17,                                                /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtECInfo eb_emlrtECI = {
    -1,                                                /* nDims */
    233,                                               /* lineNo */
    20,                                                /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtBCInfo ee_emlrtBCI = {
    -1,                                                 /* iFirst */
    -1,                                                 /* iLast */
    230,                                                /* lineNo */
    9,                                                  /* colNo */
    "z",                                                /* aName */
    "ScoreYJ",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m", /* pName */
    0                                                   /* checkKind */
};

static emlrtECInfo fb_emlrtECI = {
    -1,                                                /* nDims */
    238,                                               /* lineNo */
    9,                                                 /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtECInfo gb_emlrtECI = {
    -1,                                                /* nDims */
    233,                                               /* lineNo */
    9,                                                 /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtBCInfo fe_emlrtBCI = {
    -1,                                                 /* iFirst */
    -1,                                                 /* iLast */
    238,                                                /* lineNo */
    9,                                                  /* colNo */
    "w",                                                /* aName */
    "ScoreYJ",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m", /* pName */
    0                                                   /* checkKind */
};

static emlrtBCInfo ge_emlrtBCI = {
    -1,                                                 /* iFirst */
    -1,                                                 /* iLast */
    233,                                                /* lineNo */
    9,                                                  /* colNo */
    "w",                                                /* aName */
    "ScoreYJ",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m", /* pName */
    0                                                   /* checkKind */
};

static emlrtECInfo hb_emlrtECI = {
    -1,                                                /* nDims */
    243,                                               /* lineNo */
    18,                                                /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtECInfo ib_emlrtECI = {
    -1,                                                /* nDims */
    253,                                               /* lineNo */
    17,                                                /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtBCInfo he_emlrtBCI = {
    -1,                                                 /* iFirst */
    -1,                                                 /* iLast */
    259,                                                /* lineNo */
    22,                                                 /* colNo */
    "beta",                                             /* aName */
    "ScoreYJ",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m", /* pName */
    0                                                   /* checkKind */
};

static emlrtRTEInfo fj_emlrtRTEI = {
    189,                                               /* lineNo */
    12,                                                /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtRTEInfo gj_emlrtRTEI = {
    1,                                                 /* lineNo */
    18,                                                /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtRTEInfo hj_emlrtRTEI = {
    198,                                               /* lineNo */
    5,                                                 /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtRTEInfo ij_emlrtRTEI = {
    199,                                               /* lineNo */
    5,                                                 /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtRTEInfo jj_emlrtRTEI = {
    218,                                               /* lineNo */
    9,                                                 /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtRTEInfo kj_emlrtRTEI = {
    212,                                               /* lineNo */
    9,                                                 /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtRTEInfo lj_emlrtRTEI = {
    213,                                               /* lineNo */
    9,                                                 /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtRTEInfo mj_emlrtRTEI = {
    220,                                               /* lineNo */
    31,                                                /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtRTEInfo nj_emlrtRTEI = {
    236,                                               /* lineNo */
    9,                                                 /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtRTEInfo oj_emlrtRTEI = {
    227,                                               /* lineNo */
    9,                                                 /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtRTEInfo pj_emlrtRTEI = {
    229,                                               /* lineNo */
    9,                                                 /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtRTEInfo qj_emlrtRTEI = {
    238,                                               /* lineNo */
    27,                                                /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtRTEInfo rj_emlrtRTEI = {
    238,                                               /* lineNo */
    17,                                                /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtRTEInfo sj_emlrtRTEI = {
    249,                                               /* lineNo */
    5,                                                 /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtRTEInfo tj_emlrtRTEI = {
    253,                                               /* lineNo */
    17,                                                /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtRTEInfo uj_emlrtRTEI = {
    190,                                               /* lineNo */
    1,                                                 /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

static emlrtRTEInfo vj_emlrtRTEI = {
    191,                                               /* lineNo */
    1,                                                 /* colNo */
    "ScoreYJ",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\ScoreYJ.m" /* pName */
};

/* Function Definitions */
void ScoreYJ(const emlrtStack *sp, const emxArray_real_T *y,
             const emxArray_real_T *X, real_T varargin_2,
             real_T outSC_Score_data[], int32_T *outSC_Score_size,
             real_T *outSC_Lik)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *Xw;
  emxArray_real_T *r;
  emxArray_real_T *vneg;
  emxArray_real_T *vpos;
  emxArray_real_T *vposlai;
  emxArray_real_T *w;
  emxArray_real_T *z;
  emxArray_real_T *znonnegs;
  real_T G;
  real_T Glaminus1;
  real_T k;
  real_T logG;
  real_T q;
  int32_T b_i;
  int32_T end;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int8_T sizes_idx_1;
  boolean_T empty_non_axis_sizes;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /* Computes the score test for Yeo and Johnson transformation */
  /*  */
  /* <a href="matlab: docsearchFS('ScoreYJ')">Link to the help function</a> */
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
  /*                Missing values (NaN's) and infinite values (Inf's) are
   * allowed, */
  /*                since observations (rows) with missing or infinite values
   * will */
  /*                automatically be excluded from the computations. */
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
  /*            la  :transformation parameter. Vector. It specifies for which
   * values of the */
  /*                  transformation parameter it is necessary to compute the */
  /*                  score test. */
  /*                  Default value of lambda is la=[-1 -0.5 0 0.5 1]; that */
  /*                  is the five most common values of lambda */
  /*                Example - 'la',[0 0.5] */
  /*                Data Types - double */
  /*  */
  /*            Lik : likelihood for the augmented model. Boolean. */
  /*                    If true the value of the likelihood for the augmented */
  /*                    model will be produced */
  /*                  else (default) only the value of the score test will be */
  /*                  given */
  /*                Example - 'Lik',false */
  /*                Data Types - logical */
  /*  */
  /*        nocheck : Check input arguments. Boolean. */
  /*                If nocheck is equal to true no check is performed on */
  /*                  matrix y and matrix X. Notice that y and X are left */
  /*                  unchanged. In other words the additional column of ones */
  /*                  for the intercept is not added. As default nocheck=false.
   */
  /*                Example - 'nocheck',true */
  /*                Data Types - boolean */
  /*  */
  /*   Output: */
  /*  */
  /*   The output consists of a structure 'outSC' containing the following
   * fields: */
  /*  */
  /*         outSC.Score    =    score test. Scalar. t test for additional */
  /*                             constructed variable */
  /*         outSC.Lik      =    value of the likelihood. Scalar. This output */
  /*                            is produced only if input value Lik =1 */
  /*  */
  /*  See also: FSRfan, Score, normBoxCox, normYJ, ScoreYJpn */
  /*  */
  /*  References: */
  /*  */
  /*  Yeo, I.K. and Johnson, R. (2000), A new family of power */
  /*  transformations to improve normality or symmetry, "Biometrika", Vol. 87,
   */
  /*  pp. 954-959. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('ScoreYJ')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples */
  /* { */
  /*     % Score with all default options for the wool data. */
  /*     % Load the wool data. */
  /*     XX=load('wool.txt'); */
  /*     y=XX(:,end); */
  /*     X=XX(:,1:end-1); */
  /*     % Score test using the five most common values of lambda */
  /*     [outSc]=ScoreYJ(y,X); */
  /*     disp(outSc.Score) */
  /* } */
  /* { */
  /*     % Score with optional arguments. */
  /*     % Loyalty cards data. */
  /*     load('loyalty.txt'); */
  /*     y=loyalty(:,4); */
  /*     X=loyalty(:,1:3); */
  /*     % la = vector containing the values of the transformation */
  /*     % parameters which have to be tested */
  /*     la=[0.25 1/3 0.4 0.5]; */
  /*     [outSc]=ScoreYJ(y,X,'la',la,'intercept',true); */
  /* } */
  /* { */
  /*     % Compare Score test using BoxCox and YeoJohnson for the wool data. */
  /*     % Wool data. */
  /*     XX=load('wool.txt'); */
  /*     y=XX(:,end); */
  /*     X=XX(:,1:end-1); */
  /*     % Define vector of transformation parameters */
  /*     la=[-1:0.01:1]; */
  /*     % Score test using YeoJohnson transformation */
  /*     [outYJ]=ScoreYJ(y,X,'la',la); */
  /*     % Score test using YeoJohnson transformation */
  /*     [outBC]=Score(y,X,'la',la); */
  /*     plot(la',[outBC.Score outYJ.Score]) */
  /*     xlabel('\lambda') */
  /*     ylabel('Value of the score test') */
  /*     legend({'BoxCox' 'YeoJohnson'}) */
  /* } */
  /* { */
  /*     %% Score test using Darwin data given by Yeo and Yohnson. */
  /*      y=[6.1, -8.4, 1.0, 2.0,
   * 0.7, 2.9, 3.5, 5.1, 1.8, 3.6, 7.0, 3.0, 9.3, 7.5 -6.0]'; */
  /*      n=length(y); */
  /*      X=ones(n,1); */
  /*      la=-1:0.01:2.5; */
  /*      % Given that there are no explanatory variables the test must be */
  /*      % called with intercept false */
  /*      out=ScoreYJ(y,X,'intercept',false,'la',la,'Lik',1); */
  /*      plot(la',out.Score) */
  /*      xax=axis; */
  /*      line(xax(1:2),zeros(1,2)) */
  /*      xlabel('\lambda') */
  /*      ylabel('Value of the score test') */
  /*      title('Value of the score test is 0 in correspondence of $\hat \lambda
   * =1.305$','Interpreter','Latex') */
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
  /*  Write in structure 'options' the options chosen by the user */
  /*  mingreater0=options.mingreater0; */
  /*   Sc= vector which contains the t test for constructed variables for the */
  /*   values of \lambda specified in vector la */
  /*  Lik is a vector which contains the likelihoods for diff. values of la */
  /*  value related to the Jacobian */
  end = y->size[0];
  for (i = 0; i < end; i++) {
    if ((y->data[i] >= 0.0) && (i + 1 > y->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, y->size[0], &wd_emlrtBCI,
                                    (emlrtCTX)sp);
    }
  }
  end = y->size[0];
  for (i = 0; i < end; i++) {
    if ((!(y->data[i] >= 0.0)) && (i + 1 > y->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, y->size[0], &xd_emlrtBCI,
                                    (emlrtCTX)sp);
    }
  }
  emxInit_real_T(sp, &r, 1, &fj_emlrtRTEI, true);
  b_i = r->size[0];
  r->size[0] = y->size[0];
  emxEnsureCapacity_real_T(sp, r, b_i, &fj_emlrtRTEI);
  loop_ub = y->size[0];
  for (b_i = 0; b_i < loop_ub; b_i++) {
    r->data[b_i] = y->data[b_i];
  }
  emxInit_real_T(sp, &vposlai, 1, &kj_emlrtRTEI, true);
  st.site = &sr_emlrtRSI;
  b_sign(&st, r);
  st.site = &sr_emlrtRSI;
  b_abs(&st, y, vposlai);
  loop_ub = vposlai->size[0];
  for (b_i = 0; b_i < loop_ub; b_i++) {
    vposlai->data[b_i]++;
  }
  st.site = &sr_emlrtRSI;
  b_log(&st, vposlai);
  if (r->size[0] != vposlai->size[0]) {
    emlrtSizeEqCheck1DR2012b(r->size[0], vposlai->size[0], &t_emlrtECI,
                             (emlrtCTX)sp);
  }
  loop_ub = r->size[0];
  for (b_i = 0; b_i < loop_ub; b_i++) {
    r->data[b_i] *= vposlai->data[b_i];
  }
  st.site = &sr_emlrtRSI;
  logG = sum(&st, r) / (real_T)X->size[0];
  end = y->size[0] - 1;
  loop_ub = 0;
  for (i = 0; i <= end; i++) {
    if (!(y->data[i] >= 0.0)) {
      loop_ub++;
    }
  }
  emxInit_real_T(sp, &vneg, 1, &uj_emlrtRTEI, true);
  b_i = vneg->size[0];
  vneg->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, vneg, b_i, &gj_emlrtRTEI);
  loop_ub = 0;
  for (i = 0; i <= end; i++) {
    if (!(y->data[i] >= 0.0)) {
      vneg->data[loop_ub] = -y->data[i] + 1.0;
      loop_ub++;
    }
  }
  end = y->size[0] - 1;
  loop_ub = 0;
  for (i = 0; i <= end; i++) {
    if (y->data[i] >= 0.0) {
      loop_ub++;
    }
  }
  emxInit_real_T(sp, &vpos, 1, &vj_emlrtRTEI, true);
  b_i = vpos->size[0];
  vpos->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, vpos, b_i, &gj_emlrtRTEI);
  loop_ub = 0;
  for (i = 0; i <= end; i++) {
    if (y->data[i] >= 0.0) {
      vpos->data[loop_ub] = y->data[i] + 1.0;
      loop_ub++;
    }
  }
  emxInit_real_T(sp, &z, 1, &hj_emlrtRTEI, true);
  emxInit_real_T(sp, &w, 1, &ij_emlrtRTEI, true);
  st.site = &tr_emlrtRSI;
  b_log(&st, vpos);
  st.site = &ur_emlrtRSI;
  b_log(&st, vneg);
  G = muDoubleScalarExp(logG);
  /*  loop over the values of \lambda */
  *outSC_Score_size = 1;
  loop_ub = y->size[0];
  Glaminus1 = muDoubleScalarExp((varargin_2 - 1.0) * logG);
  b_i = z->size[0];
  z->size[0] = y->size[0];
  emxEnsureCapacity_real_T(sp, z, b_i, &hj_emlrtRTEI);
  /*  Initialized z and w */
  b_i = w->size[0];
  w->size[0] = y->size[0];
  emxEnsureCapacity_real_T(sp, w, b_i, &ij_emlrtRTEI);
  for (b_i = 0; b_i < loop_ub; b_i++) {
    z->data[b_i] = y->data[b_i];
    w->data[b_i] = y->data[b_i];
  }
  /*  Glaminus1=G^(lai-1); */
  /*  Define transformed and constructed variable */
  /*  transformation for non negative values */
  /*  Compute transformed values and constructed variables depending on lambda
   */
  /*  transformation for non negative values */
  emxInit_real_T(sp, &znonnegs, 1, &lj_emlrtRTEI, true);
  if (muDoubleScalarAbs(varargin_2) > 1.0E-8) {
    /*  if la is different from 0 */
    q = varargin_2 * Glaminus1;
    /*  vposlai=vpos.^lai; */
    loop_ub = vpos->size[0];
    b_i = vposlai->size[0];
    vposlai->size[0] = vpos->size[0];
    emxEnsureCapacity_real_T(sp, vposlai, b_i, &kj_emlrtRTEI);
    for (b_i = 0; b_i < loop_ub; b_i++) {
      vposlai->data[b_i] = varargin_2 * vpos->data[b_i];
    }
    st.site = &vr_emlrtRSI;
    b_exp(&st, vposlai);
    b_i = znonnegs->size[0];
    znonnegs->size[0] = vposlai->size[0];
    emxEnsureCapacity_real_T(sp, znonnegs, b_i, &lj_emlrtRTEI);
    loop_ub = vposlai->size[0];
    for (b_i = 0; b_i < loop_ub; b_i++) {
      znonnegs->data[b_i] = (vposlai->data[b_i] - 1.0) / q;
    }
    end = y->size[0];
    loop_ub = 0;
    for (i = 0; i < end; i++) {
      if (y->data[i] >= 0.0) {
        loop_ub++;
      }
    }
    if (loop_ub != znonnegs->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(loop_ub, znonnegs->size[0], &v_emlrtECI,
                                      (emlrtCTX)sp);
    }
    end = y->size[0];
    loop_ub = 0;
    for (i = 0; i < end; i++) {
      if (y->data[i] >= 0.0) {
        if (i + 1 > z->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, z->size[0], &ae_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        z->data[i] = znonnegs->data[loop_ub];
        loop_ub++;
      }
    }
    k = 1.0 / varargin_2 + logG;
    if (vposlai->size[0] != vpos->size[0]) {
      emlrtSizeEqCheck1DR2012b(vposlai->size[0], vpos->size[0], &x_emlrtECI,
                               (emlrtCTX)sp);
    }
    loop_ub = vposlai->size[0];
    for (b_i = 0; b_i < loop_ub; b_i++) {
      vposlai->data[b_i] = (vposlai->data[b_i] * (vpos->data[b_i] - k) + k) / q;
    }
    end = y->size[0];
    loop_ub = 0;
    for (i = 0; i < end; i++) {
      if (y->data[i] >= 0.0) {
        loop_ub++;
      }
    }
    if (loop_ub != vposlai->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(loop_ub, vposlai->size[0], &ab_emlrtECI,
                                      (emlrtCTX)sp);
    }
    end = y->size[0];
    loop_ub = 0;
    for (i = 0; i < end; i++) {
      if (y->data[i] >= 0.0) {
        if (i + 1 > w->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, w->size[0], &ce_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        w->data[i] = vposlai->data[loop_ub];
        loop_ub++;
      }
    }
  } else {
    /*  if la is equal to 0 */
    loop_ub = vpos->size[0];
    b_i = znonnegs->size[0];
    znonnegs->size[0] = vpos->size[0];
    emxEnsureCapacity_real_T(sp, znonnegs, b_i, &jj_emlrtRTEI);
    for (b_i = 0; b_i < loop_ub; b_i++) {
      znonnegs->data[b_i] = G * vpos->data[b_i];
    }
    end = y->size[0];
    loop_ub = 0;
    for (i = 0; i < end; i++) {
      if (y->data[i] >= 0.0) {
        loop_ub++;
      }
    }
    if (loop_ub != znonnegs->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(loop_ub, znonnegs->size[0], &u_emlrtECI,
                                      (emlrtCTX)sp);
    }
    end = y->size[0];
    loop_ub = 0;
    for (i = 0; i < end; i++) {
      if (y->data[i] >= 0.0) {
        if (i + 1 > z->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, z->size[0], &yd_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        z->data[i] = znonnegs->data[loop_ub];
        loop_ub++;
      }
    }
    loop_ub = vpos->size[0];
    b_i = r->size[0];
    r->size[0] = vpos->size[0];
    emxEnsureCapacity_real_T(sp, r, b_i, &mj_emlrtRTEI);
    for (b_i = 0; b_i < loop_ub; b_i++) {
      r->data[b_i] = vpos->data[b_i] / 2.0;
    }
    if (znonnegs->size[0] != r->size[0]) {
      emlrtSizeEqCheck1DR2012b(znonnegs->size[0], r->size[0], &w_emlrtECI,
                               (emlrtCTX)sp);
    }
    loop_ub = znonnegs->size[0];
    for (b_i = 0; b_i < loop_ub; b_i++) {
      znonnegs->data[b_i] *= r->data[b_i] - logG;
    }
    end = y->size[0];
    loop_ub = 0;
    for (i = 0; i < end; i++) {
      if (y->data[i] >= 0.0) {
        loop_ub++;
      }
    }
    if (loop_ub != znonnegs->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(loop_ub, znonnegs->size[0], &y_emlrtECI,
                                      (emlrtCTX)sp);
    }
    end = y->size[0];
    loop_ub = 0;
    for (i = 0; i < end; i++) {
      if (y->data[i] >= 0.0) {
        if (i + 1 > w->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, w->size[0], &be_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        w->data[i] = znonnegs->data[loop_ub];
        loop_ub++;
      }
    }
  }
  emxFree_real_T(&vpos);
  /*  Transformation and constructed variables for negative values */
  if (muDoubleScalarAbs(varargin_2 - 2.0) > 1.0E-8) {
    /*  la not equal 2 */
    /*  vnegtwomlambdai=vneg.^twomlambdai; */
    loop_ub = vneg->size[0];
    b_i = znonnegs->size[0];
    znonnegs->size[0] = vneg->size[0];
    emxEnsureCapacity_real_T(sp, znonnegs, b_i, &oj_emlrtRTEI);
    for (b_i = 0; b_i < loop_ub; b_i++) {
      znonnegs->data[b_i] = (2.0 - varargin_2) * vneg->data[b_i];
    }
    st.site = &wr_emlrtRSI;
    b_exp(&st, znonnegs);
    G = (2.0 - varargin_2) * Glaminus1;
    b_i = vposlai->size[0];
    vposlai->size[0] = znonnegs->size[0];
    emxEnsureCapacity_real_T(sp, vposlai, b_i, &pj_emlrtRTEI);
    loop_ub = znonnegs->size[0];
    for (b_i = 0; b_i < loop_ub; b_i++) {
      vposlai->data[b_i] = (1.0 - znonnegs->data[b_i]) / G;
    }
    end = y->size[0];
    loop_ub = 0;
    for (i = 0; i < end; i++) {
      if (!(y->data[i] >= 0.0)) {
        loop_ub++;
      }
    }
    if (loop_ub != vposlai->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(loop_ub, vposlai->size[0], &cb_emlrtECI,
                                      (emlrtCTX)sp);
    }
    end = y->size[0];
    loop_ub = 0;
    for (i = 0; i < end; i++) {
      if (!(y->data[i] >= 0.0)) {
        if (i + 1 > z->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, z->size[0], &ee_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        z->data[i] = vposlai->data[loop_ub];
        loop_ub++;
      }
    }
    k = logG - 1.0 / (2.0 - varargin_2);
    if (znonnegs->size[0] != vneg->size[0]) {
      emlrtSizeEqCheck1DR2012b(znonnegs->size[0], vneg->size[0], &eb_emlrtECI,
                               (emlrtCTX)sp);
    }
    loop_ub = znonnegs->size[0];
    for (b_i = 0; b_i < loop_ub; b_i++) {
      znonnegs->data[b_i] =
          (znonnegs->data[b_i] * (vneg->data[b_i] + k) - k) / G;
    }
    end = y->size[0];
    loop_ub = 0;
    for (i = 0; i < end; i++) {
      if (!(y->data[i] >= 0.0)) {
        loop_ub++;
      }
    }
    if (loop_ub != znonnegs->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(loop_ub, znonnegs->size[0], &gb_emlrtECI,
                                      (emlrtCTX)sp);
    }
    end = y->size[0];
    loop_ub = 0;
    for (i = 0; i < end; i++) {
      if (!(y->data[i] >= 0.0)) {
        if (i + 1 > w->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, w->size[0], &ge_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        w->data[i] = znonnegs->data[loop_ub];
        loop_ub++;
      }
    }
  } else {
    /*  la equals 2 */
    loop_ub = vneg->size[0];
    b_i = vposlai->size[0];
    vposlai->size[0] = vneg->size[0];
    emxEnsureCapacity_real_T(sp, vposlai, b_i, &nj_emlrtRTEI);
    for (b_i = 0; b_i < loop_ub; b_i++) {
      vposlai->data[b_i] = -vneg->data[b_i] / G;
    }
    end = y->size[0];
    loop_ub = 0;
    for (i = 0; i < end; i++) {
      if (!(y->data[i] >= 0.0)) {
        loop_ub++;
      }
    }
    if (loop_ub != vposlai->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(loop_ub, vposlai->size[0], &bb_emlrtECI,
                                      (emlrtCTX)sp);
    }
    end = y->size[0];
    loop_ub = 0;
    for (i = 0; i < end; i++) {
      if (!(y->data[i] >= 0.0)) {
        if (i + 1 > z->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, z->size[0], &de_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        z->data[i] = vposlai->data[loop_ub];
        loop_ub++;
      }
    }
    loop_ub = vneg->size[0];
    b_i = r->size[0];
    r->size[0] = vneg->size[0];
    emxEnsureCapacity_real_T(sp, r, b_i, &qj_emlrtRTEI);
    for (b_i = 0; b_i < loop_ub; b_i++) {
      r->data[b_i] = vneg->data[b_i] / 2.0;
    }
    loop_ub = vneg->size[0];
    if (vneg->size[0] != r->size[0]) {
      emlrtSizeEqCheck1DR2012b(vneg->size[0], r->size[0], &db_emlrtECI,
                               (emlrtCTX)sp);
    }
    b_i = r->size[0];
    r->size[0] = vneg->size[0];
    emxEnsureCapacity_real_T(sp, r, b_i, &rj_emlrtRTEI);
    for (b_i = 0; b_i < loop_ub; b_i++) {
      r->data[b_i] = vneg->data[b_i] * (r->data[b_i] + logG) / G;
    }
    end = y->size[0];
    loop_ub = 0;
    for (i = 0; i < end; i++) {
      if (!(y->data[i] >= 0.0)) {
        loop_ub++;
      }
    }
    if (loop_ub != r->size[0]) {
      emlrtSubAssignSizeCheck1dR2017a(loop_ub, r->size[0], &fb_emlrtECI,
                                      (emlrtCTX)sp);
    }
    end = y->size[0];
    loop_ub = 0;
    for (i = 0; i < end; i++) {
      if (!(y->data[i] >= 0.0)) {
        if (i + 1 > w->size[0]) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, w->size[0], &fe_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        w->data[i] = r->data[loop_ub];
        loop_ub++;
      }
    }
  }
  emxFree_real_T(&vneg);
  /*  Compute residual sum of squares for null (reduced) model */
  st.site = &xr_emlrtRSI;
  mldivide(&st, X, z, vposlai);
  st.site = &yr_emlrtRSI;
  b_st.site = &mb_emlrtRSI;
  dynamic_size_checks(&b_st, X, vposlai, X->size[1], vposlai->size[0]);
  b_st.site = &lb_emlrtRSI;
  mtimes(&b_st, X, vposlai, r);
  if (z->size[0] != r->size[0]) {
    emlrtSizeEqCheck1DR2012b(z->size[0], r->size[0], &hb_emlrtECI,
                             (emlrtCTX)sp);
  }
  /*  Sum of squares of residuals */
  st.site = &as_emlrtRSI;
  b_st.site = &il_emlrtRSI;
  /*  Define augmented X matrix for overall constructed variable */
  st.site = &bs_emlrtRSI;
  b_st.site = &de_emlrtRSI;
  if ((X->size[0] != 0) && (X->size[1] != 0)) {
    end = X->size[0];
  } else if (w->size[0] != 0) {
    end = w->size[0];
  } else {
    end = X->size[0];
  }
  c_st.site = &ee_emlrtRSI;
  if ((X->size[0] != end) && ((X->size[0] != 0) && (X->size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((w->size[0] != end) && (w->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (end == 0);
  if (empty_non_axis_sizes || ((X->size[0] != 0) && (X->size[1] != 0))) {
    loop_ub = X->size[1];
  } else {
    loop_ub = 0;
  }
  if (empty_non_axis_sizes || (w->size[0] != 0)) {
    sizes_idx_1 = 1;
  } else {
    sizes_idx_1 = 0;
  }
  emxInit_real_T(&b_st, &Xw, 2, &sj_emlrtRTEI, true);
  b_i = Xw->size[0] * Xw->size[1];
  Xw->size[0] = end;
  Xw->size[1] = loop_ub + sizes_idx_1;
  emxEnsureCapacity_real_T(&b_st, Xw, b_i, &sj_emlrtRTEI);
  for (b_i = 0; b_i < loop_ub; b_i++) {
    for (i1 = 0; i1 < end; i1++) {
      Xw->data[i1 + Xw->size[0] * b_i] = X->data[i1 + end * b_i];
    }
  }
  i = sizes_idx_1;
  for (b_i = 0; b_i < i; b_i++) {
    for (i1 = 0; i1 < end; i1++) {
      Xw->data[i1 + Xw->size[0] * loop_ub] = w->data[i1];
    }
  }
  emxFree_real_T(&w);
  /*  New code */
  st.site = &cs_emlrtRSI;
  mldivide(&st, Xw, z, znonnegs);
  st.site = &ds_emlrtRSI;
  b_st.site = &mb_emlrtRSI;
  dynamic_size_checks(&b_st, Xw, znonnegs, Xw->size[1], znonnegs->size[0]);
  b_st.site = &lb_emlrtRSI;
  mtimes(&b_st, Xw, znonnegs, vposlai);
  emxFree_real_T(&Xw);
  if (z->size[0] != vposlai->size[0]) {
    emlrtSizeEqCheck1DR2012b(z->size[0], vposlai->size[0], &ib_emlrtECI,
                             (emlrtCTX)sp);
  }
  /*  Sum of squares of residuals */
  st.site = &es_emlrtRSI;
  b_st.site = &il_emlrtRSI;
  c_st.site = &qf_emlrtRSI;
  b_i = vposlai->size[0];
  vposlai->size[0] = z->size[0];
  emxEnsureCapacity_real_T(&c_st, vposlai, b_i, &tj_emlrtRTEI);
  loop_ub = z->size[0];
  for (b_i = 0; b_i < loop_ub; b_i++) {
    vposlai->data[b_i] = z->data[b_i] - vposlai->data[b_i];
  }
  G = muDoubleScalarPower(b_norm(vposlai), 2.0);
  emxFree_real_T(&vposlai);
  if (znonnegs->size[0] < 1) {
    emlrtDynamicBoundsCheckR2012b(znonnegs->size[0], 1, znonnegs->size[0],
                                  &he_emlrtBCI, (emlrtCTX)sp);
  }
  loop_ub = z->size[0];
  for (b_i = 0; b_i < loop_ub; b_i++) {
    z->data[b_i] -= r->data[b_i];
  }
  emxFree_real_T(&r);
  G = (muDoubleScalarPower(b_norm(z), 2.0) - G) /
      (G / ((real_T)(X->size[0] - X->size[1]) - 1.0));
  st.site = &fs_emlrtRSI;
  if (G < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &st, &kb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  G = muDoubleScalarSqrt(G);
  outSC_Score_data[0] =
      -muDoubleScalarSign(znonnegs->data[znonnegs->size[0] - 1]) * G;
  /*  Store the value of the likelihood for the model which also contains */
  /*  the constructed variable */
  emxFree_real_T(&znonnegs);
  emxFree_real_T(&z);
  if (*emlrtBreakCheckR2012bFlagVar != 0) {
    emlrtBreakCheckR2012b((emlrtCTX)sp);
  }
  /*  Store values of the score test inside structure outSC */
  /*  Store values of the likelihood inside structure outSC */
  *outSC_Lik = rtNaN;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (ScoreYJ.c) */
