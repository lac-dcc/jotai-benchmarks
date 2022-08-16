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
typedef  int u8 ;
struct omapfb_info {int id; TYPE_1__* region; } ;
struct TYPE_2__ {int id; } ;

/* Variables and functions */
 int OMAPFB_MEM_IDX_ENABLED ; 

__attribute__((used)) static u8 get_mem_idx(struct omapfb_info *ofbi)
{
	if (ofbi->id == ofbi->region->id)
		return 0;

	return OMAPFB_MEM_IDX_ENABLED | ofbi->region->id;
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
          int _len_ofbi0 = 1;
          struct omapfb_info * ofbi = (struct omapfb_info *) malloc(_len_ofbi0*sizeof(struct omapfb_info));
          for(int _i0 = 0; _i0 < _len_ofbi0; _i0++) {
            ofbi[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ofbi__i0__region0 = 1;
          ofbi[_i0].region = (struct TYPE_2__ *) malloc(_len_ofbi__i0__region0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ofbi__i0__region0; _j0++) {
            ofbi[_i0].region->id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_mem_idx(ofbi);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ofbi0; _aux++) {
          free(ofbi[_aux].region);
          }
          free(ofbi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
