/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eml_setop.c
 *
 * Code generation for function 'eml_setop'
 *
 */

/* Include files */
#include "eml_setop.h"
#include "FSMbsb_wrapper_types.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
void do_vectors(double a, const emxArray_real_T *b, double c_data[],
                int *c_size, int ia_data[], int *ia_size, int ib_data[],
                int *ib_size)
{
  double absx;
  double bk;
  int b_exponent;
  int b_iblast;
  int exponent;
  int ibfirst;
  int iblast;
  int nc;
  bool exitg1;
  bool exitg2;
  bool p;
  *c_size = b->size[0];
  if (1 < *c_size) {
    *c_size = 1;
  }
  *ia_size = (signed char)*c_size;
  *ib_size = (signed char)*c_size;
  nc = 0;
  ibfirst = 0;
  iblast = 1;
  exitg1 = false;
  while ((!exitg1) && (iblast <= b->size[0])) {
    b_iblast = iblast;
    bk = b->data[iblast - 1];
    exitg2 = false;
    while ((!exitg2) && (b_iblast < b->size[0])) {
      absx = fabs(bk / 2.0);
      if ((!rtIsInf(absx)) && (!rtIsNaN(absx))) {
        if (absx <= 2.2250738585072014E-308) {
          absx = 4.94065645841247E-324;
        } else {
          frexp(absx, &b_exponent);
          absx = ldexp(1.0, b_exponent - 53);
        }
      } else {
        absx = rtNaN;
      }
      if ((fabs(bk - b->data[b_iblast]) < absx) ||
          (rtIsInf(b->data[b_iblast]) && rtIsInf(bk) &&
           ((b->data[b_iblast] > 0.0) == (bk > 0.0)))) {
        b_iblast++;
      } else {
        exitg2 = true;
      }
    }
    absx = fabs(bk / 2.0);
    if ((!rtIsInf(absx)) && (!rtIsNaN(absx))) {
      if (absx <= 2.2250738585072014E-308) {
        absx = 4.94065645841247E-324;
      } else {
        frexp(absx, &exponent);
        absx = ldexp(1.0, exponent - 53);
      }
    } else {
      absx = rtNaN;
    }
    if ((fabs(bk - a) < absx) ||
        (rtIsInf(a) && rtIsInf(bk) && ((a > 0.0) == (bk > 0.0)))) {
      nc = 1;
      c_data[0] = a;
      ia_data[0] = 1;
      ib_data[0] = ibfirst + 1;
      exitg1 = true;
    } else {
      if (rtIsNaN(bk)) {
        p = !rtIsNaN(a);
      } else if (rtIsNaN(a)) {
        p = false;
      } else {
        p = (a < bk);
      }
      if (p) {
        exitg1 = true;
      } else {
        iblast = b_iblast + 1;
        ibfirst = b_iblast;
      }
    }
  }
  if (*c_size > 0) {
    *ia_size = (1 <= nc);
    *ib_size = (1 <= nc);
    *c_size = (1 <= nc);
  }
}

/* End of code generation (eml_setop.c) */
