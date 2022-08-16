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
       1            linked\n\
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
struct host1x_syncpt_base {int dummy; } ;
struct host1x_syncpt {struct host1x_syncpt_base* base; } ;

/* Variables and functions */

struct host1x_syncpt_base *host1x_syncpt_get_base(struct host1x_syncpt *sp)
{
	return sp ? sp->base : NULL;
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
          int _len_sp0 = 1;
          struct host1x_syncpt * sp = (struct host1x_syncpt *) malloc(_len_sp0*sizeof(struct host1x_syncpt));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
              int _len_sp__i0__base0 = 1;
          sp[_i0].base = (struct host1x_syncpt_base *) malloc(_len_sp__i0__base0*sizeof(struct host1x_syncpt_base));
          for(int _j0 = 0; _j0 < _len_sp__i0__base0; _j0++) {
            sp[_i0].base->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct host1x_syncpt_base * benchRet = host1x_syncpt_get_base(sp);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_sp0; _aux++) {
          free(sp[_aux].base);
          }
          free(sp);
        
        break;
    }
    // linked
    case 1:
    {
          int _len_sp0 = 1;
          struct host1x_syncpt * sp = (struct host1x_syncpt *) malloc(_len_sp0*sizeof(struct host1x_syncpt));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
              int _len_sp__i0__base0 = 1;
          sp[_i0].base = (struct host1x_syncpt_base *) malloc(_len_sp__i0__base0*sizeof(struct host1x_syncpt_base));
          for(int _j0 = 0; _j0 < _len_sp__i0__base0; _j0++) {
            sp[_i0].base->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct host1x_syncpt_base * benchRet = host1x_syncpt_get_base(sp);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_sp0; _aux++) {
          free(sp[_aux].base);
          }
          free(sp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
