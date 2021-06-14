#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "_utils.h"                     // R headers, the coder API and other debug functions  
#include "FSRfan_wrapper.h"             // the wrapper include

void r_fsrfan(double *yy, double *xx, int *nn, int *pp, int *nn1, int *pp1, int *intercept, 
             char **xfamily,
             double *xla, int *lla, 
             double *xlms, int *nlms, int *plms, double *h, double *nsamp,
             double *init, int *msg, int *nocheck,
             int *retn1, int *retp1,
             double *Score, double *Scorep, double *Scoren, double *Scoreb,
             double *bs, int *retnUn, int *retpUn, double *Un 
             )
{
    int i, j, loop_ub;
    bool b_intercept = *intercept != 0;
    bool b_msg = *msg != 0;
    bool b_nocheck = *nocheck != 0;
     
    emxArray_real_T *y;
    emxArray_real_T *X;
    emxArray_real_T *la;
    emxArray_real_T *lms;
    emxArray_char_T *family;

    struct_FSRfan_T out;

/*------------------------------------------------------------- 
if(b_trace)
{ 
    Rprintf("%s  %d %d\n", "Starting r_fsrfan: y:", *nn, *pp);    
    disp_dble(yy, *nn);
    Rprintf("%s ", "Starting fsrfan: X\n");                   
    disp_lmat_cm(xx, *nn, *pp);
    Rprintf("%s ", "Starting fsrfan: la\n");                   
    disp_dble(xla, *lla);
}
*/
    /* Initialize the input arguments. ==============================*/
    
    y = argInit_vector(yy, nn);             //  Initialize function input argument 'y'
    X = argInit_matrix(xx, nn, pp);         //  Initialize function input argument 'X'
    la = argInit_vector(xla, lla);          //  Initialize function input argument 'la'
    lms = argInit_matrix(xlms, nlms, plms); //  Initialize function input argument 'lms'

    //  Initialize function input argument 'family'
    family = emxCreateWrapper_char_T(*xfamily, 1, strlen(*xfamily));

    // Initialize the output structure ===========================: 
    emxInit_struct_FSRfan_T(&out);

    FSRfan_wrapper(y, X, b_intercept, b_nocheck, la, *h, *nsamp, lms,
                    *init, family, b_msg, &out);
    
    // Copy the output matrices Score, Scorep, Scoren and Scoreb 
    if(out.Score->size[0] != *retn1 || out.Score->size[1] != *retp1)
        Rprintf("\nWARNING: the size of output matrix Score changed: was %d, %d, now is %d, %d \n", 
            *retn1, *retp1, out.Score->size[0], out.Score->size[1]); 

    loop_ub = out.Score->size[0] * out.Score->size[1];
    for(i=0; i < loop_ub; i++) {
        Score[i] = out.Score->data[i];
    }

    if(strcmp(*xfamily, "YJpn") == 0 || strcmp(*xfamily, "YJall") == 0) {
        loop_ub = out.Scorep->size[0] * out.Scorep->size[1];
        for(i=0; i < loop_ub; i++) { 
            Scorep[i] = out.Scorep->data[i];
            Scoren[i] = out.Scoren->data[i];
        }
        
        if(strcmp(*xfamily, "YJall") == 0) {
            loop_ub = out.Scoreb->size[0] * out.Scoreb->size[1];
            for(i=0; i < loop_ub; i++) { 
                Scoreb[i] = out.Scoreb->data[i];
            }
        }
    }
    
    // Copy the output matrix bs 
    loop_ub = out.bs->size[0] * out.bs->size[1];
    for(i=0; i < loop_ub; i++) {
        bs[i] = out.bs->data[i];
    }
    
    // Copy the output vector la 
    for(i=0; i < out.la->size[0]; i++) {
        xla[i] = out.la->data[i];
    }

    // Copy the cell array Un (lla matrices, each of size retnUn x retpUn 
    for(i=0; i < out.Un->size[0]; i++) {
        loop_ub = out.Un->data[i].f1->size[0] * out.Un->data[i].f1->size[1];
        for(j=0; j < loop_ub; j++) {
            Un[i*loop_ub + j] = out.Un->data[i].f1->data[j];
        }
        
        // Rprintf("\nCopied Un matrix %d \n", i); 
        // disp_lmat_cm(out.Un->data[i].f1->data, out.Un->data[i].f1->size[0], out.Un->data[i].f1->size[1]);
    }
    
    // Return n and p calculated by chkinputR()
    *nn1 = out.X->size[0];
    *pp1 = out.X->size[1];

    emxDestroy_struct_FSRfan_T(out);
    emxDestroyArray_char_T(family);  
}


