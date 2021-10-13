/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzgehrd.c
 *
 * Code generation for function 'xzgehrd'
 *
 */

/* Include files */
#include "xzgehrd.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "xzlarf.h"
#include "xzlarfg.h"
#include <string.h>

/* Function Definitions */
void xzgehrd(emxArray_real_T *a, emxArray_real_T *tau)
{
  emxArray_real_T *work;
  double alpha1;
  double temp;
  double *a_data;
  double *tau_data;
  double *work_data;
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
  a_data = a->data;
  emxInit_real_T(&work, 1);
  n = a->size[0];
  i = tau->size[0];
  if (a->size[0] < 1) {
    tau->size[0] = 0;
  } else {
    tau->size[0] = a->size[0] - 1;
  }
  emxEnsureCapacity_real_T(tau, i);
  tau_data = tau->data;
  b_i = a->size[0];
  i = work->size[0];
  work->size[0] = b_i;
  emxEnsureCapacity_real_T(work, i);
  work_data = work->data;
  for (i = 0; i < b_i; i++) {
    work_data[i] = 0.0;
  }
  i = a->size[0];
  for (c_i = 0; c_i <= i - 2; c_i++) {
    im1n = c_i * n + 2;
    in = (c_i + 1) * n;
    alpha1 = a_data[(c_i + a->size[0] * c_i) + 1];
    b_i = c_i + 3;
    if (b_i > n) {
      b_i = n;
    }
    temp = b_xzlarfg((n - c_i) - 1, &alpha1, a, b_i + c_i * n);
    a_data = a->data;
    tau_data[c_i] = temp;
    a_data[(c_i + a->size[0] * c_i) + 1] = 1.0;
    b_i = (n - c_i) - 3;
    iv0 = (c_i + im1n) - 1;
    ic0 = in + 1;
    if (temp != 0.0) {
      lastv = b_i + 1;
      b_i += iv0;
      while ((lastv + 1 > 0) && (a_data[b_i + 1] == 0.0)) {
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
            if (a_data[b_i - 1] != 0.0) {
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
          work_data[b_i] = 0.0;
        }
        b_i = iv0;
        i1 = (in + n * lastv) + 1;
        for (iac = ic0; n < 0 ? iac >= i1 : iac <= i1; iac += n) {
          i2 = (iac + lastc) - 1;
          for (ia = iac; ia <= i2; ia++) {
            rowright = ia - iac;
            work_data[rowright] += a_data[ia - 1] * a_data[b_i];
          }
          b_i++;
        }
      }
      if (!(-tau_data[c_i] == 0.0)) {
        b_i = in;
        for (rowright = 0; rowright <= lastv; rowright++) {
          i1 = iv0 + rowright;
          if (a_data[i1] != 0.0) {
            temp = a_data[i1] * -tau_data[c_i];
            i1 = b_i + 1;
            i2 = lastc + b_i;
            for (ic0 = i1; ic0 <= i2; ic0++) {
              a_data[ic0 - 1] += work_data[(ic0 - b_i) - 1] * temp;
            }
          }
          b_i += n;
        }
      }
    }
    xzlarf((n - c_i) - 1, (n - c_i) - 1, c_i + im1n, tau_data[c_i], a,
           (c_i + in) + 2, n, work);
    work_data = work->data;
    a_data = a->data;
    a_data[(c_i + a->size[0] * c_i) + 1] = alpha1;
  }
  emxFree_real_T(&work);
}

/* End of code generation (xzgehrd.c) */
