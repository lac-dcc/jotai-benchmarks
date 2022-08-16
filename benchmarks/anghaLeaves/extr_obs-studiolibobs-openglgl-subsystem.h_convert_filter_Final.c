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
typedef  enum gs_sample_filter { ____Placeholder_gs_sample_filter } gs_sample_filter ;
typedef  int /*<<< orphan*/  GLint ;

/* Variables and functions */
 int /*<<< orphan*/  GL_LINEAR ; 
 int /*<<< orphan*/  GL_LINEAR_MIPMAP_LINEAR ; 
 int /*<<< orphan*/  GL_LINEAR_MIPMAP_NEAREST ; 
 int /*<<< orphan*/  GL_NEAREST ; 
 int /*<<< orphan*/  GL_NEAREST_MIPMAP_LINEAR ; 
 int /*<<< orphan*/  GL_NEAREST_MIPMAP_NEAREST ; 
#define  GS_FILTER_ANISOTROPIC 136 
#define  GS_FILTER_LINEAR 135 
#define  GS_FILTER_MIN_LINEAR_MAG_MIP_POINT 134 
#define  GS_FILTER_MIN_LINEAR_MAG_POINT_MIP_LINEAR 133 
#define  GS_FILTER_MIN_MAG_LINEAR_MIP_POINT 132 
#define  GS_FILTER_MIN_MAG_POINT_MIP_LINEAR 131 
#define  GS_FILTER_MIN_POINT_MAG_LINEAR_MIP_POINT 130 
#define  GS_FILTER_MIN_POINT_MAG_MIP_LINEAR 129 
#define  GS_FILTER_POINT 128 

__attribute__((used)) static inline void convert_filter(enum gs_sample_filter filter,
		GLint *min_filter, GLint *mag_filter)
{
	switch (filter) {
	case GS_FILTER_POINT:
		*min_filter = GL_NEAREST_MIPMAP_NEAREST;
		*mag_filter = GL_NEAREST;
		return;
	case GS_FILTER_LINEAR:
		*min_filter = GL_LINEAR_MIPMAP_LINEAR;
		*mag_filter = GL_LINEAR;
		return;
	case GS_FILTER_MIN_MAG_POINT_MIP_LINEAR:
		*min_filter = GL_NEAREST_MIPMAP_LINEAR;
		*mag_filter = GL_NEAREST;
		return;
	case GS_FILTER_MIN_POINT_MAG_LINEAR_MIP_POINT:
		*min_filter = GL_NEAREST_MIPMAP_NEAREST;
		*mag_filter = GL_LINEAR;
		return;
	case GS_FILTER_MIN_POINT_MAG_MIP_LINEAR:
		*min_filter = GL_NEAREST_MIPMAP_LINEAR;
		*mag_filter = GL_LINEAR;
		return;
	case GS_FILTER_MIN_LINEAR_MAG_MIP_POINT:
		*min_filter = GL_LINEAR_MIPMAP_NEAREST;
		*mag_filter = GL_NEAREST;
		return;
	case GS_FILTER_MIN_LINEAR_MAG_POINT_MIP_LINEAR:
		*min_filter = GL_LINEAR_MIPMAP_LINEAR;
		*mag_filter = GL_NEAREST;
		return;
	case GS_FILTER_MIN_MAG_LINEAR_MIP_POINT:
		*min_filter = GL_LINEAR_MIPMAP_NEAREST;
		*mag_filter = GL_LINEAR;
		return;
	case GS_FILTER_ANISOTROPIC:
		*min_filter = GL_LINEAR_MIPMAP_LINEAR;
		*mag_filter = GL_LINEAR;
		return;
	}

	*min_filter = GL_NEAREST_MIPMAP_NEAREST;
	*mag_filter = GL_NEAREST;
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
          enum gs_sample_filter filter = 0;
          int _len_min_filter0 = 1;
          int * min_filter = (int *) malloc(_len_min_filter0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_min_filter0; _i0++) {
            min_filter[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mag_filter0 = 1;
          int * mag_filter = (int *) malloc(_len_mag_filter0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mag_filter0; _i0++) {
            mag_filter[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          convert_filter(filter,min_filter,mag_filter);
          free(min_filter);
          free(mag_filter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
