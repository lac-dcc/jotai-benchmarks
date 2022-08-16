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

/* Type definitions */
typedef  scalar_t__ u8 ;

/* Variables and functions */
 scalar_t__ ABB5ZES3_REG_TIMA_CLK_TAQ1 ; 
 int EINVAL ; 

__attribute__((used)) static inline int sec_from_timer_a(u8 *secs, u8 taq, u8 timer_a)
{
	if (taq != ABB5ZES3_REG_TIMA_CLK_TAQ1) /* 1Hz */
		return -EINVAL;

	*secs = timer_a;

	return 0;
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
          long taq = 100;
          long timer_a = 100;
          int _len_secs0 = 1;
          long * secs = (long *) malloc(_len_secs0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_secs0; _i0++) {
            secs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sec_from_timer_a(secs,taq,timer_a);
          printf("%d\n", benchRet); 
          free(secs);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long taq = 10;
          long timer_a = 10;
          int _len_secs0 = 100;
          long * secs = (long *) malloc(_len_secs0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_secs0; _i0++) {
            secs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sec_from_timer_a(secs,taq,timer_a);
          printf("%d\n", benchRet); 
          free(secs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
