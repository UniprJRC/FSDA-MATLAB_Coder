/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzlartg.c
 *
 * Code generation for function 'xzlartg'
 *
 */

/* Include files */
#include "xzlartg.h"
#include "FSR_wrapper_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Function Definitions */
void xzlartg(const emlrtStack *sp, const creal_T f, const creal_T g, real_T *cs,
             creal_T *sn)
{
  emlrtStack b_st;
  emlrtStack st;
  real_T f2;
  real_T fs_im;
  real_T fs_re;
  real_T g2;
  real_T g2s;
  real_T gs_im;
  real_T gs_re;
  real_T scale;
  real_T scale_tmp;
  int32_T count;
  int32_T rescaledir;
  boolean_T guard1 = false;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  scale_tmp = muDoubleScalarAbs(f.re);
  f2 = muDoubleScalarAbs(f.im);
  if (f2 > scale_tmp) {
    scale_tmp = f2;
  }
  f2 = muDoubleScalarAbs(g.re);
  scale = muDoubleScalarAbs(g.im);
  if (scale > f2) {
    f2 = scale;
  }
  scale = scale_tmp;
  if (f2 > scale_tmp) {
    scale = f2;
  }
  fs_re = f.re;
  fs_im = f.im;
  gs_re = g.re;
  gs_im = g.im;
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
    if ((g.re == 0.0) && (g.im == 0.0)) {
      *cs = 1.0;
      sn->re = 0.0;
      sn->im = 0.0;
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
      if ((f.re == 0.0) && (f.im == 0.0)) {
        *cs = 0.0;
        g2 = muDoubleScalarHypot(gs_re, gs_im);
        sn->re = gs_re / g2;
        sn->im = -gs_im / g2;
      } else {
        st.site = &ls_emlrtRSI;
        if (g2 < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &bc_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
        }
        g2s = muDoubleScalarSqrt(g2);
        *cs = muDoubleScalarHypot(fs_re, fs_im) / g2s;
        if (scale_tmp > 1.0) {
          g2 = muDoubleScalarHypot(f.re, f.im);
          fs_re = f.re / g2;
          fs_im = f.im / g2;
        } else {
          f2 = 7.4428285367870146E+137 * f.re;
          scale = 7.4428285367870146E+137 * f.im;
          g2 = muDoubleScalarHypot(f2, scale);
          fs_re = f2 / g2;
          fs_im = scale / g2;
        }
        gs_re /= g2s;
        gs_im = -gs_im / g2s;
        sn->re = fs_re * gs_re - fs_im * gs_im;
        sn->im = fs_re * gs_im + fs_im * gs_re;
      }
    } else {
      st.site = &ms_emlrtRSI;
      scale = g2 / f2 + 1.0;
      if (scale < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &st, &bc_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      scale = muDoubleScalarSqrt(scale);
      *cs = 1.0 / scale;
      g2 += f2;
      fs_re = scale * fs_re / g2;
      fs_im = scale * fs_im / g2;
      sn->re = fs_re * gs_re - fs_im * -gs_im;
      sn->im = fs_re * -gs_im + fs_im * gs_re;
      if (rescaledir > 0) {
        st.site = &ns_emlrtRSI;
        if ((1 <= count) && (count > 2147483646)) {
          b_st.site = &hb_emlrtRSI;
          check_forloop_overflow_error(&b_st);
        }
      } else if (rescaledir < 0) {
        st.site = &os_emlrtRSI;
        if ((1 <= count) && (count > 2147483646)) {
          b_st.site = &hb_emlrtRSI;
          check_forloop_overflow_error(&b_st);
        }
      }
    }
  }
}

/* End of code generation (xzlartg.c) */
