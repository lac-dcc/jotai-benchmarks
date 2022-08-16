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
struct TYPE_3__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_4__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct bcm_msg_head {TYPE_1__ ival2; TYPE_2__ ival1; } ;

/* Variables and functions */
 scalar_t__ BCM_TIMER_SEC_MAX ; 
 scalar_t__ USEC_PER_SEC ; 

__attribute__((used)) static bool bcm_is_invalid_tv(struct bcm_msg_head *msg_head)
{
	if ((msg_head->ival1.tv_sec < 0) ||
	    (msg_head->ival1.tv_sec > BCM_TIMER_SEC_MAX) ||
	    (msg_head->ival1.tv_usec < 0) ||
	    (msg_head->ival1.tv_usec >= USEC_PER_SEC) ||
	    (msg_head->ival2.tv_sec < 0) ||
	    (msg_head->ival2.tv_sec > BCM_TIMER_SEC_MAX) ||
	    (msg_head->ival2.tv_usec < 0) ||
	    (msg_head->ival2.tv_usec >= USEC_PER_SEC))
		return true;

	return false;
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
          int _len_msg_head0 = 1;
          struct bcm_msg_head * msg_head = (struct bcm_msg_head *) malloc(_len_msg_head0*sizeof(struct bcm_msg_head));
          for(int _i0 = 0; _i0 < _len_msg_head0; _i0++) {
            msg_head[_i0].ival2.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        msg_head[_i0].ival2.tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
        msg_head[_i0].ival1.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        msg_head[_i0].ival1.tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bcm_is_invalid_tv(msg_head);
          printf("%d\n", benchRet); 
          free(msg_head);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
