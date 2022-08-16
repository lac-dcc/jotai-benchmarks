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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct go7007 {int standard; TYPE_1__* board_info; } ;
struct TYPE_2__ {int sensor_width; int sensor_height; } ;

/* Variables and functions */
#define  GO7007_STD_NTSC 130 
#define  GO7007_STD_OTHER 129 
#define  GO7007_STD_PAL 128 

__attribute__((used)) static void get_resolution(struct go7007 *go, int *width, int *height)
{
	switch (go->standard) {
	case GO7007_STD_NTSC:
		*width = 720;
		*height = 480;
		break;
	case GO7007_STD_PAL:
		*width = 720;
		*height = 576;
		break;
	case GO7007_STD_OTHER:
	default:
		*width = go->board_info->sensor_width;
		*height = go->board_info->sensor_height;
		break;
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
          int _len_go0 = 1;
          struct go7007 * go = (struct go7007 *) malloc(_len_go0*sizeof(struct go7007));
          for(int _i0 = 0; _i0 < _len_go0; _i0++) {
            go[_i0].standard = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_go__i0__board_info0 = 1;
          go[_i0].board_info = (struct TYPE_2__ *) malloc(_len_go__i0__board_info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_go__i0__board_info0; _j0++) {
            go[_i0].board_info->sensor_width = ((-2 * (next_i()%2)) + 1) * next_i();
        go[_i0].board_info->sensor_height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_width0 = 1;
          int * width = (int *) malloc(_len_width0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_width0; _i0++) {
            width[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_height0 = 1;
          int * height = (int *) malloc(_len_height0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_height0; _i0++) {
            height[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_resolution(go,width,height);
          for(int _aux = 0; _aux < _len_go0; _aux++) {
          free(go[_aux].board_info);
          }
          free(go);
          free(width);
          free(height);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
