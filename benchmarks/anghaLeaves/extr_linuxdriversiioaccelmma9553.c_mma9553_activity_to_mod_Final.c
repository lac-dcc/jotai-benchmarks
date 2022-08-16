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
typedef  enum iio_modifier { ____Placeholder_iio_modifier } iio_modifier ;
typedef  enum activity_level { ____Placeholder_activity_level } activity_level ;

/* Variables and functions */
#define  ACTIVITY_JOGGING 132 
#define  ACTIVITY_REST 131 
#define  ACTIVITY_RUNNING 130 
#define  ACTIVITY_UNKNOWN 129 
#define  ACTIVITY_WALKING 128 
 int IIO_MOD_JOGGING ; 
 int IIO_MOD_RUNNING ; 
 int IIO_MOD_STILL ; 
 int IIO_MOD_WALKING ; 
 int IIO_NO_MOD ; 

__attribute__((used)) static enum iio_modifier mma9553_activity_to_mod(enum activity_level activity)
{
	switch (activity) {
	case ACTIVITY_RUNNING:
		return IIO_MOD_RUNNING;
	case ACTIVITY_JOGGING:
		return IIO_MOD_JOGGING;
	case ACTIVITY_WALKING:
		return IIO_MOD_WALKING;
	case ACTIVITY_REST:
		return IIO_MOD_STILL;
	case ACTIVITY_UNKNOWN:
	default:
		return IIO_NO_MOD;
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
          enum activity_level activity = 0;
          enum iio_modifier benchRet = mma9553_activity_to_mod(activity);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
