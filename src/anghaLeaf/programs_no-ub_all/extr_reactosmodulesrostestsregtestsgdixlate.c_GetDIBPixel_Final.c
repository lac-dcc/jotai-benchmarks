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
       0            big-arr\n\
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
typedef  int WORD ;
typedef  int ULONG ;
typedef  int /*<<< orphan*/  PVOID ;
typedef  int PCHAR ;
typedef  int DWORD ;

/* Variables and functions */
#define  BMF_16BPP_555 134 
#define  BMF_16BPP_565 133 
#define  BMF_1BPP 132 
#define  BMF_24BPP_BGR 131 
#define  BMF_24BPP_RGB 130 
#define  BMF_32BPP_BGR 129 
#define  BMF_32BPP_RGB 128 

ULONG
GetDIBPixel(ULONG iFormat, PVOID pvBits, ULONG x)
{
    switch (iFormat)
    {
        case BMF_1BPP:
            // 
        case BMF_16BPP_555:
        case BMF_16BPP_565:
            return *(WORD*)((PCHAR)pvBits + x * sizeof(WORD));

        case BMF_24BPP_RGB:
        case BMF_24BPP_BGR:
            return (*(DWORD*)((PCHAR)pvBits + x * 3)) & 0xffffff;

        case BMF_32BPP_RGB:
        case BMF_32BPP_BGR:
            return *(DWORD*)((PCHAR)pvBits + x * sizeof(DWORD));
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

    // big-arr
    case 0:
    {
          int iFormat = 255;
          int pvBits = 255;
          int x = 255;
          int benchRet = GetDIBPixel(iFormat,pvBits,x);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
