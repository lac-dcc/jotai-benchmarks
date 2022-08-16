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
struct skl_d0i3_data {int /*<<< orphan*/  non_streaming; int /*<<< orphan*/  streaming; int /*<<< orphan*/  non_d0i3; } ;
struct skl {TYPE_1__* skl_sst; } ;
typedef  enum d0i3_capability { ____Placeholder_d0i3_capability } d0i3_capability ;
struct TYPE_2__ {struct skl_d0i3_data d0i3; } ;

/* Variables and functions */
#define  SKL_D0I3_NONE 130 
#define  SKL_D0I3_NON_STREAMING 129 
#define  SKL_D0I3_STREAMING 128 

void skl_tplg_d0i3_put(struct skl *skl, enum d0i3_capability caps)
{
	struct skl_d0i3_data *d0i3 =  &skl->skl_sst->d0i3;

	switch (caps) {
	case SKL_D0I3_NONE:
		d0i3->non_d0i3--;
		break;

	case SKL_D0I3_STREAMING:
		d0i3->streaming--;
		break;

	case SKL_D0I3_NON_STREAMING:
		d0i3->non_streaming--;
		break;
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
          enum d0i3_capability caps = 0;
          int _len_skl0 = 1;
          struct skl * skl = (struct skl *) malloc(_len_skl0*sizeof(struct skl));
          for(int _i0 = 0; _i0 < _len_skl0; _i0++) {
              int _len_skl__i0__skl_sst0 = 1;
          skl[_i0].skl_sst = (struct TYPE_2__ *) malloc(_len_skl__i0__skl_sst0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_skl__i0__skl_sst0; _j0++) {
            skl[_i0].skl_sst->d0i3.non_streaming = ((-2 * (next_i()%2)) + 1) * next_i();
        skl[_i0].skl_sst->d0i3.streaming = ((-2 * (next_i()%2)) + 1) * next_i();
        skl[_i0].skl_sst->d0i3.non_d0i3 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          skl_tplg_d0i3_put(skl,caps);
          for(int _aux = 0; _aux < _len_skl0; _aux++) {
          free(skl[_aux].skl_sst);
          }
          free(skl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
