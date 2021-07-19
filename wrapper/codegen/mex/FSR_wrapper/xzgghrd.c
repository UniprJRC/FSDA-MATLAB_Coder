/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzgghrd.c
 *
 * Code generation for function 'xzgghrd'
 *
 */

/* Include files */
#include "xzgghrd.h"
#include "FSR_wrapper_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo is_emlrtRSI = {
    62,        /* lineNo */
    "xzgghrd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzgghrd.m" /* pathName */
};

static emlrtRSInfo js_emlrtRSI = {
    64,        /* lineNo */
    "xzgghrd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzgghrd.m" /* pathName */
};

static emlrtRSInfo ks_emlrtRSI = {
    77,        /* lineNo */
    "xzgghrd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzgghrd.m" /* pathName */
};

/* Function Definitions */
void xzgghrd(const emlrtStack *sp, int32_T ilo, int32_T ihi, creal_T A[4])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T b_gs_re;
  real_T c;
  real_T f2;
  real_T f2s;
  real_T fs_im;
  real_T fs_re;
  real_T g2;
  real_T gs_im;
  real_T gs_re;
  real_T scale;
  real_T scale_tmp;
  int32_T count;
  int32_T f_re_tmp;
  int32_T jcol;
  int32_T jrow;
  int32_T rescaledir;
  boolean_T guard1 = false;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (ihi >= ilo + 2) {
    for (jcol = ilo - 1; jcol + 1 < ihi - 1; jcol++) {
      for (jrow = ihi - 2; jrow + 2 > jcol + 2; jrow--) {
        st.site = &is_emlrtRSI;
        f_re_tmp = jrow + (jcol << 1);
        fs_re = A[f_re_tmp].re;
        fs_im = A[f_re_tmp].im;
        scale_tmp = muDoubleScalarAbs(A[f_re_tmp].re);
        f2s = muDoubleScalarAbs(A[f_re_tmp].im);
        if (f2s > scale_tmp) {
          scale_tmp = f2s;
        }
        f2s = muDoubleScalarAbs(A[f_re_tmp + 1].re);
        scale = muDoubleScalarAbs(A[f_re_tmp + 1].im);
        if (scale > f2s) {
          f2s = scale;
        }
        scale = scale_tmp;
        if (f2s > scale_tmp) {
          scale = f2s;
        }
        gs_re = A[f_re_tmp + 1].re;
        gs_im = A[f_re_tmp + 1].im;
        count = 0;
        rescaledir = 0;
        guard1 = false;
        if (scale >= 7.4428285367870146E+137) {
          do {
            count++;
            fs_re *= 1.3435752215134178E-138;
            fs_im *= 1.3435752215134178E-138;
            gs_re *= 1.3435752215134178E-138;
            gs_im *= 1.3435752215134178E-138;
            scale *= 1.3435752215134178E-138;
          } while (!(scale < 7.4428285367870146E+137));
          rescaledir = 1;
          guard1 = true;
        } else if (scale <= 1.3435752215134178E-138) {
          if ((A[f_re_tmp + 1].re == 0.0) && (A[f_re_tmp + 1].im == 0.0)) {
            c = 1.0;
            gs_re = 0.0;
            gs_im = 0.0;
          } else {
            do {
              count++;
              fs_re *= 7.4428285367870146E+137;
              fs_im *= 7.4428285367870146E+137;
              gs_re *= 7.4428285367870146E+137;
              gs_im *= 7.4428285367870146E+137;
              scale *= 7.4428285367870146E+137;
            } while (!(scale > 1.3435752215134178E-138));
            rescaledir = -1;
            guard1 = true;
          }
        } else {
          guard1 = true;
        }
        if (guard1) {
          f2 = fs_re * fs_re + fs_im * fs_im;
          g2 = gs_re * gs_re + gs_im * gs_im;
          scale = g2;
          if (1.0 > g2) {
            scale = 1.0;
          }
          if (f2 <= scale * 2.0041683600089728E-292) {
            if ((A[f_re_tmp].re == 0.0) && (A[f_re_tmp].im == 0.0)) {
              c = 0.0;
              fs_re =
                  muDoubleScalarHypot(A[f_re_tmp + 1].re, A[f_re_tmp + 1].im);
              fs_im = 0.0;
              f2 = muDoubleScalarHypot(gs_re, gs_im);
              gs_re /= f2;
              gs_im = -gs_im / f2;
            } else {
              b_st.site = &ls_emlrtRSI;
              if (g2 < 0.0) {
                emlrtErrorWithMessageIdR2018a(
                    &b_st, &bc_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                    "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
              }
              g2 = muDoubleScalarSqrt(g2);
              c = muDoubleScalarHypot(fs_re, fs_im) / g2;
              if (scale_tmp > 1.0) {
                f2 = muDoubleScalarHypot(A[f_re_tmp].re, A[f_re_tmp].im);
                fs_re = A[f_re_tmp].re / f2;
                fs_im = A[f_re_tmp].im / f2;
              } else {
                scale = 7.4428285367870146E+137 * A[f_re_tmp].re;
                f2s = 7.4428285367870146E+137 * A[f_re_tmp].im;
                f2 = muDoubleScalarHypot(scale, f2s);
                fs_re = scale / f2;
                fs_im = f2s / f2;
              }
              b_gs_re = gs_re / g2;
              gs_im = -gs_im / g2;
              gs_re = fs_re * b_gs_re - fs_im * gs_im;
              gs_im = fs_re * gs_im + fs_im * b_gs_re;
              fs_re = c * A[f_re_tmp].re +
                      (gs_re * A[f_re_tmp + 1].re - gs_im * A[f_re_tmp + 1].im);
              fs_im = c * A[f_re_tmp].im +
                      (gs_re * A[f_re_tmp + 1].im + gs_im * A[f_re_tmp + 1].re);
            }
          } else {
            b_st.site = &ms_emlrtRSI;
            f2s = g2 / f2 + 1.0;
            if (f2s < 0.0) {
              emlrtErrorWithMessageIdR2018a(
                  &b_st, &bc_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                  "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
            }
            f2s = muDoubleScalarSqrt(f2s);
            fs_re *= f2s;
            fs_im *= f2s;
            c = 1.0 / f2s;
            f2 += g2;
            f2s = fs_re / f2;
            scale = fs_im / f2;
            b_gs_re = gs_re;
            gs_im = -gs_im;
            gs_re = f2s * b_gs_re - scale * gs_im;
            gs_im = f2s * gs_im + scale * b_gs_re;
            if (rescaledir > 0) {
              b_st.site = &ns_emlrtRSI;
              if ((1 <= count) && (count > 2147483646)) {
                c_st.site = &hb_emlrtRSI;
                check_forloop_overflow_error(&c_st);
              }
            } else if (rescaledir < 0) {
              b_st.site = &os_emlrtRSI;
              if ((1 <= count) && (count > 2147483646)) {
                c_st.site = &hb_emlrtRSI;
                check_forloop_overflow_error(&c_st);
              }
            }
          }
        }
        A[f_re_tmp].re = fs_re;
        A[f_re_tmp].im = fs_im;
        A[f_re_tmp + 1].re = 0.0;
        A[f_re_tmp + 1].im = 0.0;
        st.site = &js_emlrtRSI;
        b_st.site = &ps_emlrtRSI;
        b_gs_re = gs_re * A[1].re - gs_im * A[1].im;
        f2 = gs_re * A[1].im + gs_im * A[1].re;
        scale = c * A[0].re;
        f2s = c * A[0].im;
        g2 = A[0].im;
        scale_tmp = A[0].re;
        A[1].re = c * A[1].re - (gs_re * A[0].re + gs_im * A[0].im);
        A[1].im = c * A[1].im - (gs_re * g2 - gs_im * scale_tmp);
        A[0].re = scale + b_gs_re;
        A[0].im = f2s + f2;
        b_gs_re = gs_re * A[3].re - gs_im * A[3].im;
        f2 = gs_re * A[3].im + gs_im * A[3].re;
        scale = c * A[2].re;
        f2s = c * A[2].im;
        g2 = A[2].im;
        scale_tmp = A[2].re;
        A[3].re = c * A[3].re - (gs_re * A[2].re + gs_im * A[2].im);
        A[3].im = c * A[3].im - (gs_re * g2 - gs_im * scale_tmp);
        A[2].re = scale + b_gs_re;
        A[2].im = f2s + f2;
        gs_re = -gs_re;
        gs_im = -gs_im;
        st.site = &ks_emlrtRSI;
        b_st.site = &qs_emlrtRSI;
        b_gs_re = gs_re * A[0].re - gs_im * A[0].im;
        f2 = gs_re * A[0].im + gs_im * A[0].re;
        g2 = c * A[2].re;
        scale_tmp = c * A[2].im;
        scale = A[2].im;
        f2s = A[2].re;
        A[0].re = c * A[0].re - (gs_re * A[2].re + gs_im * A[2].im);
        A[0].im = c * A[0].im - (gs_re * scale - gs_im * f2s);
        A[2].re = g2 + b_gs_re;
        A[2].im = scale_tmp + f2;
        b_gs_re = gs_re * A[1].re - gs_im * A[1].im;
        f2 = gs_re * A[1].im + gs_im * A[1].re;
        g2 = c * A[3].re;
        scale_tmp = c * A[3].im;
        scale = A[3].im;
        f2s = A[3].re;
        A[1].re = c * A[1].re - (gs_re * A[3].re + gs_im * A[3].im);
        A[1].im = c * A[1].im - (gs_re * scale - gs_im * f2s);
        A[3].re = g2 + b_gs_re;
        A[3].im = scale_tmp + f2;
      }
    }
  }
}

/* End of code generation (xzgghrd.c) */
