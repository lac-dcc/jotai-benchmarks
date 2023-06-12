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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
struct comedi_device {TYPE_1__* read_subdev; } ;
struct TYPE_2__ {int maxdata; } ;

/* Variables and functions */

__attribute__((used)) static unsigned short fake_flatline(struct comedi_device *dev,
				    unsigned int range_index,
				    unsigned int current_time)
{
	return dev->read_subdev->maxdata / 2;
}

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
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          unsigned int range_index = 100;
        
          unsigned int current_time = 100;
        
          int _len_dev0 = 1;
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__read_subdev0 = 1;
          dev[_i0].read_subdev = (struct TYPE_2__ *) malloc(_len_dev__i0__read_subdev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__read_subdev0; _j0++) {
              dev[_i0].read_subdev->maxdata = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned short benchRet = fake_flatline(dev,range_index,current_time);
          printf("%hu\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].read_subdev);
          }
          free(dev);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          unsigned int range_index = 255;
        
          unsigned int current_time = 255;
        
          int _len_dev0 = 65025;
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__read_subdev0 = 1;
          dev[_i0].read_subdev = (struct TYPE_2__ *) malloc(_len_dev__i0__read_subdev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__read_subdev0; _j0++) {
              dev[_i0].read_subdev->maxdata = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned short benchRet = fake_flatline(dev,range_index,current_time);
          printf("%hu\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].read_subdev);
          }
          free(dev);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          unsigned int range_index = 10;
        
          unsigned int current_time = 10;
        
          int _len_dev0 = 100;
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__read_subdev0 = 1;
          dev[_i0].read_subdev = (struct TYPE_2__ *) malloc(_len_dev__i0__read_subdev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__read_subdev0; _j0++) {
              dev[_i0].read_subdev->maxdata = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned short benchRet = fake_flatline(dev,range_index,current_time);
          printf("%hu\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].read_subdev);
          }
          free(dev);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          unsigned int range_index = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned int current_time = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dev0 = 1;
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__read_subdev0 = 1;
          dev[_i0].read_subdev = (struct TYPE_2__ *) malloc(_len_dev__i0__read_subdev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__read_subdev0; _j0++) {
              dev[_i0].read_subdev->maxdata = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned short benchRet = fake_flatline(dev,range_index,current_time);
          printf("%hu\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].read_subdev);
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
