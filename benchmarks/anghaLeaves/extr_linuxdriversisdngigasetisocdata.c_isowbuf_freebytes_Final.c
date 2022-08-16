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
struct isowbuf_t {int read; int write; } ;

/* Variables and functions */
 int BAS_OUTBUFPAD ; 
 int BAS_OUTBUFSIZE ; 

__attribute__((used)) static inline int isowbuf_freebytes(struct isowbuf_t *iwb)
{
	int read, write, freebytes;

	read = iwb->read;
	write = iwb->write;
	freebytes = read - write;
	if (freebytes > 0) {
		/* no wraparound: need padding space within regular area */
		return freebytes - BAS_OUTBUFPAD;
	} else if (read < BAS_OUTBUFPAD) {
		/* wraparound: can use space up to end of regular area */
		return BAS_OUTBUFSIZE - write;
	} else {
		/* following the wraparound yields more space */
		return freebytes + BAS_OUTBUFSIZE - BAS_OUTBUFPAD;
	}
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
          int _len_iwb0 = 1;
          struct isowbuf_t * iwb = (struct isowbuf_t *) malloc(_len_iwb0*sizeof(struct isowbuf_t));
          for(int _i0 = 0; _i0 < _len_iwb0; _i0++) {
            iwb[_i0].read = ((-2 * (next_i()%2)) + 1) * next_i();
        iwb[_i0].write = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = isowbuf_freebytes(iwb);
          printf("%d\n", benchRet); 
          free(iwb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
