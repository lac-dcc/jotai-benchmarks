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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int mdr2init; int mdr3init; } ;
struct TYPE_4__ {TYPE_1__ fp; } ;
struct s_smc {TYPE_2__ hw; } ;

/* Variables and functions */
 int FM_BMMODE ; 
 int FM_ENHSRQ ; 
 int FM_ENNPRQ ; 
 int FM_LSB ; 
 int FM_MENRQAUNLCK ; 
 int FM_MENRS ; 

void init_driver_fplus(struct s_smc *smc)
{
	smc->hw.fp.mdr2init = FM_LSB | FM_BMMODE | FM_ENNPRQ | FM_ENHSRQ | 3 ;

#ifdef	PCI
	smc->hw.fp.mdr2init |= FM_CHKPAR | FM_PARITY ;
#endif
	smc->hw.fp.mdr3init = FM_MENRQAUNLCK | FM_MENRS ;

#ifdef	USE_CAN_ADDR
	/* enable address bit swapping */
	smc->hw.fp.frselreg_init = FM_ENXMTADSWAP | FM_ENRCVADSWAP ;
#endif
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
          int _len_smc0 = 1;
          struct s_smc * smc = (struct s_smc *) malloc(_len_smc0*sizeof(struct s_smc));
          for(int _i0 = 0; _i0 < _len_smc0; _i0++) {
            smc[_i0].hw.fp.mdr2init = ((-2 * (next_i()%2)) + 1) * next_i();
        smc[_i0].hw.fp.mdr3init = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_driver_fplus(smc);
          free(smc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
