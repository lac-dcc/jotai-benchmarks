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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  enum iwl_mvm_tdls_cs_state { ____Placeholder_iwl_mvm_tdls_cs_state } iwl_mvm_tdls_cs_state ;

/* Variables and functions */
#define  IWL_MVM_TDLS_SW_ACTIVE 132 
#define  IWL_MVM_TDLS_SW_IDLE 131 
#define  IWL_MVM_TDLS_SW_REQ_RCVD 130 
#define  IWL_MVM_TDLS_SW_REQ_SENT 129 
#define  IWL_MVM_TDLS_SW_RESP_RCVD 128 

__attribute__((used)) static const char *
iwl_mvm_tdls_cs_state_str(enum iwl_mvm_tdls_cs_state state)
{
	switch (state) {
	case IWL_MVM_TDLS_SW_IDLE:
		return "IDLE";
	case IWL_MVM_TDLS_SW_REQ_SENT:
		return "REQ SENT";
	case IWL_MVM_TDLS_SW_RESP_RCVD:
		return "RESP RECEIVED";
	case IWL_MVM_TDLS_SW_REQ_RCVD:
		return "REQ RECEIVED";
	case IWL_MVM_TDLS_SW_ACTIVE:
		return "ACTIVE";
	}

	return NULL;
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
          enum iwl_mvm_tdls_cs_state state = 0;
          const char * benchRet = iwl_mvm_tdls_cs_state_str(state);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum iwl_mvm_tdls_cs_state state = 0;
          const char * benchRet = iwl_mvm_tdls_cs_state_str(state);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum iwl_mvm_tdls_cs_state state = 0;
          const char * benchRet = iwl_mvm_tdls_cs_state_str(state);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
