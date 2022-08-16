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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ aggregation_timeout; } ;
struct cfhsi {TYPE_2__* qhead; TYPE_1__ cfg; } ;
struct TYPE_4__ {scalar_t__ qlen; } ;

/* Variables and functions */
 scalar_t__ CFHSI_MAX_PKTS ; 
 int CFHSI_PRIO_BEBK ; 

__attribute__((used)) static bool cfhsi_can_send_aggregate(struct cfhsi *cfhsi)
{
	int i;

	if (cfhsi->cfg.aggregation_timeout == 0)
		return true;

	for (i = 0; i < CFHSI_PRIO_BEBK; ++i) {
		if (cfhsi->qhead[i].qlen)
			return true;
	}

	/* TODO: Use aggregation_len instead */
	if (cfhsi->qhead[CFHSI_PRIO_BEBK].qlen >= CFHSI_MAX_PKTS)
		return true;

	return false;
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
          int _len_cfhsi0 = 1;
          struct cfhsi * cfhsi = (struct cfhsi *) malloc(_len_cfhsi0*sizeof(struct cfhsi));
          for(int _i0 = 0; _i0 < _len_cfhsi0; _i0++) {
              int _len_cfhsi__i0__qhead0 = 1;
          cfhsi[_i0].qhead = (struct TYPE_4__ *) malloc(_len_cfhsi__i0__qhead0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cfhsi__i0__qhead0; _j0++) {
            cfhsi[_i0].qhead->qlen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cfhsi[_i0].cfg.aggregation_timeout = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cfhsi_can_send_aggregate(cfhsi);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cfhsi0; _aux++) {
          free(cfhsi[_aux].qhead);
          }
          free(cfhsi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
