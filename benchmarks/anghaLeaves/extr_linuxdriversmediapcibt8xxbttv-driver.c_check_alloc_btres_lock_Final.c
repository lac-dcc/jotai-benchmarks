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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {scalar_t__ end; } ;
struct bttv_fh {int resources; TYPE_3__ vbi_fmt; int /*<<< orphan*/  do_crop; } ;
struct bttv {int resources; scalar_t__ vbi_end; scalar_t__ crop_start; TYPE_2__* crop; } ;
typedef  scalar_t__ __s32 ;
struct TYPE_4__ {scalar_t__ top; } ;
struct TYPE_5__ {TYPE_1__ rect; } ;

/* Variables and functions */
 int RESOURCE_VIDEO_READ ; 
 int RESOURCE_VIDEO_STREAM ; 
 int VBI_RESOURCES ; 
 int VIDEO_RESOURCES ; 

__attribute__((used)) static
int check_alloc_btres_lock(struct bttv *btv, struct bttv_fh *fh, int bit)
{
	int xbits; /* mutual exclusive resources */

	if (fh->resources & bit)
		/* have it already allocated */
		return 1;

	xbits = bit;
	if (bit & (RESOURCE_VIDEO_READ | RESOURCE_VIDEO_STREAM))
		xbits |= RESOURCE_VIDEO_READ | RESOURCE_VIDEO_STREAM;

	/* is it free? */
	if (btv->resources & xbits) {
		/* no, someone else uses it */
		goto fail;
	}

	if ((bit & VIDEO_RESOURCES)
	    && 0 == (btv->resources & VIDEO_RESOURCES)) {
		/* Do crop - use current, don't - use default parameters. */
		__s32 top = btv->crop[!!fh->do_crop].rect.top;

		if (btv->vbi_end > top)
			goto fail;

		/* We cannot capture the same line as video and VBI data.
		   Claim scan lines crop[].rect.top to bottom. */
		btv->crop_start = top;
	} else if (bit & VBI_RESOURCES) {
		__s32 end = fh->vbi_fmt.end;

		if (end > btv->crop_start)
			goto fail;

		/* Claim scan lines above fh->vbi_fmt.end. */
		btv->vbi_end = end;
	}

	/* it's free, grab it */
	fh->resources  |= bit;
	btv->resources |= bit;
	return 1;

 fail:
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
          int bit = 100;
          int _len_btv0 = 1;
          struct bttv * btv = (struct bttv *) malloc(_len_btv0*sizeof(struct bttv));
          for(int _i0 = 0; _i0 < _len_btv0; _i0++) {
            btv[_i0].resources = ((-2 * (next_i()%2)) + 1) * next_i();
        btv[_i0].vbi_end = ((-2 * (next_i()%2)) + 1) * next_i();
        btv[_i0].crop_start = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_btv__i0__crop0 = 1;
          btv[_i0].crop = (struct TYPE_5__ *) malloc(_len_btv__i0__crop0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_btv__i0__crop0; _j0++) {
            btv[_i0].crop->rect.top = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_fh0 = 1;
          struct bttv_fh * fh = (struct bttv_fh *) malloc(_len_fh0*sizeof(struct bttv_fh));
          for(int _i0 = 0; _i0 < _len_fh0; _i0++) {
            fh[_i0].resources = ((-2 * (next_i()%2)) + 1) * next_i();
        fh[_i0].vbi_fmt.end = ((-2 * (next_i()%2)) + 1) * next_i();
        fh[_i0].do_crop = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_alloc_btres_lock(btv,fh,bit);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_btv0; _aux++) {
          free(btv[_aux].crop);
          }
          free(btv);
          free(fh);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
