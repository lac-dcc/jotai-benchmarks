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
struct muram_info {scalar_t__ vbase; } ;

/* Variables and functions */

unsigned long fman_muram_offset_to_vbase(struct muram_info *muram,
					 unsigned long offset)
{
	return offset + (unsigned long)muram->vbase;
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
          unsigned long offset = 100;
          int _len_muram0 = 1;
          struct muram_info * muram = (struct muram_info *) malloc(_len_muram0*sizeof(struct muram_info));
          for(int _i0 = 0; _i0 < _len_muram0; _i0++) {
            muram[_i0].vbase = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = fman_muram_offset_to_vbase(muram,offset);
          printf("%lu\n", benchRet); 
          free(muram);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned long offset = 10;
          int _len_muram0 = 100;
          struct muram_info * muram = (struct muram_info *) malloc(_len_muram0*sizeof(struct muram_info));
          for(int _i0 = 0; _i0 < _len_muram0; _i0++) {
            muram[_i0].vbase = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = fman_muram_offset_to_vbase(muram,offset);
          printf("%lu\n", benchRet); 
          free(muram);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
