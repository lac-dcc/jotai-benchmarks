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
typedef  size_t u16 ;
struct TYPE_2__ {struct ena_aenq_handlers* aenq_handlers; } ;
struct ena_com_dev {TYPE_1__ aenq; } ;
struct ena_aenq_handlers {scalar_t__ unimplemented_handler; scalar_t__* handlers; } ;
typedef  scalar_t__ ena_aenq_handler ;

/* Variables and functions */
 size_t ENA_MAX_HANDLERS ; 

__attribute__((used)) static ena_aenq_handler ena_com_get_specific_aenq_cb(struct ena_com_dev *dev,
						     u16 group)
{
	struct ena_aenq_handlers *aenq_handlers = dev->aenq.aenq_handlers;

	if ((group < ENA_MAX_HANDLERS) && aenq_handlers->handlers[group])
		return aenq_handlers->handlers[group];

	return aenq_handlers->unimplemented_handler;
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
          unsigned long group = 100;
          int _len_dev0 = 1;
          struct ena_com_dev * dev = (struct ena_com_dev *) malloc(_len_dev0*sizeof(struct ena_com_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__aenq_aenq_handlers0 = 1;
          dev[_i0].aenq.aenq_handlers = (struct ena_aenq_handlers *) malloc(_len_dev__i0__aenq_aenq_handlers0*sizeof(struct ena_aenq_handlers));
          for(int _j0 = 0; _j0 < _len_dev__i0__aenq_aenq_handlers0; _j0++) {
            dev[_i0].aenq.aenq_handlers->unimplemented_handler = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__aenq_aenq_handlers_handlers0 = 1;
          dev[_i0].aenq.aenq_handlers->handlers = (long *) malloc(_len_dev__i0__aenq_aenq_handlers_handlers0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_dev__i0__aenq_aenq_handlers_handlers0; _j0++) {
            dev[_i0].aenq.aenq_handlers->handlers[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          long benchRet = ena_com_get_specific_aenq_cb(dev,group);
          printf("%ld\n", benchRet); 
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
