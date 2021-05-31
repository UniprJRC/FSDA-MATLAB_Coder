#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME:
   Check these declarations against the C/Fortran source code.
*/

/* .C calls */
extern void mycc(void *, void *);
extern void r_addt(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void r_fsr(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, 
void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);
extern void r_fsrbsb(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void 
*);
extern void r_fsrfan(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void 
*, void *, void *, void *, void *, void *, void *, void *, void *);
extern void r_lxs(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, 
void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);

static const R_CMethodDef CEntries[] = {
    {"mycc",     (DL_FUNC) &mycc,      2},
    {"r_addt",   (DL_FUNC) &r_addt,   14},
    {"r_fsr",    (DL_FUNC) &r_fsr,    34},
    {"r_fsrbsb", (DL_FUNC) &r_fsrbsb, 20},
    {"r_fsrfan", (DL_FUNC) &r_fsrfan, 28},
    {"r_lxs",    (DL_FUNC) &r_lxs,    35},
    {NULL, NULL, 0}
};

void R_init_fsdac(DllInfo *dll)
{
    R_registerRoutines(dll, CEntries, NULL, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
