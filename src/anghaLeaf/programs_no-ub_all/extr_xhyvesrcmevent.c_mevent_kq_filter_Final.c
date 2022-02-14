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
       0            big-arr\n\
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
struct mevent {scalar_t__ me_type; } ;

/* Variables and functions */
 int EVFILT_READ ; 
 int EVFILT_SIGNAL ; 
 int EVFILT_TIMER ; 
 int EVFILT_WRITE ; 
 scalar_t__ EVF_READ ; 
 scalar_t__ EVF_SIGNAL ; 
 scalar_t__ EVF_TIMER ; 
 scalar_t__ EVF_WRITE ; 

__attribute__((used)) static int
mevent_kq_filter(struct mevent *mevp)
{
	int retval;

	retval = 0;

	if (mevp->me_type == EVF_READ)
		retval = EVFILT_READ;

	if (mevp->me_type == EVF_WRITE)
		retval = EVFILT_WRITE;

	if (mevp->me_type == EVF_TIMER)
		retval = EVFILT_TIMER;

	if (mevp->me_type == EVF_SIGNAL)
		retval = EVFILT_SIGNAL;

	return (retval);
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

    // big-arr
    case 0:
    {
          int _len_mevp0 = 1;
          struct mevent * mevp = (struct mevent *) malloc(_len_mevp0*sizeof(struct mevent));
          for(int _i0 = 0; _i0 < _len_mevp0; _i0++) {
            mevp->me_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mevent_kq_filter(mevp);
          printf("%d\n", benchRet); 
          free(mevp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
