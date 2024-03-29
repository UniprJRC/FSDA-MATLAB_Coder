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
#include "fsdaC_data.h"
#include "fsdaC_internal_types.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
bool ab_strcmp(const char a[3])
{
  static const char b[3] = {'E', 'V', 'E'};
  int ret;
  ret = memcmp(&a[0], &b[0], 3);
  return ret == 0;
}

bool b_strcmp(const emxArray_char_T *a)
{
  static const char b_cv[2] = {'m', 'd'};
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

bool bb_strcmp(const char a[3])
{
  static const char b[3] = {'E', 'I', 'I'};
  int ret;
  ret = memcmp(&a[0], &b[0], 3);
  return ret == 0;
}

bool c_strcmp(const emxArray_char_T *a)
{
  static const char b_cv[3] = {'b', 'i', 'v'};
  int exitg1;
  int kstr;
  bool b_bool;
  b_bool = false;
  if ((a->size[0] == 1) && (a->size[1] == 3)) {
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr < 3) {
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

bool cb_strcmp(const char a[3])
{
  static const char b[3] = {'V', 'I', 'I'};
  int ret;
  ret = memcmp(&a[0], &b[0], 3);
  return ret == 0;
}

bool d_strcmp(const emxArray_char_T *a)
{
  static const char b_cv[3] = {'u', 'n', 'i'};
  int exitg1;
  int kstr;
  bool b_bool;
  b_bool = false;
  if ((a->size[0] == 1) && (a->size[1] == 3)) {
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr < 3) {
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

bool db_strcmp(const char a[3])
{
  static const char b[3] = {'E', 'E', 'I'};
  int ret;
  ret = memcmp(&a[0], &b[0], 3);
  return ret == 0;
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

bool eb_strcmp(const char a[3])
{
  static const char b[3] = {'V', 'E', 'I'};
  int ret;
  ret = memcmp(&a[0], &b[0], 3);
  return ret == 0;
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

bool fb_strcmp(const char a[3])
{
  static const char b[3] = {'E', 'V', 'I'};
  int ret;
  ret = memcmp(&a[0], &b[0], 3);
  return ret == 0;
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

bool gb_strcmp(const char a[3])
{
  static const char b[3] = {'V', 'V', 'I'};
  int ret;
  ret = memcmp(&a[0], &b[0], 3);
  return ret == 0;
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

bool hb_strcmp(const char a[3])
{
  int ret;
  char b[3];
  b[0] = 'E';
  b[1] = 'E';
  b[2] = 'E';
  ret = memcmp(&a[0], &b[0], 3);
  return ret == 0;
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

bool ib_strcmp(const char a[3])
{
  static const char b[3] = {'V', 'E', 'E'};
  int ret;
  ret = memcmp(&a[0], &b[0], 3);
  return ret == 0;
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

bool jb_strcmp(const char a[3])
{
  static const char b[3] = {'E', 'E', 'V'};
  int ret;
  ret = memcmp(&a[0], &b[0], 3);
  return ret == 0;
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

bool kb_strcmp(const char a[3])
{
  static const char b[3] = {'V', 'E', 'V'};
  int ret;
  ret = memcmp(&a[0], &b[0], 3);
  return ret == 0;
}

bool l_strcmp(const emxArray_char_T *a)
{
  static const char b_cv[8] = {'b', 'i', 's', 'q', 'u', 'a', 'r', 'e'};
  int exitg1;
  int kstr;
  bool b_bool;
  b_bool = false;
  if ((a->size[0] == 1) && (a->size[1] == 8)) {
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr < 8) {
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

bool lb_strcmp(const char a[3])
{
  static const char b[3] = {'E', 'V', 'V'};
  int ret;
  ret = memcmp(&a[0], &b[0], 3);
  return ret == 0;
}

bool m_strcmp(const emxArray_char_T *a)
{
  static const char b_cv[7] = {'o', 'p', 't', 'i', 'm', 'a', 'l'};
  int exitg1;
  int kstr;
  bool b_bool;
  b_bool = false;
  if ((a->size[0] == 1) && (a->size[1] == 7)) {
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr < 7) {
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

bool mb_strcmp(const char a[3])
{
  int ret;
  char b[3];
  b[0] = 'V';
  b[1] = 'V';
  b[2] = 'V';
  ret = memcmp(&a[0], &b[0], 3);
  return ret == 0;
}

bool n_strcmp(const emxArray_char_T *a)
{
  int exitg1;
  int kstr;
  bool b_bool;
  b_bool = false;
  if ((a->size[0] == 1) && (a->size[1] == 10)) {
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr < 10) {
        if (a->data[kstr] != cv1[kstr]) {
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

bool o_strcmp(const emxArray_char_T *a)
{
  static const char b_cv[6] = {'h', 'a', 'm', 'p', 'e', 'l'};
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

bool p_strcmp(const emxArray_char_T *a)
{
  static const char b_cv[4] = {'m', 'd', 'p', 'd'};
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

bool q_strcmp(const char a_data[], const int a_size[2])
{
  static const char b_cv[2] = {'T', 'B'};
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

bool r_strcmp(const char a_data[], const int a_size[2])
{
  static const char b_cv[3] = {'O', 'P', 'T'};
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

bool s_strcmp(const char a_data[], const int a_size[2])
{
  static const char b_cv[2] = {'H', 'A'};
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

bool t_strcmp(const char a_data[], const int a_size[2])
{
  static const char b_cv[3] = {'H', 'Y', 'P'};
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

bool u_strcmp(const char a_data[], const int a_size[2])
{
  static const char b_cv[2] = {'P', 'D'};
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

void v_strcmp(const char a[3], bool b_bool[7])
{
  static const char b[3] = {'E', 'V', 'E'};
  static const char b_b[3] = {'V', 'E', 'E'};
  static const char c_b[3] = {'V', 'V', 'E'};
  static const char e_b[3] = {'V', 'E', 'V'};
  static const char f_b[3] = {'V', 'V', 'I'};
  static const char g_b[3] = {'V', 'E', 'I'};
  cell_wrap_64 r;
  int ret;
  char d_b[3];
  r.f1[0] = a[0];
  r.f1[1] = a[1];
  r.f1[2] = a[2];
  ret = memcmp(&r.f1[0], &b[0], 3);
  b_bool[0] = (ret == 0);
  ret = memcmp(&r.f1[0], &b_b[0], 3);
  b_bool[1] = (ret == 0);
  ret = memcmp(&r.f1[0], &c_b[0], 3);
  b_bool[2] = (ret == 0);
  d_b[0] = 'V';
  d_b[1] = 'V';
  d_b[2] = 'V';
  ret = memcmp(&r.f1[0], &d_b[0], 3);
  b_bool[3] = (ret == 0);
  ret = memcmp(&r.f1[0], &e_b[0], 3);
  b_bool[4] = (ret == 0);
  ret = memcmp(&r.f1[0], &f_b[0], 3);
  b_bool[5] = (ret == 0);
  ret = memcmp(&r.f1[0], &g_b[0], 3);
  b_bool[6] = (ret == 0);
}

void w_strcmp(const char a[3], bool b_bool[6])
{
  static const char b[3] = {'V', 'V', 'E'};
  static const char b_b[3] = {'E', 'V', 'E'};
  static const char d_b[3] = {'E', 'V', 'V'};
  static const char e_b[3] = {'V', 'V', 'I'};
  static const char f_b[3] = {'E', 'V', 'I'};
  cell_wrap_64 r;
  int ret;
  char c_b[3];
  r.f1[0] = a[0];
  r.f1[1] = a[1];
  r.f1[2] = a[2];
  ret = memcmp(&r.f1[0], &b[0], 3);
  b_bool[0] = (ret == 0);
  ret = memcmp(&r.f1[0], &b_b[0], 3);
  b_bool[1] = (ret == 0);
  c_b[0] = 'V';
  c_b[1] = 'V';
  c_b[2] = 'V';
  ret = memcmp(&r.f1[0], &c_b[0], 3);
  b_bool[2] = (ret == 0);
  ret = memcmp(&r.f1[0], &d_b[0], 3);
  b_bool[3] = (ret == 0);
  ret = memcmp(&r.f1[0], &e_b[0], 3);
  b_bool[4] = (ret == 0);
  ret = memcmp(&r.f1[0], &f_b[0], 3);
  b_bool[5] = (ret == 0);
}

void x_strcmp(const char a[3], bool b_bool[2])
{
  static const char b[3] = {'E', 'V', 'E'};
  static const char b_b[3] = {'V', 'V', 'E'};
  cell_wrap_64 r;
  int ret;
  r.f1[0] = a[0];
  r.f1[1] = a[1];
  r.f1[2] = a[2];
  ret = memcmp(&r.f1[0], &b[0], 3);
  b_bool[0] = (ret == 0);
  ret = memcmp(&r.f1[0], &b_b[0], 3);
  b_bool[1] = (ret == 0);
}

bool y_strcmp(const char a[3])
{
  static const char b[3] = {'V', 'V', 'E'};
  int ret;
  ret = memcmp(&a[0], &b[0], 3);
  return ret == 0;
}

/* End of code generation (strcmp.c) */
