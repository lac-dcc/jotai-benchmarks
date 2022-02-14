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
       0            big-arr\n\
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
typedef  int /*<<< orphan*/  u8 ;
struct rv7xx_pl {int flags; } ;
struct radeon_device {int dummy; } ;

/* Variables and functions */
 int ATOM_PPLIB_R600_FLAGS_LOWPOWER ; 
 int /*<<< orphan*/  MC_CG_SEQ_DRAMCONF_S0 ; 
 int /*<<< orphan*/  MC_CG_SEQ_DRAMCONF_S1 ; 

u8 rv770_get_seq_value(struct radeon_device *rdev,
		       struct rv7xx_pl *pl)
{
	return (pl->flags & ATOM_PPLIB_R600_FLAGS_LOWPOWER) ?
		MC_CG_SEQ_DRAMCONF_S0 : MC_CG_SEQ_DRAMCONF_S1;
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

    // big-arr
    case 0:
    {
          int _len_rdev0 = 1;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pl0 = 1;
          struct rv7xx_pl * pl = (struct rv7xx_pl *) malloc(_len_pl0*sizeof(struct rv7xx_pl));
          for(int _i0 = 0; _i0 < _len_pl0; _i0++) {
            pl->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rv770_get_seq_value(rdev,pl);
          printf("%d\n", benchRet); 
          free(rdev);
          free(pl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
