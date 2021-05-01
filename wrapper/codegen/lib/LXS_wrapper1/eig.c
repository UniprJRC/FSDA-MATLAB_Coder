/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eig.c
 *
 * Code generation for function 'eig'
 *
 */

/* Include files */
#include "eig.h"
#include "LXS_wrapper1_rtwutil.h"
#include "eigStandard.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
void eig(const double A[4], creal_T V[2])
{
  double T[4];
  double aa;
  double ab;
  double b_p;
  double b_x_tmp;
  double ba;
  double bb;
  double cs;
  double d;
  double d1;
  double htmp2;
  double sn;
  double tau;
  double x;
  int b_i;
  int b_y;
  int exitg1;
  int i;
  int k;
  int x_tmp;
  int y;
  bool b;
  bool b1;
  bool exitg2;
  bool p;
  b = !rtIsInf(A[0]);
  b1 = !rtIsNaN(A[0]);
  p = (b && b1);
  if ((!p) || (rtIsInf(A[1]) || rtIsNaN(A[1]))) {
    p = false;
  }
  if ((!p) || (rtIsInf(A[2]) || rtIsNaN(A[2]))) {
    p = false;
  }
  if ((!p) || (rtIsInf(A[3]) || rtIsNaN(A[3]))) {
    p = false;
  }
  if (!p) {
    V[0].re = rtNaN;
    V[0].im = 0.0;
    V[1].re = rtNaN;
    V[1].im = 0.0;
  } else {
    p = true;
    k = 0;
    exitg2 = false;
    while ((!exitg2) && (k < 2)) {
      i = 0;
      do {
        exitg1 = 0;
        if (i <= k) {
          if (!(A[i + (k << 1)] == A[k + (i << 1)])) {
            p = false;
            exitg1 = 1;
          } else {
            i++;
          }
        } else {
          k++;
          exitg1 = 2;
        }
      } while (exitg1 == 0);
      if (exitg1 == 1) {
        exitg2 = true;
      }
    }
    if (p) {
      T[0] = A[0];
      p = (b && b1);
      if ((!p) || (rtIsInf(A[1]) || rtIsNaN(A[1]))) {
        p = false;
      }
      T[2] = A[2];
      if ((!p) || (rtIsInf(A[2]) || rtIsNaN(A[2]))) {
        p = false;
      }
      T[3] = A[3];
      if ((!p) || (rtIsInf(A[3]) || rtIsNaN(A[3]))) {
        p = false;
      }
      if (!p) {
        T[0] = rtNaN;
        T[3] = rtNaN;
      } else {
        T[1] = A[1];
        for (i = 1; i + 1 >= 1; i = k - 2) {
          k = i + 1;
          exitg2 = false;
          while ((!exitg2) && (k > 1)) {
            ba = fabs(T[1]);
            if (ba <= 2.0041683600089728E-292) {
              exitg2 = true;
            } else {
              bb = fabs(T[3]);
              if (ba <= 2.2204460492503131E-16 * (fabs(T[0]) + bb)) {
                htmp2 = fabs(T[2]);
                if (ba > htmp2) {
                  ab = ba;
                  ba = htmp2;
                } else {
                  ab = htmp2;
                }
                htmp2 = fabs(T[0] - T[3]);
                if (bb > htmp2) {
                  aa = bb;
                  bb = htmp2;
                } else {
                  aa = htmp2;
                }
                htmp2 = aa + ab;
                if (ba * (ab / htmp2) <=
                    fmax(2.0041683600089728E-292,
                         2.2204460492503131E-16 * (bb * (aa / htmp2)))) {
                  exitg2 = true;
                } else {
                  k = 1;
                }
              } else {
                k = 1;
              }
            }
          }
          if (k > 1) {
            T[1] = 0.0;
          }
          if ((k != i + 1) && (k == i)) {
            d = T[0];
            x_tmp = i << 1;
            b_x_tmp = T[x_tmp];
            x = T[i];
            b_i = i + x_tmp;
            d1 = T[b_i];
            b_p = d1;
            if (T[i] == 0.0) {
              cs = 1.0;
              sn = 0.0;
            } else if (b_x_tmp == 0.0) {
              cs = 0.0;
              sn = 1.0;
              b_p = T[0];
              d = d1;
              b_x_tmp = -T[i];
              x = 0.0;
            } else {
              bb = T[0] - d1;
              if ((bb == 0.0) && ((b_x_tmp < 0.0) != (T[i] < 0.0))) {
                cs = 1.0;
                sn = 0.0;
              } else {
                b_p = 0.5 * bb;
                htmp2 = fabs(b_x_tmp);
                ab = fabs(T[i]);
                aa = fmax(htmp2, ab);
                if (!(b_x_tmp < 0.0)) {
                  y = 1;
                } else {
                  y = -1;
                }
                if (!(T[i] < 0.0)) {
                  b_y = 1;
                } else {
                  b_y = -1;
                }
                ab = fmin(htmp2, ab) * (double)y * (double)b_y;
                htmp2 = fmax(fabs(b_p), aa);
                ba = b_p / htmp2 * b_p + aa / htmp2 * ab;
                if (ba >= 8.8817841970012523E-16) {
                  ba = sqrt(htmp2) * sqrt(ba);
                  if (b_p < 0.0) {
                    ba = -ba;
                  }
                  ba += b_p;
                  d = d1 + ba;
                  b_p = d1 - aa / ba * ab;
                  tau = rt_hypotd_snf(T[i], ba);
                  cs = ba / tau;
                  sn = T[i] / tau;
                  b_x_tmp -= T[i];
                  x = 0.0;
                } else {
                  htmp2 = b_x_tmp + T[i];
                  tau = rt_hypotd_snf(htmp2, bb);
                  cs = sqrt(0.5 * (fabs(htmp2) / tau + 1.0));
                  if (!(htmp2 < 0.0)) {
                    y = 1;
                  } else {
                    y = -1;
                  }
                  sn = -(b_p / (tau * cs)) * (double)y;
                  aa = T[0] * cs + b_x_tmp * sn;
                  bb = -T[0] * sn + b_x_tmp * cs;
                  ab = T[i] * cs + d1 * sn;
                  htmp2 = -T[i] * sn + d1 * cs;
                  b_x_tmp = bb * cs + htmp2 * sn;
                  x = -aa * sn + ab * cs;
                  bb = 0.5 * ((aa * cs + ab * sn) + (-bb * sn + htmp2 * cs));
                  d = bb;
                  b_p = bb;
                  if (x != 0.0) {
                    if (b_x_tmp != 0.0) {
                      if ((b_x_tmp < 0.0) == (x < 0.0)) {
                        htmp2 = sqrt(fabs(b_x_tmp));
                        aa = sqrt(fabs(x));
                        ba = htmp2 * aa;
                        if (!(x < 0.0)) {
                          b_p = ba;
                        } else {
                          b_p = -ba;
                        }
                        tau = 1.0 / sqrt(fabs(b_x_tmp + x));
                        d = bb + b_p;
                        b_p = bb - b_p;
                        b_x_tmp -= x;
                        x = 0.0;
                        ab = htmp2 * tau;
                        htmp2 = aa * tau;
                        bb = cs * ab - sn * htmp2;
                        sn = cs * htmp2 + sn * ab;
                        cs = bb;
                      }
                    } else {
                      b_x_tmp = -x;
                      x = 0.0;
                      bb = cs;
                      cs = -sn;
                      sn = bb;
                    }
                  }
                }
              }
            }
            T[0] = d;
            T[x_tmp] = b_x_tmp;
            T[i] = x;
            T[b_i] = b_p;
            if (2 > i + 1) {
              T[2] = cs * T[2] + sn * T[2];
            }
          }
        }
      }
      V[0].re = T[0];
      V[0].im = 0.0;
      V[1].re = T[3];
      V[1].im = 0.0;
    } else {
      eigStandard(A, V);
    }
  }
}

/* End of code generation (eig.c) */
