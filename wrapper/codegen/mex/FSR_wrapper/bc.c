/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * bc.c
 *
 * Code generation for function 'bc'
 *
 */

/* Include files */
#include "bc.h"
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_types.h"
#include "colon.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo cd_emlrtRSI = {
    61,                                              /* lineNo */
    "bc",                                            /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\bc.m" /* pathName */
};

static emlrtRSInfo dd_emlrtRSI = {
    63,                                              /* lineNo */
    "bc",                                            /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\bc.m" /* pathName */
};

static emlrtRSInfo ed_emlrtRSI = {
    64,                                              /* lineNo */
    "bc",                                            /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\bc.m" /* pathName */
};

static emlrtRSInfo rd_emlrtRSI = {
    11,     /* lineNo */
    "prod", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\prod.m" /* pathName
                                                                         */
};

static emlrtRTEInfo mf_emlrtRTEI = {
    61,                                              /* lineNo */
    1,                                               /* colNo */
    "bc",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\bc.m" /* pName */
};

static emlrtRTEInfo nf_emlrtRTEI = {
    62,                                              /* lineNo */
    1,                                               /* colNo */
    "bc",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\bc.m" /* pName */
};

static emlrtRTEInfo of_emlrtRTEI = {
    63,                                              /* lineNo */
    1,                                               /* colNo */
    "bc",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\bc.m" /* pName */
};

/* Function Definitions */
real_T bc(const emlrtStack *sp, real_T n, real_T k)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emxArray_real_T *dens;
  emxArray_real_T *nums;
  real_T a;
  real_T c;
  int32_T z_size[2];
  int32_T b_k;
  int32_T vlen;
  boolean_T b_p;
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /* bc returns the Binomial coefficient */
  /*  */
  /* <a href="matlab: docsearchFS('bc')">Link to the help page for this
   * function</a> */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*        n:  Number of elements. Non negative integer.  */
  /*            Data Types - single|double */
  /*  */
  /*        k:  Items to choose from the set of n elements. Non negative
   * integer. */
  /*            Data Types - single|double */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*  Output:     */
  /*   */
  /*        c  : The binomial coefficient $n!/k!(n-k)!$. Integer. This is the */
  /*             coefficient of the $x^k$ term in the polynomial expansion of */
  /*             the binomial power $(1 + x)^n$. This is also the so called */
  /*             choose function of n and k (nchoosek in MATLAB), i.e. the */
  /*             number of k-element subsets (the k-combinations) of a set of n
   */
  /*             objects. When a coefficient is large, results may be inexact.
   */
  /*             The result is only accurate to 15 digits for double-precision
   */
  /*             inputs in 32bits computers. */
  /*  */
  /*  See also: nchoosek */
  /*  */
  /*  References: */
  /*  */
  /*     Knuth, D. E. (1997). "The Art of Computer Programming", Volume 1: */
  /*     Fundamental Algorithms, Third ed. Addison-Wesley. [pp. 52--74].  */
  /*  */
  /*  Acknowledgements:  */
  /*  */
  /*  Matlab function bc has been adapted to this toolbox by FSDA team */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('bc')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Examples: */
  /* { */
  /*     %% Number of pairs chosen among 6 elements. */
  /*     bc(6,2) */
  /* } */
  /*  Beginning of code */
  /*  Ensure computations in doubles. */
  if (k > n / 2.0) {
    k = n - k;
  }
  st.site = &cd_emlrtRSI;
  a = (n - k) + 1.0;
  b_st.site = &fd_emlrtRSI;
  emxInit_real_T(&b_st, &nums, 2, &mf_emlrtRTEI, true);
  if (muDoubleScalarIsNaN(a) || muDoubleScalarIsNaN(n)) {
    b_k = nums->size[0] * nums->size[1];
    nums->size[0] = 1;
    nums->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, nums, b_k, &mf_emlrtRTEI);
    nums->data[0] = rtNaN;
  } else if (n < a) {
    nums->size[0] = 1;
    nums->size[1] = 0;
  } else if ((muDoubleScalarIsInf(a) || muDoubleScalarIsInf(n)) && (a == n)) {
    b_k = nums->size[0] * nums->size[1];
    nums->size[0] = 1;
    nums->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, nums, b_k, &mf_emlrtRTEI);
    nums->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(a) == a) {
    b_k = nums->size[0] * nums->size[1];
    nums->size[0] = 1;
    vlen = (int32_T)muDoubleScalarFloor(n - a);
    nums->size[1] = vlen + 1;
    emxEnsureCapacity_real_T(&b_st, nums, b_k, &mf_emlrtRTEI);
    for (b_k = 0; b_k <= vlen; b_k++) {
      nums->data[b_k] = a + (real_T)b_k;
    }
  } else {
    c_st.site = &gd_emlrtRSI;
    eml_float_colon(&c_st, a, n, nums);
  }
  emxInit_real_T(sp, &dens, 2, &nf_emlrtRTEI, true);
  if (muDoubleScalarIsNaN(k)) {
    b_k = dens->size[0] * dens->size[1];
    dens->size[0] = 1;
    dens->size[1] = 1;
    emxEnsureCapacity_real_T(sp, dens, b_k, &nf_emlrtRTEI);
    dens->data[0] = rtNaN;
  } else if (k < 1.0) {
    dens->size[0] = 1;
    dens->size[1] = 0;
  } else if (muDoubleScalarIsInf(k) && (1.0 == k)) {
    b_k = dens->size[0] * dens->size[1];
    dens->size[0] = 1;
    dens->size[1] = 1;
    emxEnsureCapacity_real_T(sp, dens, b_k, &nf_emlrtRTEI);
    dens->data[0] = rtNaN;
  } else {
    b_k = dens->size[0] * dens->size[1];
    dens->size[0] = 1;
    vlen = (int32_T)muDoubleScalarFloor(k - 1.0);
    dens->size[1] = vlen + 1;
    emxEnsureCapacity_real_T(sp, dens, b_k, &nf_emlrtRTEI);
    for (b_k = 0; b_k <= vlen; b_k++) {
      dens->data[b_k] = (real_T)b_k + 1.0;
    }
  }
  st.site = &dd_emlrtRSI;
  b_st.site = &jd_emlrtRSI;
  c_st.site = &kd_emlrtRSI;
  d_st.site = &ld_emlrtRSI;
  e_st.site = &md_emlrtRSI;
  f_st.site = &nd_emlrtRSI;
  z_size[0] = 1;
  if (nums->size[1] <= dens->size[1]) {
    z_size[1] = nums->size[1];
  } else {
    z_size[1] = dens->size[1];
  }
  p = true;
  b_p = true;
  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 2)) {
    if (z_size[b_k] != nums->size[b_k]) {
      b_p = false;
      exitg1 = true;
    } else {
      b_k++;
    }
  }
  if (b_p) {
    b_p = true;
    b_k = 0;
    exitg1 = false;
    while ((!exitg1) && (b_k < 2)) {
      if (z_size[b_k] != dens->size[b_k]) {
        b_p = false;
        exitg1 = true;
      } else {
        b_k++;
      }
    }
    if (!b_p) {
      p = false;
    }
  } else {
    p = false;
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&f_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &od_emlrtRSI;
  g_st.site = &pd_emlrtRSI;
  z_size[0] = 1;
  if (nums->size[1] <= dens->size[1]) {
    z_size[1] = nums->size[1];
  } else {
    z_size[1] = dens->size[1];
  }
  p = true;
  b_p = true;
  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 2)) {
    if (z_size[b_k] != nums->size[b_k]) {
      b_p = false;
      exitg1 = true;
    } else {
      b_k++;
    }
  }
  if (b_p) {
    b_p = true;
    b_k = 0;
    exitg1 = false;
    while ((!exitg1) && (b_k < 2)) {
      if (z_size[b_k] != dens->size[b_k]) {
        b_p = false;
        exitg1 = true;
      } else {
        b_k++;
      }
    }
    if (!b_p) {
      p = false;
    }
  } else {
    p = false;
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&g_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  g_st.site = &qd_emlrtRSI;
  if ((1 <= z_size[1]) && (z_size[1] > 2147483646)) {
    h_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  b_k = nums->size[0] * nums->size[1];
  nums->size[0] = 1;
  emxEnsureCapacity_real_T(&b_st, nums, b_k, &of_emlrtRTEI);
  vlen = nums->size[1] - 1;
  for (b_k = 0; b_k <= vlen; b_k++) {
    nums->data[b_k] /= dens->data[b_k];
  }
  emxFree_real_T(&dens);
  st.site = &ed_emlrtRSI;
  b_st.site = &rd_emlrtRSI;
  c_st.site = &sd_emlrtRSI;
  vlen = nums->size[1];
  if (nums->size[1] == 0) {
    a = 1.0;
  } else {
    d_st.site = &td_emlrtRSI;
    a = nums->data[0];
    e_st.site = &ud_emlrtRSI;
    if ((2 <= nums->size[1]) && (nums->size[1] > 2147483646)) {
      f_st.site = &hb_emlrtRSI;
      check_forloop_overflow_error(&f_st);
    }
    for (b_k = 2; b_k <= vlen; b_k++) {
      a *= nums->data[b_k - 1];
    }
  }
  emxFree_real_T(&nums);
  c = muDoubleScalarRound(a);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return c;
}

/* End of code generation (bc.c) */
