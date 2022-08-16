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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct TYPE_3__ {int key_size; int inner_size; int outer_size; int spi; int seq_num0; int seq_num1; int seq_num_mask0; int seq_num_mask1; int seq_num_mask2; int seq_num_mask3; int iv0; int iv1; int iv2; int iv3; } ;
struct TYPE_4__ {TYPE_1__ bf; } ;
struct dynamic_sa_ctl {TYPE_2__ sa_contents; } ;

/* Variables and functions */

__attribute__((used)) static inline u32
get_dynamic_sa_offset_state_ptr_field(struct dynamic_sa_ctl *cts)
{
	u32 offset;

	offset = cts->sa_contents.bf.key_size
		+ cts->sa_contents.bf.inner_size
		+ cts->sa_contents.bf.outer_size
		+ cts->sa_contents.bf.spi
		+ cts->sa_contents.bf.seq_num0
		+ cts->sa_contents.bf.seq_num1
		+ cts->sa_contents.bf.seq_num_mask0
		+ cts->sa_contents.bf.seq_num_mask1
		+ cts->sa_contents.bf.seq_num_mask2
		+ cts->sa_contents.bf.seq_num_mask3
		+ cts->sa_contents.bf.iv0
		+ cts->sa_contents.bf.iv1
		+ cts->sa_contents.bf.iv2
		+ cts->sa_contents.bf.iv3;

	return sizeof(struct dynamic_sa_ctl) + offset * 4;
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
          int _len_cts0 = 1;
          struct dynamic_sa_ctl * cts = (struct dynamic_sa_ctl *) malloc(_len_cts0*sizeof(struct dynamic_sa_ctl));
          for(int _i0 = 0; _i0 < _len_cts0; _i0++) {
            cts[_i0].sa_contents.bf.key_size = ((-2 * (next_i()%2)) + 1) * next_i();
        cts[_i0].sa_contents.bf.inner_size = ((-2 * (next_i()%2)) + 1) * next_i();
        cts[_i0].sa_contents.bf.outer_size = ((-2 * (next_i()%2)) + 1) * next_i();
        cts[_i0].sa_contents.bf.spi = ((-2 * (next_i()%2)) + 1) * next_i();
        cts[_i0].sa_contents.bf.seq_num0 = ((-2 * (next_i()%2)) + 1) * next_i();
        cts[_i0].sa_contents.bf.seq_num1 = ((-2 * (next_i()%2)) + 1) * next_i();
        cts[_i0].sa_contents.bf.seq_num_mask0 = ((-2 * (next_i()%2)) + 1) * next_i();
        cts[_i0].sa_contents.bf.seq_num_mask1 = ((-2 * (next_i()%2)) + 1) * next_i();
        cts[_i0].sa_contents.bf.seq_num_mask2 = ((-2 * (next_i()%2)) + 1) * next_i();
        cts[_i0].sa_contents.bf.seq_num_mask3 = ((-2 * (next_i()%2)) + 1) * next_i();
        cts[_i0].sa_contents.bf.iv0 = ((-2 * (next_i()%2)) + 1) * next_i();
        cts[_i0].sa_contents.bf.iv1 = ((-2 * (next_i()%2)) + 1) * next_i();
        cts[_i0].sa_contents.bf.iv2 = ((-2 * (next_i()%2)) + 1) * next_i();
        cts[_i0].sa_contents.bf.iv3 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_dynamic_sa_offset_state_ptr_field(cts);
          printf("%d\n", benchRet); 
          free(cts);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
