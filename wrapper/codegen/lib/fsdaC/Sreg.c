/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Sreg.c
 *
 * Code generation for function 'Sreg'
 *
 */

/* Include files */
#include <R.h>

#include "Sreg.h"
#include "HAbdp.h"
#include "HArho.h"
#include "HAwei.h"
#include "HYPrho.h"
#include "HYPwei.h"
#include "Mscale.h"
#include "OPTbdp.h"
#include "OPTrho.h"
#include "OPTwei.h"
#include "TBrho.h"
#include "TBwei.h"
#include "bc.h"
#include "blockedSummation.h"
#include "bsxfun.h"
#include "erfcinv.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "gammainc.h"
#include "median.h"
#include "minOrMax.h"
#include "mldivide.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "strcmp.h"
#include "subsets.h"
#include "tic.h"
#include "toc.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <stdio.h>
#include <string.h>

/* Function Definitions */
void IRWLSregS(const emxArray_real_T *y, const emxArray_real_T *X,
               const emxArray_real_T *initialbeta,
               const double psifunc_c1_data[], const int psifunc_c1_size[2],
               double psifunc_kc1, const char psifunc_class_data[],
               const int psifunc_class_size[2], double refsteps, double reftol,
               emxArray_real_T *outIRWLS_betarw, double *outIRWLS_scalerw,
               emxArray_real_T *outIRWLS_weights)
{
  static const char cv1[3] = {'O', 'P', 'T'};
  static const char cv3[3] = {'H', 'Y', 'P'};
  static const char b_cv[2] = {'T', 'B'};
  static const char cv2[2] = {'H', 'A'};
  static const char cv4[2] = {'P', 'D'};
  emxArray_boolean_T *x;
  emxArray_real_T *a;
  emxArray_real_T *a_tmp;
  emxArray_real_T *b_res;
  emxArray_real_T *beta;
  emxArray_real_T *r;
  emxArray_real_T *res;
  emxArray_real_T *z1;
  double b_y;
  double betadiff;
  double initialscale;
  double iter;
  double scale;
  int aoffset;
  int exitg2;
  int i;
  int inner;
  int k;
  int mc;
  bool b_bool;
  bool exitg1;
  bool exitg3;
  emxInit_real_T(&res, 1);
  /*  ------------------------------------------------------------------- */
  /*  subfunction IRWLSreg */
  /*  ------------------------------------------------------------------- */
  /* IRWLSregS (iterative reweighted least squares) does refsteps refining steps
   * from initialbeta for S estimator */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     y:         A vector with n elements that contains the response
   * variable. */
  /*                It can be both a row or column vector. */
  /*     X :        Data matrix of explanatory variables (also called
   * 'regressors') */
  /*                of dimension (n x p). Rows of X represent observations, and
   */
  /*                columns represent variables. */
  /*  initialbeta : p x 1 vector containing initial estimate of beta */
  /*      psifunc : a structure specifying the class of rho function to use, the
   */
  /*                consistency factor, and the value associated with the */
  /*                Expectation of rho in correspondence of the consistency */
  /*                factor */
  /*                psifunc must contain the following fields */
  /*                c1 = consistency factor associated to required */
  /*                     breakdown point */
  /*                kc1= Expectation for rho associated with c1 */
  /*                class = string identyfing the rho (psi) function to use. */
  /*                     Admissible values for class are 'bisquare', 'optimal'
   */
  /*                     'hyperbolic' and 'hampel' */
  /*                Remark: if class is 'hyperbolic' it is also necessary to */
  /*                    specify parameters k (sup CVC), A, B and d */
  /*                Remark: if class is 'hampel' it is also necessary to */
  /*                    specify parameters a, b and c */
  /*    refsteps  : scalar, number of refining (IRLS) steps */
  /*    reftol    : relative convergence tolerance */
  /*                Default value is 1e-7 */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*  initialscale: scalar, initial estimate of the scale. If not defined, */
  /*                scaled MAD of residuals is used. */
  /*  */
  /*   Output: */
  /*  */
  /*   The output consists of a structure 'outIRWLS' containing the following
   * fields: */
  /*       betarw  : p x 1 vector. Estimate of beta after refsteps refining
   * steps */
  /*      scalerw  : scalar. Estimate of scale after refsteps refining step */
  /*      weights  : n x 1 vector. Weights assigned to each observation */
  /*  */
  /*  In the IRWLS procedure the value of beta and the value of the scale are */
  /*  updated in each step */
  /*  Beginning of code */
  /*  Residuals for the initialbeta */
  mc = X->size[0] - 1;
  inner = X->size[1];
  i = res->size[0];
  res->size[0] = X->size[0];
  emxEnsureCapacity_real_T(res, i);
  for (i = 0; i <= mc; i++) {
    res->data[i] = 0.0;
  }
  for (k = 0; k < inner; k++) {
    aoffset = k * X->size[0];
    for (i = 0; i <= mc; i++) {
      res->data[i] += X->data[aoffset + i] * initialbeta->data[k];
    }
  }
  i = res->size[0];
  res->size[0] = y->size[0];
  emxEnsureCapacity_real_T(res, i);
  aoffset = y->size[0];
  for (i = 0; i < aoffset; i++) {
    res->data[i] = y->data[i] - res->data[i];
  }
  /*  The scaled MAD of residuals is the initial scale estimate default value */
  aoffset = res->size[0];
  i = outIRWLS_betarw->size[0];
  outIRWLS_betarw->size[0] = res->size[0];
  emxEnsureCapacity_real_T(outIRWLS_betarw, i);
  for (k = 0; k < aoffset; k++) {
    outIRWLS_betarw->data[k] = fabs(res->data[k]);
  }
  emxInit_real_T(&beta, 1);
  initialscale = median(outIRWLS_betarw) / 0.6745;
  i = beta->size[0];
  beta->size[0] = initialbeta->size[0];
  emxEnsureCapacity_real_T(beta, i);
  aoffset = initialbeta->size[0];
  for (i = 0; i < aoffset; i++) {
    beta->data[i] = initialbeta->data[i];
  }
  scale = initialscale;
  i = outIRWLS_betarw->size[0];
  outIRWLS_betarw->size[0] = initialbeta->size[0];
  emxEnsureCapacity_real_T(outIRWLS_betarw, i);
  aoffset = initialbeta->size[0];
  for (i = 0; i < aoffset; i++) {
    outIRWLS_betarw->data[i] = initialbeta->data[i];
  }
  i = outIRWLS_weights->size[0] * outIRWLS_weights->size[1];
  outIRWLS_weights->size[0] = y->size[0];
  outIRWLS_weights->size[1] = 1;
  emxEnsureCapacity_real_T(outIRWLS_weights, i);
  aoffset = y->size[0];
  for (i = 0; i < aoffset; i++) {
    outIRWLS_weights->data[i] = y->data[i];
  }
  /*  initialization of weights necessary for MATLAB coder */
  iter = 0.0;
  betadiff = 9999.0;
  emxInit_real_T(&a_tmp, 2);
  emxInit_real_T(&z1, 2);
  emxInit_boolean_T(&x, 1);
  emxInit_real_T(&a, 1);
  emxInit_real_T(&b_res, 1);
  emxInit_real_T(&r, 2);
  exitg1 = false;
  while ((!exitg1) && ((betadiff > reftol) && (iter < refsteps))) {
    iter++;
    b_bool = false;
    if (psifunc_class_size[1] == 2) {
      aoffset = 0;
      do {
        exitg2 = 0;
        if (aoffset < 2) {
          if (psifunc_class_data[aoffset] != b_cv[aoffset]) {
            exitg2 = 1;
          } else {
            aoffset++;
          }
        } else {
          b_bool = true;
          exitg2 = 1;
        }
      } while (exitg2 == 0);
    }
    if (b_bool) {
      i = b_res->size[0];
      b_res->size[0] = res->size[0];
      emxEnsureCapacity_real_T(b_res, i);
      aoffset = res->size[0];
      for (i = 0; i < aoffset; i++) {
        b_res->data[i] = res->data[i] / scale;
      }
      scale *=
          sqrt(TBrho(b_res, psifunc_c1_data, psifunc_c1_size) / psifunc_kc1);
      aoffset = res->size[0];
      for (i = 0; i < aoffset; i++) {
        res->data[i] /= scale;
      }
      TBwei(res, psifunc_c1_data, outIRWLS_betarw);
      i = outIRWLS_weights->size[0] * outIRWLS_weights->size[1];
      outIRWLS_weights->size[0] = outIRWLS_betarw->size[0];
      outIRWLS_weights->size[1] = 1;
      emxEnsureCapacity_real_T(outIRWLS_weights, i);
      aoffset = outIRWLS_betarw->size[0];
      for (i = 0; i < aoffset; i++) {
        outIRWLS_weights->data[i] = outIRWLS_betarw->data[i];
      }
    } else {
      b_bool = false;
      if (psifunc_class_size[1] == 3) {
        aoffset = 0;
        do {
          exitg2 = 0;
          if (aoffset < 3) {
            if (psifunc_class_data[aoffset] != cv1[aoffset]) {
              exitg2 = 1;
            } else {
              aoffset++;
            }
          } else {
            b_bool = true;
            exitg2 = 1;
          }
        } while (exitg2 == 0);
      }
      if (b_bool) {
        i = b_res->size[0];
        b_res->size[0] = res->size[0];
        emxEnsureCapacity_real_T(b_res, i);
        aoffset = res->size[0];
        for (i = 0; i < aoffset; i++) {
          b_res->data[i] = res->data[i] / scale;
        }
        b_OPTrho(b_res, psifunc_c1_data, psifunc_c1_size, a);
        scale *= sqrt(blockedSummation(a, a->size[0]) / (double)a->size[0] /
                      psifunc_kc1);
        aoffset = res->size[0];
        for (i = 0; i < aoffset; i++) {
          res->data[i] /= scale;
        }
        OPTwei(res, psifunc_c1_data, psifunc_c1_size, outIRWLS_weights);
      } else {
        b_bool = false;
        if (psifunc_class_size[1] == 2) {
          aoffset = 0;
          do {
            exitg2 = 0;
            if (aoffset < 2) {
              if (psifunc_class_data[aoffset] != cv2[aoffset]) {
                exitg2 = 1;
              } else {
                aoffset++;
              }
            } else {
              b_bool = true;
              exitg2 = 1;
            }
          } while (exitg2 == 0);
        }
        if (b_bool) {
          i = b_res->size[0];
          b_res->size[0] = res->size[0];
          emxEnsureCapacity_real_T(b_res, i);
          aoffset = res->size[0];
          for (i = 0; i < aoffset; i++) {
            b_res->data[i] = res->data[i] / scale;
          }
          b_HArho(b_res, psifunc_c1_data, psifunc_c1_size, a);
          scale *= sqrt(blockedSummation(a, a->size[0]) / (double)a->size[0] /
                        psifunc_kc1);
          aoffset = res->size[0];
          for (i = 0; i < aoffset; i++) {
            res->data[i] /= scale;
          }
          HAwei(res, psifunc_c1_data, psifunc_c1_size, outIRWLS_betarw);
          i = outIRWLS_weights->size[0] * outIRWLS_weights->size[1];
          outIRWLS_weights->size[0] = outIRWLS_betarw->size[0];
          outIRWLS_weights->size[1] = 1;
          emxEnsureCapacity_real_T(outIRWLS_weights, i);
          aoffset = outIRWLS_betarw->size[0];
          for (i = 0; i < aoffset; i++) {
            outIRWLS_weights->data[i] = outIRWLS_betarw->data[i];
          }
        } else {
          b_bool = false;
          if (psifunc_class_size[1] == 3) {
            aoffset = 0;
            do {
              exitg2 = 0;
              if (aoffset < 3) {
                if (psifunc_class_data[aoffset] != cv3[aoffset]) {
                  exitg2 = 1;
                } else {
                  aoffset++;
                }
              } else {
                b_bool = true;
                exitg2 = 1;
              }
            } while (exitg2 == 0);
          }
          if (b_bool) {
            i = b_res->size[0];
            b_res->size[0] = res->size[0];
            emxEnsureCapacity_real_T(b_res, i);
            aoffset = res->size[0];
            for (i = 0; i < aoffset; i++) {
              b_res->data[i] = res->data[i] / scale;
            }
            HYPrho(b_res, psifunc_c1_data, psifunc_c1_size, a);
            scale *= sqrt(blockedSummation(a, a->size[0]) / (double)a->size[0] /
                          psifunc_kc1);
            aoffset = res->size[0];
            for (i = 0; i < aoffset; i++) {
              res->data[i] /= scale;
            }
            HYPwei(res, psifunc_c1_data, psifunc_c1_size, outIRWLS_betarw);
            i = outIRWLS_weights->size[0] * outIRWLS_weights->size[1];
            outIRWLS_weights->size[0] = outIRWLS_betarw->size[0];
            outIRWLS_weights->size[1] = 1;
            emxEnsureCapacity_real_T(outIRWLS_weights, i);
            aoffset = outIRWLS_betarw->size[0];
            for (i = 0; i < aoffset; i++) {
              outIRWLS_weights->data[i] = outIRWLS_betarw->data[i];
            }
          } else {
            b_bool = false;
            if (psifunc_class_size[1] == 2) {
              aoffset = 0;
              do {
                exitg2 = 0;
                if (aoffset < 2) {
                  if (psifunc_class_data[aoffset] != cv4[aoffset]) {
                    exitg2 = 1;
                  } else {
                    aoffset++;
                  }
                } else {
                  b_bool = true;
                  exitg2 = 1;
                }
              } while (exitg2 == 0);
            }
            if (b_bool) {
              /* PDrho computes rho function for minimum density power
               * divergence estimator  */
              /*  */
              /* <a href="matlab: docsearchFS('PDrho')">Link to the help
               * function</a> */
              /*  */
              /*   Required input arguments: */
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
              /*  */
              /*   Output: */
              /*  */
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
              /*   Riani, M. Atkinson, A.C., Corbellini A. and Perrotta A.
               * (2020), Robust */
              /*   Regression with Density Power Divergence: Theory, Comparisons
               * and Data */
              /*   Analysis, submitted. */
              /*  */
              /*  Copyright 2008-2021. */
              /*  Written by FSDA team */
              /*  */
              /*  */
              /* <a href="matlab: docsearchFS('PDrho')">Link to the help page
               * for this function</a> */
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
              /*     %% Compare two rho functions for 2 different values of
               * alpha.   */
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
              /*        ['$\alpha=' num2str(alpha2) '\mapsto bdp='
               * num2str(bdp2,2) '\;  eff=' num2str(eff2,2) '$']},... */
              /*        'Interpreter','Latex','Location','SouthEast','FontSize',12)
               */
              /* } */
              /*  Beginning of code */
              i = a_tmp->size[0] * a_tmp->size[1];
              a_tmp->size[0] = 1;
              a_tmp->size[1] = psifunc_c1_size[1];
              emxEnsureCapacity_real_T(a_tmp, i);
              aoffset = psifunc_c1_size[1];
              for (i = 0; i < aoffset; i++) {
                a_tmp->data[i] = -psifunc_c1_data[i];
              }
              i = a->size[0];
              a->size[0] = res->size[0];
              emxEnsureCapacity_real_T(a, i);
              aoffset = res->size[0];
              for (i = 0; i < aoffset; i++) {
                a->data[i] = res->data[i] / scale;
              }
              i = outIRWLS_betarw->size[0];
              outIRWLS_betarw->size[0] = a->size[0];
              emxEnsureCapacity_real_T(outIRWLS_betarw, i);
              aoffset = a->size[0];
              for (k = 0; k < aoffset; k++) {
                outIRWLS_betarw->data[k] = a->data[k] * a->data[k];
              }
              betadiff = 0.0;
              aoffset = a_tmp->size[1];
              for (i = 0; i < aoffset; i++) {
                betadiff += a_tmp->data[i] * (outIRWLS_betarw->data[i] / 2.0);
              }
              scale *= sqrt((1.0 - exp(betadiff)) / psifunc_kc1);
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
              aoffset = res->size[0];
              for (i = 0; i < aoffset; i++) {
                res->data[i] /= scale;
              }
              i = outIRWLS_betarw->size[0];
              outIRWLS_betarw->size[0] = res->size[0];
              emxEnsureCapacity_real_T(outIRWLS_betarw, i);
              aoffset = res->size[0];
              for (k = 0; k < aoffset; k++) {
                outIRWLS_betarw->data[k] = res->data[k] * res->data[k];
              }
              betadiff = 0.0;
              aoffset = a_tmp->size[1];
              for (i = 0; i < aoffset; i++) {
                betadiff += a_tmp->data[i] * (outIRWLS_betarw->data[i] / 2.0);
              }
              /*  Unnormalized weights are */
              /*  w = alpha * exp(- alpha *(u.^2/2)); */
              i = outIRWLS_weights->size[0] * outIRWLS_weights->size[1];
              outIRWLS_weights->size[0] = 1;
              outIRWLS_weights->size[1] = 1;
              emxEnsureCapacity_real_T(outIRWLS_weights, i);
              outIRWLS_weights->data[0] = exp(betadiff);
            }
          }
        }
      }
    }
    i = z1->size[0] * z1->size[1];
    z1->size[0] = outIRWLS_weights->size[0];
    z1->size[1] = outIRWLS_weights->size[1];
    emxEnsureCapacity_real_T(z1, i);
    aoffset = outIRWLS_weights->size[0] * outIRWLS_weights->size[1];
    for (k = 0; k < aoffset; k++) {
      z1->data[k] = sqrt(outIRWLS_weights->data[k]);
    }
    /*  Xw = [X(:,1) .* sqweights X(:,2) .* sqweights ... X(:,end) .* sqweights]
     */
    /*  estimate of beta from (re)weighted regression (RWLS) */
    i = b_res->size[0];
    b_res->size[0] = y->size[0];
    emxEnsureCapacity_real_T(b_res, i);
    aoffset = y->size[0];
    for (i = 0; i < aoffset; i++) {
      b_res->data[i] = y->data[i] * z1->data[i];
    }
    b_bsxfun(X, z1, r);
    mldivide(r, b_res, outIRWLS_betarw);
    /*  exit from the loop if the new beta has singular values. In such a */
    /*  case, any intermediate estimate is not reliable and we can just */
    /*  keep the initialbeta and initial scale. */
    i = x->size[0];
    x->size[0] = outIRWLS_betarw->size[0];
    emxEnsureCapacity_boolean_T(x, i);
    aoffset = outIRWLS_betarw->size[0];
    for (i = 0; i < aoffset; i++) {
      x->data[i] = rtIsNaN(outIRWLS_betarw->data[i]);
    }
    b_bool = false;
    aoffset = 1;
    exitg3 = false;
    while ((!exitg3) && (aoffset <= x->size[0])) {
      if (!x->data[aoffset - 1]) {
        aoffset++;
      } else {
        b_bool = true;
        exitg3 = true;
      }
    }
    if (b_bool) {
      i = outIRWLS_betarw->size[0];
      outIRWLS_betarw->size[0] = initialbeta->size[0];
      emxEnsureCapacity_real_T(outIRWLS_betarw, i);
      aoffset = initialbeta->size[0];
      for (i = 0; i < aoffset; i++) {
        outIRWLS_betarw->data[i] = initialbeta->data[i];
      }
      scale = initialscale;
      i = outIRWLS_weights->size[0] * outIRWLS_weights->size[1];
      outIRWLS_weights->size[0] = 1;
      outIRWLS_weights->size[1] = 1;
      emxEnsureCapacity_real_T(outIRWLS_weights, i);
      outIRWLS_weights->data[0] = rtNaN;
      exitg1 = true;
    } else {
      /*  betadiff is linked to the tolerance (specified in scalar reftol) */
      i = a->size[0];
      a->size[0] = beta->size[0];
      emxEnsureCapacity_real_T(a, i);
      aoffset = beta->size[0];
      for (i = 0; i < aoffset; i++) {
        a->data[i] = beta->data[i] - outIRWLS_betarw->data[i];
      }
      if (a->size[0] == 0) {
        betadiff = 0.0;
      } else {
        betadiff = 0.0;
        i = a->size[0];
        for (k = 0; k < i; k++) {
          betadiff += fabs(a->data[k]);
        }
      }
      if (beta->size[0] == 0) {
        b_y = 0.0;
      } else {
        b_y = 0.0;
        i = beta->size[0];
        for (k = 0; k < i; k++) {
          b_y += fabs(beta->data[k]);
        }
      }
      betadiff /= b_y;
      /*  update residuals and beta */
      mc = X->size[0] - 1;
      inner = X->size[1];
      i = res->size[0];
      res->size[0] = X->size[0];
      emxEnsureCapacity_real_T(res, i);
      for (i = 0; i <= mc; i++) {
        res->data[i] = 0.0;
      }
      for (k = 0; k < inner; k++) {
        aoffset = k * X->size[0];
        for (i = 0; i <= mc; i++) {
          res->data[i] += X->data[aoffset + i] * outIRWLS_betarw->data[k];
        }
      }
      i = res->size[0];
      res->size[0] = y->size[0];
      emxEnsureCapacity_real_T(res, i);
      aoffset = y->size[0];
      for (i = 0; i < aoffset; i++) {
        res->data[i] = y->data[i] - res->data[i];
      }
      i = beta->size[0];
      beta->size[0] = outIRWLS_betarw->size[0];
      emxEnsureCapacity_real_T(beta, i);
      aoffset = outIRWLS_betarw->size[0];
      for (i = 0; i < aoffset; i++) {
        beta->data[i] = outIRWLS_betarw->data[i];
      }
    }
  }
  emxFree_real_T(&r);
  emxFree_real_T(&b_res);
  emxFree_real_T(&a);
  emxFree_boolean_T(&x);
  emxFree_real_T(&z1);
  emxFree_real_T(&a_tmp);
  emxFree_real_T(&beta);
  emxFree_real_T(&res);
  /*  store final estimate of beta */
  /*  store final estimate of scale */
  /*  store final estimate of the weights for each observation */
  *outIRWLS_scalerw = scale;
}

void Sreg(const emxArray_real_T *y, const emxArray_real_T *X, double varargin_2,
          double varargin_4, double varargin_6, double varargin_8,
          double varargin_10, double varargin_12, double varargin_14,
          double varargin_16, const emxArray_char_T *varargin_18,
          const emxArray_real_T *varargin_20, bool varargin_24, j_struct_T *out,
          emxArray_real_T *varargout_1)
{
  static const char b_cv[2] = {'T', 'B'};
  emxArray_boolean_T *r;
  emxArray_int32_T *r1;
  emxArray_real_T b_time_data;
  emxArray_real_T *Xb;
  emxArray_real_T *b_y;
  emxArray_real_T *bestbetas;
  emxArray_real_T *bestscales;
  emxArray_real_T *bestsubset;
  emxArray_real_T *resrw;
  emxArray_real_T *seq;
  emxArray_real_T *tmp_weights;
  creal_T dc;
  double time_data[1000];
  double psifunc_c1_data[5];
  double c_data[4];
  double A=0;
  double B;
  double c=0;
  double d=0;
  double kc=0;
  double kdef;
  double scalerw;
  double scaletest=0;
  double singsub;
  int c_size[2];
  int psifunc_c1_size[2];
  int psifunc_class_size[2];
  int b_i;
  int exitg1;
  int i;
  int i1;
  unsigned int ij;
  int k;
  int loop_ub;
  int loop_ub_tmp;
  int nx;
  int time_size;
  char psifunc_class_data[3];
  bool w;
  /* Sreg computes S estimators in linear regression */
  /*  */
  /* <a href="matlab: docsearchFS('Sreg')">Link to the help function</a> */
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
  /*          bdp :  breakdown point. Scalar. */
  /*                It measures the fraction of outliers */
  /*                the algorithm should resist. In this case any value greater
   */
  /*                than 0 but smaller or equal than 0.5 will do fine. */
  /*                Note that given bdp nominal */
  /*                efficiency is automatically determined. */
  /*                  Example - 'bdp',0.4 */
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
  /*         msg  : Level of output to display. Boolean. It controls whether */
  /*                  to display or not messages on the screen. */
  /*                If msg==true (default) messages are displayed */
  /*                on the screen about estimated time to compute the estimator
   */
  /*                and the warnings about */
  /*                'MATLAB:rankDeficientMatrix', 'MATLAB:singularMatrix' and */
  /*                'MATLAB:nearlySingularMatrix' are set to off. */
  /*                If msg is false no message is displayed on the screen */
  /*                  Example - 'msg',false */
  /*                  Data Types - logical */
  /*  */
  /*        nocheck : Check input arguments. Boolean. If nocheck is equal to */
  /*                true no check is performed on matrix y and matrix X. Notice
   */
  /*                that y and X are left unchanged. In other words the */
  /*                additional column of ones for the intercept is not added. */
  /*                As default nocheck=false. */
  /*                Example - 'nocheck',true */
  /*                Data Types - logical */
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
  /*        yxsave : save option. Scalar. if yxsave is equal to 1, the response
   */
  /*                vector y and data matrix X are saved into the output */
  /*                structure out. Default is 0, i.e. no saving is done. */
  /*                Example - 'yxsave',1 */
  /*                Data Types - double */
  /*  */
  /*        plots : Plot on the screen. Scalar. */
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
  /*  */
  /*   Output: */
  /*  */
  /*   out :     A structure containing the following fields */
  /*  */
  /*             out.beta = vector containing the S estimator of regression */
  /*                        coefficients */
  /*             out.scale= scalar containing the estimate of the scale */
  /*                        (sigma). This is the value of the objective function
   */
  /*               out.bs = p x 1 vector containing the units forming best
   * subset */
  /*                        associated with S estimate of regression
   * coefficient. */
  /*  out.residuals= n x 1 vector containing the estimates of the robust */
  /*                 scaled residuals. */
  /*  out.fittedvalues= n x 1 vector containing the fitted values. */
  /*         out.outliers = this output is present only if conflev has been */
  /*                        specified. It is a vector containing the list of */
  /*                        the units declared as outliers using confidence */
  /*                        level specified in input scalar conflev */
  /*          out.conflev = confidence level which is used to declare outliers.
   */
  /*                        Remark: scalar out.conflev will be used to draw the
   */
  /*                        horizontal line (confidence band) in the plot. */
  /*          out.singsub = Number of subsets wihtout full rank. Notice that */
  /*                        out.singsub > 0.1*(number of subsamples) produces a
   */
  /*                        warning */
  /*          out.weights = n x 1 vector containing the estimates of the weights
   */
  /*          out.rhofunc = string identifying the rho function which has been
   */
  /*                        used */
  /*     out.rhofuncparam = vector which contains the additional parameters */
  /*                        for the specified rho function which have been */
  /*                        used. For hyperbolic rho function the value of k */
  /*                        =sup CVC. For Hampel rho function the parameters a,
   */
  /*                        b and c. If input option argument 'rhofunc' is  not
   */
  /*                        'hyperbolic' or 'hampel' this field is empty. */
  /*             out.y    = response vector Y. The field is present only if
   * option */
  /*                        yxsave is set to 1. */
  /*             out.X    = data matrix X. The field is present only if option
   */
  /*                        yxsave is set to 1. */
  /*            out.class = 'Sreg' */
  /*  */
  /*   Optional Output: */
  /*  */
  /*             C        : matrix containing the indices of the subsamples */
  /*                        extracted for computing the estimate (the so called
   */
  /*                        elemental sets). */
  /*  */
  /*  */
  /*  See also: MMreg, Taureg */
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
  /* <a href="matlab: docsearchFS('Sreg')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Examples: */
  /* { */
  /*     %% Sreg with all default options. */
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
  /*     [out]=Sreg(ycont,X); */
  /*     laby='Scaled S residuals'; */
  /*     titl=''; */
  /*    resindexplot(out.residuals,'title',titl,'laby',laby,'numlab','') */
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
  /*     [out]=Sreg(ycont,X,'rhofunc','optimal'); */
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
  /*     [out]=Sreg(ycont,X,'rhofunc','hyperbolic'); */
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
  /*  Find constant c linked to Tukey's biweight */
  /*  rho biweight is strictly increasing on [0 c] and constant on [c \infty) */
  /*  E(\rho) = kc = (c^2/6)*bdp, being kc the K of Rousseeuw and Leroy */
  /*  c  = TBbdp(bdp,1); */
  /*  kc = bdp*(c^2/6);  % kc = bdp * TBrho(c,c) */
  /*  Find tuning constant c linked to rho function */
  /*  Note that if \rho is standardized in such a way that (\rho(\infty))=1 */
  /*  E(\rho) = kc = bdp */
  if (l_strcmp(varargin_18)) {
    /*  Tukey's biweight is strictly increasing on [0 c] and constant (equal to
     * c^2/6) on [c \infty) */
    /*  E(\rho) = kc = (c^2/6)*bdp = TBrho(c,c)*bdp, being kc the K of Rousseeuw
     */
    /*  and Leroy (1987) */
    /*  Compute tuning constant associated to the requested breakdown */
    /*  point */
    /*  For bdp =0.5 and Tukey biweight rho function c1=0.4046 */
    /*  Remark: given that in function OPTbdp rho function is defined in the
     * interval 0---2c/3, 2c/3---3c/3, >3c/3 */
    /*  it is necessary to divide the output of OPTbdp by 3 */
    /* TBbdp finds the constant c associated to the supplied breakdown point for
     * Tukey's biweight */
    /*  The constant is found through a dichotomic search */
    /*  */
    /*  */
    /* <a href="matlab: docsearchFS('TBbdp')">Link to the help function</a> */
    /*  */
    /*   Required input arguments: */
    /*  */
    /*       bdp    : breakdown point. Scalar. Scalar defining breakdown point
     */
    /*                (i.e a number between 0 and 0.5) */
    /*                Data Types - single|double */
    /*         v    : number of response variables. Scalar. e.g. in regression
     * v=1 */
    /*                Data Types - single|double|int32|int64 */
    /*  */
    /*   Optional input arguments: */
    /*  */
    /*  Output: */
    /*  */
    /*   c : Requested tuning constant. Scalar. Tuning constatnt of Tukey
     * Biweight */
    /*          function associated to requested breakdown point */
    /*  */
    /*  */
    /*  See also: OPTbdp, HYPbdp, HAbdp, PDbdp */
    /*  */
    /*  References: */
    /*  */
    /*  Maronna, R.A., Martin D. and Yohai V.J. (2006), "Robust Statistics,
     * Theory */
    /*  and Methods", Wiley, New York. */
    /*  */
    /*  Copyright 2008-2021. */
    /*  Written by FSDA team */
    /*  */
    /*  */
    /* <a href="matlab: docsearchFS('TBbdp')">Link to the help page for this
     * function</a> */
    /*  */
    /* $LastChangedDate::                      $: Date of the last commit */
    /*  */
    /*  */
    /*  */
    /*  Examples: */
    /*  */
    /* { */
    /*     % Find c given bdp. */
    /*     % The constant c associated to a breakdown point of 50% in regression
     * is */
    /*     % c=1.547644980928226 */
    /*     c=TBbdp(0.5,1) */
    /* } */
    /*  */
    /*  Beginning of code */
    /*  c = starting point of the iteration */
    c = 5.0;
    /*  if bdp>0.0001 */
    /*      c=5; */
    /*  elseif bdp>=0.00003 */
    /*      c=270; */
    /*  else */
    /*      c=350; */
    /*  end */
    /*  step = width of the dichotomic search (it decreases by half at each */
    /*  iteration). Generally it can be smaller. A large value ensures converge
     */
    /*  when bdp is very small and p is very large. */
    kc = 200.0;
    /*  Convergence condition is E(\rho) = \rho(c) bdp */
    /*   where \rho(c) for TBW is c^2/6 */
    kdef = 10.0;
    while (fabs(kdef - 1.0) > 1.0E-11) {
      B = c * c;
      d = B / 2.0;
      dc = gammainc(d, 1.5);
      if (dc.im == 0.0) {
        singsub = dc.re / 2.0;
      } else if (dc.re == 0.0) {
        singsub = 0.0;
      } else {
        singsub = dc.re / 2.0;
      }
      dc = gammainc(d, 2.5);
      kdef = 3.0 * dc.re;
      A = 4.0 * d;
      if (3.0 * dc.im == 0.0) {
        scalerw = kdef / A;
      } else if (kdef == 0.0) {
        scalerw = 0.0;
      } else {
        scalerw = kdef / A;
      }
      dc = gammainc(d, 3.5);
      kdef = 15.0 * dc.re;
      A = 6.0 * rt_powd_snf(c, 4.0);
      if (15.0 * dc.im == 0.0) {
        kdef /= A;
      } else if (kdef == 0.0) {
        kdef = 0.0;
      } else {
        kdef /= A;
      }
      kdef = (((singsub - scalerw) + kdef) +
              B / 6.0 * (1.0 - (gammainc(d, 0.5)).re)) /
             B * (6.0 / varargin_4);
      kc /= 2.0;
      if (kdef > 1.0) {
        c += kc;
      } else {
        c = fmax(c - kc, 0.1);
      }
      /*  disp([step c Erho1]) */
    }
    /*  Remark: */
    /*  chi2cdf(x,v) = gamcdf(x,v/2,2) = gammainc(x ./ 2, v/2); */
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
    /*  */
    /*   Output: */
    /*  */
    /*  */
    /*    rhoTB :      n x 1 vector which contains the Tukey's biweight rho */
    /*                 associated to the residuals or Mahalanobis distances for
     */
    /*                 the n units of the sample. */
    /*  */
    /*  More About: */
    /*  */
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
    /*  that $\rho(c)=1$, so it is the previous expression divided by $(c^2/6)$
     */
    /*  */
    /*  See also HYPrho, HArho, OPTrho */
    /*  */
    /*  References: */
    /*  */
    /*  Maronna, R.A., Martin D. and Yohai V.J. (2006), "Robust Statistics,
     * Theory */
    /*  and Methods", Wiley, New York. */
    /*  Riani, M., Cerioli, A. and Torti, F. (2014), On consistency factors and
     */
    /*  efficiency of robust S-estimators, "TEST", Vol. 23, pp. 356-387. */
    /*  http://dx.doi.org/10.1007/s11749-014-0357-7 */
    /*  */
    /*  Copyright 2008-2021. */
    /*  Written by FSDA team */
    /*  */
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
    w = (fabs(c) <= c);
    kdef = c * c;
    A = rt_powd_snf(c, 4.0);
    kc = (c * c / 2.0 * ((1.0 - kdef / kdef) + A / (3.0 * A)) * (double)w +
          (1.0 - (double)w) * (c * c / 6.0)) *
         varargin_4;
    psifunc_c1_size[0] = 1;
    psifunc_c1_size[1] = 1;
    psifunc_c1_data[0] = c;
    psifunc_class_size[0] = 1;
    psifunc_class_size[1] = 2;
    psifunc_class_data[0] = 'T';
    psifunc_class_data[1] = 'B';
    out->rhofuncparam->size[0] = 0;
    out->rhofuncparam->size[1] = 0;
  } else if (m_strcmp(varargin_18)) {
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
    c = OPTbdp(varargin_4) / 3.0;
    /*  kc1 = E(rho) = sup(rho)*bdp */
    kc = OPTrho(3.0 * c, c) * varargin_4;
    psifunc_c1_size[0] = 1;
    psifunc_c1_size[1] = 1;
    psifunc_c1_data[0] = c;
    psifunc_class_size[0] = 1;
    psifunc_class_size[1] = 3;
    psifunc_class_data[0] = 'O';
    psifunc_class_data[1] = 'P';
    psifunc_class_data[2] = 'T';
    out->rhofuncparam->size[0] = 0;
    out->rhofuncparam->size[1] = 0;
  } else if (n_strcmp(varargin_18)) {
    if ((varargin_20->size[0] == 0) || (varargin_20->size[1] == 0)) {
      kdef = 4.5;
    } else {
      kdef = varargin_20->data[0];
      /*  Instruction necessary for Ccoder */
    }
    i = out->rhofuncparam->size[0] * out->rhofuncparam->size[1];
    out->rhofuncparam->size[0] = 1;
    out->rhofuncparam->size[1] = 1;
    emxEnsureCapacity_real_T(out->rhofuncparam, i);
    out->rhofuncparam->data[0] = kdef;
    /*  Use (if possible) precalculated values of c,A,b,d and kc */
    if ((kdef == 4.0) && (varargin_4 == 0.5)) {
      c = 2.1583250313997269;
      A = 0.0001627074124322223;
      B = 0.006991738279441;
      d = 0.016982948780061;
      kc = 0.010460153813287;
    } else if ((kdef == 4.5) && (varargin_4 == 0.5)) {
      c = 2.0103110820055008;
      A = 0.008931591866092;
      B = 0.051928487236632;
      d = 0.132017481327058;
      kc = 0.074478627985759;
    } else if ((kdef == 5.0) && (varargin_4 == 0.5)) {
      c = 1.9007099688053131;
      A = 0.023186529890225;
      B = 0.083526860351552;
      d = 0.221246910095216;
      kc = 0.116380290077336;
    } else if ((kdef == 4.5) && (varargin_4 == 0.25)) {
      c = 2.6794526457786558;
      A = 0.4641741451154;
      B = 0.588821276233494;
      d = 1.092639541625978;
      kc = 0.410853066399912;
    }
    psifunc_c1_size[0] = 1;
    psifunc_c1_size[1] = 5;
    psifunc_c1_data[0] = c;
    psifunc_c1_data[1] = kdef;
    psifunc_c1_data[2] = A;
    psifunc_c1_data[3] = B;
    psifunc_c1_data[4] = d;
    psifunc_class_size[0] = 1;
    psifunc_class_size[1] = 3;
    psifunc_class_data[0] = 'H';
    psifunc_class_data[1] = 'Y';
    psifunc_class_data[2] = 'P';
  } else if (o_strcmp(varargin_18)) {
    if ((varargin_20->size[0] == 0) || (varargin_20->size[1] == 0)) {
      i = out->rhofuncparam->size[0] * out->rhofuncparam->size[1];
      out->rhofuncparam->size[0] = 1;
      out->rhofuncparam->size[1] = 3;
      emxEnsureCapacity_real_T(out->rhofuncparam, i);
      out->rhofuncparam->data[0] = 2.0;
      out->rhofuncparam->data[1] = 4.0;
      out->rhofuncparam->data[2] = 8.0;
    } else {
      i = out->rhofuncparam->size[0] * out->rhofuncparam->size[1];
      out->rhofuncparam->size[0] = varargin_20->size[0];
      out->rhofuncparam->size[1] = 1;
      emxEnsureCapacity_real_T(out->rhofuncparam, i);
      loop_ub = varargin_20->size[0];
      for (i = 0; i < loop_ub; i++) {
        out->rhofuncparam->data[i] = varargin_20->data[i];
      }
    }
    /*  Compute tuning constant associated to the requested breakdown */
    /*  point */
    c = HAbdp(varargin_4, out->rhofuncparam);
    /*  kc = E(rho) = sup(rho)*bdp */
    c_size[0] = 1;
    c_size[1] = (signed char)out->rhofuncparam->size[1] + 1;
    c_data[0] = c;
    loop_ub = (signed char)out->rhofuncparam->size[1];
    for (i = 0; i < loop_ub; i++) {
      c_data[i + 1] = out->rhofuncparam->data[i];
    }
    kc = HArho(c_data, c_size) * varargin_4;
    psifunc_c1_size[0] = 1;
    psifunc_c1_size[1] = (signed char)out->rhofuncparam->size[1] + 1;
    psifunc_c1_data[0] = c;
    loop_ub = (signed char)out->rhofuncparam->size[1];
    for (i = 0; i < loop_ub; i++) {
      psifunc_c1_data[i + 1] = out->rhofuncparam->data[i];
    }
    psifunc_class_size[0] = 1;
    psifunc_class_size[1] = 2;
    psifunc_class_data[0] = 'H';
    psifunc_class_data[1] = 'A';
  } else if (p_strcmp(varargin_18)) {
    /*  minimum density power divergence estimator */
    /* PDbdp finds the constant alpha associated to the supplied breakdown point
     * for minimum power divergence estimator */
    /*  */
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
    /*   alpha : Requested tuning constant. Scalar. Tuning constatnt of minimum
     */
    /*            power divergence estimator associated to requested breakdown
     * point */
    /*  */
    /*  */
    /*  See also: TBbdp, OPTbdp, HYPbdp, HAbdp */
    /*  */
    /*  References: */
    /*   */
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
    /* <a href="matlab: docsearchFS('PDbdp')">Link to the help page for this
     * function</a> */
    /*  */
    /* $LastChangedDate::                      $: Date of the last commit */
    /*  */
    /*  */
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
    /*  kc1 = E(rho) = sup(rho)*bdp */
    kc = varargin_4;
    psifunc_c1_size[0] = 1;
    psifunc_c1_size[1] = 1;
    psifunc_c1_data[0] = 1.0 / ((1.0 - varargin_4) * (1.0 - varargin_4)) - 1.0;
    psifunc_class_size[0] = 1;
    psifunc_class_size[1] = 2;
    psifunc_class_data[0] = 'P';
    psifunc_class_data[1] = 'D';
    out->rhofuncparam->size[0] = 0;
    out->rhofuncparam->size[1] = 0;
  }
  emxInit_real_T(&bestbetas, 2);
  loop_ub_tmp = (int)varargin_8;
  i = bestbetas->size[0] * bestbetas->size[1];
  bestbetas->size[0] = (int)varargin_8;
  bestbetas->size[1] = X->size[1];
  emxEnsureCapacity_real_T(bestbetas, i);
  loop_ub = (int)varargin_8 * X->size[1];
  for (i = 0; i < loop_ub; i++) {
    bestbetas->data[i] = 0.0;
  }
  emxInit_real_T(&bestsubset, 2);
  i = bestsubset->size[0] * bestsubset->size[1];
  bestsubset->size[0] = (int)varargin_8;
  bestsubset->size[1] = X->size[1];
  emxEnsureCapacity_real_T(bestsubset, i);
  loop_ub = (int)varargin_8 * X->size[1];
  for (i = 0; i < loop_ub; i++) {
    bestsubset->data[i] = 0.0;
  }
  emxInit_real_T(&bestscales, 1);
  i = bestscales->size[0];
  bestscales->size[0] = (int)varargin_8;
  emxEnsureCapacity_real_T(bestscales, i);
  for (i = 0; i < loop_ub_tmp; i++) {
    bestscales->data[i] = rtInf;
  }
  A = rtInf;
  /*  singsub = scalar which will contain the number of singular subsets which
   */
  /*  are extracted (that is the subsets of size p which are not full rank) */
  singsub = 0.0;
  /*  ij is a scalar used to ensure that the best first bestr non singular */
  /*  subsets are stored */
  ij = 1U;
  /*  Extract in the rows of matrix C the indexes of all required subsets */
  subsets(varargin_2, X->size[0], X->size[1], bc(X->size[0], X->size[1]),
          varargout_1, &B);
  /*  Store the indices in varargout */
  /*  initialise and start timer. */
  d = ceil(fmin(B / 100.0, 1000.0));
  nx = (int)d;
  time_size = (int)d;
  if (0 <= nx - 1) {
    memset(&time_data[0], 0, nx * sizeof(double));
  }
  i = (int)B;
  emxInit_real_T(&Xb, 2);
  emxInit_real_T(&tmp_weights, 2);
  emxInit_real_T(&resrw, 1);
  emxInit_real_T(&b_y, 1);
  for (b_i = 0; b_i < i; b_i++) {
    if (b_i + 1U <= (unsigned int)d) {
      b_tic();
    }
    /*  extract a subset of size p */
    loop_ub = varargout_1->size[1];
    nx = X->size[1];
    i1 = Xb->size[0] * Xb->size[1];
    Xb->size[0] = varargout_1->size[1];
    Xb->size[1] = X->size[1];
    emxEnsureCapacity_real_T(Xb, i1);
    for (i1 = 0; i1 < nx; i1++) {
      for (k = 0; k < loop_ub; k++) {
        Xb->data[k + Xb->size[0] * i1] =
            X->data[((int)varargout_1->data[b_i + varargout_1->size[0] * k] +
                     X->size[0] * i1) -
                    1];
      }
    }
    /*  beta estimate */
    loop_ub = varargout_1->size[1];
    i1 = b_y->size[0];
    b_y->size[0] = varargout_1->size[1];
    emxEnsureCapacity_real_T(b_y, i1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_y->data[i1] =
          y->data[(int)varargout_1->data[b_i + varargout_1->size[0] * i1] - 1];
    }
    mldivide(Xb, b_y, out->residuals);
    if ((!rtIsNaN(out->residuals->data[0])) &&
        (!rtIsInf(out->residuals->data[0]))) {
      if (varargin_6 > 0.0) {
        /*  do the refsteps refining steps */
        /*  kc determines the breakdown point */
        /*  c is linked to the biweight function */
        i1 = b_y->size[0];
        b_y->size[0] = out->residuals->size[0];
        emxEnsureCapacity_real_T(b_y, i1);
        loop_ub = out->residuals->size[0] - 1;
        for (i1 = 0; i1 <= loop_ub; i1++) {
          b_y->data[i1] = out->residuals->data[i1];
        }
        IRWLSregS(y, X, b_y, psifunc_c1_data, psifunc_c1_size, kc,
                  psifunc_class_data, psifunc_class_size, varargin_6,
                  varargin_10, out->residuals, &scalerw, tmp_weights);
        mtimes(X, out->residuals, resrw);
        loop_ub = y->size[0];
        i1 = resrw->size[0];
        resrw->size[0] = y->size[0];
        emxEnsureCapacity_real_T(resrw, i1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          resrw->data[i1] = y->data[i1] - resrw->data[i1];
        }
      } else {
        /*  no refining steps */
        mtimes(X, out->residuals, resrw);
        loop_ub = y->size[0];
        i1 = resrw->size[0];
        resrw->size[0] = y->size[0];
        emxEnsureCapacity_real_T(resrw, i1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          resrw->data[i1] = y->data[i1] - resrw->data[i1];
        }
        nx = resrw->size[0];
        i1 = b_y->size[0];
        b_y->size[0] = resrw->size[0];
        emxEnsureCapacity_real_T(b_y, i1);
        for (k = 0; k < nx; k++) {
          b_y->data[k] = fabs(resrw->data[k]);
        }
        scalerw = median(b_y) / 0.6745;
      }
      /*  to find s, save first the best bestr scales (deriving from non */
      /*  singular subsets) and, from iteration bestr+1 (associated to */
      /*  another non singular subset), replace the worst scale */
      /*  with a better one as follows */
      if (ij > varargin_8) {
        /*  compute the objective function using current residuals and */
        /*  the worst estimate of the scale among the bests previously */
        /*  stored */
        /*  scaletest = (1/n) \sum_i=1^n (u_i/(sworst*c)) */
        /*  Use function handle hrho. For example if */
        /*  for optimal psi hrho=OPTrho */
        w = false;
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
              w = true;
              exitg1 = 1;
            }
          } while (exitg1 == 0);
        }
        if (w) {
          i1 = b_y->size[0];
          b_y->size[0] = resrw->size[0];
          emxEnsureCapacity_real_T(b_y, i1);
          loop_ub = resrw->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            b_y->data[i1] = resrw->data[i1] / A;
          }
          scaletest = TBrho(b_y, psifunc_c1_data, psifunc_c1_size);
        } else if (r_strcmp(psifunc_class_data, psifunc_class_size)) {
          i1 = b_y->size[0];
          b_y->size[0] = resrw->size[0];
          emxEnsureCapacity_real_T(b_y, i1);
          loop_ub = resrw->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            b_y->data[i1] = resrw->data[i1] / A;
          }
          b_OPTrho(b_y, psifunc_c1_data, psifunc_c1_size, out->beta);
          scaletest = blockedSummation(out->beta, out->beta->size[0]) /
                      (double)out->beta->size[0];
        } else if (s_strcmp(psifunc_class_data, psifunc_class_size)) {
          i1 = b_y->size[0];
          b_y->size[0] = resrw->size[0];
          emxEnsureCapacity_real_T(b_y, i1);
          loop_ub = resrw->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            b_y->data[i1] = resrw->data[i1] / A;
          }
          b_HArho(b_y, psifunc_c1_data, psifunc_c1_size, out->beta);
          scaletest = blockedSummation(out->beta, out->beta->size[0]) /
                      (double)out->beta->size[0];
        } else if (t_strcmp(psifunc_class_data, psifunc_class_size)) {
          i1 = b_y->size[0];
          b_y->size[0] = resrw->size[0];
          emxEnsureCapacity_real_T(b_y, i1);
          loop_ub = resrw->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            b_y->data[i1] = resrw->data[i1] / A;
          }
          HYPrho(b_y, psifunc_c1_data, psifunc_c1_size, out->beta);
          scaletest = blockedSummation(out->beta, out->beta->size[0]) /
                      (double)out->beta->size[0];
        } else if (u_strcmp(psifunc_class_data, psifunc_class_size)) {
          i1 = out->beta->size[0];
          out->beta->size[0] = resrw->size[0];
          emxEnsureCapacity_real_T(out->beta, i1);
          loop_ub = resrw->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            out->beta->data[i1] = resrw->data[i1] / A;
          }
          /* PDrho computes rho function for minimum density power divergence
           * estimator  */
          /*  */
          /* <a href="matlab: docsearchFS('PDrho')">Link to the help
           * function</a> */
          /*  */
          /*   Required input arguments: */
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
          /*  */
          /*   Output: */
          /*  */
          /*  */
          /*    rhoPD :      n x 1 vector which contains the Minimum density
           * power */
          /*                divergence rho */
          /*                 function associated to the residuals or Mahalanobis
           */
          /*                 distances for the n units of the sample. */
          /*  */
          /*  More About: */
          /*  */
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
          /*   Regression with Density Power Divergence: Theory, Comparisons and
           * Data */
          /*   Analysis, submitted. */
          /*  */
          /*  Copyright 2008-2021. */
          /*  Written by FSDA team */
          /*  */
          /*  */
          /* <a href="matlab: docsearchFS('PDrho')">Link to the help page for
           * this function</a> */
          /*  */
          /* $LastChangedDate::                      $: Date of the last commit
           */
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
          /*     % while in the second we find the efficiency (the value of bdp
           * is */
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
          i1 = b_y->size[0];
          b_y->size[0] = out->beta->size[0];
          emxEnsureCapacity_real_T(b_y, i1);
          nx = out->beta->size[0];
          for (k = 0; k < nx; k++) {
            b_y->data[k] = out->beta->data[k] * out->beta->data[k];
          }
          kdef = 0.0;
          loop_ub = psifunc_c1_size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            kdef += -psifunc_c1_data[i1] * (b_y->data[i1] / 2.0);
          }
          scaletest = 1.0 - exp(kdef);
        }
        if (scaletest < kc) {
          /*  Find position of the maximum value of previously stored */
          /*  best scales */
          c_maximum(bestscales, &kdef, &k);
          bestscales->data[k - 1] = Mscale(
              resrw, psifunc_c1_data, psifunc_c1_size, kc, psifunc_class_data,
              psifunc_class_size, scalerw, varargin_12);
          /* sbest1 = Mscale1(resrw,psifunc,scalerw,minsctol); */
          /* sbest2 = minscale(resrw,psifunc.c1,psifunc.kc1,scalerw,minsctol);
           */
          /* [sbest sbest1 sbest2] */
          /*  Store sbest, betarw and indexes of the units forming the */
          /*  best subset associated with minimum value */
          /*  of the scale */
          loop_ub = out->residuals->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            bestbetas->data[(k + bestbetas->size[0] * i1) - 1] =
                out->residuals->data[i1];
          }
          /*  best subset */
          loop_ub = varargout_1->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            bestsubset->data[(k + bestsubset->size[0] * i1) - 1] =
                varargout_1->data[b_i + varargout_1->size[0] * i1];
          }
          /*  sworst = the best scale among the bestr found up to now */
          A = b_maximum(bestscales);
        }
      } else {
        /* bestscales(ij) = minscale(resrw,psifunc,scalerw,minsctol); */
        bestscales->data[(int)ij - 1] = Mscale(
            resrw, psifunc_c1_data, psifunc_c1_size, kc, psifunc_class_data,
            psifunc_class_size, scalerw, varargin_12);
        loop_ub = out->residuals->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          bestbetas->data[((int)ij + bestbetas->size[0] * i1) - 1] =
              out->residuals->data[i1];
        }
        loop_ub = varargout_1->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          bestsubset->data[((int)ij + bestsubset->size[0] * i1) - 1] =
              varargout_1->data[b_i + varargout_1->size[0] * i1];
        }
        ij++;
      }
    } else {
      singsub++;
    }
    /*  Write total estimate time to compute final estimate */
    if (b_i + 1U <= (unsigned int)d) {
      /*  sampling time until step tsampling */
      time_data[b_i] = b_toc();
    } else if ((b_i + 1U == (unsigned int)((int)d + 1)) && varargin_24) {
      /*  stop sampling and print the estimated time */
      b_time_data.data = &time_data[0];
      b_time_data.size = &time_size;
      b_time_data.allocatedSize = 1000;
      b_time_data.numDimensions = 1;
      b_time_data.canFreeData = false;
      Rprintf("Total estimated time to complete S estimate: %5.2f seconds \n",
             B * median(&b_time_data));
      //fflush(stdout);
    }
  }
  emxFree_real_T(&resrw);
  emxFree_real_T(&Xb);
  emxFree_real_T(&bestscales);
  /*  perform C-steps on best 'bestr' solutions, till convergence or for a */
  /*  maximum of refstepsbestr steps using a convergence tolerance as specified
   */
  /*  by scalar reftolbestr */
  kdef = rtInf;
  /*  Initializations necessary for MATLAB Ccoder */
  loop_ub = bestbetas->size[1];
  i = out->beta->size[0];
  out->beta->size[0] = bestbetas->size[1];
  emxEnsureCapacity_real_T(out->beta, i);
  for (i = 0; i < loop_ub; i++) {
    out->beta->data[i] = bestbetas->data[bestbetas->size[0] * i];
  }
  loop_ub = bestsubset->size[1];
  i = out->bs->size[0] * out->bs->size[1];
  out->bs->size[0] = 1;
  out->bs->size[1] = bestsubset->size[1];
  emxEnsureCapacity_real_T(out->bs, i);
  for (i = 0; i < loop_ub; i++) {
    out->bs->data[i] = bestsubset->data[bestsubset->size[0] * i];
  }
  i = out->weights->size[0] * out->weights->size[1];
  out->weights->size[0] = y->size[0];
  out->weights->size[1] = 1;
  emxEnsureCapacity_real_T(out->weights, i);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->weights->data[i] = y->data[i];
  }
  for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
    loop_ub = bestbetas->size[1];
    i = b_y->size[0];
    b_y->size[0] = bestbetas->size[1];
    emxEnsureCapacity_real_T(b_y, i);
    for (i = 0; i < loop_ub; i++) {
      b_y->data[i] = bestbetas->data[b_i + bestbetas->size[0] * i];
    }
    IRWLSregS(y, X, b_y, psifunc_c1_data, psifunc_c1_size, kc,
              psifunc_class_data, psifunc_class_size, varargin_14, varargin_16,
              out->residuals, &scalerw, tmp_weights);
    if (scalerw < kdef) {
      kdef = scalerw;
      loop_ub = out->residuals->size[0];
      i = out->beta->size[0];
      out->beta->size[0] = out->residuals->size[0];
      emxEnsureCapacity_real_T(out->beta, i);
      for (i = 0; i < loop_ub; i++) {
        out->beta->data[i] = out->residuals->data[i];
      }
      loop_ub = bestsubset->size[1];
      i = out->bs->size[0] * out->bs->size[1];
      out->bs->size[0] = 1;
      out->bs->size[1] = bestsubset->size[1];
      emxEnsureCapacity_real_T(out->bs, i);
      for (i = 0; i < loop_ub; i++) {
        out->bs->data[i] = bestsubset->data[b_i + bestsubset->size[0] * i];
      }
      i = out->weights->size[0] * out->weights->size[1];
      out->weights->size[0] = tmp_weights->size[0];
      out->weights->size[1] = tmp_weights->size[1];
      emxEnsureCapacity_real_T(out->weights, i);
      loop_ub = tmp_weights->size[0] * tmp_weights->size[1];
      for (i = 0; i < loop_ub; i++) {
        out->weights->data[i] = tmp_weights->data[i];
      }
    }
  }
  emxFree_real_T(&tmp_weights);
  emxFree_real_T(&bestsubset);
  emxFree_real_T(&bestbetas);
  /*  Store in output structure \beta, s, best subset and vector of S-weights */
  out->scale = kdef;
  /*  compute and store in output structure the S robust scaled residuals */
  mtimes(X, out->beta, out->residuals);
  i = out->fittedvalues->size[0];
  out->fittedvalues->size[0] = out->residuals->size[0];
  emxEnsureCapacity_real_T(out->fittedvalues, i);
  loop_ub = out->residuals->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->fittedvalues->data[i] = out->residuals->data[i];
  }
  i = out->residuals->size[0];
  out->residuals->size[0] = y->size[0];
  emxEnsureCapacity_real_T(out->residuals, i);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->residuals->data[i] = (y->data[i] - out->residuals->data[i]) / kdef;
  }
  /*  Store in output structure the number of singular subsets */
  out->singsub = singsub;
  /*  Store in output structure the outliers found with confidence level conflev
   */
  out->conflev = 0.95;
  emxInit_real_T(&seq, 2);
  if (X->size[0] < 1) {
    seq->size[0] = 1;
    seq->size[1] = 0;
  } else {
    i = seq->size[0] * seq->size[1];
    seq->size[0] = 1;
    seq->size[1] = X->size[0];
    emxEnsureCapacity_real_T(seq, i);
    loop_ub = X->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      seq->data[i] = (double)i + 1.0;
    }
  }
  kdef = -1.4142135623730951 * erfcinv(1.95);
  nx = out->residuals->size[0];
  i = b_y->size[0];
  b_y->size[0] = out->residuals->size[0];
  emxEnsureCapacity_real_T(b_y, i);
  for (k = 0; k < nx; k++) {
    b_y->data[k] = fabs(out->residuals->data[k]);
  }
  emxInit_boolean_T(&r, 1);
  i = r->size[0];
  r->size[0] = b_y->size[0];
  emxEnsureCapacity_boolean_T(r, i);
  loop_ub = b_y->size[0];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = (b_y->data[i] > kdef);
  }
  emxFree_real_T(&b_y);
  k = r->size[0] - 1;
  nx = 0;
  for (b_i = 0; b_i <= k; b_i++) {
    if (r->data[b_i]) {
      nx++;
    }
  }
  emxInit_int32_T(&r1, 1);
  i = r1->size[0];
  r1->size[0] = nx;
  emxEnsureCapacity_int32_T(r1, i);
  nx = 0;
  for (b_i = 0; b_i <= k; b_i++) {
    if (r->data[b_i]) {
      r1->data[nx] = b_i + 1;
      nx++;
    }
  }
  emxFree_boolean_T(&r);
  i = out->outliers->size[0] * out->outliers->size[1];
  out->outliers->size[0] = 1;
  out->outliers->size[1] = r1->size[0];
  emxEnsureCapacity_real_T(out->outliers, i);
  loop_ub = r1->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->outliers->data[i] = seq->data[r1->data[i] - 1];
  }
  emxFree_int32_T(&r1);
  emxFree_real_T(&seq);
  i = out->rhofunc->size[0] * out->rhofunc->size[1];
  out->rhofunc->size[0] = varargin_18->size[0];
  out->rhofunc->size[1] = varargin_18->size[1];
  emxEnsureCapacity_char_T(out->rhofunc, i);
  loop_ub = varargin_18->size[0] * varargin_18->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->rhofunc->data[i] = varargin_18->data[i];
  }
  /*  In case of Hampel or hyperbolic tangent estimator store the additional */
  /*  parameters which have been used */
  /*  For Hampel store a vector of length 3 containing parameters a, b and c */
  /*  For hyperbolic store the value of k= sup CVC */
  out->class[0] = 'S';
  out->class[1] = 'r';
  out->class[2] = 'e';
  out->class[3] = 'g';
}

/* End of code generation (Sreg.c) */
