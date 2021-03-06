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
struct wacom_features {int x_resolution; int x_phy; int x_max; int y_phy; int y_max; int y_resolution; } ;

/* Variables and functions */

__attribute__((used)) static void wacom_set_default_phy(struct wacom_features *features)
{
	if (features->x_resolution) {
		features->x_phy = (features->x_max * 100) /
					features->x_resolution;
		features->y_phy = (features->y_max * 100) /
					features->y_resolution;
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
          int _len_features0 = 1;
          struct wacom_features * features = (struct wacom_features *) malloc(_len_features0*sizeof(struct wacom_features));
          for(int _i0 = 0; _i0 < _len_features0; _i0++) {
            features[_i0].x_resolution = ((-2 * (next_i()%2)) + 1) * next_i();
        features[_i0].x_phy = ((-2 * (next_i()%2)) + 1) * next_i();
        features[_i0].x_max = ((-2 * (next_i()%2)) + 1) * next_i();
        features[_i0].y_phy = ((-2 * (next_i()%2)) + 1) * next_i();
        features[_i0].y_max = ((-2 * (next_i()%2)) + 1) * next_i();
        features[_i0].y_resolution = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          wacom_set_default_phy(features);
          free(features);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_features0 = 65025;
          struct wacom_features * features = (struct wacom_features *) malloc(_len_features0*sizeof(struct wacom_features));
          for(int _i0 = 0; _i0 < _len_features0; _i0++) {
            features[_i0].x_resolution = ((-2 * (next_i()%2)) + 1) * next_i();
        features[_i0].x_phy = ((-2 * (next_i()%2)) + 1) * next_i();
        features[_i0].x_max = ((-2 * (next_i()%2)) + 1) * next_i();
        features[_i0].y_phy = ((-2 * (next_i()%2)) + 1) * next_i();
        features[_i0].y_max = ((-2 * (next_i()%2)) + 1) * next_i();
        features[_i0].y_resolution = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          wacom_set_default_phy(features);
          free(features);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_features0 = 100;
          struct wacom_features * features = (struct wacom_features *) malloc(_len_features0*sizeof(struct wacom_features));
          for(int _i0 = 0; _i0 < _len_features0; _i0++) {
            features[_i0].x_resolution = ((-2 * (next_i()%2)) + 1) * next_i();
        features[_i0].x_phy = ((-2 * (next_i()%2)) + 1) * next_i();
        features[_i0].x_max = ((-2 * (next_i()%2)) + 1) * next_i();
        features[_i0].y_phy = ((-2 * (next_i()%2)) + 1) * next_i();
        features[_i0].y_max = ((-2 * (next_i()%2)) + 1) * next_i();
        features[_i0].y_resolution = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          wacom_set_default_phy(features);
          free(features);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
