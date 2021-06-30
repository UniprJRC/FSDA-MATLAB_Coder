/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzlascl.c
 *
 * Code generation for function 'xzlascl'
 *
 */

/* Include files */
#include "xzlascl.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void b_xzlascl(double cfrom, double cto, emxArray_creal_T *A)
{
  double a;
  double cfrom1;
  double cfromc;
  double cto1;
  double ctoc;
  int i;
  int loop_ub;
  bool notdone;
  cfromc = cfrom;
  ctoc = cto;
  notdone = true;
  while (notdone) {
    cfrom1 = cfromc * 2.0041683600089728E-292;
    cto1 = ctoc / 4.9896007738368E+291;
    if ((fabs(cfrom1) > fabs(ctoc)) && (ctoc != 0.0)) {
      a = 2.0041683600089728E-292;
      cfromc = cfrom1;
    } else if (fabs(cto1) > fabs(cfromc)) {
      a = 4.9896007738368E+291;
      ctoc = cto1;
    } else {
      a = ctoc / cfromc;
      notdone = false;
    }
    loop_ub = A->size[0];
    for (i = 0; i < loop_ub; i++) {
      A->data[i].re *= a;
      A->data[i].im *= a;
    }
  }
}

void xzlascl(double cfrom, double cto, emxArray_creal_T *A)
{
  double a;
  double cfrom1;
  double cfromc;
  double cto1;
  double ctoc;
  int b_loop_ub;
  int i;
  int i1;
  int loop_ub;
  bool notdone;
  cfromc = cfrom;
  ctoc = cto;
  notdone = true;
  while (notdone) {
    cfrom1 = cfromc * 2.0041683600089728E-292;
    cto1 = ctoc / 4.9896007738368E+291;
    if ((fabs(cfrom1) > fabs(ctoc)) && (ctoc != 0.0)) {
      a = 2.0041683600089728E-292;
      cfromc = cfrom1;
    } else if (fabs(cto1) > fabs(cfromc)) {
      a = 4.9896007738368E+291;
      ctoc = cto1;
    } else {
      a = ctoc / cfromc;
      notdone = false;
    }
    loop_ub = A->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_loop_ub = A->size[0];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        A->data[i1 + A->size[0] * i].re *= a;
        A->data[i1 + A->size[0] * i].im *= a;
      }
    }
  }
}

/* End of code generation (xzlascl.c) */
