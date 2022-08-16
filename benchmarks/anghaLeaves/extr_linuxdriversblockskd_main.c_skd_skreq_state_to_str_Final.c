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
typedef  enum skd_req_state { ____Placeholder_skd_req_state } skd_req_state ;

/* Variables and functions */
#define  SKD_REQ_STATE_BUSY 132 
#define  SKD_REQ_STATE_COMPLETED 131 
#define  SKD_REQ_STATE_IDLE 130 
#define  SKD_REQ_STATE_SETUP 129 
#define  SKD_REQ_STATE_TIMEOUT 128 

__attribute__((used)) static const char *skd_skreq_state_to_str(enum skd_req_state state)
{
	switch (state) {
	case SKD_REQ_STATE_IDLE:
		return "IDLE";
	case SKD_REQ_STATE_SETUP:
		return "SETUP";
	case SKD_REQ_STATE_BUSY:
		return "BUSY";
	case SKD_REQ_STATE_COMPLETED:
		return "COMPLETED";
	case SKD_REQ_STATE_TIMEOUT:
		return "TIMEOUT";
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
          enum skd_req_state state = 0;
          const char * benchRet = skd_skreq_state_to_str(state);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
