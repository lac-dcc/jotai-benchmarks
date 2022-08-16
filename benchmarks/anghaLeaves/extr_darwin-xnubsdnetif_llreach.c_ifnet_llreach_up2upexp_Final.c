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
       1            big-arr-10x\n\
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
typedef  scalar_t__ u_int64_t ;
struct if_llreach {scalar_t__ lr_reachable; } ;

/* Variables and functions */

u_int64_t
ifnet_llreach_up2upexp(struct if_llreach *lr, u_int64_t uptime)
{
	return (lr->lr_reachable + uptime);
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
          long uptime = 100;
          int _len_lr0 = 1;
          struct if_llreach * lr = (struct if_llreach *) malloc(_len_lr0*sizeof(struct if_llreach));
          for(int _i0 = 0; _i0 < _len_lr0; _i0++) {
            lr[_i0].lr_reachable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = ifnet_llreach_up2upexp(lr,uptime);
          printf("%ld\n", benchRet); 
          free(lr);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long uptime = 10;
          int _len_lr0 = 100;
          struct if_llreach * lr = (struct if_llreach *) malloc(_len_lr0*sizeof(struct if_llreach));
          for(int _i0 = 0; _i0 < _len_lr0; _i0++) {
            lr[_i0].lr_reachable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = ifnet_llreach_up2upexp(lr,uptime);
          printf("%ld\n", benchRet); 
          free(lr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
