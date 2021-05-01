/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * quickselectFS.c
 *
 * Code generation for function 'quickselectFS'
 *
 */

/* Include files */
#include "quickselectFS.h"
#include "LXS_wrapper1_data.h"
#include "LXS_wrapper1_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtBCInfo bp_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    96,                                                      /* lineNo */
    13,                                                      /* colNo */
    "A",                                                     /* aName */
    "quickselectFS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\quickselectFS.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo cp_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    97,                                                      /* lineNo */
    13,                                                      /* colNo */
    "A",                                                     /* aName */
    "quickselectFS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\quickselectFS.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo dp_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    97,                                                      /* lineNo */
    5,                                                       /* colNo */
    "A",                                                     /* aName */
    "quickselectFS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\quickselectFS.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo ep_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    98,                                                      /* lineNo */
    5,                                                       /* colNo */
    "A",                                                     /* aName */
    "quickselectFS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\quickselectFS.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo fp_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    141,                                                     /* lineNo */
    4,                                                       /* colNo */
    "A",                                                     /* aName */
    "quickselectFS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\quickselectFS.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo gp_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    108,                                                     /* lineNo */
    13,                                                      /* colNo */
    "A",                                                     /* aName */
    "quickselectFS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\quickselectFS.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo hp_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    111,                                                     /* lineNo */
    16,                                                      /* colNo */
    "A",                                                     /* aName */
    "quickselectFS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\quickselectFS.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo ip_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    111,                                                     /* lineNo */
    5,                                                       /* colNo */
    "A",                                                     /* aName */
    "quickselectFS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\quickselectFS.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo jp_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    112,                                                     /* lineNo */
    5,                                                       /* colNo */
    "A",                                                     /* aName */
    "quickselectFS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\quickselectFS.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo kp_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    128,                                                     /* lineNo */
    19,                                                      /* colNo */
    "A",                                                     /* aName */
    "quickselectFS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\quickselectFS.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo lp_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    128,                                                     /* lineNo */
    5,                                                       /* colNo */
    "A",                                                     /* aName */
    "quickselectFS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\quickselectFS.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo mp_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    116,                                                     /* lineNo */
    12,                                                      /* colNo */
    "A",                                                     /* aName */
    "quickselectFS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\quickselectFS.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo np_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    129,                                                     /* lineNo */
    5,                                                       /* colNo */
    "A",                                                     /* aName */
    "quickselectFS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\quickselectFS.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo op_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    119,                                                     /* lineNo */
    27,                                                      /* colNo */
    "A",                                                     /* aName */
    "quickselectFS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\quickselectFS.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo pp_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    120,                                                     /* lineNo */
    27,                                                      /* colNo */
    "A",                                                     /* aName */
    "quickselectFS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\quickselectFS.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo qp_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    120,                                                     /* lineNo */
    13,                                                      /* colNo */
    "A",                                                     /* aName */
    "quickselectFS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\quickselectFS.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo rp_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    121,                                                     /* lineNo */
    13,                                                      /* colNo */
    "A",                                                     /* aName */
    "quickselectFS",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\quickselectFS.m", /* pName */
    0                                                        /* checkKind */
};

/* Function Definitions */
real_T quickselectFS(const emlrtStack *sp, emxArray_real_T *A, real_T k,
                     real_T kiniindex)
{
  real_T Ak;
  real_T d;
  real_T pivot;
  int32_T b_i;
  int32_T i;
  int32_T left;
  int32_T right;
  uint32_T c_i;
  /* quickselectFS finds the k-th order statistic */
  /*  */
  /* <a href="matlab: docsearchFS('quickselectFS')">Link to the help
   * function</a> */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*    A:  a set of unique numbers. Vector. Vector containing a set of n */
  /*        (distinct) numbers. */
  /*                  Data Types - double */
  /*    k:  order statistic index. Scalar. An integer between 1 and n indicating
   * the */
  /*        desired order statistic. */
  /*                  Data Types - double */
  /*  */
  /*  */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*   kiniindex: Index of an element in A. Scalar. */
  /*       The index of an element in A that is supposed to be "close" */
  /*       to the desired k-th order statistic. This information is used to */
  /*       choose the pivot so that the chance to fall into the worst case */
  /*       performance ($O(n^2)$) is minimized and the average case performance
   */
  /*       is maximized. */
  /*       Example - 'kiniindex',1  */
  /*       Data Types - double */
  /*  */
  /*  Output: */
  /*  */
  /*  kE : k-th order statistic. Scalar. Element in A that is larger than
   * exactly k - 1 other elements of A. */
  /*  */
  /*  Optional Output: */
  /*      */
  /*     Asor   : Sorted input. Vector. Input vector A sorted. */
  /*  */
  /*  See also:  FSMmmd */
  /*  */
  /*  References: */
  /*  */
  /*  Riani, M., Perrotta, D. and Cerioli, A. (2015), The Forward Search for */
  /*  Very Large Datasets, "Journal of Statistical Software" */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('quickselectFS')">Link to the help page for
   * this function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /*  */
  /* { */
  /*     %% quickselectFS with all default options. */
  /*     n=200; */
  /*     Y=randn(n,1); */
  /*     k=10; */
  /*     [out]=quickselectFS(Y,k); */
  /*     % Check the result */
  /*     sorY=sort(Y); */
  /*     disp([out,sorY(k)]) */
  /* } */
  /* { */
  /*     %% quickselectFS with kiniindex supplied. */
  /*     n=200; */
  /*     Y=randn(n,1); */
  /*     k=10; */
  /*     % kiniindex is supplied  */
  /*     [out]=quickselectFS(Y,k,20); */
  /*     % Check the result */
  /*     sorY=sort(Y); */
  /*     disp([out,sorY(k)]) */
  /* } */
  /* { */
  /*     %% quickselectFS with two output arguments. */
  /*     n=10; */
  /*     Y=randn(n,1); */
  /*     k=3; */
  /*     % kiniindex is supplied  */
  /*     [out,Ysor]=quickselectFS(Y,k); */
  /*     % Check the result */
  /*     disp([Y, Ysor]) */
  /* } */
  /*  Beginning of code */
  /*  Initialise the two sentinels */
  left = 1;
  right = A->size[0];
  /*  if we know that element in position kiniindex is "close" to the desired
   * order */
  /*  statistic k, than swap A(k) and A(kiniindex). */
  if (((int32_T)k < 1) || ((int32_T)k > A->size[0])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)k, 1, A->size[0], &bp_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  Ak = A->data[(int32_T)k - 1];
  if (((int32_T)kiniindex < 1) || ((int32_T)kiniindex > A->size[0])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)kiniindex, 1, A->size[0],
                                  &cp_emlrtBCI, (emlrtCTX)sp);
  }
  if (((int32_T)k < 1) || ((int32_T)k > A->size[0])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)k, 1, A->size[0], &dp_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  A->data[(int32_T)k - 1] = A->data[(int32_T)kiniindex - 1];
  if (((int32_T)kiniindex < 1) || ((int32_T)kiniindex > A->size[0])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)kiniindex, 1, A->size[0],
                                  &ep_emlrtBCI, (emlrtCTX)sp);
  }
  A->data[(int32_T)kiniindex - 1] = Ak;
  /*  pivot is chosen at fixed position k.  */
  Ak = -999.0;
  while (Ak != k) {
    /* while ((left < right) && (position ~= k)) */
    if (((int32_T)k < 1) || ((int32_T)k > A->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)k, 1, A->size[0], &gp_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    pivot = A->data[(int32_T)k - 1];
    /*  Swap right sentinel and pivot element */
    if ((right < 1) || (right > A->size[0])) {
      emlrtDynamicBoundsCheckR2012b(right, 1, A->size[0], &hp_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (((int32_T)k < 1) || ((int32_T)k > A->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)k, 1, A->size[0], &ip_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    A->data[(int32_T)k - 1] = A->data[right - 1];
    if (right > A->size[0]) {
      emlrtDynamicBoundsCheckR2012b(right, 1, A->size[0], &jp_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    A->data[right - 1] = pivot;
    Ak = left;
    i = right - left;
    for (b_i = 0; b_i <= i; b_i++) {
      c_i = (uint32_T)left + b_i;
      if (((int32_T)c_i < 1) || ((int32_T)c_i > A->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, A->size[0], &mp_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      d = A->data[(int32_T)c_i - 1];
      if (d < pivot) {
        /*  Swap A(i) with A(position)! */
        /*  A([i,position])=A([position,i]) would be more elegant but slower */
        if (((int32_T)c_i < 1) || ((int32_T)c_i > A->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, A->size[0],
                                        &op_emlrtBCI, (emlrtCTX)sp);
        }
        if (((int32_T)Ak < 1) || ((int32_T)Ak > A->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)Ak, 1, A->size[0],
                                        &pp_emlrtBCI, (emlrtCTX)sp);
        }
        if (((int32_T)c_i < 1) || ((int32_T)c_i > A->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)c_i, 1, A->size[0],
                                        &qp_emlrtBCI, (emlrtCTX)sp);
        }
        A->data[(int32_T)c_i - 1] = A->data[(int32_T)Ak - 1];
        if (((int32_T)Ak < 1) || ((int32_T)Ak > A->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)Ak, 1, A->size[0],
                                        &rp_emlrtBCI, (emlrtCTX)sp);
        }
        A->data[(int32_T)Ak - 1] = d;
        Ak++;
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }
    /*  Swap A(right) with A(position) */
    if (((int32_T)Ak < 1) || ((int32_T)Ak > A->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)Ak, 1, A->size[0], &kp_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (right > A->size[0]) {
      emlrtDynamicBoundsCheckR2012b(right, 1, A->size[0], &lp_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    A->data[right - 1] = A->data[(int32_T)Ak - 1];
    if (((int32_T)Ak < 1) || ((int32_T)Ak > A->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)Ak, 1, A->size[0], &np_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    A->data[(int32_T)Ak - 1] = pivot;
    if (Ak < k) {
      left = (int32_T)Ak + 1;
    } else {
      /*  this is 'elseif pos > k' as pos == k cannot hold (see 'while') */
      right = (int32_T)Ak - 1;
    }
    /*  Pivot: extension to random choice has to be studied. */
    /* pivotIndex = ceil(( left + right ) / 2); */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  if (((int32_T)k < 1) || ((int32_T)k > A->size[0])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)k, 1, A->size[0], &fp_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  return A->data[(int32_T)k - 1];
}

/* End of code generation (quickselectFS.c) */
