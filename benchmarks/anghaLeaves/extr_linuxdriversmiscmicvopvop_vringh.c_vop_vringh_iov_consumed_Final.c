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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u32 ;
struct vringh_kiov {int i; TYPE_1__* iov; int /*<<< orphan*/  consumed; } ;
struct TYPE_2__ {scalar_t__ iov_len; } ;

/* Variables and functions */

__attribute__((used)) static inline u32 vop_vringh_iov_consumed(struct vringh_kiov *iov)
{
	int i;
	u32 total = iov->consumed;

	for (i = 0; i < iov->i; i++)
		total += iov->iov[i].iov_len;
	return total;
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
          int _len_iov0 = 1;
          struct vringh_kiov * iov = (struct vringh_kiov *) malloc(_len_iov0*sizeof(struct vringh_kiov));
          for(int _i0 = 0; _i0 < _len_iov0; _i0++) {
            iov[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iov__i0__iov0 = 1;
          iov[_i0].iov = (struct TYPE_2__ *) malloc(_len_iov__i0__iov0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_iov__i0__iov0; _j0++) {
            iov[_i0].iov->iov_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        iov[_i0].consumed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vop_vringh_iov_consumed(iov);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_iov0; _aux++) {
          free(iov[_aux].iov);
          }
          free(iov);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
