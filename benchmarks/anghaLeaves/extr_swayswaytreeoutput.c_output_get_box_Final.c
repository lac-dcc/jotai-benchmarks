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
struct wlr_box {int /*<<< orphan*/  height; int /*<<< orphan*/  width; int /*<<< orphan*/  y; int /*<<< orphan*/  x; } ;
struct sway_output {int /*<<< orphan*/  height; int /*<<< orphan*/  width; int /*<<< orphan*/  ly; int /*<<< orphan*/  lx; } ;

/* Variables and functions */

void output_get_box(struct sway_output *output, struct wlr_box *box) {
	box->x = output->lx;
	box->y = output->ly;
	box->width = output->width;
	box->height = output->height;
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

          int _len_output0 = 65025;
          struct sway_output * output = (struct sway_output *) malloc(_len_output0*sizeof(struct sway_output));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
              output[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          output[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          output[_i0].ly = ((-2 * (next_i()%2)) + 1) * next_i();
          output[_i0].lx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_box0 = 65025;
          struct wlr_box * box = (struct wlr_box *) malloc(_len_box0*sizeof(struct wlr_box));
          for(int _i0 = 0; _i0 < _len_box0; _i0++) {
              box[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          box[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          box[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          box[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          output_get_box(output,box);
          free(output);
          free(box);
        
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

          int _len_output0 = 100;
          struct sway_output * output = (struct sway_output *) malloc(_len_output0*sizeof(struct sway_output));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
              output[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          output[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          output[_i0].ly = ((-2 * (next_i()%2)) + 1) * next_i();
          output[_i0].lx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_box0 = 100;
          struct wlr_box * box = (struct wlr_box *) malloc(_len_box0*sizeof(struct wlr_box));
          for(int _i0 = 0; _i0 < _len_box0; _i0++) {
              box[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          box[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          box[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          box[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          output_get_box(output,box);
          free(output);
          free(box);
        
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

          int _len_output0 = 1;
          struct sway_output * output = (struct sway_output *) malloc(_len_output0*sizeof(struct sway_output));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
              output[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          output[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          output[_i0].ly = ((-2 * (next_i()%2)) + 1) * next_i();
          output[_i0].lx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_box0 = 1;
          struct wlr_box * box = (struct wlr_box *) malloc(_len_box0*sizeof(struct wlr_box));
          for(int _i0 = 0; _i0 < _len_box0; _i0++) {
              box[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          box[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          box[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          box[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          output_get_box(output,box);
          free(output);
          free(box);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
