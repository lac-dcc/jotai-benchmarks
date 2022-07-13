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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct visorhba_devdata {TYPE_1__* pending; } ;
struct uiscmdrsp {int dummy; } ;
struct TYPE_2__ {struct uiscmdrsp cmdrsp; scalar_t__ sent; } ;

/* Variables and functions */

__attribute__((used)) static struct uiscmdrsp *get_scsipending_cmdrsp(struct visorhba_devdata *ddata,
						int ent)
{
	if (ddata->pending[ent].sent)
		return &ddata->pending[ent].cmdrsp;

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

    // big-arr-10x
    case 0:
    {
          int ent = 10;
          int _len_ddata0 = 100;
          struct visorhba_devdata * ddata = (struct visorhba_devdata *) malloc(_len_ddata0*sizeof(struct visorhba_devdata));
          for(int _i0 = 0; _i0 < _len_ddata0; _i0++) {
              int _len_ddata__i0__pending0 = 1;
          ddata[_i0].pending = (struct TYPE_2__ *) malloc(_len_ddata__i0__pending0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ddata__i0__pending0; _j0++) {
            ddata[_i0].pending->cmdrsp.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        ddata[_i0].pending->sent = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct uiscmdrsp * benchRet = get_scsipending_cmdrsp(ddata,ent);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ddata0; _aux++) {
          free(ddata[_aux].pending);
          }
          free(ddata);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
