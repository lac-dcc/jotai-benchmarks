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
struct ext4_fsmap {scalar_t__ fmr_device; scalar_t__ fmr_physical; scalar_t__ fmr_owner; } ;

/* Variables and functions */

__attribute__((used)) static bool ext4_getfsmap_check_keys(struct ext4_fsmap *low_key,
				     struct ext4_fsmap *high_key)
{
	if (low_key->fmr_device > high_key->fmr_device)
		return false;
	if (low_key->fmr_device < high_key->fmr_device)
		return true;

	if (low_key->fmr_physical > high_key->fmr_physical)
		return false;
	if (low_key->fmr_physical < high_key->fmr_physical)
		return true;

	if (low_key->fmr_owner > high_key->fmr_owner)
		return false;
	if (low_key->fmr_owner < high_key->fmr_owner)
		return true;

	return false;
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
          int _len_low_key0 = 1;
          struct ext4_fsmap * low_key = (struct ext4_fsmap *) malloc(_len_low_key0*sizeof(struct ext4_fsmap));
          for(int _i0 = 0; _i0 < _len_low_key0; _i0++) {
            low_key[_i0].fmr_device = ((-2 * (next_i()%2)) + 1) * next_i();
        low_key[_i0].fmr_physical = ((-2 * (next_i()%2)) + 1) * next_i();
        low_key[_i0].fmr_owner = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_high_key0 = 1;
          struct ext4_fsmap * high_key = (struct ext4_fsmap *) malloc(_len_high_key0*sizeof(struct ext4_fsmap));
          for(int _i0 = 0; _i0 < _len_high_key0; _i0++) {
            high_key[_i0].fmr_device = ((-2 * (next_i()%2)) + 1) * next_i();
        high_key[_i0].fmr_physical = ((-2 * (next_i()%2)) + 1) * next_i();
        high_key[_i0].fmr_owner = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ext4_getfsmap_check_keys(low_key,high_key);
          printf("%d\n", benchRet); 
          free(low_key);
          free(high_key);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
