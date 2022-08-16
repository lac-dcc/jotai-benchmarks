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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct score_board {int maxproc; TYPE_1__* proc; } ;
typedef  scalar_t__ pid_t ;
struct TYPE_2__ {scalar_t__ pid; } ;

/* Variables and functions */

__attribute__((used)) static int
score_find(struct score_board *scb, pid_t pid) {
    int i;
    for (i = 0; i < scb->maxproc; i++) {
        if (scb->proc[i].pid == pid) {
            return i;
        }
    }
    return -1;
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
          long pid = 100;
          int _len_scb0 = 1;
          struct score_board * scb = (struct score_board *) malloc(_len_scb0*sizeof(struct score_board));
          for(int _i0 = 0; _i0 < _len_scb0; _i0++) {
            scb[_i0].maxproc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_scb__i0__proc0 = 1;
          scb[_i0].proc = (struct TYPE_2__ *) malloc(_len_scb__i0__proc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_scb__i0__proc0; _j0++) {
            scb[_i0].proc->pid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = score_find(scb,pid);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_scb0; _aux++) {
          free(scb[_aux].proc);
          }
          free(scb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
