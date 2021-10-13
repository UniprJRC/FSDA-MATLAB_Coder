/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * TBrho.c
 *
 * Code generation for function 'TBrho'
 *
 */

/* Include files */
#include "TBrho.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void TBrho(const emxArray_real_T *u, const emxArray_real_T *c,
           emxArray_real_T *rhoTB)
{
  emxArray_boolean_T *w;
  emxArray_real_T *y;
  const double *c_data;
  const double *u_data;
  double b;
  double b_c;
  double c_tmp;
  double varargin_1;
  double *rhoTB_data;
  double *y_data;
  int b_rhoTB;
  int k;
  int nx;
  bool *w_data;
  c_data = c->data;
  u_data = u->data;
  emxInit_real_T(&y, 1);
  /* TBrho computes rho function for Tukey's biweight */
  /*  */
  /* <a href="matlab: docsearchFS('TBrho')">Link to the help function</a> */
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
  /*    rhoTB :      n x 1 vector which contains the Tukey's biweight rho */
  /*                 associated to the residuals or Mahalanobis distances for */
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
  /*  Remark: equation (2.37) is written in standardized terms in such a way */
  /*  that $\rho(c)=1$, so it is the previous expression divided by $(c^2/6)$ */
  /*  */
  /*  See also HYPrho, HArho, OPTrho */
  /*  */
  /*  References: */
  /*  */
  /*  Maronna, R.A., Martin D. and Yohai V.J. (2006), "Robust Statistics, Theory
   */
  /*  and Methods", Wiley, New York. */
  /*  Riani, M., Cerioli, A. and Torti, F. (2014), On consistency factors and */
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
  /*     % while in the second we find the efficiency (the value of bdp is */
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
  nx = u->size[0];
  k = y->size[0];
  y->size[0] = u->size[0];
  emxEnsureCapacity_real_T(y, k);
  y_data = y->data;
  for (k = 0; k < nx; k++) {
    y_data[k] = fabs(u_data[k]);
  }
  emxInit_boolean_T(&w, 1);
  k = w->size[0];
  w->size[0] = y->size[0];
  emxEnsureCapacity_boolean_T(w, k);
  w_data = w->data;
  nx = y->size[0];
  for (k = 0; k < nx; k++) {
    w_data[k] = (y_data[k] <= c_data[0]);
  }
  c_tmp = c_data[0] * c_data[0];
  k = rhoTB->size[0];
  rhoTB->size[0] = u->size[0];
  emxEnsureCapacity_real_T(rhoTB, k);
  rhoTB_data = rhoTB->data;
  nx = u->size[0];
  for (k = 0; k < nx; k++) {
    varargin_1 = u_data[k];
    rhoTB_data[k] = varargin_1 * varargin_1;
  }
  b_c = rt_powd_snf(c_data[0], 4.0);
  b = c_tmp / 6.0;
  k = y->size[0];
  y->size[0] = u->size[0];
  emxEnsureCapacity_real_T(y, k);
  y_data = y->data;
  nx = u->size[0];
  for (k = 0; k < nx; k++) {
    varargin_1 = u_data[k];
    y_data[k] = rt_powd_snf(varargin_1, 4.0);
  }
  if (rhoTB->size[0] == 1) {
    nx = y->size[0];
  } else {
    nx = rhoTB->size[0];
  }
  if (rhoTB->size[0] == 1) {
    k = y->size[0];
  } else {
    k = rhoTB->size[0];
  }
  if (rhoTB->size[0] == 1) {
    b_rhoTB = y->size[0];
  } else {
    b_rhoTB = rhoTB->size[0];
  }
  if (b_rhoTB == 1) {
    b_rhoTB = w->size[0];
  } else if (rhoTB->size[0] == 1) {
    b_rhoTB = y->size[0];
  } else {
    b_rhoTB = rhoTB->size[0];
  }
  if ((rhoTB->size[0] == y->size[0]) && (rhoTB->size[0] == nx) &&
      (k == w->size[0]) && (b_rhoTB == w->size[0])) {
    varargin_1 = 3.0 * b_c;
    nx = rhoTB->size[0];
    for (k = 0; k < nx; k++) {
      rhoTB_data[k] =
          rhoTB_data[k] / 2.0 *
              ((1.0 - rhoTB_data[k] / c_tmp) + y_data[k] / varargin_1) *
              (double)w_data[k] +
          (1.0 - (double)w_data[k]) * b;
    }
  } else {
    qe_binary_expand_op(rhoTB, c_tmp, y, b_c, w, b);
  }
  emxFree_real_T(&y);
  emxFree_boolean_T(&w);
}

void af_binary_expand_op(struct_Sreg_T *out, double c,
                         const emxArray_real_T *abc, double b_c,
                         const emxArray_boolean_T *w, double b)
{
  emxArray_real_T *b_out;
  const double *abc_data;
  double d;
  double *out_data;
  int b_abc;
  int i;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  int stride_3_0;
  int stride_4_0;
  const bool *w_data;
  w_data = w->data;
  abc_data = abc->data;
  emxInit_real_T(&b_out, 1);
  d = 3.0 * b_c;
  i = b_out->size[0];
  if (w->size[0] == 1) {
    if (abc->size[0] == 1) {
      b_abc = out->residuals->size[0];
    } else {
      b_abc = abc->size[0];
    }
    if (b_abc == 1) {
      b_out->size[0] = out->residuals->size[0];
    } else if (abc->size[0] == 1) {
      b_out->size[0] = out->residuals->size[0];
    } else {
      b_out->size[0] = abc->size[0];
    }
  } else {
    b_out->size[0] = w->size[0];
  }
  emxEnsureCapacity_real_T(b_out, i);
  out_data = b_out->data;
  stride_0_0 = (out->residuals->size[0] != 1);
  stride_1_0 = (out->residuals->size[0] != 1);
  stride_2_0 = (abc->size[0] != 1);
  stride_3_0 = (w->size[0] != 1);
  stride_4_0 = (w->size[0] != 1);
  if (w->size[0] == 1) {
    if (abc->size[0] == 1) {
      b_abc = out->residuals->size[0];
    } else {
      b_abc = abc->size[0];
    }
    if (b_abc == 1) {
      b_abc = out->residuals->size[0];
    } else if (abc->size[0] == 1) {
      b_abc = out->residuals->size[0];
    } else {
      b_abc = abc->size[0];
    }
  } else {
    b_abc = w->size[0];
  }
  for (i = 0; i < b_abc; i++) {
    out_data[i] = out->residuals->data[i * stride_0_0] / 2.0 *
                      ((1.0 - out->residuals->data[i * stride_1_0] / c) +
                       abc_data[i * stride_2_0] / d) *
                      (double)w_data[i * stride_3_0] +
                  (1.0 - (double)w_data[i * stride_4_0]) * b;
  }
  i = out->residuals->size[0];
  out->residuals->size[0] = b_out->size[0];
  emxEnsureCapacity_real_T(out->residuals, i);
  b_abc = b_out->size[0];
  for (i = 0; i < b_abc; i++) {
    out->residuals->data[i] = out_data[i];
  }
  emxFree_real_T(&b_out);
}

void ne_binary_expand_op(j_struct_T *out, double c, const emxArray_real_T *abc,
                         double b_c, const emxArray_boolean_T *w, double b)
{
  emxArray_real_T *b_out;
  const double *abc_data;
  double d;
  double *out_data;
  int b_abc;
  int i;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  int stride_3_0;
  int stride_4_0;
  const bool *w_data;
  w_data = w->data;
  abc_data = abc->data;
  emxInit_real_T(&b_out, 1);
  d = 3.0 * b_c;
  i = b_out->size[0];
  if (w->size[0] == 1) {
    if (abc->size[0] == 1) {
      b_abc = out->residuals->size[0];
    } else {
      b_abc = abc->size[0];
    }
    if (b_abc == 1) {
      b_out->size[0] = out->residuals->size[0];
    } else if (abc->size[0] == 1) {
      b_out->size[0] = out->residuals->size[0];
    } else {
      b_out->size[0] = abc->size[0];
    }
  } else {
    b_out->size[0] = w->size[0];
  }
  emxEnsureCapacity_real_T(b_out, i);
  out_data = b_out->data;
  stride_0_0 = (out->residuals->size[0] != 1);
  stride_1_0 = (out->residuals->size[0] != 1);
  stride_2_0 = (abc->size[0] != 1);
  stride_3_0 = (w->size[0] != 1);
  stride_4_0 = (w->size[0] != 1);
  if (w->size[0] == 1) {
    if (abc->size[0] == 1) {
      b_abc = out->residuals->size[0];
    } else {
      b_abc = abc->size[0];
    }
    if (b_abc == 1) {
      b_abc = out->residuals->size[0];
    } else if (abc->size[0] == 1) {
      b_abc = out->residuals->size[0];
    } else {
      b_abc = abc->size[0];
    }
  } else {
    b_abc = w->size[0];
  }
  for (i = 0; i < b_abc; i++) {
    out_data[i] = out->residuals->data[i * stride_0_0] / 2.0 *
                      ((1.0 - out->residuals->data[i * stride_1_0] / c) +
                       abc_data[i * stride_2_0] / d) *
                      (double)w_data[i * stride_3_0] +
                  (1.0 - (double)w_data[i * stride_4_0]) * b;
  }
  i = out->residuals->size[0];
  out->residuals->size[0] = b_out->size[0];
  emxEnsureCapacity_real_T(out->residuals, i);
  b_abc = b_out->size[0];
  for (i = 0; i < b_abc; i++) {
    out->residuals->data[i] = out_data[i];
  }
  emxFree_real_T(&b_out);
}

void qe_binary_expand_op(emxArray_real_T *x, double c,
                         const emxArray_real_T *outIRWLS_betarw, double b_c,
                         const emxArray_boolean_T *w, double b)
{
  emxArray_real_T *b_x;
  const double *outIRWLS_betarw_data;
  double d;
  double *b_x_data;
  double *x_data;
  int b_outIRWLS_betarw;
  int i;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  int stride_3_0;
  int stride_4_0;
  const bool *w_data;
  w_data = w->data;
  outIRWLS_betarw_data = outIRWLS_betarw->data;
  x_data = x->data;
  emxInit_real_T(&b_x, 1);
  d = 3.0 * b_c;
  i = b_x->size[0];
  if (w->size[0] == 1) {
    if (outIRWLS_betarw->size[0] == 1) {
      b_outIRWLS_betarw = x->size[0];
    } else {
      b_outIRWLS_betarw = outIRWLS_betarw->size[0];
    }
    if (b_outIRWLS_betarw == 1) {
      b_x->size[0] = x->size[0];
    } else if (outIRWLS_betarw->size[0] == 1) {
      b_x->size[0] = x->size[0];
    } else {
      b_x->size[0] = outIRWLS_betarw->size[0];
    }
  } else {
    b_x->size[0] = w->size[0];
  }
  emxEnsureCapacity_real_T(b_x, i);
  b_x_data = b_x->data;
  stride_0_0 = (x->size[0] != 1);
  stride_1_0 = (x->size[0] != 1);
  stride_2_0 = (outIRWLS_betarw->size[0] != 1);
  stride_3_0 = (w->size[0] != 1);
  stride_4_0 = (w->size[0] != 1);
  if (w->size[0] == 1) {
    if (outIRWLS_betarw->size[0] == 1) {
      b_outIRWLS_betarw = x->size[0];
    } else {
      b_outIRWLS_betarw = outIRWLS_betarw->size[0];
    }
    if (b_outIRWLS_betarw == 1) {
      b_outIRWLS_betarw = x->size[0];
    } else if (outIRWLS_betarw->size[0] == 1) {
      b_outIRWLS_betarw = x->size[0];
    } else {
      b_outIRWLS_betarw = outIRWLS_betarw->size[0];
    }
  } else {
    b_outIRWLS_betarw = w->size[0];
  }
  for (i = 0; i < b_outIRWLS_betarw; i++) {
    b_x_data[i] = x_data[i * stride_0_0] / 2.0 *
                      ((1.0 - x_data[i * stride_1_0] / c) +
                       outIRWLS_betarw_data[i * stride_2_0] / d) *
                      (double)w_data[i * stride_3_0] +
                  (1.0 - (double)w_data[i * stride_4_0]) * b;
  }
  i = x->size[0];
  x->size[0] = b_x->size[0];
  emxEnsureCapacity_real_T(x, i);
  x_data = x->data;
  b_outIRWLS_betarw = b_x->size[0];
  for (i = 0; i < b_outIRWLS_betarw; i++) {
    x_data[i] = b_x_data[i];
  }
  emxFree_real_T(&b_x);
}

/* End of code generation (TBrho.c) */
