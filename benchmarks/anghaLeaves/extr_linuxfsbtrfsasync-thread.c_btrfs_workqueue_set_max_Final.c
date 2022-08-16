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
struct btrfs_workqueue {TYPE_2__* high; TYPE_1__* normal; } ;
struct TYPE_4__ {int limit_active; } ;
struct TYPE_3__ {int limit_active; } ;

/* Variables and functions */

void btrfs_workqueue_set_max(struct btrfs_workqueue *wq, int limit_active)
{
	if (!wq)
		return;
	wq->normal->limit_active = limit_active;
	if (wq->high)
		wq->high->limit_active = limit_active;
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
          int limit_active = 100;
          int _len_wq0 = 1;
          struct btrfs_workqueue * wq = (struct btrfs_workqueue *) malloc(_len_wq0*sizeof(struct btrfs_workqueue));
          for(int _i0 = 0; _i0 < _len_wq0; _i0++) {
              int _len_wq__i0__high0 = 1;
          wq[_i0].high = (struct TYPE_4__ *) malloc(_len_wq__i0__high0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_wq__i0__high0; _j0++) {
            wq[_i0].high->limit_active = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_wq__i0__normal0 = 1;
          wq[_i0].normal = (struct TYPE_3__ *) malloc(_len_wq__i0__normal0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_wq__i0__normal0; _j0++) {
            wq[_i0].normal->limit_active = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          btrfs_workqueue_set_max(wq,limit_active);
          for(int _aux = 0; _aux < _len_wq0; _aux++) {
          free(wq[_aux].high);
          }
          for(int _aux = 0; _aux < _len_wq0; _aux++) {
          free(wq[_aux].normal);
          }
          free(wq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
