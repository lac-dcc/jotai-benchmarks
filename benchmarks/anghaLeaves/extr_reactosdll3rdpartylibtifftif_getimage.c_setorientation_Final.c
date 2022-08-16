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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int orientation; int req_orientation; } ;
typedef  TYPE_1__ TIFFRGBAImage ;

/* Variables and functions */
 int FLIP_HORIZONTALLY ; 
 int FLIP_VERTICALLY ; 
#define  ORIENTATION_BOTLEFT 135 
#define  ORIENTATION_BOTRIGHT 134 
#define  ORIENTATION_LEFTBOT 133 
#define  ORIENTATION_LEFTTOP 132 
#define  ORIENTATION_RIGHTBOT 131 
#define  ORIENTATION_RIGHTTOP 130 
#define  ORIENTATION_TOPLEFT 129 
#define  ORIENTATION_TOPRIGHT 128 

__attribute__((used)) static int 
setorientation(TIFFRGBAImage* img)
{
	switch (img->orientation) {
		case ORIENTATION_TOPLEFT:
		case ORIENTATION_LEFTTOP:
			if (img->req_orientation == ORIENTATION_TOPRIGHT ||
			    img->req_orientation == ORIENTATION_RIGHTTOP)
				return FLIP_HORIZONTALLY;
			else if (img->req_orientation == ORIENTATION_BOTRIGHT ||
			    img->req_orientation == ORIENTATION_RIGHTBOT)
				return FLIP_HORIZONTALLY | FLIP_VERTICALLY;
			else if (img->req_orientation == ORIENTATION_BOTLEFT ||
			    img->req_orientation == ORIENTATION_LEFTBOT)
				return FLIP_VERTICALLY;
			else
				return 0;
		case ORIENTATION_TOPRIGHT:
		case ORIENTATION_RIGHTTOP:
			if (img->req_orientation == ORIENTATION_TOPLEFT ||
			    img->req_orientation == ORIENTATION_LEFTTOP)
				return FLIP_HORIZONTALLY;
			else if (img->req_orientation == ORIENTATION_BOTRIGHT ||
			    img->req_orientation == ORIENTATION_RIGHTBOT)
				return FLIP_VERTICALLY;
			else if (img->req_orientation == ORIENTATION_BOTLEFT ||
			    img->req_orientation == ORIENTATION_LEFTBOT)
				return FLIP_HORIZONTALLY | FLIP_VERTICALLY;
			else
				return 0;
		case ORIENTATION_BOTRIGHT:
		case ORIENTATION_RIGHTBOT:
			if (img->req_orientation == ORIENTATION_TOPLEFT ||
			    img->req_orientation == ORIENTATION_LEFTTOP)
				return FLIP_HORIZONTALLY | FLIP_VERTICALLY;
			else if (img->req_orientation == ORIENTATION_TOPRIGHT ||
			    img->req_orientation == ORIENTATION_RIGHTTOP)
				return FLIP_VERTICALLY;
			else if (img->req_orientation == ORIENTATION_BOTLEFT ||
			    img->req_orientation == ORIENTATION_LEFTBOT)
				return FLIP_HORIZONTALLY;
			else
				return 0;
		case ORIENTATION_BOTLEFT:
		case ORIENTATION_LEFTBOT:
			if (img->req_orientation == ORIENTATION_TOPLEFT ||
			    img->req_orientation == ORIENTATION_LEFTTOP)
				return FLIP_VERTICALLY;
			else if (img->req_orientation == ORIENTATION_TOPRIGHT ||
			    img->req_orientation == ORIENTATION_RIGHTTOP)
				return FLIP_HORIZONTALLY | FLIP_VERTICALLY;
			else if (img->req_orientation == ORIENTATION_BOTRIGHT ||
			    img->req_orientation == ORIENTATION_RIGHTBOT)
				return FLIP_HORIZONTALLY;
			else
				return 0;
		default:	/* NOTREACHED */
			return 0;
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
          int _len_img0 = 1;
          struct TYPE_3__ * img = (struct TYPE_3__ *) malloc(_len_img0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_img0; _i0++) {
            img[_i0].orientation = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].req_orientation = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = setorientation(img);
          printf("%d\n", benchRet); 
          free(img);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
