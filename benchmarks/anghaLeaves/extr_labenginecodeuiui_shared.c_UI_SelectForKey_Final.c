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
#define  K_ENTER 140 
#define  K_JOY1 139 
#define  K_JOY2 138 
#define  K_JOY3 137 
#define  K_JOY4 136 
#define  K_KP_ENTER 135 
#define  K_KP_LEFTARROW 134 
#define  K_KP_RIGHTARROW 133 
#define  K_LEFTARROW 132 
#define  K_MOUSE1 131 
#define  K_MOUSE2 130 
#define  K_MOUSE3 129 
#define  K_RIGHTARROW 128 

int UI_SelectForKey(int key)
{
	switch (key) {
		case K_MOUSE1:
		case K_MOUSE3:
		case K_ENTER:
		case K_KP_ENTER:
		case K_RIGHTARROW:
		case K_KP_RIGHTARROW:
		case K_JOY1:
		case K_JOY2:
		case K_JOY3:
		case K_JOY4:
			return 1; // next

		case K_MOUSE2:
		case K_LEFTARROW:
		case K_KP_LEFTARROW:
			return -1; // previous
	}

	// no change
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
          int key = 100;
          int benchRet = UI_SelectForKey(key);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int key = 255;
          int benchRet = UI_SelectForKey(key);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int key = 10;
          int benchRet = UI_SelectForKey(key);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
