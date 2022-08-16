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

__attribute__((used)) static inline bool
ath5k_check_timer_win(int a, int b, int window, int intval)
{
	/*
	 * 1.) usually B should be A + window
	 * 2.) A already updated, B not updated yet
	 * 3.) A already updated and has wrapped around
	 * 4.) B has wrapped around
	 */
	if ((b - a == window) ||				/* 1.) */
	    (a - b == intval - window) ||			/* 2.) */
	    ((a | 0x10000) - b == intval - window) ||		/* 3.) */
	    ((b | 0x10000) - a == window))			/* 4.) */
		return true; /* O.K. */
	return false;
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
          int a = 100;
          int b = 100;
          int window = 100;
          int intval = 100;
          int benchRet = ath5k_check_timer_win(a,b,window,intval);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int a = 255;
          int b = 255;
          int window = 255;
          int intval = 255;
          int benchRet = ath5k_check_timer_win(a,b,window,intval);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int a = 10;
          int b = 10;
          int window = 10;
          int intval = 10;
          int benchRet = ath5k_check_timer_win(a,b,window,intval);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
