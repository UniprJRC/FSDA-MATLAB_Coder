/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * indexShapeCheck.c
 *
 * Code generation for function 'indexShapeCheck'
 *
 */

/* Include files */
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo pg_emlrtRSI = {
    43,                /* lineNo */
    "indexShapeCheck", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\indexShapeCheck.m" /* pathName */
};

static emlrtRSInfo fj_emlrtRSI = {
    38,                /* lineNo */
    "indexShapeCheck", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\indexShapeCheck.m" /* pathName */
};

static emlrtRSInfo an_emlrtRSI = {
    33,                /* lineNo */
    "indexShapeCheck", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\indexShapeCheck.m" /* pathName */
};

static emlrtRTEInfo o_emlrtRTEI = {
    121,           /* lineNo */
    5,             /* colNo */
    "errOrWarnIf", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\indexShapeCheck.m" /* pName */
};

/* Function Definitions */
void b_indexShapeCheck(const emlrtStack *sp, const int32_T matrixSize[2],
                       const int32_T indexSize[2])
{
  emlrtStack st;
  boolean_T nonSingletonDimFound;
  st.prev = sp;
  st.tls = sp->tls;
  nonSingletonDimFound = (matrixSize[0] != 1);
  if (matrixSize[1] != 1) {
    if (nonSingletonDimFound) {
      nonSingletonDimFound = false;
    } else {
      nonSingletonDimFound = true;
    }
  }
  if (nonSingletonDimFound) {
    nonSingletonDimFound = (indexSize[0] != 1);
    if (indexSize[1] != 1) {
      if (nonSingletonDimFound) {
        nonSingletonDimFound = false;
      } else {
        nonSingletonDimFound = true;
      }
    }
    if (nonSingletonDimFound) {
      if ((indexSize[0] != 1) ||
          ((matrixSize[1] == 1) != (indexSize[1] == 1))) {
        nonSingletonDimFound = true;
      } else {
        nonSingletonDimFound = false;
      }
      st.site = &fj_emlrtRSI;
      if (nonSingletonDimFound) {
        emlrtErrorWithMessageIdR2018a(&st, &o_emlrtRTEI,
                                      "Coder:FE:PotentialMatrixMatrix_VM",
                                      "Coder:FE:PotentialMatrixMatrix_VM", 0);
      }
    }
  }
}

void c_indexShapeCheck(const emlrtStack *sp, const int32_T matrixSize[2],
                       int32_T indexSize)
{
  emlrtStack st;
  boolean_T nonSingletonDimFound;
  st.prev = sp;
  st.tls = sp->tls;
  nonSingletonDimFound = (matrixSize[0] != 1);
  if (matrixSize[1] != 1) {
    if (nonSingletonDimFound) {
      nonSingletonDimFound = false;
    } else {
      nonSingletonDimFound = true;
    }
  }
  if (nonSingletonDimFound && (indexSize != 1)) {
    if (((matrixSize[0] == 1) != (indexSize == 1)) || (matrixSize[1] != 1)) {
      nonSingletonDimFound = true;
    } else {
      nonSingletonDimFound = false;
    }
    st.site = &an_emlrtRSI;
    if (nonSingletonDimFound) {
      emlrtErrorWithMessageIdR2018a(&st, &o_emlrtRTEI,
                                    "Coder:FE:PotentialMatrixMatrix_MV",
                                    "Coder:FE:PotentialMatrixMatrix_MV", 0);
    }
  }
}

void indexShapeCheck(const emlrtStack *sp, int32_T matrixSize,
                     const int32_T indexSize[2])
{
  emlrtStack st;
  boolean_T nonSingletonDimFound;
  st.prev = sp;
  st.tls = sp->tls;
  if (matrixSize == 1) {
    nonSingletonDimFound = (indexSize[0] != 1);
    if (indexSize[1] != 1) {
      if (nonSingletonDimFound) {
        nonSingletonDimFound = false;
      } else {
        nonSingletonDimFound = true;
      }
    }
    if (nonSingletonDimFound) {
      nonSingletonDimFound = true;
    } else {
      nonSingletonDimFound = false;
    }
  } else {
    nonSingletonDimFound = false;
  }
  st.site = &pg_emlrtRSI;
  if (nonSingletonDimFound) {
    emlrtErrorWithMessageIdR2018a(&st, &o_emlrtRTEI,
                                  "Coder:FE:PotentialVectorVector",
                                  "Coder:FE:PotentialVectorVector", 0);
  }
}

/* End of code generation (indexShapeCheck.c) */
