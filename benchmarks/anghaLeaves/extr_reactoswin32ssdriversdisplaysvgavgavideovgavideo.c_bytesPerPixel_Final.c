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
typedef  int ULONG ;
typedef  int UCHAR ;

/* Variables and functions */
#define  BMF_16BPP 135 
#define  BMF_1BPP 134 
#define  BMF_24BPP 133 
#define  BMF_32BPP 132 
#define  BMF_4BPP 131 
#define  BMF_4RLE 130 
#define  BMF_8BPP 129 
#define  BMF_8RLE 128 

UCHAR bytesPerPixel(ULONG Format)
{
    /* This function is taken from /subsys/win32k/eng/surface.c
     * FIXME: GDI bitmaps are supposed to be pixel-packed. Right now if the
     * pixel size if < 1 byte we expand it to 1 byte for simplicities sake */

    switch (Format)
    {
        case BMF_1BPP:
            return 1;

        case BMF_4BPP:
        case BMF_4RLE:
            return 1;

        case BMF_8BPP:
        case BMF_8RLE:
            return 1;

        case BMF_16BPP:
            return 2;

        case BMF_24BPP:
            return 3;

        case BMF_32BPP:
            return 4;

        default:
            return 0;
    }
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
          int Format = 100;
          int benchRet = bytesPerPixel(Format);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int Format = 255;
          int benchRet = bytesPerPixel(Format);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int Format = 10;
          int benchRet = bytesPerPixel(Format);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
