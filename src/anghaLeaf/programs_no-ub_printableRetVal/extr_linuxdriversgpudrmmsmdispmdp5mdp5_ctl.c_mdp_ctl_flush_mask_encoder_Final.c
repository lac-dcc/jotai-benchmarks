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
typedef  int /*<<< orphan*/  u32 ;
struct mdp5_interface {scalar_t__ type; int num; } ;

/* Variables and functions */
 scalar_t__ INTF_WB ; 
 int /*<<< orphan*/  MDP5_CTL_FLUSH_TIMING_0 ; 
 int /*<<< orphan*/  MDP5_CTL_FLUSH_TIMING_1 ; 
 int /*<<< orphan*/  MDP5_CTL_FLUSH_TIMING_2 ; 
 int /*<<< orphan*/  MDP5_CTL_FLUSH_TIMING_3 ; 
 int /*<<< orphan*/  MDP5_CTL_FLUSH_WB ; 

u32 mdp_ctl_flush_mask_encoder(struct mdp5_interface *intf)
{
	if (intf->type == INTF_WB)
		return MDP5_CTL_FLUSH_WB;

	switch (intf->num) {
	case 0: return MDP5_CTL_FLUSH_TIMING_0;
	case 1: return MDP5_CTL_FLUSH_TIMING_1;
	case 2: return MDP5_CTL_FLUSH_TIMING_2;
	case 3: return MDP5_CTL_FLUSH_TIMING_3;
	default: return 0;
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

    // big-arr
    case 0:
    {
          int _len_intf0 = 1;
          struct mdp5_interface * intf = (struct mdp5_interface *) malloc(_len_intf0*sizeof(struct mdp5_interface));
          for(int _i0 = 0; _i0 < _len_intf0; _i0++) {
            intf->type = ((-2 * (next_i()%2)) + 1) * next_i();
        intf->num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mdp_ctl_flush_mask_encoder(intf);
          printf("%d\n", benchRet); 
          free(intf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
