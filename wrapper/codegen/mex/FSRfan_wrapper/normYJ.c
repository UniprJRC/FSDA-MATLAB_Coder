/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * normYJ.c
 *
 * Code generation for function 'normYJ'
 *
 */

/* Include files */
#include "normYJ.h"
#include "FSRfan_wrapper_emxutil.h"
#include "FSRfan_wrapper_types.h"
#include "log.h"
#include "power.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo wf_emlrtRSI = {
    194,                                                  /* lineNo */
    "normYJ",                                             /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\normYJ.m" /* pathName */
};

static emlrtRSInfo xf_emlrtRSI = {
    196,                                                  /* lineNo */
    "normYJ",                                             /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\normYJ.m" /* pathName */
};

static emlrtRSInfo yf_emlrtRSI = {
    202,                                                  /* lineNo */
    "normYJ",                                             /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\normYJ.m" /* pathName */
};

static emlrtRSInfo ag_emlrtRSI = {
    204,                                                  /* lineNo */
    "normYJ",                                             /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\normYJ.m" /* pathName */
};

static emlrtECInfo k_emlrtECI = {
    -1,                                                   /* nDims */
    194,                                                  /* lineNo */
    13,                                                   /* colNo */
    "normYJ",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\normYJ.m" /* pName */
};

static emlrtECInfo l_emlrtECI = {
    -1,                                                   /* nDims */
    196,                                                  /* lineNo */
    13,                                                   /* colNo */
    "normYJ",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\normYJ.m" /* pName */
};

static emlrtECInfo m_emlrtECI = {
    -1,                                                   /* nDims */
    202,                                                  /* lineNo */
    13,                                                   /* colNo */
    "normYJ",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\normYJ.m" /* pName */
};

static emlrtECInfo n_emlrtECI = {
    -1,                                                   /* nDims */
    204,                                                  /* lineNo */
    13,                                                   /* colNo */
    "normYJ",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\normYJ.m" /* pName */
};

static emlrtBCInfo vc_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    196,                                                   /* lineNo */
    18,                                                    /* colNo */
    "Ytra",                                                /* aName */
    "normYJ",                                              /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\normYJ.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    194,                                                   /* lineNo */
    18,                                                    /* colNo */
    "Ytra",                                                /* aName */
    "normYJ",                                              /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\normYJ.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    204,                                                   /* lineNo */
    18,                                                    /* colNo */
    "Ytra",                                                /* aName */
    "normYJ",                                              /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\normYJ.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    202,                                                   /* lineNo */
    18,                                                    /* colNo */
    "Ytra",                                                /* aName */
    "normYJ",                                              /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\normYJ.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    196,                                                   /* lineNo */
    37,                                                    /* colNo */
    "Y",                                                   /* aName */
    "normYJ",                                              /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\normYJ.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    194,                                                   /* lineNo */
    35,                                                    /* colNo */
    "Y",                                                   /* aName */
    "normYJ",                                              /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\normYJ.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    204,                                                   /* lineNo */
    37,                                                    /* colNo */
    "Y",                                                   /* aName */
    "normYJ",                                              /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\normYJ.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = {
    -1,                                                    /* iFirst */
    -1,                                                    /* iLast */
    202,                                                   /* lineNo */
    36,                                                    /* colNo */
    "Y",                                                   /* aName */
    "normYJ",                                              /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\normYJ.m", /* pName */
    0                                                      /* checkKind */
};

static emlrtRTEInfo xf_emlrtRTEI = {
    178,                                                  /* lineNo */
    1,                                                    /* colNo */
    "normYJ",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\normYJ.m" /* pName */
};

static emlrtRTEInfo yf_emlrtRTEI = {
    1,                                                    /* lineNo */
    15,                                                   /* colNo */
    "normYJ",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\normYJ.m" /* pName */
};

static emlrtRTEInfo ag_emlrtRTEI = {
    196,                                                  /* lineNo */
    31,                                                   /* colNo */
    "normYJ",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\normYJ.m" /* pName */
};

static emlrtRTEInfo bg_emlrtRTEI = {
    194,                                                  /* lineNo */
    33,                                                   /* colNo */
    "normYJ",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\normYJ.m" /* pName */
};

static emlrtRTEInfo cg_emlrtRTEI = {
    204,                                                  /* lineNo */
    30,                                                   /* colNo */
    "normYJ",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\normYJ.m" /* pName */
};

static emlrtRTEInfo dg_emlrtRTEI = {
    202,                                                  /* lineNo */
    33,                                                   /* colNo */
    "normYJ",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\normYJ.m" /* pName */
};

static emlrtRTEInfo eg_emlrtRTEI = {
    194,                                                  /* lineNo */
    32,                                                   /* colNo */
    "normYJ",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\normYJ.m" /* pName */
};

static emlrtRTEInfo fg_emlrtRTEI = {
    196,                                                  /* lineNo */
    37,                                                   /* colNo */
    "normYJ",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\normYJ.m" /* pName */
};

static emlrtRTEInfo gg_emlrtRTEI = {
    196,                                                  /* lineNo */
    18,                                                   /* colNo */
    "normYJ",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\normYJ.m" /* pName */
};

static emlrtRTEInfo hg_emlrtRTEI = {
    204,                                                  /* lineNo */
    37,                                                   /* colNo */
    "normYJ",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\normYJ.m" /* pName */
};

static emlrtRTEInfo ig_emlrtRTEI = {
    204,                                                  /* lineNo */
    18,                                                   /* colNo */
    "normYJ",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\normYJ.m" /* pName */
};

/* Function Definitions */
void normYJ(const emlrtStack *sp, const emxArray_real_T *Y, real_T la,
            emxArray_real_T *Ytra)
{
  emlrtStack st;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_int32_T *r3;
  emxArray_int32_T *r4;
  emxArray_real_T *b_Y;
  emxArray_real_T *r;
  int32_T end;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /* normYJ computes (normalized) Yeo-Johnson transformation */
  /*  */
  /* <a href="matlab: docsearchFS('normYJ')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*  Y :           Input data. Matrix. */
  /*                n x v data matrix; n observations and v variables. Rows of
   */
  /*                Y represent observations, and columns represent variables.
   */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite
   */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*                 Data Types - single|double */
  /*    ColtoTra:   Variable to transform. Vector.  k x 1 integer vector */
  /*                specifying the variables which must be */
  /*                transformed. If it is missing and length(la)=v all */
  /*                variables are transformed */
  /*                 Data Types - single|double */
  /*         la :   transformation parameters. Vector. */
  /*                k x 1 vector containing set of transformation */
  /*                parameters for the k ColtoTra. */
  /*                 Data Types - single|double */
  /*  */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*   Jacobian :   Requested Jacobian of transformed values. true (default) or
   */
  /*                false. If true (default) the transformation is normalized */
  /*                to have Jacobian equal to 1 */
  /*                  Example - 'Jacobian',true */
  /*                  Data Types - Logical */
  /*  */
  /*   inverse :    Inverse transformation. Logical. If inverse is true, the */
  /*                inverse transformation is returned. The default value of */
  /*                inverse is false. */
  /*                  Example - 'inverse',true */
  /*                  Data Types - Logical */
  /*  */
  /*  Output: */
  /*  */
  /*    Ytra    : transformed data matrix. Matrix. n x v data matrix containing
   */
  /*                transformed observations */
  /*              The Yeo-Johnson transformation is the Box-Cox transformation
   */
  /*              of y+1 for nonnegative values, and of |y|+1 with parameter */
  /*              2-lambda for y negative. */
  /*  */
  /*  */
  /*  See also normBoxCox, normYJpn */
  /*  */
  /*  References: */
  /*  */
  /*  Yeo, I.K and Johnson, R. (2000), A new family of power transformations to
   */
  /*  improve normality or symmetry, "Biometrika", Vol. 87, pp. 954-959. */
  /*  */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('normYJ')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % Example of use of normYJ with all default options. */
  /*     % Transform value -3, -2, ..., 3 */
  /*     y=(-3:3)'; */
  /*     lambda=0 */
  /*     y1=normYJ(y,1,lambda) */
  /*     plot(y,y1) */
  /*     xlabel('Original values') */
  /*     ylabel('Transformed values') */
  /*  */
  /* } */
  /* { */
  /*     % Comparison between Box-Cox and Yeo-Johnson transformation. */
  /*     close all */
  /*     y=(-2:0.1:2)'; */
  /*     n=length(y); */
  /*     la=-1:1:3; */
  /*     nla=length(la); */
  /*     YtraYJ=zeros(n,nla); */
  /*     YtraBC=nan(n,nla); */
  /*     posy=y>0; */
  /*     for j=1:nla */
  /*       YtraYJ(:,j)=normYJ(y,1,la(j),'Jacobian',false); */
  /*  */
  /*       YtraBC(posy,j)=normBoxCox(y(posy),1,la(j),'Jacobian',false); */
  /*     end */
  /*     subplot(1,2,1) */
  /*     plot(y,YtraYJ) */
  /*     for j=1:nla */
  /*         text(y(1), YtraYJ(1,j),['\lambda=' num2str(la(j))]) */
  /*     end */
  /*  */
  /*     xlabel('Original values') */
  /*     ylabel('Transformed values') */
  /*     title('Yeo-Johnson transformation') */
  /*  */
  /*     subplot(1,2,2) */
  /*     plot(y,YtraBC) */
  /*     xlim([y(1) y(end)]) */
  /*     for j=1:nla */
  /*         text(y(16), YtraBC(22,j),['\lambda=' num2str(la(j))]) */
  /*     end */
  /*     xlabel('Original values') */
  /*     ylabel('Transformed values') */
  /*     title('Box-Cox transformation') */
  /* } */
  /* { */
  /*     % Simulated data check inverse transformation. */
  /*     n=100;p=5; */
  /*     Y=randn(n,p); */
  /*     Y(3,1:3)=0; */
  /*     la=[0.5 0 -0.5 2 0]; */
  /*     % Transform all columns of matrix Y according to the values of la */
  /*     Ytra=normYJ(Y,[],la,'Jacobian',false); */
  /*     Ychk=normYJ(Ytra,[],la,'Jacobian',false,'inverse',true); */
  /*     disp(max(max(abs(Y-Ychk)))) */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checking */
  /*  Extract size of the data */
  /*  Write in structure 'options' the options chosen by the user */
  /*  Normalized Yeo-Johnson transformation of columns ColtoTra using la */
  i = Ytra->size[0];
  Ytra->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(sp, Ytra, i, &xf_emlrtRTEI);
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    Ytra->data[i] = Y->data[i];
  }
  /*  YJ transformation is the Box-Cox transformation of */
  /*  y+1 for nonnegative values of y */
  emxInit_real_T(sp, &r, 1, &eg_emlrtRTEI, true);
  emxInit_int32_T(sp, &r1, 1, &fg_emlrtRTEI, true);
  emxInit_int32_T(sp, &r2, 1, &gg_emlrtRTEI, true);
  emxInit_real_T(sp, &b_Y, 1, &bg_emlrtRTEI, true);
  if (la != 0.0) {
    end = Y->size[0];
    for (i = 0; i < end; i++) {
      if ((Y->data[i] >= 0.0) && (i + 1 > Y->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, Y->size[0], &wc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
    }
    end = Y->size[0] - 1;
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (Y->data[i] >= 0.0) {
        loop_ub++;
      }
    }
    i = r1->size[0];
    r1->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r1, i, &yf_emlrtRTEI);
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (Y->data[i] >= 0.0) {
        r1->data[loop_ub] = i + 1;
        loop_ub++;
      }
    }
    i = b_Y->size[0];
    b_Y->size[0] = r1->size[0];
    emxEnsureCapacity_real_T(sp, b_Y, i, &bg_emlrtRTEI);
    loop_ub = r1->size[0];
    for (i = 0; i < loop_ub; i++) {
      if (r1->data[i] > Y->size[0]) {
        emlrtDynamicBoundsCheckR2012b(r1->data[i], 1, Y->size[0], &bd_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      b_Y->data[i] = Y->data[r1->data[i] - 1] + 1.0;
    }
    st.site = &wf_emlrtRSI;
    power(&st, b_Y, la, r);
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      r->data[i] = (r->data[i] - 1.0) / la;
    }
    end = Y->size[0];
    loop_ub = 0;
    for (i = 0; i < end; i++) {
      if (Y->data[i] >= 0.0) {
        loop_ub++;
      }
    }
    emlrtSubAssignSizeCheckR2012b(&loop_ub, 1, &r->size[0], 1, &k_emlrtECI,
                                  (emlrtCTX)sp);
    end = Y->size[0] - 1;
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (Y->data[i] >= 0.0) {
        loop_ub++;
      }
    }
    i = r2->size[0];
    r2->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r2, i, &yf_emlrtRTEI);
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (Y->data[i] >= 0.0) {
        r2->data[loop_ub] = i + 1;
        loop_ub++;
      }
    }
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      Ytra->data[r2->data[i] - 1] = r->data[i];
    }
  } else {
    end = Y->size[0];
    for (i = 0; i < end; i++) {
      if ((Y->data[i] >= 0.0) && (i + 1 > Y->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, Y->size[0], &vc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
    }
    end = Y->size[0] - 1;
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (Y->data[i] >= 0.0) {
        loop_ub++;
      }
    }
    i = r1->size[0];
    r1->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r1, i, &yf_emlrtRTEI);
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (Y->data[i] >= 0.0) {
        r1->data[loop_ub] = i + 1;
        loop_ub++;
      }
    }
    i = r->size[0];
    r->size[0] = r1->size[0];
    emxEnsureCapacity_real_T(sp, r, i, &ag_emlrtRTEI);
    loop_ub = r1->size[0];
    for (i = 0; i < loop_ub; i++) {
      if (r1->data[i] > Y->size[0]) {
        emlrtDynamicBoundsCheckR2012b(r1->data[i], 1, Y->size[0], &ad_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      r->data[i] = Y->data[r1->data[i] - 1] + 1.0;
    }
    st.site = &xf_emlrtRSI;
    b_log(&st, r);
    end = Y->size[0];
    loop_ub = 0;
    for (i = 0; i < end; i++) {
      if (Y->data[i] >= 0.0) {
        loop_ub++;
      }
    }
    emlrtSubAssignSizeCheckR2012b(&loop_ub, 1, &r->size[0], 1, &l_emlrtECI,
                                  (emlrtCTX)sp);
    end = Y->size[0] - 1;
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (Y->data[i] >= 0.0) {
        loop_ub++;
      }
    }
    i = r2->size[0];
    r2->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r2, i, &yf_emlrtRTEI);
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (Y->data[i] >= 0.0) {
        r2->data[loop_ub] = i + 1;
        loop_ub++;
      }
    }
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      Ytra->data[r2->data[i] - 1] = r->data[i];
    }
  }
  emxFree_int32_T(&r2);
  emxFree_int32_T(&r1);
  /*  YJ transformation is the Box-Cox transformation of */
  /*   |y|+1 with parameter 2-lambda for y negative. */
  emxInit_int32_T(sp, &r3, 1, &hg_emlrtRTEI, true);
  emxInit_int32_T(sp, &r4, 1, &ig_emlrtRTEI, true);
  if (2.0 - la != 0.0) {
    end = Y->size[0];
    for (i = 0; i < end; i++) {
      if ((!(Y->data[i] >= 0.0)) && (i + 1 > Ytra->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, Ytra->size[0], &yc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
    }
    end = Y->size[0] - 1;
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (!(Y->data[i] >= 0.0)) {
        loop_ub++;
      }
    }
    i = r3->size[0];
    r3->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r3, i, &yf_emlrtRTEI);
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (!(Y->data[i] >= 0.0)) {
        r3->data[loop_ub] = i + 1;
        loop_ub++;
      }
    }
    i = b_Y->size[0];
    b_Y->size[0] = r3->size[0];
    emxEnsureCapacity_real_T(sp, b_Y, i, &dg_emlrtRTEI);
    loop_ub = r3->size[0];
    for (i = 0; i < loop_ub; i++) {
      if (r3->data[i] > Y->size[0]) {
        emlrtDynamicBoundsCheckR2012b(r3->data[i], 1, Y->size[0], &dd_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      b_Y->data[i] = -Y->data[r3->data[i] - 1] + 1.0;
    }
    st.site = &yf_emlrtRSI;
    power(&st, b_Y, 2.0 - la, r);
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      r->data[i] = -(r->data[i] - 1.0) / (2.0 - la);
    }
    end = Y->size[0];
    loop_ub = 0;
    for (i = 0; i < end; i++) {
      if (!(Y->data[i] >= 0.0)) {
        loop_ub++;
      }
    }
    emlrtSubAssignSizeCheckR2012b(&loop_ub, 1, &r->size[0], 1, &m_emlrtECI,
                                  (emlrtCTX)sp);
    end = Y->size[0] - 1;
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (!(Y->data[i] >= 0.0)) {
        loop_ub++;
      }
    }
    i = r4->size[0];
    r4->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r4, i, &yf_emlrtRTEI);
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (!(Y->data[i] >= 0.0)) {
        r4->data[loop_ub] = i + 1;
        loop_ub++;
      }
    }
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      Ytra->data[r4->data[i] - 1] = r->data[i];
    }
  } else {
    end = Y->size[0];
    for (i = 0; i < end; i++) {
      if ((!(Y->data[i] >= 0.0)) && (i + 1 > Ytra->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, Ytra->size[0], &xc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
    }
    end = Y->size[0] - 1;
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (!(Y->data[i] >= 0.0)) {
        loop_ub++;
      }
    }
    i = r3->size[0];
    r3->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r3, i, &yf_emlrtRTEI);
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (!(Y->data[i] >= 0.0)) {
        r3->data[loop_ub] = i + 1;
        loop_ub++;
      }
    }
    i = r->size[0];
    r->size[0] = r3->size[0];
    emxEnsureCapacity_real_T(sp, r, i, &cg_emlrtRTEI);
    loop_ub = r3->size[0];
    for (i = 0; i < loop_ub; i++) {
      if (r3->data[i] > Y->size[0]) {
        emlrtDynamicBoundsCheckR2012b(r3->data[i], 1, Y->size[0], &cd_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      r->data[i] = -Y->data[r3->data[i] - 1] + 1.0;
    }
    st.site = &ag_emlrtRSI;
    b_log(&st, r);
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      r->data[i] = -r->data[i];
    }
    end = Y->size[0];
    loop_ub = 0;
    for (i = 0; i < end; i++) {
      if (!(Y->data[i] >= 0.0)) {
        loop_ub++;
      }
    }
    emlrtSubAssignSizeCheckR2012b(&loop_ub, 1, &r->size[0], 1, &n_emlrtECI,
                                  (emlrtCTX)sp);
    end = Y->size[0] - 1;
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (!(Y->data[i] >= 0.0)) {
        loop_ub++;
      }
    }
    i = r4->size[0];
    r4->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(sp, r4, i, &yf_emlrtRTEI);
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (!(Y->data[i] >= 0.0)) {
        r4->data[loop_ub] = i + 1;
        loop_ub++;
      }
    }
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      Ytra->data[r4->data[i] - 1] = r->data[i];
    }
  }
  emxFree_real_T(&b_Y);
  emxFree_int32_T(&r4);
  emxFree_int32_T(&r3);
  emxFree_real_T(&r);
  /*  If Jacobian ==true the transformation is normalized so that its */
  /*  Jacobian will be 1 */
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (normYJ.c) */
