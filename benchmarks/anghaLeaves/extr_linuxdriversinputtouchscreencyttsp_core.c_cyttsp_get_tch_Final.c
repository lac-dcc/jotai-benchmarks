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
       1            big-arr-10x\n\
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
struct cyttsp_tch {int dummy; } ;
struct cyttsp_xydata {struct cyttsp_tch const tch4; struct cyttsp_tch const tch3; struct cyttsp_tch const tch2; struct cyttsp_tch const tch1; } ;

/* Variables and functions */

__attribute__((used)) static const struct cyttsp_tch *cyttsp_get_tch(struct cyttsp_xydata *xy_data,
					       int idx)
{
	switch (idx) {
	case 0:
		return &xy_data->tch1;
	case 1:
		return &xy_data->tch2;
	case 2:
		return &xy_data->tch3;
	case 3:
		return &xy_data->tch4;
	default:
		return NULL;
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
          int idx = 100;
          int _len_xy_data0 = 1;
          struct cyttsp_xydata * xy_data = (struct cyttsp_xydata *) malloc(_len_xy_data0*sizeof(struct cyttsp_xydata));
          for(int _i0 = 0; _i0 < _len_xy_data0; _i0++) {
              }
          const struct cyttsp_tch * benchRet = cyttsp_get_tch(xy_data,idx);
          free(xy_data);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int idx = 10;
          int _len_xy_data0 = 100;
          struct cyttsp_xydata * xy_data = (struct cyttsp_xydata *) malloc(_len_xy_data0*sizeof(struct cyttsp_xydata));
          for(int _i0 = 0; _i0 < _len_xy_data0; _i0++) {
              }
          const struct cyttsp_tch * benchRet = cyttsp_get_tch(xy_data,idx);
          free(xy_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
