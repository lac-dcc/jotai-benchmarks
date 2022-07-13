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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int u8 ;

/* Variables and functions */
 int ILLEGAL_VL ; 
 int OPA_MAX_SCS ; 

__attribute__((used)) static void filter_sc2vlt(void *data, bool set)
{
	int i;
	u8 *pd = data;

	for (i = 0; i < OPA_MAX_SCS; i++) {
		if (i == 15)
			continue;

		if (set) {
			if ((pd[i] & 0x1f) == 0xf)
				pd[i] = ILLEGAL_VL;
		} else {
			if ((pd[i] & 0x1f) == ILLEGAL_VL)
				pd[i] = 0xf;
		}
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
          int set = 100;
          void * data;
          filter_sc2vlt(data,set);
        
        break;
    }
    // big-arr
    case 1:
    {
          int set = 255;
          void * data;
          filter_sc2vlt(data,set);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int set = 10;
          void * data;
          filter_sc2vlt(data,set);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
