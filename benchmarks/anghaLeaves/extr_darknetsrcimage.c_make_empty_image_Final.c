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
struct TYPE_3__ {int h; int w; int c; scalar_t__ data; } ;
typedef  TYPE_1__ image ;

/* Variables and functions */

image make_empty_image(int w, int h, int c)
{
    image out;
    out.data = 0;
    out.h = h;
    out.w = w;
    out.c = c;
    return out;
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
          int w = 100;
          int h = 100;
          int c = 100;
          struct TYPE_3__ benchRet = make_empty_image(w,h,c);
          printf("%d\n", benchRet.h);
          printf("%d\n", benchRet.w);
          printf("%d\n", benchRet.c);
          printf("%ld\n", benchRet.data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int w = 255;
          int h = 255;
          int c = 255;
          struct TYPE_3__ benchRet = make_empty_image(w,h,c);
          printf("%d\n", benchRet.h);
          printf("%d\n", benchRet.w);
          printf("%d\n", benchRet.c);
          printf("%ld\n", benchRet.data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int w = 10;
          int h = 10;
          int c = 10;
          struct TYPE_3__ benchRet = make_empty_image(w,h,c);
          printf("%d\n", benchRet.h);
          printf("%d\n", benchRet.w);
          printf("%d\n", benchRet.c);
          printf("%ld\n", benchRet.data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
