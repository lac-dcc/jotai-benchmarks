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
typedef  enum tcm_tmreq_table { ____Placeholder_tcm_tmreq_table } tcm_tmreq_table ;

/* Variables and functions */
#define  TMR_ABORT_TASK 135 
#define  TMR_ABORT_TASK_SET 134 
#define  TMR_CLEAR_ACA 133 
#define  TMR_CLEAR_TASK_SET 132 
#define  TMR_LUN_RESET 131 
#define  TMR_TARGET_COLD_RESET 130 
#define  TMR_TARGET_WARM_RESET 129 
#define  TMR_UNKNOWN 128 

__attribute__((used)) static const char *target_tmf_name(enum tcm_tmreq_table tmf)
{
	switch (tmf) {
	case TMR_ABORT_TASK:		return "ABORT_TASK";
	case TMR_ABORT_TASK_SET:	return "ABORT_TASK_SET";
	case TMR_CLEAR_ACA:		return "CLEAR_ACA";
	case TMR_CLEAR_TASK_SET:	return "CLEAR_TASK_SET";
	case TMR_LUN_RESET:		return "LUN_RESET";
	case TMR_TARGET_WARM_RESET:	return "TARGET_WARM_RESET";
	case TMR_TARGET_COLD_RESET:	return "TARGET_COLD_RESET";
	case TMR_UNKNOWN:		break;
	}
	return "(?)";
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
          enum tcm_tmreq_table tmf = 0;
          const char * benchRet = target_tmf_name(tmf);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum tcm_tmreq_table tmf = 0;
          const char * benchRet = target_tmf_name(tmf);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum tcm_tmreq_table tmf = 0;
          const char * benchRet = target_tmf_name(tmf);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
