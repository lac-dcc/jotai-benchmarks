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
struct ib_sge {int /*<<< orphan*/  lkey; int /*<<< orphan*/  length; int /*<<< orphan*/  addr; } ;
struct i40iw_sge {int /*<<< orphan*/  stag; int /*<<< orphan*/  len; int /*<<< orphan*/  tag_off; } ;

/* Variables and functions */
 unsigned int I40IW_MAX_WQ_FRAGMENT_COUNT ; 

__attribute__((used)) static void i40iw_copy_sg_list(struct i40iw_sge *sg_list, struct ib_sge *sgl, int num_sges)
{
	unsigned int i;

	for (i = 0; (i < num_sges) && (i < I40IW_MAX_WQ_FRAGMENT_COUNT); i++) {
		sg_list[i].tag_off = sgl[i].addr;
		sg_list[i].len = sgl[i].length;
		sg_list[i].stag = sgl[i].lkey;
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
          int num_sges = 100;
          int _len_sg_list0 = 1;
          struct i40iw_sge * sg_list = (struct i40iw_sge *) malloc(_len_sg_list0*sizeof(struct i40iw_sge));
          for(int _i0 = 0; _i0 < _len_sg_list0; _i0++) {
            sg_list[_i0].stag = ((-2 * (next_i()%2)) + 1) * next_i();
        sg_list[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
        sg_list[_i0].tag_off = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sgl0 = 1;
          struct ib_sge * sgl = (struct ib_sge *) malloc(_len_sgl0*sizeof(struct ib_sge));
          for(int _i0 = 0; _i0 < _len_sgl0; _i0++) {
            sgl[_i0].lkey = ((-2 * (next_i()%2)) + 1) * next_i();
        sgl[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        sgl[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          i40iw_copy_sg_list(sg_list,sgl,num_sges);
          free(sg_list);
          free(sgl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
