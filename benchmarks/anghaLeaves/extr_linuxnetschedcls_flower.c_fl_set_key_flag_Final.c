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

/* Variables and functions */

__attribute__((used)) static void fl_set_key_flag(u32 flower_key, u32 flower_mask,
			    u32 *dissector_key, u32 *dissector_mask,
			    u32 flower_flag_bit, u32 dissector_flag_bit)
{
	if (flower_mask & flower_flag_bit) {
		*dissector_mask |= dissector_flag_bit;
		if (flower_key & flower_flag_bit)
			*dissector_key |= dissector_flag_bit;
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
          int flower_key = 100;
          int flower_mask = 100;
          int flower_flag_bit = 100;
          int dissector_flag_bit = 100;
          int _len_dissector_key0 = 1;
          int * dissector_key = (int *) malloc(_len_dissector_key0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dissector_key0; _i0++) {
            dissector_key[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dissector_mask0 = 1;
          int * dissector_mask = (int *) malloc(_len_dissector_mask0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dissector_mask0; _i0++) {
            dissector_mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fl_set_key_flag(flower_key,flower_mask,dissector_key,dissector_mask,flower_flag_bit,dissector_flag_bit);
          free(dissector_key);
          free(dissector_mask);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
