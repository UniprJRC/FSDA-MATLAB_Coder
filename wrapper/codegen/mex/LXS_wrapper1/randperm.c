/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * randperm.c
 *
 * Code generation for function 'randperm'
 *
 */

/* Include files */
#include "randperm.h"
#include "LXS_wrapper1_data.h"
#include "LXS_wrapper1_emxutil.h"
#include "LXS_wrapper1_types.h"
#include "mod.h"
#include "rand.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo
    if_emlrtRSI =
        {
            24,         /* lineNo */
            "randperm", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\randfun\\randper"
            "m.m" /* pathName */
};

static emlrtRTEInfo
    w_emlrtRTEI =
        {
            10,         /* lineNo */
            15,         /* colNo */
            "randperm", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\randfun\\randper"
            "m.m" /* pName */
};

static emlrtRTEInfo
    y_emlrtRTEI =
        {
            20,         /* lineNo */
            19,         /* colNo */
            "randperm", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\randfun\\randper"
            "m.m" /* pName */
};

static emlrtRTEInfo
    ab_emlrtRTEI =
        {
            23,         /* lineNo */
            19,         /* colNo */
            "randperm", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\randfun\\randper"
            "m.m" /* pName */
};

static emlrtRTEInfo
    bb_emlrtRTEI =
        {
            39,          /* lineNo */
            13,          /* colNo */
            "randkperm", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\randfun\\randper"
            "m.m" /* pName */
};

static emlrtRTEInfo
    cb_emlrtRTEI =
        {
            46,          /* lineNo */
            13,          /* colNo */
            "randkperm", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\randfun\\randper"
            "m.m" /* pName */
};

static emlrtRTEInfo
    db_emlrtRTEI =
        {
            67,          /* lineNo */
            13,          /* colNo */
            "randkperm", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\randfun\\randper"
            "m.m" /* pName */
};

static emlrtRTEInfo
    rf_emlrtRTEI =
        {
            24,         /* lineNo */
            5,          /* colNo */
            "randperm", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\randfun\\randper"
            "m.m" /* pName */
};

static emlrtRTEInfo
    sf_emlrtRTEI =
        {
            62,         /* lineNo */
            5,          /* colNo */
            "randperm", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\randfun\\randper"
            "m.m" /* pName */
};

static emlrtRTEInfo
    tf_emlrtRTEI =
        {
            63,         /* lineNo */
            5,          /* colNo */
            "randperm", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\randfun\\randper"
            "m.m" /* pName */
};

static emlrtRTEInfo
    uf_emlrtRTEI =
        {
            64,         /* lineNo */
            5,          /* colNo */
            "randperm", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\randfun\\randper"
            "m.m" /* pName */
};

static emlrtRTEInfo
    vf_emlrtRTEI =
        {
            65,         /* lineNo */
            5,          /* colNo */
            "randperm", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\randfun\\randper"
            "m.m" /* pName */
};

/* Function Definitions */
void randperm(const emlrtStack *sp, real_T n, real_T k, emxArray_real_T *p)
{
  emlrtStack st;
  emxArray_real_T *hashTbl;
  emxArray_real_T *link;
  emxArray_real_T *loc;
  emxArray_real_T *val;
  real_T b_i;
  real_T j;
  real_T newEntry;
  real_T nleftm1;
  real_T selectedLoc;
  real_T t;
  int32_T i;
  int32_T loop_ub_tmp;
  int32_T m;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  if (!(n <= 9.007199254740991E+15)) {
    emlrtErrorWithMessageIdR2018a(sp, &w_emlrtRTEI,
                                  "MATLAB:randperm:inputNTooLarge",
                                  "MATLAB:randperm:inputNTooLarge", 0);
  }
  if ((!(n >= 0.0)) || (!(n == muDoubleScalarFloor(n)))) {
    emlrtErrorWithMessageIdR2018a(sp, &x_emlrtRTEI, "MATLAB:randperm:inputType",
                                  "MATLAB:randperm:inputType", 0);
  }
  if ((!(k >= 0.0)) || (!(k == muDoubleScalarFloor(k)))) {
    emlrtErrorWithMessageIdR2018a(sp, &y_emlrtRTEI, "MATLAB:randperm:inputType",
                                  "MATLAB:randperm:inputType", 0);
  }
  if (!(k <= n)) {
    emlrtErrorWithMessageIdR2018a(sp, &ab_emlrtRTEI,
                                  "MATLAB:randperm:inputKTooLarge",
                                  "MATLAB:randperm:inputKTooLarge", 0);
  }
  st.site = &if_emlrtRSI;
  i = p->size[0] * p->size[1];
  p->size[0] = 1;
  loop_ub_tmp = (int32_T)k;
  p->size[1] = (int32_T)k;
  emxEnsureCapacity_real_T(&st, p, i, &rf_emlrtRTEI);
  for (i = 0; i < loop_ub_tmp; i++) {
    p->data[i] = 0.0;
  }
  if (!(k == 0.0)) {
    if (k >= n) {
      p->data[0] = 1.0;
      i = (int32_T)(n - 1.0);
      emlrtForLoopVectorCheckR2021a(1.0, 1.0, n - 1.0, mxDOUBLE_CLASS,
                                    (int32_T)(n - 1.0), &bb_emlrtRTEI, &st);
      for (loop_ub_tmp = 0; loop_ub_tmp < i; loop_ub_tmp++) {
        j = b_rand() * (((real_T)loop_ub_tmp + 1.0) + 1.0);
        j = muDoubleScalarFloor(j);
        p->data[loop_ub_tmp + 1] = p->data[(int32_T)(j + 1.0) - 1];
        p->data[(int32_T)(j + 1.0) - 1] = ((real_T)loop_ub_tmp + 1.0) + 1.0;
      }
    } else if (k >= n / 4.0) {
      t = 0.0;
      i = (int32_T)((k - 1.0) + 1.0);
      emlrtForLoopVectorCheckR2021a(0.0, 1.0, k - 1.0, mxDOUBLE_CLASS,
                                    (int32_T)((k - 1.0) + 1.0), &cb_emlrtRTEI,
                                    &st);
      for (m = 0; m < i; m++) {
        selectedLoc = k - (real_T)m;
        b_i = n - t;
        newEntry = selectedLoc / b_i;
        nleftm1 = b_rand();
        while (nleftm1 > newEntry) {
          t++;
          b_i--;
          newEntry += (1.0 - newEntry) * (selectedLoc / b_i);
        }
        t++;
        j = b_rand() * ((real_T)m + 1.0);
        j = muDoubleScalarFloor(j);
        p->data[m] = p->data[(int32_T)(j + 1.0) - 1];
        p->data[(int32_T)(j + 1.0) - 1] = t;
      }
    } else {
      emxInit_real_T(&st, &hashTbl, 1, &sf_emlrtRTEI, true);
      i = hashTbl->size[0];
      hashTbl->size[0] = (int32_T)k;
      emxEnsureCapacity_real_T(&st, hashTbl, i, &sf_emlrtRTEI);
      for (i = 0; i < loop_ub_tmp; i++) {
        hashTbl->data[i] = 0.0;
      }
      emxInit_real_T(&st, &link, 1, &tf_emlrtRTEI, true);
      i = link->size[0];
      link->size[0] = (int32_T)k;
      emxEnsureCapacity_real_T(&st, link, i, &tf_emlrtRTEI);
      for (i = 0; i < loop_ub_tmp; i++) {
        link->data[i] = 0.0;
      }
      emxInit_real_T(&st, &val, 1, &uf_emlrtRTEI, true);
      i = val->size[0];
      val->size[0] = (int32_T)k;
      emxEnsureCapacity_real_T(&st, val, i, &uf_emlrtRTEI);
      for (i = 0; i < loop_ub_tmp; i++) {
        val->data[i] = 0.0;
      }
      emxInit_real_T(&st, &loc, 1, &vf_emlrtRTEI, true);
      i = loc->size[0];
      loc->size[0] = (int32_T)k;
      emxEnsureCapacity_real_T(&st, loc, i, &vf_emlrtRTEI);
      for (i = 0; i < loop_ub_tmp; i++) {
        loc->data[i] = 0.0;
      }
      newEntry = 1.0;
      emlrtForLoopVectorCheckR2021a(1.0, 1.0, k, mxDOUBLE_CLASS, (int32_T)k,
                                    &db_emlrtRTEI, &st);
      for (m = 0; m < loop_ub_tmp; m++) {
        nleftm1 = n - ((real_T)m + 1.0);
        selectedLoc = b_rand() * (nleftm1 + 1.0);
        selectedLoc = muDoubleScalarFloor(selectedLoc);
        b_i = b_mod(selectedLoc, k) + 1.0;
        j = hashTbl->data[(int32_T)b_i - 1];
        while ((j > 0.0) && (loc->data[(int32_T)j - 1] != selectedLoc)) {
          j = link->data[(int32_T)j - 1];
        }
        if (j > 0.0) {
          p->data[m] = val->data[(int32_T)j - 1] + 1.0;
        } else {
          p->data[m] = selectedLoc + 1.0;
          j = newEntry;
          newEntry++;
          loc->data[(int32_T)j - 1] = selectedLoc;
          link->data[(int32_T)j - 1] = hashTbl->data[(int32_T)b_i - 1];
          hashTbl->data[(int32_T)b_i - 1] = j;
        }
        if ((real_T)m + 1.0 < k) {
          selectedLoc = hashTbl->data[(int32_T)(b_mod(nleftm1, k) + 1.0) - 1];
          while ((selectedLoc > 0.0) &&
                 (loc->data[(int32_T)selectedLoc - 1] != nleftm1)) {
            selectedLoc = link->data[(int32_T)selectedLoc - 1];
          }
          if (selectedLoc > 0.0) {
            val->data[(int32_T)j - 1] = val->data[(int32_T)selectedLoc - 1];
          } else {
            val->data[(int32_T)j - 1] = nleftm1;
          }
        }
      }
      emxFree_real_T(&loc);
      emxFree_real_T(&val);
      emxFree_real_T(&link);
      emxFree_real_T(&hashTbl);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (randperm.c) */
