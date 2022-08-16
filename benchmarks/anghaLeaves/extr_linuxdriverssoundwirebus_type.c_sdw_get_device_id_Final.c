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
struct TYPE_2__ {scalar_t__ mfg_id; scalar_t__ part_id; } ;
struct sdw_slave {TYPE_1__ id; } ;
struct sdw_driver {struct sdw_device_id* id_table; } ;
struct sdw_device_id {scalar_t__ mfg_id; scalar_t__ part_id; } ;

/* Variables and functions */

__attribute__((used)) static const struct sdw_device_id *
sdw_get_device_id(struct sdw_slave *slave, struct sdw_driver *drv)
{
	const struct sdw_device_id *id = drv->id_table;

	while (id && id->mfg_id) {
		if (slave->id.mfg_id == id->mfg_id &&
		    slave->id.part_id == id->part_id)
			return id;
		id++;
	}

	return NULL;
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
            slave[_i0].id.mfg_id = ((-2 * (next_i()%2)) + 1) * next_i();
        slave[_i0].id.part_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_drv0 = 1;
          struct sdw_driver * drv = (struct sdw_driver *) malloc(_len_drv0*sizeof(struct sdw_driver));
          for(int _i0 = 0; _i0 < _len_drv0; _i0++) {
              int _len_drv__i0__id_table0 = 1;
          drv[_i0].id_table = (struct sdw_device_id *) malloc(_len_drv__i0__id_table0*sizeof(struct sdw_device_id));
          for(int _j0 = 0; _j0 < _len_drv__i0__id_table0; _j0++) {
            drv[_i0].id_table->mfg_id = ((-2 * (next_i()%2)) + 1) * next_i();
        drv[_i0].id_table->part_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          const struct sdw_device_id * benchRet = sdw_get_device_id(slave,drv);
          free(slave);
          for(int _aux = 0; _aux < _len_drv0; _aux++) {
          free(drv[_aux].id_table);
          }
          free(drv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
