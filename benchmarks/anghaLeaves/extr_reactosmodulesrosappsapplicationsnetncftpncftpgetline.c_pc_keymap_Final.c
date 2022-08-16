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
#define  K_DELETE 137 
#define  K_DOWN 136 
#define  K_END 135 
#define  K_HOME 134 
#define  K_INSERT 133 
#define  K_LEFT 132 
#define  K_PGDN 131 
#define  K_PGUP 130 
#define  K_RIGHT 129 
#define  K_UP 128 

int pc_keymap(int c)
{
    switch (c) {
	case K_UP:
	case K_PGUP:
		c = 16;		/* up -> ^P */
        break;
	case K_DOWN:
	case K_PGDN:
		c = 14;		/* down -> ^N */
        break;
    case K_LEFT:
		c = 2;		/* left -> ^B */
        break;
    case K_RIGHT:
		c = 6;		/* right -> ^F */
        break;
	case K_END:
		c = 5;		/* end -> ^E */
		break;
	case K_HOME:
		c = 1;		/* home -> ^A */
		break;
	case K_INSERT:
		c = 15;		/* insert -> ^O */
		break;
	case K_DELETE:
		c = 4;		/* del -> ^D */
		break;
    default:
		c = 0;    /* make it garbage */
    }
    return c;
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
          int c = 100;
          int benchRet = pc_keymap(c);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int c = 255;
          int benchRet = pc_keymap(c);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int c = 10;
          int benchRet = pc_keymap(c);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
