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
struct __vxge_hw_channel {int reserve_ptr; int reserve_top; int length; int free_ptr; } ;

/* Variables and functions */

int vxge_hw_channel_dtr_count(struct __vxge_hw_channel *channel)
{
	return (channel->reserve_ptr - channel->reserve_top) +
		(channel->length - channel->free_ptr);
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
          int _len_channel0 = 1;
          struct __vxge_hw_channel * channel = (struct __vxge_hw_channel *) malloc(_len_channel0*sizeof(struct __vxge_hw_channel));
          for(int _i0 = 0; _i0 < _len_channel0; _i0++) {
            channel[_i0].reserve_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        channel[_i0].reserve_top = ((-2 * (next_i()%2)) + 1) * next_i();
        channel[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        channel[_i0].free_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vxge_hw_channel_dtr_count(channel);
          printf("%d\n", benchRet); 
          free(channel);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
