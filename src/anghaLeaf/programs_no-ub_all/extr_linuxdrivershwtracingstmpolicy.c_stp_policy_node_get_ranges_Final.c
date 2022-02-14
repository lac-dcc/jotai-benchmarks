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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct stp_policy_node {unsigned int first_master; unsigned int last_master; unsigned int first_channel; unsigned int last_channel; } ;

/* Variables and functions */

void stp_policy_node_get_ranges(struct stp_policy_node *policy_node,
				unsigned int *mstart, unsigned int *mend,
				unsigned int *cstart, unsigned int *cend)
{
	*mstart	= policy_node->first_master;
	*mend	= policy_node->last_master;
	*cstart	= policy_node->first_channel;
	*cend	= policy_node->last_channel;
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

    // big-arr
    case 0:
    {
          int _len_policy_node0 = 1;
          struct stp_policy_node * policy_node = (struct stp_policy_node *) malloc(_len_policy_node0*sizeof(struct stp_policy_node));
          for(int _i0 = 0; _i0 < _len_policy_node0; _i0++) {
            policy_node->first_master = ((-2 * (next_i()%2)) + 1) * next_i();
        policy_node->last_master = ((-2 * (next_i()%2)) + 1) * next_i();
        policy_node->first_channel = ((-2 * (next_i()%2)) + 1) * next_i();
        policy_node->last_channel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mstart0 = 65025;
          unsigned int * mstart = (unsigned int *) malloc(_len_mstart0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_mstart0; _i0++) {
            mstart[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mend0 = 65025;
          unsigned int * mend = (unsigned int *) malloc(_len_mend0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_mend0; _i0++) {
            mend[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cstart0 = 65025;
          unsigned int * cstart = (unsigned int *) malloc(_len_cstart0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_cstart0; _i0++) {
            cstart[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cend0 = 65025;
          unsigned int * cend = (unsigned int *) malloc(_len_cend0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_cend0; _i0++) {
            cend[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stp_policy_node_get_ranges(policy_node,mstart,mend,cstart,cend);
          free(policy_node);
          free(mstart);
          free(mend);
          free(cstart);
          free(cend);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
