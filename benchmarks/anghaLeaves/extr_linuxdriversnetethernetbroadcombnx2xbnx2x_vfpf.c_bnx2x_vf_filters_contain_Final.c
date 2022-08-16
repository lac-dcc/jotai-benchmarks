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
typedef  int u32 ;
struct vfpf_set_q_filters_tlv {int n_mac_vlan_filters; TYPE_1__* filters; } ;
struct TYPE_2__ {int flags; } ;

/* Variables and functions */

__attribute__((used)) static int bnx2x_vf_filters_contain(struct vfpf_set_q_filters_tlv *filters,
				    u32 flags)
{
	int i, cnt = 0;

	for (i = 0; i < filters->n_mac_vlan_filters; i++)
		if  ((filters->filters[i].flags & flags) == flags)
			cnt++;

	return cnt;
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
          int flags = 100;
          int _len_filters0 = 1;
          struct vfpf_set_q_filters_tlv * filters = (struct vfpf_set_q_filters_tlv *) malloc(_len_filters0*sizeof(struct vfpf_set_q_filters_tlv));
          for(int _i0 = 0; _i0 < _len_filters0; _i0++) {
            filters[_i0].n_mac_vlan_filters = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_filters__i0__filters0 = 1;
          filters[_i0].filters = (struct TYPE_2__ *) malloc(_len_filters__i0__filters0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_filters__i0__filters0; _j0++) {
            filters[_i0].filters->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = bnx2x_vf_filters_contain(filters,flags);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_filters0; _aux++) {
          free(filters[_aux].filters);
          }
          free(filters);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
