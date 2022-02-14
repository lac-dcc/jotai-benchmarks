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
typedef  int u8 ;

/* Variables and functions */
#define  MUSB_EP0_STAGE_ACKWAIT 134 
#define  MUSB_EP0_STAGE_IDLE 133 
#define  MUSB_EP0_STAGE_RX 132 
#define  MUSB_EP0_STAGE_SETUP 131 
#define  MUSB_EP0_STAGE_STATUSIN 130 
#define  MUSB_EP0_STAGE_STATUSOUT 129 
#define  MUSB_EP0_STAGE_TX 128 

__attribute__((used)) static char *decode_ep0stage(u8 stage)
{
	switch (stage) {
	case MUSB_EP0_STAGE_IDLE:	return "idle";
	case MUSB_EP0_STAGE_SETUP:	return "setup";
	case MUSB_EP0_STAGE_TX:		return "in";
	case MUSB_EP0_STAGE_RX:		return "out";
	case MUSB_EP0_STAGE_ACKWAIT:	return "wait";
	case MUSB_EP0_STAGE_STATUSIN:	return "in/status";
	case MUSB_EP0_STAGE_STATUSOUT:	return "out/status";
	default:			return "?";
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
          int stage = 255;
          char * benchRet = decode_ep0stage(stage);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
