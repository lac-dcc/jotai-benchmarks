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
struct mca_config {scalar_t__ monarch_timeout; } ;
struct cpuinfo_x86 {int x86; int x86_model; int x86_stepping; } ;

/* Variables and functions */
 scalar_t__ USEC_PER_SEC ; 
 struct mca_config mca_cfg ; 

__attribute__((used)) static void mce_centaur_feature_init(struct cpuinfo_x86 *c)
{
	struct mca_config *cfg = &mca_cfg;

	 /*
	  * All newer Centaur CPUs support MCE broadcasting. Enable
	  * synchronization with a one second timeout.
	  */
	if ((c->x86 == 6 && c->x86_model == 0xf && c->x86_stepping >= 0xe) ||
	     c->x86 > 6) {
		if (cfg->monarch_timeout < 0)
			cfg->monarch_timeout = USEC_PER_SEC;
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
          int _len_c0 = 1;
          struct cpuinfo_x86 * c = (struct cpuinfo_x86 *) malloc(_len_c0*sizeof(struct cpuinfo_x86));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].x86 = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].x86_model = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].x86_stepping = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mce_centaur_feature_init(c);
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
