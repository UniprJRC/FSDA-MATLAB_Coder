/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sprintf.c
 *
 * Code generation for function 'sprintf'
 *
 */

/* Include files */
#include "sprintf.h"
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_mexutil.h"
#include "LTSts_wrapper_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo tf_emlrtRSI = {
    28,        /* lineNo */
    "sprintf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\strfun\\sprintf.m" /* pathName
                                                                           */
};

static emlrtMCInfo e_emlrtMCI = {
    52,              /* lineNo */
    14,              /* colNo */
    "nonConstPrint", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\strfun\\sprintf.m" /* pName
                                                                           */
};

static emlrtMCInfo f_emlrtMCI = {
    54,              /* lineNo */
    15,              /* colNo */
    "nonConstPrint", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\strfun\\sprintf.m" /* pName
                                                                           */
};

static emlrtDCInfo gd_emlrtDCI = {
    56,              /* lineNo */
    53,              /* colNo */
    "nonConstPrint", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\strfun\\sprintf.m", /* pName
                                                                            */
    4 /* checkKind */
};

static emlrtRSInfo veb_emlrtRSI = {
    52,              /* lineNo */
    "nonConstPrint", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\strfun\\sprintf.m" /* pathName
                                                                           */
};

static emlrtRSInfo web_emlrtRSI = {
    54,              /* lineNo */
    "nonConstPrint", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\strfun\\sprintf.m" /* pathName
                                                                           */
};

static emlrtRSInfo yeb_emlrtRSI = {
    57,              /* lineNo */
    "nonConstPrint", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\strfun\\sprintf.m" /* pathName
                                                                           */
};

/* Function Declarations */
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *tmpStr,
                               const char_T *identifier, emxArray_char_T *y);

static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_char_T *ret);

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_char_T *y);

static const mxArray *length(const emlrtStack *sp, const mxArray *b,
                             emlrtMCInfo *location);

/* Function Definitions */
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *tmpStr,
                               const char_T *identifier, emxArray_char_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(tmpStr), &thisId, y);
  emlrtDestroyArray(&tmpStr);
}

static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_char_T *ret)
{
  static const int32_T dims[2] = {1, -1};
  int32_T iv[2];
  int32_T i;
  const boolean_T b_bv[2] = {false, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"char",
                            false, 2U, (void *)&dims[0], &b_bv[0], &iv[0]);
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_char_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b((emlrtCTX)sp, src, &ret->data[0], 1, false);
  emlrtDestroyArray(&src);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_char_T *y)
{
  cb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *length(const emlrtStack *sp, const mxArray *b,
                             emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = b;
  return emlrtCallMATLABR2012b((emlrtCTX)sp, 1, &m, 1, &pArray,
                               (const char_T *)"length", true, location);
}

void b_sprintf(const emlrtStack *sp, real_T varargin_1, emxArray_char_T *str)
{
  static const int32_T iv[2] = {1, 7};
  static const int32_T iv1[2] = {1, 4};
  static const char_T u[7] = {'s', 'p', 'r', 'i', 'n', 't', 'f'};
  static const char_T formatSpec[4] = {'%', '.', '0', 'f'};
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *tmpStr;
  const mxArray *y;
  real_T strSize;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &tf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  tmpStr = NULL;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(&st, 7, m, &u[0]);
  emlrtAssign(&y, m);
  b_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(&st, 4, m, &formatSpec[0]);
  emlrtAssign(&b_y, m);
  c_y = NULL;
  m = emlrtCreateDoubleScalar(varargin_1);
  emlrtAssign(&c_y, m);
  b_st.site = &veb_emlrtRSI;
  emlrtAssign(&tmpStr, feval(&b_st, y, b_y, c_y, &e_emlrtMCI));
  b_st.site = &web_emlrtRSI;
  strSize =
      emlrt_marshallIn(&b_st, length(&b_st, emlrtAlias(tmpStr), &f_emlrtMCI),
                       "<output of length>");
  if (!(strSize >= 0.0)) {
    emlrtNonNegativeCheckR2012b(strSize, &gd_emlrtDCI, &st);
  }
  b_st.site = &yeb_emlrtRSI;
  c_emlrt_marshallIn(&b_st, emlrtAlias(tmpStr), "tmpStr", str);
  emlrtDestroyArray(&tmpStr);
}

/* End of code generation (sprintf.c) */
