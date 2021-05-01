/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * RobRegrSize.c
 *
 * Code generation for function 'RobRegrSize'
 *
 */

/* Include files */
#include "RobRegrSize.h"
#include "LTSts_wrapper_data.h"
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_mexutil.h"
#include "LTSts_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_setop.h"
#include "norminv.h"
#include "rt_nonfinite.h"
#include "sprintf.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo sh_emlrtRSI =
    {
        18,            /* lineNo */
        "ifWhileCond", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\ifWhileCond.m" /* pathName */
};

static emlrtRSInfo th_emlrtRSI =
    {
        31,            /* lineNo */
        "checkNoNaNs", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\ifWhileCond.m" /* pathName */
};

static emlrtRSInfo iv_emlrtRSI = {
    570,                                                   /* lineNo */
    "RobRegrSize",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\RobRegrSize.m" /* pathName */
};

static emlrtRSInfo jv_emlrtRSI = {
    527,                                                   /* lineNo */
    "RobRegrSize",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\RobRegrSize.m" /* pathName */
};

static emlrtRSInfo kv_emlrtRSI = {
    525,                                                   /* lineNo */
    "RobRegrSize",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\RobRegrSize.m" /* pathName */
};

static emlrtRSInfo lv_emlrtRSI = {
    334,                                                   /* lineNo */
    "RobRegrSize",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\RobRegrSize.m" /* pathName */
};

static emlrtRSInfo mv_emlrtRSI = {
    332,                                                   /* lineNo */
    "RobRegrSize",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\RobRegrSize.m" /* pathName */
};

static emlrtRSInfo nv_emlrtRSI = {
    325,                                                   /* lineNo */
    "RobRegrSize",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\RobRegrSize.m" /* pathName */
};

static emlrtRSInfo ov_emlrtRSI = {
    323,                                                   /* lineNo */
    "RobRegrSize",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\RobRegrSize.m" /* pathName */
};

static emlrtRSInfo pv_emlrtRSI = {
    313,                                                   /* lineNo */
    "RobRegrSize",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\RobRegrSize.m" /* pathName */
};

static emlrtRSInfo qv_emlrtRSI = {
    245,                                                   /* lineNo */
    "RobRegrSize",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\RobRegrSize.m" /* pathName */
};

static emlrtRSInfo
    rv_emlrtRSI =
        {
            63,       /* lineNo */
            "strcmp", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\strcmp.m" /* pathName */
};

static emlrtRSInfo
    sv_emlrtRSI =
        {
            138,          /* lineNo */
            "loc_strcmp", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\strcmp.m" /* pathName */
};

static emlrtRSInfo
    tv_emlrtRSI =
        {
            209,       /* lineNo */
            "charcmp", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\strcmp.m" /* pathName */
};

static emlrtMCInfo v_emlrtMCI = {
    244,                                                   /* lineNo */
    13,                                                    /* colNo */
    "RobRegrSize",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\RobRegrSize.m" /* pName */
};

static emlrtBCInfo io_emlrtBCI = {
    1,                                                      /* iFirst */
    24,                                                     /* iLast */
    586,                                                    /* lineNo */
    39,                                                     /* colNo */
    "MAT.ThreshAllSmind",                                   /* aName */
    "RobRegrSize",                                          /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\RobRegrSize.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtRTEInfo yt_emlrtRTEI = {
    531,                                                   /* lineNo */
    9,                                                     /* colNo */
    "RobRegrSize",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\RobRegrSize.m" /* pName */
};

static emlrtRTEInfo au_emlrtRTEI = {
    539,                                                   /* lineNo */
    17,                                                    /* colNo */
    "RobRegrSize",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\RobRegrSize.m" /* pName */
};

static emlrtRTEInfo bu_emlrtRTEI = {
    536,                                                   /* lineNo */
    17,                                                    /* colNo */
    "RobRegrSize",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\RobRegrSize.m" /* pName */
};

static emlrtRTEInfo cu_emlrtRTEI = {
    527,                                                   /* lineNo */
    9,                                                     /* colNo */
    "RobRegrSize",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\RobRegrSize.m" /* pName */
};

static emlrtRTEInfo du_emlrtRTEI = {
    390,                                                   /* lineNo */
    13,                                                    /* colNo */
    "RobRegrSize",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\RobRegrSize.m" /* pName */
};

static emlrtRTEInfo eu_emlrtRTEI = {
    527,                                                   /* lineNo */
    34,                                                    /* colNo */
    "RobRegrSize",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\RobRegrSize.m" /* pName */
};

static emlrtRSInfo mcb_emlrtRSI = {
    244,                                                   /* lineNo */
    "RobRegrSize",                                         /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\RobRegrSize.m" /* pathName */
};

/* Function Definitions */
void RobRegrSize(const emlrtStack *sp, real_T n, real_T p, real_T bdp)
{
  static const int32_T iv[2] = {1, 56};
  static const int32_T iv1[2] = {1, 23};
  static const int32_T iv2[2] = {1, 37};
  static const int32_T iv3[2] = {1, 25};
  static const int32_T iv4[2] = {1, 52};
  static const char_T u[56] = {
      'C', 'o', 'r', 'r', 'e', 'c', 't', 'i', 'o', 'n', ' ', 'f', 'a', 'c',
      't', 'o', 'r', 's', ' ', 'a', 'r', 'e', ' ', 'n', 'o', 't', ' ', 'n',
      'e', 'e', 'd', 'e', 'd', ' ', 'f', 'o', 'r', ' ', 'n', ' ', 'g', 'r',
      'e', 'a', 't', 'e', 'r', ' ', 't', 'h', 'a', 'n', ' ', '5', '0', '0'};
  static const char_T b_varargin_2[52] = {
      'b', 'd', 'p', ' ', 'm', 'u', 's', 't', ' ', 'b', 'e', ' ', 'a',
      ' ', 'n', 'u', 'm', 'b', 'e', 'r', ' ', 'i', 'n', ' ', 't', 'h',
      'e', ' ', 'i', 'n', 't', 'e', 'r', 'v', 'a', 'l', ' ', '[', '0',
      '+', 'e', 'p', 's', 'i', 'l', 'o', 'n', '-', '0', '.', '5', ']'};
  static const char_T varargin_2[37] = {
      'P', 'l', 'e', 'a', 's', 'e', ' ', 'u', 's', 'e', ' ', 't', 'h',
      'e', ' ', 'n', 'o', 'm', 'i', 'n', 'a', 'l', ' ', 'c', 'h', 'i',
      '2', ' ', 't', 'h', 'r', 'e', 's', 'h', 'o', 'l', 'd'};
  static const char_T b_varargin_1[25] = {
      'F', 'S', 'D', 'A', ':', 'R', 'o', 'b', 'R', 'e', 'g', 'r', 'S',
      'i', 'z', 'e', ':', 'W', 'r', 'o', 'n', 'g', 'B', 'd', 'p'};
  static const char_T varargin_1[23] = {'F', 'S', 'D', 'A', ':', 'R', 'o', 'b',
                                        'R', 'e', 'g', 'r', 'S', 'i', 'z', 'e',
                                        ':', 'W', 'r', 'o', 'n', 'g', 'n'};
  static const char_T b_cv2[10] = {'L', 'T', 'S', 'r', 'b',
                                   'd', 'p', '0', '5', '0'};
  static const char_T b_cv3[10] = {'L', 'T', 'S', 'r', 'b',
                                   'd', 'p', '0', '2', '5'};
  static const char_T cv11[10] = {'M', 'M', 'e', 'f', 'f',
                                  '0', '8', '5', 'O', 'P'};
  static const char_T cv12[10] = {'M', 'M', 'e', 'f', 'f',
                                  '0', '9', '0', 'O', 'P'};
  static const char_T cv13[10] = {'M', 'M', 'e', 'f', 'f',
                                  '0', '9', '5', 'O', 'P'};
  static const char_T cv16[10] = {'M', 'M', 'e', 'f', 'f',
                                  '0', '8', '5', 'H', 'Y'};
  static const char_T cv17[10] = {'M', 'M', 'e', 'f', 'f',
                                  '0', '9', '0', 'H', 'Y'};
  static const char_T cv18[10] = {'M', 'M', 'e', 'f', 'f',
                                  '0', '9', '5', 'H', 'Y'};
  static const char_T cv21[10] = {'M', 'M', 'e', 'f', 'f',
                                  '0', '8', '5', 'H', 'A'};
  static const char_T cv22[10] = {'M', 'M', 'e', 'f', 'f',
                                  '0', '9', '0', 'H', 'A'};
  static const char_T cv23[10] = {'M', 'M', 'e', 'f', 'f',
                                  '0', '9', '5', 'H', 'A'};
  static const char_T cv6[10] = {'M', 'M', 'e', 'f', 'f',
                                 '0', '8', '5', 'T', 'B'};
  static const char_T cv7[10] = {'M', 'M', 'e', 'f', 'f',
                                 '0', '9', '0', 'T', 'B'};
  static const char_T cv8[10] = {'M', 'M', 'e', 'f', 'f',
                                 '0', '9', '5', 'T', 'B'};
  static const char_T b_cv[9] = {'L', 'T', 'S', 'b', 'd', 'p', '0', '5', '0'};
  static const char_T b_cv1[9] = {'L', 'T', 'S', 'b', 'd', 'p', '0', '2', '5'};
  static const char_T b_cv4[9] = {'S', 'b', 'd', 'p', '0', '2', '5', 'T', 'B'};
  static const char_T b_cv5[9] = {'S', 'b', 'd', 'p', '0', '5', '0', 'T', 'B'};
  static const char_T cv10[9] = {'S', 'b', 'd', 'p', '0', '5', '0', 'O', 'P'};
  static const char_T cv14[9] = {'S', 'b', 'd', 'p', '0', '2', '5', 'H', 'Y'};
  static const char_T cv15[9] = {'S', 'b', 'd', 'p', '0', '5', '0', 'H', 'Y'};
  static const char_T cv19[9] = {'S', 'b', 'd', 'p', '0', '2', '5', 'H', 'A'};
  static const char_T cv20[9] = {'S', 'b', 'd', 'p', '0', '5', '0', 'H', 'A'};
  static const char_T cv9[9] = {'S', 'b', 'd', 'p', '0', '2', '5', 'O', 'P'};
  cell_wrap_1 labest[24];
  cell_wrap_1 r;
  cell_wrap_1 r1;
  cell_wrap_1 r10;
  cell_wrap_1 r11;
  cell_wrap_1 r12;
  cell_wrap_1 r13;
  cell_wrap_1 r14;
  cell_wrap_1 r15;
  cell_wrap_1 r16;
  cell_wrap_1 r17;
  cell_wrap_1 r18;
  cell_wrap_1 r19;
  cell_wrap_1 r2;
  cell_wrap_1 r20;
  cell_wrap_1 r21;
  cell_wrap_1 r22;
  cell_wrap_1 r23;
  cell_wrap_1 r3;
  cell_wrap_1 r4;
  cell_wrap_1 r5;
  cell_wrap_1 r6;
  cell_wrap_1 r7;
  cell_wrap_1 r8;
  cell_wrap_1 r9;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_char_T *namefile1;
  emxArray_char_T *r24;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  const mxArray *y;
  real_T a;
  int32_T c_size[2];
  int32_T exitg2;
  int32_T ib_data;
  int32_T ib_size;
  int32_T nb;
  int32_T posint1;
  boolean_T exitg1;
  boolean_T f_y;
  boolean_T x_data;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /* RobRegrSize provides proper threshold for robust estimators to obtain an
   * empirical size close to 1 per cent nominal size */
  /*  */
  /* <a href="matlab: docsearchFS('RobRegrSize')">Link to the help function</a>
   */
  /*  */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*            n : sample size. Scalar integer. */
  /*                Number of units of the regression dataset. */
  /*                REMARK - simulations have been done for */
  /*                n=50, 60, 70, 80, 90, 100, 150, 200, 250, 300, 400, 500. */
  /*                For other values of n the threhold are found by */
  /*                interpolation using the two closest values smaller or */
  /*                greater than the one which has been considered */
  /*                Data Types -single | double | int8 | int16 | int32 | int64
   * |uint8 | uint16 | uint32 | uint64 */
  /*  */
  /*  */
  /*            p : number of variables. Scalar integer. Number of explanatory
   * variables. */
  /*                REMARK - simulations have been done for p=2, 3, ..., 10. If
   */
  /*                the user supplies a value of p greater than 10 the */
  /*                correction factors are extrapolated by fitting a simple */
  /*                quadratic model in p. */
  /*                Data Types -single | double | int8 | int16 | int32 | int64
   * |uint8 | uint16 | uint32 | uint64 */
  /*  */
  /*  */
  /*        robest: robust estimator. String. String which identifies the robust
   * estimator which is used */
  /*                Possibile values are: */
  /*                  'S'    S estimators; */
  /*                  'MM'   MM estimators; */
  /*                  'LTS'  Least trimmed squares estimator; */
  /*                  'LTSr' Least trimmed squares estimator reweighted. */
  /*                If robest is missing MM estimator is used */
  /*                Data Types -char */
  /*  */
  /*       rhofunc: Weight function. String. */
  /*                String which identifies the weight function which has been
   */
  /*                used for S or MM. */
  /*                Possibile values are */
  /*                 'TB', for Tukey biweight rho function; */
  /*                 'HA', for Hampel rho function; */
  /*                 'HY', for hyperbolic rho function; */
  /*                 'OP', for optimal rho function; */
  /*                 'ST'  Soft trimming estimator (in this case an average */
  /*                         threshold based on the TB,HY,HA and OP is used) */
  /*                 REMARK - this value is ignored if robest is LTS or LTSr */
  /*                If rhofunc is missing and robest is 'S' or 'MM', the */
  /*                default value of rhofunc is 'ST'. */
  /*                Data Types -char */
  /*  */
  /*          bdp :  breakdown point. Scalar. */
  /*                Scalar between 0 and 0.5. If robest is S, LTS or LTSr */
  /*                and bdp is missing a value of 0.5 is used as default. */
  /*                REMARK - simulations have been done for bdp=0.25 and 0.50 */
  /*                If the user supplies a value of bdp smaller than 0.25, the
   */
  /*                threhold found for bdp=0.25 is used.  In this case a */
  /*                warning is produced which alerts the user that the test is
   */
  /*                likely to be conservative. If on the other hand bdp is a */
  /*                value in the interval (0.25 0.5) an average */
  /*                between bdp=0.25 and bdp=0.5 is used (for a more refined */
  /*                correction please see input option Tallis) */
  /*  */
  /*          eff : nominal efficiency. Scalar. */
  /*                Scalar between between 0.5 and 1-epsilon (if robest is 'MM')
   */
  /*                REMARK - simulations have been done for eff = 0.85, 0.90 and
   */
  /*                0.95 If the user supplies a value of eff smaller than 0.85
   */
  /*                (greater than 0.95), the threshold found for eff=0.85 */
  /*                (eff=0.95) is used.  In all the other cases an average */
  /*                is taken using the two closest values of eff. */
  /*  */
  /*  */
  /*      sizesim : simultaneous or individual size. Scalar. */
  /*                Scalar which specifies whether simultaneous (sizesim=1) or
   */
  /*                individual size is used. If sizesim is missing or equal to
   */
  /*                1 a simultaneous size is used. */
  /*  */
  /*  */
  /*      Tallis  : need to intermpolate. Scalar. */
  /*                Scalar which has an effect just if bdp is not equal to 0.25
   */
  /*                or 0.5. If Tallis=1 the program computes the ratio between
   */
  /*                the asymptotic consitency factor using the breakdown point
   */
  /*                supplied by the user and the closest consistency factor */
  /*                associated to the breakdown point for which simulations */
  /*                exist. Therefore, if for example the supplied breakdown is
   */
  /*                smaller than 0.25 the program multiplies the empirical */
  /*                threshold using bdp=0.25 by a number smaller than 1. */
  /*                Similarly, if bdp>0.375 the program multiplies the */
  /*                empirical threshold using bdp=0.5 by a number smaller than
   */
  /*                1. If supplied bdp is very close to 0.25 or 0.5 we suggest
   */
  /*                to use this option otherwise it is better to take a */
  /*                simple average of the threholds associated to the two */
  /*                closest breakdown points for which simulations exist. The */
  /*                default value of Tallis is 0. */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*  */
  /*   Output: */
  /*  */
  /*     thresh :    Empirical threshold. Scalar. */
  /*                 Emprirical threshold which can be used in order */
  /*                 to have a test with en empirical size close to the nominal
   */
  /*                 size (1% individual or simultaneous) */
  /*  */
  /*  */
  /*   More About: */
  /*  */
  /*                We assume that the two input MAT files */
  /*                Ind_ThreshSm.mat and Sim_ThreshSm.mat are in the same */
  /*                folder or in the MATLAB path. */
  /*                Ind_ThreshSm.mat contains a 3D array with the thresholds in
   */
  /*                case an individual size is requested */
  /*                Sim_ThreshSm.mat contains a */
  /*                3D array with the thresholds in case a simultaneous size */
  /*                is requested */
  /*                The two 3D arrays have dimension 12-by-9-by-24 */
  /*                The 12 rows are referred to the 12 sample sizes which have
   */
  /*                been considered namely n=50, 60, 70, 80, 90, 100, 150, 200,
   */
  /*                250, 300, 400, 500. */
  /*                The 9 colums are referred to the number of variables which
   */
  /*                have been considered namely p=2, 3, ..., 10. */
  /*                The third dimension is associated with the 24 estimators */
  /*                which have been used. The order of the estimators is: */
  /*                  ' 1'    'LTSbdp050' ; */
  /*                  ' 2'    'LTSbdp025' ; */
  /*                  ' 3'    'LTSrbdp050'; */
  /*                  ' 4'    'LTSrbdp025'; */
  /*                  ' 5'    'Sbdp025TB' ; */
  /*                  ' 6'    'Sbdp050TB' ; */
  /*                  ' 7'    'MMeff085TB'; */
  /*                  ' 8'    'MMeff090TB'; */
  /*                  ' 9'    'MMeff095TB'; */
  /*                  '10'    'Sbdp025OP' ; */
  /*                  '11'    'Sbdp050OP' ; */
  /*                  '12'    'MMeff085OP'; */
  /*                  '13'    'MMeff090OP'; */
  /*                  '14'    'MMeff095OP'; */
  /*                  '15'    'Sbdp025HY' ; */
  /*                  '16'    'Sbdp050HY' ; */
  /*                  '17'    'MMeff085HY'; */
  /*                  '18'    'MMeff090HY'; */
  /*                  '19'    'MMeff095HY'; */
  /*                  '20'    'Sbdp025HA' ; */
  /*                  '21'    'Sbdp050HA' ; */
  /*                  '22'    'MMeff085HA'; */
  /*                  '23'    'MMeff090HA'; */
  /*                  '24'    'MMeff095HA'. */
  /*  */
  /*  */
  /*  See also: Sreg , MMreg, LXS */
  /*  */
  /*  References: */
  /*  */
  /*    Salini S., Cerioli A., Laurini F. and Riani M. (2014), Reliable Robust
   */
  /*    Regression Diagnostics, "International Statistical Review", Vol. 84, */
  /*    pp. 99-127. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('RobRegrSize')">Link to the help function</a>
   */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /* { */
  /*     % RobRgerSize with all defalut options. */
  /*     % Find the threshold for MM estimator, Tukey biweight rho function with
   */
  /*     % efficiency 0.87 (simultaneous size) */
  /*     n=232; */
  /*     p=10; */
  /*     bdp=''; */
  /*     robest='MM'; */
  /*     eff=0.87; */
  /*     rhofunc='TB'; */
  /*     sizesim=1; */
  /*     thresh=RobRegrSize(n,p,robest,rhofunc,bdp,eff,sizesim); */
  /* } */
  /* { */
  /*     % Additional Example 1. */
  /*     % Find the threshold for MM estimator, take an average threhold for all
   */
  /*     % rho functions, and use efficiency 0.85 (simultaneous size) */
  /*     n=93; */
  /*     p=5; */
  /*     bdp=''; */
  /*     eff=0.85; */
  /*     robest='MM'; */
  /*     rhofunc='ST'; */
  /*     sizesim=1; */
  /*     thresh=RobRegrSize(n,p,robest,rhofunc,bdp,eff,sizesim); */
  /* } */
  /* { */
  /*     % Additional Example 2. */
  /*     % Find the threshold for LTS estimator, use Tallis correction to infer
   */
  /*     % a threshold for bdp equal to 0.27 (simultaneous size) */
  /*     n=72; */
  /*     p=10; */
  /*     bdp=0.27; */
  /*     robest='LTS'; */
  /*     eff=''; */
  /*     rhofunc=''; */
  /*     sizesim=1; */
  /*     Tallis=1; */
  /*     thresh=RobRegrSize(n,p,robest,rhofunc,bdp,eff,sizesim,Tallis); */
  /* } */
  /* { */
  /*     % Additional Example 3. */
  /*     % Find the threshold for S estimator and hyperbolic rho function, */
  /*     % use Tallis correction to infer */
  /*     % a threshold for bdp equal to 0.3 (simultaneous size) */
  /*     n=100; */
  /*     p=5; */
  /*     bdp=0.3; */
  /*     robest='S'; */
  /*     eff=''; */
  /*     rhofunc='HY'; */
  /*     sizesim=1; */
  /*     Tallis=1; */
  /*     thresh=RobRegrSize(n,p,robest,rhofunc,bdp,eff,sizesim,Tallis); */
  /* } */
  /*  Beginning of code */
  if ((n > 500.0) && (p <= 10.0)) {
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 56, m, &u[0]);
    emlrtAssign(&y, m);
    st.site = &mcb_emlrtRSI;
    disp(&st, y, &v_emlrtMCI);
    st.site = &qv_emlrtRSI;
    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 23, m, &varargin_1[0]);
    emlrtAssign(&b_y, m);
    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 37, m, &varargin_2[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &tcb_emlrtRSI;
    l_error(&b_st, b_y, c_y, &d_emlrtMCI);
  }
  /*  Vector which contains the labels for the estimators whose size has to */
  /*  be rescaled */
  r.f1.size[0] = 1;
  r.f1.size[1] = 9;
  r1.f1.size[0] = 1;
  r1.f1.size[1] = 9;
  for (ib_data = 0; ib_data < 9; ib_data++) {
    r.f1.data[ib_data] = b_cv[ib_data];
    r1.f1.data[ib_data] = b_cv1[ib_data];
  }
  r2.f1.size[0] = 1;
  r2.f1.size[1] = 10;
  r3.f1.size[0] = 1;
  r3.f1.size[1] = 10;
  for (ib_data = 0; ib_data < 10; ib_data++) {
    r2.f1.data[ib_data] = b_cv2[ib_data];
    r3.f1.data[ib_data] = b_cv3[ib_data];
  }
  r4.f1.size[0] = 1;
  r4.f1.size[1] = 9;
  r5.f1.size[0] = 1;
  r5.f1.size[1] = 9;
  for (ib_data = 0; ib_data < 9; ib_data++) {
    r4.f1.data[ib_data] = b_cv4[ib_data];
    r5.f1.data[ib_data] = b_cv5[ib_data];
  }
  r6.f1.size[0] = 1;
  r6.f1.size[1] = 10;
  r7.f1.size[0] = 1;
  r7.f1.size[1] = 10;
  r8.f1.size[0] = 1;
  r8.f1.size[1] = 10;
  for (ib_data = 0; ib_data < 10; ib_data++) {
    r6.f1.data[ib_data] = cv6[ib_data];
    r7.f1.data[ib_data] = cv7[ib_data];
    r8.f1.data[ib_data] = cv8[ib_data];
  }
  r9.f1.size[0] = 1;
  r9.f1.size[1] = 9;
  r10.f1.size[0] = 1;
  r10.f1.size[1] = 9;
  for (ib_data = 0; ib_data < 9; ib_data++) {
    r9.f1.data[ib_data] = cv9[ib_data];
    r10.f1.data[ib_data] = cv10[ib_data];
  }
  r11.f1.size[0] = 1;
  r11.f1.size[1] = 10;
  r12.f1.size[0] = 1;
  r12.f1.size[1] = 10;
  r13.f1.size[0] = 1;
  r13.f1.size[1] = 10;
  for (ib_data = 0; ib_data < 10; ib_data++) {
    r11.f1.data[ib_data] = cv11[ib_data];
    r12.f1.data[ib_data] = cv12[ib_data];
    r13.f1.data[ib_data] = cv13[ib_data];
  }
  r14.f1.size[0] = 1;
  r14.f1.size[1] = 9;
  r15.f1.size[0] = 1;
  r15.f1.size[1] = 9;
  for (ib_data = 0; ib_data < 9; ib_data++) {
    r14.f1.data[ib_data] = cv14[ib_data];
    r15.f1.data[ib_data] = cv15[ib_data];
  }
  r16.f1.size[0] = 1;
  r16.f1.size[1] = 10;
  r17.f1.size[0] = 1;
  r17.f1.size[1] = 10;
  r18.f1.size[0] = 1;
  r18.f1.size[1] = 10;
  for (ib_data = 0; ib_data < 10; ib_data++) {
    r16.f1.data[ib_data] = cv16[ib_data];
    r17.f1.data[ib_data] = cv17[ib_data];
    r18.f1.data[ib_data] = cv18[ib_data];
  }
  r19.f1.size[0] = 1;
  r19.f1.size[1] = 9;
  r20.f1.size[0] = 1;
  r20.f1.size[1] = 9;
  for (ib_data = 0; ib_data < 9; ib_data++) {
    r19.f1.data[ib_data] = cv19[ib_data];
    r20.f1.data[ib_data] = cv20[ib_data];
  }
  r21.f1.size[0] = 1;
  r21.f1.size[1] = 10;
  r22.f1.size[0] = 1;
  r22.f1.size[1] = 10;
  r23.f1.size[0] = 1;
  r23.f1.size[1] = 10;
  for (ib_data = 0; ib_data < 10; ib_data++) {
    r21.f1.data[ib_data] = cv21[ib_data];
    r22.f1.data[ib_data] = cv22[ib_data];
    r23.f1.data[ib_data] = cv23[ib_data];
  }
  labest[0] = r;
  labest[1] = r1;
  labest[2] = r2;
  labest[3] = r3;
  labest[4] = r4;
  labest[5] = r5;
  labest[6] = r6;
  labest[7] = r7;
  labest[8] = r8;
  labest[9] = r9;
  labest[10] = r10;
  labest[11] = r11;
  labest[12] = r12;
  labest[13] = r13;
  labest[14] = r14;
  labest[15] = r15;
  labest[16] = r16;
  labest[17] = r17;
  labest[18] = r18;
  labest[19] = r19;
  labest[20] = r20;
  labest[21] = r21;
  labest[22] = r22;
  labest[23] = r23;
  /*  check if the estimator which has been provided in the list */
  /*  Check */
  if (bdp > 0.5) {
    st.site = &pv_emlrtRSI;
    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&st, 25, m, &b_varargin_1[0]);
    emlrtAssign(&d_y, m);
    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&st, 52, m, &b_varargin_2[0]);
    emlrtAssign(&e_y, m);
    b_st.site = &tcb_emlrtRSI;
    l_error(&b_st, d_y, e_y, &d_emlrtMCI);
  }
  if (bdp < 0.375) {
    st.site = &ov_emlrtRSI;
    a = norminv(0.5 * ((1.0 - bdp) + 1.0));
    st.site = &nv_emlrtRSI;
    if (0.36852405098356233 /
            (1.0 - 2.0 * (1.0 / (1.0 - bdp)) * a *
                       (muDoubleScalarExp(-0.5 * a * a) / 2.5066282746310002)) <
        0.0) {
      emlrtErrorWithMessageIdR2018a(
          &st, &xb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
  } else {
    st.site = &mv_emlrtRSI;
    a = norminv(0.5 * ((1.0 - bdp) + 1.0));
    st.site = &lv_emlrtRSI;
    if (0.14265183548851856 /
            (1.0 - 2.0 * (1.0 / (1.0 - bdp)) * a *
                       (muDoubleScalarExp(-0.5 * a * a) / 2.5066282746310002)) <
        0.0) {
      emlrtErrorWithMessageIdR2018a(
          &st, &xb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
  }
  /*  The default is to consider a simultaneous size */
  /*  bdpchk = values of breakdown point for which simulations have been
   * performed */
  /*  effchk = values of efficiency for which simulations have been performed */
  /*  Extract from mat file the information in order to find the proper
   * threshold */
  /*  RAW LTS */
  /*  If breakdown point is the one supplied by the user */
  st.site = &kv_emlrtRSI;
  b_st.site = &gf_emlrtRSI;
  c_st.site = &hf_emlrtRSI;
  c_do_vectors(bdp, (real_T *)&a, c_size, (int32_T *)&posint1, &nb,
               (int32_T *)&ib_data, &ib_size);
  st.site = &kv_emlrtRSI;
  nb = c_size[1];
  posint1 = c_size[1];
  for (ib_data = 0; ib_data < posint1; ib_data++) {
    x_data = (a == bdp);
  }
  f_y = (c_size[1] != 0);
  if (f_y) {
    b_st.site = &sh_emlrtRSI;
    c_st.site = &th_emlrtRSI;
    posint1 = 0;
    exitg1 = false;
    while ((!exitg1) && (posint1 <= nb - 1)) {
      if (!x_data) {
        f_y = false;
        exitg1 = true;
      } else {
        posint1 = 1;
      }
    }
  }
  emxInit_char_T(sp, &namefile1, 2, &du_emlrtRTEI, true);
  if (f_y) {
    emxInit_char_T(sp, &r24, 2, &eu_emlrtRTEI, true);
    /*  namefile1=[robest 'bdp0' num2str(100*bdp) rhofunc]; */
    st.site = &jv_emlrtRSI;
    b_sprintf(&st, 100.0 * bdp, r24);
    ib_data = namefile1->size[0] * namefile1->size[1];
    namefile1->size[0] = 1;
    namefile1->size[1] = r24->size[1] + 7;
    emxEnsureCapacity_char_T(sp, namefile1, ib_data, &cu_emlrtRTEI);
    namefile1->data[0] = 'L';
    namefile1->data[1] = 'T';
    namefile1->data[2] = 'S';
    namefile1->data[3] = 'b';
    namefile1->data[4] = 'd';
    namefile1->data[5] = 'p';
    namefile1->data[6] = '0';
    posint1 = r24->size[1];
    for (ib_data = 0; ib_data < posint1; ib_data++) {
      namefile1->data[ib_data + 7] = r24->data[ib_data];
    }
    emxFree_char_T(&r24);
  } else if (bdp < 0.25) {
    ib_data = namefile1->size[0] * namefile1->size[1];
    namefile1->size[0] = 1;
    namefile1->size[1] = 9;
    emxEnsureCapacity_char_T(sp, namefile1, ib_data, &yt_emlrtRTEI);
    for (ib_data = 0; ib_data < 9; ib_data++) {
      namefile1->data[ib_data] = b_cv1[ib_data];
    }
  } else if (bdp < 0.375) {
    ib_data = namefile1->size[0] * namefile1->size[1];
    namefile1->size[0] = 1;
    namefile1->size[1] = 9;
    emxEnsureCapacity_char_T(sp, namefile1, ib_data, &bu_emlrtRTEI);
    for (ib_data = 0; ib_data < 9; ib_data++) {
      namefile1->data[ib_data] = b_cv1[ib_data];
    }
  } else {
    ib_data = namefile1->size[0] * namefile1->size[1];
    namefile1->size[0] = 1;
    namefile1->size[1] = 9;
    emxEnsureCapacity_char_T(sp, namefile1, ib_data, &au_emlrtRTEI);
    for (ib_data = 0; ib_data < 9; ib_data++) {
      namefile1->data[ib_data] = b_cv[ib_data];
    }
  }
  /*  Simulations have been performed for the values of n and p given in */
  /*  vectors nn and pp */
  /*  rows are referred to sample size */
  /*  columns are referred to number of variables */
  /*  third dimension = estimator */
  /*  Select the slices of third dimenson of mat file which have to be used */
  posint1 = 0;
  nb = namefile1->size[1];
  for (ib_size = 0; ib_size < 24; ib_size++) {
    st.site = &iv_emlrtRSI;
    b_st.site = &rv_emlrtRSI;
    c_st.site = &sv_emlrtRSI;
    x_data = false;
    if (labest[ib_size].f1.size[1] == namefile1->size[1]) {
      d_st.site = &tv_emlrtRSI;
      if (nb > 2147483646) {
        e_st.site = &pf_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }
      ib_data = 0;
      do {
        exitg2 = 0;
        if (ib_data <= nb - 1) {
          if (labest[ib_size].f1.data[ib_data] != namefile1->data[ib_data]) {
            exitg2 = 1;
          } else {
            ib_data++;
          }
        } else {
          x_data = true;
          exitg2 = 1;
        }
      } while (exitg2 == 0);
    }
    if (x_data) {
      posint1 = ib_size + 1;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_char_T(&namefile1);
  if (posint1 < 1) {
    emlrtDynamicBoundsCheckR2012b(0, 1, 24, &io_emlrtBCI, (emlrtCTX)sp);
  }
  emlrtDynamicBoundsCheckR2012b(0, 1, 24, &io_emlrtBCI, (emlrtCTX)sp);
}

/* End of code generation (RobRegrSize.c) */
