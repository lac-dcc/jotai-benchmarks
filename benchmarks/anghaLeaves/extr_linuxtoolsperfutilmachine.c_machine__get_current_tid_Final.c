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
struct machine {int* current_tid; } ;
typedef  int pid_t ;

/* Variables and functions */
 int MAX_NR_CPUS ; 

pid_t machine__get_current_tid(struct machine *machine, int cpu)
{
	if (cpu < 0 || cpu >= MAX_NR_CPUS || !machine->current_tid)
		return -1;

	return machine->current_tid[cpu];
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
          int cpu = 100;
          int _len_machine0 = 1;
          struct machine * machine = (struct machine *) malloc(_len_machine0*sizeof(struct machine));
          for(int _i0 = 0; _i0 < _len_machine0; _i0++) {
              int _len_machine__i0__current_tid0 = 1;
          machine[_i0].current_tid = (int *) malloc(_len_machine__i0__current_tid0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_machine__i0__current_tid0; _j0++) {
            machine[_i0].current_tid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = machine__get_current_tid(machine,cpu);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_machine0; _aux++) {
          free(machine[_aux].current_tid);
          }
          free(machine);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
