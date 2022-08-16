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
typedef  scalar_t__ u64 ;
struct mthca_uar {int index; } ;
struct TYPE_2__ {int uarc_size; scalar_t__ uarc_base; } ;
struct mthca_dev {TYPE_1__ uar_table; } ;

/* Variables and functions */
 int MTHCA_ICM_PAGE_SIZE ; 

__attribute__((used)) static u64 mthca_uarc_virt(struct mthca_dev *dev, struct mthca_uar *uar, int page)
{
	return dev->uar_table.uarc_base +
		uar->index * dev->uar_table.uarc_size +
		page * MTHCA_ICM_PAGE_SIZE;
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
          int page = 100;
          int _len_dev0 = 1;
          struct mthca_dev * dev = (struct mthca_dev *) malloc(_len_dev0*sizeof(struct mthca_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].uar_table.uarc_size = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].uar_table.uarc_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_uar0 = 1;
          struct mthca_uar * uar = (struct mthca_uar *) malloc(_len_uar0*sizeof(struct mthca_uar));
          for(int _i0 = 0; _i0 < _len_uar0; _i0++) {
            uar[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = mthca_uarc_virt(dev,uar,page);
          printf("%ld\n", benchRet); 
          free(dev);
          free(uar);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
