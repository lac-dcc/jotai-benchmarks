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
typedef  int u8 ;
typedef  size_t u32 ;

/* Variables and functions */

u8 dst_check_sum(u8 *buf, u32 len)
{
	u32 i;
	u8 val = 0;
	if (!len)
		return 0;
	for (i = 0; i < len; i++) {
		val += buf[i];
	}
	return ((~val) + 1);
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
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 3078
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 1030
          // ------------------------------- 
          // static_instructions_O2 : 71
          // dynamic_instructions_O2 : 223
          // ------------------------------- 
          // static_instructions_O3 : 71
          // dynamic_instructions_O3 : 223
          // ------------------------------- 
          // static_instructions_Ofast : 71
          // dynamic_instructions_Ofast : 223
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 1029
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 1286
          // ------------------------------- 

          unsigned long len = 255;
        
          int _len_buf0 = 65025;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = dst_check_sum(buf,len);
          printf("%d\n", benchRet); 
          free(buf);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 138
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 50
          // ------------------------------- 
          // static_instructions_O2 : 50
          // dynamic_instructions_O2 : 54
          // ------------------------------- 
          // static_instructions_O3 : 50
          // dynamic_instructions_O3 : 54
          // ------------------------------- 
          // static_instructions_Ofast : 50
          // dynamic_instructions_Ofast : 54
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 49
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 61
          // ------------------------------- 

          unsigned long len = 10;
        
          int _len_buf0 = 100;
          int * buf = (int *) malloc(_len_buf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = dst_check_sum(buf,len);
          printf("%d\n", benchRet); 
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
