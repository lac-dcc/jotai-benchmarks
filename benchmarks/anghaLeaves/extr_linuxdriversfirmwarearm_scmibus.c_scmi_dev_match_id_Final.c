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

/* Type definitions */
struct scmi_driver {struct scmi_device_id* id_table; } ;
struct scmi_device_id {scalar_t__ protocol_id; } ;
struct scmi_device {scalar_t__ protocol_id; } ;

/* Variables and functions */

__attribute__((used)) static const struct scmi_device_id *
scmi_dev_match_id(struct scmi_device *scmi_dev, struct scmi_driver *scmi_drv)
{
	const struct scmi_device_id *id = scmi_drv->id_table;

	if (!id)
		return NULL;

	for (; id->protocol_id; id++)
		if (id->protocol_id == scmi_dev->protocol_id)
			return id;

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
          int _len_scmi_dev0 = 1;
          struct scmi_device * scmi_dev = (struct scmi_device *) malloc(_len_scmi_dev0*sizeof(struct scmi_device));
          for(int _i0 = 0; _i0 < _len_scmi_dev0; _i0++) {
            scmi_dev[_i0].protocol_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_scmi_drv0 = 1;
          struct scmi_driver * scmi_drv = (struct scmi_driver *) malloc(_len_scmi_drv0*sizeof(struct scmi_driver));
          for(int _i0 = 0; _i0 < _len_scmi_drv0; _i0++) {
              int _len_scmi_drv__i0__id_table0 = 1;
          scmi_drv[_i0].id_table = (struct scmi_device_id *) malloc(_len_scmi_drv__i0__id_table0*sizeof(struct scmi_device_id));
          for(int _j0 = 0; _j0 < _len_scmi_drv__i0__id_table0; _j0++) {
            scmi_drv[_i0].id_table->protocol_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          const struct scmi_device_id * benchRet = scmi_dev_match_id(scmi_dev,scmi_drv);
          free(scmi_dev);
          for(int _aux = 0; _aux < _len_scmi_drv0; _aux++) {
          free(scmi_drv[_aux].id_table);
          }
          free(scmi_drv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
