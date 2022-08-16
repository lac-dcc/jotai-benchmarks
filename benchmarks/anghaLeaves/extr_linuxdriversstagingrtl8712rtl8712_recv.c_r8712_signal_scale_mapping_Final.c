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
typedef  int s32 ;

/* Variables and functions */

s32 r8712_signal_scale_mapping(s32 cur_sig)
{
	s32 ret_sig;

	if (cur_sig >= 51 && cur_sig <= 100)
		ret_sig = 100;
	else if (cur_sig >= 41 && cur_sig <= 50)
		ret_sig = 80 + ((cur_sig - 40) * 2);
	else if (cur_sig >= 31 && cur_sig <= 40)
		ret_sig = 66 + (cur_sig - 30);
	else if (cur_sig >= 21 && cur_sig <= 30)
		ret_sig = 54 + (cur_sig - 20);
	else if (cur_sig >= 10 && cur_sig <= 20)
		ret_sig = 42 + (((cur_sig - 10) * 2) / 3);
	else if (cur_sig >= 5 && cur_sig <= 9)
		ret_sig = 22 + (((cur_sig - 5) * 3) / 2);
	else if (cur_sig >= 1 && cur_sig <= 4)
		ret_sig = 6 + (((cur_sig - 1) * 3) / 2);
	else
		ret_sig = cur_sig;
	return ret_sig;
}


// ------------------------------------------------------------------------- //




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
          int cur_sig = 100;
          int benchRet = r8712_signal_scale_mapping(cur_sig);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int cur_sig = 255;
          int benchRet = r8712_signal_scale_mapping(cur_sig);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cur_sig = 10;
          int benchRet = r8712_signal_scale_mapping(cur_sig);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
