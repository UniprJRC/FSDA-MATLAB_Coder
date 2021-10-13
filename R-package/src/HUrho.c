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
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Declarations */
static void ee_binary_expand_op(emxArray_real_T *rhoHU,
                                const emxArray_boolean_T *w, double c,
                                const emxArray_real_T *w_tmp, double b_c);

/* Function Definitions */
static void ee_binary_expand_op(emxArray_real_T *rhoHU,
                                const emxArray_boolean_T *w, double c,
                                const emxArray_real_T *w_tmp, double b_c)
{
  emxArray_real_T *b_rhoHU;
  const double *w_tmp_data;
  double c_c;
  double *b_rhoHU_data;
  double *rhoHU_data;
  int b_w_tmp;
  int i;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  int stride_3_0;
  const bool *w_data;
  w_tmp_data = w_tmp->data;
  w_data = w->data;
  rhoHU_data = rhoHU->data;
  emxInit_real_T(&b_rhoHU, 1);
  c_c = b_c / 2.0;
  i = b_rhoHU->size[0];
  if (w_tmp->size[0] == 1) {
    b_w_tmp = w->size[0];
  } else {
    b_w_tmp = w_tmp->size[0];
  }
  if (b_w_tmp == 1) {
    if (w->size[0] == 1) {
      b_rhoHU->size[0] = rhoHU->size[0];
    } else {
      b_rhoHU->size[0] = w->size[0];
    }
  } else if (w_tmp->size[0] == 1) {
    b_rhoHU->size[0] = w->size[0];
  } else {
    b_rhoHU->size[0] = w_tmp->size[0];
  }
  emxEnsureCapacity_real_T(b_rhoHU, i);
  b_rhoHU_data = b_rhoHU->data;
  stride_0_0 = (rhoHU->size[0] != 1);
  stride_1_0 = (w->size[0] != 1);
  stride_2_0 = (w->size[0] != 1);
  stride_3_0 = (w_tmp->size[0] != 1);
  if (w_tmp->size[0] == 1) {
    b_w_tmp = w->size[0];
  } else {
    b_w_tmp = w_tmp->size[0];
  }
  if (b_w_tmp == 1) {
    if (w->size[0] == 1) {
      b_w_tmp = rhoHU->size[0];
    } else {
      b_w_tmp = w->size[0];
    }
  } else if (w_tmp->size[0] == 1) {
    b_w_tmp = w->size[0];
  } else {
    b_w_tmp = w_tmp->size[0];
  }
  for (i = 0; i < b_w_tmp; i++) {
    b_rhoHU_data[i] =
        rhoHU_data[i * stride_0_0] / 2.0 * (double)w_data[i * stride_1_0] +
        (1.0 - (double)w_data[i * stride_2_0]) *
            (c * w_tmp_data[i * stride_3_0] - c_c);
  }
  i = rhoHU->size[0];
  rhoHU->size[0] = b_rhoHU->size[0];
  emxEnsureCapacity_real_T(rhoHU, i);
  rhoHU_data = rhoHU->data;
  b_w_tmp = b_rhoHU->size[0];
  for (i = 0; i < b_w_tmp; i++) {
    rhoHU_data[i] = b_rhoHU_data[i];
  }
  emxFree_real_T(&b_rhoHU);
}

void HUrho(const emxArray_real_T *u, double c, emxArray_real_T *rhoHU)
{
  emxArray_boolean_T *w;
  emxArray_real_T *w_tmp;
  const double *u_data;
  double b_c;
  double varargin_1;
  double *rhoHU_data;
  double *w_tmp_data;
  int k;
  int nx;
  bool *w_data;
  u_data = u->data;
  emxInit_real_T(&w_tmp, 1);
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
  /*   Output: */
  /*  */
  /*    rhoHU :      n x 1 vector which contains the Huber rho */
  /*                 associated to the residuals or Mahalanobis distances for */
  /*                 the n units of the sample. */
  /*  */
  /*  More About: */
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
  nx = u->size[0];
  k = w_tmp->size[0];
  w_tmp->size[0] = u->size[0];
  emxEnsureCapacity_real_T(w_tmp, k);
  w_tmp_data = w_tmp->data;
  for (k = 0; k < nx; k++) {
    w_tmp_data[k] = fabs(u_data[k]);
  }
  emxInit_boolean_T(&w, 1);
  k = w->size[0];
  w->size[0] = w_tmp->size[0];
  emxEnsureCapacity_boolean_T(w, k);
  w_data = w->data;
  nx = w_tmp->size[0];
  for (k = 0; k < nx; k++) {
    w_data[k] = (w_tmp_data[k] <= c);
  }
  b_c = c * c;
  k = rhoHU->size[0];
  rhoHU->size[0] = u->size[0];
  emxEnsureCapacity_real_T(rhoHU, k);
  rhoHU_data = rhoHU->data;
  nx = u->size[0];
  for (k = 0; k < nx; k++) {
    varargin_1 = u_data[k];
    rhoHU_data[k] = varargin_1 * varargin_1;
  }
  if (rhoHU->size[0] == 1) {
    nx = w->size[0];
  } else {
    nx = rhoHU->size[0];
  }
  if (w->size[0] == 1) {
    k = w_tmp->size[0];
  } else {
    k = w->size[0];
  }
  if ((rhoHU->size[0] == w->size[0]) && (w->size[0] == w_tmp->size[0]) &&
      (nx == k)) {
    b_c /= 2.0;
    nx = rhoHU->size[0];
    for (k = 0; k < nx; k++) {
      rhoHU_data[k] = rhoHU_data[k] / 2.0 * (double)w_data[k] +
                      (1.0 - (double)w_data[k]) * (c * w_tmp_data[k] - b_c);
    }
  } else {
    ee_binary_expand_op(rhoHU, w, c, w_tmp, b_c);
  }
  emxFree_real_T(&w_tmp);
  emxFree_boolean_T(&w);
}

/* End of code generation (HUrho.c) */
