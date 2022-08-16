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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct zone {scalar_t__ managed_pages; } ;
struct TYPE_3__ {struct zone* node_zones; } ;
typedef  TYPE_1__ pg_data_t ;

/* Variables and functions */
 int MAX_NR_ZONES ; 

void reset_node_managed_pages(pg_data_t *pgdat)
{
	struct zone *z;

	for (z = pgdat->node_zones; z < pgdat->node_zones + MAX_NR_ZONES; z++)
		z->managed_pages = 0;
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
          int _len_pgdat0 = 1;
          struct TYPE_3__ * pgdat = (struct TYPE_3__ *) malloc(_len_pgdat0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pgdat0; _i0++) {
              int _len_pgdat__i0__node_zones0 = 1;
          pgdat[_i0].node_zones = (struct zone *) malloc(_len_pgdat__i0__node_zones0*sizeof(struct zone));
          for(int _j0 = 0; _j0 < _len_pgdat__i0__node_zones0; _j0++) {
            pgdat[_i0].node_zones->managed_pages = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          reset_node_managed_pages(pgdat);
          for(int _aux = 0; _aux < _len_pgdat0; _aux++) {
          free(pgdat[_aux].node_zones);
          }
          free(pgdat);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
