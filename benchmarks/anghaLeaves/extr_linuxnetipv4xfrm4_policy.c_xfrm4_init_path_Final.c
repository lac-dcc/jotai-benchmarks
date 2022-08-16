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
struct xfrm_dst {int dummy; } ;
struct dst_entry {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int xfrm4_init_path(struct xfrm_dst *path, struct dst_entry *dst,
			   int nfheader_len)
{
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
          int nfheader_len = 100;
          int _len_path0 = 1;
          struct xfrm_dst * path = (struct xfrm_dst *) malloc(_len_path0*sizeof(struct xfrm_dst));
          for(int _i0 = 0; _i0 < _len_path0; _i0++) {
            path[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 1;
          struct dst_entry * dst = (struct dst_entry *) malloc(_len_dst0*sizeof(struct dst_entry));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xfrm4_init_path(path,dst,nfheader_len);
          printf("%d\n", benchRet); 
          free(path);
          free(dst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
