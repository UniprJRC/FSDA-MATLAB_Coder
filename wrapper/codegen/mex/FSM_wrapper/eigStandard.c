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
#include "FSM_wrapper_data.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "xzgghrd.h"
#include "xzhgeqz.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo po_emlrtRSI = {
    59,            /* lineNo */
    "eigStandard", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigStan"
    "dard.m" /* pathName */
};

static emlrtRSInfo qo_emlrtRSI = {
    53,            /* lineNo */
    "eigStandard", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigStan"
    "dard.m" /* pathName */
};

static emlrtRSInfo ro_emlrtRSI = {
    29,       /* lineNo */
    "xzgeev", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzgeev.m" /* pathName */
};

static emlrtRSInfo uo_emlrtRSI = {
    124,      /* lineNo */
    "xzggev", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzggev.m" /* pathName */
};

static emlrtRSInfo vo_emlrtRSI = {
    125,      /* lineNo */
    "xzggev", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzggev.m" /* pathName */
};

/* Function Definitions */
void eigStandard(const emlrtStack *sp, const real_T A[4], creal_T V[2])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  creal_T At[4];
  creal_T beta1[2];
  real_T a;
  real_T absxk;
  real_T anrm;
  real_T anrmto;
  real_T cfrom1;
  real_T cto1;
  real_T ctoc;
  int32_T At_tmp;
  int32_T ihi;
  int32_T ii;
  int32_T ilo;
  int32_T j;
  int32_T jj;
  int32_T k;
  int32_T nzcount;
  boolean_T exitg1;
  boolean_T exitg2;
  boolean_T guard1 = false;
  boolean_T ilascl;
  boolean_T notdone;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &qo_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  At[0].re = A[0];
  At[0].im = 0.0;
  At[1].re = A[1];
  At[1].im = 0.0;
  At[2].re = A[2];
  At[2].im = 0.0;
  At[3].re = A[3];
  At[3].im = 0.0;
  b_st.site = &ro_emlrtRSI;
  j = 0;
  anrm = 0.0;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    absxk = muDoubleScalarHypot(At[k].re, 0.0);
    if (muDoubleScalarIsNaN(absxk)) {
      anrm = rtNaN;
      exitg1 = true;
    } else {
      if (absxk > anrm) {
        anrm = absxk;
      }
      k++;
    }
  }
  if (muDoubleScalarIsInf(anrm) || muDoubleScalarIsNaN(anrm)) {
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
    c_st.site = &uo_emlrtRSI;
    xzgghrd(&c_st, ilo, ihi, At);
    c_st.site = &vo_emlrtRSI;
    xzhgeqz(&c_st, At, ilo, ihi, &j, V, beta1);
    if ((j == 0) && ilascl) {
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
    cfrom1 = muDoubleScalarAbs(beta1[0].re);
    absxk = muDoubleScalarAbs(beta1[0].im);
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
    cfrom1 = muDoubleScalarAbs(beta1[1].re);
    absxk = muDoubleScalarAbs(beta1[1].im);
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
  if (j != 0) {
    st.site = &po_emlrtRSI;
    e_warning(&st);
  }
}

/* End of code generation (eigStandard.c) */
