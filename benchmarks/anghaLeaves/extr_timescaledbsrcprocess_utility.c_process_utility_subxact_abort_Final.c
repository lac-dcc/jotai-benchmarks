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
typedef  int SubXactEvent ;
typedef  int /*<<< orphan*/  SubTransactionId ;

/* Variables and functions */
#define  SUBXACT_EVENT_ABORT_SUB 128 
 int expect_chunk_modification ; 

__attribute__((used)) static void
process_utility_subxact_abort(SubXactEvent event, SubTransactionId mySubid,
							  SubTransactionId parentSubid, void *arg)
{
	switch (event)
	{
		case SUBXACT_EVENT_ABORT_SUB:
			/* see note in process_utility_xact_abort */
			expect_chunk_modification = false;
		default:
			break;
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
          int event = 100;
          int mySubid = 100;
          int parentSubid = 100;
          void * arg;
          process_utility_subxact_abort(event,mySubid,parentSubid,arg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int event = 255;
          int mySubid = 255;
          int parentSubid = 255;
          void * arg;
          process_utility_subxact_abort(event,mySubid,parentSubid,arg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int event = 10;
          int mySubid = 10;
          int parentSubid = 10;
          void * arg;
          process_utility_subxact_abort(event,mySubid,parentSubid,arg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
