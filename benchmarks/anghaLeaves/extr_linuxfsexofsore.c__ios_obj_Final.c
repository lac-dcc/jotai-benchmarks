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
struct osd_obj_id {int dummy; } ;
struct ore_io_state {TYPE_2__* oc; } ;
struct TYPE_4__ {unsigned int single_comp; TYPE_1__* comps; } ;
struct TYPE_3__ {struct osd_obj_id obj; } ;

/* Variables and functions */

__attribute__((used)) static struct osd_obj_id *_ios_obj(struct ore_io_state *ios, unsigned index)
{
	return &ios->oc->comps[index & ios->oc->single_comp].obj;
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
          unsigned int index = 100;
          int _len_ios0 = 1;
          struct ore_io_state * ios = (struct ore_io_state *) malloc(_len_ios0*sizeof(struct ore_io_state));
          for(int _i0 = 0; _i0 < _len_ios0; _i0++) {
              int _len_ios__i0__oc0 = 1;
          ios[_i0].oc = (struct TYPE_4__ *) malloc(_len_ios__i0__oc0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ios__i0__oc0; _j0++) {
            ios[_i0].oc->single_comp = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ios__i0__oc_comps0 = 1;
          ios[_i0].oc->comps = (struct TYPE_3__ *) malloc(_len_ios__i0__oc_comps0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_ios__i0__oc_comps0; _j0++) {
            ios[_i0].oc->comps->obj.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct osd_obj_id * benchRet = _ios_obj(ios,index);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ios0; _aux++) {
          free(ios[_aux].oc);
          }
          free(ios);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
