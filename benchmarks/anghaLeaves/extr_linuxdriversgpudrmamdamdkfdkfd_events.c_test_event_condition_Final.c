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
       0            big-arr\n\
       1            big-arr-10x\n\
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
typedef  size_t uint32_t ;
struct kfd_event_waiter {scalar_t__ activated; int /*<<< orphan*/  event; } ;

/* Variables and functions */
 size_t KFD_IOC_WAIT_RESULT_COMPLETE ; 
 size_t KFD_IOC_WAIT_RESULT_FAIL ; 
 size_t KFD_IOC_WAIT_RESULT_TIMEOUT ; 

__attribute__((used)) static uint32_t test_event_condition(bool all, uint32_t num_events,
				struct kfd_event_waiter *event_waiters)
{
	uint32_t i;
	uint32_t activated_count = 0;

	for (i = 0; i < num_events; i++) {
		if (!event_waiters[i].event)
			return KFD_IOC_WAIT_RESULT_FAIL;

		if (event_waiters[i].activated) {
			if (!all)
				return KFD_IOC_WAIT_RESULT_COMPLETE;

			activated_count++;
		}
	}

	return activated_count == num_events ?
		KFD_IOC_WAIT_RESULT_COMPLETE : KFD_IOC_WAIT_RESULT_TIMEOUT;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 43
          // dynamic_instructions_O0 : 6396
          // ------------------------------- 
          // static_instructions_O1 : 26
          // dynamic_instructions_O1 : 2820
          // ------------------------------- 
          // static_instructions_O2 : 26
          // dynamic_instructions_O2 : 2820
          // ------------------------------- 
          // static_instructions_O3 : 25
          // dynamic_instructions_O3 : 1803
          // ------------------------------- 
          // static_instructions_Ofast : 25
          // dynamic_instructions_Ofast : 1803
          // ------------------------------- 
          // static_instructions_Os : 26
          // dynamic_instructions_Os : 2566
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 3075
          // ------------------------------- 

          int all = 255;
        
          unsigned long num_events = 255;
        
          int _len_event_waiters0 = 65025;
          struct kfd_event_waiter * event_waiters = (struct kfd_event_waiter *) malloc(_len_event_waiters0*sizeof(struct kfd_event_waiter));
          for(int _i0 = 0; _i0 < _len_event_waiters0; _i0++) {
              event_waiters[_i0].activated = ((-2 * (next_i()%2)) + 1) * next_i();
          event_waiters[_i0].event = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned long benchRet = test_event_condition(all,num_events,event_waiters);
          printf("%lu\n", benchRet); 
          free(event_waiters);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 43
          // dynamic_instructions_O0 : 271
          // ------------------------------- 
          // static_instructions_O1 : 26
          // dynamic_instructions_O1 : 125
          // ------------------------------- 
          // static_instructions_O2 : 26
          // dynamic_instructions_O2 : 125
          // ------------------------------- 
          // static_instructions_O3 : 25
          // dynamic_instructions_O3 : 88
          // ------------------------------- 
          // static_instructions_Ofast : 25
          // dynamic_instructions_Ofast : 88
          // ------------------------------- 
          // static_instructions_Os : 26
          // dynamic_instructions_Os : 116
          // ------------------------------- 
          // static_instructions_Oz : 25
          // dynamic_instructions_Oz : 135
          // ------------------------------- 

          int all = 10;
        
          unsigned long num_events = 10;
        
          int _len_event_waiters0 = 100;
          struct kfd_event_waiter * event_waiters = (struct kfd_event_waiter *) malloc(_len_event_waiters0*sizeof(struct kfd_event_waiter));
          for(int _i0 = 0; _i0 < _len_event_waiters0; _i0++) {
              event_waiters[_i0].activated = ((-2 * (next_i()%2)) + 1) * next_i();
          event_waiters[_i0].event = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          unsigned long benchRet = test_event_condition(all,num_events,event_waiters);
          printf("%lu\n", benchRet); 
          free(event_waiters);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
