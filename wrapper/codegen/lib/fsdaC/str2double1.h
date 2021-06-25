/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: str2double1.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef STR2DOUBLE1_H
#define STR2DOUBLE1_H

/* Include Files */
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
bool b_copydigits(char s1[4], int *idx, const char s[2], int *k,
                  bool allowpoint);

bool b_copyexponent(char s1[4], int *idx, const char s[2], int *k);

void b_readNonFinite(const char s[2], int *k, bool *b_finite, double *fv);

void b_readfloat(char s1[4], int *idx, const char s[2], int *k, bool allowimag,
                 bool *isimag, bool *b_finite, double *nfv, bool *foundsign,
                 bool *success);

bool copydigits(char s1[3], int *idx, char s, int *k, bool allowpoint);

bool copyexponent(char s1[3], int *idx, char s, int *k);

void readNonFinite(char s, int *k, bool *b_finite, double *fv);

void readfloat(char s1[3], int *idx, char s, int *k, bool allowimag,
               bool *isimag, bool *b_finite, double *nfv, bool *foundsign,
               bool *success);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for str2double1.h
 *
 * [EOF]
 */
