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
typedef  scalar_t__ u64 ;
typedef  int u32 ;
struct ceph_file_extent {scalar_t__ fe_off; scalar_t__ fe_len; } ;

/* Variables and functions */

__attribute__((used)) static void prune_extents(struct ceph_file_extent *img_extents,
			  u32 *num_img_extents, u64 overlap)
{
	u32 cnt = *num_img_extents;

	/* drop extents completely beyond the overlap */
	while (cnt && img_extents[cnt - 1].fe_off >= overlap)
		cnt--;

	if (cnt) {
		struct ceph_file_extent *ex = &img_extents[cnt - 1];

		/* trim final overlapping extent */
		if (ex->fe_off + ex->fe_len > overlap)
			ex->fe_len = overlap - ex->fe_off;
	}

	*num_img_extents = cnt;
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
          long overlap = 255;
          int _len_img_extents0 = 65025;
          struct ceph_file_extent * img_extents = (struct ceph_file_extent *) malloc(_len_img_extents0*sizeof(struct ceph_file_extent));
          for(int _i0 = 0; _i0 < _len_img_extents0; _i0++) {
            img_extents[_i0].fe_off = ((-2 * (next_i()%2)) + 1) * next_i();
        img_extents[_i0].fe_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_num_img_extents0 = 65025;
          int * num_img_extents = (int *) malloc(_len_num_img_extents0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_num_img_extents0; _i0++) {
            num_img_extents[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          prune_extents(img_extents,num_img_extents,overlap);
          free(img_extents);
          free(num_img_extents);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
