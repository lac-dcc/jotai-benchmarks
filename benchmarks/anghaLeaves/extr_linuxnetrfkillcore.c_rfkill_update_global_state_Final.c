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
       3            empty\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  enum rfkill_type { ____Placeholder_rfkill_type } rfkill_type ;
struct TYPE_2__ {int cur; } ;

/* Variables and functions */
 int NUM_RFKILL_TYPES ; 
 int RFKILL_TYPE_ALL ; 
 TYPE_1__* rfkill_global_states ; 

__attribute__((used)) static void rfkill_update_global_state(enum rfkill_type type, bool blocked)
{
	int i;

	if (type != RFKILL_TYPE_ALL) {
		rfkill_global_states[type].cur = blocked;
		return;
	}

	for (i = 0; i < NUM_RFKILL_TYPES; i++)
		rfkill_global_states[i].cur = blocked;
}

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
          enum rfkill_type type = 0;
        
          int blocked = 100;
        
          rfkill_update_global_state(type,blocked);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum rfkill_type type = 0;
        
          int blocked = 255;
        
          rfkill_update_global_state(type,blocked);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum rfkill_type type = 0;
        
          int blocked = 10;
        
          rfkill_update_global_state(type,blocked);
        
        break;
    }
    // empty
    case 3:
    {
          enum rfkill_type type = 0;
        
          int blocked = ((-2 * (next_i()%2)) + 1) * next_i();
        
          rfkill_update_global_state(type,blocked);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
