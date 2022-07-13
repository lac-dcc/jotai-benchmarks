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
       0            big-arr\n\
       1            big-arr-10x\n\
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
struct ni_private {unsigned int pwm_up_count; unsigned int clock_ns; unsigned int pwm_down_count; } ;
struct comedi_device {struct ni_private* private; } ;

/* Variables and functions */

__attribute__((used)) static int ni_get_pwm_config(struct comedi_device *dev, unsigned int *data)
{
	struct ni_private *devpriv = dev->private;

	data[1] = devpriv->pwm_up_count * devpriv->clock_ns;
	data[2] = devpriv->pwm_down_count * devpriv->clock_ns;
	return 3;
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

    // big-arr
    case 0:
    {
          int _len_dev0 = 65025;
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__private0 = 1;
          dev[_i0].private = (struct ni_private *) malloc(_len_dev__i0__private0*sizeof(struct ni_private));
          for(int _j0 = 0; _j0 < _len_dev__i0__private0; _j0++) {
            dev[_i0].private->pwm_up_count = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].private->clock_ns = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].private->pwm_down_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_data0 = 65025;
          unsigned int * data = (unsigned int *) malloc(_len_data0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ni_get_pwm_config(dev,data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].private);
          }
          free(dev);
          free(data);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_dev0 = 100;
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__private0 = 1;
          dev[_i0].private = (struct ni_private *) malloc(_len_dev__i0__private0*sizeof(struct ni_private));
          for(int _j0 = 0; _j0 < _len_dev__i0__private0; _j0++) {
            dev[_i0].private->pwm_up_count = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].private->clock_ns = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].private->pwm_down_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_data0 = 100;
          unsigned int * data = (unsigned int *) malloc(_len_data0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ni_get_pwm_config(dev,data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].private);
          }
          free(dev);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
