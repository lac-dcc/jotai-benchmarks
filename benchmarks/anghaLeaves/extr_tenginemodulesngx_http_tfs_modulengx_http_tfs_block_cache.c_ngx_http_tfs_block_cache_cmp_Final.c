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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int ngx_int_t ;
struct TYPE_4__ {scalar_t__ ns_addr; scalar_t__ block_id; } ;
typedef  TYPE_1__ ngx_http_tfs_block_cache_key_t ;

/* Variables and functions */

ngx_int_t
ngx_http_tfs_block_cache_cmp(ngx_http_tfs_block_cache_key_t *left,
    ngx_http_tfs_block_cache_key_t *right)
{
    if (left->ns_addr == right->ns_addr) {

        if (left->block_id == right->block_id) {
            return 0;
        }

        if (left->block_id < right->block_id) {
            return -1;
        }

        return 1;
    }

    if (left->ns_addr < right->ns_addr) {
        return -1;
    }

    return 1;
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
          int _len_left0 = 1;
          struct TYPE_4__ * left = (struct TYPE_4__ *) malloc(_len_left0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_left0; _i0++) {
            left[_i0].ns_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        left[_i0].block_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_right0 = 1;
          struct TYPE_4__ * right = (struct TYPE_4__ *) malloc(_len_right0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_right0; _i0++) {
            right[_i0].ns_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        right[_i0].block_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ngx_http_tfs_block_cache_cmp(left,right);
          printf("%d\n", benchRet); 
          free(left);
          free(right);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
