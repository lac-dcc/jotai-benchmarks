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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int config; } ;

/* Variables and functions */
 unsigned char GAYLE_CFG_100NS ; 
 unsigned char GAYLE_CFG_150NS ; 
 unsigned char GAYLE_CFG_250NS ; 
 unsigned char GAYLE_CFG_720NS ; 
 int PCMCIA_SPEED_100NS ; 
 int PCMCIA_SPEED_150NS ; 
 int PCMCIA_SPEED_250NS ; 
 int cfg_byte ; 
 TYPE_1__ gayle ; 

void pcmcia_access_speed(int speed)
{
	unsigned char s;

	if (speed <= PCMCIA_SPEED_100NS)
		s = GAYLE_CFG_100NS;
	else if (speed <= PCMCIA_SPEED_150NS)
		s = GAYLE_CFG_150NS;
	else if (speed <= PCMCIA_SPEED_250NS)
		s = GAYLE_CFG_250NS;
	else
		s = GAYLE_CFG_720NS;

	cfg_byte = (cfg_byte & 0xf3) | s;
	gayle.config = cfg_byte;
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
          int speed = 255;
          pcmcia_access_speed(speed);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
