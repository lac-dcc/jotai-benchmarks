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
struct i40e_vsi {unsigned int alloc_queue_pairs; } ;

/* Variables and functions */

__attribute__((used)) static unsigned int i40e_max_channels(struct i40e_vsi *vsi)
{
	/* TODO: This code assumes DCB and FD is disabled for now. */
	return vsi->alloc_queue_pairs;
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
          int _len_vsi0 = 1;
          struct i40e_vsi * vsi = (struct i40e_vsi *) malloc(_len_vsi0*sizeof(struct i40e_vsi));
          for(int _i0 = 0; _i0 < _len_vsi0; _i0++) {
            vsi[_i0].alloc_queue_pairs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = i40e_max_channels(vsi);
          printf("%u\n", benchRet); 
          free(vsi);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_vsi0 = 100;
          struct i40e_vsi * vsi = (struct i40e_vsi *) malloc(_len_vsi0*sizeof(struct i40e_vsi));
          for(int _i0 = 0; _i0 < _len_vsi0; _i0++) {
            vsi[_i0].alloc_queue_pairs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = i40e_max_channels(vsi);
          printf("%u\n", benchRet); 
          free(vsi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
