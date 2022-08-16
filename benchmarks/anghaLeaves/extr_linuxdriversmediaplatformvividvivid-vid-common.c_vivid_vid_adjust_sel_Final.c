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

/* Type definitions */
struct v4l2_rect {unsigned int width; unsigned int height; int top; int left; } ;

/* Variables and functions */
 int ERANGE ; 
 unsigned int MAX_HEIGHT ; 
 unsigned int MAX_WIDTH ; 
 unsigned int V4L2_SEL_FLAG_GE ; 
 unsigned int V4L2_SEL_FLAG_LE ; 

int vivid_vid_adjust_sel(unsigned flags, struct v4l2_rect *r)
{
	unsigned w = r->width;
	unsigned h = r->height;

	/* sanitize w and h in case someone passes ~0 as the value */
	w &= 0xffff;
	h &= 0xffff;
	if (!(flags & V4L2_SEL_FLAG_LE)) {
		w++;
		h++;
		if (w < 2)
			w = 2;
		if (h < 2)
			h = 2;
	}
	if (!(flags & V4L2_SEL_FLAG_GE)) {
		if (w > MAX_WIDTH)
			w = MAX_WIDTH;
		if (h > MAX_HEIGHT)
			h = MAX_HEIGHT;
	}
	w = w & ~1;
	h = h & ~1;
	if (w < 2 || h < 2)
		return -ERANGE;
	if (w > MAX_WIDTH || h > MAX_HEIGHT)
		return -ERANGE;
	if (r->top < 0)
		r->top = 0;
	if (r->left < 0)
		r->left = 0;
	/* sanitize left and top in case someone passes ~0 as the value */
	r->left &= 0xfffe;
	r->top &= 0xfffe;
	if (r->left + w > MAX_WIDTH)
		r->left = MAX_WIDTH - w;
	if (r->top + h > MAX_HEIGHT)
		r->top = MAX_HEIGHT - h;
	if ((flags & (V4L2_SEL_FLAG_GE | V4L2_SEL_FLAG_LE)) ==
			(V4L2_SEL_FLAG_GE | V4L2_SEL_FLAG_LE) &&
	    (r->width != w || r->height != h))
		return -ERANGE;
	r->width = w;
	r->height = h;
	return 0;
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
          unsigned int flags = 100;
          int _len_r0 = 1;
          struct v4l2_rect * r = (struct v4l2_rect *) malloc(_len_r0*sizeof(struct v4l2_rect));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        r[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        r[_i0].top = ((-2 * (next_i()%2)) + 1) * next_i();
        r[_i0].left = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vivid_vid_adjust_sel(flags,r);
          printf("%d\n", benchRet); 
          free(r);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
