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
struct fjes_device_shared_info {int epnum; int* ep_status; } ;

/* Variables and functions */

int fjes_hw_epid_is_shared(struct fjes_device_shared_info *share,
			   int dest_epid)
{
	int value = false;

	if (dest_epid < share->epnum)
		value = share->ep_status[dest_epid];

	return value;
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
          int dest_epid = 100;
          int _len_share0 = 1;
          struct fjes_device_shared_info * share = (struct fjes_device_shared_info *) malloc(_len_share0*sizeof(struct fjes_device_shared_info));
          for(int _i0 = 0; _i0 < _len_share0; _i0++) {
            share[_i0].epnum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_share__i0__ep_status0 = 1;
          share[_i0].ep_status = (int *) malloc(_len_share__i0__ep_status0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_share__i0__ep_status0; _j0++) {
            share[_i0].ep_status[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = fjes_hw_epid_is_shared(share,dest_epid);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_share0; _aux++) {
          free(share[_aux].ep_status);
          }
          free(share);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
