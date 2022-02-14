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

/* Variables and functions */

__attribute__((used)) static char *trace_decode_reg(int reg)
{
	switch (reg) {
		case 769: return "SPRN_MMCR2"; break;
		case 770: return "SPRN_MMCRA"; break;
		case 779: return "SPRN_MMCR0"; break;
		case 804: return "SPRN_EBBHR"; break;
		case 805: return "SPRN_EBBRR"; break;
		case 806: return "SPRN_BESCR"; break;
		case 800: return "SPRN_BESCRS"; break;
		case 801: return "SPRN_BESCRSU"; break;
		case 802: return "SPRN_BESCRR"; break;
		case 803: return "SPRN_BESCRRU"; break;
		case 771: return "SPRN_PMC1"; break;
		case 772: return "SPRN_PMC2"; break;
		case 773: return "SPRN_PMC3"; break;
		case 774: return "SPRN_PMC4"; break;
		case 775: return "SPRN_PMC5"; break;
		case 776: return "SPRN_PMC6"; break;
		case 780: return "SPRN_SIAR"; break;
		case 781: return "SPRN_SDAR"; break;
		case 768: return "SPRN_SIER"; break;
	}

	return NULL;
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
          int reg = 255;
          char * benchRet = trace_decode_reg(reg);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
