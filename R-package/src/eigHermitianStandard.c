/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eigHermitianStandard.c
 *
 * Code generation for function 'eigHermitianStandard'
 *
 */

/* Include files */
#include "eigHermitianStandard.h"
#include "rt_nonfinite.h"
#include "xdlanv2.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void eigHermitianStandard(const double A[4], double V[2])
{
  double T[4];
  double a__3;
  double a__4;
  double aa;
  double ab;
  double ba;
  double bb;
  double cs;
  double htmp2;
  double sn;
  int b_i;
  int i;
  int i1;
  int k;
  bool exitg1;
  bool p;
  T[0] = A[0];
  T[1] = A[1];
  T[2] = A[2];
  T[3] = A[3];
  p = ((!rtIsInf(A[0])) && (!rtIsNaN(A[0])));
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
    T[0] = rtNaN;
    T[3] = rtNaN;
  } else {
    for (i = 1; i + 1 >= 1; i = k - 2) {
      k = i + 1;
      exitg1 = false;
      while ((!exitg1) && (k > 1)) {
        ba = fabs(T[1]);
        if (ba <= 2.0041683600089728E-292) {
          exitg1 = true;
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
        T[1] = 0.0;
      }
      if ((k != i + 1) && (k == i)) {
        b_i = i << 1;
        htmp2 = T[b_i];
        ab = T[i];
        i1 = i + b_i;
        ba = T[i1];
        xdlanv2(&T[0], &htmp2, &ab, &ba, &aa, &bb, &a__3, &a__4, &cs, &sn);
        T[b_i] = htmp2;
        T[i] = ab;
        T[i1] = ba;
        if (2 > i + 1) {
          T[2] = cs * T[2] + sn * T[2];
        }
      }
    }
  }
  V[0] = T[0];
  V[1] = T[3];
}

/* End of code generation (eigHermitianStandard.c) */
