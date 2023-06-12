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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  int u32 ;
typedef  int u16 ;
struct dma_channel {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int ux500_dma_is_compatible(struct dma_channel *channel,
		u16 maxpacket, void *buf, u32 length)
{
	if ((maxpacket & 0x3)		||
		((unsigned long int) buf & 0x3)	||
		(length < 512)		||
		(length & 0x3))
		return false;
	else
		return true;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
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

          int maxpacket = 255;
        
          int length = 255;
        
          int _len_channel0 = 65025;
          struct dma_channel * channel = (struct dma_channel *) malloc(_len_channel0*sizeof(struct dma_channel));
          for(int _i0 = 0; _i0 < _len_channel0; _i0++) {
              channel[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * buf;
        
          int benchRet = ux500_dma_is_compatible(channel,maxpacket,buf,length);
          printf("%d\n", benchRet); 
          free(channel);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
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

          int maxpacket = 10;
        
          int length = 10;
        
          int _len_channel0 = 100;
          struct dma_channel * channel = (struct dma_channel *) malloc(_len_channel0*sizeof(struct dma_channel));
          for(int _i0 = 0; _i0 < _len_channel0; _i0++) {
              channel[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * buf;
        
          int benchRet = ux500_dma_is_compatible(channel,maxpacket,buf,length);
          printf("%d\n", benchRet); 
          free(channel);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
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

          int maxpacket = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int length = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_channel0 = 1;
          struct dma_channel * channel = (struct dma_channel *) malloc(_len_channel0*sizeof(struct dma_channel));
          for(int _i0 = 0; _i0 < _len_channel0; _i0++) {
              channel[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * buf;
        
          int benchRet = ux500_dma_is_compatible(channel,maxpacket,buf,length);
          printf("%d\n", benchRet); 
          free(channel);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
