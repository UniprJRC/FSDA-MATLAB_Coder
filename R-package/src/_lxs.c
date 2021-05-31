#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "_utils.h"
#include "LXS_wrapper.h"
#include "LXS_wrapper1.h"

void r_lxs(double *yy, double *xx, int *nn, int *pp, int *nn1, int *pp1, int *intercept, 
             double *lms, double *refsteps, double *reftol, double *bestr, double *refstepsbestr, double *reftolbestr,
             double *bonflevoutX, 
             double *h, double *conflev, double *nsamp, int *rew,
             int *nomes, int *msg, int *nocheck,
             int *yxsave, int *csave, int *nC, int * pC, int *trace,
             double *beta, int *bs, double *residuals, double *scale, double *weights, 
             double *outliers, int *nout, double *singsub, double *xC 
             )
{
    int i, loop_ub;
    bool b_intercept = *intercept != 0;
    bool b_nomes = *nomes != 0;
    bool b_msg = *msg != 0;
    bool b_nocheck = *nocheck != 0;
    bool b_rew = *rew != 0;
    bool b_yxsave = *yxsave != 0;
    bool b_csave = *csave != 0;
    bool b_trace = *trace != 0;
     
    double r_bonflevoutX = bonflevoutX[0];                    // the value of bonflevoutX
    bool b_bonflevoutX = bonflevoutX[1] != 0;                 // wheather bonflevoutX exists
    
    struct1_T lmsstr;
    
    emxArray_real_T *y;
    emxArray_real_T *X;
    emxArray_real_T *C;

    struct_LXS_T out;

    double bonflevoutX_data[1];
    int bonflevoutX_size[2];

    lmsstr.bestr = *bestr;
    lmsstr.refsteps = *refsteps;
    lmsstr.refstepsbestr = *refstepsbestr;
    lmsstr.reftol = *reftol;
    lmsstr.reftolbestr = *reftolbestr;

    /* Initialize the input arguments. ==============================*/
    
    y = argInit_vector(yy, nn);                 //  Initialize function input argument 'y'    
    X = argInit_matrix(xx, nn, pp);             //  Initialize function input argument 'X'    
    argInit_scalar(r_bonflevoutX, b_bonflevoutX, bonflevoutX_data, bonflevoutX_size);   //  Initialize function input argument 'bonflevoutX'


    // Initialize the output structure =========================== 
    emxInit_struct_LXS_T(&out);
    
    //  Allocate the (optional) output matrix C
    C = emxCreate_real_T(*nC, *pC);
    
    if(b_trace)
    {
        Rprintf("\ny dimensions: %d \n", y->size[0]); 
        disp_dble(y->data, y->size[0]);
        Rprintf("\nX dimensions: %d, %d \n", X->size[0], X->size[1]); 
        disp_lmat_cm(X->data, X->size[0], X->size[1]);
    
    
        Rprintf("\nOther parameters (h, nsamp, lms, conflev, rew, nomes, intercept, nocheck): %f %f %f %f %d %d %d %d\n", 
            *h, *nsamp, *lms, *conflev, *rew, *nomes, *intercept, *nocheck); 
        Rprintf("More parameters (nC, pC): %d %d \n", *nC, *pC); 
        Rprintf("%s ", "Calling LXS...\n");                  
    }

    if(*lms == 0)   
        LXS_wrapper1(y, X, bonflevoutX_data, bonflevoutX_size,
                    *conflev, *h, b_intercept, &lmsstr, b_msg, 
                    b_nocheck, b_nomes, *nsamp, b_rew, b_yxsave,
                    &out, C);
    else
        LXS_wrapper(y, X, bonflevoutX_data, bonflevoutX_size,
                    *conflev, *h, b_intercept, *lms, b_msg, 
                    b_nocheck, b_nomes, *nsamp, b_rew, b_yxsave,
                    &out, C);
    
    *scale = out.scale;
    *h = out.h;
    *conflev = out.conflev;
    *singsub = out.singsub;
 
    if(b_trace)
    {     
        Rprintf("\n+++++ out.scale: %f \n", out.scale); 
    
        Rprintf("\n+++++ out.beta: %d, %d \n", out.beta->size[0], out.beta->size[1]); 
        disp_dble(out.beta->data, out.beta->size[0]);
    
        Rprintf("\n+++++ out.bs: %d, %d \n", out.bs->size[0], out.bs->size[1]); 
        disp_dble(out.bs->data, out.bs->size[1]);
    
        Rprintf("\n+++++ out.residuals: %d, %d \n", out.residuals->size[0], out.residuals->size[1]); 
        disp_dble(out.residuals->data, out.residuals->size[0]);
     
        Rprintf("\n+++++ out.outliers: %d %d\n", out.outliers->size[0], out.outliers->size[1]); 
        disp_dble(out.outliers->data, out.outliers->size[1]);
    
        Rprintf("\nC: %d, %d \n", C->size[0], C->size[1]); 
    }
    
    // Copy the output vectors beta, bs and outliers 
    for(i=0; i < out.beta->size[0]; i++) {
        beta[i] = out.beta->data[i];
    }
    
    for(i=0; i < out.bs->size[1]; i++) {        // row vector!
        bs[i] = out.bs->data[i];
    }
    
    for(i=0; i < out.residuals->size[0]; i++) {    
        residuals[i] = out.residuals->data[i];
        weights[i] = out.weights->data[i];
    }
    
    *nout = out.outliers->size[1];
    for(i=0; i < out.outliers->size[1]; i++) {    
        outliers[i] = out.outliers->data[i];
    }
    
    // Copy the optional matrix C
    if(b_csave)
    {
        if(C->size[0] != *nC || C->size[1] != *pC)
            Rprintf("\nWARNING: the size of output matrix C changed: was %d, %d, now is %d, %d \n", 
                *nC, *pC, C->size[0], C->size[1]); 
        
        *nC = C->size[0];
        *pC = C->size[1];
        
        // Copy the output matrix C
        loop_ub = C->size[0] * C->size[1];
        for(i=0; i < loop_ub; i++) {
            xC[i] = C->data[i];
        }
    }

    // Destroy the allocated objetcs
    emxDestroyArray_real_T(C);
    emxDestroy_struct_LXS_T(out);
    emxDestroyArray_real_T(X);    
    emxDestroyArray_real_T(y);    
}


