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
       2            empty\n\
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
struct dio200_board {scalar_t__ is_pcie; } ;
struct comedi_subdevice {struct comedi_8254* private; } ;
struct comedi_device {unsigned int mmio; unsigned int iobase; struct dio200_board* board_ptr; } ;
struct comedi_8254 {unsigned int mmio; unsigned int iobase; } ;

/* Variables and functions */

__attribute__((used)) static unsigned int dio200_subdev_8254_offset(struct comedi_device *dev,
					      struct comedi_subdevice *s)
{
	const struct dio200_board *board = dev->board_ptr;
	struct comedi_8254 *i8254 = s->private;
	unsigned int offset;

	/* get the offset that was passed to comedi_8254_*_init() */
	if (dev->mmio)
		offset = i8254->mmio - dev->mmio;
	else
		offset = i8254->iobase - dev->iobase;

	/* remove the shift that was added for PCIe boards */
	if (board->is_pcie)
		offset >>= 3;

	/* this offset now works for the dio200_{read,write} helpers */
	return offset;
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
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 28
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int _len_dev0 = 65025;
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].mmio = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].iobase = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__board_ptr0 = 1;
          dev[_i0].board_ptr = (struct dio200_board *) malloc(_len_dev__i0__board_ptr0*sizeof(struct dio200_board));
          for(int _j0 = 0; _j0 < _len_dev__i0__board_ptr0; _j0++) {
              dev[_i0].board_ptr->is_pcie = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_s0 = 65025;
          struct comedi_subdevice * s = (struct comedi_subdevice *) malloc(_len_s0*sizeof(struct comedi_subdevice));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__private0 = 1;
          s[_i0].private = (struct comedi_8254 *) malloc(_len_s__i0__private0*sizeof(struct comedi_8254));
          for(int _j0 = 0; _j0 < _len_s__i0__private0; _j0++) {
              s[_i0].private->mmio = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].private->iobase = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned int benchRet = dio200_subdev_8254_offset(dev,s);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].board_ptr);
          }
          free(dev);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].private);
          }
          free(s);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 28
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int _len_dev0 = 100;
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].mmio = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].iobase = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__board_ptr0 = 1;
          dev[_i0].board_ptr = (struct dio200_board *) malloc(_len_dev__i0__board_ptr0*sizeof(struct dio200_board));
          for(int _j0 = 0; _j0 < _len_dev__i0__board_ptr0; _j0++) {
              dev[_i0].board_ptr->is_pcie = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_s0 = 100;
          struct comedi_subdevice * s = (struct comedi_subdevice *) malloc(_len_s0*sizeof(struct comedi_subdevice));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__private0 = 1;
          s[_i0].private = (struct comedi_8254 *) malloc(_len_s__i0__private0*sizeof(struct comedi_8254));
          for(int _j0 = 0; _j0 < _len_s__i0__private0; _j0++) {
              s[_i0].private->mmio = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].private->iobase = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned int benchRet = dio200_subdev_8254_offset(dev,s);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].board_ptr);
          }
          free(dev);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].private);
          }
          free(s);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 28
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int _len_dev0 = 1;
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].mmio = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].iobase = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__board_ptr0 = 1;
          dev[_i0].board_ptr = (struct dio200_board *) malloc(_len_dev__i0__board_ptr0*sizeof(struct dio200_board));
          for(int _j0 = 0; _j0 < _len_dev__i0__board_ptr0; _j0++) {
              dev[_i0].board_ptr->is_pcie = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_s0 = 1;
          struct comedi_subdevice * s = (struct comedi_subdevice *) malloc(_len_s0*sizeof(struct comedi_subdevice));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__private0 = 1;
          s[_i0].private = (struct comedi_8254 *) malloc(_len_s__i0__private0*sizeof(struct comedi_8254));
          for(int _j0 = 0; _j0 < _len_s__i0__private0; _j0++) {
              s[_i0].private->mmio = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].private->iobase = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned int benchRet = dio200_subdev_8254_offset(dev,s);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].board_ptr);
          }
          free(dev);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].private);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
