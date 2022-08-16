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
struct inet6_dev {unsigned long mc_qrv; unsigned long mc_qi; unsigned long mc_qri; scalar_t__ mc_v1_seen; } ;

/* Variables and functions */
 scalar_t__ jiffies ; 

__attribute__((used)) static void mld_set_v1_mode(struct inet6_dev *idev)
{
	/* RFC3810, relevant sections:
	 *  - 9.1. Robustness Variable
	 *  - 9.2. Query Interval
	 *  - 9.3. Query Response Interval
	 *  - 9.12. Older Version Querier Present Timeout
	 */
	unsigned long switchback;

	switchback = (idev->mc_qrv * idev->mc_qi) + idev->mc_qri;

	idev->mc_v1_seen = jiffies + switchback;
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
          int _len_idev0 = 1;
          struct inet6_dev * idev = (struct inet6_dev *) malloc(_len_idev0*sizeof(struct inet6_dev));
          for(int _i0 = 0; _i0 < _len_idev0; _i0++) {
            idev[_i0].mc_qrv = ((-2 * (next_i()%2)) + 1) * next_i();
        idev[_i0].mc_qi = ((-2 * (next_i()%2)) + 1) * next_i();
        idev[_i0].mc_qri = ((-2 * (next_i()%2)) + 1) * next_i();
        idev[_i0].mc_v1_seen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mld_set_v1_mode(idev);
          free(idev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
