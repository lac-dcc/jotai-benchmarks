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
struct TYPE_3__ {unsigned char r; unsigned char g; unsigned char b; unsigned char a; } ;
typedef  TYPE_1__ NVGcolor ;

/* Variables and functions */

NVGcolor nvgRGBA(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
{
	NVGcolor color;
	// Use longer initialization to suppress warning.
	color.r = r / 255.0f;
	color.g = g / 255.0f;
	color.b = b / 255.0f;
	color.a = a / 255.0f;
	return color;
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
          unsigned char r = 100;
          unsigned char g = 100;
          unsigned char b = 100;
          unsigned char a = 100;
          struct TYPE_3__ benchRet = nvgRGBA(r,g,b,a);
          printf("%c\n", benchRet.r %26 + 'a');
          printf("%c\n", benchRet.g %26 + 'a');
          printf("%c\n", benchRet.b %26 + 'a');
          printf("%c\n", benchRet.a %26 + 'a');
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned char r = 255;
          unsigned char g = 255;
          unsigned char b = 255;
          unsigned char a = 255;
          struct TYPE_3__ benchRet = nvgRGBA(r,g,b,a);
          printf("%c\n", benchRet.r %26 + 'a');
          printf("%c\n", benchRet.g %26 + 'a');
          printf("%c\n", benchRet.b %26 + 'a');
          printf("%c\n", benchRet.a %26 + 'a');
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned char r = 10;
          unsigned char g = 10;
          unsigned char b = 10;
          unsigned char a = 10;
          struct TYPE_3__ benchRet = nvgRGBA(r,g,b,a);
          printf("%c\n", benchRet.r %26 + 'a');
          printf("%c\n", benchRet.g %26 + 'a');
          printf("%c\n", benchRet.b %26 + 'a');
          printf("%c\n", benchRet.a %26 + 'a');
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
