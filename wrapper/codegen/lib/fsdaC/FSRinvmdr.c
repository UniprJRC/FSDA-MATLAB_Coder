/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRinvmdr.c
 *
 * Code generation for function 'FSRinvmdr'
 *
 */

/* Include files */
#include "FSRinvmdr.h"
#include "betainc.h"
#include "eml_erfcore.h"
#include "erfcinv.h"
#include "fsdaC_data.h"
#include "gammainc.h"
#include "gammaln.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void FSRinvmdr(const double mdr[2], double p, double MDRinv[3])
{
  double a;
  double a1;
  double d;
  double dj;
  double fac;
  double logpax;
  double n;
  double old;
  double stirlerr;
  double t;
  double vsq;
  double x;
  double xD0;
  double xsq;
  int b_i;
  int exitg1;
  int i;
  /* FSRinvmdr converts values of minimum deletion residual into confidence
   * levels */
  /*  */
  /* <a href="matlab: docsearchFS('FSRinvmdr')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     mdr : Minimum deletion residuals. Matrix. n-m0 x 2 matrix containing:
   */
  /*           1st col = fwd search index; */
  /*           2nd col = minimum deletion residual . */
  /*     p : Number of explanatory variables. Scalar. Number of explanatory
   * variables of the underlying dataset */
  /*            (including the intercept if present) */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*         n:     size of the sample. Scalar. */
  /*                If it is not specified */
  /*                it is set equal to mdr(end,1)+1 */
  /*                Example - 'n',10 */
  /*                Data Types - double */
  /*  */
  /*    plots :  Plot on the screen. Scalar or structure. */
  /*                It specify whether it is necessary to */
  /*                plot in normal coordinates the value of mdr */
  /*                If plots = 1, a plot which shows the */
  /*                confidence level of mdr in each step is shown on the */
  /*                screen. */
  /*                Remark. three horizontal lines associated respectively with
   */
  /*                values  0.01 0.5 and 0.99  are added to the plot */
  /*                If plots is a structure the user can specify the following
   * options */
  /*                    conflev = vector containing horizontal lines associated
   */
  /*                        with confidence levels */
  /*                    conflevlab = scalar if it is equal 1 labels associated
   * with */
  /*                        horizontal lines are shown on the screen */
  /*                    xlim = minimum and maximum on the x axis */
  /*                    ylim = minimum and maximum on the y axis */
  /*                    LineWidth = Line width of the trajectory of mdr in */
  /*                    normal coordinates */
  /*                    LineStyle = Line style of the */
  /*                    trajectory of mle of transformation parameters */
  /*                    LineWidthEnv = Line width of the horizontal lines */
  /*                    Tag = tag of the plot (default is pl_mdrinv) */
  /*                    FontSize = font size of the text labels which identify
   */
  /*                    the trajectories */
  /*                  Example - 'plots',1 */
  /*                  Data Types - double */
  /*   Output: */
  /*  */
  /*    MDRinv:     Confidence levels. Matrix. Matrix with n-m0 rows (same rows
   */
  /*                of input matrix mdr) and 3 columns: */
  /*                1st col = fwd search index from m0 to n-1. */
  /*                2nd col = confidence level of each value of mdr. */
  /*                3rd col = confidence level in normal coordinates: 50% conf
   */
  /*                level becomes norminv(0.50)=0; 99% conf level becomes
   * norminv(0.99)=2.33. */
  /*  */
  /*  */
  /*  See also FSRenvmdr, LXS.m, FSREDA.m */
  /*  */
  /*  References: */
  /*  */
  /*  Atkinson, A.C. and Riani, M. (2006), Distribution theory and */
  /*  simulations for tests of outliers in regression, "Journal of */
  /*  Computational and Graphical Statistics", Vol. 15, pp. 460-476. */
  /*  Riani, M. and Atkinson, A.C. (2007), Fast calibrations of the forward */
  /*  search for testing multiple outliers in regression, "Advances in Data */
  /*  Analysis and Classification", Vol. 1, pp. 123-141. */
  /*  */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('FSRinvmdr')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % FSRinvmdr with all default options. */
  /*     % Example of finding the confidence level of MDRenv, where MDRenv is */
  /*     % the matrix of 99 per cent confidence envelopes based on 1000 */
  /*     % observations and 5 explanatory variables. */
  /*     % MDinv is a matrix which in the second column contains */
  /*     % all values equal to 0.99 */
  /*     p=5; */
  /*     MDRenv=FSRenvmdr(1000,p,'prob',0.99); */
  /*     MDRinv=FSRinvmdr(MDRenv,p); */
  /* } */
  /* { */
  /*     %% FSRinvmdr with optional arguments. */
  /*     % Example of finding confidence level of mdr for untransformed wool */
  /*     % data. */
  /*     % In the example, the values of mdr are plotted and then transformed */
  /*     % into observed confidence levels. */
  /*     % The output is plotted in normal coordinates. */
  /*  */
  /*     load('wool.txt','wool'); */
  /*     y=wool(:,4); */
  /*     X=wool(:,1:3); */
  /*     % The line below shows the plot of mdr */
  /*     [out]=FSR(y,X,'nsamp',0,'plots',1); */
  /*     MDRinv=FSRinvmdr(out.mdr,size(X,2)+1,'plots',1); */
  /* } */
  /* { */
  /*     % Resuperimposing envelopes. */
  /*     % Comparison of resuperimposing envelopes using mdr coordinates and
   * normal */
  /*     % coordinates again on wool data. */
  /*     load('wool.txt','wool'); */
  /*     y=wool(:,4); */
  /*     X=wool(:,1:3); */
  /*     % The line below shows the plot of mdr */
  /*     [out]=FSR(y,X,'nsamp',0,'plots',2); */
  /*  */
  /*     n0=16:19; */
  /*     quantplo=[0.01 0.5 0.99 0.999 0.9999 0.99999]; */
  /*     ninv=norminv(quantplo); */
  /*     lwdenv=2; */
  /*     ij=0; */
  /*     supn0=max(n0); */
  /*  */
  /*     for jn0=n0; */
  /*         ij=ij+1; */
  /*         MDRinv = FSRinvmdr(out.mdr,4,'n',jn0); */
  /*         % Resuperimposed envelope in normal coordinates */
  /*         subplot(2,2,ij) */
  /*         plot(MDRinv(:,1),norminv(MDRinv(:,2)),'LineWidth',2) */
  /*         xlim([0 supn0]) */
  /*         v=axis; */
  /*         line(v(1:2)',[ninv;ninv],'color','g','LineWidth',lwdenv,'LineStyle','--','Tag','env');
   */
  /*         text(v(1)*ones(length(quantplo),1),ninv',strcat(num2str(100*quantplo'),'%'));
   */
  /*         % line(MDRinv(:,1),norminv(MDRinv(:,2)),'LineWidth',2) */
  /*         title(['Resuperimposed envelope n=' num2str(jn0)]); */
  /*     end */
  /* } */
  /* { */
  /*     % Example with Hospital Data. */
  /*     % Comparison of resuperimposing envelopes using mdr coordinates and
   * normal */
  /*     % coordinates at particular steps. */
  /*     load('hospitalFS.txt'); */
  /*     y=hospitalFS(:,5); */
  /*     X=hospitalFS(:,1:4); */
  /*     % exploratory analysis through the yXplot */
  /*     out=FSR(y,X,'nsamp',20000,'plots',2,'lms',0); */
  /*  */
  /*     n0=[54 58 62 63]; */
  /*     quantplo=[0.01 0.5 0.99 0.999 0.9999 0.99999]; */
  /*     ninv=norminv(quantplo); */
  /*     lwdenv=2; */
  /*     supn0=max(n0); */
  /*  */
  /*     figure; */
  /*     ij=0; */
  /*     for jn0=n0; */
  /*         ij=ij+1; */
  /*         [MDRinv] = FSRinvmdr(out.mdr,5,'n',jn0); */
  /*         % Plot for each step of the fwd search the values of mdr translated
   * in */
  /*         % Plot for each step of the fwd search the values of mdr translated
   * in */
  /*         % terms of normal quantiles */
  /*         subplot(2,2,ij) */
  /*         plot(MDRinv(:,1),norminv(MDRinv(:,2)),'LineWidth',2) */
  /*         xlim([0 supn0]) */
  /*         v=axis; */
  /*         line(v(1:2)',[ninv;ninv],'color','g','LineWidth',lwdenv,'LineStyle','--','Tag','env');
   */
  /*         text(v(1)*ones(length(quantplo),1),ninv',strcat(num2str(100*quantplo'),'%'));
   */
  /*         line(MDRinv(:,1),norminv(MDRinv(:,2)),'LineWidth',2) */
  /*         title(['Resuperimposed envelope n=' num2str(jn0)]); */
  /*     end */
  /*  */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checks */
  /*  Find confidence level of each value of mdr */
  /*  mm = column vector which contains fwd search index. */
  /*  Compute variance of the truncated normal distribution. */
  /*  mm/n is the percentage of observations inside subset. */
  xsq = 0.5 * (mdr[0] / (mdr[0] + 1.0) + 1.0);
  if ((xsq >= 0.0) && (xsq <= 1.0)) {
    a = -1.4142135623730951 * erfcinv(2.0 * xsq);
  } else {
    a = rtNaN;
  }
  x = mdr[1] * sqrt(1.0 - 2.0 * ((mdr[0] + 1.0) / mdr[0]) * a *
                              (exp(-0.5 * a * a) / 2.5066282746310002));
  dj = mdr[0] - p;
  if ((dj > 0.0) && (!rtIsNaN(x))) {
    if (x == 0.0) {
      xsq = 0.5;
    } else if (dj > 1.0E+7) {
      xsq = eml_erfcore(-x / 1.4142135623730951);
      xsq *= 0.5;
    } else if (dj == 1.0) {
      xsq = atan(1.0 / -x) / 3.1415926535897931;
      if (x > 0.0) {
        xsq++;
      }
    } else {
      xsq = x * x;
      if (dj < xsq) {
        xsq = (betainc(dj / (dj + xsq), dj / 2.0, 0.5)).re / 2.0;
      } else {
        xsq = (b_betainc(xsq / (dj + xsq), 0.5, dj / 2.0)).re / 2.0;
      }
      if (x > 0.0) {
        xsq = 1.0 - xsq;
      }
    }
  } else {
    xsq = rtNaN;
  }
  dj = (mdr[0] + 1.0) - mdr[0];
  x = ((-mdr[0] - 1.0) + (mdr[0] + 1.0) / (2.0 * xsq - 1.0)) / dj;
  /*  mdr= 1-confidence level */
  xsq = 2.0 * dj;
  dj = 2.0 * (mdr[0] + 1.0);
  if ((xsq > 0.0) && (!rtIsNaN(x))) {
    if (x > 0.0) {
      if (rtIsInf(x)) {
        xsq = 1.0;
      } else if (rtIsInf(xsq)) {
        if (rtIsInf(dj)) {
          xsq = (x >= 1.0);
        } else {
          x = dj / x / 2.0;
          a = dj / 2.0;
          fac = log(a);
          if (!(x > 0.0)) {
            xsq = 1.0;
          } else if (rtIsInf(a)) {
            if (rtIsInf(x)) {
              xsq = rtNaN;
            } else {
              xsq = 1.0;
            }
          } else if (rtIsInf(x)) {
            xsq = 0.0;
          } else {
            if (a <= 15.0) {
              xsq = 2.0 * a;
              if (xsq == floor(xsq)) {
                stirlerr = dv2[(int)(xsq + 1.0) - 1];
              } else {
                d = a + 1.0;
                gammaln(&d);
                stirlerr = ((d - (a + 0.5) * fac) + a) - 0.91893853320467267;
              }
            } else {
              xsq = a * a;
              stirlerr =
                  ((((0.00084175084175084171 / xsq + -0.00059523809523809529) /
                         xsq +
                     0.00079365079365079365) /
                        xsq +
                    -0.0027777777777777779) /
                       xsq +
                   0.083333333333333329) /
                  a;
            }
            d = a - x;
            a1 = a + x;
            if (fabs(d) > 0.1 * a1) {
              if (a < 2.2250738585072014E-308 * x) {
                xD0 = x;
              } else if ((x < 1.0) && (a > 1.7976931348623157E+308 * x)) {
                xD0 = (a * fac - a * log(x)) - a;
              } else {
                xD0 = (a * log(a / x) + x) - a;
              }
            } else {
              t = x / a;
              dj = (1.0 - t) / (t + 1.0);
              vsq = dj * dj;
              xD0 = d * dj;
              old = xD0;
              xsq = 2.0 * (a * dj);
              dj = 3.0;
              do {
                exitg1 = 0;
                xsq *= vsq;
                xD0 += xsq / dj;
                if (xD0 == old) {
                  exitg1 = 1;
                } else {
                  old = xD0;
                  dj += 2.0;
                }
              } while (exitg1 == 0);
            }
            logpax = (-0.5 * (fac + 1.8378770664093453) - stirlerr) - xD0;
            if (x > 1.0E+6) {
              old = sqrt(x);
              t = fabs(d - 1.0) / old;
              xD0 = t * t;
              if (t < 15.0) {
                dj = 0.70710678118654746 * t;
                xsq = 3.97886080735226 / (dj + 3.97886080735226);
                a1 = 0.5 *
                     ((((((((((((((((((((((0.0012710976495261409 * (xsq - 0.5) +
                                           0.00011931402283834095) *
                                              (xsq - 0.5) +
                                          -0.0039638509736051354) *
                                             (xsq - 0.5) +
                                         -0.00087077963531729586) *
                                            (xsq - 0.5) +
                                        0.0077367252831352668) *
                                           (xsq - 0.5) +
                                       0.0038333512626488732) *
                                          (xsq - 0.5) +
                                      -0.012722381378212275) *
                                         (xsq - 0.5) +
                                     -0.013382364453346007) *
                                        (xsq - 0.5) +
                                    0.016131532973325226) *
                                       (xsq - 0.5) +
                                   0.039097684558848406) *
                                      (xsq - 0.5) +
                                  0.0024936720005350331) *
                                     (xsq - 0.5) +
                                 -0.0838864557023002) *
                                    (xsq - 0.5) +
                                -0.11946395996432542) *
                                   (xsq - 0.5) +
                               0.016620792496936737) *
                                  (xsq - 0.5) +
                              0.35752427444953105) *
                                 (xsq - 0.5) +
                             0.80527640875291062) *
                                (xsq - 0.5) +
                            1.1890298290927332) *
                               (xsq - 0.5) +
                           1.3704021768233816) *
                              (xsq - 0.5) +
                          1.313146538310231) *
                             (xsq - 0.5) +
                         1.0792551515585667) *
                            (xsq - 0.5) +
                        0.77436819911953858) *
                           (xsq - 0.5) +
                       0.49016508058531844) *
                          (xsq - 0.5) +
                      0.27537474159737679) *
                     xsq * exp(-dj * dj) * 2.5066282746310002 * exp(0.5 * xD0);
                dj = (a1 * ((xD0 - 3.0) * t) - (xD0 - 4.0)) / 6.0;
                vsq = (a1 * ((xD0 * xD0 - 9.0) * xD0 + 6.0) -
                       ((xD0 - 1.0) * xD0 - 6.0) * t) /
                      72.0;
                xsq =
                    (a1 * (((((5.0 * xD0 + 45.0) * xD0 - 81.0) * xD0 - 315.0) *
                                xD0 +
                            270.0) *
                           t) -
                     ((((5.0 * xD0 + 40.0) * xD0 - 111.0) * xD0 - 174.0) * xD0 +
                      192.0)) /
                    6480.0;
              } else {
                a1 = (((3.0 - 15.0 / xD0) / xD0 + -1.0) / xD0 + 1.0) / t;
                dj = (((25.0 - 210.0 / xD0) / xD0 + -4.0) / xD0 + 1.0) / xD0;
                vsq = (((130.0 - 1750.0 / xD0) / xD0 + -11.0) / xD0 + 1.0) /
                      (xD0 * t);
                xsq = (((546.0 - 11368.0 / xD0) / xD0 + -26.0) / xD0 + 1.0) /
                      (xD0 * xD0);
              }
              if (x < a - 1.0) {
                xsq = a *
                      (((a1 / old - dj / x) + vsq / (x * old)) - xsq / (x * x));
                if (logpax < 709.782712893384) {
                  logpax = exp(logpax) * xsq;
                } else {
                  logpax = exp(logpax + log(xsq));
                }
                xsq = 1.0 - logpax;
              } else {
                xsq = a *
                      (((a1 / old + dj / x) + vsq / (x * old)) + xsq / (x * x));
                if (logpax < 709.782712893384) {
                  xsq *= exp(logpax);
                } else {
                  xsq = exp(logpax + log(xsq));
                }
              }
            } else if (x < a) {
              n = 1.0;
              if (x > 2.2204460492503131E-16 * a) {
                fac = x / a;
                n = 2.0;
                do {
                  exitg1 = 0;
                  fac = x * fac / (a + (n - 1.0));
                  if (fac < 2.2204460492503131E-16) {
                    exitg1 = 1;
                  } else {
                    n++;
                  }
                } while (exitg1 == 0);
              }
              xsq = 0.0;
              i = (int)(((-1.0 - (n - 1.0)) + 1.0) / -1.0);
              for (b_i = 0; b_i < i; b_i++) {
                xsq = x * (xsq + 1.0) / (a + ((n - 1.0) + -(double)b_i));
              }
              xsq++;
              if (logpax < 709.782712893384) {
                xsq *= exp(logpax);
              } else {
                xsq = exp(logpax + log(xsq));
              }
              if (xsq > 1.0) {
                xsq = 1.0;
              }
              xsq = 1.0 - xsq;
            } else {
              fac = 1.0;
              n = 1.0;
              do {
                exitg1 = 0;
                d = floor(a1);
                if (n <= d) {
                  fac = (a - n) * fac / x;
                  if (fabs(fac) < 2.2204460492503131E-16) {
                    exitg1 = 1;
                  } else {
                    n++;
                  }
                } else {
                  exitg1 = 1;
                }
              } while (exitg1 == 0);
              if (n <= d) {
                xsq = 1.0;
              } else {
                n = floor(a);
                dj = a - n;
                if (dj == 0.0) {
                  xsq = 1.0;
                } else if (dj == 0.5) {
                  dj = 0.70710678118654746 * sqrt(2.0 * x);
                  t = 3.97886080735226 / (dj + 3.97886080735226);
                  xsq = sqrt(3.1415926535897931 * x) * exp(x) *
                        (2.0 * (0.5 *
                                ((((((((((((((((((((((0.0012710976495261409 *
                                                          (t - 0.5) +
                                                      0.00011931402283834095) *
                                                         (t - 0.5) +
                                                     -0.0039638509736051354) *
                                                        (t - 0.5) +
                                                    -0.00087077963531729586) *
                                                       (t - 0.5) +
                                                   0.0077367252831352668) *
                                                      (t - 0.5) +
                                                  0.0038333512626488732) *
                                                     (t - 0.5) +
                                                 -0.012722381378212275) *
                                                    (t - 0.5) +
                                                -0.013382364453346007) *
                                                   (t - 0.5) +
                                               0.016131532973325226) *
                                                  (t - 0.5) +
                                              0.039097684558848406) *
                                                 (t - 0.5) +
                                             0.0024936720005350331) *
                                                (t - 0.5) +
                                            -0.0838864557023002) *
                                               (t - 0.5) +
                                           -0.11946395996432542) *
                                              (t - 0.5) +
                                          0.016620792496936737) *
                                             (t - 0.5) +
                                         0.35752427444953105) *
                                            (t - 0.5) +
                                        0.80527640875291062) *
                                           (t - 0.5) +
                                       1.1890298290927332) *
                                          (t - 0.5) +
                                      1.3704021768233816) *
                                         (t - 0.5) +
                                     1.313146538310231) *
                                        (t - 0.5) +
                                    1.0792551515585667) *
                                       (t - 0.5) +
                                   0.77436819911953858) *
                                      (t - 0.5) +
                                  0.49016508058531844) *
                                     (t - 0.5) +
                                 0.27537474159737679) *
                                t * exp(-dj * dj)));
                  n++;
                } else {
                  vsq = 1.0;
                  a1 = x;
                  xD0 = 0.0;
                  old = 1.0;
                  fac = 1.0 / x;
                  n = 1.0;
                  xsq = fac;
                  stirlerr = 0.0;
                  while (fabs(xsq - stirlerr) > 2.2204460492503131E-16 * xsq) {
                    stirlerr = xsq;
                    xsq = n - dj;
                    vsq = (a1 + vsq * xsq) * fac;
                    xD0 = (old + xD0 * xsq) * fac;
                    xsq = n * fac;
                    a1 = x * vsq + xsq * a1;
                    old = x * xD0 + xsq * old;
                    fac = 1.0 / a1;
                    xsq = old * fac;
                    n++;
                  }
                  xsq *= x;
                  n = floor(a) + 1.0;
                }
              }
              i = (int)(((-1.0 - (n - 1.0)) + 1.0) / -1.0);
              for (b_i = 0; b_i < i; b_i++) {
                xsq = (a - ((n - 1.0) + -(double)b_i)) * xsq / x + 1.0;
              }
              xsq = xsq * a / x;
              if (logpax < 709.782712893384) {
                xsq *= exp(logpax);
              } else {
                xsq = exp(logpax + log(xsq));
              }
              if (xsq > 1.0) {
                xsq = 1.0;
              }
            }
          }
        }
      } else if (rtIsInf(dj)) {
        xsq = (gammainc(xsq * x / 2.0, xsq / 2.0)).re;
      } else {
        d = x * xsq;
        if (dj <= d) {
          xsq = (b_betainc(dj / (dj + d), dj / 2.0, xsq / 2.0)).re;
        } else {
          xsq = (betainc(d / (d + dj), xsq / 2.0, dj / 2.0)).re;
        }
      }
    } else {
      xsq = 0.0;
    }
  } else {
    xsq = rtNaN;
  }
  /*  mdrt = confidence level */
  /*  Confidence level in normal coordinates */
  /*  One may wonder why mmdncoo cannot be computed as follows */
  /*  mmdncoo=norminv(mmt); */
  /*  The reason is that while norminv(1-\epsilon)=inf but */
  /*  -norminv(\epsilon) is exact where \epsilon is a very very small number */
  if ((xsq >= 0.0) && (xsq <= 1.0)) {
    x = -1.4142135623730951 * erfcinv(2.0 * xsq);
  } else {
    x = rtNaN;
  }
  MDRinv[0] = mdr[0];
  MDRinv[1] = 1.0 - xsq;
  MDRinv[2] = -x;
  /*  Plotting part */
}

/* End of code generation (FSRinvmdr.c) */
