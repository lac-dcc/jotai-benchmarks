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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  void* u32 ;
struct dwc2_hcd_urb {TYPE_1__* iso_descs; } ;
struct TYPE_2__ {void* length; void* offset; } ;

/* Variables and functions */

__attribute__((used)) static inline void dwc2_hcd_urb_set_iso_desc_params(
		struct dwc2_hcd_urb *dwc2_urb, int desc_num, u32 offset,
		u32 length)
{
	dwc2_urb->iso_descs[desc_num].offset = offset;
	dwc2_urb->iso_descs[desc_num].length = length;
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

    // big-arr-10x
    case 0:
    {
          int desc_num = 10;
          int _len_dwc2_urb0 = 100;
          struct dwc2_hcd_urb * dwc2_urb = (struct dwc2_hcd_urb *) malloc(_len_dwc2_urb0*sizeof(struct dwc2_hcd_urb));
          for(int _i0 = 0; _i0 < _len_dwc2_urb0; _i0++) {
              int _len_dwc2_urb__i0__iso_descs0 = 1;
          dwc2_urb[_i0].iso_descs = (struct TYPE_2__ *) malloc(_len_dwc2_urb__i0__iso_descs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dwc2_urb__i0__iso_descs0; _j0++) {
              }
          }
          void * offset;
          void * length;
          dwc2_hcd_urb_set_iso_desc_params(dwc2_urb,desc_num,offset,length);
          for(int _aux = 0; _aux < _len_dwc2_urb0; _aux++) {
          free(dwc2_urb[_aux].iso_descs);
          }
          free(dwc2_urb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
