// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
\n\
");

}


// ------------------------------------------------------------------------- //

#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */

/* Type definitions */
struct sprd_dma_desc {int dummy; } ;
typedef  enum sprd_dma_req_mode { ____Placeholder_sprd_dma_req_mode } sprd_dma_req_mode ;
typedef  enum sprd_dma_int_type { ____Placeholder_sprd_dma_int_type } sprd_dma_int_type ;

/* Variables and functions */
 int SPRD_DMA_NO_INT ; 

__attribute__((used)) static bool sprd_dma_check_trans_done(struct sprd_dma_desc *sdesc,
				      enum sprd_dma_int_type int_type,
				      enum sprd_dma_req_mode req_mode)
{
	if (int_type == SPRD_DMA_NO_INT)
		return false;

	if (int_type >= req_mode + 1)
		return true;
	else
		return false;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // int-bounds
    case 0:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          enum sprd_dma_int_type int_type = 100;
        
          enum sprd_dma_req_mode req_mode = 0;
        
          int _len_sdesc0 = 1;
          struct sprd_dma_desc * sdesc = (struct sprd_dma_desc *) malloc(_len_sdesc0*sizeof(struct sprd_dma_desc));
          for(int _i0 = 0; _i0 < _len_sdesc0; _i0++) {
              sdesc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = sprd_dma_check_trans_done(sdesc,int_type,req_mode);
          printf("%d\n", benchRet); 
          free(sdesc);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          enum sprd_dma_int_type int_type = 255;
        
          enum sprd_dma_req_mode req_mode = 0;
        
          int _len_sdesc0 = 65025;
          struct sprd_dma_desc * sdesc = (struct sprd_dma_desc *) malloc(_len_sdesc0*sizeof(struct sprd_dma_desc));
          for(int _i0 = 0; _i0 < _len_sdesc0; _i0++) {
              sdesc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = sprd_dma_check_trans_done(sdesc,int_type,req_mode);
          printf("%d\n", benchRet); 
          free(sdesc);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          enum sprd_dma_int_type int_type = 10;
        
          enum sprd_dma_req_mode req_mode = 0;
        
          int _len_sdesc0 = 100;
          struct sprd_dma_desc * sdesc = (struct sprd_dma_desc *) malloc(_len_sdesc0*sizeof(struct sprd_dma_desc));
          for(int _i0 = 0; _i0 < _len_sdesc0; _i0++) {
              sdesc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = sprd_dma_check_trans_done(sdesc,int_type,req_mode);
          printf("%d\n", benchRet); 
          free(sdesc);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          enum sprd_dma_int_type int_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          enum sprd_dma_req_mode req_mode = 0;
        
          int _len_sdesc0 = 1;
          struct sprd_dma_desc * sdesc = (struct sprd_dma_desc *) malloc(_len_sdesc0*sizeof(struct sprd_dma_desc));
          for(int _i0 = 0; _i0 < _len_sdesc0; _i0++) {
              sdesc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = sprd_dma_check_trans_done(sdesc,int_type,req_mode);
          printf("%d\n", benchRet); 
          free(sdesc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
