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
struct mvpp2_cls_flow_entry {int /*<<< orphan*/ * data; } ;

/* Variables and functions */
 int /*<<< orphan*/  MVPP2_CLS_FLOW_TBL0_PORT_ID_SEL ; 

__attribute__((used)) static void mvpp2_cls_flow_port_id_sel(struct mvpp2_cls_flow_entry *fe,
				       bool from_packet)
{
	if (from_packet)
		fe->data[0] |= MVPP2_CLS_FLOW_TBL0_PORT_ID_SEL;
	else
		fe->data[0] &= ~MVPP2_CLS_FLOW_TBL0_PORT_ID_SEL;
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
          int from_packet = 100;
          int _len_fe0 = 1;
          struct mvpp2_cls_flow_entry * fe = (struct mvpp2_cls_flow_entry *) malloc(_len_fe0*sizeof(struct mvpp2_cls_flow_entry));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              int _len_fe__i0__data0 = 1;
          fe[_i0].data = (int *) malloc(_len_fe__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fe__i0__data0; _j0++) {
            fe[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mvpp2_cls_flow_port_id_sel(fe,from_packet);
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].data);
          }
          free(fe);
        
        break;
    }
    // big-arr
    case 1:
    {
          int from_packet = 255;
          int _len_fe0 = 65025;
          struct mvpp2_cls_flow_entry * fe = (struct mvpp2_cls_flow_entry *) malloc(_len_fe0*sizeof(struct mvpp2_cls_flow_entry));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              int _len_fe__i0__data0 = 1;
          fe[_i0].data = (int *) malloc(_len_fe__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fe__i0__data0; _j0++) {
            fe[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mvpp2_cls_flow_port_id_sel(fe,from_packet);
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].data);
          }
          free(fe);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int from_packet = 10;
          int _len_fe0 = 100;
          struct mvpp2_cls_flow_entry * fe = (struct mvpp2_cls_flow_entry *) malloc(_len_fe0*sizeof(struct mvpp2_cls_flow_entry));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
              int _len_fe__i0__data0 = 1;
          fe[_i0].data = (int *) malloc(_len_fe__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fe__i0__data0; _j0++) {
            fe[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mvpp2_cls_flow_port_id_sel(fe,from_packet);
          for(int _aux = 0; _aux < _len_fe0; _aux++) {
          free(fe[_aux].data);
          }
          free(fe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
