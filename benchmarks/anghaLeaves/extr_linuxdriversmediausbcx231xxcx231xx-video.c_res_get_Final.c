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
struct cx231xx_fh {int stream_on; scalar_t__ type; struct cx231xx* dev; } ;
struct cx231xx {int stream_on; int vbi_stream_on; } ;

/* Variables and functions */
 int EBUSY ; 
 int EINVAL ; 
 scalar_t__ V4L2_BUF_TYPE_VBI_CAPTURE ; 
 scalar_t__ V4L2_BUF_TYPE_VIDEO_CAPTURE ; 

__attribute__((used)) static int res_get(struct cx231xx_fh *fh)
{
	struct cx231xx *dev = fh->dev;
	int rc = 0;

	/* This instance already has stream_on */
	if (fh->stream_on)
		return rc;

	if (fh->type == V4L2_BUF_TYPE_VIDEO_CAPTURE) {
		if (dev->stream_on)
			return -EBUSY;
		dev->stream_on = 1;
	} else if (fh->type == V4L2_BUF_TYPE_VBI_CAPTURE) {
		if (dev->vbi_stream_on)
			return -EBUSY;
		dev->vbi_stream_on = 1;
	} else
		return -EINVAL;

	fh->stream_on = 1;

	return rc;
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
          int _len_fh0 = 1;
          struct cx231xx_fh * fh = (struct cx231xx_fh *) malloc(_len_fh0*sizeof(struct cx231xx_fh));
          for(int _i0 = 0; _i0 < _len_fh0; _i0++) {
            fh[_i0].stream_on = ((-2 * (next_i()%2)) + 1) * next_i();
        fh[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fh__i0__dev0 = 1;
          fh[_i0].dev = (struct cx231xx *) malloc(_len_fh__i0__dev0*sizeof(struct cx231xx));
          for(int _j0 = 0; _j0 < _len_fh__i0__dev0; _j0++) {
            fh[_i0].dev->stream_on = ((-2 * (next_i()%2)) + 1) * next_i();
        fh[_i0].dev->vbi_stream_on = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = res_get(fh);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fh0; _aux++) {
          free(fh[_aux].dev);
          }
          free(fh);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
