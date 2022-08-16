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
struct nx842_devdata {scalar_t__ max_sg_len; scalar_t__ max_sync_sg; scalar_t__ max_sync_size; } ;

/* Variables and functions */
 int ENOENT ; 

__attribute__((used)) static int nx842_OF_set_defaults(struct nx842_devdata *devdata)
{
	if (devdata) {
		devdata->max_sync_size = 0;
		devdata->max_sync_sg = 0;
		devdata->max_sg_len = 0;
		return 0;
	} else
		return -ENOENT;
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
          int _len_devdata0 = 1;
          struct nx842_devdata * devdata = (struct nx842_devdata *) malloc(_len_devdata0*sizeof(struct nx842_devdata));
          for(int _i0 = 0; _i0 < _len_devdata0; _i0++) {
            devdata[_i0].max_sg_len = ((-2 * (next_i()%2)) + 1) * next_i();
        devdata[_i0].max_sync_sg = ((-2 * (next_i()%2)) + 1) * next_i();
        devdata[_i0].max_sync_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nx842_OF_set_defaults(devdata);
          printf("%d\n", benchRet); 
          free(devdata);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
