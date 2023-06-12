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
typedef  int u32 ;
struct rv6xx_sclk_stepping {int vco_frequency; int /*<<< orphan*/  post_divider; } ;
struct radeon_device {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct rv6xx_sclk_stepping rv6xx_next_vco_step(struct radeon_device *rdev,
						      struct rv6xx_sclk_stepping *cur,
						      bool increasing_vco, u32 step_size)
{
	struct rv6xx_sclk_stepping next;

	next.post_divider = cur->post_divider;

	if (increasing_vco)
		next.vco_frequency = (cur->vco_frequency * (100 + step_size)) / 100;
	else
		next.vco_frequency = (cur->vco_frequency * 100 + 99 + step_size) / (100 + step_size);

	return next;
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
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 20
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int increasing_vco = 100;
        
          int step_size = 100;
        
          int _len_rdev0 = 1;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
              rdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_cur0 = 1;
          struct rv6xx_sclk_stepping * cur = (struct rv6xx_sclk_stepping *) malloc(_len_cur0*sizeof(struct rv6xx_sclk_stepping));
          for(int _i0 = 0; _i0 < _len_cur0; _i0++) {
              cur[_i0].vco_frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          cur[_i0].post_divider = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          struct rv6xx_sclk_stepping benchRet = rv6xx_next_vco_step(rdev,cur,increasing_vco,step_size);
          printf("%d\n", benchRet.vco_frequency);
          printf("%d\n", benchRet.post_divider);
          free(rdev);
          free(cur);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 20
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int increasing_vco = 255;
        
          int step_size = 255;
        
          int _len_rdev0 = 65025;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
              rdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_cur0 = 65025;
          struct rv6xx_sclk_stepping * cur = (struct rv6xx_sclk_stepping *) malloc(_len_cur0*sizeof(struct rv6xx_sclk_stepping));
          for(int _i0 = 0; _i0 < _len_cur0; _i0++) {
              cur[_i0].vco_frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          cur[_i0].post_divider = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          struct rv6xx_sclk_stepping benchRet = rv6xx_next_vco_step(rdev,cur,increasing_vco,step_size);
          printf("%d\n", benchRet.vco_frequency);
          printf("%d\n", benchRet.post_divider);
          free(rdev);
          free(cur);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 20
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int increasing_vco = 10;
        
          int step_size = 10;
        
          int _len_rdev0 = 100;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
              rdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_cur0 = 100;
          struct rv6xx_sclk_stepping * cur = (struct rv6xx_sclk_stepping *) malloc(_len_cur0*sizeof(struct rv6xx_sclk_stepping));
          for(int _i0 = 0; _i0 < _len_cur0; _i0++) {
              cur[_i0].vco_frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          cur[_i0].post_divider = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          struct rv6xx_sclk_stepping benchRet = rv6xx_next_vco_step(rdev,cur,increasing_vco,step_size);
          printf("%d\n", benchRet.vco_frequency);
          printf("%d\n", benchRet.post_divider);
          free(rdev);
          free(cur);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 20
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int increasing_vco = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int step_size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_rdev0 = 1;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
              rdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_cur0 = 1;
          struct rv6xx_sclk_stepping * cur = (struct rv6xx_sclk_stepping *) malloc(_len_cur0*sizeof(struct rv6xx_sclk_stepping));
          for(int _i0 = 0; _i0 < _len_cur0; _i0++) {
              cur[_i0].vco_frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          cur[_i0].post_divider = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          struct rv6xx_sclk_stepping benchRet = rv6xx_next_vco_step(rdev,cur,increasing_vco,step_size);
          printf("%d\n", benchRet.vco_frequency);
          printf("%d\n", benchRet.post_divider);
          free(rdev);
          free(cur);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
