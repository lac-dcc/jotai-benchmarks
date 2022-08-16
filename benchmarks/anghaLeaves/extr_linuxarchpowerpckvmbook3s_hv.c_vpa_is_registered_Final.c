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
struct kvmppc_vpa {scalar_t__ next_gpa; int /*<<< orphan*/ * pinned_addr; scalar_t__ update_pending; } ;

/* Variables and functions */

__attribute__((used)) static int vpa_is_registered(struct kvmppc_vpa *vpap)
{
	if (vpap->update_pending)
		return vpap->next_gpa != 0;
	return vpap->pinned_addr != NULL;
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
          int _len_vpap0 = 1;
          struct kvmppc_vpa * vpap = (struct kvmppc_vpa *) malloc(_len_vpap0*sizeof(struct kvmppc_vpa));
          for(int _i0 = 0; _i0 < _len_vpap0; _i0++) {
            vpap[_i0].next_gpa = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vpap__i0__pinned_addr0 = 1;
          vpap[_i0].pinned_addr = (int *) malloc(_len_vpap__i0__pinned_addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vpap__i0__pinned_addr0; _j0++) {
            vpap[_i0].pinned_addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vpap[_i0].update_pending = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vpa_is_registered(vpap);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vpap0; _aux++) {
          free(vpap[_aux].pinned_addr);
          }
          free(vpap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
