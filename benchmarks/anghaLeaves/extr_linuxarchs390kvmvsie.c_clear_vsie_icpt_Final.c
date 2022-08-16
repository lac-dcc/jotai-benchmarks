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
       1            big-arr-10x\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ icptcode; } ;
struct vsie_page {TYPE_1__ scb_s; } ;

/* Variables and functions */

__attribute__((used)) static inline void clear_vsie_icpt(struct vsie_page *vsie_page)
{
	vsie_page->scb_s.icptcode = 0;
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
          int _len_vsie_page0 = 1;
          struct vsie_page * vsie_page = (struct vsie_page *) malloc(_len_vsie_page0*sizeof(struct vsie_page));
          for(int _i0 = 0; _i0 < _len_vsie_page0; _i0++) {
            vsie_page[_i0].scb_s.icptcode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          clear_vsie_icpt(vsie_page);
          free(vsie_page);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_vsie_page0 = 100;
          struct vsie_page * vsie_page = (struct vsie_page *) malloc(_len_vsie_page0*sizeof(struct vsie_page));
          for(int _i0 = 0; _i0 < _len_vsie_page0; _i0++) {
            vsie_page[_i0].scb_s.icptcode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          clear_vsie_icpt(vsie_page);
          free(vsie_page);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
