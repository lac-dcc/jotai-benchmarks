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
struct sdw_slave_id {scalar_t__ unique_id; scalar_t__ mfg_id; scalar_t__ part_id; scalar_t__ class_id; } ;
struct TYPE_2__ {scalar_t__ unique_id; scalar_t__ mfg_id; scalar_t__ part_id; scalar_t__ class_id; } ;
struct sdw_slave {TYPE_1__ id; } ;

/* Variables and functions */
 int ENODEV ; 

__attribute__((used)) static int sdw_compare_devid(struct sdw_slave *slave, struct sdw_slave_id id)
{

	if ((slave->id.unique_id != id.unique_id) ||
	    (slave->id.mfg_id != id.mfg_id) ||
	    (slave->id.part_id != id.part_id) ||
	    (slave->id.class_id != id.class_id))
		return -ENODEV;

	return 0;
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
          int _len_slave0 = 1;
          struct sdw_slave * slave = (struct sdw_slave *) malloc(_len_slave0*sizeof(struct sdw_slave));
          for(int _i0 = 0; _i0 < _len_slave0; _i0++) {
            slave[_i0].id.unique_id = ((-2 * (next_i()%2)) + 1) * next_i();
        slave[_i0].id.mfg_id = ((-2 * (next_i()%2)) + 1) * next_i();
        slave[_i0].id.part_id = ((-2 * (next_i()%2)) + 1) * next_i();
        slave[_i0].id.class_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct sdw_slave_id id;
        id.unique_id = ((-2 * (next_i()%2)) + 1) * next_i();
        id.mfg_id = ((-2 * (next_i()%2)) + 1) * next_i();
        id.part_id = ((-2 * (next_i()%2)) + 1) * next_i();
        id.class_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = sdw_compare_devid(slave,id);
          printf("%d\n", benchRet); 
          free(slave);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
