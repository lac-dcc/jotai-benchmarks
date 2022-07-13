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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
 int byteCounter ; 
 int leftMask ; 
 int rightMask ; 

void
get_masks(int x, int w)
{
    register int tmp;

    leftMask = rightMask = 0;
    byteCounter = w;
    /* right margin */
    tmp = (x+w) & 7;
    if (tmp)
    {
        byteCounter -= tmp;
        rightMask = (unsigned char)(0xff00 >> tmp);
    }
    /* left margin */
    tmp = x & 7;
    if (tmp)
    {
        byteCounter -= (8 - tmp);
        leftMask = (0xff >> tmp);
    }
    /* too small ? */
    if (byteCounter < 0)
    {
        leftMask &= rightMask;
        rightMask = 0;
        byteCounter = 0;
    }
    byteCounter /= 8;
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
          int x = 100;
          int w = 100;
          get_masks(x,w);
        
        break;
    }
    // big-arr
    case 1:
    {
          int x = 255;
          int w = 255;
          get_masks(x,w);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int x = 10;
          int w = 10;
          get_masks(x,w);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
