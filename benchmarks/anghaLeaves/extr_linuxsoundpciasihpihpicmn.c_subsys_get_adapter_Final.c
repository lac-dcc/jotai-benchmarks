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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  size_t u16 ;
struct TYPE_6__ {scalar_t__ adapter_type; int /*<<< orphan*/  adapter_index; } ;
struct TYPE_7__ {TYPE_2__ s; } ;
struct hpi_response {int /*<<< orphan*/  error; TYPE_3__ u; } ;
struct hpi_message {int obj_index; } ;
struct TYPE_8__ {TYPE_1__* adapter; } ;
struct TYPE_5__ {scalar_t__ type; int /*<<< orphan*/  index; } ;

/* Variables and functions */
 int /*<<< orphan*/  HPI_ERROR_INVALID_OBJ_INDEX ; 
 size_t HPI_MAX_ADAPTERS ; 
 TYPE_4__ adapters ; 

__attribute__((used)) static void subsys_get_adapter(struct hpi_message *phm,
	struct hpi_response *phr)
{
	int count = phm->obj_index;
	u16 index = 0;

	/* find the nCount'th nonzero adapter in array */
	for (index = 0; index < HPI_MAX_ADAPTERS; index++) {
		if (adapters.adapter[index].type) {
			if (!count)
				break;
			count--;
		}
	}

	if (index < HPI_MAX_ADAPTERS) {
		phr->u.s.adapter_index = adapters.adapter[index].index;
		phr->u.s.adapter_type = adapters.adapter[index].type;
	} else {
		phr->u.s.adapter_index = 0;
		phr->u.s.adapter_type = 0;
		phr->error = HPI_ERROR_INVALID_OBJ_INDEX;
	}
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
          int _len_phm0 = 1;
          struct hpi_message * phm = (struct hpi_message *) malloc(_len_phm0*sizeof(struct hpi_message));
          for(int _i0 = 0; _i0 < _len_phm0; _i0++) {
            phm[_i0].obj_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phr0 = 1;
          struct hpi_response * phr = (struct hpi_response *) malloc(_len_phr0*sizeof(struct hpi_response));
          for(int _i0 = 0; _i0 < _len_phr0; _i0++) {
            phr[_i0].error = ((-2 * (next_i()%2)) + 1) * next_i();
        phr[_i0].u.s.adapter_type = ((-2 * (next_i()%2)) + 1) * next_i();
        phr[_i0].u.s.adapter_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          subsys_get_adapter(phm,phr);
          free(phm);
          free(phr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
