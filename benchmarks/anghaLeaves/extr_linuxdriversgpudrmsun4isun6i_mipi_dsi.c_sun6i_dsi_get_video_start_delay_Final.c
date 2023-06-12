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
typedef  scalar_t__ u16 ;
struct sun6i_dsi {int dummy; } ;
struct drm_display_mode {scalar_t__ vdisplay; scalar_t__ vsync_end; scalar_t__ vtotal; } ;

/* Variables and functions */

__attribute__((used)) static u16 sun6i_dsi_get_video_start_delay(struct sun6i_dsi *dsi,
					   struct drm_display_mode *mode)
{
	return mode->vtotal - (mode->vsync_end - mode->vdisplay) + 1;
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
          int _len_dsi0 = 65025;
          struct sun6i_dsi * dsi = (struct sun6i_dsi *) malloc(_len_dsi0*sizeof(struct sun6i_dsi));
          for(int _i0 = 0; _i0 < _len_dsi0; _i0++) {
              dsi[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_mode0 = 65025;
          struct drm_display_mode * mode = (struct drm_display_mode *) malloc(_len_mode0*sizeof(struct drm_display_mode));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
              mode[_i0].vdisplay = ((-2 * (next_i()%2)) + 1) * next_i();
          mode[_i0].vsync_end = ((-2 * (next_i()%2)) + 1) * next_i();
          mode[_i0].vtotal = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          long benchRet = sun6i_dsi_get_video_start_delay(dsi,mode);
          printf("%ld\n", benchRet); 
          free(dsi);
          free(mode);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_dsi0 = 100;
          struct sun6i_dsi * dsi = (struct sun6i_dsi *) malloc(_len_dsi0*sizeof(struct sun6i_dsi));
          for(int _i0 = 0; _i0 < _len_dsi0; _i0++) {
              dsi[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_mode0 = 100;
          struct drm_display_mode * mode = (struct drm_display_mode *) malloc(_len_mode0*sizeof(struct drm_display_mode));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
              mode[_i0].vdisplay = ((-2 * (next_i()%2)) + 1) * next_i();
          mode[_i0].vsync_end = ((-2 * (next_i()%2)) + 1) * next_i();
          mode[_i0].vtotal = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          long benchRet = sun6i_dsi_get_video_start_delay(dsi,mode);
          printf("%ld\n", benchRet); 
          free(dsi);
          free(mode);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_dsi0 = 1;
          struct sun6i_dsi * dsi = (struct sun6i_dsi *) malloc(_len_dsi0*sizeof(struct sun6i_dsi));
          for(int _i0 = 0; _i0 < _len_dsi0; _i0++) {
              dsi[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_mode0 = 1;
          struct drm_display_mode * mode = (struct drm_display_mode *) malloc(_len_mode0*sizeof(struct drm_display_mode));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
              mode[_i0].vdisplay = ((-2 * (next_i()%2)) + 1) * next_i();
          mode[_i0].vsync_end = ((-2 * (next_i()%2)) + 1) * next_i();
          mode[_i0].vtotal = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          long benchRet = sun6i_dsi_get_video_start_delay(dsi,mode);
          printf("%ld\n", benchRet); 
          free(dsi);
          free(mode);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
