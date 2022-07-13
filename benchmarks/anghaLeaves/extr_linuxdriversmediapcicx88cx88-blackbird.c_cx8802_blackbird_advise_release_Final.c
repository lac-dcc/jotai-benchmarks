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
struct cx88_core {int boardnr; } ;
struct cx8802_driver {struct cx88_core* core; } ;

/* Variables and functions */
#define  CX88_BOARD_HAUPPAUGE_HVR1300 128 
 int ENODEV ; 

__attribute__((used)) static int cx8802_blackbird_advise_release(struct cx8802_driver *drv)
{
	struct cx88_core *core = drv->core;
	int err = 0;

	switch (core->boardnr) {
	case CX88_BOARD_HAUPPAUGE_HVR1300:
		/* Exit leaving the cx23416 on the bus */
		break;
	default:
		err = -ENODEV;
	}
	return err;
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
          int _len_drv0 = 1;
          struct cx8802_driver * drv = (struct cx8802_driver *) malloc(_len_drv0*sizeof(struct cx8802_driver));
          for(int _i0 = 0; _i0 < _len_drv0; _i0++) {
              int _len_drv__i0__core0 = 1;
          drv[_i0].core = (struct cx88_core *) malloc(_len_drv__i0__core0*sizeof(struct cx88_core));
          for(int _j0 = 0; _j0 < _len_drv__i0__core0; _j0++) {
            drv[_i0].core->boardnr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = cx8802_blackbird_advise_release(drv);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_drv0; _aux++) {
          free(drv[_aux].core);
          }
          free(drv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_drv0 = 65025;
          struct cx8802_driver * drv = (struct cx8802_driver *) malloc(_len_drv0*sizeof(struct cx8802_driver));
          for(int _i0 = 0; _i0 < _len_drv0; _i0++) {
              int _len_drv__i0__core0 = 1;
          drv[_i0].core = (struct cx88_core *) malloc(_len_drv__i0__core0*sizeof(struct cx88_core));
          for(int _j0 = 0; _j0 < _len_drv__i0__core0; _j0++) {
            drv[_i0].core->boardnr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = cx8802_blackbird_advise_release(drv);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_drv0; _aux++) {
          free(drv[_aux].core);
          }
          free(drv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_drv0 = 100;
          struct cx8802_driver * drv = (struct cx8802_driver *) malloc(_len_drv0*sizeof(struct cx8802_driver));
          for(int _i0 = 0; _i0 < _len_drv0; _i0++) {
              int _len_drv__i0__core0 = 1;
          drv[_i0].core = (struct cx88_core *) malloc(_len_drv__i0__core0*sizeof(struct cx88_core));
          for(int _j0 = 0; _j0 < _len_drv__i0__core0; _j0++) {
            drv[_i0].core->boardnr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = cx8802_blackbird_advise_release(drv);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_drv0; _aux++) {
          free(drv[_aux].core);
          }
          free(drv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
