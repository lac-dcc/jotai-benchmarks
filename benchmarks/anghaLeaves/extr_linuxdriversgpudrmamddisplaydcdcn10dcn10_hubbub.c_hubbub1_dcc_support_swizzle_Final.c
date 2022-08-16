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
       1            big-arr-10x\n\
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
typedef  enum swizzle_mode_values { ____Placeholder_swizzle_mode_values } swizzle_mode_values ;
typedef  enum segment_order { ____Placeholder_segment_order } segment_order ;

/* Variables and functions */
#define  DC_SW_4KB_D 139 
#define  DC_SW_4KB_D_X 138 
#define  DC_SW_4KB_S 137 
#define  DC_SW_4KB_S_X 136 
#define  DC_SW_64KB_D 135 
#define  DC_SW_64KB_D_X 134 
#define  DC_SW_64KB_S 133 
#define  DC_SW_64KB_S_X 132 
#define  DC_SW_VAR_D 131 
#define  DC_SW_VAR_D_X 130 
#define  DC_SW_VAR_S 129 
#define  DC_SW_VAR_S_X 128 
 int segment_order__contiguous ; 
 int segment_order__na ; 
 int segment_order__non_contiguous ; 

__attribute__((used)) static bool hubbub1_dcc_support_swizzle(
		enum swizzle_mode_values swizzle,
		unsigned int bytes_per_element,
		enum segment_order *segment_order_horz,
		enum segment_order *segment_order_vert)
{
	bool standard_swizzle = false;
	bool display_swizzle = false;

	switch (swizzle) {
	case DC_SW_4KB_S:
	case DC_SW_64KB_S:
	case DC_SW_VAR_S:
	case DC_SW_4KB_S_X:
	case DC_SW_64KB_S_X:
	case DC_SW_VAR_S_X:
		standard_swizzle = true;
		break;
	case DC_SW_4KB_D:
	case DC_SW_64KB_D:
	case DC_SW_VAR_D:
	case DC_SW_4KB_D_X:
	case DC_SW_64KB_D_X:
	case DC_SW_VAR_D_X:
		display_swizzle = true;
		break;
	default:
		break;
	}

	if (bytes_per_element == 1 && standard_swizzle) {
		*segment_order_horz = segment_order__contiguous;
		*segment_order_vert = segment_order__na;
		return true;
	}
	if (bytes_per_element == 2 && standard_swizzle) {
		*segment_order_horz = segment_order__non_contiguous;
		*segment_order_vert = segment_order__contiguous;
		return true;
	}
	if (bytes_per_element == 4 && standard_swizzle) {
		*segment_order_horz = segment_order__non_contiguous;
		*segment_order_vert = segment_order__contiguous;
		return true;
	}
	if (bytes_per_element == 8 && standard_swizzle) {
		*segment_order_horz = segment_order__na;
		*segment_order_vert = segment_order__contiguous;
		return true;
	}
	if (bytes_per_element == 8 && display_swizzle) {
		*segment_order_horz = segment_order__contiguous;
		*segment_order_vert = segment_order__non_contiguous;
		return true;
	}

	return false;
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
          enum swizzle_mode_values swizzle = 0;
          unsigned int bytes_per_element = 100;
          int _len_segment_order_horz0 = 1;
          enum segment_order * segment_order_horz = (enum segment_order *) malloc(_len_segment_order_horz0*sizeof(enum segment_order));
          for(int _i0 = 0; _i0 < _len_segment_order_horz0; _i0++) {
            segment_order_horz[_i0] = 0;
          }
          int _len_segment_order_vert0 = 1;
          enum segment_order * segment_order_vert = (enum segment_order *) malloc(_len_segment_order_vert0*sizeof(enum segment_order));
          for(int _i0 = 0; _i0 < _len_segment_order_vert0; _i0++) {
            segment_order_vert[_i0] = 0;
          }
          int benchRet = hubbub1_dcc_support_swizzle(swizzle,bytes_per_element,segment_order_horz,segment_order_vert);
          printf("%d\n", benchRet); 
          free(segment_order_horz);
          free(segment_order_vert);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum swizzle_mode_values swizzle = 0;
          unsigned int bytes_per_element = 10;
          int _len_segment_order_horz0 = 100;
          enum segment_order * segment_order_horz = (enum segment_order *) malloc(_len_segment_order_horz0*sizeof(enum segment_order));
          for(int _i0 = 0; _i0 < _len_segment_order_horz0; _i0++) {
            segment_order_horz[_i0] = 0;
          }
          int _len_segment_order_vert0 = 100;
          enum segment_order * segment_order_vert = (enum segment_order *) malloc(_len_segment_order_vert0*sizeof(enum segment_order));
          for(int _i0 = 0; _i0 < _len_segment_order_vert0; _i0++) {
            segment_order_vert[_i0] = 0;
          }
          int benchRet = hubbub1_dcc_support_swizzle(swizzle,bytes_per_element,segment_order_horz,segment_order_vert);
          printf("%d\n", benchRet); 
          free(segment_order_horz);
          free(segment_order_vert);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
