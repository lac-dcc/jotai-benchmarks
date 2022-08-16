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
typedef  int /*<<< orphan*/  u8 ;
typedef  int /*<<< orphan*/  u32 ;

/* Variables and functions */

__attribute__((used)) static int telemetry_def_add_events(u8 num_pss_evts, u8 num_ioss_evts,
				    u32 *pss_evtmap, u32 *ioss_evtmap)
{
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
          int num_pss_evts = 100;
          int num_ioss_evts = 100;
          int _len_pss_evtmap0 = 1;
          int * pss_evtmap = (int *) malloc(_len_pss_evtmap0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pss_evtmap0; _i0++) {
            pss_evtmap[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ioss_evtmap0 = 1;
          int * ioss_evtmap = (int *) malloc(_len_ioss_evtmap0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ioss_evtmap0; _i0++) {
            ioss_evtmap[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = telemetry_def_add_events(num_pss_evts,num_ioss_evts,pss_evtmap,ioss_evtmap);
          printf("%d\n", benchRet); 
          free(pss_evtmap);
          free(ioss_evtmap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
