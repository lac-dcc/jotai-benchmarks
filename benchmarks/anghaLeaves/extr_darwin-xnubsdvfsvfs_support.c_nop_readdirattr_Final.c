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
struct vnop_readdirattr_args {scalar_t__* a_eofflag; scalar_t__* a_actualcount; } ;

/* Variables and functions */

int
nop_readdirattr(struct vnop_readdirattr_args *ap)
{
        *(ap->a_actualcount) = 0;
        *(ap->a_eofflag) = 0;
	return (0);
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
          int _len_ap0 = 1;
          struct vnop_readdirattr_args * ap = (struct vnop_readdirattr_args *) malloc(_len_ap0*sizeof(struct vnop_readdirattr_args));
          for(int _i0 = 0; _i0 < _len_ap0; _i0++) {
              int _len_ap__i0__a_eofflag0 = 1;
          ap[_i0].a_eofflag = (long *) malloc(_len_ap__i0__a_eofflag0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ap__i0__a_eofflag0; _j0++) {
            ap[_i0].a_eofflag[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ap__i0__a_actualcount0 = 1;
          ap[_i0].a_actualcount = (long *) malloc(_len_ap__i0__a_actualcount0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ap__i0__a_actualcount0; _j0++) {
            ap[_i0].a_actualcount[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = nop_readdirattr(ap);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ap0; _aux++) {
          free(ap[_aux].a_eofflag);
          }
          for(int _aux = 0; _aux < _len_ap0; _aux++) {
          free(ap[_aux].a_actualcount);
          }
          free(ap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
