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
struct bufferchain {size_t pool_size; size_t bufblock; } ;

/* Variables and functions */

void bc_poolsize(struct bufferchain *bc, size_t pool_size, size_t bufblock)
{
	bc->pool_size = pool_size;
	bc->bufblock = bufblock;
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
          unsigned long pool_size = 100;
          unsigned long bufblock = 100;
          int _len_bc0 = 1;
          struct bufferchain * bc = (struct bufferchain *) malloc(_len_bc0*sizeof(struct bufferchain));
          for(int _i0 = 0; _i0 < _len_bc0; _i0++) {
            bc[_i0].pool_size = ((-2 * (next_i()%2)) + 1) * next_i();
        bc[_i0].bufblock = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bc_poolsize(bc,pool_size,bufblock);
          free(bc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
