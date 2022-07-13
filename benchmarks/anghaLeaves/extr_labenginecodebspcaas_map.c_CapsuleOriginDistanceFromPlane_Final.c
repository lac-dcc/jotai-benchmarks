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
typedef  float vec_t ;
typedef  float* vec3_t ;

/* Variables and functions */

vec_t CapsuleOriginDistanceFromPlane(vec3_t normal, vec3_t mins, vec3_t maxs)
{
	float offset_up, offset_down, width, radius;

	width = maxs[0] - mins[0];
	// if the box is less high then it is wide
	if (maxs[2] - mins[2] < width) {
		width = maxs[2] - mins[2];
	}
	radius = width * 0.5;
	// offset to upper and lower sphere
	offset_up = maxs[2] - radius;
	offset_down = -mins[2] - radius;

	// if normal points upward
	if ( normal[2] > 0 ) {
		// touches lower sphere first
		return normal[2] * offset_down + radius;
	}
	else {
		// touched upper sphere first
		return -normal[2] * offset_up + radius;
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

    // big-arr
    case 0:
    {
          int _len_normal0 = 65025;
          float * normal = (float *) malloc(_len_normal0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_normal0; _i0++) {
            normal[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_mins0 = 65025;
          float * mins = (float *) malloc(_len_mins0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_mins0; _i0++) {
            mins[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_maxs0 = 65025;
          float * maxs = (float *) malloc(_len_maxs0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_maxs0; _i0++) {
            maxs[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          float benchRet = CapsuleOriginDistanceFromPlane(normal,mins,maxs);
          printf("%f\n", benchRet); 
          free(normal);
          free(mins);
          free(maxs);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_normal0 = 100;
          float * normal = (float *) malloc(_len_normal0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_normal0; _i0++) {
            normal[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_mins0 = 100;
          float * mins = (float *) malloc(_len_mins0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_mins0; _i0++) {
            mins[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_maxs0 = 100;
          float * maxs = (float *) malloc(_len_maxs0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_maxs0; _i0++) {
            maxs[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          float benchRet = CapsuleOriginDistanceFromPlane(normal,mins,maxs);
          printf("%f\n", benchRet); 
          free(normal);
          free(mins);
          free(maxs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
