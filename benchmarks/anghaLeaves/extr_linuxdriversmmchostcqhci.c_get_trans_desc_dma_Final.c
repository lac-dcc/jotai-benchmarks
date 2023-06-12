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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u8 ;
struct cqhci_host {int trans_desc_len; TYPE_1__* mmc; scalar_t__ trans_desc_dma_base; } ;
typedef  scalar_t__ dma_addr_t ;
struct TYPE_2__ {int max_segs; } ;

/* Variables and functions */

__attribute__((used)) static inline dma_addr_t get_trans_desc_dma(struct cqhci_host *cq_host, u8 tag)
{
	return cq_host->trans_desc_dma_base +
		(cq_host->mmc->max_segs * tag *
		 cq_host->trans_desc_len);
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
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int tag = 100;
        
          int _len_cq_host0 = 1;
          struct cqhci_host * cq_host = (struct cqhci_host *) malloc(_len_cq_host0*sizeof(struct cqhci_host));
          for(int _i0 = 0; _i0 < _len_cq_host0; _i0++) {
              cq_host[_i0].trans_desc_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cq_host__i0__mmc0 = 1;
          cq_host[_i0].mmc = (struct TYPE_2__ *) malloc(_len_cq_host__i0__mmc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cq_host__i0__mmc0; _j0++) {
              cq_host[_i0].mmc->max_segs = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          cq_host[_i0].trans_desc_dma_base = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          long benchRet = get_trans_desc_dma(cq_host,tag);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_cq_host0; _aux++) {
          free(cq_host[_aux].mmc);
          }
          free(cq_host);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int tag = 255;
        
          int _len_cq_host0 = 65025;
          struct cqhci_host * cq_host = (struct cqhci_host *) malloc(_len_cq_host0*sizeof(struct cqhci_host));
          for(int _i0 = 0; _i0 < _len_cq_host0; _i0++) {
              cq_host[_i0].trans_desc_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cq_host__i0__mmc0 = 1;
          cq_host[_i0].mmc = (struct TYPE_2__ *) malloc(_len_cq_host__i0__mmc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cq_host__i0__mmc0; _j0++) {
              cq_host[_i0].mmc->max_segs = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          cq_host[_i0].trans_desc_dma_base = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          long benchRet = get_trans_desc_dma(cq_host,tag);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_cq_host0; _aux++) {
          free(cq_host[_aux].mmc);
          }
          free(cq_host);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int tag = 10;
        
          int _len_cq_host0 = 100;
          struct cqhci_host * cq_host = (struct cqhci_host *) malloc(_len_cq_host0*sizeof(struct cqhci_host));
          for(int _i0 = 0; _i0 < _len_cq_host0; _i0++) {
              cq_host[_i0].trans_desc_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cq_host__i0__mmc0 = 1;
          cq_host[_i0].mmc = (struct TYPE_2__ *) malloc(_len_cq_host__i0__mmc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cq_host__i0__mmc0; _j0++) {
              cq_host[_i0].mmc->max_segs = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          cq_host[_i0].trans_desc_dma_base = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          long benchRet = get_trans_desc_dma(cq_host,tag);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_cq_host0; _aux++) {
          free(cq_host[_aux].mmc);
          }
          free(cq_host);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int tag = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_cq_host0 = 1;
          struct cqhci_host * cq_host = (struct cqhci_host *) malloc(_len_cq_host0*sizeof(struct cqhci_host));
          for(int _i0 = 0; _i0 < _len_cq_host0; _i0++) {
              cq_host[_i0].trans_desc_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cq_host__i0__mmc0 = 1;
          cq_host[_i0].mmc = (struct TYPE_2__ *) malloc(_len_cq_host__i0__mmc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cq_host__i0__mmc0; _j0++) {
              cq_host[_i0].mmc->max_segs = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          cq_host[_i0].trans_desc_dma_base = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          long benchRet = get_trans_desc_dma(cq_host,tag);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_cq_host0; _aux++) {
          free(cq_host[_aux].mmc);
          }
          free(cq_host);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
