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
struct v4l2_rect {int left; int height; int width; int top; } ;
struct TYPE_2__ {int left; int top; int width; int height; } ;
struct v4l2_clip {TYPE_1__ c; } ;

/* Variables and functions */

int
btcx_screen_clips(int swidth, int sheight, struct v4l2_rect *win,
		  struct v4l2_clip *clips, unsigned int n)
{
	if (win->left < 0) {
		/* left */
		clips[n].c.left = 0;
		clips[n].c.top = 0;
		clips[n].c.width  = -win->left;
		clips[n].c.height = win->height;
		n++;
	}
	if (win->left + win->width > swidth) {
		/* right */
		clips[n].c.left   = swidth - win->left;
		clips[n].c.top    = 0;
		clips[n].c.width  = win->width - clips[n].c.left;
		clips[n].c.height = win->height;
		n++;
	}
	if (win->top < 0) {
		/* top */
		clips[n].c.left = 0;
		clips[n].c.top = 0;
		clips[n].c.width  = win->width;
		clips[n].c.height = -win->top;
		n++;
	}
	if (win->top + win->height > sheight) {
		/* bottom */
		clips[n].c.left = 0;
		clips[n].c.top = sheight - win->top;
		clips[n].c.width  = win->width;
		clips[n].c.height = win->height - clips[n].c.top;
		n++;
	}
	return n;
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
          // static_instructions_O0 : 84
          // dynamic_instructions_O0 : 84
          // ------------------------------- 
          // static_instructions_O1 : 36
          // dynamic_instructions_O1 : 36
          // ------------------------------- 
          // static_instructions_O2 : 36
          // dynamic_instructions_O2 : 36
          // ------------------------------- 
          // static_instructions_O3 : 36
          // dynamic_instructions_O3 : 36
          // ------------------------------- 
          // static_instructions_Ofast : 36
          // dynamic_instructions_Ofast : 36
          // ------------------------------- 
          // static_instructions_Os : 36
          // dynamic_instructions_Os : 36
          // ------------------------------- 
          // static_instructions_Oz : 36
          // dynamic_instructions_Oz : 36
          // ------------------------------- 

          int swidth = 255;
        
          int sheight = 255;
        
          unsigned int n = 255;
        
          int _len_win0 = 65025;
          struct v4l2_rect * win = (struct v4l2_rect *) malloc(_len_win0*sizeof(struct v4l2_rect));
          for(int _i0 = 0; _i0 < _len_win0; _i0++) {
              win[_i0].left = ((-2 * (next_i()%2)) + 1) * next_i();
          win[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          win[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          win[_i0].top = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_clips0 = 65025;
          struct v4l2_clip * clips = (struct v4l2_clip *) malloc(_len_clips0*sizeof(struct v4l2_clip));
          for(int _i0 = 0; _i0 < _len_clips0; _i0++) {
              clips[_i0].c.left = ((-2 * (next_i()%2)) + 1) * next_i();
          clips[_i0].c.top = ((-2 * (next_i()%2)) + 1) * next_i();
          clips[_i0].c.width = ((-2 * (next_i()%2)) + 1) * next_i();
          clips[_i0].c.height = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = btcx_screen_clips(swidth,sheight,win,clips,n);
          printf("%d\n", benchRet); 
          free(win);
          free(clips);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 84
          // dynamic_instructions_O0 : 84
          // ------------------------------- 
          // static_instructions_O1 : 36
          // dynamic_instructions_O1 : 36
          // ------------------------------- 
          // static_instructions_O2 : 36
          // dynamic_instructions_O2 : 36
          // ------------------------------- 
          // static_instructions_O3 : 36
          // dynamic_instructions_O3 : 36
          // ------------------------------- 
          // static_instructions_Ofast : 36
          // dynamic_instructions_Ofast : 36
          // ------------------------------- 
          // static_instructions_Os : 36
          // dynamic_instructions_Os : 36
          // ------------------------------- 
          // static_instructions_Oz : 36
          // dynamic_instructions_Oz : 36
          // ------------------------------- 

          int swidth = 10;
        
          int sheight = 10;
        
          unsigned int n = 10;
        
          int _len_win0 = 100;
          struct v4l2_rect * win = (struct v4l2_rect *) malloc(_len_win0*sizeof(struct v4l2_rect));
          for(int _i0 = 0; _i0 < _len_win0; _i0++) {
              win[_i0].left = ((-2 * (next_i()%2)) + 1) * next_i();
          win[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          win[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          win[_i0].top = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_clips0 = 100;
          struct v4l2_clip * clips = (struct v4l2_clip *) malloc(_len_clips0*sizeof(struct v4l2_clip));
          for(int _i0 = 0; _i0 < _len_clips0; _i0++) {
              clips[_i0].c.left = ((-2 * (next_i()%2)) + 1) * next_i();
          clips[_i0].c.top = ((-2 * (next_i()%2)) + 1) * next_i();
          clips[_i0].c.width = ((-2 * (next_i()%2)) + 1) * next_i();
          clips[_i0].c.height = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int benchRet = btcx_screen_clips(swidth,sheight,win,clips,n);
          printf("%d\n", benchRet); 
          free(win);
          free(clips);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
