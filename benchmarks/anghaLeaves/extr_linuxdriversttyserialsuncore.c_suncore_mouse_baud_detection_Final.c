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

int suncore_mouse_baud_detection(unsigned char ch, int is_break)
{
	static int mouse_got_break = 0;
	static int ctr = 0;

	if (is_break) {
		/* Let a few normal bytes go by before we jump the gun
		 * and say we need to try another baud rate.
		 */
		if (mouse_got_break && ctr < 8)
			return 1;

		/* Ok, we need to try another baud. */
		ctr = 0;
		mouse_got_break = 1;
		return 2;
	}
	if (mouse_got_break) {
		ctr++;
		if (ch == 0x87) {
			/* Correct baud rate determined. */
			mouse_got_break = 0;
		}
		return 1;
	}
	return 0;
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
          unsigned char ch = 100;
          int is_break = 100;
          int benchRet = suncore_mouse_baud_detection(ch,is_break);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned char ch = 255;
          int is_break = 255;
          int benchRet = suncore_mouse_baud_detection(ch,is_break);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned char ch = 10;
          int is_break = 10;
          int benchRet = suncore_mouse_baud_detection(ch,is_break);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
