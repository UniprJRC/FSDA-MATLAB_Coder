/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_FSRfan_wrapper_api.c
 *
 * Code generation for function '_coder_FSRfan_wrapper_api'
 *
 */

/* Include files */
#include "_coder_FSRfan_wrapper_api.h"
#include "FSRfan_wrapper.h"
#include "FSRfan_wrapper_data.h"
#include "FSRfan_wrapper_emxutil.h"
#include "FSRfan_wrapper_mexutil.h"
#include "FSRfan_wrapper_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo al_emlrtRTEI = {
    1,                           /* lineNo */
    1,                           /* colNo */
    "_coder_FSRfan_wrapper_api", /* fName */
    ""                           /* pName */
};

/* Function Declarations */
static boolean_T ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                     const emlrtMsgIdentifier *msgId);

static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_char_T *ret);

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *y,
                               const char_T *identifier, emxArray_real_T *b_y);

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static const mxArray *l_emlrt_marshallOut(const struct_FSRfan_T *u);

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *X,
                               const char_T *identifier, emxArray_real_T *y);

static const mxArray *m_emlrt_marshallOut(const emxArray_real_T *u);

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static boolean_T o_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *intercept,
                                    const char_T *identifier);

static boolean_T p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *family,
                               const char_T *identifier, emxArray_char_T *y);

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_char_T *y);

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

/* Function Definitions */
static boolean_T ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                     const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  boolean_T ret;
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"logical",
                          false, 0U, (void *)&dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_char_T *ret)
{
  static const int32_T dims[2] = {1, -1};
  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = {true, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"char",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_char_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b((emlrtCTX)sp, src, &ret->data[0], 1, false);
  emlrtDestroyArray(&src);
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *y,
                               const char_T *identifier, emxArray_real_T *b_y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  l_emlrt_marshallIn(sp, emlrtAlias(y), &thisId, b_y);
  emlrtDestroyArray(&y);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  x_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *l_emlrt_marshallOut(const struct_FSRfan_T *u)
{
  static const char_T *sv[9] = {"Score", "la",     "bs",     "Un",    "y",
                                "X",     "Scorep", "Scoren", "Scoreb"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T c_i;
  int32_T i;
  int32_T i1;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 9, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Score",
                      m_emlrt_marshallOut(u->Score), 0);
  b_y = NULL;
  iv[0] = u->la->size[0];
  iv[1] = 1;
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->la->size[0]; b_i++) {
    pData[i] = u->la->data[b_i];
    i++;
  }
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"la", b_y, 1);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"bs", m_emlrt_marshallOut(u->bs),
                      2);
  c_y = NULL;
  emlrtAssign(&c_y, emlrtCreateCellArrayR2014a(1, &u->Un->size[0]));
  if (0 < u->Un->size[0]) {
    iv[1] = 11;
  }
  for (i = 0; i < u->Un->size[0]; i++) {
    d_y = NULL;
    iv[0] = u->Un->data[i].f1->size[0];
    m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
    pData = emlrtMxGetPr(m);
    i1 = 0;
    for (b_i = 0; b_i < 11; b_i++) {
      for (c_i = 0; c_i < u->Un->data[i].f1->size[0]; c_i++) {
        pData[i1] =
            u->Un->data[i].f1->data[c_i + u->Un->data[i].f1->size[0] * b_i];
        i1++;
      }
    }
    emlrtAssign(&d_y, m);
    emlrtSetCell(c_y, i, d_y);
  }
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Un", c_y, 3);
  e_y = NULL;
  m = emlrtCreateNumericArray(1, &u->y->size[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->y->size[0]; b_i++) {
    pData[i] = u->y->data[b_i];
    i++;
  }
  emlrtAssign(&e_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"y", e_y, 4);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"X", m_emlrt_marshallOut(u->X), 5);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Scorep",
                      m_emlrt_marshallOut(u->Scorep), 6);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Scoren",
                      m_emlrt_marshallOut(u->Scoren), 7);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Scoreb",
                      m_emlrt_marshallOut(u->Scoreb), 8);
  return y;
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *X,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  n_emlrt_marshallIn(sp, emlrtAlias(X), &thisId, y);
  emlrtDestroyArray(&X);
}

static const mxArray *m_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T c_i;
  int32_T i;
  y = NULL;
  iv[0] = u->size[0];
  iv[1] = u->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->size[1]; b_i++) {
    for (c_i = 0; c_i < u->size[0]; c_i++) {
      pData[i] = u->data[c_i + u->size[0] * b_i];
      i++;
    }
  }
  emlrtAssign(&y, m);
  return y;
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  y_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static boolean_T o_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *intercept,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  boolean_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = p_emlrt_marshallIn(sp, emlrtAlias(intercept), &thisId);
  emlrtDestroyArray(&intercept);
  return y;
}

static boolean_T p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = ab_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *family,
                               const char_T *identifier, emxArray_char_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  r_emlrt_marshallIn(sp, emlrtAlias(family), &thisId, y);
  emlrtDestroyArray(&family);
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_char_T *y)
{
  bb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret)
{
  static const int32_T dims = -1;
  int32_T i;
  int32_T i1;
  const boolean_T b = true;
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 1U, (void *)&dims, &b, &i);
  ret->allocatedSize = i;
  i1 = ret->size[0];
  ret->size[0] = i;
  emxEnsureCapacity_real_T(sp, ret, i1, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret)
{
  static const int32_T dims[2] = {-1, -1};
  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = {true, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  ret->allocatedSize = iv[0] * iv[1];
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

void FSRfan_wrapper_api(const mxArray *const prhs[11], const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_char_T *family;
  emxArray_real_T *X;
  emxArray_real_T *la;
  emxArray_real_T *lms;
  emxArray_real_T *y;
  struct_FSRfan_T out;
  real_T h;
  real_T init;
  real_T nsamp;
  boolean_T intercept;
  boolean_T msg;
  boolean_T nocheck;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &y, 1, &al_emlrtRTEI, true);
  emxInit_real_T(&st, &X, 2, &al_emlrtRTEI, true);
  emxInit_real_T(&st, &la, 1, &al_emlrtRTEI, true);
  emxInit_real_T(&st, &lms, 2, &al_emlrtRTEI, true);
  emxInit_char_T(&st, &family, 2, &al_emlrtRTEI, true);
  emxInitStruct_struct_FSRfan_T(&st, &out, &al_emlrtRTEI, true);
  /* Marshall function inputs */
  y->canFreeData = false;
  k_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "y", y);
  X->canFreeData = false;
  m_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "X", X);
  intercept = o_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "intercept");
  nocheck = o_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "nocheck");
  la->canFreeData = false;
  k_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "la", la);
  h = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "h");
  nsamp = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "nsamp");
  lms->canFreeData = false;
  m_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "lms", lms);
  init = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "init");
  q_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "family", family);
  msg = o_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "msg");
  /* Invoke the target function */
  FSRfan_wrapper(&st, y, X, intercept, nocheck, la, h, nsamp, lms, init, family,
                 msg, &out);
  /* Marshall function outputs */
  *plhs = l_emlrt_marshallOut(&out);
  emxFreeStruct_struct_FSRfan_T(&out);
  emxFree_char_T(&family);
  emxFree_real_T(&lms);
  emxFree_real_T(&la);
  emxFree_real_T(&X);
  emxFree_real_T(&y);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_FSRfan_wrapper_api.c) */
