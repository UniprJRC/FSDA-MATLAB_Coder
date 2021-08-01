#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "_utils.h"
#include "FSR_wrapper.h"
#include "FSR_wrapper1.h"

void r_fsr(double *yy, double *xx, int *nn, int *pp, int *nn1, int *pp1, int *intercept, 
             double *lms, double *bsb, int *nbsb,
             int *bsbmfullrank, double *bonflev,
             double *h, double * init, double *nsamp,
             double *threshoutX, int *weak,
             int *msg, int *nocheck,
             int *trace,
             double *beta, double *residuals, double *scale, double *fittedvalues, 
             double *outliers, int *noutliers, 
             int *retnUn, int *retpmdr, int *retpUn, double *mdr, double *Un,
             double *nout, 
             int *nListCl, int *nVIOMout, double *ListCl, double *VIOMout 
             )
{
    int i, loop_ub;
    bool b_intercept = *intercept != 0;
    bool b_bsbmfullrank = *bsbmfullrank != 0;
    bool b_weak = *weak != 0;
    bool b_msg = *msg != 0;
    bool b_nocheck = *nocheck != 0;
    bool b_trace = *trace != 0;
     
    struct_FSRlms_T lmsstr;

    emxArray_real_T *y;
    emxArray_real_T *X;

    struct_FSR_T out;

    double bonflev_data[1], threshoutX_data[1];
    int bonflev_size[2], threshoutX_size[2];

    // Initialize the input arguments. ==============================
    
    lmsstr.bsb = argInit_vector(bsb, nbsb);
    y = argInit_vector(yy, nn);                 //  Initialize function input argument 'y'    
    X = argInit_matrix(xx, nn, pp);             //  Initialize function input argument 'X'    
    
    //  Initialize function input arguments 'bonflev' and 'threshoutX'
    argInit_scalar2(bonflev, bonflev_data, bonflev_size);
    argInit_scalar2(threshoutX, threshoutX_data, threshoutX_size);
    
    // Initialize the output structure =========================== 
    emxInit_struct_FSR_T(&out);
    
    if(b_trace)
    {
        Rprintf("\ny dimensions: %d \n", y->size[0]); 
        //disp_dble(y->data, y->size[0]);
        Rprintf("\nX dimensions: %d, %d \n", X->size[0], X->size[1]); 
        //disp_lmat_cm(X->data, X->size[0], X->size[1]);
    
        Rprintf("\nOther parameters (h, nsamp, lms, intercept, nocheck): %f %f %f %d %d\n", 
            *h, *nsamp, *lms, *intercept, *nocheck); 
        Rprintf("More parameters (bsbmfullrank, weak, retnUn, retpUn, retpmdr): %d %d %d %d %d\n", *bsbmfullrank, *weak, *retnUn, *retpUn, *retpmdr); 
        Rprintf("%s ", "Calling FSR...\n");                  
    }

    // Call the FSR wrapper

    if(*lms == 0)   
        FSR_wrapper1(y, X,
                     b_bsbmfullrank, bonflev_data, bonflev_size, *h, *init,
                     b_intercept, &lmsstr, b_msg, b_nocheck,
                     *nsamp, threshoutX_data, threshoutX_size, b_weak, &out);
    else
        FSR_wrapper(y, X,
                     b_bsbmfullrank, bonflev_data, bonflev_size, *h, *init,
                     b_intercept, *lms, b_msg, b_nocheck,
                     *nsamp, threshoutX_data, threshoutX_size, b_weak, &out);

    if(b_trace) {
       Rprintf("%s ", "Returning from FSR...\n");
    }

   // Prepare the output parameters

    *scale = out.scale;

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

        Rprintf("\nUn dimensions: %d, %d \n", out.Un->size[0], out.Un->size[1]); 
        Rprintf("\nmdr dimensions: %d, %d \n", out.mdr->size[0], out.mdr->size[1]); 
        Rprintf("\nnout dimensions: %d, %d \n", out.nout->size[0], out.nout->size[1]); 
        disp_lmat_cm(out.nout->data, out.nout->size[0], out.nout->size[1]);
        
        Rprintf("ListCl dimensions: %d, %d \n", out.ListCl->size[0], out.ListCl->size[1]); 
        Rprintf("VIOMout dimensions: %d, %d \n", out.VIOMout->size[0], out.VIOMout->size[1]); 
    }
    
    

    // Copy the output vectors beta, residuals, fittedvalues and outliers
    if(out.mdr->size[0] == 1 && out.mdr->size[1] == 1 && isnan(out.mdr->data[0]))
    {
        // Singularity condition, we have two cases: mdr=ListOut=NaN and ListOut is a vector.
        if(out.ListOut->size[0] == 1 && out.ListOut->size[1] == 1 && isnan(out.ListOut->data[0]))
        {
            *retnUn = *retpUn = *retpmdr = 0;
        } else
        {
            // We are copuing the list of units that gave singular matrix to mdr to be compatible with FSMRmdr.
            *retnUn = out.ListOut->size[1];
            *retpUn = 0;
            *retpmdr = 1;

            loop_ub = out.ListOut->size[0] * out.ListOut->size[1];
            for(i=0; i < loop_ub; i++) {
                mdr[i] = out.ListOut->data[i];
            }
        }
    } else
    {
        for(i=0; i < out.beta->size[0]; i++) {
            beta[i] = out.beta->data[i];
        }
        for(i=0; i < out.residuals->size[0]; i++) {
            residuals[i] = out.residuals->data[i];
            fittedvalues[i] = out.fittedvalues->data[i];
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
        
        // Copy the output matrices Un, mdr and nout
        if(out.Un->size[0] != *retnUn && out.Un->size[0] == *retnUn - 1)
        {
            *retnUn = out.Un->size[0];
        }
        
        if(out.Un->size[0] != *retnUn || out.Un->size[1] != *retpUn)
            Rprintf("\nWARNING: the size of output matrix 'Un' changed: was %d, %d, now is %d, %d \n", *retnUn, *retpUn, out.Un->size[0], out.Un->size[1]); 
        if(out.mdr->size[0] != *retnUn || out.mdr->size[1] != *retpmdr)
            Rprintf("\nWARNING: the size of output matrix 'mdr' changed: was %d, %d, now is %d, %d \n", *retnUn, *retpmdr, out.mdr->size[0], out.mdr->size[1]); 
    
        loop_ub = out.Un->size[0] * out.Un->size[1];
        for(i=0; i < loop_ub; i++) {
            Un[i] = out.Un->data[i];
        }
    
        loop_ub = out.mdr->size[0] * out.mdr->size[1];
        for(i=0; i < loop_ub; i++) {
            mdr[i] = out.mdr->data[i];
        }
     
        loop_ub = out.nout->size[0] * out.nout->size[1];
        for(i=0; i < loop_ub; i++) {
            nout[i] = out.nout->data[i];
        }
    
        // Copy the output vectors ListCl and VIOMout - only if weak=TRUE
        if(b_weak)
        {
            *nListCl = out.ListCl->size[1];
            *nVIOMout = out.VIOMout->size[1];
            for(i=0; i < out.ListCl->size[1]; i++) {
                ListCl[i] = out.ListCl->data[i];
            }
            for(i=0; i < out.VIOMout->size[1]; i++) {
                VIOMout[i] = out.VIOMout->data[i];
            }
        }    

        // Return n and p calculated by chkinputR()
        *nn1 = out.beta->size[0];
        *pp1 = out.residuals->size[0];
    }
     
    // Destroy the allocated objetcs
    emxDestroy_struct_FSR_T(out);
    emxDestroyArray_real_T(X);    
    emxDestroyArray_real_T(y);    
}


