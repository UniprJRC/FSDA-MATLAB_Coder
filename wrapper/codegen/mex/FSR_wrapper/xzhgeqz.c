/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzhgeqz.c
 *
 * Code generation for function 'xzhgeqz'
 *
 */

/* Include files */
#include "xzhgeqz.h"
#include "FSR_wrapper_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "xzlanhs.h"
#include "xzlartg.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo rs_emlrtRSI = {
    436,       /* lineNo */
    "xzhgeqz", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzhgeqz.m" /* pathName */
};

static emlrtRSInfo ss_emlrtRSI = {
    424,       /* lineNo */
    "xzhgeqz", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzhgeqz.m" /* pathName */
};

static emlrtRSInfo ts_emlrtRSI = {
    410,       /* lineNo */
    "xzhgeqz", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzhgeqz.m" /* pathName */
};

static emlrtRSInfo us_emlrtRSI = {
    401,       /* lineNo */
    "xzhgeqz", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzhgeqz.m" /* pathName */
};

static emlrtRSInfo vs_emlrtRSI = {
    391,       /* lineNo */
    "xzhgeqz", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzhgeqz.m" /* pathName */
};

static emlrtRSInfo ws_emlrtRSI = {
    111,       /* lineNo */
    "xzhgeqz", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzhgeqz.m" /* pathName */
};

static emlrtRSInfo xs_emlrtRSI = {
    37,        /* lineNo */
    "xzhgeqz", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzhgeqz.m" /* pathName */
};

/* Function Definitions */
void xzhgeqz(const emlrtStack *sp, const creal_T A[4], int32_T ilo, int32_T ihi,
             int32_T *info, creal_T alpha1[2], creal_T beta1[2])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  creal_T b_A[4];
  creal_T b_ascale;
  creal_T ctemp;
  creal_T shift;
  real_T ad22_im;
  real_T ad22_re;
  real_T anorm;
  real_T ascale;
  real_T ascale_im;
  real_T ascale_re;
  real_T b_atol;
  real_T eshift_im;
  real_T eshift_re;
  real_T shift_im;
  real_T shift_re;
  real_T t1_im;
  real_T t1_im_tmp;
  real_T t1_re;
  real_T temp;
  real_T tempr;
  int32_T exitg1;
  int32_T ifirst;
  int32_T iiter;
  int32_T ilast;
  int32_T ilastm;
  int32_T ilastm1;
  int32_T istart;
  int32_T j;
  int32_T jiter;
  int32_T jp1;
  int32_T maxit;
  boolean_T b_guard1 = false;
  boolean_T exitg2;
  boolean_T failed;
  boolean_T goto60;
  boolean_T goto70;
  boolean_T goto90;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  memcpy(&b_A[0], &A[0], 4U * sizeof(creal_T));
  *info = 0;
  alpha1[0].re = 0.0;
  alpha1[0].im = 0.0;
  beta1[0].re = 1.0;
  beta1[0].im = 0.0;
  alpha1[1].re = 0.0;
  alpha1[1].im = 0.0;
  beta1[1].re = 1.0;
  beta1[1].im = 0.0;
  eshift_re = 0.0;
  eshift_im = 0.0;
  ctemp.re = 0.0;
  ctemp.im = 0.0;
  st.site = &xs_emlrtRSI;
  anorm = xzlanhs(&st, A, ilo, ihi);
  temp = 2.2204460492503131E-16 * anorm;
  b_atol = 2.2250738585072014E-308;
  if (temp > 2.2250738585072014E-308) {
    b_atol = temp;
  }
  temp = 2.2250738585072014E-308;
  if (anorm > 2.2250738585072014E-308) {
    temp = anorm;
  }
  ascale = 1.0 / temp;
  failed = true;
  if (ihi + 1 <= 2) {
    alpha1[1] = A[3];
  }
  guard1 = false;
  guard2 = false;
  if (ihi >= ilo) {
    ifirst = ilo;
    istart = ilo;
    ilast = ihi - 1;
    ilastm1 = ihi - 2;
    ilastm = ihi;
    iiter = 0;
    maxit = 30 * ((ihi - ilo) + 1);
    goto60 = false;
    goto70 = false;
    goto90 = false;
    st.site = &ws_emlrtRSI;
    if ((1 <= maxit) && (maxit > 2147483646)) {
      b_st.site = &hb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    jiter = 0;
    do {
      exitg1 = 0;
      if (jiter <= maxit - 1) {
        b_guard1 = false;
        if (ilast + 1 == ilo) {
          goto60 = true;
          b_guard1 = true;
        } else {
          jp1 = ilast + (ilastm1 << 1);
          if (muDoubleScalarAbs(b_A[jp1].re) + muDoubleScalarAbs(b_A[jp1].im) <=
              b_atol) {
            b_A[jp1].re = 0.0;
            b_A[jp1].im = 0.0;
            goto60 = true;
            b_guard1 = true;
          } else {
            j = ilastm1;
            guard3 = false;
            exitg2 = false;
            while ((!exitg2) && (j + 1 >= ilo)) {
              if (j + 1 == ilo) {
                guard3 = true;
                exitg2 = true;
              } else if (muDoubleScalarAbs(b_A[j].re) +
                             muDoubleScalarAbs(b_A[j].im) <=
                         b_atol) {
                b_A[j].re = 0.0;
                b_A[j].im = 0.0;
                guard3 = true;
                exitg2 = true;
              } else {
                j--;
                guard3 = false;
              }
            }
            if (guard3) {
              ifirst = j + 1;
              goto70 = true;
            }
            if (goto70) {
              b_guard1 = true;
            } else {
              alpha1[0].re = rtNaN;
              alpha1[0].im = 0.0;
              beta1[0].re = rtNaN;
              beta1[0].im = 0.0;
              alpha1[1].re = rtNaN;
              alpha1[1].im = 0.0;
              beta1[1].re = rtNaN;
              beta1[1].im = 0.0;
              *info = 1;
              exitg1 = 1;
            }
          }
        }
        if (b_guard1) {
          if (goto60) {
            goto60 = false;
            alpha1[ilast] = b_A[ilast + (ilast << 1)];
            ilast = ilastm1;
            ilastm1--;
            if (ilast + 1 < ilo) {
              failed = false;
              guard2 = true;
              exitg1 = 1;
            } else {
              iiter = 0;
              eshift_re = 0.0;
              eshift_im = 0.0;
              ilastm = ilast + 1;
              jiter++;
            }
          } else {
            if (goto70) {
              goto70 = false;
              iiter++;
              if (iiter - iiter / 10 * 10 != 0) {
                jp1 = ilastm1 + (ilastm1 << 1);
                anorm = ascale * b_A[jp1].re;
                temp = ascale * b_A[jp1].im;
                if (temp == 0.0) {
                  shift.re = anorm / 0.70710678118654746;
                  shift.im = 0.0;
                } else if (anorm == 0.0) {
                  shift.re = 0.0;
                  shift.im = temp / 0.70710678118654746;
                } else {
                  shift.re = anorm / 0.70710678118654746;
                  shift.im = temp / 0.70710678118654746;
                }
                jp1 = ilast + (ilast << 1);
                anorm = ascale * b_A[jp1].re;
                temp = ascale * b_A[jp1].im;
                if (temp == 0.0) {
                  ad22_re = anorm / 0.70710678118654746;
                  ad22_im = 0.0;
                } else if (anorm == 0.0) {
                  ad22_re = 0.0;
                  ad22_im = temp / 0.70710678118654746;
                } else {
                  ad22_re = anorm / 0.70710678118654746;
                  ad22_im = temp / 0.70710678118654746;
                }
                t1_re = 0.5 * (shift.re + ad22_re);
                t1_im = 0.5 * (shift.im + ad22_im);
                t1_im_tmp = t1_re * t1_im;
                jp1 = ilastm1 + (ilast << 1);
                anorm = ascale * b_A[jp1].re;
                temp = ascale * b_A[jp1].im;
                if (temp == 0.0) {
                  ascale_re = anorm / 0.70710678118654746;
                  ascale_im = 0.0;
                } else if (anorm == 0.0) {
                  ascale_re = 0.0;
                  ascale_im = temp / 0.70710678118654746;
                } else {
                  ascale_re = anorm / 0.70710678118654746;
                  ascale_im = temp / 0.70710678118654746;
                }
                jp1 = ilast + (ilastm1 << 1);
                anorm = ascale * b_A[jp1].re;
                temp = ascale * b_A[jp1].im;
                if (temp == 0.0) {
                  tempr = anorm / 0.70710678118654746;
                  anorm = 0.0;
                } else if (anorm == 0.0) {
                  tempr = 0.0;
                  anorm = temp / 0.70710678118654746;
                } else {
                  tempr = anorm / 0.70710678118654746;
                  anorm = temp / 0.70710678118654746;
                }
                shift_re = shift.re * ad22_re - shift.im * ad22_im;
                shift_im = shift.re * ad22_im + shift.im * ad22_re;
                shift.re = ((t1_re * t1_re - t1_im * t1_im) +
                            (ascale_re * tempr - ascale_im * anorm)) -
                           shift_re;
                shift.im = ((t1_im_tmp + t1_im_tmp) +
                            (ascale_re * anorm + ascale_im * tempr)) -
                           shift_im;
                c_sqrt(&shift);
                if ((t1_re - ad22_re) * shift.re +
                        (t1_im - ad22_im) * shift.im <=
                    0.0) {
                  shift.re += t1_re;
                  shift.im += t1_im;
                } else {
                  shift.re = t1_re - shift.re;
                  shift.im = t1_im - shift.im;
                }
              } else {
                jp1 = ilast + (ilastm1 << 1);
                anorm = ascale * b_A[jp1].re;
                temp = ascale * b_A[jp1].im;
                if (temp == 0.0) {
                  ascale_re = anorm / 0.70710678118654746;
                  ascale_im = 0.0;
                } else if (anorm == 0.0) {
                  ascale_re = 0.0;
                  ascale_im = temp / 0.70710678118654746;
                } else {
                  ascale_re = anorm / 0.70710678118654746;
                  ascale_im = temp / 0.70710678118654746;
                }
                eshift_re += ascale_re;
                eshift_im += ascale_im;
                shift.re = eshift_re;
                shift.im = eshift_im;
              }
              j = ilastm1;
              jp1 = ilastm1 + 1;
              exitg2 = false;
              while ((!exitg2) && (j + 1 > ifirst)) {
                istart = 2;
                ctemp.re = ascale * b_A[3].re - shift.re * 0.70710678118654746;
                ctemp.im = ascale * b_A[3].im - shift.im * 0.70710678118654746;
                temp =
                    muDoubleScalarAbs(ctemp.re) + muDoubleScalarAbs(ctemp.im);
                anorm = ascale * (muDoubleScalarAbs(b_A[jp1 + 2].re) +
                                  muDoubleScalarAbs(b_A[jp1 + 2].im));
                tempr = temp;
                if (anorm > temp) {
                  tempr = anorm;
                }
                if ((tempr < 1.0) && (tempr != 0.0)) {
                  temp /= tempr;
                  anorm /= tempr;
                }
                if ((muDoubleScalarAbs(b_A[1].re) +
                     muDoubleScalarAbs(b_A[1].im)) *
                        anorm <=
                    temp * b_atol) {
                  goto90 = true;
                  exitg2 = true;
                } else {
                  jp1 = 1;
                  j = 0;
                }
              }
              if (!goto90) {
                istart = ifirst;
                jp1 = (ifirst + ((ifirst - 1) << 1)) - 1;
                ctemp.re =
                    ascale * b_A[jp1].re - shift.re * 0.70710678118654746;
                ctemp.im =
                    ascale * b_A[jp1].im - shift.im * 0.70710678118654746;
              }
              goto90 = false;
              jp1 = ((istart - 1) << 1) + 1;
              b_ascale.re = ascale * b_A[jp1].re;
              b_ascale.im = ascale * b_A[jp1].im;
              st.site = &vs_emlrtRSI;
              xzlartg(&st, ctemp, b_ascale, &ascale_im, &shift);
              j = istart;
              while (j < ilast + 1) {
                st.site = &us_emlrtRSI;
                b_st.site = &ps_emlrtRSI;
                if ((1 <= ilastm) && (ilastm > 2147483646)) {
                  c_st.site = &hb_emlrtRSI;
                  check_forloop_overflow_error(&c_st);
                }
                for (j = 1; j <= ilastm; j++) {
                  jp1 = (j - 1) << 1;
                  anorm = b_A[jp1].re;
                  temp = b_A[jp1].im;
                  tempr = b_A[jp1 + 1].re;
                  ascale_re = b_A[jp1 + 1].im;
                  shift_re = shift.re * tempr - shift.im * ascale_re;
                  shift_im = shift.re * ascale_re + shift.im * tempr;
                  tempr =
                      ascale_im * tempr - (shift.re * anorm + shift.im * temp);
                  ascale_re = ascale_im * ascale_re -
                              (shift.re * temp - shift.im * anorm);
                  b_A[jp1 + 1].re = tempr;
                  b_A[jp1 + 1].im = ascale_re;
                  b_A[jp1].re = ascale_im * anorm + shift_re;
                  b_A[jp1].im = ascale_im * temp + shift_im;
                }
                shift.re = -shift.re;
                shift.im = -shift.im;
                st.site = &ts_emlrtRSI;
                b_st.site = &qs_emlrtRSI;
                for (jp1 = ifirst; jp1 < 3; jp1++) {
                  anorm = b_A[jp1 + 1].re;
                  temp = b_A[jp1 - 1].re;
                  tempr = b_A[jp1 - 1].im;
                  ad22_im = ascale_im * b_A[jp1 + 1].im +
                            (shift.re * tempr + shift.im * temp);
                  b_A[jp1 - 1].re =
                      ascale_im * b_A[jp1 - 1].re -
                      (shift.re * b_A[jp1 + 1].re + shift.im * b_A[jp1 + 1].im);
                  b_A[jp1 - 1].im =
                      ascale_im * b_A[jp1 - 1].im -
                      (shift.re * b_A[jp1 + 1].im - shift.im * anorm);
                  b_A[jp1 + 1].re =
                      ascale_im * anorm + (shift.re * temp - shift.im * tempr);
                  b_A[jp1 + 1].im = ad22_im;
                }
                j = 2;
              }
            }
            jiter++;
          }
        }
      } else {
        guard2 = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  } else {
    guard1 = true;
  }
  if (guard2) {
    if (failed) {
      *info = ilast + 1;
      st.site = &ss_emlrtRSI;
      if ((1 <= ilast + 1) && (ilast + 1 > 2147483646)) {
        b_st.site = &hb_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }
      for (jp1 = 0; jp1 <= ilast; jp1++) {
        alpha1[jp1].re = rtNaN;
        alpha1[jp1].im = 0.0;
        beta1[jp1].re = rtNaN;
        beta1[jp1].im = 0.0;
      }
    } else {
      guard1 = true;
    }
  }
  if (guard1) {
    st.site = &rs_emlrtRSI;
    if ((1 <= ilo - 1) && (ilo - 1 > 2147483646)) {
      b_st.site = &hb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (j = 0; j <= ilo - 2; j++) {
      alpha1[j] = b_A[j + (j << 1)];
    }
  }
}

/* End of code generation (xzhgeqz.c) */
