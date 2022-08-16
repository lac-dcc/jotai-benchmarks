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
typedef  int DWORD ;

/* Variables and functions */
 int DDPCAPS_1BIT ; 
 int DDPCAPS_2BIT ; 
 int DDPCAPS_4BIT ; 
 int DDPCAPS_8BIT ; 
 int DDPCAPS_8BITENTRIES ; 
 int DDPCAPS_ALLOW256 ; 
 int DDPCAPS_ALPHA ; 
 int DDRAWIPAL_16 ; 
 int DDRAWIPAL_2 ; 
 int DDRAWIPAL_256 ; 
 int DDRAWIPAL_4 ; 
 int DDRAWIPAL_ALLOW256 ; 
 int DDRAWIPAL_ALPHA ; 
 int DDRAWIPAL_STORED_8INDEX ; 

DWORD ConvertPCapsFlags(DWORD dwFlags)
{
    DWORD ret = 0;
    if(dwFlags & DDPCAPS_4BIT)
        ret|=DDRAWIPAL_16;
    if(dwFlags & DDPCAPS_8BIT)
        ret|=DDRAWIPAL_256;
    if(dwFlags & DDPCAPS_8BITENTRIES)
        ret|=DDRAWIPAL_STORED_8INDEX;
    if(dwFlags & DDPCAPS_ALLOW256)
        ret|=DDRAWIPAL_ALLOW256;
    if(dwFlags & DDPCAPS_ALPHA)
        ret|=DDRAWIPAL_ALPHA;
    if(dwFlags & DDPCAPS_1BIT)
        ret|=DDRAWIPAL_2;
    if(dwFlags & DDPCAPS_2BIT)
        ret|=DDRAWIPAL_4;

    return ret;
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
          int dwFlags = 100;
          int benchRet = ConvertPCapsFlags(dwFlags);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int dwFlags = 255;
          int benchRet = ConvertPCapsFlags(dwFlags);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int dwFlags = 10;
          int benchRet = ConvertPCapsFlags(dwFlags);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
