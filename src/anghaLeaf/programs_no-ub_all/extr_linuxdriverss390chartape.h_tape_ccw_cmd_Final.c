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
struct ccw1 {int /*<<< orphan*/  cmd_code; scalar_t__ cda; scalar_t__ count; scalar_t__ flags; } ;
typedef  scalar_t__ addr_t ;
typedef  int /*<<< orphan*/  __u8 ;
typedef  scalar_t__ __u32 ;

/* Variables and functions */

__attribute__((used)) static inline struct ccw1 *
tape_ccw_cmd(struct ccw1 *ccw, __u8 cmd_code)
{
	ccw->cmd_code = cmd_code;
	ccw->flags = 0;
	ccw->count = 0;
	ccw->cda = (__u32)(addr_t) &ccw->cmd_code;
	return ccw + 1;
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
          int cmd_code = 255;
          int _len_ccw0 = 1;
          struct ccw1 * ccw = (struct ccw1 *) malloc(_len_ccw0*sizeof(struct ccw1));
          for(int _i0 = 0; _i0 < _len_ccw0; _i0++) {
            ccw->cmd_code = ((-2 * (next_i()%2)) + 1) * next_i();
        ccw->cda = ((-2 * (next_i()%2)) + 1) * next_i();
        ccw->count = ((-2 * (next_i()%2)) + 1) * next_i();
        ccw->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct ccw1 * benchRet = tape_ccw_cmd(ccw,cmd_code);
          printf("{{struct}} %p\n", &benchRet); 
          free(ccw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
