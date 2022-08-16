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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int nports; } ;
struct rvt_dev_info {TYPE_3__** ports; TYPE_1__ dparms; } ;
struct TYPE_5__ {scalar_t__ rb_node; } ;
struct TYPE_6__ {TYPE_2__ mcast_tree; } ;

/* Variables and functions */

int rvt_mcast_tree_empty(struct rvt_dev_info *rdi)
{
	int i;
	int in_use = 0;

	for (i = 0; i < rdi->dparms.nports; i++)
		if (rdi->ports[i]->mcast_tree.rb_node)
			in_use++;
	return in_use;
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
          int _len_rdi0 = 1;
          struct rvt_dev_info * rdi = (struct rvt_dev_info *) malloc(_len_rdi0*sizeof(struct rvt_dev_info));
          for(int _i0 = 0; _i0 < _len_rdi0; _i0++) {
              int _len_rdi__i0__ports0 = 1;
          rdi[_i0].ports = (struct TYPE_6__ **) malloc(_len_rdi__i0__ports0*sizeof(struct TYPE_6__ *));
          for(int _j0 = 0; _j0 < _len_rdi__i0__ports0; _j0++) {
            int _len_rdi__i0__ports1 = 1;
            rdi[_i0].ports[_j0] = (struct TYPE_6__ *) malloc(_len_rdi__i0__ports1*sizeof(struct TYPE_6__));
            for(int _j1 = 0; _j1 < _len_rdi__i0__ports1; _j1++) {
              rdi[_i0].ports[_j0]->mcast_tree.rb_node = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        rdi[_i0].dparms.nports = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rvt_mcast_tree_empty(rdi);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rdi0; _aux++) {
          free(*(rdi[_aux].ports));
        free(rdi[_aux].ports);
          }
          free(rdi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
