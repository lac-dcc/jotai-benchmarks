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
struct mpoa_client {struct mpoa_client* next; struct atm_vcc* mpoad_vcc; } ;
struct atm_vcc {int dummy; } ;

/* Variables and functions */
 struct mpoa_client* mpcs ; 

__attribute__((used)) static struct mpoa_client *find_mpc_by_vcc(struct atm_vcc *vcc)
{
	struct mpoa_client *mpc;

	mpc = mpcs;  /* our global linked list */
	while (mpc != NULL) {
		if (mpc->mpoad_vcc == vcc)
			return mpc;
		mpc = mpc->next;
	}

	return NULL;   /* not found */
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
          int _len_vcc0 = 1;
          struct atm_vcc * vcc = (struct atm_vcc *) malloc(_len_vcc0*sizeof(struct atm_vcc));
          for(int _i0 = 0; _i0 < _len_vcc0; _i0++) {
            vcc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mpoa_client * benchRet = find_mpc_by_vcc(vcc);
          free(vcc);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_vcc0 = 100;
          struct atm_vcc * vcc = (struct atm_vcc *) malloc(_len_vcc0*sizeof(struct atm_vcc));
          for(int _i0 = 0; _i0 < _len_vcc0; _i0++) {
            vcc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mpoa_client * benchRet = find_mpc_by_vcc(vcc);
          free(vcc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
