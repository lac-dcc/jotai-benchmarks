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
struct wil_status_ring {int swhead; int size; scalar_t__ desc_rdy_pol; } ;

/* Variables and functions */

__attribute__((used)) static inline void wil_sring_advance_swhead(struct wil_status_ring *sring)
{
	sring->swhead = (sring->swhead + 1) % sring->size;
	if (sring->swhead == 0)
		sring->desc_rdy_pol = 1 - sring->desc_rdy_pol;
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
          int _len_sring0 = 1;
          struct wil_status_ring * sring = (struct wil_status_ring *) malloc(_len_sring0*sizeof(struct wil_status_ring));
          for(int _i0 = 0; _i0 < _len_sring0; _i0++) {
            sring[_i0].swhead = ((-2 * (next_i()%2)) + 1) * next_i();
        sring[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        sring[_i0].desc_rdy_pol = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          wil_sring_advance_swhead(sring);
          free(sring);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
