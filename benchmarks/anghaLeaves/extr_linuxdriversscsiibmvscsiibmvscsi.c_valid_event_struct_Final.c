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
       2            empty\n\
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
struct srp_event_struct {int dummy; } ;
struct event_pool {int size; struct srp_event_struct* events; } ;

/* Variables and functions */

__attribute__((used)) static int valid_event_struct(struct event_pool *pool,
				struct srp_event_struct *evt)
{
	int index = evt - pool->events;
	if (index < 0 || index >= pool->size)	/* outside of bounds */
		return 0;
	if (evt != pool->events + index)	/* unaligned */
		return 0;
	return 1;
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
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int _len_pool0 = 65025;
          struct event_pool * pool = (struct event_pool *) malloc(_len_pool0*sizeof(struct event_pool));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
              pool[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pool__i0__events0 = 1;
          pool[_i0].events = (struct srp_event_struct *) malloc(_len_pool__i0__events0*sizeof(struct srp_event_struct));
          for(int _j0 = 0; _j0 < _len_pool__i0__events0; _j0++) {
              pool[_i0].events->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_evt0 = 65025;
          struct srp_event_struct * evt = (struct srp_event_struct *) malloc(_len_evt0*sizeof(struct srp_event_struct));
          for(int _i0 = 0; _i0 < _len_evt0; _i0++) {
              evt[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = valid_event_struct(pool,evt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pool0; _aux++) {
          free(pool[_aux].events);
          }
          free(pool);
          free(evt);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int _len_pool0 = 100;
          struct event_pool * pool = (struct event_pool *) malloc(_len_pool0*sizeof(struct event_pool));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
              pool[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pool__i0__events0 = 1;
          pool[_i0].events = (struct srp_event_struct *) malloc(_len_pool__i0__events0*sizeof(struct srp_event_struct));
          for(int _j0 = 0; _j0 < _len_pool__i0__events0; _j0++) {
              pool[_i0].events->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_evt0 = 100;
          struct srp_event_struct * evt = (struct srp_event_struct *) malloc(_len_evt0*sizeof(struct srp_event_struct));
          for(int _i0 = 0; _i0 < _len_evt0; _i0++) {
              evt[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = valid_event_struct(pool,evt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pool0; _aux++) {
          free(pool[_aux].events);
          }
          free(pool);
          free(evt);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int _len_pool0 = 1;
          struct event_pool * pool = (struct event_pool *) malloc(_len_pool0*sizeof(struct event_pool));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
              pool[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pool__i0__events0 = 1;
          pool[_i0].events = (struct srp_event_struct *) malloc(_len_pool__i0__events0*sizeof(struct srp_event_struct));
          for(int _j0 = 0; _j0 < _len_pool__i0__events0; _j0++) {
              pool[_i0].events->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_evt0 = 1;
          struct srp_event_struct * evt = (struct srp_event_struct *) malloc(_len_evt0*sizeof(struct srp_event_struct));
          for(int _i0 = 0; _i0 < _len_evt0; _i0++) {
              evt[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = valid_event_struct(pool,evt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pool0; _aux++) {
          free(pool[_aux].events);
          }
          free(pool);
          free(evt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
