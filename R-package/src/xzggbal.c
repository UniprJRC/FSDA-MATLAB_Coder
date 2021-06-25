/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzggbal.c
 *
 * Code generation for function 'xzggbal'
 *
 */

/* Include files */
#include "xzggbal.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void xzggbal(emxArray_creal_T *A, int *ilo, int *ihi, emxArray_int32_T *rscale)
{
  double atmp_im;
  double atmp_re;
  int exitg1;
  int exitg2;
  int i;
  int ii;
  int j;
  int jj;
  int nzcount;
  bool exitg3;
  bool exitg4;
  bool found;
  ii = rscale->size[0];
  rscale->size[0] = A->size[0];
  emxEnsureCapacity_int32_T(rscale, ii);
  nzcount = A->size[0];
  for (ii = 0; ii < nzcount; ii++) {
    rscale->data[ii] = 1;
  }
  *ilo = 1;
  *ihi = A->size[0];
  if (A->size[0] <= 1) {
    *ihi = 1;
  } else {
    do {
      exitg2 = 0;
      i = 0;
      j = 0;
      found = false;
      ii = *ihi;
      exitg3 = false;
      while ((!exitg3) && (ii > 0)) {
        nzcount = 0;
        i = ii;
        j = *ihi;
        jj = 0;
        exitg4 = false;
        while ((!exitg4) && (jj <= *ihi - 1)) {
          if ((A->data[(ii + A->size[0] * jj) - 1].re != 0.0) ||
              (A->data[(ii + A->size[0] * jj) - 1].im != 0.0) ||
              (ii == jj + 1)) {
            if (nzcount == 0) {
              j = jj + 1;
              nzcount = 1;
              jj++;
            } else {
              nzcount = 2;
              exitg4 = true;
            }
          } else {
            jj++;
          }
        }
        if (nzcount < 2) {
          found = true;
          exitg3 = true;
        } else {
          ii--;
        }
      }
      if (!found) {
        exitg2 = 2;
      } else {
        nzcount = A->size[0];
        if (i != *ihi) {
          for (ii = 1; ii <= nzcount; ii++) {
            atmp_re = A->data[(i + A->size[0] * (ii - 1)) - 1].re;
            atmp_im = A->data[(i + A->size[0] * (ii - 1)) - 1].im;
            A->data[(i + A->size[0] * (ii - 1)) - 1] =
                A->data[(*ihi + A->size[0] * (ii - 1)) - 1];
            A->data[(*ihi + A->size[0] * (ii - 1)) - 1].re = atmp_re;
            A->data[(*ihi + A->size[0] * (ii - 1)) - 1].im = atmp_im;
          }
        }
        if (j != *ihi) {
          for (ii = 0; ii < *ihi; ii++) {
            atmp_re = A->data[ii + A->size[0] * (j - 1)].re;
            atmp_im = A->data[ii + A->size[0] * (j - 1)].im;
            A->data[ii + A->size[0] * (j - 1)] =
                A->data[ii + A->size[0] * (*ihi - 1)];
            A->data[ii + A->size[0] * (*ihi - 1)].re = atmp_re;
            A->data[ii + A->size[0] * (*ihi - 1)].im = atmp_im;
          }
        }
        rscale->data[*ihi - 1] = j;
        (*ihi)--;
        if (*ihi == 1) {
          rscale->data[0] = 1;
          exitg2 = 1;
        }
      }
    } while (exitg2 == 0);
    if (exitg2 != 1) {
      do {
        exitg1 = 0;
        i = 0;
        j = 0;
        found = false;
        jj = *ilo;
        exitg3 = false;
        while ((!exitg3) && (jj <= *ihi)) {
          nzcount = 0;
          i = *ihi;
          j = jj;
          ii = *ilo;
          exitg4 = false;
          while ((!exitg4) && (ii <= *ihi)) {
            if ((A->data[(ii + A->size[0] * (jj - 1)) - 1].re != 0.0) ||
                (A->data[(ii + A->size[0] * (jj - 1)) - 1].im != 0.0) ||
                (ii == jj)) {
              if (nzcount == 0) {
                i = ii;
                nzcount = 1;
                ii++;
              } else {
                nzcount = 2;
                exitg4 = true;
              }
            } else {
              ii++;
            }
          }
          if (nzcount < 2) {
            found = true;
            exitg3 = true;
          } else {
            jj++;
          }
        }
        if (!found) {
          exitg1 = 1;
        } else {
          nzcount = A->size[0];
          if (i != *ilo) {
            for (ii = *ilo; ii <= nzcount; ii++) {
              atmp_re = A->data[(i + A->size[0] * (ii - 1)) - 1].re;
              atmp_im = A->data[(i + A->size[0] * (ii - 1)) - 1].im;
              A->data[(i + A->size[0] * (ii - 1)) - 1] =
                  A->data[(*ilo + A->size[0] * (ii - 1)) - 1];
              A->data[(*ilo + A->size[0] * (ii - 1)) - 1].re = atmp_re;
              A->data[(*ilo + A->size[0] * (ii - 1)) - 1].im = atmp_im;
            }
          }
          if (j != *ilo) {
            for (ii = 0; ii < *ihi; ii++) {
              atmp_re = A->data[ii + A->size[0] * (j - 1)].re;
              atmp_im = A->data[ii + A->size[0] * (j - 1)].im;
              A->data[ii + A->size[0] * (j - 1)] =
                  A->data[ii + A->size[0] * (*ilo - 1)];
              A->data[ii + A->size[0] * (*ilo - 1)].re = atmp_re;
              A->data[ii + A->size[0] * (*ilo - 1)].im = atmp_im;
            }
          }
          rscale->data[*ilo - 1] = j;
          (*ilo)++;
          if (*ilo == *ihi) {
            rscale->data[*ilo - 1] = *ilo;
            exitg1 = 1;
          }
        }
      } while (exitg1 == 0);
    }
  }
}

/* End of code generation (xzggbal.c) */
