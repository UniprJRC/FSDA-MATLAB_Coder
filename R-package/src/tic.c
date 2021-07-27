/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tic.c
 *
 * Code generation for function 'tic'
 *
 */

/* Include files */
#include "tic.h"
#include "fsdaC_data.h"
#include "rt_nonfinite.h"
#include "timeKeeper.h"
#include "coder_posix_time.h"
#include <string.h>

/* Function Definitions */
void b_tic(void)
{
  coderTimespec b_timespec;
  if (!freq_not_empty) {
    freq_not_empty = true;
    coderInitTimeFunctions(&freq);
  }
  coderTimeClockGettimeMonotonic(&b_timespec, freq);
  timeKeeper(b_timespec.tv_sec, b_timespec.tv_nsec);
}

void tic(double *tstart_tv_sec, double *tstart_tv_nsec)
{
  coderTimespec b_timespec;
  if (!freq_not_empty) {
    freq_not_empty = true;
    coderInitTimeFunctions(&freq);
  }
  coderTimeClockGettimeMonotonic(&b_timespec, freq);
  *tstart_tv_sec = b_timespec.tv_sec;
  *tstart_tv_nsec = b_timespec.tv_nsec;
}

/* End of code generation (tic.c) */
