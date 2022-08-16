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
typedef  int u32 ;
struct pmcmsptwi_cfg {int arbf; int nak; int add10; int mst_code; int arb; int highspeed; } ;

/* Variables and functions */

__attribute__((used)) static inline void pmcmsptwi_reg_to_cfg(u32 reg, struct pmcmsptwi_cfg *cfg)
{
	cfg->arbf = (reg >> 12) & 0xf;
	cfg->nak = (reg >> 8) & 0xf;
	cfg->add10 = (reg >> 7) & 0x1;
	cfg->mst_code = (reg >> 4) & 0x7;
	cfg->arb = (reg >> 1) & 0x1;
	cfg->highspeed = reg & 0x1;
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
          int reg = 100;
          int _len_cfg0 = 1;
          struct pmcmsptwi_cfg * cfg = (struct pmcmsptwi_cfg *) malloc(_len_cfg0*sizeof(struct pmcmsptwi_cfg));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
            cfg[_i0].arbf = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].nak = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].add10 = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].mst_code = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].arb = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].highspeed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pmcmsptwi_reg_to_cfg(reg,cfg);
          free(cfg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
