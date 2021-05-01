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
#include "FSM_wrapper_emxutil.h"
#include "FSM_wrapper_types.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Declarations */
static double b_skip_to_last_equal_value(int *k, const emxArray_real_T *x);

static double c_skip_to_last_equal_value(int *k, const emxArray_real_T *x);

static double skip_to_last_equal_value(int *k, double x);

/* Function Definitions */
static double b_skip_to_last_equal_value(int *k, const emxArray_real_T *x)
{
  double absx;
  double xk;
  int exponent;
  bool exitg1;
  xk = x->data[*k - 1];
  exitg1 = false;
  while ((!exitg1) && (*k < x->size[0])) {
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

static double c_skip_to_last_equal_value(int *k, const emxArray_real_T *x)
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

static double skip_to_last_equal_value(int *k, double x)
{
  double absx;
  double xk;
  int exponent;
  bool exitg1;
  xk = x;
  exitg1 = false;
  while ((!exitg1) && (*k < 1)) {
    absx = fabs(x / 2.0);
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
    if ((fabs(x - x) < absx) || (rtIsInf(x) && rtIsInf(x))) {
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
  while ((ialast <= na) && (iblast <= b->size[0])) {
    b_ialast = ialast;
    ak = c_skip_to_last_equal_value(&b_ialast, a);
    ialast = b_ialast;
    bk = b_skip_to_last_equal_value(&iblast, b);
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
    ak = c_skip_to_last_equal_value(&iblast, a);
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

void c_do_vectors(const emxArray_real_T *a, const emxArray_real_T *b,
                  emxArray_real_T *c, emxArray_int32_T *ia,
                  emxArray_int32_T *ib)
{
  double absx;
  double ak;
  double bk;
  int b_ialast;
  int b_iblast;
  int exponent;
  int iafirst;
  int ialast;
  int ibfirst;
  int iblast;
  int nc;
  int ncmax;
  bool p;
  iafirst = a->size[1];
  ncmax = b->size[0];
  if (iafirst < ncmax) {
    ncmax = iafirst;
  }
  iafirst = c->size[0];
  c->size[0] = ncmax;
  emxEnsureCapacity_real_T(c, iafirst);
  iafirst = ia->size[0];
  ia->size[0] = ncmax;
  emxEnsureCapacity_int32_T(ia, iafirst);
  iafirst = ib->size[0];
  ib->size[0] = ncmax;
  emxEnsureCapacity_int32_T(ib, iafirst);
  nc = 0;
  iafirst = 0;
  ialast = 1;
  ibfirst = 0;
  iblast = 1;
  while ((ialast <= a->size[1]) && (iblast <= b->size[0])) {
    b_ialast = ialast;
    ak = c_skip_to_last_equal_value(&b_ialast, a);
    ialast = b_ialast;
    b_iblast = iblast;
    bk = b_skip_to_last_equal_value(&b_iblast, b);
    iblast = b_iblast;
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
      nc++;
      c->data[nc - 1] = ak;
      ia->data[nc - 1] = iafirst + 1;
      ib->data[nc - 1] = ibfirst + 1;
      ialast = b_ialast + 1;
      iafirst = b_ialast;
      iblast = b_iblast + 1;
      ibfirst = b_iblast;
    } else {
      if (rtIsNaN(bk)) {
        p = !rtIsNaN(ak);
      } else if (rtIsNaN(ak)) {
        p = false;
      } else {
        p = (ak < bk);
      }
      if (p) {
        ialast = b_ialast + 1;
        iafirst = b_ialast;
      } else {
        iblast = b_iblast + 1;
        ibfirst = b_iblast;
      }
    }
  }
  if (ncmax > 0) {
    iafirst = ia->size[0];
    if (1 > nc) {
      ia->size[0] = 0;
    } else {
      ia->size[0] = nc;
    }
    emxEnsureCapacity_int32_T(ia, iafirst);
    iafirst = ib->size[0];
    if (1 > nc) {
      ib->size[0] = 0;
    } else {
      ib->size[0] = nc;
    }
    emxEnsureCapacity_int32_T(ib, iafirst);
    iafirst = c->size[0];
    if (1 > nc) {
      c->size[0] = 0;
    } else {
      c->size[0] = nc;
    }
    emxEnsureCapacity_real_T(c, iafirst);
  }
}

void d_do_vectors(double a, const emxArray_real_T *b, double c_data[],
                  int c_size[2], int ia_data[], int *ia_size, int ib_data[],
                  int *ib_size)
{
  double absx;
  double ak;
  double bk;
  int b_ialast;
  int b_iblast;
  int exponent;
  int iafirst;
  int ialast;
  int ibfirst;
  int iblast;
  int nc;
  int ncmax;
  bool p;
  ncmax = b->size[1];
  if (1 < ncmax) {
    ncmax = 1;
  }
  c_size[0] = 1;
  c_size[1] = ncmax;
  *ia_size = (signed char)ncmax;
  *ib_size = (signed char)ncmax;
  nc = 0;
  iafirst = 0;
  ialast = 1;
  ibfirst = 0;
  iblast = 1;
  while ((ialast <= 1) && (iblast <= b->size[1])) {
    b_ialast = ialast;
    ak = skip_to_last_equal_value(&b_ialast, a);
    ialast = b_ialast;
    b_iblast = iblast;
    bk = c_skip_to_last_equal_value(&b_iblast, b);
    iblast = b_iblast;
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
      nc++;
      c_data[0] = ak;
      ia_data[0] = iafirst + 1;
      ib_data[0] = ibfirst + 1;
      ialast = b_ialast + 1;
      iafirst = b_ialast;
      iblast = b_iblast + 1;
      ibfirst = b_iblast;
    } else {
      if (rtIsNaN(bk)) {
        p = !rtIsNaN(ak);
      } else if (rtIsNaN(ak)) {
        p = false;
      } else {
        p = (ak < bk);
      }
      if (p) {
        ialast = b_ialast + 1;
        iafirst = b_ialast;
      } else {
        iblast = b_iblast + 1;
        ibfirst = b_iblast;
      }
    }
  }
  if (ncmax > 0) {
    *ia_size = (1 <= nc);
    *ib_size = (1 <= nc);
    c_size[1] = (1 <= nc);
  }
}

void do_vectors(double a, const emxArray_real_T *b, double c_data[],
                int *c_size, int ia_data[], int *ia_size, int ib_data[],
                int *ib_size)
{
  double absx;
  double ak;
  double bk;
  int b_ialast;
  int b_iblast;
  int exponent;
  int iafirst;
  int ialast;
  int ibfirst;
  int iblast;
  int nc;
  bool p;
  *c_size = b->size[0];
  if (1 < *c_size) {
    *c_size = 1;
  }
  *ia_size = (signed char)*c_size;
  *ib_size = (signed char)*c_size;
  nc = 0;
  iafirst = 0;
  ialast = 1;
  ibfirst = 0;
  iblast = 1;
  while ((ialast <= 1) && (iblast <= b->size[0])) {
    b_ialast = 1;
    ak = skip_to_last_equal_value(&b_ialast, a);
    ialast = b_ialast;
    b_iblast = iblast;
    bk = b_skip_to_last_equal_value(&b_iblast, b);
    iblast = b_iblast;
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
      nc++;
      c_data[0] = ak;
      ia_data[0] = iafirst + 1;
      ib_data[0] = ibfirst + 1;
      ialast = b_ialast + 1;
      iafirst = b_ialast;
      iblast = b_iblast + 1;
      ibfirst = b_iblast;
    } else {
      if (rtIsNaN(bk)) {
        p = !rtIsNaN(ak);
      } else if (rtIsNaN(ak)) {
        p = false;
      } else {
        p = (ak < bk);
      }
      if (p) {
        ialast = b_ialast + 1;
        iafirst = b_ialast;
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

void e_do_vectors(const emxArray_real_T *a, const emxArray_real_T *b,
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
  na = a->size[0];
  iblast = c->size[0];
  c->size[0] = a->size[0];
  emxEnsureCapacity_real_T(c, iblast);
  iblast = ia->size[0];
  ia->size[0] = a->size[0];
  emxEnsureCapacity_int32_T(ia, iblast);
  *ib_size = 0;
  nc = 0;
  nia = 0;
  iafirst = 0;
  ialast = 1;
  iblast = 1;
  while ((ialast <= na) && (iblast <= b->size[0])) {
    b_ialast = ialast;
    ak = b_skip_to_last_equal_value(&b_ialast, a);
    ialast = b_ialast;
    bk = b_skip_to_last_equal_value(&iblast, b);
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
    ak = b_skip_to_last_equal_value(&iblast, a);
    nc++;
    nia++;
    c->data[nc - 1] = ak;
    ia->data[nia - 1] = iafirst + 1;
    ialast = iblast + 1;
    iafirst = iblast;
  }
  if (a->size[0] > 0) {
    iblast = ia->size[0];
    if (1 > nia) {
      ia->size[0] = 0;
    } else {
      ia->size[0] = nia;
    }
    emxEnsureCapacity_int32_T(ia, iblast);
    iblast = c->size[0];
    if (1 > nc) {
      c->size[0] = 0;
    } else {
      c->size[0] = nc;
    }
    emxEnsureCapacity_real_T(c, iblast);
  }
}

void f_do_vectors(const emxArray_real_T *a, const emxArray_real32_T *b,
                  emxArray_real_T *c, emxArray_int32_T *ia, int *ib_size)
{
  double absx;
  double ak;
  float b_absx;
  float bk;
  int b_exponent;
  int b_ialast;
  int exponent;
  int iafirst;
  int ialast;
  int iblast;
  int na;
  int nc;
  int nia;
  bool exitg1;
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
  while ((ialast <= na) && (iblast <= b->size[0])) {
    b_ialast = ialast;
    ak = c_skip_to_last_equal_value(&b_ialast, a);
    ialast = b_ialast;
    bk = b->data[iblast - 1];
    exitg1 = false;
    while ((!exitg1) && (iblast < b->size[0])) {
      b_absx = fabsf(bk / 2.0F);
      if (!rtIsNaNF(b_absx)) {
        if (b_absx <= 1.17549435E-38F) {
          b_absx = 1.4013E-45F;
        } else {
          frexpf(b_absx, &b_exponent);
          b_absx = ldexpf(1.0F, b_exponent - 24);
        }
      } else {
        b_absx = rtNaNF;
      }
      if (fabsf(bk - b->data[iblast]) < b_absx) {
        iblast++;
      } else {
        exitg1 = true;
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
    if ((fabs(bk - ak) < absx) ||
        (rtIsInf(ak) && rtIsInf(bk) && ((ak > 0.0) == (bk > 0.0F)))) {
      ialast = b_ialast + 1;
      iafirst = b_ialast;
      iblast++;
    } else {
      if (rtIsNaNF(bk)) {
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
    ak = c_skip_to_last_equal_value(&iblast, a);
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

void g_do_vectors(const emxArray_real_T *a, const emxArray_real_T *b,
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
    ak = c_skip_to_last_equal_value(&b_ialast, a);
    ialast = b_ialast;
    bk = c_skip_to_last_equal_value(&iblast, b);
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
    ak = c_skip_to_last_equal_value(&iblast, a);
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

void h_do_vectors(double a, double c_data[], int c_size[2], int ia_data[],
                  int *ia_size, int ib_data[], int *ib_size)
{
  double absx;
  double ak;
  int b_exponent;
  int b_ialast;
  int b_iblast;
  int bk;
  int exponent;
  int iafirst;
  int ialast;
  int ibfirst;
  int iblast;
  int nc;
  bool exitg1;
  c_size[0] = 1;
  nc = 0;
  iafirst = 0;
  ialast = 1;
  ibfirst = 0;
  iblast = 1;
  while ((ialast <= 1) && (iblast <= 4)) {
    b_ialast = ialast;
    ak = skip_to_last_equal_value(&b_ialast, a);
    ialast = b_ialast;
    b_iblast = iblast;
    bk = iblast - 1;
    exitg1 = false;
    while ((!exitg1) && (b_iblast < 4)) {
      absx = ((double)iblast - 1.0) / 2.0;
      if (absx <= 2.2250738585072014E-308) {
        absx = 4.94065645841247E-324;
      } else {
        frexp(absx, &exponent);
        absx = ldexp(1.0, exponent - 53);
      }
      if (fabs((double)(iblast - b_iblast) - 1.0) < absx) {
        b_iblast++;
      } else {
        exitg1 = true;
      }
    }
    iblast = b_iblast;
    absx = (double)bk / 2.0;
    if (absx <= 2.2250738585072014E-308) {
      absx = 4.94065645841247E-324;
    } else {
      frexp(absx, &b_exponent);
      absx = ldexp(1.0, b_exponent - 53);
    }
    if (fabs((double)bk - ak) < absx) {
      nc++;
      c_data[0] = ak;
      ia_data[0] = iafirst + 1;
      ib_data[0] = ibfirst + 1;
      ialast = b_ialast + 1;
      iafirst = b_ialast;
      iblast = b_iblast + 1;
      ibfirst = b_iblast;
    } else if ((!rtIsNaN(ak)) && (ak < bk)) {
      ialast = b_ialast + 1;
      iafirst = b_ialast;
    } else {
      iblast = b_iblast + 1;
      ibfirst = b_iblast;
    }
  }
  *ia_size = (1 <= nc);
  *ib_size = (1 <= nc);
  c_size[1] = (1 <= nc);
}

void i_do_vectors(double a, double c_data[], int c_size[2], int ia_data[],
                  int *ia_size, int ib_data[], int *ib_size)
{
  double ak;
  double bk;
  int b_exponent;
  int b_ialast;
  int b_iblast;
  int exponent;
  int iafirst;
  int ialast;
  int ibfirst;
  int iblast;
  int nc;
  bool exitg1;
  c_size[0] = 1;
  nc = 0;
  iafirst = 0;
  ialast = 1;
  ibfirst = 0;
  iblast = 1;
  while ((ialast <= 1) && (iblast <= 2)) {
    b_ialast = ialast;
    ak = skip_to_last_equal_value(&b_ialast, a);
    ialast = b_ialast;
    b_iblast = iblast;
    bk = 0.25 * ((double)iblast - 1.0) + 0.25;
    exitg1 = false;
    while ((!exitg1) && (b_iblast < 2)) {
      frexp(bk / 2.0, &exponent);
      if (fabs(bk - 0.5) < ldexp(1.0, exponent - 53)) {
        b_iblast = 2;
      } else {
        exitg1 = true;
      }
    }
    iblast = b_iblast;
    frexp(bk / 2.0, &b_exponent);
    if (fabs(bk - ak) < ldexp(1.0, b_exponent - 53)) {
      nc++;
      c_data[0] = ak;
      ia_data[0] = iafirst + 1;
      ib_data[0] = ibfirst + 1;
      ialast = b_ialast + 1;
      iafirst = b_ialast;
      iblast = b_iblast + 1;
      ibfirst = b_iblast;
    } else if ((!rtIsNaN(ak)) && (ak < bk)) {
      ialast = b_ialast + 1;
      iafirst = b_ialast;
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
