#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
   Check these declarations against the C/Fortran source code.
*/

/* .C calls */
extern void mycc(void *, void *);
extern void r_fsmenvmmd(void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void r_fsrenvmdr(void *, void *, void *, void *, void *, void *, void *, void *);
extern void r_fsminvmmd(void *, void *, void *, void *, void *, void *, void *, void *);
extern void r_fsrinvmdr(void *, void *, void *, void *, void *, void *, void *, void *);
extern void r_fsm(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void r_fsmbsb(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void r_fsmmmd(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void r_fsr(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void r_fsrbsb(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void r_fsrfan(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void r_fsrmdr(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void r_lxs(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void r_sreg(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void r_sregeda(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void r_unibiv(void *, void *, void *, void *, void *, void *, void *, void *);

static const R_CMethodDef CEntries[] = {
    {"mycc",      (DL_FUNC) &mycc,       2},
    {"r_fsmenvmmd", (DL_FUNC) &r_fsmenvmmd,    9},
    {"r_fsrenvmdr", (DL_FUNC) &r_fsrenvmdr,    8},
    {"r_fsrinvmdr", (DL_FUNC) &r_fsrinvmdr,    8},
    {"r_fsminvmmd", (DL_FUNC) &r_fsminvmmd,    8},
    {"r_fsm",     (DL_FUNC) &r_fsm,     20},
    {"r_fsmbsb",  (DL_FUNC) &r_fsmbsb,  16},
    {"r_fsmmmd",  (DL_FUNC) &r_fsmmmd,  19},
    {"r_fsr",     (DL_FUNC) &r_fsr,     36},
    {"r_fsrbsb",  (DL_FUNC) &r_fsrbsb,  18},
    {"r_fsrfan",  (DL_FUNC) &r_fsrfan,  28},
    {"r_fsrmdr",  (DL_FUNC) &r_fsrmdr,  32},
    {"r_lxs",     (DL_FUNC) &r_lxs,     34},
    {"r_sreg",    (DL_FUNC) &r_sreg,    36},
    {"r_sregeda", (DL_FUNC) &r_sregeda, 34},
    {"r_unibiv",  (DL_FUNC) &r_unibiv,   8},
    {NULL, NULL, 0}
};

void R_init_fsdac(DllInfo *dll)
{
    R_registerRoutines(dll, CEntries, NULL, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
