/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * str2double.c
 *
 * Code generation for function 'str2double'
 *
 */

/* Include files */
#include "str2double.h"
#include "FSM_wrapper_data.h"
#include "rt_nonfinite.h"
#include "str2double1.h"
#include <stdio.h>

/* Function Definitions */
creal_T b_str2double(const char s[2])
{
  creal_T x;
  double b_scanned1;
  double scanned1;
  double scanned2;
  int b_k;
  int idx;
  int k;
  int ntoread;
  char s1[4];
  char c;
  bool a__3;
  bool b_finite;
  bool exitg1;
  bool foundsign;
  bool isimag1;
  bool isneg;
  bool success;
  x.re = rtNaN;
  x.im = 0.0;
  ntoread = 0;
  k = 0;
  while ((k + 1 <= 2) && (bv[(unsigned char)s[k] & 127] || (s[k] == '\x00'))) {
    k++;
  }
  isimag1 = false;
  b_finite = true;
  scanned1 = 0.0;
  idx = 1;
  s1[0] = '\x00';
  s1[1] = '\x00';
  s1[2] = '\x00';
  s1[3] = '\x00';
  isneg = false;
  exitg1 = false;
  while ((!exitg1) && (k + 1 <= 2)) {
    if (s[k] == '-') {
      isneg = !isneg;
      k++;
    } else if ((s[k] == ',') || (s[k] == '+') ||
               bv[(unsigned char)s[k] & 127]) {
      k++;
    } else {
      exitg1 = true;
    }
  }
  success = (k + 1 <= 2);
  if (success && isneg) {
    s1[0] = '-';
    idx = 2;
  }
  b_k = k + 1;
  if (success) {
    if ((k + 1 <= 2) && ((s[k] == 'j') || (s[k] == 'i'))) {
      isimag1 = true;
      b_k = k + 2;
      while ((b_k <= 2) && (bv[(unsigned char)s[1] & 127] || (s[1] == '\x00') ||
                            (s[1] == ','))) {
        b_k = 3;
      }
      if ((b_k <= 2) && (s[1] == '*')) {
        b_k = 3;
        b_readfloat(s1, &idx, s, &b_k, false, &isneg, &b_finite, &scanned1,
                    &a__3, &success);
      } else {
        s1[idx - 1] = '1';
        idx++;
      }
    } else {
      b_k = k + 1;
      b_readNonFinite(s, &b_k, &b_finite, &scanned1);
      if (b_finite) {
        success = b_copydigits(s1, &idx, s, &b_k, true);
        if (success) {
          success = b_copyexponent(s1, &idx, s, &b_k);
        }
      } else if ((idx >= 2) && (s1[0] == '-')) {
        idx = 1;
        s1[0] = ' ';
        scanned1 = -scanned1;
      }
      exitg1 = false;
      while ((!exitg1) && (b_k <= 2)) {
        c = s[b_k - 1];
        if (bv[(unsigned char)c & 127] || (c == '\x00') || (c == ',')) {
          b_k++;
        } else {
          exitg1 = true;
        }
      }
      if ((b_k <= 2) && (s[b_k - 1] == '*')) {
        b_k++;
        exitg1 = false;
        while ((!exitg1) && (b_k <= 2)) {
          c = s[b_k - 1];
          if (bv[(unsigned char)c & 127] || (c == '\x00') || (c == ',')) {
            b_k++;
          } else {
            exitg1 = true;
          }
        }
      }
      if (b_k <= 2) {
        c = s[b_k - 1];
        if ((c == 'i') || (c == 'j')) {
          b_k++;
          isimag1 = true;
        }
      }
    }
    exitg1 = false;
    while ((!exitg1) && (b_k <= 2)) {
      c = s[b_k - 1];
      if (bv[(unsigned char)c & 127] || (c == '\x00') || (c == ',')) {
        b_k++;
      } else {
        exitg1 = true;
      }
    }
  }
  if (b_finite) {
    ntoread = 1;
  }
  if (success && (b_k <= 2)) {
    s1[idx - 1] = ' ';
    idx++;
    b_readfloat(s1, &idx, s, &b_k, true, &isneg, &a__3, &scanned2, &foundsign,
                &success);
    if (a__3) {
      ntoread++;
    }
    if (success && (b_k > 2) && (isimag1 != isneg) && foundsign) {
      success = true;
    } else {
      success = false;
    }
  } else {
    scanned2 = 0.0;
  }
  if (success) {
    s1[idx - 1] = '\x00';
    if (ntoread == 2) {
      ntoread = sscanf(&s1[0], "%lf %lf", &scanned1, &scanned2);
      if (ntoread != 2) {
        scanned1 = rtNaN;
        scanned2 = rtNaN;
      }
    } else if (ntoread == 1) {
      ntoread = sscanf(&s1[0], "%lf", &b_scanned1);
      if (ntoread != 1) {
        b_scanned1 = rtNaN;
      }
      if (b_finite) {
        scanned1 = b_scanned1;
      } else {
        scanned2 = b_scanned1;
      }
    }
    if (isimag1) {
      x.re = scanned2;
      x.im = scanned1;
    } else {
      x.re = scanned1;
      x.im = scanned2;
    }
  }
  return x;
}

creal_T str2double(char s)
{
  creal_T x;
  double b_scanned1;
  double scanned1;
  double scanned2;
  int i;
  int idx;
  int k;
  int ntoread;
  char s1[3];
  bool b_finite;
  bool exitg1;
  bool foundsign;
  bool isfinite2;
  bool isimag1;
  bool isneg;
  bool success;
  x.re = rtNaN;
  x.im = 0.0;
  ntoread = 0;
  k = 1;
  i = (unsigned char)s & 127;
  if (bv[i] || (s == '\x00')) {
    k = 2;
  }
  isimag1 = false;
  b_finite = true;
  scanned1 = 0.0;
  idx = 1;
  s1[0] = '\x00';
  s1[1] = '\x00';
  s1[2] = '\x00';
  isneg = false;
  exitg1 = false;
  while ((!exitg1) && (k <= 1)) {
    if (s == '-') {
      isneg = !isneg;
      k = 2;
    } else if ((s == ',') || (s == '+') || bv[i]) {
      k = 2;
    } else {
      exitg1 = true;
    }
  }
  success = (k <= 1);
  if (success && isneg) {
    s1[0] = '-';
    idx = 2;
  }
  if (success) {
    isneg = false;
    if (k <= 1) {
      isneg = ((s == 'j') || (s == 'i'));
    }
    if (isneg) {
      isimag1 = true;
      k++;
      s1[idx - 1] = '1';
      idx++;
    } else {
      readNonFinite(s, &k, &b_finite, &scanned1);
      if (b_finite) {
        success = copydigits(s1, &idx, s, &k, true);
        if (success) {
          success = copyexponent(s1, &idx, s, &k);
        }
      } else if ((idx >= 2) && (s1[0] == '-')) {
        idx = 1;
        s1[0] = ' ';
        scanned1 = -scanned1;
      }
      while ((k <= 1) && (bv[i] || (s == '\x00') || (s == ','))) {
        k = 2;
      }
      if ((k <= 1) && (s == '*')) {
        k = 2;
      }
      if ((k <= 1) && ((s == 'i') || (s == 'j'))) {
        k = 2;
        isimag1 = true;
      }
    }
    while ((k <= 1) && (bv[i] || (s == '\x00') || (s == ','))) {
      k = 2;
    }
  }
  if (b_finite) {
    ntoread = 1;
  }
  if (success && (k <= 1)) {
    s1[idx - 1] = ' ';
    idx++;
    k = 1;
    readfloat(s1, &idx, s, &k, true, &isneg, &isfinite2, &scanned2, &foundsign,
              &success);
    if (isfinite2) {
      ntoread++;
    }
    if (success && (k > 1) && (isimag1 != isneg) && foundsign) {
      success = true;
    } else {
      success = false;
    }
  } else {
    scanned2 = 0.0;
  }
  if (success) {
    s1[idx - 1] = '\x00';
    if (ntoread == 2) {
      ntoread = sscanf(&s1[0], "%lf %lf", &scanned1, &scanned2);
      if (ntoread != 2) {
        scanned1 = rtNaN;
        scanned2 = rtNaN;
      }
    } else if (ntoread == 1) {
      ntoread = sscanf(&s1[0], "%lf", &b_scanned1);
      if (ntoread != 1) {
        b_scanned1 = rtNaN;
      }
      if (b_finite) {
        scanned1 = b_scanned1;
      } else {
        scanned2 = b_scanned1;
      }
    }
    if (isimag1) {
      x.re = scanned2;
      x.im = scanned1;
    } else {
      x.re = scanned1;
      x.im = scanned2;
    }
  }
  return x;
}

/* End of code generation (str2double.c) */
