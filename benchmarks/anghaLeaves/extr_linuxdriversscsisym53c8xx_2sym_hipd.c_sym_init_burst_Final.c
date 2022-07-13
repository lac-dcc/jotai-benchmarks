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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct sym_hcb {int rv_ctest4; int rv_dmode; int rv_ctest5; } ;

/* Variables and functions */

__attribute__((used)) static inline void sym_init_burst(struct sym_hcb *np, u_char bc)
{
	np->rv_ctest4	&= ~0x80;
	np->rv_dmode	&= ~(0x3 << 6);
	np->rv_ctest5	&= ~0x4;

	if (!bc) {
		np->rv_ctest4	|= 0x80;
	}
	else {
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
          struct sym_hcb * np = (struct sym_hcb *) malloc(_len_np0*sizeof(struct sym_hcb));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
            np[_i0].rv_ctest4 = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].rv_dmode = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].rv_ctest5 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sym_init_burst(np,bc);
          free(np);
        
        break;
    }
    // big-arr
    case 1:
    {
          int bc = 255;
          int _len_np0 = 65025;
          struct sym_hcb * np = (struct sym_hcb *) malloc(_len_np0*sizeof(struct sym_hcb));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
            np[_i0].rv_ctest4 = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].rv_dmode = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].rv_ctest5 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sym_init_burst(np,bc);
          free(np);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bc = 10;
          int _len_np0 = 100;
          struct sym_hcb * np = (struct sym_hcb *) malloc(_len_np0*sizeof(struct sym_hcb));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
            np[_i0].rv_ctest4 = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].rv_dmode = ((-2 * (next_i()%2)) + 1) * next_i();
        np[_i0].rv_ctest5 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sym_init_burst(np,bc);
          free(np);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
