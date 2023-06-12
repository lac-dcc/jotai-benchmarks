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
       0            empty\n\
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
struct bufdesc_prop {void* dsize; struct bufdesc* last; struct bufdesc* base; } ;
struct bufdesc {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct bufdesc *fec_enet_get_prevdesc(struct bufdesc *bdp,
					     struct bufdesc_prop *bd)
{
	return (bdp <= bd->base) ? bd->last
			: (struct bufdesc *)(((void *)bdp) - bd->dsize);
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // empty
    case 0:
    {
          int _len_bdp0 = 1;
          struct bufdesc * bdp = (struct bufdesc *) malloc(_len_bdp0*sizeof(struct bufdesc));
          for(int _i0 = 0; _i0 < _len_bdp0; _i0++) {
              bdp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_bd0 = 1;
          struct bufdesc_prop * bd = (struct bufdesc_prop *) malloc(_len_bd0*sizeof(struct bufdesc_prop));
          for(int _i0 = 0; _i0 < _len_bd0; _i0++) {
              int _len_bd__i0__last0 = 1;
          bd[_i0].last = (struct bufdesc *) malloc(_len_bd__i0__last0*sizeof(struct bufdesc));
          for(int _j0 = 0; _j0 < _len_bd__i0__last0; _j0++) {
              bd[_i0].last->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_bd__i0__base0 = 1;
          bd[_i0].base = (struct bufdesc *) malloc(_len_bd__i0__base0*sizeof(struct bufdesc));
          for(int _j0 = 0; _j0 < _len_bd__i0__base0; _j0++) {
              bd[_i0].base->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          struct bufdesc * benchRet = fec_enet_get_prevdesc(bdp,bd);
          printf("%d\n", (*benchRet).dummy);
          free(bdp);
          for(int _aux = 0; _aux < _len_bd0; _aux++) {
          free(bd[_aux].last);
          }
          for(int _aux = 0; _aux < _len_bd0; _aux++) {
          free(bd[_aux].base);
          }
          free(bd);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
