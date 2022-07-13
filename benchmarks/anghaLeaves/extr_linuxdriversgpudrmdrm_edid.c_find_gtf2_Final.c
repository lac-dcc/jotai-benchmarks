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
       1            big-arr-10x\n\
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
struct detailed_timing {int dummy; } ;

/* Variables and functions */
 int EDID_DETAIL_MONITOR_RANGE ; 

__attribute__((used)) static void
find_gtf2(struct detailed_timing *t, void *data)
{
	u8 *r = (u8 *)t;
	if (r[3] == EDID_DETAIL_MONITOR_RANGE && r[10] == 0x02)
		*(u8 **)data = r;
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
          int _len_t0 = 65025;
          struct detailed_timing * t = (struct detailed_timing *) malloc(_len_t0*sizeof(struct detailed_timing));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          find_gtf2(t,data);
          free(t);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_t0 = 100;
          struct detailed_timing * t = (struct detailed_timing *) malloc(_len_t0*sizeof(struct detailed_timing));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          find_gtf2(t,data);
          free(t);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
