#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "_utils.h"
#include "unibiv_wrapper.h"


void r_unibiv(double *YY, int *nn, int *pp,  
            double *madcoef, double *rf, double *robscale,     
            //double *fre, int *pfre, int *trace
            double *fre, int *trace
            )

{
    int i, loop_ub;
    bool b_trace = *trace != 0;
     
    // double arrays as follows:
    
    //void unibiv_wrapper(const emxArray_real_T *Y, double madcoef, double robscale,
    //                double rf, emxArray_real_T *fre)
    emxArray_real_T *Y;
    emxArray_real_T *FRE;



    // Initialize the input arguments. ==============================
    Y = argInit_matrix(YY, nn, pp);                 //  Initialize function input argument 'Y'    
    
    
       // Initialize the output arguments. ==============================
    const int cols = 4;
    const int *p4;
    p4=&cols;
    
    FRE = argInit_matrix(fre, nn, p4);              //  Initialize function input argument 'FRE'    
    //FRE = argInit_matrix(fre, nn, pfre);              //  Initialize function input argument 'FRE'    

    if(b_trace)
    {
        Rprintf("%s ", "Before unibiv call...\n");
        Rprintf("\nfre dimensions: %d, %d \n", FRE->size[0], FRE->size[1]); 
        Rprintf("\n p4= %d \n", *p4); 
        disp_lmat_cm(FRE->data, FRE->size[0], FRE->size[1]);
       
    }

   
    // Call the unibiv wrapper
    unibiv_wrapper(Y, *madcoef, *robscale, *rf,  FRE);


    if(b_trace)
    {
        Rprintf("%s ", "Returning from unibiv...\n");
        Rprintf("\nfre dimensions: %d, %d \n", FRE->size[0], FRE->size[1]); 
        disp_lmat_cm(FRE->data, FRE->size[0], FRE->size[1]);
       
    }


    
    // fre
    loop_ub = FRE->size[0] * FRE->size[1];
    for(i=0; i < loop_ub; i++) {
        fre[i] = FRE->data[i];
    }


    // Destroy only the allocated objects
    //emxDestroy_struct_FSM_T(out);
    //emxDestroyArray_char_T(crit);  
  
}


