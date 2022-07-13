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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ ut64 ;
struct TYPE_4__ {scalar_t__ addr; scalar_t__ size; } ;
typedef  TYPE_1__ RInterval ;

/* Variables and functions */

__attribute__((used)) static inline bool r_itv_overlap(RInterval itv, RInterval x) {
	const ut64 end = itv.addr + itv.size, end1 = x.addr + x.size;
	return (!end1 || itv.addr < end1) && (!end || x.addr < end);
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
          struct TYPE_4__ itv;
        itv.addr = ((-2 * (next_i()%2)) + 1) * next_i();
        itv.size = ((-2 * (next_i()%2)) + 1) * next_i();
          struct TYPE_4__ x;
        x.addr = ((-2 * (next_i()%2)) + 1) * next_i();
        x.size = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = r_itv_overlap(itv,x);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          struct TYPE_4__ itv;
        itv.addr = ((-2 * (next_i()%2)) + 1) * next_i();
        itv.size = ((-2 * (next_i()%2)) + 1) * next_i();
          struct TYPE_4__ x;
        x.addr = ((-2 * (next_i()%2)) + 1) * next_i();
        x.size = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = r_itv_overlap(itv,x);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          struct TYPE_4__ itv;
        itv.addr = ((-2 * (next_i()%2)) + 1) * next_i();
        itv.size = ((-2 * (next_i()%2)) + 1) * next_i();
          struct TYPE_4__ x;
        x.addr = ((-2 * (next_i()%2)) + 1) * next_i();
        x.size = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = r_itv_overlap(itv,x);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
