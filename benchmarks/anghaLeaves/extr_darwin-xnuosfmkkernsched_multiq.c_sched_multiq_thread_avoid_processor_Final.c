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
       0            linked\n\
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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_1__* thread_t ;
typedef  TYPE_2__* processor_t ;
struct TYPE_6__ {scalar_t__ current_pri; struct TYPE_6__* processor_primary; } ;
struct TYPE_5__ {scalar_t__ sched_pri; } ;

/* Variables and functions */
 scalar_t__ BASEPRI_RTQUEUES ; 
 int /*<<< orphan*/  sched_allow_rt_smt ; 

__attribute__((used)) static bool
sched_multiq_thread_avoid_processor(processor_t processor, thread_t thread)
{
	if (processor->processor_primary != processor) {
		/*
		 * This is a secondary SMT processor.  If the primary is running
		 * a realtime thread, only allow realtime threads on the secondary.
		 */
		if ((processor->processor_primary->current_pri >= BASEPRI_RTQUEUES) && ((thread->sched_pri < BASEPRI_RTQUEUES) || !sched_allow_rt_smt)) {
			return true;
		}
	}

	return false;
}

// ------------------------------------------------------------------------- //

struct TYPE_6__ *_allocate_processor(int length, struct TYPE_6__ *aux_processor[]) {
  struct TYPE_6__ *walker = (struct TYPE_6__ *)malloc(sizeof(struct TYPE_6__));

  aux_processor[0] = walker;
walker->current_pri = ((-2 * (next_i()%2)) + 1) * next_i();
  walker->processor_primary = NULL;

  struct TYPE_6__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->processor_primary = (struct TYPE_6__ *)malloc(sizeof(struct TYPE_6__));
    walker = walker->processor_primary;
    aux_processor[i] = walker;
walker->current_pri = ((-2 * (next_i()%2)) + 1) * next_i();
    walker->processor_primary = NULL;
  }

  return head;
}

void _delete_processor(struct TYPE_6__ *aux_processor[], int aux_processor_size) {
  for(int i = 0; i < aux_processor_size; i++) 
    if(aux_processor[i])
      free(aux_processor[i]);
}



// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // linked
    case 0:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          struct TYPE_6__ * aux_processor[10000];
          struct TYPE_6__ * processor = _allocate_processor(10000, aux_processor);
        
          int _len_thread0 = 1;
          struct TYPE_5__ * thread = (struct TYPE_5__ *) malloc(_len_thread0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_thread0; _i0++) {
              thread[_i0].sched_pri = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = sched_multiq_thread_avoid_processor(processor,thread);
          printf("%d\n", benchRet); 
          _delete_processor(aux_processor, 10000);
          free(thread);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
