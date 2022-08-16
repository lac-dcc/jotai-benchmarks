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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u64 ;
struct n2rng {TYPE_1__* data; } ;
struct TYPE_2__ {int chip_version; } ;

/* Variables and functions */
 int N2RNG_ACCUM_CYCLES_DEFAULT ; 
 int RNG_CTL_ES1 ; 
 int RNG_CTL_ES2 ; 
 int RNG_CTL_ES3 ; 
 int RNG_CTL_LFSR ; 
 int RNG_v1_CTL_ASEL_SHIFT ; 
 int RNG_v1_CTL_VCO_SHIFT ; 
 int RNG_v1_CTL_WAIT_SHIFT ; 
 int RNG_v2_CTL_ASEL_SHIFT ; 
 int RNG_v2_CTL_VCO_SHIFT ; 
 int RNG_v2_CTL_WAIT_SHIFT ; 

__attribute__((used)) static u64 n2rng_control_default(struct n2rng *np, int ctl)
{
	u64 val = 0;

	if (np->data->chip_version == 1) {
		val = ((2 << RNG_v1_CTL_ASEL_SHIFT) |
			(N2RNG_ACCUM_CYCLES_DEFAULT << RNG_v1_CTL_WAIT_SHIFT) |
			 RNG_CTL_LFSR);

		switch (ctl) {
		case 0:
			val |= (1 << RNG_v1_CTL_VCO_SHIFT) | RNG_CTL_ES1;
			break;
		case 1:
			val |= (2 << RNG_v1_CTL_VCO_SHIFT) | RNG_CTL_ES2;
			break;
		case 2:
			val |= (3 << RNG_v1_CTL_VCO_SHIFT) | RNG_CTL_ES3;
			break;
		case 3:
			val |= RNG_CTL_ES1 | RNG_CTL_ES2 | RNG_CTL_ES3;
			break;
		default:
			break;
		}

	} else {
		val = ((2 << RNG_v2_CTL_ASEL_SHIFT) |
			(N2RNG_ACCUM_CYCLES_DEFAULT << RNG_v2_CTL_WAIT_SHIFT) |
			 RNG_CTL_LFSR);

		switch (ctl) {
		case 0:
			val |= (1 << RNG_v2_CTL_VCO_SHIFT) | RNG_CTL_ES1;
			break;
		case 1:
			val |= (2 << RNG_v2_CTL_VCO_SHIFT) | RNG_CTL_ES2;
			break;
		case 2:
			val |= (3 << RNG_v2_CTL_VCO_SHIFT) | RNG_CTL_ES3;
			break;
		case 3:
			val |= RNG_CTL_ES1 | RNG_CTL_ES2 | RNG_CTL_ES3;
			break;
		default:
			break;
		}
	}

	return val;
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
          int ctl = 100;
          int _len_np0 = 1;
          struct n2rng * np = (struct n2rng *) malloc(_len_np0*sizeof(struct n2rng));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
              int _len_np__i0__data0 = 1;
          np[_i0].data = (struct TYPE_2__ *) malloc(_len_np__i0__data0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_np__i0__data0; _j0++) {
            np[_i0].data->chip_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = n2rng_control_default(np,ctl);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_np0; _aux++) {
          free(np[_aux].data);
          }
          free(np);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
