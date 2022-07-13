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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ cstat; } ;
struct TYPE_4__ {TYPE_1__ cmd; } ;
struct irb {TYPE_2__ scsw; } ;
struct ccw_device {int dummy; } ;
typedef  enum io_status { ____Placeholder_io_status } io_status ;

/* Variables and functions */
 int IO_DONE ; 
 int IO_STATUS_ERROR ; 

__attribute__((used)) static enum io_status nop_filter(struct ccw_device *cdev, void *data,
				 struct irb *irb, enum io_status status)
{
	/* Only subchannel status might indicate a path error. */
	if (status == IO_STATUS_ERROR && irb->scsw.cmd.cstat == 0)
		return IO_DONE;
	return status;
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
          enum io_status status = 0;
          int _len_cdev0 = 1;
          struct ccw_device * cdev = (struct ccw_device *) malloc(_len_cdev0*sizeof(struct ccw_device));
          for(int _i0 = 0; _i0 < _len_cdev0; _i0++) {
            cdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int _len_irb0 = 1;
          struct irb * irb = (struct irb *) malloc(_len_irb0*sizeof(struct irb));
          for(int _i0 = 0; _i0 < _len_irb0; _i0++) {
            irb[_i0].scsw.cmd.cstat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum io_status benchRet = nop_filter(cdev,data,irb,status);
          printf("{{other_type}} %p\n", &benchRet); 
          free(cdev);
          free(irb);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum io_status status = 0;
          int _len_cdev0 = 65025;
          struct ccw_device * cdev = (struct ccw_device *) malloc(_len_cdev0*sizeof(struct ccw_device));
          for(int _i0 = 0; _i0 < _len_cdev0; _i0++) {
            cdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int _len_irb0 = 65025;
          struct irb * irb = (struct irb *) malloc(_len_irb0*sizeof(struct irb));
          for(int _i0 = 0; _i0 < _len_irb0; _i0++) {
            irb[_i0].scsw.cmd.cstat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum io_status benchRet = nop_filter(cdev,data,irb,status);
          printf("{{other_type}} %p\n", &benchRet); 
          free(cdev);
          free(irb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum io_status status = 0;
          int _len_cdev0 = 100;
          struct ccw_device * cdev = (struct ccw_device *) malloc(_len_cdev0*sizeof(struct ccw_device));
          for(int _i0 = 0; _i0 < _len_cdev0; _i0++) {
            cdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int _len_irb0 = 100;
          struct irb * irb = (struct irb *) malloc(_len_irb0*sizeof(struct irb));
          for(int _i0 = 0; _i0 < _len_irb0; _i0++) {
            irb[_i0].scsw.cmd.cstat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum io_status benchRet = nop_filter(cdev,data,irb,status);
          printf("{{other_type}} %p\n", &benchRet); 
          free(cdev);
          free(irb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
