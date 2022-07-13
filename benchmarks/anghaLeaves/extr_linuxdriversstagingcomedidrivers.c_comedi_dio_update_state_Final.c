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
struct comedi_subdevice {int n_chan; unsigned int state; } ;

/* Variables and functions */

unsigned int comedi_dio_update_state(struct comedi_subdevice *s,
				     unsigned int *data)
{
	unsigned int chanmask = (s->n_chan < 32) ? ((1 << s->n_chan) - 1)
						 : 0xffffffff;
	unsigned int mask = data[0] & chanmask;
	unsigned int bits = data[1];

	if (mask) {
		s->state &= ~mask;
		s->state |= (bits & mask);
	}

	return mask;
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
          int _len_s0 = 65025;
          struct comedi_subdevice * s = (struct comedi_subdevice *) malloc(_len_s0*sizeof(struct comedi_subdevice));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].n_chan = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 65025;
          unsigned int * data = (unsigned int *) malloc(_len_data0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = comedi_dio_update_state(s,data);
          printf("%u\n", benchRet); 
          free(s);
          free(data);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_s0 = 100;
          struct comedi_subdevice * s = (struct comedi_subdevice *) malloc(_len_s0*sizeof(struct comedi_subdevice));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].n_chan = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 100;
          unsigned int * data = (unsigned int *) malloc(_len_data0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = comedi_dio_update_state(s,data);
          printf("%u\n", benchRet); 
          free(s);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
