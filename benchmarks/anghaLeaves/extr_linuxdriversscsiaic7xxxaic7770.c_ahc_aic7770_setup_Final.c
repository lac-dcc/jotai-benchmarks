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
struct ahc_softc {char channel; char channel_b; int instruction_ram_size; int /*<<< orphan*/  flags; int /*<<< orphan*/  bugs; int /*<<< orphan*/  features; int /*<<< orphan*/  chip; } ;

/* Variables and functions */
 int /*<<< orphan*/  AHC_AIC7770 ; 
 int /*<<< orphan*/  AHC_AIC7770_FE ; 
 int /*<<< orphan*/  AHC_PAGESCBS ; 
 int /*<<< orphan*/  AHC_TMODE_WIDEODD_BUG ; 

__attribute__((used)) static int
ahc_aic7770_setup(struct ahc_softc *ahc)
{
	ahc->channel = 'A';
	ahc->channel_b = 'B';
	ahc->chip = AHC_AIC7770;
	ahc->features = AHC_AIC7770_FE;
	ahc->bugs |= AHC_TMODE_WIDEODD_BUG;
	ahc->flags |= AHC_PAGESCBS;
	ahc->instruction_ram_size = 448;
	return (0);
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
          int _len_ahc0 = 1;
          struct ahc_softc * ahc = (struct ahc_softc *) malloc(_len_ahc0*sizeof(struct ahc_softc));
          for(int _i0 = 0; _i0 < _len_ahc0; _i0++) {
            ahc[_i0].channel = ((-2 * (next_i()%2)) + 1) * next_i();
        ahc[_i0].channel_b = ((-2 * (next_i()%2)) + 1) * next_i();
        ahc[_i0].instruction_ram_size = ((-2 * (next_i()%2)) + 1) * next_i();
        ahc[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ahc[_i0].bugs = ((-2 * (next_i()%2)) + 1) * next_i();
        ahc[_i0].features = ((-2 * (next_i()%2)) + 1) * next_i();
        ahc[_i0].chip = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ahc_aic7770_setup(ahc);
          printf("%d\n", benchRet); 
          free(ahc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
