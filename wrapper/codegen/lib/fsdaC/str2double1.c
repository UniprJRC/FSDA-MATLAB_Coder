/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * str2double1.c
 *
 * Code generation for function 'str2double1'
 *
 */

/* Include files */
#include "str2double1.h"
#include "fsdaC_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
bool b_copydigits(char s1[4], int *idx, const char s[2], int *k,
                  bool allowpoint)
{
  char c;
  bool exitg1;
  bool haspoint;
  bool success;
  success = (*k <= 2);
  haspoint = false;
  exitg1 = false;
  while ((!exitg1) && (success && (*k <= 2))) {
    c = s[*k - 1];
    if ((c >= '0') && (c <= '9')) {
      s1[*idx - 1] = c;
      (*idx)++;
      (*k)++;
    } else if (c == '.') {
      if (allowpoint && (!haspoint)) {
        success = true;
      } else {
        success = false;
      }
      if (success) {
        s1[*idx - 1] = '.';
        (*idx)++;
        haspoint = true;
      }
      (*k)++;
    } else if (c == ',') {
      (*k)++;
    } else {
      exitg1 = true;
    }
  }
  return success;
}

bool b_copyexponent(char s1[4], int *idx, const char s[2], int *k)
{
  int kexp;
  char c;
  bool b_success;
  bool success;
  success = true;
  if (*k <= 2) {
    c = s[*k - 1];
    if ((c == 'E') || (c == 'e')) {
      s1[*idx - 1] = 'e';
      (*idx)++;
      (*k)++;
      while ((*k <= 2) && (s[1] == ',')) {
        *k = 3;
      }
      if (*k <= 2) {
        if (s[1] == '-') {
          s1[*idx - 1] = '-';
          (*idx)++;
          *k = 3;
        } else if (s[1] == '+') {
          *k = 3;
        }
      }
      kexp = *k;
      b_success = b_copydigits(s1, idx, s, k, false);
      if ((!b_success) || (*k <= kexp)) {
        success = false;
      }
    }
  }
  return success;
}

void b_readNonFinite(const char s[2], int *k, bool *b_finite, double *fv)
{
  int ksaved;
  char c_idx_0;
  char c_idx_1;
  char c_idx_2;
  ksaved = *k;
  c_idx_0 = '\x00';
  while ((*k <= 2) && (s[*k - 1] == ',')) {
    (*k)++;
  }
  if (*k <= 2) {
    c_idx_0 = s[*k - 1];
  }
  (*k)++;
  c_idx_1 = '\x00';
  while ((*k <= 2) && (s[*k - 1] == ',')) {
    (*k)++;
  }
  if (*k <= 2) {
    c_idx_1 = s[*k - 1];
  }
  (*k)++;
  c_idx_2 = '\x00';
  while ((*k <= 2) && (s[*k - 1] == ',')) {
    (*k)++;
  }
  if (*k <= 2) {
    c_idx_2 = s[*k - 1];
  }
  (*k)++;
  if (((c_idx_0 == 'I') || (c_idx_0 == 'i')) &&
      ((c_idx_1 == 'N') || (c_idx_1 == 'n')) &&
      ((c_idx_2 == 'F') || (c_idx_2 == 'f'))) {
    *b_finite = false;
    *fv = rtInf;
  } else if (((c_idx_0 == 'N') || (c_idx_0 == 'n')) &&
             ((c_idx_1 == 'A') || (c_idx_1 == 'a')) &&
             ((c_idx_2 == 'N') || (c_idx_2 == 'n'))) {
    *b_finite = false;
    *fv = rtNaN;
  } else {
    *b_finite = true;
    *fv = 0.0;
    *k = ksaved;
  }
}

void b_readfloat(char s1[4], int *idx, const char s[2], int *k, bool allowimag,
                 bool *isimag, bool *b_finite, double *nfv, bool *foundsign,
                 bool *success)
{
  int b_idx;
  int exitg3;
  char c;
  bool a__3;
  bool exitg1;
  bool guard1 = false;
  bool isneg;
  *isimag = false;
  *b_finite = true;
  *nfv = 0.0;
  b_idx = *idx;
  isneg = false;
  *foundsign = false;
  exitg1 = false;
  while ((!exitg1) && (*k <= 2)) {
    c = s[*k - 1];
    if (c == '-') {
      isneg = !isneg;
      *foundsign = true;
      (*k)++;
    } else if (c == ',') {
      (*k)++;
    } else if (c == '+') {
      *foundsign = true;
      (*k)++;
    } else if (!bv[(unsigned char)c & 127]) {
      exitg1 = true;
    } else {
      (*k)++;
    }
  }
  *success = (*k <= 2);
  if ((*success) && isneg) {
    if ((*idx >= 2) && (s1[*idx - 2] == '-')) {
      s1[*idx - 2] = ' ';
    } else {
      s1[*idx - 1] = '-';
      b_idx = *idx + 1;
    }
  }
  *idx = b_idx;
  if (*success) {
    guard1 = false;
    if (*k <= 2) {
      c = s[*k - 1];
      if ((c == 'j') || (c == 'i')) {
        if (allowimag) {
          *isimag = true;
          (*k)++;
          exitg1 = false;
          while ((!exitg1) && (*k <= 2)) {
            c = s[*k - 1];
            if (bv[(unsigned char)c & 127] || (c == '\x00') || (c == ',')) {
              (*k)++;
            } else {
              exitg1 = true;
            }
          }
          if ((*k <= 2) && (s[*k - 1] == '*')) {
            (*k)++;
            b_readfloat(s1, idx, s, k, false, &isneg, b_finite, nfv, &a__3,
                        success);
          } else {
            s1[b_idx - 1] = '1';
            *idx = b_idx + 1;
          }
        } else {
          *success = false;
        }
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
    if (guard1) {
      b_readNonFinite(s, k, b_finite, nfv);
      if (*b_finite) {
        *success = b_copydigits(s1, idx, s, k, true);
        if (*success) {
          *success = b_copyexponent(s1, idx, s, k);
        }
      } else if ((b_idx >= 2) && (s1[b_idx - 2] == '-')) {
        *idx = b_idx - 1;
        s1[b_idx - 2] = ' ';
        *nfv = -*nfv;
      }
      exitg1 = false;
      while ((!exitg1) && (*k <= 2)) {
        if (bv[(unsigned char)s[*k - 1] & 127]) {
          (*k)++;
        } else {
          c = s[*k - 1];
          if ((c == '\x00') || (c == ',')) {
            (*k)++;
          } else {
            exitg1 = true;
          }
        }
      }
      if ((*k <= 2) && (s[*k - 1] == '*')) {
        (*k)++;
        while ((*k <= 2) && (bv[(unsigned char)s[*k - 1] & 127] ||
                             (s[*k - 1] == '\x00') || (s[*k - 1] == ','))) {
          (*k)++;
        }
      }
      if (*k <= 2) {
        c = s[*k - 1];
        if ((c == 'i') || (c == 'j')) {
          (*k)++;
          *isimag = true;
        }
      }
    }
    do {
      exitg3 = 0;
      if (*k <= 2) {
        c = s[*k - 1];
        if (bv[(unsigned char)c & 127] || (c == '\x00') || (c == ',')) {
          (*k)++;
        } else {
          exitg3 = 1;
        }
      } else {
        exitg3 = 1;
      }
    } while (exitg3 == 0);
  }
}

bool copydigits(char s1[3], int *idx, char s, int *k, bool allowpoint)
{
  bool exitg1;
  bool haspoint;
  bool success;
  success = (*k <= 1);
  haspoint = false;
  exitg1 = false;
  while ((!exitg1) && (success && (*k <= 1))) {
    if ((s >= '0') && (s <= '9')) {
      s1[*idx - 1] = s;
      (*idx)++;
      *k = 2;
    } else if (s == '.') {
      if (allowpoint && (!haspoint)) {
        success = true;
      } else {
        success = false;
      }
      if (success) {
        s1[*idx - 1] = '.';
        (*idx)++;
        haspoint = true;
      }
      *k = 2;
    } else if (s == ',') {
      *k = 2;
    } else {
      exitg1 = true;
    }
  }
  return success;
}

bool copyexponent(char s1[3], int *idx, char s, int *k)
{
  bool b_success;
  bool success;
  success = true;
  if ((*k <= 1) && ((s == 'E') || (s == 'e'))) {
    s1[*idx - 1] = 'e';
    (*idx)++;
    *k = 2;
    b_success = copydigits(s1, idx, s, k, false);
    if ((!b_success) || (*k <= 2)) {
      success = false;
    }
  }
  return success;
}

void readNonFinite(char s, int *k, bool *b_finite, double *fv)
{
  int ksaved;
  char c_idx_0;
  char c_idx_1;
  char c_idx_2;
  ksaved = *k;
  c_idx_0 = '\x00';
  while ((*k <= 1) && (s == ',')) {
    *k = 2;
  }
  if (*k <= 1) {
    c_idx_0 = s;
  }
  (*k)++;
  c_idx_1 = '\x00';
  while ((*k <= 1) && (s == ',')) {
    *k = 2;
  }
  if (*k <= 1) {
    c_idx_1 = s;
  }
  (*k)++;
  c_idx_2 = '\x00';
  while ((*k <= 1) && (s == ',')) {
    *k = 2;
  }
  if (*k <= 1) {
    c_idx_2 = s;
  }
  (*k)++;
  if (((c_idx_0 == 'I') || (c_idx_0 == 'i')) &&
      ((c_idx_1 == 'N') || (c_idx_1 == 'n')) &&
      ((c_idx_2 == 'F') || (c_idx_2 == 'f'))) {
    *b_finite = false;
    *fv = rtInf;
  } else if (((c_idx_0 == 'N') || (c_idx_0 == 'n')) &&
             ((c_idx_1 == 'A') || (c_idx_1 == 'a')) &&
             ((c_idx_2 == 'N') || (c_idx_2 == 'n'))) {
    *b_finite = false;
    *fv = rtNaN;
  } else {
    *b_finite = true;
    *fv = 0.0;
    *k = ksaved;
  }
}

void readfloat(char s1[3], int *idx, char s, int *k, bool allowimag,
               bool *isimag, bool *b_finite, double *nfv, bool *foundsign,
               bool *success)
{
  int b_idx;
  bool a__3;
  bool exitg1;
  bool isneg;
  *isimag = false;
  *b_finite = true;
  *nfv = 0.0;
  b_idx = *idx - 1;
  isneg = false;
  *foundsign = false;
  exitg1 = false;
  while ((!exitg1) && (*k <= 1)) {
    if (s == '-') {
      isneg = !isneg;
      *foundsign = true;
      *k = 2;
    } else if (s == ',') {
      *k = 2;
    } else if (s == '+') {
      *foundsign = true;
      *k = 2;
    } else if (!bv[(unsigned char)s & 127]) {
      exitg1 = true;
    } else {
      *k = 2;
    }
  }
  *success = (*k <= 1);
  if ((*success) && isneg) {
    if (s1[*idx - 2] == '-') {
      s1[*idx - 2] = ' ';
    } else {
      s1[*idx - 1] = '-';
      b_idx = *idx;
    }
  }
  *idx = b_idx + 1;
  if (*success) {
    isneg = false;
    if (*k <= 1) {
      isneg = ((s == 'j') || (s == 'i'));
    }
    if (isneg) {
      if (allowimag) {
        *isimag = true;
        (*k)++;
        while ((*k <= 1) &&
               (bv[(unsigned char)s & 127] || (s == '\x00') || (s == ','))) {
          *k = 2;
        }
        if ((*k <= 1) && (s == '*')) {
          *k = 2;
          readfloat(s1, idx, '*', k, false, &isneg, b_finite, nfv, &a__3,
                    success);
        } else {
          s1[b_idx] = '1';
          *idx = b_idx + 2;
        }
      } else {
        *success = false;
      }
    } else {
      readNonFinite(s, k, b_finite, nfv);
      if (*b_finite) {
        *success = copydigits(s1, idx, s, k, true);
        if (*success) {
          *success = copyexponent(s1, idx, s, k);
        }
      } else if (s1[b_idx - 1] == '-') {
        *idx = b_idx;
        s1[b_idx - 1] = ' ';
        *nfv = -*nfv;
      }
      while ((*k <= 1) &&
             (bv[(unsigned char)s & 127] || (s == '\x00') || (s == ','))) {
        *k = 2;
      }
      if ((*k <= 1) && (s == '*')) {
        *k = 2;
      }
      if ((*k <= 1) && ((s == 'i') || (s == 'j'))) {
        *k = 2;
        *isimag = true;
      }
    }
    while ((*k <= 1) &&
           (bv[(unsigned char)s & 127] || (s == '\x00') || (s == ','))) {
      *k = 2;
    }
  }
}

/* End of code generation (str2double1.c) */
