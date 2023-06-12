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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct btrfs_free_space_ctl {scalar_t__ free_extents; scalar_t__ extents_thresh; } ;
struct btrfs_free_space {int bytes; } ;

/* Variables and functions */
 int INODES_PER_BITMAP ; 

__attribute__((used)) static bool use_bitmap(struct btrfs_free_space_ctl *ctl,
		       struct btrfs_free_space *info)
{
	if (ctl->free_extents < ctl->extents_thresh ||
	    info->bytes > INODES_PER_BITMAP / 10)
		return false;

	return true;
}

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
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
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
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int _len_ctl0 = 65025;
          struct btrfs_free_space_ctl * ctl = (struct btrfs_free_space_ctl *) malloc(_len_ctl0*sizeof(struct btrfs_free_space_ctl));
          for(int _i0 = 0; _i0 < _len_ctl0; _i0++) {
              ctl[_i0].free_extents = ((-2 * (next_i()%2)) + 1) * next_i();
          ctl[_i0].extents_thresh = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_info0 = 65025;
          struct btrfs_free_space * info = (struct btrfs_free_space *) malloc(_len_info0*sizeof(struct btrfs_free_space));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              info[_i0].bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = use_bitmap(ctl,info);
          printf("%d\n", benchRet); 
          free(ctl);
          free(info);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
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
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int _len_ctl0 = 100;
          struct btrfs_free_space_ctl * ctl = (struct btrfs_free_space_ctl *) malloc(_len_ctl0*sizeof(struct btrfs_free_space_ctl));
          for(int _i0 = 0; _i0 < _len_ctl0; _i0++) {
              ctl[_i0].free_extents = ((-2 * (next_i()%2)) + 1) * next_i();
          ctl[_i0].extents_thresh = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_info0 = 100;
          struct btrfs_free_space * info = (struct btrfs_free_space *) malloc(_len_info0*sizeof(struct btrfs_free_space));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              info[_i0].bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = use_bitmap(ctl,info);
          printf("%d\n", benchRet); 
          free(ctl);
          free(info);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
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
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int _len_ctl0 = 1;
          struct btrfs_free_space_ctl * ctl = (struct btrfs_free_space_ctl *) malloc(_len_ctl0*sizeof(struct btrfs_free_space_ctl));
          for(int _i0 = 0; _i0 < _len_ctl0; _i0++) {
              ctl[_i0].free_extents = ((-2 * (next_i()%2)) + 1) * next_i();
          ctl[_i0].extents_thresh = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_info0 = 1;
          struct btrfs_free_space * info = (struct btrfs_free_space *) malloc(_len_info0*sizeof(struct btrfs_free_space));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              info[_i0].bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = use_bitmap(ctl,info);
          printf("%d\n", benchRet); 
          free(ctl);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
