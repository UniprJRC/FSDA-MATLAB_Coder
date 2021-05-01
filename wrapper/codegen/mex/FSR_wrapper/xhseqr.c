/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xhseqr.c
 *
 * Code generation for function 'xhseqr'
 *
 */

/* Include files */
#include "xhseqr.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Function Definitions */
int32_T xhseqr(real_T h[4])
{
  real_T aa;
  real_T ab;
  real_T b_x_tmp;
  real_T ba;
  real_T bb;
  real_T cs;
  real_T d;
  real_T htmp2;
  real_T s;
  real_T sn;
  real_T x;
  int32_T b_i;
  int32_T b_y;
  int32_T i;
  int32_T k;
  int32_T x_tmp;
  int32_T y;
  boolean_T exitg1;
  for (i = 1; i + 1 >= 1; i = k - 2) {
    k = i + 1;
    exitg1 = false;
    while ((!exitg1) && (k > 1)) {
      ba = muDoubleScalarAbs(h[1]);
      if (ba <= 2.0041683600089728E-292) {
        exitg1 = true;
      } else {
        bb = muDoubleScalarAbs(h[3]);
        if (ba <= 2.2204460492503131E-16 * (muDoubleScalarAbs(h[0]) + bb)) {
          htmp2 = muDoubleScalarAbs(h[2]);
          if (ba > htmp2) {
            ab = ba;
            ba = htmp2;
          } else {
            ab = htmp2;
          }
          htmp2 = muDoubleScalarAbs(h[0] - h[3]);
          if (bb > htmp2) {
            aa = bb;
            bb = htmp2;
          } else {
            aa = htmp2;
          }
          s = aa + ab;
          if (ba * (ab / s) <=
              muDoubleScalarMax(2.0041683600089728E-292,
                                2.2204460492503131E-16 * (bb * (aa / s)))) {
            exitg1 = true;
          } else {
            k = 1;
          }
        } else {
          k = 1;
        }
      }
    }
    if (k > 1) {
      h[1] = 0.0;
    }
    if ((k != i + 1) && (k == i)) {
      d = h[0];
      x_tmp = i << 1;
      b_x_tmp = h[x_tmp];
      x = h[i];
      b_i = i + x_tmp;
      bb = h[b_i];
      aa = bb;
      if (h[i] == 0.0) {
        cs = 1.0;
        sn = 0.0;
      } else if (b_x_tmp == 0.0) {
        cs = 0.0;
        sn = 1.0;
        aa = h[0];
        d = bb;
        b_x_tmp = -h[i];
        x = 0.0;
      } else {
        bb = h[0] - bb;
        if ((bb == 0.0) && ((b_x_tmp < 0.0) != (h[i] < 0.0))) {
          cs = 1.0;
          sn = 0.0;
        } else {
          aa = 0.5 * bb;
          htmp2 = muDoubleScalarAbs(b_x_tmp);
          ab = muDoubleScalarMax(htmp2, muDoubleScalarAbs(h[i]));
          if (!(h[x_tmp] < 0.0)) {
            y = 1;
          } else {
            y = -1;
          }
          if (!(h[i] < 0.0)) {
            b_y = 1;
          } else {
            b_y = -1;
          }
          s = muDoubleScalarMin(htmp2, muDoubleScalarAbs(h[i])) * (real_T)y *
              (real_T)b_y;
          htmp2 = muDoubleScalarMax(muDoubleScalarAbs(aa), ab);
          ba = aa / htmp2 * aa + ab / htmp2 * s;
          if (ba >= 8.8817841970012523E-16) {
            htmp2 = muDoubleScalarSqrt(htmp2) * muDoubleScalarSqrt(ba);
            if (aa < 0.0) {
              htmp2 = -htmp2;
            }
            ba = aa + htmp2;
            bb = h[b_i];
            d = bb + ba;
            aa = bb - ab / ba * s;
            bb = muDoubleScalarHypot(h[i], ba);
            cs = ba / bb;
            sn = h[i] / bb;
            b_x_tmp = h[x_tmp] - h[i];
            x = 0.0;
          } else {
            htmp2 = h[x_tmp] + h[i];
            bb = muDoubleScalarHypot(htmp2, bb);
            cs =
                muDoubleScalarSqrt(0.5 * (muDoubleScalarAbs(htmp2) / bb + 1.0));
            if (!(htmp2 < 0.0)) {
              y = 1;
            } else {
              y = -1;
            }
            sn = -(aa / (bb * cs)) * (real_T)y;
            s = h[x_tmp];
            aa = h[0] * cs + s * sn;
            bb = -h[0] * sn + s * cs;
            htmp2 = h[b_i];
            s = h[i] * cs + htmp2 * sn;
            htmp2 = -h[i] * sn + htmp2 * cs;
            b_x_tmp = bb * cs + htmp2 * sn;
            x = -aa * sn + s * cs;
            ba = 0.5 * ((aa * cs + s * sn) + (-bb * sn + htmp2 * cs));
            d = ba;
            aa = ba;
            if (x != 0.0) {
              if (b_x_tmp != 0.0) {
                if ((b_x_tmp < 0.0) == (x < 0.0)) {
                  s = muDoubleScalarSqrt(muDoubleScalarAbs(b_x_tmp));
                  ab = muDoubleScalarSqrt(muDoubleScalarAbs(x));
                  htmp2 = s * ab;
                  if (!(x < 0.0)) {
                    aa = htmp2;
                  } else {
                    aa = -htmp2;
                  }
                  bb = 1.0 / muDoubleScalarSqrt(muDoubleScalarAbs(b_x_tmp + x));
                  d = ba + aa;
                  aa = ba - aa;
                  b_x_tmp -= x;
                  x = 0.0;
                  s *= bb;
                  htmp2 = ab * bb;
                  ba = cs * s - sn * htmp2;
                  sn = cs * htmp2 + sn * s;
                  cs = ba;
                }
              } else {
                b_x_tmp = -x;
                x = 0.0;
                ba = cs;
                cs = -sn;
                sn = ba;
              }
            }
          }
        }
      }
      h[0] = d;
      h[x_tmp] = b_x_tmp;
      h[i] = x;
      h[b_i] = aa;
      if (2 > i + 1) {
        s = cs * h[2];
        htmp2 = sn * h[2];
        h[2] = s - htmp2;
        h[2] = s + htmp2;
      }
    }
  }
  return 0;
}

/* End of code generation (xhseqr.c) */
