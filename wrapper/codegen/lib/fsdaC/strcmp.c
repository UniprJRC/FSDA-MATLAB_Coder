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
#include "fsdaC_types.h"
#include "rt_nonfinite.h"

/* Custom Source Code */
#pragma GCC diagnostic ignored "-Wmaybe-uninitialized"
/* Function Definitions */
bool b_strcmp(const char a_data[], const int a_size[2])
{
  static const char b_cv[2] = {'m', 'd'};
  int exitg1;
  int kstr;
  bool b_bool;
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

bool c_strcmp(const char a_data[], const int a_size[2])
{
  static const char b_cv[3] = {'b', 'i', 'v'};
  int exitg1;
  int kstr;
  bool b_bool;
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

bool d_strcmp(const char a_data[], const int a_size[2])
{
  static const char b_cv[3] = {'u', 'n', 'i'};
  int exitg1;
  int kstr;
  bool b_bool;
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

bool e_strcmp(const char a_data[], const int a_size[2])
{
  static const char b_cv[2] = {'m', 'd'};
  int exitg1;
  int kstr;
  bool b_bool;
  b_bool = false;
  if (a_size[1] == 2) {
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

bool f_strcmp(const char a_data[], const int a_size[2])
{
  static const char b_cv[3] = {'b', 'i', 'v'};
  int exitg1;
  int kstr;
  bool b_bool;
  b_bool = false;
  if (a_size[1] == 3) {
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

bool g_strcmp(const char a_data[], const int a_size[2])
{
  static const char b_cv[3] = {'u', 'n', 'i'};
  int exitg1;
  int kstr;
  bool b_bool;
  b_bool = false;
  if (a_size[1] == 3) {
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

bool h_strcmp(const emxArray_char_T *a)
{
  static const char b_cv[6] = {'B', 'o', 'x', 'C', 'o', 'x'};
  int exitg1;
  int kstr;
  bool b_bool;
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

bool i_strcmp(const emxArray_char_T *a)
{
  static const char b_cv[2] = {'Y', 'J'};
  int exitg1;
  int kstr;
  bool b_bool;
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

bool j_strcmp(const emxArray_char_T *a)
{
  static const char b_cv[4] = {'Y', 'J', 'p', 'n'};
  int exitg1;
  int kstr;
  bool b_bool;
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

bool k_strcmp(const emxArray_char_T *a)
{
  static const char b_cv[5] = {'Y', 'J', 'a', 'l', 'l'};
  int exitg1;
  int kstr;
  bool b_bool;
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
