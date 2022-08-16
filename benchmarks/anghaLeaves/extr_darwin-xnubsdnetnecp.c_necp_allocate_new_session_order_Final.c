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
typedef  int u_int32_t ;
typedef  int control_unit ;

/* Variables and functions */
 int NECP_SESSION_NUM_PRIORITIES ; 
 int NECP_SESSION_PRIORITY_DEFAULT ; 
 int NECP_SESSION_PRIORITY_UNKNOWN ; 

__attribute__((used)) static u_int32_t
necp_allocate_new_session_order(u_int32_t priority, u_int32_t control_unit)
{
	u_int32_t new_order = 0;

	// For now, just allocate 1000 orders for each priority
	if (priority == NECP_SESSION_PRIORITY_UNKNOWN || priority > NECP_SESSION_NUM_PRIORITIES) {
		priority = NECP_SESSION_PRIORITY_DEFAULT;
	}

	// Use the control unit to decide the offset into the priority list
	new_order = (control_unit) + ((priority - 1) * 1000);

	return (new_order);
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
          int priority = 100;
          int control_unit = 100;
          int benchRet = necp_allocate_new_session_order(priority,control_unit);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int priority = 255;
          int control_unit = 255;
          int benchRet = necp_allocate_new_session_order(priority,control_unit);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int priority = 10;
          int control_unit = 10;
          int benchRet = necp_allocate_new_session_order(priority,control_unit);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
