/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * blockedSummation.c
 *
 * Code generation for function 'blockedSummation'
 *
 */

/* Include files */
#include "blockedSummation.h"
#include "LXS_wrapper1_data.h"
#include "LXS_wrapper1_types.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"

/* Function Definitions */
real_T blockedSummation(const emlrtStack *sp, const emxArray_real_T *x,
                        int32_T vlen)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T y;
  int32_T ib;
  int32_T inb;
  int32_T nfb;
  int32_T nleft;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if ((x->size[0] == 0) || (vlen == 0)) {
    y = 0.0;
  } else {
    st.site = &om_emlrtRSI;
    b_st.site = &wj_emlrtRSI;
    if (vlen < 4096) {
      c_st.site = &xj_emlrtRSI;
      y = sumColumnB(&c_st, x, vlen);
    } else {
      nfb = vlen / 4096;
      inb = nfb << 12;
      nleft = vlen - inb;
      y = sumColumnB4(x, 1);
      for (ib = 2; ib <= nfb; ib++) {
        y += sumColumnB4(x, ((ib - 1) << 12) + 1);
      }
      if (nleft > 0) {
        c_st.site = &ak_emlrtRSI;
        y += b_sumColumnB(&c_st, x, nleft, inb + 1);
      }
    }
  }
  return y;
}

/* End of code generation (blockedSummation.c) */
