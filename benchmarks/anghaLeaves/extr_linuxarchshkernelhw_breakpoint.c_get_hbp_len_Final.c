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
typedef  int u16 ;

/* Variables and functions */
#define  SH_BREAKPOINT_LEN_1 131 
#define  SH_BREAKPOINT_LEN_2 130 
#define  SH_BREAKPOINT_LEN_4 129 
#define  SH_BREAKPOINT_LEN_8 128 

__attribute__((used)) static int get_hbp_len(u16 hbp_len)
{
	unsigned int len_in_bytes = 0;

	switch (hbp_len) {
	case SH_BREAKPOINT_LEN_1:
		len_in_bytes = 1;
		break;
	case SH_BREAKPOINT_LEN_2:
		len_in_bytes = 2;
		break;
	case SH_BREAKPOINT_LEN_4:
		len_in_bytes = 4;
		break;
	case SH_BREAKPOINT_LEN_8:
		len_in_bytes = 8;
		break;
	}
	return len_in_bytes;
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
          int hbp_len = 100;
          int benchRet = get_hbp_len(hbp_len);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int hbp_len = 255;
          int benchRet = get_hbp_len(hbp_len);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int hbp_len = 10;
          int benchRet = get_hbp_len(hbp_len);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
