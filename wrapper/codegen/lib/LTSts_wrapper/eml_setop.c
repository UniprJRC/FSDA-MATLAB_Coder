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
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_types.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Declarations */
static double skip_to_last_equal_value(int *k, const emxArray_real_T *x);

/* Function Definitions */
static double skip_to_last_equal_value(int *k, const emxArray_real_T *x)
{
  double absx;
  double xk;
  int exponent;
  bool exitg1;
  xk = x->data[*k - 1];
  exitg1 = false;
  while ((!exitg1) && (*k < x->size[1])) {
    absx = fabs(xk / 2.0);
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
    if ((fabs(xk - x->data[*k]) < absx) ||
        (rtIsInf(x->data[*k]) && rtIsInf(xk) &&
         ((x->data[*k] > 0.0) == (xk > 0.0)))) {
      (*k)++;
    } else {
      exitg1 = true;
    }
  }
  return xk;
}

void b_do_vectors(const emxArray_real_T *a, const emxArray_real_T *b,
                  emxArray_real_T *c, emxArray_int32_T *ia, int *ib_size)
{
  double absx;
  double ak;
  double bk;
  int b_ialast;
  int exponent;
  int iafirst;
  int ialast;
  int iblast;
  int na;
  int nc;
  int nia;
  bool p;
  na = a->size[1];
  iblast = c->size[0] * c->size[1];
  c->size[0] = 1;
  c->size[1] = a->size[1];
  emxEnsureCapacity_real_T(c, iblast);
  iblast = ia->size[0];
  ia->size[0] = a->size[1];
  emxEnsureCapacity_int32_T(ia, iblast);
  *ib_size = 0;
  nc = 0;
  nia = 0;
  iafirst = 0;
  ialast = 1;
  iblast = 1;
  while ((ialast <= na) && (iblast <= b->size[1])) {
    b_ialast = ialast;
    ak = skip_to_last_equal_value(&b_ialast, a);
    ialast = b_ialast;
    bk = skip_to_last_equal_value(&iblast, b);
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
    if ((fabs(bk - ak) < absx) ||
        (rtIsInf(ak) && rtIsInf(bk) && ((ak > 0.0) == (bk > 0.0)))) {
      ialast = b_ialast + 1;
      iafirst = b_ialast;
      iblast++;
    } else {
      if (rtIsNaN(bk)) {
        p = !rtIsNaN(ak);
      } else if (rtIsNaN(ak)) {
        p = false;
      } else {
        p = (ak < bk);
      }
      if (p) {
        nc++;
        nia++;
        c->data[nc - 1] = ak;
        ia->data[nia - 1] = iafirst + 1;
        ialast = b_ialast + 1;
        iafirst = b_ialast;
      } else {
        iblast++;
      }
    }
  }
  while (ialast <= na) {
    iblast = ialast;
    ak = skip_to_last_equal_value(&iblast, a);
    nc++;
    nia++;
    c->data[nc - 1] = ak;
    ia->data[nia - 1] = iafirst + 1;
    ialast = iblast + 1;
    iafirst = iblast;
  }
  if (a->size[1] > 0) {
    iblast = ia->size[0];
    if (1 > nia) {
      ia->size[0] = 0;
    } else {
      ia->size[0] = nia;
    }
    emxEnsureCapacity_int32_T(ia, iblast);
    iblast = c->size[0] * c->size[1];
    if (1 > nc) {
      c->size[1] = 0;
    } else {
      c->size[1] = nc;
    }
    emxEnsureCapacity_real_T(c, iblast);
  }
}

void c_do_vectors(double a, double c_data[], int c_size[2], int ia_data[],
                  int *ia_size, int ib_data[], int *ib_size)
{
  double bk;
  int b_exponent;
  int b_iblast;
  int exponent;
  int ibfirst;
  int iblast;
  int nc;
  bool exitg1;
  bool exitg2;
  c_size[0] = 1;
  nc = 0;
  ibfirst = 0;
  iblast = 1;
  exitg1 = false;
  while ((!exitg1) && (iblast <= 2)) {
    b_iblast = iblast;
    bk = 0.25 * ((double)iblast - 1.0) + 0.25;
    exitg2 = false;
    while ((!exitg2) && (b_iblast < 2)) {
      frexp(bk / 2.0, &b_exponent);
      if (fabs(bk - 0.5) < ldexp(1.0, b_exponent - 53)) {
        b_iblast = 2;
      } else {
        exitg2 = true;
      }
    }
    frexp(bk / 2.0, &exponent);
    if (fabs(bk - a) < ldexp(1.0, exponent - 53)) {
      nc = 1;
      c_data[0] = a;
      ia_data[0] = 1;
      ib_data[0] = ibfirst + 1;
      exitg1 = true;
    } else if ((!rtIsNaN(a)) && (a < bk)) {
      exitg1 = true;
    } else {
      iblast = b_iblast + 1;
      ibfirst = b_iblast;
    }
  }
  *ia_size = (1 <= nc);
  *ib_size = (1 <= nc);
  c_size[1] = (1 <= nc);
}

void do_vectors(double a, double c_data[], int c_size[2], int ia_data[],
                int *ia_size, int ib_data[], int *ib_size)
{
  double absx;
  int b_exponent;
  int b_iblast;
  int exponent;
  int ibfirst;
  int iblast;
  int nc;
  bool exitg1;
  bool exitg2;
  c_size[0] = 1;
  nc = 0;
  ibfirst = 0;
  iblast = 1;
  exitg1 = false;
  while ((!exitg1) && (iblast <= 4)) {
    b_iblast = iblast;
    exitg2 = false;
    while ((!exitg2) && (b_iblast < 4)) {
      absx = ((double)iblast - 1.0) / 2.0;
      if (absx <= 2.2250738585072014E-308) {
        absx = 4.94065645841247E-324;
      } else {
        frexp(absx, &b_exponent);
        absx = ldexp(1.0, b_exponent - 53);
      }
      if (fabs((double)(iblast - b_iblast) - 1.0) < absx) {
        b_iblast++;
      } else {
        exitg2 = true;
      }
    }
    absx = ((double)iblast - 1.0) / 2.0;
    if (absx <= 2.2250738585072014E-308) {
      absx = 4.94065645841247E-324;
    } else {
      frexp(absx, &exponent);
      absx = ldexp(1.0, exponent - 53);
    }
    if (fabs(((double)iblast - 1.0) - a) < absx) {
      nc = 1;
      c_data[0] = a;
      ia_data[0] = 1;
      ib_data[0] = ibfirst + 1;
      exitg1 = true;
    } else if ((!rtIsNaN(a)) && (a < (double)iblast - 1.0)) {
      exitg1 = true;
    } else {
      iblast = b_iblast + 1;
      ibfirst = b_iblast;
    }
  }
  *ia_size = (1 <= nc);
  *ib_size = (1 <= nc);
  c_size[1] = (1 <= nc);
}

/* End of code generation (eml_setop.c) */
