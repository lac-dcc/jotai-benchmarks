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
       0            big-arr-10x\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int uint32_t ;
struct TYPE_3__ {scalar_t__ offset; } ;
typedef  TYPE_1__ ngx_http_tfs_segment_info_t ;
typedef  scalar_t__ int64_t ;
typedef  int int32_t ;

/* Variables and functions */

int32_t
ngx_http_tfs_find_segment(uint32_t seg_count,
    ngx_http_tfs_segment_info_t *seg_info, int64_t offset)
{
    int32_t  start, end, middle;

    start = 0;
    end = seg_count - 1;
    middle = (start + end) / 2;
    while (start <= end) {
        if (seg_info[middle].offset == offset) {
            return middle;
        }
        if (seg_info[middle].offset < offset) {
            start = middle + 1;

        } else {
            end = middle - 1;
        }
        middle = (start + end) / 2;
    }
    return -start;
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

    // big-arr-10x
    case 0:
    {
          int seg_count = 10;
          long offset = 10;
          int _len_seg_info0 = 100;
          struct TYPE_3__ * seg_info = (struct TYPE_3__ *) malloc(_len_seg_info0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_seg_info0; _i0++) {
            seg_info[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ngx_http_tfs_find_segment(seg_count,seg_info,offset);
          printf("%d\n", benchRet); 
          free(seg_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
