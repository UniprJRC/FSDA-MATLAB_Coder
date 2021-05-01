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
#include "FSRfan_wrapper_emxutil.h"
#include "FSRfan_wrapper_rtwutil.h"
#include "FSRfan_wrapper_types.h"
#include "colon.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
double bc(double n, double k)
{
  emxArray_real_T *dens;
  emxArray_real_T *nums;
  double a;
  int b_k;
  int vlen;
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
  a = (n - k) + 1.0;
  emxInit_real_T(&nums, 2);
  if (rtIsNaN(a) || rtIsNaN(n)) {
    b_k = nums->size[0] * nums->size[1];
    nums->size[0] = 1;
    nums->size[1] = 1;
    emxEnsureCapacity_real_T(nums, b_k);
    nums->data[0] = rtNaN;
  } else if (n < a) {
    nums->size[1] = 0;
  } else if ((rtIsInf(a) || rtIsInf(n)) && (a == n)) {
    b_k = nums->size[0] * nums->size[1];
    nums->size[0] = 1;
    nums->size[1] = 1;
    emxEnsureCapacity_real_T(nums, b_k);
    nums->data[0] = rtNaN;
  } else if (floor(a) == a) {
    b_k = nums->size[0] * nums->size[1];
    nums->size[0] = 1;
    vlen = (int)floor(n - a);
    nums->size[1] = vlen + 1;
    emxEnsureCapacity_real_T(nums, b_k);
    for (b_k = 0; b_k <= vlen; b_k++) {
      nums->data[b_k] = a + (double)b_k;
    }
  } else {
    eml_float_colon(a, n, nums);
  }
  emxInit_real_T(&dens, 2);
  if (rtIsNaN(k)) {
    b_k = dens->size[0] * dens->size[1];
    dens->size[0] = 1;
    dens->size[1] = 1;
    emxEnsureCapacity_real_T(dens, b_k);
    dens->data[0] = rtNaN;
  } else if (k < 1.0) {
    dens->size[0] = 1;
    dens->size[1] = 0;
  } else if (rtIsInf(k) && (1.0 == k)) {
    b_k = dens->size[0] * dens->size[1];
    dens->size[0] = 1;
    dens->size[1] = 1;
    emxEnsureCapacity_real_T(dens, b_k);
    dens->data[0] = rtNaN;
  } else {
    b_k = dens->size[0] * dens->size[1];
    dens->size[0] = 1;
    vlen = (int)floor(k - 1.0);
    dens->size[1] = vlen + 1;
    emxEnsureCapacity_real_T(dens, b_k);
    for (b_k = 0; b_k <= vlen; b_k++) {
      dens->data[b_k] = (double)b_k + 1.0;
    }
  }
  b_k = nums->size[0] * nums->size[1];
  nums->size[0] = 1;
  emxEnsureCapacity_real_T(nums, b_k);
  vlen = nums->size[1] - 1;
  for (b_k = 0; b_k <= vlen; b_k++) {
    nums->data[b_k] /= dens->data[b_k];
  }
  emxFree_real_T(&dens);
  vlen = nums->size[1];
  if (nums->size[1] == 0) {
    a = 1.0;
  } else {
    a = nums->data[0];
    for (b_k = 2; b_k <= vlen; b_k++) {
      a *= nums->data[b_k - 1];
    }
  }
  emxFree_real_T(&nums);
  return rt_roundd_snf(a);
}

/* End of code generation (bc.c) */
