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
typedef  scalar_t__ u16 ;
struct nvkm_perfdom {int signal_nr; TYPE_1__* signal; } ;
struct TYPE_2__ {scalar_t__ name; } ;

/* Variables and functions */

__attribute__((used)) static u16
nvkm_perfdom_count_perfsig(struct nvkm_perfdom *dom)
{
	u16 signal_nr = 0;
	int i;

	if (dom) {
		for (i = 0; i < dom->signal_nr; i++) {
			if (dom->signal[i].name)
				signal_nr++;
		}
	}
	return signal_nr;
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
          int _len_dom0 = 1;
          struct nvkm_perfdom * dom = (struct nvkm_perfdom *) malloc(_len_dom0*sizeof(struct nvkm_perfdom));
          for(int _i0 = 0; _i0 < _len_dom0; _i0++) {
            dom[_i0].signal_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dom__i0__signal0 = 1;
          dom[_i0].signal = (struct TYPE_2__ *) malloc(_len_dom__i0__signal0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dom__i0__signal0; _j0++) {
            dom[_i0].signal->name = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = nvkm_perfdom_count_perfsig(dom);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_dom0; _aux++) {
          free(dom[_aux].signal);
          }
          free(dom);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
