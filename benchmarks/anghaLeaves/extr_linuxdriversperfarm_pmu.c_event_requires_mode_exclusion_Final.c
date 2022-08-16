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
struct perf_event_attr {scalar_t__ exclude_hv; scalar_t__ exclude_kernel; scalar_t__ exclude_user; scalar_t__ exclude_idle; } ;

/* Variables and functions */

__attribute__((used)) static int
event_requires_mode_exclusion(struct perf_event_attr *attr)
{
	return attr->exclude_idle || attr->exclude_user ||
	       attr->exclude_kernel || attr->exclude_hv;
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
          int _len_attr0 = 1;
          struct perf_event_attr * attr = (struct perf_event_attr *) malloc(_len_attr0*sizeof(struct perf_event_attr));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            attr[_i0].exclude_hv = ((-2 * (next_i()%2)) + 1) * next_i();
        attr[_i0].exclude_kernel = ((-2 * (next_i()%2)) + 1) * next_i();
        attr[_i0].exclude_user = ((-2 * (next_i()%2)) + 1) * next_i();
        attr[_i0].exclude_idle = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = event_requires_mode_exclusion(attr);
          printf("%d\n", benchRet); 
          free(attr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
