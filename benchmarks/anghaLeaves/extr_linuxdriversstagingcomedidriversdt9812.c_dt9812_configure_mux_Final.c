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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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

/* Type definitions */
struct dt9812_rmw_byte {int and_mask; int or_value; int /*<<< orphan*/  address; } ;
struct dt9812_private {scalar_t__ device; } ;
struct comedi_device {struct dt9812_private* private; } ;

/* Variables and functions */
 scalar_t__ DT9812_DEVID_DT9812_10 ; 
 int /*<<< orphan*/  F020_SFR_AMX0SL ; 
 int /*<<< orphan*/  F020_SFR_P1 ; 

__attribute__((used)) static void dt9812_configure_mux(struct comedi_device *dev,
				 struct dt9812_rmw_byte *rmw, int channel)
{
	struct dt9812_private *devpriv = dev->private;

	if (devpriv->device == DT9812_DEVID_DT9812_10) {
		/* In the DT9812/10V MUX is selected by P1.5-7 */
		rmw->address = F020_SFR_P1;
		rmw->and_mask = 0xe0;
		rmw->or_value = channel << 5;
	} else {
		/* In the DT9812/2.5V, internal mux is selected by bits 0:2 */
		rmw->address = F020_SFR_AMX0SL;
		rmw->and_mask = 0xff;
		rmw->or_value = channel & 0x07;
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
          int channel = 100;
          int _len_dev0 = 1;
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__private0 = 1;
          dev[_i0].private = (struct dt9812_private *) malloc(_len_dev__i0__private0*sizeof(struct dt9812_private));
          for(int _j0 = 0; _j0 < _len_dev__i0__private0; _j0++) {
            dev[_i0].private->device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rmw0 = 1;
          struct dt9812_rmw_byte * rmw = (struct dt9812_rmw_byte *) malloc(_len_rmw0*sizeof(struct dt9812_rmw_byte));
          for(int _i0 = 0; _i0 < _len_rmw0; _i0++) {
            rmw[_i0].and_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        rmw[_i0].or_value = ((-2 * (next_i()%2)) + 1) * next_i();
        rmw[_i0].address = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dt9812_configure_mux(dev,rmw,channel);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].private);
          }
          free(dev);
          free(rmw);
        
        break;
    }
    // big-arr
    case 1:
    {
          int channel = 255;
          int _len_dev0 = 65025;
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__private0 = 1;
          dev[_i0].private = (struct dt9812_private *) malloc(_len_dev__i0__private0*sizeof(struct dt9812_private));
          for(int _j0 = 0; _j0 < _len_dev__i0__private0; _j0++) {
            dev[_i0].private->device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rmw0 = 65025;
          struct dt9812_rmw_byte * rmw = (struct dt9812_rmw_byte *) malloc(_len_rmw0*sizeof(struct dt9812_rmw_byte));
          for(int _i0 = 0; _i0 < _len_rmw0; _i0++) {
            rmw[_i0].and_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        rmw[_i0].or_value = ((-2 * (next_i()%2)) + 1) * next_i();
        rmw[_i0].address = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dt9812_configure_mux(dev,rmw,channel);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].private);
          }
          free(dev);
          free(rmw);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int channel = 10;
          int _len_dev0 = 100;
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__private0 = 1;
          dev[_i0].private = (struct dt9812_private *) malloc(_len_dev__i0__private0*sizeof(struct dt9812_private));
          for(int _j0 = 0; _j0 < _len_dev__i0__private0; _j0++) {
            dev[_i0].private->device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rmw0 = 100;
          struct dt9812_rmw_byte * rmw = (struct dt9812_rmw_byte *) malloc(_len_rmw0*sizeof(struct dt9812_rmw_byte));
          for(int _i0 = 0; _i0 < _len_rmw0; _i0++) {
            rmw[_i0].and_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        rmw[_i0].or_value = ((-2 * (next_i()%2)) + 1) * next_i();
        rmw[_i0].address = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dt9812_configure_mux(dev,rmw,channel);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].private);
          }
          free(dev);
          free(rmw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
