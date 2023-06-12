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

/* Type definitions */
typedef  size_t u8 ;

/* Variables and functions */
 int /*<<< orphan*/  MPTUNKNOWN_DRIVER ; 
 size_t MPT_MAX_PROTOCOL_DRIVERS ; 
 int /*<<< orphan*/ ** MptCallbacks ; 
 int /*<<< orphan*/ * MptDriverClass ; 
 int /*<<< orphan*/ ** MptEvHandlers ; 
 int /*<<< orphan*/  last_drv_idx ; 

void
mpt_deregister(u8 cb_idx)
{
	if (cb_idx && (cb_idx < MPT_MAX_PROTOCOL_DRIVERS)) {
		MptCallbacks[cb_idx] = NULL;
		MptDriverClass[cb_idx] = MPTUNKNOWN_DRIVER;
		MptEvHandlers[cb_idx] = NULL;

		last_drv_idx++;
	}
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
          unsigned long cb_idx = 100;
        
          mpt_deregister(cb_idx);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long cb_idx = 255;
        
          mpt_deregister(cb_idx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long cb_idx = 10;
        
          mpt_deregister(cb_idx);
        
        break;
    }
    // empty
    case 3:
    {
          unsigned long cb_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          mpt_deregister(cb_idx);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
