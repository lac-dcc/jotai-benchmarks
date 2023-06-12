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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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

/* Variables and functions */

__attribute__((used)) static int get_thumbs_dimensions (int orig_width, int orig_height, int desired_width, int desired_height,
                                  int *new_width, int *new_height) {
	if (orig_width == desired_width && orig_height == desired_height) {
		*new_width  = desired_width;
		*new_height = desired_height;
		return 1;
	}

  if (desired_width <= 0 || desired_height <= 0) {
    return 0;
  }

  double ratio_x = (double)desired_width / (double)orig_width;
  double ratio_y = (double)desired_height / (double)orig_height;

  if (ratio_x < ratio_y) {
    *new_width  = desired_width;
    *new_height = (0.5 - 1e-9) + ratio_x * (double)orig_height;
  } else {
    *new_height = desired_height;
    *new_width  = (0.5 - 1e-9) + ratio_y * (double)orig_width;
  }

  if (*new_width < 1) {
    *new_width = 1;
  }

  if (*new_height < 1) {
    *new_height = 1;
  }
  return 1;
}

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
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int orig_width = 100;
        
          int orig_height = 100;
        
          int desired_width = 100;
        
          int desired_height = 100;
        
          int _len_new_width0 = 1;
          int * new_width = (int *) malloc(_len_new_width0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_new_width0; _i0++) {
            new_width[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_new_height0 = 1;
          int * new_height = (int *) malloc(_len_new_height0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_new_height0; _i0++) {
            new_height[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = get_thumbs_dimensions(orig_width,orig_height,desired_width,desired_height,new_width,new_height);
          printf("%d\n", benchRet); 
          free(new_width);
          free(new_height);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int orig_width = 255;
        
          int orig_height = 255;
        
          int desired_width = 255;
        
          int desired_height = 255;
        
          int _len_new_width0 = 65025;
          int * new_width = (int *) malloc(_len_new_width0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_new_width0; _i0++) {
            new_width[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_new_height0 = 65025;
          int * new_height = (int *) malloc(_len_new_height0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_new_height0; _i0++) {
            new_height[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = get_thumbs_dimensions(orig_width,orig_height,desired_width,desired_height,new_width,new_height);
          printf("%d\n", benchRet); 
          free(new_width);
          free(new_height);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int orig_width = 10;
        
          int orig_height = 10;
        
          int desired_width = 10;
        
          int desired_height = 10;
        
          int _len_new_width0 = 100;
          int * new_width = (int *) malloc(_len_new_width0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_new_width0; _i0++) {
            new_width[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_new_height0 = 100;
          int * new_height = (int *) malloc(_len_new_height0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_new_height0; _i0++) {
            new_height[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = get_thumbs_dimensions(orig_width,orig_height,desired_width,desired_height,new_width,new_height);
          printf("%d\n", benchRet); 
          free(new_width);
          free(new_height);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int orig_width = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int orig_height = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int desired_width = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int desired_height = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_new_width0 = 1;
          int * new_width = (int *) malloc(_len_new_width0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_new_width0; _i0++) {
            new_width[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_new_height0 = 1;
          int * new_height = (int *) malloc(_len_new_height0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_new_height0; _i0++) {
            new_height[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = get_thumbs_dimensions(orig_width,orig_height,desired_width,desired_height,new_width,new_height);
          printf("%d\n", benchRet); 
          free(new_width);
          free(new_height);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
