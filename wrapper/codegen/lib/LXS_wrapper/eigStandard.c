/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eigStandard.c
 *
 * Code generation for function 'eigStandard'
 *
 */

/* Include files */
#include "eigStandard.h"
#include "LXS_wrapper_data.h"
#include "LXS_wrapper_rtwutil.h"
#include "rt_nonfinite.h"
#include "xzhgeqz.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
void eigStandard(const double A[4], creal_T V[2])
{
  creal_T At[4];
  creal_T beta1[2];
  double a;
  double absxk;
  double anrm;
  double anrmto;
  double cfrom1;
  double cto1;
  double ctoc;
  int At_tmp;
  int ihi;
  int ii;
  int ilo;
  int j;
  int jj;
  int k;
  int nzcount;
  bool exitg1;
  bool exitg2;
  bool guard1 = false;
  bool ilascl;
  bool notdone;
  At[0].re = A[0];
  At[0].im = 0.0;
  At[1].re = A[1];
  At[1].im = 0.0;
  At[2].re = A[2];
  At[2].im = 0.0;
  At[3].re = A[3];
  At[3].im = 0.0;
  anrm = 0.0;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    absxk = rt_hypotd_snf(At[k].re, 0.0);
    if (rtIsNaN(absxk)) {
      anrm = rtNaN;
      exitg1 = true;
    } else {
      if (absxk > anrm) {
        anrm = absxk;
      }
      k++;
    }
  }
  if (rtIsInf(anrm) || rtIsNaN(anrm)) {
    V[0].re = rtNaN;
    V[0].im = 0.0;
    beta1[0].re = rtNaN;
    beta1[0].im = 0.0;
    V[1].re = rtNaN;
    V[1].im = 0.0;
    beta1[1].re = rtNaN;
    beta1[1].im = 0.0;
  } else {
    ilascl = false;
    anrmto = anrm;
    guard1 = false;
    if ((anrm > 0.0) && (anrm < 6.7178761075670888E-139)) {
      anrmto = 6.7178761075670888E-139;
      ilascl = true;
      guard1 = true;
    } else if (anrm > 1.4885657073574029E+138) {
      anrmto = 1.4885657073574029E+138;
      ilascl = true;
      guard1 = true;
    }
    if (guard1) {
      absxk = anrm;
      ctoc = anrmto;
      notdone = true;
      while (notdone) {
        cfrom1 = absxk * 2.0041683600089728E-292;
        cto1 = ctoc / 4.9896007738368E+291;
        if ((cfrom1 > ctoc) && (ctoc != 0.0)) {
          a = 2.0041683600089728E-292;
          absxk = cfrom1;
        } else if (cto1 > absxk) {
          a = 4.9896007738368E+291;
          ctoc = cto1;
        } else {
          a = ctoc / absxk;
          notdone = false;
        }
        At[0].re *= a;
        At[0].im *= a;
        At[1].re *= a;
        At[1].im *= a;
        At[2].re *= a;
        At[2].im *= a;
        At[3].re *= a;
        At[3].im *= a;
      }
    }
    ilo = 1;
    ihi = 2;
    k = 0;
    j = 0;
    notdone = false;
    ii = 2;
    exitg1 = false;
    while ((!exitg1) && (ii > 0)) {
      nzcount = 0;
      k = ii;
      j = 2;
      jj = 0;
      exitg2 = false;
      while ((!exitg2) && (jj < 2)) {
        At_tmp = (ii + (jj << 1)) - 1;
        if ((At[At_tmp].re != 0.0) || (At[At_tmp].im != 0.0) ||
            (ii == jj + 1)) {
          if (nzcount == 0) {
            j = jj + 1;
            nzcount = 1;
            jj++;
          } else {
            nzcount = 2;
            exitg2 = true;
          }
        } else {
          jj++;
        }
      }
      if (nzcount < 2) {
        notdone = true;
        exitg1 = true;
      } else {
        ii--;
      }
    }
    if (!notdone) {
      k = 0;
      j = 0;
      notdone = false;
      jj = 1;
      exitg1 = false;
      while ((!exitg1) && (jj < 3)) {
        nzcount = 0;
        k = 2;
        j = jj;
        ii = 1;
        exitg2 = false;
        while ((!exitg2) && (ii < 3)) {
          At_tmp = (ii + ((jj - 1) << 1)) - 1;
          if ((At[At_tmp].re != 0.0) || (At[At_tmp].im != 0.0) || (ii == jj)) {
            if (nzcount == 0) {
              k = ii;
              nzcount = 1;
              ii++;
            } else {
              nzcount = 2;
              exitg2 = true;
            }
          } else {
            ii++;
          }
        }
        if (nzcount < 2) {
          notdone = true;
          exitg1 = true;
        } else {
          jj++;
        }
      }
      if (notdone) {
        if (k != 1) {
          absxk = At[k - 1].re;
          ctoc = At[k - 1].im;
          At[k - 1] = At[0];
          At[0].re = absxk;
          At[0].im = ctoc;
          absxk = At[k + 1].re;
          ctoc = At[k + 1].im;
          At[k + 1] = At[2];
          At[2].re = absxk;
          At[2].im = ctoc;
        }
        if (j != 1) {
          k = (j - 1) << 1;
          absxk = At[k].re;
          ctoc = At[k].im;
          At[k] = At[0];
          At[0].re = absxk;
          At[0].im = ctoc;
          absxk = At[k + 1].re;
          ctoc = At[k + 1].im;
          At[k + 1] = At[1];
          At[1].re = absxk;
          At[1].im = ctoc;
        }
        ilo = 2;
      }
    } else {
      if (k != 2) {
        absxk = At[k - 1].re;
        ctoc = At[k - 1].im;
        At[k - 1] = At[1];
        At[1].re = absxk;
        At[1].im = ctoc;
        absxk = At[k + 1].re;
        ctoc = At[k + 1].im;
        At[k + 1] = At[3];
        At[3].re = absxk;
        At[3].im = ctoc;
      }
      if (j != 2) {
        k = (j - 1) << 1;
        absxk = At[k].re;
        ctoc = At[k].im;
        At[k] = At[2];
        At[2].re = absxk;
        At[2].im = ctoc;
        absxk = At[k + 1].re;
        ctoc = At[k + 1].im;
        At[k + 1] = At[3];
        At[3].re = absxk;
        At[3].im = ctoc;
      }
      ihi = 1;
    }
    xzhgeqz(At, ilo, ihi, &k, V, beta1);
    if ((k == 0) && ilascl) {
      notdone = true;
      while (notdone) {
        cfrom1 = anrmto * 2.0041683600089728E-292;
        cto1 = anrm / 4.9896007738368E+291;
        if ((cfrom1 > anrm) && (anrm != 0.0)) {
          a = 2.0041683600089728E-292;
          anrmto = cfrom1;
        } else if (cto1 > anrmto) {
          a = 4.9896007738368E+291;
          anrm = cto1;
        } else {
          a = anrm / anrmto;
          notdone = false;
        }
        V[0].re *= a;
        V[0].im *= a;
        V[1].re *= a;
        V[1].im *= a;
      }
    }
  }
  if (beta1[0].im == 0.0) {
    if (V[0].im == 0.0) {
      cto1 = V[0].re / beta1[0].re;
      absxk = 0.0;
    } else if (V[0].re == 0.0) {
      cto1 = 0.0;
      absxk = V[0].im / beta1[0].re;
    } else {
      cto1 = V[0].re / beta1[0].re;
      absxk = V[0].im / beta1[0].re;
    }
  } else if (beta1[0].re == 0.0) {
    if (V[0].re == 0.0) {
      cto1 = V[0].im / beta1[0].im;
      absxk = 0.0;
    } else if (V[0].im == 0.0) {
      cto1 = 0.0;
      absxk = -(V[0].re / beta1[0].im);
    } else {
      cto1 = V[0].im / beta1[0].im;
      absxk = -(V[0].re / beta1[0].im);
    }
  } else {
    cfrom1 = fabs(beta1[0].re);
    absxk = fabs(beta1[0].im);
    if (cfrom1 > absxk) {
      absxk = beta1[0].im / beta1[0].re;
      ctoc = beta1[0].re + absxk * beta1[0].im;
      cto1 = (V[0].re + absxk * V[0].im) / ctoc;
      absxk = (V[0].im - absxk * V[0].re) / ctoc;
    } else if (absxk == cfrom1) {
      if (beta1[0].re > 0.0) {
        absxk = 0.5;
      } else {
        absxk = -0.5;
      }
      if (beta1[0].im > 0.0) {
        ctoc = 0.5;
      } else {
        ctoc = -0.5;
      }
      cto1 = (V[0].re * absxk + V[0].im * ctoc) / cfrom1;
      absxk = (V[0].im * absxk - V[0].re * ctoc) / cfrom1;
    } else {
      absxk = beta1[0].re / beta1[0].im;
      ctoc = beta1[0].im + absxk * beta1[0].re;
      cto1 = (absxk * V[0].re + V[0].im) / ctoc;
      absxk = (absxk * V[0].im - V[0].re) / ctoc;
    }
  }
  V[0].re = cto1;
  V[0].im = absxk;
  if (beta1[1].im == 0.0) {
    if (V[1].im == 0.0) {
      cto1 = V[1].re / beta1[1].re;
      absxk = 0.0;
    } else if (V[1].re == 0.0) {
      cto1 = 0.0;
      absxk = V[1].im / beta1[1].re;
    } else {
      cto1 = V[1].re / beta1[1].re;
      absxk = V[1].im / beta1[1].re;
    }
  } else if (beta1[1].re == 0.0) {
    if (V[1].re == 0.0) {
      cto1 = V[1].im / beta1[1].im;
      absxk = 0.0;
    } else if (V[1].im == 0.0) {
      cto1 = 0.0;
      absxk = -(V[1].re / beta1[1].im);
    } else {
      cto1 = V[1].im / beta1[1].im;
      absxk = -(V[1].re / beta1[1].im);
    }
  } else {
    cfrom1 = fabs(beta1[1].re);
    absxk = fabs(beta1[1].im);
    if (cfrom1 > absxk) {
      absxk = beta1[1].im / beta1[1].re;
      ctoc = beta1[1].re + absxk * beta1[1].im;
      cto1 = (V[1].re + absxk * V[1].im) / ctoc;
      absxk = (V[1].im - absxk * V[1].re) / ctoc;
    } else if (absxk == cfrom1) {
      if (beta1[1].re > 0.0) {
        absxk = 0.5;
      } else {
        absxk = -0.5;
      }
      if (beta1[1].im > 0.0) {
        ctoc = 0.5;
      } else {
        ctoc = -0.5;
      }
      cto1 = (V[1].re * absxk + V[1].im * ctoc) / cfrom1;
      absxk = (V[1].im * absxk - V[1].re * ctoc) / cfrom1;
    } else {
      absxk = beta1[1].re / beta1[1].im;
      ctoc = beta1[1].im + absxk * beta1[1].re;
      cto1 = (absxk * V[1].re + V[1].im) / ctoc;
      absxk = (absxk * V[1].im - V[1].re) / ctoc;
    }
  }
  V[1].re = cto1;
  V[1].im = absxk;
}

/* End of code generation (eigStandard.c) */
