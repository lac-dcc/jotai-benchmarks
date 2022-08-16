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
struct scatterlist {int dummy; } ;
struct device {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void check_sg_segment(struct device *dev, struct scatterlist *sg)
{
#ifdef CONFIG_DMA_API_DEBUG_SG
	unsigned int max_seg = dma_get_max_seg_size(dev);
	u64 start, end, boundary = dma_get_seg_boundary(dev);

	/*
	 * Either the driver forgot to set dma_parms appropriately, or
	 * whoever generated the list forgot to check them.
	 */
	if (sg->length > max_seg)
		err_printk(dev, NULL, "DMA-API: mapping sg segment longer than device claims to support [len=%u] [max=%u]\n",
			   sg->length, max_seg);
	/*
	 * In some cases this could potentially be the DMA API
	 * implementation's fault, but it would usually imply that
	 * the scatterlist was built inappropriately to begin with.
	 */
	start = sg_dma_address(sg);
	end = start + sg_dma_len(sg) - 1;
	if ((start ^ end) & ~boundary)
		err_printk(dev, NULL, "DMA-API: mapping sg segment across boundary [start=0x%016llx] [end=0x%016llx] [boundary=0x%016llx]\n",
			   start, end, boundary);
#endif
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
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sg0 = 1;
          struct scatterlist * sg = (struct scatterlist *) malloc(_len_sg0*sizeof(struct scatterlist));
          for(int _i0 = 0; _i0 < _len_sg0; _i0++) {
            sg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          check_sg_segment(dev,sg);
          free(dev);
          free(sg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
