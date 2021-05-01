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
bool b_strcmp(const emxArray_char_T *a)
{
  static const char cv[6] = {'B', 'o', 'x', 'C', 'o', 'x'};
  int exitg1;
  int kstr;
  bool b_bool;
  b_bool = false;
  if ((a->size[0] == 1) && (a->size[1] == 6)) {
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr < 6) {
        if (a->data[kstr] != cv[kstr]) {
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

bool c_strcmp(const emxArray_char_T *a)
{
  static const char cv[2] = {'Y', 'J'};
  int exitg1;
  int kstr;
  bool b_bool;
  b_bool = false;
  if ((a->size[0] == 1) && (a->size[1] == 2)) {
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr < 2) {
        if (a->data[kstr] != cv[kstr]) {
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

bool d_strcmp(const emxArray_char_T *a)
{
  static const char cv[4] = {'Y', 'J', 'p', 'n'};
  int exitg1;
  int kstr;
  bool b_bool;
  b_bool = false;
  if ((a->size[0] == 1) && (a->size[1] == 4)) {
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr < 4) {
        if (a->data[kstr] != cv[kstr]) {
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

bool e_strcmp(const emxArray_char_T *a)
{
  static const char cv[5] = {'Y', 'J', 'a', 'l', 'l'};
  int exitg1;
  int kstr;
  bool b_bool;
  b_bool = false;
  if ((a->size[0] == 1) && (a->size[1] == 5)) {
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr < 5) {
        if (a->data[kstr] != cv[kstr]) {
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
