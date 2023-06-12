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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
struct stripe_head {int pd_idx; int qd_idx; scalar_t__ ddf_layout; } ;

/* Variables and functions */

__attribute__((used)) static int raid6_idx_to_slot(int idx, struct stripe_head *sh,
			     int *count, int syndrome_disks)
{
	int slot = *count;

	if (sh->ddf_layout)
		(*count)++;
	if (idx == sh->pd_idx)
		return syndrome_disks;
	if (idx == sh->qd_idx)
		return syndrome_disks + 1;
	if (!sh->ddf_layout)
		(*count)++;
	return slot;
}

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
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int idx = 100;
        
          int syndrome_disks = 100;
        
          int _len_sh0 = 1;
          struct stripe_head * sh = (struct stripe_head *) malloc(_len_sh0*sizeof(struct stripe_head));
          for(int _i0 = 0; _i0 < _len_sh0; _i0++) {
              sh[_i0].pd_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          sh[_i0].qd_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          sh[_i0].ddf_layout = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_count0 = 1;
          int * count = (int *) malloc(_len_count0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = raid6_idx_to_slot(idx,sh,count,syndrome_disks);
          printf("%d\n", benchRet); 
          free(sh);
          free(count);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int idx = 255;
        
          int syndrome_disks = 255;
        
          int _len_sh0 = 65025;
          struct stripe_head * sh = (struct stripe_head *) malloc(_len_sh0*sizeof(struct stripe_head));
          for(int _i0 = 0; _i0 < _len_sh0; _i0++) {
              sh[_i0].pd_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          sh[_i0].qd_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          sh[_i0].ddf_layout = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_count0 = 65025;
          int * count = (int *) malloc(_len_count0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = raid6_idx_to_slot(idx,sh,count,syndrome_disks);
          printf("%d\n", benchRet); 
          free(sh);
          free(count);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 16
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 17
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 17
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int idx = 10;
        
          int syndrome_disks = 10;
        
          int _len_sh0 = 100;
          struct stripe_head * sh = (struct stripe_head *) malloc(_len_sh0*sizeof(struct stripe_head));
          for(int _i0 = 0; _i0 < _len_sh0; _i0++) {
              sh[_i0].pd_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          sh[_i0].qd_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          sh[_i0].ddf_layout = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_count0 = 100;
          int * count = (int *) malloc(_len_count0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = raid6_idx_to_slot(idx,sh,count,syndrome_disks);
          printf("%d\n", benchRet); 
          free(sh);
          free(count);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int idx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int syndrome_disks = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_sh0 = 1;
          struct stripe_head * sh = (struct stripe_head *) malloc(_len_sh0*sizeof(struct stripe_head));
          for(int _i0 = 0; _i0 < _len_sh0; _i0++) {
              sh[_i0].pd_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          sh[_i0].qd_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          sh[_i0].ddf_layout = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_count0 = 1;
          int * count = (int *) malloc(_len_count0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_count0; _i0++) {
            count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = raid6_idx_to_slot(idx,sh,count,syndrome_disks);
          printf("%d\n", benchRet); 
          free(sh);
          free(count);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
