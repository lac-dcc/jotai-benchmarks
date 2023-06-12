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
       0            big-arr\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {unsigned int divisor; unsigned int chanspec; } ;
struct pcidas64_private {TYPE_1__ ext_clock; } ;
struct comedi_device {struct pcidas64_private* private; } ;

/* Variables and functions */
#define  COMEDI_EV_SCAN_BEGIN 128 
 int EAGAIN ; 
 int EINVAL ; 

__attribute__((used)) static int ai_config_master_clock_4020(struct comedi_device *dev,
				       unsigned int *data)
{
	struct pcidas64_private *devpriv = dev->private;
	unsigned int divisor = data[4];
	int retval = 0;

	if (divisor < 2) {
		divisor = 2;
		retval = -EAGAIN;
	}

	switch (data[1]) {
	case COMEDI_EV_SCAN_BEGIN:
		devpriv->ext_clock.divisor = divisor;
		devpriv->ext_clock.chanspec = data[2];
		break;
	default:
		return -EINVAL;
	}

	data[4] = divisor;

	return retval ? retval : 5;
}

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
          dev[_i0].private = (struct pcidas64_private *) malloc(_len_dev__i0__private0*sizeof(struct pcidas64_private));
          for(int _j0 = 0; _j0 < _len_dev__i0__private0; _j0++) {
              dev[_i0].private->ext_clock.divisor = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].private->ext_clock.chanspec = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          int _len_data0 = 65025;
          unsigned int * data = (unsigned int *) malloc(_len_data0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = ai_config_master_clock_4020(dev,data);
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
          dev[_i0].private = (struct pcidas64_private *) malloc(_len_dev__i0__private0*sizeof(struct pcidas64_private));
          for(int _j0 = 0; _j0 < _len_dev__i0__private0; _j0++) {
              dev[_i0].private->ext_clock.divisor = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].private->ext_clock.chanspec = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          int _len_data0 = 100;
          unsigned int * data = (unsigned int *) malloc(_len_data0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = ai_config_master_clock_4020(dev,data);
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
