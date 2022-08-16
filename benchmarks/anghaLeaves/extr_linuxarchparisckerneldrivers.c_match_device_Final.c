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
struct parisc_driver {struct parisc_device_id* id_table; } ;
struct parisc_device_id {scalar_t__ sversion; scalar_t__ hw_type; scalar_t__ hversion; } ;
struct TYPE_2__ {scalar_t__ sversion; scalar_t__ hw_type; scalar_t__ hversion; } ;
struct parisc_device {TYPE_1__ id; } ;

/* Variables and functions */
 scalar_t__ HVERSION_ANY_ID ; 
 scalar_t__ HWTYPE_ANY_ID ; 
 scalar_t__ SVERSION_ANY_ID ; 

__attribute__((used)) static int match_device(struct parisc_driver *driver, struct parisc_device *dev)
{
	const struct parisc_device_id *ids;

	for (ids = driver->id_table; ids->sversion; ids++) {
		if ((ids->sversion != SVERSION_ANY_ID) &&
		    (ids->sversion != dev->id.sversion))
			continue;

		if ((ids->hw_type != HWTYPE_ANY_ID) &&
		    (ids->hw_type != dev->id.hw_type))
			continue;

		if ((ids->hversion != HVERSION_ANY_ID) &&
		    (ids->hversion != dev->id.hversion))
			continue;

		return 1;
	}
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
          int _len_driver0 = 1;
          struct parisc_driver * driver = (struct parisc_driver *) malloc(_len_driver0*sizeof(struct parisc_driver));
          for(int _i0 = 0; _i0 < _len_driver0; _i0++) {
              int _len_driver__i0__id_table0 = 1;
          driver[_i0].id_table = (struct parisc_device_id *) malloc(_len_driver__i0__id_table0*sizeof(struct parisc_device_id));
          for(int _j0 = 0; _j0 < _len_driver__i0__id_table0; _j0++) {
            driver[_i0].id_table->sversion = ((-2 * (next_i()%2)) + 1) * next_i();
        driver[_i0].id_table->hw_type = ((-2 * (next_i()%2)) + 1) * next_i();
        driver[_i0].id_table->hversion = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dev0 = 1;
          struct parisc_device * dev = (struct parisc_device *) malloc(_len_dev0*sizeof(struct parisc_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].id.sversion = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].id.hw_type = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].id.hversion = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = match_device(driver,dev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_driver0; _aux++) {
          free(driver[_aux].id_table);
          }
          free(driver);
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
