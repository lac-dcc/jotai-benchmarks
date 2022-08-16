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
typedef  int u_char ;
struct ncb {int rv_ctest0; int rv_dmode; int rv_ctest5; } ;

/* Variables and functions */

__attribute__((used)) static inline void ncr_init_burst(struct ncb *np, u_char bc)
{
	u_char *be = &np->rv_ctest0;
	*be		&= ~0x80;
	np->rv_dmode	&= ~(0x3 << 6);
	np->rv_ctest5	&= ~0x4;

	if (!bc) {
		*be		|= 0x80;
	} else {
		--bc;
		np->rv_dmode	|= ((bc & 0x3) << 6);
		np->rv_ctest5	|= (bc & 0x4);
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
          int bc = 100;
          int _len_np0 = 1;
          struct ncb * np = (struct ncb *) malloc(_len_np0*sizeof(struct ncb));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
            np[_i0].rv_ctest0 = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].rv_dmode = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].rv_ctest5 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ncr_init_burst(np,bc);
          free(np);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
