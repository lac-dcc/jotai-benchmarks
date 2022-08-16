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
struct TYPE_4__ {int /*<<< orphan*/  min; int /*<<< orphan*/  max; } ;
typedef  TYPE_1__ GeoHashRange ;

/* Variables and functions */
 int /*<<< orphan*/  GEO_LAT_MAX ; 
 int /*<<< orphan*/  GEO_LAT_MIN ; 
 int /*<<< orphan*/  GEO_LONG_MAX ; 
 int /*<<< orphan*/  GEO_LONG_MIN ; 

void geohashGetCoordRange(GeoHashRange *long_range, GeoHashRange *lat_range) {
    /* These are constraints from EPSG:900913 / EPSG:3785 / OSGEO:41001 */
    /* We can't geocode at the north/south pole. */
    long_range->max = GEO_LONG_MAX;
    long_range->min = GEO_LONG_MIN;
    lat_range->max = GEO_LAT_MAX;
    lat_range->min = GEO_LAT_MIN;
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
          int _len_long_range0 = 1;
          struct TYPE_4__ * long_range = (struct TYPE_4__ *) malloc(_len_long_range0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_long_range0; _i0++) {
            long_range[_i0].min = ((-2 * (next_i()%2)) + 1) * next_i();
        long_range[_i0].max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lat_range0 = 1;
          struct TYPE_4__ * lat_range = (struct TYPE_4__ *) malloc(_len_lat_range0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_lat_range0; _i0++) {
            lat_range[_i0].min = ((-2 * (next_i()%2)) + 1) * next_i();
        lat_range[_i0].max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          geohashGetCoordRange(long_range,lat_range);
          free(long_range);
          free(lat_range);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
