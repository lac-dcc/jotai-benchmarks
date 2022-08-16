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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int uint8_t ;
typedef  int uint16_t ;
struct TYPE_3__ {scalar_t__ dev_speed; } ;
typedef  TYPE_1__ dwc_otg_qh_t ;

/* Variables and functions */
 scalar_t__ DWC_OTG_EP_SPEED_HIGH ; 
 int MAX_DMA_DESC_NUM_GENERIC ; 
 int MAX_DMA_DESC_NUM_HS_ISOC ; 

__attribute__((used)) static uint8_t frame_to_desc_idx(dwc_otg_qh_t * qh, uint16_t frame_idx)
{
	if (qh->dev_speed == DWC_OTG_EP_SPEED_HIGH) {
		/*
		 * Descriptor set(8 descriptors) index
		 * which is 8-aligned.
		 */
		return (frame_idx & ((MAX_DMA_DESC_NUM_HS_ISOC / 8) - 1)) * 8;
	} else {
		return (frame_idx & (MAX_DMA_DESC_NUM_GENERIC - 1));
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
          int frame_idx = 100;
          int _len_qh0 = 1;
          struct TYPE_3__ * qh = (struct TYPE_3__ *) malloc(_len_qh0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_qh0; _i0++) {
            qh[_i0].dev_speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = frame_to_desc_idx(qh,frame_idx);
          printf("%d\n", benchRet); 
          free(qh);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int frame_idx = 10;
          int _len_qh0 = 100;
          struct TYPE_3__ * qh = (struct TYPE_3__ *) malloc(_len_qh0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_qh0; _i0++) {
            qh[_i0].dev_speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = frame_to_desc_idx(qh,frame_idx);
          printf("%d\n", benchRet); 
          free(qh);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
