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
typedef  scalar_t__ u32 ;
struct nsim_ipsec {scalar_t__ count; TYPE_1__* sa; } ;
struct TYPE_2__ {int /*<<< orphan*/  used; } ;

/* Variables and functions */
 int ENOSPC ; 
 scalar_t__ NSIM_IPSEC_MAX_SA_COUNT ; 

__attribute__((used)) static int nsim_ipsec_find_empty_idx(struct nsim_ipsec *ipsec)
{
	u32 i;

	if (ipsec->count == NSIM_IPSEC_MAX_SA_COUNT)
		return -ENOSPC;

	/* search sa table */
	for (i = 0; i < NSIM_IPSEC_MAX_SA_COUNT; i++) {
		if (!ipsec->sa[i].used)
			return i;
	}

	return -ENOSPC;
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
          int _len_ipsec0 = 1;
          struct nsim_ipsec * ipsec = (struct nsim_ipsec *) malloc(_len_ipsec0*sizeof(struct nsim_ipsec));
          for(int _i0 = 0; _i0 < _len_ipsec0; _i0++) {
            ipsec[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ipsec__i0__sa0 = 1;
          ipsec[_i0].sa = (struct TYPE_2__ *) malloc(_len_ipsec__i0__sa0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ipsec__i0__sa0; _j0++) {
            ipsec[_i0].sa->used = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = nsim_ipsec_find_empty_idx(ipsec);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ipsec0; _aux++) {
          free(ipsec[_aux].sa);
          }
          free(ipsec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
