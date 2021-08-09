#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "_utils.h"
#include "Sregeda_wrapper.h"

void r_sregeda(double *yy, double *xx, int *nn, int *pp, int *nn1, int *pp1, int *intercept, 
             double *xbdp, int *nbdp, char **xrhofunc, double *xrhofuncparam, int *nrhofuncparam,
             double *nsamp, double *refsteps, double *reftol, double *refstepsbestr, 
             double *reftolbestr, double *minsctol, double *bestr, double *conflev,
             int *msg, int *nocheck, 
             int *csave, int *nC, int *pC, int *trace,
             double *Beta, double *RES, double *Scale, double *Weights,
             double *Outliers, double *BS, double *Singsub, double *xC
             )
{
    int i, loop_ub;
    bool b_intercept = *intercept != 0;
    bool b_msg = *msg != 0;
    bool b_nocheck = *nocheck != 0;
    bool b_csave = *csave != 0;
    bool b_trace = *trace != 0;
     
    emxArray_real_T *y;
    emxArray_real_T *X;
    emxArray_real_T *rhofuncparam;
    emxArray_char_T *rhofunc;
    emxArray_real_T *bdp;
    emxArray_real_T *C;

    struct_Sregeda_T out;

    // Initialize the input arguments. ==============================
    
    y = argInit_vector(yy, nn);                 //  Initialize function input argument 'y'    
    X = argInit_matrix(xx, nn, pp);             //  Initialize function input argument 'X'    
    rhofuncparam = argInit_vector(xrhofuncparam, nrhofuncparam);   //  Initialize function input argument 'rhofuncparam'    
    bdp = argInit_vector(xbdp, nbdp);           //  Initialize function input argument 'bdp'    
    
    //  Initialize function input argument 'family'
    rhofunc = emxCreateWrapper_char_T(*xrhofunc, 1, strlen(*xrhofunc));

    // Initialize the output structure =========================== 
    emxInit_struct_Sregeda_T(&out);
    
    //  Allocate the (optional) output matrix C
    C = emxCreate_real_T(*nC, *pC);

    if(b_trace)
    {
        Rprintf("\ny dimensions: %d \n", y->size[0]); 
        //disp_dble(y->data, y->size[0]);
        
        Rprintf("\nX dimensions: %d, %d \n", X->size[0], X->size[1]); 
        //disp_lmat_cm(X->data, X->size[0], X->size[1]);
    
        Rprintf("\nOther parameters (nsamp, intercept, nocheck): %f %d %d\n", 
            *nsamp, *intercept, *nocheck); 
        Rprintf("\nOther parameters (bdp): %d %d\n", bdp->size[0], bdp->size[1]);
        disp_dble(bdp->data, bdp->size[0]);
         
        Rprintf("%s ", "Calling Sregeda() ...\n");                  
    }

    // Call the Sregeda wrapper
        Sregeda_wrapper(y, X, bdp, *bestr, *conflev, b_intercept, *minsctol, b_msg, b_nocheck, *nsamp, 
                  *refsteps, *refstepsbestr, *reftol, 
                  *reftolbestr, rhofunc, rhofuncparam, 
                  &out, C);
 
     if(b_trace) {
       Rprintf("%s ", "Returning from Sregeda() ...\n");
    }

   // Prepare the output parameters
    *conflev = out.conflev;

    if(b_trace)
    {
        Rprintf("\n+++++ out.Beta: %d, %d \n", out.Beta->size[0], out.Beta->size[1]);
        Rprintf("\n+++++ out.Scale: %d, %d \n", out.Scale->size[0], out.Scale->size[1]);
        Rprintf("\n+++++ out.RES: %d, %d \n", out.RES->size[0], out.RES->size[1]);
        Rprintf("\n+++++ out.Outliers: %d %d\n", out.Outliers->size[0], out.Outliers->size[1]);
        Rprintf("\n+++++ out.Weights: %d %d\n", out.Weights->size[0], out.Weights->size[1]);
        Rprintf("\n+++++ out.BS: %d %d\n", out.BS->size[0], out.BS->size[1]);
        Rprintf("\n+++++ out.bdp: %d %d\n", out.bdp->size[0], out.bdp->size[1]);

        Rprintf("\n+++++ out.rhofuncparam: %d %d\n", out.rhofuncparam->size[0], out.rhofuncparam->size[1]);
        disp_dble(out.rhofuncparam->data, out.rhofuncparam->size[1]);

        Rprintf("\nC: %d, %d \n", C->size[0], C->size[1]); 
   }
 
    // Copy the output vectors beta, residuals, fittedvalues and outliers
    loop_ub = out.Beta->size[0] * out.Beta->size[1];
    for(i=0; i < loop_ub; i++) {
        Beta[i] = out.Beta->data[i];
    }
    loop_ub = out.RES->size[0] * out.RES->size[1];
    for(i=0; i < loop_ub; i++) {
        RES[i] = out.RES->data[i];
        Outliers[i] = out.Outliers->data[i];
        Weights[i] = out.Weights->data[i];
    }

    loop_ub = out.BS->size[0] * out.BS->size[1];
    for(i=0; i < loop_ub; i++) {
        BS[i] = out.BS->data[i];
    }
        
    for(i=0; i < out.Scale->size[0]; i++) {
        Scale[i] = out.Scale->data[i];
        xbdp[i] = out.bdp->data[i];
        Singsub[i] = out.Singsub->data[i];
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
    emxDestroy_struct_Sregeda_T(out);
    emxDestroyArray_char_T(rhofunc);  
    emxDestroyArray_real_T(bdp);    
    emxDestroyArray_real_T(rhofuncparam);    
    emxDestroyArray_real_T(X);    
    emxDestroyArray_real_T(y);    
}


