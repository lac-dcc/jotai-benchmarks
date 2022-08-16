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
typedef  int USHORT ;
typedef  size_t ULONG ;
typedef  int* PUSHORT ;

/* Variables and functions */
 size_t GLOBAL_SCREEN_HEIGHT ; 
 size_t GLOBAL_SCREEN_WIDTH ; 
 int /*<<< orphan*/  pScreenBufferVga ; 

void InvertLineVga(ULONG line)
{
    ULONG i;
    PUSHORT p = (PUSHORT)pScreenBufferVga;
    USHORT attr;

    if(line < GLOBAL_SCREEN_HEIGHT)
    {
        attr = p[line*GLOBAL_SCREEN_WIDTH]>>8;
        attr = ((attr & 0x07)<<4) | ((attr & 0xF0)>>4);
        attr <<= 8;
        for(i=0;i<GLOBAL_SCREEN_WIDTH;i++)
            p[line*GLOBAL_SCREEN_WIDTH + i] = (p[line*GLOBAL_SCREEN_WIDTH + i] & 0x00FF) | attr;
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
          unsigned long line = 100;
          InvertLineVga(line);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long line = 255;
          InvertLineVga(line);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long line = 10;
          InvertLineVga(line);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
