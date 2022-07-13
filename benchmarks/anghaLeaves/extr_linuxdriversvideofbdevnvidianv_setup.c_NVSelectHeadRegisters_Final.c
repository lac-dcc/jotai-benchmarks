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
struct nvidia_par {scalar_t__ PDIO0; scalar_t__ PDIO; scalar_t__ PRAMDAC0; scalar_t__ PRAMDAC; scalar_t__ PCRTC0; scalar_t__ PCRTC; scalar_t__ PCIO0; scalar_t__ PCIO; } ;

/* Variables and functions */

__attribute__((used)) static void NVSelectHeadRegisters(struct nvidia_par *par, int head)
{
	if (head) {
		par->PCIO = par->PCIO0 + 0x2000;
		par->PCRTC = par->PCRTC0 + 0x800;
		par->PRAMDAC = par->PRAMDAC0 + 0x800;
		par->PDIO = par->PDIO0 + 0x2000;
	} else {
		par->PCIO = par->PCIO0;
		par->PCRTC = par->PCRTC0;
		par->PRAMDAC = par->PRAMDAC0;
		par->PDIO = par->PDIO0;
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
          int head = 100;
          int _len_par0 = 1;
          struct nvidia_par * par = (struct nvidia_par *) malloc(_len_par0*sizeof(struct nvidia_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0].PDIO0 = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].PDIO = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].PRAMDAC0 = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].PRAMDAC = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].PCRTC0 = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].PCRTC = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].PCIO0 = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].PCIO = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          NVSelectHeadRegisters(par,head);
          free(par);
        
        break;
    }
    // big-arr
    case 1:
    {
          int head = 255;
          int _len_par0 = 65025;
          struct nvidia_par * par = (struct nvidia_par *) malloc(_len_par0*sizeof(struct nvidia_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0].PDIO0 = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].PDIO = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].PRAMDAC0 = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].PRAMDAC = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].PCRTC0 = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].PCRTC = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].PCIO0 = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].PCIO = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          NVSelectHeadRegisters(par,head);
          free(par);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int head = 10;
          int _len_par0 = 100;
          struct nvidia_par * par = (struct nvidia_par *) malloc(_len_par0*sizeof(struct nvidia_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0].PDIO0 = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].PDIO = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].PRAMDAC0 = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].PRAMDAC = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].PCRTC0 = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].PCRTC = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].PCIO0 = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].PCIO = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          NVSelectHeadRegisters(par,head);
          free(par);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
