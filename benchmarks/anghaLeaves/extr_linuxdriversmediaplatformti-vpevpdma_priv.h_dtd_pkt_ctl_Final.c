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
typedef  int u32 ;

/* Variables and functions */
 int DTD_CHAN_SHFT ; 
 int DTD_DIR_SHFT ; 
 int DTD_MODE_SHFT ; 
 int DTD_PKT_TYPE ; 
 int DTD_PKT_TYPE_SHFT ; 
 int DTD_PRI_SHFT ; 

__attribute__((used)) static inline u32 dtd_pkt_ctl(bool mode, bool dir, int chan, int pri,
			int next_chan)
{
	return (DTD_PKT_TYPE << DTD_PKT_TYPE_SHFT) | (mode << DTD_MODE_SHFT) |
		(dir << DTD_DIR_SHFT) | (chan << DTD_CHAN_SHFT) |
		(pri << DTD_PRI_SHFT) | next_chan;
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
          int mode = 100;
          int dir = 100;
          int chan = 100;
          int pri = 100;
          int next_chan = 100;
          int benchRet = dtd_pkt_ctl(mode,dir,chan,pri,next_chan);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int mode = 255;
          int dir = 255;
          int chan = 255;
          int pri = 255;
          int next_chan = 255;
          int benchRet = dtd_pkt_ctl(mode,dir,chan,pri,next_chan);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mode = 10;
          int dir = 10;
          int chan = 10;
          int pri = 10;
          int next_chan = 10;
          int benchRet = dtd_pkt_ctl(mode,dir,chan,pri,next_chan);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
