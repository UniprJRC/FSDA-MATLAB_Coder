/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: xzgehrd.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "xzgehrd.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "xzlarf.h"
#include "xzlarfg.h"
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : emxArray_real_T *a
 *                emxArray_real_T *tau
 * Return Type  : void
 */
void xzgehrd(emxArray_real_T *a, emxArray_real_T *tau)
{
  emxArray_real_T *work;
  double alpha1;
  double temp;
  int b_i;
  int c_i;
  int exitg1;
  int i;
  int i1;
  int i2;
  int ia;
  int iac;
  int ic0;
  int im1n;
  int in;
  int iv0;
  int lastc;
  int lastv;
  int n;
  int rowright;
  bool exitg2;
  emxInit_real_T(&work, 1);
  n = a->size[0];
  i = tau->size[0];
  if (a->size[0] < 1) {
    tau->size[0] = 0;
  } else {
    tau->size[0] = a->size[0] - 1;
  }
  emxEnsureCapacity_real_T(tau, i);
  b_i = a->size[0];
  i = work->size[0];
  work->size[0] = b_i;
  emxEnsureCapacity_real_T(work, i);
  for (i = 0; i < b_i; i++) {
    work->data[i] = 0.0;
  }
  i = a->size[0];
  for (c_i = 0; c_i <= i - 2; c_i++) {
    im1n = c_i * n + 2;
    in = (c_i + 1) * n;
    alpha1 = a->data[(c_i + a->size[0] * c_i) + 1];
    b_i = c_i + 3;
    if (b_i >= n) {
      b_i = n;
    }
    temp = b_xzlarfg((n - c_i) - 1, &alpha1, a, b_i + c_i * n);
    tau->data[c_i] = temp;
    a->data[(c_i + a->size[0] * c_i) + 1] = 1.0;
    b_i = (n - c_i) - 3;
    iv0 = (c_i + im1n) - 1;
    ic0 = in + 1;
    if (temp != 0.0) {
      lastv = b_i + 1;
      b_i += iv0;
      while ((lastv + 1 > 0) && (a->data[b_i + 1] == 0.0)) {
        lastv--;
        b_i--;
      }
      lastc = n;
      exitg2 = false;
      while ((!exitg2) && (lastc > 0)) {
        b_i = in + lastc;
        rowright = b_i + lastv * n;
        do {
          exitg1 = 0;
          if (((n > 0) && (b_i <= rowright)) ||
              ((n < 0) && (b_i >= rowright))) {
            if (a->data[b_i - 1] != 0.0) {
              exitg1 = 1;
            } else {
              b_i += n;
            }
          } else {
            lastc--;
            exitg1 = 2;
          }
        } while (exitg1 == 0);
        if (exitg1 == 1) {
          exitg2 = true;
        }
      }
    } else {
      lastv = -1;
      lastc = 0;
    }
    if (lastv + 1 > 0) {
      if (lastc != 0) {
        for (b_i = 0; b_i < lastc; b_i++) {
          work->data[b_i] = 0.0;
        }
        b_i = iv0;
        i1 = (in + n * lastv) + 1;
        for (iac = ic0; n < 0 ? iac >= i1 : iac <= i1; iac += n) {
          i2 = (iac + lastc) - 1;
          for (ia = iac; ia <= i2; ia++) {
            rowright = ia - iac;
            work->data[rowright] += a->data[ia - 1] * a->data[b_i];
          }
          b_i++;
        }
      }
      if (!(-tau->data[c_i] == 0.0)) {
        b_i = in;
        for (rowright = 0; rowright <= lastv; rowright++) {
          i1 = iv0 + rowright;
          if (a->data[i1] != 0.0) {
            temp = a->data[i1] * -tau->data[c_i];
            i1 = b_i + 1;
            i2 = lastc + b_i;
            for (iac = i1; iac <= i2; iac++) {
              a->data[iac - 1] += work->data[(iac - b_i) - 1] * temp;
            }
          }
          b_i += n;
        }
      }
    }
    xzlarf((n - c_i) - 1, (n - c_i) - 1, c_i + im1n, tau->data[c_i], a,
           (c_i + in) + 2, n, work);
    a->data[(c_i + a->size[0] * c_i) + 1] = alpha1;
  }
  emxFree_real_T(&work);
}

/*
 * File trailer for xzgehrd.c
 *
 * [EOF]
 */
