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
    Rprintf("%s  %d %d\n", "Starting r_fsrbsb: y:", *nn, *pp);    
    disp_dble(yy, *nn);
    Rprintf("%s ", "Starting fsrfan: X\n");                   
    disp_lmat_cm(xx, *nn, *pp);
    Rprintf("%s ", "Starting fsrfan: la\n");                   
    disp_dble(xla, *lla);
}
*/
    /* Initialize the input arguments. ==============================*/
    
    //  Initialize function input argument 'y'
    y = argInit_vector(yy, nn);
//    Rprintf("%s ", "y initialized\n");                   
    
    //  Initialize function input argument 'X'
    X = argInit_matrix(xx, nn, pp);
//    Rprintf("%s ", "X initialized\n");                   
    
    //  Initialize function input argument 'la' 
    la = argInit_vector(xla, lla);
//    Rprintf("%s ", "la initialized\n");     
                  
    //  Initialize function input argument 'lms'. 
    lms = argInit_matrix(xlms, nlms, plms);
//    Rprintf("%s ", "lms initialized\n");                   

    //  Initialize function input argument 'family'
    family = emxCreateWrapper_char_T(*xfamily, 1, strlen(*xfamily));
//    Rprintf("%s ", "family initialized\n");                   

    // Initialize the output structure ===========================: 
    
    //  - first allocate y and X                  
    out.y = emxCreateND_real_T(1, nn);
    out.X = emxCreate_real_T(*nn, *pp);
    
    // The following matrices are of size (n-init+1) x length(la)+1
    out.Score  = emxCreate_real_T(*retn1, *retp1);
    out.Scorep = emxCreate_real_T(*retn1, *retp1);
    out.Scoren = emxCreate_real_T(*retn1, *retp1);
    out.Scoreb = emxCreate_real_T(*retn1, *retp1);
 
    // Add bs: p x length(la), la - vector
    out.bs = emxCreate_real_T(*pp1, *lla);
    out.la = emxCreateND_real_T(1, lla);
    
    // Add Un: one dimensional cell array. Each element is a matrix 
    out.Un = emxCreateND_cell_wrap_36(1, lla);
    for(i=0; i < out.Un->size[0]; i++) {
        out.Un->data[i].f1 = emxCreate_real_T(*retnUn, *retpUn);
    }
 
/*-------------------------------------------------------------  
    Rprintf("\ny dimensions: %d \n", y->size[0]); 
    disp_dble(y->data, y->size[0]);
    Rprintf("\nX dimensions: %d, %d \n", X->size[0], X->size[1]); 
    disp_lmat_cm(X->data, X->size[0], X->size[1]);

    Rprintf("\n la dimensions: %d \n", la->size[0]); 
    disp_dble(la->data, la->size[0]);
    Rprintf("\nlms dimensions: %d, %d \n", lms->size[0], lms->size[1]); 
    disp_lmat_cm(lms->data, lms->size[0], lms->size[1]);

    Rprintf("\nOther parameters (init, h, nsamp, family): %f %f %f %s\n", *init, *h, *nsamp, family->data); 
    Rprintf("%s ", "Calling FSRfan...\n");                  
*/
    FSRfan_wrapper(y, X, b_intercept, b_nocheck, la, *h, *nsamp, lms,
                    *init, family, b_msg, &out);

/*
    Rprintf("\nout.la dimensions: %d, %d \n", out.la->size[0], out.la->size[1]); 
    Rprintf("\nout.bs dimensions: %d, %d \n", out.bs->size[0], out.bs->size[1]); 
    Rprintf("\nout.Score dimensions: %d, %d \n", out.Score->size[0], out.Score->size[1]); 
    Rprintf("\nout.Scorep dimensions: %d, %d \n", out.Scorep->size[0], out.Scorep->size[1]); 
    Rprintf("\nout.Scoreb dimensions: %d, %d \n", out.Scoreb->size[0], out.Scoreb->size[1]); 
    Rprintf("\nout.Scoren dimensions: %d, %d \n", out.Scoren->size[0], out.Scoren->size[1]); 
    //disp_lmat_cm(out.Score->data, out.Score->size[0], out.Score->size[1]);
*/
    
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

    emxDestroyArray_real_T(X);
    emxDestroyArray_real_T(y);    
    emxDestroyArray_real_T(la);    
    emxDestroyArray_real_T(lms);    
    emxDestroyArray_char_T(family);  
    
    emxDestroyArray_real_T(out.Score);    
    emxDestroyArray_real_T(out.Scorep);    
    emxDestroyArray_real_T(out.Scoren);    
    emxDestroyArray_real_T(out.Scoreb);    
    emxDestroyArray_real_T(out.bs);    
    emxDestroyArray_real_T(out.la);    
    emxDestroyArray_cell_wrap_36(out.Un);
}


