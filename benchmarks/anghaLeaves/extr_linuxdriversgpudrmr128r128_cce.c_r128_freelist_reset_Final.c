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
struct drm_device_dma {int buf_count; struct drm_buf** buflist; } ;
struct drm_device {struct drm_device_dma* dma; } ;
struct drm_buf {TYPE_1__* dev_private; } ;
struct TYPE_2__ {scalar_t__ age; } ;
typedef  TYPE_1__ drm_r128_buf_priv_t ;

/* Variables and functions */

void r128_freelist_reset(struct drm_device *dev)
{
	struct drm_device_dma *dma = dev->dma;
	int i;

	for (i = 0; i < dma->buf_count; i++) {
		struct drm_buf *buf = dma->buflist[i];
		drm_r128_buf_priv_t *buf_priv = buf->dev_private;
		buf_priv->age = 0;
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
          int _len_dev0 = 1;
          struct drm_device * dev = (struct drm_device *) malloc(_len_dev0*sizeof(struct drm_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__dma0 = 1;
          dev[_i0].dma = (struct drm_device_dma *) malloc(_len_dev__i0__dma0*sizeof(struct drm_device_dma));
          for(int _j0 = 0; _j0 < _len_dev__i0__dma0; _j0++) {
            dev[_i0].dma->buf_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__dma_buflist0 = 1;
          dev[_i0].dma->buflist = (struct drm_buf **) malloc(_len_dev__i0__dma_buflist0*sizeof(struct drm_buf *));
          for(int _j0 = 0; _j0 < _len_dev__i0__dma_buflist0; _j0++) {
            int _len_dev__i0__dma_buflist1 = 1;
            dev[_i0].dma->buflist[_j0] = (struct drm_buf *) malloc(_len_dev__i0__dma_buflist1*sizeof(struct drm_buf));
            for(int _j1 = 0; _j1 < _len_dev__i0__dma_buflist1; _j1++) {
                int _len_dev__i0__dma_buflist__j0__dev_private0 = 1;
          dev[_i0].dma->buflist[_j0]->dev_private = (struct TYPE_2__ *) malloc(_len_dev__i0__dma_buflist__j0__dev_private0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__dma_buflist__j0__dev_private0; _j0++) {
            dev[_i0].dma->buflist[_j0]->dev_private->age = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          }
          r128_freelist_reset(dev);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].dma);
          }
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
