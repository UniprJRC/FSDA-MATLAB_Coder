/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: toc.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "toc.h"
#include "fsdaC_data.h"
#include "rt_nonfinite.h"
#include "coder_posix_time.h"
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : double tstart_tv_sec
 *                double tstart_tv_nsec
 * Return Type  : double
 */
double toc(double tstart_tv_sec, double tstart_tv_nsec)
{
  coderTimespec b_timespec;
  if (!freq_not_empty) {
    freq_not_empty = true;
    coderInitTimeFunctions(&freq);
  }
  coderTimeClockGettimeMonotonic(&b_timespec, freq);
  return (b_timespec.tv_sec - tstart_tv_sec) +
         (b_timespec.tv_nsec - tstart_tv_nsec) / 1.0E+9;
}

/*
 * File trailer for toc.c
 *
 * [EOF]
 */
