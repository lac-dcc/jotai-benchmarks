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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ USHORT ;
typedef  size_t ULONG ;
struct TYPE_3__ {int Asuchar; } ;
struct TYPE_4__ {TYPE_1__ u; } ;
typedef  scalar_t__* PUSHORT ;

/* Variables and functions */
 size_t GLOBAL_SCREEN_HEIGHT ; 
 size_t GLOBAL_SCREEN_WIDTH ; 
 TYPE_2__ attr ; 
 int /*<<< orphan*/  pScreenBufferVga ; 

void ClrLineVga(ULONG line)
{
    ULONG i;
    PUSHORT p = (PUSHORT)pScreenBufferVga;

    if(line < GLOBAL_SCREEN_HEIGHT)
    {
        for(i=0;i<GLOBAL_SCREEN_WIDTH;i++)
            p[line*GLOBAL_SCREEN_WIDTH + i] = (USHORT)((attr.u.Asuchar<<8) | 0x20);
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
          ClrLineVga(line);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long line = 255;
          ClrLineVga(line);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long line = 10;
          ClrLineVga(line);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
