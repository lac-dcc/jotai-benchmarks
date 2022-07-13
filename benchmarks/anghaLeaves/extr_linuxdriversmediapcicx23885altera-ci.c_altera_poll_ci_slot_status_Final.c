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
struct dvb_ca_en50221 {struct altera_ci_state* data; } ;
struct altera_ci_state {int status; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int altera_poll_ci_slot_status(struct dvb_ca_en50221 *en50221,
				      int slot, int open)
{
	struct altera_ci_state *state = en50221->data;

	if (0 != slot)
		return -EINVAL;

	return state->status;
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
          int slot = 100;
          int open = 100;
          int _len_en502210 = 1;
          struct dvb_ca_en50221 * en50221 = (struct dvb_ca_en50221 *) malloc(_len_en502210*sizeof(struct dvb_ca_en50221));
          for(int _i0 = 0; _i0 < _len_en502210; _i0++) {
              int _len_en50221__i0__data0 = 1;
          en50221[_i0].data = (struct altera_ci_state *) malloc(_len_en50221__i0__data0*sizeof(struct altera_ci_state));
          for(int _j0 = 0; _j0 < _len_en50221__i0__data0; _j0++) {
            en50221[_i0].data->status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = altera_poll_ci_slot_status(en50221,slot,open);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_en502210; _aux++) {
          free(en50221[_aux].data);
          }
          free(en50221);
        
        break;
    }
    // big-arr
    case 1:
    {
          int slot = 255;
          int open = 255;
          int _len_en502210 = 65025;
          struct dvb_ca_en50221 * en50221 = (struct dvb_ca_en50221 *) malloc(_len_en502210*sizeof(struct dvb_ca_en50221));
          for(int _i0 = 0; _i0 < _len_en502210; _i0++) {
              int _len_en50221__i0__data0 = 1;
          en50221[_i0].data = (struct altera_ci_state *) malloc(_len_en50221__i0__data0*sizeof(struct altera_ci_state));
          for(int _j0 = 0; _j0 < _len_en50221__i0__data0; _j0++) {
            en50221[_i0].data->status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = altera_poll_ci_slot_status(en50221,slot,open);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_en502210; _aux++) {
          free(en50221[_aux].data);
          }
          free(en50221);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int slot = 10;
          int open = 10;
          int _len_en502210 = 100;
          struct dvb_ca_en50221 * en50221 = (struct dvb_ca_en50221 *) malloc(_len_en502210*sizeof(struct dvb_ca_en50221));
          for(int _i0 = 0; _i0 < _len_en502210; _i0++) {
              int _len_en50221__i0__data0 = 1;
          en50221[_i0].data = (struct altera_ci_state *) malloc(_len_en50221__i0__data0*sizeof(struct altera_ci_state));
          for(int _j0 = 0; _j0 < _len_en50221__i0__data0; _j0++) {
            en50221[_i0].data->status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = altera_poll_ci_slot_status(en50221,slot,open);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_en502210; _aux++) {
          free(en50221[_aux].data);
          }
          free(en50221);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
