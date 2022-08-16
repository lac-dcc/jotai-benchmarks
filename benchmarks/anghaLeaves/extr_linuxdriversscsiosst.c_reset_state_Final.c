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
struct st_partstat {int drv_block; int drv_file; scalar_t__ last_block_valid; scalar_t__ at_sm; int /*<<< orphan*/  eof; int /*<<< orphan*/  rw; } ;
struct osst_tape {struct st_partstat* ps; scalar_t__ pos_unknown; } ;

/* Variables and functions */
 int /*<<< orphan*/  ST_IDLE ; 
 int ST_NBR_PARTITIONS ; 
 int /*<<< orphan*/  ST_NOEOF ; 

__attribute__((used)) static void reset_state(struct osst_tape *STp)
{
	int i;
	struct st_partstat *STps;

	STp->pos_unknown = 0;
	for (i = 0; i < ST_NBR_PARTITIONS; i++) {
		STps = &(STp->ps[i]);
		STps->rw = ST_IDLE;
		STps->eof = ST_NOEOF;
		STps->at_sm = 0;
		STps->last_block_valid = 0;
		STps->drv_block = -1;
		STps->drv_file = -1;
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
          int _len_STp0 = 1;
          struct osst_tape * STp = (struct osst_tape *) malloc(_len_STp0*sizeof(struct osst_tape));
          for(int _i0 = 0; _i0 < _len_STp0; _i0++) {
              int _len_STp__i0__ps0 = 1;
          STp[_i0].ps = (struct st_partstat *) malloc(_len_STp__i0__ps0*sizeof(struct st_partstat));
          for(int _j0 = 0; _j0 < _len_STp__i0__ps0; _j0++) {
            STp[_i0].ps->drv_block = ((-2 * (next_i()%2)) + 1) * next_i();
        STp[_i0].ps->drv_file = ((-2 * (next_i()%2)) + 1) * next_i();
        STp[_i0].ps->last_block_valid = ((-2 * (next_i()%2)) + 1) * next_i();
        STp[_i0].ps->at_sm = ((-2 * (next_i()%2)) + 1) * next_i();
        STp[_i0].ps->eof = ((-2 * (next_i()%2)) + 1) * next_i();
        STp[_i0].ps->rw = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        STp[_i0].pos_unknown = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          reset_state(STp);
          for(int _aux = 0; _aux < _len_STp0; _aux++) {
          free(STp[_aux].ps);
          }
          free(STp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
