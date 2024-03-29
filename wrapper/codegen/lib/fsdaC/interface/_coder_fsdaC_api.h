/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_fsdaC_api.h
 *
 * Code generation for function 'FSM_wrapper'
 *
 */

#ifndef _CODER_FSDAC_API_H
#define _CODER_FSDAC_API_H

/* Include files */
#include "emlrt.h"
#include "tmwtypes.h"
#include <string.h>

/* Type Definitions */
#ifndef typedef_struct_LTStslshiftlocref_T
#define typedef_struct_LTStslshiftlocref_T
typedef struct {
  real_T wlength;
  real_T typeres;
  real_T huberc;
} struct_LTStslshiftlocref_T;
#endif /* typedef_struct_LTStslshiftlocref_T */

#ifndef typedef_struct_LXSlms_T
#define typedef_struct_LXSlms_T
typedef struct {
  real_T bestr;
  real_T refsteps;
  real_T refstepsbestr;
  real_T reftol;
  real_T reftolbestr;
} struct_LXSlms_T;
#endif /* typedef_struct_LXSlms_T */

#ifndef typedef_c_matlab_internal_coder_tabular
#define typedef_c_matlab_internal_coder_tabular
typedef struct {
  real_T length;
} c_matlab_internal_coder_tabular;
#endif /* typedef_c_matlab_internal_coder_tabular */

#ifndef typedef_d_matlab_internal_coder_tabular
#define typedef_d_matlab_internal_coder_tabular
typedef struct {
  real_T length;
} d_matlab_internal_coder_tabular;
#endif /* typedef_d_matlab_internal_coder_tabular */

#ifndef enum_e_matlab_internal_coder_tabular
#define enum_e_matlab_internal_coder_tabular
enum e_matlab_internal_coder_tabular
{
  unset = 0, /* Default value */
  continuous,
  step,
  event
};
#endif /* enum_e_matlab_internal_coder_tabular */
#ifndef typedef_e_matlab_internal_coder_tabular
#define typedef_e_matlab_internal_coder_tabular
typedef enum e_matlab_internal_coder_tabular e_matlab_internal_coder_tabular;
#endif /* typedef_e_matlab_internal_coder_tabular */

#ifndef typedef_struct_tclustrestrfactor_T
#define typedef_struct_tclustrestrfactor_T
typedef struct {
  char_T pars[3];
  real_T cdet;
  real_T shw;
  real_T shb;
  real_T k;
  real_T maxiterDSR;
  real_T maxiterR;
  real_T maxiterS;
  boolean_T msg;
  real_T tolR;
  real_T tolS;
  boolean_T usepreviousest;
  real_T userepmat;
  real_T sortsh;
  real_T v;
  real_T zerotol;
} struct_tclustrestrfactor_T;
#endif /* typedef_struct_tclustrestrfactor_T */

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T {
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_real_T */
#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T
typedef struct emxArray_real_T emxArray_real_T;
#endif /* typedef_emxArray_real_T */

#ifndef struct_emxArray_real_T_1x1
#define struct_emxArray_real_T_1x1
struct emxArray_real_T_1x1 {
  real_T data[1];
  int32_T size[2];
};
#endif /* struct_emxArray_real_T_1x1 */
#ifndef typedef_emxArray_real_T_1x1
#define typedef_emxArray_real_T_1x1
typedef struct emxArray_real_T_1x1 emxArray_real_T_1x1;
#endif /* typedef_emxArray_real_T_1x1 */

#ifndef struct_emxArray_char_T
#define struct_emxArray_char_T
struct emxArray_char_T {
  char_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_char_T */
#ifndef typedef_emxArray_char_T
#define typedef_emxArray_char_T
typedef struct emxArray_char_T emxArray_char_T;
#endif /* typedef_emxArray_char_T */

#ifndef struct_emxArray_char_T_1x3
#define struct_emxArray_char_T_1x3
struct emxArray_char_T_1x3 {
  char_T data[3];
  int32_T size[2];
};
#endif /* struct_emxArray_char_T_1x3 */
#ifndef typedef_emxArray_char_T_1x3
#define typedef_emxArray_char_T_1x3
typedef struct emxArray_char_T_1x3 emxArray_char_T_1x3;
#endif /* typedef_emxArray_char_T_1x3 */

#ifndef typedef_struct_FSM_T
#define typedef_struct_FSM_T
typedef struct {
  emxArray_real_T *outliers;
  emxArray_real_T *loc;
  emxArray_real_T *cov;
  emxArray_real_T *md;
  emxArray_real_T *mmd;
  emxArray_real_T *Un;
  emxArray_real_T *nout;
  emxArray_char_T_1x3 class;
} struct_FSM_T;
#endif /* typedef_struct_FSM_T */

#ifndef typedef_struct_FSR_T
#define typedef_struct_FSR_T
typedef struct {
  emxArray_real_T *ListOut;
  emxArray_real_T *outliers;
  emxArray_real_T *mdr;
  emxArray_real_T *Un;
  emxArray_real_T *nout;
  emxArray_real_T *beta;
  real_T scale;
  emxArray_real_T *mdag;
  emxArray_real_T *ListCl;
  emxArray_real_T *VIOMout;
  emxArray_real_T *fittedvalues;
  emxArray_real_T *residuals;
  char_T class[3];
} struct_FSR_T;
#endif /* typedef_struct_FSR_T */

#ifndef typedef_struct_FSRlms_T
#define typedef_struct_FSRlms_T
typedef struct {
  emxArray_real_T *bsb;
} struct_FSRlms_T;
#endif /* typedef_struct_FSRlms_T */

#ifndef typedef_cell_wrap_43
#define typedef_cell_wrap_43
typedef struct {
  emxArray_real_T *f1;
} cell_wrap_43;
#endif /* typedef_cell_wrap_43 */

#ifndef typedef_emxArray_cell_wrap_43
#define typedef_emxArray_cell_wrap_43
typedef struct {
  cell_wrap_43 *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
} emxArray_cell_wrap_43;
#endif /* typedef_emxArray_cell_wrap_43 */

#ifndef typedef_struct_FSRfan_T
#define typedef_struct_FSRfan_T
typedef struct {
  emxArray_real_T *Score;
  emxArray_real_T *la;
  emxArray_real_T *bs;
  emxArray_cell_wrap_43 *Un;
  emxArray_real_T *y;
  emxArray_real_T *X;
  emxArray_real_T *Scorep;
  emxArray_real_T *Scoren;
  emxArray_real_T *Scoreb;
} struct_FSRfan_T;
#endif /* typedef_struct_FSRfan_T */

#ifndef typedef_struct_LTStsmodel_T
#define typedef_struct_LTStsmodel_T
typedef struct {
  emxArray_real_T *lshift;
  real_T s;
  real_T trend;
  real_T seasonal;
  emxArray_real_T *ARp;
  emxArray_real_T *X;
} struct_LTStsmodel_T;
#endif /* typedef_struct_LTStsmodel_T */

#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T
struct emxArray_boolean_T {
  boolean_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_boolean_T */
#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T
typedef struct emxArray_boolean_T emxArray_boolean_T;
#endif /* typedef_emxArray_boolean_T */

#ifndef typedef_cell_wrap_56
#define typedef_cell_wrap_56
typedef struct {
  emxArray_char_T *f1;
} cell_wrap_56;
#endif /* typedef_cell_wrap_56 */

#ifndef typedef_cell_wrap_6
#define typedef_cell_wrap_6
typedef struct {
  emxArray_real_T *f1;
} cell_wrap_6;
#endif /* typedef_cell_wrap_6 */

#ifndef typedef_struct_LXS_T
#define typedef_struct_LXS_T
typedef struct {
  emxArray_boolean_T *weights;
  boolean_T rew;
  emxArray_real_T *beta;
  real_T scale;
  emxArray_real_T *residuals;
  emxArray_real_T *bs;
  emxArray_real_T *outliers;
  real_T conflev;
  real_T h;
  real_T singsub;
  emxArray_real_T *X;
  emxArray_real_T *y;
  char_T class[3];
} struct_LXS_T;
#endif /* typedef_struct_LXS_T */

#ifndef typedef_struct1_T
#define typedef_struct1_T
typedef struct {
  emxArray_real_T *beta;
  real_T scale;
} struct1_T;
#endif /* typedef_struct1_T */

#ifndef typedef_struct_MMreg_T
#define typedef_struct_MMreg_T
typedef struct {
  emxArray_real_T *beta;
  real_T auxscale;
  emxArray_real_T *fittedvalues;
  emxArray_real_T *residuals;
  emxArray_real_T *Sbeta;
  real_T Ssingsub;
  emxArray_real_T *weights;
  emxArray_real_T *outliers;
  real_T conflev;
  char_T class[5];
  emxArray_char_T *rhofuncS;
  emxArray_real_T *rhofuncparamS;
  emxArray_char_T *rhofunc;
  emxArray_real_T *rhofuncparam;
  emxArray_real_T *X;
  emxArray_real_T *y;
} struct_MMreg_T;
#endif /* typedef_struct_MMreg_T */

#ifndef typedef_struct_MMregeda_T
#define typedef_struct_MMregeda_T
typedef struct {
  emxArray_real_T *Beta;
  emxArray_real_T *RES;
  emxArray_real_T *Weights;
  emxArray_boolean_T *Outliers;
  emxArray_real_T *Sbeta;
  real_T auxscale;
  real_T Ssingsub;
  real_T conflev;
  char_T class[8];
  emxArray_char_T *rhofunc;
  emxArray_real_T *rhofuncparam;
  emxArray_real_T *eff;
  emxArray_real_T *X;
  emxArray_real_T *y;
} struct_MMregeda_T;
#endif /* typedef_struct_MMregeda_T */

#ifndef typedef_struct_Sreg_T
#define typedef_struct_Sreg_T
typedef struct {
  emxArray_real_T *beta;
  real_T scale;
  emxArray_real_T *bs;
  emxArray_real_T *weights;
  emxArray_real_T *fittedvalues;
  emxArray_real_T *residuals;
  real_T singsub;
  real_T conflev;
  emxArray_real_T *outliers;
  emxArray_char_T *rhofunc;
  emxArray_real_T *rhofuncparam;
  emxArray_real_T *X;
  emxArray_real_T *y;
  char_T class[4];
} struct_Sreg_T;
#endif /* typedef_struct_Sreg_T */

#ifndef typedef_struct_Sregeda_T
#define typedef_struct_Sregeda_T
typedef struct {
  real_T conflev;
  emxArray_real_T *Beta;
  emxArray_real_T *Scale;
  emxArray_real_T *BS;
  emxArray_real_T *Weights;
  emxArray_real_T *RES;
  emxArray_real_T *Singsub;
  emxArray_boolean_T *Outliers;
  emxArray_real_T *bdp;
  char_T class[7];
  emxArray_char_T *rhofunc;
  emxArray_real_T *rhofuncparam;
  emxArray_real_T *X;
  emxArray_real_T *y;
} struct_Sregeda_T;
#endif /* typedef_struct_Sregeda_T */

#ifndef struct_emxArray_real_T_1
#define struct_emxArray_real_T_1
struct emxArray_real_T_1 {
  real_T data[1];
  int32_T size[1];
};
#endif /* struct_emxArray_real_T_1 */
#ifndef typedef_emxArray_real_T_1
#define typedef_emxArray_real_T_1
typedef struct emxArray_real_T_1 emxArray_real_T_1;
#endif /* typedef_emxArray_real_T_1 */

#ifndef typedef_struct_addt_T
#define typedef_struct_addt_T
typedef struct {
  emxArray_real_T_1 b;
  emxArray_real_T_1 S2add;
  emxArray_real_T_1x1 Tadd;
  emxArray_real_T_1x1 pval;
} struct_addt_T;
#endif /* typedef_struct_addt_T */

#ifndef typedef_struct_tclust_T
#define typedef_struct_tclust_T
typedef struct {
  emxArray_real_T *muopt;
  emxArray_real_T *sigmaopt;
  emxArray_real_T *idx;
  emxArray_real_T *postprob;
  emxArray_real_T_1x1 MIXMIX;
  emxArray_real_T_1x1 MIXCLA;
  real_T NlogL;
  emxArray_real_T_1x1 CLACLA;
  real_T notconver;
  emxArray_real_T *bs;
  real_T obj;
  boolean_T equalweights;
  real_T h;
  emxArray_real_T *fullsol;
  emxArray_real_T *Y;
} struct_tclust_T;
#endif /* typedef_struct_tclust_T */

#ifndef struct_emxArray_char_T_1x0
#define struct_emxArray_char_T_1x0
struct emxArray_char_T_1x0 {
  int32_T size[2];
};
#endif /* struct_emxArray_char_T_1x0 */
#ifndef typedef_emxArray_char_T_1x0
#define typedef_emxArray_char_T_1x0
typedef struct emxArray_char_T_1x0 emxArray_char_T_1x0;
#endif /* typedef_emxArray_char_T_1x0 */

#ifndef typedef_struct0_T
#define typedef_struct0_T
typedef struct {
  emxArray_char_T_1x0 Description;
} struct0_T;
#endif /* typedef_struct0_T */

#ifndef typedef_f_matlab_internal_coder_tabular
#define typedef_f_matlab_internal_coder_tabular
typedef struct {
  real_T length;
  cell_wrap_56 descrs[4];
  cell_wrap_56 units[4];
  e_matlab_internal_coder_tabular continuity[4];
  boolean_T hasDescrs;
  boolean_T hasUnits;
  boolean_T hasContinuity;
  boolean_T hasCustomProps;
} f_matlab_internal_coder_tabular;
#endif /* typedef_f_matlab_internal_coder_tabular */

#ifndef typedef_table
#define typedef_table
typedef struct {
  c_matlab_internal_coder_tabular metaDim;
  d_matlab_internal_coder_tabular rowDim;
  f_matlab_internal_coder_tabular varDim;
  cell_wrap_6 data[4];
  struct0_T arrayProps;
} table;
#endif /* typedef_table */

#ifndef typedef_struct_LTSts_T
#define typedef_struct_LTSts_T
typedef struct {
  emxArray_real_T *RES;
  emxArray_real_T *Hsubset;
  emxArray_real_T *B;
  emxArray_real_T_1x1 posLS;
  emxArray_real_T *yhat;
  emxArray_real_T *outliers;
  emxArray_real_T *outliersPval;
  real_T scale;
  emxArray_real_T *numscale2;
  emxArray_real_T *BestIndexes;
  emxArray_real_T *residuals;
  emxArray_real_T *bs;
  real_T conflev;
  real_T h;
  emxArray_boolean_T *weights;
  real_T singsub;
  char_T class[5];
  emxArray_real_T *Likloc;
  emxArray_real_T *y;
  emxArray_real_T *X;
  emxArray_real_T *invXX;
  table Btable;
  emxArray_real_T_1x1 LastHarmonicPval;
  emxArray_real_T_1x1 LevelShiftPval;
} struct_LTSts_T;
#endif /* typedef_struct_LTSts_T */

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void FSM_wrapper(emxArray_real_T *Y, real_T bonflev_data[],
                 int32_T bonflev_size[2], emxArray_char_T *crit, real_T init,
                 emxArray_real_T *m0, boolean_T msg, boolean_T nocheck,
                 real_T rf, struct_FSM_T *out);

void FSM_wrapper_api(const mxArray *const prhs[8], const mxArray **plhs);

void FSMbsb_wrapper(emxArray_real_T *Y, emxArray_real_T *bsb,
                    emxArray_real_T *bsbsteps, real_T init, boolean_T msg,
                    boolean_T nocheck, emxArray_real_T *Un,
                    emxArray_real_T *BB);

void FSMbsb_wrapper_api(const mxArray *const prhs[6], int32_T nlhs,
                        const mxArray *plhs[2]);

void FSMenvmmd_wrapper(real_T n, real_T v, real_T init, emxArray_real_T *prob,
                       boolean_T scaled, emxArray_real_T *MMDenv);

void FSMenvmmd_wrapper_api(const mxArray *const prhs[5], const mxArray **plhs);

void FSMmmd_wrapper(emxArray_real_T *Y, emxArray_real_T *bsb,
                    emxArray_real_T *bsbsteps, real_T init, boolean_T msg,
                    boolean_T nocheck, emxArray_real_T *mmd,
                    emxArray_real_T *Un, emxArray_real_T *BB);

void FSMmmd_wrapper_api(const mxArray *const prhs[6], int32_T nlhs,
                        const mxArray *plhs[3]);

void FSR_wrapper(emxArray_real_T *y, emxArray_real_T *X, boolean_T bsbmfullrank,
                 real_T bonflev_data[], int32_T bonflev_size[2], real_T h,
                 real_T init, boolean_T intercept, real_T lms, boolean_T msg,
                 boolean_T nocheck, real_T nsamp, real_T threshoutX_data[],
                 int32_T threshoutX_size[2], boolean_T weak, struct_FSR_T *out);

void FSR_wrapper1(emxArray_real_T *y, emxArray_real_T *X,
                  boolean_T bsbmfullrank, real_T bonflev_data[],
                  int32_T bonflev_size[2], real_T h, real_T init,
                  boolean_T intercept, struct_FSRlms_T *lms, boolean_T msg,
                  boolean_T nocheck, real_T nsamp, real_T threshoutX_data[],
                  int32_T threshoutX_size[2], boolean_T weak,
                  struct_FSR_T *out);

void FSR_wrapper1_api(const mxArray *const prhs[13], const mxArray **plhs);

void FSR_wrapper_api(const mxArray *const prhs[13], const mxArray **plhs);

void FSRbsb_wrapper(emxArray_real_T *y, emxArray_real_T *X,
                    emxArray_real_T *bsb, emxArray_real_T *bsbsteps,
                    real_T init, boolean_T intercept, boolean_T msg,
                    boolean_T nocheck, emxArray_real_T *Un,
                    emxArray_real_T *BB);

void FSRbsb_wrapper_api(const mxArray *const prhs[8], int32_T nlhs,
                        const mxArray *plhs[2]);

void FSRenvmdr_wrapper(real_T n, real_T p, real_T init, emxArray_real_T *prob,
                       emxArray_real_T *MDRenv);

void FSRenvmdr_wrapper_api(const mxArray *const prhs[4], const mxArray **plhs);

void FSRfan_wrapper(emxArray_real_T *y, emxArray_real_T *X, boolean_T intercept,
                    boolean_T nocheck, emxArray_real_T *la, real_T h,
                    real_T nsamp, emxArray_real_T *lms, real_T init,
                    emxArray_char_T *family, boolean_T msg,
                    struct_FSRfan_T *out);

void FSRfan_wrapper_api(const mxArray *const prhs[11], const mxArray **plhs);

void FSRmdr_wrapper(emxArray_real_T *y, emxArray_real_T *X,
                    emxArray_real_T *bsb, boolean_T bsbmfullrank,
                    emxArray_real_T *bsbsteps, emxArray_real_T *constr,
                    real_T init, boolean_T intercept,
                    boolean_T internationaltrade, boolean_T msg,
                    boolean_T nocheck, real_T threshlevoutX_data[],
                    int32_T threshlevoutX_size[2], emxArray_real_T *mdr,
                    emxArray_real_T *Un, emxArray_real_T *BB,
                    emxArray_real_T *Bols, emxArray_real_T *S2);

void FSRmdr_wrapper_api(const mxArray *const prhs[12], int32_T nlhs,
                        const mxArray *plhs[5]);

void LTSts_wrapper(emxArray_real_T *y, real_T conflev, boolean_T dispresults,
                   real_T h, boolean_T intercept,
                   struct_LTStslshiftlocref_T *lshiftlocref,
                   struct_LXSlms_T *lts, struct_LTStsmodel_T *model,
                   boolean_T msg, real_T nbestindexes, boolean_T nocheck,
                   real_T nsamp_data[], int32_T nsamp_size[2],
                   real_T refstepsALS, real_T reftolALS, real_T SmallSampleCor,
                   boolean_T yxsave, struct_LTSts_T *out, real_T *C);

void LTSts_wrapper_api(const mxArray *const prhs[16], int32_T nlhs,
                       const mxArray *plhs[2]);

void LXS_wrapper(emxArray_real_T *y, emxArray_real_T *X,
                 real_T bonflevoutX_data[], int32_T bonflevoutX_size[2],
                 real_T conflev, real_T h, boolean_T intercept, real_T lms,
                 boolean_T msg, boolean_T nocheck, boolean_T nomes,
                 real_T nsamp, boolean_T rew, boolean_T yxsave,
                 struct_LXS_T *out, emxArray_real_T *C);

void LXS_wrapper1(emxArray_real_T *y, emxArray_real_T *X,
                  real_T bonflevoutX_data[], int32_T bonflevoutX_size[2],
                  real_T conflev, real_T h, boolean_T intercept,
                  struct_LXSlms_T *lms, boolean_T msg, boolean_T nocheck,
                  boolean_T nomes, real_T nsamp, boolean_T rew,
                  boolean_T yxsave, struct_LXS_T *out, emxArray_real_T *C);

void LXS_wrapper1_api(const mxArray *const prhs[13], int32_T nlhs,
                      const mxArray *plhs[2]);

void LXS_wrapper_api(const mxArray *const prhs[13], int32_T nlhs,
                     const mxArray *plhs[2]);

void MMreg_wrapper(emxArray_real_T *y, emxArray_real_T *X, real_T conflev,
                   real_T eff, struct1_T *InitialEst, boolean_T intercept,
                   boolean_T msg, boolean_T nocheck, real_T refsteps,
                   emxArray_char_T *rhofunc, emxArray_real_T *rhofuncparam,
                   real_T Sbdp, real_T Sbestr, real_T Sminsctol, real_T Snsamp,
                   real_T Srefsteps, real_T Srefstepsbestr, real_T Sreftol,
                   real_T Sreftolbestr, emxArray_char_T *Srhofunc,
                   emxArray_real_T *Srhofuncparam, real_T tol, boolean_T yxsave,
                   struct_MMreg_T *out, emxArray_real_T *C);

void MMreg_wrapper_api(const mxArray *const prhs[23], int32_T nlhs,
                       const mxArray *plhs[2]);

void MMregeda_wrapper(emxArray_real_T *y, emxArray_real_T *X, real_T conflev,
                      emxArray_real_T *eff, struct1_T *InitialEst,
                      boolean_T intercept, boolean_T nocheck, real_T refsteps,
                      emxArray_char_T *rhofunc, emxArray_real_T *rhofuncparam,
                      real_T Sbdp, real_T Sbestr, real_T Sminsctol,
                      boolean_T Smsg, real_T Snsamp, real_T Srefsteps,
                      real_T Srefstepsbestr, real_T Sreftol,
                      real_T Sreftolbestr, emxArray_char_T *Srhofunc,
                      emxArray_real_T *Srhofuncparam, real_T tol,
                      struct_MMregeda_T *out, emxArray_real_T *C);

void MMregeda_wrapper_api(const mxArray *const prhs[22], int32_T nlhs,
                          const mxArray *plhs[2]);

void Sreg_wrapper(emxArray_real_T *y, emxArray_real_T *X, real_T bdp,
                  real_T bestr, real_T conflev, boolean_T intercept,
                  real_T minsctol, boolean_T msg, boolean_T nocheck,
                  real_T nsamp, real_T refsteps, real_T refstepsbestr,
                  real_T reftol, real_T reftolbestr, emxArray_char_T *rhofunc,
                  emxArray_real_T *rhofuncparam, boolean_T yxsave,
                  struct_Sreg_T *out, emxArray_real_T *C);

void Sreg_wrapper_api(const mxArray *const prhs[17], int32_T nlhs,
                      const mxArray *plhs[2]);

void Sregeda_wrapper(emxArray_real_T *y, emxArray_real_T *X,
                     emxArray_real_T *bdp, real_T bestr, real_T conflev,
                     boolean_T intercept, real_T minsctol, boolean_T msg,
                     boolean_T nocheck, real_T nsamp, real_T refsteps,
                     real_T refstepsbestr, real_T reftol, real_T reftolbestr,
                     emxArray_char_T *rhofunc, emxArray_real_T *rhofuncparam,
                     struct_Sregeda_T *out, emxArray_real_T *C);

void Sregeda_wrapper_api(const mxArray *const prhs[16], int32_T nlhs,
                         const mxArray *plhs[2]);

void addt_wrapper(emxArray_real_T *y, emxArray_real_T *X, emxArray_real_T *w,
                  boolean_T intercept, real_T la_data[], int32_T la_size[2],
                  boolean_T nocheck, struct_addt_T *out);

void addt_wrapper_api(const mxArray *const prhs[6], const mxArray **plhs);

void fsdaC_atexit(void);

void fsdaC_initialize(void);

void fsdaC_terminate(void);

void fsdaC_xil_shutdown(void);

void fsdaC_xil_terminate(void);

void tclust_wrapper(emxArray_real_T *Y, real_T k, real_T alpha,
                    real_T restrfactor, boolean_T equalweights, real_T mixt,
                    real_T msg, boolean_T nocheck, emxArray_real_T *nsamp,
                    emxArray_real_T *RandNumbForNini, real_T refsteps,
                    real_T reftol, boolean_T startv1, boolean_T Ysave,
                    struct_tclust_T *out, emxArray_real_T *C);

void tclust_wrapper1(emxArray_real_T *Y, real_T k, real_T alpha,
                     struct_tclustrestrfactor_T *restrfactor,
                     boolean_T equalweights, real_T mixt, real_T msg,
                     boolean_T nocheck, emxArray_real_T *nsamp,
                     emxArray_real_T *RandNumbForNini, real_T refsteps,
                     real_T reftol, boolean_T startv1, boolean_T Ysave,
                     struct_tclust_T *out, emxArray_real_T *C);

void tclust_wrapper1_api(const mxArray *const prhs[14], int32_T nlhs,
                         const mxArray *plhs[2]);

void tclust_wrapper_api(const mxArray *const prhs[14], int32_T nlhs,
                        const mxArray *plhs[2]);

void unibiv_wrapper(emxArray_real_T *Y, real_T madcoef, real_T robscale,
                    real_T rf, emxArray_real_T *fre);

void unibiv_wrapper_api(const mxArray *const prhs[4], const mxArray **plhs);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (_coder_fsdaC_api.h) */
