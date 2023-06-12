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
struct pl330_xfer {size_t bytes; void* src_addr; void* dst_addr; } ;
typedef  void* dma_addr_t ;

/* Variables and functions */

__attribute__((used)) static inline void fill_px(struct pl330_xfer *px,
		dma_addr_t dst, dma_addr_t src, size_t len)
{
	px->bytes = len;
	px->dst_addr = dst;
	px->src_addr = src;
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
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
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

          unsigned long len = 100;
        
          int _len_px0 = 1;
          struct pl330_xfer * px = (struct pl330_xfer *) malloc(_len_px0*sizeof(struct pl330_xfer));
          for(int _i0 = 0; _i0 < _len_px0; _i0++) {
              px[_i0].bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * dst;
        
          void * src;
        
          fill_px(px,dst,src,len);
          free(px);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
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

          unsigned long len = 255;
        
          int _len_px0 = 65025;
          struct pl330_xfer * px = (struct pl330_xfer *) malloc(_len_px0*sizeof(struct pl330_xfer));
          for(int _i0 = 0; _i0 < _len_px0; _i0++) {
              px[_i0].bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * dst;
        
          void * src;
        
          fill_px(px,dst,src,len);
          free(px);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
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

          unsigned long len = 10;
        
          int _len_px0 = 100;
          struct pl330_xfer * px = (struct pl330_xfer *) malloc(_len_px0*sizeof(struct pl330_xfer));
          for(int _i0 = 0; _i0 < _len_px0; _i0++) {
              px[_i0].bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * dst;
        
          void * src;
        
          fill_px(px,dst,src,len);
          free(px);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
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

          unsigned long len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_px0 = 1;
          struct pl330_xfer * px = (struct pl330_xfer *) malloc(_len_px0*sizeof(struct pl330_xfer));
          for(int _i0 = 0; _i0 < _len_px0; _i0++) {
              px[_i0].bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * dst;
        
          void * src;
        
          fill_px(px,dst,src,len);
          free(px);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
