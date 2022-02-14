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

/* Variables and functions */
 int BSD_PAGEABLE_SIZE_PER_EXEC ; 
 int BSD_SIMUL_EXECS ; 
 int bsd_pageable_map_size ; 
 int bsd_simul_execs ; 

void
bsd_exec_setup(int scale)
{

	switch (scale) {
		case 0:
		case 1:
			bsd_simul_execs = BSD_SIMUL_EXECS;
			break;
		case 2:
		case 3:
			bsd_simul_execs = 65;
			break;
		case 4:
		case 5:
			bsd_simul_execs = 129;
			break;
		case 6:
		case 7:
			bsd_simul_execs = 257;
			break;
		default:
			bsd_simul_execs = 513;
			break;
			
	}
	bsd_pageable_map_size = (bsd_simul_execs * BSD_PAGEABLE_SIZE_PER_EXEC);
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
          int scale = 255;
          bsd_exec_setup(scale);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
