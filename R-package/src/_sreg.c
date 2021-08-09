#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "_utils.h"
#include "Sreg_wrapper.h"

void r_sreg(double *yy, double *xx, int *nn, int *pp, int *nn1, int *pp1, int *intercept, 
             double *bdp, char **xrhofunc, double *xrhofuncparam, int *nrhofuncparam,
             double *nsamp, double *refsteps, double *reftol, double *refstepsbestr, 
             double *reftolbestr, double *minsctol, double *bestr, double *conflev,
             int *msg, int *nocheck, 
             int *csave, int *nC, int *pC, int *trace,
             double *beta, double *residuals, double *scale, double *fittedvalues, double *weights,
             double *outliers, int *noutliers, double *bs, int *nbs, double *singsub, double *xC
             )
{
    int i, loop_ub;
    bool b_intercept = *intercept != 0;
    bool b_msg = *msg != 0;
    bool b_nocheck = *nocheck != 0;
    bool b_csave = *csave != 0;
    bool b_yxsave = true;
    bool b_trace = *trace != 0;
     
    emxArray_real_T *y;
    emxArray_real_T *X;
    emxArray_real_T *rhofuncparam;
    emxArray_char_T *rhofunc;
    emxArray_real_T *C;

    struct_Sreg_T out;

    // Initialize the input arguments. ==============================
    
    y = argInit_vector(yy, nn);                 //  Initialize function input argument 'y'    
    X = argInit_matrix(xx, nn, pp);             //  Initialize function input argument 'X'    
    rhofuncparam = argInit_vector(xrhofuncparam, nrhofuncparam);   //  Initialize function input argument 'rhofuncparam'    
    Rprintf("\nrhofuncparam: %d %d\n", rhofuncparam->size[0], rhofuncparam->size[1]);  
    disp_dble(rhofuncparam->data, rhofuncparam->size[0]);
    
    //  Initialize function input argument 'family'
    rhofunc = emxCreateWrapper_char_T(*xrhofunc, 1, strlen(*xrhofunc));

    // Initialize the output structure =========================== 
    emxInit_struct_Sreg_T(&out);
    
    //  Allocate the (optional) output matrix C
    C = emxCreate_real_T(*nC, *pC);

    if(b_trace)
    {
        Rprintf("\ny dimensions: %d \n", y->size[0]); 
        //disp_dble(y->data, y->size[0]);
        Rprintf("\nX dimensions: %d, %d \n", X->size[0], X->size[1]); 
        //disp_lmat_cm(X->data, X->size[0], X->size[1]);
    
        Rprintf("\nOther parameters (bdp, nsamp, intercept, nocheck): %f %f %d %d\n", 
            *bdp, *nsamp, *intercept, *nocheck); 
        //Rprintf("More parameters (bsbmfullrank, weak, retnUn, retpUn, retpmdr): %d %d %d %d %d\n", *bsbmfullrank, *weak, *retnUn, *retpUn, *retpmdr); 

        Rprintf("%s ", "Calling Sreg...\n");                  
    }

    // Call the Sreg wrapper
        Sreg_wrapper(y, X, *bdp, *bestr, *conflev, b_intercept, *minsctol, b_msg, b_nocheck, *nsamp, 
                  *refsteps, *refstepsbestr, *reftol, 
                  *reftolbestr, rhofunc, rhofuncparam, 
                  b_yxsave, &out, C);
 
     if(b_trace) {
       Rprintf("%s ", "Returning from Sreg...\n");
    }

   // Prepare the output parameters

    *scale = out.scale;
    *conflev = out.conflev;
    *singsub = out.singsub;

    if(b_trace)
    {
        Rprintf("\n+++++ out.beta: %d, %d \n", out.beta->size[0], out.beta->size[1]);
        disp_dble(out.beta->data, out.beta->size[0]);

        Rprintf("\n+++++ out.residuals: %d, %d \n", out.residuals->size[0], out.residuals->size[1]);
        disp_dble(out.residuals->data, out.residuals->size[0]);

        Rprintf("\n+++++ out.fittedvalues: %d, %d \n", out.fittedvalues->size[0], out.fittedvalues->size[1]);
        disp_dble(out.fittedvalues->data, out.fittedvalues->size[0]);

        Rprintf("\n+++++ out.outliers: %d %d\n", out.outliers->size[0], out.outliers->size[1]);
        disp_dble(out.outliers->data, out.outliers->size[1]);

        Rprintf("\n+++++ out.weights: %d %d\n", out.weights->size[0], out.weights->size[1]);
        disp_dble(out.weights->data, out.weights->size[0]);

        Rprintf("\n+++++ out.bs: %d %d\n", out.bs->size[0], out.bs->size[1]);
        disp_dble(out.bs->data, out.bs->size[1]);

        Rprintf("\n+++++ out.rhofuncparam: %d %d\n", out.rhofuncparam->size[0], out.rhofuncparam->size[1]);
        disp_dble(out.rhofuncparam->data, out.rhofuncparam->size[1]);

        Rprintf("\nC: %d, %d \n", C->size[0], C->size[1]); 
   }
    

    // Copy the output vectors beta, residuals, fittedvalues and outliers
    for(i=0; i < out.beta->size[0]; i++) {
        beta[i] = out.beta->data[i];
    }
    for(i=0; i < out.residuals->size[0]; i++) {
        residuals[i] = out.residuals->data[i];
        fittedvalues[i] = out.fittedvalues->data[i];
        weights[i] = out.weights->data[i];
    }

    if(out.outliers->size[0] == 1 && out.outliers->size[1] == 1 && isnan(out.outliers->data[0]))
    {
        *noutliers = 0;
    } else
    {
        *noutliers = out.outliers->size[1];
        for(i=0; i < out.outliers->size[1]; i++) {
            outliers[i] = out.outliers->data[i];
        }
    }

    *nbs = out.bs->size[1];
    for(i=0; i < out.bs->size[1]; i++) {
        bs[i] = out.bs->data[i];
    }
        
    *nrhofuncparam = out.rhofuncparam->size[1];
    for(i=0; i < out.rhofuncparam->size[1]; i++) {
        xrhofuncparam[i] = out.rhofuncparam->data[i];
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
    
    // Return n and p calculated by chkinputR()
    *nn1 = out.X->size[0];
    *pp1 = out.X->size[1];
     
    // Destroy the allocated objetcs
    emxDestroyArray_real_T(C);
    emxDestroy_struct_Sreg_T(out);
    emxDestroyArray_char_T(rhofunc);  
    emxDestroyArray_real_T(rhofuncparam);    
    emxDestroyArray_real_T(X);    
    emxDestroyArray_real_T(y);    
}


