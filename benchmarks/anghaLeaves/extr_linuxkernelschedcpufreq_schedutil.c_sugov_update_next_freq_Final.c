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
typedef  int /*<<< orphan*/  u64 ;
struct sugov_policy {unsigned int next_freq; int /*<<< orphan*/  last_freq_update_time; } ;

/* Variables and functions */

__attribute__((used)) static bool sugov_update_next_freq(struct sugov_policy *sg_policy, u64 time,
				   unsigned int next_freq)
{
	if (sg_policy->next_freq == next_freq)
		return false;

	sg_policy->next_freq = next_freq;
	sg_policy->last_freq_update_time = time;

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
          int time = 100;
          unsigned int next_freq = 100;
          int _len_sg_policy0 = 1;
          struct sugov_policy * sg_policy = (struct sugov_policy *) malloc(_len_sg_policy0*sizeof(struct sugov_policy));
          for(int _i0 = 0; _i0 < _len_sg_policy0; _i0++) {
            sg_policy[_i0].next_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        sg_policy[_i0].last_freq_update_time = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sugov_update_next_freq(sg_policy,time,next_freq);
          printf("%d\n", benchRet); 
          free(sg_policy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
