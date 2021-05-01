/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * combsFS.c
 *
 * Code generation for function 'combsFS'
 *
 */

/* Include files */
#include "combsFS.h"
#include "FSRfan_wrapper_data.h"
#include "FSRfan_wrapper_emxutil.h"
#include "FSRfan_wrapper_mexutil.h"
#include "FSRfan_wrapper_types.h"
#include "bc.h"
#include "colon.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo te_emlrtRSI = {
    92,                                                   /* lineNo */
    "combsFS",                                            /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m" /* pathName */
};

static emlrtRSInfo ue_emlrtRSI = {
    103,                                                  /* lineNo */
    "combsFS",                                            /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m" /* pathName */
};

static emlrtRSInfo ve_emlrtRSI = {
    109,                                                  /* lineNo */
    "combsFS",                                            /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m" /* pathName */
};

static emlrtRSInfo we_emlrtRSI = {
    123,                                                  /* lineNo */
    "combsFS",                                            /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m" /* pathName */
};

static emlrtBCInfo mb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    119,                                                   /* lineNo */
    31,                                                    /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    119,                                                   /* lineNo */
    23,                                                    /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = {
    119,                                                   /* lineNo */
    23,                                                    /* colNo */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    119,                                                   /* lineNo */
    15,                                                    /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = {
    119,                                                   /* lineNo */
    15,                                                    /* colNo */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtECInfo h_emlrtECI = {
    -1,                                                   /* nDims */
    118,                                                  /* lineNo */
    13,                                                   /* colNo */
    "combsFS",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m" /* pName */
};

static emlrtBCInfo pb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    118,                                                   /* lineNo */
    35,                                                    /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    118,                                                   /* lineNo */
    31,                                                    /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    118,                                                   /* lineNo */
    23,                                                    /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = {
    118,                                                   /* lineNo */
    23,                                                    /* colNo */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    118,                                                   /* lineNo */
    15,                                                    /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = {
    118,                                                   /* lineNo */
    15,                                                    /* colNo */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    118,                                                   /* lineNo */
    59,                                                    /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    118,                                                   /* lineNo */
    55,                                                    /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    118,                                                   /* lineNo */
    50,                                                    /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = {
    118,                                                   /* lineNo */
    50,                                                    /* colNo */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    118,                                                   /* lineNo */
    42,                                                    /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = {
    118,                                                   /* lineNo */
    42,                                                    /* colNo */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    113,                                                   /* lineNo */
    21,                                                    /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    113,                                                   /* lineNo */
    13,                                                    /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = {
    113,                                                   /* lineNo */
    13,                                                    /* colNo */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    113,                                                   /* lineNo */
    11,                                                    /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtECInfo i_emlrtECI = {
    -1,                                                   /* nDims */
    109,                                                  /* lineNo */
    5,                                                    /* colNo */
    "combsFS",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m" /* pName */
};

static emlrtBCInfo bc_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    109,                                                   /* lineNo */
    17,                                                    /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    109,                                                   /* lineNo */
    9,                                                     /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    109,                                                   /* lineNo */
    7,                                                     /* colNo */
    "P",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtRTEInfo p_emlrtRTEI = {
    114,                                                  /* lineNo */
    17,                                                   /* colNo */
    "combsFS",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m" /* pName */
};

static emlrtRTEInfo q_emlrtRTEI = {
    110,                                                  /* lineNo */
    13,                                                   /* colNo */
    "combsFS",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m" /* pName */
};

static emlrtDCInfo x_emlrtDCI = {
    105,                                                   /* lineNo */
    15,                                                    /* colNo */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = {
    105,                                                   /* lineNo */
    15,                                                    /* colNo */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    4                                                      /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = {
    105,                                                   /* lineNo */
    5,                                                     /* colNo */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    123,                                                   /* lineNo */
    32,                                                    /* colNo */
    "v",                                                   /* aName */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = {
    123,                                                   /* lineNo */
    32,                                                    /* colNo */
    "combsFS",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m", /* pName */
    1                                                      /* checkKind */
};

static emlrtRTEInfo we_emlrtRTEI = {
    69,                                                   /* lineNo */
    5,                                                    /* colNo */
    "combsFS",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m" /* pName */
};

static emlrtRTEInfo xe_emlrtRTEI = {
    69,                                                   /* lineNo */
    1,                                                    /* colNo */
    "combsFS",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m" /* pName */
};

static emlrtRTEInfo ye_emlrtRTEI = {
    96,                                                   /* lineNo */
    9,                                                    /* colNo */
    "combsFS",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m" /* pName */
};

static emlrtRTEInfo af_emlrtRTEI = {
    94,                                                   /* lineNo */
    5,                                                    /* colNo */
    "combsFS",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m" /* pName */
};

static emlrtRTEInfo bf_emlrtRTEI = {
    96,                                                   /* lineNo */
    5,                                                    /* colNo */
    "combsFS",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m" /* pName */
};

static emlrtRTEInfo cf_emlrtRTEI = {
    105,                                                  /* lineNo */
    5,                                                    /* colNo */
    "combsFS",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m" /* pName */
};

static emlrtRTEInfo df_emlrtRTEI = {
    109,                                                  /* lineNo */
    22,                                                   /* colNo */
    "combsFS",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m" /* pName */
};

static emlrtRTEInfo ef_emlrtRTEI = {
    118,                                                  /* lineNo */
    40,                                                   /* colNo */
    "combsFS",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\combsFS.m" /* pName */
};

/* Function Definitions */
void combsFS(const emlrtStack *sp, emxArray_real_T *v, real_T m,
             emxArray_real_T *P)
{
  static const int32_T iv[2] = {1, 26};
  static const int32_T iv1[2] = {1, 8};
  static const char_T varargin_1[26] = {
      'F', 'S', 'D', 'A', ':', 'c', 'o', 'm', 'b', 's', 'F', 'S', ':',
      'W', 'r', 'o', 'n', 'g', 'I', 'n', 'p', 'u', 't', 'N', 'u', 'm'};
  static const char_T varargin_2[8] = {'m', ' ', '>', ' ', 'n', ' ', '!', '!'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *b_P;
  emxArray_real_T *b_v;
  emxArray_real_T *c_v;
  const mxArray *b_m;
  const mxArray *b_y;
  const mxArray *y;
  real_T b_j;
  real_T bcn;
  real_T d;
  real_T fromRow;
  real_T s1;
  real_T s2;
  real_T toRow;
  int32_T d_v[2];
  int32_T iv2[2];
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T i6;
  int32_T i7;
  int32_T j;
  int32_T loop_ub;
  int32_T n;
  boolean_T b_p;
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_v, 2, &we_emlrtRTEI, true);
  /* combsFS is an iterative algorithm equivalent to the MATLAB combs.m */
  /*  */
  /*  It generates m-combinations without repetition taken in lexicographic */
  /*  order from the vector v. */
  /*  */
  /*  REMARK: the MATLAB function combs.m uses recursive calls and it is */
  /*  therefore very inefficient. Our iterative counterpart also makes better */
  /*  use of memory, first because it works iteratively, and then because we */
  /*  force computations in the lowest possible precision. This is not a */
  /*  limitation, because the algotithm first builds the matrix P of all */
  /*  m-combinations starting from the first n natural numbers, for which */
  /*  double precision is not at all needed. Then, if the input vector b is */
  /*  different from vector 1:v, then the desired P is simply obtained as P = */
  /*  v(P). Note also that we build the matrix P by going over colums rather */
  /*  than over lines. This is faster, as MATLAB indexes the elements of a */
  /*  matrix by column first. */
  /*  */
  /* <a href="matlab: docsearchFS('combsFS')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     v:         A vector with n elements. It contains the response variable.
   */
  /*                It can be either a row or a column vector. */
  /*                Data Types - single|double */
  /*  */
  /*     m:         Scalar. It specifies the size of the combinations. */
  /*                Data Types - single|double */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*  Output: */
  /*  */
  /*      P:        m-combinations without repetition taken in lexicographic */
  /*                order from the vector v. Matrix containing the */
  /*                m-combinations in the rows. */
  /*                Data Types - single|double */
  /*  */
  /*  See also: nchoosek */
  /*  */
  /*  References: */
  /*  */
  /*     Knuth, D. E. (1997). "The Art of Computer Programming", Volume 1: */
  /*     Fundamental Algorithms, Third ed. Addison-Wesley. [pp. 52--74]. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* <a href="matlab: docsearchFS('combsFS')">Link to the help function</a> */
  /*  */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  */
  /*  Examples: */
  /* { */
  /*     %% combsFS used to generate all possible combinations of size 3 of
   * elements 5, 8, 9, 10, 11. */
  /*     combsFS([5 8:11],3) */
  /* } */
  /*  Beginning of code */
  i = b_v->size[0] * b_v->size[1];
  b_v->size[0] = 1;
  b_v->size[1] = v->size[1];
  emxEnsureCapacity_real_T(sp, b_v, i, &we_emlrtRTEI);
  loop_ub = v->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_v->data[i] = v->data[i];
  }
  i = v->size[0] * v->size[1];
  v->size[0] = 1;
  v->size[1] = b_v->size[1];
  emxEnsureCapacity_real_T(sp, v, i, &xe_emlrtRTEI);
  loop_ub = b_v->size[1];
  for (i = 0; i < loop_ub; i++) {
    v->data[i] = b_v->data[i];
  }
  /*  Make sure v is a row vector. */
  n = v->size[1];
  /*  Elements of v. */
  if (m > v->size[1]) {
    st.site = &te_emlrtRSI;
    y = NULL;
    b_m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 26, b_m, &varargin_1[0]);
    emlrtAssign(&y, b_m);
    b_y = NULL;
    b_m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 8, b_m, &varargin_2[0]);
    emlrtAssign(&b_y, b_m);
    b_st.site = &ku_emlrtRSI;
    h_error(&b_st, y, b_y, &e_emlrtMCI);
  } else if (v->size[1] == m) {
    i = P->size[0] * P->size[1];
    P->size[0] = 1;
    P->size[1] = v->size[1];
    emxEnsureCapacity_real_T(sp, P, i, &af_emlrtRTEI);
    loop_ub = v->size[1];
    for (i = 0; i < loop_ub; i++) {
      P->data[i] = v->data[i];
    }
  } else {
    emxInit_real_T(sp, &c_v, 1, &ye_emlrtRTEI, true);
    if (m == 1.0) {
      i = c_v->size[0];
      c_v->size[0] = v->size[1];
      emxEnsureCapacity_real_T(sp, c_v, i, &ye_emlrtRTEI);
      loop_ub = v->size[1];
      for (i = 0; i < loop_ub; i++) {
        c_v->data[i] = v->data[i];
      }
      i = P->size[0] * P->size[1];
      P->size[0] = v->size[1];
      P->size[1] = 1;
      emxEnsureCapacity_real_T(sp, P, i, &bf_emlrtRTEI);
      loop_ub = v->size[1];
      for (i = 0; i < loop_ub; i++) {
        P->data[i] = c_v->data[i];
      }
    } else if (m == 0.0) {
      P->size[0] = 0;
      P->size[1] = 0;
    } else {
      /* The binomial coefficient (n choose m) can be computed using */
      /* prod(np1-m:n)/prod(1:m). For large number of combinations */
      /* our function 'bc' is better. */
      st.site = &ue_emlrtRSI;
      bcn = bc(&st, v->size[1], m);
      /*  initialise the matrix of all m-combinations */
      if (!(bcn >= 0.0)) {
        emlrtNonNegativeCheckR2012b(bcn, &y_emlrtDCI, (emlrtCTX)sp);
      }
      d = (int32_T)muDoubleScalarFloor(bcn);
      if (bcn != d) {
        emlrtIntegerCheckR2012b(bcn, &x_emlrtDCI, (emlrtCTX)sp);
      }
      i = P->size[0] * P->size[1];
      P->size[0] = (int32_T)bcn;
      P->size[1] = (int32_T)m;
      emxEnsureCapacity_real_T(sp, P, i, &cf_emlrtRTEI);
      if (bcn != d) {
        emlrtIntegerCheckR2012b(bcn, &ab_emlrtDCI, (emlrtCTX)sp);
      }
      loop_ub = (int32_T)bcn * (int32_T)m;
      for (i = 0; i < loop_ub; i++) {
        P->data[i] = 0.0;
      }
      /*  do once here n+1 (needed in the internal loop) */
      toRow = ((real_T)v->size[1] + 1.0) - m;
      /*  set the first n+1-m rows of the last column */
      if (1.0 > toRow) {
        i = 0;
      } else {
        if (1 > (int32_T)bcn) {
          emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)bcn, &dc_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        if (((int32_T)toRow < 1) || ((int32_T)toRow > (int32_T)bcn)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)toRow, 1, (int32_T)bcn,
                                        &cc_emlrtBCI, (emlrtCTX)sp);
        }
        i = (int32_T)toRow;
      }
      if ((int32_T)m < 1) {
        emlrtDynamicBoundsCheckR2012b((int32_T)m, 1, (int32_T)m, &bc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      st.site = &ve_emlrtRSI;
      b_st.site = &md_emlrtRSI;
      if (muDoubleScalarIsNaN(m)) {
        i1 = b_v->size[0] * b_v->size[1];
        b_v->size[0] = 1;
        b_v->size[1] = 1;
        emxEnsureCapacity_real_T(&b_st, b_v, i1, &yb_emlrtRTEI);
        b_v->data[0] = rtNaN;
      } else if (v->size[1] < m) {
        b_v->size[0] = 1;
        b_v->size[1] = 0;
      } else if (muDoubleScalarFloor(m) == m) {
        i1 = b_v->size[0] * b_v->size[1];
        b_v->size[0] = 1;
        b_v->size[1] = (int32_T)((real_T)v->size[1] - m) + 1;
        emxEnsureCapacity_real_T(&b_st, b_v, i1, &yb_emlrtRTEI);
        loop_ub = (int32_T)((real_T)v->size[1] - m);
        for (i1 = 0; i1 <= loop_ub; i1++) {
          b_v->data[i1] = m + (real_T)i1;
        }
      } else {
        c_st.site = &nd_emlrtRSI;
        eml_float_colon(&c_st, m, v->size[1], b_v);
      }
      i1 = c_v->size[0];
      c_v->size[0] = b_v->size[1];
      emxEnsureCapacity_real_T(sp, c_v, i1, &df_emlrtRTEI);
      loop_ub = b_v->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        c_v->data[i1] = b_v->data[i1];
      }
      emlrtSubAssignSizeCheckR2012b(&i, 1, &c_v->size[0], 1, &i_emlrtECI,
                                    (emlrtCTX)sp);
      loop_ub = c_v->size[0];
      for (i = 0; i < loop_ub; i++) {
        P->data[i + P->size[0] * ((int32_T)m - 1)] = c_v->data[i];
      }
      i = (int32_T)(((-1.0 - (m - 1.0)) + 1.0) / -1.0);
      emlrtForLoopVectorCheckR2021a(m - 1.0, -1.0, 1.0, mxDOUBLE_CLASS, i,
                                    &q_emlrtRTEI, (emlrtCTX)sp);
      emxInit_real_T(sp, &b_P, 2, &ef_emlrtRTEI, true);
      for (b_i = 0; b_i < i; b_i++) {
        bcn = (m - 1.0) + -(real_T)b_i;
        /*  external loop over colums */
        s1 = toRow;
        s2 = toRow;
        /*  set the first n+1-m rows block of rows of colum i */
        if (1.0 > toRow) {
          loop_ub = 0;
        } else {
          if (1 > P->size[0]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, P->size[0], &ac_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          if (toRow != (int32_T)muDoubleScalarFloor(toRow)) {
            emlrtIntegerCheckR2012b(toRow, &w_emlrtDCI, (emlrtCTX)sp);
          }
          if (((int32_T)toRow < 1) || ((int32_T)toRow > P->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)toRow, 1, P->size[0],
                                          &yb_emlrtBCI, (emlrtCTX)sp);
          }
          loop_ub = (int32_T)toRow;
        }
        if (((int32_T)bcn < 1) || ((int32_T)bcn > P->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)bcn, 1, P->size[1],
                                        &xb_emlrtBCI, (emlrtCTX)sp);
        }
        for (i1 = 0; i1 < loop_ub; i1++) {
          P->data[i1 + P->size[0] * ((int32_T)bcn - 1)] = bcn;
        }
        d = (bcn + (real_T)n) - m;
        i1 = (int32_T)(d + (1.0 - (bcn + 1.0)));
        emlrtForLoopVectorCheckR2021a(bcn + 1.0, 1.0, d, mxDOUBLE_CLASS, i1,
                                      &p_emlrtRTEI, (emlrtCTX)sp);
        for (j = 0; j < i1; j++) {
          b_j = (bcn + 1.0) + (real_T)j;
          /*  internal loop */
          s1 = s1 * (((((real_T)n + 1.0) + bcn) - b_j) - m) /
               (((real_T)n + 1.0) - b_j);
          fromRow = toRow + 1.0;
          toRow = ((toRow + 1.0) + s1) - 1.0;
          d = (s2 - s1) + 1.0;
          if (d > s2) {
            i2 = -1;
            i3 = -1;
          } else {
            if (d != (int32_T)muDoubleScalarFloor(d)) {
              emlrtIntegerCheckR2012b(d, &v_emlrtDCI, (emlrtCTX)sp);
            }
            if (((int32_T)d < 1) || ((int32_T)d > P->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, P->size[0],
                                            &wb_emlrtBCI, (emlrtCTX)sp);
            }
            i2 = (int32_T)d - 2;
            if (s2 != (int32_T)muDoubleScalarFloor(s2)) {
              emlrtIntegerCheckR2012b(s2, &u_emlrtDCI, (emlrtCTX)sp);
            }
            if (((int32_T)s2 < 1) || ((int32_T)s2 > P->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)s2, 1, P->size[0],
                                            &vb_emlrtBCI, (emlrtCTX)sp);
            }
            i3 = (int32_T)s2 - 1;
          }
          if (bcn + 1.0 > m) {
            i4 = -1;
            i5 = -1;
          } else {
            if (((int32_T)(bcn + 1.0) < 1) ||
                ((int32_T)(bcn + 1.0) > P->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(bcn + 1.0), 1, P->size[1],
                                            &ub_emlrtBCI, (emlrtCTX)sp);
            }
            i4 = (int32_T)(bcn + 1.0) - 2;
            if (((int32_T)m < 1) || ((int32_T)m > P->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)m, 1, P->size[1],
                                            &tb_emlrtBCI, (emlrtCTX)sp);
            }
            i5 = (int32_T)m - 1;
          }
          if (fromRow > toRow) {
            i6 = 0;
            loop_ub = 0;
          } else {
            if (fromRow != (int32_T)muDoubleScalarFloor(fromRow)) {
              emlrtIntegerCheckR2012b(fromRow, &t_emlrtDCI, (emlrtCTX)sp);
            }
            if (((int32_T)fromRow < 1) || ((int32_T)fromRow > P->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)fromRow, 1, P->size[0],
                                            &sb_emlrtBCI, (emlrtCTX)sp);
            }
            i6 = (int32_T)fromRow - 1;
            if (toRow != (int32_T)muDoubleScalarFloor(toRow)) {
              emlrtIntegerCheckR2012b(toRow, &s_emlrtDCI, (emlrtCTX)sp);
            }
            if (((int32_T)toRow < 1) || ((int32_T)toRow > P->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)toRow, 1, P->size[0],
                                            &rb_emlrtBCI, (emlrtCTX)sp);
            }
            loop_ub = (int32_T)toRow;
          }
          if (bcn + 1.0 > m) {
            i7 = 0;
            b_loop_ub = 0;
          } else {
            if (((int32_T)(bcn + 1.0) < 1) ||
                ((int32_T)(bcn + 1.0) > P->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(bcn + 1.0), 1, P->size[1],
                                            &qb_emlrtBCI, (emlrtCTX)sp);
            }
            i7 = (int32_T)(bcn + 1.0) - 1;
            if (((int32_T)m < 1) || ((int32_T)m > P->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)m, 1, P->size[1],
                                            &pb_emlrtBCI, (emlrtCTX)sp);
            }
            b_loop_ub = (int32_T)m;
          }
          d_v[0] = loop_ub - i6;
          d_v[1] = b_loop_ub - i7;
          loop_ub = i3 - i2;
          iv2[0] = loop_ub;
          b_loop_ub = i5 - i4;
          iv2[1] = b_loop_ub;
          emlrtSubAssignSizeCheckR2012b(&d_v[0], 2, &iv2[0], 2, &h_emlrtECI,
                                        (emlrtCTX)sp);
          i3 = b_P->size[0] * b_P->size[1];
          b_P->size[0] = loop_ub;
          b_P->size[1] = b_loop_ub;
          emxEnsureCapacity_real_T(sp, b_P, i3, &ef_emlrtRTEI);
          for (i3 = 0; i3 < b_loop_ub; i3++) {
            for (i5 = 0; i5 < loop_ub; i5++) {
              b_P->data[i5 + b_P->size[0] * i3] =
                  P->data[((i2 + i5) + P->size[0] * ((i4 + i3) + 1)) + 1];
            }
          }
          loop_ub = b_P->size[1];
          for (i2 = 0; i2 < loop_ub; i2++) {
            b_loop_ub = b_P->size[0];
            for (i3 = 0; i3 < b_loop_ub; i3++) {
              P->data[(i6 + i3) + P->size[0] * (i7 + i2)] =
                  b_P->data[i3 + b_P->size[0] * i2];
            }
          }
          if (fromRow > toRow) {
            i2 = 0;
            i3 = 0;
          } else {
            if (fromRow != (int32_T)muDoubleScalarFloor(fromRow)) {
              emlrtIntegerCheckR2012b(fromRow, &r_emlrtDCI, (emlrtCTX)sp);
            }
            if (((int32_T)fromRow < 1) || ((int32_T)fromRow > P->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)fromRow, 1, P->size[0],
                                            &ob_emlrtBCI, (emlrtCTX)sp);
            }
            i2 = (int32_T)fromRow - 1;
            if (toRow != (int32_T)muDoubleScalarFloor(toRow)) {
              emlrtIntegerCheckR2012b(toRow, &q_emlrtDCI, (emlrtCTX)sp);
            }
            if (((int32_T)toRow < 1) || ((int32_T)toRow > P->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)toRow, 1, P->size[0],
                                            &nb_emlrtBCI, (emlrtCTX)sp);
            }
            i3 = (int32_T)toRow;
          }
          if (((int32_T)bcn < 1) || ((int32_T)bcn > P->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)bcn, 1, P->size[1],
                                          &mb_emlrtBCI, (emlrtCTX)sp);
          }
          loop_ub = i3 - i2;
          for (i3 = 0; i3 < loop_ub; i3++) {
            P->data[(i2 + i3) + P->size[0] * ((int32_T)bcn - 1)] = b_j;
          }
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtCTX)sp);
          }
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtCTX)sp);
        }
      }
      emxFree_real_T(&b_P);
      /*  find the true P if the vector of elements in v is not the default 1:n
       */
      if (v->size[1] < 1) {
        b_v->size[0] = 1;
        b_v->size[1] = 0;
      } else {
        i = b_v->size[0] * b_v->size[1];
        b_v->size[0] = 1;
        b_v->size[1] = v->size[1];
        emxEnsureCapacity_real_T(sp, b_v, i, &yb_emlrtRTEI);
        loop_ub = v->size[1] - 1;
        for (i = 0; i <= loop_ub; i++) {
          b_v->data[i] = (real_T)i + 1.0;
        }
      }
      p = false;
      if (v->size[1] == b_v->size[1]) {
        p = true;
      }
      if (p && (v->size[1] != 0) && (b_v->size[1] != 0)) {
        loop_ub = 0;
        exitg1 = false;
        while ((!exitg1) && (loop_ub <= b_v->size[1] - 1)) {
          if (!(v->data[loop_ub] == b_v->data[loop_ub])) {
            p = false;
            exitg1 = true;
          } else {
            loop_ub++;
          }
        }
      }
      b_p = (int32_T)p;
      if (!b_p) {
        st.site = &we_emlrtRSI;
        indexShapeCheck(&st, *(int32_T(*)[2])v->size, *(int32_T(*)[2])P->size);
        loop_ub = P->size[1];
        for (i = 0; i < loop_ub; i++) {
          b_loop_ub = P->size[0];
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            if (P->data[i1 + P->size[0] * i] !=
                (int32_T)muDoubleScalarFloor(P->data[i1 + P->size[0] * i])) {
              emlrtIntegerCheckR2012b(P->data[i1 + P->size[0] * i],
                                      &bb_emlrtDCI, (emlrtCTX)sp);
            }
            i2 = (int32_T)P->data[i1 + P->size[0] * i];
            if ((i2 < 1) || (i2 > v->size[1])) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, v->size[1], &ec_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            P->data[i1 + P->size[0] * i] = v->data[i2 - 1];
          }
        }
      }
    }
    emxFree_real_T(&c_v);
  }
  emxFree_real_T(&b_v);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (combsFS.c) */
