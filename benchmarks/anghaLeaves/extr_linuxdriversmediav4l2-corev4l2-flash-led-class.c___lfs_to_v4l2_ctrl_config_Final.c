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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct v4l2_ctrl_config {int /*<<< orphan*/  def; int /*<<< orphan*/  step; int /*<<< orphan*/  max; int /*<<< orphan*/  min; } ;
struct led_flash_setting {int /*<<< orphan*/  val; int /*<<< orphan*/  step; int /*<<< orphan*/  max; int /*<<< orphan*/  min; } ;

/* Variables and functions */

__attribute__((used)) static void __lfs_to_v4l2_ctrl_config(struct led_flash_setting *s,
				struct v4l2_ctrl_config *c)
{
	c->min = s->min;
	c->max = s->max;
	c->step = s->step;
	c->def = s->val;
}

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
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_s0 = 65025;
          struct led_flash_setting * s = (struct led_flash_setting *) malloc(_len_s0*sizeof(struct led_flash_setting));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              s[_i0].val = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].step = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].max = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].min = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_c0 = 65025;
          struct v4l2_ctrl_config * c = (struct v4l2_ctrl_config *) malloc(_len_c0*sizeof(struct v4l2_ctrl_config));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              c[_i0].def = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].step = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].max = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].min = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          __lfs_to_v4l2_ctrl_config(s,c);
          free(s);
          free(c);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_s0 = 100;
          struct led_flash_setting * s = (struct led_flash_setting *) malloc(_len_s0*sizeof(struct led_flash_setting));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              s[_i0].val = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].step = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].max = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].min = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_c0 = 100;
          struct v4l2_ctrl_config * c = (struct v4l2_ctrl_config *) malloc(_len_c0*sizeof(struct v4l2_ctrl_config));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              c[_i0].def = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].step = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].max = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].min = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          __lfs_to_v4l2_ctrl_config(s,c);
          free(s);
          free(c);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_s0 = 1;
          struct led_flash_setting * s = (struct led_flash_setting *) malloc(_len_s0*sizeof(struct led_flash_setting));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              s[_i0].val = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].step = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].max = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].min = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_c0 = 1;
          struct v4l2_ctrl_config * c = (struct v4l2_ctrl_config *) malloc(_len_c0*sizeof(struct v4l2_ctrl_config));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              c[_i0].def = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].step = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].max = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].min = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          __lfs_to_v4l2_ctrl_config(s,c);
          free(s);
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
