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
struct brcmu_d11inf {scalar_t__ io_type; int /*<<< orphan*/  decchspec; int /*<<< orphan*/  encchspec; } ;

/* Variables and functions */
 scalar_t__ BRCMU_D11N_IOTYPE ; 
 int /*<<< orphan*/  brcmu_d11ac_decchspec ; 
 int /*<<< orphan*/  brcmu_d11ac_encchspec ; 
 int /*<<< orphan*/  brcmu_d11n_decchspec ; 
 int /*<<< orphan*/  brcmu_d11n_encchspec ; 

void brcmu_d11_attach(struct brcmu_d11inf *d11inf)
{
	if (d11inf->io_type == BRCMU_D11N_IOTYPE) {
		d11inf->encchspec = brcmu_d11n_encchspec;
		d11inf->decchspec = brcmu_d11n_decchspec;
	} else {
		d11inf->encchspec = brcmu_d11ac_encchspec;
		d11inf->decchspec = brcmu_d11ac_decchspec;
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
          int _len_d11inf0 = 1;
          struct brcmu_d11inf * d11inf = (struct brcmu_d11inf *) malloc(_len_d11inf0*sizeof(struct brcmu_d11inf));
          for(int _i0 = 0; _i0 < _len_d11inf0; _i0++) {
            d11inf[_i0].io_type = ((-2 * (next_i()%2)) + 1) * next_i();
        d11inf[_i0].decchspec = ((-2 * (next_i()%2)) + 1) * next_i();
        d11inf[_i0].encchspec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          brcmu_d11_attach(d11inf);
          free(d11inf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_d11inf0 = 65025;
          struct brcmu_d11inf * d11inf = (struct brcmu_d11inf *) malloc(_len_d11inf0*sizeof(struct brcmu_d11inf));
          for(int _i0 = 0; _i0 < _len_d11inf0; _i0++) {
            d11inf[_i0].io_type = ((-2 * (next_i()%2)) + 1) * next_i();
        d11inf[_i0].decchspec = ((-2 * (next_i()%2)) + 1) * next_i();
        d11inf[_i0].encchspec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          brcmu_d11_attach(d11inf);
          free(d11inf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_d11inf0 = 100;
          struct brcmu_d11inf * d11inf = (struct brcmu_d11inf *) malloc(_len_d11inf0*sizeof(struct brcmu_d11inf));
          for(int _i0 = 0; _i0 < _len_d11inf0; _i0++) {
            d11inf[_i0].io_type = ((-2 * (next_i()%2)) + 1) * next_i();
        d11inf[_i0].decchspec = ((-2 * (next_i()%2)) + 1) * next_i();
        d11inf[_i0].encchspec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          brcmu_d11_attach(d11inf);
          free(d11inf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
