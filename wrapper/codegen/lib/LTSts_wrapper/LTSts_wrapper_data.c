/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LTSts_wrapper_data.c
 *
 * Code generation for function 'LTSts_wrapper_data'
 *
 */

/* Include files */
#include "LTSts_wrapper_data.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
unsigned int state[625];

omp_nest_lock_t emlrtNestLockGlobal;

const bool bv[128] = {
    false, false, false, false, false, false, false, false, false, true,  true,
    true,  true,  true,  false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, true,  true,  true,  true,  true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false};

const double dv[31] = {0.0,
                       0.15342640972002736,
                       0.081061466795327261,
                       0.054814121051917651,
                       0.0413406959554093,
                       0.033162873519936291,
                       0.027677925684998338,
                       0.023746163656297496,
                       0.020790672103765093,
                       0.018488450532673187,
                       0.016644691189821193,
                       0.015134973221917378,
                       0.013876128823070748,
                       0.012810465242920227,
                       0.01189670994589177,
                       0.011104559758206917,
                       0.010411265261972096,
                       0.0097994161261588039,
                       0.0092554621827127329,
                       0.0087687001341393862,
                       0.00833056343336287,
                       0.00793411456431402,
                       0.0075736754879518406,
                       0.007244554301320383,
                       0.00694284010720953,
                       0.0066652470327076821,
                       0.0064089941880042071,
                       0.0061717122630394576,
                       0.0059513701127588475,
                       0.0057462165130101155,
                       0.0055547335519628011};

bool isInitialized_LTSts_wrapper = false;

/* End of code generation (LTSts_wrapper_data.c) */
