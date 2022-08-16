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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int x; int y; int width; int height; } ;
typedef  TYPE_1__ ccv_rect_t ;

/* Variables and functions */

__attribute__((used)) inline static ccv_rect_t ccv_rect(int x, int y, int width, int height)
{
	ccv_rect_t rect;
	rect.x = x;
	rect.y = y;
	rect.width = width;
	rect.height = height;
	return rect;
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
          int y = 100;
          int width = 100;
          int height = 100;
          struct TYPE_3__ benchRet = ccv_rect(x,y,width,height);
          printf("%d\n", benchRet.x);
          printf("%d\n", benchRet.y);
          printf("%d\n", benchRet.width);
          printf("%d\n", benchRet.height);
        
        break;
    }
    // big-arr
    case 1:
    {
          int x = 255;
          int y = 255;
          int width = 255;
          int height = 255;
          struct TYPE_3__ benchRet = ccv_rect(x,y,width,height);
          printf("%d\n", benchRet.x);
          printf("%d\n", benchRet.y);
          printf("%d\n", benchRet.width);
          printf("%d\n", benchRet.height);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int x = 10;
          int y = 10;
          int width = 10;
          int height = 10;
          struct TYPE_3__ benchRet = ccv_rect(x,y,width,height);
          printf("%d\n", benchRet.x);
          printf("%d\n", benchRet.y);
          printf("%d\n", benchRet.width);
          printf("%d\n", benchRet.height);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
