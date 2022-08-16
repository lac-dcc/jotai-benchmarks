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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  enum intel_pt_pkt_state { ____Placeholder_intel_pt_pkt_state } intel_pt_pkt_state ;

/* Variables and functions */
#define  INTEL_PT_STATE_ERR_RESYNC 136 
#define  INTEL_PT_STATE_FUP 135 
#define  INTEL_PT_STATE_FUP_NO_TIP 134 
#define  INTEL_PT_STATE_IN_SYNC 133 
#define  INTEL_PT_STATE_NO_IP 132 
#define  INTEL_PT_STATE_NO_PSB 131 
#define  INTEL_PT_STATE_TIP 130 
#define  INTEL_PT_STATE_TIP_PGD 129 
#define  INTEL_PT_STATE_TNT 128 

__attribute__((used)) static inline bool intel_pt_sample_time(enum intel_pt_pkt_state pkt_state)
{
	switch (pkt_state) {
	case INTEL_PT_STATE_NO_PSB:
	case INTEL_PT_STATE_NO_IP:
	case INTEL_PT_STATE_ERR_RESYNC:
	case INTEL_PT_STATE_IN_SYNC:
	case INTEL_PT_STATE_TNT:
		return true;
	case INTEL_PT_STATE_TIP:
	case INTEL_PT_STATE_TIP_PGD:
	case INTEL_PT_STATE_FUP:
	case INTEL_PT_STATE_FUP_NO_TIP:
		return false;
	default:
		return true;
	};
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
          enum intel_pt_pkt_state pkt_state = 100;
          int benchRet = intel_pt_sample_time(pkt_state);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum intel_pt_pkt_state pkt_state = 255;
          int benchRet = intel_pt_sample_time(pkt_state);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum intel_pt_pkt_state pkt_state = 10;
          int benchRet = intel_pt_sample_time(pkt_state);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
