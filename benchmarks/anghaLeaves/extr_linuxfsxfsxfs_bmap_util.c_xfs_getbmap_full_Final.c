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
struct getbmapx {scalar_t__ bmv_length; int bmv_entries; int bmv_count; } ;

/* Variables and functions */

__attribute__((used)) static inline bool
xfs_getbmap_full(
	struct getbmapx		*bmv)
{
	return bmv->bmv_length == 0 || bmv->bmv_entries >= bmv->bmv_count - 1;
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
          int _len_bmv0 = 1;
          struct getbmapx * bmv = (struct getbmapx *) malloc(_len_bmv0*sizeof(struct getbmapx));
          for(int _i0 = 0; _i0 < _len_bmv0; _i0++) {
            bmv[_i0].bmv_length = ((-2 * (next_i()%2)) + 1) * next_i();
        bmv[_i0].bmv_entries = ((-2 * (next_i()%2)) + 1) * next_i();
        bmv[_i0].bmv_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xfs_getbmap_full(bmv);
          printf("%d\n", benchRet); 
          free(bmv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
