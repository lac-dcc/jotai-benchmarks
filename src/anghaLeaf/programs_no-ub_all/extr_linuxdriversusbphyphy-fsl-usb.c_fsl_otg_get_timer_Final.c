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
struct fsl_otg_timer {int dummy; } ;
typedef  enum otg_fsm_timer { ____Placeholder_otg_fsm_timer } otg_fsm_timer ;

/* Variables and functions */
#define  A_AIDL_BDIS 134 
#define  A_WAIT_BCON 133 
#define  A_WAIT_ENUM 132 
#define  A_WAIT_VRISE 131 
#define  B_ASE0_BRST 130 
#define  B_SE0_SRP 129 
#define  B_SRP_FAIL 128 
 struct fsl_otg_timer* a_wait_vrise_tmr ; 

__attribute__((used)) static struct fsl_otg_timer *fsl_otg_get_timer(enum otg_fsm_timer t)
{
	struct fsl_otg_timer *timer;

	/* REVISIT: use array of pointers to timers instead */
	switch (t) {
	case A_WAIT_VRISE:
		timer = a_wait_vrise_tmr;
		break;
	case A_WAIT_BCON:
		timer = a_wait_vrise_tmr;
		break;
	case A_AIDL_BDIS:
		timer = a_wait_vrise_tmr;
		break;
	case B_ASE0_BRST:
		timer = a_wait_vrise_tmr;
		break;
	case B_SE0_SRP:
		timer = a_wait_vrise_tmr;
		break;
	case B_SRP_FAIL:
		timer = a_wait_vrise_tmr;
		break;
	case A_WAIT_ENUM:
		timer = a_wait_vrise_tmr;
		break;
	default:
		timer = NULL;
	}

	return timer;
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
          enum otg_fsm_timer t = 0;
          struct fsl_otg_timer * benchRet = fsl_otg_get_timer(t);
          printf("{{struct}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
