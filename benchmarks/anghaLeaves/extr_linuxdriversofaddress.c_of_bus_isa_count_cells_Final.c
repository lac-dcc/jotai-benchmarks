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
struct device_node {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void of_bus_isa_count_cells(struct device_node *child,
				   int *addrc, int *sizec)
{
	if (addrc)
		*addrc = 2;
	if (sizec)
		*sizec = 1;
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
          int _len_child0 = 1;
          struct device_node * child = (struct device_node *) malloc(_len_child0*sizeof(struct device_node));
          for(int _i0 = 0; _i0 < _len_child0; _i0++) {
            child[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_addrc0 = 1;
          int * addrc = (int *) malloc(_len_addrc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addrc0; _i0++) {
            addrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sizec0 = 1;
          int * sizec = (int *) malloc(_len_sizec0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sizec0; _i0++) {
            sizec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          of_bus_isa_count_cells(child,addrc,sizec);
          free(child);
          free(addrc);
          free(sizec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
