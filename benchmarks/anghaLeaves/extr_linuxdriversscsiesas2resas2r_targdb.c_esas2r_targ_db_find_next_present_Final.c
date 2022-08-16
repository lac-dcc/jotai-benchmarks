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
typedef  scalar_t__ u16 ;
struct esas2r_target {scalar_t__ target_state; } ;
struct esas2r_adapter {struct esas2r_target* targetdb; } ;

/* Variables and functions */
 scalar_t__ ESAS2R_MAX_TARGETS ; 
 scalar_t__ TS_PRESENT ; 

u16 esas2r_targ_db_find_next_present(struct esas2r_adapter *a, u16 target_id)
{
	u16 id = target_id + 1;

	while (id < ESAS2R_MAX_TARGETS) {
		struct esas2r_target *t = a->targetdb + id;

		if (t->target_state == TS_PRESENT)
			break;

		id++;
	}

	return id;
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
          long target_id = 100;
          int _len_a0 = 1;
          struct esas2r_adapter * a = (struct esas2r_adapter *) malloc(_len_a0*sizeof(struct esas2r_adapter));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
              int _len_a__i0__targetdb0 = 1;
          a[_i0].targetdb = (struct esas2r_target *) malloc(_len_a__i0__targetdb0*sizeof(struct esas2r_target));
          for(int _j0 = 0; _j0 < _len_a__i0__targetdb0; _j0++) {
            a[_i0].targetdb->target_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = esas2r_targ_db_find_next_present(a,target_id);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].targetdb);
          }
          free(a);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
