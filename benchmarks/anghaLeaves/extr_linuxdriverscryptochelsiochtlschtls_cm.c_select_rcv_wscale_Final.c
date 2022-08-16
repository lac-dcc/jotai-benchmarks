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
 int MAX_RCV_WND ; 

__attribute__((used)) static unsigned int select_rcv_wscale(int space, int wscale_ok, int win_clamp)
{
	int wscale = 0;

	if (space > MAX_RCV_WND)
		space = MAX_RCV_WND;
	if (win_clamp && win_clamp < space)
		space = win_clamp;

	if (wscale_ok) {
		while (wscale < 14 && (65535 << wscale) < space)
			wscale++;
	}
	return wscale;
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
          int space = 100;
          int wscale_ok = 100;
          int win_clamp = 100;
          unsigned int benchRet = select_rcv_wscale(space,wscale_ok,win_clamp);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int space = 255;
          int wscale_ok = 255;
          int win_clamp = 255;
          unsigned int benchRet = select_rcv_wscale(space,wscale_ok,win_clamp);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int space = 10;
          int wscale_ok = 10;
          int win_clamp = 10;
          unsigned int benchRet = select_rcv_wscale(space,wscale_ok,win_clamp);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
