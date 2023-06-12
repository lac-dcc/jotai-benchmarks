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
       0            empty\n\
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
typedef  size_t u32 ;
struct sumo_vid_mapping_table {size_t num_entries; TYPE_1__* entries; } ;
struct radeon_device {int dummy; } ;
struct TYPE_2__ {size_t vid_2bit; size_t vid_7bit; } ;

/* Variables and functions */

u32 sumo_convert_vid2_to_vid7(struct radeon_device *rdev,
			      struct sumo_vid_mapping_table *vid_mapping_table,
			      u32 vid_2bit)
{
	u32 i;

	for (i = 0; i < vid_mapping_table->num_entries; i++) {
		if (vid_mapping_table->entries[i].vid_2bit == vid_2bit)
			return vid_mapping_table->entries[i].vid_7bit;
	}

	return vid_mapping_table->entries[vid_mapping_table->num_entries - 1].vid_7bit;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 29
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          unsigned long vid_2bit = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_rdev0 = 1;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
              rdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_vid_mapping_table0 = 1;
          struct sumo_vid_mapping_table * vid_mapping_table = (struct sumo_vid_mapping_table *) malloc(_len_vid_mapping_table0*sizeof(struct sumo_vid_mapping_table));
          for(int _i0 = 0; _i0 < _len_vid_mapping_table0; _i0++) {
              vid_mapping_table[_i0].num_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vid_mapping_table__i0__entries0 = 1;
          vid_mapping_table[_i0].entries = (struct TYPE_2__ *) malloc(_len_vid_mapping_table__i0__entries0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_vid_mapping_table__i0__entries0; _j0++) {
              vid_mapping_table[_i0].entries->vid_2bit = ((-2 * (next_i()%2)) + 1) * next_i();
          vid_mapping_table[_i0].entries->vid_7bit = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned long benchRet = sumo_convert_vid2_to_vid7(rdev,vid_mapping_table,vid_2bit);
          printf("%lu\n", benchRet); 
          free(rdev);
          for(int _aux = 0; _aux < _len_vid_mapping_table0; _aux++) {
          free(vid_mapping_table[_aux].entries);
          }
          free(vid_mapping_table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
