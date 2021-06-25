/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * combsFS.c
 *
 * Code generation for function 'combsFS'
 *
 */

/* Include files */
#include "combsFS.h"
#include "bc.h"
#include "colon.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "isequal.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void combsFS(emxArray_real_T *v, double m, emxArray_real_T *P)
{
  emxArray_real_T *b_P;
  emxArray_real_T *b_v;
  emxArray_real_T *c_v;
  double bcn;
  double d;
  double fromRow;
  double s1;
  double s2;
  int b_i;
  unsigned int b_j;
  int b_loop_ub;
  int c_i;
  int c_loop_ub;
  int d_i;
  int i;
  int i1;
  int i2;
  int i3;
  int i4;
  int i5;
  int i6;
  int i7;
  int j;
  int loop_ub;
  int n;
  emxInit_real_T(&b_v, 2);
  /* combsFS is an iterative algorithm equivalent to the MATLAB combs.m */
  /*  */
  /*  It generates m-combinations without repetition taken in lexicographic */
  /*  order from the vector v. */
  /*  */
  /*  REMARK: the MATLAB function combs.m uses recursive calls and it is */
  /*  therefore very inefficient. Our iterative counterpart also makes better */
  /*  use of memory, first because it works iteratively, and then because we */
  /*  force computations in the lowest possible precision. This is not a */
  /*  limitation, because the algotithm first builds the matrix P of all */
  /*  m-combinations starting from the first n natural numbers, for which */
  /*  double precision is not at all needed. Then, if the input vector b is */
  /*  different from vector 1:v, then the desired P is simply obtained as P = */
  /*  v(P). Note also that we build the matrix P by going over colums rather */
  /*  than over lines. This is faster, as MATLAB indexes the elements of a */
  /*  matrix by column first. */
  /*  */
  /* <a href="matlab: docsearchFS('combsFS')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     v:         A vector with n elements. It contains the response variable.
   */
  /*                It can be either a row or a column vector. */
  /*                Data Types - single|double */
  /*  */
  /*     m:         Scalar. It specifies the size of the combinations. */
  /*                Data Types - single|double */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*  Output: */
  /*  */
  /*      P:        m-combinations without repetition taken in lexicographic */
  /*                order from the vector v. Matrix containing the */
  /*                m-combinations in the rows. */
  /*                Data Types - single|double */
  /*  */
  /*  See also: nchoosek */
  /*  */
  /*  References: */
  /*  */
  /*     Knuth, D. E. (1997). "The Art of Computer Programming", Volume 1: */
  /*     Fundamental Algorithms, Third ed. Addison-Wesley. [pp. 52--74]. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* <a href="matlab: docsearchFS('combsFS')">Link to the help function</a> */
  /*  */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  */
  /*  Examples: */
  /* { */
  /*     %% combsFS used to generate all possible combinations of size 3 of
   * elements 5, 8, 9, 10, 11. */
  /*     combsFS([5 8:11],3) */
  /* } */
  /*  Beginning of code */
  i = b_v->size[0] * b_v->size[1];
  b_v->size[0] = 1;
  b_v->size[1] = v->size[1];
  emxEnsureCapacity_real_T(b_v, i);
  loop_ub = v->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_v->data[i] = v->data[i];
  }
  i = v->size[0] * v->size[1];
  v->size[0] = 1;
  v->size[1] = b_v->size[1];
  emxEnsureCapacity_real_T(v, i);
  loop_ub = b_v->size[1];
  for (i = 0; i < loop_ub; i++) {
    v->data[i] = b_v->data[i];
  }
  /*  Make sure v is a row vector. */
  n = v->size[1];
  /*  Elements of v. */
  if (!(m > v->size[1])) {
    if (v->size[1] == m) {
      i = P->size[0] * P->size[1];
      P->size[0] = 1;
      P->size[1] = v->size[1];
      emxEnsureCapacity_real_T(P, i);
      loop_ub = v->size[1];
      for (i = 0; i < loop_ub; i++) {
        P->data[i] = v->data[i];
      }
    } else if (m == 1.0) {
      emxInit_real_T(&c_v, 1);
      i = c_v->size[0];
      c_v->size[0] = v->size[1];
      emxEnsureCapacity_real_T(c_v, i);
      loop_ub = v->size[1];
      for (i = 0; i < loop_ub; i++) {
        c_v->data[i] = v->data[i];
      }
      i = P->size[0] * P->size[1];
      P->size[0] = v->size[1];
      P->size[1] = 1;
      emxEnsureCapacity_real_T(P, i);
      loop_ub = v->size[1];
      for (i = 0; i < loop_ub; i++) {
        P->data[i] = c_v->data[i];
      }
      emxFree_real_T(&c_v);
    } else if (m == 0.0) {
      P->size[0] = 0;
      P->size[1] = 0;
    } else {
      /* The binomial coefficient (n choose m) can be computed using */
      /* prod(np1-m:n)/prod(1:m). For large number of combinations */
      /* our function 'bc' is better. */
      bcn = bc(v->size[1], m);
      /*  initialise the matrix of all m-combinations */
      i = P->size[0] * P->size[1];
      P->size[0] = (int)bcn;
      P->size[1] = (int)m;
      emxEnsureCapacity_real_T(P, i);
      loop_ub = (int)bcn * (int)m;
      for (i = 0; i < loop_ub; i++) {
        P->data[i] = 0.0;
      }
      /*  do once here n+1 (needed in the internal loop) */
      bcn = ((double)v->size[1] + 1.0) - m;
      /*  set the first n+1-m rows of the last column */
      if (v->size[1] < (int)m) {
        b_v->size[0] = 1;
        b_v->size[1] = 0;
      } else if (m == m) {
        i = b_v->size[0] * b_v->size[1];
        b_v->size[0] = 1;
        b_v->size[1] = (int)floor((double)v->size[1] - m) + 1;
        emxEnsureCapacity_real_T(b_v, i);
        loop_ub = (int)floor((double)v->size[1] - m);
        for (i = 0; i <= loop_ub; i++) {
          b_v->data[i] = m + (double)i;
        }
      } else {
        eml_float_colon(m, v->size[1], b_v);
      }
      loop_ub = b_v->size[1];
      for (i = 0; i < loop_ub; i++) {
        P->data[i + P->size[0] * ((int)m - 1)] = b_v->data[i];
      }
      i = (int)(((-1.0 - (m - 1.0)) + 1.0) / -1.0);
      emxInit_real_T(&b_P, 2);
      for (b_i = 0; b_i < i; b_i++) {
        c_i = (int)m - b_i;
        /*  external loop over colums */
        s1 = bcn;
        s2 = bcn;
        /*  set the first n+1-m rows block of rows of colum i */
        if (1.0 > bcn) {
          loop_ub = 0;
        } else {
          loop_ub = (int)bcn;
        }
        for (i1 = 0; i1 < loop_ub; i1++) {
          P->data[i1 + P->size[0] * (c_i - 2)] = c_i - 1;
        }
        i1 = ((c_i + n) - (int)m) - c_i;
        if (0 <= i1 - 1) {
          if (c_i > (int)m) {
            i2 = 0;
            i3 = 0;
            i4 = 1;
          } else {
            i2 = c_i - 1;
            i3 = (int)m;
            i4 = c_i;
          }
          b_loop_ub = i3 - i2;
          d_i = c_i;
        }
        for (j = 0; j < i1; j++) {
          b_j = (unsigned int)c_i + j;
          /*  internal loop */
          s1 = s1 * (((double)((unsigned int)n + c_i) - (double)b_j) - m) /
               (((double)n + 1.0) - (double)b_j);
          fromRow = bcn + 1.0;
          bcn = ((bcn + 1.0) + s1) - 1.0;
          d = (s2 - s1) + 1.0;
          if (d > s2) {
            i5 = 0;
            i6 = 0;
          } else {
            i5 = (int)d - 1;
            i6 = (int)s2;
          }
          if (fromRow > bcn) {
            i7 = 1;
          } else {
            i7 = (int)fromRow;
          }
          loop_ub = i6 - i5;
          i6 = b_P->size[0] * b_P->size[1];
          b_P->size[0] = loop_ub;
          b_P->size[1] = i3 - i2;
          emxEnsureCapacity_real_T(b_P, i6);
          for (i6 = 0; i6 < b_loop_ub; i6++) {
            for (c_loop_ub = 0; c_loop_ub < loop_ub; c_loop_ub++) {
              b_P->data[c_loop_ub + b_P->size[0] * i6] =
                  P->data[(i5 + c_loop_ub) + P->size[0] * (i2 + i6)];
            }
          }
          loop_ub = b_P->size[1];
          for (i5 = 0; i5 < loop_ub; i5++) {
            c_loop_ub = b_P->size[0];
            for (i6 = 0; i6 < c_loop_ub; i6++) {
              P->data[((i7 + i6) + P->size[0] * ((i4 + i5) - 1)) - 1] =
                  b_P->data[i6 + b_P->size[0] * i5];
            }
          }
          if (fromRow > bcn) {
            i5 = 0;
            i6 = 0;
          } else {
            i5 = (int)fromRow - 1;
            i6 = (int)bcn;
          }
          loop_ub = i6 - i5;
          for (i6 = 0; i6 < loop_ub; i6++) {
            P->data[(i5 + i6) + P->size[0] * (d_i - 2)] = b_j;
          }
        }
      }
      emxFree_real_T(&b_P);
      /*  find the true P if the vector of elements in v is not the default 1:n
       */
      if (v->size[1] < 1) {
        b_v->size[0] = 1;
        b_v->size[1] = 0;
      } else {
        i = b_v->size[0] * b_v->size[1];
        b_v->size[0] = 1;
        b_v->size[1] = v->size[1];
        emxEnsureCapacity_real_T(b_v, i);
        loop_ub = v->size[1] - 1;
        for (i = 0; i <= loop_ub; i++) {
          b_v->data[i] = (double)i + 1.0;
        }
      }
      if (!isequal(v, b_v)) {
        loop_ub = P->size[1];
        for (i = 0; i < loop_ub; i++) {
          b_loop_ub = P->size[0];
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            P->data[i1 + P->size[0] * i] =
                v->data[(int)P->data[i1 + P->size[0] * i] - 1];
          }
        }
      }
    }
  }
  emxFree_real_T(&b_v);
}

/* End of code generation (combsFS.c) */
