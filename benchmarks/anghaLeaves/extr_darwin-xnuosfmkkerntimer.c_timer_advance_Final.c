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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ uint64_t ;
typedef  TYPE_1__* timer_t ;
struct TYPE_3__ {int /*<<< orphan*/  all_bits; } ;

/* Variables and functions */

__attribute__((used)) static void
timer_advance(timer_t timer, uint64_t delta)
{
#if defined(__LP64__)
	timer->all_bits += delta;
#else /* defined(__LP64__) */
	extern void timer_advance_internal_32(timer_t timer, uint32_t high,
			uint32_t low);
	uint64_t low = delta + timer->low_bits;
	if (low >> 32) {
		timer_advance_internal_32(timer,
				(uint32_t)(timer->high_bits + (low >> 32)), (uint32_t)low);
	} else {
		timer->low_bits = (uint32_t)low;
	}
#endif /* defined(__LP64__) */
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
          long delta = 100;
          int _len_timer0 = 1;
          struct TYPE_3__ * timer = (struct TYPE_3__ *) malloc(_len_timer0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_timer0; _i0++) {
            timer[_i0].all_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          timer_advance(timer,delta);
          free(timer);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long delta = 10;
          int _len_timer0 = 100;
          struct TYPE_3__ * timer = (struct TYPE_3__ *) malloc(_len_timer0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_timer0; _i0++) {
            timer[_i0].all_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          timer_advance(timer,delta);
          free(timer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
