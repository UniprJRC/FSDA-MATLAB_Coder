/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * strcmp.c
 *
 * Code generation for function 'strcmp'
 *
 */

/* Include files */
#include "strcmp.h"
#include "FSRfan_wrapper_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
boolean_T b_strcmp(const emxArray_char_T *a)
{
  static const char_T b_cv[6] = {'B', 'o', 'x', 'C', 'o', 'x'};
  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if ((a->size[0] == 1) && (a->size[1] == 6)) {
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr < 6) {
        if (a->data[kstr] != b_cv[kstr]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  return b_bool;
}

boolean_T c_strcmp(const emxArray_char_T *a)
{
  static const char_T b_cv[2] = {'Y', 'J'};
  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if ((a->size[0] == 1) && (a->size[1] == 2)) {
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr < 2) {
        if (a->data[kstr] != b_cv[kstr]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  return b_bool;
}

boolean_T d_strcmp(const emxArray_char_T *a)
{
  static const char_T b_cv[4] = {'Y', 'J', 'p', 'n'};
  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if ((a->size[0] == 1) && (a->size[1] == 4)) {
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr < 4) {
        if (a->data[kstr] != b_cv[kstr]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  return b_bool;
}

boolean_T e_strcmp(const emxArray_char_T *a)
{
  static const char_T b_cv[5] = {'Y', 'J', 'a', 'l', 'l'};
  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if ((a->size[0] == 1) && (a->size[1] == 5)) {
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr < 5) {
        if (a->data[kstr] != b_cv[kstr]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  return b_bool;
}

/* End of code generation (strcmp.c) */
