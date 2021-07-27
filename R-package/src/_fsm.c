#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "_utils.h"
#include "FSM_wrapper.h"


void r_fsm(double *YY, int *nn, int *pp,  
            double *bonflev, char **xcrit, 
            double *init, double *m0, int *nnm, 
            int *msg, int *nocheck, double *rf,
            double *xoutliers, int *noutliers,
            double *xmmd, double *xUn, 
            double *xnout, double *xloc, double *xcov,     
            double *xmd, int *trace
            )

{
    int i, loop_ub;
  
    bool b_msg = *msg != 0;
    bool b_nocheck = *nocheck != 0;
    bool b_trace = *trace != 0;
     
    // double array
    emxArray_real_T *Y;
    emxArray_real_T *M0;

    // char array
    emxArray_char_T *crit;


    // output structure
    struct_FSM_T out;

    double bonflev_data[1];
    int bonflev_size[2];

    // Initialize the input arguments. ==============================
    Y = argInit_matrix(YY, nn, pp);                 //  Initialize function input argument 'Y'    
    M0 = argInit_vector(m0, nnm);              //  Initialize function input argument 'M0'    

      //  Initialize function input argument 'crit'
    crit = emxCreateWrapper_char_T(*xcrit, 1, strlen(*xcrit));

    //  Initialize function input arguments 'bonflev' 
    argInit_scalar2(bonflev, bonflev_data, bonflev_size);
    
   
    // Initialize the output structure =========================== 
    emxInit_struct_FSM_T(&out);
    
   
    // Call the FSM wrapper
    FSM_wrapper(Y, bonflev_data, bonflev_size, crit, *init, M0, b_msg, b_nocheck, *rf, &out);


    if(b_trace)
    {
        Rprintf("%s ", "Returning from FSM...\n");
        Rprintf("\nUn dimensions: %d, %d \n", out.Un->size[0], out.Un->size[1]); 
        Rprintf("\nmdr dimensions: %d, %d \n", out.mmd->size[0], out.mmd->size[1]); 
        Rprintf("\nnout dimensions: %d, %d \n", out.nout->size[0], out.nout->size[1]); 
        disp_lmat_cm(out.nout->data, out.nout->size[0], out.nout->size[1]);
       
    }


    
    // outliers
    *noutliers = out.outliers->size[0];
    for(i=0; i < out.outliers->size[0]; i++) {
        xoutliers[i] = out.outliers->data[i];
    }


    // loc
    for(i=0; i < out.loc->size[1]; i++) {
        xloc[i] = out.loc->data[i];
    }

    // mmd
    loop_ub = out.mmd->size[0] * out.mmd->size[1];
    for(i=0; i < loop_ub; i++) {
        xmmd[i] = out.mmd->data[i];
    }
    // Un
    loop_ub = out.Un->size[0] * out.Un->size[1];
    for(i=0; i < loop_ub; i++) {
        xUn[i] = out.Un->data[i];
    }
    

   // nout (always 2 x 5)
   loop_ub = out.nout->size[0] * out.nout->size[1];
    for(i=0; i < loop_ub; i++) {
        xnout[i] = out.nout->data[i];
    }
    
    
    
    // cov 
    loop_ub = out.cov->size[0] * out.cov->size[1];
    for(i=0; i < loop_ub; i++) {
        xcov[i] = out.cov->data[i];
    }
    // md
    loop_ub = out.md->size[0] * out.md->size[1];
    for(i=0; i < loop_ub; i++) {
        xmd[i] = out.md->data[i];
    }


    // Destroy only the allocated objects
    emxDestroy_struct_FSM_T(out);
    emxDestroyArray_char_T(crit);  
  
}


