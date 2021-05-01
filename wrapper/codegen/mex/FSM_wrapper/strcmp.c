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
#include "rt_nonfinite.h"

/* Function Definitions */
boolean_T b_strcmp(const char_T a_data[], const int32_T a_size[2])
{
  static const char_T b_cv[2] = {'m', 'd'};
  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if ((a_size[0] == 1) && (a_size[1] == 2)) {
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr < 2) {
        if (a_data[kstr] != b_cv[kstr]) {
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

boolean_T c_strcmp(const char_T a_data[], const int32_T a_size[2])
{
  static const char_T b_cv[3] = {'b', 'i', 'v'};
  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if ((a_size[0] == 1) && (a_size[1] == 3)) {
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr < 3) {
        if (a_data[kstr] != b_cv[kstr]) {
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

boolean_T d_strcmp(const char_T a_data[], const int32_T a_size[2])
{
  static const char_T b_cv[3] = {'u', 'n', 'i'};
  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  b_bool = false;
  if ((a_size[0] == 1) && (a_size[1] == 3)) {
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr < 3) {
        if (a_data[kstr] != b_cv[kstr]) {
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
