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
typedef  enum skd_drvr_state { ____Placeholder_skd_drvr_state } skd_drvr_state ;

/* Variables and functions */
#define  SKD_DRVR_STATE_BUSY 144 
#define  SKD_DRVR_STATE_BUSY_ERASE 143 
#define  SKD_DRVR_STATE_BUSY_IMMINENT 142 
#define  SKD_DRVR_STATE_BUSY_SANITIZE 141 
#define  SKD_DRVR_STATE_DISAPPEARED 140 
#define  SKD_DRVR_STATE_FAULT 139 
#define  SKD_DRVR_STATE_IDLE 138 
#define  SKD_DRVR_STATE_LOAD 137 
#define  SKD_DRVR_STATE_ONLINE 136 
#define  SKD_DRVR_STATE_PAUSED 135 
#define  SKD_DRVR_STATE_PAUSING 134 
#define  SKD_DRVR_STATE_RESTARTING 133 
#define  SKD_DRVR_STATE_RESUMING 132 
#define  SKD_DRVR_STATE_STARTING 131 
#define  SKD_DRVR_STATE_STOPPING 130 
#define  SKD_DRVR_STATE_SYNCING 129 
#define  SKD_DRVR_STATE_WAIT_BOOT 128 

const char *skd_skdev_state_to_str(enum skd_drvr_state state)
{
	switch (state) {
	case SKD_DRVR_STATE_LOAD:
		return "LOAD";
	case SKD_DRVR_STATE_IDLE:
		return "IDLE";
	case SKD_DRVR_STATE_BUSY:
		return "BUSY";
	case SKD_DRVR_STATE_STARTING:
		return "STARTING";
	case SKD_DRVR_STATE_ONLINE:
		return "ONLINE";
	case SKD_DRVR_STATE_PAUSING:
		return "PAUSING";
	case SKD_DRVR_STATE_PAUSED:
		return "PAUSED";
	case SKD_DRVR_STATE_RESTARTING:
		return "RESTARTING";
	case SKD_DRVR_STATE_RESUMING:
		return "RESUMING";
	case SKD_DRVR_STATE_STOPPING:
		return "STOPPING";
	case SKD_DRVR_STATE_SYNCING:
		return "SYNCING";
	case SKD_DRVR_STATE_FAULT:
		return "FAULT";
	case SKD_DRVR_STATE_DISAPPEARED:
		return "DISAPPEARED";
	case SKD_DRVR_STATE_BUSY_ERASE:
		return "BUSY_ERASE";
	case SKD_DRVR_STATE_BUSY_SANITIZE:
		return "BUSY_SANITIZE";
	case SKD_DRVR_STATE_BUSY_IMMINENT:
		return "BUSY_IMMINENT";
	case SKD_DRVR_STATE_WAIT_BOOT:
		return "WAIT_BOOT";

	default:
		return "???";
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
          enum skd_drvr_state state = 0;
          const char * benchRet = skd_skdev_state_to_str(state);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
