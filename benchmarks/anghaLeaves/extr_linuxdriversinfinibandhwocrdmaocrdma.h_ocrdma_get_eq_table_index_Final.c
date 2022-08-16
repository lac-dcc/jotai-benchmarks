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
struct ocrdma_dev {int eq_cnt; TYPE_2__* eq_tbl; } ;
struct TYPE_3__ {int id; } ;
struct TYPE_4__ {TYPE_1__ q; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static inline int ocrdma_get_eq_table_index(struct ocrdma_dev *dev,
		int eqid)
{
	int indx;

	for (indx = 0; indx < dev->eq_cnt; indx++) {
		if (dev->eq_tbl[indx].q.id == eqid)
			return indx;
	}

	return -EINVAL;
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
          int eqid = 100;
          int _len_dev0 = 1;
          struct ocrdma_dev * dev = (struct ocrdma_dev *) malloc(_len_dev0*sizeof(struct ocrdma_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].eq_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__eq_tbl0 = 1;
          dev[_i0].eq_tbl = (struct TYPE_4__ *) malloc(_len_dev__i0__eq_tbl0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dev__i0__eq_tbl0; _j0++) {
            dev[_i0].eq_tbl->q.id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ocrdma_get_eq_table_index(dev,eqid);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].eq_tbl);
          }
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
