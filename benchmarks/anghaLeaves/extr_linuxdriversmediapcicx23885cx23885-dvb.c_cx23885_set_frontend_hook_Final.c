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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int /*<<< orphan*/  set_frontend; } ;
struct dvb_frontend {TYPE_1__ ops; } ;
struct cx23885_tsport {int /*<<< orphan*/  set_frontend; } ;

/* Variables and functions */
 int /*<<< orphan*/  cx23885_dvb_set_frontend ; 

__attribute__((used)) static void cx23885_set_frontend_hook(struct cx23885_tsport *port,
				     struct dvb_frontend *fe)
{
	port->set_frontend = fe->ops.set_frontend;
	fe->ops.set_frontend = cx23885_dvb_set_frontend;
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
          int _len_port0 = 1;
          struct cx23885_tsport * port = (struct cx23885_tsport *) malloc(_len_port0*sizeof(struct cx23885_tsport));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].set_frontend = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fe0 = 1;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
            fe[_i0].ops.set_frontend = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cx23885_set_frontend_hook(port,fe);
          free(port);
          free(fe);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_port0 = 65025;
          struct cx23885_tsport * port = (struct cx23885_tsport *) malloc(_len_port0*sizeof(struct cx23885_tsport));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].set_frontend = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fe0 = 65025;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
            fe[_i0].ops.set_frontend = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cx23885_set_frontend_hook(port,fe);
          free(port);
          free(fe);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_port0 = 100;
          struct cx23885_tsport * port = (struct cx23885_tsport *) malloc(_len_port0*sizeof(struct cx23885_tsport));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].set_frontend = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fe0 = 100;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
            fe[_i0].ops.set_frontend = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cx23885_set_frontend_hook(port,fe);
          free(port);
          free(fe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
