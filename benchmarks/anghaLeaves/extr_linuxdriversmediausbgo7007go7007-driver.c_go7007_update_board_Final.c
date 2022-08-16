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
       1            linked\n\
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
struct go7007_board_info {int sensor_flags; int sensor_width; int sensor_height; int sensor_framerate; int /*<<< orphan*/  sensor_h_offset; int /*<<< orphan*/  sensor_v_offset; } ;
struct go7007 {int width; int height; int sensor_framerate; int /*<<< orphan*/  encoder_h_offset; int /*<<< orphan*/  encoder_v_offset; int /*<<< orphan*/  standard; int /*<<< orphan*/  std; struct go7007_board_info* board_info; } ;

/* Variables and functions */
 int GO7007_SENSOR_TV ; 
 int /*<<< orphan*/  GO7007_STD_NTSC ; 
 int /*<<< orphan*/  GO7007_STD_OTHER ; 
 int /*<<< orphan*/  V4L2_STD_NTSC_M ; 

void go7007_update_board(struct go7007 *go)
{
	const struct go7007_board_info *board = go->board_info;

	if (board->sensor_flags & GO7007_SENSOR_TV) {
		go->standard = GO7007_STD_NTSC;
		go->std = V4L2_STD_NTSC_M;
		go->width = 720;
		go->height = 480;
		go->sensor_framerate = 30000;
	} else {
		go->standard = GO7007_STD_OTHER;
		go->width = board->sensor_width;
		go->height = board->sensor_height;
		go->sensor_framerate = board->sensor_framerate;
	}
	go->encoder_v_offset = board->sensor_v_offset;
	go->encoder_h_offset = board->sensor_h_offset;
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
            go[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        go[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        go[_i0].sensor_framerate = ((-2 * (next_i()%2)) + 1) * next_i();
        go[_i0].encoder_h_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        go[_i0].encoder_v_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        go[_i0].standard = ((-2 * (next_i()%2)) + 1) * next_i();
        go[_i0].std = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_go__i0__board_info0 = 1;
          go[_i0].board_info = (struct go7007_board_info *) malloc(_len_go__i0__board_info0*sizeof(struct go7007_board_info));
          for(int _j0 = 0; _j0 < _len_go__i0__board_info0; _j0++) {
            go[_i0].board_info->sensor_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        go[_i0].board_info->sensor_width = ((-2 * (next_i()%2)) + 1) * next_i();
        go[_i0].board_info->sensor_height = ((-2 * (next_i()%2)) + 1) * next_i();
        go[_i0].board_info->sensor_framerate = ((-2 * (next_i()%2)) + 1) * next_i();
        go[_i0].board_info->sensor_h_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        go[_i0].board_info->sensor_v_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          go7007_update_board(go);
          for(int _aux = 0; _aux < _len_go0; _aux++) {
          free(go[_aux].board_info);
          }
          free(go);
        
        break;
    }
    // linked
    case 1:
    {
          int _len_go0 = 1;
          struct go7007 * go = (struct go7007 *) malloc(_len_go0*sizeof(struct go7007));
          for(int _i0 = 0; _i0 < _len_go0; _i0++) {
            go[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        go[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        go[_i0].sensor_framerate = ((-2 * (next_i()%2)) + 1) * next_i();
        go[_i0].encoder_h_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        go[_i0].encoder_v_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        go[_i0].standard = ((-2 * (next_i()%2)) + 1) * next_i();
        go[_i0].std = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_go__i0__board_info0 = 1;
          go[_i0].board_info = (struct go7007_board_info *) malloc(_len_go__i0__board_info0*sizeof(struct go7007_board_info));
          for(int _j0 = 0; _j0 < _len_go__i0__board_info0; _j0++) {
            go[_i0].board_info->sensor_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        go[_i0].board_info->sensor_width = ((-2 * (next_i()%2)) + 1) * next_i();
        go[_i0].board_info->sensor_height = ((-2 * (next_i()%2)) + 1) * next_i();
        go[_i0].board_info->sensor_framerate = ((-2 * (next_i()%2)) + 1) * next_i();
        go[_i0].board_info->sensor_h_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        go[_i0].board_info->sensor_v_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          go7007_update_board(go);
          for(int _aux = 0; _aux < _len_go0; _aux++) {
          free(go[_aux].board_info);
          }
          free(go);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
