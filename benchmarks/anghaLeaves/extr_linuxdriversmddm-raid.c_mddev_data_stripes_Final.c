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
struct TYPE_3__ {unsigned int raid_disks; } ;
struct raid_set {TYPE_2__* raid_type; TYPE_1__ md; } ;
struct TYPE_4__ {unsigned int parity_devs; } ;

/* Variables and functions */

__attribute__((used)) static unsigned int mddev_data_stripes(struct raid_set *rs)
{
	return rs->md.raid_disks - rs->raid_type->parity_devs;
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
          int _len_rs0 = 1;
          struct raid_set * rs = (struct raid_set *) malloc(_len_rs0*sizeof(struct raid_set));
          for(int _i0 = 0; _i0 < _len_rs0; _i0++) {
              int _len_rs__i0__raid_type0 = 1;
          rs[_i0].raid_type = (struct TYPE_4__ *) malloc(_len_rs__i0__raid_type0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_rs__i0__raid_type0; _j0++) {
            rs[_i0].raid_type->parity_devs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rs[_i0].md.raid_disks = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = mddev_data_stripes(rs);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_rs0; _aux++) {
          free(rs[_aux].raid_type);
          }
          free(rs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
