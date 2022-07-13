// ========================================================================= //

// includes
#include <math.h>
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct TYPE_2__ {int hres; int vres; int vmode_refresh; } ;

/* Variables and functions */
 int NUM_TOTAL_RES_MAP_REFRESH ; 
 int REFRESH_TOLERANCE ; 
 TYPE_1__* res_map_refresh_tbl ; 

int viafb_get_refresh(int hres, int vres, u32 long_refresh)
{
#define REFRESH_TOLERANCE 3
	int i, nearest = -1, diff = REFRESH_TOLERANCE;
	for (i = 0; i < NUM_TOTAL_RES_MAP_REFRESH; i++) {
		if ((hres == res_map_refresh_tbl[i].hres)
		    && (vres == res_map_refresh_tbl[i].vres)
		    && (diff > (abs(long_refresh -
		    res_map_refresh_tbl[i].vmode_refresh)))) {
			diff = abs(long_refresh - res_map_refresh_tbl[i].
				vmode_refresh);
			nearest = i;
		}
	}
#undef REFRESH_TOLERANCE
	if (nearest > 0)
		return res_map_refresh_tbl[nearest].vmode_refresh;
	return 60;
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
          int hres = 100;
          int vres = 100;
          int long_refresh = 100;
          int benchRet = viafb_get_refresh(hres,vres,long_refresh);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int hres = 255;
          int vres = 255;
          int long_refresh = 255;
          int benchRet = viafb_get_refresh(hres,vres,long_refresh);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int hres = 10;
          int vres = 10;
          int long_refresh = 10;
          int benchRet = viafb_get_refresh(hres,vres,long_refresh);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
