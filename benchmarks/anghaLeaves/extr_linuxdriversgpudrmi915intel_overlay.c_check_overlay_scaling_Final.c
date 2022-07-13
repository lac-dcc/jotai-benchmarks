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
typedef  int u32 ;
struct put_image_params {int src_scan_h; int dst_h; int src_scan_w; int dst_w; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int check_overlay_scaling(struct put_image_params *rec)
{
	u32 tmp;

	/* downscaling limit is 8.0 */
	tmp = ((rec->src_scan_h << 16) / rec->dst_h) >> 16;
	if (tmp > 7)
		return -EINVAL;
	tmp = ((rec->src_scan_w << 16) / rec->dst_w) >> 16;
	if (tmp > 7)
		return -EINVAL;

	return 0;
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
          int _len_rec0 = 1;
          struct put_image_params * rec = (struct put_image_params *) malloc(_len_rec0*sizeof(struct put_image_params));
          for(int _i0 = 0; _i0 < _len_rec0; _i0++) {
            rec[_i0].src_scan_h = ((-2 * (next_i()%2)) + 1) * next_i();
        rec[_i0].dst_h = ((-2 * (next_i()%2)) + 1) * next_i();
        rec[_i0].src_scan_w = ((-2 * (next_i()%2)) + 1) * next_i();
        rec[_i0].dst_w = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_overlay_scaling(rec);
          printf("%d\n", benchRet); 
          free(rec);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rec0 = 65025;
          struct put_image_params * rec = (struct put_image_params *) malloc(_len_rec0*sizeof(struct put_image_params));
          for(int _i0 = 0; _i0 < _len_rec0; _i0++) {
            rec[_i0].src_scan_h = ((-2 * (next_i()%2)) + 1) * next_i();
        rec[_i0].dst_h = ((-2 * (next_i()%2)) + 1) * next_i();
        rec[_i0].src_scan_w = ((-2 * (next_i()%2)) + 1) * next_i();
        rec[_i0].dst_w = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_overlay_scaling(rec);
          printf("%d\n", benchRet); 
          free(rec);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rec0 = 100;
          struct put_image_params * rec = (struct put_image_params *) malloc(_len_rec0*sizeof(struct put_image_params));
          for(int _i0 = 0; _i0 < _len_rec0; _i0++) {
            rec[_i0].src_scan_h = ((-2 * (next_i()%2)) + 1) * next_i();
        rec[_i0].dst_h = ((-2 * (next_i()%2)) + 1) * next_i();
        rec[_i0].src_scan_w = ((-2 * (next_i()%2)) + 1) * next_i();
        rec[_i0].dst_w = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_overlay_scaling(rec);
          printf("%d\n", benchRet); 
          free(rec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
