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
typedef  scalar_t__ u8 ;
typedef  size_t u32 ;

/* Variables and functions */

u8 ixgbe_calculate_checksum(u8 *buffer, u32 length)
{
	u32 i;
	u8 sum = 0;

	if (!buffer)
		return 0;

	for (i = 0; i < length; i++)
		sum += buffer[i];

	return (u8) (0 - sum);
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
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 3077
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 1033
          // ------------------------------- 
          // static_instructions_O2 : 72
          // dynamic_instructions_O2 : 360
          // ------------------------------- 
          // static_instructions_O3 : 72
          // dynamic_instructions_O3 : 360
          // ------------------------------- 
          // static_instructions_Ofast : 72
          // dynamic_instructions_Ofast : 360
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 1031
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 1286
          // ------------------------------- 

          unsigned long length = 255;
        
          int _len_buffer0 = 65025;
          long * buffer = (long *) malloc(_len_buffer0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          long benchRet = ixgbe_calculate_checksum(buffer,length);
          printf("%ld\n", benchRet); 
          free(buffer);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 137
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 53
          // ------------------------------- 
          // static_instructions_O2 : 51
          // dynamic_instructions_O2 : 62
          // ------------------------------- 
          // static_instructions_O3 : 51
          // dynamic_instructions_O3 : 62
          // ------------------------------- 
          // static_instructions_Ofast : 51
          // dynamic_instructions_Ofast : 62
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 51
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 61
          // ------------------------------- 

          unsigned long length = 10;
        
          int _len_buffer0 = 100;
          long * buffer = (long *) malloc(_len_buffer0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          long benchRet = ixgbe_calculate_checksum(buffer,length);
          printf("%ld\n", benchRet); 
          free(buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
