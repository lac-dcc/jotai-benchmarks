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
struct dma_desc {scalar_t__ des3; scalar_t__ des2; scalar_t__ des1; scalar_t__ des0; } ;

/* Variables and functions */

__attribute__((used)) static void dwxgmac2_release_tx_desc(struct dma_desc *p, int mode)
{
	p->des0 = 0;
	p->des1 = 0;
	p->des2 = 0;
	p->des3 = 0;
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
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int mode = 100;
        
          int _len_p0 = 1;
          struct dma_desc * p = (struct dma_desc *) malloc(_len_p0*sizeof(struct dma_desc));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              p[_i0].des3 = ((-2 * (next_i()%2)) + 1) * next_i();
          p[_i0].des2 = ((-2 * (next_i()%2)) + 1) * next_i();
          p[_i0].des1 = ((-2 * (next_i()%2)) + 1) * next_i();
          p[_i0].des0 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          dwxgmac2_release_tx_desc(p,mode);
          free(p);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int mode = 255;
        
          int _len_p0 = 65025;
          struct dma_desc * p = (struct dma_desc *) malloc(_len_p0*sizeof(struct dma_desc));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              p[_i0].des3 = ((-2 * (next_i()%2)) + 1) * next_i();
          p[_i0].des2 = ((-2 * (next_i()%2)) + 1) * next_i();
          p[_i0].des1 = ((-2 * (next_i()%2)) + 1) * next_i();
          p[_i0].des0 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          dwxgmac2_release_tx_desc(p,mode);
          free(p);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int mode = 10;
        
          int _len_p0 = 100;
          struct dma_desc * p = (struct dma_desc *) malloc(_len_p0*sizeof(struct dma_desc));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              p[_i0].des3 = ((-2 * (next_i()%2)) + 1) * next_i();
          p[_i0].des2 = ((-2 * (next_i()%2)) + 1) * next_i();
          p[_i0].des1 = ((-2 * (next_i()%2)) + 1) * next_i();
          p[_i0].des0 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          dwxgmac2_release_tx_desc(p,mode);
          free(p);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int mode = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_p0 = 1;
          struct dma_desc * p = (struct dma_desc *) malloc(_len_p0*sizeof(struct dma_desc));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              p[_i0].des3 = ((-2 * (next_i()%2)) + 1) * next_i();
          p[_i0].des2 = ((-2 * (next_i()%2)) + 1) * next_i();
          p[_i0].des1 = ((-2 * (next_i()%2)) + 1) * next_i();
          p[_i0].des0 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          dwxgmac2_release_tx_desc(p,mode);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
