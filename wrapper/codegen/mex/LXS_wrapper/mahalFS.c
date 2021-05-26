/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mahalFS.c
 *
 * Code generation for function 'mahalFS'
 *
 */

/* Include files */
#include "mahalFS.h"
#include "LXS_wrapper_data.h"
#include "LXS_wrapper_emxutil.h"
#include "LXS_wrapper_types.h"
#include "bsxfun.h"
#include "mrdivide_helper.h"
#include "rt_nonfinite.h"
#include "sum.h"

/* Variable Definitions */
static emlrtRSInfo heb_emlrtRSI = {
    64,                                                    /* lineNo */
    "mahalFS",                                             /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\mahalFS.m" /* pathName */
};

static emlrtRSInfo ieb_emlrtRSI = {
    65,                                                    /* lineNo */
    "mahalFS",                                             /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\mahalFS.m" /* pathName */
};

static emlrtECInfo uc_emlrtECI = {
    2,                                                     /* nDims */
    65,                                                    /* lineNo */
    7,                                                     /* colNo */
    "mahalFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\mahalFS.m" /* pName */
};

static emlrtRTEInfo kw_emlrtRTEI = {
    65,                                                    /* lineNo */
    8,                                                     /* colNo */
    "mahalFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\mahalFS.m" /* pName */
};

static emlrtRTEInfo lw_emlrtRTEI = {
    65,                                                    /* lineNo */
    7,                                                     /* colNo */
    "mahalFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\mahalFS.m" /* pName */
};

static emlrtRTEInfo mw_emlrtRTEI = {
    64,                                                    /* lineNo */
    1,                                                     /* colNo */
    "mahalFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\mahalFS.m" /* pName */
};

static emlrtRTEInfo nw_emlrtRTEI = {
    1,                                                     /* lineNo */
    14,                                                    /* colNo */
    "mahalFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\mahalFS.m" /* pName */
};

/* Function Definitions */
void mahalFS(const emlrtStack *sp, const emxArray_real_T *Y,
             const emxArray_real_T *MU, const emxArray_real_T *SIGMA,
             emxArray_real_T *d)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T *Ytilde;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &Ytilde, 2, &mw_emlrtRTEI, true);
  /* mahalFS computes Mahalanobis distances (in squared units) for each row of
   * matrix Y  */
  /*  */
  /*    d = mahalFS(Y,MU,SIGMA) returns the Mahalanobis distance (in squared
   * units) of */
  /*    each observation (point) in Y using centroid MU and covariance matrix
   * SIGMA */
  /*  */
  /*       d(i) = (Y(i,:)-MU) * SIGMA^(-1) * (Y(i,:)-MU)', */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('mahalFS')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*  Y :           Input data. Matrix.  */
  /*                n x v data matrix; n observations and v variables. Rows of
   */
  /*                Y represent observations, and columns represent variables.
   */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite
   */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*                 Data Types - single|double */
  /*         MU :   Centroid. Vector. v x 1 vector containing centroid to use */
  /*       SIGMA:   Covariance matrix. Matrix. v x v matrix containing
   * covariance matrix which must be used */
  /*         */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*   Output: */
  /*  */
  /*     d :         Mahalanobis distances. Vector. */
  /*                 n x 1 vector which contains the squared Mahalanobid
   * distances. */
  /*    \[ */
  /*       d(i) = (y_i-\mu)^T \times  \Sigma^{-1} \times (y_i-\mu), \qquad  */
  /*       i=1, 2, \ldots, n */
  /*    \] */
  /*  */
  /*  See also: mahal */
  /*  */
  /*  */
  /*  References: */
  /*  */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('mahalFS')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % Example of computation of MD. */
  /*     Y=randn(10,2); */
  /*     MU=median(Y);  */
  /*     SIGMA=[0.3 0.4; 0.4 1]; */
  /*     % Compute MD using as centroid the medians and shape matrix SIGMA */
  /*     d=mahalFS(Y,MU,SIGMA); */
  /* } */
  /*  Beginning of code */
  st.site = &heb_emlrtRSI;
  bsxfun(&st, Y, MU, Ytilde);
  st.site = &ieb_emlrtRSI;
  if (SIGMA->size[1] != Ytilde->size[1]) {
    emlrtErrorWithMessageIdR2018a(&st, &vb_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  emxInit_real_T(&st, &r, 2, &nw_emlrtRTEI, true);
  i = r->size[0] * r->size[1];
  r->size[0] = Ytilde->size[0];
  r->size[1] = Ytilde->size[1];
  emxEnsureCapacity_real_T(&st, r, i, &kw_emlrtRTEI);
  loop_ub = Ytilde->size[0] * Ytilde->size[1];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = Ytilde->data[i];
  }
  emxInit_real_T(&st, &r1, 2, &lw_emlrtRTEI, true);
  b_st.site = &cy_emlrtRSI;
  mrdiv(&b_st, r, SIGMA);
  iv[0] = (*(int32_T(*)[2])r->size)[0];
  iv[1] = (*(int32_T(*)[2])r->size)[1];
  iv1[0] = (*(int32_T(*)[2])Ytilde->size)[0];
  iv1[1] = (*(int32_T(*)[2])Ytilde->size)[1];
  emlrtSizeEqCheckNDR2012b(&iv[0], &iv1[0], &uc_emlrtECI, (emlrtCTX)sp);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = r->size[0];
  r1->size[1] = r->size[1];
  emxEnsureCapacity_real_T(sp, r1, i, &lw_emlrtRTEI);
  loop_ub = r->size[0] * r->size[1];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = r->data[i] * Ytilde->data[i];
  }
  emxFree_real_T(&r);
  emxFree_real_T(&Ytilde);
  st.site = &ieb_emlrtRSI;
  b_sum(&st, r1, d);
  emxFree_real_T(&r1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (mahalFS.c) */
