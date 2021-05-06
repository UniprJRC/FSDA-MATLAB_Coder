/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_addt_wrapper_api.c
 *
 * Code generation for function '_coder_addt_wrapper_api'
 *
 */

/* Include files */
#include "_coder_addt_wrapper_api.h"
#include "addt_wrapper.h"
#include "addt_wrapper_data.h"
#include "addt_wrapper_emxutil.h"
#include "addt_wrapper_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo ad_emlrtRTEI = {
    1,                         /* lineNo */
    1,                         /* colNo */
    "_coder_addt_wrapper_api", /* fName */
    ""                         /* pName */
};

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(const real_T u_data[],
                                          const int32_T u_size);

static const mxArray *c_emlrt_marshallOut(const real_T u_data[],
                                          const int32_T u_size[2]);

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *y,
                               const char_T *identifier, emxArray_real_T *b_y);

static const mxArray *emlrt_marshallOut(const struct_addt_T u);

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *X,
                               const char_T *identifier, emxArray_real_T *y);

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static boolean_T i_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *intercept,
                                    const char_T *identifier);

static boolean_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *la,
                               const char_T *identifier, real_T **y_data,
                               int32_T y_size[2]);

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T **y_data, int32_T y_size[2]);

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static boolean_T q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId);

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T **ret_data, int32_T ret_size[2]);

/* Function Definitions */
static const mxArray *b_emlrt_marshallOut(const real_T u_data[],
                                          const int32_T u_size)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_i;
  int32_T i;
  y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&u_size, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  b_i = 0;
  while (b_i < u_size) {
    pData[i] = u_data[0];
    i++;
    b_i = 1;
  }
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *c_emlrt_marshallOut(const real_T u_data[],
                                          const int32_T u_size[2])
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T i;
  y = NULL;
  iv[0] = u_size[0];
  iv[1] = u_size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  b_i = 0;
  while (b_i < u_size[1]) {
    b_i = 0;
    while (b_i < u_size[0]) {
      pData[i] = u_data[0];
      i++;
      b_i = 1;
    }
    b_i = 1;
  }
  emlrtAssign(&y, m);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *y,
                               const char_T *identifier, emxArray_real_T *b_y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(y), &thisId, b_y);
  emlrtDestroyArray(&y);
}

static const mxArray *emlrt_marshallOut(const struct_addt_T u)
{
  static const char_T *sv[4] = {"b", "S2add", "Tadd", "pval"};
  const mxArray *y;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 4, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, (const char_T *)"b",
                      b_emlrt_marshallOut(u.b.data, u.b.size[0]), 0);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"S2add",
                      b_emlrt_marshallOut(u.S2add.data, u.S2add.size[0]), 1);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Tadd",
                      c_emlrt_marshallOut(u.Tadd.data, u.Tadd.size), 2);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"pval",
                      c_emlrt_marshallOut(u.pval.data, u.pval.size), 3);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  o_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *X,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(X), &thisId, y);
  emlrtDestroyArray(&X);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  p_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static boolean_T i_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *intercept,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  boolean_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = j_emlrt_marshallIn(sp, emlrtAlias(intercept), &thisId);
  emlrtDestroyArray(&intercept);
  return y;
}

static boolean_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = q_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *la,
                               const char_T *identifier, real_T **y_data,
                               int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  l_emlrt_marshallIn(sp, emlrtAlias(la), &thisId, y_data, y_size);
  emlrtDestroyArray(&la);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T **y_data, int32_T y_size[2])
{
  r_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static boolean_T q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T **ret_data, int32_T ret_size[2])
{
  static const int32_T dims[2] = {1, 1};
  int32_T iv[2];
  const boolean_T bv[2] = {true, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  ret_size[0] = iv[0];
  ret_size[1] = iv[1];
  *ret_data = (real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
}

void addt_wrapper_api(const mxArray *const prhs[6], const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *X;
  emxArray_real_T *w;
  emxArray_real_T *y;
  struct_addt_T out;
  real_T *la_data;
  int32_T la_size[2];
  boolean_T intercept;
  boolean_T nocheck;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &y, 1, &ad_emlrtRTEI, true);
  emxInit_real_T(&st, &X, 2, &ad_emlrtRTEI, true);
  emxInit_real_T(&st, &w, 1, &ad_emlrtRTEI, true);
  /* Marshall function inputs */
  y->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "y", y);
  X->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "X", X);
  w->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "w", w);
  intercept = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "intercept");
  k_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "la", (real_T **)&la_data,
                     la_size);
  nocheck = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "nocheck");
  /* Invoke the target function */
  addt_wrapper(&st, y, X, w, intercept, (real_T *)la_data, la_size, nocheck,
               &out);
  /* Marshall function outputs */
  *plhs = emlrt_marshallOut(out);
  emxFree_real_T(&w);
  emxFree_real_T(&X);
  emxFree_real_T(&y);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_addt_wrapper_api.c) */
