/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * vvarstd.c
 *
 * Code generation for function 'vvarstd'
 *
 */

/* Include files */
#include "vvarstd.h"
#include "blockedSummation.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "xnrm2.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
double vvarstd(const emxArray_real_T *v, int n)
{
  emxArray_real_T *absdiff;
  double s;
  double xbar;
  int k;
  if (n == 0) {
    s = rtNaN;
  } else if (n == 1) {
    if ((!rtIsInf(v->data[0])) && (!rtIsNaN(v->data[0]))) {
      s = 0.0;
    } else {
      s = rtNaN;
    }
  } else {
    emxInit_real_T(&absdiff, 1);
    xbar = blockedSummation(v, n) / (double)n;
    k = absdiff->size[0];
    absdiff->size[0] = v->size[0];
    emxEnsureCapacity_real_T(absdiff, k);
    for (k = 0; k < n; k++) {
      absdiff->data[k] = fabs(v->data[k] - xbar);
    }
    s = b_xnrm2(n, absdiff) / sqrt(n - 1);
    emxFree_real_T(&absdiff);
  }
  return s;
}

/* End of code generation (vvarstd.c) */
