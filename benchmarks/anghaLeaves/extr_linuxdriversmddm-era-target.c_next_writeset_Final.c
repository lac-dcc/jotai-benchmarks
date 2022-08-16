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
struct writeset {int dummy; } ;
struct era_metadata {struct writeset* writesets; struct writeset* current_writeset; } ;

/* Variables and functions */

__attribute__((used)) static struct writeset *next_writeset(struct era_metadata *md)
{
	return (md->current_writeset == &md->writesets[0]) ?
		&md->writesets[1] : &md->writesets[0];
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
          int _len_md0 = 1;
          struct era_metadata * md = (struct era_metadata *) malloc(_len_md0*sizeof(struct era_metadata));
          for(int _i0 = 0; _i0 < _len_md0; _i0++) {
              int _len_md__i0__writesets0 = 1;
          md[_i0].writesets = (struct writeset *) malloc(_len_md__i0__writesets0*sizeof(struct writeset));
          for(int _j0 = 0; _j0 < _len_md__i0__writesets0; _j0++) {
            md[_i0].writesets->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_md__i0__current_writeset0 = 1;
          md[_i0].current_writeset = (struct writeset *) malloc(_len_md__i0__current_writeset0*sizeof(struct writeset));
          for(int _j0 = 0; _j0 < _len_md__i0__current_writeset0; _j0++) {
            md[_i0].current_writeset->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct writeset * benchRet = next_writeset(md);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_md0; _aux++) {
          free(md[_aux].writesets);
          }
          for(int _aux = 0; _aux < _len_md0; _aux++) {
          free(md[_aux].current_writeset);
          }
          free(md);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
