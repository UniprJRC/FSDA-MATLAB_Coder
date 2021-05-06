/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * HUrho.c
 *
 * Code generation for function 'HUrho'
 *
 */

/* Include files */
#include "HUrho.h"
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_types.h"
#include "abs.h"
#include "power.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo ls_emlrtRSI = {
    99,                                                  /* lineNo */
    "HUrho",                                             /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\HUrho.m" /* pathName */
};

static emlrtRSInfo ms_emlrtRSI = {
    100,                                                 /* lineNo */
    "HUrho",                                             /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\HUrho.m" /* pathName */
};

static emlrtECInfo jc_emlrtECI = {
    -1,                                                  /* nDims */
    100,                                                 /* lineNo */
    9,                                                   /* colNo */
    "HUrho",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\HUrho.m" /* pName */
};

static emlrtECInfo kc_emlrtECI = {
    -1,                                                  /* nDims */
    100,                                                 /* lineNo */
    22,                                                  /* colNo */
    "HUrho",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\HUrho.m" /* pName */
};

static emlrtRTEInfo vs_emlrtRTEI = {
    99,                                                  /* lineNo */
    1,                                                   /* colNo */
    "HUrho",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\HUrho.m" /* pName */
};

static emlrtRTEInfo ws_emlrtRTEI = {
    100,                                                 /* lineNo */
    22,                                                  /* colNo */
    "HUrho",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\HUrho.m" /* pName */
};

static emlrtRTEInfo xs_emlrtRTEI = {
    100,                                                 /* lineNo */
    32,                                                  /* colNo */
    "HUrho",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\HUrho.m" /* pName */
};

/* Function Definitions */
void HUrho(const emlrtStack *sp, const emxArray_real_T *u, real_T c,
           emxArray_real_T *rhoHU)
{
  emlrtStack st;
  emxArray_boolean_T *w;
  emxArray_real_T *b;
  real_T b_c;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_boolean_T(sp, &w, 1, &vs_emlrtRTEI, true);
  emxInit_real_T(sp, &b, 1, &xs_emlrtRTEI, true);
  /* HUrho computes rho function for Huber */
  /*  */
  /* <a href="matlab: docsearchFS('HUrho')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     u:         scaled residuals or Mahalanobis distances. Vector. n x 1 */
  /*                vector containing residuals or Mahalanobis distances */
  /*                for the n units of the sample */
  /*     c :        tuning parameter. Scalar. Scalar greater than 0 which */
  /*                controls the robustness/efficiency of the estimator */
  /*                (beta in regression or mu in the location case ...)  */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*  */
  /*   Output: */
  /*  */
  /*  */
  /*    rhoHU :      n x 1 vector which contains the Huber rho */
  /*                 associated to the residuals or Mahalanobis distances for */
  /*                 the n units of the sample. */
  /*  */
  /*  More About: */
  /*  */
  /*  */
  /*  function HUrho transforms vector u as follows  */
  /*  \[ */
  /*  HUrho(u)= \left\{ */
  /*     \begin{array}{cc} */
  /*   (u^2/2)    &  |u/c| \leq 1  \\ */
  /*   c|u| -c^2/2               &  |u/c| >1   \\ */
  /*  \end{array} */
  /*     \right. */
  /*   \] */
  /*    */
  /*  See equation (2.27) p. 26 of Maronna et al. (2006). */
  /*  Remark: equation (2.26) is written in standardized terms in such a way */
  /*  that $\rho(c)=1$, so it is the previous expression multiplied by $2$ */
  /*  */
  /*  See also TBrho, HYPrho, HArho, OPTrho */
  /*  */
  /*  References: */
  /*  */
  /*  Maronna, R.A., Martin D. and Yohai V.J. (2006), "Robust Statistics, Theory
   */
  /*  and Methods", Wiley, New York. */
  /*  */
  /*  Riani, M., Cerioli, A. and Torti, F. (2014), On consistency factors and */
  /*  efficiency of robust S-estimators, "TEST", Vol. 23, pp. 356-387. */
  /*  http://dx.doi.org/10.1007/s11749-014-0357-7 */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('HUrho')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     %% Plot Huber rho function. */
  /*     close all */
  /*     x=-3:0.001:3; */
  /*     c=1.345; */
  /*     rhoHU=HUrho(x,c); */
  /*     plot(x,rhoHU,'LineStyle','-','LineWidth',2) */
  /*     xlabel('$u$','Interpreter','Latex') */
  /*     ylabel('$\rho (u,1.345)$','Interpreter','Latex') */
  /*     text(-c,0,'-c=-1.345') */
  /*     text(c,0,'c=1.345') */
  /*     hold('on') */
  /*     plot(x,x.^2/2,'LineStyle',':','LineWidth',1.5) */
  /*     stem(c,c^2/2) */
  /*     stem(-c,c^2/2) */
  /*  */
  /* } */
  /* { */
  /*     % Huber rhos function for two values of c. */
  /*     x=-6:0.01:6; */
  /*     c=1.345; */
  /*     rhoHU=HUrho(x,c); */
  /*     plot(x,rhoHU) */
  /*     xlabel('u','Interpreter','Latex') */
  /*     ylabel('$\rho (x,1.345)$','Interpreter','Latex') */
  /*     text(-c,0,'-c') */
  /*     text(c,0,'c') */
  /*     title('$\rho (u,c)$ with $c=1,345$ and $c=2$','Interpreter','Latex') */
  /*     hold('on') */
  /*     rhoHU=HUrho(x,2); */
  /*     plot(x,rhoHU,'-.') */
  /* } */
  /*  Beginning of code */
  st.site = &ls_emlrtRSI;
  b_abs(&st, u, b);
  i = w->size[0];
  w->size[0] = b->size[0];
  emxEnsureCapacity_boolean_T(sp, w, i, &vs_emlrtRTEI);
  loop_ub = b->size[0];
  for (i = 0; i < loop_ub; i++) {
    w->data[i] = (b->data[i] <= c);
  }
  st.site = &ms_emlrtRSI;
  power(&st, u, rhoHU);
  loop_ub = rhoHU->size[0];
  for (i = 0; i < loop_ub; i++) {
    rhoHU->data[i] /= 2.0;
  }
  if (rhoHU->size[0] != w->size[0]) {
    emlrtSizeEqCheck1DR2012b(rhoHU->size[0], w->size[0], &jc_emlrtECI,
                             (emlrtCTX)sp);
  }
  st.site = &ms_emlrtRSI;
  b_abs(&st, u, b);
  loop_ub = b->size[0];
  for (i = 0; i < loop_ub; i++) {
    b->data[i] *= c;
  }
  if (w->size[0] != b->size[0]) {
    emlrtSizeEqCheck1DR2012b(w->size[0], b->size[0], &kc_emlrtECI,
                             (emlrtCTX)sp);
  }
  loop_ub = rhoHU->size[0];
  for (i = 0; i < loop_ub; i++) {
    rhoHU->data[i] *= (real_T)w->data[i];
  }
  b_c = c * c / 2.0;
  i = b->size[0];
  b->size[0] = w->size[0];
  emxEnsureCapacity_real_T(sp, b, i, &ws_emlrtRTEI);
  loop_ub = w->size[0];
  for (i = 0; i < loop_ub; i++) {
    b->data[i] = (1.0 - (real_T)w->data[i]) * (b->data[i] - b_c);
  }
  emxFree_boolean_T(&w);
  if (rhoHU->size[0] != b->size[0]) {
    emlrtSizeEqCheck1DR2012b(rhoHU->size[0], b->size[0], &jc_emlrtECI,
                             (emlrtCTX)sp);
  }
  loop_ub = rhoHU->size[0];
  for (i = 0; i < loop_ub; i++) {
    rhoHU->data[i] += b->data[i];
  }
  emxFree_real_T(&b);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (HUrho.c) */
