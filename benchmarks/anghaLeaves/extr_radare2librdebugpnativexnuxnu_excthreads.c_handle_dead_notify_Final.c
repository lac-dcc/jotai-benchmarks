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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int msgh_id; } ;
struct TYPE_7__ {TYPE_1__ hdr; } ;
typedef  TYPE_2__ exc_msg ;
struct TYPE_8__ {int pid; } ;
typedef  TYPE_3__ RDebug ;

/* Variables and functions */

__attribute__((used)) static bool handle_dead_notify (RDebug *dbg, exc_msg *msg) {
	if (msg->hdr.msgh_id == 0x48) {
		dbg->pid = -1;
		return true;
	}
	return false;
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
          int _len_dbg0 = 1;
          struct TYPE_8__ * dbg = (struct TYPE_8__ *) malloc(_len_dbg0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_dbg0; _i0++) {
            dbg[_i0].pid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_msg0 = 1;
          struct TYPE_7__ * msg = (struct TYPE_7__ *) malloc(_len_msg0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0].hdr.msgh_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = handle_dead_notify(dbg,msg);
          printf("%d\n", benchRet); 
          free(dbg);
          free(msg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
