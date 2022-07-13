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
struct cyttsp_xydata {int touch12_id; int touch34_id; } ;

/* Variables and functions */

__attribute__((used)) static void cyttsp_extract_track_ids(struct cyttsp_xydata *xy_data, int *ids)
{
	ids[0] = xy_data->touch12_id >> 4;
	ids[1] = xy_data->touch12_id & 0xF;
	ids[2] = xy_data->touch34_id >> 4;
	ids[3] = xy_data->touch34_id & 0xF;
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
          int _len_xy_data0 = 65025;
          struct cyttsp_xydata * xy_data = (struct cyttsp_xydata *) malloc(_len_xy_data0*sizeof(struct cyttsp_xydata));
          for(int _i0 = 0; _i0 < _len_xy_data0; _i0++) {
            xy_data[_i0].touch12_id = ((-2 * (next_i()%2)) + 1) * next_i();
        xy_data[_i0].touch34_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ids0 = 65025;
          int * ids = (int *) malloc(_len_ids0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ids0; _i0++) {
            ids[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cyttsp_extract_track_ids(xy_data,ids);
          free(xy_data);
          free(ids);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_xy_data0 = 100;
          struct cyttsp_xydata * xy_data = (struct cyttsp_xydata *) malloc(_len_xy_data0*sizeof(struct cyttsp_xydata));
          for(int _i0 = 0; _i0 < _len_xy_data0; _i0++) {
            xy_data[_i0].touch12_id = ((-2 * (next_i()%2)) + 1) * next_i();
        xy_data[_i0].touch34_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ids0 = 100;
          int * ids = (int *) malloc(_len_ids0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ids0; _i0++) {
            ids[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cyttsp_extract_track_ids(xy_data,ids);
          free(xy_data);
          free(ids);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
