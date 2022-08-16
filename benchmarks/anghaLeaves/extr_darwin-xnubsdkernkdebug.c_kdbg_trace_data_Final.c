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
typedef  long uint64_t ;
struct proc {long p_pid; long p_uniqueid; } ;

/* Variables and functions */

void
kdbg_trace_data(struct proc *proc, long *arg_pid, long *arg_uniqueid)
{
	if (!proc) { 
		*arg_pid = 0;
		*arg_uniqueid = 0; 
	} else { 
		*arg_pid = proc->p_pid;
		*arg_uniqueid = proc->p_uniqueid;
		if ((uint64_t) *arg_uniqueid != proc->p_uniqueid) { 
			*arg_uniqueid = 0; 
		}
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
          int _len_proc0 = 1;
          struct proc * proc = (struct proc *) malloc(_len_proc0*sizeof(struct proc));
          for(int _i0 = 0; _i0 < _len_proc0; _i0++) {
            proc[_i0].p_pid = ((-2 * (next_i()%2)) + 1) * next_i();
        proc[_i0].p_uniqueid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_arg_pid0 = 1;
          long * arg_pid = (long *) malloc(_len_arg_pid0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_arg_pid0; _i0++) {
            arg_pid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_arg_uniqueid0 = 1;
          long * arg_uniqueid = (long *) malloc(_len_arg_uniqueid0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_arg_uniqueid0; _i0++) {
            arg_uniqueid[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          kdbg_trace_data(proc,arg_pid,arg_uniqueid);
          free(proc);
          free(arg_pid);
          free(arg_uniqueid);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
