/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * infocheck.c
 *
 * Code generation for function 'infocheck'
 *
 */

/* Include files */
#include "infocheck.h"
#include "LTSts_wrapper_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
boolean_T infocheck(const emlrtStack *sp, int32_T info)
{
  static const char_T fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                   '_', 'd', 'o', 'r', 'm', 'q', 'r'};
  boolean_T b_p;
  boolean_T p;
  if (info != 0) {
    p = true;
    b_p = false;
    if (info == -7) {
      b_p = true;
    } else if (info == -9) {
      b_p = true;
    } else if (info == -10) {
      b_p = true;
    }
    if (!b_p) {
      if (info == -1010) {
        emlrtErrorWithMessageIdR2018a(sp, &qb_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(
            sp, &pb_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, &fname[0], 12, info);
      }
    }
  } else {
    p = false;
  }
  return p;
}

/* End of code generation (infocheck.c) */
