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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int* di_map; } ;
typedef  TYPE_1__ hil_mlc ;

/* Variables and functions */
 int HIL_MLC_DEVMEM ; 

__attribute__((used)) static int hil_mlc_find_free_di(hil_mlc *mlc)
{
	int idx;

	/* TODO: Pick all-zero slots first, failing that,
	 * randomize the slot picked among those eligible.
	 */
	for (idx = 0; idx < HIL_MLC_DEVMEM; idx++) {
		int j, found = 0;

		for (j = 0; j < 7 ; j++)
			if (mlc->di_map[j] == idx)
				found++;

		if (!found)
			break;
	}

	return idx; /* Note: It is guaranteed at least one above will match */
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
          int _len_mlc0 = 1;
          struct TYPE_3__ * mlc = (struct TYPE_3__ *) malloc(_len_mlc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_mlc0; _i0++) {
              int _len_mlc__i0__di_map0 = 1;
          mlc[_i0].di_map = (int *) malloc(_len_mlc__i0__di_map0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mlc__i0__di_map0; _j0++) {
            mlc[_i0].di_map[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = hil_mlc_find_free_di(mlc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mlc0; _aux++) {
          free(mlc[_aux].di_map);
          }
          free(mlc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
