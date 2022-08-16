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
struct TYPE_2__ {scalar_t__ fmr_physical; } ;
struct ext4_getfsmap_info {TYPE_1__ gfi_low; } ;
struct ext4_fsmap {scalar_t__ fmr_physical; } ;

/* Variables and functions */

__attribute__((used)) static bool ext4_getfsmap_rec_before_low_key(struct ext4_getfsmap_info *info,
					     struct ext4_fsmap *rec)
{
	return rec->fmr_physical < info->gfi_low.fmr_physical;
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
          int _len_info0 = 1;
          struct ext4_getfsmap_info * info = (struct ext4_getfsmap_info *) malloc(_len_info0*sizeof(struct ext4_getfsmap_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].gfi_low.fmr_physical = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rec0 = 1;
          struct ext4_fsmap * rec = (struct ext4_fsmap *) malloc(_len_rec0*sizeof(struct ext4_fsmap));
          for(int _i0 = 0; _i0 < _len_rec0; _i0++) {
            rec[_i0].fmr_physical = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ext4_getfsmap_rec_before_low_key(info,rec);
          printf("%d\n", benchRet); 
          free(info);
          free(rec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
