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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int max_bdi; int num_bds_table; } ;
struct bdc_ep {TYPE_1__ bd_list; } ;

/* Variables and functions */

__attribute__((used)) static inline int find_end_bdi(struct bdc_ep *ep, int next_hwd_bdi)
{
	int end_bdi;

	end_bdi = next_hwd_bdi - 1;
	if (end_bdi < 0)
		end_bdi = ep->bd_list.max_bdi - 1;
	 else if ((end_bdi % (ep->bd_list.num_bds_table-1)) == 0)
		end_bdi--;

	return end_bdi;
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
          int next_hwd_bdi = 100;
          int _len_ep0 = 1;
          struct bdc_ep * ep = (struct bdc_ep *) malloc(_len_ep0*sizeof(struct bdc_ep));
          for(int _i0 = 0; _i0 < _len_ep0; _i0++) {
            ep[_i0].bd_list.max_bdi = ((-2 * (next_i()%2)) + 1) * next_i();
        ep[_i0].bd_list.num_bds_table = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = find_end_bdi(ep,next_hwd_bdi);
          printf("%d\n", benchRet); 
          free(ep);
        
        break;
    }
    // big-arr
    case 1:
    {
          int next_hwd_bdi = 255;
          int _len_ep0 = 65025;
          struct bdc_ep * ep = (struct bdc_ep *) malloc(_len_ep0*sizeof(struct bdc_ep));
          for(int _i0 = 0; _i0 < _len_ep0; _i0++) {
            ep[_i0].bd_list.max_bdi = ((-2 * (next_i()%2)) + 1) * next_i();
        ep[_i0].bd_list.num_bds_table = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = find_end_bdi(ep,next_hwd_bdi);
          printf("%d\n", benchRet); 
          free(ep);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int next_hwd_bdi = 10;
          int _len_ep0 = 100;
          struct bdc_ep * ep = (struct bdc_ep *) malloc(_len_ep0*sizeof(struct bdc_ep));
          for(int _i0 = 0; _i0 < _len_ep0; _i0++) {
            ep[_i0].bd_list.max_bdi = ((-2 * (next_i()%2)) + 1) * next_i();
        ep[_i0].bd_list.num_bds_table = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = find_end_bdi(ep,next_hwd_bdi);
          printf("%d\n", benchRet); 
          free(ep);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
