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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int speed; } ;
struct TYPE_7__ {int speed; } ;
struct TYPE_5__ {int max_dsp_speed; } ;
struct TYPE_8__ {scalar_t__ minDev; TYPE_2__ soft; TYPE_3__ dsp; TYPE_1__ mach; } ;

/* Variables and functions */
 scalar_t__ SND_DEV_DSP ; 
 TYPE_4__ dmasound ; 

__attribute__((used)) static int sound_set_speed(int speed)
{
	if (speed < 0)
		return dmasound.soft.speed;

	/* trap out-of-range speed settings.
	   at present we allow (arbitrarily) low rates - using soft
	   up-conversion - but we can't allow > max because there is
	   no soft down-conversion.
	*/
	if (dmasound.mach.max_dsp_speed &&
	   (speed > dmasound.mach.max_dsp_speed))
		speed = dmasound.mach.max_dsp_speed ;

	dmasound.soft.speed = speed;

	if (dmasound.minDev == SND_DEV_DSP)
		dmasound.dsp.speed = dmasound.soft.speed;

	return dmasound.soft.speed;
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
          int speed = 100;
          int benchRet = sound_set_speed(speed);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int speed = 255;
          int benchRet = sound_set_speed(speed);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int speed = 10;
          int benchRet = sound_set_speed(speed);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
