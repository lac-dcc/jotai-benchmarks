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
       1            linked\n\
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
struct nvdimm_bus_descriptor {int dummy; } ;
struct nvdimm_bus {struct nvdimm_bus_descriptor* nd_desc; } ;

/* Variables and functions */

struct nvdimm_bus_descriptor *to_nd_desc(struct nvdimm_bus *nvdimm_bus)
{
	/* struct nvdimm_bus definition is private to libnvdimm */
	return nvdimm_bus->nd_desc;
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
          int _len_nvdimm_bus0 = 1;
          struct nvdimm_bus * nvdimm_bus = (struct nvdimm_bus *) malloc(_len_nvdimm_bus0*sizeof(struct nvdimm_bus));
          for(int _i0 = 0; _i0 < _len_nvdimm_bus0; _i0++) {
              int _len_nvdimm_bus__i0__nd_desc0 = 1;
          nvdimm_bus[_i0].nd_desc = (struct nvdimm_bus_descriptor *) malloc(_len_nvdimm_bus__i0__nd_desc0*sizeof(struct nvdimm_bus_descriptor));
          for(int _j0 = 0; _j0 < _len_nvdimm_bus__i0__nd_desc0; _j0++) {
            nvdimm_bus[_i0].nd_desc->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct nvdimm_bus_descriptor * benchRet = to_nd_desc(nvdimm_bus);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_nvdimm_bus0; _aux++) {
          free(nvdimm_bus[_aux].nd_desc);
          }
          free(nvdimm_bus);
        
        break;
    }
    // linked
    case 1:
    {
          int _len_nvdimm_bus0 = 1;
          struct nvdimm_bus * nvdimm_bus = (struct nvdimm_bus *) malloc(_len_nvdimm_bus0*sizeof(struct nvdimm_bus));
          for(int _i0 = 0; _i0 < _len_nvdimm_bus0; _i0++) {
              int _len_nvdimm_bus__i0__nd_desc0 = 1;
          nvdimm_bus[_i0].nd_desc = (struct nvdimm_bus_descriptor *) malloc(_len_nvdimm_bus__i0__nd_desc0*sizeof(struct nvdimm_bus_descriptor));
          for(int _j0 = 0; _j0 < _len_nvdimm_bus__i0__nd_desc0; _j0++) {
            nvdimm_bus[_i0].nd_desc->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct nvdimm_bus_descriptor * benchRet = to_nd_desc(nvdimm_bus);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_nvdimm_bus0; _aux++) {
          free(nvdimm_bus[_aux].nd_desc);
          }
          free(nvdimm_bus);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
