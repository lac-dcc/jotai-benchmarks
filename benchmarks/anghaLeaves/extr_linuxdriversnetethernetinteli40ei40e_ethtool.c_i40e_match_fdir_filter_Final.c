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
struct i40e_fdir_filter {scalar_t__ dst_ip; scalar_t__ src_ip; scalar_t__ dst_port; scalar_t__ src_port; scalar_t__ flow_type; scalar_t__ ip4_proto; } ;

/* Variables and functions */

__attribute__((used)) static bool i40e_match_fdir_filter(struct i40e_fdir_filter *a,
				   struct i40e_fdir_filter *b)
{
	/* The filters do not much if any of these criteria differ. */
	if (a->dst_ip != b->dst_ip ||
	    a->src_ip != b->src_ip ||
	    a->dst_port != b->dst_port ||
	    a->src_port != b->src_port ||
	    a->flow_type != b->flow_type ||
	    a->ip4_proto != b->ip4_proto)
		return false;

	return true;
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
          int _len_a0 = 1;
          struct i40e_fdir_filter * a = (struct i40e_fdir_filter *) malloc(_len_a0*sizeof(struct i40e_fdir_filter));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].dst_ip = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].src_ip = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].dst_port = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].src_port = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].flow_type = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].ip4_proto = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b0 = 1;
          struct i40e_fdir_filter * b = (struct i40e_fdir_filter *) malloc(_len_b0*sizeof(struct i40e_fdir_filter));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].dst_ip = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].src_ip = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].dst_port = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].src_port = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].flow_type = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].ip4_proto = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = i40e_match_fdir_filter(a,b);
          printf("%d\n", benchRet); 
          free(a);
          free(b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
