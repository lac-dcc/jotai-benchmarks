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
typedef  size_t u8 ;
typedef  size_t u32 ;

/* Variables and functions */

__attribute__((used)) static u8 msdc_dma_calcs(u8 *buf, u32 len)
{
	u32 i, sum = 0;

	for (i = 0; i < len; i++)
		sum += buf[i];
	return 0xff - (u8) sum;
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
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 3073
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 1031
          // ------------------------------- 
          // static_instructions_O2 : 71
          // dynamic_instructions_O2 : 359
          // ------------------------------- 
          // static_instructions_O3 : 71
          // dynamic_instructions_O3 : 359
          // ------------------------------- 
          // static_instructions_Ofast : 71
          // dynamic_instructions_Ofast : 359
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 1030
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 1285
          // ------------------------------- 

          unsigned long len = 255;
        
          int _len_buf0 = 65025;
          unsigned long * buf = (unsigned long *) malloc(_len_buf0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned long benchRet = msdc_dma_calcs(buf,len);
          printf("%lu\n", benchRet); 
          free(buf);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 133
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 51
          // ------------------------------- 
          // static_instructions_O2 : 50
          // dynamic_instructions_O2 : 61
          // ------------------------------- 
          // static_instructions_O3 : 50
          // dynamic_instructions_O3 : 61
          // ------------------------------- 
          // static_instructions_Ofast : 50
          // dynamic_instructions_Ofast : 61
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 50
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 60
          // ------------------------------- 

          unsigned long len = 10;
        
          int _len_buf0 = 100;
          unsigned long * buf = (unsigned long *) malloc(_len_buf0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned long benchRet = msdc_dma_calcs(buf,len);
          printf("%lu\n", benchRet); 
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
