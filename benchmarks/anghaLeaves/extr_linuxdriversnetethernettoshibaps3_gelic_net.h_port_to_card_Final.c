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
struct gelic_port {struct gelic_card* card; } ;
struct gelic_card {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline struct gelic_card *port_to_card(struct gelic_port *p)
{
	return p->card;
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
          int _len_p0 = 1;
          struct gelic_port * p = (struct gelic_port *) malloc(_len_p0*sizeof(struct gelic_port));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
              int _len_p__i0__card0 = 1;
          p[_i0].card = (struct gelic_card *) malloc(_len_p__i0__card0*sizeof(struct gelic_card));
          for(int _j0 = 0; _j0 < _len_p__i0__card0; _j0++) {
            p[_i0].card->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct gelic_card * benchRet = port_to_card(p);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].card);
          }
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
