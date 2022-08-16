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
struct ext4_fsmap {scalar_t__ fmr_length; scalar_t__ fmr_physical; } ;
typedef  scalar_t__ ext4_fsblk_t ;

/* Variables and functions */

__attribute__((used)) static inline ext4_fsblk_t ext4_fsmap_next_pblk(struct ext4_fsmap *fmr)
{
	return fmr->fmr_physical + fmr->fmr_length;
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
          int _len_fmr0 = 1;
          struct ext4_fsmap * fmr = (struct ext4_fsmap *) malloc(_len_fmr0*sizeof(struct ext4_fsmap));
          for(int _i0 = 0; _i0 < _len_fmr0; _i0++) {
            fmr[_i0].fmr_length = ((-2 * (next_i()%2)) + 1) * next_i();
        fmr[_i0].fmr_physical = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = ext4_fsmap_next_pblk(fmr);
          printf("%ld\n", benchRet); 
          free(fmr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
