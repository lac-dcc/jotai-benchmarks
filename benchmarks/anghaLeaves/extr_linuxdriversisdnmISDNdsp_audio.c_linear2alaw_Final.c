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

/* Variables and functions */
 int AMI_MASK ; 

__attribute__((used)) static inline unsigned char linear2alaw(short int linear)
{
	int mask;
	int seg;
	int pcm_val;
	static int seg_end[8] = {
		0xFF, 0x1FF, 0x3FF, 0x7FF, 0xFFF, 0x1FFF, 0x3FFF, 0x7FFF
	};

	pcm_val = linear;
	if (pcm_val >= 0) {
		/* Sign (7th) bit = 1 */
		mask = AMI_MASK | 0x80;
	} else {
		/* Sign bit = 0 */
		mask = AMI_MASK;
		pcm_val = -pcm_val;
	}

	/* Convert the scaled magnitude to segment number. */
	for (seg = 0; seg < 8; seg++) {
		if (pcm_val <= seg_end[seg])
			break;
	}
	/* Combine the sign, segment, and quantization bits. */
	return  ((seg << 4) |
		 ((pcm_val >> ((seg)  ?  (seg + 3)  :  4)) & 0x0F)) ^ mask;
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
          short linear = 100;
          unsigned char benchRet = linear2alaw(linear);
          printf("%c\n", (benchRet %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          short linear = 255;
          unsigned char benchRet = linear2alaw(linear);
          printf("%c\n", (benchRet %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          short linear = 10;
          unsigned char benchRet = linear2alaw(linear);
          printf("%c\n", (benchRet %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
