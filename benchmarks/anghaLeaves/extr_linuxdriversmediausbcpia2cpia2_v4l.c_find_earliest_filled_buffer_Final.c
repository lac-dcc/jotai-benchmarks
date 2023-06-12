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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct camera_data {int num_frames; TYPE_1__* buffers; } ;
struct TYPE_2__ {scalar_t__ status; struct timeval timestamp; } ;

/* Variables and functions */
 scalar_t__ FRAME_READY ; 

__attribute__((used)) static int find_earliest_filled_buffer(struct camera_data *cam)
{
	int i;
	int found = -1;
	for (i=0; i<cam->num_frames; i++) {
		if(cam->buffers[i].status == FRAME_READY) {
			if(found < 0) {
				found = i;
			} else {
				/* find which buffer is earlier */
				struct timeval *tv1, *tv2;
				tv1 = &cam->buffers[i].timestamp;
				tv2 = &cam->buffers[found].timestamp;
				if(tv1->tv_sec < tv2->tv_sec ||
				   (tv1->tv_sec == tv2->tv_sec &&
				    tv1->tv_usec < tv2->tv_usec))
					found = i;
			}
		}
	}
	return found;
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
          int _len_cam0 = 65025;
          struct camera_data * cam = (struct camera_data *) malloc(_len_cam0*sizeof(struct camera_data));
          for(int _i0 = 0; _i0 < _len_cam0; _i0++) {
              cam[_i0].num_frames = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cam__i0__buffers0 = 1;
          cam[_i0].buffers = (struct TYPE_2__ *) malloc(_len_cam__i0__buffers0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cam__i0__buffers0; _j0++) {
              cam[_i0].buffers->status = ((-2 * (next_i()%2)) + 1) * next_i();
          cam[_i0].buffers->timestamp.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          cam[_i0].buffers->timestamp.tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          int benchRet = find_earliest_filled_buffer(cam);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cam0; _aux++) {
          free(cam[_aux].buffers);
          }
          free(cam);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_cam0 = 100;
          struct camera_data * cam = (struct camera_data *) malloc(_len_cam0*sizeof(struct camera_data));
          for(int _i0 = 0; _i0 < _len_cam0; _i0++) {
              cam[_i0].num_frames = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cam__i0__buffers0 = 1;
          cam[_i0].buffers = (struct TYPE_2__ *) malloc(_len_cam__i0__buffers0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cam__i0__buffers0; _j0++) {
              cam[_i0].buffers->status = ((-2 * (next_i()%2)) + 1) * next_i();
          cam[_i0].buffers->timestamp.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          cam[_i0].buffers->timestamp.tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          int benchRet = find_earliest_filled_buffer(cam);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cam0; _aux++) {
          free(cam[_aux].buffers);
          }
          free(cam);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_cam0 = 1;
          struct camera_data * cam = (struct camera_data *) malloc(_len_cam0*sizeof(struct camera_data));
          for(int _i0 = 0; _i0 < _len_cam0; _i0++) {
              cam[_i0].num_frames = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cam__i0__buffers0 = 1;
          cam[_i0].buffers = (struct TYPE_2__ *) malloc(_len_cam__i0__buffers0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cam__i0__buffers0; _j0++) {
              cam[_i0].buffers->status = ((-2 * (next_i()%2)) + 1) * next_i();
          cam[_i0].buffers->timestamp.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
          cam[_i0].buffers->timestamp.tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          int benchRet = find_earliest_filled_buffer(cam);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cam0; _aux++) {
          free(cam[_aux].buffers);
          }
          free(cam);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
